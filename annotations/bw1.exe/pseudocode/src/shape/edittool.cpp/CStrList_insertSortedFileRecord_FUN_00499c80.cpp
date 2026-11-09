// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00499c80
// Address: 00499c80
// Address Range: [[00499c80, 00499ec7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00499c80(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00499c80(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

{
  char cVar1;
  int index;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  char *format;
  char local_b04 [512];
  char local_904 [512];
  char local_704 [260];
  char local_600 [260];
  char local_4fc [256];
  char local_3fc;
  byte local_3fb [255];
  char local_2fc [256];
  char local_1fc [256];
  char local_fc [200];
  byte local_34 [32];
  int local_14;
  
  bVar8 = 0;
  iVar6 = *(int *)this_ptr + -1;
  local_14 = 0;
  if (-1 < iVar6) {
    do {
      index = (local_14 + iVar6) / 2;
      puVar7 = &DAT_0061aee8;
      pcVar2 = local_904;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar2 = *puVar7;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar8 * -2 + 1) * 4;
      }
      format = "%[^\t]\t%[^\t]";
      puVar7 = &DAT_0061b0e8;
      pcVar2 = local_b04;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar2 = *puVar7;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        pcVar2 = (char *)((int)pcVar2 + ((uint)bVar8 * -2 + 1) * 4);
      }
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(this_ptr,index);
      sscanf(pcVar2,format);
      engine_dosio_cpp_FUN_004795b0(local_600,(char *)0x0,(char *)0x0,local_904,local_b04);
      iVar4 = _stricmp(search_key,local_600);
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 < 0) {
        iVar6 = index + -1;
      }
      else {
        local_14 = index + 1;
      }
    } while (local_14 <= iVar6);
  }
  uVar3 = _localtime(&file_timestamp);
  _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",uVar3);
  puVar7 = &DAT_0061b2e8;
  pcVar2 = local_704;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(uint *)pcVar2 = *puVar7;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    pcVar2 = pcVar2 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if (file_path != (char *)0x0) {
    engine_dosio_cpp_FUN_00479580(file_path,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
    engine_dosio_cpp_FUN_004795b0(local_704,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
  }
  engine_dosio_cpp_FUN_00479580(search_key,(char *)0x0,(char *)0x0,local_2fc,&local_3fc);
  if (local_3fc == '.') {
    uVar5 = 0xffffffff;
    pcVar2 = &local_3fc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_3fc,local_3fb,~uVar5 - 1);
  }
  FUN_005bfb40
            (local_fc,"%s\t%s\t%d\t%s\t%s",local_2fc,&local_3fc,file_size,local_34,local_704);
  strupr(local_fc);
  (**(code **)(*(int *)&this_ptr->field_0xc + 0xc))(this_ptr,local_14,local_fc);
  return;
}
