// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280
// Address: 0051b280
// Address Range: [[0051b280, 0051b470]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_18;
  
  iVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(param_1);
  iVar2 = *(int *)(iVar3 + 0x28558);
  iVar8 = 0;
  iVar4 = iVar2;
  if (0 < iVar2) {
    iVar10 = param_1 + 0x1c0c;
    iVar7 = param_1;
    do {
      iVar4 = core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(iVar10);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x18;
      *(uint *)(iVar7 + 0x256c) = 0;
      iVar7 = iVar7 + 4;
    } while (iVar8 < iVar2);
  }
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    local_30 = 0;
    do {
      pbVar5 = (byte *)(local_30 + *(int *)(param_1 + 0x40));
      pbVar9 = pbVar5 + 0x10;
      pbVar6 = pbVar5;
      for (iVar4 = 0; iVar4 < (int)(uint)*pbVar5; iVar4 = iVar4 + 1) {
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00
                  ((uint)*pbVar1 * 0x18 + param_1 + 0x1c0c,pbVar9);
        pbVar9 = pbVar9 + 0xc;
        *(uint *)(param_1 + 0x256c + (uint)*pbVar6 * 4) = 1;
      }
      local_30 = local_30 + 0x34;
      iVar4 = local_2c + 1;
      local_2c = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  local_18 = 0;
  if (0 < iVar2) {
    local_28 = param_1;
    local_34 = iVar3;
    do {
      iVar4 = local_28;
      if (*(int *)(local_28 + 0x256c) == 1) {
        if (-1 < *(int *)(local_34 + 0x2857c)) {
          iVar7 = 0;
          iVar4 = local_34;
          iVar8 = iVar3;
          iVar10 = param_1;
          if (0 < iVar2) {
            do {
              if ((local_18 == *(int *)(iVar8 + 0x2857c)) && (*(int *)(iVar10 + 0x256c) != 0))
              break;
              iVar7 = iVar7 + 1;
              iVar4 = iVar2;
              iVar8 = iVar8 + 0x24;
              iVar10 = iVar10 + 4;
            } while (iVar7 < iVar2);
          }
          if (iVar7 < iVar2) {
            iVar10 = 0;
            iVar8 = local_18;
            do {
              iVar8 = *(int *)(iVar8 * 0x24 + iVar3 + 0x2857c);
              if (iVar8 < 0) {
                _DAT_01cc4800 = "..\\core\\skeleton.cpp";
                _DAT_01cc4804 = 0x86b;
                iVar4 = FUN_004c8440(&DAT_00591b03);
              }
            } while ((*(int *)(param_1 + 0x256c + iVar8 * 4) != 2) &&
                    (iVar10 = iVar10 + 1, iVar10 < 2));
            if (iVar10 < 2) goto LAB_0051b360;
          }
        }
        *(uint *)(local_28 + 0x256c) = 2;
        iVar4 = local_28;
      }
LAB_0051b360:
      local_34 = local_34 + 0x24;
      local_28 = local_28 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < iVar2);
  }
  return iVar4;
}
