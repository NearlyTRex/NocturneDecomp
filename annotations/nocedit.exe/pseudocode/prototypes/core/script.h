#pragma once

// Function prototypes for core/script.cpp
// Generated from Ghidra function signatures

// Original: core_script.cpp_staticInit_FUN_005591b0
// Address: 005591b0
void __cdecl staticInit(void);

// Original: core_script.cpp_validateActorVariableName_FUN_00559220
// Address: 00559220
int __cdecl validateActorVariableName(char *variable_name);

// Original: core_script.cpp_trimLine_FUN_005592c0
// Address: 005592c0
void __cdecl trimLine(char *input_line,char *output_buffer);

// Original: core_script.cpp_trimString_FUN_00559360
// Address: 00559360
void __cdecl trimString(char *str);

// Original: core_script.cpp_skipWhitespace_FUN_005593d0
// Address: 005593d0
char * __cdecl skipWhitespace(char *str);

// Original: core_script.cpp_parseArgument_FUN_005593f0
// Address: 005593f0
char * __cdecl parseArgument(char **cursor,char *out_buffer,int max_length);

// Original: core_script.cpp_parseConditionExpr_FUN_005594a0
// Address: 005594a0
char * __cdecl parseConditionExpr(char **cursor,char *out_buffer);

// Original: core_script.cpp_getActor_FUN_005594e0
// Address: 005594e0
CDemonActor * __cdecl getActor(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class);

// Original: core_script.cpp_getActionKeyOffset_FUN_00559660
// Address: 00559660
int * __cdecl getActionKeyOffset(SActionKeyBindings *action_bindings,char *action_name);

// Original: core_script.cpp_parseBodyPartMask_FUN_00559730
// Address: 00559730
int __cdecl parseBodyPartMask(CCharacter *character,char *part_names,int *part_mask);

// Original: core_script.cpp_CScript_ctor_FUN_005597f0
// Address: 005597f0
CScript * __cdecl CScript::ctor(CScript *this_ptr);

// Original: core_script.cpp_CScript_dtor_FUN_00559840
// Address: 00559840
CScript * __cdecl CScript::dtor(CScript *this_ptr,uint flags);

// Original: core_script.cpp_CScript_clear_FUN_00559870
// Address: 00559870
void __cdecl CScript::clear(CScript *this_ptr);

// Original: core_script.cpp_CScript_freeParsedLines_FUN_005598f0
// Address: 005598f0
void __cdecl CScript::freeParsedLines(CScript *this_ptr);

// Original: core_script.cpp_CScript_process_FUN_00559960
// Address: 00559960
void __cdecl CScript::process(CScript *this_ptr);

// Original: core_script.cpp_CScript_getLetterboxHeight_FUN_00559ac0
// Address: 00559ac0
int __cdecl CScript::getLetterboxHeight(CScript *this_ptr);

// Original: core_script.cpp_CScript_renderSubtitles_FUN_00559b20
// Address: 00559b20
void __cdecl CScript::renderSubtitles(CScript *this_ptr);

// Original: core_script.cpp_CScript_renderEditor_FUN_00559d80
// Address: 00559d80
void __cdecl CScript::renderEditor(CScript *this_ptr,int left,int top,int right,int bottom);

// Original: core_script.cpp_CScript_loadScript_FUN_00559f80
// Address: 00559f80
int __cdecl CScript::loadScript(CScript *this_ptr,char *filename,int skip_validation);

// Original: core_script.cpp_CScript_buildParsedLines_FUN_0055a370
// Address: 0055a370
void __cdecl CScript::buildParsedLines(CScript *this_ptr);

// Original: core_script.cpp_CScript_validateSyntax_FUN_0055a4b0
// Address: 0055a4b0
int * __cdecl CScript::validateSyntax(CScript *this_ptr,int *error_line_out);

// Original: core_script.cpp_CScript_initRuntime_FUN_0055a540
// Address: 0055a540
void __cdecl CScript::initRuntime(CScript *this_ptr);

// Original: core_script.cpp_CScript_executeInitSection_FUN_0055a6c0
// Address: 0055a6c0
void __cdecl CScript::executeInitSection(CScript *this_ptr);

// Original: core_script.cpp_CScript_step_FUN_0055a810
// Address: 0055a810
int __cdecl CScript::step(CScript *this_ptr,float *time_remaining);

// Original: core_script.cpp_CScript_getDialogDuration_FUN_0055ff00
// Address: 0055ff00
float __cdecl CScript::getDialogDuration(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text);

