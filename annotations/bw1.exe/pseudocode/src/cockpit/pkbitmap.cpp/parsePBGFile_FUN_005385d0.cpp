// Name: cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0
// Address: 005385d0
// Address Range: [[005385d0, 0053874c]]
// Convention: unknown
// Signature: CPackedBitmap * cockpit_pkbitmap_cpp_parsePBGFile_FUN_005385d0(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPackedBitmap * cockpit_pkbitmap_cpp_parsePBGFile_FUN_005385d0(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  char acStack_58 [4];
  byte abStack_20 [4];
  uint uStack_1c;
  CPackedBitmap *pCStack_18;
  CPackedBitmap *pCStack_14;
  
  bVar8 = 0;
  do {
    acStack_58[0] = -0x12;
    acStack_58[1] = -0x7b;
    acStack_58[2] = 'S';
    acStack_58[3] = '\0';
    iVar1 = _fread();
    if (iVar1 == 1) {
      iVar3 = 4;
      bVar6 = false;
      iVar1 = 0;
      bVar7 = true;
      pbVar4 = abStack_20;
      pbVar5 = (byte *)0x622820;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pbVar4 < *pbVar5;
        bVar7 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + (uint)bVar8 * -2 + 1;
        pbVar5 = pbVar5 + (uint)bVar8 * -2 + 1;
      } while (bVar7);
      if (!bVar7) {
        iVar1 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      }
      if ((iVar1 != 0) || (uStack_1c == 0)) goto LAB_00538613;
      uVar2 = uStack_1c / param_3;
      FUN_005c1268();
      pCStack_18 = (CPackedBitmap *)__vec_new();
      if (pCStack_18 != (CPackedBitmap *)0x0) {
        iVar1 = 0;
        pCStack_14 = pCStack_18;
        if (0 < (int)uVar2) {
          do {
            iVar3 = param_4;
            if ((-1 < param_5) && (iVar1 != param_5)) {
              iVar3 = 1;
            }
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00538280(pCStack_14,param_2,iVar3);
            iVar3 = 1;
            if (1 < param_6) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_00537490
                          ((CPackedBitmap *)&stack0xffffffa4);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00538280
                          ((CPackedBitmap *)acStack_58,param_2,1);
                acStack_58[0] = '!';
                acStack_58[1] = -0x79;
                acStack_58[2] = 'S';
                acStack_58[3] = '\0';
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_00537500
                          ((CPackedBitmap *)&stack0xffffffb4,0);
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)param_3);
            }
            pCStack_14 = pCStack_14 + 1;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar2);
        }
        *param_1 = uVar2;
        return pCStack_18;
      }
    }
    else {
      _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d1d404 = 0x573;
      core_main_c_FUN_005030e0();
LAB_00538613:
      _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d1d404 = 0x574;
      core_main_c_FUN_005030e0();
    }
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d1d404 = 0x575;
    core_main_c_FUN_005030e0();
  } while( true );
}
