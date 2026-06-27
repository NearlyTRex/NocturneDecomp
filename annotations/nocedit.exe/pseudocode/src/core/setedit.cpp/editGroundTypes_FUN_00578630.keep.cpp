// Name: core_setedit.cpp_editGroundTypes_FUN_00578630
// Address: 00578630
// MANUAL RECONSTRUCTION
// Address Range: [[00578630, 005789f5]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_editGroundTypes_FUN_00578630(char *filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_editGroundTypes_FUN_00578630(char *filename)

{
  char *pcVar1;
  int iVar2;
  char *pcVar2;
  int iVar4;
  _FILE *file;
  int iVar3;
  int iVar5;
  EGroundType type;
  char (*pacVar4) [40];
  char (*pacVar6) [40];
  int selected_index;
  CPickList local_bdc;
  CPickList local_834;
  char local_48c [400];
  char local_2fc [400];
  char local_16c [256];
  char local_6c [100];
  
  g_GroundTextureCount = 0;
  core_setedit_cpp_loadGroundTypes_FUN_00578420(filename);
  if (g_GroundTextureCount < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No ground type entries in %s",filename);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_bdc);
  selected_index = 0;
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_bdc,1);
  do {
    while( true ) {
      iVar3 = 0;
      shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_bdc);
      if (0 < g_GroundTextureCount) {
        pacVar4 = g_GroundTextureNames;
        do {
          pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80
                             ((uint)(byte)g_GroundTextureTypes[iVar3]);
          _sprintf(local_2fc,"%s\t%s",(char *)pacVar4,pcVar1);
          iVar3 = iVar3 + 1;
          pacVar4 = pacVar4 + 1;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_bdc.base,local_2fc);
        } while (iVar3 < g_GroundTextureCount);
      }
      shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_bdc.base);
      selected_index = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_bdc,"Editing ground types, press ESC when done.",selected_index,0);
      if (-1 < selected_index) break;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_834);
      shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_834);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_834.base,"[Y]es, Accept changes and write changes to ground type file");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_834.base,"[N]o, Abort changes and don't save anything I've changed");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_834,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_834,1,0x31);
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_834,"Save changes?",-1,0);
      if (-1 < iVar5) {
        if (iVar5 == 0) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Saving %s...",filename);
          file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (filename,(char *)0x0,"wt","..\\core\\setedit.cpp",0x326);
          if (file == (_FILE *)0x0) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x327;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",filename);
          }
          iVar5 = 0;
          if (0 < g_GroundTextureCount) {
            pacVar6 = g_GroundTextureNames;
            do {
              pcVar2 = core_ground_cpp_getGroundTypeName_FUN_004eed80
                                 ((uint)(byte)g_GroundTextureTypes[iVar5]);
              iVar5 = iVar5 + 1;
              _fprintf(file,"%s, %s\n",(char *)pacVar6,pcVar2);
              pacVar6 = pacVar6 + 1;
            } while (iVar5 < g_GroundTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x32b);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_834,0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_bdc,0);
        return;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_834,0);
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_bdc.base,local_6c,selected_index,0);
    iVar5 = 0;
    engine_dosio_cpp_splitPath_FUN_00481f20(local_6c,(char *)0x0,(char *)0x0,local_16c,(char *)0x0);
    if (0 < g_GroundTextureCount) {
      pacVar6 = g_GroundTextureNames;
      do {
        iVar2 = _stricmp(*pacVar6,local_16c);
        if (iVar2 == 0) goto LAB_00578779;
        iVar5 = iVar5 + 1;
        pacVar6 = pacVar6 + 1;
      } while (iVar5 < g_GroundTextureCount);
    }
    iVar5 = -1;
LAB_00578779:
    if (iVar5 < 0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x332;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find ground texture in list!");
    }
    type = GROUND_TYPE_DEFAULT;
    shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_bdc);
    do {
      pcVar2 = core_ground_cpp_getGroundTypeName_FUN_004eed80(type);
      type = type + GROUND_TYPE_NONE;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_bdc.base,pcVar2);
    } while ((int)type < 0xe);
    _sprintf(local_48c,"Select ground type for %s",local_6c);
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_bdc,local_48c,(uint)(byte)g_GroundTextureTypes[iVar5],0);
    if (-1 < iVar4) {
      g_GroundTextureTypes[iVar5] = (char)iVar4;
    }
  } while( true );
}
