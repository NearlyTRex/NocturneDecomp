// Name: core_flamegun.cpp_staticInit_FUN_004cbcb0
// Address: 004cbcb0
// Address Range: [[004cbcb0, 004cbcdf]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_staticInit_FUN_004cbcb0()
// Globals:
//   undefined4 DAT_02d7a7b4
//   undefined4 DAT_02d7a7b8
//   int g_LightAttenuationMax

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 core_flamegun_cpp_staticInit_FUN_004cbcb0(undefined4 param_1)

{
  _DAT_02d7a7b4 = 0x3f800000;
  DAT_02d7a7b8 = 0x1fc00000;
  g_LightAttenuationMax = 0x5f400000;
  return CONCAT44(0x1fc00000,param_1);
}


// Assembly code:
// 004cbcb0: SUB ESP,0x4
//   Label: core_flamegun.cpp_staticInit_FUN_004cbcb0
// 004cbcb3: MOV EDX,0x3f800000
// 004cbcb8: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x4] (DATA)
// 004cbcbb: MOV dword ptr [0x02d7a7b4],EDX
//   XREF to: 02d7a7b4 (WRITE)
// 004cbcc1: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004cbcc4: SAR EDX,0x1
// 004cbcc6: ADD ECX,EDX
// 004cbcc8: MOV dword ptr [0x02d7a7b8],EDX
//   XREF to: 02d7a7b8 (WRITE)
// 004cbcce: MOV dword ptr [0x02d7a7bc],ECX
//   XREF to: 02d7a7bc (WRITE)
// 004cbcd4: ADD ESP,0x4
// 004cbcd7: LEA EAX,[EAX]
// 004cbcdd: LEA EDX,[EDX]
