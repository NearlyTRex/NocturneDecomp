// Name: sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0
// Address: 00574ee0
// Address Range: [[00574ee0, 005750d2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack0000005c;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_00575540();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_00575120
                    (g_INT_006232e8,g_INT_006232ec,g_INT_006232f0);
  if (iVar3 != 0) {
    if ((0 < g_INT_02c8066c) && (iVar3 = 0, 0 < g_INT_006232ec)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)((int)g_FLOAT_PTR_ARRAY_02c80698 + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,g_INT_02c80668 * g_INT_02c8066c * 4);
      } while (iVar3 < g_INT_006232ec);
    }
    g_INT_02c80660 = 0;
    g_INT_02c80664 = 0;
    (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerPos)
              (g_CSoundDevice_PTR_02c80650,
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02c7fbf8 + g_INT_02c7fc88 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02c7fbf8 + g_INT_02c7fc88))),
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02c7fc08 + g_INT_02c7fc88 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02c7fc08 + g_INT_02c7fc88))),
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02c7fc18 + g_INT_02c7fc88 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02c7fc18 + g_INT_02c7fc88))));
    (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerOrient)
              (g_CSoundDevice_PTR_02c80650,
               *(float *)((int)&g_CVector3d_02c7fc40.x + g_INT_02c7fc88 * 4),
               *(float *)((int)&g_CVector3d_02c7fc40.y + g_INT_02c7fc88 * 4),
               *(float *)((int)&g_CVector3d_02c7fc40.z + g_INT_02c7fc88 * 4),
               *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc58),*(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc60)
               ,*(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc68),
               *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc70),*(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc78)
               ,*(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc80));
    (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerVelocity)
              (g_CSoundDevice_PTR_02c80650,
               *(float *)((int)&g_CVector3d_02c7fc28.x + g_INT_02c7fc88 * 4),
               *(float *)((int)&g_CVector3d_02c7fc28.y + g_INT_02c7fc88 * 4),
               *(float *)((int)&g_CVector3d_02c7fc28.z + g_INT_02c7fc88 * 4));
    (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerDistanceFactor)
              (g_CSoundDevice_PTR_02c80650,g_FLOAT_00623304);
    (*g_CSoundDevice_PTR_02c80650->vtable->setReverb)
              (g_CSoundDevice_PTR_02c80650,g_CachedReverb.volume,g_CachedReverb.decay_time,
               g_CachedReverb.damping);
    g_INT_02c807f0 = wincore_winrun_cpp_getTime_FUN_005b2420();
    iVar3 = (*g_CSoundDevice_PTR_02c80650->vtable->start)(g_CSoundDevice_PTR_02c80650);
    if (iVar3 != 0) {
      g_INT_02c80654 = 1;
      uStack0000005c = 0x5750bd;
      sound_sndmain_cpp_unlockSound_FUN_00573e70();
      return 1;
    }
  }
  uStack0000005c = 0x5750cc;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 0;
}
