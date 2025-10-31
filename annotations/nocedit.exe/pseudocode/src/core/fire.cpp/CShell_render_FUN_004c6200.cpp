// Name: core_fire.cpp_CShell_render_FUN_004c6200
// Address: 004c6200
// Address Range: [[004c6200, 004c62f0]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CShell_render_FUN_004c6200(CShell * this_ptr)
// Globals:
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_render_FUN_004c6200(CShell *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3i local_1c;
  
  if (0.0 < (this_ptr->base).lifetime_remaining) {
    vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
    local_1c.x = (int)ROUND((this_ptr->base).position.x * FLOAT_0065dca8);
    local_1c.y = (int)ROUND((this_ptr->base).position.y * FLOAT_0065dca8);
    local_1c.z = (int)ROUND((this_ptr->base).position.z * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr)
    ;
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar1 == 0) {
        (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
      }
      core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)this_ptr->field1_0x38,(CVector3i *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (*(CKeyFramedModel **)(this_ptr->field1_0x38 + 0x1c),(CKeyFramedModelInstance *)0x0,
                 0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      return;
    }
  }
  return;
}


// Assembly code:
// 004c6200: PUSH EBX
//   Label: core_fire.cpp_CShell_render_FUN_004c6200
// 004c6201: PUSH ESI
// 004c6202: PUSH EDI
// 004c6203: PUSH EBP
// 004c6204: SUB ESP,0xc
// 004c6207: MOV ESI,dword ptr [ESP + 0x20]
// 004c620b: FLD float ptr [ESI + 0x18]
// 004c620e: FLDZ
// 004c6210: FCOMPP
// 004c6212: FNSTSW AX
// 004c6214: SAHF
// 004c6215: JC 0x004c621f
//   XREF to: 004c621f (CONDITIONAL_JUMP)
// 004c6217: ADD ESP,0xc
//   Label: LAB_004c6217
// 004c621a: POP EBP
// 004c621b: POP EDI
// 004c621c: POP ESI
// 004c621d: POP EBX
// 004c621e: RET
// 004c621f: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_004c621f
//   XREF to: 006703ec (READ)
// 004c6225: MOV EBX,ESP
// 004c6227: MOV EAX,ESI
// 004c6229: MOV EDI,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 004c622b: FLD float ptr [EAX]
// 004c622d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6233: FISTP dword ptr [EBX]
// 004c6235: FLD float ptr [EAX + 0x4]
// 004c6238: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c623e: FISTP dword ptr [EBX + 0x4]
// 004c6241: FLD float ptr [EAX + 0x8]
// 004c6244: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c624a: FISTP dword ptr [EBX + 0x8]
// 004c624d: MOV EAX,ESP
// 004c624f: PUSH EAX
// 004c6250: PUSH EDI
// 004c6251: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c6256: ADD ESP,0x8
// 004c6259: PUSH EDI
// 004c625a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6260: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c6261: CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   XREF to: 0048dc50 (UNCONDITIONAL_CALL)
// 004c6266: ADD ESP,0x8
// 004c6269: TEST EAX,EAX
// 004c626b: JZ 0x004c6217
//   XREF to: 004c6217 (CONDITIONAL_JUMP)
// 004c626d: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6273: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c6274: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004c6279: ADD ESP,0x4
// 004c627c: TEST EAX,EAX
// 004c627e: JNZ 0x004c6292
//   XREF to: 004c6292 (CONDITIONAL_JUMP)
// 004c6280: PUSH 0x0
// 004c6282: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004c6287: PUSH ESI
// 004c6288: MOV EBX,dword ptr [EAX + 0x3c]
// 004c628b: PUSH EAX
// 004c628c: CALL dword ptr [EBX + 0x4]
// 004c628f: ADD ESP,0xc
// 004c6292: PUSH 0x0
//   Label: LAB_004c6292
// 004c6294: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004c6299: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004c629e: LEA EBX,[ESI + 0x38]
// 004c62a1: PUSH EBX
// 004c62a2: PUSH ESI
// 004c62a3: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004c62a9: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004c62aa: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 004c62af: ADD ESP,0x18
// 004c62b2: PUSH ESI
// 004c62b3: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c62b9: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004c62ba: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c62bf: ADD ESP,0x8
// 004c62c2: PUSH 0x0
// 004c62c4: PUSH EBX
// 004c62c5: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c62ca: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c62cb: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c62d0: ADD ESP,0xc
// 004c62d3: PUSH -0x1
// 004c62d5: PUSH 0x0
// 004c62d7: PUSH 0x0
// 004c62d9: MOV EDX,dword ptr [ESI + 0x54]
// 004c62dc: PUSH EDX
// 004c62dd: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 004c62e2: ADD ESP,0x10
// 004c62e5: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c62eb: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c62ec: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
