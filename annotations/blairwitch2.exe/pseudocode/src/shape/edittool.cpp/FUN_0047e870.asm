; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047e870(void)
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_menu.cpp_FUN_004ebf10 at 004ec9f1
;   core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 at 004eb85f
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270 at 0047d35a
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 004831e1
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c6b4
;   shape_edittool.cpp_FUN_0047dc40 at 0047dceb
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b9d5
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b3bc
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   TerminatedCString s_shape_edittool_cpp_005d23df
;   TerminatedCString s_CEditorTools_paintWindow_005d23f5
;   undefined4 DAT_005d2432
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c26388
;   undefined4 DAT_01c2638c
;   undefined4 DAT_01c26390
;   undefined4 DAT_01c26394
;   undefined4 DAT_01c26398
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   engine_matrix.c_popViewport_FUN_004ea570
;   engine_matrix.c_pushViewport_FUN_004ea410
;   engine_mini3d.cpp_FUN_004f3570
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e870
        ;   Label: shape_edittool.cpp_FUN_0047e870
    PUSH ESI                            ; 0047e871
    PUSH EDI                            ; 0047e872
    PUSH EBP                            ; 0047e873
    SUB ESP,0x34                        ; 0047e874
    CMP dword ptr [0x01c25590],0x0      ; 0047e877 | DAT_01c25590
    JZ 0x0047ed4a                       ; 0047e87e
        ;   XREF to: 0047ed4a (CONDITIONAL_JUMP)  ; LAB_0047ed4a
    MOV EAX,[0x01c25590]                ; 0047e884 | DAT_01c25590
        ;   Label: LAB_0047e884
    PUSH 0x6a                           ; 0047e889
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047e88b
    PUSH EAX                            ; 0047e891
    MOV dword ptr [0x01c25f78],EDX      ; 0047e892 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047e898
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c2559c]      ; 0047e89d | DAT_01c2559c
    ADD ESP,0x8                         ; 0047e8a3
    MOV [0x01c25f7c],EAX                ; 0047e8a6 | DAT_01c25f7c
    CMP ESI,0x1                         ; 0047e8ab
    JGE 0x0047e8d3                      ; 0047e8ae
        ;   XREF to: 0047e8d3 (CONDITIONAL_JUMP)  ; LAB_0047e8d3
    MOV EDI,0x5d23df                    ; 0047e8b0 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x8ea                       ; 0047e8b5
    PUSH 0x5d23f5                       ; 0047e8ba | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01d046a0],EDI      ; 0047e8bf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0047e8c5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047e8cb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047e8d0
    MOV EBX,dword ptr [0x01c2559c]      ; 0047e8d3 | DAT_01c2559c
        ;   Label: LAB_0047e8d3
    DEC EBX                             ; 0047e8d9
    MOV EAX,[0x01c35e60]                ; 0047e8da | DAT_01c35e60
    SHL EBX,0x3                         ; 0047e8df
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047e8e2
    MOV EAX,EBX                         ; 0047e8e6
    SHL EBX,0x6                         ; 0047e8e8
    SUB EBX,EAX                         ; 0047e8eb
    CALL shape_edittool.cpp_paintWindowBackground_FUN_0047bca0 ; 0047e8ed
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_paintWindowBackground_FUN_0047bca0()
    MOV EAX,[0x01c25f84]                ; 0047e8f2 | DAT_01c25f84
    ADD EBX,0x1c255a0                   ; 0047e8f7
    TEST EAX,EAX                        ; 0047e8fd
    JZ 0x0047ed90                       ; 0047e8ff
        ;   XREF to: 0047ed90 (CONDITIONAL_JUMP)  ; LAB_0047ed90
    LEA EAX,[ESP + 0xc]                 ; 0047e905
    PUSH EAX                            ; 0047e909
    LEA EAX,[ESP + 0xc]                 ; 0047e90a
    PUSH EAX                            ; 0047e90e
    LEA EAX,[ESP + 0xc]                 ; 0047e90f
    PUSH EAX                            ; 0047e913
    LEA EAX,[ESP + 0xc]                 ; 0047e914
    PUSH EAX                            ; 0047e918
    CALL unkafter_minecar.cpp_getRenderViewport_FUN_004f2ba0 ; 0047e919
        ;   XREF to: 004f2ba0 (UNCONDITIONAL_CALL)  ; void unkafter_minecar.cpp_getRenderViewport_FUN_004f2ba0(float * left, float * top, float * right, float * bottom)
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047e91e
    ADD ESP,0x10                        ; 0047e921
    INC EAX                             ; 0047e924
    MOV dword ptr [ESP + 0x30],EAX      ; 0047e925
    FILD dword ptr [ESP + 0x30]         ; 0047e929
    SUB ESP,0x4                         ; 0047e92d
    FSTP float ptr [ESP]                ; 0047e930
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047e933
    INC EAX                             ; 0047e936
    MOV dword ptr [ESP + 0x34],EAX      ; 0047e937
    FILD dword ptr [ESP + 0x34]         ; 0047e93b
    SUB ESP,0x4                         ; 0047e93f
    FSTP float ptr [ESP]                ; 0047e942
    SUB ESP,0x4                         ; 0047e945
    FILD dword ptr [EBX + 0x4]          ; 0047e948
    FSTP float ptr [ESP]                ; 0047e94b
    SUB ESP,0x4                         ; 0047e94e
    FILD dword ptr [EBX]                ; 0047e951
    FSTP float ptr [ESP]                ; 0047e953
    CALL unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0 ; 0047e956
        ;   XREF to: 004f2ac0 (UNCONDITIONAL_CALL)  ; void unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0(float left, float top, float right, float bottom)
    MOV EAX,[0x01c2638c]                ; 0047e95b | DAT_01c2638c
    MOV EBP,dword ptr [0x01c25f84]      ; 0047e960 | DAT_01c25f84
    ADD ESP,0x10                        ; 0047e966
    TEST EBP,EBP                        ; 0047e969
    JZ 0x0047ed72                       ; 0047e96b
        ;   XREF to: 0047ed72 (CONDITIONAL_JUMP)  ; LAB_0047ed72
    AND EAX,0xff                        ; 0047e971
    MOV EDX,EAX                         ; 0047e976
    SHL EAX,0x2                         ; 0047e978
    SUB EAX,EDX                         ; 0047e97b
    XOR ECX,ECX                         ; 0047e97d
    XOR EDX,EDX                         ; 0047e97f
    MOV CL,byte ptr [EAX + 0x1c35839]   ; 0047e981 | DAT_01c35839
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047e987 | DAT_01c35838
    SHL ECX,0x8                         ; 0047e98d
    SHL EDX,0x10                        ; 0047e990
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047e993 | DAT_01c3583a
    OR EDX,ECX                          ; 0047e999
    AND EAX,0xff                        ; 0047e99b
    OR EAX,EDX                          ; 0047e9a0
    PUSH EAX                            ; 0047e9a2
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047e9a3
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047e9a8
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047e9ab
        ;   Label: LAB_0047e9ab
    DEC EAX                             ; 0047e9ae
    PUSH EAX                            ; 0047e9af
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047e9b0
    DEC EAX                             ; 0047e9b3
    PUSH EAX                            ; 0047e9b4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047e9b5
    PUSH EAX                            ; 0047e9b8
    MOV EDX,dword ptr [EBX]             ; 0047e9b9
    PUSH EDX                            ; 0047e9bb
    CALL engine_mini3d.cpp_FUN_004f9340 ; 0047e9bc
        ;   XREF to: 004f9340 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9340()
    MOV EAX,[0x01c26388]                ; 0047e9c1 | DAT_01c26388
    MOV ECX,dword ptr [0x01c25f84]      ; 0047e9c6 | DAT_01c25f84
    ADD ESP,0x10                        ; 0047e9cc
    TEST ECX,ECX                        ; 0047e9cf
    JZ 0x0047ed7c                       ; 0047e9d1
        ;   XREF to: 0047ed7c (CONDITIONAL_JUMP)  ; LAB_0047ed7c
    AND EAX,0xff                        ; 0047e9d7
    MOV EDX,EAX                         ; 0047e9dc
    SHL EAX,0x2                         ; 0047e9de
    SUB EAX,EDX                         ; 0047e9e1
    XOR ECX,ECX                         ; 0047e9e3
    XOR EDX,EDX                         ; 0047e9e5
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 0047e9e7 | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047e9ed | DAT_01c35839
    SHL ECX,0x10                        ; 0047e9f3
    SHL EDX,0x8                         ; 0047e9f6
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047e9f9 | DAT_01c3583a
    OR EDX,ECX                          ; 0047e9ff
    AND EAX,0xff                        ; 0047ea01
    OR EAX,EDX                          ; 0047ea06
    PUSH EAX                            ; 0047ea08
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ea09
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ea0e
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ea11
        ;   Label: LAB_0047ea11
    SUB EAX,0x2                         ; 0047ea14
    PUSH EAX                            ; 0047ea17
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ea18
    SUB EAX,0x2                         ; 0047ea1b
    PUSH EAX                            ; 0047ea1e
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047ea1f
    INC EAX                             ; 0047ea22
    PUSH EAX                            ; 0047ea23
    MOV EAX,dword ptr [EBX]             ; 0047ea24
    INC EAX                             ; 0047ea26
    PUSH EAX                            ; 0047ea27
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047ea28
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    MOV EAX,[0x01c26390]                ; 0047ea2d | DAT_01c26390
    MOV ESI,dword ptr [0x01c25f84]      ; 0047ea32 | DAT_01c25f84
    ADD ESP,0x10                        ; 0047ea38
    TEST ESI,ESI                        ; 0047ea3b
    JZ 0x0047ed86                       ; 0047ea3d
        ;   XREF to: 0047ed86 (CONDITIONAL_JUMP)  ; LAB_0047ed86
    AND EAX,0xff                        ; 0047ea43
    MOV EDX,EAX                         ; 0047ea48
    SHL EAX,0x2                         ; 0047ea4a
    SUB EAX,EDX                         ; 0047ea4d
    XOR EDX,EDX                         ; 0047ea4f
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047ea51 | DAT_01c35839
    MOV ECX,EDX                         ; 0047ea57
    XOR EDX,EDX                         ; 0047ea59
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047ea5b | DAT_01c35838
    SHL ECX,0x8                         ; 0047ea61
    SHL EDX,0x10                        ; 0047ea64
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047ea67 | DAT_01c3583a
    OR EDX,ECX                          ; 0047ea6d
    AND EAX,0xff                        ; 0047ea6f
    OR EAX,EDX                          ; 0047ea74
    PUSH EAX                            ; 0047ea76
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ea77
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ea7c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ea7f
        ;   Label: LAB_0047ea7f
    DEC EAX                             ; 0047ea82
    PUSH EAX                            ; 0047ea83
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ea84
    DEC EAX                             ; 0047ea87
    PUSH EAX                            ; 0047ea88
    MOV EDI,dword ptr [EBX]             ; 0047ea89
    PUSH EDI                            ; 0047ea8b
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0047ea8c
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ea91
    ADD ESP,0xc                         ; 0047ea94
    DEC EAX                             ; 0047ea97
    PUSH EAX                            ; 0047ea98
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047ea99
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ea9c
    PUSH EBP                            ; 0047ea9f
    DEC EAX                             ; 0047eaa0
    PUSH EAX                            ; 0047eaa1
    CALL engine_mini3d.cpp_FUN_004f93b0 ; 0047eaa2
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93b0()
    ADD ESP,0xc                         ; 0047eaa7
    PUSH dword ptr [ESP + 0xc]          ; 0047eaaa
    PUSH dword ptr [ESP + 0xc]          ; 0047eaae
    PUSH dword ptr [ESP + 0xc]          ; 0047eab2
    PUSH dword ptr [ESP + 0xc]          ; 0047eab6
    CALL unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0 ; 0047eaba
        ;   XREF to: 004f2ac0 (UNCONDITIONAL_CALL)  ; void unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0(float left, float top, float right, float bottom)
    ADD ESP,0x10                        ; 0047eabf
    CMP byte ptr [EBX + 0x48],0x0       ; 0047eac2
        ;   Label: LAB_0047eac2
    JZ 0x0047ed39                       ; 0047eac6
        ;   XREF to: 0047ed39 (CONDITIONAL_JUMP)  ; LAB_0047ed39
    MOV EAX,[0x01c35e4c]                ; 0047eacc | DAT_01c35e4c
    MOV dword ptr [ESP + 0x14],EAX      ; 0047ead1
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047ead5
    MOV [0x01c35e4c],EAX                ; 0047ead8 | DAT_01c35e4c
    MOV EAX,[0x01c25f7c]                ; 0047eadd | DAT_01c25f7c
    MOV EDX,EAX                         ; 0047eae2
    SAR EDX,0x1f                        ; 0047eae4
    SUB EAX,EDX                         ; 0047eae7
    SAR EAX,0x1                         ; 0047eae9
    ADD EAX,dword ptr [EBX + 0x4]       ; 0047eaeb
    MOV EDX,dword ptr [0x01c25f7c]      ; 0047eaee | DAT_01c25f7c
    LEA ECX,[EAX + -0x1]                ; 0047eaf4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047eaf7
    ADD EDX,EAX                         ; 0047eafe
    MOV EAX,EDX                         ; 0047eb00
    SAR EDX,0x1f                        ; 0047eb02
    SHL EDX,0x2                         ; 0047eb05
    SBB EAX,EDX                         ; 0047eb08
    SAR EAX,0x2                         ; 0047eb0a
    MOV ESI,dword ptr [EBX + 0x8]       ; 0047eb0d
    SUB ESI,0x2                         ; 0047eb10
    MOV EBP,ESI                         ; 0047eb13
    MOV dword ptr [ESP + 0x10],ECX      ; 0047eb15
    ADD EAX,ECX                         ; 0047eb19
    MOV EDX,dword ptr [EBX]             ; 0047eb1b
    LEA EDI,[EAX + -0x1]                ; 0047eb1d
    INC EDX                             ; 0047eb20
    MOV EAX,[0x01c26398]                ; 0047eb21 | DAT_01c26398
    MOV dword ptr [ESP + 0x18],EDX      ; 0047eb26
    MOV dword ptr [ESP + 0x20],EDI      ; 0047eb2a
    CMP dword ptr [0x01c25f84],0x0      ; 0047eb2e | DAT_01c25f84
    JZ 0x0047efa6                       ; 0047eb35
        ;   XREF to: 0047efa6 (CONDITIONAL_JUMP)  ; LAB_0047efa6
    CMP dword ptr [0x01c25f84],0x0      ; 0047eb3b | DAT_01c25f84
    JZ 0x0047ef9c                       ; 0047eb42
        ;   XREF to: 0047ef9c (CONDITIONAL_JUMP)  ; LAB_0047ef9c
    AND EAX,0xff                        ; 0047eb48
    MOV EDX,EAX                         ; 0047eb4d
    SHL EAX,0x2                         ; 0047eb4f
    SUB EAX,EDX                         ; 0047eb52
    XOR EDX,EDX                         ; 0047eb54
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047eb56 | DAT_01c35839
    MOV ECX,EDX                         ; 0047eb5c
    XOR EDX,EDX                         ; 0047eb5e
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047eb60 | DAT_01c35838
    SHL ECX,0x8                         ; 0047eb66
    SHL EDX,0x10                        ; 0047eb69
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047eb6c | DAT_01c3583a
    OR EDX,ECX                          ; 0047eb72
    AND EAX,0xff                        ; 0047eb74
    OR EAX,EDX                          ; 0047eb79
    PUSH EAX                            ; 0047eb7b
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047eb7c
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047eb81
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047eb84
        ;   Label: LAB_0047eb84
    PUSH ESI                            ; 0047eb88
    PUSH EBP                            ; 0047eb89
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047eb8a
    PUSH EDI                            ; 0047eb8e
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047eb8f
    PUSH EBP                            ; 0047eb93
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047eb94
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047eb99
    PUSH 0xffff                         ; 0047eb9c
        ;   Label: LAB_0047eb9c
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047eba1
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047eba6
    PUSH 0x3f800000                     ; 0047eba9
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047ebae
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 0047ebb3
    PUSH -0x1                           ; 0047ebb6
    MOV EAX,[0x01c26394]                ; 0047ebb8 | DAT_01c26394
    PUSH EAX                            ; 0047ebbd
    MOV EAX,[0x01c25f7c]                ; 0047ebbe | DAT_01c25f7c
    MOV EDX,EAX                         ; 0047ebc3
    SAR EDX,0x1f                        ; 0047ebc5
    SUB EAX,EDX                         ; 0047ebc8
    SAR EAX,0x1                         ; 0047ebca
    ADD EAX,dword ptr [EBX + 0x4]       ; 0047ebcc
    PUSH EAX                            ; 0047ebcf
    LEA ESI,[EBX + 0x48]                ; 0047ebd0
    MOV EBP,dword ptr [0x01c25590]      ; 0047ebd3 | DAT_01c25590
    PUSH ESI                            ; 0047ebd9
    MOV EDI,dword ptr [EBX]             ; 0047ebda
    MOV ECX,dword ptr [EBX + 0x8]       ; 0047ebdc
    PUSH EBP                            ; 0047ebdf
    ADD EDI,ECX                         ; 0047ebe0
    CALL engine_font.cpp_FUN_004aaf00   ; 0047ebe2
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,EDI                         ; 0047ebe7
    SUB EDX,EAX                         ; 0047ebe9
    MOV EAX,EDX                         ; 0047ebeb
    SAR EDX,0x1f                        ; 0047ebed
    SUB EAX,EDX                         ; 0047ebf0
    SAR EAX,0x1                         ; 0047ebf2
    ADD ESP,0x8                         ; 0047ebf4
    PUSH EAX                            ; 0047ebf7
    PUSH ESI                            ; 0047ebf8
    MOV EAX,[0x01c25590]                ; 0047ebf9 | DAT_01c25590
    PUSH EAX                            ; 0047ebfe
    CALL engine_font.cpp_FUN_004a8df0   ; 0047ebff
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 0047ec04
    PUSH ESI                            ; 0047ec07
    MOV EDX,dword ptr [0x01c25590]      ; 0047ec08 | DAT_01c25590
    PUSH EDX                            ; 0047ec0e
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 0047ec0f
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047ec14
    PUSH 0x5d2432                       ; 0047ec17 | DAT_005d2432
    MOV ECX,dword ptr [0x01c25590]      ; 0047ec1c | DAT_01c25590
    MOV ESI,dword ptr [0x01c25f7c]      ; 0047ec22 | DAT_01c25f7c
    PUSH ECX                            ; 0047ec28
    ADD ESI,EAX                         ; 0047ec29
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 0047ec2b
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD EAX,dword ptr [0x01c25f7c]      ; 0047ec30 | DAT_01c25f7c
    ADD ESP,0x8                         ; 0047ec36
    CMP ESI,EAX                         ; 0047ec39
    JGE 0x0047ec3f                      ; 0047ec3b
        ;   XREF to: 0047ec3f (CONDITIONAL_JUMP)  ; LAB_0047ec3f
    MOV ESI,EAX                         ; 0047ec3d
    MOV EAX,[0x01c2638c]                ; 0047ec3f | DAT_01c2638c
        ;   Label: LAB_0047ec3f
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047ec44
    MOV EDX,dword ptr [0x01c25f84]      ; 0047ec47 | DAT_01c25f84
    ADD ESI,EBP                         ; 0047ec4d
    TEST EDX,EDX                        ; 0047ec4f
    JZ 0x0047efb8                       ; 0047ec51
        ;   XREF to: 0047efb8 (CONDITIONAL_JUMP)  ; LAB_0047efb8
    AND EAX,0xff                        ; 0047ec57
    MOV EDX,EAX                         ; 0047ec5c
    SHL EAX,0x2                         ; 0047ec5e
    SUB EAX,EDX                         ; 0047ec61
    XOR ECX,ECX                         ; 0047ec63
    XOR EDX,EDX                         ; 0047ec65
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 0047ec67 | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047ec6d | DAT_01c35839
    SHL ECX,0x10                        ; 0047ec73
    SHL EDX,0x8                         ; 0047ec76
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047ec79 | DAT_01c3583a
    OR EDX,ECX                          ; 0047ec7f
    AND EAX,0xff                        ; 0047ec81
    OR EAX,EDX                          ; 0047ec86
    PUSH EAX                            ; 0047ec88
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ec89
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ec8e
    MOV ECX,dword ptr [0x01c25f84]      ; 0047ec91 | DAT_01c25f84
        ;   Label: LAB_0047ec91
    MOV EDX,dword ptr [EBX]             ; 0047ec97
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ec99
    INC EDX                             ; 0047ec9c
    SUB EAX,0x2                         ; 0047ec9d
    TEST ECX,ECX                        ; 0047eca0
    JZ 0x0047efc2                       ; 0047eca2
        ;   XREF to: 0047efc2 (CONDITIONAL_JUMP)  ; LAB_0047efc2
    PUSH EAX                            ; 0047eca8
    PUSH ESI                            ; 0047eca9
    PUSH EDX                            ; 0047ecaa
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0047ecab
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 0047ecb0
        ;   Label: LAB_0047ecb0
    MOV EDI,dword ptr [0x01c26390]      ; 0047ecb3 | DAT_01c26390
    CMP EDI,dword ptr [0x01c2638c]      ; 0047ecb9 | DAT_01c2638c
    JZ 0x0047ed30                       ; 0047ecbf
        ;   XREF to: 0047ed30 (CONDITIONAL_JUMP)  ; LAB_0047ed30
    MOV EBP,dword ptr [0x01c25f84]      ; 0047ecc1 | DAT_01c25f84
    MOV EAX,EDI                         ; 0047ecc7
    TEST EBP,EBP                        ; 0047ecc9
    JZ 0x0047efcf                       ; 0047eccb
        ;   XREF to: 0047efcf (CONDITIONAL_JUMP)  ; LAB_0047efcf
    AND EAX,0xff                        ; 0047ecd1
    MOV EDX,EAX                         ; 0047ecd6
    SHL EAX,0x2                         ; 0047ecd8
    SUB EAX,EDX                         ; 0047ecdb
    XOR EDX,EDX                         ; 0047ecdd
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047ecdf | DAT_01c35839
    MOV ECX,EDX                         ; 0047ece5
    XOR EDX,EDX                         ; 0047ece7
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047ece9 | DAT_01c35838
    SHL ECX,0x8                         ; 0047ecef
    SHL EDX,0x10                        ; 0047ecf2
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047ecf5 | DAT_01c3583a
    OR EDX,ECX                          ; 0047ecfb
    AND EAX,0xff                        ; 0047ecfd
    OR EAX,EDX                          ; 0047ed02
    PUSH EAX                            ; 0047ed04
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ed05
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ed0a
    MOV ECX,dword ptr [0x01c25f84]      ; 0047ed0d | DAT_01c25f84
        ;   Label: LAB_0047ed0d
    DEC ESI                             ; 0047ed13
    MOV EAX,dword ptr [EBX]             ; 0047ed14
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047ed16
    INC EAX                             ; 0047ed19
    SUB EDX,0x2                         ; 0047ed1a
    TEST ECX,ECX                        ; 0047ed1d
    JZ 0x0047efda                       ; 0047ed1f
        ;   XREF to: 0047efda (CONDITIONAL_JUMP)  ; LAB_0047efda
    PUSH EDX                            ; 0047ed25
    PUSH ESI                            ; 0047ed26
    PUSH EAX                            ; 0047ed27
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0047ed28
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 0047ed2d
        ;   Label: LAB_0047ed2d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047ed30
        ;   Label: LAB_0047ed30
    MOV [0x01c35e4c],EAX                ; 0047ed34 | DAT_01c35e4c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047ed39
        ;   Label: LAB_0047ed39
    MOV [0x01c35e60],EAX                ; 0047ed3d | DAT_01c35e60
    ADD ESP,0x34                        ; 0047ed42
    POP EBP                             ; 0047ed45
    POP EDI                             ; 0047ed46
    POP ESI                             ; 0047ed47
    POP EBX                             ; 0047ed48
    RET                                 ; 0047ed49
    MOV ECX,0x5d1e6f                    ; 0047ed4a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047ed4a
    MOV EBX,0xa0                        ; 0047ed4f
    PUSH 0x5d1e85                       ; 0047ed54 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047ed59 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047ed5f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047ed65
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047ed6a
    JMP 0x0047e884                      ; 0047ed6d
        ;   XREF to: 0047e884 (UNCONDITIONAL_JUMP)  ; LAB_0047e884
    MOV [0x01c35e60],EAX                ; 0047ed72 | DAT_01c35e60
        ;   Label: LAB_0047ed72
    JMP 0x0047e9ab                      ; 0047ed77
        ;   XREF to: 0047e9ab (UNCONDITIONAL_JUMP)  ; LAB_0047e9ab
    MOV [0x01c35e60],EAX                ; 0047ed7c | DAT_01c35e60
        ;   Label: LAB_0047ed7c
    JMP 0x0047ea11                      ; 0047ed81
        ;   XREF to: 0047ea11 (UNCONDITIONAL_JUMP)  ; LAB_0047ea11
    MOV [0x01c35e60],EAX                ; 0047ed86 | DAT_01c35e60
        ;   Label: LAB_0047ed86
    JMP 0x0047ea7f                      ; 0047ed8b
        ;   XREF to: 0047ea7f (UNCONDITIONAL_JUMP)  ; LAB_0047ea7f
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ed90
        ;   Label: LAB_0047ed90
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047ed93
    SUB EAX,EDX                         ; 0047ed96
    INC EAX                             ; 0047ed98
    MOV ECX,dword ptr [EBX]             ; 0047ed99
    PUSH EAX                            ; 0047ed9b
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ed9c
    SUB EAX,ECX                         ; 0047ed9f
    INC EAX                             ; 0047eda1
    PUSH EAX                            ; 0047eda2
    PUSH EDX                            ; 0047eda3
    PUSH ECX                            ; 0047eda4
    CALL engine_matrix.c_pushViewport_FUN_004ea410 ; 0047eda5
        ;   XREF to: 004ea410 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_004ea410(int x, int y, int width, int height)
    MOV ESI,dword ptr [0x01c26388]      ; 0047edaa | DAT_01c26388
    ADD ESP,0x10                        ; 0047edb0
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047edb3
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047edb6
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047edb9
    MOV ECX,dword ptr [EBX]             ; 0047edbc
    SUB EAX,0x2                         ; 0047edbe
    SUB EDX,0x2                         ; 0047edc1
    INC EBP                             ; 0047edc4
    INC ECX                             ; 0047edc5
    MOV dword ptr [ESP + 0x28],ECX      ; 0047edc6
    MOV dword ptr [ESP + 0x24],EBP      ; 0047edca
    MOV dword ptr [ESP + 0x2c],EDX      ; 0047edce
    MOV EDI,EAX                         ; 0047edd2
    MOV EAX,[0x01c2638c]                ; 0047edd4 | DAT_01c2638c
    CMP dword ptr [0x01c25f84],0x0      ; 0047edd9 | DAT_01c25f84
    JZ 0x0047ef61                       ; 0047ede0
        ;   XREF to: 0047ef61 (CONDITIONAL_JUMP)  ; LAB_0047ef61
    CMP dword ptr [0x01c25f84],0x0      ; 0047ede6 | DAT_01c25f84
    JZ 0x0047ef4c                       ; 0047eded
        ;   XREF to: 0047ef4c (CONDITIONAL_JUMP)  ; LAB_0047ef4c
    AND EAX,0xff                        ; 0047edf3
    MOV EDX,EAX                         ; 0047edf8
    SHL EAX,0x2                         ; 0047edfa
    SUB EAX,EDX                         ; 0047edfd
    XOR EDX,EDX                         ; 0047edff
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047ee01 | DAT_01c35839
    MOV ECX,EDX                         ; 0047ee07
    XOR EDX,EDX                         ; 0047ee09
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047ee0b | DAT_01c35838
    SHL ECX,0x8                         ; 0047ee11
    SHL EDX,0x10                        ; 0047ee14
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047ee17 | DAT_01c3583a
    OR EDX,ECX                          ; 0047ee1d
    AND EAX,0xff                        ; 0047ee1f
    OR EAX,EDX                          ; 0047ee24
    PUSH EAX                            ; 0047ee26
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ee27
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ee2c
    LEA EAX,[EDI + 0x1]                 ; 0047ee2f
        ;   Label: LAB_0047ee2f
    PUSH EAX                            ; 0047ee32
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ee33
    INC EAX                             ; 0047ee37
    PUSH EAX                            ; 0047ee38
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047ee39
    DEC EAX                             ; 0047ee3d
    PUSH EAX                            ; 0047ee3e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0047ee3f
    DEC EAX                             ; 0047ee43
    PUSH EAX                            ; 0047ee44
    CALL engine_mini3d.cpp_FUN_004f9340 ; 0047ee45
        ;   XREF to: 004f9340 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9340()
    MOV ECX,dword ptr [0x01c25f84]      ; 0047ee4a | DAT_01c25f84
    ADD ESP,0x10                        ; 0047ee50
    TEST ECX,ECX                        ; 0047ee53
    JZ 0x0047ef56                       ; 0047ee55
        ;   XREF to: 0047ef56 (CONDITIONAL_JUMP)  ; LAB_0047ef56
    MOV EDX,ESI                         ; 0047ee5b
    AND EDX,0xff                        ; 0047ee5d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047ee63
    SUB EAX,EDX                         ; 0047ee6a
    XOR EDX,EDX                         ; 0047ee6c
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047ee6e | DAT_01c35839
    MOV ECX,EDX                         ; 0047ee74
    XOR EDX,EDX                         ; 0047ee76
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047ee78 | DAT_01c35838
    SHL ECX,0x8                         ; 0047ee7e
    SHL EDX,0x10                        ; 0047ee81
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047ee84 | DAT_01c3583a
    OR EDX,ECX                          ; 0047ee8a
    AND EAX,0xff                        ; 0047ee8c
    OR EAX,EDX                          ; 0047ee91
    PUSH EAX                            ; 0047ee93
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ee94
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ee99
    PUSH EDI                            ; 0047ee9c
        ;   Label: LAB_0047ee9c
    MOV ESI,dword ptr [ESP + 0x30]      ; 0047ee9d
    PUSH ESI                            ; 0047eea1
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0047eea2
    PUSH EDI                            ; 0047eea6
    MOV EBP,dword ptr [ESP + 0x34]      ; 0047eea7
    PUSH EBP                            ; 0047eeab
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047eeac
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047eeb1
    MOV EDX,dword ptr [0x01c25f84]      ; 0047eeb4 | DAT_01c25f84
        ;   Label: LAB_0047eeb4
    MOV EAX,[0x01c26390]                ; 0047eeba | DAT_01c26390
    TEST EDX,EDX                        ; 0047eebf
    JZ 0x0047ef76                       ; 0047eec1
        ;   XREF to: 0047ef76 (CONDITIONAL_JUMP)  ; LAB_0047ef76
    AND EAX,0xff                        ; 0047eec7
    MOV EDX,EAX                         ; 0047eecc
    SHL EAX,0x2                         ; 0047eece
    SUB EAX,EDX                         ; 0047eed1
    XOR EDX,EDX                         ; 0047eed3
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047eed5 | DAT_01c35839
    MOV ECX,EDX                         ; 0047eedb
    XOR EDX,EDX                         ; 0047eedd
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047eedf | DAT_01c35838
    SHL ECX,0x8                         ; 0047eee5
    SHL EDX,0x10                        ; 0047eee8
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047eeeb | DAT_01c3583a
    OR EDX,ECX                          ; 0047eef1
    AND EAX,0xff                        ; 0047eef3
    OR EAX,EDX                          ; 0047eef8
    PUSH EAX                            ; 0047eefa
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047eefb
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047ef00
    MOV ESI,dword ptr [0x01c25f84]      ; 0047ef03 | DAT_01c25f84
        ;   Label: LAB_0047ef03
    MOV EDX,dword ptr [EBX + 0xc]       ; 0047ef09
    MOV ECX,dword ptr [EBX + 0x8]       ; 0047ef0c
    MOV EAX,dword ptr [EBX]             ; 0047ef0f
    DEC EDX                             ; 0047ef11
    DEC ECX                             ; 0047ef12
    TEST ESI,ESI                        ; 0047ef13
    JZ 0x0047ef7d                       ; 0047ef15
        ;   XREF to: 0047ef7d (CONDITIONAL_JUMP)  ; LAB_0047ef7d
    PUSH ECX                            ; 0047ef17
    PUSH EDX                            ; 0047ef18
    PUSH EAX                            ; 0047ef19
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0047ef1a
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 0047ef1f
        ;   Label: LAB_0047ef1f
    MOV EDI,dword ptr [0x01c25f84]      ; 0047ef22 | DAT_01c25f84
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ef28
    MOV ECX,dword ptr [EBX + 0xc]       ; 0047ef2b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047ef2e
    DEC EAX                             ; 0047ef31
    DEC ECX                             ; 0047ef32
    TEST EDI,EDI                        ; 0047ef33
    JZ 0x0047ef87                       ; 0047ef35
        ;   XREF to: 0047ef87 (CONDITIONAL_JUMP)  ; LAB_0047ef87
    PUSH ECX                            ; 0047ef37
    PUSH EDX                            ; 0047ef38
    PUSH EAX                            ; 0047ef39
    CALL engine_mini3d.cpp_FUN_004f93b0 ; 0047ef3a
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93b0()
    ADD ESP,0xc                         ; 0047ef3f
    CALL engine_matrix.c_popViewport_FUN_004ea570 ; 0047ef42
        ;   XREF to: 004ea570 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004ea570()
    JMP 0x0047eac2                      ; 0047ef47
        ;   XREF to: 0047eac2 (UNCONDITIONAL_JUMP)  ; LAB_0047eac2
    MOV [0x01c35e60],EAX                ; 0047ef4c | DAT_01c35e60
        ;   Label: LAB_0047ef4c
    JMP 0x0047ee2f                      ; 0047ef51
        ;   XREF to: 0047ee2f (UNCONDITIONAL_JUMP)  ; LAB_0047ee2f
    MOV dword ptr [0x01c35e60],ESI      ; 0047ef56 | DAT_01c35e60
        ;   Label: LAB_0047ef56
    JMP 0x0047ee9c                      ; 0047ef5c
        ;   XREF to: 0047ee9c (UNCONDITIONAL_JUMP)  ; LAB_0047ee9c
    PUSH EAX                            ; 0047ef61
        ;   Label: LAB_0047ef61
    PUSH ESI                            ; 0047ef62
    MOV EAX,EDI                         ; 0047ef63
    PUSH EAX                            ; 0047ef65
    PUSH EDX                            ; 0047ef66
    PUSH EBP                            ; 0047ef67
    PUSH ECX                            ; 0047ef68
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 0047ef69
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0047ef6e
    JMP 0x0047eeb4                      ; 0047ef71
        ;   XREF to: 0047eeb4 (UNCONDITIONAL_JUMP)  ; LAB_0047eeb4
    MOV [0x01c35e60],EAX                ; 0047ef76 | DAT_01c35e60
        ;   Label: LAB_0047ef76
    JMP 0x0047ef03                      ; 0047ef7b
        ;   XREF to: 0047ef03 (UNCONDITIONAL_JUMP)  ; LAB_0047ef03
    PUSH ECX                            ; 0047ef7d
        ;   Label: LAB_0047ef7d
    PUSH EDX                            ; 0047ef7e
    PUSH EAX                            ; 0047ef7f
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047ef80
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047ef1f                      ; 0047ef85
        ;   XREF to: 0047ef1f (UNCONDITIONAL_JUMP)  ; LAB_0047ef1f
    PUSH ECX                            ; 0047ef87
        ;   Label: LAB_0047ef87
    PUSH EDX                            ; 0047ef88
    PUSH EAX                            ; 0047ef89
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0047ef8a
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0047ef8f
    CALL engine_matrix.c_popViewport_FUN_004ea570 ; 0047ef92
        ;   XREF to: 004ea570 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004ea570()
    JMP 0x0047eac2                      ; 0047ef97
        ;   XREF to: 0047eac2 (UNCONDITIONAL_JUMP)  ; LAB_0047eac2
    MOV [0x01c35e60],EAX                ; 0047ef9c | DAT_01c35e60
        ;   Label: LAB_0047ef9c
    JMP 0x0047eb84                      ; 0047efa1
        ;   XREF to: 0047eb84 (UNCONDITIONAL_JUMP)  ; LAB_0047eb84
    PUSH EAX                            ; 0047efa6
        ;   Label: LAB_0047efa6
    PUSH EDI                            ; 0047efa7
    PUSH ESI                            ; 0047efa8
    PUSH ECX                            ; 0047efa9
    PUSH EDX                            ; 0047efaa
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0047efab
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0047efb0
    JMP 0x0047eb9c                      ; 0047efb3
        ;   XREF to: 0047eb9c (UNCONDITIONAL_JUMP)  ; LAB_0047eb9c
    MOV [0x01c35e60],EAX                ; 0047efb8 | DAT_01c35e60
        ;   Label: LAB_0047efb8
    JMP 0x0047ec91                      ; 0047efbd
        ;   XREF to: 0047ec91 (UNCONDITIONAL_JUMP)  ; LAB_0047ec91
    PUSH EAX                            ; 0047efc2
        ;   Label: LAB_0047efc2
    PUSH ESI                            ; 0047efc3
    PUSH EDX                            ; 0047efc4
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047efc5
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047ecb0                      ; 0047efca
        ;   XREF to: 0047ecb0 (UNCONDITIONAL_JUMP)  ; LAB_0047ecb0
    MOV dword ptr [0x01c35e60],EDI      ; 0047efcf | DAT_01c35e60
        ;   Label: LAB_0047efcf
    JMP 0x0047ed0d                      ; 0047efd5
        ;   XREF to: 0047ed0d (UNCONDITIONAL_JUMP)  ; LAB_0047ed0d
    PUSH EDX                            ; 0047efda
        ;   Label: LAB_0047efda
    PUSH ESI                            ; 0047efdb
    PUSH EAX                            ; 0047efdc
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047efdd
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047ed2d                      ; 0047efe2
        ;   XREF to: 0047ed2d (UNCONDITIONAL_JUMP)  ; LAB_0047ed2d

