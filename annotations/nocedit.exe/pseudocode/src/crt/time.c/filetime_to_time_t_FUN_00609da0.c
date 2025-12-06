// Name: crt_time.c_filetime_to_time_t_FUN_00609da0
// Address: 00609da0
// Address Range: [[00609da0, 00609e65]]
// Convention: __cdecl
// Signature: time_t crt_time.c_filetime_to_time_t_FUN_00609da0(FILETIME * filetime)

#include "nocturne.h"

time_t __cdecl crt_time_c_filetime_to_time_t_FUN_00609da0(FILETIME *filetime)

{
  BOOL BVar1;
  time_t tVar2;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  ushort unaff_retaddr;
  ushort unaff_retaddr_00;
  ushort in_stack_00000008;
  byte auStack_28 [32];
  int iStack_8;
  
  if ((filetime->dwLowDateTime == 0) && (filetime->dwHighDateTime == 0)) {
    return -1;
  }
  BVar1 = (*PTR_FileTimeToLocalFileTime_00611540)(filetime,(LPFILETIME)(auStack_28 + 0x1c));
  if (BVar1 == 0) {
    return -1;
  }
  BVar1 = (*PTR_FileTimeToSystemTime_00611544)
                    ((FILETIME *)&stack0x00000000,(LPSYSTEMTIME)(auStack_28 + 0x18));
  if (BVar1 == 0) {
    return -1;
  }
  auStack_28._20_4_ = (unaff_ESI & 0xffff) - 0x76c;
  auStack_28._16_4_ = (unaff_ESI >> 0x10) - 1;
  auStack_28._12_4_ = ZEXT24(unaff_retaddr_00);
  auStack_28._8_4_ = (uint)filetime & 0xffff;
  auStack_28._4_4_ = (uint)filetime >> 0x10;
  auStack_28._0_4_ = ZEXT24(in_stack_00000008);
  auStack_28._24_4_ = ZEXT24(unaff_retaddr);
  auStack_28._28_4_ = -1;
  iStack_8 = -1;
  tVar2 = crt_time_c_mktime_FUN_00600f80((tm *)auStack_28);
  return tVar2;
}