// Original: core_script.cpp_CScript_processTimer_FUN_005600c0
// Address: 005600c0
int __cdecl CScript::processTimer(CScript *this_ptr,float delta_time,float *timer_value);

// Original: core_script.cpp_CScript_setSpeaker_FUN_00560140
// Address: 00560140
void __cdecl CScript::setSpeaker(CScript *this_ptr,CDemonActor *actor);

// Original: core_script.cpp_CScript_findLabelIndex_FUN_00560160
// Address: 00560160
int __cdecl CScript::findLabelIndex(CScript *this_ptr,char *label_name);

// Original: core_script.cpp_CScript_skipCommands_FUN_005601c0
// Address: 005601c0
int __cdecl CScript::skipCommands(CScript *this_ptr,int direction,int count);

// Original: core_script.cpp_CScript_resetDialogState_FUN_005602b0
// Address: 005602b0
void __cdecl CScript::resetDialogState(CScript *this_ptr);

// Original: core_script.cpp_CScript_skipCinematic_FUN_005602e0
// Address: 005602e0
int __cdecl CScript::skipCinematic(CScript *this_ptr);

// Original: core_script.cpp_CScript_dbLoad_FUN_005603c0
// Address: 005603c0
void __cdecl CScript::dbLoad(CScript *this_ptr,char *filename);

// Original: core_script.cpp_CScript_findDialogEntry_FUN_005606e0
// Address: 005606e0
int __cdecl CScript::findDialogEntry(CScript *this_ptr,char *path);

// Original: core_script.cpp_readActorReference_FUN_00560760
// Address: 00560760
void __cdecl readActorReference(_FILE *file_handle,CDemonActor *actor_out);

// Original: core_script.cpp_writeActorReference_FUN_005607e0
// Address: 005607e0
void __cdecl writeActorReference(_FILE *file_handle,CDemonActor **actor);

// Original: core_script.cpp_CScript_loadState_FUN_00560820
// Address: 00560820
int __cdecl CScript::loadState(CScript *this_ptr,_FILE *file_handle);

// Original: core_script.cpp_CScript_saveState_FUN_00560b50
// Address: 00560b50
void __cdecl CScript::saveState(CScript *this_ptr,_FILE *file_handle);

// Original: core_script.cpp_CScript_computeChecksum_FUN_00560d80
// Address: 00560d80
uint __cdecl CScript::computeChecksum(CScript *this_ptr);

// Original: core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
// Address: 00560de0
int __cdecl CCmdParm::setTemplateText(CCmdParm *this_ptr,char *template_text,int *parse_cursor);

// Original: core_script.cpp_parseCommandWithTemplates_FUN_00561690
// Address: 00561690
int __cdecl parseCommandWithTemplates(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count);

// Original: core_script.cpp_parseConditionExpression_FUN_00561a30
// Address: 00561a30
int __cdecl parseConditionExpression(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out);

// Original: core_script.cpp_parseCommandWithDefaultTemplates_FUN_00561c70
// Address: 00561c70
int __cdecl parseCommandWithDefaultTemplates(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out);

// Original: core_script.cpp_CCmdParm_parseValue_FUN_00561cb0
// Address: 00561cb0
int __cdecl CCmdParm::parseValue(CCmdParm *this_ptr,char *input_text,int *cursor,int end_position);

// Original: core_script.cpp_CCmdParse_bestParse_FUN_00561db0
// Address: 00561db0
int __cdecl CCmdParse::bestParse(CCmdParse *this_ptr,char *input_text,int cursor_position,char **templates,int template_count);

// Original: core_script.cpp_CCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
int __cdecl CCmdParse::parse(CCmdParse *this_ptr,char *input_text,char *template_text);

// Original: core_script.cpp_CCmdParse_toString_FUN_005624f0
// Address: 005624f0
void __cdecl CCmdParse::toString(CCmdParse *this_ptr,char *output_buffer);

// Original: core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620
// Address: 00562620
int __cdecl CCmdParse::getParamIndexAtCursor(CCmdParse *this_ptr,int cursor_position);

// Original: core_script.cpp_CCmdParse_getParamTextLength_FUN_005626d0
// Address: 005626d0
int __cdecl CCmdParse::getParamTextLength(CCmdParse *this_ptr,int param_count);

// Original: core_script.cpp_CCmdParse_getParamTextLengthAt_FUN_00562760
// Address: 00562760
int __cdecl CCmdParse::getParamTextLengthAt(CCmdParse *this_pointer,int param_index);

