// Name: core_set.cpp_CDemonSet_FUN_0056b790
// Address: 0056b790
// Address Range: [[0056b790, 0056b7d2]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b790(CDemonSet * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ac723 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054cd2f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055cbf9 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b790(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  C3DSCamera *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->camera_count) {
    str1 = this_ptr->cameras;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->name,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->camera_count);
  }
  return -1;
}


// Assembly code:
// 0056b790: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056b790
// 0056b791: PUSH ESI
// 0056b792: PUSH EDI
// 0056b793: PUSH EBP
// 0056b794: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056b798: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056b79c: MOV EDX,dword ptr [EDI]
// 0056b79e: XOR EBX,EBX
// 0056b7a0: TEST EDX,EDX
// 0056b7a2: JLE 0x0056b7c2
//   XREF to: 0056b7c2 (CONDITIONAL_JUMP)
// 0056b7a4: LEA ESI,[EDI + 0x4]
// 0056b7a7: PUSH EBP
//   Label: LAB_0056b7a7
// 0056b7a8: PUSH ESI
// 0056b7a9: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0056b7ae: ADD ESP,0x8
// 0056b7b1: TEST EAX,EAX
// 0056b7b3: JZ 0x0056b7cc
//   XREF to: 0056b7cc (CONDITIONAL_JUMP)
// 0056b7b5: INC EBX
// 0056b7b6: MOV ECX,dword ptr [EDI]
// 0056b7b8: ADD ESI,0x1a4
// 0056b7be: CMP EBX,ECX
// 0056b7c0: JL 0x0056b7a7
//   XREF to: 0056b7a7 (CONDITIONAL_JUMP)
// 0056b7c2: MOV EAX,0xffffffff
//   Label: LAB_0056b7c2
// 0056b7c7: POP EBP
// 0056b7c8: POP EDI
// 0056b7c9: POP ESI
// 0056b7ca: POP EBX
// 0056b7cb: RET
// 0056b7cc: MOV EAX,EBX
//   Label: LAB_0056b7cc
// 0056b7ce: POP EBP
// 0056b7cf: POP EDI
// 0056b7d0: POP ESI
// 0056b7d1: POP EBX
// 0056b7d2: RET
