// Name: crt_unknown.c_FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a994d]]
// Convention: unknown
// Signature: _FILE ** crt_unknown_c_FUN_005a9890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_FILE ** FUN_005a9890(void)

{
  _FILE *p_Var1;
  _FILE **dest;
  _FILE *p_Var2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  if (_DAT_02d252a4 == (_FILE *)0x0) {
    dest = &g_FILE_PTR_00607678;
    do {
      if (((uint)dest[3] & 3) == 0) {
        p_Var1 = (_FILE *)malloc(0x1d);
        if (p_Var1 == (_FILE *)0x0) goto LAB_005a9938;
        p_Var2 = (_FILE *)0x3;
        goto LAB_005a9909;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < &DAT_00607880);
    p_Var2 = (_FILE *)0x4003;
    p_Var1 = (_FILE *)malloc(0x37);
    if (p_Var1 == (_FILE *)0x0) {
LAB_005a9938:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
      return (_FILE **)0x0;
    }
    dest = (_FILE **)((int)&p_Var1[1]._ptr + 3);
  }
  else {
    dest = (_FILE **)_DAT_02d252a4->_cnt;
    p_Var2 = (_FILE *)(uint)((ushort)dest[3] & 0x4003 | 3);
    p_Var1 = _DAT_02d252a4;
    _DAT_02d252a4 = (_FILE *)_DAT_02d252a4->_ptr;
  }
LAB_005a9909:
  memset(dest,0,0x1a);
  dest[3] = p_Var2;
  p_Var1->_cnt = (int)dest;
  dest[2] = p_Var1;
  p_Var1->_ptr = (char *)_DAT_02d252a0;
  _DAT_02d252a0 = p_Var1;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  return dest;
}
