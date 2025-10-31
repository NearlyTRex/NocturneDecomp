// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
// Address: 00472e40
// Address Range: [[00472e40, 00472f2d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b5ee [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061f04b
//   TerminatedCString s_CDemonLight_beginBackgro_0061f05e
//   TerminatedCString s_core_dlight_cpp_0061f091
//   TerminatedCString s_CDemonLight_beginBackgro_0061f0a4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_BackgroundSceneNestingCount
//   void*[1024] g_SavedScreenBufferArray
//   undefined4 DAT_026a5818
//   undefined4 DAT_026a5819
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 g_ScreenBufferArray[1]+1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x1af;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + 1;
  if (g_BackgroundSceneNestingCount == 1) {
    ppvVar4 = g_ScreenBufferArray;
    ppvVar5 = g_SavedScreenBufferArray;
    for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppvVar5 = *ppvVar4;
      ppvVar4 = ppvVar4 + (uint)bVar6 * -2 + 1;
      ppvVar5 = ppvVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)ppvVar5 = *(undefined1 *)ppvVar4;
      ppvVar4 = (void **)((int)ppvVar4 + (uint)bVar6 * -2 + 1);
      ppvVar5 = (void **)((int)ppvVar5 + (uint)bVar6 * -2 + 1);
    }
    if (this_ptr->restore_memory_size == 0) {
      g_CurrentFilename = "..\\core\\dlight.cpp";
      g_CurrentLineNumber = 0x1bc;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < this_ptr->shadow_map_height) {
      iVar3 = 0;
      do {
        *(int *)((int)g_ScreenBufferArray + iVar3) =
             this_ptr->restore_memory_size + this_ptr->shadow_map_width * iVar2 * 2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->shadow_map_height);
    }
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,1);
  }
  return;
}


// Assembly code:
// 00472e40: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
// 00472e41: PUSH ESI
// 00472e42: PUSH EDI
// 00472e43: PUSH EBP
// 00472e44: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00472e48: CMP dword ptr [EBX + 0x11e4],0x0
// 00472e4f: JZ 0x00472f06
//   XREF to: 00472f06 (CONDITIONAL_JUMP)
// 00472e55: MOV EDI,dword ptr [0x026a5810]
//   Label: LAB_00472e55
//   XREF to: 026a5810 (READ)
// 00472e5b: INC EDI
// 00472e5c: MOV dword ptr [0x026a5810],EDI
//   XREF to: 026a5810 (WRITE)
// 00472e62: CMP EDI,0x1
// 00472e65: JNZ 0x00472f01
//   XREF to: 00472f01 (CONDITIONAL_JUMP)
// 00472e6b: MOV ESI,0x2cf6a9c
//   XREF to: 02cf6a9c (DATA)
// 00472e70: MOV ECX,dword ptr [EBX + 0x1cc4]
// 00472e76: MOV EDI,0x26a5814
//   XREF to: 026a5814 (DATA)
// 00472e7b: SHL ECX,0x2
// 00472e7e: PUSH EDI
//   XREF to: 026a5814 (DATA)
// 00472e7f: MOV EAX,ECX
// 00472e81: SHR ECX,0x2
// 00472e84: MOVSD.REP ES:EDI,ESI
//   XREF to: 026a5814 (WRITE)
//   XREF to: 026a5818 (WRITE)
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 00472e86: MOV CL,AL
// 00472e88: AND CL,0x3
// 00472e8b: MOVSB.REP ES:EDI,ESI
//   XREF to: 026a5814 (WRITE)
//   XREF to: 026a5818 (WRITE)
//   XREF to: 026a5819 (WRITE)
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
//   XREF to: 02cf6aa1 (READ)
// 00472e8d: POP EDI
// 00472e8e: CMP dword ptr [EBX + 0x2f9c],0x0
// 00472e95: JNZ 0x00472eba
//   XREF to: 00472eba (CONDITIONAL_JUMP)
// 00472e97: MOV EDX,0x61f091
//   XREF to: 0061f091 (PARAM)
// 00472e9c: MOV ECX,0x1bc
// 00472ea1: PUSH 0x61f0a4
//   XREF to: 0061f0a4 (DATA)
// 00472ea6: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00472eac: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00472eb2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00472eb7: ADD ESP,0x4
// 00472eba: MOV ESI,dword ptr [EBX + 0x1cc4]
//   Label: LAB_00472eba
// 00472ec0: XOR EAX,EAX
// 00472ec2: TEST ESI,ESI
// 00472ec4: JLE 0x00472ef0
//   XREF to: 00472ef0 (CONDITIONAL_JUMP)
// 00472ec6: XOR EDX,EDX
// 00472ec8: MOV ESI,dword ptr [EBX + 0x1cc0]
//   Label: LAB_00472ec8
// 00472ece: IMUL ESI,EAX
// 00472ed1: MOV ECX,dword ptr [EBX + 0x2f9c]
// 00472ed7: ADD ESI,ESI
// 00472ed9: ADD ECX,ESI
// 00472edb: MOV dword ptr [EDX + 0x2cf6a9c],ECX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 00472ee1: INC EAX
// 00472ee2: MOV EDI,dword ptr [EBX + 0x1cc4]
// 00472ee8: ADD EDX,0x4
// 00472eeb: CMP EAX,EDI
// 00472eed: JL 0x00472ec8
//   XREF to: 00472ec8 (CONDITIONAL_JUMP)
// 00472eef: NOP
// 00472ef0: PUSH 0x1
//   Label: LAB_00472ef0
// 00472ef2: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00472ef8: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00472ef9: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 00472efe: ADD ESP,0x8
// 00472f01: POP EBP
//   Label: LAB_00472f01
// 00472f02: POP EDI
// 00472f03: POP ESI
// 00472f04: POP EBX
// 00472f05: RET
// 00472f06: MOV ECX,0x61f04b
//   Label: LAB_00472f06
//   XREF to: 0061f04b (PARAM)
// 00472f0b: MOV ESI,0x1af
// 00472f10: PUSH 0x61f05e
//   XREF to: 0061f05e (DATA)
// 00472f15: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00472f1b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00472f21: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00472f26: ADD ESP,0x4
// 00472f29: JMP 0x00472e55
//   XREF to: 00472e55 (UNCONDITIONAL_JUMP)
