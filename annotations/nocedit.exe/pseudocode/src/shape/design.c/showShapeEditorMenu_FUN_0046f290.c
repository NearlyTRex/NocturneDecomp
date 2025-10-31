// Name: shape_design.c_showShapeEditorMenu_FUN_0046f290
// Address: 0046f290
// Address Range: [[0046f290, 0046f7b9] [0046f850, 0046f88f]]
// Convention: __cdecl
// Signature: void shape_design.c_showShapeEditorMenu_FUN_0046f290(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e3d4 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507788 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0046f7bc = 0046f67d
//   TerminatedCString s_vga_act_0061e0ee
//   TerminatedCString s_vga_lte_0061e0f6
//   TerminatedCString s_vga_act_0061e0fe
//   TerminatedCString s_vga_act_0061e106
//   TerminatedCString s_s_12_03_47_0061e10e
//   TerminatedCString s_Jan_10_2000_0061e117
//   TerminatedCString s_Demented_Shape_Editor_Bu_0061e123
//   TerminatedCString s_s_1_Point_Editor_0061e14e
//   TerminatedCString s_s_2_Facet_Part_Editor_0061e15e
//   TerminatedCString s_s_3_Model_Editor_0061e173
//   TerminatedCString s_s_4_Center_object_0061e183
//   TerminatedCString s_s_5_Inside_out_0061e194
//   TerminatedCString s_s_6_Simple_texture_0061e1a2
//   TerminatedCString s_s_7_Scale_model_0061e1b4
//   TerminatedCString s_s_8_Vertex_reducer_0061e1c3
//   TerminatedCString s_s_9_Polygon_reducer_0061e1d5
//   TerminatedCString s_A_Ground_center_object_0061e1e8
//   TerminatedCString s_B_Key_frame_model_0061e200
//   TerminatedCString s_C_Squash_model_for_3D_mo_0061e213
//   TerminatedCString s_D_Crush_model_0061e230
//   TerminatedCString s_E_Create_center_vertex_0061e23f
//   TerminatedCString s_F_Globe_gen_0061e257
//   TerminatedCString s_G_Shell_gen_0061e264
//   TerminatedCString s_I_Octant_gen_0061e271
//   TerminatedCString s_J_Scale_X_Y_Z_0061e27f
//   TerminatedCString s_K_Size_model_in_one_dime_0061e28e
//   TerminatedCString s_L_Size_model_to_X_feet_0061e2ad
//   TerminatedCString s_M_Size_model_to_Y_feet_0061e2c5
//   TerminatedCString s_N_Size_model_to_Z_feet_0061e2dd
//   TerminatedCString s_O_Size_stadium_0061e2f5
//   TerminatedCString s_P_Combine_texture_maps_0061e305
//   TerminatedCString s_Q_Tile_texture_maps_0061e31d
//   TerminatedCString s_R_Multicram_0061e332
//   TerminatedCString s_S_Detach_faces_0061e33f
//   TerminatedCString s_T_Mesh_smooth_0061e34f
//   TerminatedCString s_U_Bisect_mesh_0061e35e
//   TerminatedCString s_editmain_hlp_0061e36d
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int* g_EditorBackgroundColors
//   int INT_016263c4
//   int INT_016263c8
//   int INT_016263cc
//   int INT_016263d0
//   int INT_016263d4
//   int INT_016263d8
//   int INT_016263dc
//   int* g_EditorColorIndices
//   int INT_016263e4
//   int INT_016263e8
//   int INT_016263ec
//   int INT_016263f0
//   int INT_016263f4
//   int INT_016263f8
//   int INT_016263fc
//   int g_ModelCount
//   int g_LightDirectionX2
//   int g_LightDirectionY2
//   int g_LightDirectionZ2
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_doNothing_FUN_00401590
//   engine_2d.c_doNothing_FUN_00402860
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   engine_2d.c_loadPaletteFile_FUN_004015a0
//   engine_2d.c_setupViewportAndClipping_FUN_00401800
//   shape_design.c_bisectMesh_FUN_0046ed50
//   shape_design.c_centerObject_FUN_00466610
//   shape_design.c_combineTextureMaps_FUN_00469ee0
//   shape_design.c_createCenterVertex_FUN_00469690
//   shape_design.c_createKeyframeModel_FUN_00468320
//   shape_design.c_crushModel_FUN_00469bd0
//   shape_design.c_detachFaces_FUN_0046eba0
//   shape_design.c_generateGlobe_FUN_00468910
//   shape_design.c_generateOctant_FUN_00469420
//   shape_design.c_generateShell_FUN_00468f20
//   shape_design.c_groundCenterObject_FUN_00466a30
//   shape_design.c_handleEditorHotkeys_FUN_0045b990
//   shape_design.c_multicramTextures_FUN_0046eb80
//   shape_design.c_polygonReducer_FUN_004654e0
//   shape_design.c_scaleModel_FUN_00467e70
//   shape_design.c_scaleXYZ_FUN_00467f30
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0
//   shape_design.c_showHelpFile_FUN_00457f00
//   shape_design.c_showModelEditor_FUN_00461aa0
//   shape_design.c_showPointEditor_FUN_0045c6c0
//   shape_design.c_simpleTexture_FUN_00467350
//   shape_design.c_sizeForStadium_FUN_00469c70
//   shape_design.c_sizeModelInOneDimension_FUN_00469850
//   shape_design.c_sizeModelToXFeet_FUN_00466e40
//   shape_design.c_sizeModelToYFeet_FUN_00467010
//   shape_design.c_sizeModelToZFeet_FUN_00466c70
//   shape_design.c_smoothMesh_FUN_0046ed00
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0
//   shape_design.c_tileTextureMaps_FUN_0046a180
//   shape_design.c_turnModelInsideOut_FUN_004671e0
//   shape_design.c_vertexReducer_FUN_00467850
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_showShapeEditorMenu_FUN_0046f290(void)

