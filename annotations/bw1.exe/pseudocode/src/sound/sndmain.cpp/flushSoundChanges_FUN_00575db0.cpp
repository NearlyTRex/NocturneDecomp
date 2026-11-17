// Name: sound_sndmain.cpp_flushSoundChanges_FUN_00575db0
// Address: 00575db0
// Address Range: [[00575db0, 00575f70]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00575db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00575db0(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  
  if (g_CSoundDevice_PTR_02c80650 != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
    if (0 < (int)uVar2) {
      this_ptr = g_CSfxSlot_ARRAY_02c745ec;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (g_INT_02c80658 == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _g_BYTE_02c807f4;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,0.0);
            iVar3 = (*g_CSoundDevice_PTR_02c80650->vtable->applySfxChanges)
                              (g_CSoundDevice_PTR_02c80650,this_ptr,this_ptr->changed_flags);
            if (iVar3 == 0) {
LAB_00575f63:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar3 = (*g_CSoundDevice_PTR_02c80650->vtable->startSfx)
                                (g_CSoundDevice_PTR_02c80650,this_ptr);
              if (iVar3 == 0) goto LAB_00575f63;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&g_INT_02c78cec) {
          if ((_g_BYTE_02c807f4 & 2) != 0) {
            (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerPos)
                      (g_CSoundDevice_PTR_02c80650,
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02c7fbf8 + g_INT_02c7fc88 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02c7fbf8 + g_INT_02c7fc88))),
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02c7fc08 + g_INT_02c7fc88 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02c7fc08 + g_INT_02c7fc88))),
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02c7fc18 + g_INT_02c7fc88 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02c7fc18 + g_INT_02c7fc88))));
          }
          if ((_g_BYTE_02c807f4 & 0x20000000) != 0) {
            (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerOrient)
                      (g_CSoundDevice_PTR_02c80650,
                       *(float *)((int)&g_CVector3d_02c7fc40.x + g_INT_02c7fc88 * 4),
                       *(float *)((int)&g_CVector3d_02c7fc40.y + g_INT_02c7fc88 * 4),
                       *(float *)((int)&g_CVector3d_02c7fc40.z + g_INT_02c7fc88 * 4),
                       *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc58),
                       *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc60),
                       *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc68),
                       *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc70),
                       *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc78),
                       *(float *)(g_INT_02c7fc88 * 4 + 0x2c7fc80));
          }
          if ((_g_BYTE_02c807f4 & 4) != 0) {
            (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerVelocity)
                      (g_CSoundDevice_PTR_02c80650,
                       *(float *)((int)&g_CVector3d_02c7fc28.x + g_INT_02c7fc88 * 4),
                       *(float *)((int)&g_CVector3d_02c7fc28.y + g_INT_02c7fc88 * 4),
                       *(float *)((int)&g_CVector3d_02c7fc28.z + g_INT_02c7fc88 * 4));
          }
          _g_BYTE_02c807f4 = 0;
          (*g_CSoundDevice_PTR_02c80650->vtable->commitDeferredSettings)
                    (g_CSoundDevice_PTR_02c80650);
          return;
        }
      } while( true );
    }
  }
  return;
}
