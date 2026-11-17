// Name: crt_unknown.c_FUN_005be750
// Address: 005be750
// Address Range: [[005be750, 005be80d]]
// Convention: unknown
// Signature: _FILE ** crt_unknown_c_FUN_005be750(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_FILE ** FUN_005be750(void)

{
  _FILE *p_Var1;
  _FILE **dest;
  _FILE *p_Var2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  if (_DAT_02680164 == (_FILE *)0x0) {
    dest = &g_FILE_PTR_0061ef54;
    do {
      if (((uint)dest[3] & 3) == 0) {
        p_Var1 = (_FILE *)malloc(0x1d);
        if (p_Var1 == (_FILE *)0x0) goto LAB_005be7f8;
        p_Var2 = (_FILE *)0x3;
        goto LAB_005be7c9;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < &DAT_0061f15c);
    p_Var2 = (_FILE *)0x4003;
    p_Var1 = (_FILE *)malloc(0x37);
    if (p_Var1 == (_FILE *)0x0) {
LAB_005be7f8:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
      return (_FILE **)0x0;
    }
    dest = (_FILE **)((int)&p_Var1[1]._ptr + 3);
  }
  else {
    dest = (_FILE **)_DAT_02680164->_cnt;
    p_Var2 = (_FILE *)(uint)((ushort)dest[3] & 0x4003 | 3);
    p_Var1 = _DAT_02680164;
    _DAT_02680164 = (_FILE *)_DAT_02680164->_ptr;
  }
LAB_005be7c9:
  memset(dest,0,0x1a);
  dest[3] = p_Var2;
  p_Var1->_cnt = (int)dest;
  dest[2] = p_Var1;
  p_Var1->_ptr = (char *)_DAT_02680160;
  _DAT_02680160 = p_Var1;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  return dest;
}
