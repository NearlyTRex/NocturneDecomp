; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont *this_ptr,char *text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
;
; XREF[10]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507552
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507167
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 at 005103a9
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 at 004a663b
;   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 at 004a6c5a
;   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 at 004a6ad5
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 at 004a0b07
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a11ab
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 at 004a69f3
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e1fc
;
; Called Functions:
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cff40
        ;   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
    PUSH ESI                            ; 004cff41
    PUSH EDI                            ; 004cff42
    MOV EDI,dword ptr [ESP + 0x10]      ; 004cff43
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cff47
    CMP dword ptr [EDI + 0x3190],0x0    ; 004cff4b
    JNZ 0x004cffa8                      ; 004cff52
        ;   XREF to: 004cffa8 (CONDITIONAL_JUMP)  ; LAB_004cffa8
    MOV AH,byte ptr [EBX]               ; 004cff54
        ;   Label: LAB_004cff54
    XOR ESI,ESI                         ; 004cff56
    TEST AH,AH                          ; 004cff58
    JZ 0x004d000a                       ; 004cff5a
        ;   XREF to: 004d000a (CONDITIONAL_JUMP)  ; LAB_004d000a
    MOV DH,byte ptr [EBX]               ; 004cff60
        ;   Label: LAB_004cff60
    CMP DH,0xa                          ; 004cff62
    JNZ 0x004cffdc                      ; 004cff65
        ;   XREF to: 004cffdc (CONDITIONAL_JUMP)  ; LAB_004cffdc
    MOV DL,DH                           ; 004cff6b
    MOV ECX,dword ptr [EDI + 0x3170]    ; 004cff6d
    MOV ESI,dword ptr [EDI + 0x3178]    ; 004cff73
        ;   Label: LAB_004cff73
    ADD ESI,dword ptr [EDI + 0x3170]    ; 004cff79
    ADD ECX,ESI                         ; 004cff7f
    LEA ESI,[EBX + 0x1]                 ; 004cff81
    MOV AL,byte ptr [ESI]               ; 004cff84
        ;   Label: LAB_004cff84
    CMP AL,DL                           ; 004cff86
    JZ 0x004cff9c                       ; 004cff88
        ;   XREF to: 004cff9c (CONDITIONAL_JUMP)  ; LAB_004cff9c
    CMP AL,0x0                          ; 004cff8a
    JZ 0x004cff9a                       ; 004cff8c
        ;   XREF to: 004cff9a (CONDITIONAL_JUMP)  ; LAB_004cff9a
    INC ESI                             ; 004cff8e
    MOV AL,byte ptr [ESI]               ; 004cff8f
    CMP AL,DL                           ; 004cff91
    JZ 0x004cff9c                       ; 004cff93
        ;   XREF to: 004cff9c (CONDITIONAL_JUMP)  ; LAB_004cff9c
    INC ESI                             ; 004cff95
    CMP AL,0x0                          ; 004cff96
    JNZ 0x004cff84                      ; 004cff98
        ;   XREF to: 004cff84 (CONDITIONAL_JUMP)  ; LAB_004cff84
    SUB ESI,ESI                         ; 004cff9a
        ;   Label: LAB_004cff9a
    MOV EBX,ESI                         ; 004cff9c
        ;   Label: LAB_004cff9c
    TEST ESI,ESI                        ; 004cff9e
    JNZ 0x004cff73                      ; 004cffa0
        ;   XREF to: 004cff73 (CONDITIONAL_JUMP)  ; LAB_004cff73
    MOV EAX,ECX                         ; 004cffa2
    POP EDI                             ; 004cffa4
    POP ESI                             ; 004cffa5
    POP EBX                             ; 004cffa6
    RET                                 ; 004cffa7
    MOV DL,0xa                          ; 004cffa8
        ;   Label: LAB_004cffa8
    MOV ESI,EBX                         ; 004cffaa
    MOV AL,byte ptr [ESI]               ; 004cffac
        ;   Label: LAB_004cffac
    CMP AL,DL                           ; 004cffae
    JZ 0x004cffc4                       ; 004cffb0
        ;   XREF to: 004cffc4 (CONDITIONAL_JUMP)  ; LAB_004cffc4
    CMP AL,0x0                          ; 004cffb2
    JZ 0x004cffc2                       ; 004cffb4
        ;   XREF to: 004cffc2 (CONDITIONAL_JUMP)  ; LAB_004cffc2
    INC ESI                             ; 004cffb6
    MOV AL,byte ptr [ESI]               ; 004cffb7
    CMP AL,DL                           ; 004cffb9
    JZ 0x004cffc4                       ; 004cffbb
        ;   XREF to: 004cffc4 (CONDITIONAL_JUMP)  ; LAB_004cffc4
    INC ESI                             ; 004cffbd
    CMP AL,0x0                          ; 004cffbe
    JNZ 0x004cffac                      ; 004cffc0
        ;   XREF to: 004cffac (CONDITIONAL_JUMP)  ; LAB_004cffac
    SUB ESI,ESI                         ; 004cffc2
        ;   Label: LAB_004cffc2
    TEST ESI,ESI                        ; 004cffc4
        ;   Label: LAB_004cffc4
    JNZ 0x004cff54                      ; 004cffc6
        ;   XREF to: 004cff54 (CONDITIONAL_JUMP)  ; LAB_004cff54
    PUSH EBX                            ; 004cffc8
    MOV EAX,dword ptr [EDI + 0x3194]    ; 004cffc9
    PUSH EAX                            ; 004cffcf
    MOV ECX,dword ptr [EAX]             ; 004cffd0
    CALL dword ptr [ECX + 0xc]          ; 004cffd2
    ADD ESP,0x8                         ; 004cffd5
    POP EDI                             ; 004cffd8
    POP ESI                             ; 004cffd9
    POP EBX                             ; 004cffda
    RET                                 ; 004cffdb
    XOR EAX,EAX                         ; 004cffdc
        ;   Label: LAB_004cffdc
    MOV AL,DH                           ; 004cffde
    PUSH EAX                            ; 004cffe0
    PUSH EDI                            ; 004cffe1
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004cffe2
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004cffe7
    CMP EAX,ESI                         ; 004cffea
    JLE 0x004cfffe                      ; 004cffec
        ;   XREF to: 004cfffe (CONDITIONAL_JUMP)  ; LAB_004cfffe
    XOR EAX,EAX                         ; 004cffee
    MOV AL,byte ptr [EBX]               ; 004cfff0
    PUSH EAX                            ; 004cfff2
    PUSH EDI                            ; 004cfff3
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004cfff4
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004cfff9
    MOV ESI,EAX                         ; 004cfffc
    MOV DL,byte ptr [EBX + 0x1]         ; 004cfffe
        ;   Label: LAB_004cfffe
    INC EBX                             ; 004d0001
    TEST DL,DL                          ; 004d0002
    JNZ 0x004cff60                      ; 004d0004
        ;   XREF to: 004cff60 (CONDITIONAL_JUMP)  ; LAB_004cff60
    MOV EAX,ESI                         ; 004d000a
        ;   Label: LAB_004d000a
    POP EDI                             ; 004d000c
    POP ESI                             ; 004d000d
    POP EBX                             ; 004d000e
    RET                                 ; 004d000f

