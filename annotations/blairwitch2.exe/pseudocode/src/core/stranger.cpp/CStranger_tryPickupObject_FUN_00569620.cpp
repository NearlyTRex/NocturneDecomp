// Name: core_stranger.cpp_CStranger_tryPickupObject_FUN_00569620
// Address: 00569620
// Address Range: [[00569620, 0056a15a]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_00569620(CStranger *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_00569620(CStranger *this_ptr,char *class_name)

{
  CVector3f *pCVar1;
  byte *this_ptr_00;
  float fVar2;
  CDemonActor *this_ptr_01;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  float *unaff_EDI;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_1210 [122];
  byte *apuStackY_1028 [869];
  char *pcVar12;
  uint uVar13;
  CDemonActor *in_stack_fffffd84;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float afStack_258 [9];
  uint auStack_234 [2];
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float afStack_220 [4];
  float fStack_210;
  float afStack_20c [5];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1d4;
  float afStack_1d0 [8];
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float afStack_180 [6];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_13c;
  float afStack_138 [6];
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_dc;
  float afStack_d8 [4];
  uint uStack_c8;
  uint uStack_c4;
  float fStack_b8;
  float afStack_b4 [5];
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float afStack_60 [8];
  float fStack_40;
  byte *apuStack_3c [4];
  int iStack_2c;
  int iStack_28;
  int local_24;
  uint *local_20;
  int local_1c;
  float local_18;
  uint *puStack_14;
  
  bVar11 = 0;
  if (((((0.0 < this_ptr->action_timer) || (*(int *)&this_ptr->field_0x25608 != 0)) ||
       (local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                             ((CCharacter *)this_ptr,0), local_18 < (float)_DAT_005eba4d)) ||
      ((local_18 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,0), local_18 < 1.0 ||
       (*(int *)&this_ptr->field_0x2620 != 0)))) || (*(int *)&this_ptr->field_0x2698 != 0)) {
    return 0;
  }
  local_20 = auStack_234;
  apuStack_3c[3] = &this_ptr->field_0x20;
  apuStack_3c[2] = (byte *)0x40800000;
  local_24 = 0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    this_ptr_01 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_24);
    pCVar5 = (*((this_ptr_01->vtable)._ub)->getCarrier)(this_ptr_01);
    if (pCVar5 == (CDemonActor *)0x0) {
      iStack_2c = (*((this_ptr_01->vtable)._ub)->canPickup)(this_ptr_01,(CDemonActor *)this_ptr);
      switch(iStack_2c) {
      case 1:
        if (*(int *)&this_ptr->field_0x2620 == 0) {
          core_actor_cpp_FUN_00408de0(this_ptr_01,local_24);
          afStack_b4[0] = fStack_1d4;
          afStack_b4[(uint)bVar11 * -2 + 1] = afStack_1d0[(uint)bVar11 * -2];
          afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
               afStack_1d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          local_20 = (uint *)
                     SQRT(afStack_b4[2] * afStack_b4[2] +
                          afStack_b4[0] * afStack_b4[0] + afStack_b4[1] * afStack_b4[1]);
          if ((float)local_20 <= 0.0) {
            afStack_b4[1] = 0.0;
            afStack_b4[0] = 0.0;
            afStack_b4[2] = 0.0;
          }
          else {
            fVar2 = 1.0 / (float)local_20;
            afStack_b4[0] = afStack_b4[0] * fVar2;
            afStack_b4[1] = afStack_b4[1] * fVar2;
            afStack_b4[2] = afStack_b4[2] * fVar2;
          }
          if (afStack_b4[2] <= 0.0) {
            afStack_60[1] = 3.0;
            afStack_60[2] = 2.0;
            afStack_60[0] = 0.0;
            if (afStack_180 != afStack_60) {
              afStack_180[0] = 0.0;
              afStack_180[1] = 3.0;
              afStack_180[2] = 2.0;
            }
            goto LAB_0056979e;
          }
        }
        break;
      case 2:
        if (*(int *)&this_ptr->field_0x2698 == 0) {
          uStack_c8 = 0x40400000;
          uStack_c4 = 0x40000000;
          afStack_d8[3] = 0.0;
          if (afStack_180 != afStack_d8 + 3) {
            afStack_180[1] = 3.0;
            afStack_180[2] = 2.0;
            afStack_180[0] = 0.0;
          }
LAB_0056979e:
          core_actor_cpp_FUN_00408d70(this_ptr,afStack_180);
          fStack_1b0 = afStack_138[0];
          afStack_1ac[(uint)bVar11 * -2] = afStack_138[(uint)bVar11 * -2 + 1];
          afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
          (*((this_ptr_01->vtable)._ub)->getBoundingBox)
                    (this_ptr_01,(CBoundingBox3D *)in_stack_fffffd84);
          puVar7 = (uint *)&stack0xfffffd8c;
          puVar9 = auStack_234;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          fStack_dc = fStack_22c + *unaff_EDI;
          afStack_d8[0] = fStack_228 + unaff_EDI[1];
          afStack_d8[1] = fStack_224 + unaff_EDI[2];
          fStack_88 = fStack_22c + *unaff_EDI;
          afStack_9c[(uint)bVar11 * -2 + 6] = afStack_d8[(uint)bVar11 * -2];
          afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          pfVar8 = &fStack_40;
          afStack_9c[2] = fStack_88 * _DAT_005eba55;
          afStack_9c[3] = fStack_84 * _DAT_005eba55;
          fStack_8c = fStack_80 * _DAT_005eba55;
          fStack_40 = fStack_88 * _DAT_005eba55;
          apuStack_3c[(uint)bVar11 * -2] = (byte *)afStack_9c[(uint)bVar11 * -2 + 3];
          apuStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               (byte *)afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          in_stack_fffffd84 = this_ptr_01;
          core_actor_cpp_FUN_00408d70(this_ptr_01,pfVar8);
          afStack_180[5] = fStack_a0;
          afStack_180[(uint)bVar11 * -2 + 6] = afStack_9c[(uint)bVar11 * -2];
          afStack_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          fStack_13c = afStack_180[5] - afStack_1ac[1];
          afStack_138[0] = fStack_168 - afStack_1ac[2];
          afStack_138[1] = fStack_164 - afStack_1ac[3];
          afStack_11c[1] = afStack_180[5] - afStack_1ac[1];
          afStack_11c[(uint)bVar11 * -2 + 2] = afStack_138[(uint)bVar11 * -2];
          afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
               afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (((ABS(afStack_11c[2]) <= (float)_DAT_005eba75) &&
              (puStack_14 = (uint *)
                            (afStack_11c[1] * afStack_11c[1] + afStack_11c[3] * afStack_11c[3]),
              (float)puStack_14 <= (float)local_20)) &&
             (in_stack_fffffd84 = this_ptr_01,
             iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(this_ptr_01,class_name), iVar6 != 0)) {
            *(CDemonActor **)&this_ptr->field_0x25608 = this_ptr_01;
            local_20 = puStack_14;
            iStack_28 = local_24;
          }
        }
        break;
      case 3:
      case 4:
        if (*(int *)&this_ptr->field_0x2698 == 0) {
          iVar6 = (*((this_ptr_01->vtable)._ub)->canPickup)(this_ptr_01,(CDemonActor *)this_ptr);
          if (iVar6 != 4) {
LAB_00569a2a:
            fStack_194 = 2.0;
            fStack_19c = 0.0;
            fStack_198 = 3.0;
            if (afStack_180 + 2 != afStack_1ac + 4) {
              afStack_180[3] = 3.0;
              afStack_180[4] = 2.0;
              afStack_180[2] = 0.0;
            }
            goto LAB_0056979e;
          }
          in_stack_fffffd84 = this_ptr_01;
          core_actor_cpp_FUN_00408de0(this_ptr_01,local_1c);
          afStack_20c[1] = fStack_b8;
          afStack_20c[(uint)bVar11 * -2 + 2] = afStack_b4[(uint)bVar11 * -2];
          afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
               afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (ABS(afStack_20c[1]) <= 1.0) {
            in_stack_fffffd84 = (CDemonActor *)0x569a05;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_20c + 1);
            fStack_1f0 = afStack_d8[2];
            afStack_20c[(uint)bVar11 * -2 + 8] = afStack_d8[(uint)bVar11 * -2 + 3];
            afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
                 afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            if (ABS(fStack_1ec) <= (float)_DAT_005eba6d) goto LAB_00569a2a;
          }
        }
      }
    }
    local_24 = local_24 + 4;
  }
  iVar6 = *(int *)&this_ptr->field_0x25608;
  if (iVar6 == 0) {
    return 0;
  }
  (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x24))(iVar6);
  pfVar8 = afStack_258;
  pfVar10 = &fStack_270;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
  }
  if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&fStack_270) {
    (this_ptr->carry_object_bbox).min.x = fStack_270;
    (this_ptr->carry_object_bbox).min.y = fStack_26c;
    (this_ptr->carry_object_bbox).min.z = fStack_268;
  }
  pCVar1 = &(this_ptr->carry_object_bbox).max;
  if (pCVar1 != (CVector3f *)&fStack_264) {
    pCVar1->x = fStack_264;
    (this_ptr->carry_object_bbox).max.y = fStack_260;
    (this_ptr->carry_object_bbox).max.z = fStack_25c;
  }
  fStack_120 = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
  afStack_11c[0] = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
  afStack_11c[1] = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
  afStack_180[3] = fStack_120;
  afStack_180[(uint)bVar11 * -2 + 4] = afStack_11c[(uint)bVar11 * -2];
  afStack_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
       afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_fc = afStack_180[3] * _DAT_005eba55;
  fStack_f8 = afStack_180[4] * _DAT_005eba55;
  fStack_f4 = afStack_180[5] * _DAT_005eba55;
  fStack_1d4 = afStack_180[3] * _DAT_005eba55;
  afStack_1d0[(uint)bVar11 * -2] = afStack_11c[(uint)bVar11 * -2 + 9];
  afStack_1d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25608,&fStack_1d4);
  pfVar8 = &fStack_210;
  fStack_210 = afStack_60[0];
  afStack_20c[(uint)bVar11 * -2] = afStack_60[(uint)bVar11 * -2 + 1];
  afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
  core_actor_cpp_FUN_00408de0(this_ptr,pfVar8);
  fStack_198 = afStack_1ac[2];
  afStack_1ac[(uint)bVar11 * -2 + 6] = afStack_1ac[(uint)bVar11 * -2 + 3];
  afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_1ac + 5)) {
    (this_ptr->carry_object_world_center).x = fStack_198;
    (this_ptr->carry_object_world_center).y = fStack_194;
    (this_ptr->carry_object_world_center).z = fStack_190;
  }
  switch(apuStack_3c[0]) {
  case (byte *)0x1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,0x1b,1);
    uVar13 = *(uint *)&this_ptr->field_0x25608;
    pcVar12 = "Rummaging %s\n";
    break;
  case (byte *)0x2:
  case (byte *)0x3:
  case (byte *)0x4:
    iVar6 = *(int *)&this_ptr->field_0x25608;
    if ((iVar6 == 0) ||
       (iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x8c))(iVar6,this_ptr), iVar6 != 4)) {
      this_ptr_00 = &this_ptr->field_0x2b4;
      if ((this_ptr->carry_object_world_center).y <= (float)_DAT_005eba65) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0x13,1);
        uVar13 = *(uint *)&this_ptr->field_0x25608;
        pcVar12 = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,_DAT_0264be68);
        fStack_84 = afStack_11c[2];
        afStack_9c[(uint)bVar11 * -2 + 7] = afStack_11c[(uint)bVar11 * -2 + 3];
        uVar13 = _DAT_0264be40;
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
             afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,uVar13);
        fVar2 = fStack_84;
        fStack_1f8 = afStack_1d0[2];
        afStack_20c[(uint)bVar11 * -2 + 6] = afStack_1d0[(uint)bVar11 * -2 + 3];
        afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_1d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_228 = fVar2 - fStack_1f8;
        fStack_224 = fStack_80 - fStack_1f4;
        afStack_220[0] = fStack_7c - fStack_1f0;
        afStack_9c[3] = fVar2 - fStack_1f8;
        afStack_9c[(uint)bVar11 * -2 + 4] = afStack_220[(uint)bVar11 * -2 + -1];
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             afStack_220[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        fVar2 = fStack_8c * fStack_8c;
        fVar4 = afStack_9c[3] * afStack_9c[3];
        fVar3 = fStack_88 * fStack_88;
        fStack_1ec = fStack_1f8 - (this_ptr->carry_object_world_center).x;
        fStack_1e8 = fStack_1f4 - (this_ptr->carry_object_world_center).y;
        fStack_1e4 = fStack_1f0 - (this_ptr->carry_object_world_center).z;
        fStack_108 = fStack_1ec;
        afStack_11c[(uint)bVar11 * -2 + 6] = afStack_20c[(uint)bVar11 * -2 + 9];
        afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
        if ((float)_DAT_005eba65 <
            ABS(SQRT(fVar3 + fVar4 + fVar2) -
                SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104)))
        {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n",
                     *(uint *)&this_ptr->field_0x25608);
          *(uint *)&this_ptr->field_0x25608 = 0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0x15,1);
        uVar13 = *(uint *)&this_ptr->field_0x25608;
        pcVar12 = "Picking up %s waist level\n";
      }
    }
    else {
      core_actor_cpp_FUN_00408de0(*(uint *)&this_ptr->field_0x25608,&this_ptr->field_0x20);
      fStack_168 = fStack_15c;
      afStack_180[(uint)bVar11 * -2 + 7] = afStack_180[(uint)bVar11 * -2 + 10];
      afStack_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
           afStack_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb];
      fVar2 = (this_ptr->carry_object_world_center).y;
      this_ptr->pickup_facing_reversed = (uint)(0.0 < fStack_160);
      if (fVar2 <= (float)_DAT_005eba5d) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x17,1);
        uVar13 = *(uint *)&this_ptr->field_0x25608;
        pcVar12 = "Picking up heavy %s crate\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x18,1);
        core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x25608 + 0x20);
        fStack_78 = afStack_138[0];
        afStack_9c[(uint)bVar11 * -2 + 10] = afStack_138[(uint)bVar11 * -2 + 1];
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
             afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
        if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_9c + 9)) {
          (this_ptr->carry_object_world_center).x = fStack_78;
          (this_ptr->carry_object_world_center).y = fStack_74;
          (this_ptr->carry_object_world_center).z = fStack_70;
        }
        uVar13 = *(uint *)&this_ptr->field_0x25608;
        pcVar12 = ">Picking up heavy %s shelf\n" + 1;
      }
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\stranger.cpp";
    _DAT_01d046a4 = 0xd2d;
    core_main_c_FUN_004e4500("Hell froze - invalid pickUpType: %d",apuStack_3c[0]);
    goto LAB_00569dc5;
  }
  engine_console_cpp_FUN_00436710(g_CConsolePtr,pcVar12,uVar13);
LAB_00569dc5:
  this_ptr->action_timer = 4.0;
  this_ptr->action_pending = 4;
  return 1;
}
