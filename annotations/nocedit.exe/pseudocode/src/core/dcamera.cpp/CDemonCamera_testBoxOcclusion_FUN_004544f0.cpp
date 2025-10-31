// Name: core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0
// Address: 004544f0
// Address Range: [[004544f0, 004546f7]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0(CDemonCamera * this_ptr, CVector3i * corners)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 DAT_00688044
//   SCameraViewportState g_BackgroundSavedCameraState
//   SCameraViewportState g_SavedCameraState
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570df0
//   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0
          (CDemonCamera *this_ptr,CVector3i *corners)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  BADSPACEBASE *in_ESP;
  CVector3i *pCVar1;
  int iVar2;
  SRenderVertex *output;
  
  engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
            (g_CDemonRendererPtr,&g_SavedCameraState);
  output = g_RenderVertexBuffer;
  pCVar1 = corners + 8;
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
            (g_CDemonRendererPtr,&g_BackgroundSavedCameraState);
  do {
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,corners);
    corners = corners + 1;
    output = output + 1;
  } while (corners != pCVar1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  iVar2 = 0;
  core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd8);
  if (extraout_EAX == 0) {
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffdc);
    if (extraout_EAX_00 == 0) {
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffe0);
      if (extraout_EAX_01 == 0) {
        core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffe4)
        ;
        if (extraout_EAX_02 == 0) {
          core_set_cpp_CDemonSet_FUN_00570df0
                    (g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffe8);
          if ((extraout_EAX_03 == 0) &&
             (core_set_cpp_CDemonSet_FUN_00570df0
                        (g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffec),
             extraout_EAX_04 == 0)) goto LAB_004545a7;
        }
      }
    }
  }
  iVar2 = 1;
LAB_004545a7:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
            (g_CDemonRendererPtr,&g_SavedCameraState);
  return iVar2;
}


// Assembly code:
// 004544f0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0
// 004544f1: PUSH ESI
// 004544f2: PUSH EDI
// 004544f3: PUSH EBP
// 004544f4: SUB ESP,0x28
// 004544f7: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 004544fb: PUSH 0x15c4184
//   XREF to: 015c4184 (DATA)
// 00454500: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00454506: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00454507: CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
//   XREF to: 0048de20 (UNCONDITIONAL_CALL)
// 0045450c: ADD ESP,0x8
// 0045450f: PUSH 0x151be98
//   XREF to: 0151be98 (DATA)
// 00454514: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0045451a: MOV EDI,0x688014
//   XREF to: 00688014 (DATA)
// 0045451f: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00454520: MOV ESI,EBP
// 00454522: ADD EBP,0x60
// 00454525: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
//   XREF to: 0048dcc0 (UNCONDITIONAL_CALL)
// 0045452a: ADD ESP,0x8
// 0045452d: PUSH ESI
//   Label: LAB_0045452d
// 0045452e: PUSH EDI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688044 (DATA)
// 0045452f: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00454534: ADD ESI,0xc
// 00454537: ADD ESP,0x8
// 0045453a: ADD EDI,0x30
// 0045453d: CMP ESI,EBP
// 0045453f: JNZ 0x0045452d
//   XREF to: 0045452d (CONDITIONAL_JUMP)
// 00454541: MOV EBX,0x4
// 00454546: PUSH 0x1
// 00454548: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0045454e: XOR ESI,EBP
// 00454550: XOR EDI,EDI
// 00454552: MOV EBP,0x2
// 00454557: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0045455b: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0045455f: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00454563: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00454564: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00454568: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0045456c: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00454571: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 00454575: ADD ESP,0x8
// 00454578: XOR ESI,ESI
// 0045457a: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0045457e: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00454582: PUSH EAX
// 00454583: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00454588: MOV EDI,0x6
// 0045458d: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0045458e: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00454592: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00454596: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 0045459b: ADD ESP,0x8
// 0045459e: TEST EAX,EAX
// 004545a0: JZ 0x004545d6
//   XREF to: 004545d6 (CONDITIONAL_JUMP)
// 004545a2: MOV ESI,0x1
//   Label: LAB_004545a2
// 004545a7: PUSH 0x0
//   Label: LAB_004545a7
// 004545a9: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004545af: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004545b0: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004545b5: ADD ESP,0x8
// 004545b8: PUSH 0x15c4184
//   XREF to: 015c4184 (DATA)
// 004545bd: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004545c3: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004545c4: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
//   XREF to: 0048dcc0 (UNCONDITIONAL_CALL)
// 004545c9: ADD ESP,0x8
// 004545cc: MOV EAX,ESI
// 004545ce: ADD ESP,0x28
// 004545d1: POP EBP
// 004545d2: POP EDI
// 004545d3: POP ESI
// 004545d4: POP EBX
// 004545d5: RET
// 004545d6: MOV EDX,0x1
//   Label: LAB_004545d6
// 004545db: MOV ECX,0x3
// 004545e0: MOV EBX,0x7
// 004545e5: MOV EDI,0x5
// 004545ea: MOV EAX,ESP
// 004545ec: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004545f2: PUSH EAX
// 004545f3: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004545f7: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004545fb: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004545fc: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00454600: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00454604: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00454609: ADD ESP,0x8
// 0045460c: TEST EAX,EAX
// 0045460e: JNZ 0x004545a2
//   XREF to: 004545a2 (CONDITIONAL_JUMP)
// 00454610: MOV EDX,0x1
// 00454615: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00454619: MOV EAX,ESP
// 0045461b: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0045461f: PUSH EAX
// 00454620: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00454626: MOV EBX,0x4
// 0045462b: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0045462c: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00454630: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00454634: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00454639: ADD ESP,0x8
// 0045463c: TEST EAX,EAX
// 0045463e: JNZ 0x004545a2
//   XREF to: 004545a2 (CONDITIONAL_JUMP)
// 00454644: MOV EBP,0x2
// 00454649: MOV EAX,0x6
// 0045464e: MOV EDX,0x7
// 00454653: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00454657: MOV EAX,ESP
// 00454659: MOV ECX,0x3
// 0045465e: PUSH EAX
// 0045465f: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00454665: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00454669: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0045466a: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0045466e: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00454672: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00454677: ADD ESP,0x8
// 0045467a: TEST EAX,EAX
// 0045467c: JNZ 0x004545a2
//   XREF to: 004545a2 (CONDITIONAL_JUMP)
// 00454682: MOV dword ptr [ESP + 0x20],0x3
//   XREF to: Stack[-0x18] (WRITE)
// 0045468a: MOV EAX,ESP
// 0045468c: MOV EDX,0x1
// 00454691: PUSH EAX
// 00454692: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00454698: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0045469c: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0045469d: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004546a1: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004546a5: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 004546aa: ADD ESP,0x8
// 004546ad: TEST EAX,EAX
// 004546af: JNZ 0x004545a2
//   XREF to: 004545a2 (CONDITIONAL_JUMP)
// 004546b5: MOV EBX,0x4
// 004546ba: MOV EAX,0x6
// 004546bf: MOV EDI,0x5
// 004546c4: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004546c8: MOV EAX,ESP
// 004546ca: MOV EBP,0x7
// 004546cf: PUSH EAX
// 004546d0: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004546d6: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004546da: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004546db: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004546df: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004546e3: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 004546e8: ADD ESP,0x8
// 004546eb: TEST EAX,EAX
// 004546ed: JZ 0x004545a7
//   XREF to: 004545a7 (CONDITIONAL_JUMP)
// 004546f3: JMP 0x004545a2
//   XREF to: 004545a2 (UNCONDITIONAL_JUMP)
