; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double sound_mp3_cpp_initializeSynthesisDctTable_FUN_004fea9e(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ca067
;   undefined4 DAT_005ca06f
;   undefined4 DAT_005ca077
;   undefined4 DAT_005ca07f
;   undefined4 DAT_005ca087
;   undefined4 DAT_005ca08f
;
; Called Functions:
;   crt_math.c_modf_FUN_005a5fd6
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004fea9e
        ;   Label: sound_mp3.cpp_initializeSynthesisDctTable_FUN_004fea9e
    PUSH EBX                            ; 004feaa0
    PUSH ESI                            ; 004feaa1
    PUSH EDI                            ; 004feaa2
    PUSH EBP                            ; 004feaa3
    MOV EBP,ESP                         ; 004feaa4
    SUB ESP,0x24                        ; 004feaa6
    AND ESP,0xfffffff8                  ; 004feaa9
    XOR EDX,EDX                         ; 004feaac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004feaae
    MOV dword ptr [ESP + 0x10],EDX      ; 004feab1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004feab5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004feab9
        ;   Label: LAB_004feab9
    MOV ESI,0x1                         ; 004feabd
    MOV EDI,EBX                         ; 004feac2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004feac4
        ;   Label: LAB_004feac4
    MOV dword ptr [ESP + 0x20],EAX      ; 004feac8
    FILD dword ptr [ESP + 0x20]         ; 004feacc
    FMUL double ptr [0x005ca067]        ; 004fead0 | DAT_005ca067
    FADD double ptr [0x005ca07f]        ; 004fead6 | DAT_005ca07f
    MOV dword ptr [ESP + 0x20],ESI      ; 004feadc
    FILD dword ptr [ESP + 0x20]         ; 004feae0
    FMULP                               ; 004feae4
    FCOS                                ; 004feae6
    FMUL double ptr [0x005ca06f]        ; 004feae8 | DAT_005ca06f
    FLDZ                                ; 004feaee
    FXCH                                ; 004feaf0
    FSTP float ptr [EBX]                ; 004feaf2
    FCOMP float ptr [EBX]               ; 004feaf4
    FNSTSW AX                           ; 004feaf6
    SAHF                                ; 004feaf8
    JBE 0x004feb62                      ; 004feaf9
        ;   XREF to: 004feb62 (CONDITIONAL_JUMP)  ; LAB_004feb62
    FLD float ptr [EBX]                 ; 004feafb
    MOV EAX,ESP                         ; 004feafd
    FSTP double ptr [ESP]               ; 004feaff
    FLD float ptr [EBX]                 ; 004feb02
    PUSH EAX                            ; 004feb04
    FADD double ptr [0x005ca087]        ; 004feb05 | DAT_005ca087
    SUB ESP,0x8                         ; 004feb0b
    FSTP double ptr [ESP]               ; 004feb0e
    CALL crt_math.c_modf_FUN_005a5fd6   ; 004feb11
        ;   XREF to: 005a5fd6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005a5fd6(double value, double * integer_part)
    ADD ESP,0xc                         ; 004feb16
    FLD double ptr [ESP]                ; 004feb19
    FSTP float ptr [EBX]                ; 004feb1c
        ;   Label: LAB_004feb1c
    FLD float ptr [EDI]                 ; 004feb1e
    FLD ST0                             ; 004feb20
    FMUL double ptr [0x005ca077]        ; 004feb22 | DAT_005ca077
    ADD EBX,0x4                         ; 004feb28
    ADD ESI,0x2                         ; 004feb2b
    ADD EDI,0x4                         ; 004feb2e
    FSTP ST1                            ; 004feb31
    FSTP float ptr [EDI + -0x4]         ; 004feb33
    CMP ESI,0x41                        ; 004feb36
    JNZ 0x004feac4                      ; 004feb39
        ;   XREF to: 004feac4 (CONDITIONAL_JUMP)  ; LAB_004feac4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004feb3b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004feb3f
    INC EBX                             ; 004feb43
    ADD ECX,0x80                        ; 004feb44
    MOV dword ptr [ESP + 0x10],EBX      ; 004feb4a
    MOV dword ptr [ESP + 0x1c],ECX      ; 004feb4e
    CMP EBX,0x40                        ; 004feb52
    JL 0x004feab9                       ; 004feb55
        ;   XREF to: 004feab9 (CONDITIONAL_JUMP)  ; LAB_004feab9
    MOV ESP,EBP                         ; 004feb5b
    POP EBP                             ; 004feb5d
    POP EDI                             ; 004feb5e
    POP ESI                             ; 004feb5f
    POP EBX                             ; 004feb60
    RET                                 ; 004feb61
    FLD float ptr [EBX]                 ; 004feb62
        ;   Label: LAB_004feb62
    LEA EAX,[ESP + 0x8]                 ; 004feb64
    FSTP double ptr [ESP + 0x8]         ; 004feb68
    FLD float ptr [EBX]                 ; 004feb6c
    PUSH EAX                            ; 004feb6e
    FADD double ptr [0x005ca08f]        ; 004feb6f | DAT_005ca08f
    SUB ESP,0x8                         ; 004feb75
    FSTP double ptr [ESP]               ; 004feb78
    CALL crt_math.c_modf_FUN_005a5fd6   ; 004feb7b
        ;   XREF to: 005a5fd6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005a5fd6(double value, double * integer_part)
    ADD ESP,0xc                         ; 004feb80
    FLD double ptr [ESP + 0x8]          ; 004feb83
    JMP 0x004feb1c                      ; 004feb87
        ;   XREF to: 004feb1c (UNCONDITIONAL_JUMP)  ; LAB_004feb1c

