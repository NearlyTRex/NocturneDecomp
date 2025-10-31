// Name: crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8
// Address: 00608dc8
// Address Range: [[00608dc8, 00608e11]]
// Convention: __cdecl
// Signature: void * crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8(void * array_start, int element_count, WatcomTypeInfo * type_info)
// Cross-references:
//   crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200 (00601200) at 00601221 [COMPUTED_CALL]

#include "nocturne.h"

void * __cdecl
crt_memory_c_constructObjectArray_FlaggedCtor_FUN_00608dc8
          (void *array_start,int element_count,WatcomTypeInfo *type_info)

{
  WATCOM_DEFAULT_CONSTRUCTOR_FUNC *pWVar1;
  int iVar2;
  void *param0;
  uint local_1c;
  
  pWVar1 = type_info->ctor;
  local_1c = 0;
  iVar2 = type_info->instance_size;
  param0 = array_start;
  for (; local_1c < (uint)element_count; local_1c = local_1c + 1) {
    (*pWVar1)(param0);
    param0 = (void *)((int)param0 + iVar2);
  }
  return array_start;
}


// Assembly code:
// 00608dc8: PUSH EBX
//   Label: crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8
// 00608dc9: PUSH ESI
// 00608dca: PUSH EDI
// 00608dcb: PUSH EBP
// 00608dcc: SUB ESP,0xc
// 00608dcf: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00608dd3: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00608dd7: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00608ddb: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00608ddf: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00608de3: XOR EDX,EDX
// 00608de5: MOV ESI,dword ptr [EDI + 0x4]
// 00608de8: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 00608deb: MOV EDI,dword ptr [EDI + 0x10]
// 00608dee: CMP EBP,dword ptr [ESP]
//   Label: LAB_00608dee
//   XREF to: Stack[-0x1c] (DATA)
// 00608df1: JA 0x00608dff
//   XREF to: 00608dff (CONDITIONAL_JUMP)
// 00608df3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00608df7: ADD ESP,0xc
// 00608dfa: POP EBP
// 00608dfb: POP EDI
// 00608dfc: POP ESI
// 00608dfd: POP EBX
// 00608dfe: RET
// 00608dff: PUSH 0x0
//   Label: LAB_00608dff
// 00608e01: PUSH EBX
// 00608e02: CALL ESI
// 00608e04: ADD ESP,0x8
// 00608e07: MOV EAX,dword ptr [ESP]
// 00608e0a: INC EAX
// 00608e0b: ADD EBX,EDI
// 00608e0d: MOV dword ptr [ESP],EAX
// 00608e10: JMP 0x00608dee
//   XREF to: 00608dee (UNCONDITIONAL_JUMP)
