// Name: core_event.cpp_CEventList_FUN_004b0db0
// Address: 004b0db0
// Address Range: [[004b0db0, 004b0ef5]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0db0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0db0(CEventList *this_ptr)

{
  CEvent CVar1;
  int iVar2;
  CEvent *dest;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CEvent *pCVar3;
  CEvent *pCVar4;
  double dVar5;
  byte *in_stack_fffffe90;
  byte auStack_16c [336];
  ulonglong local_1c;
  void *local_14;
  
  local_14 = (void *)0x0;
  if (0 < this_ptr[1].event_count) {
    dest = this_ptr[1].event_list;
    local_1c = (double)CONCAT44 /* combine 2-byte values */(this_ptr[1].field2_0x68 + 0xbc,(uint)local_1c);
    do {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(1,(uint)in_stack_fffffe90);
      local_1c._0_4_ = SUB84 /* extract 2-byte value */(dVar5,0);
      *(uint *)(dest + 0x118) = (uint)local_1c;
      local_1c._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
      *(uint *)(dest + 0x11c) = local_1c._4_4_;
      in_stack_fffffe90 = auStack_16c;
      local_1c = dVar5;
      if (0.0 <= *(double *)(dest + 0x118)) {
        sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)auStack_16c);
        iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                          (*(uint *)dest,(CSfxSample *)&stack0xfffffe90);
        pCVar3 = (CEvent *)&stack0xfffffe90;
        if (iVar2 == 0) goto LAB_004b0e30;
        pCVar4 = dest + 0x18;
        do {
          CVar1 = *pCVar3;
          *pCVar4 = CVar1;
          if (CVar1 == (CEvent)0x0) break;
          CVar1 = pCVar3[1];
          pCVar3 = pCVar3 + 2;
          pCVar4[1] = CVar1;
          pCVar4 = pCVar4 + 2;
        } while (CVar1 != (CEvent)0x0);
        dest = dest + 0x120;
        local_14 = (void *)((int)local_14 + 1);
        local_1c = (double)CONCAT44 /* combine 2-byte values */(local_1c._4_4_ + 0x120,(uint)local_1c);
      }
      else {
LAB_004b0e30:
        iVar2 = this_ptr[1].event_count + -1;
        this_ptr[1].event_count = iVar2;
        in_stack_fffffe90 = (byte *)((iVar2 - unaff_EBP) * 0x120);
        crt_string_c_memmove_FUN_005fe5e0(dest,local_14,(SIZE_T)in_stack_fffffe90);
      }
    } while ((int)local_14 < this_ptr[1].event_count);
  }
  return;
}
