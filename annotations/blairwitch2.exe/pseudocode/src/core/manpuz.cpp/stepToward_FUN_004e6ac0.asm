; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_manpuz_cpp_stepToward_FUN_004e6ac0(float *param_1,float param_2,float param_3)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004e6ac0
        ;   Label: core_manpuz.cpp_stepToward_FUN_004e6ac0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e6ac3
    FLD float ptr [ESP + 0x10]          ; 004e6ac7
    FLD float ptr [ESP + 0xc]           ; 004e6acb
    FSUB float ptr [EDX]                ; 004e6acf
    FXCH                                ; 004e6ad1
    FCHS                                ; 004e6ad3
    FXCH                                ; 004e6ad5
    FSTP float ptr [ESP]                ; 004e6ad7
    FCOMP float ptr [ESP]               ; 004e6ada
    FNSTSW AX                           ; 004e6add
    SAHF                                ; 004e6adf
    JA 0x004e6afc                       ; 004e6ae0
        ;   XREF to: 004e6afc (CONDITIONAL_JUMP)  ; LAB_004e6afc
    FLD float ptr [ESP]                 ; 004e6ae2
    FCOMP float ptr [ESP + 0x10]        ; 004e6ae5
    FNSTSW AX                           ; 004e6ae9
    SAHF                                ; 004e6aeb
    JBE 0x004e6b04                      ; 004e6aec
        ;   XREF to: 004e6b04 (CONDITIONAL_JUMP)  ; LAB_004e6b04
    FLD float ptr [EDX]                 ; 004e6aee
    FADD float ptr [ESP + 0x10]         ; 004e6af0
    FSTP float ptr [EDX]                ; 004e6af4
        ;   Label: LAB_004e6af4
    XOR EAX,EAX                         ; 004e6af6
    ADD ESP,0x4                         ; 004e6af8
    RET                                 ; 004e6afb
    FLD float ptr [EDX]                 ; 004e6afc
        ;   Label: LAB_004e6afc
    FSUB float ptr [ESP + 0x10]         ; 004e6afe
    JMP 0x004e6af4                      ; 004e6b02
        ;   XREF to: 004e6af4 (UNCONDITIONAL_JUMP)  ; LAB_004e6af4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e6b04
        ;   Label: LAB_004e6b04
    MOV dword ptr [EDX],EAX             ; 004e6b08
    MOV EAX,0x1                         ; 004e6b0a
    ADD ESP,0x4                         ; 004e6b0f
    RET                                 ; 004e6b12

