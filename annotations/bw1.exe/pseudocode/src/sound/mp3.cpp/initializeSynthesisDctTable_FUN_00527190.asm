; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00527190(float *output_dct_table)
;
; Parameters:
; float *          Stack[0x4]:4   output_dct_table
;
; Referenced Globals:
;   undefined4 DAT_005eb256
;   undefined4 DAT_005eb25e
;   undefined4 DAT_005eb266
;   undefined4 DAT_005eb26e
;   undefined4 DAT_005eb276
;   undefined4 DAT_005eb27e
;
; Called Functions:
;   crt_math.c_modf_FUN_005c3166
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527190
        ;   Label: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00527190
    PUSH ESI                            ; 00527191
    PUSH EDI                            ; 00527192
    PUSH EBP                            ; 00527193
    MOV EBP,ESP                         ; 00527194
    SUB ESP,0x24                        ; 00527196
    AND ESP,0xfffffff8                  ; 00527199
    XOR EDX,EDX                         ; 0052719c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052719e
    MOV dword ptr [ESP + 0x10],EDX      ; 005271a1
    MOV dword ptr [ESP + 0x1c],EAX      ; 005271a5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005271a9
        ;   Label: LAB_005271a9
    MOV ESI,0x1                         ; 005271ad
    MOV EDI,EBX                         ; 005271b2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005271b4
        ;   Label: LAB_005271b4
    MOV dword ptr [ESP + 0x20],EAX      ; 005271b8
    FILD dword ptr [ESP + 0x20]         ; 005271bc
    FMUL double ptr [0x005eb256]        ; 005271c0 | DAT_005eb256
    FADD double ptr [0x005eb26e]        ; 005271c6 | DAT_005eb26e
    MOV dword ptr [ESP + 0x20],ESI      ; 005271cc
    FILD dword ptr [ESP + 0x20]         ; 005271d0
    FMULP                               ; 005271d4
    FCOS                                ; 005271d6
    FMUL double ptr [0x005eb25e]        ; 005271d8 | DAT_005eb25e
    FLDZ                                ; 005271de
    FXCH                                ; 005271e0
    FSTP float ptr [EBX]                ; 005271e2
    FCOMP float ptr [EBX]               ; 005271e4
    FNSTSW AX                           ; 005271e6
    SAHF                                ; 005271e8
    JBE 0x00527252                      ; 005271e9
        ;   XREF to: 00527252 (CONDITIONAL_JUMP)  ; LAB_00527252
    FLD float ptr [EBX]                 ; 005271eb
    MOV EAX,ESP                         ; 005271ed
    FSTP double ptr [ESP]               ; 005271ef
    FLD float ptr [EBX]                 ; 005271f2
    PUSH EAX                            ; 005271f4
    FADD double ptr [0x005eb276]        ; 005271f5 | DAT_005eb276
    SUB ESP,0x8                         ; 005271fb
    FSTP double ptr [ESP]               ; 005271fe
    CALL crt_math.c_modf_FUN_005c3166   ; 00527201
        ;   XREF to: 005c3166 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005c3166(double value, double * integer_part)
    ADD ESP,0xc                         ; 00527206
    FLD double ptr [ESP]                ; 00527209
    FSTP float ptr [EBX]                ; 0052720c
        ;   Label: LAB_0052720c
    FLD float ptr [EDI]                 ; 0052720e
    FLD ST0                             ; 00527210
    FMUL double ptr [0x005eb266]        ; 00527212 | DAT_005eb266
    ADD EBX,0x4                         ; 00527218
    ADD ESI,0x2                         ; 0052721b
    ADD EDI,0x4                         ; 0052721e
    FSTP ST1                            ; 00527221
    FSTP float ptr [EDI + -0x4]         ; 00527223
    CMP ESI,0x41                        ; 00527226
    JNZ 0x005271b4                      ; 00527229
        ;   XREF to: 005271b4 (CONDITIONAL_JUMP)  ; LAB_005271b4
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052722b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052722f
    INC EBX                             ; 00527233
    ADD ECX,0x80                        ; 00527234
    MOV dword ptr [ESP + 0x10],EBX      ; 0052723a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0052723e
    CMP EBX,0x40                        ; 00527242
    JL 0x005271a9                       ; 00527245
        ;   XREF to: 005271a9 (CONDITIONAL_JUMP)  ; LAB_005271a9
    MOV ESP,EBP                         ; 0052724b
    POP EBP                             ; 0052724d
    POP EDI                             ; 0052724e
    POP ESI                             ; 0052724f
    POP EBX                             ; 00527250
    RET                                 ; 00527251
    FLD float ptr [EBX]                 ; 00527252
        ;   Label: LAB_00527252
    LEA EAX,[ESP + 0x8]                 ; 00527254
    FSTP double ptr [ESP + 0x8]         ; 00527258
    FLD float ptr [EBX]                 ; 0052725c
    PUSH EAX                            ; 0052725e
    FADD double ptr [0x005eb27e]        ; 0052725f | DAT_005eb27e
    SUB ESP,0x8                         ; 00527265
    FSTP double ptr [ESP]               ; 00527268
    CALL crt_math.c_modf_FUN_005c3166   ; 0052726b
        ;   XREF to: 005c3166 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005c3166(double value, double * integer_part)
    ADD ESP,0xc                         ; 00527270
    FLD double ptr [ESP + 0x8]          ; 00527273
    JMP 0x0052720c                      ; 00527277
        ;   XREF to: 0052720c (UNCONDITIONAL_JUMP)  ; LAB_0052720c

