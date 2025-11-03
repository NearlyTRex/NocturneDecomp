// Name: core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
// Address: 00472a80
// Address Range: [[00472a80, 00472c68]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056bf82 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cad7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ab6b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b5e5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061ef84
//   TerminatedCString s_CDemonLight_beginScene_S_0061ef97
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_RasterizerDepthBias
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[2][1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
//   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
//   core_event.cpp_FUN_004b19d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight *this_ptr,int skip_clear_buffers)

{
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CDemonLight *pCVar3;
  int in_stack_0000000c;
  int in_stack_00000028;
  
  if ((this_ptr->base).scene_open_flag != 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0xf3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::beginScene - Scene already open");
  }
  (this_ptr->base).scene_open_flag = 1;
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(&this_ptr->base,in_stack_0000000c);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr,0,0,this_ptr->shadow_map_width + -1,
             this_ptr->shadow_map_height + -1);
  (this_ptr->base).viewport_rect.right = this_ptr->shadow_map_width + -1;
  iVar2 = this_ptr->shadow_map_height;
  (this_ptr->base).viewport_rect.left = 0;
  (this_ptr->base).viewport_rect.bottom = iVar2 + -1;
  (this_ptr->base).viewport_rect.top = 0;
  this_ptr_00 = g_CDemonRendererPtr;
  (this_ptr->base).rect_array_count = 0;
  (this_ptr->base).skip_clear_buffer_flag = in_stack_0000000c;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (this_ptr_00,&(this_ptr->base).base.position);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr,(this_ptr->base).base.projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr,(CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
             (CVector3f *)this_ptr);
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)g_TransformMatrix.m[0][1];
  g_TransformMatrix.m[0][1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)g_TransformMatrix.m[1][1];
  g_TransformMatrix.m[1][1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)g_TransformMatrix.m[2][1];
  g_TransformMatrix.m[2][1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (in_stack_0000000c == 0) {
    core_event_cpp_FUN_004b19d0();
  }
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->shadow_map_height) {
    do {
      pCVar3->saved_screen_buffer_rows[0] = g_ScreenBufferArray[iVar2];
      g_ScreenBufferArray[iVar2] =
           this_ptr->shadow_depth_buffer + this_ptr->shadow_map_width * iVar2;
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
    } while (iVar2 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,1);
  if (in_stack_00000028 == 0) {
    g_RasterizerDepthBias = in_stack_00000028;
    return;
  }
  g_RasterizerDepthBias = 0x8000;
  return;
}


