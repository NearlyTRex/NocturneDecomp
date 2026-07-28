// Name: FUN_0056deac
// Address: 0056deac
// Address Range: [[0056deac, 0056df0f]]
// Convention: unknown
// Signature: int FUN_0056deac(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056deac(int param_1)

{
  uint *puVar1;
  _FILE *file_handle;
  uint *puVar2;
  int close_flags;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = _DAT_02de4e20;
joined_r0x0056ded3:
  if (puVar2 == (uint *)0x0) {
    return iVar3;
  }
  puVar1 = (uint *)*puVar2;
  file_handle = (_FILE *)puVar2[1];
  close_flags = 1;
  puVar2 = puVar1;
  if (((file_handle->_flag & 0x4000) == 0) && ((file_handle->_flag & 0x800) == 0))
  goto code_r0x0056deec;
  goto LAB_0056def9;
code_r0x0056deec:
  if ((_FILE *)(&DAT_005c1894 + param_1 * 0x1a) <= file_handle) {
    if (file_handle < (_FILE *)0x5c18e2) {
      close_flags = 0;
    }
LAB_0056def9:
    iVar3 = iVar3 + 1;
    __CClose(file_handle,close_flags);
  }
  goto joined_r0x0056ded3;
}
