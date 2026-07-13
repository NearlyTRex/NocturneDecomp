// Name: __isctype
// Address: 10009ac0
// Address Range: [[10009ac0, 10009b50]]
// Convention: __cdecl
// Signature: int __cdecl __isctype(int _C,int _Type)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __isctype(int _C,int _Type)

{
  LPCSTR _LpSrcStr;
  BOOL BVar1;
  byte bVar2;
  BOOL unaff_EBX;
  uint local_6;
  byte local_2;
  
  if (_C + 1U < 0x101) {
    return (uint)*(ushort *)(PTR_DAT_10017480 + _C * 2) & _Type;
  }
  bVar2 = (byte)((uint)_C >> 8);
  if ((PTR_DAT_10017480[(uint)bVar2 * 2 + 1] & 0x80) == 0) {
    _LpSrcStr = (LPCSTR)0x1;
    local_6._0_3_ = CONCAT12((char)_C,(ushort)local_6);
    local_6 = (uint)(uint3)local_6;
  }
  else {
    _LpSrcStr = (LPCSTR)0x2;
    local_6._0_3_ = CONCAT12(bVar2,(ushort)local_6);
    local_2 = 0;
    local_6 = CONCAT13((char)_C,(uint3)local_6);
  }
  BVar1 = ___crtGetStringTypeA
                    ((_locale_t)0x1,(int)&local_6 + 2,_LpSrcStr,(int)&local_6,(LPWORD)0x0,0,
                     unaff_EBX);
  if (BVar1 == 0) {
    return 0;
  }
  return local_6 & 0xffff & _Type;
}
