; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004b2b30(CBitFont *this_ptr,char *text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
;
; XREF[9]:
;   core_menu.cpp_FUN_004e7860 at 004e7a76
;   shape_edittool.cpp_FUN_0047f4c0 at 0047f657
;   shape_edittool.cpp_FUN_0047fa80 at 0047fe1f
;   shape_edittool.cpp_FUN_00486120 at 0048617b
;   shape_edittool.cpp_FUN_00486580 at 00486603
;   shape_edittool.cpp_FUN_0048666e at 004866e5
;   shape_edittool.cpp_FUN_00486810 at 0048686a
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047c9ac
;   unkaddr_004a76f0.cpp_FUN_004a7a70 at 004a7b18
;
; Called Functions:
;   engine_font.cpp_FUN_004b30f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2b30
        ;   Label: engine_font.cpp_FUN_004b2b30
    PUSH ESI                            ; 004b2b31
    PUSH EDI                            ; 004b2b32
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b2b33
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b2b37
    CMP dword ptr [EDI + 0x4210],0x0    ; 004b2b3b
    JNZ 0x004b2b98                      ; 004b2b42
        ;   XREF to: 004b2b98 (CONDITIONAL_JUMP)  ; LAB_004b2b98
    MOV AH,byte ptr [EBX]               ; 004b2b44
        ;   Label: LAB_004b2b44
    XOR ESI,ESI                         ; 004b2b46
    TEST AH,AH                          ; 004b2b48
    JZ 0x004b2bfe                       ; 004b2b4a
        ;   XREF to: 004b2bfe (CONDITIONAL_JUMP)  ; LAB_004b2bfe
    MOV DH,byte ptr [EBX]               ; 004b2b50
        ;   Label: LAB_004b2b50
    CMP DH,0xa                          ; 004b2b52
    JNZ 0x004b2bd0                      ; 004b2b55
        ;   XREF to: 004b2bd0 (CONDITIONAL_JUMP)  ; LAB_004b2bd0
    MOV DL,DH                           ; 004b2b5b
    MOV ECX,dword ptr [EDI + 0x41f0]    ; 004b2b5d
    MOV ESI,dword ptr [EDI + 0x41f8]    ; 004b2b63
        ;   Label: LAB_004b2b63
    ADD ESI,dword ptr [EDI + 0x41f0]    ; 004b2b69
    ADD ECX,ESI                         ; 004b2b6f
    LEA ESI,[EBX + 0x1]                 ; 004b2b71
    MOV AL,byte ptr [ESI]               ; 004b2b74
        ;   Label: LAB_004b2b74
    CMP AL,DL                           ; 004b2b76
    JZ 0x004b2b8c                       ; 004b2b78
        ;   XREF to: 004b2b8c (CONDITIONAL_JUMP)  ; LAB_004b2b8c
    CMP AL,0x0                          ; 004b2b7a
    JZ 0x004b2b8a                       ; 004b2b7c
        ;   XREF to: 004b2b8a (CONDITIONAL_JUMP)  ; LAB_004b2b8a
    INC ESI                             ; 004b2b7e
    MOV AL,byte ptr [ESI]               ; 004b2b7f
    CMP AL,DL                           ; 004b2b81
    JZ 0x004b2b8c                       ; 004b2b83
        ;   XREF to: 004b2b8c (CONDITIONAL_JUMP)  ; LAB_004b2b8c
    INC ESI                             ; 004b2b85
    CMP AL,0x0                          ; 004b2b86
    JNZ 0x004b2b74                      ; 004b2b88
        ;   XREF to: 004b2b74 (CONDITIONAL_JUMP)  ; LAB_004b2b74
    SUB ESI,ESI                         ; 004b2b8a
        ;   Label: LAB_004b2b8a
    MOV EBX,ESI                         ; 004b2b8c
        ;   Label: LAB_004b2b8c
    TEST ESI,ESI                        ; 004b2b8e
    JNZ 0x004b2b63                      ; 004b2b90
        ;   XREF to: 004b2b63 (CONDITIONAL_JUMP)  ; LAB_004b2b63
    MOV EAX,ECX                         ; 004b2b92
    POP EDI                             ; 004b2b94
    POP ESI                             ; 004b2b95
    POP EBX                             ; 004b2b96
    RET                                 ; 004b2b97
    MOV DL,0xa                          ; 004b2b98
        ;   Label: LAB_004b2b98
    MOV ESI,EBX                         ; 004b2b9a
    MOV AL,byte ptr [ESI]               ; 004b2b9c
        ;   Label: LAB_004b2b9c
    CMP AL,DL                           ; 004b2b9e
    JZ 0x004b2bb4                       ; 004b2ba0
        ;   XREF to: 004b2bb4 (CONDITIONAL_JUMP)  ; LAB_004b2bb4
    CMP AL,0x0                          ; 004b2ba2
    JZ 0x004b2bb2                       ; 004b2ba4
        ;   XREF to: 004b2bb2 (CONDITIONAL_JUMP)  ; LAB_004b2bb2
    INC ESI                             ; 004b2ba6
    MOV AL,byte ptr [ESI]               ; 004b2ba7
    CMP AL,DL                           ; 004b2ba9
    JZ 0x004b2bb4                       ; 004b2bab
        ;   XREF to: 004b2bb4 (CONDITIONAL_JUMP)  ; LAB_004b2bb4
    INC ESI                             ; 004b2bad
    CMP AL,0x0                          ; 004b2bae
    JNZ 0x004b2b9c                      ; 004b2bb0
        ;   XREF to: 004b2b9c (CONDITIONAL_JUMP)  ; LAB_004b2b9c
    SUB ESI,ESI                         ; 004b2bb2
        ;   Label: LAB_004b2bb2
    TEST ESI,ESI                        ; 004b2bb4
        ;   Label: LAB_004b2bb4
    JNZ 0x004b2b44                      ; 004b2bb6
        ;   XREF to: 004b2b44 (CONDITIONAL_JUMP)  ; LAB_004b2b44
    PUSH EBX                            ; 004b2bb8
    MOV EAX,dword ptr [EDI + 0x4214]    ; 004b2bb9
    PUSH EAX                            ; 004b2bbf
    MOV ECX,dword ptr [EAX + 0x6a44]    ; 004b2bc0
    CALL dword ptr [ECX + 0xc]          ; 004b2bc6
    ADD ESP,0x8                         ; 004b2bc9
    POP EDI                             ; 004b2bcc
    POP ESI                             ; 004b2bcd
    POP EBX                             ; 004b2bce
    RET                                 ; 004b2bcf
    XOR EAX,EAX                         ; 004b2bd0
        ;   Label: LAB_004b2bd0
    MOV AL,DH                           ; 004b2bd2
    PUSH EAX                            ; 004b2bd4
    PUSH EDI                            ; 004b2bd5
    CALL engine_font.cpp_FUN_004b30f0   ; 004b2bd6
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b2bdb
    CMP EAX,ESI                         ; 004b2bde
    JLE 0x004b2bf2                      ; 004b2be0
        ;   XREF to: 004b2bf2 (CONDITIONAL_JUMP)  ; LAB_004b2bf2
    XOR EAX,EAX                         ; 004b2be2
    MOV AL,byte ptr [EBX]               ; 004b2be4
    PUSH EAX                            ; 004b2be6
    PUSH EDI                            ; 004b2be7
    CALL engine_font.cpp_FUN_004b30f0   ; 004b2be8
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b2bed
    MOV ESI,EAX                         ; 004b2bf0
    MOV DL,byte ptr [EBX + 0x1]         ; 004b2bf2
        ;   Label: LAB_004b2bf2
    INC EBX                             ; 004b2bf5
    TEST DL,DL                          ; 004b2bf6
    JNZ 0x004b2b50                      ; 004b2bf8
        ;   XREF to: 004b2b50 (CONDITIONAL_JUMP)  ; LAB_004b2b50
    MOV EAX,ESI                         ; 004b2bfe
        ;   Label: LAB_004b2bfe
    POP EDI                             ; 004b2c00
    POP ESI                             ; 004b2c01
    POP EBX                             ; 004b2c02
    RET                                 ; 004b2c03

