// Name: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
// Address: 00574ba0
// Address Range: [[00574ba0, 00574e2e]]
// Convention: __cdecl
// Signature: float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, int apply_scaling)
// Cross-references:
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 00575a6b [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0 (005750a0) at 005751a1 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006464ae = 0.5
//   double DOUBLE_006464b6 = 0.0625
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
//   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
//   core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

float __cdecl
core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
          (CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,
          SMRGLHeaderPrimitive *primitives,int apply_scaling)

{
  SMRGLHeaderPrimitive *pSVar1;
  undefined4 *puVar2;
  int iVar3;
  SProjectedVertex *point;
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  uint unaff_EDI;
  
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(this_ptr);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(actor->location).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffd4,(CVector3i *)0x0);
  iVar4 = 0;
  do {
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar4),bounding_box_vertices);
    bounding_box_vertices = bounding_box_vertices + 1;
    unaff_EDI = unaff_EDI &
                *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x
                         + iVar4);
    iVar4 = iVar4 + 0x30;
  } while (iVar4 != 0x180);
  if (((unaff_EDI & 0x80000000) != 0) && ((char)unaff_EDI != '\0')) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(actor);
    core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
    return 0.0;
  }
  iVar4 = 0;
  pSVar1 = primitives + 0x12;
  do {
    *(SMRGLHeaderPrimitive **)(&stack0xffffffc4 + iVar4) = primitives;
    iVar4 = iVar4 + 4;
    primitives = primitives + 3;
  } while (primitives != pSVar1);
  iVar4 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(actor);
  do {
    point = (SProjectedVertex *)
            ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x + iVar4)
    ;
    iVar5 = point->transformed_z;
    if (0 < iVar5) {
      iVar3 = iVar5 + 0x80;
      point->transformed_x =
           (int)(((longlong)point->transformed_x * (longlong)iVar3) / (longlong)iVar5);
      point->transformed_y =
           (int)(((longlong)point->transformed_y * (longlong)iVar3) / (longlong)point->transformed_z
                );
      point->transformed_z = iVar3;
      engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(point);
    }
    iVar4 = iVar4 + 0x30;
  } while (iVar4 != 0x180);
  if (apply_scaling != 0) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 0x30;
    } while (iVar4 != 0x180);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
            (g_CDemonRendererPtr,(uint)((unaff_EBX & 0x80000000) != 0));
  iVar4 = 0;
  if (0 < (int)this_ptr) {
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(&stack0xffffffd8 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)*puVar2);
      iVar4 = iVar4 + iVar3;
    } while (SBORROW4(iVar5,(int)this_ptr * 4) != iVar5 + (int)this_ptr * -4 < 0);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
  return (float)iVar4 * 0.0;
}


