; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont *this_ptr,char *text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
;
; XREF[9]:
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20 at 00509fbb
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00496920 at 00496ab7
;   shape_edittool.cpp_FUN_00496ee0 at 0049727f
;   shape_edittool.cpp_FUN_0049d580 at 0049d5db
;   shape_edittool.cpp_FUN_0049d9e0 at 0049da63
;   shape_edittool.cpp_FUN_0049dace at 0049db45
;   shape_edittool.cpp_FUN_0049dc70 at 0049dcca
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493e0c
;   unkaddr_004b9ab0.cpp_FUN_004b9e30 at 004b9ed8
;
; Called Functions:
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3f50
        ;   Label: engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50
    PUSH ESI                            ; 004c3f51
    PUSH EDI                            ; 004c3f52
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c3f53
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c3f57
    CMP dword ptr [EDI + 0x4210],0x0    ; 004c3f5b
    JNZ 0x004c3fb8                      ; 004c3f62
        ;   XREF to: 004c3fb8 (CONDITIONAL_JUMP)  ; LAB_004c3fb8
    MOV AH,byte ptr [EBX]               ; 004c3f64
        ;   Label: LAB_004c3f64
    XOR ESI,ESI                         ; 004c3f66
    TEST AH,AH                          ; 004c3f68
    JZ 0x004c401e                       ; 004c3f6a
        ;   XREF to: 004c401e (CONDITIONAL_JUMP)  ; LAB_004c401e
    MOV DH,byte ptr [EBX]               ; 004c3f70
        ;   Label: LAB_004c3f70
    CMP DH,0xa                          ; 004c3f72
    JNZ 0x004c3ff0                      ; 004c3f75
        ;   XREF to: 004c3ff0 (CONDITIONAL_JUMP)  ; LAB_004c3ff0
    MOV DL,DH                           ; 004c3f7b
    MOV ECX,dword ptr [EDI + 0x41f0]    ; 004c3f7d
    MOV ESI,dword ptr [EDI + 0x41f8]    ; 004c3f83
        ;   Label: LAB_004c3f83
    ADD ESI,dword ptr [EDI + 0x41f0]    ; 004c3f89
    ADD ECX,ESI                         ; 004c3f8f
    LEA ESI,[EBX + 0x1]                 ; 004c3f91
    MOV AL,byte ptr [ESI]               ; 004c3f94
        ;   Label: LAB_004c3f94
    CMP AL,DL                           ; 004c3f96
    JZ 0x004c3fac                       ; 004c3f98
        ;   XREF to: 004c3fac (CONDITIONAL_JUMP)  ; LAB_004c3fac
    CMP AL,0x0                          ; 004c3f9a
    JZ 0x004c3faa                       ; 004c3f9c
        ;   XREF to: 004c3faa (CONDITIONAL_JUMP)  ; LAB_004c3faa
    INC ESI                             ; 004c3f9e
    MOV AL,byte ptr [ESI]               ; 004c3f9f
    CMP AL,DL                           ; 004c3fa1
    JZ 0x004c3fac                       ; 004c3fa3
        ;   XREF to: 004c3fac (CONDITIONAL_JUMP)  ; LAB_004c3fac
    INC ESI                             ; 004c3fa5
    CMP AL,0x0                          ; 004c3fa6
    JNZ 0x004c3f94                      ; 004c3fa8
        ;   XREF to: 004c3f94 (CONDITIONAL_JUMP)  ; LAB_004c3f94
    SUB ESI,ESI                         ; 004c3faa
        ;   Label: LAB_004c3faa
    MOV EBX,ESI                         ; 004c3fac
        ;   Label: LAB_004c3fac
    TEST ESI,ESI                        ; 004c3fae
    JNZ 0x004c3f83                      ; 004c3fb0
        ;   XREF to: 004c3f83 (CONDITIONAL_JUMP)  ; LAB_004c3f83
    MOV EAX,ECX                         ; 004c3fb2
    POP EDI                             ; 004c3fb4
    POP ESI                             ; 004c3fb5
    POP EBX                             ; 004c3fb6
    RET                                 ; 004c3fb7
    MOV DL,0xa                          ; 004c3fb8
        ;   Label: LAB_004c3fb8
    MOV ESI,EBX                         ; 004c3fba
    MOV AL,byte ptr [ESI]               ; 004c3fbc
        ;   Label: LAB_004c3fbc
    CMP AL,DL                           ; 004c3fbe
    JZ 0x004c3fd4                       ; 004c3fc0
        ;   XREF to: 004c3fd4 (CONDITIONAL_JUMP)  ; LAB_004c3fd4
    CMP AL,0x0                          ; 004c3fc2
    JZ 0x004c3fd2                       ; 004c3fc4
        ;   XREF to: 004c3fd2 (CONDITIONAL_JUMP)  ; LAB_004c3fd2
    INC ESI                             ; 004c3fc6
    MOV AL,byte ptr [ESI]               ; 004c3fc7
    CMP AL,DL                           ; 004c3fc9
    JZ 0x004c3fd4                       ; 004c3fcb
        ;   XREF to: 004c3fd4 (CONDITIONAL_JUMP)  ; LAB_004c3fd4
    INC ESI                             ; 004c3fcd
    CMP AL,0x0                          ; 004c3fce
    JNZ 0x004c3fbc                      ; 004c3fd0
        ;   XREF to: 004c3fbc (CONDITIONAL_JUMP)  ; LAB_004c3fbc
    SUB ESI,ESI                         ; 004c3fd2
        ;   Label: LAB_004c3fd2
    TEST ESI,ESI                        ; 004c3fd4
        ;   Label: LAB_004c3fd4
    JNZ 0x004c3f64                      ; 004c3fd6
        ;   XREF to: 004c3f64 (CONDITIONAL_JUMP)  ; LAB_004c3f64
    PUSH EBX                            ; 004c3fd8
    MOV EAX,dword ptr [EDI + 0x4214]    ; 004c3fd9
    PUSH EAX                            ; 004c3fdf
    MOV ECX,dword ptr [EAX + 0x6a44]    ; 004c3fe0
    CALL dword ptr [ECX + 0xc]          ; 004c3fe6
    ADD ESP,0x8                         ; 004c3fe9
    POP EDI                             ; 004c3fec
    POP ESI                             ; 004c3fed
    POP EBX                             ; 004c3fee
    RET                                 ; 004c3fef
    XOR EAX,EAX                         ; 004c3ff0
        ;   Label: LAB_004c3ff0
    MOV AL,DH                           ; 004c3ff2
    PUSH EAX                            ; 004c3ff4
    PUSH EDI                            ; 004c3ff5
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004c3ff6
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004c3ffb
    CMP EAX,ESI                         ; 004c3ffe
    JLE 0x004c4012                      ; 004c4000
        ;   XREF to: 004c4012 (CONDITIONAL_JUMP)  ; LAB_004c4012
    XOR EAX,EAX                         ; 004c4002
    MOV AL,byte ptr [EBX]               ; 004c4004
    PUSH EAX                            ; 004c4006
    PUSH EDI                            ; 004c4007
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004c4008
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004c400d
    MOV ESI,EAX                         ; 004c4010
    MOV DL,byte ptr [EBX + 0x1]         ; 004c4012
        ;   Label: LAB_004c4012
    INC EBX                             ; 004c4015
    TEST DL,DL                          ; 004c4016
    JNZ 0x004c3f70                      ; 004c4018
        ;   XREF to: 004c3f70 (CONDITIONAL_JUMP)  ; LAB_004c3f70
    MOV EAX,ESI                         ; 004c401e
        ;   Label: LAB_004c401e
    POP EDI                             ; 004c4020
    POP ESI                             ; 004c4021
    POP EBX                             ; 004c4022
    RET                                 ; 004c4023

