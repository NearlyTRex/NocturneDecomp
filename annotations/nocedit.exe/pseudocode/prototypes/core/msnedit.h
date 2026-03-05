#pragma once

// Function prototypes for core/msnedit.cpp
// Generated from Ghidra function signatures

// Original: core_msnedit.cpp_staticInit_FUN_00535c30
// Address: 00535c30
void __cdecl staticInit(void);

// Original: core_msnedit.cpp_screenToWorldPosition_FUN_00535c60
// Address: 00535c60
CVector3f * __cdecl screenToWorldPosition(CVector3f *out_world_pos,int screen_x,int screen_y);

// Original: core_msnedit.cpp_getOnOffString_FUN_00535df0
// Address: 00535df0
char * __cdecl getOnOffString(int value);

// Original: core_msnedit.cpp_drawPropertyRow_FUN_00535e10
// Address: 00535e10
void __cdecl drawPropertyRow(int *y_pos,char *label,char *value);

// Original: core_msnedit.cpp_showEditorHelpScreen_FUN_00535e70
// Address: 00535e70
void __cdecl showEditorHelpScreen(void);

// Original: core_msnedit.cpp_isWordSeparator_FUN_00536bc0
// Address: 00536bc0
int __cdecl isWordSeparator(int ch);

// Original: core_msnedit.cpp_tokenizeWords_FUN_00536bf0
// Address: 00536bf0
void __cdecl tokenizeWords(char *str,CStrList *word_list);

// Original: core_msnedit.cpp_drawClickableButton_FUN_00536cd0
// Address: 00536cd0
int __cdecl drawClickableButton(char *text,int x,int y,int consume_click,int highlighted);

// Original: core_msnedit.cpp_drawMotionBar_FUN_00536e20
// Address: 00536e20
void __cdecl drawMotionBar(void);

// Original: core_msnedit.cpp_convertAllMissionFiles_FUN_00537230
// Address: 00537230
void __cdecl convertAllMissionFiles(void);

// Original: core_msnedit.cpp_buildActorClassHierarchy_FUN_00537330
// Address: 00537330
void __cdecl buildActorClassHierarchy(CStrList *class_list,CDemonActor *parent_class,int indent_level);

// Original: core_msnedit.cpp_confirmNewActorName_FUN_00537410
// Address: 00537410
int __cdecl confirmNewActorName(char *name);

// Original: core_msnedit.cpp_setEditorLayoutMode_FUN_005374b0
// Address: 005374b0
void __cdecl setEditorLayoutMode(int layout_mode);

// Original: core_msnedit.cpp_CDemonMission_readIni_FUN_00537530
// Address: 00537530
void __cdecl CDemonMission::readIni(CDemonMission *this_ptr,CIniFile *ini_file);

// Original: core_msnedit.cpp_CDemonMission_writeIni_FUN_005375d0
// Address: 005375d0
void __cdecl CDemonMission::writeIni(CDemonMission *this_ptr,CIniFile *ini_file);

