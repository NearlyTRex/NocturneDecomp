// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430
// Address: 00449430
// Address Range: [[00449430, 0044974b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  byte *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c6cee8 != 0) {
    engine_special_cpp_FUN_00566370(0,0,0,DAT_005fba18 + -1,DAT_005fba1c + -1);
    return;
  }
  if (0x100 < *(int *)&this_ptr->field_0x1d0) {
    local_34 = _DAT_01c6cee8;
    local_2c = _DAT_01c6cee8;
    local_30 = *(int *)&this_ptr->field_0x144 + -1;
    local_28 = *(int *)&this_ptr->field_0x148 + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00449350(this_ptr,(CRect *)&local_34);
    return;
  }
  iVar8 = 0;
  if (0 < *(int *)&this_ptr->field_0x1d0) {
    piVar7 = (int *)&this_ptr->field_0x1d4;
    do {
      if (*piVar7 < 0) {
        *piVar7 = 0;
      }
      if (*(int *)&this_ptr->field_0x144 <= piVar7[1]) {
        piVar7[1] = *(int *)&this_ptr->field_0x144 + -1;
      }
      if (piVar7[2] < 0) {
        piVar7[2] = 0;
      }
      if (*(int *)&this_ptr->field_0x148 <= piVar7[3]) {
        piVar7[3] = *(int *)&this_ptr->field_0x148 + -1;
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar8 < *(int *)&this_ptr->field_0x1d0);
  }
  iVar8 = 0;
  local_1c = 0;
  local_14 = *(int *)&this_ptr->field_0x148;
  if (0 < *(int *)&this_ptr->field_0x1d0) {
    puVar5 = &this_ptr->field_0x1d4;
    do {
      if (*(int *)(puVar5 + 8) < local_14) {
        local_14 = *(int *)(puVar5 + 8);
      }
      if (local_1c < *(int *)(puVar5 + 0xc)) {
        local_1c = *(int *)(puVar5 + 0xc);
      }
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 0x10;
    } while (iVar8 < *(int *)&this_ptr->field_0x1d0);
  }
  if (local_14 <= local_1c) {
    local_20 = local_14 << 2;
    local_24 = (int *)&this_ptr->field_0x1d4;
    do {
      iVar8 = local_20;
      local_18 = 0;
      _DAT_0149e704 = 0;
      if (0 < *(int *)&this_ptr->field_0x1d0) {
        iVar9 = 0;
        piVar7 = local_24;
        do {
          if ((piVar7[2] <= local_14) && (local_14 <= piVar7[3])) {
            bVar4 = false;
            if (0 < _DAT_0149e704) {
              iVar10 = _DAT_0149e704 * 4;
              iVar6 = 0;
              do {
                if ((*(int *)(iVar6 + 0x149e708) <= piVar7[1]) &&
                   (*piVar7 <= *(int *)(iVar6 + 0x149eb08))) {
                  if ((*(int *)(iVar6 + 0x149e708) <= *piVar7) &&
                     (piVar7[1] <= *(int *)(iVar6 + 0x149eb08))) goto LAB_004495b6;
                  if (*piVar7 < *(int *)(iVar6 + 0x149e708)) {
                    bVar4 = true;
                    *(int *)(iVar6 + 0x149e708) = *piVar7;
                  }
                  if (*(int *)(iVar6 + 0x149eb08) < piVar7[1]) {
                    *(int *)(iVar6 + 0x149eb08) = piVar7[1];
                    goto LAB_004495b6;
                  }
                  if (bVar4) break;
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < iVar10);
            }
            if (!bVar4) {
              *(int *)(iVar9 + 0x149e708) = *piVar7;
              _DAT_0149e704 = _DAT_0149e704 + 1;
              *(int *)(iVar9 + 0x149eb08) = piVar7[1];
              iVar9 = iVar9 + 4;
            }
          }
LAB_004495b6:
          piVar7 = piVar7 + 4;
          local_18 = local_18 + 1;
        } while (local_18 < *(int *)&this_ptr->field_0x1d0);
      }
      iVar9 = 0;
      if (0 < _DAT_0149e704) {
        iVar10 = 0;
        do {
          piVar7 = (int *)(iVar10 + 0x149e708);
          piVar1 = (int *)(iVar10 + 0x149e708);
          piVar2 = (int *)(iVar10 + 0x149e708);
          piVar3 = (int *)(iVar10 + 0x149eb08);
          iVar10 = iVar10 + 4;
          iVar9 = iVar9 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00471271
                    ((void *)(*(int *)(&DAT_01c60dac + iVar8) + *piVar7 * 4),
                     (void *)((local_14 * *(int *)&this_ptr->field_0x144 + *piVar1) * 4 +
                             *(int *)&this_ptr->field_0x15c),(*piVar3 - *piVar2) * 4 + 4);
        } while (iVar9 < _DAT_0149e704);
      }
      local_20 = local_20 + 4;
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}
