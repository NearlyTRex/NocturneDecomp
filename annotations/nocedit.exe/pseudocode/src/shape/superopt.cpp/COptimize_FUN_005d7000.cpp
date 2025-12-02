// Name: shape_superopt.cpp_COptimize_FUN_005d7000
// Address: 005d7000
// Address Range: [[005d7000, 005d70c5]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d7000(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_COptimize_ctor_FUN_005d6f90 (005d6f90) at 005d6fba [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0 (005d6fd0) at 005d6fdd [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_superopt.cpp_CObj_free_FUN_005d2600
//   shape_superopt.cpp_FUN_005c79d0
//   shape_superopt.cpp_FUN_005c79f0

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d7000(COptimize *this_ptr)

{
  void *ptr;
  int iVar1;
  uint uVar2;
  
  shape_superopt_cpp_CObj_free_FUN_005d2600(&this_ptr->obj);
  uVar2 = 0;
  if (this_ptr->field5_0x38 != 0) {
    iVar1 = 0;
    do {
      shape_superopt_cpp_FUN_005c79f0();
      if (*(int *)(iVar1 + (int)this_ptr->field6_0x3c) != 0) {
        ptr = (void *)shape_superopt_cpp_FUN_005c79d0();
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar2 < (uint)this_ptr->field5_0x38);
  }
  if (this_ptr->field6_0x3c != (void *)0x0) {
    crt_memory_c_free_FUN_00601cd0(this_ptr->field6_0x3c);
  }
  this_ptr->field6_0x3c = (void *)0x0;
  this_ptr->field5_0x38 = 0;
  (*(code *)this_ptr->vtable->field1_0x4)();
  (*(code *)this_ptr->vtable->field3_0xc)();
  (*(code *)this_ptr->vtable->field5_0x14)();
  (*(code *)this_ptr->vtable->field7_0x1c)();
  return;
}


// Assembly code:
// 005d7000: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_FUN_005d7000
// 005d7001: PUSH ESI
// 005d7002: PUSH EDI
// 005d7003: PUSH EBP
// 005d7004: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d7008: PUSH ESI
// 005d7009: CALL shape_superopt.cpp_CObj_free_FUN_005d2600
//   XREF to: 005d2600 (UNCONDITIONAL_CALL)
// 005d700e: XOR EDI,EDI
// 005d7010: MOV EDX,dword ptr [ESI + 0x38]
// 005d7013: ADD ESP,0x4
// 005d7016: TEST EDX,EDX
// 005d7018: JBE 0x005d7040
//   XREF to: 005d7040 (CONDITIONAL_JUMP)
// 005d701a: XOR EBX,EBX
// 005d701c: MOV EAX,dword ptr [ESI + 0x3c]
//   Label: LAB_005d701c
// 005d701f: MOV EBP,dword ptr [EBX + EAX*0x1]
// 005d7022: PUSH EBP
// 005d7023: CALL shape_superopt.cpp_FUN_005c79f0
//   XREF to: 005c79f0 (UNCONDITIONAL_CALL)
// 005d7028: MOV EAX,dword ptr [ESI + 0x3c]
// 005d702b: MOV EAX,dword ptr [EBX + EAX*0x1]
// 005d702e: ADD ESP,0x4
// 005d7031: TEST EAX,EAX
// 005d7033: JNZ 0x005d70a2
//   XREF to: 005d70a2 (CONDITIONAL_JUMP)
// 005d7035: INC EDI
//   Label: LAB_005d7035
// 005d7036: MOV ECX,dword ptr [ESI + 0x38]
// 005d7039: ADD EBX,0x4
// 005d703c: CMP EDI,ECX
// 005d703e: JC 0x005d701c
//   XREF to: 005d701c (CONDITIONAL_JUMP)
// 005d7040: MOV EBX,dword ptr [ESI + 0x3c]
//   Label: LAB_005d7040
// 005d7043: TEST EBX,EBX
// 005d7045: JNZ 0x005d70bb
//   XREF to: 005d70bb (CONDITIONAL_JUMP)
// 005d7047: PUSH 0x3f50624d
//   Label: LAB_005d7047
// 005d704c: MOV dword ptr [ESI + 0x3c],0x0
// 005d7053: PUSH 0xd2f1a9fc
// 005d7058: MOV EAX,dword ptr [ESI + 0x40]
// 005d705b: PUSH ESI
// 005d705c: MOV dword ptr [ESI + 0x38],0x0
// 005d7063: CALL dword ptr [EAX + 0x4]
// 005d7066: ADD ESP,0xc
// 005d7069: PUSH 0x3f50624d
// 005d706e: PUSH 0xd2f1a9fc
// 005d7073: MOV EAX,dword ptr [ESI + 0x40]
// 005d7076: PUSH ESI
// 005d7077: CALL dword ptr [EAX + 0xc]
// 005d707a: ADD ESP,0xc
// 005d707d: PUSH 0x3f50624d
// 005d7082: PUSH 0xd2f1a9fc
// 005d7087: MOV EAX,dword ptr [ESI + 0x40]
// 005d708a: PUSH ESI
// 005d708b: CALL dword ptr [EAX + 0x14]
// 005d708e: ADD ESP,0xc
// 005d7091: PUSH 0x10
// 005d7093: MOV EAX,dword ptr [ESI + 0x40]
// 005d7096: PUSH ESI
// 005d7097: CALL dword ptr [EAX + 0x1c]
// 005d709a: ADD ESP,0x8
// 005d709d: POP EBP
// 005d709e: POP EDI
// 005d709f: POP ESI
// 005d70a0: POP EBX
// 005d70a1: RET
// 005d70a2: PUSH 0x0
//   Label: LAB_005d70a2
// 005d70a4: PUSH EAX
// 005d70a5: CALL shape_superopt.cpp_FUN_005c79d0
//   XREF to: 005c79d0 (UNCONDITIONAL_CALL)
// 005d70aa: ADD ESP,0x8
// 005d70ad: PUSH EAX
// 005d70ae: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d70b3: ADD ESP,0x4
// 005d70b6: JMP 0x005d7035
//   XREF to: 005d7035 (UNCONDITIONAL_JUMP)
// 005d70bb: PUSH EBX
//   Label: LAB_005d70bb
// 005d70bc: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d70c1: ADD ESP,0x4
// 005d70c4: JMP 0x005d7047
//   XREF to: 005d7047 (UNCONDITIONAL_JUMP)
