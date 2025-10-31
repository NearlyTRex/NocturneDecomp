// Name: core_cloth.cpp_LockVerticesMaybe_FUN_0043d590
// Address: 0043d590
// Address Range: [[0043d590, 0043dcbc]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_LockVerticesMaybe_FUN_0043d590()
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043df5f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_006188be
//   TerminatedCString s_Can_t_lock_this_many_ver_006188c1
//   TerminatedCString s_core_cloth_cpp_006188e0
//   TerminatedCString s_Bug_006188f2
//   TerminatedCString s_Use_mouse_to_lock_vertic_006188f7
//   TerminatedCString s_Use_mouse_to_unlock_vert_00618913
//   TerminatedCString s_L_Toggle_locking_unlocki_00618931
//   TerminatedCString s_N_Toggle_vertex_numbers_00618956
//   undefined4 DAT_00618972
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CSpotView* g_CSpotViewPtr = 03f6b9e0
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSpotView g_CSpotViewInstance
//   undefined4 DAT_03f6b9f8
//   undefined4 DAT_03f6b9fc
//   undefined4 DAT_03f6ba00
//   CVector3f g_ZeroVector
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_cloth.cpp_FUN_00439710
//   core_cloth.cpp_FUN_0043c6e0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9670
//   core_stairs.cpp_FUN_005b9a20
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_drawTextXY_FUN_00402130
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_LockVerticesMaybe(undefined4 param_1) */

void core_cloth_cpp_LockVerticesMaybe_FUN_0043d590(void)

