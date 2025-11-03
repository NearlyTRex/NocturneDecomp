// Name: core_vampboss.cpp_FUN_005e7030
// Address: 005e7030
// Address Range: [[005e7030, 005e726e]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e7030()
// Globals:
//   TerminatedCString s_voicuhurt_wav_00656c5f
//   TerminatedCString s_VampireBossBitesIt_00656c6d
//   TerminatedCString s_voicudeath_wav_2_5_00656c80
//   double DOUBLE_00656c9b = 2
//   double DOUBLE_00656ca3 = 25
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CSound* g_CSoundPtr = 03f6af64
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CHeroClassInfo.name_hash
//   undefined4 g_CMeleeClassInfo.name_hash
//   CDemonMission g_CDemonMissionInstance
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_event.cpp_CEventList_FUN_004aabe0
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_FUN_005e7030(undefined4 param_1, undefined4
   param_2) */

void core_vampboss_cpp_FUN_005e7030(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  CDemonActor *this_ptr;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)DOUBLE_00656c9b;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffdc,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (*(int *)(in_stack_00000004[0x11].cloth_data + 0x11c4) == 0) {
    if ((*(int *)(in_stack_00000008 + 0x28) == 1) &&
       (this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000008 + 0x34),
                              g_CMeleeClassInfo.name_hash), this_ptr != (CDemonActor *)0x0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller);
      pCVar4 = (*this_ptr->vtable->getCarrier)(this_ptr);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*pCVar4->vtable->drop)(pCVar4,this_ptr,(CVector3f *)0x0);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CHeroClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          pCVar5 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                             ((CInventory *)(pCVar4[0x176].create_event + 0x30),this_ptr->actor_name
                             );
          if (pCVar5 == this_ptr) {
            core_inv_cpp_CInventory_removeItem_FUN_004fea70
                      ((CInventory *)(pCVar4[0x176].create_event + 0x30),this_ptr,0);
            core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
          }
        }
      }
      core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      core_sound_cpp_CSound_playSfx_FUN_005b3a20
                (g_CSoundPtr,(int)in_stack_00000004,"voicudeath.wav @ 2.5");
      in_stack_00000004->hit_points = 0.0;
      return;
    }
  }
  else {
    if (*(int *)(in_stack_00000004[0x11].cloth_data + 0x11c4) != 2) {
      *(undefined4 *)(in_stack_00000008 + 4) = 0;
      return;
    }
    fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
    in_stack_00000004->hit_points = fVar1;
    if (fVar1 < (float)DOUBLE_00656ca3) {
      in_stack_00000004->hit_points = 24.999;
    }
    core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004[1].base_actor.create_event + 0x20));
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      uVar3 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"voicuhurt.wav");
      *(undefined4 *)(in_stack_00000004[0x11].cloth_data + 0x1e04) = uVar3;
      return;
    }
  }
  return;
}


