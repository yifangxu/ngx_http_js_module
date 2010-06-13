#ifndef _NGX_HTTP_JSAPI_H_INCLUDED_
#define _NGX_HTTP_JSAPI_H_INCLUDED_

#ifndef XP_UNIX
#define XP_UNIX
#endif

#if   (NGX_HTTP_JS_HEADERS == 1)
#include <mozjs/jsapi.h>
#elif (NGX_HTTP_JS_HEADERS == 2)
#include <jsapi.h>
#else
#include <js/jsapi.h>
#endif

#ifndef JS_FS
#define JS_FS(name,call,nargs,flags,extra)                                    \
    {name, call, nargs, flags, extra}
#endif

#ifndef JS_FS_END
#define JS_FS_END JS_FS(NULL,NULL,0,0,0)
#endif

#endif /* _NGX_HTTP_JSAPI_H_INCLUDED_ */
