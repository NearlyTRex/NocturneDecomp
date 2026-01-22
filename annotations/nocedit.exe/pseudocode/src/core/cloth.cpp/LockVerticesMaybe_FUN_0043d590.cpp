// Name: core_cloth.cpp_LockVerticesMaybe_FUN_0043d590
// Address: 0043d590
// Address Range: [[0043d590, 0043dcbc]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_LockVerticesMaybe_FUN_0043d590()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_LockVerticesMaybe(uint param_1) */

void core_cloth_cpp_LockVerticesMaybe_FUN_0043d590(void)

{
  float *pfVar1;
  SRenderVertex *pSVar2;
  CSpotView *pCVar3;
  uint x2;
  uint x1;
  uchar uVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  int iVar7;
  CVector3f *point;
  int iVar8;
  int iVar9;
  int in_stack_00000004;
  char *text;
  CGame *in_stack_ffffff7c;
  float in_stack_ffffff80;
  float in_stack_ffffff84;
  float in_stack_ffffff88;
  float local_74;
  float local_70;
  char local_6c [20];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_34 = 0xffffffff;
  local_38 = -1;
  local_30 = 1;
  local_3c = 0;
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff7c);
  core_cloth_cpp_FUN_00439710();
  pfVar1 = (float *)(in_stack_00000004 + 0x56d8);
  if ((float *)&stack0xffffff7c != pfVar1) {
    in_stack_ffffff7c = (CGame *)*pfVar1;
    in_stack_ffffff80 = *(float *)(in_stack_00000004 + 0x56dc);
    in_stack_ffffff84 = *(float *)(in_stack_00000004 + 0x56e0);
  }
  if ((float *)&stack0xffffff88 != pfVar1) {
    in_stack_ffffff88 = *pfVar1;
    local_74 = *(float *)(in_stack_00000004 + 0x56dc);
    local_70 = *(float *)(in_stack_00000004 + 0x56e0);
  }
  iVar7 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0x104)) {
    point = (CVector3f *)(in_stack_00000004 + 0x57f4);
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&stack0xffffff7c,point);
      point = (CVector3f *)&point[0x17].z;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
  }
  pCVar3 = g_CSpotViewPtr;
  local_4c = (float)in_stack_ffffff7c + in_stack_ffffff88;
  local_58 = local_4c * 0.5f;
  local_48 = in_stack_ffffff80 + local_74;
  local_44 = in_stack_ffffff84 + local_70;
  local_54 = local_48 * 0.5f;
  local_50 = local_44 * 0.5f;
  if ((float *)(g_CSpotViewPtr->field0_0x0 + 0x18) != &local_58) {
    *(float *)(g_CSpotViewPtr->field0_0x0 + 0x18) = local_58;
    *(float *)(pCVar3->field0_0x0 + 0x1c) = local_54;
    *(float *)(pCVar3->field0_0x0 + 0x20) = local_50;
  }
  while( true ) {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector);
    local_18 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x104)) {
      iVar7 = 0;
      iVar9 = 0;
      do {
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)
                   ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x
                   + iVar9),(CVector3i *)(*(int *)(in_stack_00000004 + 0x10c) + iVar7));
        iVar7 = iVar7 + 0xc;
        iVar9 = iVar9 + 0x30;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(in_stack_00000004 + 0x104));
    }
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff)
    ;
    local_14 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x110)) {
      local_1c = 0;
      do {
        iVar8 = *(int *)(in_stack_00000004 + 0x114) + local_1c;
        iVar7 = 0;
        iVar9 = iVar8;
        if (0 < *(int *)(iVar8 + 4)) {
          do {
            iVar7 = iVar7 + 1;
            engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                      (g_CDemonRendererPtr2,*(int *)(iVar9 + 0x18),
                       *(int *)((iVar7 % *(int *)(iVar8 + 4)) * 0xc + 0x18 + iVar8));
            iVar9 = iVar9 + 0xc;
          } while (iVar7 < *(int *)(iVar8 + 4));
        }
        local_1c = local_1c + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(in_stack_00000004 + 0x110));
    }
    if ((int)local_34 < 0) {
      local_28 = 0xfffffc19;
      local_2c = -999;
      local_24 = 0xfffffc19;
      local_20 = -999;
    }
    else {
      local_24 = local_34;
      local_28 = g_MouseX;
      if (g_MouseX < (int)local_34) {
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
    iVar7 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x104)) {
      iVar8 = 0;
      iVar9 = in_stack_00000004;
      do {
        if (*(int *)(iVar9 + 0x574c) == 0) {
          g_ActiveRenderColor = 4;
        }
        else {
          g_ActiveRenderColor = 1;
        }
        pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar2->projected_vertex).screen_x + iVar8 + 3) & 0x80) == 0) {
          iVar6 = *(int *)((int)&(pSVar2->projected_vertex).screen_x + iVar8) >> 0x10;
          iVar5 = *(int *)((int)&(pSVar2->projected_vertex).screen_y + iVar8) >> 0x10;
          if (((((int)local_24 <= iVar6) && (iVar6 <= (int)local_28)) && (local_2c <= iVar5)) &&
             (iVar5 <= local_20)) {
            if (g_MouseButtonFlags == 0) {
              *(int *)(iVar9 + 0x574c) = local_30;
            }
            if (*(int *)(iVar9 + 0x574c) == 0) {
              g_ActiveRenderColor = 0xfc;
            }
            else {
              g_ActiveRenderColor = 0xf9;
            }
          }
        }
        core_cloth_cpp_FUN_0043c6e0();
        iVar8 = iVar8 + 0x30;
        iVar9 = iVar9 + 0x11c;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
    }
    if ((local_3c != 0) && (iVar7 = 0, 0 < *(int *)(in_stack_00000004 + 0x104))) {
      iVar9 = 0;
      do {
        iVar8 = *(int *)(iVar9 + *(int *)(in_stack_00000004 + 0x3fe3c));
        pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((int)(pSVar2[iVar8].projected_vertex.screen_x & -0x80000000) == 0) {
          iVar5 = pSVar2[iVar8].projected_vertex.screen_x;
          local_40 = pSVar2[iVar8].projected_vertex.screen_y >> 0x10;
          crt_stdio_c_sprintf_FUN_005fdbd0(local_6c,"%d",iVar7);
          engine_2d_c_drawText_FUN_00401fd0(local_6c,iVar5 >> 0x10,local_40);
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
    }
    if ((g_MouseButtonFlags == 0) && (-1 < (int)local_24)) {
      iVar8 = 0;
      iVar7 = 0;
      iVar9 = in_stack_00000004;
      if (0 < *(int *)(in_stack_00000004 + 0x104)) {
        do {
          if (*(int *)(iVar9 + 0x574c) != 0) {
            iVar7 = iVar7 + 1;
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x11c;
        } while (iVar8 < *(int *)(in_stack_00000004 + 0x104));
      }
      if (iVar7 < 0x65) {
        *(uint *)(in_stack_00000004 + 0x3f028) = 0;
        iVar8 = 0;
        iVar9 = in_stack_00000004;
        if (0 < *(int *)(in_stack_00000004 + 0x104)) {
          do {
            if (*(int *)(iVar9 + 0x574c) != 0) {
              *(int *)(in_stack_00000004 + 0x3f02c + *(int *)(in_stack_00000004 + 0x3f028) * 4) =
                   iVar8;
              *(int *)(in_stack_00000004 + 0x3f028) = *(int *)(in_stack_00000004 + 0x3f028) + 1;
            }
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 0x11c;
          } while (iVar8 < *(int *)(in_stack_00000004 + 0x104));
        }
        if (iVar7 != *(int *)(in_stack_00000004 + 0x3f028)) {
          g_CurrentFilename = "..\\core\\cloth.cpp";
          g_CurrentLineNumber = 0x8ec;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't lock this many vertices!");
        iVar9 = 0;
        iVar7 = in_stack_00000004;
        if (0 < *(int *)(in_stack_00000004 + 0x104)) {
          do {
            *(uint *)(iVar7 + 0x574c) = 0;
            iVar9 = iVar9 + 1;
            iVar7 = iVar7 + 0x11c;
          } while (iVar9 < *(int *)(in_stack_00000004 + 0x104));
        }
        iVar9 = 0;
        iVar7 = in_stack_00000004;
        if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
          do {
            *(uint *)(*(int *)(iVar7 + 0x3f02c) * 0x11c + 0x574c + in_stack_00000004) = 1;
            iVar9 = iVar9 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar9 < *(int *)(in_stack_00000004 + 0x3f028));
        }
      }
      local_34 = 0xffffffff;
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
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    if (-1 < (int)local_24) {
      uVar4 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      iVar9 = local_20;
      g_ActiveRenderColor = CONCAT31(extraout_var,uVar4);
      engine_2d_c_drawLine_FUN_004011b0(local_24,local_2c,local_24,local_20);
      x2 = local_28;
      iVar7 = local_2c;
      engine_2d_c_drawLine_FUN_004011b0(local_28,local_2c,local_28,iVar9);
      x1 = local_24;
      engine_2d_c_drawLine_FUN_004011b0(local_24,iVar7,x2,iVar7);
      engine_2d_c_drawLine_FUN_004011b0(x1,local_20,x2,local_20);
    }
    if (((int)local_34 < 0) && (g_MouseButtonFlags != 0)) {
      local_34 = g_MouseX;
      local_38 = g_MouseY;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x26);
    if (iVar7 != 0) {
      local_28 = (uint)(local_28 == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar7 != 0) break;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    if (iVar7 != 0) {
      local_24 = (uint)(local_24 == 0);
    }
  }
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  pCVar3 = g_CSpotViewPtr;
  pCVar3->field0_0x0[0x20] = '\0';
  pCVar3->field0_0x0[0x21] = '\0';
  pCVar3->field0_0x0[0x22] = '\0';
  pCVar3->field0_0x0[0x23] = '\0';
  *(uint *)(pCVar3->field0_0x0 + 0x1c) = *(uint *)(pCVar3->field0_0x0 + 0x20);
  *(uint *)(pCVar3->field0_0x0 + 0x18) = *(uint *)(pCVar3->field0_0x0 + 0x1c);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
