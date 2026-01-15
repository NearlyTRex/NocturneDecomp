// Name: shape_design.c_showShapeEditorMenu_FUN_0046f290
// Address: 0046f290
// Address Range: [[0046f290, 0046f7b9] [0046f850, 0046f88f]]
// Convention: __cdecl
// Signature: void shape_design.c_showShapeEditorMenu_FUN_0046f290(void)

#include "nocturne.h"

void __cdecl shape_design_c_showShapeEditorMenu_FUN_0046f290(void)

{
  uint uVar1;
  char local_64 [80];
  int local_14;
  
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
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_64,"Demented Shape Editor    Build date: %s %s","Jan 10 2000",
               "12:03:47");
    engine_2d_c_drawText_FUN_00401fd0(local_64,0,0);
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
    local_14 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
    if (local_14 == 0x48) {
      shape_design_c_showHelpFile_FUN_00457f00("editmain.hlp");
    }
    switch(local_14) {
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
  } while (local_14 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