{
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 uStack0000004c;
  
  engine_2d_c_setupViewportAndClipping_FUN_00401800(0,0,g_WindowWidth + -1,g_WindowHeight + -1);
  engine_2d_c_loadPaletteFile_FUN_004015a0("vga.act");
  engine_2d_c_doNothing_FUN_00402860();
  engine_2d_c_loadOrBuildColorMap_FUN_00402930("vga.act");
  engine_2d_c_doNothing_FUN_00401590();
  wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
  g_ModelCount = 8;
  g_EditorBackgroundColors = (int *)0x0;
  INT_016263c4 = 0xff;
  INT_016263c8 = 0xf8;
  INT_016263cc = 3;
  INT_016263d0 = 2;
  INT_016263d4 = 0xfc;
  INT_016263d8 = 4;
  INT_016263dc = 1;
  g_EditorColorIndices = (int *)0x7;
  INT_016263e4 = 0xf8;
  INT_016263e8 = 0xff;
  INT_016263ec = 0xff;
  INT_016263f0 = 0xff;
  INT_016263f4 = 0xff;
  INT_016263f8 = 7;
  INT_016263fc = 7;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_LightDirectionX2 = -0xb4fd;
  g_LightDirectionY2 = -0xb4fd;
  g_LightDirectionZ2 = 0;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"Demented Shape Editor    Build date: %s %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff9c,0,0);
    engine_2d_c_drawText_FUN_00401fd0("1. Point Editor",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2. Facet/Part Editor",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("3. Model Editor",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("4. Center object",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("5. Inside out",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("6. Simple texture",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("7. Scale model",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("8. Vertex reducer",0,99);
    engine_2d_c_drawText_FUN_00401fd0("9. Polygon reducer",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("A. Ground center object",0,0x84);
    engine_2d_c_drawText_FUN_00401fd0("B. Key frame model",0,0x8f);
    engine_2d_c_drawText_FUN_00401fd0("C. Squash model for 3D morph",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("D. Crush model",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("E. Create center vertex",0,0xb0);
    engine_2d_c_drawText_FUN_00401fd0("F. Globe gen",0,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("G. Shell gen",0,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("I. Octant gen",0,0xd1);
    engine_2d_c_drawText_FUN_00401fd0("J. Scale X,Y,Z",0,0xdc);
    engine_2d_c_drawText_FUN_00401fd0("K. Size model in one dimension",0,0xe7);
    engine_2d_c_drawText_FUN_00401fd0("L. Size model to X feet",0,0xf2);
    engine_2d_c_drawText_FUN_00401fd0("M. Size model to Y feet",0,0xfd);
    engine_2d_c_drawText_FUN_00401fd0("N. Size model to Z feet",0,0x108);
    engine_2d_c_drawText_FUN_00401fd0("O. Size stadium",0,0x113);
    engine_2d_c_drawText_FUN_00401fd0("P. Combine texture maps",0,0x11e);
    engine_2d_c_drawText_FUN_00401fd0("Q. Tile texture maps",0,0x129);
    engine_2d_c_drawText_FUN_00401fd0("R. Multicram",0,0x134);
    engine_2d_c_drawText_FUN_00401fd0("S. Detach faces",0,0x13f);
    engine_2d_c_drawText_FUN_00401fd0("T. Mesh smooth",0,0x14a);
    engine_2d_c_drawText_FUN_00401fd0("U. Bisect mesh",0,0x155);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    iVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
    if (iVar2 == 0x48) {
      shape_design_c_showHelpFile_FUN_00457f00("editmain.hlp");
    }
    switch(iVar2) {
    case 0x31:
      shape_design_c_showPointEditor_FUN_0045c6c0();
      break;
    case 0x32:
      shape_design_c_showFacetPartEditor_FUN_0045f1d0();
      break;
    case 0x33:
      shape_design_c_showModelEditor_FUN_00461aa0();
      break;
    case 0x34:
      shape_design_c_centerObject_FUN_00466610();
      break;
    case 0x35:
      shape_design_c_turnModelInsideOut_FUN_004671e0();
      break;
    case 0x36:
      shape_design_c_simpleTexture_FUN_00467350();
      break;
    case 0x37:
      shape_design_c_scaleModel_FUN_00467e70();
      break;
    case 0x38:
      shape_design_c_vertexReducer_FUN_00467850(0.1,-1.0,1);
      break;
    case 0x39:
      shape_design_c_polygonReducer_FUN_004654e0();
      break;
    default:
      break;
    case 0x41:
      shape_design_c_groundCenterObject_FUN_00466a30();
      break;
    case 0x42:
      shape_design_c_createKeyframeModel_FUN_00468320();
      break;
    case 0x43:
      shape_design_c_squashShapeFor3DMorph_FUN_004685e0();
      break;
    case 0x44:
      shape_design_c_crushModel_FUN_00469bd0();
      break;
    case 0x45:
      shape_design_c_createCenterVertex_FUN_00469690();
      break;
    case 0x46:
      shape_design_c_generateGlobe_FUN_00468910();
      break;
    case 0x47:
      shape_design_c_generateShell_FUN_00468f20();
      break;
    case 0x49:
      shape_design_c_generateOctant_FUN_00469420();
      break;
    case 0x4a:
      shape_design_c_scaleXYZ_FUN_00467f30();
      break;
    case 0x4b:
      shape_design_c_sizeModelInOneDimension_FUN_00469850();
      break;
    case 0x4c:
      shape_design_c_sizeModelToXFeet_FUN_00466e40();
      break;
    case 0x4d:
      shape_design_c_sizeModelToYFeet_FUN_00467010();
      break;
    case 0x4e:
      shape_design_c_sizeModelToZFeet_FUN_00466c70();
      break;
    case 0x4f:
      shape_design_c_sizeForStadium_FUN_00469c70();
      break;
    case 0x50:
      shape_design_c_combineTextureMaps_FUN_00469ee0();
      break;
    case 0x51:
      shape_design_c_tileTextureMaps_FUN_0046a180((char *)0x0,1);
      break;
    case 0x52:
      shape_design_c_multicramTextures_FUN_0046eb80();
      break;
    case 0x53:
      shape_design_c_detachFaces_FUN_0046eba0();
      break;
    case 0x54:
      shape_design_c_smoothMesh_FUN_0046ed00();
      break;
    case 0x55:
      shape_design_c_bisectMesh_FUN_0046ed50();
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
    shape_design_c_handleEditorHotkeys_FUN_0045b990();
  } while (iVar2 != 0x1b);
  uStack0000004c = 0x46f889;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0046f290: PUSH EBX
//   Label: shape_design.c_showShapeEditorMenu_FUN_0046f290
// 0046f291: PUSH ESI
// 0046f292: PUSH EDI
// 0046f293: PUSH EBP
// 0046f294: MOV EBP,ESP
// 0046f296: SUB ESP,0x5c
// 0046f29c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0046f2a1: DEC EAX
// 0046f2a2: PUSH EAX
// 0046f2a3: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0046f2a8: DEC EAX
// 0046f2a9: PUSH EAX
// 0046f2aa: PUSH 0x0
// 0046f2ac: PUSH 0x0
// 0046f2ae: CALL engine_2d.c_setupViewportAndClipping_FUN_00401800
//   XREF to: 00401800 (UNCONDITIONAL_CALL)
// 0046f2b3: ADD ESP,0x10
// 0046f2b6: MOV EAX,0x61e0ee
//   XREF to: 0061e0ee (PARAM)
// 0046f2bb: PUSH EAX
//   XREF to: 0061e0ee (DATA)
// 0046f2bc: CALL engine_2d.c_loadPaletteFile_FUN_004015a0
//   XREF to: 004015a0 (UNCONDITIONAL_CALL)
// 0046f2c1: ADD ESP,0x4
// 0046f2c4: MOV EAX,0x61e0f6
//   XREF to: 0061e0f6 (PARAM)
// 0046f2c9: PUSH EAX
//   XREF to: 0061e0f6 (DATA)
// 0046f2ca: CALL engine_2d.c_doNothing_FUN_00402860
//   XREF to: 00402860 (UNCONDITIONAL_CALL)
// 0046f2cf: ADD ESP,0x4
// 0046f2d2: MOV EAX,0x61e0fe
//   XREF to: 0061e0fe (PARAM)
// 0046f2d7: PUSH EAX
//   XREF to: 0061e0fe (DATA)
// 0046f2d8: CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   XREF to: 00402930 (UNCONDITIONAL_CALL)
// 0046f2dd: ADD ESP,0x4
// 0046f2e0: MOV EAX,0x61e106
//   XREF to: 0061e106 (PARAM)
// 0046f2e5: PUSH EAX
//   XREF to: 0061e106 (DATA)
// 0046f2e6: CALL engine_2d.c_doNothing_FUN_00401590
//   XREF to: 00401590 (UNCONDITIONAL_CALL)
// 0046f2eb: ADD ESP,0x4
// 0046f2ee: CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)
// 0046f2f3: MOV dword ptr [0x01626400],0x8
//   XREF to: 01626400 (WRITE)
// 0046f2fd: MOV dword ptr [0x016263c0],0x0
//   XREF to: 016263c0 (WRITE)
// 0046f307: MOV dword ptr [0x016263c4],0xff
//   XREF to: 016263c4 (WRITE)
// 0046f311: MOV dword ptr [0x016263c8],0xf8
//   XREF to: 016263c8 (WRITE)
// 0046f31b: MOV dword ptr [0x016263cc],0x3
//   XREF to: 016263cc (WRITE)
// 0046f325: MOV dword ptr [0x016263d0],0x2
//   XREF to: 016263d0 (WRITE)
// 0046f32f: MOV dword ptr [0x016263d4],0xfc
//   XREF to: 016263d4 (WRITE)
// 0046f339: MOV dword ptr [0x016263d8],0x4
//   XREF to: 016263d8 (WRITE)
// 0046f343: MOV dword ptr [0x016263dc],0x1
//   XREF to: 016263dc (WRITE)
// 0046f34d: MOV dword ptr [0x016263e0],0x7
//   XREF to: 016263e0 (WRITE)
// 0046f357: MOV dword ptr [0x016263e4],0xf8
//   XREF to: 016263e4 (WRITE)
// 0046f361: MOV dword ptr [0x016263e8],0xff
//   XREF to: 016263e8 (WRITE)
// 0046f36b: MOV dword ptr [0x016263ec],0xff
//   XREF to: 016263ec (WRITE)
// 0046f375: MOV dword ptr [0x016263f0],0xff
//   XREF to: 016263f0 (WRITE)
// 0046f37f: MOV dword ptr [0x016263f4],0xff
//   XREF to: 016263f4 (WRITE)
// 0046f389: MOV dword ptr [0x016263f8],0x7
//   XREF to: 016263f8 (WRITE)
// 0046f393: MOV dword ptr [0x016263fc],0x7
//   XREF to: 016263fc (WRITE)
// 0046f39d: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046f3a2: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046f3a7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046f3ac: MOV dword ptr [0x02dd3094],0xffff4b03
//   XREF to: 02dd3094 (WRITE)
// 0046f3b6: MOV dword ptr [0x02dd3098],0xffff4b03
//   XREF to: 02dd3098 (WRITE)
// 0046f3c0: MOV dword ptr [0x02dd309c],0x0
//   XREF to: 02dd309c (WRITE)
// 0046f3ca: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0046f3ca
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046f3cf: MOV EAX,0x61e10e
//   XREF to: 0061e10e (DATA)
// 0046f3d4: PUSH EAX
//   XREF to: 0061e10e (DATA)
// 0046f3d5: MOV EAX,0x61e117
//   XREF to: 0061e117 (DATA)
// 0046f3da: PUSH EAX
//   XREF to: 0061e117 (DATA)
// 0046f3db: MOV EAX,0x61e123
//   XREF to: 0061e123 (DATA)
// 0046f3e0: PUSH EAX
//   XREF to: 0061e123 (DATA)
// 0046f3e1: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0046f3e4: PUSH EAX
// 0046f3e5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046f3ea: ADD ESP,0x10
// 0046f3ed: PUSH 0x0
// 0046f3ef: PUSH 0x0
// 0046f3f1: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0046f3f4: PUSH EAX
// 0046f3f5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f3fa: ADD ESP,0xc
// 0046f3fd: PUSH 0x16
// 0046f3ff: PUSH 0x0
// 0046f401: MOV EAX,0x61e14e
//   XREF to: 0061e14e (PARAM)
// 0046f406: PUSH EAX
//   XREF to: 0061e14e (DATA)
// 0046f407: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f40c: ADD ESP,0xc
// 0046f40f: PUSH 0x21
// 0046f411: PUSH 0x0
// 0046f413: MOV EAX,0x61e15e
//   XREF to: 0061e15e (PARAM)
// 0046f418: PUSH EAX
//   XREF to: 0061e15e (DATA)
// 0046f419: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f41e: ADD ESP,0xc
// 0046f421: PUSH 0x2c
// 0046f423: PUSH 0x0
// 0046f425: MOV EAX,0x61e173
//   XREF to: 0061e173 (PARAM)
// 0046f42a: PUSH EAX
//   XREF to: 0061e173 (DATA)
// 0046f42b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f430: ADD ESP,0xc
// 0046f433: PUSH 0x37
// 0046f435: PUSH 0x0
// 0046f437: MOV EAX,0x61e183
//   XREF to: 0061e183 (PARAM)
// 0046f43c: PUSH EAX
//   XREF to: 0061e183 (DATA)
// 0046f43d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f442: ADD ESP,0xc
// 0046f445: PUSH 0x42
// 0046f447: PUSH 0x0
// 0046f449: MOV EAX,0x61e194
//   XREF to: 0061e194 (PARAM)
// 0046f44e: PUSH EAX
//   XREF to: 0061e194 (DATA)
// 0046f44f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f454: ADD ESP,0xc
// 0046f457: PUSH 0x4d
// 0046f459: PUSH 0x0
// 0046f45b: MOV EAX,0x61e1a2
//   XREF to: 0061e1a2 (PARAM)
// 0046f460: PUSH EAX
//   XREF to: 0061e1a2 (DATA)
// 0046f461: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f466: ADD ESP,0xc
// 0046f469: PUSH 0x58
// 0046f46b: PUSH 0x0
// 0046f46d: MOV EAX,0x61e1b4
//   XREF to: 0061e1b4 (PARAM)
// 0046f472: PUSH EAX
//   XREF to: 0061e1b4 (DATA)
// 0046f473: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f478: ADD ESP,0xc
// 0046f47b: PUSH 0x63
// 0046f47d: PUSH 0x0
// 0046f47f: MOV EAX,0x61e1c3
//   XREF to: 0061e1c3 (PARAM)
// 0046f484: PUSH EAX
//   XREF to: 0061e1c3 (DATA)
// 0046f485: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f48a: ADD ESP,0xc
// 0046f48d: PUSH 0x6e
// 0046f48f: PUSH 0x0
// 0046f491: MOV EAX,0x61e1d5
//   XREF to: 0061e1d5 (PARAM)
// 0046f496: PUSH EAX
//   XREF to: 0061e1d5 (DATA)
// 0046f497: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f49c: ADD ESP,0xc
// 0046f49f: PUSH 0x84
// 0046f4a4: PUSH 0x0
// 0046f4a6: MOV EAX,0x61e1e8
//   XREF to: 0061e1e8 (PARAM)
// 0046f4ab: PUSH EAX
//   XREF to: 0061e1e8 (DATA)
// 0046f4ac: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f4b1: ADD ESP,0xc
// 0046f4b4: PUSH 0x8f
// 0046f4b9: PUSH 0x0
// 0046f4bb: MOV EAX,0x61e200
//   XREF to: 0061e200 (PARAM)
// 0046f4c0: PUSH EAX
//   XREF to: 0061e200 (DATA)
// 0046f4c1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f4c6: ADD ESP,0xc
// 0046f4c9: PUSH 0x9a
// 0046f4ce: PUSH 0x0
// 0046f4d0: MOV EAX,0x61e213
//   XREF to: 0061e213 (PARAM)
// 0046f4d5: PUSH EAX
//   XREF to: 0061e213 (DATA)
// 0046f4d6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f4db: ADD ESP,0xc
// 0046f4de: PUSH 0xa5
// 0046f4e3: PUSH 0x0
// 0046f4e5: MOV EAX,0x61e230
//   XREF to: 0061e230 (PARAM)
// 0046f4ea: PUSH EAX
//   XREF to: 0061e230 (DATA)
// 0046f4eb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f4f0: ADD ESP,0xc
// 0046f4f3: PUSH 0xb0
// 0046f4f8: PUSH 0x0
// 0046f4fa: MOV EAX,0x61e23f
//   XREF to: 0061e23f (PARAM)
// 0046f4ff: PUSH EAX
//   XREF to: 0061e23f (DATA)
// 0046f500: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f505: ADD ESP,0xc
// 0046f508: PUSH 0xbb
// 0046f50d: PUSH 0x0
// 0046f50f: MOV EAX,0x61e257
//   XREF to: 0061e257 (PARAM)
// 0046f514: PUSH EAX
//   XREF to: 0061e257 (DATA)
// 0046f515: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f51a: ADD ESP,0xc
// 0046f51d: PUSH 0xc6
// 0046f522: PUSH 0x0
// 0046f524: MOV EAX,0x61e264
//   XREF to: 0061e264 (PARAM)
// 0046f529: PUSH EAX
//   XREF to: 0061e264 (DATA)
// 0046f52a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f52f: ADD ESP,0xc
// 0046f532: PUSH 0xd1
// 0046f537: PUSH 0x0
// 0046f539: MOV EAX,0x61e271
//   XREF to: 0061e271 (PARAM)
// 0046f53e: PUSH EAX
//   XREF to: 0061e271 (DATA)
// 0046f53f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f544: ADD ESP,0xc
// 0046f547: PUSH 0xdc
// 0046f54c: PUSH 0x0
// 0046f54e: MOV EAX,0x61e27f
//   XREF to: 0061e27f (PARAM)
// 0046f553: PUSH EAX
//   XREF to: 0061e27f (DATA)
// 0046f554: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f559: ADD ESP,0xc
// 0046f55c: PUSH 0xe7
// 0046f561: PUSH 0x0
// 0046f563: MOV EAX,0x61e28e
//   XREF to: 0061e28e (PARAM)
// 0046f568: PUSH EAX
//   XREF to: 0061e28e (DATA)
// 0046f569: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f56e: ADD ESP,0xc
// 0046f571: PUSH 0xf2
// 0046f576: PUSH 0x0
// 0046f578: MOV EAX,0x61e2ad
//   XREF to: 0061e2ad (PARAM)
// 0046f57d: PUSH EAX
//   XREF to: 0061e2ad (DATA)
// 0046f57e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f583: ADD ESP,0xc
// 0046f586: PUSH 0xfd
// 0046f58b: PUSH 0x0
// 0046f58d: MOV EAX,0x61e2c5
//   XREF to: 0061e2c5 (PARAM)
// 0046f592: PUSH EAX
//   XREF to: 0061e2c5 (DATA)
// 0046f593: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f598: ADD ESP,0xc
// 0046f59b: PUSH 0x108
// 0046f5a0: PUSH 0x0
// 0046f5a2: MOV EAX,0x61e2dd
//   XREF to: 0061e2dd (PARAM)
// 0046f5a7: PUSH EAX
//   XREF to: 0061e2dd (DATA)
// 0046f5a8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f5ad: ADD ESP,0xc
// 0046f5b0: PUSH 0x113
// 0046f5b5: PUSH 0x0
// 0046f5b7: MOV EAX,0x61e2f5
//   XREF to: 0061e2f5 (PARAM)
// 0046f5bc: PUSH EAX
//   XREF to: 0061e2f5 (DATA)
// 0046f5bd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f5c2: ADD ESP,0xc
// 0046f5c5: PUSH 0x11e
// 0046f5ca: PUSH 0x0
// 0046f5cc: MOV EAX,0x61e305
//   XREF to: 0061e305 (PARAM)
// 0046f5d1: PUSH EAX
//   XREF to: 0061e305 (DATA)
// 0046f5d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f5d7: ADD ESP,0xc
// 0046f5da: PUSH 0x129
// 0046f5df: PUSH 0x0
// 0046f5e1: MOV EAX,0x61e31d
//   XREF to: 0061e31d (PARAM)
// 0046f5e6: PUSH EAX
//   XREF to: 0061e31d (DATA)
// 0046f5e7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f5ec: ADD ESP,0xc
// 0046f5ef: PUSH 0x134
// 0046f5f4: PUSH 0x0
// 0046f5f6: MOV EAX,0x61e332
//   XREF to: 0061e332 (PARAM)
// 0046f5fb: PUSH EAX
//   XREF to: 0061e332 (DATA)
// 0046f5fc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f601: ADD ESP,0xc
// 0046f604: PUSH 0x13f
// 0046f609: PUSH 0x0
// 0046f60b: MOV EAX,0x61e33f
//   XREF to: 0061e33f (PARAM)
// 0046f610: PUSH EAX
//   XREF to: 0061e33f (DATA)
// 0046f611: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f616: ADD ESP,0xc
// 0046f619: PUSH 0x14a
// 0046f61e: PUSH 0x0
// 0046f620: MOV EAX,0x61e34f
//   XREF to: 0061e34f (PARAM)
// 0046f625: PUSH EAX
//   XREF to: 0061e34f (DATA)
// 0046f626: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f62b: ADD ESP,0xc
// 0046f62e: PUSH 0x155
// 0046f633: PUSH 0x0
// 0046f635: MOV EAX,0x61e35e
//   XREF to: 0061e35e (PARAM)
// 0046f63a: PUSH EAX
//   XREF to: 0061e35e (DATA)
// 0046f63b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046f640: ADD ESP,0xc
// 0046f643: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046f648: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046f64d: AND EAX,0xff
// 0046f652: PUSH EAX
// 0046f653: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0046f658: ADD ESP,0x4
// 0046f65b: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046f65e: CMP dword ptr [EBP + -0x4],0x48
//   XREF to: Stack[-0x14] (READ)
// 0046f662: JNZ 0x0046f672
//   XREF to: 0046f672 (CONDITIONAL_JUMP)
// 0046f664: MOV EAX,0x61e36d
//   XREF to: 0061e36d (PARAM)
// 0046f669: PUSH EAX
//   XREF to: 0061e36d (DATA)
// 0046f66a: CALL shape_design.c_showHelpFile_FUN_00457f00
//   XREF to: 00457f00 (UNCONDITIONAL_CALL)
// 0046f66f: ADD ESP,0x4
// 0046f672: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046f672
//   XREF to: Stack[-0x14] (READ)
// 0046f675: MOV dword ptr [EBP + -0x58],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0046f678: JMP 0x0046f850
//   XREF to: 0046f850 (UNCONDITIONAL_JUMP)
// 0046f67d: CALL shape_design.c_showPointEditor_FUN_0045c6c0
//   Label: caseD_31
//   XREF to: 0045c6c0 (UNCONDITIONAL_CALL)
// 0046f682: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f687: CALL shape_design.c_showFacetPartEditor_FUN_0045f1d0
//   Label: caseD_32
//   XREF to: 0045f1d0 (UNCONDITIONAL_CALL)
// 0046f68c: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f691: CALL shape_design.c_showModelEditor_FUN_00461aa0
//   Label: caseD_33
//   XREF to: 00461aa0 (UNCONDITIONAL_CALL)
// 0046f696: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f69b: CALL shape_design.c_centerObject_FUN_00466610
//   Label: caseD_34
//   XREF to: 00466610 (UNCONDITIONAL_CALL)
// 0046f6a0: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6a5: CALL shape_design.c_turnModelInsideOut_FUN_004671e0
//   Label: caseD_35
//   XREF to: 004671e0 (UNCONDITIONAL_CALL)
// 0046f6aa: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6af: CALL shape_design.c_simpleTexture_FUN_00467350
//   Label: caseD_36
//   XREF to: 00467350 (UNCONDITIONAL_CALL)
// 0046f6b4: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6b9: CALL shape_design.c_scaleModel_FUN_00467e70
//   Label: caseD_37
//   XREF to: 00467e70 (UNCONDITIONAL_CALL)
// 0046f6be: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6c3: PUSH 0x1
//   Label: caseD_38
// 0046f6c5: PUSH 0xbf800000
// 0046f6ca: PUSH 0x3dcccccd
// 0046f6cf: CALL shape_design.c_vertexReducer_FUN_00467850
//   XREF to: 00467850 (UNCONDITIONAL_CALL)
// 0046f6d4: ADD ESP,0xc
// 0046f6d7: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6dc: CALL shape_design.c_polygonReducer_FUN_004654e0
//   Label: caseD_39
//   XREF to: 004654e0 (UNCONDITIONAL_CALL)
// 0046f6e1: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6e6: CALL shape_design.c_groundCenterObject_FUN_00466a30
//   Label: caseD_41
//   XREF to: 00466a30 (UNCONDITIONAL_CALL)
// 0046f6eb: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6f0: CALL shape_design.c_createKeyframeModel_FUN_00468320
//   Label: caseD_42
//   XREF to: 00468320 (UNCONDITIONAL_CALL)
// 0046f6f5: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f6fa: CALL shape_design.c_squashShapeFor3DMorph_FUN_004685e0
//   Label: caseD_43
//   XREF to: 004685e0 (UNCONDITIONAL_CALL)
// 0046f6ff: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f704: CALL shape_design.c_crushModel_FUN_00469bd0
//   Label: caseD_44
//   XREF to: 00469bd0 (UNCONDITIONAL_CALL)
// 0046f709: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f70e: CALL shape_design.c_createCenterVertex_FUN_00469690
//   Label: caseD_45
//   XREF to: 00469690 (UNCONDITIONAL_CALL)
// 0046f713: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f718: CALL shape_design.c_generateGlobe_FUN_00468910
//   Label: caseD_46
//   XREF to: 00468910 (UNCONDITIONAL_CALL)
// 0046f71d: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f722: CALL shape_design.c_generateShell_FUN_00468f20
//   Label: caseD_47
//   XREF to: 00468f20 (UNCONDITIONAL_CALL)
// 0046f727: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f72c: CALL shape_design.c_generateOctant_FUN_00469420
//   Label: caseD_49
//   XREF to: 00469420 (UNCONDITIONAL_CALL)
// 0046f731: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f736: CALL shape_design.c_scaleXYZ_FUN_00467f30
//   Label: caseD_4a
//   XREF to: 00467f30 (UNCONDITIONAL_CALL)
// 0046f73b: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f740: CALL shape_design.c_sizeModelInOneDimension_FUN_00469850
//   Label: caseD_4b
//   XREF to: 00469850 (UNCONDITIONAL_CALL)
// 0046f745: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f74a: CALL shape_design.c_sizeModelToXFeet_FUN_00466e40
//   Label: caseD_4c
//   XREF to: 00466e40 (UNCONDITIONAL_CALL)
// 0046f74f: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f754: CALL shape_design.c_sizeModelToYFeet_FUN_00467010
//   Label: caseD_4d
//   XREF to: 00467010 (UNCONDITIONAL_CALL)
// 0046f759: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f75e: CALL shape_design.c_sizeModelToZFeet_FUN_00466c70
//   Label: caseD_4e
//   XREF to: 00466c70 (UNCONDITIONAL_CALL)
// 0046f763: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f768: CALL shape_design.c_sizeForStadium_FUN_00469c70
//   Label: caseD_4f
//   XREF to: 00469c70 (UNCONDITIONAL_CALL)
// 0046f76d: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f772: CALL shape_design.c_combineTextureMaps_FUN_00469ee0
//   Label: caseD_50
//   XREF to: 00469ee0 (UNCONDITIONAL_CALL)
// 0046f777: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f77c: PUSH 0x1
//   Label: caseD_51
// 0046f77e: PUSH 0x0
// 0046f780: CALL shape_design.c_tileTextureMaps_FUN_0046a180
//   XREF to: 0046a180 (UNCONDITIONAL_CALL)
// 0046f785: ADD ESP,0x8
// 0046f788: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f78d: CALL shape_design.c_multicramTextures_FUN_0046eb80
//   Label: caseD_52
//   XREF to: 0046eb80 (UNCONDITIONAL_CALL)
// 0046f792: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f797: CALL shape_design.c_detachFaces_FUN_0046eba0
//   Label: caseD_53
//   XREF to: 0046eba0 (UNCONDITIONAL_CALL)
// 0046f79c: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f7a1: CALL shape_design.c_smoothMesh_FUN_0046ed00
//   Label: caseD_54
//   XREF to: 0046ed00 (UNCONDITIONAL_CALL)
// 0046f7a6: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f7ab: CALL shape_design.c_bisectMesh_FUN_0046ed50
//   Label: caseD_55
//   XREF to: 0046ed50 (UNCONDITIONAL_CALL)
// 0046f7b0: JMP 0x0046f86f
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f7b5: JMP 0x0046f86f
//   Label: caseD_48
//   XREF to: 0046f86f (UNCONDITIONAL_JUMP)
// 0046f850: MOV EAX,dword ptr [EBP + -0x58]
//   Label: LAB_0046f850
//   XREF to: Stack[-0x68] (READ)
// 0046f853: SUB EAX,0x31
// 0046f856: MOV dword ptr [EBP + -0x5c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0046f859: CMP dword ptr [EBP + -0x5c],0x24
//   XREF to: Stack[-0x6c] (READ)
// 0046f85d: JA 0x0046f7b5
//   XREF to: 0046f7b5 (CONDITIONAL_JUMP)
// 0046f863: MOV EAX,dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 0046f866: SHL EAX,0x2
// 0046f869: JMP dword ptr [EAX + 0x46f7bc]
//   Label: switchD
//   XREF to: 0046f67d (COMPUTED_JUMP)
//   XREF to: 0046f687 (COMPUTED_JUMP)
//   XREF to: 0046f691 (COMPUTED_JUMP)
//   XREF to: 0046f69b (COMPUTED_JUMP)
//   XREF to: 0046f6a5 (COMPUTED_JUMP)
//   XREF to: 0046f6af (COMPUTED_JUMP)
//   XREF to: 0046f6b9 (COMPUTED_JUMP)
//   XREF to: 0046f6c3 (COMPUTED_JUMP)
//   XREF to: 0046f6dc (COMPUTED_JUMP)
//   XREF to: 0046f6e6 (COMPUTED_JUMP)
//   XREF to: 0046f6f0 (COMPUTED_JUMP)
//   XREF to: 0046f6fa (COMPUTED_JUMP)
//   XREF to: 0046f704 (COMPUTED_JUMP)
//   XREF to: 0046f70e (COMPUTED_JUMP)
//   XREF to: 0046f718 (COMPUTED_JUMP)
//   XREF to: 0046f722 (COMPUTED_JUMP)
//   XREF to: 0046f72c (COMPUTED_JUMP)
//   XREF to: 0046f736 (COMPUTED_JUMP)
//   XREF to: 0046f740 (COMPUTED_JUMP)
//   XREF to: 0046f74a (COMPUTED_JUMP)
//   XREF to: 0046f754 (COMPUTED_JUMP)
//   XREF to: 0046f75e (COMPUTED_JUMP)
//   XREF to: 0046f768 (COMPUTED_JUMP)
//   XREF to: 0046f772 (COMPUTED_JUMP)
//   XREF to: 0046f77c (COMPUTED_JUMP)
//   XREF to: 0046f78d (COMPUTED_JUMP)
//   XREF to: 0046f797 (COMPUTED_JUMP)
//   XREF to: 0046f7a1 (COMPUTED_JUMP)
//   XREF to: 0046f7ab (COMPUTED_JUMP)
//   XREF to: 0046f7b5 (COMPUTED_JUMP)
//   XREF to: 0046f7bc (DATA)
// 0046f86f: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0046f86f
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046f874: CALL shape_design.c_handleEditorHotkeys_FUN_0045b990
//   XREF to: 0045b990 (UNCONDITIONAL_CALL)
// 0046f879: CMP dword ptr [EBP + -0x4],0x1b
//   XREF to: Stack[-0x14] (READ)
// 0046f87d: JZ 0x0046f884
//   XREF to: 0046f884 (CONDITIONAL_JUMP)
// 0046f87f: JMP 0x0046f3ca
//   XREF to: 0046f3ca (UNCONDITIONAL_JUMP)
// 0046f884: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0046f884
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046f889: MOV ESP,EBP
// 0046f88b: POP EBP
// 0046f88c: POP EDI
// 0046f88d: POP ESI
// 0046f88e: POP EBX
// 0046f88f: RET
