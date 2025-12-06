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
  float fVar3;
  float fVar4;
  CSpotView *pCVar5;
  int iVar6;
  uchar uVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  CKeys *unaff_EBP;
  int unaff_ESI;
  CVector3f *point;
  int iVar11;
  int unaff_EDI;
  int iVar12;
  int iVar13;
  int in_stack_00000004;
  CKeys *pCStack00000008;
  int iStack0000000c;
  int in_stack_00000010;
  int iStack00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000028;
  CGame *in_stack_ffffff84;
  float in_stack_ffffff8c;
  float in_stack_ffffff90;
  float in_stack_ffffff94;
  float in_stack_ffffff98;
  float in_stack_ffffff9c;
  float in_stack_ffffffa0;
  char *text;
  int local_1c;
  int local_14;
  
  iVar6 = in_stack_00000004;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff84);
  core_cloth_cpp_FUN_00439710();
  pfVar1 = (float *)(in_stack_00000004 + 0x56d8);
  if ((float *)&stack0xffffff8c != pfVar1) {
    in_stack_ffffff8c = *pfVar1;
    in_stack_ffffff90 = *(float *)(in_stack_00000004 + 0x56dc);
    in_stack_ffffff94 = *(float *)(in_stack_00000004 + 0x56e0);
  }
  if ((float *)&stack0xffffff98 != pfVar1) {
    in_stack_ffffff98 = *pfVar1;
    in_stack_ffffff9c = *(float *)(in_stack_00000004 + 0x56dc);
    in_stack_ffffffa0 = *(float *)(in_stack_00000004 + 0x56e0);
  }
  iVar10 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0x104)) {
    point = (CVector3f *)(in_stack_00000004 + 0x57f4);
    do {
      iVar10 = iVar10 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&stack0xffffff8c,point);
      point = (CVector3f *)&point[0x17].z;
    } while (iVar10 < *(int *)(in_stack_00000004 + 0x104));
  }
  pCVar5 = g_CSpotViewPtr;
  fVar3 = (in_stack_ffffff90 + in_stack_ffffff9c) * 0.5f;
  fVar4 = (in_stack_ffffff94 + in_stack_ffffffa0) * 0.5f;
  if (g_CSpotViewPtr->field0_0x0 + 0x18 != &stack0xffffffb8) {
    *(float *)(g_CSpotViewPtr->field0_0x0 + 0x18) =
         (in_stack_ffffff8c + in_stack_ffffff98) * 0.5f;
    *(float *)(pCVar5->field0_0x0 + 0x1c) = fVar3;
    *(float *)(pCVar5->field0_0x0 + 0x20) = fVar4;
  }
  while( true ) {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    iStack0000000c = 0;
    if (0 < *(int *)(iVar6 + 0x104)) {
      iVar10 = 0;
      iVar12 = 0;
      do {
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)
                   ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                   iVar12),(CVector3i *)(*(int *)(iVar6 + 0x10c) + iVar10));
        iVar10 = iVar10 + 0xc;
        iVar12 = iVar12 + 0x30;
        iStack0000000c = iStack0000000c + 1;
      } while (iStack0000000c < *(int *)(iVar6 + 0x104));
    }
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,0xff);
    iStack00000014 = 0;
    if (0 < *(int *)(iVar6 + 0x110)) {
      iStack0000000c = 0;
      do {
        iVar11 = *(int *)(iVar6 + 0x114) + iStack0000000c;
        iVar10 = 0;
        iVar12 = iVar11;
        if (0 < *(int *)(iVar11 + 4)) {
          do {
            iVar10 = iVar10 + 1;
            engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                      (g_CDemonRendererPtr,*(int *)(iVar12 + 0x18),
                       *(int *)((iVar10 % *(int *)(iVar11 + 4)) * 0xc + 0x18 + iVar11));
            iVar12 = iVar12 + 0xc;
          } while (iVar10 < *(int *)(iVar11 + 4));
        }
        iStack0000000c = iStack0000000c + 0x48;
        iStack00000014 = iStack00000014 + 1;
      } while (iStack00000014 < *(int *)(iVar6 + 0x110));
    }
    if (unaff_EDI < 0) {
      iVar10 = -999;
      unaff_EBP = (CKeys *)0xfffffc19;
      in_stack_00000004 = -999;
      pCStack00000008 = (CKeys *)0xfffffc19;
    }
    else {
      iVar10 = g_MouseX;
      in_stack_00000004 = unaff_EDI;
      if (g_MouseX < unaff_EDI) {
        in_stack_00000004 = g_MouseX;
        iVar10 = unaff_EDI;
      }
      pCStack00000008 = (CKeys *)g_MouseY;
      if (g_MouseY < (int)unaff_EBP) {
        pCStack00000008 = unaff_EBP;
        unaff_EBP = (CKeys *)g_MouseY;
      }
    }
    iVar12 = 0;
    if (0 < *(int *)(iVar6 + 0x104)) {
      iVar13 = 0;
      iVar11 = iVar6;
      do {
        if (*(int *)(iVar11 + 0x574c) == 0) {
          g_ActiveRenderColor = 4;
        }
        else {
          g_ActiveRenderColor = 1;
        }
        pSVar2 = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar2->projected_vertex).screen_x + iVar13 + 3) & 0x80) == 0) {
          iVar9 = *(int *)((int)&(pSVar2->projected_vertex).screen_x + iVar13) >> 0x10;
          iVar8 = *(int *)((int)&(pSVar2->projected_vertex).screen_y + iVar13) >> 0x10;
          if ((((in_stack_00000004 <= iVar9) && (iVar9 <= iVar10)) && ((int)unaff_EBP <= iVar8)) &&
             (iVar8 <= (int)pCStack00000008)) {
            if (g_MouseButtonFlags == 0) {
              *(int *)(iVar11 + 0x574c) = unaff_ESI;
            }
            if (*(int *)(iVar11 + 0x574c) == 0) {
              g_ActiveRenderColor = 0xfc;
            }
            else {
              g_ActiveRenderColor = 0xf9;
            }
          }
        }
        core_cloth_cpp_FUN_0043c6e0();
        iVar13 = iVar13 + 0x30;
        iVar11 = iVar11 + 0x11c;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(iVar6 + 0x104));
    }
    if ((local_14 != 0) && (iVar10 = 0, 0 < *(int *)(iVar6 + 0x104))) {
      iVar12 = 0;
      do {
        iVar11 = *(int *)(iVar12 + *(int *)(iVar6 + 0x3fe3c));
        if ((int)(g_CDemonRendererPtr->vertex_buffer_ptr[iVar11].projected_vertex.screen_x &
                 -0x80000000) == 0) {
          iVar11 = g_CDemonRendererPtr->vertex_buffer_ptr[iVar11].projected_vertex.screen_x;
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffbc,"%d");
          engine_2d_c_drawText_FUN_00401fd0(&stack0xffffffb8,iVar11 >> 0x10,local_1c);
        }
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar10 < *(int *)(iVar6 + 0x104));
    }
    if ((g_MouseButtonFlags == 0) && (-1 < in_stack_00000004)) {
      iVar11 = 0;
      iVar10 = 0;
      iVar12 = iVar6;
      if (0 < *(int *)(iVar6 + 0x104)) {
        do {
          if (*(int *)(iVar12 + 0x574c) != 0) {
            iVar10 = iVar10 + 1;
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0x11c;
        } while (iVar11 < *(int *)(iVar6 + 0x104));
      }
      if (iVar10 < 0x65) {
        *(uint *)(iVar6 + 0x3f028) = 0;
        iVar11 = 0;
        iVar12 = iVar6;
        if (0 < *(int *)(iVar6 + 0x104)) {
          do {
            if (*(int *)(iVar12 + 0x574c) != 0) {
              *(int *)(iVar6 + 0x3f02c + *(int *)(iVar6 + 0x3f028) * 4) = iVar11;
              *(int *)(iVar6 + 0x3f028) = *(int *)(iVar6 + 0x3f028) + 1;
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 0x11c;
          } while (iVar11 < *(int *)(iVar6 + 0x104));
        }
        if (iVar10 != *(int *)(iVar6 + 0x3f028)) {
          g_CurrentFilename = "..\\core\\cloth.cpp";
          g_CurrentLineNumber = 0x8ec;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't lock this many vertices!");
        iVar12 = 0;
        iVar10 = iVar6;
        if (0 < *(int *)(iVar6 + 0x104)) {
          do {
            *(uint *)(iVar10 + 0x574c) = 0;
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 0x11c;
          } while (iVar12 < *(int *)(iVar6 + 0x104));
        }
        iVar12 = 0;
        iVar10 = iVar6;
        if (0 < *(int *)(iVar6 + 0x3f028)) {
          do {
            *(uint *)(*(int *)(iVar10 + 0x3f02c) * 0x11c + 0x574c + iVar6) = 1;
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar12 < *(int *)(iVar6 + 0x3f028));
        }
      }
    }
    if (unaff_ESI == 0) {
      text = "Use mouse to unlock vertices.";
    }
    else {
      text = "Use mouse to lock vertices.";
    }
    engine_2d_c_drawTextXY_FUN_00402130(0,0,text);
    engine_2d_c_drawTextXY_FUN_00402130(0,0xb,"L Toggle locking/unlocking vertices.");
    engine_2d_c_drawTextXY_FUN_00402130(0,0x16,"N Toggle vertex numbers.");
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    if (-1 < iStack00000014) {
      uVar7 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar7);
      engine_2d_c_drawLine_FUN_004011b0
                (in_stack_00000018,in_stack_00000010,in_stack_00000018,in_stack_0000001c);
      engine_2d_c_drawLine_FUN_004011b0
                (in_stack_00000018,iStack00000014,in_stack_00000018,in_stack_0000001c);
      engine_2d_c_drawLine_FUN_004011b0
                (in_stack_00000020,iStack00000014,in_stack_00000018,iStack00000014);
      engine_2d_c_drawLine_FUN_004011b0
                (in_stack_00000020,in_stack_00000028,in_stack_00000018,in_stack_00000028);
    }
    if ((in_stack_00000018 < 0) && (g_MouseButtonFlags != 0)) {
      in_stack_00000018 = g_MouseX;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x26);
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar10 != 0) break;
    unaff_EDI = 0x31;
    local_14 = 0x43dab9;
    unaff_EBP = g_CKeysPtr;
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
  }
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  pCVar5 = g_CSpotViewPtr;
  pCVar5->field0_0x0[0x20] = '\0';
  pCVar5->field0_0x0[0x21] = '\0';
  pCVar5->field0_0x0[0x22] = '\0';
  pCVar5->field0_0x0[0x23] = '\0';
  *(uint *)(pCVar5->field0_0x0 + 0x1c) = *(uint *)(pCVar5->field0_0x0 + 0x20);
  *(uint *)(pCVar5->field0_0x0 + 0x18) = *(uint *)(pCVar5->field0_0x0 + 0x1c);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
