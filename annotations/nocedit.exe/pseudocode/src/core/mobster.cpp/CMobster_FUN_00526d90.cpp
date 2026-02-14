// Name: core_mobster.cpp_CMobster_FUN_00526d90
// Address: 00526d90
// Address Range: [[00526d90, 00526e9b] [00526ebb, 005271b7]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_FUN_00526d90(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_mobster_cpp_CMobster_FUN_00526d90(CMobster *this_ptr)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar6;
  CDeformableModelInstance *this_ptr_00;
  int iVar7;
  int iVar8;
  int iVar9;
  float in_stack_00000008;
  float fStack_b0;
  uint auStack_a8 [10];
  CBoundingBox3D CStack_80;
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f aCStack_44 [2];
  uint uStack_28;
  int local_24;
  CLocation *local_20;
  int local_1c;
  float local_14;
  
  if ((this_ptr->base).is_in_combat == 0) {
    fVar4 = *(float *)(this_ptr->unk1 + 4) - in_stack_00000008;
    *(float *)(this_ptr->unk1 + 4) = fVar4;
    if (0.0 < fVar4) {
      *(int *)this_ptr->unk1 = *(int *)this_ptr->unk1 + 1;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      *(float *)(this_ptr->unk1 + 4) = local_14;
    }
    if (((this_ptr->base).base.model.part_data.visibility_flags
         [(this_ptr->base).base.carry_hands[1].secondary_bone_index] != 0) &&
       ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      if (0.0 < *(float *)(this_ptr->unk1 + 8)) {
        fVar4 = *(float *)(this_ptr->unk1 + 8) - in_stack_00000008;
        *(float *)(this_ptr->unk1 + 8) = fVar4;
        if (fVar4 < 0.0) {
          this_ptr->unk1[8] = '\0';
          this_ptr->unk1[9] = '\0';
          this_ptr->unk1[10] = '\0';
          this_ptr->unk1[0xb] = '\0';
          return 0;
        }
      }
      else {
        iVar9 = *(int *)(this_ptr->unk1 + 0xc);
        pCVar1 = &(this_ptr->base).base.base.location;
        if (iVar9 == 0) {
          iVar8 = 0;
          iVar9 = 0;
          local_24 = 0;
          local_20 = pCVar1;
          for (local_1c = 0; local_1c < (int)g_CDemonSetPtr->actor_list_ptr; local_1c = local_1c + 1
              ) {
            pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar9);
            pCVar6 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
            if ((pCVar6 == (CDemonActor *)0x0) &&
               (iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CTommyGun"),
               iVar7 != 0)) {
              fStack_5c = (pCVar2->location).position.x - (local_20->position).x;
              fStack_58 = (pCVar2->location).position.y - (local_20->position).y;
              fStack_58 = fStack_58 * fStack_58;
              fStack_54 = (pCVar2->location).position.z - (local_20->position).z;
              fStack_58 = fStack_58 * fStack_58;
              fVar4 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
              if (((float)5 <= fVar4) && ((int)fVar4 < 0x41700001)) {
                *(CDemonActor **)((int)auStack_a8 + iVar8) = pCVar2;
                local_24 = local_24 + 1;
                iVar8 = iVar8 + 4;
                if (0x27 < iVar8) break;
              }
            }
            iVar9 = iVar9 + 4;
          }
          if (0 < local_24) {
            iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
            uVar3 = auStack_a8[iVar9];
            this_ptr->unk1[8] = '\0';
            this_ptr->unk1[9] = '\0';
            this_ptr->unk1[10] = ' ';
            this_ptr->unk1[0xb] = -0x3e;
            iVar9 = *(int *)this_ptr->unk1;
            *(uint *)(this_ptr->unk1 + 0xc) = uVar3;
            *(int *)this_ptr->unk1 = iVar9 + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            return 1;
          }
        }
        else {
          iVar9 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x8c))(iVar9);
          if (iVar9 != 0) {
            this_ptr->unk1[0xc] = '\0';
            this_ptr->unk1[0xd] = '\0';
            this_ptr->unk1[0xe] = '\0';
            this_ptr->unk1[0xf] = '\0';
            this_ptr->unk1[8] = '\0';
            this_ptr->unk1[9] = '\0';
            this_ptr->unk1[10] = '\0';
            this_ptr->unk1[0xb] = '\0';
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            return 0;
          }
          fVar4 = (pCVar1->position).x - *(float *)(*(int *)(this_ptr->unk1 + 0xc) + 0x20);
          fVar5 = (this_ptr->base).base.base.location.position.z -
                  *(float *)(*(int *)(this_ptr->unk1 + 0xc) + 0x28);
          fStack_b0 = (float)5 -
                      SQRT(fVar5 * fVar5 + fVar4 * fVar4) * (float)0.33333333333333298;
          if (fStack_b0 < 1.0) {
            fStack_b0 = 1.0;
          }
          fVar4 = in_stack_00000008 * fStack_b0 + *(float *)(this_ptr->unk1 + 8);
          iVar9 = -1;
          *(float *)(this_ptr->unk1 + 8) = fVar4;
          if ((fVar4 < 0.0) &&
             (iVar8 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0xc) + 0x154) + 0x7c))
                                (*(int *)(this_ptr->unk1 + 0xc),this_ptr), iVar8 == 3)) {
            pCVar2 = *(CDemonActor **)(this_ptr->unk1 + 0xc);
            (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_80);
            uStack_28 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_44[0].z = CStack_80.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,aCStack_44);
            CStack_68.x = 1.5;
            CStack_68.y = 0.0;
            CStack_68.z = 0.0;
            iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              ((CCharacter *)this_ptr,&CStack_50,(CPathMap *)0x0,&CStack_68,0.3,
                               0.034906585);
          }
          this_ptr_00 = &(this_ptr->base).base.model;
          if (-1 < iVar9) {
            if (iVar9 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&this_ptr_00->motion_controller,7,1);
            return 1;
          }
          this_ptr->unk1[0xc] = '\0';
          this_ptr->unk1[0xd] = '\0';
          this_ptr->unk1[0xe] = '\0';
          this_ptr->unk1[0xf] = '\0';
          this_ptr->unk1[8] = '\0';
          this_ptr->unk1[9] = '\0';
          this_ptr->unk1[10] = -0x60;
          this_ptr->unk1[0xb] = 'A';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
    }
  }
  return 0;
}
