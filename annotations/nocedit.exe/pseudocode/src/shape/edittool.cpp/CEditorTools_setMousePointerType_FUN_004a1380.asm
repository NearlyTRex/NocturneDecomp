; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, bool use_clipping)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; bool             Stack[0x8]:1   use_clipping
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d9df
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab06
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050770d
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005072d2
;   core_morph.cpp_FUN_0052bcb0 at 0052c9be
;   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 at 00536a97
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e536
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053998b
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583aee
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057ab94
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
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 004a1390 | uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)
    MOV [0x02d02570],EAX                ; 004a1395 | int g_ActiveRenderColor
    MOV EAX,[0x02cf2670]                ; 004a139a | int g_MouseCursorType
    ADD ESP,0x4                         ; 004a139f
    CMP EAX,0x1                         ; 004a13a2
    JNC 0x004a1aea                      ; 004a13a5 | LAB_004a1aea
        ;   XREF to: 004a1aea (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a13ab
    JNZ 0x004a1af9                      ; 004a13ad | LAB_004a1af9
        ;   XREF to: 004a1af9 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a13b3 | int g_MouseX
    MOV EAX,[0x02cf6a90]                ; 004a13b9 | int g_MouseY
    TEST EDX,EDX                        ; 004a13be
    JL 0x004a13d2                       ; 004a13c0 | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a13c2
    JL 0x004a13d2                       ; 004a13c4 | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679394]      ; 004a13c6 | int g_WindowWidth
    JL 0x004a1451                       ; 004a13cc | LAB_004a1451
        ;   XREF to: 004a1451 (CONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 004a13d2
        ;   Label: LAB_004a13d2
    MOV EAX,[0x00678a64]                ; 004a13d7 | int g_CursorSizeHorizontal
        ;   Label: LAB_004a13d7
    MOV EDX,EAX                         ; 004a13dc
    SAR EDX,0x1f                        ; 004a13de
    SUB EAX,EDX                         ; 004a13e1
    SAR EAX,0x1                         ; 004a13e3
    CMP EDI,EAX                         ; 004a13e5
    JLE 0x004a14a0                      ; 004a13e7 | LAB_004a14a0
        ;   XREF to: 004a14a0 (CONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 004a13ed
    MOV EAX,[0x00678a68]                ; 004a13f2 | int g_CursorSizeVertical
        ;   Label: LAB_004a13f2
    MOV EDX,EAX                         ; 004a13f7
    SAR EDX,0x1f                        ; 004a13f9
    SUB EAX,EDX                         ; 004a13fc
    SAR EAX,0x1                         ; 004a13fe
    CMP EDI,EAX                         ; 004a1400
    JG 0x004a1b1c                       ; 004a1402 | LAB_004a1b1c
        ;   XREF to: 004a1b1c (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a90]                ; 004a1408 | int g_MouseY
    SUB EAX,EDI                         ; 004a140d
    MOV ESI,dword ptr [0x02cf6a8c]      ; 004a140f | int g_MouseX
    MOV EDX,EAX                         ; 004a1415
    TEST ESI,ESI                        ; 004a1417
    JL 0x004a142b                       ; 004a1419 | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a141b
    JL 0x004a142b                       ; 004a141d | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679394]      ; 004a141f | int g_WindowWidth
    JL 0x004a155d                       ; 004a1425 | LAB_004a155d
        ;   XREF to: 004a155d (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02cf6a90]      ; 004a142b | int g_MouseY
        ;   Label: LAB_004a142b
    ADD ESI,EDI                         ; 004a1431
    MOV EAX,[0x02cf6a8c]                ; 004a1433 | int g_MouseX
    MOV EDX,ESI                         ; 004a1438
    TEST EAX,EAX                        ; 004a143a
    JL 0x004a144e                       ; 004a143c | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004a143e
    JL 0x004a144e                       ; 004a1440 | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a1442 | int g_WindowWidth
    JL 0x004a15ac                       ; 004a1448 | LAB_004a15ac
        ;   XREF to: 004a15ac (CONDITIONAL_JUMP)
    INC EDI                             ; 004a144e
        ;   Label: LAB_004a144e
    JMP 0x004a13f2                      ; 004a144f | LAB_004a13f2
        ;   XREF to: 004a13f2 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 004a1451 | int g_WindowHeight
        ;   Label: LAB_004a1451
    JGE 0x004a13d2                      ; 004a1457 | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a145d
    JZ 0x004a1491                       ; 004a145f | LAB_004a1491
        ;   XREF to: 004a1491 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02558]      ; 004a1461 | int g_ClipLeft
    JL 0x004a13d2                       ; 004a1467 | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02560]      ; 004a146d | int g_ClipRight
    JGE 0x004a13d2                      ; 004a1473 | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 004a1479 | int g_ClipTop
    JL 0x004a13d2                       ; 004a147f | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 004a1485 | int g_ClipBottom
    JGE 0x004a13d2                      ; 004a148b | LAB_004a13d2
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004a1491
        ;   Label: LAB_004a1491
    PUSH EDX                            ; 004a1492
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1493 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1498
    JMP 0x004a13d2                      ; 004a149b | LAB_004a13d2
        ;   XREF to: 004a13d2 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02cf6a8c]      ; 004a14a0 | int g_MouseX
        ;   Label: LAB_004a14a0
    SUB ESI,EDI                         ; 004a14a6
    MOV EAX,[0x02cf6a90]                ; 004a14a8 | int g_MouseY
    MOV EDX,ESI                         ; 004a14ad
    TEST ESI,ESI                        ; 004a14af
    JL 0x004a14c3                       ; 004a14b1 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a14b3
    JL 0x004a14c3                       ; 004a14b5 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679394]      ; 004a14b7 | int g_WindowWidth
    JL 0x004a151e                       ; 004a14bd | LAB_004a151e
        ;   XREF to: 004a151e (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a14c3 | int g_MouseX
        ;   Label: LAB_004a14c3
    ADD EAX,EDI                         ; 004a14c8
    MOV ESI,dword ptr [0x02cf6a90]      ; 004a14ca | int g_MouseY
    MOV EDX,EAX                         ; 004a14d0
    TEST EAX,EAX                        ; 004a14d2
    JL 0x004a1518                       ; 004a14d4 | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004a14d6
    JL 0x004a1518                       ; 004a14d8 | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a14da | int g_WindowWidth
    JGE 0x004a1518                      ; 004a14e0 | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679398]      ; 004a14e2 | int g_WindowHeight
    JGE 0x004a1518                      ; 004a14e8 | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a14ea
    JZ 0x004a150e                       ; 004a14ec | LAB_004a150e
        ;   XREF to: 004a150e (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a14ee | int g_ClipLeft
    JL 0x004a1518                       ; 004a14f4 | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a14f6 | int g_ClipRight
    JGE 0x004a1518                      ; 004a14fc | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d0255c]      ; 004a14fe | int g_ClipTop
    JL 0x004a1518                       ; 004a1504 | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02564]      ; 004a1506 | int g_ClipBottom
    JGE 0x004a1518                      ; 004a150c | LAB_004a1518
        ;   XREF to: 004a1518 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004a150e
        ;   Label: LAB_004a150e
    PUSH EDX                            ; 004a150f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1510 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1515
    INC EDI                             ; 004a1518
        ;   Label: LAB_004a1518
    JMP 0x004a13d7                      ; 004a1519 | LAB_004a13d7
        ;   XREF to: 004a13d7 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 004a151e | int g_WindowHeight
        ;   Label: LAB_004a151e
    JGE 0x004a14c3                      ; 004a1524 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1526
    JZ 0x004a154e                       ; 004a1528 | LAB_004a154e
        ;   XREF to: 004a154e (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02558]      ; 004a152a | int g_ClipLeft
    JL 0x004a14c3                       ; 004a1530 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02560]      ; 004a1532 | int g_ClipRight
    JGE 0x004a14c3                      ; 004a1538 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 004a153a | int g_ClipTop
    JL 0x004a14c3                       ; 004a1540 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 004a1542 | int g_ClipBottom
    JGE 0x004a14c3                      ; 004a1548 | LAB_004a14c3
        ;   XREF to: 004a14c3 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004a154e
        ;   Label: LAB_004a154e
    PUSH EDX                            ; 004a154f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1550 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1555
    JMP 0x004a14c3                      ; 004a1558 | LAB_004a14c3
        ;   XREF to: 004a14c3 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 004a155d | int g_WindowHeight
        ;   Label: LAB_004a155d
    JGE 0x004a142b                      ; 004a1563 | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1569
    JZ 0x004a159d                       ; 004a156b | LAB_004a159d
        ;   XREF to: 004a159d (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02558]      ; 004a156d | int g_ClipLeft
    JL 0x004a142b                       ; 004a1573 | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02560]      ; 004a1579 | int g_ClipRight
    JGE 0x004a142b                      ; 004a157f | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 004a1585 | int g_ClipTop
    JL 0x004a142b                       ; 004a158b | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 004a1591 | int g_ClipBottom
    JGE 0x004a142b                      ; 004a1597 | LAB_004a142b
        ;   XREF to: 004a142b (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a159d
        ;   Label: LAB_004a159d
    PUSH ESI                            ; 004a159e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a159f | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a15a4
    JMP 0x004a142b                      ; 004a15a7 | LAB_004a142b
        ;   XREF to: 004a142b (UNCONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679398]      ; 004a15ac | int g_WindowHeight
        ;   Label: LAB_004a15ac
    JGE 0x004a144e                      ; 004a15b2 | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a15b8
    JZ 0x004a15ec                       ; 004a15ba | LAB_004a15ec
        ;   XREF to: 004a15ec (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a15bc | int g_ClipLeft
    JL 0x004a144e                       ; 004a15c2 | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a15c8 | int g_ClipRight
    JGE 0x004a144e                      ; 004a15ce | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d0255c]      ; 004a15d4 | int g_ClipTop
    JL 0x004a144e                       ; 004a15da | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02564]      ; 004a15e0 | int g_ClipBottom
    JGE 0x004a144e                      ; 004a15e6 | LAB_004a144e
        ;   XREF to: 004a144e (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a15ec
        ;   Label: LAB_004a15ec
    PUSH EAX                            ; 004a15ed
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a15ee | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a15f3
    INC EDI                             ; 004a15f6
    JMP 0x004a13f2                      ; 004a15f7 | LAB_004a13f2
        ;   XREF to: 004a13f2 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a15fc | int g_MouseX
        ;   Label: LAB_004a15fc
    MOV EAX,[0x02cf6a90]                ; 004a1602 | int g_MouseY
    TEST EDX,EDX                        ; 004a1607
    JL 0x004a161b                       ; 004a1609 | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a160b
    JL 0x004a161b                       ; 004a160d | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679394]      ; 004a160f | int g_WindowWidth
    JL 0x004a16d8                       ; 004a1615 | LAB_004a16d8
        ;   XREF to: 004a16d8 (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 004a161b
        ;   Label: LAB_004a161b
    MOV EAX,[0x00678a64]                ; 004a1620 | int g_CursorSizeHorizontal
        ;   Label: LAB_004a1620
    MOV EDX,EAX                         ; 004a1625
    SAR EDX,0x1f                        ; 004a1627
    SUB EAX,EDX                         ; 004a162a
    SAR EAX,0x1                         ; 004a162c
    CMP ESI,EAX                         ; 004a162e
    JG 0x004a1b1c                       ; 004a1630 | LAB_004a1b1c
        ;   XREF to: 004a1b1c (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02cf6a8c]      ; 004a1636 | int g_MouseX
    MOV EAX,[0x02cf6a90]                ; 004a163c | int g_MouseY
    SUB EDI,ESI                         ; 004a1641
    SUB EAX,ESI                         ; 004a1643
    MOV EBP,EDI                         ; 004a1645
    MOV EDX,EAX                         ; 004a1647
    TEST EDI,EDI                        ; 004a1649
    JL 0x004a165d                       ; 004a164b | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a164d
    JL 0x004a165d                       ; 004a164f | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00679394]      ; 004a1651 | int g_WindowWidth
    JL 0x004a1727                       ; 004a1657 | LAB_004a1727
        ;   XREF to: 004a1727 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02cf6a8c]      ; 004a165d | int g_MouseX
        ;   Label: LAB_004a165d
    MOV EAX,[0x02cf6a90]                ; 004a1663 | int g_MouseY
    ADD EDI,ESI                         ; 004a1668
    SUB EAX,ESI                         ; 004a166a
    MOV EDX,EDI                         ; 004a166c
    MOV EBP,EAX                         ; 004a166e
    TEST EDI,EDI                        ; 004a1670
    JL 0x004a1684                       ; 004a1672 | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004a1674
    JL 0x004a1684                       ; 004a1676 | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00679394]      ; 004a1678 | int g_WindowWidth
    JL 0x004a1776                       ; 004a167e | LAB_004a1776
        ;   XREF to: 004a1776 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a1684 | int g_MouseX
        ;   Label: LAB_004a1684
    MOV EDI,dword ptr [0x02cf6a90]      ; 004a1689 | int g_MouseY
    SUB EAX,ESI                         ; 004a168f
    ADD EDI,ESI                         ; 004a1691
    MOV EDX,EAX                         ; 004a1693
    MOV EBP,EDI                         ; 004a1695
    TEST EAX,EAX                        ; 004a1697
    JL 0x004a16ab                       ; 004a1699 | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004a169b
    JL 0x004a16ab                       ; 004a169d | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a169f | int g_WindowWidth
    JL 0x004a17c5                       ; 004a16a5 | LAB_004a17c5
        ;   XREF to: 004a17c5 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a16ab | int g_MouseX
        ;   Label: LAB_004a16ab
    MOV EDI,dword ptr [0x02cf6a90]      ; 004a16b0 | int g_MouseY
    ADD EAX,ESI                         ; 004a16b6
    ADD EDI,ESI                         ; 004a16b8
    MOV EDX,EAX                         ; 004a16ba
    MOV EBP,EDI                         ; 004a16bc
    TEST EAX,EAX                        ; 004a16be
    JL 0x004a16d2                       ; 004a16c0 | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004a16c2
    JL 0x004a16d2                       ; 004a16c4 | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a16c6 | int g_WindowWidth
    JL 0x004a1814                       ; 004a16cc | LAB_004a1814
        ;   XREF to: 004a1814 (CONDITIONAL_JUMP)
    INC ESI                             ; 004a16d2
        ;   Label: LAB_004a16d2
    JMP 0x004a1620                      ; 004a16d3 | LAB_004a1620
        ;   XREF to: 004a1620 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 004a16d8 | int g_WindowHeight
        ;   Label: LAB_004a16d8
    JGE 0x004a161b                      ; 004a16de | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a16e4
    JZ 0x004a1718                       ; 004a16e6 | LAB_004a1718
        ;   XREF to: 004a1718 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02558]      ; 004a16e8 | int g_ClipLeft
    JL 0x004a161b                       ; 004a16ee | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02560]      ; 004a16f4 | int g_ClipRight
    JGE 0x004a161b                      ; 004a16fa | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 004a1700 | int g_ClipTop
    JL 0x004a161b                       ; 004a1706 | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 004a170c | int g_ClipBottom
    JGE 0x004a161b                      ; 004a1712 | LAB_004a161b
        ;   XREF to: 004a161b (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004a1718
        ;   Label: LAB_004a1718
    PUSH EDX                            ; 004a1719
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a171a | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a171f
    JMP 0x004a161b                      ; 004a1722 | LAB_004a161b
        ;   XREF to: 004a161b (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 004a1727 | int g_WindowHeight
        ;   Label: LAB_004a1727
    JGE 0x004a165d                      ; 004a172d | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1733
    JZ 0x004a1767                       ; 004a1735 | LAB_004a1767
        ;   XREF to: 004a1767 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02558]      ; 004a1737 | int g_ClipLeft
    JL 0x004a165d                       ; 004a173d | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02560]      ; 004a1743 | int g_ClipRight
    JGE 0x004a165d                      ; 004a1749 | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 004a174f | int g_ClipTop
    JL 0x004a165d                       ; 004a1755 | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 004a175b | int g_ClipBottom
    JGE 0x004a165d                      ; 004a1761 | LAB_004a165d
        ;   XREF to: 004a165d (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a1767
        ;   Label: LAB_004a1767
    PUSH EBP                            ; 004a1768
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1769 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a176e
    JMP 0x004a165d                      ; 004a1771 | LAB_004a165d
        ;   XREF to: 004a165d (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 004a1776 | int g_WindowHeight
        ;   Label: LAB_004a1776
    JGE 0x004a1684                      ; 004a177c | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1782
    JZ 0x004a17b6                       ; 004a1784 | LAB_004a17b6
        ;   XREF to: 004a17b6 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02558]      ; 004a1786 | int g_ClipLeft
    JL 0x004a1684                       ; 004a178c | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02560]      ; 004a1792 | int g_ClipRight
    JGE 0x004a1684                      ; 004a1798 | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 004a179e | int g_ClipTop
    JL 0x004a1684                       ; 004a17a4 | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 004a17aa | int g_ClipBottom
    JGE 0x004a1684                      ; 004a17b0 | LAB_004a1684
        ;   XREF to: 004a1684 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004a17b6
        ;   Label: LAB_004a17b6
    PUSH EDX                            ; 004a17b7
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a17b8 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a17bd
    JMP 0x004a1684                      ; 004a17c0 | LAB_004a1684
        ;   XREF to: 004a1684 (UNCONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00679398]      ; 004a17c5 | int g_WindowHeight
        ;   Label: LAB_004a17c5
    JGE 0x004a16ab                      ; 004a17cb | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a17d1
    JZ 0x004a1805                       ; 004a17d3 | LAB_004a1805
        ;   XREF to: 004a1805 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a17d5 | int g_ClipLeft
    JL 0x004a16ab                       ; 004a17db | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a17e1 | int g_ClipRight
    JGE 0x004a16ab                      ; 004a17e7 | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d0255c]      ; 004a17ed | int g_ClipTop
    JL 0x004a16ab                       ; 004a17f3 | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02564]      ; 004a17f9 | int g_ClipBottom
    JGE 0x004a16ab                      ; 004a17ff | LAB_004a16ab
        ;   XREF to: 004a16ab (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004a1805
        ;   Label: LAB_004a1805
    PUSH EDX                            ; 004a1806
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1807 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a180c
    JMP 0x004a16ab                      ; 004a180f | LAB_004a16ab
        ;   XREF to: 004a16ab (UNCONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00679398]      ; 004a1814 | int g_WindowHeight
        ;   Label: LAB_004a1814
    JGE 0x004a16d2                      ; 004a181a | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1820
    JZ 0x004a1854                       ; 004a1822 | LAB_004a1854
        ;   XREF to: 004a1854 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a1824 | int g_ClipLeft
    JL 0x004a16d2                       ; 004a182a | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a1830 | int g_ClipRight
    JGE 0x004a16d2                      ; 004a1836 | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d0255c]      ; 004a183c | int g_ClipTop
    JL 0x004a16d2                       ; 004a1842 | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02564]      ; 004a1848 | int g_ClipBottom
    JGE 0x004a16d2                      ; 004a184e | LAB_004a16d2
        ;   XREF to: 004a16d2 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004a1854
        ;   Label: LAB_004a1854
    PUSH EDX                            ; 004a1855
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1856 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a185b
    INC ESI                             ; 004a185e
    JMP 0x004a1620                      ; 004a185f | LAB_004a1620
        ;   XREF to: 004a1620 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00678a68]                ; 004a1864 | int g_CursorSizeVertical
        ;   Label: LAB_004a1864
    MOV EDX,EAX                         ; 004a1869
    SAR EDX,0x1f                        ; 004a186b
    SUB EAX,EDX                         ; 004a186e
    SAR EAX,0x1                         ; 004a1870
    MOV EDI,dword ptr [0x02cf6a90]      ; 004a1872 | int g_MouseY
    MOV ESI,dword ptr [0x00678a68]      ; 004a1878 | int g_CursorSizeVertical
    SUB EDI,EAX                         ; 004a187e
    ADD ESI,EDI                         ; 004a1880
    DEC ESI                             ; 004a1882
    LEA EBP,[EDI + 0x1]                 ; 004a1883
    CMP EBP,ESI                         ; 004a1886
    JGE 0x004a18aa                      ; 004a1888 | LAB_004a18aa
        ;   XREF to: 004a18aa (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a188a | int g_MouseX
        ;   Label: LAB_004a188a
    MOV EDX,EBP                         ; 004a188f
    TEST EAX,EAX                        ; 004a1891
    JL 0x004a18a5                       ; 004a1893 | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 004a1895
    JL 0x004a18a5                       ; 004a1897 | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a1899 | int g_WindowWidth
    JL 0x004a194e                       ; 004a189f | LAB_004a194e
        ;   XREF to: 004a194e (CONDITIONAL_JUMP)
    INC EBP                             ; 004a18a5
        ;   Label: LAB_004a18a5
    CMP EBP,ESI                         ; 004a18a6
    JL 0x004a188a                       ; 004a18a8 | LAB_004a188a
        ;   XREF to: 004a188a (CONDITIONAL_JUMP)
    MOV EBP,0x1                         ; 004a18aa
        ;   Label: LAB_004a18aa
    MOV EAX,[0x00678a64]                ; 004a18af | int g_CursorSizeHorizontal
        ;   Label: LAB_004a18af
    MOV EDX,EAX                         ; 004a18b4
    SAR EDX,0x1f                        ; 004a18b6
    SUB EAX,EDX                         ; 004a18b9
    SAR EAX,0x1                         ; 004a18bb
    CMP EBP,EAX                         ; 004a18bd
    JG 0x004a1b1c                       ; 004a18bf | LAB_004a1b1c
        ;   XREF to: 004a1b1c (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a18c5 | int g_MouseX
    SUB EAX,EBP                         ; 004a18ca
    MOV EDX,EDI                         ; 004a18cc
    MOV dword ptr [ESP + 0x8],EAX       ; 004a18ce
    TEST EAX,EAX                        ; 004a18d2
    JL 0x004a18e6                       ; 004a18d4 | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004a18d6
    JL 0x004a18e6                       ; 004a18d8 | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a18da | int g_WindowWidth
    JL 0x004a199d                       ; 004a18e0 | LAB_004a199d
        ;   XREF to: 004a199d (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a18e6 | int g_MouseX
        ;   Label: LAB_004a18e6
    ADD EAX,EBP                         ; 004a18eb
    MOV EDX,EDI                         ; 004a18ed
    MOV dword ptr [ESP + 0x4],EAX       ; 004a18ef
    TEST EAX,EAX                        ; 004a18f3
    JL 0x004a1907                       ; 004a18f5 | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004a18f7
    JL 0x004a1907                       ; 004a18f9 | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a18fb | int g_WindowWidth
    JL 0x004a19f0                       ; 004a1901 | LAB_004a19f0
        ;   XREF to: 004a19f0 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a1907 | int g_MouseX
        ;   Label: LAB_004a1907
    SUB EAX,EBP                         ; 004a190c
    MOV EDX,ESI                         ; 004a190e
    MOV dword ptr [ESP],EAX             ; 004a1910
    TEST EAX,EAX                        ; 004a1913
    JL 0x004a1927                       ; 004a1915 | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004a1917
    JL 0x004a1927                       ; 004a1919 | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a191b | int g_WindowWidth
    JL 0x004a1a43                       ; 004a1921 | LAB_004a1a43
        ;   XREF to: 004a1a43 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a8c]                ; 004a1927 | int g_MouseX
        ;   Label: LAB_004a1927
    ADD EAX,EBP                         ; 004a192c
    MOV dword ptr [ESP + 0xc],ESI       ; 004a192e
    MOV EDX,EAX                         ; 004a1932
    TEST EAX,EAX                        ; 004a1934
    JL 0x004a1948                       ; 004a1936 | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004a1938
    JL 0x004a1948                       ; 004a193a | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 004a193c | int g_WindowWidth
    JL 0x004a1a96                       ; 004a1942 | LAB_004a1a96
        ;   XREF to: 004a1a96 (CONDITIONAL_JUMP)
    INC EBP                             ; 004a1948
        ;   Label: LAB_004a1948
    JMP 0x004a18af                      ; 004a1949 | LAB_004a18af
        ;   XREF to: 004a18af (UNCONDITIONAL_JUMP)
    CMP EBP,dword ptr [0x00679398]      ; 004a194e | int g_WindowHeight
        ;   Label: LAB_004a194e
    JGE 0x004a18a5                      ; 004a1954 | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a195a
    JZ 0x004a198e                       ; 004a195c | LAB_004a198e
        ;   XREF to: 004a198e (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a195e | int g_ClipLeft
    JL 0x004a18a5                       ; 004a1964 | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a196a | int g_ClipRight
    JGE 0x004a18a5                      ; 004a1970 | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [0x02d0255c]      ; 004a1976 | int g_ClipTop
    JL 0x004a18a5                       ; 004a197c | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [0x02d02564]      ; 004a1982 | int g_ClipBottom
    JGE 0x004a18a5                      ; 004a1988 | LAB_004a18a5
        ;   XREF to: 004a18a5 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a198e
        ;   Label: LAB_004a198e
    PUSH EAX                            ; 004a198f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1990 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1995
    JMP 0x004a18a5                      ; 004a1998 | LAB_004a18a5
        ;   XREF to: 004a18a5 (UNCONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00679398]      ; 004a199d | int g_WindowHeight
        ;   Label: LAB_004a199d
    JGE 0x004a18e6                      ; 004a19a3 | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a19a9
    JZ 0x004a19dd                       ; 004a19ab | LAB_004a19dd
        ;   XREF to: 004a19dd (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a19ad | int g_ClipLeft
    JL 0x004a18e6                       ; 004a19b3 | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a19b9 | int g_ClipRight
    JGE 0x004a18e6                      ; 004a19bf | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d0255c]      ; 004a19c5 | int g_ClipTop
    JL 0x004a18e6                       ; 004a19cb | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02564]      ; 004a19d1 | int g_ClipBottom
    JGE 0x004a18e6                      ; 004a19d7 | LAB_004a18e6
        ;   XREF to: 004a18e6 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a19dd
        ;   Label: LAB_004a19dd
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a19de
    PUSH EAX                            ; 004a19e2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a19e3 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a19e8
    JMP 0x004a18e6                      ; 004a19eb | LAB_004a18e6
        ;   XREF to: 004a18e6 (UNCONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00679398]      ; 004a19f0 | int g_WindowHeight
        ;   Label: LAB_004a19f0
    JGE 0x004a1907                      ; 004a19f6 | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a19fc
    JZ 0x004a1a30                       ; 004a19fe | LAB_004a1a30
        ;   XREF to: 004a1a30 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a1a00 | int g_ClipLeft
    JL 0x004a1907                       ; 004a1a06 | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a1a0c | int g_ClipRight
    JGE 0x004a1907                      ; 004a1a12 | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d0255c]      ; 004a1a18 | int g_ClipTop
    JL 0x004a1907                       ; 004a1a1e | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x02d02564]      ; 004a1a24 | int g_ClipBottom
    JGE 0x004a1907                      ; 004a1a2a | LAB_004a1907
        ;   XREF to: 004a1907 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a1a30
        ;   Label: LAB_004a1a30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a1a31
    PUSH EAX                            ; 004a1a35
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1a36 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1a3b
    JMP 0x004a1907                      ; 004a1a3e | LAB_004a1907
        ;   XREF to: 004a1907 (UNCONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679398]      ; 004a1a43 | int g_WindowHeight
        ;   Label: LAB_004a1a43
    JGE 0x004a1927                      ; 004a1a49 | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1a4f
    JZ 0x004a1a83                       ; 004a1a51 | LAB_004a1a83
        ;   XREF to: 004a1a83 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a1a53 | int g_ClipLeft
    JL 0x004a1927                       ; 004a1a59 | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a1a5f | int g_ClipRight
    JGE 0x004a1927                      ; 004a1a65 | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d0255c]      ; 004a1a6b | int g_ClipTop
    JL 0x004a1927                       ; 004a1a71 | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02564]      ; 004a1a77 | int g_ClipBottom
    JGE 0x004a1927                      ; 004a1a7d | LAB_004a1927
        ;   XREF to: 004a1927 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004a1a83
        ;   Label: LAB_004a1a83
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a1a84
    PUSH EAX                            ; 004a1a88
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1a89 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1a8e
    JMP 0x004a1927                      ; 004a1a91 | LAB_004a1927
        ;   XREF to: 004a1927 (UNCONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679398]      ; 004a1a96 | int g_WindowHeight
        ;   Label: LAB_004a1a96
    JGE 0x004a1948                      ; 004a1a9c | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a1aa2
    JZ 0x004a1ad6                       ; 004a1aa4 | LAB_004a1ad6
        ;   XREF to: 004a1ad6 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02558]      ; 004a1aa6 | int g_ClipLeft
    JL 0x004a1948                       ; 004a1aac | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02560]      ; 004a1ab2 | int g_ClipRight
    JGE 0x004a1948                      ; 004a1ab8 | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d0255c]      ; 004a1abe | int g_ClipTop
    JL 0x004a1948                       ; 004a1ac4 | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02564]      ; 004a1aca | int g_ClipBottom
    JGE 0x004a1948                      ; 004a1ad0 | LAB_004a1948
        ;   XREF to: 004a1948 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a1ad6
        ;   Label: LAB_004a1ad6
    PUSH EAX                            ; 004a1ada
    PUSH EDX                            ; 004a1adb
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a1adc | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a1ae1
    INC EBP                             ; 004a1ae4
    JMP 0x004a18af                      ; 004a1ae5 | LAB_004a18af
        ;   XREF to: 004a18af (UNCONDITIONAL_JUMP)
    JBE 0x004a1864                      ; 004a1aea | LAB_004a1864
        ;   Label: LAB_004a1aea
        ;   XREF to: 004a1864 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 004a1af0
    JZ 0x004a15fc                       ; 004a1af3 | LAB_004a15fc
        ;   XREF to: 004a15fc (CONDITIONAL_JUMP)
    MOV EDI,0x623535                    ; 004a1af9 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623535 = ..\shape\edittool.cpp
        ;   Label: LAB_004a1af9
    MOV EBP,0x932                       ; 004a1afe
    PUSH 0x62354b                       ; 004a1b03 | = "CEditorTools::setMousePointerType - i..." | s_CEditorTools_setMousePoi_0062354b = CEditorTools::setMousePointerType - invalid type!
    MOV dword ptr [0x02f0ca48],EDI      ; 004a1b08 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004a1b0e | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a1b14 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a1b19
    ADD ESP,0x10                        ; 004a1b1c
        ;   Label: LAB_004a1b1c
    POP EBP                             ; 004a1b1f
    POP EDI                             ; 004a1b20
    POP ESI                             ; 004a1b21
    POP EBX                             ; 004a1b22
    RET                                 ; 004a1b23

