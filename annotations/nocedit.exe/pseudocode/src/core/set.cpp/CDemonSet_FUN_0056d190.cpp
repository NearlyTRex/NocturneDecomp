// Name: core_set.cpp_CDemonSet_FUN_0056d190
// Address: 0056d190
// Address Range: [[0056d190, 0056d2c0]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d190(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da4d4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_omni_lights_00645dec
//   TerminatedCString s_d_spot_lights_00645dfb
//   undefined4 DAT_006810dc
//   undefined4 DAT_006810e0
//   undefined4 DAT_006810e4
//   undefined4 DAT_0068125c
//   undefined4 DAT_00681260
//   undefined4 DAT_00681264
//   int g_ActiveLightCount
//   CDemonLight*[96] g_ActiveLightList
//   undefined4 DAT_03276f38
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
//   undefined4 DAT_03277d80
// Function calls:
//   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d190(CDemonSet *this_ptr)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  char acStack_104 [244];
  
  iVar5 = 0;
  if (0 < g_ActiveLightCount) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0068125c + iVar4);
      piVar2 = (int *)((int)&DAT_006810dc + iVar4);
      puVar3 = (undefined4 *)((int)g_ActiveLightList + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < g_ActiveLightCount);
  }
  iVar4 = 0;
  if (0 < g_DynamicLightCount) {
    iVar5 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0068125c + iVar5);
      piVar2 = (int *)((int)&DAT_006810dc + iVar5);
      puVar3 = (undefined4 *)((int)g_DynamicLights + iVar6);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar4 < g_DynamicLightCount);
  }
  iVar5 = g_ActiveLightCount + g_DynamicLightCount;
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef0,"%d omni lights",DAT_03277d80);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffef4,(&DAT_006810dc)[iVar5],(&DAT_0068125c)[iVar5]);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef8,"%d spot lights");
  engine_2d_c_drawText_FUN_00401fd0(acStack_104,(&DAT_006810dc)[iVar5],(&DAT_0068125c)[iVar5] + 0xb)
  ;
  return;
}


