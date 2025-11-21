// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// Address: 0048c150
// Address Range: [[0048c150, 0048c1a6]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
// Cross-references:
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443cf1 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c615 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472b18 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cd58 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004fefd4 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005041cb [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorCamera_FUN_00521480 (00521480) at 00521490 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 (0052a2c0) at 0052a2dd [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 00529ef7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ccae [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570af0 (00570af0) at 00570aff [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 (00574e70) at 00574ebe [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 005803f2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d02e [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9a20 (005b9a20) at 005b9ad2 [UNCONDITIONAL_CALL]
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50 (005e1f50) at 005e2039 [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraScaleFactor = 256
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_matrix.c_setCameraOrigin_FUN_0050e270

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
          (CDemonRenderer *this_ptr,CVector3i *point_ptr)

{
  int y;
  undefined4 in_EDX;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  int z;
  
  fVar1 = (float10)(float)point_ptr->z * (float10)g_CameraScaleFactor;
  fVar2 = (float10)(float)point_ptr->x * (float10)g_CameraScaleFactor;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,point_ptr));
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  z = (int)ROUND(fVar1);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(z,SUB84(dVar3,0)));
  engine_matrix_c_setCameraOrigin_FUN_0050e270((int)ROUND(fVar2),y,z);
  return;
}


// Assembly code:
// 0048c150: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// 0048c151: SUB ESP,0x8
// 0048c154: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048c158: FLD double ptr [0x00621ff5]
//   XREF to: 00621ff5 (READ)
// 0048c15e: FLD float ptr [EAX + 0x8]
// 0048c161: FMUL ST1
// 0048c163: FLD float ptr [EAX + 0x4]
// 0048c166: FMUL ST2
// 0048c168: FLD float ptr [EAX]
// 0048c16a: FMULP ST3
// 0048c16c: FXCH
// 0048c16e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c173: FXCH
// 0048c175: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c17a: FXCH
// 0048c17c: FISTP dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0048c17f: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 0048c183: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0048c186: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 0048c18a: PUSH EDX
// 0048c18b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c190: PUSH ECX
// 0048c191: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (WRITE)
// 0048c195: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 0048c199: PUSH EBX
// 0048c19a: CALL engine_matrix.c_setCameraOrigin_FUN_0050e270
//   XREF to: 0050e270 (UNCONDITIONAL_CALL)
// 0048c19f: ADD ESP,0xc
// 0048c1a2: ADD ESP,0x8
// 0048c1a5: POP EBX
// 0048c1a6: RET
