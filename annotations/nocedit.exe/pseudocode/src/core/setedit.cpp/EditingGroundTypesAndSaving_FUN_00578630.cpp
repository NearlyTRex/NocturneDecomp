// Name: core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
// Address: 00578630
// Address Range: [[00578630, 005789f5]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630(void)

{
  char *pcVar1;
  int iVar2;
  FILE *file;
  int iVar3;
  BADSPACEBASE *in_ESP;
  byte *puVar4;
  char *output_buffer;
  char *in_stack_00000004;
  CStrList_vtable *in_stack_fffff450;
  char **in_stack_fffff454;
  CStrList_vtable *in_stack_fffff458;
  char **in_stack_fffff45c;
  CStrList_vtable *in_stack_fffff460;
  uint in_stack_fffff464;
  uint in_stack_fffff468;
  uint in_stack_fffff46c;
  uint in_stack_fffff470;
  char **in_stack_fffff474;
  byte auStack_81c [8];
  byte auStack_814 [8];
  byte auStack_80c [8];
  byte auStack_804 [20];
  CPickList CStack_7f0;
  char acStack_2f4 [4];
  char acStack_2f0 [416];
  char acStack_150 [4];
  char acStack_14c [248];
  byte auStack_54 [4];
  char acStack_50 [72];
  
  DAT_03654368 = 0;
  core_setedit_cpp_ImportingGroundTextures_FUN_00578420();
  if (DAT_03654368 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No ground type entries in %s");
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff428);
  output_buffer = (char *)0x0;
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff42c,1);
  do {
    while( true ) {
      iVar3 = 0;
      shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffff430);
      if (0 < DAT_03654368) {
        puVar4 = &DAT_03654370;
        do {
          pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80
                             ((uint)(byte)(&DAT_03659190)[iVar3]);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2f4,"%s\t%s",puVar4,pcVar1);
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0x28;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff430,acStack_2f0);
        } while (iVar3 < DAT_03654368);
      }
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff434);
      output_buffer =
           (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             ((CPickList *)&stack0xfffff438,"Editing ground types, press ESC when done.",
                              (int)output_buffer,0);
      if (-1 < (int)output_buffer) break;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_81c);
      shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)(auStack_81c + 4));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_814,"[Y]es, Accept changes and write changes to ground type file");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_814 + 4),"[N]o, Abort changes and don't save anything I've changed");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)auStack_80c,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)(auStack_80c + 4),1,0x31)
      ;
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)auStack_804,"Save changes?",-1,0);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Saving %s...");
          file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (in_stack_00000004,(char *)0x0,"wt","..\\core\\setedit.cpp",
                            0x326);
          if (file == (FILE *)0x0) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x327;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
          }
          iVar3 = 0;
          if (0 < DAT_03654368) {
            do {
              core_ground_cpp_getGroundTypeName_FUN_004eed80((uint)(byte)(&DAT_03659190)[iVar3]);
              iVar3 = iVar3 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s, %s\n");
            } while (iVar3 < DAT_03654368);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x32b);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_7f0,0,(uint)in_stack_fffff460,in_stack_fffff464,in_stack_fffff468,
                   in_stack_fffff46c,in_stack_fffff470);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff46c,0,in_stack_fffff464,in_stack_fffff468,
                   in_stack_fffff46c,in_stack_fffff470,(uint)in_stack_fffff474);
        return;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_804 + 4),0,(uint)in_stack_fffff450,(uint)in_stack_fffff454,
                 (uint)in_stack_fffff458,(uint)in_stack_fffff45c,(uint)in_stack_fffff460);
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xfffff43c,(int)auStack_54,output_buffer,0);
    iVar3 = 0;
    engine_dosio_c_splitPath_FUN_00481f20
              (acStack_50,(char *)0x0,(char *)0x0,acStack_150,(char *)0x0);
    if (0 < DAT_03654368) {
      pcVar1 = &DAT_03654370;
      do {
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,acStack_14c);
        if (iVar2 == 0) goto LAB_00578779;
        iVar3 = iVar3 + 1;
        pcVar1 = pcVar1 + 0x28;
      } while (iVar3 < DAT_03654368);
    }
    iVar3 = -1;
LAB_00578779:
    if (iVar3 < 0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x332;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find ground texture in list!");
    }
    iVar2 = 0;
    shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffff444);
    do {
      pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar2);
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff44c,pcVar1);
    } while (iVar2 < 0xe);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_7f0.cancel_button.button_text + 0xb4,"Select ground type for %s");
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff454,CStack_7f0.cancel_button.button_text + 0xb8,
                       (uint)(byte)(&DAT_03659190)[iVar3],0);
    if (-1 < iVar2) {
      (&DAT_03659190)[iVar3] = (char)iVar2;
    }
  } while( true );
}
