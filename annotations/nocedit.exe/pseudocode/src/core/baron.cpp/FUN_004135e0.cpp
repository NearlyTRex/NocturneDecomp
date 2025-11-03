// Name: core_baron.cpp_FUN_004135e0
// Address: 004135e0
// Address Range: [[004135e0, 004136a2]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_004135e0()
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 004131f7 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_baron.cpp_FUN_004135a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_baron.cpp_FUN_004135e0(undefined4 param_1) */

void core_baron_cpp_FUN_004135e0(void)

{
  CVector3f *pCVar1;
  CDemonActor *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  SCollisionInfo *collision_info;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (*(int *)(in_stack_00000004 + 0x1fcac) != 0) {
    iVar2 = *(int *)(in_stack_00000004 + 0x154);
    local_1c.z = -2.0;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fcac),&local_28,&local_1c);
    collision_info =
         (SCollisionInfo *)(*(float *)(*(int *)(in_stack_00000004 + 0x1fcac) + 0x20) + pCVar1->x);
    (**(code **)(iVar2 + 0x60))();
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004 + 0x1fcac),
                          g_CCharacterClassInfo.name_hash);
    if (this_ptr != (CDemonActor *)0x0) {
      iVar2 = (*this_ptr->vtable[1].hasCollision)(this_ptr,collision_info);
      if (iVar2 == 2) {
        core_baron_cpp_FUN_004135a0();
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004135e0: PUSH EBX
//   Label: core_baron.cpp_FUN_004135e0
// 004135e1: PUSH ESI
// 004135e2: PUSH EDI
// 004135e3: PUSH EBP
// 004135e4: MOV EBP,ESP
// 004135e6: SUB ESP,0x24
// 004135e9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004135ec: MOV EDX,dword ptr [EBX + 0x1fcac]
// 004135f2: TEST EDX,EDX
// 004135f4: JNZ 0x004135fd
//   XREF to: 004135fd (CONDITIONAL_JUMP)
// 004135f6: MOV ESP,EBP
//   Label: LAB_004135f6
// 004135f8: POP EBP
// 004135f9: POP EDI
// 004135fa: POP ESI
// 004135fb: POP EBX
// 004135fc: RET
// 004135fd: LEA EAX,[EDX + 0x30]
//   Label: LAB_004135fd
// 00413600: MOV ESI,dword ptr [EBX + 0x154]
// 00413606: PUSH EAX
// 00413607: MOV EAX,0xc0000000
// 0041360c: XOR ECX,ECX
// 0041360e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00413611: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 00413614: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00413617: PUSH EAX
// 00413618: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0041361b: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0041361e: PUSH EAX
// 0041361f: MOV EDX,dword ptr [EBX + 0x1fcac]
// 00413625: PUSH EDX
// 00413626: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0041362b: MOV EDX,dword ptr [EBX + 0x1fcac]
// 00413631: FLD float ptr [EDX + 0x20]
// 00413634: FADD float ptr [EAX]
// 00413636: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 00413639: FLD float ptr [EDX + 0x24]
// 0041363c: FADD float ptr [EAX + 0x4]
// 0041363f: ADD ESP,0xc
// 00413642: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 00413645: FLD float ptr [EDX + 0x28]
// 00413648: FADD float ptr [EAX + 0x8]
// 0041364b: LEA EAX,[EBP + -0x24]
//   XREF to: Stack[-0x34] (DATA)
// 0041364e: PUSH EAX
// 0041364f: PUSH EBX
// 00413650: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00413653: CALL dword ptr [ESI + 0x60]
// 00413656: ADD ESP,0xc
// 00413659: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0041365f: PUSH ECX
// 00413660: MOV ESI,dword ptr [EBX + 0x1fcac]
// 00413666: PUSH ESI
// 00413667: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0041366c: ADD ESP,0x8
// 0041366f: TEST EAX,EAX
// 00413671: JZ 0x004135f6
//   XREF to: 004135f6 (CONDITIONAL_JUMP)
// 00413673: PUSH EAX
// 00413674: MOV EDX,dword ptr [EAX + 0x154]
// 0041367a: CALL dword ptr [EDX + 0x120]
// 00413680: ADD ESP,0x4
// 00413683: CMP EAX,0x2
// 00413686: JNZ 0x004135f6
//   XREF to: 004135f6 (CONDITIONAL_JUMP)
// 0041368c: MOV EDI,dword ptr [EBX + 0x1fcac]
// 00413692: PUSH EDI
// 00413693: PUSH EBX
// 00413694: CALL core_baron.cpp_FUN_004135a0
//   XREF to: 004135a0 (UNCONDITIONAL_CALL)
// 00413699: ADD ESP,0x8
// 0041369c: MOV ESP,EBP
// 0041369e: POP EBP
// 0041369f: POP EDI
// 004136a0: POP ESI
// 004136a1: POP EBX
// 004136a2: RET