// Assembly code:
// 0056d190: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056d190
// 0056d191: PUSH ESI
// 0056d192: PUSH EDI
// 0056d193: PUSH EBP
// 0056d194: SUB ESP,0x100
// 0056d19a: MOV EDX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d1a0: XOR ESI,ESI
// 0056d1a2: TEST EDX,EDX
// 0056d1a4: JLE 0x0056d1e0
//   XREF to: 0056d1e0 (CONDITIONAL_JUMP)
// 0056d1a6: XOR EBX,EBX
// 0056d1a8: PUSH 0x80
//   Label: LAB_0056d1a8
// 0056d1ad: MOV ECX,dword ptr [EBX + 0x68125c]
//   XREF to: 0068125c (READ)
//   XREF to: 00681260 (READ)
// 0056d1b3: PUSH ECX
// 0056d1b4: MOV EDI,dword ptr [EBX + 0x6810dc]
//   XREF to: 006810dc (READ)
//   XREF to: 006810e0 (READ)
// 0056d1ba: PUSH EDI
// 0056d1bb: MOV EBP,dword ptr [EBX + 0x3276f34]
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056d1c1: PUSH EBP
// 0056d1c2: ADD EBX,0x4
// 0056d1c5: INC ESI
// 0056d1c6: CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   XREF to: 00473390 (UNCONDITIONAL_CALL)
// 0056d1cb: MOV EAX,[0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d1d0: ADD ESP,0x10
// 0056d1d3: CMP ESI,EAX
// 0056d1d5: JL 0x0056d1a8
//   XREF to: 0056d1a8 (CONDITIONAL_JUMP)
// 0056d1d7: LEA EAX,[EAX]
// 0056d1dd: LEA EDX,[EDX]
// 0056d1e0: MOV EDX,dword ptr [0x032776b4]
//   Label: LAB_0056d1e0
//   XREF to: 032776b4 (READ)
// 0056d1e6: XOR EBP,EBP
// 0056d1e8: TEST EDX,EDX
// 0056d1ea: JLE 0x0056d230
//   XREF to: 0056d230 (CONDITIONAL_JUMP)
// 0056d1ec: LEA EBX,[ESI*0x4 + 0x0]
// 0056d1f3: XOR EDI,EDI
// 0056d1f5: PUSH 0x80
//   Label: LAB_0056d1f5
// 0056d1fa: MOV ECX,dword ptr [EBX + 0x68125c]
//   XREF to: 0068125c (READ)
//   XREF to: 00681260 (READ)
//   XREF to: 00681264 (READ)
// 0056d200: PUSH ECX
// 0056d201: MOV ESI,dword ptr [EBX + 0x6810dc]
//   XREF to: 006810dc (READ)
//   XREF to: 006810e0 (READ)
//   XREF to: 006810e4 (READ)
// 0056d207: PUSH ESI
// 0056d208: MOV EAX,dword ptr [EDI + 0x32776b8]
//   XREF to: 032776b8 (READ)
//   XREF to: 032776bc (READ)
// 0056d20e: ADD EDI,0x4
// 0056d211: PUSH EAX
// 0056d212: ADD EBX,0x4
// 0056d215: INC EBP
// 0056d216: CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   XREF to: 00473390 (UNCONDITIONAL_CALL)
// 0056d21b: MOV EDX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056d221: ADD ESP,0x10
// 0056d224: CMP EBP,EDX
// 0056d226: JL 0x0056d1f5
//   XREF to: 0056d1f5 (CONDITIONAL_JUMP)
// 0056d228: LEA EAX,[EAX]
// 0056d22e: MOV EDX,EDX
// 0056d230: MOV ESI,dword ptr [0x03277d80]
//   Label: LAB_0056d230
//   XREF to: 03277d80 (READ)
// 0056d236: PUSH ESI
// 0056d237: MOV EBX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d23d: PUSH 0x645dec
//   XREF to: 00645dec (DATA)
// 0056d242: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 0056d246: MOV ECX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056d24c: PUSH ESI
// 0056d24d: ADD EBX,ECX
// 0056d24f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056d254: ADD ESP,0xc
// 0056d257: MOV EDI,dword ptr [EBX*0x4 + 0x68125c]
//   XREF to: 0068125c (DATA)
// 0056d25e: PUSH EDI
// 0056d25f: MOV EBP,dword ptr [EBX*0x4 + 0x6810dc]
//   XREF to: 006810dc (DATA)
// 0056d266: PUSH EBP
// 0056d267: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 0056d26b: PUSH ESI
// 0056d26c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0056d271: ADD ESP,0xc
// 0056d274: MOV EAX,[0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d279: PUSH EAX
// 0056d27a: PUSH 0x645dfb
//   XREF to: 00645dfb (DATA)
// 0056d27f: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 0056d283: PUSH ESI
// 0056d284: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056d289: MOV ESI,dword ptr [EBX*0x4 + 0x68125c]
//   XREF to: 0068125c (DATA)
// 0056d290: ADD ESP,0xc
// 0056d293: ADD ESI,0xb
// 0056d296: PUSH ESI
// 0056d297: MOV EDX,dword ptr [EBX*0x4 + 0x6810dc]
//   XREF to: 006810dc (DATA)
// 0056d29e: PUSH EDX
// 0056d29f: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 0056d2a3: PUSH EBX
// 0056d2a4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0056d2a9: ADD ESP,0xc
// 0056d2ac: ADD ESP,0x100
// 0056d2b2: POP EBP
// 0056d2b3: POP EDI
// 0056d2b4: POP ESI
// 0056d2b5: POP EBX
// 0056d2b6: LEA EAX,[EAX]
// 0056d2bc: LEA EDX,[EDX]
// 0056d2c0: RET
