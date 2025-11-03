// Name: core_boxactor.cpp_FUN_00422640
// Address: 00422640
// Address Range: [[00422640, 004226c2]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422640()
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_boxactor.cpp_FUN_004218d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00422640(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_boxactor_cpp_FUN_00422640(void)

{
  float *pfVar1;
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  (in_stack_00000004->location).position.x = *in_stack_00000008;
  (in_stack_00000004->location).position.y = in_stack_00000008[1];
  (in_stack_00000004->location).position.z = in_stack_00000008[2];
  if (&in_stack_00000004->orient != (COrientation *)in_stack_0000000c) {
    (in_stack_00000004->orient).pitch = *in_stack_0000000c;
    (in_stack_00000004->orient).bank = in_stack_0000000c[1];
    (in_stack_00000004->orient).heading = in_stack_0000000c[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  pfVar1 = &in_stack_00000004[2].field12_0xe0.y;
  if (pfVar1 != in_stack_00000008) {
    *pfVar1 = *in_stack_00000008;
    in_stack_00000004[2].field12_0xe0.z = in_stack_00000008[1];
    in_stack_00000004[2].field13_0xec.x = in_stack_00000008[2];
  }
  pfVar1 = &in_stack_00000004[2].field13_0xec.y;
  if (pfVar1 != in_stack_0000000c) {
    *pfVar1 = *in_stack_0000000c;
    in_stack_00000004[2].field13_0xec.z = in_stack_0000000c[1];
    in_stack_00000004[2].field14_0xf8 = (int)in_stack_0000000c[2];
  }
  core_boxactor_cpp_FUN_004218d0();
  return;
}


// Assembly code:
// 00422640: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422640
// 00422641: PUSH ESI
// 00422642: PUSH EDI
// 00422643: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00422647: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042264b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0042264f: LEA EAX,[EDI + 0x20]
// 00422652: MOV EDX,dword ptr [ESI]
// 00422654: MOV dword ptr [EAX],EDX
// 00422656: MOV EDX,dword ptr [ESI + 0x4]
// 00422659: MOV dword ptr [EAX + 0x4],EDX
// 0042265c: MOV EDX,dword ptr [ESI + 0x8]
// 0042265f: MOV dword ptr [EAX + 0x8],EDX
// 00422662: LEA EAX,[EDI + 0x30]
// 00422665: CMP EAX,EBX
// 00422667: JZ 0x00422679
//   XREF to: 00422679 (CONDITIONAL_JUMP)
// 00422669: MOV EDX,dword ptr [EBX]
// 0042266b: MOV dword ptr [EAX],EDX
// 0042266d: MOV EDX,dword ptr [EBX + 0x4]
// 00422670: MOV dword ptr [EAX + 0x4],EDX
// 00422673: MOV EDX,dword ptr [EBX + 0x8]
// 00422676: MOV dword ptr [EAX + 0x8],EDX
// 00422679: PUSH EDI
//   Label: LAB_00422679
// 0042267a: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0042267f: LEA EAX,[EDI + 0x394]
// 00422685: ADD ESP,0x4
// 00422688: CMP EAX,ESI
// 0042268a: JZ 0x0042269c
//   XREF to: 0042269c (CONDITIONAL_JUMP)
// 0042268c: MOV EDX,dword ptr [ESI]
// 0042268e: MOV dword ptr [EAX],EDX
// 00422690: MOV EDX,dword ptr [ESI + 0x4]
// 00422693: MOV dword ptr [EAX + 0x4],EDX
// 00422696: MOV EDX,dword ptr [ESI + 0x8]
// 00422699: MOV dword ptr [EAX + 0x8],EDX
// 0042269c: LEA EAX,[EDI + 0x3a0]
//   Label: LAB_0042269c
// 004226a2: CMP EAX,EBX
// 004226a4: JZ 0x004226b6
//   XREF to: 004226b6 (CONDITIONAL_JUMP)
// 004226a6: MOV EDX,dword ptr [EBX]
// 004226a8: MOV dword ptr [EAX],EDX
// 004226aa: MOV EDX,dword ptr [EBX + 0x4]
// 004226ad: MOV dword ptr [EAX + 0x4],EDX
// 004226b0: MOV EDX,dword ptr [EBX + 0x8]
// 004226b3: MOV dword ptr [EAX + 0x8],EDX
// 004226b6: PUSH EDI
//   Label: LAB_004226b6
// 004226b7: CALL core_boxactor.cpp_FUN_004218d0
//   XREF to: 004218d0 (UNCONDITIONAL_CALL)
// 004226bc: ADD ESP,0x4
// 004226bf: POP EDI
// 004226c0: POP ESI
// 004226c1: POP EBX
// 004226c2: RET
