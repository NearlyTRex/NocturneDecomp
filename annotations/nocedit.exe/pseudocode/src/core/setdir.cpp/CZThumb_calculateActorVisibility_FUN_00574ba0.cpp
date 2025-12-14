// Name: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
// Address: 00574ba0
// Address Range: [[00574ba0, 00574e2e]]
// Convention: __cdecl
// Signature: float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, int apply_scaling)

#include "nocturne.h"

float __cdecl
core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
          (CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,
          SMRGLHeaderPrimitive *primitives,int apply_scaling)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint *puVar2;
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
      puVar2 = (uint *)(&stack0xffffffd8 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)*puVar2);
      iVar4 = iVar4 + iVar3;
    } while (iVar5 < (int)this_ptr * 4);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
  return (float)iVar4 * 0.0;
}
