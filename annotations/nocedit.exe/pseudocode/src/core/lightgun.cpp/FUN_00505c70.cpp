// Name: core_lightgun.cpp_FUN_00505c70
// Address: 00505c70
// Address Range: [[00505c70, 00506442]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505c70()
// Globals:
//   TerminatedCString s_CDraculaBride_0063145d
//   TerminatedCString s_CBatman_0063146b
//   TerminatedCString s_CBatCreature_00631473
//   TerminatedCString s_CBride_00631480
//   TerminatedCString s_CGhoul_00631487
//   TerminatedCString s_CTVBat_0063148e
//   TerminatedCString s_CBatCreature_00631495
//   TerminatedCString s_CWerewolf_006314a2
//   TerminatedCString s_CSvetlana_006314ac
//   TerminatedCString s_CTrigger_CGlass_006314b6
//   TerminatedCString s_s_in_volume_006314ce
//   TerminatedCString s_cre_fire_wav_006314dc
//   double DOUBLE_006314ee = 1.5
//   float FLOAT_006314f6 = 0.5
//   undefined4 DAT_00660a40
//   undefined4 DAT_00660a48
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 g_CCharacterClassInfo.name_hash
//   CConsole g_ConsolePtr
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CGlassClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613bc
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   CSound g_CSoundInstance
//   undefined4 g_CTriggerClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CVector_ctor_FUN_00410340
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
//   core_lightgun.cpp_FUN_00505ac0
//   core_setcolid.cpp_CDemonSet_FUN_00574170
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
//   core_trigger.cpp_FUN_005e0aa0
//   core_trigger.cpp_FUN_005e0ac0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_lightgun.cpp_FUN_00505c70(undefined4 param_1) */

undefined4 core_lightgun_cpp_FUN_00505c70(void)

