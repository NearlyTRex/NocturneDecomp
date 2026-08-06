// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460
// Address: 00474460
// Address Range: [[00474460, 004746a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

{
  char cVar1;
  int index;
  char *str;
  _tm *time_ptr;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
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
  char local_34 [32];
  int local_14;
  
  bVar8 = 0;
  iVar4 = this_ptr->item_count + -1;
  local_14 = 0;
  if (-1 < iVar4) {
    do {
      index = (local_14 + iVar4) / 2;
      puVar5 = &DAT_005b7078;
      pcVar7 = local_904;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pcVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
      }
      pcVar7 = local_904;
      format = "%[^\t]\t%[^\t]";
      puVar5 = &DAT_005b7278;
      pcVar6 = local_b04;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pcVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        pcVar6 = (char *)((int)pcVar6 + ((uint)bVar8 * -2 + 1) * 4);
      }
      pcVar6 = local_b04;
      str = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,index);
      sscanf(str,format,pcVar7,pcVar6);
      makepath(local_600,(char *)0x0,(char *)0x0,local_904,local_b04);
      iVar2 = _stricmp(search_key,local_600);
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 < 0) {
        iVar4 = index + -1;
      }
      else {
        local_14 = index + 1;
      }
    } while (local_14 <= iVar4);
  }
  time_ptr = _localtime(&file_timestamp);
  _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
  puVar5 = &DAT_005b7478;
  pcVar7 = local_704;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if (file_path != (char *)0x0) {
    splitpath(file_path,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
    makepath(local_704,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
  }
  splitpath(search_key,(char *)0x0,(char *)0x0,local_2fc,&local_3fc);
  if (local_3fc == '.') {
    uVar3 = 0xffffffff;
    pcVar7 = &local_3fc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_3fc,local_3fb,~uVar3 - 1);
  }
  _sprintf(local_fc,"%s\t%s\t%d\t%s\t%s",local_2fc,&local_3fc,file_size,local_34,local_704);
  strupr(local_fc);
  (*((this_ptr->vtable)._us)->insert)(this_ptr,local_14,local_fc);
  return;
}
