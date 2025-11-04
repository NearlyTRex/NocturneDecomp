// Name: core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
// Address: 005d9a10
// Address Range: [[005d9a10, 005d9ba2]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10()
// Cross-references:
//   core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970 (005d9970) at 005d99a0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_svetlana_cpp_00654b0a
//   TerminatedCString s_Can_t_find_svetlana_s_pa_00654b1f
//   TerminatedCString s_svetlana_attack_wav_00654b41
//   TerminatedCString s_svetlana_miss_wav_00654b56
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   undefined4 DAT_0326331c
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d9b82) */
/* Signature: undefined1 actors_hero_svetlana.cpp_AttackWithParentBone(undefined4 param_1,
   undefined4 param_2) */

void core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CSkeleton *pCVar6;
  int iVar7;
  int iVar8;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  undefined1 auStack_6c [68];
  CVector3f CStack_28;
  float local_14;
  
  fVar5 = 0.0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  local_14 = -NAN;
  pCVar6 = pCVar2;
  fVar1 = local_14;
  if (0 < pCVar2->bone_count) {
    do {
      fVar1 = fVar5;
      if (in_stack_00000008 == pCVar6->bone_list[0].parent_index) break;
      fVar5 = (float)((int)fVar5 + 1);
      pCVar6 = (CSkeleton *)((pCVar6->motion_list).state_names[1] + 2);
      fVar1 = local_14;
    } while ((int)fVar5 < pCVar2->bone_count);
  }
  local_14 = fVar1;
  if (local_14 == -NAN) {
    g_CurrentFilename = "..\\core\\svetlana.cpp";
    g_CurrentLineNumber = 0x2f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find svetlana's parent bone");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_28,
                      in_stack_00000008);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xffffffe8,pCVar3);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),
                      (CVector3f *)(auStack_6c + 0x34),unaff_ESI);
  iVar7 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_28,pCVar3);
  iVar8 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar8) {
        (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"svetlana-miss?.wav");
        return;
      }
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar7 + -4);
      if (this_ptr != in_stack_00000004) break;
LAB_005d9adc:
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_6c);
    auStack_6c._8_4_ = 0x41700000;
    auStack_6c._0_4_ = 0;
    auStack_6c._44_4_ = 3;
    auStack_6c._48_4_ = 0x3f333333;
    auStack_6c._52_4_ = (CDemonActor *)0x67;
    iVar4 = (*this_ptr->vtable[1].playSoundWithVolume)
                      (this_ptr,&stack0xfffffff8,(float)&CStack_28.z);
    if (iVar4 == 0) goto LAB_005d9adc;
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
  } while( true );
}


