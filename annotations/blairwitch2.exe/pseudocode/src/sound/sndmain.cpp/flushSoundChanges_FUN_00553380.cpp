// Name: sound_sndmain.cpp_flushSoundChanges_FUN_00553380
// Address: 00553380
// Address Range: [[00553380, 00553540]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00553380(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00553380(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
    if (0 < (int)uVar2) {
      this_ptr = g_CSfxSlot_ARRAY_0263cf1c;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (g_HasHardware3DSound == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _g_BYTE_02649024;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,0.0);
            iVar3 = (*g_CSoundDevicePtr->vtable->applySfxChanges)
                              (g_CSoundDevicePtr,this_ptr,this_ptr->changed_flags);
            if (iVar3 == 0) {
LAB_00553533:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar3 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr);
              if (iVar3 == 0) goto LAB_00553533;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&g_SfxLastSlot) {
          if ((_g_BYTE_02649024 & 2) != 0) {
            (*g_CSoundDevicePtr->vtable->set3DListenerPos)
                      (g_CSoundDevicePtr,
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02648428 + g_INT_026484b8 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02648428 + g_INT_026484b8))),
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02648438 + g_INT_026484b8 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02648438 + g_INT_026484b8))),
                       __BITCAST_DOUBLE(CONCAT44(*(uint *)
                                         ((int)&g_DOUBLE_02648448 + g_INT_026484b8 * 8 + 4),
                                        *(uint *)(&g_DOUBLE_02648448 + g_INT_026484b8))));
          }
          if ((_g_BYTE_02649024 & 0x20000000) != 0) {
            (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
                      (g_CSoundDevicePtr,*(float *)(g_INT_026484b8 * 4 + 0x2648470),
                       *(float *)(g_INT_026484b8 * 4 + 0x2648478),
                       *(float *)(g_INT_026484b8 * 4 + 0x2648480),
                       *(float *)(g_INT_026484b8 * 4 + 0x2648488),
                       *(float *)(g_INT_026484b8 * 4 + 0x2648490),
                       *(float *)(g_INT_026484b8 * 4 + 0x2648498),
                       *(float *)(g_INT_026484b8 * 4 + 0x26484a0),
                       *(float *)(g_INT_026484b8 * 4 + 0x26484a8),
                       *(float *)(g_INT_026484b8 * 4 + 0x26484b0));
          }
          if ((_g_BYTE_02649024 & 4) != 0) {
            (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
                      (g_CSoundDevicePtr,
                       *(float *)((int)&g_CVector3d_02648458.x + g_INT_026484b8 * 4),
                       *(float *)((int)&g_CVector3d_02648458.y + g_INT_026484b8 * 4),
                       *(float *)((int)&g_CVector3d_02648458.z + g_INT_026484b8 * 4));
          }
          _g_BYTE_02649024 = 0;
          (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
          return;
        }
      } while( true );
    }
  }
  return;
}
