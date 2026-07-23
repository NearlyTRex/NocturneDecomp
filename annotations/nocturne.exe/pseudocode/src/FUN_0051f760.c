// Name: FUN_0051f760
// Address: 0051f760
// Address Range: [[0051f760, 0051f7f6]]
// Convention: unknown
// Signature: void FUN_0051f760(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f760(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < _DAT_02737ef4) {
    iVar5 = 0x2737ef8;
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50(iVar5);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x2937c;
      iVar4 = iVar4 + iVar1;
    } while (iVar3 < _DAT_02737ef4);
  }
  iVar3 = 0;
  iVar5 = 0;
  if (0 < _DAT_0268cef0) {
    iVar1 = 0x268cef4;
    do {
      iVar2 = core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(iVar1);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + iVar2;
      iVar1 = iVar1 + 0x2ac0;
    } while (iVar3 < _DAT_0268cef0);
  }
  _sprintf(param_1,"%d skeletons, %d bytes, %d models, %d bytes",_DAT_02737ef4,iVar4,_DAT_0268cef0,iVar5);
  return;
}