// Assembly code:
// 005e7030: PUSH EBX
//   Label: core_vampboss.cpp_FUN_005e7030
// 005e7031: PUSH ESI
// 005e7032: PUSH EDI
// 005e7033: PUSH EBP
// 005e7034: SUB ESP,0x14
// 005e7037: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005e703b: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005e703f: CMP dword ptr [EDI + 0x28],0x7
// 005e7043: JZ 0x005e70d5
//   XREF to: 005e70d5 (CONDITIONAL_JUMP)
// 005e7049: LEA EAX,[EAX]
// 005e704f: NOP
// 005e7050: MOV EAX,dword ptr [ESI + 0xcdcc0]
//   Label: LAB_005e7050
// 005e7056: TEST EAX,EAX
// 005e7058: JBE 0x005e715e
//   XREF to: 005e715e (CONDITIONAL_JUMP)
// 005e705e: CMP EAX,0x2
// 005e7061: JNZ 0x005e7260
//   XREF to: 005e7260 (CONDITIONAL_JUMP)
// 005e7067: FLD float ptr [EDI + 0x4]
// 005e706a: FSUBR float ptr [ESI + 0x243c]
// 005e7070: FST float ptr [ESI + 0x243c]
// 005e7076: FCOMP double ptr [0x00656ca3]
//   XREF to: 00656ca3 (READ)
// 005e707c: FNSTSW AX
// 005e707e: SAHF
// 005e707f: JNC 0x005e708b
//   XREF to: 005e708b (CONDITIONAL_JUMP)
// 005e7081: MOV dword ptr [ESI + 0x243c],0x41c7fdf4
// 005e708b: PUSH 0x2
//   Label: LAB_005e708b
// 005e708d: PUSH 0x0
// 005e708f: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005e7094: ADD ESP,0x8
// 005e7097: LEA EBX,[ESI + 0xbebc]
// 005e709d: TEST EAX,EAX
// 005e709f: JBE 0x005e7128
//   XREF to: 005e7128 (CONDITIONAL_JUMP)
// 005e70a5: CMP EAX,0x1
// 005e70a8: JNZ 0x005e712e
//   XREF to: 005e712e (CONDITIONAL_JUMP)
// 005e70ae: PUSH EAX
// 005e70af: PUSH 0x4
// 005e70b1: PUSH EBX
//   Label: LAB_005e70b1
// 005e70b2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005e70b2
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e70b7: ADD ESP,0xc
// 005e70ba: MOV EBX,dword ptr [ESI + 0xce900]
// 005e70c0: PUSH EBX
// 005e70c1: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005e70c6: ADD ESP,0x4
// 005e70c9: TEST EAX,EAX
// 005e70cb: JZ 0x005e713e
//   XREF to: 005e713e (CONDITIONAL_JUMP)
// 005e70cd: ADD ESP,0x14
//   Label: LAB_005e70cd
// 005e70d0: POP EBP
// 005e70d1: POP EDI
// 005e70d2: POP ESI
// 005e70d3: POP EBX
// 005e70d4: RET
// 005e70d5: FLD float ptr [EDI + 0x4]
//   Label: LAB_005e70d5
// 005e70d8: LEA EAX,[EDI + 0x1c]
// 005e70db: FLD ST0
// 005e70dd: FMUL double ptr [0x00656c9b]
//   XREF to: 00656c9b (READ)
// 005e70e3: PUSH EAX
// 005e70e4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 005e70e8: XOR EBX,EBX
// 005e70ea: PUSH EAX
// 005e70eb: FSTP ST1
// 005e70ed: PUSH ESI
// 005e70ee: FSTP float ptr [EDI + 0x4]
// 005e70f1: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e70f6: ADD ESP,0xc
// 005e70f9: MOV EBP,0x4000
// 005e70fe: PUSH 0xffff
//   Label: LAB_005e70fe
// 005e7103: PUSH 0x0
// 005e7105: PUSH EBP
// 005e7106: PUSH EBP
// 005e7107: PUSH 0x0
// 005e7109: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x24] (DATA)
// 005e710d: PUSH EAX
// 005e710e: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005e7114: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 005e7115: INC EBX
// 005e7116: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 005e711b: ADD ESP,0x1c
// 005e711e: CMP EBX,0x5
// 005e7121: JL 0x005e70fe
//   XREF to: 005e70fe (CONDITIONAL_JUMP)
// 005e7123: JMP 0x005e7050
//   XREF to: 005e7050 (UNCONDITIONAL_JUMP)
// 005e7128: PUSH 0x1
//   Label: LAB_005e7128
// 005e712a: PUSH 0x3
// 005e712c: JMP 0x005e70b1
//   XREF to: 005e70b1 (UNCONDITIONAL_JUMP)
// 005e712e: PUSH 0x1
//   Label: LAB_005e712e
// 005e7130: PUSH 0x5
// 005e7132: LEA EAX,[ESI + 0xbebc]
// 005e7138: PUSH EAX
// 005e7139: JMP 0x005e70b2
//   XREF to: 005e70b2 (UNCONDITIONAL_JUMP)
// 005e713e: PUSH 0x656c5f
//   Label: LAB_005e713e
//   XREF to: 00656c5f (DATA)
// 005e7143: MOV EAX,dword ptr [ESI + 0x154]
// 005e7149: PUSH ESI
// 005e714a: CALL dword ptr [EAX + 0x24]
// 005e714d: ADD ESP,0x8
// 005e7150: MOV dword ptr [ESI + 0xce900],EAX
// 005e7156: ADD ESP,0x14
// 005e7159: POP EBP
// 005e715a: POP EDI
// 005e715b: POP ESI
// 005e715c: POP EBX
// 005e715d: RET
// 005e715e: CMP dword ptr [EDI + 0x28],0x1
//   Label: LAB_005e715e
// 005e7162: JNZ 0x005e70cd
//   XREF to: 005e70cd (CONDITIONAL_JUMP)
// 005e7168: MOV EAX,[0x02f0d928]
//   XREF to: 02f0d928 (READ)
// 005e716d: PUSH EAX
// 005e716e: MOV EDX,dword ptr [EDI + 0x34]
// 005e7171: PUSH EDX
// 005e7172: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e7177: MOV EBX,EAX
// 005e7179: ADD ESP,0x8
// 005e717c: MOV EBP,EAX
// 005e717e: TEST EAX,EAX
// 005e7180: JZ 0x005e70cd
//   XREF to: 005e70cd (CONDITIONAL_JUMP)
// 005e7186: PUSH 0x1
// 005e7188: PUSH 0xa
// 005e718a: LEA EAX,[ESI + 0x158]
// 005e7190: PUSH EAX
// 005e7191: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e7196: ADD ESP,0xc
// 005e7199: MOV EAX,dword ptr [EBX + 0x154]
// 005e719f: PUSH EBX
// 005e71a0: CALL dword ptr [EAX + 0x8c]
// 005e71a6: MOV EDI,EAX
// 005e71a8: ADD ESP,0x4
// 005e71ab: TEST EAX,EAX
// 005e71ad: JZ 0x005e7206
//   XREF to: 005e7206 (CONDITIONAL_JUMP)
// 005e71af: PUSH 0x0
// 005e71b1: PUSH EBX
// 005e71b2: MOV EAX,dword ptr [EAX + 0x154]
// 005e71b8: PUSH EDI
// 005e71b9: CALL dword ptr [EAX + 0x88]
// 005e71bf: ADD ESP,0xc
// 005e71c2: MOV ECX,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 005e71c8: PUSH ECX
// 005e71c9: PUSH EDI
// 005e71ca: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e71cf: ADD ESP,0x8
// 005e71d2: TEST EAX,EAX
// 005e71d4: JZ 0x005e7206
//   XREF to: 005e7206 (CONDITIONAL_JUMP)
// 005e71d6: PUSH EBX
// 005e71d7: LEA EDI,[EAX + 0x1f738]
// 005e71dd: PUSH EDI
// 005e71de: CALL core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
//   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)
// 005e71e3: ADD ESP,0x8
// 005e71e6: CMP EAX,EBX
// 005e71e8: JNZ 0x005e7206
//   XREF to: 005e7206 (CONDITIONAL_JUMP)
// 005e71ea: PUSH 0x0
// 005e71ec: PUSH EBX
// 005e71ed: PUSH EDI
// 005e71ee: CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   XREF to: 004fea70 (UNCONDITIONAL_CALL)
// 005e71f3: ADD ESP,0xc
// 005e71f6: PUSH EBX
// 005e71f7: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005e71fd: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 005e71fe: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 005e7203: ADD ESP,0x8
// 005e7206: PUSH 0x3e4ccccd
//   Label: LAB_005e7206
// 005e720b: PUSH EBP
// 005e720c: PUSH 0x0
// 005e720e: PUSH ESI
// 005e720f: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 005e7214: ADD ESP,0x10
// 005e7217: PUSH 0x656c6d
//   XREF to: 00656c6d (DATA)
// 005e721c: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e7222: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005e7223: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005e7228: ADD ESP,0x8
// 005e722b: MOV EBP,dword ptr [ESI + 0xce900]
// 005e7231: PUSH EBP
// 005e7232: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005e7237: ADD ESP,0x4
// 005e723a: PUSH 0x656c80
//   XREF to: 00656c80 (DATA)
// 005e723f: PUSH ESI
// 005e7240: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005e7245: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 005e7246: CALL core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 005e724b: ADD ESP,0xc
// 005e724e: MOV dword ptr [ESI + 0x243c],0x0
// 005e7258: ADD ESP,0x14
// 005e725b: POP EBP
// 005e725c: POP EDI
// 005e725d: POP ESI
// 005e725e: POP EBX
// 005e725f: RET
// 005e7260: MOV dword ptr [EDI + 0x4],0x0
//   Label: LAB_005e7260
// 005e7267: ADD ESP,0x14
// 005e726a: POP EBP
// 005e726b: POP EDI
// 005e726c: POP ESI
// 005e726d: POP EBX
// 005e726e: RET
