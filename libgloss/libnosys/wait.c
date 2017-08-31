/*
 * Stub version of wait.
 */

#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#undef errno
extern int errno;
#include "warning.h"

int
_WEAK_DEFUN (_wait, (status),
        int  *status)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(_wait)
