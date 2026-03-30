// Name: shape_design.c_showFacetPartEditor_FUN_0045f1d0
// Address: 0045f1d0
// Address Range: [[0045f1d0, 00460724] [00460a08, 00460a0e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_showFacetPartEditor_FUN_0045f1d0(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_showFacetPartEditor_FUN_0045f1d0(void)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar4;
  int color;
  int iVar12;
  int iVar13;
  SShapeEditorPolygon *pSVar14;
  SShapeEditorPolygon *pSVar5;
  SShapeEditorPolygon *pSVar15;
  SShapeEditorPolygon *pSVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar9;
  char local_b8 [80];
  CQuaternion4f local_68;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  int iVar2;
  int iVar1;
  int iVar3;
  
  bVar7 = 0;
  fVar8 = (float10)fptan((float10)60.0 * (float10)3.1415926535000001 * (float10)0.0055555555555555497
                         * (float10)0.5);
  fVar16 = (float10)g_WindowWidth;
  fVar2 = (float10)0.5;
  fVar17 = (float10)fptan((float10)60.0 * (float10)3.1415926535000001 * (float10)0.0055555555555555497
                          * (float10)0.5);
  fVar18 = (float10)g_WindowHeight;
  fVar3 = (float10)0.5;
  fVar6 = (float)g_WindowWidth;
  fVar5 = (float)0.5;
  fVar4 = (float)65536;
  fVar10 = (float)g_WindowHeight;
  fVar9 = (float)0.5;
  fVar7 = (float)65536;
  iVar4 = shape_design_c_checkVertexCountLimit_FUN_00460a10();
  iVar11 = g_ProjectionScale;
  if (iVar4 == 0) {
    local_58 = 0;
    local_3c = 0;
    local_38 = 0;
    local_4c = 0;
    local_1c = 0;
    local_40 = -0x10000;
    g_ProjectionScale = 0x10000;
    color = engine_2d_c_getTextColor_FUN_00402830();
    engine_2d_c_setTextColor_FUN_00402840(g_EditorColorIndices[g_CurrentModelIndex]);
    g_CurrentPartIndex = -1;
    g_SelectedPolygonIndex = -1;
    g_SecondaryPolygonIndex = -1;
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_resetGraphicsSystem_FUN_00402a70();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    do {
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
      wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
      wincore_windll_cpp_beginScene_FUN_005b7280();
      if (g_UseExternalRenderer == 0) {
        wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
      }
      else {
        wincore_windll_cpp_clearZBuffer_FUN_005b7be0();
      }
      iVar3 = g_ClipBottom;
      iVar2 = g_ClipRight;
      iVar13 = g_ClipTop;
      iVar12 = g_ClipLeft;
      if (g_UseExternalRenderer == 0) {
        engine_2d_c_fillRectColor_FUN_00403170
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1,
                   g_EditorBackgroundColors[g_CurrentModelIndex]);
      }
      else {
        g_ClipLeft = 0;
        g_ClipTop = 0;
        g_ClipRight = g_WindowWidth + -1;
        g_ClipBottom = g_WindowHeight + -1;
        wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50
                  (g_EditorBackgroundColors[g_CurrentModelIndex]);
        g_ClipLeft = iVar12;
        g_ClipTop = iVar13;
        g_ClipRight = iVar2;
        g_ClipBottom = iVar3;
      }
      engine_light_cpp_setDirectionalLightVector_FUN_005054d0(0,-0xb4fd,0xb4fd);
      engine_light_cpp_setAmbientLightLevel_FUN_00505490(32000);
      engine_matrix_c_setCameraRotation_FUN_0050e290(0,0,0);
      engine_matrix_c_setCameraOrigin_FUN_0050e270(local_4c,local_1c,local_40);
      local_68.x = 0.0;
      local_68.y = 0.0;
      local_68.z = 0.0;
      engine_3d_c_processCameraRelativePoint_FUN_004037e0(&local_68);
      engine_matrix_c_matrixPushAndTransform_FUN_0050cee0(local_58,local_3c,local_38,0,0,0);
      if (g_WireframeMode != 0) {
        iVar12 = (int)ROUND(ROUND(((float)((fVar16 * fVar2) / fVar8) / (fVar6 * fVar5)) * fVar4));
        iVar1 = (int)ROUND(ROUND(((float)((fVar18 * fVar3) / fVar17) / (fVar10 * fVar9)) * fVar7));
        g_TransformMatrix.m[0].x =
             (uint)((longlong)iVar12 * (longlong)g_TransformMatrix.m[0].x) >> 0x10 |
             (int)((ulonglong)((longlong)iVar12 * (longlong)g_TransformMatrix.m[0].x) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[1].x =
             (uint)((longlong)iVar12 * (longlong)g_TransformMatrix.m[1].x) >> 0x10 |
             (int)((ulonglong)((longlong)iVar12 * (longlong)g_TransformMatrix.m[1].x) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[2].x =
             (uint)((longlong)iVar12 * (longlong)g_TransformMatrix.m[2].x) >> 0x10 |
             (int)((ulonglong)((longlong)iVar12 * (longlong)g_TransformMatrix.m[2].x) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[0].y =
             (uint)((longlong)iVar1 * (longlong)g_TransformMatrix.m[0].y) >> 0x10 |
             (int)((ulonglong)((longlong)iVar1 * (longlong)g_TransformMatrix.m[0].y) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[1].y =
             (uint)((longlong)iVar1 * (longlong)g_TransformMatrix.m[1].y) >> 0x10 |
             (int)((ulonglong)((longlong)iVar1 * (longlong)g_TransformMatrix.m[1].y) >> 0x20) <<
             0x10;
        g_TransformMatrix.m[2].y =
             (uint)((longlong)iVar1 * (longlong)g_TransformMatrix.m[2].y) >> 0x10 |
             (int)((ulonglong)((longlong)iVar1 * (longlong)g_TransformMatrix.m[2].y) >> 0x20) <<
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
      if (g_KeyboardState[0x38] == '\0') {
        local_54 = 2;
        local_30 = 2;
      }
      else {
        local_54 = 0x20;
        local_30 = 0x10;
      }
      if (g_KeyboardState[0x2a] == '\0') {
        if (g_KeyboardState[0x4b] != '\0') {
          local_4c = local_4c - g_GlobalDeltaTimeInt / local_54;
        }
        if (g_KeyboardState[0x4d] != '\0') {
          local_4c = local_4c + g_GlobalDeltaTimeInt / local_54;
        }
        if (g_KeyboardState[0x48] != '\0') {
          local_40 = local_40 + g_GlobalDeltaTimeInt / local_54;
        }
        if (g_KeyboardState[0x50] != '\0') {
          local_40 = local_40 - g_GlobalDeltaTimeInt / local_54;
        }
        if (g_KeyboardState[0x10] != '\0') {
          local_1c = local_1c + g_GlobalDeltaTimeInt / local_54;
        }
        if ((g_KeyboardState[0x1e] != '\0') && (g_KeyboardState[0x1d] == '\0')) {
          local_1c = local_1c - g_GlobalDeltaTimeInt / local_54;
        }
      }
      else {
        if (g_KeyboardState[0x48] != '\0') {
          local_58 = local_58 + g_GlobalDeltaTimeInt / local_30;
        }
        if (g_KeyboardState[0x50] != '\0') {
          local_58 = local_58 - g_GlobalDeltaTimeInt / local_30;
        }
        if (g_KeyboardState[0x4b] != '\0') {
          local_38 = local_38 - g_GlobalDeltaTimeInt / local_30;
        }
        if (g_KeyboardState[0x4d] != '\0') {
          local_38 = local_38 + g_GlobalDeltaTimeInt / local_30;
        }
        if (g_KeyboardState[0x47] != '\0') {
          local_3c = local_3c + g_GlobalDeltaTimeInt / local_30;
        }
        if (g_KeyboardState[0x49] != '\0') {
          local_3c = local_3c - g_GlobalDeltaTimeInt / local_30;
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
        engine_texture_cpp_doNothing_FUN_005dd8f0(g_EditorDetailLevel);
        g_KeyboardState[0x4e] = '\0';
      }
      if (g_KeyboardState[0x4a] != '\0') {
        g_EditorDetailLevel = g_EditorDetailLevel + -0x800;
        if (g_EditorDetailLevel < 0) {
          g_EditorDetailLevel = 0;
        }
        engine_texture_cpp_doNothing_FUN_005dd8f0(g_EditorDetailLevel);
        g_KeyboardState[0x4a] = '\0';
      }
      if (g_EditorDetailLevel < 0xffff) {
        _sprintf(local_b8,"Detail : %04x / %05d",g_EditorDetailLevel);
        engine_2d_c_drawTextColor_FUN_00402430
                  (local_b8,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                                  (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + 0x19,
                   g_WindowHeight + -0x2c);
      }
      _sprintf(local_b8,"Renderer : %s");
      engine_2d_c_drawTextColor_FUN_00402430
                (local_b8,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                                (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + 0x19,
                 g_WindowHeight + -0x21);
      iVar12 = g_WindowWidth >> 0x1f;
      if (g_GouraudShadingEnabled == 1) {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Gouraud : on",
                   ((int)((g_WindowWidth + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2) + 0x19,
                   g_WindowHeight + -0x16);
      }
      else {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Gouraud : off",
                   ((int)((g_WindowWidth + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2) + 0x19,
                   g_WindowHeight + -0x16);
      }
      iVar12 = engine_2d_c_getStringWidth_FUN_004018a0("Gouraud : off   ");
      iVar13 = g_WindowWidth >> 0x1f;
      if (g_ZBufferEnabled == 1) {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Z-buffer : on",
                   ((int)((g_WindowWidth + iVar13 * -4) - (uint)(iVar13 << 1 < 0)) >> 2) + 0x19 +
                   iVar12,g_WindowHeight + -0x16);
      }
      else {
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Z-buffer : off",
                   ((int)((g_WindowWidth + iVar13 * -4) - (uint)(iVar13 << 1 < 0)) >> 2) + 0x19 +
                   iVar12,g_WindowHeight + -0x16);
      }
      if (g_CurrentPartIndex == -1) {
        _sprintf(local_b8,&s_EmptyChar_0061b79a);
      }
      else {
        _sprintf(local_b8,"Current part : %s");
      }
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,0,0);
      iVar12 = engine_2d_c_getStringWidth_FUN_004018a0("Polygons");
      _sprintf(local_b8,"Points");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10,0);
      _sprintf(local_b8," : %d");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10 + iVar12,0);
      _sprintf(local_b8,"Polygons");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10,0xb);
      _sprintf(local_b8," : %d");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10 + iVar12,0xb);
      _sprintf(local_b8,"Parts");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10,0x16);
      _sprintf(local_b8," : %d");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10 + iVar12,0x16);
      _sprintf
                (local_b8,"Zoom : %4.2f  FOV : %4.1f",65536 / (double)g_ProjectionScale,
                 0);
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,g_WindowWidth / 2 + 10,0x2c);
      if ((g_KeyboardState[0x13] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x13] = '\0';
        g_EditorTextureMode = g_EditorTextureMode + 1;
        if (4 < g_EditorTextureMode) {
          g_EditorTextureMode = 0;
        }
      }
      if (g_KeyboardState[0x13] != '\0') {
        g_KeyboardState[0x13] = '\0';
        local_58 = 0;
        local_3c = 0;
        local_38 = 0;
        local_4c = 0;
        local_1c = 0;
        local_40 = -0x10000;
        g_ProjectionScale = 0x10000;
      }
      if ((g_KeyboardState[0x2e] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
        g_KeyboardState[0x2e] = '\0';
        g_CurrentModelIndex = (g_CurrentModelIndex + 1) % g_ModelCount;
        engine_2d_c_setTextColor_FUN_00402840(g_EditorColorIndices[g_CurrentModelIndex]);
      }
      if (g_KeyboardState[0x2e] != '\0') {
        g_KeyboardState[0x2e] = '\0';
        g_EditorColorIndex = g_EditorColorIndex + 1;
        if (0xf < g_EditorColorIndex) {
          g_EditorColorIndex = 0;
        }
      }
      g_ActiveRenderColor = g_ColorLookupTable[g_EditorColorIndex];
      for (local_44 = g_WindowWidth + -10; local_44 < g_WindowWidth; local_44 = local_44 + 1) {
        for (local_50 = g_WindowHeight - 10; (int)local_50 < g_WindowHeight; local_50 = local_50 + 1
            ) {
          engine_2d_c_plotPixel_FUN_00401140(local_44,local_50);
        }
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
        _sprintf(local_b8,"No model loaded");
      }
      else {
        _sprintf(local_b8,"%s");
      }
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,0,g_WindowHeight + -0x21);
      _sprintf
                (local_b8,"X: %0.4f Y: %0.4f Z: %0.4f",
                 (double)local_4c * 1.52587890625e-05,
                 (double)local_1c * 1.52587890625e-05,
                 (double)local_40 * 1.52587890625e-05);
      engine_2d_c_drawTextColor_FUN_00402430
                (local_b8,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                                (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + 0x19,
                 g_WindowHeight + -0xb);
      _sprintf(local_b8,"P: %x B: %x H: %x");
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,0,g_WindowHeight + -0xb);
      if (g_SelectedPolygonIndex == -1) {
        _sprintf(local_b8,"No polygon selected");
      }
      else {
        _sprintf(local_b8,"Selected polygon : %d");
      }
      engine_2d_c_drawTextColor_FUN_00402430(local_b8,0,g_WindowHeight + -0x16);
      if (g_SelectedPolygonIndex != -1) {
        if ((g_KeyboardState[0x16] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
          g_KeyboardState[0x16] = '\0';
          g_ShowUVCoordinates = g_ShowUVCoordinates ^ 1;
        }
        if ((g_KeyboardState[0x17] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
          g_KeyboardState[0x17] = '\0';
          g_ShowVertexCoordinates = g_ShowVertexCoordinates ^ 1;
        }
        _sprintf
                  (local_b8,"V order : %3d %3d %3d   N : %d",
                   g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices[0],
                   g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices[1],
                   g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices[2]);
        engine_2d_c_drawTextColor_FUN_00402430
                  (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + -0x16);
        _sprintf
                  (local_b8,"Normal : %6.2f %6.2f %6.2f",
                   (double)g_ModelPolygonData[g_SelectedPolygonIndex].normal.x,
                   (double)g_ModelPolygonData[g_SelectedPolygonIndex].normal.y,
                   (double)g_ModelPolygonData[g_SelectedPolygonIndex].normal.z);
        engine_2d_c_drawTextColor_FUN_00402430
                  (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + -0xb);
        dVar9 = shape_design_c_calculatePolygonAngularArea_FUN_00461ee0
                          (g_ModelPolygonData + g_SelectedPolygonIndex);
        _sprintf(local_b8,"Angle sum : %10.6lf",dVar9);
        engine_2d_c_drawTextColor_FUN_00402430
                  (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + -0x21);
        _sprintf
                  (local_b8,"Part number : %d (%s)",
                   g_ModelPolygonData[g_SelectedPolygonIndex].part_assignment);
        engine_2d_c_drawTextColor_FUN_00402430
                  (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + -0x37);
        if (g_ModelPolygonData[g_SelectedPolygonIndex].lightmap_name[0] == '\0') {
          _sprintf(local_b8,"Texture : %s");
        }
        else {
          _sprintf
                    (local_b8,"Texture : %s (%s)",g_SelectedPolygonIndex * 0x184 + 0x16e9964);
        }
        engine_2d_c_drawTextColor_FUN_00402430
                  (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + -0x42);
        if (g_ShowUVCoordinates != 0) {
          engine_2d_c_drawTextColor_FUN_00402430
                    ("UVs :",g_WindowWidth / 2 + 10,g_WindowHeight + -0x84);
          for (local_44 = 0;
              local_44 < (int)g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices_count;
              local_44 = local_44 + 1) {
            _sprintf
                      (local_b8,"%03d : %010.6f %010.6f / %08.6f %08.6f",
                       g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices[local_44],
                       (double)g_ModelPolygonData[g_SelectedPolygonIndex].uv_u[local_44],
                       (double)g_ModelPolygonData[g_SelectedPolygonIndex].uv_v[local_44],
                       (double)(g_ModelPolygonData[g_SelectedPolygonIndex].uv_u[local_44] *
                               (float)0.00390625),
                       (double)(g_ModelPolygonData[g_SelectedPolygonIndex].uv_v[local_44] *
                               (float)0.00390625));
            engine_2d_c_drawTextColor_FUN_00402430
                      (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + (0xb - local_44) * -0xb);
          }
        }
        if (g_ShowVertexCoordinates != 0) {
          engine_2d_c_drawTextColor_FUN_00402430
                    ("Vertices :",g_WindowWidth / 2 + 10,g_WindowHeight + -0x84);
          for (local_44 = 0;
              local_44 < (int)g_ModelPolygonData[g_SelectedPolygonIndex].vertex_indices_count;
              local_44 = local_44 + 1) {
            _sprintf(local_b8,"%03d : %+011.6f %+011.6f %+011.6f");
            engine_2d_c_drawTextColor_FUN_00402430
                      (local_b8,g_WindowWidth / 2 + 10,g_WindowHeight + (0xb - local_44) * -0xb);
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
        pSVar14 = g_ModelPolygonData + g_SelectedPolygonIndex;
        pSVar15 = g_ModelPolygonData + g_PolygonCount;
        for (iVar12 = 0x61; iVar12 != 0; iVar12 = iVar12 + -1) {
          pSVar15->polygon_type = pSVar14->polygon_type;
          pSVar14 = (SShapeEditorPolygon *)((int)pSVar14 + ((uint)bVar7 * -2 + 1) * 4);
          pSVar15 = (SShapeEditorPolygon *)((int)pSVar15 + ((uint)bVar7 * -2 + 1) * 4);
        }
        uVar1 = g_ModelPolygonData[g_PolygonCount].vertex_indices_count;
        for (local_44 = 0; local_44 < (int)uVar1; local_44 = local_44 + 1) {
          g_ModelPolygonData[g_PolygonCount].vertex_indices[local_44] =
               *(uint *)((int)g_ModelPolygonData +
                        g_SelectedPolygonIndex * 0x184 + (uVar1 - local_44) * 4 + 0xb4);
          g_ModelPolygonData[g_PolygonCount].uv_u[local_44] =
               *(float *)((int)g_ModelPolygonData +
                         g_SelectedPolygonIndex * 0x184 + (uVar1 - local_44) * 4 + 0xf4);
          g_ModelPolygonData[g_PolygonCount].uv_v[local_44] =
               *(float *)((int)g_ModelPolygonData +
                         g_SelectedPolygonIndex * 0x184 + (uVar1 - local_44) * 4 + 0x134);
        }
        g_PolygonCount = g_PolygonCount + 1;
      }
      g_SelectedPolygonIndex =
           shape_design_c_polygonToolModeManager_FUN_00464c90(g_SelectedPolygonIndex);
      g_SelectedPolygonIndex =
           shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(g_SelectedPolygonIndex);
      engine_matrix_c_pop_FUN_0050d720();
      wincore_winrun_cpp_doNothing1_FUN_005f2f80();
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      shape_design_c_handleEditorHotkeys_FUN_0045b990();
      iVar12 = shape_design_c_checkVertexCountLimit_FUN_00460a10();
      if (iVar12 != 0) break;
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
        if (g_SelectedPolygonIndex == -1) {
          shape_design_c_deleteSinglePolygon_FUN_0045dcc0();
        }
        else {
          for (local_44 = g_SelectedPolygonIndex; local_44 < g_PolygonCount + -1;
              local_44 = local_44 + 1) {
            pSVar5 = g_ModelPolygonData + local_44 + 1;
            pSVar6 = g_ModelPolygonData + local_44;
            for (iVar12 = 0x61; iVar12 != 0; iVar12 = iVar12 + -1) {
              pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + (uint)bVar7 * -8 + 4);
              pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
              pSVar6->polygon_type = pSVar5->polygon_type;
              pSVar5 = pSVar5;
              pSVar6 = pSVar6;
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
        shape_design_c_doNothing3_FUN_0045ce00();
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
        shape_design_c_realignObject_FUN_0045ee70(local_58,local_3c,local_38);
        local_38 = 0;
        local_3c = 0;
        local_58 = 0;
      }
      iVar12 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      g_GlobalDeltaTimeInt = (iVar12 - local_18) / 0x12;
      local_18 = iVar12;
    } while (g_KeyboardState[1] == '\0');
    engine_2d_c_reinitializeGraphicsSystem_FUN_00402a80();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    g_ProjectionScale = iVar11;
    engine_2d_c_setTextColor_FUN_00402840(color);
  }
  return;
}
