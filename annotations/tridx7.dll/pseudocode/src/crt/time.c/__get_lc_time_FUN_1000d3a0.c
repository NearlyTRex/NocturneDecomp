// Name: crt_time.c___get_lc_time_FUN_1000d3a0
// Address: 1000d3a0
// Address Range: [[1000d3a0, 1000d713]]
// Convention: __cdecl
// Signature: uint __cdecl crt_time_c___get_lc_time_FUN_1000d3a0(__lc_time_data *lc_time)

#include "nocturne.h"

uint __cdecl __get_lc_time(__lc_time_data *lc_time)

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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar43 = (uint)DAT_10017960;
  uVar40 = (uint)DAT_1001795e;
  if (lc_time == (__lc_time_data *)0x0) {
    return 0xffffffff;
  }
  uVar1 = __getlocaleinfo(1,uVar40,0x31,lc_time->wday_abbr + 1);
  uVar2 = __getlocaleinfo(1,uVar40,0x32,lc_time->wday_abbr + 2);
  uVar3 = __getlocaleinfo(1,uVar40,0x33,lc_time->wday_abbr + 3);
  uVar4 = __getlocaleinfo(1,uVar40,0x34,lc_time->wday_abbr + 4);
  uVar5 = __getlocaleinfo(1,uVar40,0x35,lc_time->wday_abbr + 5);
  uVar6 = __getlocaleinfo(1,uVar40,0x36,lc_time->wday_abbr + 6);
  uVar7 = __getlocaleinfo(1,uVar40,0x37,lc_time);
  uVar8 = __getlocaleinfo(1,uVar40,0x2a,lc_time->wday + 1);
  uVar9 = __getlocaleinfo(1,uVar40,0x2b,lc_time->wday + 2);
  uVar10 = __getlocaleinfo(1,uVar40,0x2c,lc_time->wday + 3);
  uVar11 = __getlocaleinfo(1,uVar40,0x2d,lc_time->wday + 4);
  uVar12 = __getlocaleinfo(1,uVar40,0x2e,lc_time->wday + 5);
  uVar13 = __getlocaleinfo(1,uVar40,0x2f,lc_time->wday + 6);
  uVar14 = __getlocaleinfo(1,uVar40,0x30,lc_time->wday);
  uVar15 = __getlocaleinfo(1,uVar40,0x44,lc_time->month_abbr);
  uVar16 = __getlocaleinfo(1,uVar40,0x45,lc_time->month_abbr + 1);
  uVar17 = __getlocaleinfo(1,uVar40,0x46,lc_time->month_abbr + 2);
  uVar18 = __getlocaleinfo(1,uVar40,0x47,lc_time->month_abbr + 3);
  uVar19 = __getlocaleinfo(1,uVar40,0x48,lc_time->month_abbr + 4);
  uVar20 = __getlocaleinfo(1,uVar40,0x49,lc_time->month_abbr + 5);
  uVar21 = __getlocaleinfo(1,uVar40,0x4a,lc_time->month_abbr + 6);
  uVar22 = __getlocaleinfo(1,uVar40,0x4b,lc_time->month_abbr + 7);
  uVar23 = __getlocaleinfo(1,uVar40,0x4c,lc_time->month_abbr + 8);
  uVar24 = __getlocaleinfo(1,uVar40,0x4d,lc_time->month_abbr + 9);
  uVar25 = __getlocaleinfo(1,uVar40,0x4e,lc_time->month_abbr + 10);
  uVar26 = __getlocaleinfo(1,uVar40,0x4f,lc_time->month_abbr + 0xb);
  uVar27 = __getlocaleinfo(1,uVar40,0x38,lc_time->month);
  uVar28 = __getlocaleinfo(1,uVar40,0x39,lc_time->month + 1);
  uVar29 = __getlocaleinfo(1,uVar40,0x3a,lc_time->month + 2);
  uVar30 = __getlocaleinfo(1,uVar40,0x3b,lc_time->month + 3);
  uVar31 = __getlocaleinfo(1,uVar40,0x3c,lc_time->month + 4);
  uVar32 = __getlocaleinfo(1,uVar40,0x3d,lc_time->month + 5);
  uVar33 = __getlocaleinfo(1,uVar40,0x3e,lc_time->month + 6);
  uVar34 = __getlocaleinfo(1,uVar40,0x3f,lc_time->month + 7);
  uVar35 = __getlocaleinfo(1,uVar40,0x40,lc_time->month + 8);
  uVar36 = __getlocaleinfo(1,uVar40,0x41,lc_time->month + 9);
  uVar37 = __getlocaleinfo(1,uVar40,0x42,lc_time->month + 10);
  uVar38 = __getlocaleinfo(1,uVar40,0x43,lc_time->month + 0xb);
  uVar39 = __getlocaleinfo(1,uVar40,0x28,lc_time->ampm);
  uVar40 = __getlocaleinfo(1,uVar40,0x29,lc_time->ampm + 1);
  uVar41 = __getlocaleinfo(1,uVar43,0x1f,&lc_time->ww_sdatefmt);
  uVar42 = __getlocaleinfo(1,uVar43,0x20,&lc_time->ww_ldatefmt);
  uVar43 = _maketimefmt(uVar43,lc_time);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}
