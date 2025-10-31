// Name: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
// Address: 0048c4a0
// Address Range: [[0048c4a0, 0048c4ec]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
// Cross-references:
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0ec7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c6575 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c68e8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_render_FUN_004c1870 (004c1870) at 004c1896 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf5a3 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c0927 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca259 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebb4a [UNCONDITIONAL_CALL]
// Function calls:
//   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
          (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  if (rotation == (CVector3i *)0x0) {
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((ushort)position->x,(ushort)position->y,(ushort)position->z,0,0,0);
    return;
  }
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)position->x,(ushort)position->y,(ushort)position->z,rotation->x,rotation->y,
             rotation->z);
  return;
}


// Assembly code:
// 0048c4a0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
// 0048c4a1: PUSH ESI
// 0048c4a2: PUSH EBP
// 0048c4a3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048c4a7: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0048c4ab: TEST EDX,EDX
// 0048c4ad: JNZ 0x0048c4c9
//   XREF to: 0048c4c9 (CONDITIONAL_JUMP)
// 0048c4af: PUSH EDX
// 0048c4b0: PUSH EDX
// 0048c4b1: PUSH EDX
// 0048c4b2: MOV ECX,dword ptr [EAX + 0x8]
// 0048c4b5: PUSH ECX
// 0048c4b6: MOV EBX,dword ptr [EAX + 0x4]
// 0048c4b9: PUSH EBX
// 0048c4ba: MOV ESI,dword ptr [EAX]
// 0048c4bc: PUSH ESI
// 0048c4bd: CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
//   XREF to: 0050cee0 (UNCONDITIONAL_CALL)
// 0048c4c2: ADD ESP,0x18
// 0048c4c5: POP EBP
// 0048c4c6: POP ESI
// 0048c4c7: POP EBX
// 0048c4c8: RET
// 0048c4c9: PUSH EDI
//   Label: LAB_0048c4c9
// 0048c4ca: MOV ECX,dword ptr [EDX + 0x8]
// 0048c4cd: PUSH ECX
// 0048c4ce: MOV EBX,dword ptr [EDX + 0x4]
// 0048c4d1: PUSH EBX
// 0048c4d2: MOV ESI,dword ptr [EDX]
// 0048c4d4: PUSH ESI
// 0048c4d5: MOV EDI,dword ptr [EAX + 0x8]
// 0048c4d8: PUSH EDI
// 0048c4d9: MOV EBP,dword ptr [EAX + 0x4]
// 0048c4dc: PUSH EBP
// 0048c4dd: MOV EDX,dword ptr [EAX]
// 0048c4df: PUSH EDX
// 0048c4e0: CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
//   XREF to: 0050cee0 (UNCONDITIONAL_CALL)
// 0048c4e5: ADD ESP,0x18
// 0048c4e8: POP EDI
// 0048c4e9: POP EBP
// 0048c4ea: POP ESI
// 0048c4eb: POP EBX
// 0048c4ec: RET
