// Name: core_gabriela.cpp_FUN_004d4890
// Address: 004d4890
// Address Range: [[004d4890, 004d4c8b]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4890()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d2f40 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004d4834 = 004d48c8
//   TerminatedCString s_kick1_wav_0062af35
//   TerminatedCString s_hit_gh_4_7_wav_0062af3f
//   TerminatedCString s_gb_fall1_wav_0062af4f
//   double DOUBLE_0062af5d = 0.200000000000000
//   double DOUBLE_0062af65 = 0.400000000000000
//   CGore* g_CGorePtr = 02d83364
//   undefined4 g_CLightActorClassInfo.name_hash
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 DAT_02d7b864
//   undefined4 DAT_02d7b868
//   undefined4 DAT_02d7b878
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_gabriela.cpp_FUN_004d5c10
//   core_gore.cpp_FUN_004edbb0
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f3890
//   core_hero.cpp_FUN_004f38d0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d4890(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d4890(void)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  int bone_index;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  double dVar6;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_ffffff44;
  float in_stack_ffffff58;
  float fStack_90;
  CVector3f local_84 [2];
  CCharacter *local_6c;
  undefined1 local_68 [12];
  undefined1 auStack_5c [28];
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CDemonActor *local_1c;
  float local_18;
  
  this_ptr = &in_stack_00000004->model;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    switch(iVar2) {
    case 1:
    case 7:
      bone_index = DAT_02d7b864;
      if (iVar2 == 7) {
        bone_index = DAT_02d7b868;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                (this_ptr,(CVector3f *)(auStack_5c + 4),bone_index);
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
        if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
          local_18 = core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
          if ((float)DOUBLE_0062af65 < local_18) {
            (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                      (&in_stack_00000004->base_actor,(CVector3f *)(auStack_5c + 4),1.7);
          }
          else {
            local_18 = core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
            if (local_18 <= (float)DOUBLE_0062af65) {
              local_18 = core_motion_cpp_CMotionController_FUN_0052dd20
                                   (&this_ptr->motion_controller);
              if ((float)DOUBLE_0062af65 < local_18) {
                (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                          (&in_stack_00000004->base_actor,(CVector3f *)(auStack_5c + 4),1.0);
              }
            }
            else {
              (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                        (&in_stack_00000004->base_actor,(CVector3f *)(auStack_5c + 4),1.0);
            }
          }
        }
      }
      else {
        pCVar1 = (in_stack_00000004->base_actor).vtable;
        iVar2 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x154) +
                            0x3c))();
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&in_stack_00000004->base_actor,(CVector3f *)auStack_5c,
                            (CVector3f *)local_68);
        (*pCVar1->handleFootstep)(&in_stack_00000004->base_actor,pCVar4,iVar2,in_stack_ffffff44);
      }
      break;
    case 2:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                          g_CLightActorClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        if (pCVar3[4].scale.y != 1) {
          in_stack_00000004[2].cloth_data[0x5508] = -0x6e;
          in_stack_00000004[2].cloth_data[0x5509] = '\n';
          in_stack_00000004[2].cloth_data[0x550a] = '\x06';
          in_stack_00000004[2].cloth_data[0x550b] = -0x41;
          core_hero_cpp_FUN_004f3890();
          break;
        }
        in_stack_00000004[2].cloth_data[0x5508] = '|';
        in_stack_00000004[2].cloth_data[0x5509] = -0x27;
        in_stack_00000004[2].cloth_data[0x550a] = -0x60;
        in_stack_00000004[2].cloth_data[0x550b] = '>';
      }
    case 0x14:
      core_hero_cpp_FUN_004f3890();
      break;
    case 3:
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
      in_stack_ffffff58 = 1.4013e-45;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      break;
    case 6:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (in_stack_00000004->grabbed_by,g_CEnemyClassInfo.name_hash);
      local_1c = pCVar3;
      if (pCVar3 != (CDemonActor *)0x0) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr,&local_40,DAT_02d7b878);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base_actor,(CVector3f *)(local_68 + 4),pCVar4);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff60);
        local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar3,&local_34,(CVector3f *)(local_68 + 4));
        if (local_84 != pCVar4) {
          local_84[0].x = pCVar4->x;
          local_84[0].y = pCVar4->y;
          local_84[0].z = pCVar4->z;
        }
        local_6c = in_stack_00000004;
        local_68._0_4_ = in_stack_00000004;
        iVar2 = (*local_1c->vtable[1].playAmbientSoundWithVolume)
                          (local_1c,&stack0xffffff60,in_stack_ffffff58);
        if (0.0 < fStack_90) {
          fVar5 = (float10)fStack_90 * (float10)DOUBLE_0062af5d;
          dVar6 = crt_math_c_round_FUN_005fe6b0
                            ((double)CONCAT44(extraout_EDX,
                                              CONCAT22((short)((uint)iVar2 >> 0x10),
                                                       (ushort)(0.0 < fStack_90) << 8 |
                                                       (ushort)NAN(fStack_90) << 10 |
                                                       (ushort)(fStack_90 == 0.0) << 0xe)));
          core_gore_cpp_FUN_004edbb0
                    (auStack_5c + 4,(int)((ulonglong)dVar6 >> 0x20),in_stack_00000004,g_CGorePtr,
                     g_CGorePtr,auStack_5c + 4,0,(int)ROUND(fVar5) + 1);
          in_stack_ffffff58 = 7.098546e-39;
          (*((in_stack_00000004->base_actor).vtable)->playSound)
                    (&in_stack_00000004->base_actor,"kick1.wav");
          in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      if ((in_stack_00000004->grabbed_by != (CDemonActor *)0x0) &&
         (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&in_stack_00000004->base_actor,&local_28,
                              &(in_stack_00000004->grabbed_by->location).position), 0.0 < pCVar4->z)
         ) {
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"hit-gh[4,7].wav");
      }
      break;
    case 0x11:
      (*((in_stack_00000004->base_actor).vtable)->playSound)
                (&in_stack_00000004->base_actor,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_FUN_004d5c10();
      break;
    case 0x15:
      core_hero_cpp_FUN_004f38d0();
      break;
    case 0x16:
      iVar2 = core_hero_cpp_FUN_004f2ed0();
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,0,1);
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}


