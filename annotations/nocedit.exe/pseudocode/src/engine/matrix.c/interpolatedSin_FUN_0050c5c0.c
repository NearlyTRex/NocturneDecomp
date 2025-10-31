// Name: engine_matrix.c_interpolatedSin_FUN_0050c5c0
// Address: 0050c5c0
// Address Range: [[0050c5c0, 0050c5f8]]
// Convention: __cdecl
// Signature: int engine_matrix.c_interpolatedSin_FUN_0050c5c0(ushort angle)
// Cross-references:
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004fee6f [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 0050425c [UNCONDITIONAL_CALL]
//   engine_matrix.c_buildRotationMatrix_FUN_0050c920 (0050c920) at 0050c962 [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 (0050cee0) at 0050d06c [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050db00 (0050db00) at 0050dc43 [UNCONDITIONAL_CALL]
// Globals:
//   int[257] g_SinTable
//   undefined4 g_SinTable[1]

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedSin_FUN_0050c5c0(ushort angle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 in_stack_00000006;
  
  uVar1 = _angle >> 8 & 0xff;
  iVar2 = (g_SinTable[uVar1 + 1] - g_SinTable[uVar1]) * (angle & 0xff);
  iVar3 = iVar2 >> 0x1f;
  return ((int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8) + g_SinTable[uVar1];
}


// Assembly code:
// 0050c5c0: PUSH EBX
//   Label: engine_matrix.c_interpolatedSin_FUN_0050c5c0
// 0050c5c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050c5c5: MOV EAX,EBX
// 0050c5c7: SAR EAX,0x8
// 0050c5ca: AND EAX,0xff
// 0050c5cf: MOV ECX,dword ptr [EAX*0x4 + 0x2f0cb5c]
//   XREF to: 02f0cb5c (DATA)
// 0050c5d6: MOV EDX,dword ptr [EAX*0x4 + 0x2f0cb60]
//   XREF to: 02f0cb60 (DATA)
// 0050c5dd: AND EBX,0xff
// 0050c5e3: SUB EDX,ECX
// 0050c5e5: IMUL EDX,EBX
// 0050c5e8: MOV EAX,EDX
// 0050c5ea: SAR EDX,0x1f
// 0050c5ed: SHL EDX,0x8
// 0050c5f0: SBB EAX,EDX
// 0050c5f2: SAR EAX,0x8
// 0050c5f5: ADD EAX,ECX
// 0050c5f7: POP EBX
// 0050c5f8: RET
