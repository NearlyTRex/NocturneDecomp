; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpustack_safe crt_math_c_pow_FUN_00565ad6(float10 base,float10 exp)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70 at 00447aa8
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1a27
;   core_set.cpp_CDemonSet_setGamma_FUN_0050e400 at 0050e44b
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0 at 004e6100
;   sound_mp3.cpp_requantizeLayer3Samples_FUN_004e58d0 at 004e5b5b
;
; Referenced Globals:
;   undefined4 DAT_005c1d98
;
; Called Functions:
;   crt_math.c_exp_FUN_0056bdd2
;   crt_math.c_function_dispatch_FUN_0056bf67
;   crt_math.c_math_domain_error_FUN_0056bd22
;   crt_unknown.c_integer_power_FUN_00565c12
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00565ad6
        ;   Label: crt_math.c_pow_FUN_00565ad6
    MOV EBP,ESP                         ; 00565ad7
    FTST                                ; 00565ad9
    SUB ESP,0x18                        ; 00565adb
    FSTSW word ptr [EBP + -0x8]         ; 00565ade
    FST double ptr [EBP + -0x18]        ; 00565ae2
    MOV AH,byte ptr [EBP + -0x7]        ; 00565ae5
    SAHF                                ; 00565ae8
    JNZ 0x00565b0e                      ; 00565ae9
        ;   XREF to: 00565b0e (CONDITIONAL_JUMP)  ; LAB_00565b0e
    MOV AL,0x0                          ; 00565aeb
    FSTP ST0                            ; 00565aed
        ;   Label: LAB_00565aed
    FSTP double ptr [EBP + -0x10]       ; 00565aef
    MOV dword ptr [EBP + -0x8],EAX      ; 00565af2
    MOV dword ptr [EBP + -0x4],EDX      ; 00565af5
    CALL crt_math.c_math_domain_error_FUN_0056bd22 ; 00565af8
        ;   XREF to: 0056bd22 (UNCONDITIONAL_CALL)  ; double crt_math.c_math_domain_error_FUN_0056bd22(double x, double y, uchar error_type)
    SUB ESP,0x8                         ; 00565afd
    PUSH EDX                            ; 00565b00
    PUSH EAX                            ; 00565b01
    FLD double ptr [ESP]                ; 00565b02
    MOV EDX,dword ptr [EBP + -0x4]      ; 00565b05
    WAIT                                ; 00565b08
    JMP 0x00565c07                      ; 00565b09
        ;   XREF to: 00565c07 (UNCONDITIONAL_JUMP)  ; LAB_00565c07
    FLD ST1                             ; 00565b0e
        ;   Label: LAB_00565b0e
    FRNDINT                             ; 00565b10
    FCOMP ST2                           ; 00565b12
    FSTSW word ptr [EBP + -0x6]         ; 00565b14
    WAIT                                ; 00565b18
    MOV AH,byte ptr [EBP + -0x5]        ; 00565b19
    JNC 0x00565b59                      ; 00565b1c
        ;   XREF to: 00565b59 (CONDITIONAL_JUMP)  ; LAB_00565b59
    MOV AL,0x1                          ; 00565b1e
    SAHF                                ; 00565b20
    JNZ 0x00565aed                      ; 00565b21
        ;   XREF to: 00565aed (CONDITIONAL_JUMP)  ; LAB_00565aed
    MOV AX,0x2                          ; 00565b23
    MOV word ptr [EBP + -0x4],AX        ; 00565b27
    FILD word ptr [EBP + -0x4]          ; 00565b2b
    FLD ST2                             ; 00565b2e
    FPREM                               ; 00565b30
    FSTSW word ptr [EBP + -0x4]         ; 00565b32
    WAIT                                ; 00565b36
    MOV AH,byte ptr [EBP + -0x3]        ; 00565b37
    SAHF                                ; 00565b3a
    MOV AH,0x0                          ; 00565b3b
    JP 0x00565b50                       ; 00565b3d
        ;   XREF to: 00565b50 (CONDITIONAL_JUMP)  ; LAB_00565b50
    FTST                                ; 00565b3f
    FSTSW word ptr [EBP + -0x4]         ; 00565b41
    WAIT                                ; 00565b45
    MOV AH,byte ptr [EBP + -0x3]        ; 00565b46
    SAHF                                ; 00565b49
    MOV AH,0x0                          ; 00565b4a
    JZ 0x00565b50                       ; 00565b4c
        ;   XREF to: 00565b50 (CONDITIONAL_JUMP)  ; LAB_00565b50
    MOV AH,0x1                          ; 00565b4e
    MOV byte ptr [EBP + -0x7],AH        ; 00565b50
        ;   Label: LAB_00565b50
    FSTP ST0                            ; 00565b53
    FSTP ST0                            ; 00565b55
    JMP 0x00565b61                      ; 00565b57
        ;   XREF to: 00565b61 (UNCONDITIONAL_JUMP)  ; LAB_00565b61
    SAHF                                ; 00565b59
        ;   Label: LAB_00565b59
    JZ 0x00565b61                       ; 00565b5a
        ;   XREF to: 00565b61 (CONDITIONAL_JUMP)  ; LAB_00565b61
    JMP 0x00565be8                      ; 00565b5c
        ;   XREF to: 00565be8 (UNCONDITIONAL_JUMP)  ; LAB_00565be8
    FLD ST1                             ; 00565b61
        ;   Label: LAB_00565b61
    FSTP double ptr [EBP + -0x10]       ; 00565b63
    WAIT                                ; 00565b66
    MOV AX,word ptr [EBP + -0xa]        ; 00565b67
    AND AX,0x7ff0                       ; 00565b6b
    SUB AX,0x3ff0                       ; 00565b6f
    CMP AX,0x100                        ; 00565b73
    JNC 0x00565be8                      ; 00565b77
        ;   XREF to: 00565be8 (CONDITIONAL_JUMP)  ; LAB_00565be8
    FLD ST1                             ; 00565b79
    FISTP dword ptr [EBP + -0x4]        ; 00565b7b
    WAIT                                ; 00565b7e
    MOV AX,word ptr [EBP + -0x2]        ; 00565b7f
    OR AX,AX                            ; 00565b83
    JNZ 0x00565b93                      ; 00565b86
        ;   XREF to: 00565b93 (CONDITIONAL_JUMP)  ; LAB_00565b93
    MOV AX,word ptr [EBP + -0x4]        ; 00565b88
    CALL crt_unknown.c_integer_power_FUN_00565c12 ; 00565b8c
        ;   XREF to: 00565c12 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_integer_power_FUN_00565c12()
    JMP 0x00565bbe                      ; 00565b91
        ;   XREF to: 00565bbe (UNCONDITIONAL_JUMP)  ; LAB_00565bbe
    INC AX                              ; 00565b93
        ;   Label: LAB_00565b93
    JNZ 0x00565be8                      ; 00565b95
        ;   XREF to: 00565be8 (CONDITIONAL_JUMP)  ; LAB_00565be8
    OR AX,word ptr [EBP + -0x4]         ; 00565b97
    JZ 0x00565be8                       ; 00565b9b
        ;   XREF to: 00565be8 (CONDITIONAL_JUMP)  ; LAB_00565be8
    NEG AX                              ; 00565b9d
    CALL crt_unknown.c_integer_power_FUN_00565c12 ; 00565ba0
        ;   XREF to: 00565c12 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_integer_power_FUN_00565c12()
    FLD1                                ; 00565ba5
    TEST byte ptr [0x005c1d98],0x1      ; 00565ba7 | DAT_005c1d98
    JNZ 0x00565bb4                      ; 00565bae
        ;   XREF to: 00565bb4 (CONDITIONAL_JUMP)  ; LAB_00565bb4
    FDIVRP                              ; 00565bb0
    JMP 0x00565bbe                      ; 00565bb2
        ;   XREF to: 00565bbe (UNCONDITIONAL_JUMP)  ; LAB_00565bbe
    MOV EAX,0xf                         ; 00565bb4
        ;   Label: LAB_00565bb4
    CALL crt_math.c_function_dispatch_FUN_0056bf67 ; 00565bb9
        ;   XREF to: 0056bf67 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_function_dispatch_FUN_0056bf67(int function_index)
    FST double ptr [EBP + -0x8]         ; 00565bbe
        ;   Label: LAB_00565bbe
    WAIT                                ; 00565bc1
    MOV AX,word ptr [EBP + -0x8]        ; 00565bc2
    OR AX,word ptr [EBP + -0x6]         ; 00565bc6
    OR AX,word ptr [EBP + -0x4]         ; 00565bca
    JNZ 0x00565be4                      ; 00565bce
        ;   XREF to: 00565be4 (CONDITIONAL_JUMP)  ; LAB_00565be4
    MOV AX,word ptr [EBP + -0x2]        ; 00565bd0
    SHL AX,0x1                          ; 00565bd4
    CMP AX,0xffe0                       ; 00565bd7
    JNZ 0x00565be4                      ; 00565bdb
        ;   XREF to: 00565be4 (CONDITIONAL_JUMP)  ; LAB_00565be4
    MOV AL,0x2                          ; 00565bdd
        ;   Label: LAB_00565bdd
    JMP 0x00565aed                      ; 00565bdf
        ;   XREF to: 00565aed (UNCONDITIONAL_JUMP)  ; LAB_00565aed
    FSTP ST1                            ; 00565be4
        ;   Label: LAB_00565be4
    JMP 0x00565c07                      ; 00565be6
        ;   XREF to: 00565c07 (UNCONDITIONAL_JUMP)  ; LAB_00565c07
    FLDLN2                              ; 00565be8
        ;   Label: LAB_00565be8
    FMUL ST2                            ; 00565bea
    FXCH                                ; 00565bec
    FABS                                ; 00565bee
    FYL2X                               ; 00565bf0
    MOV AL,0x7                          ; 00565bf2
    CALL crt_math.c_exp_FUN_0056bdd2    ; 00565bf4
        ;   XREF to: 0056bdd2 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_exp_FUN_0056bdd2(float10 x)
    CMP AL,0x0                          ; 00565bf9
    JNZ 0x00565bdd                      ; 00565bfb
        ;   XREF to: 00565bdd (CONDITIONAL_JUMP)  ; LAB_00565bdd
    MOV AH,byte ptr [EBP + -0x7]        ; 00565bfd
    SAHF                                ; 00565c00
    JNC 0x00565c05                      ; 00565c01
        ;   XREF to: 00565c05 (CONDITIONAL_JUMP)  ; LAB_00565c05
    FCHS                                ; 00565c03
    FSTP ST1                            ; 00565c05
        ;   Label: LAB_00565c05
    FSTP double ptr [EBP + -0x8]        ; 00565c07
        ;   Label: LAB_00565c07
    FLD double ptr [EBP + -0x8]         ; 00565c0a
    WAIT                                ; 00565c0d
    MOV ESP,EBP                         ; 00565c0e
    POP EBP                             ; 00565c10
    RET                                 ; 00565c11

