// Name: shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
// Address: 005cbe20
// Address Range: [[005cbe20, 005cbeb2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20()
// Cross-references:
//   shape_superopt.cpp_FUN_005c91e0 (005c91e0) at 005c9304 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_006021da
//   crt_memory.c_realloc_FUN_00601df0
//   shape_superopt.cpp_FUN_005cbf20

#include "nocturne.h"

void shape_superopt_cpp_CondCallDebugMallocUnknownString_FUN_005cbe20(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int in_stack_00000004;
  undefined4 *in_stack_00000014;
  undefined4 in_stack_00000018;
  
  bVar6 = 0;
  shape_superopt_cpp_FUN_005cbf20();
  pvVar1 = crt_memory_c_realloc_FUN_00601df0
                     (*(void **)(in_stack_00000004 + 0xc),(*(int *)(in_stack_00000004 + 8) + 1) * 8)
  ;
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_stack_00000004 + 0xc) = pvVar1;
    puVar5 = (undefined4 *)(*(int *)(in_stack_00000004 + 0xc) + *(int *)(in_stack_00000004 + 8) * 8)
    ;
    puVar2 = (undefined4 *)crt_memory_c_malloc_FUN_006021da((int)in_stack_00000014 * 0x60);
    puVar5[1] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = (uint)((int)in_stack_00000014 * 0x60) >> 2;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *in_stack_00000014;
        in_stack_00000014 = in_stack_00000014 + (uint)bVar6 * -2 + 1;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar2 = *(undefined1 *)in_stack_00000014;
        in_stack_00000014 = (undefined4 *)((int)in_stack_00000014 + (uint)bVar6 * -2 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar6 * -2 + 1);
      }
      *puVar5 = in_stack_00000018;
      *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1;
      return;
    }
  }
  return;
}


// Assembly code:
// 005cbe20: PUSH EBX
//   Label: shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
// 005cbe21: PUSH ESI
// 005cbe22: PUSH EBP
// 005cbe23: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cbe27: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cbe2b: PUSH EDX
// 005cbe2c: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cbe30: PUSH ECX
// 005cbe31: PUSH EBX
// 005cbe32: CALL shape_superopt.cpp_FUN_005cbf20
//   XREF to: 005cbf20 (UNCONDITIONAL_CALL)
// 005cbe37: MOV EAX,dword ptr [EBX + 0x8]
// 005cbe3a: INC EAX
// 005cbe3b: ADD ESP,0xc
// 005cbe3e: SHL EAX,0x3
// 005cbe41: PUSH EAX
// 005cbe42: MOV ESI,dword ptr [EBX + 0xc]
// 005cbe45: PUSH ESI
// 005cbe46: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005cbe4b: ADD ESP,0x8
// 005cbe4e: TEST EAX,EAX
// 005cbe50: JNZ 0x005cbe56
//   XREF to: 005cbe56 (CONDITIONAL_JUMP)
// 005cbe52: POP EBP
//   Label: LAB_005cbe52
// 005cbe53: POP ESI
// 005cbe54: POP EBX
// 005cbe55: RET
// 005cbe56: MOV dword ptr [EBX + 0xc],EAX
//   Label: LAB_005cbe56
// 005cbe59: MOV EAX,dword ptr [EBX + 0x8]
// 005cbe5c: MOV EBP,dword ptr [EBX + 0xc]
// 005cbe5f: SHL EAX,0x3
// 005cbe62: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cbe66: ADD EBP,EAX
// 005cbe68: LEA EAX,[ESI*0x4 + 0x0]
// 005cbe6f: SUB EAX,ESI
// 005cbe71: MOV ESI,EAX
// 005cbe73: SHL ESI,0x5
// 005cbe76: PUSH ESI
// 005cbe77: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005cbe7c: ADD ESP,0x4
// 005cbe7f: MOV dword ptr [EBP + 0x4],EAX
// 005cbe82: TEST EAX,EAX
// 005cbe84: JZ 0x005cbe52
//   XREF to: 005cbe52 (CONDITIONAL_JUMP)
// 005cbe86: PUSH EDI
// 005cbe87: MOV EDI,EAX
// 005cbe89: MOV ECX,ESI
// 005cbe8b: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cbe8f: PUSH EDI
// 005cbe90: MOV EAX,ECX
// 005cbe92: SHR ECX,0x2
// 005cbe95: MOVSD.REP ES:EDI,ESI
// 005cbe97: MOV CL,AL
// 005cbe99: AND CL,0x3
// 005cbe9c: MOVSB.REP ES:EDI,ESI
// 005cbe9e: POP EDI
// 005cbe9f: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cbea3: MOV dword ptr [EBP],EAX
// 005cbea6: MOV EAX,0x1
// 005cbeab: ADD dword ptr [EBX + 0x8],EAX
// 005cbeae: POP EDI
// 005cbeaf: POP EBP
// 005cbeb0: POP ESI
// 005cbeb1: POP EBX
// 005cbeb2: RET