{
  CSpotView **ppCVar1;
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
  CSpotView *local_74;
  float in_stack_ffffff90;
  float in_stack_ffffff94;
  CSpotView *in_stack_ffffff98;
  float in_stack_ffffff9c;
  float in_stack_ffffffa0;
  char *text;
  int local_1c;
  int local_14;
  
  iVar6 = in_stack_00000004;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_stairs_cpp_FUN_005b9620();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff84);
  core_cloth_cpp_FUN_00439710();
  ppCVar1 = (CSpotView **)(in_stack_00000004 + 0x56d8);
  if (&local_74 != ppCVar1) {
    local_74 = *ppCVar1;
    in_stack_ffffff90 = *(float *)(in_stack_00000004 + 0x56dc);
    in_stack_ffffff94 = *(float *)(in_stack_00000004 + 0x56e0);
  }
  if ((CSpotView **)&stack0xffffff98 != ppCVar1) {
    in_stack_ffffff98 = *ppCVar1;
    in_stack_ffffff9c = *(float *)(in_stack_00000004 + 0x56dc);
    in_stack_ffffffa0 = *(float *)(in_stack_00000004 + 0x56e0);
  }
  iVar10 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0x104)) {
    point = (CVector3f *)(in_stack_00000004 + 0x57f4);
    do {
      iVar10 = iVar10 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&local_74,point);
      point = (CVector3f *)&point[0x17].z;
    } while (iVar10 < *(int *)(in_stack_00000004 + 0x104));
  }
  pCVar5 = g_CSpotViewPtr;
  fVar3 = (in_stack_ffffff90 + in_stack_ffffff9c) * _DAT_00618972;
  fVar4 = (in_stack_ffffff94 + in_stack_ffffffa0) * _DAT_00618972;
  if (g_CSpotViewPtr->field0_0x0 + 0x18 != &stack0xffffffb8) {
    *(float *)(g_CSpotViewPtr->field0_0x0 + 0x18) =
         ((float)local_74 + (float)in_stack_ffffff98) * _DAT_00618972;
    *(float *)(pCVar5->field0_0x0 + 0x1c) = fVar3;
    *(float *)(pCVar5->field0_0x0 + 0x20) = fVar4;
  }
  while( true ) {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    local_74 = (CSpotView *)0x43d6de;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    local_74 = g_CSpotViewPtr;
    core_stairs_cpp_FUN_005b9670();
    core_stairs_cpp_FUN_005b9a20();
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
          local_74 = (CSpotView *)0x43dbc1;
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
        *(undefined4 *)(iVar6 + 0x3f028) = 0;
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
            *(undefined4 *)(iVar10 + 0x574c) = 0;
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 0x11c;
          } while (iVar12 < *(int *)(iVar6 + 0x104));
        }
        iVar12 = 0;
        iVar10 = iVar6;
        if (0 < *(int *)(iVar6 + 0x3f028)) {
          do {
            *(undefined4 *)(*(int *)(iVar10 + 0x3f02c) * 0x11c + 0x574c + iVar6) = 1;
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
      g_ActiveRenderColor = CONCAT31(extraout_var,uVar7);
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
  core_stairs_cpp_FUN_005b9620();
  pCVar5 = g_CSpotViewPtr;
  pCVar5->field0_0x0[0x20] = '\0';
  pCVar5->field0_0x0[0x21] = '\0';
  pCVar5->field0_0x0[0x22] = '\0';
  pCVar5->field0_0x0[0x23] = '\0';
  *(undefined4 *)(pCVar5->field0_0x0 + 0x1c) = *(undefined4 *)(pCVar5->field0_0x0 + 0x20);
  *(undefined4 *)(pCVar5->field0_0x0 + 0x18) = *(undefined4 *)(pCVar5->field0_0x0 + 0x1c);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0043d590: PUSH EBX
//   Label: core_cloth.cpp_LockVerticesMaybe_FUN_0043d590
// 0043d591: PUSH ESI
// 0043d592: PUSH EDI
// 0043d593: PUSH EBP
// 0043d594: SUB ESP,0x74
// 0043d597: MOV EBP,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 0043d59e: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0043d5a3: MOV EDX,0xffffffff
// 0043d5a8: MOV EBX,0x1
// 0043d5ad: PUSH 0x1f
// 0043d5af: MOV EDI,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0043d5b5: XOR ESI,ESI
// 0043d5b7: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0043d5bb: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0043d5bf: PUSH EDI
//   XREF to: 03f6b9e0 (DATA)
// 0043d5c0: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0043d5c4: MOV dword ptr [ESP + 0x50],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 0043d5c8: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 0043d5cd: ADD ESP,0x8
// 0043d5d0: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0043d5d5: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 0043d5d6: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0043d5db: ADD ESP,0x4
// 0043d5de: PUSH ESI
// 0043d5df: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0043d5e4: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0043d5e9: PUSH EBP
// 0043d5ea: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 0043d5ef: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x84] (DATA)
// 0043d5f3: LEA EDX,[EBP + 0x56d8]
// 0043d5f9: ADD ESP,0x10
// 0043d5fc: MOV EBX,EDX
// 0043d5fe: CMP EAX,EDX
// 0043d600: JNZ 0x0043dada
//   XREF to: 0043dada (CONDITIONAL_JUMP)
// 0043d606: LEA EAX,[ESP + 0xc]
//   Label: LAB_0043d606
//   XREF to: Stack[-0x78] (DATA)
// 0043d60a: CMP EAX,EBX
// 0043d60c: JZ 0x0043d622
//   XREF to: 0043d622 (CONDITIONAL_JUMP)
// 0043d60e: MOV EAX,dword ptr [EBX]
// 0043d610: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0043d614: MOV EAX,dword ptr [EBX + 0x4]
// 0043d617: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0043d61b: MOV EAX,dword ptr [EBX + 0x8]
// 0043d61e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0043d622: MOV EBX,0x1
//   Label: LAB_0043d622
// 0043d627: CMP EBX,dword ptr [EBP + 0x104]
// 0043d62d: JGE 0x0043d660
//   XREF to: 0043d660 (CONDITIONAL_JUMP)
// 0043d62f: LEA ESI,[EBP + 0x57f4]
// 0043d635: PUSH ESI
//   Label: LAB_0043d635
// 0043d636: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x84] (DATA)
// 0043d63a: PUSH EAX
// 0043d63b: INC EBX
// 0043d63c: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 0043d641: ADD ESI,0x11c
// 0043d647: MOV ECX,dword ptr [EBP + 0x104]
// 0043d64d: ADD ESP,0x8
// 0043d650: CMP EBX,ECX
// 0043d652: JL 0x0043d635
//   XREF to: 0043d635 (CONDITIONAL_JUMP)
// 0043d654: LEA EAX,[EAX]
// 0043d65a: LEA EDX,[EDX]
// 0043d660: FLD float ptr [ESP]
//   Label: LAB_0043d660
//   XREF to: Stack[-0x84] (DATA)
// 0043d663: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x78] (READ)
// 0043d667: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x4c] (WRITE)
// 0043d66b: FLD float ptr [0x00618972]
//   XREF to: 00618972 (READ)
// 0043d671: FXCH
// 0043d673: FMUL ST1
// 0043d675: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 0043d679: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 0043d67d: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x74] (READ)
// 0043d681: FXCH
// 0043d683: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x70] (READ)
// 0043d687: FXCH
// 0043d689: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x48] (WRITE)
// 0043d68d: FMUL ST3
// 0043d68f: FXCH
// 0043d691: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0x44] (WRITE)
// 0043d695: FMULP ST3
// 0043d697: MOV EDX,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0043d69d: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x58] (DATA)
// 0043d6a1: ADD EDX,0x18
//   XREF to: 03f6b9f8 (PARAM)
// 0043d6a4: FXCH
// 0043d6a6: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x58] (WRITE)
// 0043d6aa: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x54] (WRITE)
// 0043d6ae: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x50] (WRITE)
// 0043d6b2: CMP EDX,EAX
// 0043d6b4: JNZ 0x0043daf2
//   XREF to: 0043daf2 (CONDITIONAL_JUMP)
// 0043d6ba: MOV EAX,[0x00679398]
//   Label: LAB_0043d6ba
//   XREF to: 00679398 (READ)
// 0043d6bf: PUSH 0xf8
// 0043d6c4: DEC EAX
// 0043d6c5: PUSH EAX
// 0043d6c6: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0043d6cb: DEC EAX
// 0043d6cc: PUSH EAX
// 0043d6cd: PUSH 0x0
// 0043d6cf: PUSH 0x0
// 0043d6d1: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0043d6d6: ADD ESP,0x14
// 0043d6d9: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0043d6de: PUSH 0x1f
// 0043d6e0: MOV EBX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0043d6e6: PUSH EBX
//   XREF to: 03f6b9e0 (DATA)
// 0043d6e7: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 0043d6ec: ADD ESP,0x8
// 0043d6ef: MOV ESI,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0043d6f5: PUSH ESI
//   XREF to: 03f6b9e0 (DATA)
// 0043d6f6: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0043d6fb: ADD ESP,0x4
// 0043d6fe: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0043d703: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043d709: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0043d70a: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0043d70f: ADD ESP,0x8
// 0043d712: XOR EAX,EAX
// 0043d714: MOV EDX,dword ptr [EBP + 0x104]
// 0043d71a: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0043d71e: TEST EDX,EDX
// 0043d720: JLE 0x0043d75b
//   XREF to: 0043d75b (CONDITIONAL_JUMP)
// 0043d722: XOR ESI,ESI
// 0043d724: XOR EDI,EDI
// 0043d726: MOV EAX,dword ptr [EBP + 0x10c]
//   Label: LAB_0043d726
// 0043d72c: ADD EAX,ESI
// 0043d72e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0043d734: PUSH EAX
// 0043d735: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043d737: ADD EAX,EDI
// 0043d739: PUSH EAX
// 0043d73a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0043d73f: ADD ESP,0x8
// 0043d742: ADD ESI,0xc
// 0043d745: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 0043d749: ADD EDI,0x30
// 0043d74c: INC ECX
// 0043d74d: MOV EBX,dword ptr [EBP + 0x104]
// 0043d753: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0043d757: CMP ECX,EBX
// 0043d759: JL 0x0043d726
//   XREF to: 0043d726 (CONDITIONAL_JUMP)
// 0043d75b: PUSH 0xff
//   Label: LAB_0043d75b
// 0043d760: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043d766: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0043d767: XOR EDI,EDI
// 0043d769: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0043d76e: ADD ESP,0x8
// 0043d771: MOV EAX,dword ptr [EBP + 0x110]
// 0043d777: MOV dword ptr [ESP + 0x70],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0043d77b: TEST EAX,EAX
// 0043d77d: JLE 0x0043d7ee
//   XREF to: 0043d7ee (CONDITIONAL_JUMP)
// 0043d77f: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0043d783: MOV EDX,dword ptr [ESP + 0x68]
//   Label: LAB_0043d783
//   XREF to: Stack[-0x1c] (READ)
// 0043d787: MOV ESI,dword ptr [EBP + 0x114]
// 0043d78d: ADD ESI,EDX
// 0043d78f: MOV ECX,dword ptr [ESI + 0x4]
// 0043d792: XOR EAX,EAX
// 0043d794: TEST ECX,ECX
// 0043d796: JLE 0x0043d7d0
//   XREF to: 0043d7d0 (CONDITIONAL_JUMP)
// 0043d798: MOV EDI,ESI
// 0043d79a: LEA EBX,[EAX + 0x1]
//   Label: LAB_0043d79a
// 0043d79d: MOV ECX,dword ptr [ESI + 0x4]
// 0043d7a0: MOV EDX,EBX
// 0043d7a2: MOV EAX,EBX
// 0043d7a4: SAR EDX,0x1f
// 0043d7a7: IDIV ECX
// 0043d7a9: IMUL EDX,EDX,0xc
// 0043d7ac: MOV EAX,dword ptr [EDX + ESI*0x1 + 0x18]
// 0043d7b0: PUSH EAX
// 0043d7b1: MOV EDX,dword ptr [EDI + 0x18]
// 0043d7b4: PUSH EDX
// 0043d7b5: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0043d7bb: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0043d7bc: ADD EDI,0xc
// 0043d7bf: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0043d7c4: ADD ESP,0xc
// 0043d7c7: MOV EDX,dword ptr [ESI + 0x4]
// 0043d7ca: MOV EAX,EBX
// 0043d7cc: CMP EBX,EDX
// 0043d7ce: JL 0x0043d79a
//   XREF to: 0043d79a (CONDITIONAL_JUMP)
// 0043d7d0: MOV EDX,dword ptr [ESP + 0x68]
//   Label: LAB_0043d7d0
//   XREF to: Stack[-0x1c] (READ)
// 0043d7d4: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 0043d7d8: MOV EBX,dword ptr [EBP + 0x110]
// 0043d7de: ADD EDX,0x48
// 0043d7e1: INC ECX
// 0043d7e2: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043d7e6: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0043d7ea: CMP ECX,EBX
// 0043d7ec: JL 0x0043d783
//   XREF to: 0043d783 (CONDITIONAL_JUMP)
// 0043d7ee: MOV ESI,dword ptr [ESP + 0x50]
//   Label: LAB_0043d7ee
//   XREF to: Stack[-0x34] (READ)
// 0043d7f2: TEST ESI,ESI
// 0043d7f4: JL 0x0043db0b
//   XREF to: 0043db0b (CONDITIONAL_JUMP)
// 0043d7fa: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0043d7ff: MOV dword ptr [ESP + 0x60],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0043d803: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0043d807: CMP ESI,EAX
// 0043d809: JLE 0x0043d813
//   XREF to: 0043d813 (CONDITIONAL_JUMP)
// 0043d80b: MOV dword ptr [ESP + 0x5c],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0043d80f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043d813: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0043d813
//   XREF to: Stack[-0x38] (READ)
// 0043d817: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0043d81b: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0043d820: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0043d824: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x38] (READ)
// 0043d828: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 0043d82c: CMP EAX,ESI
// 0043d82e: JLE 0x0043d838
//   XREF to: 0043d838 (CONDITIONAL_JUMP)
// 0043d830: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0043d834: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0043d838: MOV EDI,dword ptr [EBP + 0x104]
//   Label: LAB_0043d838
// 0043d83e: XOR ESI,ESI
// 0043d840: TEST EDI,EDI
// 0043d842: JLE 0x0043d88f
//   XREF to: 0043d88f (CONDITIONAL_JUMP)
// 0043d844: MOV EBX,EBP
// 0043d846: XOR EDI,EDI
// 0043d848: CMP dword ptr [EBX + 0x574c],0x0
//   Label: LAB_0043d848
// 0043d84f: JZ 0x0043db25
//   XREF to: 0043db25 (CONDITIONAL_JUMP)
// 0043d855: MOV dword ptr [0x02d02570],0x1
//   XREF to: 02d02570 (WRITE)
// 0043d85f: MOV EAX,[0x006703ec]
//   Label: LAB_0043d85f
//   XREF to: 006703ec (READ)
// 0043d864: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0043d866: ADD EAX,EDI
// 0043d868: TEST byte ptr [EAX + 0x13],0x80
// 0043d86c: JZ 0x0043db34
//   XREF to: 0043db34 (CONDITIONAL_JUMP)
// 0043d872: PUSH ESI
//   Label: LAB_0043d872
// 0043d873: CALL core_cloth.cpp_FUN_0043c6e0
//   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)
// 0043d878: ADD EDI,0x30
// 0043d87b: ADD EBX,0x11c
// 0043d881: INC ESI
// 0043d882: MOV EAX,dword ptr [EBP + 0x104]
// 0043d888: ADD ESP,0x4
// 0043d88b: CMP ESI,EAX
// 0043d88d: JL 0x0043d848
//   XREF to: 0043d848 (CONDITIONAL_JUMP)
// 0043d88f: CMP dword ptr [ESP + 0x48],0x0
//   Label: LAB_0043d88f
//   XREF to: Stack[-0x3c] (READ)
// 0043d894: JZ 0x0043d8d1
//   XREF to: 0043d8d1 (CONDITIONAL_JUMP)
// 0043d896: MOV ECX,dword ptr [EBP + 0x104]
// 0043d89c: XOR EBX,EBX
// 0043d89e: TEST ECX,ECX
// 0043d8a0: JLE 0x0043d8d1
//   XREF to: 0043d8d1 (CONDITIONAL_JUMP)
// 0043d8a2: XOR ESI,ESI
// 0043d8a4: MOV EAX,dword ptr [EBP + 0x3fe3c]
//   Label: LAB_0043d8a4
// 0043d8aa: MOV EAX,dword ptr [ESI + EAX*0x1]
// 0043d8ad: IMUL EDX,EAX,0x30
// 0043d8b0: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0043d8b5: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0043d8b7: ADD EAX,EDX
// 0043d8b9: TEST byte ptr [EAX + 0x13],0x80
// 0043d8bd: JZ 0x0043dba4
//   XREF to: 0043dba4 (CONDITIONAL_JUMP)
// 0043d8c3: INC EBX
//   Label: LAB_0043d8c3
// 0043d8c4: MOV EDX,dword ptr [EBP + 0x104]
// 0043d8ca: ADD ESI,0x4
// 0043d8cd: CMP EBX,EDX
// 0043d8cf: JL 0x0043d8a4
//   XREF to: 0043d8a4 (CONDITIONAL_JUMP)
// 0043d8d1: MOV EBX,dword ptr [0x02cf6a94]
//   Label: LAB_0043d8d1
//   XREF to: 02cf6a94 (READ)
// 0043d8d7: TEST EBX,EBX
// 0043d8d9: JNZ 0x0043d997
//   XREF to: 0043d997 (CONDITIONAL_JUMP)
// 0043d8df: CMP dword ptr [ESP + 0x60],0x0
//   XREF to: Stack[-0x24] (READ)
// 0043d8e4: JL 0x0043d997
//   XREF to: 0043d997 (CONDITIONAL_JUMP)
// 0043d8ea: MOV EDI,dword ptr [EBP + 0x104]
// 0043d8f0: XOR EAX,EAX
// 0043d8f2: TEST EDI,EDI
// 0043d8f4: JLE 0x0043d913
//   XREF to: 0043d913 (CONDITIONAL_JUMP)
// 0043d8f6: MOV EDX,EBP
// 0043d8f8: CMP dword ptr [EDX + 0x574c],0x0
//   Label: LAB_0043d8f8
// 0043d8ff: JZ 0x0043d902
//   XREF to: 0043d902 (CONDITIONAL_JUMP)
// 0043d901: INC EBX
// 0043d902: INC EAX
//   Label: LAB_0043d902
// 0043d903: MOV ECX,dword ptr [EBP + 0x104]
// 0043d909: ADD EDX,0x11c
// 0043d90f: CMP EAX,ECX
// 0043d911: JL 0x0043d8f8
//   XREF to: 0043d8f8 (CONDITIONAL_JUMP)
// 0043d913: CMP EBX,0x64
//   Label: LAB_0043d913
// 0043d916: JLE 0x0043dbdf
//   XREF to: 0043dbdf (CONDITIONAL_JUMP)
// 0043d91c: PUSH 0x6188c1
//   XREF to: 006188c1 (DATA)
// 0043d921: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043d927: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0043d928: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0043d92d: ADD ESP,0x8
// 0043d930: MOV EDX,dword ptr [EBP + 0x104]
// 0043d936: XOR EAX,EAX
// 0043d938: TEST EDX,EDX
// 0043d93a: JLE 0x0043d959
//   XREF to: 0043d959 (CONDITIONAL_JUMP)
// 0043d93c: MOV EDX,EBP
// 0043d93e: MOV dword ptr [EDX + 0x574c],0x0
//   Label: LAB_0043d93e
// 0043d948: INC EAX
// 0043d949: MOV EDI,dword ptr [EBP + 0x104]
// 0043d94f: ADD EDX,0x11c
// 0043d955: CMP EAX,EDI
// 0043d957: JL 0x0043d93e
//   XREF to: 0043d93e (CONDITIONAL_JUMP)
// 0043d959: MOV EDX,dword ptr [EBP + 0x3f028]
//   Label: LAB_0043d959
// 0043d95f: XOR EAX,EAX
// 0043d961: TEST EDX,EDX
// 0043d963: JLE 0x0043d98a
//   XREF to: 0043d98a (CONDITIONAL_JUMP)
// 0043d965: MOV EDX,EBP
// 0043d967: IMUL EBX,dword ptr [EDX + 0x3f02c],0x11c
//   Label: LAB_0043d967
// 0043d971: MOV dword ptr [EBX + EBP*0x1 + 0x574c],0x1
// 0043d97c: INC EAX
// 0043d97d: MOV EBX,dword ptr [EBP + 0x3f028]
// 0043d983: ADD EDX,0x4
// 0043d986: CMP EAX,EBX
// 0043d988: JL 0x0043d967
//   XREF to: 0043d967 (CONDITIONAL_JUMP)
// 0043d98a: MOV ESI,0xffffffff
//   Label: LAB_0043d98a
// 0043d98f: MOV dword ptr [ESP + 0x50],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0043d993: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0043d997: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_0043d997
//   XREF to: Stack[-0x30] (READ)
// 0043d99b: TEST EAX,EAX
// 0043d99d: JZ 0x0043dc57
//   XREF to: 0043dc57 (CONDITIONAL_JUMP)
// 0043d9a3: PUSH 0x6188f7
//   XREF to: 006188f7 (DATA)
// 0043d9a8: PUSH 0x0
// 0043d9aa: PUSH 0x0
// 0043d9ac: CALL engine_2d.c_drawTextXY_FUN_00402130
//   Label: LAB_0043d9ac
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 0043d9b1: ADD ESP,0xc
// 0043d9b4: PUSH 0x618931
//   XREF to: 00618931 (DATA)
// 0043d9b9: PUSH 0xb
// 0043d9bb: PUSH 0x0
// 0043d9bd: CALL engine_2d.c_drawTextXY_FUN_00402130
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 0043d9c2: ADD ESP,0xc
// 0043d9c5: PUSH 0x618956
//   XREF to: 00618956 (DATA)
// 0043d9ca: PUSH 0x16
// 0043d9cc: PUSH 0x0
// 0043d9ce: CALL engine_2d.c_drawTextXY_FUN_00402130
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 0043d9d3: ADD ESP,0xc
// 0043d9d6: PUSH 0x0
// 0043d9d8: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0043d9de: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0043d9df: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0043d9e4: ADD ESP,0x8
// 0043d9e7: CMP dword ptr [ESP + 0x60],0x0
//   XREF to: Stack[-0x24] (READ)
// 0043d9ec: JL 0x0043da50
//   XREF to: 0043da50 (CONDITIONAL_JUMP)
// 0043d9ee: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0043d9f4: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0043d9f5: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0043d9fa: ADD ESP,0x4
// 0043d9fd: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 0043da01: PUSH ESI
// 0043da02: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0043da06: PUSH EDI
// 0043da07: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0043da0c: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x2c] (READ)
// 0043da10: PUSH EAX
// 0043da11: PUSH EDI
// 0043da12: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0043da17: ADD ESP,0x10
// 0043da1a: PUSH ESI
// 0043da1b: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 0043da1f: PUSH EBX
// 0043da20: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x2c] (READ)
// 0043da24: PUSH ESI
// 0043da25: PUSH EBX
// 0043da26: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0043da2b: ADD ESP,0x10
// 0043da2e: PUSH ESI
// 0043da2f: PUSH EBX
// 0043da30: PUSH ESI
// 0043da31: MOV EDI,EBX
// 0043da33: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x24] (READ)
// 0043da37: PUSH EBX
// 0043da38: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0043da3d: ADD ESP,0x10
// 0043da40: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 0043da44: PUSH ESI
// 0043da45: PUSH EDI
// 0043da46: PUSH ESI
// 0043da47: PUSH EBX
// 0043da48: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0043da4d: ADD ESP,0x10
// 0043da50: CMP dword ptr [ESP + 0x50],0x0
//   Label: LAB_0043da50
//   XREF to: Stack[-0x34] (READ)
// 0043da55: JL 0x0043dc63
//   XREF to: 0043dc63 (CONDITIONAL_JUMP)
// 0043da5b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0043da5b
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0043da60: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0043da66: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0043da67: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0043da6c: ADD ESP,0x4
// 0043da6f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0043da74: PUSH 0x26
// 0043da76: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0043da78: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0043da79: CALL dword ptr [EDX + 0x4]
// 0043da7c: ADD ESP,0x8
// 0043da7f: TEST EAX,EAX
// 0043da81: JZ 0x0043da94
//   XREF to: 0043da94 (CONDITIONAL_JUMP)
// 0043da83: CMP dword ptr [ESP + 0x54],0x0
// 0043da88: SETZ AL
// 0043da8b: AND EAX,0xff
// 0043da90: MOV dword ptr [ESP + 0x54],EAX
// 0043da94: PUSH 0x1
//   Label: LAB_0043da94
// 0043da96: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0043da9b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0043da9c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0043da9e: CALL dword ptr [EDX + 0x4]
// 0043daa1: ADD ESP,0x8
// 0043daa4: TEST EAX,EAX
// 0043daa6: JNZ 0x0043dc87
//   XREF to: 0043dc87 (CONDITIONAL_JUMP)
// 0043daac: PUSH 0x31
// 0043daae: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0043dab3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0043dab4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0043dab6: CALL dword ptr [EDX + 0x4]
// 0043dab9: ADD ESP,0x8
// 0043dabc: TEST EAX,EAX
// 0043dabe: JZ 0x0043d6ba
//   XREF to: 0043d6ba (CONDITIONAL_JUMP)
// 0043dac4: CMP dword ptr [ESP + 0x48],0x0
// 0043dac9: SETZ AL
// 0043dacc: AND EAX,0xff
// 0043dad1: MOV dword ptr [ESP + 0x48],EAX
// 0043dad5: JMP 0x0043d6ba
//   XREF to: 0043d6ba (UNCONDITIONAL_JUMP)
// 0043dada: MOV EAX,dword ptr [EDX]
//   Label: LAB_0043dada
// 0043dadc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x84] (DATA)
// 0043dadf: MOV EAX,dword ptr [EDX + 0x4]
// 0043dae2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0043dae6: MOV EAX,dword ptr [EDX + 0x8]
// 0043dae9: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0043daed: JMP 0x0043d606
//   XREF to: 0043d606 (UNCONDITIONAL_JUMP)
// 0043daf2: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0043daf2
//   XREF to: Stack[-0x58] (DATA)
// 0043daf6: MOV dword ptr [EDX],EAX
//   XREF to: 03f6b9f8 (WRITE)
// 0043daf8: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x54] (READ)
// 0043dafc: MOV dword ptr [EDX + 0x4],EAX
//   XREF to: 03f6b9fc (WRITE)
// 0043daff: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x50] (READ)
// 0043db03: MOV dword ptr [EDX + 0x8],EAX
//   XREF to: 03f6ba00 (WRITE)
// 0043db06: JMP 0x0043d6ba
//   XREF to: 0043d6ba (UNCONDITIONAL_JUMP)
// 0043db0b: MOV EDI,0xfffffc19
//   Label: LAB_0043db0b
// 0043db10: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0043db14: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0043db18: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0043db1c: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0043db20: JMP 0x0043d838
//   XREF to: 0043d838 (UNCONDITIONAL_JUMP)
// 0043db25: MOV dword ptr [0x02d02570],0x4
//   Label: LAB_0043db25
//   XREF to: 02d02570 (WRITE)
// 0043db2f: JMP 0x0043d85f
//   XREF to: 0043d85f (UNCONDITIONAL_JUMP)
// 0043db34: MOV ECX,dword ptr [ESP + 0x60]
//   Label: LAB_0043db34
//   XREF to: Stack[-0x24] (READ)
// 0043db38: MOV EDX,dword ptr [EAX + 0x10]
// 0043db3b: MOV EAX,dword ptr [EAX + 0x14]
// 0043db3e: SAR EDX,0x10
// 0043db41: SAR EAX,0x10
// 0043db44: CMP EDX,ECX
// 0043db46: JL 0x0043d872
//   XREF to: 0043d872 (CONDITIONAL_JUMP)
// 0043db4c: CMP EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x28] (READ)
// 0043db50: JG 0x0043d872
//   XREF to: 0043d872 (CONDITIONAL_JUMP)
// 0043db56: CMP EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 0043db5a: JL 0x0043d872
//   XREF to: 0043d872 (CONDITIONAL_JUMP)
// 0043db60: CMP EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 0043db64: JG 0x0043d872
//   XREF to: 0043d872 (CONDITIONAL_JUMP)
// 0043db6a: CMP dword ptr [0x02cf6a94],0x0
//   XREF to: 02cf6a94 (READ)
// 0043db71: JNZ 0x0043db7d
//   XREF to: 0043db7d (CONDITIONAL_JUMP)
// 0043db73: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x30] (READ)
// 0043db77: MOV dword ptr [EBX + 0x574c],EAX
// 0043db7d: CMP dword ptr [EBX + 0x574c],0x0
//   Label: LAB_0043db7d
// 0043db84: JZ 0x0043db95
//   XREF to: 0043db95 (CONDITIONAL_JUMP)
// 0043db86: MOV dword ptr [0x02d02570],0xf9
//   XREF to: 02d02570 (WRITE)
// 0043db90: JMP 0x0043d872
//   XREF to: 0043d872 (UNCONDITIONAL_JUMP)
// 0043db95: MOV dword ptr [0x02d02570],0xfc
//   Label: LAB_0043db95
//   XREF to: 02d02570 (WRITE)
// 0043db9f: JMP 0x0043d872
//   XREF to: 0043d872 (UNCONDITIONAL_JUMP)
// 0043dba4: MOV EDI,dword ptr [EAX + 0x10]
//   Label: LAB_0043dba4
// 0043dba7: MOV EAX,dword ptr [EAX + 0x14]
// 0043dbaa: PUSH EBX
// 0043dbab: SAR EAX,0x10
// 0043dbae: PUSH 0x6188be
//   XREF to: 006188be (DATA)
// 0043dbb3: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0043dbb7: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x6c] (DATA)
// 0043dbbb: PUSH EAX
// 0043dbbc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043dbc1: ADD ESP,0xc
// 0043dbc4: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x40] (READ)
// 0043dbc8: PUSH ECX
// 0043dbc9: SAR EDI,0x10
// 0043dbcc: PUSH EDI
// 0043dbcd: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x6c] (DATA)
// 0043dbd1: PUSH EAX
// 0043dbd2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043dbd7: ADD ESP,0xc
// 0043dbda: JMP 0x0043d8c3
//   XREF to: 0043d8c3 (UNCONDITIONAL_JUMP)
// 0043dbdf: MOV ESI,dword ptr [EBP + 0x104]
//   Label: LAB_0043dbdf
// 0043dbe5: MOV dword ptr [EBP + 0x3f028],0x0
// 0043dbef: XOR EAX,EAX
// 0043dbf1: TEST ESI,ESI
// 0043dbf3: JLE 0x0043dc24
//   XREF to: 0043dc24 (CONDITIONAL_JUMP)
// 0043dbf5: MOV EDX,EBP
// 0043dbf7: CMP dword ptr [EDX + 0x574c],0x0
//   Label: LAB_0043dbf7
// 0043dbfe: JZ 0x0043dc13
//   XREF to: 0043dc13 (CONDITIONAL_JUMP)
// 0043dc00: MOV ESI,dword ptr [EBP + 0x3f028]
// 0043dc06: MOV dword ptr [EBP + ESI*0x4 + 0x3f02c],EAX
// 0043dc0d: INC dword ptr [EBP + 0x3f028]
// 0043dc13: INC EAX
//   Label: LAB_0043dc13
// 0043dc14: MOV ESI,dword ptr [EBP + 0x104]
// 0043dc1a: ADD EDX,0x11c
// 0043dc20: CMP EAX,ESI
// 0043dc22: JL 0x0043dbf7
//   XREF to: 0043dbf7 (CONDITIONAL_JUMP)
// 0043dc24: CMP EBX,dword ptr [EBP + 0x3f028]
//   Label: LAB_0043dc24
// 0043dc2a: JZ 0x0043d98a
//   XREF to: 0043d98a (CONDITIONAL_JUMP)
// 0043dc30: MOV EAX,0x6188e0
//   XREF to: 006188e0 (PARAM)
// 0043dc35: MOV EDX,0x8ec
// 0043dc3a: PUSH 0x6188f2
//   XREF to: 006188f2 (DATA)
// 0043dc3f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0043dc44: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0043dc4a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043dc4f: ADD ESP,0x4
// 0043dc52: JMP 0x0043d98a
//   XREF to: 0043d98a (UNCONDITIONAL_JUMP)
// 0043dc57: PUSH 0x618913
//   Label: LAB_0043dc57
//   XREF to: 00618913 (DATA)
// 0043dc5c: PUSH EAX
// 0043dc5d: PUSH EAX
// 0043dc5e: JMP 0x0043d9ac
//   XREF to: 0043d9ac (UNCONDITIONAL_JUMP)
// 0043dc63: CMP dword ptr [0x02cf6a94],0x0
//   Label: LAB_0043dc63
//   XREF to: 02cf6a94 (READ)
// 0043dc6a: JZ 0x0043da5b
//   XREF to: 0043da5b (CONDITIONAL_JUMP)
// 0043dc70: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0043dc75: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0043dc79: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0043dc7e: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0043dc82: JMP 0x0043da5b
//   XREF to: 0043da5b (UNCONDITIONAL_JUMP)
// 0043dc87: PUSH 0x1f
//   Label: LAB_0043dc87
// 0043dc89: MOV ECX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0043dc8f: PUSH ECX
//   XREF to: 03f6b9e0 (DATA)
// 0043dc90: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 0043dc95: MOV EAX,[0x0068416c]
//   XREF to: 0068416c (READ)
// 0043dc9a: MOV dword ptr [EAX + 0x20],0x0
//   XREF to: 03f6ba00 (WRITE)
// 0043dca1: ADD ESP,0x8
// 0043dca4: MOV EDX,dword ptr [EAX + 0x20]
//   XREF to: 03f6ba00 (READ)
// 0043dca7: MOV dword ptr [EAX + 0x1c],EDX
//   XREF to: 03f6b9fc (WRITE)
// 0043dcaa: MOV EDX,dword ptr [EAX + 0x1c]
//   XREF to: 03f6b9fc (READ)
// 0043dcad: MOV dword ptr [EAX + 0x18],EDX
//   XREF to: 03f6b9f8 (WRITE)
// 0043dcb0: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0043dcb5: ADD ESP,0x74
// 0043dcb8: POP EBP
// 0043dcb9: POP EDI
// 0043dcba: POP ESI
// 0043dcbb: POP EBX
// 0043dcbc: RET
