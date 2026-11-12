; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047fa80(void)
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
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e818f
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e55a
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 004843e1
;   shape_edittool.cpp_FUN_0047d09e at 0047d114
;   shape_edittool.cpp_FUN_0047ee50 at 0047eefb
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047cac2
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d855
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c48c
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   TerminatedCString s_shape_edittool_cpp_005bd235
;   TerminatedCString s_CEditorTools_paintWindow_005bd24b
;   undefined4 DAT_005bd288
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5baf0
;   undefined4 DAT_01c5baf4
;   undefined4 DAT_01c5baf8
;   undefined4 DAT_01c5bafc
;   undefined4 DAT_01c5bb00
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   engine_font.cpp_FUN_004b0a20
;   engine_matrix.c_popViewport_FUN_004e6c50
;   engine_matrix.c_pushViewport_FUN_004e6af0
;   engine_mini3d.cpp_FUN_004ed020
;   engine_mini3d.cpp_FUN_004ed150
;   engine_mini3d.cpp_FUN_004edaf0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fa80
        ;   Label: shape_edittool.cpp_FUN_0047fa80
    PUSH ESI                            ; 0047fa81
    PUSH EDI                            ; 0047fa82
    PUSH EBP                            ; 0047fa83
    SUB ESP,0x34                        ; 0047fa84
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047fa87 | DAT_01c5b0e0
    JZ 0x0047ff5a                       ; 0047fa8e
        ;   XREF to: 0047ff5a (CONDITIONAL_JUMP)  ; LAB_0047ff5a
    MOV EAX,[0x01c5b0e0]                ; 0047fa94 | DAT_01c5b0e0
        ;   Label: LAB_0047fa94
    PUSH 0x6a                           ; 0047fa99
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047fa9b
    PUSH EAX                            ; 0047faa1
    MOV dword ptr [0x01c5bae0],EDX      ; 0047faa2 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047faa8
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c5b104]      ; 0047faad | DAT_01c5b104
    ADD ESP,0x8                         ; 0047fab3
    MOV [0x01c5bae4],EAX                ; 0047fab6 | DAT_01c5bae4
    CMP ESI,0x1                         ; 0047fabb
    JGE 0x0047fae3                      ; 0047fabe
        ;   XREF to: 0047fae3 (CONDITIONAL_JUMP)  ; LAB_0047fae3
    MOV EDI,0x5bd235                    ; 0047fac0 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x94c                       ; 0047fac5
    PUSH 0x5bd24b                       ; 0047faca | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01d71de0],EDI      ; 0047facf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0047fad5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047fadb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047fae0
    MOV EBX,dword ptr [0x01c5b104]      ; 0047fae3 | DAT_01c5b104
        ;   Label: LAB_0047fae3
    DEC EBX                             ; 0047fae9
    MOV EAX,[0x01c6b5c0]                ; 0047faea | DAT_01c6b5c0
    SHL EBX,0x3                         ; 0047faef
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047faf2
    MOV EAX,EBX                         ; 0047faf6
    SHL EBX,0x6                         ; 0047faf8
    SUB EBX,EAX                         ; 0047fafb
    CALL shape_edittool.cpp_paintWindowBackground_FUN_0047cd80 ; 0047fafd
        ;   XREF to: 0047cd80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_paintWindowBackground_FUN_0047cd80()
    MOV EAX,[0x01c5baec]                ; 0047fb02 | DAT_01c5baec
    ADD EBX,0x1c5b108                   ; 0047fb07
    TEST EAX,EAX                        ; 0047fb0d
    JZ 0x0047ffa0                       ; 0047fb0f
        ;   XREF to: 0047ffa0 (CONDITIONAL_JUMP)  ; LAB_0047ffa0
    LEA EAX,[ESP + 0xc]                 ; 0047fb15
    PUSH EAX                            ; 0047fb19
    LEA EAX,[ESP + 0xc]                 ; 0047fb1a
    PUSH EAX                            ; 0047fb1e
    LEA EAX,[ESP + 0xc]                 ; 0047fb1f
    PUSH EAX                            ; 0047fb23
    LEA EAX,[ESP + 0xc]                 ; 0047fb24
    PUSH EAX                            ; 0047fb28
    CALL engine_mini3d.cpp_FUN_004ed150 ; 0047fb29
        ;   XREF to: 004ed150 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed150()
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047fb2e
    ADD ESP,0x10                        ; 0047fb31
    INC EAX                             ; 0047fb34
    MOV dword ptr [ESP + 0x30],EAX      ; 0047fb35
    FILD dword ptr [ESP + 0x30]         ; 0047fb39
    SUB ESP,0x4                         ; 0047fb3d
    FSTP float ptr [ESP]                ; 0047fb40
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047fb43
    INC EAX                             ; 0047fb46
    MOV dword ptr [ESP + 0x34],EAX      ; 0047fb47
    FILD dword ptr [ESP + 0x34]         ; 0047fb4b
    SUB ESP,0x4                         ; 0047fb4f
    FSTP float ptr [ESP]                ; 0047fb52
    SUB ESP,0x4                         ; 0047fb55
    FILD dword ptr [EBX + 0x4]          ; 0047fb58
    FSTP float ptr [ESP]                ; 0047fb5b
    SUB ESP,0x4                         ; 0047fb5e
    FILD dword ptr [EBX]                ; 0047fb61
    FSTP float ptr [ESP]                ; 0047fb63
    CALL engine_mini3d.cpp_FUN_004ed020 ; 0047fb66
        ;   XREF to: 004ed020 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed020()
    MOV EAX,[0x01c5baf4]                ; 0047fb6b | DAT_01c5baf4
    MOV EBP,dword ptr [0x01c5baec]      ; 0047fb70 | DAT_01c5baec
    ADD ESP,0x10                        ; 0047fb76
    TEST EBP,EBP                        ; 0047fb79
    JZ 0x0047ff82                       ; 0047fb7b
        ;   XREF to: 0047ff82 (CONDITIONAL_JUMP)  ; LAB_0047ff82
    AND EAX,0xff                        ; 0047fb81
    MOV EDX,EAX                         ; 0047fb86
    SHL EAX,0x2                         ; 0047fb88
    SUB EAX,EDX                         ; 0047fb8b
    XOR ECX,ECX                         ; 0047fb8d
    XOR EDX,EDX                         ; 0047fb8f
    MOV CL,byte ptr [EAX + 0x1c6af99]   ; 0047fb91 | DAT_01c6af99
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047fb97 | DAT_01c6af98
    SHL ECX,0x8                         ; 0047fb9d
    SHL EDX,0x10                        ; 0047fba0
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047fba3 | DAT_01c6af9a
    OR EDX,ECX                          ; 0047fba9
    AND EAX,0xff                        ; 0047fbab
    OR EAX,EDX                          ; 0047fbb0
    PUSH EAX                            ; 0047fbb2
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047fbb3
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047fbb8
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047fbbb
        ;   Label: LAB_0047fbbb
    DEC EAX                             ; 0047fbbe
    PUSH EAX                            ; 0047fbbf
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047fbc0
    DEC EAX                             ; 0047fbc3
    PUSH EAX                            ; 0047fbc4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047fbc5
    PUSH EAX                            ; 0047fbc8
    MOV EDX,dword ptr [EBX]             ; 0047fbc9
    PUSH EDX                            ; 0047fbcb
    CALL engine_mini3d.cpp_FUN_004f3a60 ; 0047fbcc
        ;   XREF to: 004f3a60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3a60()
    MOV EAX,[0x01c5baf0]                ; 0047fbd1 | DAT_01c5baf0
    MOV ECX,dword ptr [0x01c5baec]      ; 0047fbd6 | DAT_01c5baec
    ADD ESP,0x10                        ; 0047fbdc
    TEST ECX,ECX                        ; 0047fbdf
    JZ 0x0047ff8c                       ; 0047fbe1
        ;   XREF to: 0047ff8c (CONDITIONAL_JUMP)  ; LAB_0047ff8c
    AND EAX,0xff                        ; 0047fbe7
    MOV EDX,EAX                         ; 0047fbec
    SHL EAX,0x2                         ; 0047fbee
    SUB EAX,EDX                         ; 0047fbf1
    XOR ECX,ECX                         ; 0047fbf3
    XOR EDX,EDX                         ; 0047fbf5
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 0047fbf7 | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047fbfd | DAT_01c6af99
    SHL ECX,0x10                        ; 0047fc03
    SHL EDX,0x8                         ; 0047fc06
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047fc09 | DAT_01c6af9a
    OR EDX,ECX                          ; 0047fc0f
    AND EAX,0xff                        ; 0047fc11
    OR EAX,EDX                          ; 0047fc16
    PUSH EAX                            ; 0047fc18
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047fc19
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047fc1e
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047fc21
        ;   Label: LAB_0047fc21
    SUB EAX,0x2                         ; 0047fc24
    PUSH EAX                            ; 0047fc27
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047fc28
    SUB EAX,0x2                         ; 0047fc2b
    PUSH EAX                            ; 0047fc2e
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047fc2f
    INC EAX                             ; 0047fc32
    PUSH EAX                            ; 0047fc33
    MOV EAX,dword ptr [EBX]             ; 0047fc34
    INC EAX                             ; 0047fc36
    PUSH EAX                            ; 0047fc37
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 0047fc38
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    MOV EAX,[0x01c5baf8]                ; 0047fc3d | DAT_01c5baf8
    MOV ESI,dword ptr [0x01c5baec]      ; 0047fc42 | DAT_01c5baec
    ADD ESP,0x10                        ; 0047fc48
    TEST ESI,ESI                        ; 0047fc4b
    JZ 0x0047ff96                       ; 0047fc4d
        ;   XREF to: 0047ff96 (CONDITIONAL_JUMP)  ; LAB_0047ff96
    AND EAX,0xff                        ; 0047fc53
    MOV EDX,EAX                         ; 0047fc58
    SHL EAX,0x2                         ; 0047fc5a
    SUB EAX,EDX                         ; 0047fc5d
    XOR EDX,EDX                         ; 0047fc5f
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047fc61 | DAT_01c6af99
    MOV ECX,EDX                         ; 0047fc67
    XOR EDX,EDX                         ; 0047fc69
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047fc6b | DAT_01c6af98
    SHL ECX,0x8                         ; 0047fc71
    SHL EDX,0x10                        ; 0047fc74
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047fc77 | DAT_01c6af9a
    OR EDX,ECX                          ; 0047fc7d
    AND EAX,0xff                        ; 0047fc7f
    OR EAX,EDX                          ; 0047fc84
    PUSH EAX                            ; 0047fc86
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047fc87
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047fc8c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047fc8f
        ;   Label: LAB_0047fc8f
    DEC EAX                             ; 0047fc92
    PUSH EAX                            ; 0047fc93
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047fc94
    DEC EAX                             ; 0047fc97
    PUSH EAX                            ; 0047fc98
    MOV EDI,dword ptr [EBX]             ; 0047fc99
    PUSH EDI                            ; 0047fc9b
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 0047fc9c
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047fca1
    ADD ESP,0xc                         ; 0047fca4
    DEC EAX                             ; 0047fca7
    PUSH EAX                            ; 0047fca8
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047fca9
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047fcac
    PUSH EBP                            ; 0047fcaf
    DEC EAX                             ; 0047fcb0
    PUSH EAX                            ; 0047fcb1
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 0047fcb2
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 0047fcb7
    PUSH dword ptr [ESP + 0xc]          ; 0047fcba
    PUSH dword ptr [ESP + 0xc]          ; 0047fcbe
    PUSH dword ptr [ESP + 0xc]          ; 0047fcc2
    PUSH dword ptr [ESP + 0xc]          ; 0047fcc6
    CALL engine_mini3d.cpp_FUN_004ed020 ; 0047fcca
        ;   XREF to: 004ed020 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed020()
    ADD ESP,0x10                        ; 0047fccf
    CMP byte ptr [EBX + 0x48],0x0       ; 0047fcd2
        ;   Label: LAB_0047fcd2
    JZ 0x0047ff49                       ; 0047fcd6
        ;   XREF to: 0047ff49 (CONDITIONAL_JUMP)  ; LAB_0047ff49
    MOV EAX,[0x01c6b5ac]                ; 0047fcdc | DAT_01c6b5ac
    MOV dword ptr [ESP + 0x14],EAX      ; 0047fce1
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047fce5
    MOV [0x01c6b5ac],EAX                ; 0047fce8 | DAT_01c6b5ac
    MOV EAX,[0x01c5bae4]                ; 0047fced | DAT_01c5bae4
    MOV EDX,EAX                         ; 0047fcf2
    SAR EDX,0x1f                        ; 0047fcf4
    SUB EAX,EDX                         ; 0047fcf7
    SAR EAX,0x1                         ; 0047fcf9
    ADD EAX,dword ptr [EBX + 0x4]       ; 0047fcfb
    MOV EDX,dword ptr [0x01c5bae4]      ; 0047fcfe | DAT_01c5bae4
    LEA ECX,[EAX + -0x1]                ; 0047fd04
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047fd07
    ADD EDX,EAX                         ; 0047fd0e
    MOV EAX,EDX                         ; 0047fd10
    SAR EDX,0x1f                        ; 0047fd12
    SHL EDX,0x2                         ; 0047fd15
    SBB EAX,EDX                         ; 0047fd18
    SAR EAX,0x2                         ; 0047fd1a
    MOV ESI,dword ptr [EBX + 0x8]       ; 0047fd1d
    SUB ESI,0x2                         ; 0047fd20
    MOV EBP,ESI                         ; 0047fd23
    MOV dword ptr [ESP + 0x10],ECX      ; 0047fd25
    ADD EAX,ECX                         ; 0047fd29
    MOV EDX,dword ptr [EBX]             ; 0047fd2b
    LEA EDI,[EAX + -0x1]                ; 0047fd2d
    INC EDX                             ; 0047fd30
    MOV EAX,[0x01c5bb00]                ; 0047fd31 | DAT_01c5bb00
    MOV dword ptr [ESP + 0x18],EDX      ; 0047fd36
    MOV dword ptr [ESP + 0x20],EDI      ; 0047fd3a
    CMP dword ptr [0x01c5baec],0x0      ; 0047fd3e | DAT_01c5baec
    JZ 0x004801b6                       ; 0047fd45
        ;   XREF to: 004801b6 (CONDITIONAL_JUMP)  ; LAB_004801b6
    CMP dword ptr [0x01c5baec],0x0      ; 0047fd4b | DAT_01c5baec
    JZ 0x004801ac                       ; 0047fd52
        ;   XREF to: 004801ac (CONDITIONAL_JUMP)  ; LAB_004801ac
    AND EAX,0xff                        ; 0047fd58
    MOV EDX,EAX                         ; 0047fd5d
    SHL EAX,0x2                         ; 0047fd5f
    SUB EAX,EDX                         ; 0047fd62
    XOR EDX,EDX                         ; 0047fd64
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047fd66 | DAT_01c6af99
    MOV ECX,EDX                         ; 0047fd6c
    XOR EDX,EDX                         ; 0047fd6e
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047fd70 | DAT_01c6af98
    SHL ECX,0x8                         ; 0047fd76
    SHL EDX,0x10                        ; 0047fd79
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047fd7c | DAT_01c6af9a
    OR EDX,ECX                          ; 0047fd82
    AND EAX,0xff                        ; 0047fd84
    OR EAX,EDX                          ; 0047fd89
    PUSH EAX                            ; 0047fd8b
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047fd8c
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047fd91
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047fd94
        ;   Label: LAB_0047fd94
    PUSH ESI                            ; 0047fd98
    PUSH EBP                            ; 0047fd99
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047fd9a
    PUSH EDI                            ; 0047fd9e
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047fd9f
    PUSH EBP                            ; 0047fda3
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 0047fda4
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 0047fda9
    PUSH 0xffff                         ; 0047fdac
        ;   Label: LAB_0047fdac
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047fdb1
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047fdb6
    PUSH 0x3f800000                     ; 0047fdb9
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 0047fdbe
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 0047fdc3
    PUSH -0x1                           ; 0047fdc6
    MOV EAX,[0x01c5bafc]                ; 0047fdc8 | DAT_01c5bafc
    PUSH EAX                            ; 0047fdcd
    MOV EAX,[0x01c5bae4]                ; 0047fdce | DAT_01c5bae4
    MOV EDX,EAX                         ; 0047fdd3
    SAR EDX,0x1f                        ; 0047fdd5
    SUB EAX,EDX                         ; 0047fdd8
    SAR EAX,0x1                         ; 0047fdda
    ADD EAX,dword ptr [EBX + 0x4]       ; 0047fddc
    PUSH EAX                            ; 0047fddf
    LEA ESI,[EBX + 0x48]                ; 0047fde0
    MOV EBP,dword ptr [0x01c5b0e0]      ; 0047fde3 | DAT_01c5b0e0
    PUSH ESI                            ; 0047fde9
    MOV EDI,dword ptr [EBX]             ; 0047fdea
    MOV ECX,dword ptr [EBX + 0x8]       ; 0047fdec
    PUSH EBP                            ; 0047fdef
    ADD EDI,ECX                         ; 0047fdf0
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 0047fdf2
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,EDI                         ; 0047fdf7
    SUB EDX,EAX                         ; 0047fdf9
    MOV EAX,EDX                         ; 0047fdfb
    SAR EDX,0x1f                        ; 0047fdfd
    SUB EAX,EDX                         ; 0047fe00
    SAR EAX,0x1                         ; 0047fe02
    ADD ESP,0x8                         ; 0047fe04
    PUSH EAX                            ; 0047fe07
    PUSH ESI                            ; 0047fe08
    MOV EAX,[0x01c5b0e0]                ; 0047fe09 | DAT_01c5b0e0
    PUSH EAX                            ; 0047fe0e
    CALL engine_font.cpp_FUN_004b0a20   ; 0047fe0f
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 0047fe14
    PUSH ESI                            ; 0047fe17
    MOV EDX,dword ptr [0x01c5b0e0]      ; 0047fe18 | DAT_01c5b0e0
    PUSH EDX                            ; 0047fe1e
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30 ; 0047fe1f
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047fe24
    PUSH 0x5bd288                       ; 0047fe27 | DAT_005bd288
    MOV ECX,dword ptr [0x01c5b0e0]      ; 0047fe2c | DAT_01c5b0e0
    MOV ESI,dword ptr [0x01c5bae4]      ; 0047fe32 | DAT_01c5bae4
    PUSH ECX                            ; 0047fe38
    ADD ESI,EAX                         ; 0047fe39
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30 ; 0047fe3b
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD EAX,dword ptr [0x01c5bae4]      ; 0047fe40 | DAT_01c5bae4
    ADD ESP,0x8                         ; 0047fe46
    CMP ESI,EAX                         ; 0047fe49
    JGE 0x0047fe4f                      ; 0047fe4b
        ;   XREF to: 0047fe4f (CONDITIONAL_JUMP)  ; LAB_0047fe4f
    MOV ESI,EAX                         ; 0047fe4d
    MOV EAX,[0x01c5baf4]                ; 0047fe4f | DAT_01c5baf4
        ;   Label: LAB_0047fe4f
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047fe54
    MOV EDX,dword ptr [0x01c5baec]      ; 0047fe57 | DAT_01c5baec
    ADD ESI,EBP                         ; 0047fe5d
    TEST EDX,EDX                        ; 0047fe5f
    JZ 0x004801c8                       ; 0047fe61
        ;   XREF to: 004801c8 (CONDITIONAL_JUMP)  ; LAB_004801c8
    AND EAX,0xff                        ; 0047fe67
    MOV EDX,EAX                         ; 0047fe6c
    SHL EAX,0x2                         ; 0047fe6e
    SUB EAX,EDX                         ; 0047fe71
    XOR ECX,ECX                         ; 0047fe73
    XOR EDX,EDX                         ; 0047fe75
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 0047fe77 | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047fe7d | DAT_01c6af99
    SHL ECX,0x10                        ; 0047fe83
    SHL EDX,0x8                         ; 0047fe86
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047fe89 | DAT_01c6af9a
    OR EDX,ECX                          ; 0047fe8f
    AND EAX,0xff                        ; 0047fe91
    OR EAX,EDX                          ; 0047fe96
    PUSH EAX                            ; 0047fe98
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047fe99
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047fe9e
    MOV ECX,dword ptr [0x01c5baec]      ; 0047fea1 | DAT_01c5baec
        ;   Label: LAB_0047fea1
    MOV EDX,dword ptr [EBX]             ; 0047fea7
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047fea9
    INC EDX                             ; 0047feac
    SUB EAX,0x2                         ; 0047fead
    TEST ECX,ECX                        ; 0047feb0
    JZ 0x004801d2                       ; 0047feb2
        ;   XREF to: 004801d2 (CONDITIONAL_JUMP)  ; LAB_004801d2
    PUSH EAX                            ; 0047feb8
    PUSH ESI                            ; 0047feb9
    PUSH EDX                            ; 0047feba
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 0047febb
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 0047fec0
        ;   Label: LAB_0047fec0
    MOV EDI,dword ptr [0x01c5baf8]      ; 0047fec3 | DAT_01c5baf8
    CMP EDI,dword ptr [0x01c5baf4]      ; 0047fec9 | DAT_01c5baf4
    JZ 0x0047ff40                       ; 0047fecf
        ;   XREF to: 0047ff40 (CONDITIONAL_JUMP)  ; LAB_0047ff40
    MOV EBP,dword ptr [0x01c5baec]      ; 0047fed1 | DAT_01c5baec
    MOV EAX,EDI                         ; 0047fed7
    TEST EBP,EBP                        ; 0047fed9
    JZ 0x004801df                       ; 0047fedb
        ;   XREF to: 004801df (CONDITIONAL_JUMP)  ; LAB_004801df
    AND EAX,0xff                        ; 0047fee1
    MOV EDX,EAX                         ; 0047fee6
    SHL EAX,0x2                         ; 0047fee8
    SUB EAX,EDX                         ; 0047feeb
    XOR EDX,EDX                         ; 0047feed
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047feef | DAT_01c6af99
    MOV ECX,EDX                         ; 0047fef5
    XOR EDX,EDX                         ; 0047fef7
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047fef9 | DAT_01c6af98
    SHL ECX,0x8                         ; 0047feff
    SHL EDX,0x10                        ; 0047ff02
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047ff05 | DAT_01c6af9a
    OR EDX,ECX                          ; 0047ff0b
    AND EAX,0xff                        ; 0047ff0d
    OR EAX,EDX                          ; 0047ff12
    PUSH EAX                            ; 0047ff14
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047ff15
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047ff1a
    MOV ECX,dword ptr [0x01c5baec]      ; 0047ff1d | DAT_01c5baec
        ;   Label: LAB_0047ff1d
    DEC ESI                             ; 0047ff23
    MOV EAX,dword ptr [EBX]             ; 0047ff24
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047ff26
    INC EAX                             ; 0047ff29
    SUB EDX,0x2                         ; 0047ff2a
    TEST ECX,ECX                        ; 0047ff2d
    JZ 0x004801ea                       ; 0047ff2f
        ;   XREF to: 004801ea (CONDITIONAL_JUMP)  ; LAB_004801ea
    PUSH EDX                            ; 0047ff35
    PUSH ESI                            ; 0047ff36
    PUSH EAX                            ; 0047ff37
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 0047ff38
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 0047ff3d
        ;   Label: LAB_0047ff3d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047ff40
        ;   Label: LAB_0047ff40
    MOV [0x01c6b5ac],EAX                ; 0047ff44 | DAT_01c6b5ac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047ff49
        ;   Label: LAB_0047ff49
    MOV [0x01c6b5c0],EAX                ; 0047ff4d | DAT_01c6b5c0
    ADD ESP,0x34                        ; 0047ff52
    POP EBP                             ; 0047ff55
    POP EDI                             ; 0047ff56
    POP ESI                             ; 0047ff57
    POP EBX                             ; 0047ff58
    RET                                 ; 0047ff59
    MOV ECX,0x5bcd25                    ; 0047ff5a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047ff5a
    MOV EBX,0xa7                        ; 0047ff5f
    PUSH 0x5bcd3b                       ; 0047ff64 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047ff69 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047ff6f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047ff75
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047ff7a
    JMP 0x0047fa94                      ; 0047ff7d
        ;   XREF to: 0047fa94 (UNCONDITIONAL_JUMP)  ; LAB_0047fa94
    MOV [0x01c6b5c0],EAX                ; 0047ff82 | DAT_01c6b5c0
        ;   Label: LAB_0047ff82
    JMP 0x0047fbbb                      ; 0047ff87
        ;   XREF to: 0047fbbb (UNCONDITIONAL_JUMP)  ; LAB_0047fbbb
    MOV [0x01c6b5c0],EAX                ; 0047ff8c | DAT_01c6b5c0
        ;   Label: LAB_0047ff8c
    JMP 0x0047fc21                      ; 0047ff91
        ;   XREF to: 0047fc21 (UNCONDITIONAL_JUMP)  ; LAB_0047fc21
    MOV [0x01c6b5c0],EAX                ; 0047ff96 | DAT_01c6b5c0
        ;   Label: LAB_0047ff96
    JMP 0x0047fc8f                      ; 0047ff9b
        ;   XREF to: 0047fc8f (UNCONDITIONAL_JUMP)  ; LAB_0047fc8f
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ffa0
        ;   Label: LAB_0047ffa0
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047ffa3
    SUB EAX,EDX                         ; 0047ffa6
    INC EAX                             ; 0047ffa8
    MOV ECX,dword ptr [EBX]             ; 0047ffa9
    PUSH EAX                            ; 0047ffab
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ffac
    SUB EAX,ECX                         ; 0047ffaf
    INC EAX                             ; 0047ffb1
    PUSH EAX                            ; 0047ffb2
    PUSH EDX                            ; 0047ffb3
    PUSH ECX                            ; 0047ffb4
    CALL engine_matrix.c_pushViewport_FUN_004e6af0 ; 0047ffb5
        ;   XREF to: 004e6af0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_004e6af0(int x, int y, int width, int height)
    MOV ESI,dword ptr [0x01c5baf0]      ; 0047ffba | DAT_01c5baf0
    ADD ESP,0x10                        ; 0047ffc0
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ffc3
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047ffc6
    MOV EBP,dword ptr [EBX + 0x4]       ; 0047ffc9
    MOV ECX,dword ptr [EBX]             ; 0047ffcc
    SUB EAX,0x2                         ; 0047ffce
    SUB EDX,0x2                         ; 0047ffd1
    INC EBP                             ; 0047ffd4
    INC ECX                             ; 0047ffd5
    MOV dword ptr [ESP + 0x28],ECX      ; 0047ffd6
    MOV dword ptr [ESP + 0x24],EBP      ; 0047ffda
    MOV dword ptr [ESP + 0x2c],EDX      ; 0047ffde
    MOV EDI,EAX                         ; 0047ffe2
    MOV EAX,[0x01c5baf4]                ; 0047ffe4 | DAT_01c5baf4
    CMP dword ptr [0x01c5baec],0x0      ; 0047ffe9 | DAT_01c5baec
    JZ 0x00480171                       ; 0047fff0
        ;   XREF to: 00480171 (CONDITIONAL_JUMP)  ; LAB_00480171
    CMP dword ptr [0x01c5baec],0x0      ; 0047fff6 | DAT_01c5baec
    JZ 0x0048015c                       ; 0047fffd
        ;   XREF to: 0048015c (CONDITIONAL_JUMP)  ; LAB_0048015c
    AND EAX,0xff                        ; 00480003
    MOV EDX,EAX                         ; 00480008
    SHL EAX,0x2                         ; 0048000a
    SUB EAX,EDX                         ; 0048000d
    XOR EDX,EDX                         ; 0048000f
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 00480011 | DAT_01c6af99
    MOV ECX,EDX                         ; 00480017
    XOR EDX,EDX                         ; 00480019
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0048001b | DAT_01c6af98
    SHL ECX,0x8                         ; 00480021
    SHL EDX,0x10                        ; 00480024
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00480027 | DAT_01c6af9a
    OR EDX,ECX                          ; 0048002d
    AND EAX,0xff                        ; 0048002f
    OR EAX,EDX                          ; 00480034
    PUSH EAX                            ; 00480036
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00480037
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0048003c
    LEA EAX,[EDI + 0x1]                 ; 0048003f
        ;   Label: LAB_0048003f
    PUSH EAX                            ; 00480042
    MOV EAX,dword ptr [ESP + 0x30]      ; 00480043
    INC EAX                             ; 00480047
    PUSH EAX                            ; 00480048
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00480049
    DEC EAX                             ; 0048004d
    PUSH EAX                            ; 0048004e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048004f
    DEC EAX                             ; 00480053
    PUSH EAX                            ; 00480054
    CALL engine_mini3d.cpp_FUN_004f3a60 ; 00480055
        ;   XREF to: 004f3a60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3a60()
    MOV ECX,dword ptr [0x01c5baec]      ; 0048005a | DAT_01c5baec
    ADD ESP,0x10                        ; 00480060
    TEST ECX,ECX                        ; 00480063
    JZ 0x00480166                       ; 00480065
        ;   XREF to: 00480166 (CONDITIONAL_JUMP)  ; LAB_00480166
    MOV EDX,ESI                         ; 0048006b
    AND EDX,0xff                        ; 0048006d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00480073
    SUB EAX,EDX                         ; 0048007a
    XOR EDX,EDX                         ; 0048007c
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0048007e | DAT_01c6af99
    MOV ECX,EDX                         ; 00480084
    XOR EDX,EDX                         ; 00480086
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 00480088 | DAT_01c6af98
    SHL ECX,0x8                         ; 0048008e
    SHL EDX,0x10                        ; 00480091
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00480094 | DAT_01c6af9a
    OR EDX,ECX                          ; 0048009a
    AND EAX,0xff                        ; 0048009c
    OR EAX,EDX                          ; 004800a1
    PUSH EAX                            ; 004800a3
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004800a4
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004800a9
    PUSH EDI                            ; 004800ac
        ;   Label: LAB_004800ac
    MOV ESI,dword ptr [ESP + 0x30]      ; 004800ad
    PUSH ESI                            ; 004800b1
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004800b2
    PUSH EDI                            ; 004800b6
    MOV EBP,dword ptr [ESP + 0x34]      ; 004800b7
    PUSH EBP                            ; 004800bb
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 004800bc
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 004800c1
    MOV EDX,dword ptr [0x01c5baec]      ; 004800c4 | DAT_01c5baec
        ;   Label: LAB_004800c4
    MOV EAX,[0x01c5baf8]                ; 004800ca | DAT_01c5baf8
    TEST EDX,EDX                        ; 004800cf
    JZ 0x00480186                       ; 004800d1
        ;   XREF to: 00480186 (CONDITIONAL_JUMP)  ; LAB_00480186
    AND EAX,0xff                        ; 004800d7
    MOV EDX,EAX                         ; 004800dc
    SHL EAX,0x2                         ; 004800de
    SUB EAX,EDX                         ; 004800e1
    XOR EDX,EDX                         ; 004800e3
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 004800e5 | DAT_01c6af99
    MOV ECX,EDX                         ; 004800eb
    XOR EDX,EDX                         ; 004800ed
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 004800ef | DAT_01c6af98
    SHL ECX,0x8                         ; 004800f5
    SHL EDX,0x10                        ; 004800f8
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004800fb | DAT_01c6af9a
    OR EDX,ECX                          ; 00480101
    AND EAX,0xff                        ; 00480103
    OR EAX,EDX                          ; 00480108
    PUSH EAX                            ; 0048010a
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0048010b
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 00480110
    MOV ESI,dword ptr [0x01c5baec]      ; 00480113 | DAT_01c5baec
        ;   Label: LAB_00480113
    MOV EDX,dword ptr [EBX + 0xc]       ; 00480119
    MOV ECX,dword ptr [EBX + 0x8]       ; 0048011c
    MOV EAX,dword ptr [EBX]             ; 0048011f
    DEC EDX                             ; 00480121
    DEC ECX                             ; 00480122
    TEST ESI,ESI                        ; 00480123
    JZ 0x0048018d                       ; 00480125
        ;   XREF to: 0048018d (CONDITIONAL_JUMP)  ; LAB_0048018d
    PUSH ECX                            ; 00480127
    PUSH EDX                            ; 00480128
    PUSH EAX                            ; 00480129
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 0048012a
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 0048012f
        ;   Label: LAB_0048012f
    MOV EDI,dword ptr [0x01c5baec]      ; 00480132 | DAT_01c5baec
    MOV EAX,dword ptr [EBX + 0x8]       ; 00480138
    MOV ECX,dword ptr [EBX + 0xc]       ; 0048013b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0048013e
    DEC EAX                             ; 00480141
    DEC ECX                             ; 00480142
    TEST EDI,EDI                        ; 00480143
    JZ 0x00480197                       ; 00480145
        ;   XREF to: 00480197 (CONDITIONAL_JUMP)  ; LAB_00480197
    PUSH ECX                            ; 00480147
    PUSH EDX                            ; 00480148
    PUSH EAX                            ; 00480149
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 0048014a
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 0048014f
    CALL engine_matrix.c_popViewport_FUN_004e6c50 ; 00480152
        ;   XREF to: 004e6c50 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004e6c50()
    JMP 0x0047fcd2                      ; 00480157
        ;   XREF to: 0047fcd2 (UNCONDITIONAL_JUMP)  ; LAB_0047fcd2
    MOV [0x01c6b5c0],EAX                ; 0048015c | DAT_01c6b5c0
        ;   Label: LAB_0048015c
    JMP 0x0048003f                      ; 00480161
        ;   XREF to: 0048003f (UNCONDITIONAL_JUMP)  ; LAB_0048003f
    MOV dword ptr [0x01c6b5c0],ESI      ; 00480166 | DAT_01c6b5c0
        ;   Label: LAB_00480166
    JMP 0x004800ac                      ; 0048016c
        ;   XREF to: 004800ac (UNCONDITIONAL_JUMP)  ; LAB_004800ac
    PUSH EAX                            ; 00480171
        ;   Label: LAB_00480171
    PUSH ESI                            ; 00480172
    MOV EAX,EDI                         ; 00480173
    PUSH EAX                            ; 00480175
    PUSH EDX                            ; 00480176
    PUSH EBP                            ; 00480177
    PUSH ECX                            ; 00480178
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 00480179
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0048017e
    JMP 0x004800c4                      ; 00480181
        ;   XREF to: 004800c4 (UNCONDITIONAL_JUMP)  ; LAB_004800c4
    MOV [0x01c6b5c0],EAX                ; 00480186 | DAT_01c6b5c0
        ;   Label: LAB_00480186
    JMP 0x00480113                      ; 0048018b
        ;   XREF to: 00480113 (UNCONDITIONAL_JUMP)  ; LAB_00480113
    PUSH ECX                            ; 0048018d
        ;   Label: LAB_0048018d
    PUSH EDX                            ; 0048018e
    PUSH EAX                            ; 0048018f
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00480190
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0048012f                      ; 00480195
        ;   XREF to: 0048012f (UNCONDITIONAL_JUMP)  ; LAB_0048012f
    PUSH ECX                            ; 00480197
        ;   Label: LAB_00480197
    PUSH EDX                            ; 00480198
    PUSH EAX                            ; 00480199
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0048019a
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0048019f
    CALL engine_matrix.c_popViewport_FUN_004e6c50 ; 004801a2
        ;   XREF to: 004e6c50 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004e6c50()
    JMP 0x0047fcd2                      ; 004801a7
        ;   XREF to: 0047fcd2 (UNCONDITIONAL_JUMP)  ; LAB_0047fcd2
    MOV [0x01c6b5c0],EAX                ; 004801ac | DAT_01c6b5c0
        ;   Label: LAB_004801ac
    JMP 0x0047fd94                      ; 004801b1
        ;   XREF to: 0047fd94 (UNCONDITIONAL_JUMP)  ; LAB_0047fd94
    PUSH EAX                            ; 004801b6
        ;   Label: LAB_004801b6
    PUSH EDI                            ; 004801b7
    PUSH ESI                            ; 004801b8
    PUSH ECX                            ; 004801b9
    PUSH EDX                            ; 004801ba
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004801bb
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004801c0
    JMP 0x0047fdac                      ; 004801c3
        ;   XREF to: 0047fdac (UNCONDITIONAL_JUMP)  ; LAB_0047fdac
    MOV [0x01c6b5c0],EAX                ; 004801c8 | DAT_01c6b5c0
        ;   Label: LAB_004801c8
    JMP 0x0047fea1                      ; 004801cd
        ;   XREF to: 0047fea1 (UNCONDITIONAL_JUMP)  ; LAB_0047fea1
    PUSH EAX                            ; 004801d2
        ;   Label: LAB_004801d2
    PUSH ESI                            ; 004801d3
    PUSH EDX                            ; 004801d4
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004801d5
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047fec0                      ; 004801da
        ;   XREF to: 0047fec0 (UNCONDITIONAL_JUMP)  ; LAB_0047fec0
    MOV dword ptr [0x01c6b5c0],EDI      ; 004801df | DAT_01c6b5c0
        ;   Label: LAB_004801df
    JMP 0x0047ff1d                      ; 004801e5
        ;   XREF to: 0047ff1d (UNCONDITIONAL_JUMP)  ; LAB_0047ff1d
    PUSH EDX                            ; 004801ea
        ;   Label: LAB_004801ea
    PUSH ESI                            ; 004801eb
    PUSH EAX                            ; 004801ec
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004801ed
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047ff3d                      ; 004801f2
        ;   XREF to: 0047ff3d (UNCONDITIONAL_JUMP)  ; LAB_0047ff3d

