// Name: core_fire.cpp_FUN_0049d090
// Address: 0049d090
// Address Range: [[0049d090, 0049d4fd]]
// Convention: unknown
// Signature: uint core_fire_cpp_FUN_0049d090(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fire_cpp_FUN_0049d090(CDemonActor *param_1)

{
  float fVar1;
  uint uVar2;
  CKeyFramedModel *pCVar3;
  uint extraout_EAX;
  int iVar4;
  byte *position;
  byte bVar5;
  float afStackY_1070 [1011];
  CKeyFramedModelInstance *this_ptr;
  float local_88;
  float local_7c;
  uint local_78;
  float local_74;
  byte local_70 [8];
  float local_68 [4];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  fVar1 = *(float *)&param_1[2].field_0x12c;
  uVar2 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                        (ushort)(fVar1 == 0.0) << 0xe);
  if (0.0 < fVar1) {
    local_1c = *(float *)&g_CGamePtr->field_0x314;
    fVar1 = *(float *)&param_1[2].field_0x12c - local_1c;
    *(float *)&param_1[2].field_0x12c = fVar1;
    local_18 = local_1c;
    if (0.0 < fVar1) {
      if (local_68 + 7 != (float *)&param_1[1].field_0x68) {
        local_4c = *(float *)&param_1[1].field_0x68;
        local_48 = *(float *)&param_1[1].field_0x6c;
        local_44 = *(float *)&param_1[1].field_0x70;
      }
      core_box_cpp_CBox_process_FUN_0041b410((CBox *)&param_1[1].field_0x28,local_1c);
      local_3c[2] = local_4c - *(float *)&param_1[1].field_0x68;
      local_3c[3] = local_48 - *(float *)&param_1[1].field_0x6c;
      local_2c = local_44 - *(float *)&param_1[1].field_0x70;
      local_28[0] = local_3c[2];
      local_3c[(uint)bVar5 * -2 + 6] = local_3c[(uint)bVar5 * -2 + 3];
      local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if (&stack0xffffff84 != local_3c + 5) {
        local_7c = local_28[0];
        local_74 = local_20;
      }
      local_78 = 0;
      if (((0.0 < SQRT(local_74 * local_74 + local_7c * local_7c)) ||
          (local_48 < *(float *)&param_1[1].field_0x6c)) &&
         ((float)_DAT_005c0760 <
          *(float *)&param_1[2].field_0x130 - *(float *)&param_1[2].field_0x12c)) {
        iVar4 = *(int *)param_1;
        position = &param_1[1].field_0x28;
        if (iVar4 == 1) {
          core_fire_cpp_FUN_004a3f70(0x01C73654,position,1,0);
          core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (0x02CF5680,param_1,"wp_bindevil.wav",(CVector3f *)position);
          *(uint *)&param_1[2].field_0x12c = 0;
        }
        else if (iVar4 == 2) {
          core_fire_cpp_FUN_004a36e0(0x01C73654,position,0x41000000,0x42c80000,0x40800000,3);
          core_fire_cpp_FUN_0049cca0(position);
          *(uint *)&param_1[2].field_0x12c = 0;
        }
        else if (iVar4 == 3) {
          iVar4 = 0;
          core_fire_cpp_FUN_004a3fd0
                    (0x01C73654,*(uint *)&param_1[1].field_0x28,
                     *(uint *)&param_1[1].field_0x2c,*(uint *)&param_1[1].field_0x30);
          do {
            iVar4 = iVar4 + 1;
            core_fire_cpp_FUN_004a3f20(0x01C73654,position,0);
          } while (iVar4 < 0x10);
          *(uint *)&param_1[2].field_0x12c = 0;
        }
      }
      uVar2 = *(uint *)param_1;
      if (((uVar2 != 0) && (1 < uVar2)) && (uVar2 != 2)) {
        return uVar2;
      }
      this_ptr = (CKeyFramedModelInstance *)&param_1->field_0x4;
      local_70._0_4_ = _DAT_02cfd900;
      *(uint *)(local_70 + (uint)bVar5 * -8 + 4) =
           *(uint *)(&DAT_02cfd904 + (uint)bVar5 * -8);
      local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
           *(float *)(&DAT_02cfd908 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr);
      local_68[0] = local_68[0] + *(float *)&pCVar3->field_0x34c;
      core_dirmat_cpp_FUN_0045b800(&param_1[1].field_0x40,local_70);
      local_58 = local_88;
      local_68[(uint)bVar5 * 0xfffffffe + 5] =
           (float)*(uint *)(&stack0xffffff7c + (uint)bVar5 * -8);
      local_68[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 6] =
           (float)*(uint *)(&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_40 = *(float *)&param_1[1].field_0x28 + local_58;
      local_3c[0] = *(float *)&param_1[1].field_0x2c + local_54;
      local_3c[1] = *(float *)&param_1[1].field_0x30 + local_50;
      local_68[1] = local_40;
      local_68[(uint)bVar5 * 0xfffffffe + 2] = local_3c[(uint)bVar5 * -2];
      local_68[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 3] =
           local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if ((float *)local_70 != local_68 + 1) {
        local_70._0_4_ = local_68[1];
        local_70._4_4_ = local_68[2];
        local_68[0] = local_68[3];
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,(CVector3f *)local_70,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return extraout_EAX;
    }
    uVar2 = *(uint *)param_1;
    switch(uVar2) {
    case 0:
      core_fire_cpp_FUN_004a36e0
                (0x01C73654,&param_1[1].field_0x28,0x41800000,0x42c80000,0x40800000,0);
      uVar2 = sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[2].field_0x134);
      break;
    case 1:
      core_fire_cpp_FUN_004a3f70(0x01C73654,&param_1[1].field_0x28,1,0);
      uVar2 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,param_1,"wp_bindevil.wav",
                         (CVector3f *)&param_1[1].field_0x28);
      return uVar2;
    case 2:
      core_fire_cpp_FUN_004a36e0
                (0x01C73654,&param_1[1].field_0x28,0x41000000,0x42c80000,0x40800000,3);
      uVar2 = core_fire_cpp_FUN_0049cca0(&param_1[1].field_0x28);
      return uVar2;
    case 3:
      core_fire_cpp_FUN_004a3fd0
                (0x01C73654,*(uint *)&param_1[1].field_0x28,
                 *(uint *)&param_1[1].field_0x2c,*(uint *)&param_1[1].field_0x30);
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        uVar2 = core_fire_cpp_FUN_004a3f20(0x01C73654,&param_1[1].field_0x28,0);
      } while (iVar4 < 0x10);
      return uVar2;
    }
  }
  return uVar2;
}
