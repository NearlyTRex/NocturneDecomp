// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c77c]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 (0044d1c0) at 0044d241 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475924 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473a93 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 00474102 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474c37 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 (00497e50) at 00497ea4 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056fbfc [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570040 (00570040) at 00570095 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 005702ff [UNCONDITIONAL_CALL]
// Function calls:
//   engine_matrix.c_getCameraOrigin_FUN_0050e2c0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
          (CDemonRenderer *this_ptr,CVector3i *output)

{
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  byte bVar1;
  int aiStack_ff8 [1017];
  CVector3i CStack_14;
  
  bVar1 = 0;
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  *unaff_ESI = CStack_14.y;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(int *)((int)&CStack_14 + (uint)bVar1 * -8 + 8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(int *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}


// Assembly code:
// 0048c760: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
// 0048c761: PUSH EDI
// 0048c762: SUB ESP,0xc
// 0048c765: MOV EBX,ESI
// 0048c767: MOV ESI,ESP
// 0048c769: MOV EDI,EBX
// 0048c76b: CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0
//   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)
// 0048c770: MOV ESI,ESP
// 0048c772: MOVSD ES:EDI,ESI
// 0048c773: MOVSD ES:EDI,ESI
// 0048c774: MOVSD ES:EDI,ESI
// 0048c775: MOV EAX,EBX
// 0048c777: ADD ESP,0xc
// 0048c77a: POP EDI
// 0048c77b: POP EBX
// 0048c77c: RET
