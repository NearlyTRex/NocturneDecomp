// Name: core_texlist.cpp_CTextureList_load_FUN_005690c0
// Address: 005690c0
// Address Range: [[005690c0, 0056937c]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_load_FUN_005690c0(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_texlist_cpp_CTextureList_load_FUN_005690c0(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_12c [256];
  _FILE *local_2c;
  int local_28;
  CTextureList *local_24;
  char *local_20;
  int local_1c;
  CTextureList *local_18;
  byte *local_14;
  
  bVar9 = 0;
  pcVar8 = local_12c;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    pcVar7 = local_12c;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar7 = local_12c;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar7;
    if (*pcVar7 == '.') goto LAB_00569110;
    if (*pcVar7 == '\0') break;
    pcVar8 = pcVar7 + 1;
    if (*pcVar8 == '.') goto LAB_00569110;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_00569110:
  if (pcVar8 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\texlist.cpp";
    _DAT_01d71de4 = 0x61;
    core_main_c_FUN_004e4330("CTextureList::load - No extension found");
  }
  pcVar7 = &DAT_005d5d66;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_2c = engine_dosio_cpp_FUN_004659c0(&DAT_005d5d6e,local_12c,&DAT_005d5d6b);
  if (local_2c == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\texlist.cpp";
    _DAT_01d71de4 = 0x6a;
    core_main_c_FUN_004e4330("CTextureList::load - Bad filename!");
  }
  _fscanf(local_2c,&DAT_005d5daa,this_ptr);
  local_1c = 0;
  if (this_ptr->texture_count < 1) {
LAB_0056931c:
    iVar2 = this_ptr->texture_count;
    if (iVar2 < 1000) {
      piVar4 = &this_ptr->texture_count + iVar2;
      do {
        iVar2 = iVar2 + 1;
        piVar4[0x1771] = 0;
        piVar4 = piVar4 + 1;
      } while (iVar2 < 1000);
    }
    _fclose(local_2c);
    return;
  }
  local_14 = &this_ptr->field_0x4;
  local_18 = this_ptr;
  local_28 = 0;
  local_20 = &this_ptr->field_0xc;
  local_24 = this_ptr;
LAB_005691d3:
  _fscanf(local_2c,&DAT_005d5dae,local_12c);
  pcVar8 = local_12c;
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == ',') goto LAB_00569207;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == ',') goto LAB_00569207;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00569207:
  if (pcVar7 == (char *)0x0) {
    *(uint *)&local_18->field_0x5dc4 = 0;
    pcVar8 = local_12c;
    pcVar7 = local_20;
  }
  else {
    *pcVar7 = '\0';
    iVar2 = atoi(pcVar7 + 1);
    *(int *)&local_18->field_0x5dc4 = iVar2;
    pcVar8 = local_12c;
    pcVar7 = local_20;
  }
  do {
    iVar2 = local_28;
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar7[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar6 = 0;
  *(uint *)&local_24->field_0x8 = 0;
  do {
    uVar5 = 0xffffffff;
    pcVar8 = local_14 + iVar2 + 8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar6) break;
    iVar3 = uVar6 + iVar2;
    uVar6 = uVar6 + 1;
    iVar3 = toupper((uint)(byte)(&this_ptr->field_0xc)[iVar3]);
    (&this_ptr->field_0xc)[uVar6 + iVar2 + -1] = (char)iVar3;
  } while( true );
  local_18 = (CTextureList *)&local_18->field_0x4;
  local_28 = local_28 + 0x18;
  local_24 = (CTextureList *)&local_24->field_0x18;
  local_20 = local_20 + 0x18;
  local_1c = local_1c + 1;
  if (this_ptr->texture_count <= local_1c) goto LAB_0056931c;
  goto LAB_005691d3;
}
