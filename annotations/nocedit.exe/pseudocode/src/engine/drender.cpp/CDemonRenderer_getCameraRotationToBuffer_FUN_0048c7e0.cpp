// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
// Address: 0048c7e0
// Address Range: [[0048c7e0, 0048c7fc]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
// Cross-references:
//   core_fire.cpp_CFireball_FUN_004c0d80 (004c0d80) at 004c0de1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c654c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c68bf [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_FUN_004bf1f0 (004bf1f0) at 004bf251 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_FUN_004c0300 (004c0300) at 004c039b [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca219 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004eb9d0 (004eb9d0) at 004eba31 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_matrix.c_getCameraRotation_FUN_0050e2f0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
          (CDemonRenderer *this_ptr,CVector3i *output)

{
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  byte bVar1;
  int aiStack_ff8 [1017];
  CVector3i CStack_14;
  
  bVar1 = 0;
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&CStack_14);
  *unaff_ESI = CStack_14.y;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(int *)((int)&CStack_14 + (uint)bVar1 * -8 + 8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(int *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}


// Assembly code:
// 0048c7e0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
// 0048c7e1: PUSH EDI
// 0048c7e2: SUB ESP,0xc
// 0048c7e5: MOV EBX,ESI
// 0048c7e7: MOV ESI,ESP
// 0048c7e9: MOV EDI,EBX
// 0048c7eb: CALL engine_matrix.c_getCameraRotation_FUN_0050e2f0
//   XREF to: 0050e2f0 (UNCONDITIONAL_CALL)
// 0048c7f0: MOV ESI,ESP
// 0048c7f2: MOVSD ES:EDI,ESI
// 0048c7f3: MOVSD ES:EDI,ESI
// 0048c7f4: MOVSD ES:EDI,ESI
// 0048c7f5: MOV EAX,EBX
// 0048c7f7: ADD ESP,0xc
// 0048c7fa: POP EDI
// 0048c7fb: POP EBX
// 0048c7fc: RET
