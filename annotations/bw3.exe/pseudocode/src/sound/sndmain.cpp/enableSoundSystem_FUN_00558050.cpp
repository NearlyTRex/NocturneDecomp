// Name: sound_sndmain.cpp_enableSoundSystem_FUN_00558050
// Address: 00558050
// Address Range: [[00558050, 00558242]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00558050(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00558050(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack0000005c;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_00558290
                    (g_INT_00604228,g_INT_0060422c,g_INT_00604230);
  if (iVar3 != 0) {
    if ((0 < g_INT_02cf32a0) && (iVar3 = 0, 0 < g_INT_0060422c)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)((int)g_FLOAT_PTR_ARRAY_02cf32cc + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,g_INT_02cf329c * g_INT_02cf32a0 * 4);
      } while (iVar3 < g_INT_0060422c);
    }
    g_INT_02cf3294 = 0;
    g_INT_02cf3298 = 0;
    (*g_CSoundDevice_PTR_02cf3280->vtable->set3DListenerPos)
              (g_CSoundDevice_PTR_02cf3280,
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02cf2828 + g_INT_02cf28b8 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02cf2828 + g_INT_02cf28b8))),
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02cf2838 + g_INT_02cf28b8 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02cf2838 + g_INT_02cf28b8))),
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02cf2848 + g_INT_02cf28b8 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02cf2848 + g_INT_02cf28b8))));
    (*g_CSoundDevice_PTR_02cf3280->vtable->set3DListenerOrient)
              (g_CSoundDevice_PTR_02cf3280,*(float *)(g_INT_02cf28b8 * 4 + 0x2cf2870),
               *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2878),*(float *)(g_INT_02cf28b8 * 4 + 0x2cf2880)
               ,*(float *)(g_INT_02cf28b8 * 4 + 0x2cf2888),
               *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2890),*(float *)(g_INT_02cf28b8 * 4 + 0x2cf2898)
               ,*(float *)(g_INT_02cf28b8 * 4 + 0x2cf28a0),
               *(float *)(g_INT_02cf28b8 * 4 + 0x2cf28a8),*(float *)(g_INT_02cf28b8 * 4 + 0x2cf28b0)
              );
    (*g_CSoundDevice_PTR_02cf3280->vtable->set3DListenerVelocity)
              (g_CSoundDevice_PTR_02cf3280,
               *(float *)((int)&g_CVector3d_02cf2858.x + g_INT_02cf28b8 * 4),
               *(float *)((int)&g_CVector3d_02cf2858.y + g_INT_02cf28b8 * 4),
               *(float *)((int)&g_CVector3d_02cf2858.z + g_INT_02cf28b8 * 4));
    (*g_CSoundDevice_PTR_02cf3280->vtable->set3DListenerDistanceFactor)
              (g_CSoundDevice_PTR_02cf3280,g_FLOAT_00604240);
    (*g_CSoundDevice_PTR_02cf3280->vtable->setReverb)
              (g_CSoundDevice_PTR_02cf3280,g_CachedReverb.volume,g_CachedReverb.decay_time,
               g_CachedReverb.damping);
    g_INT_02cf3420 = wincore_winrun_cpp_getTime_FUN_005806a0();
    iVar3 = (*g_CSoundDevice_PTR_02cf3280->vtable->start)(g_CSoundDevice_PTR_02cf3280);
    if (iVar3 != 0) {
      g_INT_02cf3284 = 1;
      uStack0000005c = 0x55822d;
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return 1;
    }
  }
  uStack0000005c = 0x55823c;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 0;
}
