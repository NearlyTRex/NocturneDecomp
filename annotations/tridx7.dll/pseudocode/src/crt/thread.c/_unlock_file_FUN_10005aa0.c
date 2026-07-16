// Name: crt_thread.c__unlock_file_FUN_10005aa0
// Address: 10005aa0
// Address Range: [[10005aa0, 10005ad5]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__unlock_file_FUN_10005aa0(_FILE *file)

#include "nocturne.h"

void __cdecl _unlock_file(_FILE *file)

{
  if (((_FILE *)0x10017087 < file) && (file < (_FILE *)0x100172e9)) {
    _unlock(((int)&file[-0x800b85]._bufsiz >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(file + 1));
  return;
}
