// Name: shape_design.c_showFacetPartEditor_FUN_0045f1d0
// Address: 0045f1d0
// Address Range: [[0045f1d0, 00460724] [00460a08, 00460a0e]]
// Convention: __cdecl
// Signature: void shape_design.c_showFacetPartEditor_FUN_0045f1d0(void)

#include "nocturne.h"

void __cdecl shape_design_c_showFacetPartEditor_FUN_0045f1d0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar6;
  SShapeEditorPolygon *pSVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  ushort rotX;
  char *rotation_x;
  char *buffer;
  char *pcVar12;
  char *buffer_00;
  ulonglong uVar13;
  ushort rotY;
  char *rotation_y;
  ushort rotZ;
  ulonglong uVar14;
  char *pcVar15;
  char *y;
  char *text;
  double dVar16;
  
  bVar8 = 0;
  fVar9 = (float10)fptan((float10)60.0 * (float10)3.1415926535000001 * (float10)0.0055555555555555497
                         * (float10)0.5);
  fVar10 = (float10)fptan((float10)60.0 * (float10)3.1415926535000001 * (float10)0.0055555555555555497
                          * (float10)0.5);
  pcVar15 = (char *)(((float)(((float10)g_WindowWidth * (float10)0.5) / fVar9) /
                     ((float)g_WindowWidth * (float)0.5)) *
                    (float)65536);
  pcVar12 = (char *)(((float)(((float10)g_WindowHeight * (float10)0.5) / fVar10) /
                     ((float)g_WindowHeight * (float)0.5)) *
                    (float)65536);
  iVar2 = shape_design_c_checkVertexCountLimit_FUN_00460a10();
  if (iVar2 == 0) {
    rotation_x = (char *)0x0;
    rotation_y = (char *)0x0;
    uVar3 = 0;
    buffer = (char *)0x0;
    y = (char *)0x0;
    buffer_00 = (char *)0xffff0000;
    g_ProjectionScale = 0x10000;
    engine_2d_c_getTextColor_FUN_00402830();
    dVar11 = (double)(ulonglong)uVar3;
    engine_2d_c_setTextColor_FUN_00402840((int)(&g_EditorColorIndices)[g_CurrentModelIndex]);
    g_CurrentPartIndex = -1;
    g_SelectedPolygonIndex = -1;
    g_SecondaryPolygonIndex = -1;
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_resetGraphicsSystem_FUN_005ed2a0();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    do {
      rotZ = SUB82 /* extract 2-byte value */(dVar11,0);
      rotY = (ushort)rotation_y;
      rotX = (ushort)rotation_x;
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
      wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
      wincore_windll_cpp_beginScene_FUN_005b7280();
      if (g_UseExternalRenderer == 0) {
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
      }
      else {
        wincore_windll_cpp_clearZBuffer_FUN_005b7be0();
      }
      iVar4 = g_ClipTop;
      iVar2 = g_ClipLeft;
      if (g_UseExternalRenderer == 0) {
        engine_2d_c_fillRectColor_FUN_00403170
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1,
                   (int)(&g_EditorBackgroundColors)[g_CurrentModelIndex]);
      }
      else {
        g_ClipLeft = 0;
        g_ClipTop = 0;
        g_ClipBottom = g_WindowHeight + -1;
        iVar5 = g_ClipRight;
        g_ClipRight = g_WindowWidth + -1;
        iVar1 = 0x45f3e3;
        wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50
                  ((int)(&g_EditorBackgroundColors)[g_CurrentModelIndex]);
        g_ClipBottom = iVar1;
        g_ClipRight = iVar5;
        g_ClipTop = iVar4;
        g_ClipLeft = iVar2;
      }
      engine_light_cpp_setDirectionalLightVector_FUN_005054d0(0,-0xb4fd,0xb4fd);
      engine_light_cpp_setAmbientLightLevel_FUN_00505490(32000);
      engine_matrix_c_setCameraRotation_FUN_0050e290(0,0,0);
      engine_matrix_c_setCameraOrigin_FUN_0050e270((int)buffer,(int)y,(int)buffer_00);
      engine_3d_c_processCameraRelativePoint_FUN_004037e0((CQuaternion4f *)&stack0xffffff98);
      engine_matrix_c_matrixPushAndTransform_FUN_0050cee0(rotX,rotY,rotZ,0,0,0);
      if (g_WireframeMode != 0) {
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)(float)pcVar15);
        iVar2 = (int)ROUND(dVar11);
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)(float)pcVar12);
        iVar4 = (int)ROUND(dVar11);
        g_TransformMatrix.m[0].x =
             (uint)((longlong)iVar2 * (longlong)g_TransformMatrix.m[0].x) >> 0x10 |
             (int)((ulonglong)((longlong)iVar2 * (longlong)g_TransformMatrix.m[0].x) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[1].x =
             (uint)((longlong)iVar2 * (longlong)g_TransformMatrix.m[1].x) >> 0x10 |
             (int)((ulonglong)((longlong)iVar2 * (longlong)g_TransformMatrix.m[1].x) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[2].x =
             (uint)((longlong)iVar2 * (longlong)g_TransformMatrix.m[2].x) >> 0x10 |
             (int)((ulonglong)((longlong)iVar2 * (longlong)g_TransformMatrix.m[2].x) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[0].y =
             (uint)((longlong)iVar4 * (longlong)g_TransformMatrix.m[0].y) >> 0x10 |
             (int)((ulonglong)((longlong)iVar4 * (longlong)g_TransformMatrix.m[0].y) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[1].y =
             (uint)((longlong)iVar4 * (longlong)g_TransformMatrix.m[1].y) >> 0x10 |
             (int)((ulonglong)((longlong)iVar4 * (longlong)g_TransformMatrix.m[1].y) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[2].y =
             (uint)((longlong)iVar4 * (longlong)g_TransformMatrix.m[2].y) >> 0x10 |
             (int)((ulonglong)((longlong)iVar4 * (longlong)g_TransformMatrix.m[2].y) >> 0x20) <<
             0x10;
      }
      shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0();
      wincore_windll_cpp_endScene_FUN_005b72a0();
      wincore_windll_cpp_lockFrame_FUN_005b7210();
      shape_design_c_renderEditorBackgroundOverlay_FUN_0045d920();
      shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0();
      shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(g_SelectedPolygonIndex);
      g_SelectionBlinkTimer = 1 - g_SelectionBlinkTimer;
      if (g_KeyboardState[0xd] != '\0') {
        g_KeyboardState[0xd] = '\0';
        g_ProjectionScale = g_ProjectionScale + -0x1000;
        if (g_ProjectionScale < 0x1000) {
          g_ProjectionScale = 0x1000;
        }
      }
      if (g_KeyboardState[0xc] != '\0') {
        g_KeyboardState[0xc] = '\0';
        g_ProjectionScale = g_ProjectionScale + 0x1000;
        if (0x1000000 < g_ProjectionScale) {
          g_ProjectionScale = 0x1000000;
        }
      }
      if ((g_KeyboardState[0x1e] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x1e] = '\0';
        shape_design_c_clampAndTransformUVCoordinates_FUN_0045f080();
      }
      if (g_KeyboardState[0x4e] != '\0') {
        g_EditorDetailLevel = g_EditorDetailLevel + 0x800;
        if (0xffff < g_EditorDetailLevel) {
          g_EditorDetailLevel = 0xffff;
        }
        engine_texture_cpp_doNothing_FUN_005dd8f0();
        g_KeyboardState[0x4e] = '\0';
      }
      if (g_KeyboardState[0x4a] != '\0') {
        g_EditorDetailLevel = g_EditorDetailLevel + -0x800;
        if (g_EditorDetailLevel < 0) {
          g_EditorDetailLevel = 0;
        }
        engine_texture_cpp_doNothing_FUN_005dd8f0();
        g_KeyboardState[0x4a] = '\0';
      }
      if (g_EditorDetailLevel < 0xffff) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Detail : %04x / %05d");
        engine_2d_c_drawTextColor_FUN_00402430
                  (&stack0xffffff48,
                   ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                         (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + 0x19,
                   g_WindowHeight + -0x2c);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Renderer : %s");
      engine_2d_c_drawTextColor_FUN_00402430
                (&stack0xffffff48,
                 ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                       (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + 0x19,g_WindowHeight + -0x21
                );
      iVar2 = g_WindowWidth >> 0x1f;
      if (g_GouraudShadingEnabled == 1) {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Gouraud : on",
                   ((int)((g_WindowWidth + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) + 0x19,
                   g_WindowHeight + -0x16);
      }
      else {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Gouraud : off",
                   ((int)((g_WindowWidth + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) + 0x19,
                   g_WindowHeight + -0x16);
      }
      iVar2 = engine_2d_c_getStringWidth_FUN_004018a0("Gouraud : off   ");
      iVar4 = g_WindowWidth >> 0x1f;
      if (g_ZBufferEnabled == 1) {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Z-buffer : on",
                   ((int)((g_WindowWidth + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + 0x19 +
                   iVar2,g_WindowHeight + -0x16);
      }
      else {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Z-buffer : off",
                   ((int)((g_WindowWidth + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + 0x19 +
                   iVar2,g_WindowHeight + -0x16);
      }
      if (g_CurrentPartIndex == -1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,&s_EmptyChar_0061b79a);
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Current part : %s");
      }
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,0,0);
      iVar2 = engine_2d_c_getStringWidth_FUN_004018a0("Polygons");
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Points");
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,g_WindowWidth / 2 + 10,0);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48," : %d");
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,g_WindowWidth / 2 + 10 + iVar2,0);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Polygons");
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,g_WindowWidth / 2 + 10,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48," : %d");
      rotation_x = (char *)0x45fb21;
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,g_WindowWidth / 2 + 10 + iVar2,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Parts");
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,g_WindowWidth / 2 + 10,0x16);
      pcVar15 = " : %d";
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48," : %d");
      engine_2d_c_drawTextColor_FUN_00402430
                (&stack0xffffff48,(int)(pcVar15 + g_WindowWidth / 2 + 10),0x16);
      pcVar12 = "Zoom : %4.2f  FOV : %4.1f";
      buffer = &stack0xffffff48;
      crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"Zoom : %4.2f  FOV : %4.1f");
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,g_WindowWidth / 2 + 10,0x2c);
      if ((g_KeyboardState[0x13] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x13] = '\0';
        g_EditorTextureMode = g_EditorTextureMode + 1;
        if (4 < g_EditorTextureMode) {
          g_EditorTextureMode = 0;
        }
      }
      if (g_KeyboardState[0x13] != '\0') {
        g_KeyboardState[0x13] = '\0';
        rotation_x = (char *)0x0;
        buffer = (char *)0x0;
        g_ProjectionScale = 0x10000;
      }
      if ((g_KeyboardState[0x2e] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x2e] = '\0';
        g_CurrentModelIndex = (g_CurrentModelIndex + 1) % g_ModelCount;
        engine_2d_c_setTextColor_FUN_00402840((int)(&g_EditorColorIndices)[g_CurrentModelIndex]);
      }
      if (g_KeyboardState[0x2e] != '\0') {
        g_KeyboardState[0x2e] = '\0';
        g_EditorColorIndex = g_EditorColorIndex + 1;
        if (0xf < g_EditorColorIndex) {
          g_EditorColorIndex = 0;
        }
      }
      g_ActiveRenderColor = g_ColorLookupTable[g_EditorColorIndex];
      uVar3 = g_WindowWidth - 10;
      while (uVar13 = (ulonglong)uVar3, (int)uVar3 < g_WindowWidth) {
        for (iVar2 = g_WindowHeight + -10; iVar2 < g_WindowHeight; iVar2 = iVar2 + 1) {
          engine_2d_c_plotPixel_FUN_00401140((int)uVar13,iVar2);
        }
        uVar3 = (int)uVar13 + 1;
      }
      if ((g_KeyboardState[0x14] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x14] = '\0';
        g_EditorColorMode = g_EditorColorMode + 1;
        if (0xf < g_EditorColorMode) {
          g_EditorColorMode = 0;
        }
      }
      if ((g_KeyboardState[0x18] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x18] = '\0';
        g_EditorCurrentTexture = (g_EditorCurrentTexture + 1) % g_ModelCount;
      }
      if ((g_KeyboardState[0x21] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
        g_KeyboardState[0x21] = '\0';
        g_WireframeMode = 1 - g_WireframeMode;
      }
      if (g_KeyboardState[0x34] != '\0') {
        g_KeyboardState[0x34] = '\0';
        if (g_KeyboardState[0x1d] == '\0') {
          g_SelectedPolygonIndex = g_SelectedPolygonIndex + 1;
          if (g_PolygonCount <= g_SelectedPolygonIndex) {
            g_SelectedPolygonIndex = -1;
          }
        }
        else {
          g_SelectedPolygonIndex = g_SelectedPolygonIndex + -1;
          if (g_SelectedPolygonIndex < 0) {
            g_SelectedPolygonIndex = g_PolygonCount + -1;
          }
        }
      }
      if (g_LoadedModelName[0] == '\0') {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"No model loaded");
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"%s");
      }
      engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff48,0,g_WindowHeight + -0x21);
      dVar11 = (double)(int)buffer * 1.52587890625e-05;
      rotation_y = "X: %0.4f Y: %0.4f Z: %0.4f";
      buffer_00 = &stack0xffffff48;
      crt_stdio_c_sprintf_FUN_005fdbd0(buffer_00,"X: %0.4f Y: %0.4f Z: %0.4f");
      engine_2d_c_drawTextColor_FUN_00402430
                (&stack0xffffff48,
                 ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                       (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + 0x19,g_WindowHeight + -0xb)
      ;
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"P: %x B: %x H: %x");
      pcVar15 = &stack0xffffff48;
      iVar2 = 0x45ff6d;
      engine_2d_c_drawTextColor_FUN_00402430(pcVar15,0,g_WindowHeight + -0xb);
      if (g_SelectedPolygonIndex == -1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"No polygon selected");
      }
      else {
        pcVar15 = (char *)0x45ffa8;
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Selected polygon : %d");
      }
      text = &stack0xffffff48;
      y = (char *)0x45ffc2;
      engine_2d_c_drawTextColor_FUN_00402430(text,0,g_WindowHeight + -0x16);
      if (g_SelectedPolygonIndex != -1) {
        if ((g_KeyboardState[0x16] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
          g_KeyboardState[0x16] = '\0';
          g_ShowUVCoordinates = g_ShowUVCoordinates ^ 1;
        }
        if ((g_KeyboardState[0x17] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
          g_KeyboardState[0x17] = '\0';
          g_ShowVertexCoordinates = g_ShowVertexCoordinates ^ 1;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"V order : %3d %3d %3d   N : %d");
        engine_2d_c_drawTextColor_FUN_00402430
                  (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + -0x16);
        dVar16 = (double)g_ModelPolygonData[g_SelectedPolygonIndex].normal.x;
        y = "Normal : %6.2f %6.2f %6.2f";
        pcVar15 = &stack0xffffff48;
        uVar14 = 0x4600ed00000000;
        crt_stdio_c_sprintf_FUN_005fdbd0(pcVar15,"Normal : %6.2f %6.2f %6.2f");
        engine_2d_c_drawTextColor_FUN_00402430
                  (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + -0xb);
        shape_design_c_calculatePolygonAngularArea_FUN_00461ee0
                  (g_ModelPolygonData + g_SelectedPolygonIndex);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Angle sum : %10.6lf");
        engine_2d_c_drawTextColor_FUN_00402430
                  (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + -0x21);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Part number : %d (%s)");
        engine_2d_c_drawTextColor_FUN_00402430
                  (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + -0x37);
        if (g_ModelPolygonData[g_SelectedPolygonIndex].lightmap_name[0] == '\0') {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Texture : %s");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"Texture : %s (%s)");
        }
        engine_2d_c_drawTextColor_FUN_00402430
                  (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + -0x42);
        if (g_ShowUVCoordinates != 0) {
          engine_2d_c_drawTextColor_FUN_00402430
                    ("UVs :",g_WindowWidth / 2 + 10,g_WindowHeight + -0x84);
          for (iVar2 = 0;
              iVar2 < (int)g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices_count;
              iVar2 = iVar2 + 1) {
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"%03d : %010.6f %010.6f / %08.6f %08.6f");
            engine_2d_c_drawTextColor_FUN_00402430
                      (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + (0xb - iVar2) * -0xb
                      );
          }
        }
        iVar2 = (int)((ulonglong)uVar14 >> 0x20);
        text = SUB84 /* extract 2-byte value */(dVar16,0);
        if (g_ShowVertexCoordinates != 0) {
          engine_2d_c_drawTextColor_FUN_00402430
                    ("Vertices :",g_WindowWidth / 2 + 10,g_WindowHeight + -0x84);
          iVar4 = 0;
          while( true ) {
            iVar2 = (int)((ulonglong)uVar14 >> 0x20);
            text = SUB84 /* extract 2-byte value */(dVar16,0);
            if ((int)g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices_count <= iVar4)
            break;
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff48,"%03d : %+011.6f %+011.6f %+011.6f");
            engine_2d_c_drawTextColor_FUN_00402430
                      (&stack0xffffff48,g_WindowWidth / 2 + 10,g_WindowHeight + (0xb - iVar4) * -0xb
                      );
            iVar4 = iVar4 + 1;
          }
        }
      }
      if ((g_KeyboardState[0x16] != '\0') && (g_CurrentPartIndex != -1)) {
        g_KeyboardState[0x16] = '\0';
        g_ModelPolygonData[g_SelectedPolygonIndex].material_id = g_EditorColorIndex;
        g_ModelPolygonData[g_SelectedPolygonIndex].part_assignment = g_CurrentPartIndex;
      }
      if ((g_KeyboardState[0x31] != '\0') && (g_SelectedPolygonIndex != -1)) {
        g_KeyboardState[0x31] = '\0';
        pSVar6 = g_ModelPolygonData + g_SelectedPolygonIndex;
        pSVar7 = g_ModelPolygonData + g_PolygonCount;
        for (iVar4 = 0x61; iVar4 != 0; iVar4 = iVar4 + -1) {
          pSVar7->polygon_type = pSVar6->polygon_type;
          pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar7 = (SShapeEditorPolygon *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
        }
        uVar3 = g_ModelPolygonData[g_PolygonCount].vertex_indices_count;
        for (iVar4 = 0; iVar4 < (int)uVar3; iVar4 = iVar4 + 1) {
          g_ModelPolygonData[g_PolygonCount].vertex_indices[iVar4] =
               *(uint *)((int)g_ModelPolygonData +
                        g_SelectedPolygonIndex * 0x184 + (uVar3 - iVar4) * 4 + 0xb4);
          g_ModelPolygonData[g_PolygonCount].uv_u[iVar4] =
               *(float *)((int)g_ModelPolygonData +
                         g_SelectedPolygonIndex * 0x184 + (uVar3 - iVar4) * 4 + 0xf4);
          g_ModelPolygonData[g_PolygonCount].uv_v[iVar4] =
               *(float *)((int)g_ModelPolygonData +
                         g_SelectedPolygonIndex * 0x184 + (uVar3 - iVar4) * 4 + 0x134);
        }
        g_PolygonCount = g_PolygonCount + 1;
      }
      g_SelectedPolygonIndex =
           shape_design_c_polygonToolModeManager_FUN_00464c90(g_SelectedPolygonIndex);
      g_SelectedPolygonIndex =
           shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(g_SelectedPolygonIndex);
      engine_matrix_c_pop_FUN_0050d720();
      wincore_winrun_cpp_doNothing_FUN_005f2f80();
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      shape_design_c_handleEditorHotkeys_FUN_0045b990();
      iVar4 = shape_design_c_checkVertexCountLimit_FUN_00460a10();
      if (iVar4 != 0) break;
      if ((g_KeyboardState[0x19] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x19] = '\0';
        shape_design_c_loadPalette_FUN_0046e810();
      }
      if ((g_KeyboardState[0x19] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
        g_KeyboardState[0x19] = '\0';
        shape_design_c_displayPalette_FUN_00461560();
      }
      if (g_KeyboardState[0x19] != '\0') {
        g_KeyboardState[0x19] = '\0';
        shape_design_c_selectModelPart_FUN_0045de80();
      }
      if ((g_KeyboardState[0x26] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
        g_KeyboardState[0x26] = '\0';
        shape_design_c_showModelPartsList_FUN_0045dbe0();
      }
      if ((g_KeyboardState[0x26] != '\0') && (g_KeyboardState[0x2a] == '\0')) {
        g_KeyboardState[0x26] = '\0';
        shape_design_c_showPolygonDetailsList_FUN_0045d9c0();
      }
      if (((g_KeyboardState[0x1f] != '\0') && (g_KeyboardState[0x1d] == '\0')) &&
         (g_KeyboardState[0x1f] = '\0', g_CurrentPartIndex != -1)) {
        shape_design_c_createRotationalSweepGeometry_FUN_0045e070();
      }
      if (((g_KeyboardState[0x20] != '\0') && (g_KeyboardState[0x1d] != '\0')) &&
         (0 < g_PolygonCount)) {
        g_KeyboardState[0x20] = '\0';
        shape_design_c_deletePolygonRange_FUN_0045dd70();
      }
      if ((g_KeyboardState[0x20] != '\0') && (0 < g_PolygonCount)) {
        g_KeyboardState[0x20] = '\0';
        iVar4 = g_SelectedPolygonIndex;
        if (g_SelectedPolygonIndex == -1) {
          shape_design_c_deleteSinglePolygon_FUN_0045dcc0();
        }
        else {
          for (; iVar4 < g_PolygonCount + -1; iVar4 = iVar4 + 1) {
            pSVar6 = g_ModelPolygonData + iVar4 + 1;
            pSVar7 = g_ModelPolygonData + iVar4;
            for (iVar5 = 0x61; iVar5 != 0; iVar5 = iVar5 + -1) {
              pSVar7->polygon_type = pSVar6->polygon_type;
              pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
              pSVar7 = (SShapeEditorPolygon *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
            }
          }
          g_PolygonCount = g_PolygonCount + -1;
        }
      }
      if (((g_KeyboardState[0x21] != '\0') && (g_KeyboardState[0x2a] == '\0')) &&
         (g_KeyboardState[0x21] = '\0', g_CurrentPartIndex != -1)) {
        shape_design_c_createPolygonFromVertexList_FUN_0045cc80();
      }
      if ((g_KeyboardState[0x14] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
        g_KeyboardState[0x14] = '\0';
        shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90();
      }
      if (g_KeyboardState[0x14] != '\0') {
        g_KeyboardState[0x14] = '\0';
        shape_design_c_doNothing_FUN_0045ce00();
      }
      if (g_KeyboardState[0x23] != '\0') {
        g_KeyboardState[0x23] = '\0';
        shape_design_c_showFacetPartEditorHelp_FUN_00460ac0();
      }
      if ((g_KeyboardState[0x30] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
        g_KeyboardState[0x30] = '\0';
        shape_design_c_centerVerticesAroundPoint_FUN_0045ea90();
      }
      if (((g_KeyboardState[0x30] != '\0') && (g_CurrentPartIndex != -1)) &&
         (g_KeyboardState[0x2a] == '\0')) {
        g_KeyboardState[0x30] = '\0';
        shape_design_c_createBoxPrimitive_FUN_0045e520();
      }
      if (g_KeyboardState[0x2d] != '\0') {
        g_KeyboardState[0x2d] = '\0';
        shape_design_c_realignObject_FUN_0045ee70((int)rotation_x,(int)rotation_y,SUB84 /* extract 2-byte value */(dVar11,0));
        dVar11 = (double)((ulonglong)dVar11 & 0xffffffff00000000);
        rotation_x = (char *)0x0;
        rotation_y = rotation_x;
      }
      iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      g_GlobalDeltaTimeInt = (iVar4 - (int)text) / 0x12;
    } while (g_KeyboardState[1] == '\0');
    iVar4 = (int)((ulonglong)dVar11 >> 0x20);
    engine_2d_c_reinitializeGraphicsSystem_FUN_005ed4b0();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    g_ProjectionScale = iVar2;
    engine_2d_c_setTextColor_FUN_00402840(iVar4);
  }
  return;
}
