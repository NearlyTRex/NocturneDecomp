// Name: core_charactr.cpp_FUN_004343c0
// Address: 004343c0
// Address Range: [[004343c0, 00434581]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_004343c0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_004343c0(CCharacter *this_ptr)

{
  float fVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  CCharacter *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  int *piVar8;
  char *motion_name;
  CCharacter *local_20;
  CCharacter *local_18;
  
  if (this_ptr->field_0x24a8 != '\0') {
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      pCVar5 = (CCharacter *)&pCVar5->field_0x58;
      puVar3 = &this_ptr->field_0x0 + iVar7 * 0x58;
      do {
        puVar4 = puVar3 + 4;
        *(uint *)(puVar3 + 0xb9f4) = 0x501502f9;
        puVar3 = puVar4;
      } while ((CCharacter *)puVar4 != pCVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x16);
    this_ptr_00 = core_motion_cpp_FUN_00524a00((CMotionController *)&this_ptr->field_0x158);
    iVar7 = 0;
    if (0 < *(int *)&this_ptr->field_0x27c4) {
      motion_name = &this_ptr->field_0x27d0;
      do {
        piVar8 = (int *)(&this_ptr->field_0x27c8 + iVar7 * 0x38);
        iVar2 = core_motion_cpp_FUN_005240c0(this_ptr_00,motion_name,1);
        piVar8[0xb] = iVar2;
        piVar8[0xc] = *(int *)(this_ptr_00 + iVar2 * 0x120 + 0x1c8c);
        piVar8[0xd] = (int)((float)piVar8[0xc] /
                           *(float *)(this_ptr_00 + piVar8[0xb] * 0x120 + 0x1c48));
        if (-1 < piVar8[10]) {
          *(int *)(&this_ptr->field_0xb9f4 + piVar8[1] * 4 + *piVar8 * 0x58) = piVar8[0xd];
        }
        if (piVar8[10] < 1) {
          *(int *)(&this_ptr->field_0xb9f4 + *piVar8 * 4 + piVar8[1] * 0x58) = piVar8[0xd];
        }
        iVar7 = iVar7 + 1;
        motion_name = motion_name + 0x38;
      } while (iVar7 < *(int *)&this_ptr->field_0x27c4);
    }
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      iVar2 = iVar7 + 4;
      *(uint *)(&pCVar5->field_0xb9f4 + iVar7) = 0;
      iVar7 = iVar2;
      pCVar5 = (CCharacter *)&pCVar5->field_0x58;
    } while (iVar2 != 0x58);
    local_20 = this_ptr;
    do {
      iVar7 = 0;
      local_18 = local_20;
      pCVar5 = this_ptr;
      do {
        pCVar5 = (CCharacter *)&pCVar5->field_0x58;
        puVar3 = &this_ptr->field_0x0 + iVar7 * 0x58;
        pCVar6 = local_20;
        do {
          fVar1 = *(float *)&local_18->field_0xb9f4 + *(float *)(puVar3 + 0xb9f4);
          if (fVar1 < *(float *)&pCVar6->field_0xb9f4) {
            *(float *)&pCVar6->field_0xb9f4 = fVar1;
          }
          puVar3 = puVar3 + 4;
          pCVar6 = (CCharacter *)&pCVar6->field_0x4;
        } while ((CCharacter *)puVar3 != pCVar5);
        iVar7 = iVar7 + 1;
        local_18 = (CCharacter *)&local_18->field_0x4;
      } while (iVar7 < 0x16);
      local_20 = (CCharacter *)&local_20->field_0x58;
    } while (local_20 != (CCharacter *)&this_ptr->field_0x790);
  }
  return;
}
