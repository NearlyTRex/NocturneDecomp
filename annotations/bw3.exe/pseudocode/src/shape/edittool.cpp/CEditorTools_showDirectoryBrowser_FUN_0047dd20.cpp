// Name: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0047dd20
// Address: 0047dd20
// Address Range: [[0047dd20, 0047e465]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0047dd20(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0047dd20(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path,uint flags)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  _tm *time_ptr;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int string_index;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char *in_stack_0000001c;
  int in_stack_ffffe120;
  UStrListVTable aUStack_1ed4 [237];
  char acStack_1b20 [12];
  char acStack_1b14 [548];
  byte auStack_18f0 [256];
  byte bStack_17f0;
  time_t atStack_17e8 [3];
  char acStack_17dc [12];
  char acStack_17d0 [260];
  char acStack_16cc [248];
  char acStack_15d4 [260];
  char acStack_14d0 [12];
  char acStack_14c4 [248];
  char acStack_13cc [260];
  char acStack_12c8 [272];
  char acStack_11b8 [256];
  char acStack_10b8 [256];
  char acStack_fb8 [244];
  char acStack_ec4 [256];
  char acStack_dc4 [268];
  char acStack_cb8 [244];
  char acStack_bc4 [256];
  char acStack_ac4 [256];
  char acStack_9c4 [268];
  char acStack_8b8 [256];
  char acStack_7b8 [244];
  char cStack_6c4;
  byte auStack_6c3 [255];
  char acStack_5c4 [256];
  char cStack_4c4;
  byte auStack_4c3 [255];
  char acStack_3c4 [268];
  char acStack_2b8 [244];
  char acStack_1c4 [200];
  char acStack_fc [200];
  char acStack_34 [32];
  uint uStack_14;
  char acStack_c [4];
  
  bVar8 = 0;
  pcVar2 = _getcwd(acStack_14d0,0x104);
  if (pcVar2 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (this_ptr,"Error getting current directory.");
    return 0;
  }
  puVar6 = (uint *)0x5fb150;
  pcVar2 = acStack_12c8;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar2 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    pcVar2 = pcVar2 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((flags & 1) != 0) {
    engine_dosio_cpp_splitPath_FUN_00465e50
              (initial_path,acStack_c,acStack_bc4,acStack_ec4,acStack_3c4);
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_13cc,acStack_c,acStack_bc4,(char *)0x0,(char *)0x0);
    FUN_005a55b0(acStack_13cc);
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_12c8,(char *)0x0,(char *)0x0,acStack_ec4,acStack_3c4);
    FUN_005a55b0(acStack_12c8);
  }
  uStack_14 = 0;
