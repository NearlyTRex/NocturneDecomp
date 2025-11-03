// Name: core_boxactor.cpp_FUN_00422590
// Address: 00422590
// Address Range: [[00422590, 00422632]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422590()
// Cross-references:
//   core_boxactor.cpp_FUN_00422390 (00422390) at 00422498 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00422590(undefined4 param_1) */

void core_boxactor_cpp_FUN_00422590(void)

{
  CBoundingBox3D *this_ptr;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *out_point;
  CVector3f CStack_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x324) == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (*(CDemonActor **)(in_stack_00000004 + 0x324),&local_1c,
             (CVector3f *)(in_stack_00000004 + 0x20));
  pCVar1 = &local_1c;
  out_point = &local_10;
  this_ptr = (CBoundingBox3D *)
             (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x324) + 0x154) + 0x14))();
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr,out_point,pCVar1);
  if (&local_1c != pCVar1) {
    local_1c.x = pCVar1->x;
    local_1c.y = pCVar1->y;
    local_1c.z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004 + 0x324),&CStack_28,&local_1c);
  *(float *)(in_stack_00000004 + 0x20) = pCVar1->x;
  *(float *)(in_stack_00000004 + 0x24) = pCVar1->y;
  *(float *)(in_stack_00000004 + 0x28) = pCVar1->z;
  return;
}


// Assembly code:
// 00422590: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422590
// 00422591: SUB ESP,0x3c
// 00422594: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00422598: MOV EDX,dword ptr [EBX + 0x324]
// 0042259e: TEST EDX,EDX
// 004225a0: JNZ 0x004225a7
//   XREF to: 004225a7 (CONDITIONAL_JUMP)
// 004225a2: ADD ESP,0x3c
// 004225a5: POP EBX
// 004225a6: RET
// 004225a7: LEA EAX,[EBX + 0x20]
//   Label: LAB_004225a7
// 004225aa: PUSH EAX
// 004225ab: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1c] (DATA)
// 004225af: PUSH EAX
// 004225b0: PUSH EDX
// 004225b1: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004225b6: ADD ESP,0xc
// 004225b9: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c] (DATA)
// 004225bd: PUSH EAX
// 004225be: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x10] (DATA)
// 004225c2: PUSH EAX
// 004225c3: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 004225c7: PUSH EDX
// 004225c8: MOV EAX,dword ptr [EBX + 0x324]
// 004225ce: PUSH EAX
// 004225cf: MOV ECX,dword ptr [EAX + 0x154]
// 004225d5: CALL dword ptr [ECX + 0x14]
// 004225d8: ADD ESP,0x8
// 004225db: PUSH EAX
// 004225dc: CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
//   XREF to: 00421550 (UNCONDITIONAL_CALL)
// 004225e1: MOV EDX,EAX
// 004225e3: LEA EAX,[ESP + 0x30]
// 004225e7: ADD ESP,0xc
// 004225ea: CMP EAX,EDX
// 004225ec: JZ 0x00422602
//   XREF to: 00422602 (CONDITIONAL_JUMP)
// 004225ee: MOV EAX,dword ptr [EDX]
// 004225f0: MOV dword ptr [ESP + 0x24],EAX
// 004225f4: MOV EAX,dword ptr [EDX + 0x4]
// 004225f7: MOV dword ptr [ESP + 0x28],EAX
// 004225fb: MOV EAX,dword ptr [EDX + 0x8]
// 004225fe: MOV dword ptr [ESP + 0x2c],EAX
// 00422602: PUSH ESI
//   Label: LAB_00422602
// 00422603: LEA EAX,[ESP + 0x28]
// 00422607: PUSH EAX
// 00422608: LEA EAX,[ESP + 0x20]
// 0042260c: PUSH EAX
// 0042260d: MOV ESI,dword ptr [EBX + 0x324]
// 00422613: PUSH ESI
// 00422614: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00422619: FLD float ptr [EAX]
// 0042261b: ADD ESP,0xc
// 0042261e: FSTP float ptr [EBX + 0x20]
// 00422621: MOV EDX,dword ptr [EAX + 0x4]
// 00422624: MOV dword ptr [EBX + 0x24],EDX
// 00422627: MOV EDX,dword ptr [EAX + 0x8]
// 0042262a: MOV dword ptr [EBX + 0x28],EDX
// 0042262d: POP ESI
// 0042262e: ADD ESP,0x3c
// 00422631: POP EBX
// 00422632: RET