// Assembly code:
// 00472a80: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
// 00472a81: PUSH ESI
// 00472a82: PUSH EDI
// 00472a83: PUSH EBP
// 00472a84: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00472a88: CMP dword ptr [EBX + 0x11e4],0x0
// 00472a8f: JNZ 0x00472c11
//   XREF to: 00472c11 (CONDITIONAL_JUMP)
// 00472a95: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_00472a95
//   XREF to: Stack[0x8] (READ)
// 00472a99: PUSH EDI
// 00472a9a: PUSH EBX
// 00472a9b: MOV dword ptr [EBX + 0x11e4],0x1
// 00472aa5: CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
//   XREF to: 0044c3e0 (UNCONDITIONAL_CALL)
// 00472aaa: MOV EAX,dword ptr [EBX + 0x1cc4]
// 00472ab0: ADD ESP,0x8
// 00472ab3: DEC EAX
// 00472ab4: PUSH EAX
// 00472ab5: MOV EAX,dword ptr [EBX + 0x1cc0]
// 00472abb: DEC EAX
// 00472abc: PUSH EAX
// 00472abd: PUSH 0x0
// 00472abf: PUSH 0x0
// 00472ac1: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00472ac7: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00472ac8: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 00472acd: MOV EAX,dword ptr [EBX + 0x1cc0]
// 00472ad3: DEC EAX
// 00472ad4: MOV dword ptr [EBX + 0x11dc],EAX
// 00472ada: MOV EAX,dword ptr [EBX + 0x1cc4]
// 00472ae0: MOV dword ptr [EBX + 0x11d4],0x0
// 00472aea: DEC EAX
// 00472aeb: ADD ESP,0x14
// 00472aee: MOV dword ptr [EBX + 0x11e0],EAX
// 00472af4: LEA EAX,[EBX + 0x4]
// 00472af7: MOV dword ptr [EBX + 0x11d8],0x0
// 00472b01: PUSH EAX
// 00472b02: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472b07: MOV dword ptr [EBX + 0x1d0],0x0
// 00472b11: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00472b12: MOV dword ptr [EBX + 0x168],EDI
// 00472b18: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 00472b1d: ADD ESP,0x8
// 00472b20: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472b26: PUSH dword ptr [EBX + 0x38]
// 00472b29: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00472b2a: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 00472b2f: ADD ESP,0x8
// 00472b32: LEA EAX,[EBX + 0x10]
// 00472b35: PUSH EAX
// 00472b36: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472b3c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00472b3d: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   XREF to: 0048c200 (UNCONDITIONAL_CALL)
// 00472b42: ADD ESP,0x8
// 00472b45: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 00472b4b: MOV EAX,dword ptr [EBX + 0x2fa4]
// 00472b51: IMUL EDX
// 00472b53: SHRD EAX,EDX,0x10
// 00472b57: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 00472b5d: MOV [0x02d052ec],EAX
//   XREF to: 02d052ec (WRITE)
// 00472b62: MOV EAX,dword ptr [EBX + 0x2fa4]
// 00472b68: IMUL EDX
// 00472b6a: SHRD EAX,EDX,0x10
// 00472b6e: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 00472b74: MOV [0x02d052f8],EAX
//   XREF to: 02d052f8 (WRITE)
// 00472b79: MOV EAX,dword ptr [EBX + 0x2fa4]
// 00472b7f: IMUL EDX
// 00472b81: SHRD EAX,EDX,0x10
// 00472b85: MOV [0x02d05304],EAX
//   XREF to: 02d05304 (WRITE)
// 00472b8a: TEST EDI,EDI
// 00472b8c: JZ 0x00472c39
//   XREF to: 00472c39 (CONDITIONAL_JUMP)
// 00472b92: MOV EBP,dword ptr [EBX + 0x1cc4]
//   Label: LAB_00472b92
// 00472b98: XOR EAX,EAX
// 00472b9a: TEST EBP,EBP
// 00472b9c: JLE 0x00472be0
//   XREF to: 00472be0 (CONDITIONAL_JUMP)
// 00472b9e: MOV EDX,EBX
// 00472ba0: MOV ESI,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   Label: LAB_00472ba0
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 00472ba7: MOV dword ptr [EDX + 0x1cd4],ESI
// 00472bad: MOV ESI,dword ptr [EBX + 0x1cc0]
// 00472bb3: IMUL ESI,EAX
// 00472bb6: MOV EDI,dword ptr [EBX + 0x2f94]
// 00472bbc: ADD ESI,ESI
// 00472bbe: ADD ESI,EDI
// 00472bc0: MOV dword ptr [EAX*0x4 + 0x2cf6a9c],ESI
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 00472bc7: INC EAX
// 00472bc8: MOV ECX,dword ptr [EBX + 0x1cc4]
// 00472bce: ADD EDX,0x4
// 00472bd1: CMP EAX,ECX
// 00472bd3: JL 0x00472ba0
//   XREF to: 00472ba0 (CONDITIONAL_JUMP)
// 00472bd5: LEA EAX,[EAX]
// 00472bdb: LEA EDX,[EDX]
// 00472bde: MOV EBX,EBX
// 00472be0: PUSH EBX
//   Label: LAB_00472be0
// 00472be1: CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
//   XREF to: 0044d1c0 (UNCONDITIONAL_CALL)
// 00472be6: ADD ESP,0x4
// 00472be9: PUSH 0x1
// 00472beb: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472bf1: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00472bf2: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 00472bf7: ADD ESP,0x8
// 00472bfa: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00472bfe: TEST ESI,ESI
// 00472c00: JZ 0x00472c5e
//   XREF to: 00472c5e (CONDITIONAL_JUMP)
// 00472c02: MOV dword ptr [0x02c6d03c],0x8000
//   XREF to: 02c6d03c (WRITE)
// 00472c0c: POP EBP
// 00472c0d: POP EDI
// 00472c0e: POP ESI
// 00472c0f: POP EBX
// 00472c10: RET
// 00472c11: MOV ECX,0x61ef84
//   Label: LAB_00472c11
//   XREF to: 0061ef84 (PARAM)
// 00472c16: MOV ESI,0xf3
// 00472c1b: PUSH 0x61ef97
//   XREF to: 0061ef97 (DATA)
// 00472c20: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00472c26: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00472c2c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00472c31: ADD ESP,0x4
// 00472c34: JMP 0x00472a95
//   XREF to: 00472a95 (UNCONDITIONAL_JUMP)
// 00472c39: MOV EAX,dword ptr [EBX + 0x1cc0]
//   Label: LAB_00472c39
// 00472c3f: IMUL EAX,dword ptr [EBX + 0x1cc4]
// 00472c46: ADD EAX,EAX
// 00472c48: PUSH EAX
// 00472c49: MOV EDX,0xff
// 00472c4e: MOV ECX,dword ptr [EBX + 0x2f94]
// 00472c54: CALL core_event.cpp_FUN_004b19d0
//   XREF to: 004b19d0 (UNCONDITIONAL_CALL)
// 00472c59: JMP 0x00472b92
//   XREF to: 00472b92 (UNCONDITIONAL_JUMP)
// 00472c5e: MOV dword ptr [0x02c6d03c],ESI
//   Label: LAB_00472c5e
//   XREF to: 02c6d03c (WRITE)
// 00472c64: POP EBP
// 00472c65: POP EDI
// 00472c66: POP ESI
// 00472c67: POP EBX
// 00472c68: RET
