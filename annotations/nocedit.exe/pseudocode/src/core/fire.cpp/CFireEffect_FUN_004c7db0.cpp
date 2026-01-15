// Name: core_fire.cpp_CFireEffect_FUN_004c7db0
// Address: 004c7db0
// Address Range: [[004c7db0, 004c7e58]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7db0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7db0(CFireEffect *this_ptr)

{
  char *pcVar1;
  CBulletTrail *pCVar2;
  int iVar3;
  CFireball *this_ptr_00;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  int in_stack_0000001c;
  uint in_stack_00000020;
  
  pCVar2 = g_BulletTrailActiveListHead;
  pcVar1 = g_BulletTrailActiveListHead->field0_0x0;
  this_ptr_00 = g_FireballPool + (int)g_BulletTrailActiveListHead;
  g_BulletTrailActiveListHead = (CBulletTrail *)(pcVar1 + 1);
  if (0x3f < (int)(pcVar1 + 1)) {
    g_BulletTrailActiveListHead = (CBulletTrail *)0x0;
  }
  (*(g_FireballPool[(int)pCVar2].base.vtable)->setup)
            (&this_ptr_00->base,in_stack_00000008,in_stack_0000000c);
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0xc000,0xffff);
  g_FireballPool[(int)pCVar2].timer = iVar3;
  if (in_stack_0000001c == 0) {
    g_FireballPool[(int)pCVar2].fade_rate = 0x2000;
  }
  else {
    g_FireballPool[(int)pCVar2].fade_rate = 0x8000;
  }
  g_FireballPool[(int)pCVar2].lighting_active = in_stack_0000001c;
  g_FireballPool[(int)pCVar2].first_update_flag = 0;
  g_FireballPool[(int)pCVar2].field9_0x58 = in_stack_00000020;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0
            (in_stack_00000020,(CVector3f *)this_ptr_00);
  sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_005a9a00
            (g_FireballPool[(int)pCVar2].field9_0x58,&g_FireballPool[(int)pCVar2].base.velocity);
  return;
}
