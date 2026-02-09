// Name: core_setedit.cpp_FUN_00578630
// Address: 00578630
// Address Range: [[00578630, 005789f5]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_00578630(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_00578630(void)

{
  char *pcVar1;
  int iVar2;
  _FILE *file;
  int iVar3;
  byte *puVar4;
  char *pcVar5;
  char *in_stack_00000004;
  CPickList local_bdc;
  CPickList local_834;
  char local_48c [400];
  char local_2fc [400];
  char local_16c [256];
  char local_6c [100];
  
  DAT_03654368 = 0;
  core_setedit_cpp_FUN_00578420();
  if (DAT_03654368 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No ground type entries in %s");
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_bdc);
  pcVar5 = (char *)0x0;
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_bdc,1);
  do {
    while( true ) {
      iVar3 = 0;
      shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_bdc);
      if (0 < DAT_03654368) {
        puVar4 = &DAT_03654370;
        do {
          pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80
                             ((uint)(byte)(&DAT_03659190)[iVar3]);
          _sprintf(local_2fc,"%s\t%s",puVar4,pcVar1);
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0x28;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_bdc.base,local_2fc);
        } while (iVar3 < DAT_03654368);
      }
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_bdc.base);
      pcVar5 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_bdc,"Editing ground types, press ESC when done.",(int)pcVar5,0);
      if (-1 < (int)pcVar5) break;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_834);
      shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_834);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_834.base,"[Y]es, Accept changes and write changes to ground type file");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_834.base,"[N]o, Abort changes and don't save anything I've changed");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_834,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_834,1,0x31);
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_834,"Save changes?",-1,0);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Saving %s...");
          file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (in_stack_00000004,(char *)0x0,"wt","..\\core\\setedit.cpp",
                            0x326);
          if (file == (_FILE *)0x0) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x327;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
          }
          iVar3 = 0;
          if (0 < DAT_03654368) {
            puVar4 = &DAT_03654370;
            do {
              pcVar5 = core_ground_cpp_getGroundTypeName_FUN_004eed80
                                 ((uint)(byte)(&DAT_03659190)[iVar3]);
              iVar3 = iVar3 + 1;
              _fprintf(file,"%s, %s\n",puVar4,pcVar5);
              puVar4 = puVar4 + 0x28;
            } while (iVar3 < DAT_03654368);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x32b);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_834,0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_bdc,0);
        return;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_834,0);
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_bdc.base,(int)local_6c,pcVar5,0);
    iVar3 = 0;
    engine_dosio_c_splitPath_FUN_00481f20(local_6c,(char *)0x0,(char *)0x0,local_16c,(char *)0x0);
    if (0 < DAT_03654368) {
      pcVar1 = &DAT_03654370;
      do {
        iVar2 = stricmp(pcVar1,local_16c);
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
    shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_bdc);
    do {
      pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar2);
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_bdc.base,pcVar1);
    } while (iVar2 < 0xe);
    _sprintf(local_48c,"Select ground type for %s",local_6c);
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_bdc,local_48c,(uint)(byte)(&DAT_03659190)[iVar3],0);
    if (-1 < iVar2) {
      (&DAT_03659190)[iVar3] = (char)iVar2;
    }
  } while( true );
}