// Assembly code:
// 004d4890: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d4890
// 004d4891: PUSH ESI
// 004d4892: PUSH EDI
// 004d4893: PUSH EBP
// 004d4894: MOV EBP,ESP
// 004d4896: SUB ESP,0x94
// 004d489c: AND ESP,0xfffffff8
// 004d489f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d48a2: LEA ESI,[EBX + 0x158]
// 004d48a8: LEA EAX,[EBP + 0x18]
//   Label: LAB_004d48a8
//   XREF to: Stack[0x8] (DATA)
// 004d48ab: PUSH EAX
// 004d48ac: PUSH ESI
// 004d48ad: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004d48b2: MOV EDI,EAX
// 004d48b4: DEC EAX
// 004d48b5: ADD ESP,0x8
// 004d48b8: CMP EAX,0x15
// 004d48bb: JA 0x004d4c7d
//   XREF to: 004d4c7d (CONDITIONAL_JUMP)
// 004d48c1: JMP dword ptr [EAX*0x4 + 0x4d4834]
//   Label: switchD
//   XREF to: 004d48c8 (COMPUTED_JUMP)
//   XREF to: 004d493e (COMPUTED_JUMP)
//   XREF to: 004d498f (COMPUTED_JUMP)
//   XREF to: 004d4c7d (COMPUTED_JUMP)
//   XREF to: 004d4aa0 (COMPUTED_JUMP)
//   XREF to: 004d4bee (COMPUTED_JUMP)
//   XREF to: 004d4c36 (COMPUTED_JUMP)
//   XREF to: 004d4927 (COMPUTED_JUMP)
//   XREF to: 004d4c4d (COMPUTED_JUMP)
//   XREF to: 004d496b (COMPUTED_JUMP)
//   XREF to: 004d49b5 (COMPUTED_JUMP)
//   XREF to: 004d4c5b (COMPUTED_JUMP)
//   XREF to: 004d4834 (DATA)
// 004d48c8: CMP EDI,0x7
//   Label: caseD_1
// 004d48cb: JNZ 0x004d49c5
//   XREF to: 004d49c5 (CONDITIONAL_JUMP)
// 004d48d1: MOV EAX,[0x02d7b868]
//   XREF to: 02d7b868 (READ)
// 004d48d6: PUSH EAX
//   Label: LAB_004d48d6
// 004d48d7: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x58] (DATA)
// 004d48db: PUSH EAX
// 004d48dc: PUSH ESI
// 004d48dd: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004d48e2: MOV ECX,dword ptr [EBX + 0x1fbac]
// 004d48e8: ADD ESP,0xc
// 004d48eb: TEST ECX,ECX
// 004d48ed: JZ 0x004d49cf
//   XREF to: 004d49cf (CONDITIONAL_JUMP)
// 004d48f3: PUSH 0x3f800000
// 004d48f8: MOV EDX,dword ptr [ECX + 0x154]
// 004d48fe: PUSH ECX
// 004d48ff: MOV EDI,dword ptr [EBX + 0x154]
// 004d4905: CALL dword ptr [EDX + 0x3c]
// 004d4908: ADD ESP,0x4
// 004d490b: PUSH EAX
// 004d490c: LEA EAX,[ESP + 0x58]
// 004d4910: PUSH EAX
// 004d4911: LEA EAX,[ESP + 0x68]
// 004d4915: PUSH EAX
// 004d4916: PUSH EBX
// 004d4917: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d491c: ADD ESP,0xc
// 004d491f: PUSH EAX
// 004d4920: PUSH EBX
// 004d4921: CALL dword ptr [EDI + 0x20]
// 004d4924: ADD ESP,0x10
// 004d4927: FLD float ptr [EBP + 0x18]
//   Label: caseD_12
//   XREF to: Stack[0x8] (READ)
// 004d492a: FLDZ
// 004d492c: FCOMPP
// 004d492e: FNSTSW AX
// 004d4930: SAHF
// 004d4931: JC 0x004d48a8
//   XREF to: 004d48a8 (CONDITIONAL_JUMP)
// 004d4937: MOV ESP,EBP
// 004d4939: POP EBP
// 004d493a: POP EDI
// 004d493b: POP ESI
// 004d493c: POP EBX
// 004d493d: RET
// 004d493e: MOV EDI,dword ptr [0x00822c84]
//   Label: caseD_2
//   XREF to: 00822c84 (READ)
// 004d4944: PUSH EDI
// 004d4945: MOV EAX,dword ptr [EBX + 0x1fba0]
// 004d494b: PUSH EAX
// 004d494c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d4951: ADD ESP,0x8
// 004d4954: TEST EAX,EAX
// 004d4956: JZ 0x004d496b
//   XREF to: 004d496b (CONDITIONAL_JUMP)
// 004d4958: CMP dword ptr [EAX + 0x66c],0x1
// 004d495f: JNZ 0x004d4978
//   XREF to: 004d4978 (CONDITIONAL_JUMP)
// 004d4961: MOV dword ptr [EBX + 0x1fbe8],0x3ea0d97c
// 004d496b: PUSH 0x0
//   Label: caseD_14
// 004d496d: PUSH EBX
// 004d496e: CALL core_hero.cpp_FUN_004f3890
//   XREF to: 004f3890 (UNCONDITIONAL_CALL)
// 004d4973: ADD ESP,0x8
// 004d4976: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4978: MOV dword ptr [EBX + 0x1fbe8],0xbf060a92
//   Label: LAB_004d4978
// 004d4982: PUSH 0x0
// 004d4984: PUSH EBX
// 004d4985: CALL core_hero.cpp_FUN_004f3890
//   XREF to: 004f3890 (UNCONDITIONAL_CALL)
// 004d498a: ADD ESP,0x8
// 004d498d: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d498f: PUSH 0x0
//   Label: caseD_3
// 004d4991: PUSH 0x0
// 004d4993: MOV EAX,dword ptr [EBX + 0x154]
// 004d4999: PUSH EBX
// 004d499a: CALL dword ptr [EAX + 0x13c]
// 004d49a0: ADD ESP,0xc
// 004d49a3: PUSH 0x1
// 004d49a5: PUSH 0x0
// 004d49a7: PUSH ESI
// 004d49a8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d49ad: ADD ESP,0xc
// 004d49b0: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d49b5: PUSH 0x0
//   Label: caseD_15
// 004d49b7: PUSH EBX
// 004d49b8: CALL core_hero.cpp_FUN_004f38d0
//   XREF to: 004f38d0 (UNCONDITIONAL_CALL)
// 004d49bd: ADD ESP,0x8
// 004d49c0: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d49c5: MOV EAX,[0x02d7b864]
//   Label: LAB_004d49c5
//   XREF to: 02d7b864 (READ)
// 004d49ca: JMP 0x004d48d6
//   XREF to: 004d48d6 (UNCONDITIONAL_JUMP)
// 004d49cf: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_004d49cf
// 004d49d6: JZ 0x004d4927
//   XREF to: 004d4927 (CONDITIONAL_JUMP)
// 004d49dc: PUSH 0x2
// 004d49de: PUSH ESI
// 004d49df: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d49e4: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d49eb: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 004d49f2: ADD ESP,0x8
// 004d49f5: FCOMP double ptr [0x0062af65]
//   XREF to: 0062af65 (READ)
// 004d49fb: FNSTSW AX
// 004d49fd: SAHF
// 004d49fe: JA 0x004d4a40
//   XREF to: 004d4a40 (CONDITIONAL_JUMP)
// 004d4a00: PUSH 0x1
// 004d4a02: PUSH ESI
// 004d4a03: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d4a08: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d4a0f: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 004d4a16: ADD ESP,0x8
// 004d4a19: FCOMP double ptr [0x0062af65]
//   XREF to: 0062af65 (READ)
// 004d4a1f: FNSTSW AX
// 004d4a21: SAHF
// 004d4a22: JBE 0x004d4a5c
//   XREF to: 004d4a5c (CONDITIONAL_JUMP)
// 004d4a24: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x58] (DATA)
// 004d4a28: PUSH 0x3f800000
// 004d4a2d: PUSH EAX
// 004d4a2e: MOV EDX,dword ptr [EBX + 0x154]
// 004d4a34: PUSH EBX
// 004d4a35: CALL dword ptr [EDX + 0x1c]
// 004d4a38: ADD ESP,0xc
// 004d4a3b: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4a40: LEA EAX,[ESP + 0x50]
//   Label: LAB_004d4a40
//   XREF to: Stack[-0x58] (DATA)
// 004d4a44: PUSH 0x3fd9999a
// 004d4a49: PUSH EAX
// 004d4a4a: MOV EDX,dword ptr [EBX + 0x154]
// 004d4a50: PUSH EBX
// 004d4a51: CALL dword ptr [EDX + 0x1c]
// 004d4a54: ADD ESP,0xc
// 004d4a57: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4a5c: PUSH 0x3
//   Label: LAB_004d4a5c
// 004d4a5e: PUSH ESI
// 004d4a5f: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d4a64: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d4a6b: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 004d4a72: ADD ESP,0x8
// 004d4a75: FCOMP double ptr [0x0062af65]
//   XREF to: 0062af65 (READ)
// 004d4a7b: FNSTSW AX
// 004d4a7d: SAHF
// 004d4a7e: JBE 0x004d4927
//   XREF to: 004d4927 (CONDITIONAL_JUMP)
// 004d4a84: LEA EDX,[ESP + 0x50]
//   XREF to: Stack[-0x58] (DATA)
// 004d4a88: PUSH 0x3f800000
// 004d4a8d: PUSH EDX
// 004d4a8e: MOV EAX,dword ptr [EBX + 0x154]
// 004d4a94: PUSH EBX
// 004d4a95: CALL dword ptr [EAX + 0x1c]
// 004d4a98: ADD ESP,0xc
// 004d4a9b: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4aa0: MOV ECX,dword ptr [0x02cf2bf0]
//   Label: caseD_6
//   XREF to: 02cf2bf0 (READ)
// 004d4aa6: PUSH ECX
// 004d4aa7: MOV EDI,dword ptr [EBX + 0x2598]
// 004d4aad: PUSH EDI
// 004d4aae: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d4ab3: ADD ESP,0x8
// 004d4ab6: MOV EDI,EAX
// 004d4ab8: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d4abf: TEST EAX,EAX
// 004d4ac1: JNZ 0x004d4ad2
//   XREF to: 004d4ad2 (CONDITIONAL_JUMP)
// 004d4ac3: MOV dword ptr [EBX + 0x2598],0x0
//   Label: LAB_004d4ac3
// 004d4acd: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4ad2: MOV EAX,[0x02d7b878]
//   Label: LAB_004d4ad2
//   XREF to: 02d7b878 (READ)
// 004d4ad7: PUSH EAX
// 004d4ad8: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x40] (DATA)
// 004d4adc: PUSH EAX
// 004d4add: PUSH ESI
// 004d4ade: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004d4ae3: ADD ESP,0xc
// 004d4ae6: PUSH EAX
// 004d4ae7: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x64] (DATA)
// 004d4aeb: PUSH EAX
// 004d4aec: PUSH EBX
// 004d4aed: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d4af2: ADD ESP,0xc
// 004d4af5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 004d4af9: PUSH EAX
// 004d4afa: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004d4aff: ADD ESP,0x4
// 004d4b02: PUSH 0x41700000
// 004d4b07: PUSH 0x41200000
// 004d4b0c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d4b11: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d4b18: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 004d4b1f: ADD ESP,0x8
// 004d4b22: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x64] (DATA)
// 004d4b26: PUSH EAX
// 004d4b27: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x34] (DATA)
// 004d4b2b: PUSH EAX
// 004d4b2c: PUSH EDI
// 004d4b2d: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x9c] (WRITE)
// 004d4b31: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d4b36: MOV EDX,EAX
// 004d4b38: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x84] (DATA)
// 004d4b3c: ADD ESP,0xc
// 004d4b3f: CMP EAX,EDX
// 004d4b41: JZ 0x004d4b57
//   XREF to: 004d4b57 (CONDITIONAL_JUMP)
// 004d4b43: MOV EAX,dword ptr [EDX]
// 004d4b45: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 004d4b49: MOV EAX,dword ptr [EDX + 0x4]
// 004d4b4c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 004d4b50: MOV EAX,dword ptr [EDX + 0x8]
// 004d4b53: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004d4b57: MOV EAX,dword ptr [ESP + 0x8c]
//   Label: LAB_004d4b57
//   XREF to: Stack[-0x1c] (READ)
// 004d4b5e: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 004d4b62: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x6c] (WRITE)
// 004d4b66: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x68] (WRITE)
// 004d4b6a: PUSH EDX
// 004d4b6b: MOV EDX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x1c] (READ)
// 004d4b72: MOV EAX,dword ptr [EAX + 0x154]
// 004d4b78: PUSH EDX
// 004d4b79: CALL dword ptr [EAX + 0x11c]
// 004d4b7f: ADD ESP,0x8
// 004d4b82: FLDZ
// 004d4b84: FLD float ptr [ESP + 0xc]
// 004d4b88: FSTP double ptr [ESP]
// 004d4b8b: FCOMP double ptr [ESP]
// 004d4b8e: FNSTSW AX
// 004d4b90: SAHF
// 004d4b91: JNC 0x004d4ac3
//   XREF to: 004d4ac3 (CONDITIONAL_JUMP)
// 004d4b97: FLD double ptr [ESP]
// 004d4b9a: FMUL double ptr [0x0062af5d]
//   XREF to: 0062af5d (READ)
// 004d4ba0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d4ba5: FISTP dword ptr [ESP + 0x90]
// 004d4bac: MOV EAX,dword ptr [ESP + 0x90]
// 004d4bb3: PUSH 0x0
// 004d4bb5: INC EAX
// 004d4bb6: PUSH EAX
// 004d4bb7: PUSH 0x0
// 004d4bb9: LEA EAX,[ESP + 0x50]
// 004d4bbd: PUSH EAX
// 004d4bbe: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 004d4bc4: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 004d4bc5: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004d4bca: ADD ESP,0x14
// 004d4bcd: PUSH 0x62af35
//   XREF to: 0062af35 (DATA)
// 004d4bd2: MOV EAX,dword ptr [EBX + 0x154]
// 004d4bd8: PUSH EBX
// 004d4bd9: CALL dword ptr [EAX + 0x24]
// 004d4bdc: ADD ESP,0x8
// 004d4bdf: MOV dword ptr [EBX + 0x2598],0x0
// 004d4be9: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4bee: MOV EDX,dword ptr [EBX + 0x2598]
//   Label: caseD_f
// 004d4bf4: TEST EDX,EDX
// 004d4bf6: JZ 0x004d4927
//   XREF to: 004d4927 (CONDITIONAL_JUMP)
// 004d4bfc: LEA EAX,[EDX + 0x20]
// 004d4bff: PUSH EAX
// 004d4c00: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x28] (DATA)
// 004d4c07: PUSH EAX
// 004d4c08: PUSH EBX
// 004d4c09: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d4c0e: FLDZ
// 004d4c10: ADD ESP,0xc
// 004d4c13: FCOMP float ptr [EAX + 0x8]
// 004d4c16: FNSTSW AX
// 004d4c18: SAHF
// 004d4c19: JNC 0x004d4927
//   XREF to: 004d4927 (CONDITIONAL_JUMP)
// 004d4c1f: PUSH 0x62af3f
//   XREF to: 0062af3f (DATA)
// 004d4c24: MOV EAX,dword ptr [EBX + 0x154]
// 004d4c2a: PUSH EBX
// 004d4c2b: CALL dword ptr [EAX + 0x24]
// 004d4c2e: ADD ESP,0x8
// 004d4c31: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4c36: PUSH 0x62af4f
//   Label: caseD_11
//   XREF to: 0062af4f (DATA)
// 004d4c3b: MOV EAX,dword ptr [EBX + 0x154]
// 004d4c41: PUSH EBX
// 004d4c42: CALL dword ptr [EAX + 0x24]
// 004d4c45: ADD ESP,0x8
// 004d4c48: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4c4d: PUSH EBX
//   Label: caseD_13
// 004d4c4e: CALL core_gabriela.cpp_FUN_004d5c10
//   XREF to: 004d5c10 (UNCONDITIONAL_CALL)
// 004d4c53: ADD ESP,0x4
// 004d4c56: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4c5b: PUSH EBX
//   Label: caseD_16
// 004d4c5c: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 004d4c61: ADD ESP,0x4
// 004d4c64: TEST EAX,EAX
// 004d4c66: JNZ 0x004d4927
//   XREF to: 004d4927 (CONDITIONAL_JUMP)
// 004d4c6c: PUSH 0x1
// 004d4c6e: PUSH EAX
// 004d4c6f: PUSH ESI
// 004d4c70: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d4c75: ADD ESP,0xc
// 004d4c78: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
// 004d4c7d: PUSH EDI
//   Label: caseD_4
// 004d4c7e: PUSH EBX
// 004d4c7f: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004d4c84: ADD ESP,0x8
// 004d4c87: JMP 0x004d4927
//   XREF to: 004d4927 (UNCONDITIONAL_JUMP)
