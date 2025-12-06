// Name: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
// Address: 004b2a60
// Address Range: [[004b2a60, 004b2cf8]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, FILE * * file)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList *this_ptr,FILE **file)

{
  char cVar1;
  uint dest;
  int iVar2;
  byte *puVar3;
  char *pcVar4;
  uint uVar5;
  SIZE_T SVar6;
  BADSPACEBASE *in_ESP;
  FILE *pFVar7;
  byte bVar8;
  int in_stack_0000000c;
  CCheckOutList *in_stack_00000010;
  CCheckOutList *in_stack_00000014;
  char *format;
  FILE aFStack_168 [9];
  byte auStack_6c [7];
  char acStack_65 [2];
  FILE aFStack_63 [2];
  
  bVar8 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  iVar2 = crt_stdio_c_fseek_FUN_005ffacc(*file,0,0);
  if (iVar2 == 0) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(*file," ");
      format = &stack0xfffffe94;
      if (((*file)->_flag & 0x10) != 0) {
        return 1;
      }
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(*file,"%[^=]= %[^\n]\n");
      if (iVar2 != 2) {
        pFVar7 = *file;
        if (pFVar7 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\fileio.cpp",0xc4);
          *file = (FILE *)0x0;
          format = (char *)pFVar7;
        }
        aFStack_168[0]._ptr = "Checkout file is corrupt, or file I/O error.\nGet Fletch, this is a serious situation.";
        goto LAB_004b2acd;
      }
      uVar5 = 0xffffffff;
      pFVar7 = aFStack_168;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *(char *)pFVar7;
        pFVar7 = (FILE *)((int)pFVar7 + (uint)bVar8 * -2 + 1);
      } while (cVar1 != '\0');
      SVar6 = ~uVar5 - 1;
      if (0 < (int)SVar6) {
        puVar3 = &stack0xfffffe97 + ~uVar5;
        do {
          if ((g_CharacterClassificationTable[(byte)(puVar3[-1] + 1)] & 2U) == 0) break;
          SVar6 = SVar6 - 1;
          puVar3 = puVar3 + -1;
        } while (0 < (int)SVar6);
      }
      *(byte *)((int)&aFStack_168[0]._ptr + SVar6) = 0;
      while ((g_CharacterClassificationTable[(byte)((char)aFStack_168[0]._ptr + 1)] & 2U) != 0) {
        format = (char *)aFStack_168;
        crt_string_c_memmove_FUN_005fe5e0(aFStack_168,(void *)((int)&aFStack_168[0]._ptr + 1),SVar6)
        ;
        SVar6 = SVar6 - 1;
      }
      dest = (int)acStack_65 + 1;
      uVar5 = 0xffffffff;
      pcVar4 = (char *)((int)acStack_65 + 1);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      SVar6 = ~uVar5 - 1;
      if (0 < (int)SVar6) {
        pcVar4 = acStack_65 + ~uVar5;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2U) == 0) break;
          SVar6 = SVar6 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)SVar6);
      }
      *(byte *)(dest + SVar6) = 0;
      while ((g_CharacterClassificationTable[(byte)(acStack_65[1] + 1)] & 2U) != 0) {
        format = (char *)dest;
        crt_string_c_memmove_FUN_005fe5e0((void *)dest,(FILE *)(acStack_65 + 2),SVar6);
        SVar6 = SVar6 - 1;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                        (in_stack_00000014,(char *)aFStack_168);
      if (-1 < iVar2) {
        if (*file != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
          *file = (FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Multiple checkout detected for %s (users %s and %s).\nCheckout file probably corrupt.\nGet Fletch, this is a serious situation.",&stack0xfffffe90,
                   iVar2 * 0x168 + *(int *)(in_stack_0000000c + 4) + 0x104,auStack_6c);
        goto LAB_004b2ad5;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00
                        ((CCheckOutList *)file,(CCheckOutItem *)&stack0xfffffe90);
    } while (iVar2 != 0);
    if (*file != (FILE *)0x0) {
      format = (char *)0xc4;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
      *file = (FILE *)0x0;
    }
  }
  else {
    format = "File I/O error accessing checkout file.";
  }
LAB_004b2acd:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,format);
LAB_004b2ad5:
  if (*file != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
    *file = (FILE *)0x0;
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(in_stack_00000010);
  return 0;
}
