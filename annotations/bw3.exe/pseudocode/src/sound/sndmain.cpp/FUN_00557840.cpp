// Name: sound_sndmain.cpp_FUN_00557840
// Address: 00557840
// Address Range: [[00557840, 00557901]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00557840(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_00557840(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = 0;
  iVar5 = 0;
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (0 < *(int *)(&g_SfxSamples[0].field_0x164 + iVar1)) {
      if (((*(int *)(&g_SfxSamples[0].field_0x154 + iVar1) == 0) &&
          (*(int *)(&g_SfxSamples[0].field_0x150 + iVar1) == 0)) &&
         (*(int *)(&g_SfxSamples[0].field_0x15c + iVar1) == 0)) {
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + *(int *)(&g_SfxSamples[0].field_0x168 + iVar1);
      }
      else {
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + *(int *)(&g_SfxSamples[0].field_0x168 + iVar1);
      }
    }
    iVar1 = iVar1 + 0x1b0;
  } while (iVar1 != 0x6c00);
  if (out_referenced_count != (int *)0x0) {
    *out_referenced_count = iVar3;
  }
  if (out_total_bytes_referenced != (int *)0x0) {
    *out_total_bytes_referenced = iVar4;
  }
  if (out_unreferenced_count != (int *)0x0) {
    *out_unreferenced_count = iVar2;
  }
  if (out_total_bytes_unreferenced != (int *)0x0) {
    *out_total_bytes_unreferenced = iVar5;
  }
  if (out_free_slots != (int *)0x0) {
    *out_free_slots = 0x40 - (iVar3 + iVar2);
  }
  if ((out_available_memory != (int *)0x0) &&
     (iVar1 = DAT_0060424c - (iVar4 + iVar5), *out_available_memory = iVar1, iVar1 < 0)) {
    *out_available_memory = 0;
    return;
  }
  return;
}
