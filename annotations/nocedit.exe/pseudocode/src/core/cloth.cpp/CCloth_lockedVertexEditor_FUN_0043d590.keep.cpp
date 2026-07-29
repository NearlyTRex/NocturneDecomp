// Name: core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590
// Address: 0043d590
// MANUAL RECONSTRUCTION
// Address Range: [[0043d590, 0043dcbc]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_lockedVertexEditor_FUN_0043d590(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_lockedVertexEditor_FUN_0043d590(CCloth *this_ptr)

{
  SRenderVertex *pSVar3;
  SMRGLPrimitiveQuad *quad;
  int count;
  int iVar6;
  CSpotView *pCVar7;
  int iVar9;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar11;
  int iVar12;
  CBoundingBox3D local_84;
  char local_6c [20];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  SRenderVertex *pSVar2;
  SClothVertex *pSVar1;
  char *text;
  CSpotView *pCVar3;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_34 = -1;
  local_38 = -1;
  local_30 = 1;
  local_3c = 0;
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr,&g_ZeroVector.f,&g_ZeroVector.f,(CDeformableModelInstance *)0x0);
  pSVar1 = this_ptr->vertices;
  if ((SClothVertex *)&local_84 != pSVar1) {
    local_84.min.x = (pSVar1->position).x;
    local_84.min.y = this_ptr->vertices[0].position.y;
    local_84.min.z = this_ptr->vertices[0].position.z;
  }
  if ((SClothVertex *)&local_84.max != pSVar1) {
    local_84.max.x = (pSVar1->position).x;
    local_84.max.y = this_ptr->vertices[0].position.y;
    local_84.max.z = this_ptr->vertices[0].position.z;
  }
  iVar7 = 1;
  if (1 < (this_ptr->model).vertex_count) {
    do {
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_84,&this_ptr->vertices[iVar7].position);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this_ptr->model).vertex_count);
  }
  pCVar3 = g_CSpotViewPtr;
  local_4c = local_84.min.x + local_84.max.x;
  local_58 = local_4c * 0.5f;
  local_48 = local_84.min.y + local_84.max.y;
  local_44 = local_84.min.z + local_84.max.z;
  local_54 = local_48 * 0.5f;
  local_50 = local_44 * 0.5f;
  if (&g_CSpotViewPtr->loat_at != (CVector3f *)&local_58) {
    (g_CSpotViewPtr->loat_at).x = local_58;
    (pCVar3->loat_at).y = local_54;
    (pCVar3->loat_at).z = local_50;
  }
  while( true ) {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    local_18 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      do {
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[local_18].projected_vertex,
                   &(this_ptr->model).vertex_list[local_18]);
        local_18 = local_18 + 1;
      } while (local_18 < (this_ptr->model).vertex_count);
    }
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff)
    ;
    for (local_14 = 0; local_14 < (this_ptr->model).poly_count; local_14 = local_14 + 1) {
      quad = (this_ptr->model).poly_vert_list + local_14;
      count = quad->base.base.count;
      // Draw the polygon outline: an edge from each corner to the next (wrapping).
      for (iVar11 = 0; iVar11 < count; iVar11 = iVar11 + 1) {
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                  (g_CDemonRendererPtr2,quad->vertices[iVar11].vertex_index,
                   quad->vertices[(iVar11 + 1) % count].vertex_index);
      }
    }
    if (local_34 < 0) {
      local_28 = -999;
      local_2c = -999;
      local_24 = -999;
      local_20 = -999;
    }
    else {
      local_24 = local_34;
      local_28 = g_MouseX;
      if (g_MouseX < local_34) {
        local_28 = local_34;
        local_24 = g_MouseX;
      }
      local_2c = local_38;
      local_20 = g_MouseY;
      if (g_MouseY < local_38) {
        local_20 = local_38;
        local_2c = g_MouseY;
      }
    }
    iVar11 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      do {
        if (this_ptr->vertices[iVar11].locked == 0) {
          g_ActiveRenderColor = 4;
        }
        else {
          g_ActiveRenderColor = 1;
        }
        pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((int)(pSVar2[iVar11].projected_vertex.screen_x & -0x80000000) == 0) {
          iVar5 = pSVar2[iVar11].projected_vertex.screen_x >> 0x10;
          iVar9 = pSVar2[iVar11].projected_vertex.screen_y >> 0x10;
          if ((((local_24 <= iVar5) && (iVar5 <= local_28)) && (local_2c <= iVar9)) &&
             (iVar9 <= local_20)) {
            if (g_MouseButtonFlags.dword == 0) {
              this_ptr->vertices[iVar11].locked = local_30;
            }
            if (this_ptr->vertices[iVar11].locked == 0) {
              g_ActiveRenderColor = 0xfc;
            }
            else {
              g_ActiveRenderColor = 0xf9;
            }
          }
        }
        core_cloth_cpp_drawVertexMarker_FUN_0043c6e0(iVar11);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (this_ptr->model).vertex_count);
    }
    if ((local_3c != 0) && (iVar11 = 0, 0 < (this_ptr->model).vertex_count)) {
      do {
        iVar9 = this_ptr->vertex_sort_buffer[iVar11];
        pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((int)(pSVar3[iVar9].projected_vertex.screen_x & -0x80000000) == 0) {
          iVar6 = pSVar3[iVar9].projected_vertex.screen_x;
          local_40 = pSVar3[iVar9].projected_vertex.screen_y >> 0x10;
          _sprintf(local_6c,"%d",iVar11);
          engine_2d_c_drawText_FUN_00401fd0(local_6c,iVar6 >> 0x10,local_40);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (this_ptr->model).vertex_count);
    }
    if ((g_MouseButtonFlags.dword == 0) && (-1 < local_24)) {
      iVar12 = 0;
      iVar11 = 0;
      if (0 < (this_ptr->model).vertex_count) {
        do {
          if (this_ptr->vertices[iVar12].locked != 0) {
            iVar11 = iVar11 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (this_ptr->model).vertex_count);
      }
      if (iVar11 < 0x65) {
        iVar12 = (this_ptr->model).vertex_count;
        this_ptr->locked_vertex_count = 0;
        iVar4 = 0;
        if (0 < iVar12) {
          do {
            if (this_ptr->vertices[iVar4].locked != 0) {
              this_ptr->locked_vertex_indices[this_ptr->locked_vertex_count] = iVar4;
              this_ptr->locked_vertex_count = this_ptr->locked_vertex_count + 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (this_ptr->model).vertex_count);
        }
        if (iVar11 != this_ptr->locked_vertex_count) {
          g_CurrentFilename = "..\\core\\cloth.cpp";
          g_CurrentLineNumber = 2284;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't lock this many vertices!");
        iVar11 = 0;
        if (0 < (this_ptr->model).vertex_count) {
          do {
            this_ptr->vertices[iVar11].locked = 0;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (this_ptr->model).vertex_count);
        }
        iVar11 = 0;
        if (0 < this_ptr->locked_vertex_count) {
          do {
            this_ptr->vertices[this_ptr->locked_vertex_indices[iVar11]].locked = 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < this_ptr->locked_vertex_count);
        }
      }
      local_34 = -1;
      local_38 = -1;
    }
    if (local_30 == 0) {
      text = "Use mouse to unlock vertices.";
    }
    else {
      text = "Use mouse to lock vertices.";
    }
    engine_2d_c_drawTextXY_FUN_00402130(0,0,text);
    engine_2d_c_drawTextXY_FUN_00402130(0,0xb,"L Toggle locking/unlocking vertices.");
    engine_2d_c_drawTextXY_FUN_00402130(0,0x16,"N Toggle vertex numbers.");
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
    if (-1 < local_24) {
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      iVar9 = local_20;
      engine_2d_c_drawLine_FUN_004011b0(local_24,local_2c,local_24,local_20);
      iVar12 = local_28;
      iVar11 = local_2c;
      engine_2d_c_drawLine_FUN_004011b0(local_28,local_2c,local_28,iVar9);
      iVar9 = local_24;
      engine_2d_c_drawLine_FUN_004011b0(local_24,iVar11,iVar12,iVar11);
      engine_2d_c_drawLine_FUN_004011b0(iVar9,local_20,iVar12,local_20);
    }
    if ((local_34 < 0) && (g_MouseButtonFlags.dword != 0)) {
      local_34 = g_MouseX;
      local_38 = g_MouseY;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L);
    if (iVar11 != 0) {
      local_30 = (uint)(local_30 == 0);
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar11 != 0) break;
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    if (iVar11 != 0) {
      local_3c = (uint)(local_3c == 0);
    }
  }
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
  pCVar7 = g_CSpotViewPtr;
  (g_CSpotViewPtr->loat_at).z = 0.0;
  (pCVar7->loat_at).y = (pCVar7->loat_at).z;
  (pCVar7->loat_at).x = (pCVar7->loat_at).y;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
