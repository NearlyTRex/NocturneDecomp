; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpustack float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 at 00453c08
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512597
;   core_set.cpp_CDemonSet_setGamma_FUN_00570d60 at 00570dab
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540 at 00532580
;   sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50 at 0053214b
;
; Referenced Globals:
;   int g_UseSoftwareMath = 0x0
;
; Called Functions:
;   crt_math.c_exp_FUN_006068e2
;   crt_math.c_function_dispatch_FUN_00606a77
;   crt_math.c_integer_power_FUN_005ffeb2
;   crt_math.c_math_domain_error_FUN_00606832
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ffd76
        ;   Label: crt_math.c_pow_FUN_005ffd76
    MOV EBP,ESP                         ; 005ffd77
    FTST                                ; 005ffd79
    SUB ESP,0x18                        ; 005ffd7b
    FSTSW word ptr [EBP + -0x8]         ; 005ffd7e
    FST double ptr [EBP + -0x18]        ; 005ffd82
    MOV AH,byte ptr [EBP + -0x7]        ; 005ffd85
    SAHF                                ; 005ffd88
    JNZ 0x005ffdae                      ; 005ffd89 | LAB_005ffdae
        ;   XREF to: 005ffdae (CONDITIONAL_JUMP)
    MOV AL,0x0                          ; 005ffd8b
    FSTP ST0                            ; 005ffd8d
        ;   Label: LAB_005ffd8d
    FSTP double ptr [EBP + -0x10]       ; 005ffd8f
    MOV dword ptr [EBP + -0x8],EAX      ; 005ffd92
    MOV dword ptr [EBP + -0x4],EDX      ; 005ffd95
    CALL crt_math.c_math_domain_error_FUN_00606832 ; 005ffd98 | double crt_math.c_math_domain_error_FUN_00606832(double x, double y, uchar error_type)
        ;   XREF to: 00606832 (UNCONDITIONAL_CALL)
    SUB ESP,0x8                         ; 005ffd9d
    PUSH EDX                            ; 005ffda0
    PUSH EAX                            ; 005ffda1
    FLD double ptr [ESP]                ; 005ffda2
    MOV EDX,dword ptr [EBP + -0x4]      ; 005ffda5
    WAIT                                ; 005ffda8
    JMP 0x005ffea7                      ; 005ffda9 | LAB_005ffea7
        ;   XREF to: 005ffea7 (UNCONDITIONAL_JUMP)
    FLD ST1                             ; 005ffdae
        ;   Label: LAB_005ffdae
    FRNDINT                             ; 005ffdb0
    FCOMP ST2                           ; 005ffdb2
    FSTSW word ptr [EBP + -0x6]         ; 005ffdb4
    WAIT                                ; 005ffdb8
    MOV AH,byte ptr [EBP + -0x5]        ; 005ffdb9
    JNC 0x005ffdf9                      ; 005ffdbc | LAB_005ffdf9
        ;   XREF to: 005ffdf9 (CONDITIONAL_JUMP)
    MOV AL,0x1                          ; 005ffdbe
    SAHF                                ; 005ffdc0
    JNZ 0x005ffd8d                      ; 005ffdc1 | LAB_005ffd8d
        ;   XREF to: 005ffd8d (CONDITIONAL_JUMP)
    MOV AX,0x2                          ; 005ffdc3
    MOV word ptr [EBP + -0x4],AX        ; 005ffdc7
    FILD word ptr [EBP + -0x4]          ; 005ffdcb
    FLD ST2                             ; 005ffdce
    FPREM                               ; 005ffdd0
    FSTSW word ptr [EBP + -0x4]         ; 005ffdd2
    WAIT                                ; 005ffdd6
    MOV AH,byte ptr [EBP + -0x3]        ; 005ffdd7
    SAHF                                ; 005ffdda
    MOV AH,0x0                          ; 005ffddb
    JP 0x005ffdf0                       ; 005ffddd | LAB_005ffdf0
        ;   XREF to: 005ffdf0 (CONDITIONAL_JUMP)
    FTST                                ; 005ffddf
    FSTSW word ptr [EBP + -0x4]         ; 005ffde1
    WAIT                                ; 005ffde5
    MOV AH,byte ptr [EBP + -0x3]        ; 005ffde6
    SAHF                                ; 005ffde9
    MOV AH,0x0                          ; 005ffdea
    JZ 0x005ffdf0                       ; 005ffdec | LAB_005ffdf0
        ;   XREF to: 005ffdf0 (CONDITIONAL_JUMP)
    MOV AH,0x1                          ; 005ffdee
    MOV byte ptr [EBP + -0x7],AH        ; 005ffdf0
        ;   Label: LAB_005ffdf0
    FSTP ST0                            ; 005ffdf3
    FSTP ST0                            ; 005ffdf5
    JMP 0x005ffe01                      ; 005ffdf7 | LAB_005ffe01
        ;   XREF to: 005ffe01 (UNCONDITIONAL_JUMP)
    SAHF                                ; 005ffdf9
        ;   Label: LAB_005ffdf9
    JZ 0x005ffe01                       ; 005ffdfa | LAB_005ffe01
        ;   XREF to: 005ffe01 (CONDITIONAL_JUMP)
    JMP 0x005ffe88                      ; 005ffdfc | LAB_005ffe88
        ;   XREF to: 005ffe88 (UNCONDITIONAL_JUMP)
    FLD ST1                             ; 005ffe01
        ;   Label: LAB_005ffe01
    FSTP double ptr [EBP + -0x10]       ; 005ffe03
    WAIT                                ; 005ffe06
    MOV AX,word ptr [EBP + -0xa]        ; 005ffe07
    AND AX,0x7ff0                       ; 005ffe0b
    SUB AX,0x3ff0                       ; 005ffe0f
    CMP AX,0x100                        ; 005ffe13
    JNC 0x005ffe88                      ; 005ffe17 | LAB_005ffe88
        ;   XREF to: 005ffe88 (CONDITIONAL_JUMP)
    FLD ST1                             ; 005ffe19
    FISTP dword ptr [EBP + -0x4]        ; 005ffe1b
    WAIT                                ; 005ffe1e
    MOV AX,word ptr [EBP + -0x2]        ; 005ffe1f
    OR AX,AX                            ; 005ffe23
    JNZ 0x005ffe33                      ; 005ffe26 | LAB_005ffe33
        ;   XREF to: 005ffe33 (CONDITIONAL_JUMP)
    MOV AX,word ptr [EBP + -0x4]        ; 005ffe28
    CALL crt_math.c_integer_power_FUN_005ffeb2 ; 005ffe2c | float10 crt_math.c_integer_power_FUN_005ffeb2(float10 base, ushort exponent)
        ;   XREF to: 005ffeb2 (UNCONDITIONAL_CALL)
    JMP 0x005ffe5e                      ; 005ffe31 | LAB_005ffe5e
        ;   XREF to: 005ffe5e (UNCONDITIONAL_JUMP)
    INC AX                              ; 005ffe33
        ;   Label: LAB_005ffe33
    JNZ 0x005ffe88                      ; 005ffe35 | LAB_005ffe88
        ;   XREF to: 005ffe88 (CONDITIONAL_JUMP)
    OR AX,word ptr [EBP + -0x4]         ; 005ffe37
    JZ 0x005ffe88                       ; 005ffe3b | LAB_005ffe88
        ;   XREF to: 005ffe88 (CONDITIONAL_JUMP)
    NEG AX                              ; 005ffe3d
    CALL crt_math.c_integer_power_FUN_005ffeb2 ; 005ffe40 | float10 crt_math.c_integer_power_FUN_005ffeb2(float10 base, ushort exponent)
        ;   XREF to: 005ffeb2 (UNCONDITIONAL_CALL)
    FLD1                                ; 005ffe45
    TEST byte ptr [0x00685060],0x1      ; 005ffe47 | int g_UseSoftwareMath
    JNZ 0x005ffe54                      ; 005ffe4e | LAB_005ffe54
        ;   XREF to: 005ffe54 (CONDITIONAL_JUMP)
    FDIVRP                              ; 005ffe50
    JMP 0x005ffe5e                      ; 005ffe52 | LAB_005ffe5e
        ;   XREF to: 005ffe5e (UNCONDITIONAL_JUMP)
    MOV EAX,0xf                         ; 005ffe54
        ;   Label: LAB_005ffe54
    CALL crt_math.c_function_dispatch_FUN_00606a77 ; 005ffe59 | void crt_math.c_function_dispatch_FUN_00606a77(int function_index)
        ;   XREF to: 00606a77 (UNCONDITIONAL_CALL)
    FST double ptr [EBP + -0x8]         ; 005ffe5e
        ;   Label: LAB_005ffe5e
    WAIT                                ; 005ffe61
    MOV AX,word ptr [EBP + -0x8]        ; 005ffe62
    OR AX,word ptr [EBP + -0x6]         ; 005ffe66
    OR AX,word ptr [EBP + -0x4]         ; 005ffe6a
    JNZ 0x005ffe84                      ; 005ffe6e | LAB_005ffe84
        ;   XREF to: 005ffe84 (CONDITIONAL_JUMP)
    MOV AX,word ptr [EBP + -0x2]        ; 005ffe70
    SHL AX,0x1                          ; 005ffe74
    CMP AX,0xffe0                       ; 005ffe77
    JNZ 0x005ffe84                      ; 005ffe7b | LAB_005ffe84
        ;   XREF to: 005ffe84 (CONDITIONAL_JUMP)
    MOV AL,0x2                          ; 005ffe7d
        ;   Label: LAB_005ffe7d
    JMP 0x005ffd8d                      ; 005ffe7f | LAB_005ffd8d
        ;   XREF to: 005ffd8d (UNCONDITIONAL_JUMP)
    FSTP ST1                            ; 005ffe84
        ;   Label: LAB_005ffe84
    JMP 0x005ffea7                      ; 005ffe86 | LAB_005ffea7
        ;   XREF to: 005ffea7 (UNCONDITIONAL_JUMP)
    FLDLN2                              ; 005ffe88
        ;   Label: LAB_005ffe88
    FMUL ST2                            ; 005ffe8a
    FXCH                                ; 005ffe8c
    FABS                                ; 005ffe8e
    FYL2X                               ; 005ffe90
    MOV AL,0x7                          ; 005ffe92
    CALL crt_math.c_exp_FUN_006068e2    ; 005ffe94 | float10 crt_math.c_exp_FUN_006068e2(float10 x)
        ;   XREF to: 006068e2 (UNCONDITIONAL_CALL)
    CMP AL,0x0                          ; 005ffe99
    JNZ 0x005ffe7d                      ; 005ffe9b | LAB_005ffe7d
        ;   XREF to: 005ffe7d (CONDITIONAL_JUMP)
    MOV AH,byte ptr [EBP + -0x7]        ; 005ffe9d
    SAHF                                ; 005ffea0
    JNC 0x005ffea5                      ; 005ffea1 | LAB_005ffea5
        ;   XREF to: 005ffea5 (CONDITIONAL_JUMP)
    FCHS                                ; 005ffea3
    FSTP ST1                            ; 005ffea5
        ;   Label: LAB_005ffea5
    FSTP double ptr [EBP + -0x8]        ; 005ffea7
        ;   Label: LAB_005ffea7
    FLD double ptr [EBP + -0x8]         ; 005ffeaa
    WAIT                                ; 005ffead
    MOV ESP,EBP                         ; 005ffeae
    POP EBP                             ; 005ffeb0
    RET                                 ; 005ffeb1

