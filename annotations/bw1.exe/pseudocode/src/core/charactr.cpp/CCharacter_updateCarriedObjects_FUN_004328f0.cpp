// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0
// Address: 004328f0
// Address Range: [[004328f0, 00432bdf]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CLocation *apCStackY_1034 [9];
  UOrientationVector *apUStackY_1010 [848];
  CMatrix3x4f *in_stack_fffffd38;
  CMatrix3x4f CStack_dc;
  uint auStack_ac [12];
  uint auStack_7c [12];
  uint local_4c;
  CLocation *local_48 [4];
  uint uStack_38;
  uint local_34;
  CLocation *local_28;
  UOrientationVector *local_24 [2];
  CVector3f *local_1c;
  CVector3f *local_18;
  int iStack_14;
  
  bVar6 = 0;
  local_24[0] = &(this_ptr->base).orient;
  local_28 = &(this_ptr->base).location;
  local_24[1] = (UOrientationVector *)&(this_ptr->model).field_0xe80;
  local_18 = (CVector3f *)this_ptr->carry_hands;
  local_1c = (CVector3f *)0x0;
  do {
    pCVar2 = local_18;
    if (local_18->z != 0.0) {
      if (local_18[5].z == 0.0) {
        (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                  (this_ptr,(int)local_1c,in_stack_fffffd38);
        puVar4 = (uint *)&stack0xfffffe94;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (local_18 + 6,(byte *)((int)local_24[1] + (int)local_18->x * 0x30));
        puVar4 = (uint *)&stack0xfffffeb8;
      }
      puVar5 = (uint *)&stack0xfffffee8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if (pCVar2[5].y < 1.0) {
        fVar1 = pCVar2[5].x * delta_time + pCVar2[5].y;
        pCVar2[5].y = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_005b6380((int)pCVar2->x * 0x30 + iStack_14);
          puVar4 = (uint *)&stack0xfffffe34;
          puVar5 = (uint *)&stack0xfffffda4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&stack0xfffffef4,&stack0xfffffda4);
          puVar4 = (uint *)&stack0xfffffd44;
          puVar5 = (uint *)&stack0xfffffd74;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(pCVar2 + 1,&stack0xfffffd74,pCVar2[5].y);
          puVar4 = auStack_7c;
          puVar5 = (uint *)&stack0xfffffdd4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                    (&stack0xfffffdd4,(int)pCVar2->x * 0x30 + iStack_14);
          puVar4 = (uint *)&stack0xfffffe04;
          puVar5 = (uint *)&stack0xfffffef4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
        }
        else {
          pCVar2[5].y = 1.0;
        }
      }
      core_xform_cpp_FUN_005b5760(&CStack_dc,local_1c,local_18);
      in_stack_fffffd38 = (CMatrix3x4f *)0x432a25;
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&stack0xfffffef4,&CStack_dc);
      puVar4 = auStack_ac;
      puVar5 = (uint *)&stack0xfffffe64;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_005b6270(&stack0xfffffe64);
      local_4c = local_34;
      local_48[(uint)bVar6 * -2] = local_48[(uint)bVar6 * -2 + 6];
      local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fVar1 = pCVar2->z;
      *(uint *)((int)fVar1 + 0x20) = local_4c;
      *(CLocation **)((int)fVar1 + 0x24) = local_48[0];
      *(CLocation **)((int)fVar1 + 0x28) = local_48[1];
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xfffffe64);
      local_48[2] = local_28;
      local_48[(uint)bVar6 * -2 + 3] = (CLocation *)local_24[(uint)bVar6 * -2];
      local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           (CLocation *)local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fVar1 = pCVar2->z;
      if ((CLocation **)((int)fVar1 + 0x30) != local_48 + 2) {
        *(CLocation **)((int)fVar1 + 0x30) = local_48[2];
        *(CLocation **)((int)fVar1 + 0x34) = local_48[3];
        *(uint *)((int)fVar1 + 0x38) = uStack_38;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)pCVar2->z);
    }
    local_1c = (CVector3f *)((int)&local_1c->x + 1);
    local_18 = local_18 + 10;
  } while ((int)local_1c < 2);
  return;
}
