// Name: core_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780
// Address: 00598780
// Address Range: [[00598780, 005987fb]]
// Convention: __cdecl
// Signature: CDarkwolf * __cdecl core_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf *this_ptr)

#include "nocturne.h"

CDarkwolf * __cdecl core_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf *this_ptr)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  CMorph *pCVar4;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0
                     ((CMorph *)(pCVar3[1].base.base.actor_name + 0x10));
  *(CEnemy_full_vtable **)(pCVar4[-0x12].models[1].textures[0x13].texture_name + 0x38) =
       &g_CDarkwolfVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)
             (pCVar4[-0x12].models[1].textures[0x13].texture_name + 0x3c),"bwp3_wolf.dfm");
  fVar1 = 50.0f;
  pCVar4[-0xd].models[0].parts[4].vertex_count = 0x3f400000;
  fVar2 = 100.0f;
  pCVar4[-0xd].models[0].parts[4].face_count = 0x3fc00000;
  pCVar4[-0xffffffff00000001].dead[0x14] = '\0';
  pCVar4[-0xffffffff00000001].dead[0x15] = '\0';
  pCVar4[-0xffffffff00000001].dead[0x16] = '\0';
  pCVar4[-0xffffffff00000001].dead[0x17] = '\0';
  pCVar4[-0xd].models[0].parts[4].start_vertex = (int)fVar1;
  pCVar4[-0xd].models[0].parts[4].start_face = (int)fVar2;
  return (CDarkwolf *)(pCVar4[-0x12].models[1].textures[0xf].texture_name + 4);
}
