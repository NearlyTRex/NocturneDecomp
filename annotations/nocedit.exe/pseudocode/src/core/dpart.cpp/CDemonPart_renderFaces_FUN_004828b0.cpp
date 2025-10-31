// Name: core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0
// Address: 004828b0
// Address Range: [[004828b0, 00482a04]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02c6d590
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570960
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart *this_ptr)

{
  int iVar1;
  SSurfacePlane *plane;
  BADSPACEBASE *in_ESP;
  uint uVar2;
  int iStack_64;
  
  iStack_64 = 0x4828c9;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count / this_ptr->vertex_group_size);
  if (g_CDemonRendererPtr->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  }
  plane = this_ptr->face_data;
  uVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&plane->plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                  (g_CDemonRendererPtr,-((uVar2 & 0x7f) + 0x80));
        core_set_cpp_CDemonSet_FUN_00570960(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&iStack_64,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 1;
    } while ((int)uVar2 < this_ptr->face_count);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 004828b0: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0
// 004828b1: PUSH ESI
// 004828b2: PUSH EDI
// 004828b3: PUSH EBP
// 004828b4: SUB ESP,0x48
// 004828b7: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 004828bb: PUSH 0x0
// 004828bd: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004828c3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004828c4: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004828c9: ADD ESP,0x8
// 004828cc: PUSH 0x0
// 004828ce: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004828d4: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004828d5: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 004828da: MOV EDX,dword ptr [EDI + 0x20]
// 004828dd: MOV EBX,dword ptr [EDI + 0x28]
// 004828e0: MOV EAX,EDX
// 004828e2: SAR EDX,0x1f
// 004828e5: IDIV EBX
// 004828e7: MOV EBX,dword ptr [EDI + 0x384]
// 004828ed: IMUL EBX,EAX
// 004828f0: MOV EDX,EAX
// 004828f2: LEA EAX,[EBX*0x4 + 0x0]
// 004828f9: SUB EAX,EBX
// 004828fb: SHL EAX,0x2
// 004828fe: MOV EBX,dword ptr [EDI + 0x2c]
// 00482901: ADD ESP,0x8
// 00482904: ADD EAX,EBX
// 00482906: PUSH EAX
// 00482907: PUSH EDX
// 00482908: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0048290e: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0048290f: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 00482914: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00482919: MOV EDX,dword ptr [EAX + 0x18]
//   XREF to: 02c6d590 (READ)
// 0048291c: ADD ESP,0xc
// 0048291f: TEST EDX,EDX
// 00482921: JNZ 0x00482976
//   XREF to: 00482976 (CONDITIONAL_JUMP)
// 00482923: MOV EBP,dword ptr [EDI + 0x24]
//   Label: LAB_00482923
// 00482926: MOV EBX,dword ptr [EDI + 0x34]
// 00482929: XOR ESI,ESI
// 0048292b: TEST EBP,EBP
// 0048292d: JLE 0x0048294c
//   XREF to: 0048294c (CONDITIONAL_JUMP)
// 0048292f: MOV EBP,0x3
// 00482934: PUSH EBX
//   Label: LAB_00482934
// 00482935: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048293a: ADD ESP,0x4
// 0048293d: TEST EAX,EAX
// 0048293f: JNZ 0x00482983
//   XREF to: 00482983 (CONDITIONAL_JUMP)
// 00482941: INC ESI
//   Label: LAB_00482941
// 00482942: MOV EAX,dword ptr [EDI + 0x24]
// 00482945: ADD EBX,0x20
// 00482948: CMP ESI,EAX
// 0048294a: JL 0x00482934
//   XREF to: 00482934 (CONDITIONAL_JUMP)
// 0048294c: PUSH 0x1
//   Label: LAB_0048294c
// 0048294e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00482954: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00482955: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 0048295a: ADD ESP,0x8
// 0048295d: PUSH 0x1
// 0048295f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00482965: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00482966: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0048296b: ADD ESP,0x8
// 0048296e: ADD ESP,0x48
// 00482971: POP EBP
// 00482972: POP EDI
// 00482973: POP ESI
// 00482974: POP EBX
// 00482975: RET
// 00482976: PUSH 0x1
//   Label: LAB_00482976
// 00482978: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00482979: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0048297e: ADD ESP,0x8
// 00482981: JMP 0x00482923
//   XREF to: 00482923 (UNCONDITIONAL_JUMP)
// 00482983: MOV EAX,ESI
//   Label: LAB_00482983
// 00482985: AND EAX,0x7f
// 00482988: ADD EAX,0x80
// 0048298d: NEG EAX
// 0048298f: PUSH EAX
// 00482990: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00482996: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00482997: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0048299c: ADD ESP,0x8
// 0048299f: MOV EAX,dword ptr [EBX]
// 004829a1: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004829a5: MOV EAX,dword ptr [EBX + 0x4]
// 004829a8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004829ac: MOV EAX,dword ptr [EBX + 0x8]
// 004829af: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004829b3: MOV EAX,dword ptr [EBX + 0xc]
// 004829b6: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004829ba: MOV EAX,dword ptr [EBX + 0x10]
// 004829bd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004829c1: MOV EAX,dword ptr [EBX + 0x14]
// 004829c4: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004829c8: MOV EAX,dword ptr [EBX + 0x18]
// 004829cb: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004829cf: MOV ECX,dword ptr [EBX + 0x1c]
// 004829d2: CMP ECX,-0x1
// 004829d5: JZ 0x004829ff
//   XREF to: 004829ff (CONDITIONAL_JUMP)
// 004829d7: MOV EAX,0x4
// 004829dc: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004829e0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004829e4: PUSH 0x1
//   Label: LAB_004829e4
// 004829e6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x58] (DATA)
// 004829ea: PUSH EAX
// 004829eb: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004829f1: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004829f2: CALL core_set.cpp_CDemonSet_FUN_00570960
//   XREF to: 00570960 (UNCONDITIONAL_CALL)
// 004829f7: ADD ESP,0xc
// 004829fa: JMP 0x00482941
//   XREF to: 00482941 (UNCONDITIONAL_JUMP)
// 004829ff: MOV dword ptr [ESP + 0x4],EBP
//   Label: LAB_004829ff
//   XREF to: Stack[-0x54] (WRITE)
// 00482a03: JMP 0x004829e4
//   XREF to: 004829e4 (UNCONDITIONAL_JUMP)
