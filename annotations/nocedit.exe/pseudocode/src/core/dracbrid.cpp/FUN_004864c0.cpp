// Name: core_dracbrid.cpp_FUN_004864c0
// Address: 004864c0
// Address Range: [[004864c0, 004864df]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_004864c0()
// Cross-references:
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484967 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 004861f6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_004864c0(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_dracbrid_cpp_FUN_004864c0
               (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4,
               CDemonActor *param_5)

{
  int bone_index;
  float fVar1;
  int iVar2;
  int iVar3;
  CVector3f *pCVar4;
  undefined4 *puVar5;
  uint uVar6;
  SFreaky *pSVar7;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_EDI;
  char *in_stack_0000005c;
  char acStack_11c [188];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  undefined1 auStack_40 [12];
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_18;
  float local_14;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,7.0);
  *(float *)(param_5[0x8e].create_event + 8) = fVar1;
  iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar2 != 0) {
    pSVar7 = SFreaky_ARRAY_02c6d0c0;
    iVar2 = 0;
    do {
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)pSVar7->field0_0x0);
      bone_index = DAT_02c6d0a0;
      if (iVar3 == 0) {
        pSVar7->field0_0x0[0x1c] = '\0';
        pSVar7->field0_0x0[0x1d] = '\0';
        pSVar7->field0_0x0[0x1e] = '\0';
        pSVar7->field0_0x0[0x1f] = '\0';
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           ((CDeformableModelInstance *)(param_5 + 1),(CVector3f *)(auStack_40 + 8),
                            bone_index);
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (param_5,(CVector3f *)auStack_40,pCVar4);
        if (pSVar7->field1_0x20 + 1 != pCVar4) {
          pSVar7->field1_0x20[1].x = pCVar4->x;
          pSVar7->field1_0x20[1].y = pCVar4->y;
          pSVar7->field1_0x20[1].z = pCVar4->z;
        }
        fStack_18 = pSVar7->field1_0x20[1].x;
        local_14 = pSVar7->field1_0x20[1].y;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_14 = fVar1 + local_14;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        fStack_4c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        fStack_4c = fStack_4c + unaff_EBX;
        if (pSVar7->field1_0x20 != (CVector3f *)&local_54) {
          pSVar7->field1_0x20[0].x = fVar1 + unaff_EDI;
          pSVar7->field1_0x20[0].y = unaff_ESI;
          pSVar7->field1_0x20[0].z = fStack_4c;
        }
        local_60 = pSVar7->field1_0x20[1].x;
        local_5c = pSVar7->field1_0x20[1].y;
        local_58 = pSVar7->field1_0x20[1].z;
        local_54 = fVar1 + unaff_EDI;
        local_50 = unaff_ESI;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_5c = fVar1 + local_5c;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_54 = fVar1 + local_54;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        fStack_4c = fVar1 + fStack_4c;
        local_30 = local_54;
        local_2c = local_50;
        if (pSVar7->field1_0x20 + 2 != (CVector3f *)&local_30) {
          pSVar7->field1_0x20[2].x = local_54;
          pSVar7->field1_0x20[2].y = local_50;
          pSVar7->field1_0x20[2].z = fStack_4c;
        }
        auStack_40._4_4_ = g_CDemonCameraInstance.base.position.x;
        auStack_40._8_4_ = g_CDemonCameraInstance.base.position.y;
        local_34 = g_CDemonCameraInstance.base.position.z;
        local_28 = fStack_4c;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        auStack_40._8_4_ = fVar1 + (float)auStack_40._8_4_;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_30 = fVar1 + local_30;
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_28 = fVar1 + local_28;
        if (pSVar7->field1_0x20 + 3 != (CVector3f *)&stack0x00000000) {
          pSVar7->field1_0x20[3].x = local_30;
          pSVar7->field1_0x20[3].y = local_2c;
          pSVar7->field1_0x20[3].z = local_28;
        }
        core_stairs_cpp_FUN_005b90a0();
        puVar5 = (undefined4 *)core_stairs_cpp_FUN_005b92d0();
        if (pSVar7->field0_0x0 + 4 != (char *)puVar5) {
          *(undefined4 *)(pSVar7->field0_0x0 + 4) = *puVar5;
          *(undefined4 *)(pSVar7->field0_0x0 + 8) = puVar5[1];
          *(undefined4 *)(pSVar7->field0_0x0 + 0xc) = puVar5[2];
        }
        puVar5 = (undefined4 *)core_stairs_cpp_FUN_005b9490();
        if (pSVar7->field0_0x0 + 0x10 != (char *)puVar5) {
          *(undefined4 *)(pSVar7->field0_0x0 + 0x10) = *puVar5;
          *(undefined4 *)(pSVar7->field0_0x0 + 0x14) = puVar5[1];
          *(undefined4 *)(pSVar7->field0_0x0 + 0x18) = puVar5[2];
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                  ((CVector3f *)(pSVar7->field0_0x0 + 4));
        sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00
                  ((CVector3f *)(pSVar7->field0_0x0 + 0x10));
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60((float)in_stack_0000005c);
        core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0
                  (g_CSoundPtr,&stack0xfffffee0,in_stack_0000005c);
        uVar6 = sound_sndmain_cpp_startSfx_FUN_005a8e90(acStack_11c);
        *(uint *)pSVar7->field0_0x0 = uVar6;
        acStack_11c[0] = -0x7c;
        acStack_11c[1] = 'i';
        acStack_11c[2] = 'H';
        acStack_11c[3] = '\0';
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        *(CDemonActor **)pSVar7->field2_0x50 = param_5;
        return;
      }
      iVar2 = iVar2 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar2 < 6);
  }
  return;
}


// Assembly code:
// 004864c0: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_004864c0
// 004864c1: PUSH ESI
// 004864c2: PUSH EDI
// 004864c3: PUSH EBP
// 004864c4: SUB ESP,0x164
// 004864ca: MOV EBP,dword ptr [ESP + 0x178]
// 004864d1: PUSH 0x40e00000
// 004864d6: PUSH 0x3f800000
// 004864db: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
