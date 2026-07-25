// Name: FUN_004f4f90
// Address: 004f4f90
// Address Range: [[004f4f90, 004f510b]]
// Convention: unknown
// Signature: int FUN_004f4f90(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f4f90(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte auStack_44 [36];
  byte local_20 [4];
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  do {
    iVar1 = _fread(local_20,8,1,param_2);
    if (iVar1 == 1) {
      iVar4 = 4;
      bVar7 = false;
      iVar1 = 0;
      bVar8 = true;
      pbVar5 = local_20;
      pbVar6 = (byte *)&DAT_005be180;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar8 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
        pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar1 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if ((iVar1 != 0) || (local_1c == 0)) goto LAB_004f4fd1;
      uVar2 = local_1c / param_3;
      uVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(uVar2 * 0x24 + 4,uVar2,&DAT_005a1340);
      local_18 = __vec_new(uVar3);
      if (local_18 != 0) {
        iVar1 = 0;
        local_14 = local_18;
        if (0 < (int)uVar2) {
          do {
            uVar3 = param_4;
            if ((-1 < param_5) && (iVar1 != param_5)) {
              uVar3 = 1;
            }
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(local_14,param_2,uVar3);
            iVar4 = 1;
            if (1 < (int)param_3) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_004f3e90(auStack_44);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(auStack_44,param_2,1);
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00(auStack_44,0);
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)param_3);
            }
            local_14 = local_14 + 0x24;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar2);
        }
        *param_1 = uVar2;
        return local_18;
      }
    }
    else {
      _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01cc4804 = 0x556;
      FUN_004c8440("IO error reading PBG (possibly corrupt file).");
LAB_004f4fd1:
      _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01cc4804 = 0x557;
      FUN_004c8440("Corrupt data detected reading PBG.");
    }
    _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01cc4804 = 0x558;
    FUN_004c8440("Out of memory reading PBG");
  } while( true );
}
