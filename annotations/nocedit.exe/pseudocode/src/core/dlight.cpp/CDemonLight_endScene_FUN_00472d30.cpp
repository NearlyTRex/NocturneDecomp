// Name: core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
// Address: 00472d30
// Address Range: [[00472d30, 00472e31]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c081 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cb94 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ab93 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b614 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061f005
//   TerminatedCString s_CDemonLight_endScene_Sce_0061f018
//   double g_ShadowDepthToDistanceScale = 0.00390625
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight *this_ptr)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  CDemonLight *pCVar4;
  ushort uVar5;
  
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x164;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::endScene - Scene not open");
  }
  if ((this_ptr->base).skip_clear_buffer_flag == 0) {
    puVar2 = this_ptr->shadow_depth_buffer;
    uVar5 = 0;
    for (iVar3 = this_ptr->shadow_map_width * this_ptr->shadow_map_height; 0 < iVar3;
        iVar3 = iVar3 + -1) {
      uVar1 = *puVar2;
      if ((uVar1 != 0xffff) && (uVar5 < uVar1)) {
        uVar5 = uVar1;
      }
      puVar2 = puVar2 + 1;
    }
    (this_ptr->base).max_distance = (float)uVar5 * (float)g_ShadowDepthToDistanceScale;
  }
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->shadow_map_height) {
    do {
      g_ScreenBufferArray[iVar3] = pCVar4->saved_screen_buffer_rows[0];
      iVar3 = iVar3 + 1;
      pCVar4 = (CDemonLight *)&(pCVar4->base).base.position;
    } while (iVar3 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(&this_ptr->base);
  (this_ptr->base).scene_open_flag = 0;
  return;
}


// Assembly code:
// 00472d30: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
// 00472d31: PUSH ESI
// 00472d32: PUSH EDI
// 00472d33: PUSH EBP
// 00472d34: MOV EBP,ESP
// 00472d36: SUB ESP,0x4
// 00472d39: AND ESP,0xfffffff8
// 00472d3c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00472d3f: CMP dword ptr [ESI + 0x11e4],0x0
// 00472d46: JZ 0x00472e0a
//   XREF to: 00472e0a (CONDITIONAL_JUMP)
// 00472d4c: CMP dword ptr [ESI + 0x168],0x0
//   Label: LAB_00472d4c
// 00472d53: JNZ 0x00472d9a
//   XREF to: 00472d9a (CONDITIONAL_JUMP)
// 00472d55: MOV EDX,dword ptr [ESI + 0x1cc0]
// 00472d5b: IMUL EDX,dword ptr [ESI + 0x1cc4]
// 00472d62: MOV ECX,dword ptr [ESI + 0x2f94]
// 00472d68: XOR EBX,EBX
// 00472d6a: TEST EDX,EDX
// 00472d6c: JLE 0x00472d88
//   XREF to: 00472d88 (CONDITIONAL_JUMP)
// 00472d6e: XOR EAX,EAX
//   Label: LAB_00472d6e
// 00472d70: MOV AX,word ptr [ECX]
// 00472d73: CMP EAX,0xffff
// 00472d78: JGE 0x00472d80
//   XREF to: 00472d80 (CONDITIONAL_JUMP)
// 00472d7a: CMP EAX,EBX
// 00472d7c: JLE 0x00472d80
//   XREF to: 00472d80 (CONDITIONAL_JUMP)
// 00472d7e: MOV EBX,EAX
// 00472d80: DEC EDX
//   Label: LAB_00472d80
// 00472d81: ADD ECX,0x2
// 00472d84: TEST EDX,EDX
// 00472d86: JG 0x00472d6e
//   XREF to: 00472d6e (CONDITIONAL_JUMP)
// 00472d88: MOV dword ptr [ESP],EBX
//   Label: LAB_00472d88
//   XREF to: Stack[-0x18] (DATA)
// 00472d8b: FILD dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00472d8e: FMUL double ptr [0x0061f043]
//   XREF to: 0061f043 (READ)
// 00472d94: FSTP float ptr [ESI + 0x140]
// 00472d9a: PUSH 0x0
//   Label: LAB_00472d9a
// 00472d9c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472da2: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00472da3: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 00472da8: ADD ESP,0x8
// 00472dab: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472db1: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00472db2: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 00472db7: ADD ESP,0x4
// 00472dba: MOV EBX,dword ptr [ESI + 0x1cc4]
// 00472dc0: XOR EAX,EAX
// 00472dc2: TEST EBX,EBX
// 00472dc4: JLE 0x00472df0
//   XREF to: 00472df0 (CONDITIONAL_JUMP)
// 00472dc6: MOV EDX,ESI
// 00472dc8: MOV ECX,dword ptr [EDX + 0x1cd4]
//   Label: LAB_00472dc8
// 00472dce: MOV dword ptr [EAX*0x4 + 0x2cf6a9c],ECX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 00472dd5: INC EAX
// 00472dd6: MOV EDI,dword ptr [ESI + 0x1cc4]
// 00472ddc: ADD EDX,0x4
// 00472ddf: CMP EAX,EDI
// 00472de1: JL 0x00472dc8
//   XREF to: 00472dc8 (CONDITIONAL_JUMP)
// 00472de3: LEA EAX,[EAX]
// 00472de9: LEA EDX,[EDX]
// 00472def: NOP
// 00472df0: PUSH ESI
//   Label: LAB_00472df0
// 00472df1: CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
//   XREF to: 0044c410 (UNCONDITIONAL_CALL)
// 00472df6: ADD ESP,0x4
// 00472df9: MOV dword ptr [ESI + 0x11e4],0x0
// 00472e03: MOV ESP,EBP
// 00472e05: POP EBP
// 00472e06: POP EDI
// 00472e07: POP ESI
// 00472e08: POP EBX
// 00472e09: RET
// 00472e0a: MOV ECX,0x61f005
//   Label: LAB_00472e0a
//   XREF to: 0061f005 (PARAM)
// 00472e0f: MOV EBX,0x164
// 00472e14: PUSH 0x61f018
//   XREF to: 0061f018 (DATA)
// 00472e19: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00472e1f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00472e25: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00472e2a: ADD ESP,0x4
// 00472e2d: JMP 0x00472d4c
//   XREF to: 00472d4c (UNCONDITIONAL_JUMP)
