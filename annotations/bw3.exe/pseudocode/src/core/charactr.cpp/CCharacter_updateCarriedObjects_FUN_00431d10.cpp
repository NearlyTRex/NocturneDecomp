// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00431d10
// Address: 00431d10
// Address Range: [[00431d10, 00431fff]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00431d10(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00431d10(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  SCarryHand *pSVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CLocation *apCStackY_1034 [9];
  UOrientationVector *apUStackY_1010 [848];
  CMatrix3x4f *in_stack_fffffd38;
  byte auStack_dc [48];
  uint auStack_ac [12];
  uint auStack_7c [12];
  uint local_4c;
  CLocation *local_48 [4];
  uint uStack_38;
  uint local_34;
  CLocation *local_28;
  UOrientationVector *local_24 [2];
  int local_1c;
  SCarryHand *local_18;
  int iStack_14;
  
  bVar6 = 0;
  local_24[0] = &(this_ptr->base).orient;
  local_28 = &(this_ptr->base).location;
  local_24[1] = (UOrientationVector *)&(this_ptr->model).field_0xe80;
  local_18 = this_ptr->carry_hands;
  local_1c = 0;
  do {
    pSVar2 = local_18;
    if (*(int *)(local_18 + 8) != 0) {
      if (*(int *)(local_18 + 0x44) == 0) {
        (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                  (this_ptr,local_1c,in_stack_fffffd38);
        puVar4 = (uint *)&stack0xfffffe94;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (local_18 + 0x48,(byte *)((int)local_24[1] + *(int *)local_18 * 0x30));
        puVar4 = (uint *)&stack0xfffffeb8;
      }
      puVar5 = (uint *)&stack0xfffffee8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if (*(float *)(pSVar2 + 0x40) < 1.0) {
        fVar1 = *(float *)(pSVar2 + 0x3c) * delta_time + *(float *)(pSVar2 + 0x40);
        *(float *)(pSVar2 + 0x40) = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_00584560(*(int *)pSVar2 * 0x30 + iStack_14);
          puVar4 = (uint *)&stack0xfffffe34;
          puVar5 = (uint *)&stack0xfffffda4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffef4,&stack0xfffffda4);
          puVar4 = (uint *)&stack0xfffffd44;
          puVar5 = (uint *)&stack0xfffffd74;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005854a0
                    (pSVar2 + 0xc,&stack0xfffffd74,*(int *)(pSVar2 + 0x40));
          puVar4 = auStack_7c;
          puVar5 = (uint *)&stack0xfffffdd4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                    (&stack0xfffffdd4,*(int *)pSVar2 * 0x30 + iStack_14);
          puVar4 = (uint *)&stack0xfffffe04;
          puVar5 = (uint *)&stack0xfffffef4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
        }
        else {
          *(int *)(pSVar2 + 0x40) = 0x3f800000;
        }
      }
      core_xform_cpp_FUN_00583940(auStack_dc,local_1c,local_18);
      in_stack_fffffd38 = (CMatrix3x4f *)0x431e45;
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffef4,auStack_dc);
      puVar4 = auStack_ac;
      puVar5 = (uint *)&stack0xfffffe64;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_00584450(&stack0xfffffe64);
      local_4c = local_34;
      local_48[(uint)bVar6 * -2] = local_48[(uint)bVar6 * -2 + 6];
      local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      iVar3 = *(int *)(pSVar2 + 8);
      *(uint *)(iVar3 + 0x20) = local_4c;
      *(CLocation **)(iVar3 + 0x24) = local_48[0];
      *(CLocation **)(iVar3 + 0x28) = local_48[1];
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&stack0xfffffe64);
      local_48[2] = local_28;
      local_48[(uint)bVar6 * -2 + 3] = (CLocation *)local_24[(uint)bVar6 * -2];
      local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           (CLocation *)local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      iVar3 = *(int *)(pSVar2 + 8);
      if ((CLocation **)(iVar3 + 0x30) != local_48 + 2) {
        *(CLocation **)(iVar3 + 0x30) = local_48[2];
        *(CLocation **)(iVar3 + 0x34) = local_48[3];
        *(uint *)(iVar3 + 0x38) = uStack_38;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(*(CDemonActor **)(pSVar2 + 8))
      ;
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 0x78;
  } while (local_1c < 2);
  return;
}
