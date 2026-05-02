// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// Address: 00452180
// MANUAL RECONSTRUCTION
// Address Range: [[00452180, 00452707]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0048c630(g_CDemonRendererPtr2);
  fVar2 = (float)256;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  g_TransformMatrix.m[1].y = (this_ptr->source_matrix).m[1].y;
  g_TransformMatrix.m[1].z = (this_ptr->source_matrix).m[1].z;
  g_TransformMatrix.m[2].x = (this_ptr->source_matrix).m[2].x;
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(ROUND(((this_ptr->base).position.f.x - position->x) * fVar2));
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(ROUND(((this_ptr->base).position.f.y - position->y) * fVar2));
  g_RelativeZ = (int)ROUND(ROUND(((this_ptr->base).position.f.z - position->z) * fVar2));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)bbox_min,(CVector3i *)0x0);
  {
    CVector3i corner_input;

    corner_input.x = (int)ROUND(bbox_max->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_min->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_max->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e18].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_min->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_min->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_max->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e19].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_min->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_min->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_min->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1a].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_max->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_min->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_min->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1b].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_max->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_max->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_max->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1c].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_min->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_max->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_max->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1d].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_min->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_max->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_min->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1e].projected_vertex,&corner_input);

    corner_input.x = (int)ROUND(bbox_max->x * 256.0f);
    corner_input.y = (int)ROUND(bbox_max->y * 256.0f);
    corner_input.z = (int)ROUND(bbox_min->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&corner_input);
  }
  uVar4 = 0xffffffff;
  iVar3 = 0xea480;
  do {
    puVar1 = (uint *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x +
                     iVar3);
    iVar3 = iVar3 + 0x30;
    uVar4 = uVar4 & *puVar1;
  } while (iVar3 != 960000);
  iVar3 = 1;
  if (((uVar4 & 0x80000000) != 0) && ((char)uVar4 != '\0')) {
    iVar3 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return iVar3;
}
