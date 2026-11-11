// Name: core_sound.cpp_FUN_0055f60e
// Address: 0055f60e
// Address Range: [[0055f60e, 0055f693]]
// Convention: unknown
// Signature: void core_sound_cpp_FUN_0055f60e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_FUN_0055f60e(void)

{
  if (&stack0x00000000 == g_CSpawnerClassInfo.class_name + 4) {
    _DAT_02cf5f84 = 0xffffffff;
    return;
  }
  _DAT_02cf5f74 = -(g_CDemonSetPtr->active_fog).scroll.x;
  _DAT_02cf5f78 = -(g_CDemonSetPtr->active_fog).scroll.y;
  _DAT_02cf5f7c = -(g_CDemonSetPtr->active_fog).scroll.z;
  _DAT_02cf5f84 = 0xffffffff;
  return;
}
