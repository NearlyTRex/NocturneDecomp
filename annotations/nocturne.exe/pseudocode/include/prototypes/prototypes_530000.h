#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winuser.h"
#include "types/classes/CBoxActor.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CExternalRenderer.h"
#include "types/classes/CHero.h"
#include "types/classes/CSpike.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CStairs.h"
#include "types/classes/CStranger.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFly.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLPrimitiveTriangle.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SPose.h"
#include "types/structs/SProjectedVertex.h"
#include "types/structs/SRGBColorPalette.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x530000
// =============================================================================

int * engine_special_cpp_FUN_005300ec(void);
int * engine_special_cpp_FUN_00530322(void);
void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0053055c(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);
void __cdecl engine_special_cpp_renderAlphaRow16_FUN_005305f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);
void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_00530710(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y);
undefined8 engine_special_cpp_renderScanlineSwapped_FUN_00530716(void);
void __cdecl engine_special_cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex *output,CVector3i *input);
int __cdecl engine_special_cpp_transformPoint_FUN_00530a25(SProjectedVertex *output,CVector3i *input);
void engine_special_cpp_FUN_00530cf0(int *param_1,int param_2);
void engine_special_cpp_FUN_00530d30(void);
void engine_special_cpp_FUN_00530d40(void);
undefined4 engine_special_cpp_FUN_00530e60(void);
int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00531780(HWND window_handle);
int __cdecl engine_special_cpp_kill_FUN_005322b0(void);
int __cdecl engine_special_cpp_lockFrame_FUN_005322e0(void);
undefined4 engine_special_cpp_FUN_00532320(void);
int __cdecl engine_special_cpp_beginScene_FUN_00532340(void);
int __cdecl engine_special_cpp_endScene_FUN_00532360(void);
undefined4 engine_special_cpp_FUN_00532380(void);
undefined4 engine_special_cpp_FUN_005323c0(void);
int __cdecl engine_special_cpp_selectTexture_FUN_00532400(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);
int __cdecl engine_special_cpp_updateTexture_FUN_00532440(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);
undefined4 engine_special_cpp_FUN_00532480(void);
int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel);
int engine_special_cpp_FUN_005325c0(void);
int __cdecl engine_special_cpp_restoreVideoMode_FUN_005325f0(void);
int __cdecl engine_special_cpp_drawPolygon_FUN_00532620(SRenderVertex *vertices,int vertex_count,int render_flags);
int __cdecl engine_special_cpp_drawPolygon2_FUN_00532650(SRenderVertex **vertex_array,int vertex_count,int render_flags);
int __cdecl engine_special_cpp_drawPolyList_FUN_00532680(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags);
int __cdecl engine_special_cpp_drawPolyList2_FUN_005327c0(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags);
undefined4 engine_special_cpp_FUN_00532900(void);
undefined4 engine_special_cpp_FUN_00532930(void);
undefined4 engine_special_cpp_FUN_00532950(void);
undefined4 engine_special_cpp_FUN_00532980(void);
int __cdecl engine_special_cpp_clear_FUN_005329a0(void);
int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005329c0(int color);
int __cdecl engine_special_cpp_setFogColorFromPalette_FUN_00532a80(int palette_index);
int __cdecl engine_special_cpp_setFogColor_FUN_00532af0(int red,int green,int blue);
int __cdecl engine_special_cpp_sync_FUN_00532b30(void);
int __cdecl engine_special_cpp_clearZBuffer_FUN_00532b50(void);
int __cdecl engine_special_cpp_clearZBox_FUN_00532b70(int left,int right,int top,int bottom);
undefined4 engine_special_cpp_FUN_00532ba0(void);
int __cdecl engine_special_cpp_masterZBuffer_FUN_00532c70(int z_buffer_mode);
int __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(int left,int top,int mode,int right,int bottom);
undefined4 engine_special_cpp_FUN_00532cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int __cdecl engine_special_cpp_selectCard_FUN_00532d00(int card_index);
undefined4 engine_special_cpp_FUN_00532d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00532d60(void);
int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00532d80(void);
void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_00532da0(CExternalRenderer *this_ptr);
int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00532df0(CExternalRenderer *this_ptr,CExternalRenderer *capabilities);
void engine_special_cpp_FUN_00532f30(void);
void engine_special_cpp_FUN_00532f50(char *param_1,undefined4 param_2);
undefined1 * engine_special_cpp_FUN_00532fa0(void);
void __cdecl core_spike_cpp_staticInit_FUN_00532fc0(void);
void core_spike_cpp_FUN_00532ff0(void);
CDemonActorType * core_spike_cpp_FUN_00533010(void);
CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00533020(CSpike *this_ptr);
void core_spike_cpp_CSpike_setup_FUN_00533160(CDemonActor *param_1);
void core_spike_cpp_FUN_00533210(int param_1,float param_2);
int core_spike_cpp_FUN_00533530(CDemonActor *param_1);
undefined4 * core_spike_cpp_FUN_005335a0(int param_1,undefined4 *param_2);
void core_spike_cpp_CSpike_archive_FUN_005335f0(CDemonActor *param_1);
undefined4 core_spike_cpp_FUN_00533740(void);
void core_spike_cpp_FUN_00533750(CDemonActor *param_1);
CDemonActor * core_spike_cpp_FUN_00533c90(CDemonActor *param_1,byte param_2);
void __cdecl core_spline_cpp_computeSplineBasis_FUN_00533ce0(float *out_basis,float t,float tension);
float core_spline_cpp_evaluateSplineScalar_FUN_00533e70(void);
int core_spline_cpp_evaluateSplintInt_FUN_00533eb0(float *param_1,int param_2,int param_3,int param_4,int param_5);
CVector3f * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);
float core_spline_cpp_evaluateSplineTangentScalar_FUN_00534030(void);
int core_spline_cpp_evaluateSplineTangentInt_FUN_00534070(int param_1,int param_2,int param_3,int param_4,int param_5);
CVector3f * __cdecl core_spline_cpp_evaluateSplineTangent3D_FUN_005340d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);
void __cdecl shape_spotview_cpp_staticInit_FUN_005341f0(void);
CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00534200(CSpotView *this_ptr);
void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_00534260(CSpotView *this_ptr,uint control_flags);
void shape_spotview_cpp_CSpotView_handleInput_FUN_005342b0(void);
void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(CSpotView *this_ptr);
undefined4 shape_spotview_cpp_CSpotView_dtor_FUN_00534740(undefined4 param_1);
void __cdecl core_stairs_cpp_staticInit_FUN_00534750(void);
void core_stairs_cpp_FUN_00534780(void);
CDemonActorType * core_stairs_cpp_FUN_005347a0(void);
int core_stairs_cpp_FUN_005347b0(undefined4 param_1);
void core_stairs_cpp_FUN_00534820(CStairs *param_1);
void core_stairs_cpp_FUN_00534840(void);
undefined4 core_stairs_cpp_FUN_00534850(void);
void core_stairs_cpp_CStairs_getBoundingBox_FUN_00534860(int param_1,float *param_2);
void core_stairs_cpp_FUN_005348c0(CDemonActor *param_1);
undefined4 core_stairs_cpp_CStairs_getCollisionType_FUN_00534940(undefined4 param_1,int *param_2);
float core_stairs_cpp_CStairs_customRayIntersect_FUN_00534960(int param_1,undefined4 param_2,undefined4 param_3,float *param_4);
void core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30(int param_1,SIntersectXZCylinder *param_2);
undefined4 core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00534a70(int param_1,CVector3f *param_2,float param_3,float *param_4);
undefined4 core_stairs_cpp_FUN_00534ac0(int param_1);
void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(CStairs *this_ptr);
CDemonActor * core_stairs_cpp_CFlies_dtor_FUN_00534c10(CDemonActor *param_1,byte param_2);
SFly * __cdecl core_stairs_cpp_SFly_arrdtor_FUN_00534c80(SFly *objs,uint flags);
void __cdecl core_stone_cpp_staticInit_FUN_00534ca0(void);
void core_stone_cpp_FUN_00534cd0(void);
CDemonActorType * core_stone_cpp_FUN_00534cf0(void);
void core_stone_cpp_FUN_00534d00(CBoxActor *param_1);
void core_stone_cpp_FUN_00534d30(CBoxActor *param_1);
undefined4 core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(int param_1,CDemonActor *param_2);
CDemonActor * core_stone_cpp_FUN_00534dc0(CDemonActor *param_1,byte param_2);
void __cdecl core_stranger_cpp_staticInit_FUN_00534e30(void);
float core_stranger_cpp_FUN_00534e90(undefined4 param_1,undefined4 param_2,float param_3,int param_4);
bool core_stranger_cpp_FUN_00534f90(void);
float core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(CDemonActor *param_1);
void core_stranger_cpp_FUN_00535090(void);
CDemonActorType * core_stranger_cpp_FUN_005350b0(void);
CCharacter * core_stranger_cpp_FUN_005350c0(undefined4 param_1);
void core_stranger_cpp_FUN_00535450(int param_1);
void core_stranger_cpp_FUN_005357d0(int param_1,float param_2);
void core_stranger_cpp_FUN_00535900(CStranger *param_1,float param_2);
void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(CStranger *this_ptr,float delta_time);
undefined4 core_stranger_cpp_FUN_005383e0(int param_1);
float * core_stranger_cpp_FUN_00538440(int param_1,float *param_2);
void core_stranger_cpp_FUN_005384d0(CStranger *param_1);
void core_stranger_cpp_FUN_005396d0(int param_1,SPose *param_2);
void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(CStranger *this_ptr,float delta_time);
void core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_00539ac0(CCharacter *param_1,CVector3f *param_2,int param_3);
void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0053a260(CStranger *this_ptr,int arm_side);
void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger *this_ptr,int hand_index);
float * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(int param_1,CDemonActor *param_2,float param_3);
int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(CStranger *this_ptr,char *class_name);
void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(CStranger *this_ptr);
void core_stranger_cpp_CStranger_dropRightHandObject_FUN_0053bf30(int param_1);
int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(CStranger *this_ptr);
undefined4 core_stranger_cpp_FUN_0053c800(CDemonActor *param_1);
void core_stranger_cpp_CStranger_archive_FUN_0053cf90(int param_1);
undefined4 core_stranger_cpp_FUN_0053d100(CStranger *param_1);
undefined4 core_stranger_cpp_CStranger_renderTransparent_FUN_0053d6c0(CCharacter *param_1);
void core_stranger_cpp_adjustAimAngleForOffset_FUN_0053d700(void);
float * core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0053d790(float *param_1,float *param_2,float *param_3);
void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(CStranger *this_ptr,int hand_index,float delta_time);
void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320(CStranger *this_ptr);
void core_stranger_cpp_FUN_0053e860(CHero *param_1,SDamageInfo *param_2);
void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(CStranger *this_ptr,float delta_time,int is_weapon_active);
void core_stranger_cpp_FUN_0053f210(int param_1,int param_2);
CVector3f * __cdecl core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(CStranger *this_ptr,CVector3f *out_direction);
void core_stranger_cpp_FUN_0053f310(CStranger *param_1,float param_2);
void core_stranger_cpp_FUN_0053fc60(CStranger *param_1);
int __cdecl core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0053ff50(CStranger *this_ptr);
void core_stranger_cpp_FUN_0053ffe0(CStranger *param_1);

