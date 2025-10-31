// Name: core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
// Address: 0056d090
// Address Range: [[0056d090, 0056d109]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422c61 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7070 (004a7070) at 004a714b [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 005065ca [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c1df [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00587f70 (00587f70) at 0058804b [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_process_FUN_005ee110 (005ee110) at 005ee240 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645dc3
//   TerminatedCString s_Too_many_dynamic_lights_00645dd3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x1cb4) != 0) {
    if (0 < g_DynamicLightCount) {
      iVar1 = 0;
      do {
        if (in_stack_00000008 == *(int *)((int)g_DynamicLights + iVar1)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (SBORROW4(iVar1,g_DynamicLightCount * 4) != iVar1 + g_DynamicLightCount * -4 < 0);
    }
    if (3 < g_DynamicLightCount) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 0x8cf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many dynamic lights!");
    }
    g_DynamicLightCount = g_DynamicLightCount + 1;
    (&g_DynamicLightCount)[g_DynamicLightCount] = in_stack_00000008;
  }
  return;
}


// Assembly code:
// 0056d090: PUSH EBX
//   Label: core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
// 0056d091: PUSH ESI
// 0056d092: MOV ESI,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056d098: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0056d09c: CMP dword ptr [EBX + 0x1cb4],0x0
// 0056d0a3: JZ 0x0056d0da
//   XREF to: 0056d0da (CONDITIONAL_JUMP)
// 0056d0a5: TEST ESI,ESI
// 0056d0a7: JLE 0x0056d0c1
//   XREF to: 0056d0c1 (CONDITIONAL_JUMP)
// 0056d0a9: LEA EDX,[ESI*0x4 + 0x0]
// 0056d0b0: XOR EAX,EAX
// 0056d0b2: CMP EBX,dword ptr [EAX + 0x32776b8]
//   Label: LAB_0056d0b2
//   XREF to: 032776b8 (READ)
//   XREF to: 032776bc (READ)
// 0056d0b8: JZ 0x0056d0da
//   XREF to: 0056d0da (CONDITIONAL_JUMP)
// 0056d0ba: ADD EAX,0x4
// 0056d0bd: CMP EAX,EDX
// 0056d0bf: JL 0x0056d0b2
//   XREF to: 0056d0b2 (CONDITIONAL_JUMP)
// 0056d0c1: MOV dword ptr [0x032776b4],ESI
//   Label: LAB_0056d0c1
//   XREF to: 032776b4 (WRITE)
// 0056d0c7: CMP ESI,0x4
// 0056d0ca: JGE 0x0056d0e3
//   XREF to: 0056d0e3 (CONDITIONAL_JUMP)
// 0056d0cc: MOV ESI,dword ptr [0x032776b4]
//   Label: LAB_0056d0cc
//   XREF to: 032776b4 (READ)
// 0056d0d2: INC ESI
// 0056d0d3: MOV dword ptr [ESI*0x4 + 0x32776b4],EBX
//   XREF to: 032776b4 (DATA)
// 0056d0da: MOV dword ptr [0x032776b4],ESI
//   Label: LAB_0056d0da
//   XREF to: 032776b4 (WRITE)
// 0056d0e0: POP ESI
// 0056d0e1: POP EBX
// 0056d0e2: RET
// 0056d0e3: PUSH EDI
//   Label: LAB_0056d0e3
// 0056d0e4: MOV ECX,0x645dc3
//   XREF to: 00645dc3 (PARAM)
// 0056d0e9: MOV EDI,0x8cf
// 0056d0ee: PUSH 0x645dd3
//   XREF to: 00645dd3 (DATA)
// 0056d0f3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0056d0f9: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0056d0ff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056d104: ADD ESP,0x4
// 0056d107: POP EDI
// 0056d108: JMP 0x0056d0cc
//   XREF to: 0056d0cc (UNCONDITIONAL_JUMP)
