; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_stepToward_FUN_00505760(float *value,float target,float max_step)
;
; Parameters:
; float *          Stack[0x4]:4   value
; float            Stack[0x8]:4   target
; float            Stack[0xc]:4   max_step
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00505760
        ;   Label: core_manpuz.cpp_stepToward_FUN_00505760
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505763
    FLD float ptr [ESP + 0x10]          ; 00505767
    FLD float ptr [ESP + 0xc]           ; 0050576b
    FSUB float ptr [EDX]                ; 0050576f
    FXCH                                ; 00505771
    FCHS                                ; 00505773
    FXCH                                ; 00505775
    FSTP float ptr [ESP]                ; 00505777
    FCOMP float ptr [ESP]               ; 0050577a
    FNSTSW AX                           ; 0050577d
    SAHF                                ; 0050577f
    JA 0x0050579c                       ; 00505780
        ;   XREF to: 0050579c (CONDITIONAL_JUMP)  ; LAB_0050579c
    FLD float ptr [ESP]                 ; 00505782
    FCOMP float ptr [ESP + 0x10]        ; 00505785
    FNSTSW AX                           ; 00505789
    SAHF                                ; 0050578b
    JBE 0x005057a4                      ; 0050578c
        ;   XREF to: 005057a4 (CONDITIONAL_JUMP)  ; LAB_005057a4
    FLD float ptr [EDX]                 ; 0050578e
    FADD float ptr [ESP + 0x10]         ; 00505790
    FSTP float ptr [EDX]                ; 00505794
        ;   Label: LAB_00505794
    XOR EAX,EAX                         ; 00505796
    ADD ESP,0x4                         ; 00505798
    RET                                 ; 0050579b
    FLD float ptr [EDX]                 ; 0050579c
        ;   Label: LAB_0050579c
    FSUB float ptr [ESP + 0x10]         ; 0050579e
    JMP 0x00505794                      ; 005057a2
        ;   XREF to: 00505794 (UNCONDITIONAL_JUMP)  ; LAB_00505794
    MOV EAX,dword ptr [ESP + 0xc]       ; 005057a4
        ;   Label: LAB_005057a4
    MOV dword ptr [EDX],EAX             ; 005057a8
    MOV EAX,0x1                         ; 005057aa
    ADD ESP,0x4                         ; 005057af
    RET                                 ; 005057b2

