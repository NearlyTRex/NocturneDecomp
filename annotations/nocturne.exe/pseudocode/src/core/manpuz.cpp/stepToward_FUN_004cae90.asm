; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_manpuz_cpp_stepToward_FUN_004cae90(float *param_1,float param_2,float param_3)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004cae90
        ;   Label: core_manpuz.cpp_stepToward_FUN_004cae90
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cae93
    FLD float ptr [ESP + 0x10]          ; 004cae97
    FLD float ptr [ESP + 0xc]           ; 004cae9b
    FSUB float ptr [EDX]                ; 004cae9f
    FXCH                                ; 004caea1
    FCHS                                ; 004caea3
    FXCH                                ; 004caea5
    FSTP float ptr [ESP]                ; 004caea7
    FCOMP float ptr [ESP]               ; 004caeaa
    FNSTSW AX                           ; 004caead
    SAHF                                ; 004caeaf
    JA 0x004caecc                       ; 004caeb0
        ;   XREF to: 004caecc (CONDITIONAL_JUMP)  ; LAB_004caecc
    FLD float ptr [ESP]                 ; 004caeb2
    FCOMP float ptr [ESP + 0x10]        ; 004caeb5
    FNSTSW AX                           ; 004caeb9
    SAHF                                ; 004caebb
    JBE 0x004caed4                      ; 004caebc
        ;   XREF to: 004caed4 (CONDITIONAL_JUMP)  ; LAB_004caed4
    FLD float ptr [EDX]                 ; 004caebe
    FADD float ptr [ESP + 0x10]         ; 004caec0
    FSTP float ptr [EDX]                ; 004caec4
        ;   Label: LAB_004caec4
    XOR EAX,EAX                         ; 004caec6
    ADD ESP,0x4                         ; 004caec8
    RET                                 ; 004caecb
    FLD float ptr [EDX]                 ; 004caecc
        ;   Label: LAB_004caecc
    FSUB float ptr [ESP + 0x10]         ; 004caece
    JMP 0x004caec4                      ; 004caed2
        ;   XREF to: 004caec4 (UNCONDITIONAL_JUMP)  ; LAB_004caec4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004caed4
        ;   Label: LAB_004caed4
    MOV dword ptr [EDX],EAX             ; 004caed8
    MOV EAX,0x1                         ; 004caeda
    ADD ESP,0x4                         ; 004caedf
    RET                                 ; 004caee2

