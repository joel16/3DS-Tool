#ifndef AM_H
#define AM_H

#include <3ds.h>

Result amGetServiceHandle(void);
Result amCloseServiceHandle(void);
Result AM_DeleteAllTemporaryTitles(void);
Result AM_DeleteAllExpiredTitles(FS_MediaType mediatype);
Result AM_DeleteAllTwlTitles(void);

#endif