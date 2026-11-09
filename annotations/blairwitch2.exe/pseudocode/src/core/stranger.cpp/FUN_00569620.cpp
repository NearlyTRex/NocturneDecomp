// Name: core_stranger.cpp_FUN_00569620
// Address: 00569620
// Address Range: [[00569620, 0056a15a]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_00569620(CStranger *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_FUN_00569620(CStranger *this_ptr,char *class_name)

{
  byte *this_ptr_00;
  CDemonActor *actor_ptr;
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1210 [991];
  char *pcVar8;
  uint uVar9;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint uStack_210;
  uint uStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d4;
  float fStack_1c8;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  uint uStack_168;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_138;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_54;
  uint uStack_3c;
  uint uStack_38;
  float local_34;
  byte *local_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  float *local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  if (((((0.0 < *(float *)&this_ptr->field_0x256ac) || (*(int *)&this_ptr->field_0x25608 != 0)) ||
       (local_18 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,0),
       local_18 < (float)_DAT_005eba4d)) ||
      ((local_18 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,0), local_18 < 1.0 ||
       (*(int *)&this_ptr->field_0x2620 != 0)))) || (*(int *)&this_ptr->field_0x2698 != 0)) {
    return 0;
  }
  local_20 = (float *)&stack0xfffffdcc;
  local_30 = &this_ptr->field_0x20;
  local_34 = 4.0;
  local_24 = 0;
  for (local_1c = 0; local_1c < *(int *)&g_CDemonSetPtr->field_0x14d164; local_1c = local_1c + 1) {
    actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_24);
    iVar2 = (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 0x9c))(actor_ptr);
    if (iVar2 == 0) {
      uStack_38 = (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 0x8c))(actor_ptr,this_ptr);
      switch(uStack_38) {
      case 1:
        if (*(int *)&this_ptr->field_0x2620 == 0) {
          core_actor_cpp_FUN_00408de0(actor_ptr,local_30);
          fStack_c0 = fStack_1e0;
          *(uint *)((int)&stack0xffffff44 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffe24 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffe28 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          fStack_2c = SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc);
          if (fStack_2c <= 0.0) {
            fStack_bc = 0.0;
            fStack_c0 = 0.0;
            fStack_b8 = 0.0;
          }
          else {
            fVar1 = 1.0 / fStack_2c;
            fStack_c0 = fStack_c0 * fVar1;
            fStack_bc = fStack_bc * fVar1;
            fStack_b8 = fStack_b8 * fVar1;
          }
          if (fStack_b8 <= 0.0) {
            uStack_68 = 0x40400000;
            uStack_64 = 0x40000000;
            uStack_6c = 0;
            if (&stack0xfffffe74 != &stack0xffffff94) {
              uStack_18c = 0;
              uStack_188 = 0x40400000;
              uStack_184 = 0x40000000;
            }
            goto LAB_0056979e;
          }
        }
        break;
      case 2:
        if (*(int *)&this_ptr->field_0x2698 == 0) {
          uStack_d4 = 0x40400000;
          uStack_d0 = 0x40000000;
          uStack_d8 = 0;
          if (&stack0xfffffe74 != &stack0xffffff28) {
            uStack_188 = 0x40400000;
            uStack_184 = 0x40000000;
            uStack_18c = 0;
          }
LAB_0056979e:
          core_actor_cpp_FUN_00408d70(this_ptr,&stack0xfffffe74);
          fStack_1bc = fStack_144;
          *(uint *)((int)&stack0xfffffe48 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffec0 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xfffffe4c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffec4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 0x24))(actor_ptr);
          pfVar3 = (float *)&stack0xfffffd78;
          pfVar5 = &stack0xfffffdc0;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar5 = *pfVar3;
            pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
            pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
          }
          fStack_f0 = local_240 + *local_20;
          fStack_ec = fStack_23c + local_20[1];
          fStack_e8 = fStack_238 + local_20[2];
          fStack_9c = local_240 + *local_20;
          *(uint *)((int)&stack0xffffff68 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffff14 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffff6c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          pfVar3 = &stack0xffffffac;
          fStack_a8 = fStack_9c * _DAT_005eba55;
          fStack_a4 = fStack_98 * _DAT_005eba55;
          fStack_a0 = fStack_94 * _DAT_005eba55;
          fStack_54 = fStack_9c * _DAT_005eba55;
          *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffff5c + (uint)bVar7 * -8);
          *(uint *)(&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffff60 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          core_actor_cpp_FUN_00408d70(actor_ptr,pfVar3);
          fStack_180 = fStack_b4;
          (&stack0xfffffe84)[(uint)bVar7 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff50 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xfffffe88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffff54 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          fStack_150 = fStack_180 - fStack_1bc;
          fStack_14c = fStack_17c - fStack_1b8;
          fStack_148 = fStack_178 - fStack_1b4;
          fStack_12c = fStack_180 - fStack_1bc;
          *(uint *)((int)&stack0xfffffed8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xfffffeb4 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xfffffedc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xfffffeb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (((ABS(fStack_128) <= (float)_DAT_005eba75) &&
              (fStack_28 = fStack_12c * fStack_12c + fStack_124 * fStack_124, fStack_28 <= local_34)
              ) && (iVar2 = core_actor_cpp_FUN_0040c840(actor_ptr,class_name), iVar2 != 0)) {
            *(CDemonActor **)&this_ptr->field_0x25608 = actor_ptr;
            local_34 = fStack_28;
            uStack_3c = uStack_38;
          }
        }
        break;
      case 3:
      case 4:
        if (*(int *)&this_ptr->field_0x2698 == 0) {
          iVar2 = (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 0x8c))(actor_ptr,this_ptr);
          if (iVar2 != 4) {
LAB_00569a2a:
            uStack_1a8 = 0x40000000;
            uStack_1b0 = 0;
            uStack_1ac = 0x40400000;
            if (&stack0xfffffe74 != &stack0xfffffe50) {
              uStack_188 = 0x40400000;
              uStack_184 = 0x40000000;
              uStack_18c = 0;
            }
            goto LAB_0056979e;
          }
          core_actor_cpp_FUN_00408de0(actor_ptr,local_30);
          fStack_21c = fStack_cc;
          *(uint *)((int)&stack0xfffffde8 + (uint)bVar7 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffff38 + (uint)bVar7 * 0xfffffffe * 4);
          *(uint *)(&stack0xfffffdec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffff3c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (ABS(fStack_21c) <= 1.0) {
            core_vecdir_cpp_FUN_005838f0(&stack0xfffffde4);
            uStack_204 = uStack_e4;
            *(uint *)((int)&stack0xfffffe00 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffff20 + (uint)bVar7 * -8);
            *(uint *)(&stack0xfffffe04 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffff24 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if (ABS(fStack_200) <= (float)_DAT_005eba6d) goto LAB_00569a2a;
          }
        }
      }
    }
    local_24 = local_24 + 4;
  }
  iVar2 = *(int *)&this_ptr->field_0x25608;
  if (iVar2 == 0) {
    return 0;
  }
  (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
  puVar4 = (uint *)&stack0xfffffda8;
  puVar6 = &stack0xfffffd90;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if ((uint *)&this_ptr->field_0x25710 != &stack0xfffffd90) {
    *(uint *)&this_ptr->field_0x25710 = uStack_270;
    *(uint *)&this_ptr->field_0x25714 = uStack_26c;
    *(uint *)&this_ptr->field_0x25718 = uStack_268;
  }
  if ((uint *)&this_ptr->field_0x2571c != &stack0xfffffd9c) {
    *(uint *)&this_ptr->field_0x2571c = uStack_264;
    *(uint *)&this_ptr->field_0x25720 = uStack_260;
    *(uint *)&this_ptr->field_0x25724 = uStack_25c;
  }
  fStack_120 = *(float *)&this_ptr->field_0x25710 + *(float *)&this_ptr->field_0x2571c;
  fStack_11c = *(float *)&this_ptr->field_0x25714 + *(float *)&this_ptr->field_0x25720;
  fStack_118 = *(float *)&this_ptr->field_0x25718 + *(float *)&this_ptr->field_0x25724;
  fStack_174 = fStack_120;
  *(uint *)((int)&stack0xfffffe90 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xfffffee4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xfffffe94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xfffffee8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fStack_fc = fStack_174 * _DAT_005eba55;
  fStack_f8 = fStack_170 * _DAT_005eba55;
  fStack_f4 = fStack_16c * _DAT_005eba55;
  fStack_1d4 = fStack_174 * _DAT_005eba55;
  *(uint *)((int)&stack0xfffffe30 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff08 + (uint)bVar7 * -8);
  *(uint *)(&stack0xfffffe34 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffff0c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25608,&stack0xfffffe2c);
  puVar4 = &stack0xfffffdf0;
  uStack_210 = uStack_60;
  *(uint *)((int)&stack0xfffffdf4 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * 0xfffffffe * 4);
  *(uint *)(&stack0xfffffdf8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  core_actor_cpp_FUN_00408de0(this_ptr,puVar4);
  uStack_198 = uStack_1a4;
  (&stack0xfffffe6c)[(uint)bVar7 * 0xfffffffe] =
       *(uint *)((int)&stack0xfffffe60 + (uint)bVar7 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xfffffe70 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xfffffe64 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if ((uint *)&this_ptr->field_0x25704 != &stack0xfffffe68) {
    *(uint *)&this_ptr->field_0x25704 = uStack_198;
    *(uint *)&this_ptr->field_0x25708 = uStack_194;
    *(uint *)&this_ptr->field_0x2570c = uStack_190;
  }
  switch(uStack_3c) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,0x1b,1);
    uVar9 = *(uint *)&this_ptr->field_0x25608;
    pcVar8 = "Rummaging %s\n";
    break;
  case 2:
  case 3:
  case 4:
    iVar2 = *(int *)&this_ptr->field_0x25608;
    if ((iVar2 == 0) ||
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x8c))(iVar2,this_ptr), iVar2 != 4)) {
      this_ptr_00 = &this_ptr->field_0x2b4;
      if (*(float *)&this_ptr->field_0x25708 <= (float)_DAT_005eba65) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0x13,1);
        uVar9 = *(uint *)&this_ptr->field_0x25608;
        pcVar8 = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,_DAT_0264be68);
        fStack_84 = fStack_114;
        *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffef0 + (uint)bVar7 * -8);
        uVar9 = _DAT_0264be40;
        *(uint *)((int)&stack0xffffff84 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffef4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,uVar9);
        fVar1 = fStack_84;
        fStack_1f8 = fStack_1c8;
        *(uint *)((int)&stack0xfffffe0c + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffe3c + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xfffffe10 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffe40 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        fStack_228 = fVar1 - fStack_1f8;
        fStack_224 = fStack_80 - fStack_1f4;
        fStack_220 = fStack_7c - fStack_1f0;
        fStack_90 = fVar1 - fStack_1f8;
        *(float *)((int)&stack0xffffff74 + (uint)bVar7 * -8) =
             (&stack0xfffffddc)[(uint)bVar7 * 0xfffffffe];
        *(uint *)((int)&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xfffffde0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        fVar1 = fStack_90 * fStack_90;
        fStack_1ec = fStack_1f8 - *(float *)&this_ptr->field_0x25704;
        fStack_1e8 = fStack_1f4 - *(float *)&this_ptr->field_0x25708;
        fStack_1e4 = fStack_1f0 - *(float *)&this_ptr->field_0x2570c;
        fStack_108 = fStack_1ec;
        *(uint *)((int)&stack0xfffffefc + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xfffffe18 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xffffff00 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xfffffe1c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        if ((float)_DAT_005eba65 <
            ABS(SQRT(fStack_88 * fStack_88 + fVar1 + fStack_8c * fStack_8c) -
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
        uVar9 = *(uint *)&this_ptr->field_0x25608;
        pcVar8 = "Picking up %s waist level\n";
      }
    }
    else {
      core_actor_cpp_FUN_00408de0(*(uint *)&this_ptr->field_0x25608,&this_ptr->field_0x20);
      uStack_168 = uStack_15c;
      *(uint *)(&stack0xfffffe9c + (uint)bVar7 * -8) =
           *(uint *)(&stack0xfffffea8 + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xfffffea0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xfffffeac + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)&this_ptr->field_0x256f4 = (uint)(0.0 < fStack_160);
      if (*(float *)&this_ptr->field_0x25708 <= (float)_DAT_005eba5d) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x17,1);
        uVar9 = *(uint *)&this_ptr->field_0x25608;
        pcVar8 = "Picking up heavy %s crate\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x18,1);
        core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x25608 + 0x20);
        uStack_78 = uStack_138;
        (&stack0xffffff8c)[(uint)bVar7 * 0xfffffffe] =
             *(uint *)(&stack0xfffffecc + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffed0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        if ((uint *)&this_ptr->field_0x25704 != &stack0xffffff88) {
          *(uint *)&this_ptr->field_0x25704 = uStack_78;
          *(uint *)&this_ptr->field_0x25708 = uStack_74;
          *(uint *)&this_ptr->field_0x2570c = uStack_70;
        }
        uVar9 = *(uint *)&this_ptr->field_0x25608;
        pcVar8 = ">Picking up heavy %s shelf\n" + 1;
      }
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\stranger.cpp";
    _DAT_01d046a4 = 0xd2d;
    core_main_c_FUN_004e4500("Hell froze - invalid pickUpType: %d",uStack_3c);
    goto LAB_00569dc5;
  }
  engine_console_cpp_FUN_00436710(g_CConsolePtr,pcVar8,uVar9);
LAB_00569dc5:
  *(uint *)&this_ptr->field_0x256ac = 0x40800000;
  *(uint *)&this_ptr->field_0x256a4 = 4;
  return 1;
}