{
  CDemonActor *actor_ptr;
  CDemonSet *this_ptr;
  CVector3f *input_local_point;
  CBoundingBox3D *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000018;
  CDemonActor *in_stack_0000001c;
  CDemonActor *in_stack_00000024;
  undefined4 in_stack_0000002c;
  CDemonActor *in_stack_00000034;
  CDemonActor *in_stack_00000044;
  CBoundingBox3D *in_stack_00000058;
  float in_stack_0000005c;
  float in_stack_00000074;
  float in_stack_00000078;
  float in_stack_0000007c;
  float in_stack_00000080;
  float in_stack_00000090;
  float in_stack_00000094;
  float in_stack_00000098;
  undefined4 *in_stack_000000a0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  CVector3f *in_stack_000000bc;
  float *in_stack_000000c0;
  CVector3f *in_stack_000000c4;
  double dVar5;
  CBoundingBox3D *in_stack_ffffff38;
  float in_stack_ffffff84;
  CDemonActor *pCStack_70;
  CVector3f CStack_60;
  float fVar6;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (in_stack_00000004[4].location.position.x < DAT_00660a40) {
    return 0;
  }
  fVar6 = in_stack_00000004[2].orient.heading;
  in_stack_00000004[4].location.position.x = 0.0;
  in_stack_00000004[4].location.area_id = (int)fVar6;
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_60,input_local_point);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)&stack0xffffff80,(CVector3f *)&stack0xffffffbc);
  fStack_1c = (float)DOUBLE_006314ee / in_stack_00000004[2].orient.heading;
  fVar6 = CStack_60.z - in_stack_ffffff84 * fStack_1c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  if (in_stack_00000004[2].orient_matrix.m[2].x != 0.0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x);
  }
  iVar4 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  do {
    in_stack_0000001c =
         (CDemonActor *)
         core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                   (g_CDemonSetPtr,(CVector3f *)&stack0xfffffff0,(CVector3f *)&pCStack_70);
    dVar5 = (double)(float)in_stack_0000001c;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    in_stack_00000004[4].location.area_id =
         (int)(in_stack_00000004[2].orient.heading * (float)in_stack_0000001c);
    in_stack_00000018 =
         core_actor_cpp_castToClassHash_FUN_0040c790
                   (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((in_stack_00000018 != (CDemonActor *)0x0) &&
       (iVar3 = (*in_stack_00000018->vtable[1].hasCollision)
                          (in_stack_00000018,(SCollisionInfo *)((ulonglong)dVar5 >> 0x20)),
       0 < iVar3)) {
      in_stack_0000002c = 0;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    in_stack_00000024 =
         core_actor_cpp_castToClassHash_FUN_0040c790
                   (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (in_stack_00000034 != (CDemonActor *)0x0) {
      iVar3 = (*in_stack_00000034->vtable[1].renderOpaque)(in_stack_00000034);
      this_ptr = g_CDemonSetPtr;
      if ((iVar3 != 0) && (iVar4 == 0)) {
        in_stack_00000004[4].location.position.x = DAT_00660a40;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar2 == (CDemonActor *)0x0) {
      if (in_stack_00000024 != (CDemonActor *)0x0) {
        core_trigger_cpp_FUN_005e0aa0();
        iVar4 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar4 != 0) {
          in_stack_00000058 =
               (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_ffffff38);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000044);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_00505ac0();
  in_stack_0000005c = 0.0;
  in_stack_00000058 = (CBoundingBox3D *)0x0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= (int)in_stack_0000005c) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,in_stack_00000004,"cre-fire.wav",(CVector3f *)&stack0x00000014
                );
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[4].actor_name + 0x1c),DAT_00660a48);
      in_stack_00000004[4].actor_name[0x18] = '\x01';
      in_stack_00000004[4].actor_name[0x19] = '\0';
      in_stack_00000004[4].actor_name[0x1a] = '\0';
      in_stack_00000004[4].actor_name[0x1b] = '\0';
      in_stack_00000004[4].location.position.z = 1.4013e-45;
      return 1;
    }
    pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + (int)in_stack_00000058 + -4);
    iVar4 = (*pCVar2->vtable[1].renderOpaque)(pCVar2);
    if (((iVar4 == 0) &&
        ((((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CGhoul"), iVar4 != 0 ||
           (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CTVBat"), iVar4 != 0)) ||
          (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBatCreature"), iVar4 != 0
          )) || ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CWerewolf"),
                 iVar4 != 0 ||
                 (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CSvetlana"),
                 iVar4 != 0)))))) ||
       ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CDraculaBride"), iVar4 != 0
        || (((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBatman"), iVar4 != 0
             || (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBatCreature"),
                iVar4 != 0)) ||
            (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBride"), iVar4 != 0))))
       )) {
      (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xffffffc4);
      iVar4 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(pCVar2->location).position,
                         (CVector3f *)&pCVar2->orient,(CVector3f *)&stack0xffffffd8);
      if (iVar4 != 0) {
        pCStack_70 = pCVar2;
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s in volume\n");
        in_stack_000000a0 = &stack0x0000007c;
        pCStack_70 = (CDemonActor *)0x505f8a;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCStack_70 = (CDemonActor *)0x505f9c;
        pCVar1 = (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xfffffffc);
        in_stack_000000bc = &pCVar1->max;
        CStack_60.z = 7.381177e-39;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0x00000070);
        in_stack_00000074 = (pCVar1->min).x + *in_stack_000000c0;
        in_stack_00000078 = (pCVar1->min).y + in_stack_000000c0[1];
        in_stack_0000007c = (pCVar1->min).z + in_stack_000000c0[2];
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0x0000008c);
        in_stack_00000090 = in_stack_00000078 * FLOAT_006314f6;
        in_stack_00000094 = in_stack_0000007c * FLOAT_006314f6;
        in_stack_00000098 = in_stack_00000080 * FLOAT_006314f6;
        CStack_60.z = 7.381377e-39;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (pCVar2,(CVector3f *)&stack0x00000054,(CVector3f *)&stack0x00000090);
        iVar4 = 0;
        in_stack_000000b4 = 0;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,in_stack_000000c4,(CVector3f *)&stack0x00000058);
          actor_ptr = g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CDemonActor *)0x0) break;
          if (pCVar2 == actor_ptr) {
            in_stack_000000b8 = 1;
            break;
          }
          iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
          if (iVar3 == 0) break;
          iVar4 = iVar4 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar4 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (in_stack_000000c0 != (float *)0x0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffd4);
          fStack_14 = 0.0;
          fStack_18 = 0.0;
          fStack_1c = 0.0;
          in_stack_0000001c = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          (*pCVar2->vtable[1].playAmbientSoundWithVolume)(pCVar2,(char *)&fStack_1c,fVar6);
        }
      }
    }
    in_stack_0000005c = (float)((int)in_stack_0000005c + 1);
    in_stack_00000058 = (CBoundingBox3D *)((int)in_stack_00000058 + 4);
  } while( true );
}


