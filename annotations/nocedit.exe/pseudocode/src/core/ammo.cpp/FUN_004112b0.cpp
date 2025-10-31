// Name: core_ammo.cpp_FUN_004112b0
// Address: 004112b0
// Address Range: [[004112b0, 00411355]]
// Convention: unknown
// Signature: undefined core_ammo.cpp_FUN_004112b0()
// Cross-references:
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 004113bb [DATA]
// Globals:
//   void* switchdataD_00411288 = 004112d6
//   undefined4 g_CAmmoClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

undefined4 core_ammo_cpp_FUN_004112b0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CAmmoClassInfo.name_hash)
  ;
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
    pCVar1[2].field6_0x68 = 5;
    return 1;
  case 5:
    pCVar1[2].field6_0x68 = 7;
    return 1;
  case 7:
    pCVar1[2].field6_0x68 = 8;
    return 1;
  case 8:
    pCVar1[2].field6_0x68 = 0;
    return 1;
  }
  return 1;
}


// Assembly code:
// 004112b0: MOV EDX,dword ptr [0x008223a4]
//   Label: core_ammo.cpp_FUN_004112b0
//   XREF to: 008223a4 (READ)
// 004112b6: PUSH EDX
// 004112b7: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004112bb: PUSH ECX
// 004112bc: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004112c1: MOV EDX,dword ptr [EAX + 0x318]
// 004112c7: ADD ESP,0x8
// 004112ca: CMP EDX,0x8
// 004112cd: JA 0x004112e0
//   XREF to: 004112e0 (CONDITIONAL_JUMP)
// 004112cf: JMP dword ptr [EDX*0x4 + 0x411288]
//   Label: switchD
//   XREF to: 004112d6 (COMPUTED_JUMP)
//   XREF to: 004112e6 (COMPUTED_JUMP)
//   XREF to: 004112f6 (COMPUTED_JUMP)
//   XREF to: 00411306 (COMPUTED_JUMP)
//   XREF to: 00411316 (COMPUTED_JUMP)
//   XREF to: 00411326 (COMPUTED_JUMP)
//   XREF to: 004112e0 (COMPUTED_JUMP)
//   XREF to: 00411336 (COMPUTED_JUMP)
//   XREF to: 00411346 (COMPUTED_JUMP)
//   XREF to: 00411288 (DATA)
// 004112d6: MOV dword ptr [EAX + 0x318],0x1
//   Label: caseD_0
// 004112e0: MOV EAX,0x1
//   Label: caseD_6
// 004112e5: RET
// 004112e6: MOV dword ptr [EAX + 0x318],0x2
//   Label: caseD_1
// 004112f0: MOV EAX,0x1
// 004112f5: RET
// 004112f6: MOV dword ptr [EAX + 0x318],0x3
//   Label: caseD_2
// 00411300: MOV EAX,0x1
// 00411305: RET
// 00411306: MOV dword ptr [EAX + 0x318],0x4
//   Label: caseD_3
// 00411310: MOV EAX,0x1
// 00411315: RET
// 00411316: MOV dword ptr [EAX + 0x318],0x5
//   Label: caseD_4
// 00411320: MOV EAX,0x1
// 00411325: RET
// 00411326: MOV dword ptr [EAX + 0x318],0x7
//   Label: caseD_5
// 00411330: MOV EAX,0x1
// 00411335: RET
// 00411336: MOV dword ptr [EAX + 0x318],0x8
//   Label: caseD_7
// 00411340: MOV EAX,0x1
// 00411345: RET
// 00411346: MOV dword ptr [EAX + 0x318],0x0
//   Label: caseD_8
// 00411350: MOV EAX,0x1
// 00411355: RET
