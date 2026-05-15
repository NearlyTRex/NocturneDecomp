// Name: engine_dosio.cpp_setReadonlyAttribute_FUN_00600c30
// Address: 00600c30
// Address Range: [[00600c30, 00600c72]]
// Convention: __cdecl
// Signature: DWORD __cdecl engine_dosio_cpp_setReadonlyAttribute_FUN_00600c30(char *filename,DWORD file_attributes)

#include "nocturne.h"

DWORD __cdecl engine_dosio_cpp_setReadonlyAttribute_FUN_00600c30(char *filename,DWORD file_attributes)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = __getfileattr(filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = __set_errno();
    return DVar1;
  }
  DVar1 = DVar1 & 0xfffffffe;
  if ((file_attributes & 0x80) == 0) {
    DVar1 = DVar1 | 1;
  }
  BVar2 = (*g_SetFileAttributesAFunc)(filename,DVar1);
  if (BVar2 == 0) {
    DVar1 = __set_errno();
    return DVar1;
  }
  return 0;
}