// Assembly code:
// 00505c70: PUSH EBX
//   Label: core_lightgun.cpp_FUN_00505c70
// 00505c71: PUSH ESI
// 00505c72: PUSH EDI
// 00505c73: PUSH EBP
// 00505c74: MOV EBP,ESP
// 00505c76: SUB ESP,0x110
// 00505c7c: AND ESP,0xfffffff8
// 00505c7f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00505c82: FLD float ptr [EAX + 0x580]
// 00505c88: FCOMP float ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 00505c8e: FNSTSW AX
// 00505c90: SAHF
// 00505c91: JNC 0x00505c9c
//   XREF to: 00505c9c (CONDITIONAL_JUMP)
// 00505c93: XOR EAX,EAX
// 00505c95: MOV ESP,EBP
// 00505c97: POP EBP
// 00505c98: POP EDI
// 00505c99: POP ESI
// 00505c9a: POP EBX
// 00505c9b: RET
// 00505c9c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00505c9c
//   XREF to: Stack[0x4] (READ)
// 00505c9f: LEA EBX,[ESP + 0xa8]
//   XREF to: Stack[-0x78] (DATA)
// 00505ca6: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00505ca9: PUSH EBX
// 00505caa: FLD float ptr [EAX + 0x2e8]
// 00505cb0: MOV dword ptr [EAX + 0x580],0x0
// 00505cba: PUSH EDX
// 00505cbb: FSTP float ptr [EAX + 0x58c]
// 00505cc1: MOV EAX,dword ptr [EAX + 0x154]
// 00505cc7: CALL dword ptr [EAX + 0xf4]
// 00505ccd: ADD ESP,0x8
// 00505cd0: PUSH EAX
// 00505cd1: LEA EAX,[ESP + 0xb8]
// 00505cd8: PUSH EAX
// 00505cd9: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00505cdc: PUSH ECX
// 00505cdd: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00505ce2: ADD ESP,0xc
// 00505ce5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00505ce8: MOV EAX,dword ptr [EAX + 0x2e8]
// 00505cee: MOV dword ptr [ESP + 0xd4],EAX
// 00505cf5: LEA EAX,[ESP + 0xcc]
// 00505cfc: PUSH EAX
// 00505cfd: LEA EAX,[ESP + 0x94]
// 00505d04: PUSH EAX
// 00505d05: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00505d08: XOR EBX,EBX
// 00505d0a: PUSH EDI
// 00505d0b: MOV dword ptr [ESP + 0xd8],EBX
// 00505d12: MOV dword ptr [ESP + 0xdc],EBX
// 00505d19: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00505d1e: ADD ESP,0xc
// 00505d21: FLD float ptr [ESP + 0xb4]
// 00505d28: FLD float ptr [ESP + 0xb8]
// 00505d2f: FLD float ptr [ESP + 0xbc]
// 00505d36: FXCH ST2
// 00505d38: FADD float ptr [ESP + 0x90]
// 00505d3f: FXCH
// 00505d41: FADD float ptr [ESP + 0x94]
// 00505d48: FXCH ST2
// 00505d4a: FADD float ptr [ESP + 0x98]
// 00505d51: FXCH
// 00505d53: FSTP float ptr [ESP + 0x84]
// 00505d5a: FXCH
// 00505d5c: FSTP float ptr [ESP + 0x88]
// 00505d63: FSTP float ptr [ESP + 0x8c]
// 00505d6a: FLD float ptr [EDI + 0x2e8]
// 00505d70: FDIVR double ptr [0x006314ee]
//   XREF to: 006314ee (READ)
// 00505d76: FLD float ptr [ESP + 0x90]
// 00505d7d: FXCH
// 00505d7f: FSTP float ptr [ESP + 0xf0]
// 00505d86: FMUL float ptr [ESP + 0xf0]
// 00505d8d: FLD float ptr [ESP + 0x94]
// 00505d94: FMUL float ptr [ESP + 0xf0]
// 00505d9b: FLD float ptr [ESP + 0x98]
// 00505da2: FMUL float ptr [ESP + 0xf0]
// 00505da9: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505dae: FLD float ptr [ESP + 0xb4]
// 00505db5: FLD float ptr [ESP + 0xb8]
// 00505dbc: FLD float ptr [ESP + 0xbc]
// 00505dc3: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00505dc4: FXCH ST5
// 00505dc6: FSTP float ptr [ESP + 0x7c]
// 00505dca: FXCH ST3
// 00505dcc: FSTP float ptr [ESP + 0x80]
// 00505dd3: FXCH
// 00505dd5: FSTP float ptr [ESP + 0x84]
// 00505ddc: FSUB float ptr [ESP + 0x7c]
// 00505de0: FXCH
// 00505de2: FSUB float ptr [ESP + 0x80]
// 00505de9: FXCH ST2
// 00505deb: FSUB float ptr [ESP + 0x84]
// 00505df2: FXCH
// 00505df4: FSTP float ptr [ESP + 0xe8]
// 00505dfb: FXCH
// 00505dfd: FSTP float ptr [ESP + 0xec]
// 00505e04: FSTP float ptr [ESP + 0xf0]
// 00505e0b: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00505e10: ADD ESP,0x4
// 00505e13: PUSH 0x1
// 00505e15: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505e1b: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00505e1c: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 00505e21: ADD ESP,0x8
// 00505e24: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505e2a: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00505e2b: CALL core_setcolid.cpp_CDemonSet_FUN_00574170
//   XREF to: 00574170 (UNCONDITIONAL_CALL)
// 00505e30: ADD ESP,0x4
// 00505e33: PUSH EDI
// 00505e34: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00505e3a: PUSH ESI
//   XREF to: 03114278 (DATA)
// 00505e3b: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00505e40: MOV EDI,dword ptr [EDI + 0x304]
// 00505e46: ADD ESP,0x8
// 00505e49: TEST EDI,EDI
// 00505e4b: JNZ 0x005060c8
//   XREF to: 005060c8 (CONDITIONAL_JUMP)
// 00505e51: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_00505e51
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505e57: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00505e58: XOR EDI,EDI
// 00505e5a: CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   XREF to: 00573e10 (UNCONDITIONAL_CALL)
// 00505e5f: ADD ESP,0x4
// 00505e62: LEA EAX,[ESP + 0x84]
//   Label: LAB_00505e62
// 00505e69: PUSH EAX
// 00505e6a: LEA EAX,[ESP + 0xe8]
// 00505e71: PUSH EAX
// 00505e72: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00505e78: PUSH ESI
//   XREF to: 03114278 (DATA)
// 00505e79: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 00505e7e: MOV dword ptr [ESP + 0x118],EAX
// 00505e85: FLD float ptr [ESP + 0x118]
// 00505e8c: ADD ESP,0xc
// 00505e8f: FLDZ
// 00505e91: FXCH
// 00505e93: FST float ptr [ESP + 0x8]
// 00505e97: FSTP double ptr [ESP]
// 00505e9a: FCOMP double ptr [ESP]
// 00505e9d: FNSTSW AX
// 00505e9f: SAHF
// 00505ea0: JBE 0x005060e6
//   XREF to: 005060e6 (CONDITIONAL_JUMP)
// 00505ea6: MOV EAX,[0x006810c8]
//   Label: LAB_00505ea6
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505eab: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00505eac: CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   XREF to: 00573fc0 (UNCONDITIONAL_CALL)
// 00505eb1: ADD ESP,0x4
// 00505eb4: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00505eb7: PUSH EDX
// 00505eb8: CALL core_lightgun.cpp_FUN_00505ac0
//   XREF to: 00505ac0 (UNCONDITIONAL_CALL)
// 00505ebd: ADD ESP,0x4
// 00505ec0: XOR ECX,ECX
// 00505ec2: MOV dword ptr [ESP + 0x100],ECX
// 00505ec9: MOV dword ptr [ESP + 0xfc],ECX
// 00505ed0: MOV EAX,[0x006810c8]
//   Label: LAB_00505ed0
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505ed5: MOV EBX,dword ptr [ESP + 0x100]
// 00505edc: CMP EBX,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 00505ee2: JGE 0x005063e6
//   XREF to: 005063e6 (CONDITIONAL_JUMP)
// 00505ee8: ADD EAX,dword ptr [ESP + 0xfc]
// 00505eef: MOV ESI,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 00505ef5: PUSH ESI
// 00505ef6: MOV EAX,dword ptr [ESI + 0x154]
// 00505efc: CALL dword ptr [EAX + 0xf4]
// 00505f02: ADD ESP,0x4
// 00505f05: TEST EAX,EAX
// 00505f07: JZ 0x00506274
//   XREF to: 00506274 (CONDITIONAL_JUMP)
// 00505f0d: PUSH 0x63145d
//   Label: LAB_00505f0d
//   XREF to: 0063145d (DATA)
// 00505f12: PUSH ESI
// 00505f13: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505f18: ADD ESP,0x8
// 00505f1b: TEST EAX,EAX
// 00505f1d: JZ 0x005062e7
//   XREF to: 005062e7 (CONDITIONAL_JUMP)
// 00505f23: LEA EAX,[ESP + 0x48]
//   Label: LAB_00505f23
// 00505f27: PUSH EAX
// 00505f28: MOV EBX,dword ptr [ESI + 0x154]
// 00505f2e: PUSH ESI
// 00505f2f: CALL dword ptr [EBX + 0x14]
// 00505f32: ADD ESP,0x8
// 00505f35: LEA EAX,[ESP + 0x54]
// 00505f39: PUSH EAX
// 00505f3a: LEA EAX,[ESP + 0x4c]
// 00505f3e: PUSH EAX
// 00505f3f: LEA EAX,[ESI + 0x30]
// 00505f42: PUSH EAX
// 00505f43: LEA EAX,[ESI + 0x20]
// 00505f46: PUSH EAX
// 00505f47: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 00505f4c: CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
//   XREF to: 00452180 (UNCONDITIONAL_CALL)
// 00505f51: ADD ESP,0x14
// 00505f54: TEST EAX,EAX
// 00505f56: JZ 0x005060a3
//   XREF to: 005060a3 (CONDITIONAL_JUMP)
// 00505f5c: PUSH ESI
// 00505f5d: PUSH 0x6314ce
//   XREF to: 006314ce (DATA)
// 00505f62: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00505f68: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 00505f69: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00505f6e: LEA EAX,[ESP + 0xf0]
// 00505f75: ADD ESP,0xc
// 00505f78: MOV dword ptr [ESP + 0x108],EAX
// 00505f7f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505f84: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00505f85: CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   XREF to: 00573e10 (UNCONDITIONAL_CALL)
// 00505f8a: ADD ESP,0x4
// 00505f8d: LEA EAX,[ESP + 0x60]
// 00505f91: PUSH EAX
// 00505f92: MOV EBX,dword ptr [ESI + 0x154]
// 00505f98: PUSH ESI
// 00505f99: CALL dword ptr [EBX + 0x14]
// 00505f9c: MOV EBX,EAX
// 00505f9e: ADD ESP,0x8
// 00505fa1: ADD EAX,0xc
// 00505fa4: MOV dword ptr [ESP + 0x10c],EAX
// 00505fab: LEA EAX,[ESP + 0xc0]
// 00505fb2: PUSH EAX
// 00505fb3: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 00505fb8: ADD ESP,0x4
// 00505fbb: MOV EAX,dword ptr [ESP + 0x10c]
// 00505fc2: FLD float ptr [EBX]
// 00505fc4: FADD float ptr [EAX]
// 00505fc6: FSTP float ptr [ESP + 0xc0]
// 00505fcd: FLD float ptr [EBX + 0x4]
// 00505fd0: FADD float ptr [EAX + 0x4]
// 00505fd3: FSTP float ptr [ESP + 0xc4]
// 00505fda: FLD float ptr [EBX + 0x8]
// 00505fdd: FADD float ptr [EAX + 0x8]
// 00505fe0: LEA EAX,[ESP + 0xd8]
// 00505fe7: PUSH EAX
// 00505fe8: FSTP float ptr [ESP + 0xcc]
// 00505fef: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 00505ff4: ADD ESP,0x4
// 00505ff7: FLD float ptr [0x006314f6]
//   XREF to: 006314f6 (READ)
// 00505ffd: FLD float ptr [ESP + 0xc0]
// 00506004: FMUL ST1
// 00506006: FLD float ptr [ESP + 0xc4]
// 0050600d: FMUL ST2
// 0050600f: FLD float ptr [ESP + 0xc8]
// 00506016: FMULP ST3
// 00506018: LEA EAX,[ESP + 0xd8]
// 0050601f: MOV EDI,ESI
// 00506021: PUSH EAX
// 00506022: LEA EAX,[ESP + 0xa0]
// 00506029: FXCH
// 0050602b: FSTP float ptr [ESP + 0xdc]
// 00506032: PUSH EAX
// 00506033: FSTP float ptr [ESP + 0xe4]
// 0050603a: PUSH ESI
// 0050603b: FSTP float ptr [ESP + 0xec]
// 00506042: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00506047: ADD ESP,0xc
// 0050604a: XOR EDX,EDX
// 0050604c: XOR EBX,EBX
// 0050604e: MOV dword ptr [ESP + 0xf8],EDX
// 00506055: LEA EAX,[ESP + 0x9c]
//   Label: LAB_00506055
// 0050605c: PUSH EAX
// 0050605d: MOV ECX,dword ptr [ESP + 0x10c]
// 00506064: PUSH ECX
// 00506065: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0050606a: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0050606b: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 00506070: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00506075: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0050607b: ADD ESP,0xc
// 0050607e: TEST EDX,EDX
// 00506080: JNZ 0x00506352
//   XREF to: 00506352 (CONDITIONAL_JUMP)
// 00506086: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_00506086
//   XREF to: 006810c8 (READ)
// 0050608c: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0050608d: CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   XREF to: 00573fc0 (UNCONDITIONAL_CALL)
// 00506092: ADD ESP,0x4
// 00506095: CMP dword ptr [ESP + 0xf8],0x0
// 0050609d: JNZ 0x0050637d
//   XREF to: 0050637d (CONDITIONAL_JUMP)
// 005060a3: MOV ESI,dword ptr [ESP + 0x100]
//   Label: LAB_005060a3
// 005060aa: MOV EBX,dword ptr [ESP + 0xfc]
// 005060b1: INC ESI
// 005060b2: ADD EBX,0x4
// 005060b5: MOV dword ptr [ESP + 0x100],ESI
// 005060bc: MOV dword ptr [ESP + 0xfc],EBX
// 005060c3: JMP 0x00505ed0
//   XREF to: 00505ed0 (UNCONDITIONAL_JUMP)
// 005060c8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005060c8
//   XREF to: Stack[0x4] (READ)
// 005060cb: MOV EDX,dword ptr [EAX + 0x304]
// 005060d1: PUSH EDX
// 005060d2: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005060d8: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005060d9: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005060de: ADD ESP,0x8
// 005060e1: JMP 0x00505e51
//   XREF to: 00505e51 (UNCONDITIONAL_JUMP)
// 005060e6: FLD1
//   Label: LAB_005060e6
// 005060e8: FCOMP double ptr [ESP]
// 005060eb: FNSTSW AX
// 005060ed: SAHF
// 005060ee: JC 0x00505ea6
//   XREF to: 00505ea6 (CONDITIONAL_JUMP)
// 005060f4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005060f7: FLD float ptr [EAX + 0x2e8]
// 005060fd: FMUL float ptr [ESP + 0x8]
// 00506101: FSTP float ptr [EAX + 0x58c]
// 00506107: MOV EAX,[0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0050610c: PUSH EAX
// 0050610d: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00506112: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00506118: PUSH EDX
// 00506119: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0050611e: ADD ESP,0x8
// 00506121: MOV dword ptr [ESP + 0x104],EAX
// 00506128: TEST EAX,EAX
// 0050612a: JZ 0x00506149
//   XREF to: 00506149 (CONDITIONAL_JUMP)
// 0050612c: PUSH EAX
// 0050612d: MOV EBX,dword ptr [EAX + 0x154]
// 00506133: CALL dword ptr [EBX + 0x120]
// 00506139: ADD ESP,0x4
// 0050613c: TEST EAX,EAX
// 0050613e: JLE 0x00506149
//   XREF to: 00506149 (CONDITIONAL_JUMP)
// 00506140: XOR ECX,ECX
// 00506142: MOV dword ptr [ESP + 0x104],ECX
// 00506149: MOV EBX,dword ptr [0x02d83360]
//   Label: LAB_00506149
//   XREF to: 02d83360 (READ)
// 0050614f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00506154: PUSH EBX
// 00506155: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0050615b: PUSH ESI
// 0050615c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00506161: ADD ESP,0x8
// 00506164: MOV ESI,EAX
// 00506166: MOV EAX,[0x03f87490]
//   XREF to: 03f87490 (READ)
// 0050616b: PUSH EAX
// 0050616c: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00506171: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00506177: PUSH EDX
// 00506178: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0050617d: ADD ESP,0x8
// 00506180: MOV EBX,EAX
// 00506182: MOV ECX,dword ptr [ESP + 0x104]
// 00506189: MOV dword ptr [ESP + 0xf4],EAX
// 00506190: TEST ECX,ECX
// 00506192: JZ 0x005061ea
//   XREF to: 005061ea (CONDITIONAL_JUMP)
// 00506194: PUSH ECX
// 00506195: MOV EAX,dword ptr [ECX + 0x154]
// 0050619b: CALL dword ptr [EAX + 0xf4]
// 005061a1: ADD ESP,0x4
// 005061a4: TEST EAX,EAX
// 005061a6: JZ 0x00505ea6
//   XREF to: 00505ea6 (CONDITIONAL_JUMP)
// 005061ac: TEST EDI,EDI
// 005061ae: JNZ 0x00505ea6
//   XREF to: 00505ea6 (CONDITIONAL_JUMP)
// 005061b4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005061b7: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005061bd: FLD float ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 005061c3: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005061c4: FSTP float ptr [EAX + 0x580]
// 005061ca: CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   XREF to: 00573fc0 (UNCONDITIONAL_CALL)
// 005061cf: ADD ESP,0x4
// 005061d2: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005061d8: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005061d9: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005061de: ADD ESP,0x4
// 005061e1: XOR EAX,EAX
// 005061e3: MOV ESP,EBP
// 005061e5: POP EBP
// 005061e6: POP EDI
// 005061e7: POP ESI
// 005061e8: POP EBX
// 005061e9: RET
// 005061ea: TEST ESI,ESI
//   Label: LAB_005061ea
// 005061ec: JNZ 0x00506255
//   XREF to: 00506255 (CONDITIONAL_JUMP)
// 005061ee: TEST EAX,EAX
// 005061f0: JZ 0x00506265
//   XREF to: 00506265 (CONDITIONAL_JUMP)
// 005061f2: PUSH EAX
// 005061f3: CALL core_trigger.cpp_FUN_005e0aa0
//   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)
// 005061f8: ADD ESP,0x4
// 005061fb: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005061fe: PUSH ESI
// 005061ff: PUSH EBX
// 00506200: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 00506205: ADD ESP,0x8
// 00506208: TEST EAX,EAX
// 0050620a: JZ 0x00506239
//   XREF to: 00506239 (CONDITIONAL_JUMP)
// 0050620c: PUSH ESI
// 0050620d: MOV EAX,dword ptr [ESI + 0x154]
// 00506213: CALL dword ptr [EAX + 0x100]
// 00506219: MOV dword ptr [ESP + 0x110],EAX
// 00506220: FLD float ptr [ESP + 0x110]
// 00506227: ADD ESP,0x4
// 0050622a: SUB ESP,0x4
// 0050622d: FSTP float ptr [ESP]
// 00506230: PUSH EBX
// 00506231: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 00506236: ADD ESP,0x8
// 00506239: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_00506239
// 00506240: PUSH EAX
// 00506241: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00506247: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00506248: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0050624d: ADD ESP,0x8
// 00506250: JMP 0x00505ea6
//   XREF to: 00505ea6 (UNCONDITIONAL_JUMP)
// 00506255: PUSH ESI
//   Label: LAB_00506255
// 00506256: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0050625c: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0050625d: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00506262: ADD ESP,0x8
// 00506265: INC EDI
//   Label: LAB_00506265
// 00506266: CMP EDI,0x1
// 00506269: JL 0x00505e62
//   XREF to: 00505e62 (CONDITIONAL_JUMP)
// 0050626f: JMP 0x00505ea6
//   XREF to: 00505ea6 (UNCONDITIONAL_JUMP)
// 00506274: PUSH 0x631487
//   Label: LAB_00506274
//   XREF to: 00631487 (DATA)
// 00506279: PUSH ESI
// 0050627a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0050627f: ADD ESP,0x8
// 00506282: TEST EAX,EAX
// 00506284: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 0050628a: PUSH 0x63148e
//   XREF to: 0063148e (DATA)
// 0050628f: PUSH ESI
// 00506290: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00506295: ADD ESP,0x8
// 00506298: TEST EAX,EAX
// 0050629a: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 005062a0: PUSH 0x631495
//   XREF to: 00631495 (DATA)
// 005062a5: PUSH ESI
// 005062a6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005062ab: ADD ESP,0x8
// 005062ae: TEST EAX,EAX
// 005062b0: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 005062b6: PUSH 0x6314a2
//   XREF to: 006314a2 (DATA)
// 005062bb: PUSH ESI
// 005062bc: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005062c1: ADD ESP,0x8
// 005062c4: TEST EAX,EAX
// 005062c6: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 005062cc: PUSH 0x6314ac
//   XREF to: 006314ac (DATA)
// 005062d1: PUSH ESI
// 005062d2: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005062d7: ADD ESP,0x8
// 005062da: TEST EAX,EAX
// 005062dc: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 005062e2: JMP 0x00505f0d
//   XREF to: 00505f0d (UNCONDITIONAL_JUMP)
// 005062e7: PUSH 0x63146b
//   Label: LAB_005062e7
//   XREF to: 0063146b (DATA)
// 005062ec: PUSH ESI
// 005062ed: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005062f2: ADD ESP,0x8
// 005062f5: TEST EAX,EAX
// 005062f7: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 005062fd: PUSH 0x631473
//   XREF to: 00631473 (DATA)
// 00506302: PUSH ESI
// 00506303: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00506308: ADD ESP,0x8
// 0050630b: TEST EAX,EAX
// 0050630d: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 00506313: PUSH 0x631480
//   XREF to: 00631480 (DATA)
// 00506318: PUSH ESI
// 00506319: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0050631e: ADD ESP,0x8
// 00506321: TEST EAX,EAX
// 00506323: JNZ 0x00505f23
//   XREF to: 00505f23 (CONDITIONAL_JUMP)
// 00506329: JMP 0x005060a3
//   XREF to: 005060a3 (UNCONDITIONAL_JUMP)
// 0050632e: MOV EAX,[0x006810c8]
//   Label: LAB_0050632e
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00506333: MOV ECX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00506339: PUSH ECX
// 0050633a: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0050633b: INC EBX
// 0050633c: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00506341: ADD ESP,0x8
// 00506344: CMP EBX,0x3
// 00506347: JL 0x00506055
//   XREF to: 00506055 (CONDITIONAL_JUMP)
// 0050634d: JMP 0x00506086
//   XREF to: 00506086 (UNCONDITIONAL_JUMP)
// 00506352: CMP EDI,EDX
//   Label: LAB_00506352
// 00506354: JNZ 0x00506366
//   XREF to: 00506366 (CONDITIONAL_JUMP)
// 00506356: MOV dword ptr [ESP + 0xf8],0x1
// 00506361: JMP 0x00506086
//   XREF to: 00506086 (UNCONDITIONAL_JUMP)
// 00506366: PUSH 0x6314b6
//   Label: LAB_00506366
//   XREF to: 006314b6 (DATA)
// 0050636b: PUSH EDX
// 0050636c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00506371: ADD ESP,0x8
// 00506374: TEST EAX,EAX
// 00506376: JNZ 0x0050632e
//   XREF to: 0050632e (CONDITIONAL_JUMP)
// 00506378: JMP 0x00506086
//   XREF to: 00506086 (UNCONDITIONAL_JUMP)
// 0050637d: LEA EAX,[ESP + 0xc]
//   Label: LAB_0050637d
// 00506381: PUSH EAX
// 00506382: XOR EBX,EBX
// 00506384: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00506389: MOV EDX,0x3dcccccd
// 0050638e: ADD ESP,0x4
// 00506391: MOV ECX,0x6c
// 00506396: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00506399: MOV dword ptr [ESP + 0x10],EDX
// 0050639d: MOV dword ptr [ESP + 0x3c],ECX
// 005063a1: MOV dword ptr [ESP + 0x14],EBX
// 005063a5: MOV dword ptr [ESP + 0x20],EBX
// 005063a9: MOV dword ptr [ESP + 0x1c],EBX
// 005063ad: MOV dword ptr [ESP + 0x18],EBX
// 005063b1: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005063b4: MOV dword ptr [ESP + 0x40],EAX
// 005063b8: PUSH ECX
// 005063b9: MOV EAX,dword ptr [EAX + 0x154]
// 005063bf: CALL dword ptr [EAX + 0x8c]
// 005063c5: ADD ESP,0x4
// 005063c8: MOV dword ptr [ESP + 0x44],EAX
// 005063cc: LEA EAX,[ESP + 0xc]
// 005063d0: PUSH EAX
// 005063d1: MOV EBX,dword ptr [ESI + 0x154]
// 005063d7: PUSH ESI
// 005063d8: CALL dword ptr [EBX + 0x11c]
// 005063de: ADD ESP,0x8
// 005063e1: JMP 0x005060a3
//   XREF to: 005060a3 (UNCONDITIONAL_JUMP)
// 005063e6: PUSH EAX
//   Label: LAB_005063e6
//   XREF to: 03114278 (DATA)
// 005063e7: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005063ec: ADD ESP,0x4
// 005063ef: LEA EAX,[ESP + 0xb4]
// 005063f6: PUSH EAX
// 005063f7: PUSH 0x6314dc
//   XREF to: 006314dc (DATA)
// 005063fc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005063ff: PUSH EDI
// 00506400: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00506405: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 00506406: CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 0050640b: ADD ESP,0x10
// 0050640e: MOV EDX,dword ptr [EDI + 0x57c]
// 00506414: PUSH dword ptr [0x00660a48]
//   XREF to: 00660a48 (READ)
// 0050641a: PUSH EDX
// 0050641b: CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 00506420: MOV EAX,0x1
// 00506425: MOV dword ptr [EDI + 0x578],0x1
// 0050642f: ADD ESP,0x8
// 00506432: MOV dword ptr [EDI + 0x588],0x1
// 0050643c: MOV ESP,EBP
// 0050643e: POP EBP
// 0050643f: POP EDI
// 00506440: POP ESI
// 00506441: POP EBX
// 00506442: RET
