// Name: sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
// Address: 00527e40
// Address Range: [[00527e40, 00528074]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00527e40(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00527e40(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack00000084;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00526ca0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0
                    (g_INT_005bea64,g_INT_005bea68,g_INT_005bea6c);
  if (iVar3 != 0) {
    if ((0 < g_INT_02dc8334) && (iVar3 = 0, 0 < g_INT_005bea68)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)((int)g_FLOAT_PTR_ARRAY_02dc8360 + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,g_INT_02dc8330 * g_INT_02dc8334 * 4);
      } while (iVar3 < g_INT_005bea68);
    }
    g_INT_02dc8328 = 0;
    g_INT_02dc832c = 0;
    (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerPos)
              (g_CSoundDevice_PTR_02dc8318,
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78e0._4_4_,g_DOUBLE_02dc78e0._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78e8._4_4_,g_DOUBLE_02dc78e8._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78f0._4_4_,g_DOUBLE_02dc78f0._0_4_)));
    (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerOrient)
              (g_CSoundDevice_PTR_02dc8318,
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7910._4_4_,g_DOUBLE_02dc7910._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7918._4_4_,g_DOUBLE_02dc7918._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7920._4_4_,g_DOUBLE_02dc7920._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_CVector3d_02dc7928.x._4_4_,g_CVector3d_02dc7928.x._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_CVector3d_02dc7928.y._4_4_,g_CVector3d_02dc7928.y._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_CVector3d_02dc7928.z._4_4_,g_CVector3d_02dc7928.z._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_CVector3d_02dc7940.x._4_4_,g_CVector3d_02dc7940.x._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_CVector3d_02dc7940.y._4_4_,g_CVector3d_02dc7940.y._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_CVector3d_02dc7940.z._4_4_,g_CVector3d_02dc7940.z._0_4_)));
    (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerVelocity)
              (g_CSoundDevice_PTR_02dc8318,
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78f8._4_4_,g_DOUBLE_02dc78f8._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7900._4_4_,g_DOUBLE_02dc7900._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7908._4_4_,g_DOUBLE_02dc7908._0_4_)));
    (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerDistanceFactor)
              (g_CSoundDevice_PTR_02dc8318,
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_005bea80._4_4_,g_DOUBLE_005bea80._0_4_)));
    (*g_CSoundDevice_PTR_02dc8318->vtable->commitDeferredSettings)(g_CSoundDevice_PTR_02dc8318);
    g_INT_02dc84c0 = wincore_winrun_cpp_getTime_FUN_00558a30();
    iVar3 = (*g_CSoundDevice_PTR_02dc8318->vtable->start)(g_CSoundDevice_PTR_02dc8318);
    if (iVar3 != 0) {
      g_INT_02dc831c = 1;
      uStack00000084 = 0x528062;
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return 1;
    }
  }
  uStack00000084 = 0x52806e;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 0;
}
