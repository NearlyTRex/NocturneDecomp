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
  
  if (g_CSoundDevice_PTR_02648e80 != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
    if (0 < (int)uVar2) {
      this_ptr = g_CSfxSlot_ARRAY_0263cf1c;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (g_INT_02648e88 == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _g_BYTE_02649024;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,0.0);
            iVar3 = (*g_CSoundDevice_PTR_02648e80->vtable->applySfxChanges)
                              (g_CSoundDevice_PTR_02648e80,this_ptr,this_ptr->changed_flags);
            if (iVar3 == 0) {
LAB_00553533:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar3 = (*g_CSoundDevice_PTR_02648e80->vtable->startSfx)
                                (g_CSoundDevice_PTR_02648e80,this_ptr);
              if (iVar3 == 0) goto LAB_00553533;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&g_INT_0264161c) {
          if ((_g_BYTE_02649024 & 2) != 0) {
            (*g_CSoundDevice_PTR_02648e80->vtable->set3DListenerPos)
                      (g_CSoundDevice_PTR_02648e80,
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
            (*g_CSoundDevice_PTR_02648e80->vtable->set3DListenerOrient)
                      (g_CSoundDevice_PTR_02648e80,*(float *)(g_INT_026484b8 * 4 + 0x2648470),
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
            (*g_CSoundDevice_PTR_02648e80->vtable->set3DListenerVelocity)
                      (g_CSoundDevice_PTR_02648e80,
                       *(float *)((int)&g_CVector3d_02648458.x + g_INT_026484b8 * 4),
                       *(float *)((int)&g_CVector3d_02648458.y + g_INT_026484b8 * 4),
                       *(float *)((int)&g_CVector3d_02648458.z + g_INT_026484b8 * 4));
          }
          _g_BYTE_02649024 = 0;
          (*g_CSoundDevice_PTR_02648e80->vtable->commitDeferredSettings)
                    (g_CSoundDevice_PTR_02648e80);
          return;
        }
      } while( true );
    }
  }
  return;
}
