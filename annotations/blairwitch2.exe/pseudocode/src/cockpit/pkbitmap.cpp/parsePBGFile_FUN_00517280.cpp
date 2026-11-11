// Name: cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280
// Address: 00517280
// Address Range: [[00517280, 005173fc]]
// Convention: unknown
// Signature: CPackedBitmap * cockpit_pkbitmap_cpp_parsePBGFile_FUN_00517280(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPackedBitmap * cockpit_pkbitmap_cpp_parsePBGFile_FUN_00517280(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)

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
    acStack_58[0] = -0x62;
    acStack_58[1] = 'r';
    acStack_58[2] = 'Q';
    acStack_58[3] = '\0';
    iVar1 = _fread();
    if (iVar1 == 1) {
      iVar3 = 4;
      bVar6 = false;
      iVar1 = 0;
      bVar7 = true;
      pbVar4 = abStack_20;
      pbVar5 = (byte *)0x61b3c0;
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
      if ((iVar1 != 0) || (uStack_1c == 0)) goto LAB_005172c3;
      uVar2 = uStack_1c / param_3;
      operator_new_array();
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
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00516f30(pCStack_14,param_2,iVar3);
            iVar3 = 1;
            if (1 < param_6) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_00516140
                          ((CPackedBitmap *)&stack0xffffffa4);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00516f30
                          ((CPackedBitmap *)acStack_58,param_2,1);
                acStack_58[0] = -0x2f;
                acStack_58[1] = 's';
                acStack_58[2] = 'Q';
                acStack_58[3] = '\0';
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_005161b0
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
      _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d046a4 = 0x571;
      core_main_c_FUN_004e4500();
LAB_005172c3:
      _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d046a4 = 0x572;
      core_main_c_FUN_004e4500();
    }
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d046a4 = 0x573;
    core_main_c_FUN_004e4500();
  } while( true );
}
