// Name: crt_memory.c_destroyTypeArray_FUN_005feeaf
// Address: 005feeaf
// Address Range: [[005feeaf, 005feee8]]
// Convention: __cdecl
// Signature: void * crt_memory.c_destroyTypeArray_FUN_005feeaf(WatcomTypeArrayInfo * destroy_info)
// Cross-references:
//   crt_memory.c_freeTypeArray_FUN_005feee9 (005feee9) at 005fef06 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __cdecl crt_memory_c_destroyTypeArray_FUN_005feeaf(WatcomTypeArrayInfo *destroy_info)

{
  int iVar1;
  WATCOM_VIRTUAL_DESTRUCTOR_FUNC *pWVar2;
  void **object_ptr;
  
  iVar1 = destroy_info->type_info->instance_size;
  pWVar2 = destroy_info->type_info->dtor;
  object_ptr = (void **)(destroy_info->obj_count * iVar1 + (int)destroy_info->obj_array);
  while (destroy_info->obj_count != 0) {
    object_ptr = (void **)((int)object_ptr - iVar1);
    destroy_info->obj_count = destroy_info->obj_count + -1;
    (*pWVar2)(object_ptr,0);
  }
  return destroy_info->obj_array;
}


// Assembly code:
// 005feeaf: PUSH EBX
//   Label: crt_memory.c_destroyTypeArray_FUN_005feeaf
// 005feeb0: PUSH ESI
// 005feeb1: PUSH EDI
// 005feeb2: PUSH EBP
// 005feeb3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005feeb7: MOV EBP,dword ptr [EBX + 0x4]
// 005feeba: MOV ESI,dword ptr [EBX]
// 005feebc: MOV EDI,dword ptr [EBP + 0x10]
// 005feebf: IMUL ESI,EDI
// 005feec2: MOV EAX,dword ptr [EBX + 0x8]
// 005feec5: MOV EBP,dword ptr [EBP + 0xc]
// 005feec8: ADD ESI,EAX
// 005feeca: MOV EDX,dword ptr [EBX]
//   Label: LAB_005feeca
// 005feecc: TEST EDX,EDX
// 005feece: JA 0x005feed8
//   XREF to: 005feed8 (CONDITIONAL_JUMP)
// 005feed0: MOV EAX,dword ptr [EBX + 0x8]
// 005feed3: POP EBP
// 005feed4: POP EDI
// 005feed5: POP ESI
// 005feed6: POP EBX
// 005feed7: RET
// 005feed8: PUSH 0x0
//   Label: LAB_005feed8
// 005feeda: SUB ESI,EDI
// 005feedc: LEA ECX,[EDX + -0x1]
// 005feedf: PUSH ESI
// 005feee0: MOV dword ptr [EBX],ECX
// 005feee2: CALL EBP
// 005feee4: ADD ESP,0x8
// 005feee7: JMP 0x005feeca
//   XREF to: 005feeca (UNCONDITIONAL_JUMP)
