// Name: crt_locale.c___get_lc_monetary_FUN_1000ddc0
// Address: 1000ddc0
// Address Range: [[1000ddc0, 1000df0e]]
// Convention: __cdecl
// Signature: uint __cdecl crt_locale_c___get_lc_monetary_FUN_1000ddc0(lconv *lc)

#include "nocturne.h"

uint __cdecl __get_lc_monetary(lconv *lc)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_10017954;
  if (lc == (lconv *)0x0) {
    return 0xffffffff;
  }
  uVar1 = __getlocaleinfo(1,uVar15,0x15,&lc->int_curr_symbol);
  uVar2 = __getlocaleinfo(1,uVar15,0x14,&lc->currency_symbol);
  uVar3 = __getlocaleinfo(1,uVar15,0x16,&lc->mon_decimal_point);
  uVar4 = __getlocaleinfo(1,uVar15,0x17,&lc->mon_thousands_sep);
  uVar5 = __getlocaleinfo(1,uVar15,0x18,&lc->mon_grouping);
  _fix_grouping(lc->mon_grouping);
  uVar6 = __getlocaleinfo(1,uVar15,0x50,&lc->positive_sign);
  uVar7 = __getlocaleinfo(1,uVar15,0x51,&lc->negative_sign);
  uVar8 = __getlocaleinfo(0,uVar15,0x1a,&lc->int_frac_digits);
  uVar9 = __getlocaleinfo(0,uVar15,0x19,&lc->frac_digits);
  uVar10 = __getlocaleinfo(0,uVar15,0x54,&lc->p_cs_precedes);
  uVar11 = __getlocaleinfo(0,uVar15,0x55,&lc->p_sep_by_space);
  uVar12 = __getlocaleinfo(0,uVar15,0x56,&lc->n_cs_precedes);
  uVar13 = __getlocaleinfo(0,uVar15,0x57,&lc->n_sep_by_space);
  uVar14 = __getlocaleinfo(0,uVar15,0x52,&lc->p_sign_posn);
  uVar15 = __getlocaleinfo(0,uVar15,0x53,&lc->n_sign_posn);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}
