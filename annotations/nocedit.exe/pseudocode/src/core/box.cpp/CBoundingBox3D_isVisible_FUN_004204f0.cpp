// Name: core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
// Address: 004204f0
// Address Range: [[004204f0, 00420679]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 (00410e80) at 00410ea3 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_00411820 (00411820) at 00411847 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411ec0 (00411ec0) at 00411f15 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412860 (00412860) at 00412899 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_004128d0 (004128d0) at 00412907 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413bf3 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414240 (00414240) at 0041428d [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414bf0 (00414bf0) at 00414c13 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 00417433 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417f80 (00417f80) at 00417fc2 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 004189e8 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_004194b0 (004194b0) at 00419514 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419610 (00419610) at 0041969a [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d1e7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421e8b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421f58 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004251fc [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430949 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a2c0 (0042a2c0) at 0042a30b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a390 (0042a390) at 0042a3c0 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441f60 (00441f60) at 00441fa9 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448880 (00448880) at 004488c2 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00 (00448e00) at 00448e23 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b083 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fbc7 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderBackground_FUN_004809e0 (004809e0) at 00480a21 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 0048080d [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485c63 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e6c0 (0048e6c0) at 0048e6ed [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8a80 (004a8a80) at 004a8aae [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be810 (004be810) at 004be852 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004bed00 (004bed00) at 004bed24 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0f27 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_render_FUN_004c1870 (004c1870) at 004c18dd [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_render_FUN_004c0140 (004c0140) at 004c01bb [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca19a [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caa80 (004caa80) at 004caae0 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb4c0 (004cb4c0) at 004cb502 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc35a [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d1fc0 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5da0 (004e5da0) at 004e5de2 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderBackground_FUN_004e9e90 (004e9e90) at 004e9edf [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 (004e9ca0) at 004e9cca [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderOpaque_FUN_004e9930 (004e9930) at 004e999b [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0 (004e9af0) at 004e9b4d [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee680 (004ee680) at 004ee6cf [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee710 (004ee710) at 004ee755 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1e60 (004f1e60) at 004f1e83 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3c90 (004f3c90) at 004f3cdb [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005017c0 (005017c0) at 005017e3 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 00502651 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504cf0 (00504cf0) at 00504d17 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506c20 (00506c20) at 00506c69 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 005090f3 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050be50 (0050be50) at 0050be92 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 00520633 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005208b0 (005208b0) at 005208ec [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 0052979a [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_005460c0 (005460c0) at 00546105 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a2f0 (0054a2f0) at 0054a313 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d7b8 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d9b0 (0054d9b0) at 0054da7f [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70 (00570b70) at 00570bde [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057feed [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0 (00587df0) at 00587e5e [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005890f0 (005890f0) at 00589113 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8730 (005b8730) at 005b8753 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005b9c65 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c75dd [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de920 (005de920) at 005de964 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df574 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e0127 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e2344 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4dbb [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6dd8 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e88f5 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9750 (005e9750) at 005e979a [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb2be [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee030 (005ee030) at 005ee053 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006165e7 = 0.5
//   float g_BoundingBoxWorldToIntegerScale = 256
//   float FLOAT_0065b168 = 0.00390625
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_StoredX
//   int g_StoredY
//   int g_StoredZ
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
//   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
//   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_retaddr;
  undefined1 auStack_68 [44];
  CVector3i local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  CVector3f local_14;
  
  iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    local_24 = (this_ptr->min).x + (this_ptr->max).x;
    local_20 = (this_ptr->min).y + (this_ptr->max).y;
    local_30 = local_24 * FLOAT_006165e7;
    local_1c = (this_ptr->min).z + (this_ptr->max).z;
    local_2c = local_20 * FLOAT_006165e7;
    local_28 = local_1c * FLOAT_006165e7;
    if (&local_14.z != &local_30) {
      local_14.z = local_30;
      unaff_ESI = local_2c;
      unaff_EBX = local_28;
    }
    local_18 = (float)g_StoredX * FLOAT_0065b168;
    local_14.x = (float)g_StoredY * FLOAT_0065b168;
    local_14.y = (float)g_StoredZ * FLOAT_0065b168;
    local_3c.x = (int)ROUND(local_14.z * g_BoundingBoxWorldToIntegerScale);
    local_3c.y = (int)ROUND(unaff_ESI * g_BoundingBoxWorldToIntegerScale);
    local_3c.z = (int)ROUND(unaff_EBX * g_BoundingBoxWorldToIntegerScale);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)&stack0xffffff94,&local_3c);
    local_14.x = local_14.x + unaff_ESI;
    local_14.y = local_14.y + unaff_EBX;
    local_14.z = local_14.z + unaff_retaddr;
    if (g_CurrentSceneCamera == (CDemonCamera *)0x0) {
      g_PerspectiveReciprocal = (float)g_CurrentSceneCamera;
    }
    else {
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                (&g_CDemonCameraInstance,&local_14,(float)auStack_68);
      if (65000 < (int)g_PerspectiveReciprocal) {
        return 0;
      }
    }
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(this_ptr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 004204f0: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
// 004204f1: PUSH ESI
// 004204f2: SUB ESP,0x6c
// 004204f5: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 004204f9: PUSH EBX
// 004204fa: CALL core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
//   XREF to: 00420680 (UNCONDITIONAL_CALL)
// 004204ff: ADD ESP,0x4
// 00420502: TEST EAX,EAX
// 00420504: JNZ 0x0042050c
//   XREF to: 0042050c (CONDITIONAL_JUMP)
// 00420506: ADD ESP,0x6c
// 00420509: POP ESI
// 0042050a: POP EBX
// 0042050b: RET
// 0042050c: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_0042050c
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00420512: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00420513: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00420518: ADD ESP,0x4
// 0042051b: TEST EAX,EAX
// 0042051d: JNZ 0x00420667
//   XREF to: 00420667 (CONDITIONAL_JUMP)
// 00420523: LEA EAX,[EBX + 0xc]
// 00420526: FLD float ptr [EBX]
// 00420528: FADD float ptr [EAX]
// 0042052a: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x2c] (WRITE)
// 0042052e: FLD float ptr [EBX + 0x4]
// 00420531: FADD float ptr [EAX + 0x4]
// 00420534: FXCH
// 00420536: FLD float ptr [0x006165e7]
//   XREF to: 006165e7 (READ)
// 0042053c: FXCH
// 0042053e: FMUL ST1
// 00420540: FXCH ST2
// 00420542: FST float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x28] (WRITE)
// 00420546: FLD float ptr [EBX + 0x8]
// 00420549: FADD float ptr [EAX + 0x8]
// 0042054c: FXCH
// 0042054e: FMUL ST2
// 00420550: FXCH
// 00420552: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0x24] (WRITE)
// 00420556: FMULP ST2
// 00420558: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x38] (DATA)
// 0042055c: FXCH ST2
// 0042055e: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x38] (WRITE)
// 00420562: FXCH
// 00420564: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x34] (WRITE)
// 00420568: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x14] (DATA)
// 0042056c: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x30] (WRITE)
// 00420570: CMP EAX,EBX
// 00420572: JZ 0x0042058c
//   XREF to: 0042058c (CONDITIONAL_JUMP)
// 00420574: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x38] (READ)
// 00420578: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042057c: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x34] (READ)
// 00420580: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00420584: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x30] (READ)
// 00420588: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0042058c: MOV EAX,0x772a88
//   Label: LAB_0042058c
//   XREF to: 00772a88 (DATA)
// 00420591: LEA EBX,[ESP + 0x54]
//   XREF to: Stack[-0x20] (DATA)
// 00420595: FILD dword ptr [EAX]
//   XREF to: 00772a88 (READ)
// 00420597: FMUL float ptr [0x0065b168]
//   XREF to: 0065b168 (READ)
// 0042059d: FSTP float ptr [EBX]
//   XREF to: Stack[-0x20] (DATA)
// 0042059f: FILD dword ptr [EAX + 0x4]
//   XREF to: 00772a8c (READ)
// 004205a2: FMUL float ptr [0x0065b168]
//   XREF to: 0065b168 (READ)
// 004205a8: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004205ab: FILD dword ptr [EAX + 0x8]
//   XREF to: 00772a90 (READ)
// 004205ae: FMUL float ptr [0x0065b168]
//   XREF to: 0065b168 (READ)
// 004205b4: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004205b7: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x44] (DATA)
// 004205bb: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x14] (DATA)
// 004205bf: FLD float ptr [EAX]
//   XREF to: Stack[-0x14] (DATA)
// 004205c1: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004205c7: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x44] (DATA)
// 004205c9: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 004205cc: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004205d2: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 004205d5: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004205d8: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004205de: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 004205e1: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x44] (DATA)
// 004205e5: PUSH EAX
// 004205e6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x74] (DATA)
// 004205ea: PUSH EAX
// 004205eb: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004205f0: ADD ESP,0x8
// 004205f3: MOV ECX,dword ptr [0x00823a74]
//   XREF to: 00823a74 (READ)
// 004205f9: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (READ)
// 004205fd: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00420601: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x18] (READ)
// 00420605: FXCH ST2
// 00420607: FADD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 0042060b: FXCH
// 0042060d: FADD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x10] (READ)
// 00420611: FXCH ST2
// 00420613: FADD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xc] (READ)
// 00420617: FXCH
// 00420619: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (WRITE)
// 0042061d: FXCH
// 0042061f: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (WRITE)
// 00420623: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x18] (WRITE)
// 00420627: TEST ECX,ECX
// 00420629: JZ 0x00420656
//   XREF to: 00420656 (CONDITIONAL_JUMP)
// 0042062b: MOV EAX,ESP
// 0042062d: PUSH EAX
// 0042062e: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x20] (DATA)
// 00420632: PUSH EAX
// 00420633: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00420638: CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
//   XREF to: 004537d0 (UNCONDITIONAL_CALL)
// 0042063d: MOV ESI,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 00420643: ADD ESP,0xc
// 00420646: CMP ESI,0xfde8
// 0042064c: JLE 0x0042065c
//   XREF to: 0042065c (CONDITIONAL_JUMP)
// 0042064e: XOR EAX,EAX
// 00420650: ADD ESP,0x6c
// 00420653: POP ESI
// 00420654: POP EBX
// 00420655: RET
// 00420656: MOV dword ptr [0x02d051f4],ECX
//   Label: LAB_00420656
//   XREF to: 02d051f4 (WRITE)
// 0042065c: MOV EAX,0x1
//   Label: LAB_0042065c
// 00420661: ADD ESP,0x6c
// 00420664: POP ESI
// 00420665: POP EBX
// 00420666: RET
// 00420667: PUSH EBX
//   Label: LAB_00420667
// 00420668: CALL core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
//   XREF to: 00420320 (UNCONDITIONAL_CALL)
// 0042066d: ADD ESP,0x4
// 00420670: TEST EAX,EAX
// 00420672: JNZ 0x0042065c
//   XREF to: 0042065c (CONDITIONAL_JUMP)
// 00420674: ADD ESP,0x6c
// 00420677: POP ESI
// 00420678: POP EBX
// 00420679: RET
