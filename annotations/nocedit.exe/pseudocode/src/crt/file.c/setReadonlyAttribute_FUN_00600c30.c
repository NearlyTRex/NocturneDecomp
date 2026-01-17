// Name: crt_file.c_setReadonlyAttribute_FUN_00600c30
// Address: 00600c30
// Address Range: [[00600c30, 00600c72]]
// Convention: __cdecl
// Signature: DWORD crt_file.c_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)

#include "nocturne.h"

DWORD __cdecl crt_file_c_setReadonlyAttribute_FUN_00600c30(char *filename,DWORD file_attributes)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = crt_file_c_get_file_attributes_FUN_006082e0(filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    return DVar1;
  }
  DVar1 = DVar1 & 0xfffffffe;
  if ((file_attributes & 0x80) == 0) {
    DVar1 = DVar1 | 1;
  }
  BVar2 = (*g_SetFileAttributesAFunc)(filename,DVar1);
  if (BVar2 == 0) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    return DVar1;
  }
  return 0;
}
