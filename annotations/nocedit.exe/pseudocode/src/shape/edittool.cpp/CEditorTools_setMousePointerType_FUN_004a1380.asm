; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools *this_ptr,int use_clipping)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   use_clipping
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d9df
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab06
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050770d
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005072d2
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052c9be
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e536
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053998b
;   core_msnedit.cpp_FUN_00535e70 at 00536a97
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057e03b
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057ab94
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623535
;   TerminatedCString s_CEditorTools_setMousePoi_0062354b
;   int g_CursorSizeHorizontal = 0x9
;   int g_CursorSizeVertical = 0x9
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_MouseCursorType
;   int g_MouseX
;   int g_MouseY
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_plotPixel_FUN_00401140
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1380
        ;   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
    PUSH ESI                            ; 004a1381
    PUSH EDI                            ; 004a1382
    PUSH EBP                            ; 004a1383
    SUB ESP,0x10                        ; 004a1384
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a1387
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a138b
    PUSH EDX                            ; 004a138f
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 004a1390
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    MOV [0x02d02570],EAX                ; 004a1395 | g_ActiveRenderColor
    MOV EAX,[0x02cf2670]                ; 004a139a | g_MouseCursorType
    ADD ESP,0x4                         ; 004a139f
    CMP EAX,0x1                         ; 004a13a2
    JNC 0x004a1aea                      ; 004a13a5
        ;   XREF to: 004a1aea (CONDITIONAL_JUMP)  ; LAB_004a1aea
    TEST EAX,EAX                        ; 004a13ab
    JNZ 0x004a1af9                      ; 004a13ad
        ;   XREF to: 004a1af9 (CONDITIONAL_JUMP)  ; LAB_004a1af9
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a13b3 | g_MouseX
    MOV EAX,[0x02cf6a90]                ; 004a13b9 | g_MouseY
    TEST EDX,EDX                        ; 004a13be
    JL 0x004a13d2                       ; 004a13c0
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    TEST EAX,EAX                        ; 004a13c2
    JL 0x004a13d2                       ; 004a13c4
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    CMP EDX,dword ptr [0x00679394]      ; 004a13c6 | g_WindowWidth
    JL 0x004a1451                       ; 004a13cc
        ;   XREF to: 004a1451 (CONDITIONAL_JUMP)  ; LAB_004a1451
    MOV EDI,0x1                         ; 004a13d2
        ;   Label: LAB_004a13d2
    MOV EAX,[0x00678a64]                ; 004a13d7 | g_CursorSizeHorizontal
        ;   Label: LAB_004a13d7
    MOV EDX,EAX                         ; 004a13dc
    SAR EDX,0x1f                        ; 004a13de
    SUB EAX,EDX                         ; 004a13e1
    SAR EAX,0x1                         ; 004a13e3
    CMP EDI,EAX                         ; 004a13e5
    JLE 0x004a14a0                      ; 004a13e7
        ;   XREF to: 004a14a0 (CONDITIONAL_JUMP)  ; LAB_004a14a0
    MOV EDI,0x1                         ; 004a13ed
    MOV EAX,[0x00678a68]                ; 004a13f2 | g_CursorSizeVertical
        ;   Label: LAB_004a13f2
    MOV EDX,EAX                         ; 004a13f7
    SAR EDX,0x1f                        ; 004a13f9
    SUB EAX,EDX                         ; 004a13fc
    SAR EAX,0x1                         ; 004a13fe
    CMP EDI,EAX                         ; 004a1400
    JG 0x004a1b1c                       ; 004a1402
        ;   XREF to: 004a1b1c (CONDITIONAL_JUMP)  ; LAB_004a1b1c
    MOV EAX,[0x02cf6a90]                ; 004a1408 | g_MouseY
    SUB EAX,EDI                         ; 004a140d
    MOV ESI,dword ptr [0x02cf6a8c]      ; 004a140f | g_MouseX
    MOV EDX,EAX                         ; 004a1415
    TEST ESI,ESI                        ; 004a1417
    JL 0x004a142b                       ; 004a1419
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    TEST EAX,EAX                        ; 004a141b
    JL 0x004a142b                       ; 004a141d
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    CMP ESI,dword ptr [0x00679394]      ; 004a141f | g_WindowWidth
    JL 0x004a155d                       ; 004a1425
        ;   XREF to: 004a155d (CONDITIONAL_JUMP)  ; LAB_004a155d
    MOV ESI,dword ptr [0x02cf6a90]      ; 004a142b | g_MouseY
        ;   Label: LAB_004a142b
    ADD ESI,EDI                         ; 004a1431
    MOV EAX,[0x02cf6a8c]                ; 004a1433 | g_MouseX
    MOV EDX,ESI                         ; 004a1438
    TEST EAX,EAX                        ; 004a143a
    JL 0x004a144e                       ; 004a143c
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    TEST ESI,ESI                        ; 004a143e
    JL 0x004a144e                       ; 004a1440
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    CMP EAX,dword ptr [0x00679394]      ; 004a1442 | g_WindowWidth
    JL 0x004a15ac                       ; 004a1448
        ;   XREF to: 004a15ac (CONDITIONAL_JUMP)  ; LAB_004a15ac
    INC EDI                             ; 004a144e
        ;   Label: LAB_004a144e
    JMP 0x004a13f2                      ; 004a144f
        ;   XREF to: 004a13f2 (UNCONDITIONAL_JUMP)  ; LAB_004a13f2
    CMP EAX,dword ptr [0x00679398]      ; 004a1451 | g_WindowHeight
        ;   Label: LAB_004a1451
    JGE 0x004a13d2                      ; 004a1457
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    TEST EBX,EBX                        ; 004a145d
    JZ 0x004a1491                       ; 004a145f
        ;   XREF to: 004a1491 (CONDITIONAL_JUMP)  ; LAB_004a1491
    CMP EDX,dword ptr [0x02d02558]      ; 004a1461 | g_ClipLeft
    JL 0x004a13d2                       ; 004a1467
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    CMP EDX,dword ptr [0x02d02560]      ; 004a146d | g_ClipRight
    JGE 0x004a13d2                      ; 004a1473
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    CMP EAX,dword ptr [0x02d0255c]      ; 004a1479 | g_ClipTop
    JL 0x004a13d2                       ; 004a147f
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    CMP EAX,dword ptr [0x02d02564]      ; 004a1485 | g_ClipBottom
    JGE 0x004a13d2                      ; 004a148b
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    PUSH EAX                            ; 004a1491
        ;   Label: LAB_004a1491
    PUSH EDX                            ; 004a1492
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1493
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1498
    JMP 0x004a13d2                      ; 004a149b
        ;   XREF to: 004a13d2 (UNCONDITIONAL_JUMP)  ; LAB_004a13d2
    MOV ESI,dword ptr [0x02cf6a8c]      ; 004a14a0 | g_MouseX
        ;   Label: LAB_004a14a0
    SUB ESI,EDI                         ; 004a14a6
    MOV EAX,[0x02cf6a90]                ; 004a14a8 | g_MouseY
    MOV EDX,ESI                         ; 004a14ad
    TEST ESI,ESI                        ; 004a14af
    JL 0x004a14c3                       ; 004a14b1
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    TEST EAX,EAX                        ; 004a14b3
    JL 0x004a14c3                       ; 004a14b5
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    CMP ESI,dword ptr [0x00679394]      ; 004a14b7 | g_WindowWidth
    JL 0x004a151e                       ; 004a14bd
        ;   XREF to: 004a151e (CONDITIONAL_JUMP)  ; LAB_004a151e
    MOV EAX,[0x02cf6a8c]                ; 004a14c3 | g_MouseX
        ;   Label: LAB_004a14c3
    ADD EAX,EDI                         ; 004a14c8
    MOV ESI,dword ptr [0x02cf6a90]      ; 004a14ca | g_MouseY
    MOV EDX,EAX                         ; 004a14d0
    TEST EAX,EAX                        ; 004a14d2
    JL 0x004a1518                       ; 004a14d4
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    TEST ESI,ESI                        ; 004a14d6
    JL 0x004a1518                       ; 004a14d8
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    CMP EAX,dword ptr [0x00679394]      ; 004a14da | g_WindowWidth
    JGE 0x004a1518                      ; 004a14e0
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    CMP ESI,dword ptr [0x00679398]      ; 004a14e2 | g_WindowHeight
    JGE 0x004a1518                      ; 004a14e8
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    TEST EBX,EBX                        ; 004a14ea
    JZ 0x004a150e                       ; 004a14ec
        ;   XREF to: 004a150e (CONDITIONAL_JUMP)  ; LAB_004a150e
    CMP EAX,dword ptr [0x02d02558]      ; 004a14ee | g_ClipLeft
    JL 0x004a1518                       ; 004a14f4
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    CMP EAX,dword ptr [0x02d02560]      ; 004a14f6 | g_ClipRight
    JGE 0x004a1518                      ; 004a14fc
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    CMP ESI,dword ptr [0x02d0255c]      ; 004a14fe | g_ClipTop
    JL 0x004a1518                       ; 004a1504
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    CMP ESI,dword ptr [0x02d02564]      ; 004a1506 | g_ClipBottom
    JGE 0x004a1518                      ; 004a150c
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)  ; LAB_004a1518
    PUSH ESI                            ; 004a150e
        ;   Label: LAB_004a150e
    PUSH EDX                            ; 004a150f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1510
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1515
    INC EDI                             ; 004a1518
        ;   Label: LAB_004a1518
    JMP 0x004a13d7                      ; 004a1519
        ;   XREF to: 004a13d7 (UNCONDITIONAL_JUMP)  ; LAB_004a13d7
    CMP EAX,dword ptr [0x00679398]      ; 004a151e | g_WindowHeight
        ;   Label: LAB_004a151e
    JGE 0x004a14c3                      ; 004a1524
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    TEST EBX,EBX                        ; 004a1526
    JZ 0x004a154e                       ; 004a1528
        ;   XREF to: 004a154e (CONDITIONAL_JUMP)  ; LAB_004a154e
    CMP ESI,dword ptr [0x02d02558]      ; 004a152a | g_ClipLeft
    JL 0x004a14c3                       ; 004a1530
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    CMP ESI,dword ptr [0x02d02560]      ; 004a1532 | g_ClipRight
    JGE 0x004a14c3                      ; 004a1538
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    CMP EAX,dword ptr [0x02d0255c]      ; 004a153a | g_ClipTop
    JL 0x004a14c3                       ; 004a1540
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    CMP EAX,dword ptr [0x02d02564]      ; 004a1542 | g_ClipBottom
    JGE 0x004a14c3                      ; 004a1548
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)  ; LAB_004a14c3
    PUSH EAX                            ; 004a154e
        ;   Label: LAB_004a154e
    PUSH EDX                            ; 004a154f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1550
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1555
    JMP 0x004a14c3                      ; 004a1558
        ;   XREF to: 004a14c3 (UNCONDITIONAL_JUMP)  ; LAB_004a14c3
    CMP EAX,dword ptr [0x00679398]      ; 004a155d | g_WindowHeight
        ;   Label: LAB_004a155d
    JGE 0x004a142b                      ; 004a1563
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    TEST EBX,EBX                        ; 004a1569
    JZ 0x004a159d                       ; 004a156b
        ;   XREF to: 004a159d (CONDITIONAL_JUMP)  ; LAB_004a159d
    CMP ESI,dword ptr [0x02d02558]      ; 004a156d | g_ClipLeft
    JL 0x004a142b                       ; 004a1573
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    CMP ESI,dword ptr [0x02d02560]      ; 004a1579 | g_ClipRight
    JGE 0x004a142b                      ; 004a157f
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    CMP EAX,dword ptr [0x02d0255c]      ; 004a1585 | g_ClipTop
    JL 0x004a142b                       ; 004a158b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    CMP EAX,dword ptr [0x02d02564]      ; 004a1591 | g_ClipBottom
    JGE 0x004a142b                      ; 004a1597
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)  ; LAB_004a142b
    PUSH EDX                            ; 004a159d
        ;   Label: LAB_004a159d
    PUSH ESI                            ; 004a159e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a159f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a15a4
    JMP 0x004a142b                      ; 004a15a7
        ;   XREF to: 004a142b (UNCONDITIONAL_JUMP)  ; LAB_004a142b
    CMP ESI,dword ptr [0x00679398]      ; 004a15ac | g_WindowHeight
        ;   Label: LAB_004a15ac
    JGE 0x004a144e                      ; 004a15b2
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    TEST EBX,EBX                        ; 004a15b8
    JZ 0x004a15ec                       ; 004a15ba
        ;   XREF to: 004a15ec (CONDITIONAL_JUMP)  ; LAB_004a15ec
    CMP EAX,dword ptr [0x02d02558]      ; 004a15bc | g_ClipLeft
    JL 0x004a144e                       ; 004a15c2
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    CMP EAX,dword ptr [0x02d02560]      ; 004a15c8 | g_ClipRight
    JGE 0x004a144e                      ; 004a15ce
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    CMP ESI,dword ptr [0x02d0255c]      ; 004a15d4 | g_ClipTop
    JL 0x004a144e                       ; 004a15da
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    CMP ESI,dword ptr [0x02d02564]      ; 004a15e0 | g_ClipBottom
    JGE 0x004a144e                      ; 004a15e6
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)  ; LAB_004a144e
    PUSH EDX                            ; 004a15ec
        ;   Label: LAB_004a15ec
    PUSH EAX                            ; 004a15ed
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a15ee
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a15f3
    INC EDI                             ; 004a15f6
    JMP 0x004a13f2                      ; 004a15f7
        ;   XREF to: 004a13f2 (UNCONDITIONAL_JUMP)  ; LAB_004a13f2
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a15fc | g_MouseX
        ;   Label: LAB_004a15fc
    MOV EAX,[0x02cf6a90]                ; 004a1602 | g_MouseY
    TEST EDX,EDX                        ; 004a1607
    JL 0x004a161b                       ; 004a1609
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    TEST EAX,EAX                        ; 004a160b
    JL 0x004a161b                       ; 004a160d
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    CMP EDX,dword ptr [0x00679394]      ; 004a160f | g_WindowWidth
    JL 0x004a16d8                       ; 004a1615
        ;   XREF to: 004a16d8 (CONDITIONAL_JUMP)  ; LAB_004a16d8
    MOV ESI,0x1                         ; 004a161b
        ;   Label: LAB_004a161b
    MOV EAX,[0x00678a64]                ; 004a1620 | g_CursorSizeHorizontal
        ;   Label: LAB_004a1620
    MOV EDX,EAX                         ; 004a1625
    SAR EDX,0x1f                        ; 004a1627
    SUB EAX,EDX                         ; 004a162a
    SAR EAX,0x1                         ; 004a162c
    CMP ESI,EAX                         ; 004a162e
    JG 0x004a1b1c                       ; 004a1630
        ;   XREF to: 004a1b1c (CONDITIONAL_JUMP)  ; LAB_004a1b1c
    MOV EDI,dword ptr [0x02cf6a8c]      ; 004a1636 | g_MouseX
    MOV EAX,[0x02cf6a90]                ; 004a163c | g_MouseY
    SUB EDI,ESI                         ; 004a1641
    SUB EAX,ESI                         ; 004a1643
    MOV EBP,EDI                         ; 004a1645
    MOV EDX,EAX                         ; 004a1647
    TEST EDI,EDI                        ; 004a1649
    JL 0x004a165d                       ; 004a164b
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    TEST EAX,EAX                        ; 004a164d
    JL 0x004a165d                       ; 004a164f
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    CMP EDI,dword ptr [0x00679394]      ; 004a1651 | g_WindowWidth
    JL 0x004a1727                       ; 004a1657
        ;   XREF to: 004a1727 (CONDITIONAL_JUMP)  ; LAB_004a1727
    MOV EDI,dword ptr [0x02cf6a8c]      ; 004a165d | g_MouseX
        ;   Label: LAB_004a165d
    MOV EAX,[0x02cf6a90]                ; 004a1663 | g_MouseY
    ADD EDI,ESI                         ; 004a1668
    SUB EAX,ESI                         ; 004a166a
    MOV EDX,EDI                         ; 004a166c
    MOV EBP,EAX                         ; 004a166e
    TEST EDI,EDI                        ; 004a1670
    JL 0x004a1684                       ; 004a1672
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    TEST EAX,EAX                        ; 004a1674
    JL 0x004a1684                       ; 004a1676
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    CMP EDI,dword ptr [0x00679394]      ; 004a1678 | g_WindowWidth
    JL 0x004a1776                       ; 004a167e
        ;   XREF to: 004a1776 (CONDITIONAL_JUMP)  ; LAB_004a1776
    MOV EAX,[0x02cf6a8c]                ; 004a1684 | g_MouseX
        ;   Label: LAB_004a1684
    MOV EDI,dword ptr [0x02cf6a90]      ; 004a1689 | g_MouseY
    SUB EAX,ESI                         ; 004a168f
    ADD EDI,ESI                         ; 004a1691
    MOV EDX,EAX                         ; 004a1693
    MOV EBP,EDI                         ; 004a1695
    TEST EAX,EAX                        ; 004a1697
    JL 0x004a16ab                       ; 004a1699
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    TEST EDI,EDI                        ; 004a169b
    JL 0x004a16ab                       ; 004a169d
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    CMP EAX,dword ptr [0x00679394]      ; 004a169f | g_WindowWidth
    JL 0x004a17c5                       ; 004a16a5
        ;   XREF to: 004a17c5 (CONDITIONAL_JUMP)  ; LAB_004a17c5
    MOV EAX,[0x02cf6a8c]                ; 004a16ab | g_MouseX
        ;   Label: LAB_004a16ab
    MOV EDI,dword ptr [0x02cf6a90]      ; 004a16b0 | g_MouseY
    ADD EAX,ESI                         ; 004a16b6
    ADD EDI,ESI                         ; 004a16b8
    MOV EDX,EAX                         ; 004a16ba
    MOV EBP,EDI                         ; 004a16bc
    TEST EAX,EAX                        ; 004a16be
    JL 0x004a16d2                       ; 004a16c0
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    TEST EDI,EDI                        ; 004a16c2
    JL 0x004a16d2                       ; 004a16c4
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    CMP EAX,dword ptr [0x00679394]      ; 004a16c6 | g_WindowWidth
    JL 0x004a1814                       ; 004a16cc
        ;   XREF to: 004a1814 (CONDITIONAL_JUMP)  ; LAB_004a1814
    INC ESI                             ; 004a16d2
        ;   Label: LAB_004a16d2
    JMP 0x004a1620                      ; 004a16d3
        ;   XREF to: 004a1620 (UNCONDITIONAL_JUMP)  ; LAB_004a1620
    CMP EAX,dword ptr [0x00679398]      ; 004a16d8 | g_WindowHeight
        ;   Label: LAB_004a16d8
    JGE 0x004a161b                      ; 004a16de
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    TEST EBX,EBX                        ; 004a16e4
    JZ 0x004a1718                       ; 004a16e6
        ;   XREF to: 004a1718 (CONDITIONAL_JUMP)  ; LAB_004a1718
    CMP EDX,dword ptr [0x02d02558]      ; 004a16e8 | g_ClipLeft
    JL 0x004a161b                       ; 004a16ee
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    CMP EDX,dword ptr [0x02d02560]      ; 004a16f4 | g_ClipRight
    JGE 0x004a161b                      ; 004a16fa
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    CMP EAX,dword ptr [0x02d0255c]      ; 004a1700 | g_ClipTop
    JL 0x004a161b                       ; 004a1706
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    CMP EAX,dword ptr [0x02d02564]      ; 004a170c | g_ClipBottom
    JGE 0x004a161b                      ; 004a1712
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)  ; LAB_004a161b
    PUSH EAX                            ; 004a1718
        ;   Label: LAB_004a1718
    PUSH EDX                            ; 004a1719
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a171a
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a171f
    JMP 0x004a161b                      ; 004a1722
        ;   XREF to: 004a161b (UNCONDITIONAL_JUMP)  ; LAB_004a161b
    CMP EAX,dword ptr [0x00679398]      ; 004a1727 | g_WindowHeight
        ;   Label: LAB_004a1727
    JGE 0x004a165d                      ; 004a172d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    TEST EBX,EBX                        ; 004a1733
    JZ 0x004a1767                       ; 004a1735
        ;   XREF to: 004a1767 (CONDITIONAL_JUMP)  ; LAB_004a1767
    CMP EDI,dword ptr [0x02d02558]      ; 004a1737 | g_ClipLeft
    JL 0x004a165d                       ; 004a173d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    CMP EDI,dword ptr [0x02d02560]      ; 004a1743 | g_ClipRight
    JGE 0x004a165d                      ; 004a1749
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    CMP EAX,dword ptr [0x02d0255c]      ; 004a174f | g_ClipTop
    JL 0x004a165d                       ; 004a1755
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    CMP EAX,dword ptr [0x02d02564]      ; 004a175b | g_ClipBottom
    JGE 0x004a165d                      ; 004a1761
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)  ; LAB_004a165d
    PUSH EDX                            ; 004a1767
        ;   Label: LAB_004a1767
    PUSH EBP                            ; 004a1768
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1769
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a176e
    JMP 0x004a165d                      ; 004a1771
        ;   XREF to: 004a165d (UNCONDITIONAL_JUMP)  ; LAB_004a165d
    CMP EAX,dword ptr [0x00679398]      ; 004a1776 | g_WindowHeight
        ;   Label: LAB_004a1776
    JGE 0x004a1684                      ; 004a177c
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    TEST EBX,EBX                        ; 004a1782
    JZ 0x004a17b6                       ; 004a1784
        ;   XREF to: 004a17b6 (CONDITIONAL_JUMP)  ; LAB_004a17b6
    CMP EDI,dword ptr [0x02d02558]      ; 004a1786 | g_ClipLeft
    JL 0x004a1684                       ; 004a178c
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    CMP EDI,dword ptr [0x02d02560]      ; 004a1792 | g_ClipRight
    JGE 0x004a1684                      ; 004a1798
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    CMP EAX,dword ptr [0x02d0255c]      ; 004a179e | g_ClipTop
    JL 0x004a1684                       ; 004a17a4
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    CMP EAX,dword ptr [0x02d02564]      ; 004a17aa | g_ClipBottom
    JGE 0x004a1684                      ; 004a17b0
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)  ; LAB_004a1684
    PUSH EBP                            ; 004a17b6
        ;   Label: LAB_004a17b6
    PUSH EDX                            ; 004a17b7
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a17b8
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a17bd
    JMP 0x004a1684                      ; 004a17c0
        ;   XREF to: 004a1684 (UNCONDITIONAL_JUMP)  ; LAB_004a1684
    CMP EDI,dword ptr [0x00679398]      ; 004a17c5 | g_WindowHeight
        ;   Label: LAB_004a17c5
    JGE 0x004a16ab                      ; 004a17cb
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    TEST EBX,EBX                        ; 004a17d1
    JZ 0x004a1805                       ; 004a17d3
        ;   XREF to: 004a1805 (CONDITIONAL_JUMP)  ; LAB_004a1805
    CMP EAX,dword ptr [0x02d02558]      ; 004a17d5 | g_ClipLeft
    JL 0x004a16ab                       ; 004a17db
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    CMP EAX,dword ptr [0x02d02560]      ; 004a17e1 | g_ClipRight
    JGE 0x004a16ab                      ; 004a17e7
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    CMP EDI,dword ptr [0x02d0255c]      ; 004a17ed | g_ClipTop
    JL 0x004a16ab                       ; 004a17f3
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    CMP EDI,dword ptr [0x02d02564]      ; 004a17f9 | g_ClipBottom
    JGE 0x004a16ab                      ; 004a17ff
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)  ; LAB_004a16ab
    PUSH EBP                            ; 004a1805
        ;   Label: LAB_004a1805
    PUSH EDX                            ; 004a1806
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1807
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a180c
    JMP 0x004a16ab                      ; 004a180f
        ;   XREF to: 004a16ab (UNCONDITIONAL_JUMP)  ; LAB_004a16ab
    CMP EDI,dword ptr [0x00679398]      ; 004a1814 | g_WindowHeight
        ;   Label: LAB_004a1814
    JGE 0x004a16d2                      ; 004a181a
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    TEST EBX,EBX                        ; 004a1820
    JZ 0x004a1854                       ; 004a1822
        ;   XREF to: 004a1854 (CONDITIONAL_JUMP)  ; LAB_004a1854
    CMP EAX,dword ptr [0x02d02558]      ; 004a1824 | g_ClipLeft
    JL 0x004a16d2                       ; 004a182a
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    CMP EAX,dword ptr [0x02d02560]      ; 004a1830 | g_ClipRight
    JGE 0x004a16d2                      ; 004a1836
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    CMP EDI,dword ptr [0x02d0255c]      ; 004a183c | g_ClipTop
    JL 0x004a16d2                       ; 004a1842
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    CMP EDI,dword ptr [0x02d02564]      ; 004a1848 | g_ClipBottom
    JGE 0x004a16d2                      ; 004a184e
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)  ; LAB_004a16d2
    PUSH EBP                            ; 004a1854
        ;   Label: LAB_004a1854
    PUSH EDX                            ; 004a1855
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1856
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a185b
    INC ESI                             ; 004a185e
    JMP 0x004a1620                      ; 004a185f
        ;   XREF to: 004a1620 (UNCONDITIONAL_JUMP)  ; LAB_004a1620
    MOV EAX,[0x00678a68]                ; 004a1864 | g_CursorSizeVertical
        ;   Label: LAB_004a1864
    MOV EDX,EAX                         ; 004a1869
    SAR EDX,0x1f                        ; 004a186b
    SUB EAX,EDX                         ; 004a186e
    SAR EAX,0x1                         ; 004a1870
    MOV EDI,dword ptr [0x02cf6a90]      ; 004a1872 | g_MouseY
    MOV ESI,dword ptr [0x00678a68]      ; 004a1878 | g_CursorSizeVertical
    SUB EDI,EAX                         ; 004a187e
    ADD ESI,EDI                         ; 004a1880
    DEC ESI                             ; 004a1882
    LEA EBP,[EDI + 0x1]                 ; 004a1883
    CMP EBP,ESI                         ; 004a1886
    JGE 0x004a18aa                      ; 004a1888
        ;   XREF to: 004a18aa (CONDITIONAL_JUMP)  ; LAB_004a18aa
    MOV EAX,[0x02cf6a8c]                ; 004a188a | g_MouseX
        ;   Label: LAB_004a188a
    MOV EDX,EBP                         ; 004a188f
    TEST EAX,EAX                        ; 004a1891
    JL 0x004a18a5                       ; 004a1893
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    TEST EBP,EBP                        ; 004a1895
    JL 0x004a18a5                       ; 004a1897
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    CMP EAX,dword ptr [0x00679394]      ; 004a1899 | g_WindowWidth
    JL 0x004a194e                       ; 004a189f
        ;   XREF to: 004a194e (CONDITIONAL_JUMP)  ; LAB_004a194e
    INC EBP                             ; 004a18a5
        ;   Label: LAB_004a18a5
    CMP EBP,ESI                         ; 004a18a6
    JL 0x004a188a                       ; 004a18a8
        ;   XREF to: 004a188a (CONDITIONAL_JUMP)  ; LAB_004a188a
    MOV EBP,0x1                         ; 004a18aa
        ;   Label: LAB_004a18aa
    MOV EAX,[0x00678a64]                ; 004a18af | g_CursorSizeHorizontal
        ;   Label: LAB_004a18af
    MOV EDX,EAX                         ; 004a18b4
    SAR EDX,0x1f                        ; 004a18b6
    SUB EAX,EDX                         ; 004a18b9
    SAR EAX,0x1                         ; 004a18bb
    CMP EBP,EAX                         ; 004a18bd
    JG 0x004a1b1c                       ; 004a18bf
        ;   XREF to: 004a1b1c (CONDITIONAL_JUMP)  ; LAB_004a1b1c
    MOV EAX,[0x02cf6a8c]                ; 004a18c5 | g_MouseX
    SUB EAX,EBP                         ; 004a18ca
    MOV EDX,EDI                         ; 004a18cc
    MOV dword ptr [ESP + 0x8],EAX       ; 004a18ce
    TEST EAX,EAX                        ; 004a18d2
    JL 0x004a18e6                       ; 004a18d4
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    TEST EDI,EDI                        ; 004a18d6
    JL 0x004a18e6                       ; 004a18d8
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    CMP EAX,dword ptr [0x00679394]      ; 004a18da | g_WindowWidth
    JL 0x004a199d                       ; 004a18e0
        ;   XREF to: 004a199d (CONDITIONAL_JUMP)  ; LAB_004a199d
    MOV EAX,[0x02cf6a8c]                ; 004a18e6 | g_MouseX
        ;   Label: LAB_004a18e6
    ADD EAX,EBP                         ; 004a18eb
    MOV EDX,EDI                         ; 004a18ed
    MOV dword ptr [ESP + 0x4],EAX       ; 004a18ef
    TEST EAX,EAX                        ; 004a18f3
    JL 0x004a1907                       ; 004a18f5
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    TEST EDI,EDI                        ; 004a18f7
    JL 0x004a1907                       ; 004a18f9
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    CMP EAX,dword ptr [0x00679394]      ; 004a18fb | g_WindowWidth
    JL 0x004a19f0                       ; 004a1901
        ;   XREF to: 004a19f0 (CONDITIONAL_JUMP)  ; LAB_004a19f0
    MOV EAX,[0x02cf6a8c]                ; 004a1907 | g_MouseX
        ;   Label: LAB_004a1907
    SUB EAX,EBP                         ; 004a190c
    MOV EDX,ESI                         ; 004a190e
    MOV dword ptr [ESP],EAX             ; 004a1910
    TEST EAX,EAX                        ; 004a1913
    JL 0x004a1927                       ; 004a1915
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    TEST ESI,ESI                        ; 004a1917
    JL 0x004a1927                       ; 004a1919
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    CMP EAX,dword ptr [0x00679394]      ; 004a191b | g_WindowWidth
    JL 0x004a1a43                       ; 004a1921
        ;   XREF to: 004a1a43 (CONDITIONAL_JUMP)  ; LAB_004a1a43
    MOV EAX,[0x02cf6a8c]                ; 004a1927 | g_MouseX
        ;   Label: LAB_004a1927
    ADD EAX,EBP                         ; 004a192c
    MOV dword ptr [ESP + 0xc],ESI       ; 004a192e
    MOV EDX,EAX                         ; 004a1932
    TEST EAX,EAX                        ; 004a1934
    JL 0x004a1948                       ; 004a1936
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    TEST ESI,ESI                        ; 004a1938
    JL 0x004a1948                       ; 004a193a
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    CMP EAX,dword ptr [0x00679394]      ; 004a193c | g_WindowWidth
    JL 0x004a1a96                       ; 004a1942
        ;   XREF to: 004a1a96 (CONDITIONAL_JUMP)  ; LAB_004a1a96
    INC EBP                             ; 004a1948
        ;   Label: LAB_004a1948
    JMP 0x004a18af                      ; 004a1949
        ;   XREF to: 004a18af (UNCONDITIONAL_JUMP)  ; LAB_004a18af
    CMP EBP,dword ptr [0x00679398]      ; 004a194e | g_WindowHeight
        ;   Label: LAB_004a194e
    JGE 0x004a18a5                      ; 004a1954
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    TEST EBX,EBX                        ; 004a195a
    JZ 0x004a198e                       ; 004a195c
        ;   XREF to: 004a198e (CONDITIONAL_JUMP)  ; LAB_004a198e
    CMP EAX,dword ptr [0x02d02558]      ; 004a195e | g_ClipLeft
    JL 0x004a18a5                       ; 004a1964
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    CMP EAX,dword ptr [0x02d02560]      ; 004a196a | g_ClipRight
    JGE 0x004a18a5                      ; 004a1970
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    CMP EBP,dword ptr [0x02d0255c]      ; 004a1976 | g_ClipTop
    JL 0x004a18a5                       ; 004a197c
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    CMP EBP,dword ptr [0x02d02564]      ; 004a1982 | g_ClipBottom
    JGE 0x004a18a5                      ; 004a1988
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)  ; LAB_004a18a5
    PUSH EDX                            ; 004a198e
        ;   Label: LAB_004a198e
    PUSH EAX                            ; 004a198f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1990
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1995
    JMP 0x004a18a5                      ; 004a1998
        ;   XREF to: 004a18a5 (UNCONDITIONAL_JUMP)  ; LAB_004a18a5
    CMP EDI,dword ptr [0x00679398]      ; 004a199d | g_WindowHeight
        ;   Label: LAB_004a199d
    JGE 0x004a18e6                      ; 004a19a3
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    TEST EBX,EBX                        ; 004a19a9
    JZ 0x004a19dd                       ; 004a19ab
        ;   XREF to: 004a19dd (CONDITIONAL_JUMP)  ; LAB_004a19dd
    CMP EAX,dword ptr [0x02d02558]      ; 004a19ad | g_ClipLeft
    JL 0x004a18e6                       ; 004a19b3
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    CMP EAX,dword ptr [0x02d02560]      ; 004a19b9 | g_ClipRight
    JGE 0x004a18e6                      ; 004a19bf
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    CMP EDI,dword ptr [0x02d0255c]      ; 004a19c5 | g_ClipTop
    JL 0x004a18e6                       ; 004a19cb
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    CMP EDI,dword ptr [0x02d02564]      ; 004a19d1 | g_ClipBottom
    JGE 0x004a18e6                      ; 004a19d7
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)  ; LAB_004a18e6
    PUSH EDX                            ; 004a19dd
        ;   Label: LAB_004a19dd
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a19de
    PUSH EAX                            ; 004a19e2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a19e3
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a19e8
    JMP 0x004a18e6                      ; 004a19eb
        ;   XREF to: 004a18e6 (UNCONDITIONAL_JUMP)  ; LAB_004a18e6
    CMP EDI,dword ptr [0x00679398]      ; 004a19f0 | g_WindowHeight
        ;   Label: LAB_004a19f0
    JGE 0x004a1907                      ; 004a19f6
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    TEST EBX,EBX                        ; 004a19fc
    JZ 0x004a1a30                       ; 004a19fe
        ;   XREF to: 004a1a30 (CONDITIONAL_JUMP)  ; LAB_004a1a30
    CMP EAX,dword ptr [0x02d02558]      ; 004a1a00 | g_ClipLeft
    JL 0x004a1907                       ; 004a1a06
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    CMP EAX,dword ptr [0x02d02560]      ; 004a1a0c | g_ClipRight
    JGE 0x004a1907                      ; 004a1a12
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    CMP EDI,dword ptr [0x02d0255c]      ; 004a1a18 | g_ClipTop
    JL 0x004a1907                       ; 004a1a1e
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    CMP EDI,dword ptr [0x02d02564]      ; 004a1a24 | g_ClipBottom
    JGE 0x004a1907                      ; 004a1a2a
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)  ; LAB_004a1907
    PUSH EDX                            ; 004a1a30
        ;   Label: LAB_004a1a30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a1a31
    PUSH EAX                            ; 004a1a35
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1a36
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1a3b
    JMP 0x004a1907                      ; 004a1a3e
        ;   XREF to: 004a1907 (UNCONDITIONAL_JUMP)  ; LAB_004a1907
    CMP ESI,dword ptr [0x00679398]      ; 004a1a43 | g_WindowHeight
        ;   Label: LAB_004a1a43
    JGE 0x004a1927                      ; 004a1a49
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    TEST EBX,EBX                        ; 004a1a4f
    JZ 0x004a1a83                       ; 004a1a51
        ;   XREF to: 004a1a83 (CONDITIONAL_JUMP)  ; LAB_004a1a83
    CMP EAX,dword ptr [0x02d02558]      ; 004a1a53 | g_ClipLeft
    JL 0x004a1927                       ; 004a1a59
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    CMP EAX,dword ptr [0x02d02560]      ; 004a1a5f | g_ClipRight
    JGE 0x004a1927                      ; 004a1a65
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    CMP ESI,dword ptr [0x02d0255c]      ; 004a1a6b | g_ClipTop
    JL 0x004a1927                       ; 004a1a71
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    CMP ESI,dword ptr [0x02d02564]      ; 004a1a77 | g_ClipBottom
    JGE 0x004a1927                      ; 004a1a7d
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)  ; LAB_004a1927
    PUSH EDX                            ; 004a1a83
        ;   Label: LAB_004a1a83
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a1a84
    PUSH EAX                            ; 004a1a88
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1a89
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1a8e
    JMP 0x004a1927                      ; 004a1a91
        ;   XREF to: 004a1927 (UNCONDITIONAL_JUMP)  ; LAB_004a1927
    CMP ESI,dword ptr [0x00679398]      ; 004a1a96 | g_WindowHeight
        ;   Label: LAB_004a1a96
    JGE 0x004a1948                      ; 004a1a9c
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    TEST EBX,EBX                        ; 004a1aa2
    JZ 0x004a1ad6                       ; 004a1aa4
        ;   XREF to: 004a1ad6 (CONDITIONAL_JUMP)  ; LAB_004a1ad6
    CMP EAX,dword ptr [0x02d02558]      ; 004a1aa6 | g_ClipLeft
    JL 0x004a1948                       ; 004a1aac
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    CMP EAX,dword ptr [0x02d02560]      ; 004a1ab2 | g_ClipRight
    JGE 0x004a1948                      ; 004a1ab8
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    CMP ESI,dword ptr [0x02d0255c]      ; 004a1abe | g_ClipTop
    JL 0x004a1948                       ; 004a1ac4
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    CMP ESI,dword ptr [0x02d02564]      ; 004a1aca | g_ClipBottom
    JGE 0x004a1948                      ; 004a1ad0
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)  ; LAB_004a1948
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a1ad6
        ;   Label: LAB_004a1ad6
    PUSH EAX                            ; 004a1ada
    PUSH EDX                            ; 004a1adb
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1adc
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a1ae1
    INC EBP                             ; 004a1ae4
    JMP 0x004a18af                      ; 004a1ae5
        ;   XREF to: 004a18af (UNCONDITIONAL_JUMP)  ; LAB_004a18af
    JBE 0x004a1864                      ; 004a1aea
        ;   XREF to: 004a1864 (CONDITIONAL_JUMP)  ; LAB_004a1864
        ;   Label: LAB_004a1aea
    CMP EAX,0x2                         ; 004a1af0
    JZ 0x004a15fc                       ; 004a1af3
        ;   XREF to: 004a15fc (CONDITIONAL_JUMP)  ; LAB_004a15fc
    MOV EDI,0x623535                    ; 004a1af9 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a1af9
    MOV EBP,0x932                       ; 004a1afe
    PUSH 0x62354b                       ; 004a1b03 | = "CEditorTools::setMousePointerType - i..."
    MOV dword ptr [0x02f0ca48],EDI      ; 004a1b08 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004a1b0e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a1b14
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a1b19
    ADD ESP,0x10                        ; 004a1b1c
        ;   Label: LAB_004a1b1c
    POP EBP                             ; 004a1b1f
    POP EDI                             ; 004a1b20
    POP ESI                             ; 004a1b21
    POP EBX                             ; 004a1b22
    RET                                 ; 004a1b23

