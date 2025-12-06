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
  int unaff_ESI;
  CEvent *pCVar3;
  void *unaff_EDI;
  CEvent *pCVar4;
  double dVar5;
  CEvent *in_stack_fffffe90;
  CEvent aCStack_164 [328];
  ulonglong local_1c;
  int local_14;
  
  local_14 = 0;
  if (0 < this_ptr[1].event_count) {
    dest = this_ptr[1].event_list;
    local_1c = (double)CONCAT44 /* combine 2-byte values */(this_ptr[1].field2_0x68 + 0xbc,(uint)local_1c);
    do {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(1,(uint)in_stack_fffffe90);
      local_1c._0_4_ = SUB84 /* extract 2-byte value */(dVar5,0);
      *(uint *)(dest + 0x118) = (uint)local_1c;
      local_1c._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
      *(uint *)(dest + 0x11c) = local_1c._4_4_;
      local_1c = dVar5;
      if (0.0 <= *(double *)(dest + 0x118)) {
        sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffffe94);
        in_stack_fffffe90 = *(CEvent **)dest;
        iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                          ((uint)in_stack_fffffe90,(CSfxSample *)&stack0xfffffe98);
        pCVar3 = aCStack_164;
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
        unaff_EDI = (void *)((int)unaff_EDI + 0x120);
        unaff_ESI = unaff_ESI + 1;
      }
      else {
LAB_004b0e30:
        iVar2 = this_ptr[1].event_count + -1;
        this_ptr[1].event_count = iVar2;
        in_stack_fffffe90 = dest;
        crt_string_c_memmove_FUN_005fe5e0(dest,unaff_EDI,(iVar2 - unaff_ESI) * 0x120);
      }
    } while (local_14 < this_ptr[1].event_count);
  }
  return;
}
