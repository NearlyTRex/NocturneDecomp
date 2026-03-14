// Name: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
// Address: 004b2a60
// Address Range: [[004b2a60, 004b2cf8]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList *this_ptr,_FILE **file)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList *this_ptr,_FILE **file)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar3;
  SIZE_T SVar4;
  uint uVar5;
  SIZE_T n;
  CCheckOutItem *pCVar5;
  byte bVar6;
  CCheckOutItem local_178;
  char *pcVar7;
  char cVar1;
  
  bVar6 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  iVar2 = _fseek(*file,0,0);
  if (iVar2 == 0) {
    do {
      _fscanf(*file," ");
      if (((*file)->_flag & 0x10) != 0) {
        return 1;
      }
      iVar3 = _fscanf(*file,"%[^=]= %[^\n]\n",&local_178,local_178.value);
      if (iVar3 != 2) {
        if (*file != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
          *file = (_FILE *)0x0;
        }
        pcVar7 = "Checkout file is corrupt, or file I/O error.\nGet Fletch, this is a serious situation.";
        goto LAB_004b2acd;
      }
      uVar3 = 0xffffffff;
      pCVar5 = &local_178;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pCVar5 = (CCheckOutItem *)((int)pCVar5 + (uint)bVar6 * -2 + 1);
        cVar1 = pCVar5->name[0];
        pCVar5 = pCVar5;
      } while (cVar1 != '\0');
      SVar4 = ~uVar3 - 1;
      if (0 < (int)SVar4) {
        pcVar4 = local_178.name + (~uVar3 - 1);
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
          SVar4 = SVar4 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)SVar4);
      }
      local_178.name[SVar4] = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_178.name[0] + 1)] & 2) != 0) {
        memmove(&local_178,local_178.name + 1,SVar4);
        SVar4 = SVar4 - 1;
      }
      uVar5 = 0xffffffff;
      pcVar4 = local_178.value;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
      } while (cVar2 != '\0');
      n = ~uVar5 - 1;
      if (0 < (int)n) {
        pcVar4 = local_178.name + ~uVar5 + 0x103;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
          n = n - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)n);
      }
      local_178.value[n] = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_178.value[0] + 1)] & 2) != 0) {
        memmove(local_178.value,local_178.value + 1,n);
        n = n - 1;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(this_ptr,local_178.name);
      if (-1 < iVar3) {
        if (*file != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
          *file = (_FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Multiple checkout detected for %s (users %s and %s).\nCheckout file probably corrupt.\nGet Fletch, this is a serious situation.",&local_178,
                   this_ptr->items[iVar3].value,local_178.value);
        goto LAB_004b2ad5;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(this_ptr,&local_178);
    } while (iVar3 != 0);
    if (*file != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
      *file = (_FILE *)0x0;
    }
    pcVar7 = "Out of memory reading checkout file...Restart the application NOW.\nBetter yet, reboot the computer.";
  }
  else {
    pcVar7 = "File I/O error accessing checkout file.";
  }
LAB_004b2acd:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
LAB_004b2ad5:
  if (*file != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
    *file = (_FILE *)0x0;
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  return 0;
}