// Original: core_msnedit.cpp_CDemonMission_showOptionsMenu_FUN_00537680
// Address: 00537680
void __cdecl CDemonMission::showOptionsMenu(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0
// Address: 005379e0
void __cdecl CDemonMission::enemyRandomizer(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_copyFile_FUN_00537dd0
// Address: 00537dd0
void __cdecl copyFile(char *src_filename,char *dest_filename,char *directory);

// Original: core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60
// Address: 00537f60
void __cdecl CDemonMission::saveWithNewName(CDemonMission *this_ptr,char *name);

// Original: core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
// Address: 005381e0
void __cdecl CDemonMission::showEditorMenu(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0
// Address: 00538ba0
void __cdecl CDemonMission::playMission(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_addSet_FUN_00538d60
// Address: 00538d60
void __cdecl CDemonMission::addSet(CDemonMission *this_ptr,char *set_name);

// Original: core_msnedit.cpp_CDemonMission_removeSet_FUN_00538df0
// Address: 00538df0
void __cdecl CDemonMission::removeSet(CDemonMission *this_ptr,int param_2);

// Original: core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0
// Address: 00538ea0
void __cdecl CDemonMission::deleteActor(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_findSetByName_FUN_00538f40
// Address: 00538f40
int __cdecl CDemonMission::findSetByName(CDemonMission *this_ptr,char *set_name);

// Original: core_msnedit.cpp_CDemonMission_pickSet_FUN_00538f90
// Address: 00538f90
int __cdecl CDemonMission::pickSet(CDemonMission *this_ptr,char *title,int selected_index);

// Original: core_msnedit.cpp_CDemonMission_editActorProperties_FUN_00539060
// Address: 00539060
void __cdecl CDemonMission::editActorProperties(CDemonMission *this_ptr,int param_2);

// Original: core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0
// Address: 005390f0
int __cdecl CDemonMission::editActorsInSet(CDemonMission *this_ptr,int param_2);

// Original: core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50
// Address: 0053af50
void __cdecl CDemonMission::pasteActorProperty(CDemonMission *this_ptr,char *property);

// Original: core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030
// Address: 0053b030
void __cdecl CDemonMission::editActorAtIndex(CDemonMission *this_ptr,int param_2);

// Original: core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510
// Address: 0053b510
void __cdecl CDemonMission::editActorDetailed(CDemonMission *this_ptr,int param_2);

// Original: core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0
// Address: 0053b9f0
void __cdecl CDemonMission::importActorsFrom(CDemonMission *this_ptr,CDemonMission *other);

// Original: core_msnedit.cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80
// Address: 0053bc80
void __cdecl CDemonMission::deleteActorWithConfirm(CDemonMission *this_ptr,CDemonActor *actor,int skip_confirmation);

// Original: core_msnedit.cpp_CDemonMission_selectNearestActor_FUN_0053bcf0
// Address: 0053bcf0
void __cdecl CDemonMission::selectNearestActor(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_replicateActor_FUN_0053bd80
// Address: 0053bd80
void __cdecl CDemonMission::replicateActor(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_undoActorChanges_FUN_0053c0b0
// Address: 0053c0b0
void __cdecl CDemonMission::undoActorChanges(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140
// Address: 0053c140
void __cdecl CDemonMission::selectActor(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_pickActorByName_FUN_0053c210
// Address: 0053c210
char * __cdecl CDemonMission::pickActorByName(CDemonMission *this_ptr,char *title,char *current_name);

// Original: core_msnedit.cpp_CDemonMission_raycastPickActor_FUN_0053c340
// Address: 0053c340
CDemonActor * __cdecl CDemonMission::raycastPickActor(CDemonMission *this_ptr,int screen_x,int screen_y);

// Original: core_msnedit.cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0
// Address: 0053c4f0
void __cdecl CDemonMission::drawPropertyPanel(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730
// Address: 0053c730
void __cdecl CDemonMission::editActorPropertiesDialog(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_dropActorToGround_FUN_0053c8d0
// Address: 0053c8d0
void __cdecl CDemonMission::dropActorToGround(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930
// Address: 0053c930
void __cdecl CDemonMission::moveActorToViewportCenter(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970
// Address: 0053c970
void __cdecl CDemonMission::moveActorToScreenPos(CDemonMission *this_ptr,CDemonActor *actor,int screen_x,int screen_y);

// Original: core_msnedit.cpp_CDemonMission_moveActorToMousePos_FUN_0053ca00
// Address: 0053ca00
void __cdecl CDemonMission::moveActorToMousePos(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_findNextVisibleActor_FUN_0053ca30
// Address: 0053ca30
void __cdecl CDemonMission::findNextVisibleActor(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_findPrevVisibleActor_FUN_0053ca80
// Address: 0053ca80
void __cdecl CDemonMission::findPrevVisibleActor(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_msnedit.cpp_CDemonMission_pickActorDialog_FUN_0053cad0
// Address: 0053cad0
int __cdecl CDemonMission::pickActorDialog(CDemonMission *this_ptr,CDemonActor *class_type,char *title,CDemonActor **out_actor,int allow_none,char *class_name,CActorPropertyFilterFunc *filter_func,int preselect);

// Original: core_msnedit.cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30
// Address: 0053cc30
void __cdecl CDemonMission::buildFilteredActorList(CDemonMission *this_ptr,CStrList *name_list,CDemonActor *class_type,char *class_name ,CActorPropertyFilterFunc *filter_func);

// Original: core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0
// Address: 0053ccc0
void __cdecl CDemonMission::makeOptimizedPalette(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0
// Address: 0053ccf0
void __cdecl CDemonMission::importActors(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190
// Address: 0053d190
void __cdecl CDemonMission::saveMissionAndScript(CDemonMission *this_ptr,char *filename);

// Original: core_msnedit.cpp_CDemonMission_validateNewActorName_FUN_0053d220
// Address: 0053d220
int __cdecl CDemonMission::validateNewActorName(CDemonMission *this_ptr,char *orig_name,char *new_name);

// Original: core_msnedit.cpp_getEmptyString_FUN_0053d3a0
// Address: 0053d3a0
char * __cdecl getEmptyString(void);

// Original: core_msnedit.cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0
// Address: 0053d3b0
void __cdecl CDemonMission::showDifficultyStats(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0
// Address: 0053d7b0
void __cdecl CDemonMission::rebuildWaypointConnectivity(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_changeActorType_FUN_0053d8b0
// Address: 0053d8b0
void __cdecl CDemonMission::changeActorType(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0
// Address: 0053dcf0
void __cdecl CDemonMission::hideActorsMenu(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90
// Address: 0053df90
void __cdecl CDemonMission::deleteMultipleActorsMenu(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220
// Address: 0053e220
void __cdecl CDemonMission::editGore(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30
// Address: 0053ea30
void __cdecl CDemonMission::buildScriptCrossReferences(CDemonMission *this_ptr);

// Original: core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40
// Address: 0053eb40
void __cdecl CDemonMission::playSound(CDemonMission *this_ptr,char *filename);

// Original: core_msnedit.cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80
// Address: 0053ec80
void __cdecl CDemonMission::showSoundFilesInMission(CDemonMission *this_ptr);
