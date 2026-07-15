// Name: crt_thread.c__lock_file_FUN_10005a30
// Address: 10005a30
// Address Range: [[10005a30, 10005a65]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__lock_file_FUN_10005a30(FILE *file)

#include "nocturne.h"

void __cdecl _lock_file(FILE *file)

{
  if (((FILE *)0x10017087 < file) && (file < (FILE *)0x100172e9)) {
    _lock(((int)&file[-0x800b85]._bufsiz >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(file + 1));
  return;
}
