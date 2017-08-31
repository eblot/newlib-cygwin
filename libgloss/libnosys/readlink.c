/*
 * Stub version of readlink.
 */

#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"

int
_WEAK_DEFUN (_readlink, (path, buf, bufsize),
        const char *path _AND
        char *buf _AND
        size_t bufsize)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(_readlink)
