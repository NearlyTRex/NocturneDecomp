// Name: sound_sndmain.cpp_flushSoundChanges_FUN_00558f20
// Address: 00558f20
// Address Range: [[00558f20, 005590e0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00558f20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00558f20(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
    if (0 < (int)uVar2) {
      this_ptr = g_CSfxSlot_ARRAY_02ce721c;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (g_HasHardware3DSound == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _g_BYTE_02cf3424;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,0.0);
            iVar3 = (*g_CSoundDevicePtr->vtable->applySfxChanges)
                              (g_CSoundDevicePtr,this_ptr,this_ptr->changed_flags);
            if (iVar3 == 0) {
LAB_005590d3:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar3 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr);
              if (iVar3 == 0) goto LAB_005590d3;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&g_SfxLastSlot) {
          if ((_g_BYTE_02cf3424 & 2) != 0) {
            (*g_CSoundDevicePtr->vtable->set3DListenerPos)
                      (g_CSoundDevicePtr,
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02cf2828 + g_INT_02cf28b8 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02cf2828 + g_INT_02cf28b8))),
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02cf2838 + g_INT_02cf28b8 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02cf2838 + g_INT_02cf28b8))),
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02cf2848 + g_INT_02cf28b8 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02cf2848 + g_INT_02cf28b8))));
          }
          if ((_g_BYTE_02cf3424 & 0x20000000) != 0) {
            (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
                      (g_CSoundDevicePtr,*(float *)(g_INT_02cf28b8 * 4 + 0x2cf2870),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2878),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2880),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2888),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2890),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf2898),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf28a0),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf28a8),
                       *(float *)(g_INT_02cf28b8 * 4 + 0x2cf28b0));
          }
          if ((_g_BYTE_02cf3424 & 4) != 0) {
            (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
                      (g_CSoundDevicePtr,
                       *(float *)((int)&g_CVector3d_02cf2858.x + g_INT_02cf28b8 * 4),
                       *(float *)((int)&g_CVector3d_02cf2858.y + g_INT_02cf28b8 * 4),
                       *(float *)((int)&g_CVector3d_02cf2858.z + g_INT_02cf28b8 * 4));
          }
          _g_BYTE_02cf3424 = 0;
          (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
          return;
        }
      } while( true );
    }
  }
  return;
}
