// Name: core_asgaya.cpp_FUN_005a0be0
// Address: 005a0be0
// Address Range: [[005a0be0, 005a1729]]
// Convention: unknown
// Signature: void core_asgaya_cpp_FUN_005a0be0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_asgaya_cpp_FUN_005a0be0(CCharacter *param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  CMotionList *this_ptr;
  SMotion *pSVar5;
  float fVar6;
  int iVar7;
  char *pcVar8;
  byte *puVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  float afStackY_1170 [1001];
  CGore *this_ptr_00;
  CVector3f *position;
  char *pcVar13;
  float *pfVar14;
  EBloodType blood_type;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  uint uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  uint uStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [4];
  float fStack_114;
  uint uStack_110;
  float fStack_104;
  float fStack_f8;
  uint uStack_ec;
  float afStack_e0 [3];
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float afStack_c4 [5];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [5];
  float afStack_74 [3];
  float afStack_68 [3];
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  float afStack_34 [6];
  uint uStack_1c;
  float fStack_18;
  
  bVar12 = 0;
  iVar4 = core_charactr_cpp_FUN_0042cd70(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)&param_1[4].field_0x884 == 0) {
    iVar4 = core_actor_cpp_createActorByName_FUN_0040c4f0("CExorcism");
    *(int *)&param_1[4].field_0x8a0 = iVar4;
    (*(code *)**(uint **)(iVar4 + 0x154))(iVar4);
    pcVar8 = "Bible";
    pcVar13 = *(char **)&param_1[4].field_0x8a0;
    do {
      cVar1 = *pcVar8;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar4 = *(int *)&param_1[4].field_0x8a0;
    *(uint *)(iVar4 + 0x20) = *(uint *)&param_1->field_0x20;
    *(uint *)(iVar4 + 0x24) = *(uint *)&param_1->field_0x24;
    *(uint *)(iVar4 + 0x28) = *(uint *)&param_1->field_0x28;
    *(uint *)(iVar4 + 0x2c) = *(uint *)&param_1->field_0x2c;
    if (*(int *)&param_1[4].field_0x8a0 != 0) {
      *(uint *)(*(int *)&param_1[4].field_0x8a0 + 0xfc) = 1;
      *(uint *)(*(int *)&param_1[4].field_0x8a0 + 0xf8) = 0;
    }
    core_charactr_cpp_FUN_004319d0(param_1,0,*(uint *)&param_1[4].field_0x8a0,0,0);
    core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[4].field_0x8a0);
    *(uint *)&param_1[4].field_0x884 = 1;
  }
  if (*(int *)&param_1[4].field_0x894 == 0) {
    core_charactr_cpp_FUN_00433c60(param_1,param_2);
  }
  fStack_18c = param_2 * *(float *)&param_1[4].field_0x87c;
  uStack_1c = 1;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
  while (0.0 < fStack_18c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xfffffe74);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar4);
  }
  iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if ((((1 < iVar4) && (*(int *)&param_1->field_0x70 == 1)) &&
      (blood_type = *(EBloodType *)&param_1[4].field_0x878, blood_type == BLOOD_TYPE_RED)) &&
     (*(int *)&param_1->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
    pfVar14 = afStack_124 + 0x11;
    afStack_e0[0] = (float)uStack_a4;
    afStack_124[(uint)bVar12 * -2 + 0x12] = afStack_c4[(uint)bVar12 * -2 + 9];
    afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
         afStack_c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    core_actor_cpp_FUN_00408b80(param_1,pfVar14);
    position = &CStack_134;
    CStack_134._0_4_ = CStack_98._0_4_;
    *(uint *)((int)&CStack_134 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_98 + (uint)bVar12 * -8 + 4);
    this_ptr_00 = g_CGorePtr;
    *(uint *)((int)&CStack_134 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)((int)&CStack_98 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    core_gore_cpp_FUN_004cec40(this_ptr_00,position,blood_type);
    uStack_1c = 1;
    *(uint *)&param_1[4].field_0x878 = 1;
  }
  fVar6 = *(float *)&param_1[4].field_0x87c;
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * fVar6);
  iVar4 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  puVar9 = &param_1->field_0x158;
  if (iVar4 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)puVar9);
    iVar4 = *(int *)(pSVar5 + 0x24);
    fVar6 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar9);
    fStack_18 = fVar6;
    pcVar13 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320
                        ((CMotionController *)puVar9);
    iVar7 = _strcmp(pcVar13,"APPEAR");
    if ((iVar7 == 0) && (*(int *)&param_1[4].field_0x894 < 1)) {
      *(uint *)&param_1[4].field_0x894 = 1;
      *(uint *)&param_1->field_0xfc = 1;
      *(uint *)&param_1->field_0xf8 = 0;
      *(uint *)&param_1[4].field_0x898 = *(uint *)&param_1[2].field_0x6b2c;
    }
    iVar7 = _strcmp(pcVar13,"DISAPPEAR");
    if ((iVar7 == 0) && (*(int *)&param_1[4].field_0x894 != 0)) {
      *(uint *)&param_1[4].field_0x894 = 0;
      *(uint *)&param_1->field_0xfc = 1;
      *(uint *)&param_1->field_0xf8 = 0;
      *(uint *)&param_1[4].field_0x898 = *(uint *)&param_1[2].field_0x6b2c;
    }
    if (iVar4 == 0x95) {
      if ((1.0 < (double)fVar6) && ((double)fVar6 < _DAT_005da5fe)) {
        core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,*(uint *)&param_1[4].field_0x88c)
        ;
        pfVar14 = afStack_c4 + 2;
        afStack_c4[2] = (float)uStack_110;
        afStack_c4[(uint)bVar12 * -2 + 3] = afStack_124[(uint)bVar12 * -2 + 6];
        afStack_c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
        core_actor_cpp_FUN_00408b80(param_1,pfVar14);
        fStack_50 = fStack_104;
        afStack_88[(uint)bVar12 * -2 + 0xf] = afStack_124[(uint)bVar12 * -2 + 9];
        afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
             afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
        if (&stack0xfffffe84 != afStack_88 + 0xe) {
          fStack_17c = fStack_50;
          fStack_178 = fStack_4c;
          uStack_174 = uStack_48;
        }
        core_fire_cpp_FUN_004a3af0(0x01C73654,&stack0xfffffe84,&DAT_02cfd900,1,0,4);
        core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,*(uint *)&param_1[4].field_0x888)
        ;
        pfVar14 = afStack_88 + 8;
        afStack_68[0] = (float)uStack_ec;
        afStack_88[(uint)bVar12 * -2 + 9] = afStack_124[(uint)bVar12 * -2 + 0xf];
        afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
             afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
        core_actor_cpp_FUN_00408b80(param_1,pfVar14);
        fStack_128 = fStack_f8;
        afStack_124[(uint)bVar12 * -2] = afStack_124[(uint)bVar12 * -2 + 0xc];
        afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
        if (&stack0xfffffe84 != &fStack_128) {
          fStack_17c = fStack_128;
          fStack_178 = afStack_124[0];
          uStack_174 = afStack_124[1];
        }
        core_fire_cpp_FUN_004a3af0(0x01C73654,&stack0xfffffe84,&DAT_02cfd900,1,0,4);
      }
      if ((1.0 < (double)fVar6) && ((double)fVar6 < _DAT_005da606)) {
        puVar9 = &param_1->field_0x20;
        fVar10 = 1.4013e-45;
        do {
          if (afStack_124 + 0x14 != (float *)puVar9) {
            fStack_d4 = *(float *)puVar9;
            fStack_d0 = *(float *)&param_1->field_0x24;
            uStack_cc = *(uint *)&param_1->field_0x28;
          }
          if (afStack_88 + 0x11 != (float *)puVar9) {
            fStack_44 = *(float *)puVar9;
            fStack_40 = *(float *)&param_1->field_0x24;
            uStack_3c = *(uint *)&param_1->field_0x28;
          }
          fVar3 = (float)(int)fVar10 * (float)_DAT_005da60e;
          fVar11 = (float)((int)fVar10 + 1);
          fStack_40 = fVar3 + (float)_DAT_005da62e + fStack_40;
          fStack_d0 = fVar3 + (float)_DAT_005da60e + fStack_d0;
          fStack_18 = fVar10;
          core_fire_cpp_FUN_004a3c50
                    (0x01C73654,afStack_88 + 0x11,afStack_124 + 0x14,0,0x3f400000,0x3f400000,3,
                     0x3e800000,0xffff);
          fVar10 = fVar11;
        } while ((int)fVar11 < 0xb);
        core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,*(uint *)&param_1[4].field_0x88c)
        ;
        pfVar14 = afStack_88 + 5;
        afStack_74[0] = afStack_88[2];
        afStack_88[(uint)bVar12 * -2 + 6] = afStack_88[(uint)bVar12 * -2 + 3];
        afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
             afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        core_actor_cpp_FUN_00408b80(param_1,pfVar14);
        fStack_5c = fStack_164;
        afStack_88[(uint)bVar12 * -2 + 0xc] = *(float *)(&stack0xfffffea0 + (uint)bVar12 * -8);
        afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
             *(float *)(&stack0xfffffea4 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        if (afStack_124 + 0x14 != afStack_88 + 0xb) {
          fStack_d4 = fStack_5c;
          fStack_d0 = fStack_58;
          uStack_cc = uStack_54;
        }
        if (afStack_88 + 0x11 != (float *)&param_1->field_0x20) {
          fStack_44 = *(float *)&param_1->field_0x20;
          fStack_40 = *(float *)&param_1->field_0x24;
          uStack_3c = *(uint *)&param_1->field_0x28;
        }
        fStack_40 = fStack_40 + _DAT_005da616;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,afStack_88 + 0x11,afStack_124 + 0x14,0,0x3f400000,0x3f400000,3,
                   0x3e800000,0xffff);
        core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,*(uint *)&param_1[4].field_0x888)
        ;
        uStack_140 = uStack_14c;
        *(uint *)((int)&stack0xfffffec4 + (uint)bVar12 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffeb8 + (uint)bVar12 * -8);
        afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -5] =
             afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -8];
        core_actor_cpp_FUN_00408b80(param_1,&stack0xfffffec0);
        fStack_38 = fStack_c8;
        afStack_34[(uint)bVar12 * -2] = afStack_c4[(uint)bVar12 * -2];
        afStack_34[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        if (afStack_124 + 0x14 != &fStack_38) {
          fStack_d4 = fStack_38;
          fStack_d0 = afStack_34[0];
          uStack_cc = afStack_34[1];
        }
        if (afStack_88 + 0x11 != (float *)&param_1->field_0x20) {
          fStack_44 = *(float *)&param_1->field_0x20;
          fStack_40 = *(float *)&param_1->field_0x24;
          uStack_3c = *(uint *)&param_1->field_0x28;
        }
        fStack_40 = fStack_40 + _DAT_005da616;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,afStack_88 + 0x11,afStack_124 + 0x14,0,0x3f400000,0x3f400000,3,
                   0x3e800000,0xffff);
      }
      if ((((float)_DAT_005da61e < fVar6) && ((double)fVar6 < _DAT_005da5fe)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1[4].field_0x8a0 + 0x154) + 0xe8))
                            (*(int *)&param_1[4].field_0x8a0), iVar4 != 0)) {
        (**(code **)(*(int *)(*(int *)&param_1[4].field_0x8a0 + 0x154) + 0xe4))
                  (*(int *)&param_1[4].field_0x8a0);
      }
      if (((float)_DAT_005da626 < fVar6) && (*(int *)&param_1[4].field_0x890 < 6)) {
        *(int *)&param_1[4].field_0x890 = *(int *)&param_1[4].field_0x890 + 1;
        core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
                  ((CMotionController *)&param_1->field_0x158,"indian_cast",70.0);
      }
    }
    goto LAB_005a0ed4;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_005a0e97:
      pcVar13 = &DAT_005da5d4;
    }
    else {
LAB_005a10e8:
      pcVar13 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,pcVar13,1);
  }
  else if (uVar2 < 3) {
    iVar4 = 0;
    pcVar13 = &DAT_005da5d0;
    this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)puVar9);
    iVar4 = core_motion_cpp_FUN_004fba50(this_ptr,pcVar13,iVar4);
    if (iVar4 < 0) goto LAB_005a0e97;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)puVar9,iVar4,1);
  }
  else {
    if (uVar2 != 3) goto LAB_005a10e8;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)puVar9,"STAND",1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_005a0ed4:
  if (0.0 < *(float *)&param_1[4].field_0x898) {
    *(float *)&param_1[4].field_0x898 = *(float *)&param_1[4].field_0x898 - param_2;
  }
  if (*(float *)&param_1[4].field_0x898 < 0.0) {
    *(uint *)&param_1[4].field_0x898 = 0;
  }
  core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  afStack_124[2] = *(float *)&param_1->field_0x2518 * param_2;
  afStack_124[3] = *(float *)&param_1->field_0x251c * param_2;
  fStack_114 = *(float *)&param_1->field_0x2520 * param_2;
  fStack_b0 = afStack_124[2];
  afStack_c4[(uint)bVar12 * -2 + 6] = afStack_124[(uint)bVar12 * -2 + 3];
  afStack_c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
       afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
  fStack_188 = fStack_b0 + *(float *)&param_1->field_0x250c;
  fStack_184 = fStack_ac + *(float *)&param_1->field_0x2510;
  fStack_180 = fStack_a8 + *(float *)&param_1->field_0x2514;
  fStack_170 = fStack_188;
  (&stack0xfffffe94)[(uint)bVar12 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xfffffe7c + (uint)bVar12 * -8);
  *(uint *)((int)&stack0xfffffe98 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       *(uint *)((int)&stack0xfffffe80 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  fStack_158 = fStack_170 + *(float *)&param_1->field_0x249c;
  fStack_154 = fStack_16c + *(float *)&param_1->field_0x24a0;
  fStack_150 = fStack_168 + *(float *)&param_1->field_0x24a4;
  fStack_8c = fStack_158;
  afStack_88[(uint)bVar12 * -2] = *(float *)((int)&stack0xfffffeac + (uint)bVar12 * -8);
  afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       *(float *)((int)&stack0xfffffeb0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)&fStack_8c);
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00432330(param_1,param_2,uStack_1c);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
