// Name: cockpit_pkbitmap.cpp_FUN_004f4f90
// Address: 004f4f90
// Address Range: [[004f4f90, 004f510b]]
// Convention: unknown
// Signature: CPackedBitmap * cockpit_pkbitmap_cpp_FUN_004f4f90(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

CPackedBitmap * cockpit_pkbitmap_cpp_FUN_004f4f90(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  SIZE_T SVar1;
  int iVar2;
  uint uVar3;
  void *array_memory;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint element_count;
  WatcomTypeInfo *type_info;
  CPackedBitmap CStack_44;
  byte local_20 [4];
  uint local_1c;
  CPackedBitmap *local_18;
  CPackedBitmap *local_14;
  
  bVar9 = 0;
  do {
    SVar1 = _fread(local_20,8,1,param_2);
    if (SVar1 == 1) {
      iVar4 = 4;
      bVar7 = false;
      iVar2 = 0;
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
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if ((iVar2 != 0) || (local_1c == 0)) goto LAB_004f4fd1;
      uVar3 = local_1c / param_3;
      type_info = &g_CPackedBitmapTypeInfo_005a1340;
      element_count = uVar3;
      array_memory = shape_memdbg_cpp_malloc_FUN_00564c18(uVar3 * 0x24 + 4);
      local_18 = (CPackedBitmap *)__vec_new(array_memory,element_count,type_info);
      if (local_18 != (CPackedBitmap *)0x0) {
        iVar2 = 0;
        local_14 = local_18;
        if (0 < (int)uVar3) {
          do {
            iVar4 = param_4;
            if ((-1 < param_5) && (iVar2 != param_5)) {
              iVar4 = 1;
            }
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(local_14,param_2,iVar4);
            iVar4 = 1;
            if (1 < param_6) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_004f3e90
                          ((CPackedBitmap *)&stack0xffffffb0);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
                          ((CPackedBitmap *)&stack0xffffffb0,param_2,1);
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00(&CStack_44,0);
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)param_3);
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)uVar3);
        }
        *param_1 = uVar3;
        return local_18;
      }
    }
    else {
      PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
      INT_01cc4804 = 0x556;
      core_main_c_FUN_004c8440();
LAB_004f4fd1:
      PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
      INT_01cc4804 = 0x557;
      core_main_c_FUN_004c8440();
    }
    PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    INT_01cc4804 = 0x558;
    core_main_c_FUN_004c8440();
  } while( true );
}
