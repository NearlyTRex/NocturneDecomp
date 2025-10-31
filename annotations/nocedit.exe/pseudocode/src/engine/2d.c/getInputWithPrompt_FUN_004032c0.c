// Name: engine_2d.c_getInputWithPrompt_FUN_004032c0
// Address: 004032c0
// Address Range: [[004032c0, 00403396]]
// Convention: __cdecl
// Signature: int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, char * prompt)
// Cross-references:
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c579 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eacd [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580cae [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004681c1 [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 0046675c [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045eab1 [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 00469f04 [UNCONDITIONAL_CALL]
//   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 (00465810) at 00465846 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 004655ea [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 004617dc [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046c525 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e55b [UNCONDITIONAL_CALL]
//   shape_design.c_createCenterVertex_FUN_00469690 (00469690) at 00469744 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 00468420 [UNCONDITIONAL_CALL]
//   shape_design.c_createPolygonFromVertexList_FUN_0045cc80 (0045cc80) at 0045ccad [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e0c1 [UNCONDITIONAL_CALL]
//   shape_design.c_deletePolygonRange_FUN_0045dd70 (0045dd70) at 0045dd91 [UNCONDITIONAL_CALL]
//   shape_design.c_deleteSinglePolygon_FUN_0045dcc0 (0045dcc0) at 0045dce1 [UNCONDITIONAL_CALL]
//   shape_design.c_generateGlobe_FUN_00468910 (00468910) at 00468940 [UNCONDITIONAL_CALL]
//   shape_design.c_generateOctant_FUN_00469420 (00469420) at 004694e2 [UNCONDITIONAL_CALL]
//   shape_design.c_generateShell_FUN_00468f20 (00468f20) at 00468fe2 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 00466061 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 00465eb1 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e86f [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045a7d6 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonReducer_FUN_004654e0 (004654e0) at 00465501 [UNCONDITIONAL_CALL]
//   shape_design.c_promptForModelNameAndLoad_FUN_00458a10 (00458a10) at 00458a31 [UNCONDITIONAL_CALL]
//   shape_design.c_saveCurrentModel_FUN_00459de0 (00459de0) at 00459e01 [UNCONDITIONAL_CALL]
//   shape_design.c_scaleModel_FUN_00467e70 (00467e70) at 00467e96 [UNCONDITIONAL_CALL]
//   shape_design.c_scaleXYZ_FUN_00467f30 (00467f30) at 00467f51 [UNCONDITIONAL_CALL]
//   shape_design.c_selectModelPart_FUN_0045de80 (0045de80) at 0045de9c [UNCONDITIONAL_CALL]
//   shape_design.c_selectVertexToDelete_FUN_0045c5b0 (0045c5b0) at 0045c5cc [UNCONDITIONAL_CALL]
//   shape_design.c_selectVertexToMove_FUN_0045c530 (0045c530) at 0045c54c [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 00467371 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeForStadium_FUN_00469c70 (00469c70) at 00469d20 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 004699ab [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToXFeet_FUN_00466e40 (00466e40) at 00466e6f [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToYFeet_FUN_00467010 (00467010) at 0046703f [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToZFeet_FUN_00466c70 (00466c70) at 00466c9f [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a6f4 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ecb1 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 0046794d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_0061322f
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl
engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  char acStack_10c [252];
  
  *buffer = '\0';
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar4 = 0;
  do {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef0,"%s%s_    ",in_stack_00000018,buffer);
    engine_2d_c_drawText_FUN_00401fd0(acStack_10c,x,y);
    builtin_strncpy(acStack_10c,"\x183@",4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    builtin_strncpy(acStack_10c + 4,"\x1d3@",4);
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    uVar3 = uVar2 & 0xff;
    if (uVar3 == 0xd) {
LAB_0040337b:
      acStack_10c[8] = -0x80;
      acStack_10c[9] = '3';
      acStack_10c[10] = '@';
      acStack_10c[0xb] = '\0';
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      acStack_10c[0xc] = -0x7b;
      acStack_10c[0xd] = '3';
      acStack_10c[0xe] = '@';
      acStack_10c[0xf] = '\0';
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return max_length;
    }
    if (uVar3 == 0x1b) {
      *buffer = '\0';
      goto LAB_0040337b;
    }
    if ((uVar3 == 8) && (0 < iVar4)) {
      iVar4 = iVar4 + -1;
      buffer[iVar4] = '\0';
    }
    if (((0x1f < uVar3) && (uVar3 < 0x80)) && (iVar4 < in_stack_0000001c)) {
      pcVar1 = buffer + iVar4;
      iVar4 = iVar4 + 1;
      *pcVar1 = (char)uVar2;
      buffer[iVar4] = '\0';
    }
  } while( true );
}


// Assembly code:
// 004032c0: PUSH EBX
//   Label: engine_2d.c_getInputWithPrompt_FUN_004032c0
// 004032c1: PUSH ESI
// 004032c2: PUSH EDI
// 004032c3: PUSH EBP
// 004032c4: SUB ESP,0x104
// 004032ca: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 004032d1: MOV EBP,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 004032d8: MOV EDI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 004032df: MOV byte ptr [ESI],0x0
// 004032e2: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004032e7: XOR EBX,EBX
// 004032e9: PUSH ESI
//   Label: LAB_004032e9
// 004032ea: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0x14] (READ)
// 004032f1: PUSH EDX
// 004032f2: PUSH 0x61322f
//   XREF to: 0061322f (DATA)
// 004032f7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 004032fb: PUSH EAX
// 004032fc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00403301: ADD ESP,0x10
// 00403304: PUSH EDI
// 00403305: PUSH EBP
// 00403306: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0040330a: PUSH EAX
// 0040330b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00403310: ADD ESP,0xc
// 00403313: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00403318: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0040331d: AND EAX,0xff
// 00403322: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00403329: CMP EAX,0xd
// 0040332c: JZ 0x0040337b
//   XREF to: 0040337b (CONDITIONAL_JUMP)
// 0040332e: CMP EAX,0x1b
// 00403331: JZ 0x00403378
//   XREF to: 00403378 (CONDITIONAL_JUMP)
// 00403333: CMP EAX,0x8
// 00403336: JNZ 0x00403343
//   XREF to: 00403343 (CONDITIONAL_JUMP)
// 00403338: TEST EBX,EBX
// 0040333a: JLE 0x00403343
//   XREF to: 00403343 (CONDITIONAL_JUMP)
// 0040333c: DEC EBX
// 0040333d: LEA EAX,[ESI + EBX*0x1]
// 00403340: MOV byte ptr [EAX],0x0
// 00403343: MOV ECX,dword ptr [ESP + 0x100]
//   Label: LAB_00403343
//   XREF to: Stack[-0x14] (READ)
// 0040334a: CMP ECX,0x1f
// 0040334d: JLE 0x004032e9
//   XREF to: 004032e9 (CONDITIONAL_JUMP)
// 0040334f: CMP ECX,0x80
// 00403355: JGE 0x004032e9
//   XREF to: 004032e9 (CONDITIONAL_JUMP)
// 00403357: CMP EBX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 0040335e: JGE 0x004032e9
//   XREF to: 004032e9 (CONDITIONAL_JUMP)
// 00403360: LEA EAX,[ESI + EBX*0x1]
// 00403363: MOV DL,byte ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 0040336a: INC EBX
// 0040336b: MOV byte ptr [EAX],DL
// 0040336d: LEA EAX,[ESI + EBX*0x1]
// 00403370: MOV byte ptr [EAX],0x0
// 00403373: JMP 0x004032e9
//   XREF to: 004032e9 (UNCONDITIONAL_JUMP)
// 00403378: MOV byte ptr [ESI],0x0
//   Label: LAB_00403378
// 0040337b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0040337b
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00403380: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00403385: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 0040338c: ADD ESP,0x104
// 00403392: POP EBP
// 00403393: POP EDI
// 00403394: POP ESI
// 00403395: POP EBX
// 00403396: RET
