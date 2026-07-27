// Name: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0
// Address: 004df9e0
// Address Range: [[004df9e0, 004dfb9e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0(int *param_1,int param_2,ushort *param_3,int param_4,int *param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0(int *param_1,int param_2,ushort *param_3,int param_4,int *param_5,int param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x191;
    core_main_c_FUN_004c8440("CMorphModel::setFaceList - invalid part index");
  }
  param_6 = param_6 + param_1[param_2 * 4 + 4];
  if (param_1[param_2 * 4 + 4] + param_1[param_2 * 4 + 2] < param_7 + param_6) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x198;
    core_main_c_FUN_004c8440("CMorphModel::setFaceList - invalid vertex range");
  }
  local_1c = 0;
  local_24 = param_3;
  if (0 < param_7) {
    local_20 = param_5;
    local_14 = param_6 * 0x3c;
    do {
      uVar2 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
                        (param_1,*local_20 * 0x48 + param_4 + 8);
      iVar5 = 0;
      *(uint *)(param_1[0x18] + local_14 + 4) = 3;
      puVar3 = local_24;
      do {
        iVar4 = iVar5;
        if (_DAT_01cd4314 != 0) {
          iVar4 = 2 - iVar5;
        }
        iVar4 = iVar4 * 0xc;
        *(uint *)(iVar4 + 0x18 + param_1[0x18] + local_14) = (uint)*puVar3;
        iVar5 = iVar5 + 1;
        *(uint *)(iVar4 + 0x1c + param_1[0x18] + local_14) = (uint)puVar3[3] << 8;
        *(uint *)(iVar4 + param_1[0x18] + local_14 + 0x20) = (uint)puVar3[6] << 8;
        puVar3 = puVar3 + 1;
      } while (iVar5 < 3);
      *(uint *)(local_14 + param_1[0x18]) = uVar2;
      piVar1 = (int *)(local_14 + 0x18 + param_1[0x18]);
      *piVar1 = *piVar1 + param_1[param_2 * 4 + 3];
      *(int *)(local_14 + 0x24 + param_1[0x18]) =
           *(int *)(local_14 + 0x24 + param_1[0x18]) + param_1[param_2 * 4 + 3];
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      *(int *)(local_14 + param_1[0x18] + 0x30) =
           *(int *)(local_14 + param_1[0x18] + 0x30) + param_1[param_2 * 4 + 3];
      local_24 = local_24 + 9;
      local_14 = local_14 + 0x3c;
    } while (local_1c < param_7);
  }
  return;
}
