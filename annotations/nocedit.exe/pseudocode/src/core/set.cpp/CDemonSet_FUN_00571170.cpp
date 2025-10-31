// Name: core_set.cpp_CDemonSet_FUN_00571170
// Address: 00571170
// Address Range: [[00571170, 005711a7]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_00571170(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0e99 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_00571170(CDemonSet *this_ptr)

{
  CDemonLight **ppCVar1;
  int iVar2;
  int *in_stack_00000008;
  
  *in_stack_00000008 = g_MasterLightCount;
  iVar2 = 0;
  if (0 < g_MasterLightCount) {
    do {
      ppCVar1 = g_MasterLightList + iVar2;
      in_stack_00000008 = in_stack_00000008 + 1;
      iVar2 = iVar2 + 1;
      *in_stack_00000008 = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_MasterLightCount);
  }
  return iVar2;
}


// Assembly code:
// 00571170: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00571170
// 00571171: MOV EBX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 00571177: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0057117b: MOV EAX,EBX
// 0057117d: MOV dword ptr [ECX],EBX
// 0057117f: XOR EAX,EBX
// 00571181: TEST EBX,EBX
// 00571183: JLE 0x005711a0
//   XREF to: 005711a0 (CONDITIONAL_JUMP)
// 00571185: MOV EDX,ECX
// 00571187: MOV ECX,dword ptr [EAX*0x4 + 0x3276db0]
//   Label: LAB_00571187
//   XREF to: 03276db0 (DATA)
// 0057118e: ADD EDX,0x4
// 00571191: MOV ECX,dword ptr [ECX + 0x1cb4]
// 00571197: INC EAX
// 00571198: MOV dword ptr [EDX],ECX
// 0057119a: CMP EAX,EBX
// 0057119c: JL 0x00571187
//   XREF to: 00571187 (CONDITIONAL_JUMP)
// 0057119e: MOV EAX,EAX
// 005711a0: MOV dword ptr [0x03276dac],EBX
//   Label: LAB_005711a0
//   XREF to: 03276dac (WRITE)
// 005711a6: POP EBX
// 005711a7: RET
