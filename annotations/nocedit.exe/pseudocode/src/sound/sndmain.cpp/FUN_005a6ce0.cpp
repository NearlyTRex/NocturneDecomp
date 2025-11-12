// Name: sound_sndmain.cpp_FUN_005a6ce0
// Address: 005a6ce0
// Address Range: [[005a6ce0, 005a6d7a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_FUN_005a6ce0(void)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 (005a7100) at 005a71c4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_005a6ce0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x20) == 1) {
    *(double *)(in_stack_00000004 + 4) = (double)**(float **)(in_stack_00000004 + 0x1c);
    *(double *)(in_stack_00000004 + 0xc) =
         (double)*(float *)(*(int *)(in_stack_00000004 + 0x1c) + 4);
    *(double *)(in_stack_00000004 + 0x14) =
         (double)*(float *)(*(int *)(in_stack_00000004 + 0x1c) + 8);
  }
  else if (*(int *)(in_stack_00000004 + 0x20) == 2) {
    *(undefined8 *)(in_stack_00000004 + 4) = **(undefined8 **)(in_stack_00000004 + 0x1c);
    *(undefined8 *)(in_stack_00000004 + 0xc) =
         *(undefined8 *)(*(int *)(in_stack_00000004 + 0x1c) + 8);
    *(undefined4 *)(in_stack_00000004 + 0x14) =
         *(undefined4 *)(*(int *)(in_stack_00000004 + 0x1c) + 0x10);
    *(undefined4 *)(in_stack_00000004 + 0x18) =
         *(undefined4 *)(*(int *)(in_stack_00000004 + 0x1c) + 0x14);
  }
  if (*(int *)(in_stack_00000004 + 0x40) != 1) {
    if (*(int *)(in_stack_00000004 + 0x40) != 2) {
      return;
    }
    *(undefined8 *)(in_stack_00000004 + 0x24) = **(undefined8 **)(in_stack_00000004 + 0x3c);
    *(undefined8 *)(in_stack_00000004 + 0x2c) =
         *(undefined8 *)(*(int *)(in_stack_00000004 + 0x3c) + 8);
    *(undefined4 *)(in_stack_00000004 + 0x34) =
         *(undefined4 *)(*(int *)(in_stack_00000004 + 0x3c) + 0x10);
    *(undefined4 *)(in_stack_00000004 + 0x38) =
         *(undefined4 *)(*(int *)(in_stack_00000004 + 0x3c) + 0x14);
    return;
  }
  *(double *)(in_stack_00000004 + 0x24) = (double)**(float **)(in_stack_00000004 + 0x3c);
  *(double *)(in_stack_00000004 + 0x2c) = (double)*(float *)(*(int *)(in_stack_00000004 + 0x3c) + 4)
  ;
  *(double *)(in_stack_00000004 + 0x34) = (double)*(float *)(*(int *)(in_stack_00000004 + 0x3c) + 8)
  ;
  return;
}


// Assembly code:
// 005a6ce0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a6ce0
// 005a6ce1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a6ce5: MOV EDX,dword ptr [EAX + 0x20]
// 005a6ce8: CMP EDX,0x1
// 005a6ceb: JZ 0x005a6d21
//   XREF to: 005a6d21 (CONDITIONAL_JUMP)
// 005a6ced: CMP EDX,0x2
// 005a6cf0: JNZ 0x005a6d12
//   XREF to: 005a6d12 (CONDITIONAL_JUMP)
// 005a6cf2: MOV EDX,dword ptr [EAX + 0x1c]
// 005a6cf5: FLD double ptr [EDX]
// 005a6cf7: MOV EDX,dword ptr [EAX + 0x1c]
// 005a6cfa: FSTP double ptr [EAX + 0x4]
// 005a6cfd: FLD double ptr [EDX + 0x8]
// 005a6d00: MOV EDX,dword ptr [EAX + 0x1c]
// 005a6d03: FSTP double ptr [EAX + 0xc]
// 005a6d06: MOV ECX,dword ptr [EDX + 0x10]
// 005a6d09: MOV dword ptr [EAX + 0x14],ECX
// 005a6d0c: MOV ECX,dword ptr [EDX + 0x14]
// 005a6d0f: MOV dword ptr [EAX + 0x18],ECX
// 005a6d12: MOV EBX,dword ptr [EAX + 0x40]
//   Label: LAB_005a6d12
// 005a6d15: CMP EBX,0x1
// 005a6d18: JZ 0x005a6d3d
//   XREF to: 005a6d3d (CONDITIONAL_JUMP)
// 005a6d1a: CMP EBX,0x2
// 005a6d1d: JZ 0x005a6d59
//   XREF to: 005a6d59 (CONDITIONAL_JUMP)
// 005a6d1f: POP EBX
// 005a6d20: RET
// 005a6d21: MOV EDX,dword ptr [EAX + 0x1c]
//   Label: LAB_005a6d21
// 005a6d24: FLD float ptr [EDX]
// 005a6d26: MOV EDX,dword ptr [EAX + 0x1c]
// 005a6d29: FSTP double ptr [EAX + 0x4]
// 005a6d2c: FLD float ptr [EDX + 0x4]
// 005a6d2f: MOV EDX,dword ptr [EAX + 0x1c]
// 005a6d32: FSTP double ptr [EAX + 0xc]
// 005a6d35: FLD float ptr [EDX + 0x8]
// 005a6d38: FSTP double ptr [EAX + 0x14]
// 005a6d3b: JMP 0x005a6d12
//   XREF to: 005a6d12 (UNCONDITIONAL_JUMP)
// 005a6d3d: MOV EDX,dword ptr [EAX + 0x3c]
//   Label: LAB_005a6d3d
// 005a6d40: FLD float ptr [EDX]
// 005a6d42: MOV EDX,dword ptr [EAX + 0x3c]
// 005a6d45: FSTP double ptr [EAX + 0x24]
// 005a6d48: FLD float ptr [EDX + 0x4]
// 005a6d4b: MOV EDX,dword ptr [EAX + 0x3c]
// 005a6d4e: FSTP double ptr [EAX + 0x2c]
// 005a6d51: FLD float ptr [EDX + 0x8]
// 005a6d54: FSTP double ptr [EAX + 0x34]
// 005a6d57: POP EBX
// 005a6d58: RET
// 005a6d59: MOV EDX,dword ptr [EAX + 0x3c]
//   Label: LAB_005a6d59
// 005a6d5c: FLD double ptr [EDX]
// 005a6d5e: MOV EDX,dword ptr [EAX + 0x3c]
// 005a6d61: FSTP double ptr [EAX + 0x24]
// 005a6d64: FLD double ptr [EDX + 0x8]
// 005a6d67: MOV EDX,dword ptr [EAX + 0x3c]
// 005a6d6a: FSTP double ptr [EAX + 0x2c]
// 005a6d6d: MOV ECX,dword ptr [EDX + 0x10]
// 005a6d70: MOV dword ptr [EAX + 0x34],ECX
// 005a6d73: MOV ECX,dword ptr [EDX + 0x14]
// 005a6d76: MOV dword ptr [EAX + 0x38],ECX
// 005a6d79: POP EBX
// 005a6d7a: RET
