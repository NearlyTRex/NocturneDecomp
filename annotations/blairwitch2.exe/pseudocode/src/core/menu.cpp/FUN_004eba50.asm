; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_004eba50(int *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dcb3d
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141b8
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;   shape_edittool.cpp_FUN_0047e760
;   shape_edittool.cpp_FUN_0047e870
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;   wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eba50
        ;   Label: core_menu.cpp_FUN_004eba50
    PUSH ESI                            ; 004eba51
    PUSH EDI                            ; 004eba52
    PUSH EBP                            ; 004eba53
    MOV EBP,ESP                         ; 004eba54
    SUB ESP,0x10                        ; 004eba56
    AND ESP,0xfffffff8                  ; 004eba59
    PUSH 0x0                            ; 004eba5c
    MOV EDX,dword ptr [EBP + 0x18]      ; 004eba5e
    PUSH EDX                            ; 004eba61
    MOV EDX,dword ptr [0x006141b8]      ; 004eba62 | DAT_006141b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004eba68
    SUB EAX,EDX                         ; 004eba6f
    MOV EDX,EAX                         ; 004eba71
    SAR EDX,0x1f                        ; 004eba73
    SHL EDX,0x2                         ; 004eba76
    SBB EAX,EDX                         ; 004eba79
    SAR EAX,0x2                         ; 004eba7b
    PUSH 0x2c                           ; 004eba7e
    PUSH EAX                            ; 004eba80
    MOV ECX,dword ptr [0x006138e0]      ; 004eba81 | g_CEditorToolsPtr
    PUSH ECX                            ; 004eba87
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 004eba88
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004eba8d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eba90
    MOV EBX,dword ptr [EAX]             ; 004eba93
    CMP EBX,0x3fff                      ; 004eba95
    JL 0x004ebc9b                       ; 004eba9b
        ;   XREF to: 004ebc9b (CONDITIONAL_JUMP)  ; LAB_004ebc9b
    CMP EBX,0xffff                      ; 004ebaa1
    JLE 0x004ebca6                      ; 004ebaa7
        ;   XREF to: 004ebca6 (CONDITIONAL_JUMP)  ; LAB_004ebca6
    MOV dword ptr [EAX],0xffff          ; 004ebaad
        ;   Label: LAB_004ebaad
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ebab3
        ;   Label: LAB_004ebab3
    MOV EBX,0xc000                      ; 004ebab6
    MOV ESI,dword ptr [ESI]             ; 004ebabb
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004ebabd
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV ECX,dword ptr [0x01c2a380]      ; 004ebac2 | DAT_01c2a380
    MOV EAX,[0x006141b8]                ; 004ebac8 | DAT_006141b8
    PUSH ECX                            ; 004ebacd
    LEA EDX,[ESI + 0xffffc001]          ; 004ebace
    DEC EAX                             ; 004ebad4
    IMUL EDX                            ; 004ebad5
    IDIV EBX                            ; 004ebad7
    PUSH EAX                            ; 004ebad9
    CALL wincore_winrun.cpp_setCursorPosition_FUN_0058ed10 ; 004ebada
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_0058ed10(int x, int y)
    XOR EBX,EBX                         ; 004ebadf
    ADD ESP,0x8                         ; 004ebae1
    MOV dword ptr [ESP + 0x8],EBX       ; 004ebae4
    MOV EDI,dword ptr [0x006138e0]      ; 004ebae8 | g_CEditorToolsPtr
        ;   Label: LAB_004ebae8
    PUSH EDI                            ; 004ebaee
    CALL shape_edittool.cpp_FUN_0047e870 ; 004ebaef
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 004ebaf4
    MOV EDX,dword ptr [0x01c2a37c]      ; 004ebaf7 | DAT_01c2a37c
    CMP EDX,dword ptr [ESP + 0x8]       ; 004ebafd
    JZ 0x004ebb24                       ; 004ebb01
        ;   XREF to: 004ebb24 (CONDITIONAL_JUMP)  ; LAB_004ebb24
    MOV EBX,dword ptr [0x006141b8]      ; 004ebb03 | DAT_006141b8
    MOV EAX,EDX                         ; 004ebb09
    MOV EDX,0xc000                      ; 004ebb0b
    DEC EBX                             ; 004ebb10
    IMUL EDX                            ; 004ebb11
    IDIV EBX                            ; 004ebb13
    LEA ESI,[EAX + 0x3fff]              ; 004ebb15
    MOV EAX,[0x01c2a37c]                ; 004ebb1b | DAT_01c2a37c
    MOV dword ptr [ESP + 0x8],EAX       ; 004ebb20
    PUSH 0x4b                           ; 004ebb24
        ;   Label: LAB_004ebb24
    MOV EAX,[0x00617dd4]                ; 004ebb26 | DAT_00617dd4
    PUSH EAX                            ; 004ebb2b
    MOV EDX,dword ptr [EAX]             ; 004ebb2c
    CALL dword ptr [EDX + 0x4]          ; 004ebb2e
    ADD ESP,0x8                         ; 004ebb31
    TEST EAX,EAX                        ; 004ebb34
    JZ 0x004ebb3e                       ; 004ebb36
        ;   XREF to: 004ebb3e (CONDITIONAL_JUMP)  ; LAB_004ebb3e
    SUB ESI,0x2bc                       ; 004ebb38
    PUSH 0x4d                           ; 004ebb3e
        ;   Label: LAB_004ebb3e
    MOV EAX,[0x00617dd4]                ; 004ebb40 | DAT_00617dd4
    PUSH EAX                            ; 004ebb45
    MOV EDX,dword ptr [EAX]             ; 004ebb46
    CALL dword ptr [EDX + 0x4]          ; 004ebb48
    ADD ESP,0x8                         ; 004ebb4b
    TEST EAX,EAX                        ; 004ebb4e
    JZ 0x004ebb58                       ; 004ebb50
        ;   XREF to: 004ebb58 (CONDITIONAL_JUMP)  ; LAB_004ebb58
    ADD ESI,0x2bc                       ; 004ebb52
    CMP ESI,0x3fff                      ; 004ebb58
        ;   Label: LAB_004ebb58
    JGE 0x004ebcca                      ; 004ebb5e
        ;   XREF to: 004ebcca (CONDITIONAL_JUMP)  ; LAB_004ebcca
    MOV ESI,0x3fff                      ; 004ebb64
    MOV EAX,[0x01c35e4c]                ; 004ebb69 | DAT_01c35e4c
        ;   Label: LAB_004ebb69
    INC EAX                             ; 004ebb6e
    PUSH 0xff                           ; 004ebb6f
    MOV dword ptr [ESP + 0x4],EAX       ; 004ebb74
    MOV EAX,[0x01c35e54]                ; 004ebb78 | DAT_01c35e54
    PUSH 0x0                            ; 004ebb7d
    DEC EAX                             ; 004ebb7f
    MOV EBX,dword ptr [0x01c35e50]      ; 004ebb80 | DAT_01c35e50
    PUSH EAX                            ; 004ebb86
    DEC EBX                             ; 004ebb87
    MOV dword ptr [ESP + 0x10],EAX      ; 004ebb88
    PUSH EBX                            ; 004ebb8c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ebb8d
    MOV EDI,dword ptr [0x01c35e48]      ; 004ebb91 | DAT_01c35e48
    PUSH EAX                            ; 004ebb97
    INC EDI                             ; 004ebb98
    PUSH EDI                            ; 004ebb99
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004ebb9a
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004ebb9f
    LEA EDX,[ESI + 0xffffc001]          ; 004ebba2
    MOV EAX,EBX                         ; 004ebba8
    MOV EBX,0xc000                      ; 004ebbaa
    SUB EAX,EDI                         ; 004ebbaf
    IMUL EDX                            ; 004ebbb1
    IDIV EBX                            ; 004ebbb3
    PUSH 0x4                            ; 004ebbb5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ebbb7
    PUSH EDX                            ; 004ebbbb
    ADD EAX,EDI                         ; 004ebbbc
    PUSH EAX                            ; 004ebbbe
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ebbbf
    PUSH ECX                            ; 004ebbc3
    PUSH EDI                            ; 004ebbc4
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004ebbc5
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004ebbca
    MOV dword ptr [ESP + 0xc],ESI       ; 004ebbcd
    FILD dword ptr [ESP + 0xc]          ; 004ebbd1
    FMUL double ptr [0x005dcb3d]        ; 004ebbd5 | DAT_005dcb3d
    SUB ESP,0x8                         ; 004ebbdb
    FSTP double ptr [ESP]               ; 004ebbde
    PUSH 0x5dcb35                       ; 004ebbe1
    PUSH 0x0                            ; 004ebbe6
    PUSH 0xff                           ; 004ebbe8
    MOV EDX,dword ptr [0x01c35e4c]      ; 004ebbed | DAT_01c35e4c
    PUSH 0x41                           ; 004ebbf3
    MOV EDI,dword ptr [0x01c25590]      ; 004ebbf5 | DAT_01c25590
    MOV EBX,dword ptr [0x01c35e54]      ; 004ebbfb | DAT_01c35e54
    PUSH EDI                            ; 004ebc01
    ADD EBX,EDX                         ; 004ebc02
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004ebc04
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV EDX,EBX                         ; 004ebc09
    SUB EDX,EAX                         ; 004ebc0b
    MOV EAX,EDX                         ; 004ebc0d
    SAR EDX,0x1f                        ; 004ebc0f
    SUB EAX,EDX                         ; 004ebc12
    SAR EAX,0x1                         ; 004ebc14
    ADD ESP,0x8                         ; 004ebc16
    PUSH EAX                            ; 004ebc19
    MOV EAX,[0x01c35e50]                ; 004ebc1a | DAT_01c35e50
    PUSH EAX                            ; 004ebc1f
    MOV EDX,dword ptr [0x01c35e48]      ; 004ebc20 | DAT_01c35e48
    PUSH EDX                            ; 004ebc26
    MOV ECX,dword ptr [0x01c25590]      ; 004ebc27 | DAT_01c25590
    PUSH ECX                            ; 004ebc2d
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0 ; 004ebc2e
        ;   XREF to: 004a93f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x24                        ; 004ebc33
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004ebc36
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    PUSH 0x1                            ; 004ebc3b
    MOV EAX,[0x00617dd4]                ; 004ebc3d | DAT_00617dd4
    PUSH EAX                            ; 004ebc42
    MOV EDX,dword ptr [EAX]             ; 004ebc43
    CALL dword ptr [EDX + 0x4]          ; 004ebc45
    ADD ESP,0x8                         ; 004ebc48
    TEST EAX,EAX                        ; 004ebc4b
    JNZ 0x004ebc85                      ; 004ebc4d
        ;   XREF to: 004ebc85 (CONDITIONAL_JUMP)  ; LAB_004ebc85
    PUSH 0x1c                           ; 004ebc4f
    MOV EDX,dword ptr [0x00617dd4]      ; 004ebc51 | DAT_00617dd4
    PUSH EDX                            ; 004ebc57
    MOV EAX,dword ptr [EDX]             ; 004ebc58
    CALL dword ptr [EAX + 0x4]          ; 004ebc5a
    ADD ESP,0x8                         ; 004ebc5d
    TEST EAX,EAX                        ; 004ebc60
    JNZ 0x004ebc80                      ; 004ebc62
        ;   XREF to: 004ebc80 (CONDITIONAL_JUMP)  ; LAB_004ebc80
    PUSH 0x200                          ; 004ebc64
    MOV EDX,dword ptr [0x00617dd4]      ; 004ebc69 | DAT_00617dd4
    PUSH EDX                            ; 004ebc6f
    MOV EAX,dword ptr [EDX]             ; 004ebc70
    CALL dword ptr [EAX + 0x4]          ; 004ebc72
    ADD ESP,0x8                         ; 004ebc75
    TEST EAX,EAX                        ; 004ebc78
    JZ 0x004ebae8                       ; 004ebc7a
        ;   XREF to: 004ebae8 (CONDITIONAL_JUMP)  ; LAB_004ebae8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebc80
        ;   Label: LAB_004ebc80
    MOV dword ptr [EAX],ESI             ; 004ebc83
    MOV EBX,dword ptr [0x006138e0]      ; 004ebc85 | g_CEditorToolsPtr
        ;   Label: LAB_004ebc85
    PUSH EBX                            ; 004ebc8b
    CALL shape_edittool.cpp_FUN_0047e760 ; 004ebc8c
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 004ebc91
    MOV ESP,EBP                         ; 004ebc94
    POP EBP                             ; 004ebc96
    POP EDI                             ; 004ebc97
    POP ESI                             ; 004ebc98
    POP EBX                             ; 004ebc99
    RET                                 ; 004ebc9a
    MOV dword ptr [EAX],0x3fff          ; 004ebc9b
        ;   Label: LAB_004ebc9b
    JMP 0x004ebab3                      ; 004ebca1
        ;   XREF to: 004ebab3 (UNCONDITIONAL_JUMP)  ; LAB_004ebab3
    CMP EBX,0x3fff                      ; 004ebca6
        ;   Label: LAB_004ebca6
    JGE 0x004ebcb9                      ; 004ebcac
        ;   XREF to: 004ebcb9 (CONDITIONAL_JUMP)  ; LAB_004ebcb9
    MOV dword ptr [EAX],0x3fff          ; 004ebcae
    JMP 0x004ebab3                      ; 004ebcb4
        ;   XREF to: 004ebab3 (UNCONDITIONAL_JUMP)  ; LAB_004ebab3
    CMP EBX,0xffff                      ; 004ebcb9
        ;   Label: LAB_004ebcb9
    JLE 0x004ebab3                      ; 004ebcbf
        ;   XREF to: 004ebab3 (CONDITIONAL_JUMP)  ; LAB_004ebab3
    JMP 0x004ebaad                      ; 004ebcc5
        ;   XREF to: 004ebaad (UNCONDITIONAL_JUMP)  ; LAB_004ebaad
    CMP ESI,0xffff                      ; 004ebcca
        ;   Label: LAB_004ebcca
    JLE 0x004ebb69                      ; 004ebcd0
        ;   XREF to: 004ebb69 (CONDITIONAL_JUMP)  ; LAB_004ebb69
    MOV ESI,0xffff                      ; 004ebcd6
    JMP 0x004ebb69                      ; 004ebcdb
        ;   XREF to: 004ebb69 (UNCONDITIONAL_JUMP)  ; LAB_004ebb69