// Original: core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0
// Address: 005627f0
CCharacter * __cdecl CCmdParse::getCharacterByParamIndex(CCmdParse *this_ptr,int param_index);

// Original: core_script.cpp_CCmdParse_getMotionListByParamIndex_FUN_00562860
// Address: 00562860
CMotionList * __cdecl CCmdParse::getMotionListByParamIndex(CCmdParse *this_ptr,int param_index);

// Original: core_script.cpp_editParameterValue_FUN_00562920
// Address: 00562920
int __cdecl editParameterValue(char *value_buffer,int param_type,CCmdParm *param_info,char *param_name);

// Original: core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090
// Address: 00564090
void __cdecl CCmdParse::applyActorParameters(CCmdParse *this_ptr,CDemonActor *actor);

// Original: core_script.cpp_expandTemplateText_FUN_005643d0
// Address: 005643d0
void __cdecl expandTemplateText(char *buffer,char *template_text);

// Original: core_script.cpp_clearSelections_FUN_005644e0
// Address: 005644e0
void __cdecl clearSelections(void);

// Original: core_script.cpp_updateSelection_FUN_00564500
// Address: 00564500
void __cdecl updateSelection(void);

// Original: core_script.cpp_getSelectionRangeForLine_FUN_00564560
// Address: 00564560
void __cdecl getSelectionRangeForLine(int line,int *sel_start_col_out,int *sel_end_col_out);

// Original: core_script.cpp_CScript_drawEditor_FUN_005645d0
// Address: 005645d0
void __cdecl CScript::drawEditor(CScript *this_ptr);

// Original: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
void __cdecl CScript::editorAction(CScript *this_ptr,EEditorActionType action_type,int action_parm);

// Original: core_script.cpp_CScript_processEditorInput_FUN_00565130
// Address: 00565130
void __cdecl CScript::processEditorInput(CScript *this_ptr);

// Original: core_script.cpp_CScript_gotoPosition_FUN_00565aa0
// Address: 00565aa0
void __cdecl CScript::gotoPosition(CScript *this_ptr,int column,int line);

// Original: core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0
// Address: 00565ae0
void __cdecl CScript::editParameterAtPosition(CScript *this_ptr,int column,int line);

// Original: core_script.cpp_CScript_executeContextAction_FUN_00565d00
// Address: 00565d00
void __cdecl CScript::executeContextAction(CScript *this_ptr,int column,int line);

// Original: core_script.cpp_CScript_showSyntaxHelp_FUN_00565e70
// Address: 00565e70
void __cdecl CScript::showSyntaxHelp(CScript *this_ptr,int column,int line);

// Original: core_script.cpp_CScript_setParameterValue_FUN_00565f70
// Address: 00565f70
void __cdecl CScript::setParameterValue(CScript *this_ptr,char *value);

// Original: core_script.cpp_CScript_checkSyntax_FUN_00566080
// Address: 00566080
void __cdecl CScript::checkSyntax(CScript *this_ptr);

// Original: core_script.cpp_CScript_saveToFile_FUN_00566180
// Address: 00566180
void __cdecl CScript::saveToFile(CScript *this_ptr,char *filename);

// Original: core_script.cpp_CScript_loadLineToBuffer_FUN_00566230
// Address: 00566230
void __cdecl CScript::loadLineToBuffer(CScript *this_ptr,int line_number);

// Original: core_script.cpp_CScript_editorPutLine_FUN_005662a0
// Address: 005662a0
void __cdecl CScript::editorPutLine(CScript *this_ptr,int line_number);

// Original: core_script.cpp_CScript_splitLineAtColumn_FUN_00566330
// Address: 00566330
void __cdecl CScript::splitLineAtColumn(CScript *this_ptr,int column,int line);

// Original: core_script.cpp_CScript_insertText_FUN_00566390
// Address: 00566390
void __cdecl CScript::insertText(CScript *this_ptr,char *text,int update_cursor);

// Original: core_script.cpp_CScript_drawLine_FUN_005664d0
// Address: 005664d0
void __cdecl CScript::drawLine(CScript *this_ptr,int line_number);

// Original: core_script.cpp_CScript_initEditorLayout_FUN_00566660
// Address: 00566660
void __cdecl CScript::initEditorLayout(CScript *this_ptr,int x,int y,int width,int height);

// Original: core_script.cpp_CScript_updateLineMetrics_FUN_00566800
// Address: 00566800
void __cdecl CScript::updateLineMetrics(CScript *this_ptr,int line_number);

