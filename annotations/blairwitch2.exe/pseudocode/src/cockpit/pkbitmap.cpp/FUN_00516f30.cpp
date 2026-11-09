// Name: cockpit_pkbitmap.cpp_FUN_00516f30
// Address: 00516f30
// Address Range: [[00516f30, 0051712b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_FUN_00516f30(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_FUN_00516f30(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

{
  ulong size;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte abStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  cockpit_pkbitmap_cpp_FUN_00516200(this_ptr);
  do {
    iVar1 = _fread(abStack_2c,0x1c,1,file_handle);
    if (iVar1 != 1) goto LAB_00516fbe;
    iVar5 = 4;
    bVar8 = false;
    iVar1 = 0;
    bVar9 = true;
    pbVar6 = abStack_2c;
    pbVar7 = (byte *)0x61b3bc;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (uint)bVar10 * -2 + 1;
      pbVar7 = pbVar7 + (uint)bVar10 * -2 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar1 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (((iVar1 == 0) && (iStack_28 != 0)) && (iStack_24 != 0)) {
      *(int *)&this_ptr->field_0x18 = iStack_28;
      *(int *)&this_ptr->field_0x1c = iStack_24;
      if (((iStack_20 != 0) || (iStack_1c != 0)) ||
         ((*(int *)&this_ptr->field_0x18 + -1 != iStack_18 ||
          (*(int *)&this_ptr->field_0x1c + -1 != iStack_14)))) goto LAB_00516f7a;
      iVar1 = FUN_005b8df8((*(int *)&this_ptr->field_0x1c + 1) * 4);
      *(int *)&this_ptr->field_0x20 = iVar1;
      if (iVar1 != 0) {
        iVar1 = _fread(*(uint *)&this_ptr->field_0x20,
                           (*(int *)&this_ptr->field_0x1c + 1) * 4,1,file_handle);
        if (iVar1 == 1) {
          for (iVar1 = 0; iVar1 < *(int *)&this_ptr->field_0x1c + 1; iVar1 = iVar1 + 1) {
          }
          iVar1 = 0;
          if (0 < *(int *)&this_ptr->field_0x1c) {
            piVar2 = *(int **)&this_ptr->field_0x20;
            do {
              if (piVar2[1] < *piVar2) goto LAB_00516f7a;
              iVar1 = iVar1 + 1;
              piVar2 = piVar2 + 1;
            } while (iVar1 < *(int *)&this_ptr->field_0x1c);
          }
          size = *(ulong *)(*(int *)&this_ptr->field_0x20 + *(int *)&this_ptr->field_0x1c * 4);
          if (skip_data_load != 0) {
            _fseek(file_handle,size,1);
            return;
          }
          pvVar3 = FUN_005b8580(size);
          *(void **)&this_ptr->field_0x14 = pvVar3;
          if (pvVar3 == (void *)0x0) goto LAB_00516f9d;
          iVar1 = _fread(pvVar3,size,1,file_handle);
          if (iVar1 == 1) {
            for (uVar4 = **(int **)&this_ptr->field_0x20 + *(int *)&this_ptr->field_0x14;
                uVar4 < (uint)(*(int *)&this_ptr->field_0x14 +
                              (*(int **)&this_ptr->field_0x20)[*(int *)&this_ptr->field_0x1c]);
                uVar4 = (*(ushort *)(uVar4 + 2) + 3 & 0xfffffffc) + uVar4 + 4) {
            }
            return;
          }
        }
LAB_00516fbe:
        _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
        _DAT_01d046a4 = 0x4af;
        core_main_c_FUN_004e4500("IO error reading PBM (possibly corrupt file).");
        goto LAB_00516f7a;
      }
    }
    else {
LAB_00516f7a:
      _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d046a4 = 0x4b0;
      core_main_c_FUN_004e4500("Corrupt data detected reading PBM.");
    }
LAB_00516f9d:
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d046a4 = 0x4b1;
    core_main_c_FUN_004e4500("Out of memory reading PBM");
  } while( true );
}
