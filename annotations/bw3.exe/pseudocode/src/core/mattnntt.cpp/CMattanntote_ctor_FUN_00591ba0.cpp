// Name: core_mattnntt.cpp_CMattanntote_ctor_FUN_00591ba0
// Address: 00591ba0
// Address Range: [[00591ba0, 00591d0d]]
// Convention: __cdecl
// Signature: CMattanntote * __cdecl core_mattnntt_cpp_CMattanntote_ctor_FUN_00591ba0(CMattanntote *this_ptr)

#include "nocturne.h"

CMattanntote * __cdecl core_mattnntt_cpp_CMattanntote_ctor_FUN_00591ba0(CMattanntote *this_ptr)

{
  CMattanntote *pCVar1;
  CEnemy *pCVar2;
  void *pvVar3;
  CMattanntote *pCVar4;
  CMattanntote *pCVar5;
  float *pfVar6;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pvVar3 = __arrinit(&pCVar2[1].base.base.health,0xc,&g_CFlameTypeInfo);
  pCVar1 = (CMattanntote *)((int)pvVar3 + -0xd0b8);
  *(CEnemy_full_vtable **)((int)pvVar3 + -0xcf64) = &g_CMattanntoteVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)((int)pvVar3 + -0xcf60),"bwp3_mattanntote.dfm");
  *(uint *)((int)pvVar3 + -0x9e4c) = 0x3f000000;
  *(uint *)((int)pvVar3 + -0x9e48) = 0x3f800000;
  *(uint *)((int)pvVar3 + -100) = 0;
  *(uint *)((int)pvVar3 + -0x68) = 0;
  *(uint *)((int)pvVar3 + -0xab8c) = 0x3fc90fdb;
  *(uint *)((int)pvVar3 + -0xcfbc) = 1;
  *(uint *)((int)pvVar3 + -0xcfc0) = 0;
  *(uint *)((int)pvVar3 + -0x50) = 1;
  *(uint *)((int)pvVar3 + -0x4c) = 0x40000000;
  *(uint *)((int)pvVar3 + -0x48) = 0x4b;
  *(uint *)((int)pvVar3 + -0x18) = 1;
  *(uint *)((int)pvVar3 + -0x2c) = 0;
  *(uint *)((int)pvVar3 + -0x28) = 0;
  *(uint *)((int)pvVar3 + -0x20) = 0;
  *(uint *)((int)pvVar3 + -0x1c) = 0;
  *(uint *)((int)pvVar3 + -0x14) = 0;
  *(uint *)((int)pvVar3 + -0x24) = 0xbf800000;
  *(uint *)((int)pvVar3 + -0x58) = 0x10000;
  *(uint *)((int)pvVar3 + -0x10) = 0;
  *(uint *)((int)pvVar3 + -0x54) = *(uint *)((int)pvVar3 + -0x4c);
  pCVar5 = pCVar1;
  do {
    pCVar4 = (CMattanntote *)((pCVar5->base).base.base.actor_name + 4);
    pCVar5->sfx_handles[0] = 0;
    pCVar5 = pCVar4;
  } while (pCVar4 != (CMattanntote *)((int)pvVar3 + -0xd084));
  pCVar5 = pCVar1;
  do {
    pfVar6 = &(pCVar5->base).base.model.bone_origins[0x14].y;
    pCVar5->flames[0].flame_size.x = 1.0;
    pCVar5->flames[0].flame_size.y = 1.5;
    pCVar5->flames[0].flame_size.z = 1.0;
    pCVar5->flames[0].which_flame = FLAME_TYPE_TORCH;
    pCVar5->flames[0].globe_scalar = 0.0;
    pCVar5 = (CMattanntote *)pfVar6;
  } while (pfVar6 != (float *)((int)pvVar3 + -0xc628));
  return pCVar1;
}
