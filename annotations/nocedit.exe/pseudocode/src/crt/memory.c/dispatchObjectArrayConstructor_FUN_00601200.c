// Name: crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
// Address: 00601200
// Address Range: [[00601200, 00601231]]
// Convention: __cdecl
// Signature: void * crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200(void * array_ptr, int element_count, WatcomTypeInfo * type_info)
// Cross-references:
//   crt_memory.c_constructTypedObjectArray_FUN_00601232 (00601232) at 0060124f [UNCONDITIONAL_CALL]
//   crt_unknown.c_AnotherFunctorCall2_FUN_00601258 (00601258) at 00601268 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8

#include "nocturne.h"

void * __cdecl
crt_memory_c_dispatchObjectArrayConstructor_FUN_00601200
          (void *array_ptr,int element_count,WatcomTypeInfo *type_info)

{
  code *pcVar1;
  
  if (array_ptr != (void *)0x0) {
    if ((char)type_info->type_flags == '\x04') {
      pcVar1 = crt_memory_c_constructObjectArray_FlaggedCtor_FUN_00608dc8;
    }
    else {
      pcVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667;
    }
    array_ptr = (void *)(*pcVar1)();
  }
  return array_ptr;
}


// Assembly code:
// 00601200: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
//   XREF to: Stack[0x4] (READ)
// 00601204: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00601208: TEST EDX,EDX
// 0060120a: JZ 0x00601228
//   XREF to: 00601228 (CONDITIONAL_JUMP)
// 0060120c: XOR EAX,EAX
// 0060120e: MOV AL,byte ptr [ECX]
// 00601210: CMP EAX,0x4
// 00601213: JNZ 0x0060122b
//   XREF to: 0060122b (CONDITIONAL_JUMP)
// 00601215: MOV EAX,0x608dc8
//   XREF to: 00608dc8 (DATA)
// 0060121a: PUSH ECX
//   Label: LAB_0060121a
// 0060121b: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060121f: PUSH ECX
// 00601220: PUSH EDX
// 00601221: CALL EAX
//   XREF to: 005fe667 (COMPUTED_CALL)
//   XREF to: 00608dc8 (COMPUTED_CALL)
// 00601223: ADD ESP,0xc
// 00601226: MOV EDX,EAX
// 00601228: MOV EAX,EDX
//   Label: LAB_00601228
// 0060122a: RET
// 0060122b: MOV EAX,0x5fe667
//   Label: LAB_0060122b
//   XREF to: 005fe667 (DATA)
// 00601230: JMP 0x0060121a
//   XREF to: 0060121a (UNCONDITIONAL_JUMP)
