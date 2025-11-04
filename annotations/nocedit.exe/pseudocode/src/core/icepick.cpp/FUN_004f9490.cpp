// Name: core_icepick.cpp_FUN_004f9490
// Address: 004f9490
// Address Range: [[004f9490, 004f9508] [004f9564, 004f958c]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f9490()
// Cross-references:
//   core_icepick.cpp_FUN_004f93a0 (004f93a0) at 004f940b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_icepick_punch_wav_0062f7e3
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f9573) */
/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f9490(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f9490(void)

{
  CDemonActor *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  undefined1 auStack_2c [12];
  char acStack_20 [16];
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)(auStack_2c + 8),
                  in_stack_00000008);
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_2c,input_local_point);
  iVar2 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar3) {
        return;
      }
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + -4);
      if (this_ptr != in_stack_00000004) break;
LAB_004f94e9:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff9c);
    core_actor_cpp_getRandomFloat_FUN_0040cc10(90.0,130.0);
    auStack_2c._4_4_ = in_stack_00000004;
    auStack_2c._8_4_ = in_stack_00000004;
    iVar1 = (*this_ptr->vtable[1].playAmbientSound)(this_ptr,acStack_20);
    if (iVar1 == 0) goto LAB_004f94e9;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}


// Assembly code:
// 004f9490: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f9490
// 004f9491: PUSH ESI
// 004f9492: PUSH EDI
// 004f9493: PUSH EBP
// 004f9494: SUB ESP,0x5c
// 004f9497: MOV ESI,dword ptr [ESP + 0x70]
// 004f949b: MOV EDX,dword ptr [ESP + 0x74]
// 004f949f: PUSH EDX
// 004f94a0: LEA EAX,[ESP + 0x4c]
// 004f94a4: PUSH EAX
// 004f94a5: LEA EAX,[ESI + 0x158]
// 004f94ab: PUSH EAX
// 004f94ac: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f94b1: ADD ESP,0xc
// 004f94b4: PUSH EAX
// 004f94b5: LEA EAX,[ESP + 0x40]
// 004f94b9: PUSH EAX
// 004f94ba: PUSH ESI
// 004f94bb: XOR EDI,EDI
// 004f94bd: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f94c2: ADD ESP,0xc
// 004f94c5: XOR ECX,ECX
// 004f94c7: XOR EBP,EBP
// 004f94c9: MOV dword ptr [ESP + 0x54],ECX
// 004f94cd: MOV EAX,[0x006810c8]
//   Label: LAB_004f94cd
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (DATA)
// 004f94d2: CMP EDI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 004f94d8: JGE 0x004f9564
//   XREF to: 004f9564 (CONDITIONAL_JUMP)
// 004f94de: MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
// 004f94e5: CMP EBX,ESI
// 004f94e7: JNZ 0x004f94ef
//   XREF to: 004f94ef (CONDITIONAL_JUMP)
// 004f94e9: INC EDI
//   Label: LAB_004f94e9
// 004f94ea: ADD EBP,0x4
// 004f94ed: JMP 0x004f94cd
//   XREF to: 004f94cd (UNCONDITIONAL_JUMP)
// 004f94ef: MOV EAX,ESP
//   Label: LAB_004f94ef
// 004f94f1: PUSH EAX
// 004f94f2: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004f94f7: ADD ESP,0x4
// 004f94fa: PUSH 0x43020000
// 004f94ff: PUSH 0x42b40000
// 004f9504: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004f9564: CMP dword ptr [ESP + 0x54],0x0
//   Label: LAB_004f9564
// 004f9569: JNZ 0x004f9573
//   XREF to: 004f9573 (CONDITIONAL_JUMP)
// 004f956b: ADD ESP,0x5c
// 004f956e: POP EBP
// 004f956f: POP EDI
// 004f9570: POP ESI
// 004f9571: POP EBX
// 004f9572: RET
// 004f9573: PUSH 0x62f7e3
//   Label: LAB_004f9573
//   XREF to: 0062f7e3 (DATA)
// 004f9578: MOV EAX,dword ptr [ESI + 0x154]
// 004f957e: PUSH ESI
// 004f957f: CALL dword ptr [EAX + 0x24]
// 004f9582: ADD ESP,0x8
// 004f9585: ADD ESP,0x5c
// 004f9588: POP EBP
// 004f9589: POP EDI
// 004f958a: POP ESI
// 004f958b: POP EBX
// 004f958c: RET
