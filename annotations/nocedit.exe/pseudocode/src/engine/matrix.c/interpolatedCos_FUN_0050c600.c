// Name: engine_matrix.c_interpolatedCos_FUN_0050c600
// Address: 0050c600
// Address Range: [[0050c600, 0050c638]]
// Convention: __cdecl
// Signature: int engine_matrix.c_interpolatedCos_FUN_0050c600(ushort angle)
// Cross-references:
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004fee80 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 00504289 [UNCONDITIONAL_CALL]
//   engine_matrix.c_buildRotationMatrix_FUN_0050c920 (0050c920) at 0050c971 [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 (0050cee0) at 0050d061 [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050db00 (0050db00) at 0050dc54 [UNCONDITIONAL_CALL]
// Globals:
//   int[257] g_CosTable
//   undefined4 g_CosTable[1]

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedCos_FUN_0050c600(ushort angle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 in_stack_00000006;
  
  uVar1 = _angle >> 8 & 0xff;
  iVar2 = (g_CosTable[uVar1 + 1] - g_CosTable[uVar1]) * (angle & 0xff);
  iVar3 = iVar2 >> 0x1f;
  return ((int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8) + g_CosTable[uVar1];
}


// Assembly code:
// 0050c600: PUSH EBX
//   Label: engine_matrix.c_interpolatedCos_FUN_0050c600
// 0050c601: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050c605: MOV EAX,EBX
// 0050c607: SAR EAX,0x8
// 0050c60a: AND EAX,0xff
// 0050c60f: MOV ECX,dword ptr [EAX*0x4 + 0x2f0cf60]
//   XREF to: 02f0cf60 (DATA)
// 0050c616: MOV EDX,dword ptr [EAX*0x4 + 0x2f0cf64]
//   XREF to: 02f0cf64 (DATA)
// 0050c61d: AND EBX,0xff
// 0050c623: SUB EDX,ECX
// 0050c625: IMUL EDX,EBX
// 0050c628: MOV EAX,EDX
// 0050c62a: SAR EDX,0x1f
// 0050c62d: SHL EDX,0x8
// 0050c630: SBB EAX,EDX
// 0050c632: SAR EAX,0x8
// 0050c635: ADD EAX,ECX
// 0050c637: POP EBX
// 0050c638: RET
