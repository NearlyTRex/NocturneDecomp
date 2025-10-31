// Name: crt_memory.c_constructTypedObjectArray_FUN_00601232
// Address: 00601232
// Address Range: [[00601232, 00601257]]
// Convention: __cdecl
// Signature: void * crt_memory.c_constructTypedObjectArray_FUN_00601232(void * dest, int element_count, WatcomTypeInfo * type_info)
// Cross-references:
//   crt_memory.c_constructTypedObjectArray_FUN_00601272 (00601272) at 00601282 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200

#include "nocturne.h"

void * __cdecl
crt_memory_c_constructTypedObjectArray_FUN_00601232
          (void *dest,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  if (dest == (void *)0x0) {
    return dest;
  }
  *(int *)dest = element_count;
  pvVar1 = crt_memory_c_dispatchObjectArrayConstructor_FUN_00601200
                     ((void *)((int)dest + 4),element_count,type_info);
  return pvVar1;
}


// Assembly code:
// 00601232: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_memory.c_constructTypedObjectArray_FUN_00601232
//   XREF to: Stack[0x4] (READ)
// 00601236: TEST EAX,EAX
// 00601238: JNZ 0x0060123b
//   XREF to: 0060123b (CONDITIONAL_JUMP)
// 0060123a: RET
// 0060123b: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0060123b
//   XREF to: Stack[0x8] (READ)
// 0060123f: MOV dword ptr [EAX],EDX
// 00601241: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00601245: PUSH EDX
// 00601246: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060124a: PUSH ECX
// 0060124b: ADD EAX,0x4
// 0060124e: PUSH EAX
// 0060124f: CALL crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
//   XREF to: 00601200 (UNCONDITIONAL_CALL)
// 00601254: ADD ESP,0xc
// 00601257: RET
