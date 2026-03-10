// Name: core_setdir.cpp_testCameraVisibility_FUN_005750a0
// Address: 005750a0
// Address Range: [[005750a0, 005751c8]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_testCameraVisibility_FUN_005750a0(CDemonActor *actor,CVector3i *bbox_vertices,SMRGLHeaderPrimitive *primitives,int camera_index,C3DSCamera *camera,float radius)

#include "nocturne.h"

float __cdecl core_setdir_cpp_testCameraVisibility_FUN_005750a0(CDemonActor *actor,CVector3i *bbox_vertices,SMRGLHeaderPrimitive *primitives,int camera_index,C3DSCamera *camera,float radius)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CZThumb *this_ptr;
  float local_20;
  
  if ((camera->enabled != 0) &&
     (fVar4 = (camera->position).x - (actor->location).position.x,
     fVar2 = (camera->position).y - (actor->location).position.y,
     fVar1 = (camera->position).z - (actor->location).position.z,
     fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <=
     200.0f * 200.0f)) {
    iVar3 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                      (camera,&(actor->location).position,radius);
    local_20 = 0.0;
    if (iVar3 != 0) {
      this_ptr = g_CZThumbPool + camera_index * 6;
      if (camera->is_panning == 0) {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr,actor,bbox_vertices,primitives,1);
        return fVar4;
      }
      local_20 = 0.0;
      do {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr,actor,bbox_vertices,primitives,0);
        local_20 = fVar4 + local_20;
        this_ptr = this_ptr + 1;
      } while (this_ptr != g_CZThumbPool + camera_index * 6 + 6);
    }
    return local_20;
  }
  return 0.0;
}