// Assembly code:
// 005d9a10: PUSH EBX
//   Label: core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
// 005d9a11: PUSH ESI
// 005d9a12: PUSH EDI
// 005d9a13: PUSH EBP
// 005d9a14: SUB ESP,0x74
// 005d9a17: MOV EBP,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 005d9a1e: MOV EDI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x8] (READ)
// 005d9a25: LEA EAX,[EBP + 0x158]
// 005d9a2b: PUSH EAX
// 005d9a2c: XOR EBX,EBX
// 005d9a2e: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005d9a33: MOV EDX,0xffffffff
// 005d9a38: MOV ESI,EAX
// 005d9a3a: ADD ESP,0x4
// 005d9a3d: MOV ECX,dword ptr [EAX + 0x28558]
// 005d9a43: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005d9a47: TEST ECX,ECX
// 005d9a49: JLE 0x005d9a65
//   XREF to: 005d9a65 (CONDITIONAL_JUMP)
// 005d9a4b: CMP EDI,dword ptr [ESI + 0x2857c]
//   Label: LAB_005d9a4b
// 005d9a51: JZ 0x005d9ae2
//   XREF to: 005d9ae2 (CONDITIONAL_JUMP)
// 005d9a57: INC EBX
// 005d9a58: MOV EDX,dword ptr [EAX + 0x28558]
// 005d9a5e: ADD ESI,0x24
// 005d9a61: CMP EBX,EDX
// 005d9a63: JL 0x005d9a4b
//   XREF to: 005d9a4b (CONDITIONAL_JUMP)
// 005d9a65: CMP dword ptr [ESP + 0x6c],-0x1
//   Label: LAB_005d9a65
//   XREF to: Stack[-0x18] (READ)
// 005d9a6a: JZ 0x005d9aeb
//   XREF to: 005d9aeb (CONDITIONAL_JUMP)
// 005d9a70: PUSH EDI
//   Label: LAB_005d9a70
// 005d9a71: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x30] (DATA)
// 005d9a75: PUSH EAX
// 005d9a76: LEA EBX,[EBP + 0x158]
// 005d9a7c: PUSH EBX
// 005d9a7d: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005d9a82: ADD ESP,0xc
// 005d9a85: PUSH EAX
// 005d9a86: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x24] (DATA)
// 005d9a8a: PUSH EAX
// 005d9a8b: PUSH EBP
// 005d9a8c: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005d9a91: ADD ESP,0xc
// 005d9a94: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 005d9a98: PUSH EDX
// 005d9a99: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x48] (DATA)
// 005d9a9d: PUSH EAX
// 005d9a9e: PUSH EBX
// 005d9a9f: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005d9aa4: ADD ESP,0xc
// 005d9aa7: PUSH EAX
// 005d9aa8: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x3c] (DATA)
// 005d9aac: PUSH EAX
// 005d9aad: PUSH EBP
// 005d9aae: XOR ESI,ESI
// 005d9ab0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005d9ab5: ADD ESP,0xc
// 005d9ab8: XOR ECX,ECX
// 005d9aba: XOR EDI,EDI
// 005d9abc: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005d9ac0: MOV EAX,[0x006810c8]
//   Label: LAB_005d9ac0
//   XREF to: 006810c8 (READ)
// 005d9ac5: CMP EDI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 005d9acb: JGE 0x005d9b7b
//   XREF to: 005d9b7b (CONDITIONAL_JUMP)
// 005d9ad1: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
//   XREF to: 0326331c (READ)
// 005d9ad8: CMP EBX,EBP
// 005d9ada: JNZ 0x005d9b12
//   XREF to: 005d9b12 (CONDITIONAL_JUMP)
// 005d9adc: INC EDI
//   Label: LAB_005d9adc
// 005d9add: ADD ESI,0x4
// 005d9ae0: JMP 0x005d9ac0
//   XREF to: 005d9ac0 (UNCONDITIONAL_JUMP)
// 005d9ae2: MOV dword ptr [ESP + 0x6c],EBX
//   Label: LAB_005d9ae2
//   XREF to: Stack[-0x18] (WRITE)
// 005d9ae6: JMP 0x005d9a65
//   XREF to: 005d9a65 (UNCONDITIONAL_JUMP)
// 005d9aeb: MOV ESI,0x654b0a
//   Label: LAB_005d9aeb
//   XREF to: 00654b0a (DATA)
// 005d9af0: MOV EAX,0x2f0
// 005d9af5: PUSH 0x654b1f
//   XREF to: 00654b1f (DATA)
// 005d9afa: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005d9b00: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005d9b05: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005d9b0a: ADD ESP,0x4
// 005d9b0d: JMP 0x005d9a70
//   XREF to: 005d9a70 (UNCONDITIONAL_JUMP)
// 005d9b12: MOV EAX,ESP
//   Label: LAB_005d9b12
// 005d9b14: PUSH EAX
// 005d9b15: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005d9b1a: MOV EAX,0x41700000
// 005d9b1f: ADD ESP,0x4
// 005d9b22: MOV EDX,0x3f333333
// 005d9b27: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005d9b2b: MOV EAX,0x3
// 005d9b30: PUSH 0x0
// 005d9b32: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d9b36: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x84] (DATA)
// 005d9b3a: MOV ECX,0x67
// 005d9b3f: PUSH EAX
// 005d9b40: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x3c] (DATA)
// 005d9b44: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005d9b48: PUSH EAX
// 005d9b49: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x24] (DATA)
// 005d9b4d: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005d9b51: PUSH EAX
// 005d9b52: MOV EDX,dword ptr [EBX + 0x154]
// 005d9b58: PUSH EBX
// 005d9b59: CALL dword ptr [EDX + 0x118]
// 005d9b5f: ADD ESP,0x14
// 005d9b62: TEST EAX,EAX
// 005d9b64: JZ 0x005d9adc
//   XREF to: 005d9adc (CONDITIONAL_JUMP)
// 005d9b6a: MOV dword ptr [ESP + 0x70],0x1
// 005d9b72: INC EDI
// 005d9b73: ADD ESI,0x4
// 005d9b76: JMP 0x005d9ac0
//   XREF to: 005d9ac0 (UNCONDITIONAL_JUMP)
// 005d9b7b: CMP dword ptr [ESP + 0x70],0x0
//   Label: LAB_005d9b7b
//   XREF to: Stack[-0x14] (READ)
// 005d9b80: JZ 0x005d9b9c
//   XREF to: 005d9b9c (CONDITIONAL_JUMP)
// 005d9b82: PUSH 0x654b41
//   XREF to: 00654b41 (DATA)
// 005d9b87: MOV EAX,dword ptr [EBP + 0x154]
//   Label: LAB_005d9b87
// 005d9b8d: PUSH EBP
// 005d9b8e: CALL dword ptr [EAX + 0x24]
// 005d9b91: ADD ESP,0x8
// 005d9b94: ADD ESP,0x74
// 005d9b97: POP EBP
// 005d9b98: POP EDI
// 005d9b99: POP ESI
// 005d9b9a: POP EBX
// 005d9b9b: RET
// 005d9b9c: PUSH 0x654b56
//   Label: LAB_005d9b9c
//   XREF to: 00654b56 (DATA)
// 005d9ba1: JMP 0x005d9b87
//   XREF to: 005d9b87 (UNCONDITIONAL_JUMP)
