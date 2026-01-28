#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CSentinel.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SInputFace.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x560000
// =============================================================================

undefined4 core_script_cpp_CScript_processTimer_FUN_005600c0(void);
void core_script_cpp_FUN_00560140(void);
int core_script_cpp_FUN_00560160(void);
int core_script_cpp_FUN_005601c0(void);
void core_script_cpp_FUN_005602b0(void);
undefined4 core_script_cpp_CScript_SkipCinematic_FUN_005602e0(void);
void core_script_cpp_CScript_dbLoad_FUN_005603c0(void);
int core_script_cpp_FUN_005606e0(void);
void core_script_cpp_GetReferencedActor_FUN_00560760(void);
void core_script_cpp_FUN_005607e0(void);
int core_script_cpp_CScript_loadState_FUN_00560820(void);
void core_script_cpp_CScript_WriteScriptFile_FUN_00560b50(void);
uint core_script_cpp_CalculateCRC_FUN_00560d80(void);
undefined4 core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0(void);
undefined4 core_script_cpp_FUN_00561690(void);
int core_script_cpp_FUN_00561a30(void);
void core_script_cpp_FUN_00561c70(void);
undefined4 core_script_cpp_FUN_00561cb0(void);
undefined4 core_script_cpp_SCmdParse_bestParse_FUN_00561db0(void);
undefined4 core_script_cpp_SCmdParse_parse_FUN_00561fd0(void);
void core_script_cpp_FUN_005624f0(void);
int core_script_cpp_FUN_00562620(void);
int core_script_cpp_FUN_005626d0(void);
int core_script_cpp_FUN_00562760(void);
undefined4 core_script_cpp_FUN_005627f0(void);
void core_script_cpp_FUN_00562860(void);
undefined4 core_script_cpp_FUN_00562920(void);
void core_script_cpp_FUN_00564090(void);
void core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0(void);
undefined4 core_script_cpp_FUN_005644e0(undefined4 param_1);
void core_script_cpp_FUN_00564500(void);
void core_script_cpp_FUN_00564560(void);
void core_script_cpp_FUN_005645d0(void);
void core_script_cpp_CScript_editorAction_FUN_00564820(void);
void core_script_cpp_CScript_Unk20_FUN_00565130(void);
void core_script_cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0(void);
void core_script_cpp_FUN_00565ae0(void);
void core_script_cpp_FUN_00565d00(void);
void core_script_cpp_FUN_00565e70(void);
void core_script_cpp_FUN_00565f70(void);
void core_script_cpp_FUN_00566080(void);
void core_script_cpp_FUN_00566180(void);
void core_script_cpp_FUN_00566230(void);
void core_script_cpp_CScript_editorPutLine_FUN_005662a0(void);
void core_script_cpp_CScript_insertAndEditorPutLine_FUN_00566330(void);
void core_script_cpp_FUN_00566390(void);
void core_script_cpp_FUN_005664d0(void);
void core_script_cpp_CScript_unk50_FUN_00566660(void);
void core_script_cpp_FUN_00566800(void);
void core_script_cpp_FUN_00566880(void);
void core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910(void);
void core_script_cpp_CScript_Unk18_FUN_005669a0(void);
int core_script_cpp_CScript_editorX2Index_FUN_00566a90(void);
uint core_script_cpp_CScript_editorIndex2X_FUN_00566b30(void);
void core_script_cpp_FUN_00566bc0(void);
undefined4 core_script_cpp_FUN_00566c20(void);
undefined4 core_script_cpp_FUN_00566cc0(void);
void core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0(void);
void core_script_cpp_FUN_00567010(void);
void core_script_cpp_FUN_00567080(void);
void core_script_cpp_FUN_005671a0(void);
int core_script_cpp_FUN_00567310(void);
void core_script_cpp_CScript_ParseCounterUsed_FUN_00567490(void);
void core_script_cpp_CScript_ReallocSomething_FUN_00567510(void);
int core_script_cpp_FUN_005675a0(void);
void core_script_cpp_FUN_00567630(void);
void core_script_cpp_CScript_removeEventXRef_FUN_005676e0(void);
undefined4 core_script_cpp_FUN_005677a0(void);
void core_script_cpp_FUN_00567bc0(void);
CVector3f * core_script_cpp_FUN_00567d00(void);
int core_script_cpp_FUN_00567d30(void);
void __cdecl core_sentinel_cpp_staticInit_FUN_00567d40(void);
CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_00567d70(void);
CDemonActorType * __cdecl core_sentinel_cpp_CSentinel_getActorType_FUN_00567da0(CSentinel *this_ptr);
CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(CSentinel *this_ptr);
void core_sentinel_cpp_FUN_00567e20(void);
void core_sentinel_cpp_FUN_00568030(void);
undefined4 core_sentinel_cpp_FUN_00568b70(void);
void core_sentinel_cpp_CSentinel_load_FUN_00568c70(void);
void core_sentinel_cpp_SentinelBehavior_FUN_00568cd0(void);
undefined4 core_sentinel_cpp_FUN_00568dd0(void);
void core_sentinel_cpp_FUN_00568ef0(void);
void core_sentinel_cpp_FUN_00568f10(void);
void core_sentinel_cpp_FUN_00568f50(void);
CSentinel * __cdecl core_sentinel_cpp_CSentinel_dtor_FUN_00568f80 (CSentinel *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void __cdecl core_set_cpp_staticInit_FUN_00569040(void);
CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr);
CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_clear_FUN_005693c0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_load_FUN_00569410(CDemonSet *this_ptr,char *filename);
void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (CDemonSet *this_ptr,float frustum_param,int render_mode);
void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056aca0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056ade0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index);
int __cdecl core_set_cpp_CDemonSet_FUN_0056b790(CDemonSet *this_ptr);
void core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0(void);
int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056be80(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056c1a0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056c990(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056cd60(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056cf00(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056d110(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056d140(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056d190(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056d2d0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056d380(CDemonSet *this_ptr);
int __cdecl core_set_cpp_CDemonSet_FUN_0056d4a0(CDemonSet *this_ptr);
int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal);
void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index, int skip_lighting_calculation);
int __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110 (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal, int start_vertex_index,int vertex_count);
void core_set_cpp_FUN_0056e180(void);
void core_set_cpp_FUN_0056e2b0(void);
void __cdecl core_set_cpp_CDemonSet_FUN_0056e3e0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056e5d0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0 (CDemonSet *this_ptr,int vertex_count,int *input_vertices);
void core_set_cpp_FUN_0056e890(void);
void core_set_cpp_FUN_0056e960(void);
float __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0 (CDemonSet *this_ptr,int vertex_count,int tri_count,SInputFace *tri_data_ptr, int render_flags,int lighting_mode,int flags);
void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr);
float __cdecl core_set_cpp_CDemonSet_FUN_0056fac0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056fb80(CDemonSet *this_ptr);
undefined4 core_set_cpp_FUN_0056fba0(void);
void __cdecl core_set_cpp_CDemonSet_FUN_0056fbd0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_0056ffe0(CDemonSet *this_ptr);

