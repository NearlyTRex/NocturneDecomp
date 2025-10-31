// Name: core_dskybox.cpp_staticInit_FUN_00490040
// Address: 00490040
// Address Range: [[00490040, 00490061]]
// Convention: __cdecl
// Signature: void core_dskybox.cpp_staticInit_FUN_00490040(void)
// Globals:
//   SMRGLTextureBasic g_SkyDomeTextureData
//   CVector3i CVector3i_02ca0388
//   undefined4 CVector3i_02ca0388.y
//   undefined4 CVector3i_02ca0388.z
// Function calls:
//   core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070

#include "nocturne.h"

void __cdecl core_dskybox_cpp_staticInit_FUN_00490040(void)

{
  core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(&g_SkyDomeTextureData);
  CVector3i_02ca0388.x = 0;
  CVector3i_02ca0388.y = 0;
  CVector3i_02ca0388.z = 0;
  return;
}


// Assembly code:
// 00490040: PUSH 0x2ca0148
//   Label: core_dskybox.cpp_staticInit_FUN_00490040
//   XREF to: 02ca0148 (DATA)
// 00490045: CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
//   XREF to: 00490070 (UNCONDITIONAL_CALL)
// 0049004a: XOR EDX,EDX
// 0049004c: ADD ESP,0x4
// 0049004f: MOV dword ptr [0x02ca0388],EDX
//   XREF to: 02ca0388 (WRITE)
// 00490055: MOV dword ptr [0x02ca038c],EDX
//   XREF to: 02ca038c (WRITE)
// 0049005b: MOV dword ptr [0x02ca0390],EDX
//   XREF to: 02ca0390 (WRITE)
// 00490061: RET
