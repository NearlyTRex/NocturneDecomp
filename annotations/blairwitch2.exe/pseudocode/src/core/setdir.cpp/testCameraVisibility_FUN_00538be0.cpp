// Name: core_setdir.cpp_testCameraVisibility_FUN_00538be0
// Address: 00538be0
// Address Range: [[00538be0, 00538d08]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_testCameraVisibility_FUN_00538be0(CDemonActor *actor,CVector3i *bbox_vertices,SMRGLHeaderPrimitive *primitives,int camera_index,C3DSCamera *camera,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setdir_cpp_testCameraVisibility_FUN_00538be0(CDemonActor *actor,CVector3i *bbox_vertices,SMRGLHeaderPrimitive *primitives,int camera_index,C3DSCamera *camera,float radius)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CZThumb *this_ptr;
  float fStack_20;
  
  if ((camera->enabled != 0) &&
     (fVar4 = (camera->position).x - (actor->location).position.x,
     fVar2 = (camera->position).y - (actor->location).position.y,
     fVar1 = (camera->position).z - (actor->location).position.z,
     fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= _DAT_005fb354 * _DAT_005fb354)) {
    iVar3 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20
                      (camera,&(actor->location).position,radius);
    fStack_20 = 0.0;
    if (iVar3 != 0) {
      this_ptr = g_CZThumbPool + camera_index * 6;
      if (camera->is_panning == 0) {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                          (this_ptr,actor,bbox_vertices,primitives,1);
        return fVar4;
      }
      fStack_20 = 0.0;
      do {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                          (this_ptr,actor,bbox_vertices,primitives,0);
        fStack_20 = fVar4 + fStack_20;
        this_ptr = this_ptr + 1;
      } while (this_ptr != g_CZThumbPool + camera_index * 6 + 6);
    }
    return fStack_20;
  }
  return 0.0;
}
