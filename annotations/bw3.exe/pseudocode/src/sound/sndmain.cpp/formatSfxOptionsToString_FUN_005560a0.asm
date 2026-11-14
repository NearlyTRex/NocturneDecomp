; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005560a0(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; char *           Stack[0x8]:4   prefix_string
; CSfxOptions *    Stack[0xc]:4   options
; uint             Stack[0x10]:4   format_flags
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005560a0
        ;   Label: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005560a0
    PUSH ESI                            ; 005560a1
    PUSH EDI                            ; 005560a2
    PUSH EBP                            ; 005560a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005560a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005560a8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005560ac
    MOV EBX,EDI                         ; 005560b0
    TEST EAX,EAX                        ; 005560b2
    JNZ 0x005561f8                      ; 005560b4
        ;   XREF to: 005561f8 (CONDITIONAL_JUMP)  ; LAB_005561f8
    MOV byte ptr [EDI],0x0              ; 005560ba
    TEST byte ptr [ESP + 0x20],0x1      ; 005560bd
        ;   Label: LAB_005560bd
    JZ 0x005560d7                       ; 005560c2
        ;   XREF to: 005560d7 (CONDITIONAL_JUMP)  ; LAB_005560d7
    MOV EDX,dword ptr [ESI]             ; 005560c4
    PUSH EDX                            ; 005560c6
    PUSH 0x5d376b                       ; 005560c7
    PUSH EBX                            ; 005560cc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005560cd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005560d2
    ADD EBX,EAX                         ; 005560d5
    TEST byte ptr [ESP + 0x20],0x2      ; 005560d7
        ;   Label: LAB_005560d7
    JZ 0x00556140                       ; 005560dc
        ;   XREF to: 00556140 (CONDITIONAL_JUMP)  ; LAB_00556140
    CMP dword ptr [ESI + 0x20],0x0      ; 005560de
    JNZ 0x0055610c                      ; 005560e2
        ;   XREF to: 0055610c (CONDITIONAL_JUMP)  ; LAB_0055610c
    MOV EDI,dword ptr [ESI + 0x18]      ; 005560e4
    PUSH EDI                            ; 005560e7
    MOV EBP,dword ptr [ESI + 0x14]      ; 005560e8
    PUSH EBP                            ; 005560eb
    MOV EAX,dword ptr [ESI + 0x10]      ; 005560ec
    PUSH EAX                            ; 005560ef
    MOV EDX,dword ptr [ESI + 0xc]       ; 005560f0
    PUSH EDX                            ; 005560f3
    MOV ECX,dword ptr [ESI + 0x8]       ; 005560f4
    PUSH ECX                            ; 005560f7
    MOV EDI,dword ptr [ESI + 0x4]       ; 005560f8
    PUSH EDI                            ; 005560fb
    PUSH 0x5d3779                       ; 005560fc
    PUSH EBX                            ; 00556101
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00556102
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x20                        ; 00556107
    ADD EBX,EAX                         ; 0055610a
    CMP dword ptr [ESI + 0x20],0x1      ; 0055610c
        ;   Label: LAB_0055610c
    JNZ 0x00556126                      ; 00556110
        ;   XREF to: 00556126 (CONDITIONAL_JUMP)  ; LAB_00556126
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00556112
    PUSH EAX                            ; 00556115
    PUSH 0x5d378a                       ; 00556116
    PUSH EBX                            ; 0055611b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055611c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00556121
    ADD EBX,EAX                         ; 00556124
    CMP dword ptr [ESI + 0x20],0x2      ; 00556126
        ;   Label: LAB_00556126
    JNZ 0x00556140                      ; 0055612a
        ;   XREF to: 00556140 (CONDITIONAL_JUMP)  ; LAB_00556140
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0055612c
    PUSH ECX                            ; 0055612f
    PUSH 0x5d379a                       ; 00556130
    PUSH EBX                            ; 00556135
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00556136
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055613b
    ADD EBX,EAX                         ; 0055613e
    TEST byte ptr [ESP + 0x20],0x4      ; 00556140
        ;   Label: LAB_00556140
    JZ 0x005561ac                       ; 00556145
        ;   XREF to: 005561ac (CONDITIONAL_JUMP)  ; LAB_005561ac
    CMP dword ptr [ESI + 0x34],0x0      ; 00556147
    JNZ 0x00556178                      ; 0055614b
        ;   XREF to: 00556178 (CONDITIONAL_JUMP)  ; LAB_00556178
    SUB ESP,0x8                         ; 0055614d
    FLD float ptr [ESI + 0x2c]          ; 00556150
    FSTP double ptr [ESP]               ; 00556153
    SUB ESP,0x8                         ; 00556156
    FLD float ptr [ESI + 0x28]          ; 00556159
    FSTP double ptr [ESP]               ; 0055615c
    SUB ESP,0x8                         ; 0055615f
    FLD float ptr [ESI + 0x24]          ; 00556162
    FSTP double ptr [ESP]               ; 00556165
    PUSH 0x5d37ab                       ; 00556168
    PUSH EBX                            ; 0055616d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055616e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x20                        ; 00556173
    ADD EBX,EAX                         ; 00556176
    CMP dword ptr [ESI + 0x34],0x1      ; 00556178
        ;   Label: LAB_00556178
    JNZ 0x00556192                      ; 0055617c
        ;   XREF to: 00556192 (CONDITIONAL_JUMP)  ; LAB_00556192
    MOV EAX,dword ptr [ESI + 0x30]      ; 0055617e
    PUSH EAX                            ; 00556181
    PUSH 0x5d37bc                       ; 00556182
    PUSH EBX                            ; 00556187
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00556188
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055618d
    ADD EBX,EAX                         ; 00556190
    CMP dword ptr [ESI + 0x34],0x2      ; 00556192
        ;   Label: LAB_00556192
    JNZ 0x005561ac                      ; 00556196
        ;   XREF to: 005561ac (CONDITIONAL_JUMP)  ; LAB_005561ac
    MOV ECX,dword ptr [ESI + 0x30]      ; 00556198
    PUSH ECX                            ; 0055619b
    PUSH 0x5d37cc                       ; 0055619c
    PUSH EBX                            ; 005561a1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005561a2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005561a7
    ADD EBX,EAX                         ; 005561aa
    TEST byte ptr [ESP + 0x20],0x8      ; 005561ac
        ;   Label: LAB_005561ac
    JZ 0x005561cc                       ; 005561b1
        ;   XREF to: 005561cc (CONDITIONAL_JUMP)  ; LAB_005561cc
    SUB ESP,0x8                         ; 005561b3
    FLD float ptr [ESI + 0x38]          ; 005561b6
    FSTP double ptr [ESP]               ; 005561b9
    PUSH 0x5d37dd                       ; 005561bc
    PUSH EBX                            ; 005561c1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005561c2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005561c7
    ADD EBX,EAX                         ; 005561ca
    TEST byte ptr [ESP + 0x20],0x10     ; 005561cc
        ;   Label: LAB_005561cc
    JZ 0x005561ec                       ; 005561d1
        ;   XREF to: 005561ec (CONDITIONAL_JUMP)  ; LAB_005561ec
    SUB ESP,0x8                         ; 005561d3
    FLD float ptr [ESI + 0x3c]          ; 005561d6
    FSTP double ptr [ESP]               ; 005561d9
    PUSH 0x5d37e5                       ; 005561dc
    PUSH EBX                            ; 005561e1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005561e2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005561e7
    ADD EBX,EAX                         ; 005561ea
    TEST byte ptr [ESP + 0x20],0x20     ; 005561ec
        ;   Label: LAB_005561ec
    JNZ 0x0055620f                      ; 005561f1
        ;   XREF to: 0055620f (CONDITIONAL_JUMP)  ; LAB_0055620f
    POP EBP                             ; 005561f3
    POP EDI                             ; 005561f4
    POP ESI                             ; 005561f5
    POP EBX                             ; 005561f6
    RET                                 ; 005561f7
    PUSH EAX                            ; 005561f8
        ;   Label: LAB_005561f8
    PUSH 0x5d3768                       ; 005561f9
    PUSH EDI                            ; 005561fe
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005561ff
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00556204
    LEA EBX,[EDI + EAX*0x1]             ; 00556207
    JMP 0x005560bd                      ; 0055620a
        ;   XREF to: 005560bd (UNCONDITIONAL_JUMP)  ; LAB_005560bd
    SUB ESP,0x8                         ; 0055620f
        ;   Label: LAB_0055620f
    FLD float ptr [ESI + 0x40]          ; 00556212
    FSTP double ptr [ESP]               ; 00556215
    PUSH 0x5d37ee                       ; 00556218
    PUSH EBX                            ; 0055621d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055621e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556223
    POP EBP                             ; 00556226
    POP EDI                             ; 00556227
    POP ESI                             ; 00556228
    POP EBX                             ; 00556229
    RET                                 ; 0055622a

