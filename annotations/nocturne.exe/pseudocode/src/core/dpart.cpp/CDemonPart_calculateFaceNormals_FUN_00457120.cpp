// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120
// Address: 00457120
// Address Range: [[00457120, 004571e8]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120(int param_1)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120(int param_1)

{
  int iVar1;
  int iVar2;
  byte auStack_48 [4];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar1 = 0;
    do {
      uStack_44 = 3;
      uStack_40 = *(uint *)(iVar1 + *(int *)(param_1 + 0x34));
      uStack_3c = *(uint *)(iVar1 + 4 + *(int *)(param_1 + 0x34));
      uStack_38 = *(uint *)(iVar1 + 8 + *(int *)(param_1 + 0x34));
      uStack_34 = *(uint *)(iVar1 + 0xc + *(int *)(param_1 + 0x34));
      uStack_30 = *(uint *)(iVar1 + 0x10 + *(int *)(param_1 + 0x34));
      uStack_24 = *(uint *)(iVar1 + 0x14 + *(int *)(param_1 + 0x34));
      uStack_18 = *(uint *)(iVar1 + 0x18 + *(int *)(param_1 + 0x34));
      engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920
                (*(uint *)(param_1 + 0x2c),auStack_48);
      *(uint *)(*(int *)(param_1 + 0x34) + iVar1) = uStack_40;
      *(uint *)(*(int *)(param_1 + 0x34) + iVar1 + 4) = uStack_3c;
      *(uint *)(*(int *)(param_1 + 0x34) + iVar1 + 8) = uStack_38;
      *(uint *)(*(int *)(param_1 + 0x34) + iVar1 + 0xc) = uStack_34;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return;
}
