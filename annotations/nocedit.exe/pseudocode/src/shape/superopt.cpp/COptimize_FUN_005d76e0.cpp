// Name: shape_superopt.cpp_COptimize_FUN_005d76e0
// Address: 005d76e0
// Address Range: [[005d76e0, 005d7743]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d76e0(COptimize * this_ptr)
// Function calls:
//   crt_memory.c_realloc_FUN_00601df0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_superopt.cpp_FUN_005c79a0

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d76e0(COptimize *this_ptr)

{
  int iVar1;
  void *pvVar2;
  void *in_stack_0000000c;
  
  pvVar2 = crt_memory_c_realloc_FUN_00601df0
                     ((void *)this_ptr->field3_0x3c,(this_ptr->field2_0x38 + 1) * 4);
  if (pvVar2 != (void *)0x0) {
    if (in_stack_0000000c == (void *)0x0) {
      in_stack_0000000c = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      if (in_stack_0000000c != (void *)0x0) {
        in_stack_0000000c = (void *)shape_superopt_cpp_FUN_005c79a0();
      }
      if (in_stack_0000000c == (void *)0x0) {
        return;
      }
    }
    iVar1 = this_ptr->field2_0x38;
    this_ptr->field3_0x3c = (int)pvVar2;
    this_ptr->field2_0x38 = iVar1 + 1;
    *(void **)(this_ptr->field3_0x3c + iVar1 * 4) = in_stack_0000000c;
  }
  return;
}


// Assembly code:
// 005d76e0: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_FUN_005d76e0
// 005d76e1: PUSH ESI
// 005d76e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d76e6: MOV EAX,dword ptr [EBX + 0x38]
// 005d76e9: INC EAX
// 005d76ea: SHL EAX,0x2
// 005d76ed: PUSH EAX
// 005d76ee: MOV EDX,dword ptr [EBX + 0x3c]
// 005d76f1: PUSH EDX
// 005d76f2: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005d76f7: ADD ESP,0x8
// 005d76fa: MOV ESI,EAX
// 005d76fc: TEST EAX,EAX
// 005d76fe: JZ 0x005d771f
//   XREF to: 005d771f (CONDITIONAL_JUMP)
// 005d7700: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d7704: TEST EAX,EAX
// 005d7706: JZ 0x005d7722
//   XREF to: 005d7722 (CONDITIONAL_JUMP)
// 005d7708: MOV EDX,dword ptr [EBX + 0x38]
//   Label: LAB_005d7708
// 005d770b: MOV dword ptr [EBX + 0x3c],ESI
// 005d770e: LEA ESI,[EDX*0x4 + 0x0]
// 005d7715: INC EDX
// 005d7716: MOV dword ptr [EBX + 0x38],EDX
// 005d7719: MOV EDX,dword ptr [EBX + 0x3c]
// 005d771c: MOV dword ptr [EDX + ESI*0x1],EAX
// 005d771f: POP ESI
//   Label: LAB_005d771f
// 005d7720: POP EBX
// 005d7721: RET
// 005d7722: PUSH 0x34
//   Label: LAB_005d7722
// 005d7724: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005d7729: ADD ESP,0x4
// 005d772c: TEST EAX,EAX
// 005d772e: JZ 0x005d7739
//   XREF to: 005d7739 (CONDITIONAL_JUMP)
// 005d7730: PUSH EAX
// 005d7731: CALL shape_superopt.cpp_FUN_005c79a0
//   XREF to: 005c79a0 (UNCONDITIONAL_CALL)
// 005d7736: ADD ESP,0x4
// 005d7739: MOV EDX,EAX
//   Label: LAB_005d7739
// 005d773b: MOV EAX,EDX
// 005d773d: TEST EDX,EDX
// 005d773f: JNZ 0x005d7708
//   XREF to: 005d7708 (CONDITIONAL_JUMP)
// 005d7741: POP ESI
// 005d7742: POP EBX
// 005d7743: RET
