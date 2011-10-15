#ifndef GIOP_BASICS_H
#define GIOP_BASICS_H 1

#include <linc/linc.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef MATECORBA2_INTERNAL_API

typedef struct _GIOPRecvBuffer GIOPRecvBuffer;
typedef struct _GIOPSendBuffer GIOPSendBuffer;
typedef struct _GIOPConnection GIOPConnection;

typedef enum {
  GIOP_1_0,
  GIOP_1_1,
  GIOP_1_2,
  GIOP_LATEST = GIOP_1_2,
  GIOP_NUM_VERSIONS
} GIOPVersion;

#endif /* MATECORBA2_INTERNAL_API */

G_END_DECLS

#endif
