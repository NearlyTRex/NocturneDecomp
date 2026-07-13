// Name: __lock_file
// Address: 10005a30
// Address Range: [[10005a30, 10005a65]]
// Convention: __cdecl
// Signature: void __cdecl __lock_file(FILE *_File)

#include "nocturne.h"

/* Library Function - Multiple Matches With Different Base Names
void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0x10017087 < _File) && (_File < (FILE *)0x100172e9)) {
    __lock(((int)&_File[-0x800b85]._bufsiz >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}
