
#ifndef _NGX_HTTP_JS_GLUE_H_INCLUDED_
#define _NGX_HTTP_JS_GLUE_H_INCLUDED_

extern char *
ngx_http_js__glue__set_callback(ngx_conf_t *cf, ngx_command_t *cmd, ngx_http_js_loc_conf_t *jslcf);

extern char *
ngx_http_js__glue__set_filter(ngx_conf_t *cf, ngx_command_t *cmd, ngx_http_js_loc_conf_t *jslcf);

extern ngx_int_t
ngx_http_js__glue__call_handler(ngx_http_request_t *r);

extern ngx_int_t
ngx_http_js__glue__call_filter(ngx_http_request_t *r, ngx_chain_t *in);

extern char *
ngx_http_js__glue__init_interpreter(ngx_conf_t *cf, ngx_http_js_main_conf_t *jsmcf);



#endif
