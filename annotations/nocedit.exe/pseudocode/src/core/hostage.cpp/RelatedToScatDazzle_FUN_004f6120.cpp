// Name: core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120
// Address: 004f6120
// Address Range: [[004f6120, 004f616e]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120()
// Globals:
//   TerminatedCString s_ScatDazzle_0062f0f2
// Function calls:
//   core_npc.cpp_CNPC_FUN_00544b70
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_RelatedToScatDazzle(undefined4 param_1) */

void core_hostage_cpp_RelatedToScatDazzle_FUN_004f6120
               (undefined4 param_1,undefined4 param_2,SCollisionInfo *unaff_EBX,undefined4 param_4,
               CNPC *param_5)

{
  int iVar1;
  int in_stack_00000020;
  
  iVar1 = (*(param_5->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)param_5,unaff_EBX);
  if (0 < iVar1) {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)param_5,"ScatDazzle");
    if (iVar1 != 0) {
      if (in_stack_00000020 != 0) {
        (param_5->base_character).field2_0x240c[0] = '\x01';
        (param_5->base_character).field2_0x240c[1] = '\0';
        (param_5->base_character).field2_0x240c[2] = '\0';
        (param_5->base_character).field2_0x240c[3] = '\0';
      }
      core_npc_cpp_CNPC_FUN_00544b70(param_5);
      return;
    }
  }
  return;
}


// Assembly code:
// 004f6120: PUSH EBX
//   Label: core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120
// 004f6121: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f6125: PUSH EBX
// 004f6126: MOV EAX,dword ptr [EBX + 0x154]
// 004f612c: CALL dword ptr [EAX + 0x120]
// 004f6132: ADD ESP,0x4
// 004f6135: CMP EAX,0x1
// 004f6138: JGE 0x004f613c
//   XREF to: 004f613c (CONDITIONAL_JUMP)
// 004f613a: POP EBX
//   Label: LAB_004f613a
// 004f613b: RET
// 004f613c: PUSH 0x62f0f2
//   Label: LAB_004f613c
//   XREF to: 0062f0f2 (DATA)
// 004f6141: PUSH EBX
// 004f6142: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f6147: ADD ESP,0x8
// 004f614a: TEST EAX,EAX
// 004f614c: JZ 0x004f613a
//   XREF to: 004f613a (CONDITIONAL_JUMP)
// 004f614e: CMP dword ptr [ESP + 0xc],0x0
// 004f6153: JZ 0x004f615f
//   XREF to: 004f615f (CONDITIONAL_JUMP)
// 004f6155: MOV dword ptr [EBX + 0x240c],0x1
// 004f615f: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_004f615f
// 004f6163: PUSH ECX
// 004f6164: PUSH EBX
// 004f6165: CALL core_npc.cpp_CNPC_FUN_00544b70
//   XREF to: 00544b70 (UNCONDITIONAL_CALL)
// 004f616a: ADD ESP,0x8
// 004f616d: POP EBX
// 004f616e: RET