LAB_0047dd7a:
  do {
    pcVar2 = "[ERROR: Can't get current directory.]";
    pcVar7 = acStack_17dc;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar7 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar8 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    _getcwd(acStack_17dc,0x104);
    _sprintf(acStack_1b20,(char *)0x5bcef2);
    shape_edittool_cpp_CPickList_ctor_FUN_004831c0((CPickList *)&stack0xffffe120);
    engine_dosio_cpp_CFileFinder_ctor_FUN_00465b60((CFileFinder *)auStack_18f0);
    if (search_pattern == (char *)0x0) {
      search_pattern = (char *)0x5bcef8;
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00465ba0((CFileFinder *)auStack_18f0,search_pattern)
    ;
    while (auStack_18f0[0] != '\0') {
      if ((bStack_17f0 & 4) == 0) {
        engine_dosio_cpp_splitPath_FUN_00465e50
                  (auStack_18f0,(char *)0x0,(char *)0x0,acStack_dc4,&cStack_4c4);
        if (cStack_4c4 == '.') {
          uVar5 = 0xffffffff;
          pcVar2 = &cStack_4c4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          memmove(&cStack_4c4,auStack_4c3,~uVar5 - 1);
        }
        time_ptr = _localtime(atStack_17e8);
        _strftime(acStack_34,0x1e,"\t%m/%d/%y %I:%M:%S %p",time_ptr);
        _sprintf(acStack_fc,(char *)0x5bcf12);
        strupr(acStack_fc);
        shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&stack0xffffe120,acStack_fc);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_00465c20((CFileFinder *)auStack_18f0);
    }
    shape_edittool_cpp_CStrList_sortAll_FUN_00482390((CStrList *)&stack0xffffe120);
    string_index = -1;
    iVar4 = in_stack_ffffe120;
    if (acStack_12c8[0] != '\0') {
      string_index = 0;
      if (0 < in_stack_ffffe120) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00482450
                    ((CStrList *)&stack0xffffe120,acStack_9c4,string_index,0);
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00482450
                    ((CStrList *)&stack0xffffe120,acStack_5c4,string_index,1);
          engine_dosio_cpp_makePath_FUN_00465e80
                    (acStack_15d4,(char *)0x0,(char *)0x0,acStack_9c4,acStack_5c4);
          iVar3 = _stricmp(acStack_15d4,acStack_12c8);
          if (iVar3 == 0) break;
          string_index = string_index + 1;
        } while (string_index < iVar4);
      }
      if (iVar4 <= string_index) {
        string_index = -1;
      }
      acStack_12c8[0] = '\0';
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00465ba0
              ((CFileFinder *)auStack_18f0,(char *)0x5bcf1d);
    while (auStack_18f0[0] != '\0') {
      if ((bStack_17f0 & 4) != 0) {
        iVar3 = _strcmp(auStack_18f0,(char *)0x5bcf21);
        if (iVar3 == 0) {
          pcVar2 = (char *)0x5bcf24;
        }
        else {
          iVar3 = _strcmp(auStack_18f0,(char *)0x5bcf2e);
          if (iVar3 == 0) goto LAB_0047df4e;
          engine_dosio_cpp_splitPath_FUN_00465e50
                    (auStack_18f0,(char *)0x0,(char *)0x0,acStack_ac4,&cStack_6c4);
          if (cStack_6c4 == '.') {
            uVar5 = 0xffffffff;
            pcVar2 = &cStack_6c4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
            } while (cVar1 != '\0');
            memmove(&cStack_6c4,auStack_6c3,~uVar5 - 1);
          }
          _sprintf(acStack_1c4,(char *)0x5bcf30);
          strupr(acStack_1c4);
          pcVar2 = acStack_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&stack0xffffe120,pcVar2);
      }
LAB_0047df4e:
      engine_dosio_cpp_CFileFinder_findNext_FUN_00465c20((CFileFinder *)auStack_18f0);
    }
    shape_edittool_cpp_CPickList_sort_FUN_00484f80
              ((CPickList *)&stack0xffffe120,in_stack_ffffe120,iVar4 + -1);
    shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)aUStack_1ed4,"(Change Path)");
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                      ((CPickList *)aUStack_1ed4,acStack_1b14,string_index,0);
    if (iVar4 < 0) goto LAB_0047e283;
    if ((int)((int)&aUStack_1ed4[0]._us[-1].clear + 3) <= iVar4) {
      puVar6 = (uint *)0x5fb360;
      pcVar2 = acStack_16cc;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar2 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar8 * -2 + 1) * 4;
      }
      while ((iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                                (this_ptr,"Enter new path",acStack_16cc,0x104,1),
             iVar4 != 0 && (iVar4 = FUN_005a55b0(acStack_16cc), iVar4 != 0))) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                  (this_ptr,"Can't change to %s");
        FUN_005a55b0(acStack_17d0);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80((CFileFinder *)(auStack_18f0 + 0xc),0);
      in_stack_ffffe120 = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0((CPickList *)aUStack_1ed4,0);
      goto LAB_0047dd7a;
    }
    if (iVar4 < in_stack_ffffe120) {
      engine_dosio_cpp_splitPath_FUN_00465e50
                (acStack_17d0,&stack0xfffffffc,acStack_7b8,acStack_cb8,acStack_2b8);
      engine_dosio_cpp_makePath_FUN_00465e80
                (acStack_8b8,(char *)0x0,acStack_7b8,acStack_cb8,acStack_2b8);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00482450
                ((CStrList *)aUStack_1ed4,acStack_cb8,iVar4,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00482450
                ((CStrList *)aUStack_1ed4,acStack_2b8,iVar4,1);
      engine_dosio_cpp_makePath_FUN_00465e80
                (in_stack_0000001c,&stack0xfffffffc,acStack_8b8,acStack_cb8,acStack_2b8);
      unaff_EBP = 1;
LAB_0047e283:
      engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80((CFileFinder *)(auStack_18f0 + 0xc),0);
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0((CPickList *)aUStack_1ed4,0);
      FUN_005a55b0(acStack_14c4);
      return unaff_EBP;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00482450
              ((CStrList *)aUStack_1ed4,acStack_10b8,iVar4,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00482450
              ((CStrList *)aUStack_1ed4,acStack_11b8,iVar4,1);
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_fb8,(char *)0x0,(char *)0x0,acStack_10b8,acStack_11b8);
    FUN_005a55b0(acStack_fb8);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80((CFileFinder *)(auStack_18f0 + 0xc),0);
    in_stack_ffffe120 = 0;
    shape_edittool_cpp_CPickList_dtor_FUN_004832b0((CPickList *)aUStack_1ed4,0);
  } while( true );
}