// Original: core_script.cpp_CScript_clampCursorToView_FUN_00566880
// Address: 00566880
void __cdecl CScript::clampCursorToView(CScript *this_ptr);

// Original: core_script.cpp_CScript_updateCursorBounds_FUN_00566910
// Address: 00566910
void __cdecl CScript::updateCursorBounds(CScript *this_ptr);

// Original: core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
// Address: 005669a0
void __cdecl CScript::updateScrollPosition(CScript *this_ptr);

// Original: core_script.cpp_CScript_editorX2Index_FUN_00566a90
// Address: 00566a90
int __cdecl CScript::editorX2Index(CScript *this_ptr,int line_number,int visual_column);

// Original: core_script.cpp_CScript_editorIndex2X_FUN_00566b30
// Address: 00566b30
uint __cdecl CScript::editorIndex2X(CScript *this_ptr,int line_number,uint buffer_index);

// Original: core_script.cpp_CScript_updateMouseCursor_FUN_00566bc0
// Address: 00566bc0
void __cdecl CScript::updateMouseCursor(CScript *this_ptr);

// Original: core_script.cpp_CScript_screenToScriptPosition_FUN_00566c20
// Address: 00566c20
int __cdecl CScript::screenToScriptPosition(CScript *this_ptr,int pixel_x,int pixel_y,int *column_out,int *line_out);

// Original: core_script.cpp_CScript_findText_FUN_00566cc0
// Address: 00566cc0
int __cdecl CScript::findText(CScript *this_ptr,char *search_str,int start_col,int start_line,uint *found_col,int *found_line,uint *found_end_col,int direction);

// Original: core_script.cpp_CScript_collectLabels_FUN_00566fa0
// Address: 00566fa0
void __cdecl CScript::collectLabels(CScript *this_ptr,CStrList *labels_out);

// Original: core_script.cpp_CScript_parseCommandList_FUN_00567010
// Address: 00567010
void __cdecl CScript::parseCommandList(CScript *this_ptr,char *commands,SScriptXRef *xref_data);

// Original: core_script.cpp_CScript_parseCommand_FUN_00567080
// Address: 00567080
void __cdecl CScript::parseCommand(CScript *this_ptr,char *text,SScriptXRef *xref_data);

// Original: core_script.cpp_CScript_extractCrossReferences_FUN_005671a0
// Address: 005671a0
void __cdecl CScript::extractCrossReferences(CScript *this_ptr,char *text,SScriptXRef *xref_data);

// Original: core_script.cpp_CScript_tokenizeAtCursor_FUN_00567310
// Address: 00567310
int __cdecl CScript::tokenizeAtCursor(CScript *this_ptr,char *input_text,CStrList *tokens_out,int *cursor_pos);

// Original: core_script.cpp_CScript_parseActionTemplate_FUN_00567490
// Address: 00567490
void __cdecl CScript::parseActionTemplate(CScript *this_ptr,char *text,SScriptXRef *xref_data);

// Original: core_script.cpp_CScript_addEventXRef_FUN_00567510
// Address: 00567510
void __cdecl CScript::addEventXRef(CScript *this_ptr,SScriptXRef *xref_data);

// Original: core_script.cpp_compareEventXRefs_FUN_005675a0
// Address: 005675a0
int __cdecl compareEventXRefs(SScriptXRef *a,SScriptXRef *b);

// Original: core_script.cpp_CScript_rebuildEventXRefs_FUN_00567630
// Address: 00567630
void __cdecl CScript::rebuildEventXRefs(CScript *this_ptr);

// Original: core_script.cpp_CScript_removeEventXRef_FUN_005676e0
// Address: 005676e0
void __cdecl CScript::removeEventXRef(CScript *this_ptr,int index);

// Original: core_script.cpp_CScript_browseEventXRefs_FUN_005677a0
// Address: 005677a0
int __cdecl CScript::browseEventXRefs(CScript *this_ptr,char *dialog_title,char *selected_name);

// Original: core_script.cpp_CScript_collectSoundReferences_FUN_00567bc0
// Address: 00567bc0
void __cdecl CScript::collectSoundReferences(CScript *this_ptr,CStrList *sounds_out);

// Original: core_script.cpp_makeVector_FUN_00567d00
// Address: 00567d00
CVector3f * __cdecl makeVector(CVector3f *out,float x,float y,float z);

// Original: core_script.cpp_getDeformableModelFilename_FUN_00567d30
// Address: 00567d30
char * __cdecl getDeformableModelFilename(CDeformableModel *model_ptr);
