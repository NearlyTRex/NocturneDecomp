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
  char *pcVar2;
  _tm *time_ptr;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
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
  
  bVar7 = 0;
  iVar5 = this_ptr->item_count + -1;
  local_14 = 0;
  if (-1 < iVar5) {
    do {
      index = (local_14 + iVar5) / 2;
      puVar6 = &DAT_005b7078;
      pcVar2 = local_904;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar2 = *puVar6;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
      }
      format = "%[^\t]\t%[^\t]";
      puVar6 = &DAT_005b7278;
      pcVar2 = local_b04;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar2 = *puVar6;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        pcVar2 = (char *)((int)pcVar2 + ((uint)bVar7 * -2 + 1) * 4);
      }
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,index);
      sscanf(pcVar2,format);
      makepath(local_600,(char *)0x0,(char *)0x0,local_904,local_b04);
      iVar3 = _stricmp(search_key,local_600);
      if (iVar3 == 0) {
        return;
      }
      if (iVar3 < 0) {
        iVar5 = index + -1;
      }
      else {
        local_14 = index + 1;
      }
    } while (local_14 <= iVar5);
  }
  time_ptr = _localtime(&file_timestamp);
  _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
  puVar6 = &DAT_005b7478;
  pcVar2 = local_704;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pcVar2 = *puVar6;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if (file_path != (char *)0x0) {
    splitpath(file_path,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
    makepath(local_704,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
  }
  splitpath(search_key,(char *)0x0,(char *)0x0,local_2fc,&local_3fc);
  if (local_3fc == '.') {
    uVar4 = 0xffffffff;
    pcVar2 = &local_3fc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_3fc,local_3fb,~uVar4 - 1);
  }
  _sprintf(local_fc,"%s\t%s\t%d\t%s\t%s",local_2fc,&local_3fc,file_size,local_34,local_704);
  strupr(local_fc);
  (*this_ptr->vtable->insert)(this_ptr,local_14,local_fc);
  return;
}
