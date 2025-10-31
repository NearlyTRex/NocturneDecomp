// Name: shape_superopt.cpp_FUN_005d7750
// Address: 005d7750
// Address Range: [[005d7750, 005d7792]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d7750()
// Globals:
//   undefined4 DAT_03f6bbe8
//   undefined4 DAT_03f6bbf0
//   undefined4 DAT_03f6bc40
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int shape_superopt_cpp_FUN_005d7750(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *in_stack_00000004;
  
  iVar2 = 0;
  if (0 < DAT_03f6bbe8) {
    str1 = &DAT_03f6bbf0;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000004);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x50;
    } while (iVar2 < DAT_03f6bbe8);
  }
  return -1;
}


// Assembly code:
// 005d7750: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d7750
// 005d7751: PUSH ESI
// 005d7752: PUSH EDI
// 005d7753: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d7757: MOV EDX,dword ptr [0x03f6bbe8]
//   XREF to: 03f6bbe8 (READ)
// 005d775d: XOR EBX,EBX
// 005d775f: TEST EDX,EDX
// 005d7761: JLE 0x005d7784
//   XREF to: 005d7784 (CONDITIONAL_JUMP)
// 005d7763: MOV ESI,0x3f6bbf0
//   XREF to: 03f6bbf0 (DATA)
// 005d7768: PUSH EDI
//   Label: LAB_005d7768
// 005d7769: PUSH ESI
//   XREF to: 03f6bbf0 (DATA)
//   XREF to: 03f6bc40 (DATA)
// 005d776a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005d776f: ADD ESP,0x8
// 005d7772: TEST EAX,EAX
// 005d7774: JZ 0x005d778d
//   XREF to: 005d778d (CONDITIONAL_JUMP)
// 005d7776: MOV ECX,dword ptr [0x03f6bbe8]
//   XREF to: 03f6bbe8 (READ)
// 005d777c: INC EBX
// 005d777d: ADD ESI,0x50
// 005d7780: CMP EBX,ECX
// 005d7782: JL 0x005d7768
//   XREF to: 005d7768 (CONDITIONAL_JUMP)
// 005d7784: MOV EAX,0xffffffff
//   Label: LAB_005d7784
// 005d7789: POP EDI
// 005d778a: POP ESI
// 005d778b: POP EBX
// 005d778c: RET
// 005d778d: MOV EAX,EBX
//   Label: LAB_005d778d
// 005d778f: POP EDI
// 005d7790: POP ESI
// 005d7791: POP EBX
// 005d7792: RET