// Assembly code:
// 00574ba0: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
// 00574ba1: PUSH ESI
// 00574ba2: PUSH EDI
// 00574ba3: PUSH EBP
// 00574ba4: MOV EBP,ESP
// 00574ba6: SUB ESP,0x3c
// 00574ba9: AND ESP,0xfffffff8
// 00574bac: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00574baf: PUSH EDX
// 00574bb0: CALL core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
//   XREF to: 00574e70 (UNCONDITIONAL_CALL)
// 00574bb5: ADD ESP,0x4
// 00574bb8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00574bbb: ADD EAX,0x20
// 00574bbe: XOR EBX,EBX
// 00574bc0: PUSH EAX
// 00574bc1: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574bc7: MOV ECX,0x800000ff
// 00574bcc: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00574bcd: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00574bd1: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00574bd5: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00574bda: ADD ESP,0x8
// 00574bdd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00574be0: MOV EAX,dword ptr [EAX + 0x30]
// 00574be3: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00574be7: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00574bea: MOV EAX,dword ptr [EAX + 0x38]
// 00574bed: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00574bf1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00574bf4: MOV EAX,dword ptr [EAX + 0x18]
// 00574bf7: PUSH EBX
// 00574bf8: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00574bfc: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x34] (DATA)
// 00574c00: PUSH EAX
// 00574c01: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574c07: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00574c08: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00574c0d: ADD ESP,0xc
// 00574c10: XOR ESI,ESI
// 00574c12: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00574c15: MOV EAX,[0x006703ec]
//   Label: LAB_00574c15
//   XREF to: 006703ec (READ)
// 00574c1a: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00574c1c: PUSH EDI
// 00574c1d: ADD EAX,ESI
// 00574c1f: PUSH EAX
// 00574c20: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00574c25: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00574c2a: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00574c2c: ADD EDI,0xc
// 00574c2f: ADD ESP,0x8
// 00574c32: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x10]
// 00574c36: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 00574c3a: MOV EAX,ECX
// 00574c3c: AND EDX,ECX
// 00574c3e: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 00574c42: ADD ESI,0x30
// 00574c45: OR ECX,EAX
// 00574c47: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00574c4b: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00574c4f: CMP ESI,0x180
// 00574c55: JNZ 0x00574c15
//   XREF to: 00574c15 (CONDITIONAL_JUMP)
// 00574c57: TEST byte ptr [ESP + 0x37],0x80
//   XREF to: Stack[-0x19] (READ)
// 00574c5c: JZ 0x00574c69
//   XREF to: 00574c69 (CONDITIONAL_JUMP)
// 00574c5e: TEST byte ptr [ESP + 0x34],0xff
//   XREF to: Stack[-0x1c] (READ)
// 00574c63: JNZ 0x00574df8
//   XREF to: 00574df8 (CONDITIONAL_JUMP)
// 00574c69: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_00574c69
//   XREF to: Stack[0x10] (READ)
// 00574c6c: XOR EBX,EBX
// 00574c6e: XOR ECX,ECX
// 00574c70: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00574c74: LEA EBX,[EAX + 0x1b0]
// 00574c7a: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_00574c7a
//   XREF to: Stack[-0x20] (READ)
// 00574c7e: MOV dword ptr [ESP + ECX*0x1 + 0x4],EAX
// 00574c82: ADD ECX,0x4
// 00574c85: INC EDX
// 00574c86: ADD EAX,0x48
// 00574c89: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00574c8d: CMP EAX,EBX
// 00574c8f: JNZ 0x00574c7a
//   XREF to: 00574c7a (CONDITIONAL_JUMP)
// 00574c91: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00574c94: PUSH ECX
// 00574c95: XOR EDI,EDI
// 00574c97: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00574c9c: ADD ESP,0x4
// 00574c9f: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00574c9f
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574ca5: MOV ECX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 00574ca7: ADD ECX,EDI
// 00574ca9: MOV EBX,dword ptr [ECX + 0x8]
// 00574cac: TEST EBX,EBX
// 00574cae: JLE 0x00574cdb
//   XREF to: 00574cdb (CONDITIONAL_JUMP)
// 00574cb0: LEA ESI,[EBX + 0x80]
// 00574cb6: MOV EAX,dword ptr [ECX]
// 00574cb8: MOV EDX,ESI
// 00574cba: IMUL EDX
// 00574cbc: IDIV EBX
// 00574cbe: MOV dword ptr [ECX],EAX
// 00574cc0: MOV EDX,ESI
// 00574cc2: MOV EBX,dword ptr [ECX + 0x8]
// 00574cc5: MOV EAX,dword ptr [ECX + 0x4]
// 00574cc8: IMUL EDX
// 00574cca: IDIV EBX
// 00574ccc: MOV dword ptr [ECX + 0x4],EAX
// 00574ccf: PUSH ECX
// 00574cd0: MOV dword ptr [ECX + 0x8],ESI
// 00574cd3: CALL engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
//   XREF to: 0050cdc0 (UNCONDITIONAL_CALL)
// 00574cd8: ADD ESP,0x4
// 00574cdb: ADD EDI,0x30
//   Label: LAB_00574cdb
// 00574cde: CMP EDI,0x180
// 00574ce4: JNZ 0x00574c9f
//   XREF to: 00574c9f (CONDITIONAL_JUMP)
// 00574ce6: MOV ESI,0x3f800000
// 00574ceb: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00574cee: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x50] (DATA)
// 00574cf1: TEST EDI,EDI
// 00574cf3: JZ 0x00574d27
//   XREF to: 00574d27 (CONDITIONAL_JUMP)
// 00574cf5: XOR EAX,EAX
// 00574cf7: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00574cf7
//   XREF to: 006703ec (READ)
// 00574cfd: MOV ECX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 00574cff: ADD ECX,EAX
// 00574d01: TEST byte ptr [ECX + 0x13],0x80
// 00574d05: JZ 0x00574d1d
//   XREF to: 00574d1d (CONDITIONAL_JUMP)
// 00574d07: CMP dword ptr [ECX + 0x8],0x0
// 00574d0b: JLE 0x00574e21
//   XREF to: 00574e21 (CONDITIONAL_JUMP)
// 00574d11: FLD float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00574d14: FMUL double ptr [0x006464ae]
//   XREF to: 006464ae (READ)
// 00574d1a: FSTP float ptr [ESP]
//   Label: LAB_00574d1a
//   XREF to: Stack[-0x50] (DATA)
// 00574d1d: ADD EAX,0x30
//   Label: LAB_00574d1d
// 00574d20: CMP EAX,0x180
// 00574d25: JNZ 0x00574cf7
//   XREF to: 00574cf7 (CONDITIONAL_JUMP)
// 00574d27: PUSH 0x0
//   Label: LAB_00574d27
// 00574d29: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574d2f: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00574d30: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00574d35: ADD ESP,0x8
// 00574d38: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00574d3b: PUSH EBX
// 00574d3c: CALL core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
//   XREF to: 00574e30 (UNCONDITIONAL_CALL)
// 00574d41: ADD ESP,0x4
// 00574d44: PUSH 0x1
// 00574d46: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574d4c: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00574d4d: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00574d52: ADD ESP,0x8
// 00574d55: TEST byte ptr [ESP + 0x2f],0x80
//   XREF to: Stack[-0x21] (READ)
// 00574d5a: SETNZ AL
// 00574d5d: AND EAX,0xff
// 00574d62: PUSH EAX
// 00574d63: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574d69: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00574d6a: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00574d6f: ADD ESP,0x8
// 00574d72: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 00574d76: XOR EBX,EBX
// 00574d78: TEST EAX,EAX
// 00574d7a: JLE 0x00574db0
//   XREF to: 00574db0 (CONDITIONAL_JUMP)
// 00574d7c: LEA EDI,[EAX*0x4 + 0x0]
// 00574d83: XOR ESI,ESI
// 00574d85: MOV EDX,dword ptr [ESP + ESI*0x1 + 0x4]
//   Label: LAB_00574d85
// 00574d89: PUSH EDX
// 00574d8a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574d90: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00574d91: ADD ESI,0x4
// 00574d94: CALL engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
//   XREF to: 0048aa50 (UNCONDITIONAL_CALL)
// 00574d99: ADD ESP,0x8
// 00574d9c: ADD EBX,EAX
// 00574d9e: CMP ESI,EDI
// 00574da0: JL 0x00574d85
//   XREF to: 00574d85 (CONDITIONAL_JUMP)
// 00574da2: LEA EAX,[EAX]
// 00574da8: LEA EDX,[EDX]
// 00574dae: MOV EAX,EAX
// 00574db0: PUSH 0x1
//   Label: LAB_00574db0
// 00574db2: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574db8: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00574db9: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00574dbe: ADD ESP,0x8
// 00574dc1: PUSH 0x0
// 00574dc3: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574dc9: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00574dca: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00574dcf: ADD ESP,0x8
// 00574dd2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00574dd5: PUSH EAX
// 00574dd6: CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
//   XREF to: 00574ef0 (UNCONDITIONAL_CALL)
// 00574ddb: ADD ESP,0x4
// 00574dde: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00574de2: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 00574de6: FMUL float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00574de9: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 00574ded: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00574df1: MOV ESP,EBP
// 00574df3: POP EBP
// 00574df4: POP EDI
// 00574df5: POP ESI
// 00574df6: POP EBX
// 00574df7: RET
// 00574df8: MOV ESI,dword ptr [EBP + 0x18]
//   Label: LAB_00574df8
//   XREF to: Stack[0x8] (READ)
// 00574dfb: PUSH ESI
// 00574dfc: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00574e01: ADD ESP,0x4
// 00574e04: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00574e07: PUSH EDI
// 00574e08: CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
//   XREF to: 00574ef0 (UNCONDITIONAL_CALL)
// 00574e0d: ADD ESP,0x4
// 00574e10: XOR EAX,EAX
// 00574e12: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00574e16: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00574e1a: MOV ESP,EBP
// 00574e1c: POP EBP
// 00574e1d: POP EDI
// 00574e1e: POP ESI
// 00574e1f: POP EBX
// 00574e20: RET
// 00574e21: FLD float ptr [ESP]
//   Label: LAB_00574e21
//   XREF to: Stack[-0x50] (DATA)
// 00574e24: FMUL double ptr [0x006464b6]
//   XREF to: 006464b6 (READ)
// 00574e2a: JMP 0x00574d1a
//   XREF to: 00574d1a (UNCONDITIONAL_JUMP)
