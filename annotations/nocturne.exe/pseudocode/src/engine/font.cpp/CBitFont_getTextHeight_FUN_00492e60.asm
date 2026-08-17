; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont *this_ptr,char *text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
;
; XREF[10]:
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 at 004cf5db
;   shape_edittool.cpp_CEdButton_paint_FUN_00476f40 at 00476f80
;   shape_edittool.cpp_CEdCheck_render_FUN_00477390 at 004773ea
;   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004771f0 at 00477265
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 at 00471d39
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004722b0 at 00472446
;   shape_edittool.cpp_CEditorTools_showError_FUN_0046fcd0 at 0046fd8f
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0046fe60 at 0046ff1f
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0046fb40 at 0046fbff
;   shape_edittool.cpp_calculateButtonHeight_FUN_00477100 at 00477183
;
; Called Functions:
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492e60
        ;   Label: engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
    PUSH ESI                            ; 00492e61
    PUSH EDI                            ; 00492e62
    MOV EDI,dword ptr [ESP + 0x10]      ; 00492e63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00492e67
    CMP dword ptr [EDI + 0x3190],0x0    ; 00492e6b
    JNZ 0x00492ec8                      ; 00492e72
        ;   XREF to: 00492ec8 (CONDITIONAL_JUMP)  ; LAB_00492ec8
    MOV AH,byte ptr [EBX]               ; 00492e74
        ;   Label: LAB_00492e74
    XOR ESI,ESI                         ; 00492e76
    TEST AH,AH                          ; 00492e78
    JZ 0x00492f2a                       ; 00492e7a
        ;   XREF to: 00492f2a (CONDITIONAL_JUMP)  ; LAB_00492f2a
    MOV DH,byte ptr [EBX]               ; 00492e80
        ;   Label: LAB_00492e80
    CMP DH,0xa                          ; 00492e82
    JNZ 0x00492efc                      ; 00492e85
        ;   XREF to: 00492efc (CONDITIONAL_JUMP)  ; LAB_00492efc
    MOV DL,DH                           ; 00492e8b
    MOV ECX,dword ptr [EDI + 0x3170]    ; 00492e8d
    MOV ESI,dword ptr [EDI + 0x3178]    ; 00492e93
        ;   Label: LAB_00492e93
    ADD ESI,dword ptr [EDI + 0x3170]    ; 00492e99
    ADD ECX,ESI                         ; 00492e9f
    LEA ESI,[EBX + 0x1]                 ; 00492ea1
    MOV AL,byte ptr [ESI]               ; 00492ea4
        ;   Label: LAB_00492ea4
    CMP AL,DL                           ; 00492ea6
    JZ 0x00492ebc                       ; 00492ea8
        ;   XREF to: 00492ebc (CONDITIONAL_JUMP)  ; LAB_00492ebc
    CMP AL,0x0                          ; 00492eaa
    JZ 0x00492eba                       ; 00492eac
        ;   XREF to: 00492eba (CONDITIONAL_JUMP)  ; LAB_00492eba
    INC ESI                             ; 00492eae
    MOV AL,byte ptr [ESI]               ; 00492eaf
    CMP AL,DL                           ; 00492eb1
    JZ 0x00492ebc                       ; 00492eb3
        ;   XREF to: 00492ebc (CONDITIONAL_JUMP)  ; LAB_00492ebc
    INC ESI                             ; 00492eb5
    CMP AL,0x0                          ; 00492eb6
    JNZ 0x00492ea4                      ; 00492eb8
        ;   XREF to: 00492ea4 (CONDITIONAL_JUMP)  ; LAB_00492ea4
    SUB ESI,ESI                         ; 00492eba
        ;   Label: LAB_00492eba
    MOV EBX,ESI                         ; 00492ebc
        ;   Label: LAB_00492ebc
    TEST ESI,ESI                        ; 00492ebe
    JNZ 0x00492e93                      ; 00492ec0
        ;   XREF to: 00492e93 (CONDITIONAL_JUMP)  ; LAB_00492e93
    MOV EAX,ECX                         ; 00492ec2
    POP EDI                             ; 00492ec4
    POP ESI                             ; 00492ec5
    POP EBX                             ; 00492ec6
    RET                                 ; 00492ec7
    MOV DL,0xa                          ; 00492ec8
        ;   Label: LAB_00492ec8
    MOV ESI,EBX                         ; 00492eca
    MOV AL,byte ptr [ESI]               ; 00492ecc
        ;   Label: LAB_00492ecc
    CMP AL,DL                           ; 00492ece
    JZ 0x00492ee4                       ; 00492ed0
        ;   XREF to: 00492ee4 (CONDITIONAL_JUMP)  ; LAB_00492ee4
    CMP AL,0x0                          ; 00492ed2
    JZ 0x00492ee2                       ; 00492ed4
        ;   XREF to: 00492ee2 (CONDITIONAL_JUMP)  ; LAB_00492ee2
    INC ESI                             ; 00492ed6
    MOV AL,byte ptr [ESI]               ; 00492ed7
    CMP AL,DL                           ; 00492ed9
    JZ 0x00492ee4                       ; 00492edb
        ;   XREF to: 00492ee4 (CONDITIONAL_JUMP)  ; LAB_00492ee4
    INC ESI                             ; 00492edd
    CMP AL,0x0                          ; 00492ede
    JNZ 0x00492ecc                      ; 00492ee0
        ;   XREF to: 00492ecc (CONDITIONAL_JUMP)  ; LAB_00492ecc
    SUB ESI,ESI                         ; 00492ee2
        ;   Label: LAB_00492ee2
    TEST ESI,ESI                        ; 00492ee4
        ;   Label: LAB_00492ee4
    JNZ 0x00492e74                      ; 00492ee6
        ;   XREF to: 00492e74 (CONDITIONAL_JUMP)  ; LAB_00492e74
    PUSH EBX                            ; 00492ee8
    MOV EAX,dword ptr [EDI + 0x3194]    ; 00492ee9
    PUSH EAX                            ; 00492eef
    MOV ECX,dword ptr [EAX]             ; 00492ef0
    CALL dword ptr [ECX + 0xc]          ; 00492ef2
    ADD ESP,0x8                         ; 00492ef5
    POP EDI                             ; 00492ef8
    POP ESI                             ; 00492ef9
    POP EBX                             ; 00492efa
    RET                                 ; 00492efb
    XOR EAX,EAX                         ; 00492efc
        ;   Label: LAB_00492efc
    MOV AL,DH                           ; 00492efe
    PUSH EAX                            ; 00492f00
    PUSH EDI                            ; 00492f01
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00492f02
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00492f07
    CMP EAX,ESI                         ; 00492f0a
    JLE 0x00492f1e                      ; 00492f0c
        ;   XREF to: 00492f1e (CONDITIONAL_JUMP)  ; LAB_00492f1e
    XOR EAX,EAX                         ; 00492f0e
    MOV AL,byte ptr [EBX]               ; 00492f10
    PUSH EAX                            ; 00492f12
    PUSH EDI                            ; 00492f13
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00492f14
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00492f19
    MOV ESI,EAX                         ; 00492f1c
    MOV DL,byte ptr [EBX + 0x1]         ; 00492f1e
        ;   Label: LAB_00492f1e
    INC EBX                             ; 00492f21
    TEST DL,DL                          ; 00492f22
    JNZ 0x00492e80                      ; 00492f24
        ;   XREF to: 00492e80 (CONDITIONAL_JUMP)  ; LAB_00492e80
    MOV EAX,ESI                         ; 00492f2a
        ;   Label: LAB_00492f2a
    POP EDI                             ; 00492f2c
    POP ESI                             ; 00492f2d
    POP EBX                             ; 00492f2e
    RET                                 ; 00492f2f

