#ifndef CONFIG_SITE_H
#define CONFIG_SITE_H
#define PJSUA_MAX_ACC (2048)
#define PJ_IOQUEUE_MAX_HANDLES (4000)
#define PJSUA_MAX_CALLS (2045)
#define PJSIP_MAX_DIALOG_COUNT (2048-1)
#define PJ_OVERRIDE__FD_SETSIZE (4096) //see pj/compat/socket.h patch

#endif
