; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004b2ef0(void)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2ef0
        ;   Label: engine_font.cpp_FUN_004b2ef0
    PUSH ESI                            ; 004b2ef1
    PUSH EBP                            ; 004b2ef2
    SUB ESP,0x20                        ; 004b2ef3
    MOV EBP,dword ptr [ESP + 0x34]      ; 004b2ef6
    MOV ESI,dword ptr [ESP + 0x38]      ; 004b2efa
    MOV EBX,dword ptr [ESP + 0x40]      ; 004b2efe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b2f02
    IMUL EAX,EBX                        ; 004b2f06
    PUSH EAX                            ; 004b2f09
    PUSH 0x0                            ; 004b2f0a
    PUSH ESI                            ; 004b2f0c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004b2f0d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004b2f12
    TEST EBP,EBP                        ; 004b2f15
    JZ 0x004b2f5c                       ; 004b2f17
        ;   XREF to: 004b2f5c (CONDITIONAL_JUMP)  ; LAB_004b2f5c
    PUSH EDI                            ; 004b2f19
    XOR EDX,EDX                         ; 004b2f1a
    MOV ECX,dword ptr [ESP + 0x40]      ; 004b2f1c
    MOV dword ptr [ESP + 0x1c],EDX      ; 004b2f20
    TEST ECX,ECX                        ; 004b2f24
    JLE 0x004b2ffe                      ; 004b2f26
        ;   XREF to: 004b2ffe (CONDITIONAL_JUMP)  ; LAB_004b2ffe
    LEA EAX,[EBX + -0x1]                ; 004b2f2c
    MOV dword ptr [ESP + 0x10],EBX      ; 004b2f2f
    MOV dword ptr [ESP + 0xc],EAX       ; 004b2f33
    IMUL EAX,EBX,0x0                    ; 004b2f37
    ADD EAX,ESI                         ; 004b2f3a
    MOV dword ptr [ESP + 0x14],EAX      ; 004b2f3c
    MOV AL,byte ptr [EBP]               ; 004b2f40
        ;   Label: LAB_004b2f40
    INC AL                              ; 004b2f43
    AND EAX,0xff                        ; 004b2f45
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b2f4a
    JZ 0x004b2f65                       ; 004b2f51
        ;   XREF to: 004b2f65 (CONDITIONAL_JUMP)  ; LAB_004b2f65
    CMP byte ptr [EBP],0xa              ; 004b2f53
    JZ 0x004b2f65                       ; 004b2f57
        ;   XREF to: 004b2f65 (CONDITIONAL_JUMP)  ; LAB_004b2f65
    INC EBP                             ; 004b2f59
    JMP 0x004b2f40                      ; 004b2f5a
        ;   XREF to: 004b2f40 (UNCONDITIONAL_JUMP)  ; LAB_004b2f40
    XOR EAX,EAX                         ; 004b2f5c
        ;   Label: LAB_004b2f5c
    ADD ESP,0x20                        ; 004b2f5e
    POP EBP                             ; 004b2f61
    POP ESI                             ; 004b2f62
    POP EBX                             ; 004b2f63
    RET                                 ; 004b2f64
    CMP byte ptr [EBP],0x0              ; 004b2f65
        ;   Label: LAB_004b2f65
    JZ 0x004b2ffe                       ; 004b2f69
        ;   XREF to: 004b2ffe (CONDITIONAL_JUMP)  ; LAB_004b2ffe
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b2f6f
    MOV ESI,0xffffffff                  ; 004b2f73
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b2f78
    XOR EBX,EBX                         ; 004b2f7c
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2f7e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2f82
    MOV dword ptr [ESP + 0x18],ESI      ; 004b2f86
    ADD EDI,EAX                         ; 004b2f8a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b2f8c
    MOV ESI,EBP                         ; 004b2f90
    INC EAX                             ; 004b2f92
    MOV dword ptr [ESP + 0x14],EDI      ; 004b2f93
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b2f97
    XOR EAX,EAX                         ; 004b2f9b
        ;   Label: LAB_004b2f9b
    MOV AL,byte ptr [ESI]               ; 004b2f9d
    MOV dword ptr [ESP + 0x20],EAX      ; 004b2f9f
    CMP EAX,0xa                         ; 004b2fa3
    JNZ 0x004b300a                      ; 004b2fa6
        ;   XREF to: 004b300a (CONDITIONAL_JUMP)  ; LAB_004b300a
    MOV EDX,EBX                         ; 004b2fa8
        ;   Label: LAB_004b2fa8
    TEST EBX,EBX                        ; 004b2faa
    JLE 0x004b2fc8                      ; 004b2fac
        ;   XREF to: 004b2fc8 (CONDITIONAL_JUMP)  ; LAB_004b2fc8
    LEA EAX,[EBX + EBP*0x1]             ; 004b2fae
    MOV CL,byte ptr [EAX + -0x1]        ; 004b2fb1
        ;   Label: LAB_004b2fb1
    INC CL                              ; 004b2fb4
    MOVZX ESI,CL                        ; 004b2fb6
    TEST byte ptr [ESI + 0x6074b8],0x2  ; 004b2fb9
    JZ 0x004b2fc8                       ; 004b2fc0
        ;   XREF to: 004b2fc8 (CONDITIONAL_JUMP)  ; LAB_004b2fc8
    DEC EDX                             ; 004b2fc2
    DEC EAX                             ; 004b2fc3
    TEST EDX,EDX                        ; 004b2fc4
    JG 0x004b2fb1                       ; 004b2fc6
        ;   XREF to: 004b2fb1 (CONDITIONAL_JUMP)  ; LAB_004b2fb1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004b2fc8
        ;   Label: LAB_004b2fc8
    MOV ECX,EDX                         ; 004b2fcc
    MOV ESI,EBP                         ; 004b2fce
    ADD EDX,EDI                         ; 004b2fd0
    PUSH EDI                            ; 004b2fd2
    MOV EAX,ECX                         ; 004b2fd3
    SHR ECX,0x2                         ; 004b2fd5
    MOVSD.REP ES:EDI,ESI                ; 004b2fd8
    MOV CL,AL                           ; 004b2fda
    AND CL,0x3                          ; 004b2fdc
    MOVSB.REP ES:EDI,ESI                ; 004b2fdf
    POP EDI                             ; 004b2fe1
    LEA EAX,[EBX + EBP*0x1]             ; 004b2fe2
    MOV byte ptr [EDX],0x0              ; 004b2fe5
    CMP byte ptr [EAX],0xa              ; 004b2fe8
    JNZ 0x004b2fee                      ; 004b2feb
        ;   XREF to: 004b2fee (CONDITIONAL_JUMP)  ; LAB_004b2fee
    INC EBX                             ; 004b2fed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b2fee
        ;   Label: LAB_004b2fee
    ADD EBP,EBX                         ; 004b2ff2
    CMP EAX,dword ptr [ESP + 0x40]      ; 004b2ff4
    JL 0x004b2f40                       ; 004b2ff8
        ;   XREF to: 004b2f40 (CONDITIONAL_JUMP)  ; LAB_004b2f40
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b2ffe
        ;   Label: LAB_004b2ffe
    POP EDI                             ; 004b3002
    ADD ESP,0x20                        ; 004b3003
    POP EBP                             ; 004b3006
    POP ESI                             ; 004b3007
    POP EBX                             ; 004b3008
    RET                                 ; 004b3009
    TEST EAX,EAX                        ; 004b300a
        ;   Label: LAB_004b300a
    JZ 0x004b2fa8                       ; 004b300c
        ;   XREF to: 004b2fa8 (CONDITIONAL_JUMP)  ; LAB_004b2fa8
    MOV AL,byte ptr [ESP + 0x20]        ; 004b300e
    INC AL                              ; 004b3012
    AND EAX,0xff                        ; 004b3014
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b3019
    JZ 0x004b3026                       ; 004b3020
        ;   XREF to: 004b3026 (CONDITIONAL_JUMP)  ; LAB_004b3026
    MOV dword ptr [ESP + 0x18],EBX      ; 004b3022
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b3026
        ;   Label: LAB_004b3026
    XOR EDI,EDI                         ; 004b302a
    CMP EBX,EAX                         ; 004b302c
    JGE 0x004b3077                      ; 004b302e
        ;   XREF to: 004b3077 (CONDITIONAL_JUMP)  ; LAB_004b3077
    XOR CH,CH                           ; 004b3030
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b3032
    MOV byte ptr [EBX + 0x1d1a960],CH   ; 004b3036
    CMP EDX,0x1                         ; 004b303c
    JLE 0x004b308c                      ; 004b303f
        ;   XREF to: 004b308c (CONDITIONAL_JUMP)  ; LAB_004b308c
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b3041
        ;   Label: LAB_004b3041
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004b3045
    MOV EAX,dword ptr [EAX + 0x3668]    ; 004b3049
    IMUL EAX,EDX                        ; 004b304f
    PUSH 0x1d1a960                      ; 004b3052
    MOV ECX,dword ptr [ESP + 0x38]      ; 004b3057
    PUSH ECX                            ; 004b305b
    MOV dword ptr [ESP + 0x10],EAX      ; 004b305c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004b3060
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004b3065
    ADD EAX,dword ptr [ESP + 0x8]       ; 004b3068
    CMP EAX,dword ptr [ESP + 0x48]      ; 004b306c
        ;   Label: LAB_004b306c
    JG 0x004b3077                       ; 004b3070
        ;   XREF to: 004b3077 (CONDITIONAL_JUMP)  ; LAB_004b3077
    MOV EDI,0x1                         ; 004b3072
    MOV AL,byte ptr [ESP + 0x20]        ; 004b3077
        ;   Label: LAB_004b3077
    MOV byte ptr [EBX + 0x1d1a960],AL   ; 004b307b
    TEST EDI,EDI                        ; 004b3081
    JZ 0x004b30a7                       ; 004b3083
        ;   XREF to: 004b30a7 (CONDITIONAL_JUMP)  ; LAB_004b30a7
    INC EBX                             ; 004b3085
    INC ESI                             ; 004b3086
    JMP 0x004b2f9b                      ; 004b3087
        ;   XREF to: 004b2f9b (UNCONDITIONAL_JUMP)  ; LAB_004b2f9b
    CMP dword ptr [ESP + 0x50],0x0      ; 004b308c
        ;   Label: LAB_004b308c
    JNZ 0x004b3041                      ; 004b3091
        ;   XREF to: 004b3041 (CONDITIONAL_JUMP)  ; LAB_004b3041
    PUSH 0x1d1a960                      ; 004b3093
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b3098
    PUSH EAX                            ; 004b309c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004b309d
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004b30a2
    JMP 0x004b306c                      ; 004b30a5
        ;   XREF to: 004b306c (UNCONDITIONAL_JUMP)  ; LAB_004b306c
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b30a7
        ;   Label: LAB_004b30a7
    TEST ESI,ESI                        ; 004b30ab
    JL 0x004b2fa8                       ; 004b30ad
        ;   XREF to: 004b2fa8 (CONDITIONAL_JUMP)  ; LAB_004b2fa8
    MOV EBX,ESI                         ; 004b30b3
    JMP 0x004b2fa8                      ; 004b30b5
        ;   XREF to: 004b2fa8 (UNCONDITIONAL_JUMP)  ; LAB_004b2fa8

