// Name: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
// Address: 0050d970
// Address Range: [[0050d970, 0050d9e5]]
// Convention: __cdecl
// Signature: void engine_matrix.c_normalizeVector3DFixed_FUN_0050d970(CVector3i vector)
// Cross-references:
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 004055da [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 0040537a [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 0040545a [UNCONDITIONAL_CALL]
// Function calls:
//   engine_matrix.c_integerSquareRoot_FUN_0050d890

#include "nocturne.h"

void __cdecl engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i vector)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_ffc [1016];
  int local_14;
  int local_10;
  
  bVar2 = 0;
  iVar1 = engine_matrix_c_integerSquareRoot_FUN_0050d890
                    (*(int *)(vector.x + 4) * *(int *)(vector.x + 4) +
                     *(int *)vector.x * *(int *)vector.x +
                     *(int *)(vector.x + 8) * *(int *)(vector.x + 8));
  local_14 = (int)(((longlong)*(int *)vector.x * 0x7fff) / (longlong)iVar1) * 2;
  local_10 = (int)(((longlong)*(int *)(vector.x + 4) * 0x7fff) / (longlong)iVar1) * 2;
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar2 * -2 + 1] = *(int *)((int)&stack0xfffffff0 + (uint)bVar2 * -8);
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return;
}


// Assembly code:
// 0050d970: PUSH EBX
//   Label: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
// 0050d971: PUSH EDI
// 0050d972: PUSH EBP
// 0050d973: SUB ESP,0xc
// 0050d976: MOV EBP,ESI
// 0050d978: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0050d97c: MOV EAX,dword ptr [ESI + 0x4]
// 0050d97f: IMUL EAX,EAX
// 0050d982: MOV ECX,dword ptr [ESI]
// 0050d984: IMUL ECX,ECX
// 0050d987: ADD EAX,ECX
// 0050d989: MOV ECX,dword ptr [ESI + 0x8]
// 0050d98c: IMUL ECX,ECX
// 0050d98f: ADD EAX,ECX
// 0050d991: PUSH EAX
// 0050d992: CALL engine_matrix.c_integerSquareRoot_FUN_0050d890
//   XREF to: 0050d890 (UNCONDITIONAL_CALL)
// 0050d997: MOV EDX,0x7fff
// 0050d99c: MOV ECX,EAX
// 0050d99e: ADD ESP,0x4
// 0050d9a1: MOV EBX,ECX
// 0050d9a3: MOV EAX,dword ptr [ESI]
// 0050d9a5: IMUL EDX
// 0050d9a7: IDIV EBX
// 0050d9a9: MOV EDX,0x7fff
// 0050d9ae: ADD EAX,EAX
// 0050d9b0: MOV EBX,ECX
// 0050d9b2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0050d9b5: MOV EAX,dword ptr [ESI + 0x4]
// 0050d9b8: IMUL EDX
// 0050d9ba: IDIV EBX
// 0050d9bc: MOV EDX,0x7fff
// 0050d9c1: ADD EAX,EAX
// 0050d9c3: MOV EBX,ECX
// 0050d9c5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050d9c9: MOV EAX,dword ptr [ESI + 0x8]
// 0050d9cc: MOV EDI,EBP
// 0050d9ce: IMUL EDX
// 0050d9d0: IDIV EBX
// 0050d9d2: ADD EAX,EAX
// 0050d9d4: MOV ESI,ESP
// 0050d9d6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0050d9da: MOVSD ES:EDI,ESI
// 0050d9db: MOVSD ES:EDI,ESI
// 0050d9dc: MOVSD ES:EDI,ESI
// 0050d9dd: MOV EAX,EBP
// 0050d9df: ADD ESP,0xc
// 0050d9e2: POP EBP
// 0050d9e3: POP EDI
// 0050d9e4: POP EBX
// 0050d9e5: RET
