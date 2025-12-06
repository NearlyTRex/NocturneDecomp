// Name: core_moloch.cpp_CMoloch_dtor_FUN_00528bf0
// Address: 00528bf0
// Address Range: [[00528bf0, 00528c6e]]
// Convention: __cdecl
// Signature: CMoloch * core_moloch.cpp_CMoloch_dtor_FUN_00528bf0(CMoloch * this_ptr, uint d1, uint d2, uint d3, uint d4)

#include "nocturne.h"

CMoloch * __cdecl
core_moloch_cpp_CMoloch_dtor_FUN_00528bf0(CMoloch *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int extraout_EAX;
  CDeformableModelInstance *pCVar1;
  CMoloch *ptr;
  void *ptr_00;
  uint unaff_retaddr;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMolochTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_hero).base_character.base_actor.vtable =
       &PTR_core_moloch_cpp_FUN_00528c70_00661944;
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->field5_0x21e94 + 200));
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(extraout_EAX + -0x2388),0,unaff_retaddr,
                      (uint)this_ptr,d1);
  core_hero_cpp_CHero_dtor_FUN_004f2470
            ((CHero *)&pCVar1[-0xf].bone_transform.bone_rotations[0x60].y,1,(uint)this_ptr,d1,d2,d3,
             d4,in_stack_00000018,in_stack_0000001c);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
