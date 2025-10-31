// Name: core_ammobox.cpp_FUN_00411ab0
// Address: 00411ab0
// Address Range: [[00411ab0, 00411b25]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_FUN_00411ab0()
// Cross-references:
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411bdf [DATA]
// Globals:
//   void* switchdataD_00411a9c = 00411ad6
//   undefined4 g_CAmmoBoxClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

undefined4 core_ammobox_cpp_FUN_00411ab0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CAmmoBoxClassInfo.name_hash);
  switch(pCVar1[2].field6_0x68) {
  case 0:
    pCVar1[2].field6_0x68 = 1;
    break;
  case 1:
    pCVar1[2].field6_0x68 = 2;
    return 1;
  case 2:
    pCVar1[2].field6_0x68 = 3;
    return 1;
  case 3:
    pCVar1[2].field6_0x68 = 4;
    return 1;
  case 4:
    pCVar1[2].field6_0x68 = 0;
    return 1;
  }
  return 1;
}


// Assembly code:
// 00411ab0: MOV EDX,dword ptr [0x008223e0]
//   Label: core_ammobox.cpp_FUN_00411ab0
//   XREF to: 008223e0 (READ)
// 00411ab6: PUSH EDX
// 00411ab7: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00411abb: PUSH ECX
// 00411abc: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00411ac1: MOV EDX,dword ptr [EAX + 0x318]
// 00411ac7: ADD ESP,0x8
// 00411aca: CMP EDX,0x4
// 00411acd: JA 0x00411ae0
//   XREF to: 00411ae0 (CONDITIONAL_JUMP)
// 00411acf: JMP dword ptr [EDX*0x4 + 0x411a9c]
//   Label: switchD
//   XREF to: 00411ad6 (COMPUTED_JUMP)
//   XREF to: 00411ae6 (COMPUTED_JUMP)
//   XREF to: 00411af6 (COMPUTED_JUMP)
//   XREF to: 00411b06 (COMPUTED_JUMP)
//   XREF to: 00411b16 (COMPUTED_JUMP)
//   XREF to: 00411a9c (DATA)
// 00411ad6: MOV dword ptr [EAX + 0x318],0x1
//   Label: caseD_0
// 00411ae0: MOV EAX,0x1
//   Label: default
// 00411ae5: RET
// 00411ae6: MOV dword ptr [EAX + 0x318],0x2
//   Label: caseD_1
// 00411af0: MOV EAX,0x1
// 00411af5: RET
// 00411af6: MOV dword ptr [EAX + 0x318],0x3
//   Label: caseD_2
// 00411b00: MOV EAX,0x1
// 00411b05: RET
// 00411b06: MOV dword ptr [EAX + 0x318],0x4
//   Label: caseD_3
// 00411b10: MOV EAX,0x1
// 00411b15: RET
// 00411b16: MOV dword ptr [EAX + 0x318],0x0
//   Label: caseD_4
// 00411b20: MOV EAX,0x1
// 00411b25: RET
