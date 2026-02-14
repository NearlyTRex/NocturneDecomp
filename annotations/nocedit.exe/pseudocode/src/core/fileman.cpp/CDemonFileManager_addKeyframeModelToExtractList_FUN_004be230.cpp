// Name: core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
// Address: 004be230
// Address Range: [[004be230, 004be261]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230(CDemonFileManager *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230(CDemonFileManager *this_ptr,char *filename)

{
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...");
  core_dmodel_cpp_writeModelDependencies_FUN_0047ee30((this_ptr->base).file_ptr,filename);
  return;
}
