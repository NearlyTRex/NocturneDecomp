// Name: __unlock_file
// Address: 10005aa0
// Address Range: [[10005aa0, 10005ad5]]
// Convention: __cdecl
// Signature: void __cdecl __unlock_file(FILE *_File)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x10017087 < _File) && (_File < (FILE *)0x100172e9)) {
    FUN_10005a10(((int)&_File[-0x800b85]._bufsiz >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}
