// Name: crt_ctype.c__isctype_FUN_10009ac0
// Address: 10009ac0
// Address Range: [[10009ac0, 10009b50]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c__isctype_FUN_10009ac0(int c,int type)

#include "nocturne.h"

int __cdecl _isctype(int c,int type)

{
  LPCSTR lp_src_str;
  BOOL BVar1;
  byte bVar2;
  BOOL unaff_EBX;
  uint local_6;
  byte local_2;
  
  if (c + 1U < 0x101) {
    return (uint)*(ushort *)(PTR_DAT_10017480 + c * 2) & type;
  }
  bVar2 = (byte)((uint)c >> 8);
  if ((PTR_DAT_10017480[(uint)bVar2 * 2 + 1] & 0x80) == 0) {
    lp_src_str = (LPCSTR)0x1;
    local_6._0_3_ = CONCAT12((char)c,(ushort)local_6);
    local_6 = (uint)(uint3)local_6;
  }
  else {
    lp_src_str = (LPCSTR)0x2;
    local_6._0_3_ = CONCAT12(bVar2,(ushort)local_6);
    local_2 = 0;
    local_6 = CONCAT13((char)c,(uint3)local_6);
  }
  BVar1 = _crtGetStringTypeA
                    ((_locale_t)0x1,(int)&local_6 + 2,lp_src_str,(int)&local_6,(LPWORD)0x0,0,
                     unaff_EBX);
  if (BVar1 == 0) {
    return 0;
  }
  return local_6 & 0xffff & type;
}
