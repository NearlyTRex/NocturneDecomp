// Name: core_doc.cpp_CDoc_dtor_FUN_00450580
// Address: 00450580
// Address Range: [[00450580, 0045061c]]
// Convention: unknown
// Signature: CDoc * core_doc_cpp_CDoc_dtor_FUN_00450580(CDoc *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoc * core_doc_cpp_CDoc_dtor_FUN_00450580(CDoc *this_ptr,uint flags)

{
  CSimpleParticleSystem *this_ptr_00;
  CBox *pCVar1;
  CDemonActor *pCVar2;
  CDoc *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDocTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr_00 = (this_ptr->base).base.base.particle_systems;
  (this_ptr->base).base.base.vtable._ub = &g_CDocVTable._ub;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(this_ptr_00,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(this_ptr_00);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&(this_ptr->lantern_box).physics_box,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)&pCVar1[-3].scrape_points[6].raytrace_normal.y,1);
  pCVar3 = (CDoc *)core_hero_cpp_CHero_dtor_FUN_004ce3d0
                             ((CHero *)&pCVar2[-0xdf].blood_effect_color,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
