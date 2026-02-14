// Name: sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0
// Address: 005aa6a0
// Address Range: [[005aa6a0, 005aa7ac]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory)

{
  int iVar1;
  CSfxSample *this_ptr;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  this_ptr = g_SfxSamples;
  iVar2 = 0;
  iVar3 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  do {
    if (0 < g_SfxSamples[iVar3].streaming_buffer_size) {
      if ((g_SfxSamples[iVar3].ref_count == 0) && (g_SfxSamples[iVar3].taken == 0)) {
        local_1c = local_1c + 1;
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(g_SfxSamples + iVar3);
        local_14 = local_14 + iVar1 * g_SfxSamples[iVar3].streaming_buffer_size;
      }
      else {
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
        local_18 = local_18 + 1;
        iVar2 = iVar2 + iVar1 * this_ptr->streaming_buffer_size;
      }
    }
    iVar3 = iVar3 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar3 < 0x40);
  if (out_referenced_count != (int *)0x0) {
    *out_referenced_count = local_18;
  }
  if (out_total_bytes_referenced != (int *)0x0) {
    *out_total_bytes_referenced = iVar2;
  }
  if (out_unreferenced_count != (int *)0x0) {
    *out_unreferenced_count = local_1c;
  }
  if (out_total_bytes_unreferenced != (int *)0x0) {
    *out_total_bytes_unreferenced = local_14;
  }
  if (out_free_slots != (int *)0x0) {
    *out_free_slots = 0x40 - (local_18 + local_1c);
  }
  if ((out_available_memory != (int *)0x0) &&
     (iVar2 = g_MaximumSoundMemoryBudget - (iVar2 + local_14), *out_available_memory = iVar2,
     iVar2 < 0)) {
    *out_available_memory = 0;
    return;
  }
  return;
}
