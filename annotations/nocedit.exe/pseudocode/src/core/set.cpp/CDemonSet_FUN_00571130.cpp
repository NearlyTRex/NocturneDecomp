// Name: core_set.cpp_CDemonSet_FUN_00571130
// Address: 00571130
// Address Range: [[00571130, 00571168]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00571130(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db219 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList
//   undefined4 DAT_03276db4

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00571130(CDemonSet *this_ptr)

{
  int *piVar1;
  CDemonLight **ppCVar2;
  int iVar3;
  int *in_stack_00000008;
  
  if ((g_MasterLightCount == *in_stack_00000008) && (iVar3 = 0, 0 < *in_stack_00000008)) {
    do {
      ppCVar2 = g_MasterLightList + iVar3;
      piVar1 = in_stack_00000008 + 1;
      in_stack_00000008 = in_stack_00000008 + 1;
      iVar3 = iVar3 + 1;
      (*ppCVar2)->light_enabled_flag = *piVar1;
    } while (iVar3 < g_MasterLightCount);
  }
  return;
}


// Assembly code:
// 00571130: PUSH ESI
//   Label: core_set.cpp_CDemonSet_FUN_00571130
// 00571131: MOV ESI,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 00571137: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0057113b: MOV ECX,dword ptr [EDX]
// 0057113d: CMP ESI,ECX
// 0057113f: JNZ 0x00571161
//   XREF to: 00571161 (CONDITIONAL_JUMP)
// 00571141: XOR EAX,EAX
// 00571143: TEST ECX,ECX
// 00571145: JLE 0x00571161
//   XREF to: 00571161 (CONDITIONAL_JUMP)
// 00571147: PUSH EBX
// 00571148: MOV EBX,dword ptr [EAX*0x4 + 0x3276db0]
//   Label: LAB_00571148
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0057114f: MOV ECX,dword ptr [EDX + 0x4]
// 00571152: ADD EDX,0x4
// 00571155: INC EAX
// 00571156: MOV dword ptr [EBX + 0x1cb4],ECX
// 0057115c: CMP EAX,ESI
// 0057115e: JL 0x00571148
//   XREF to: 00571148 (CONDITIONAL_JUMP)
// 00571160: POP EBX
// 00571161: MOV dword ptr [0x03276dac],ESI
//   Label: LAB_00571161
//   XREF to: 03276dac (WRITE)
// 00571167: POP ESI
// 00571168: RET
