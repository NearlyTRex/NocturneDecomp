; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050a490()
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0050a490
        ;   Label: core_manpuz.cpp_FUN_0050a490
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050a493
    FLD float ptr [ESP + 0x10]          ; 0050a497
    FLD float ptr [ESP + 0xc]           ; 0050a49b
    FSUB float ptr [EDX]                ; 0050a49f
    FXCH                                ; 0050a4a1
    FCHS                                ; 0050a4a3
    FXCH                                ; 0050a4a5
    FSTP float ptr [ESP]                ; 0050a4a7
    FCOMP float ptr [ESP]               ; 0050a4aa
    FNSTSW AX                           ; 0050a4ad
    SAHF                                ; 0050a4af
    JA 0x0050a4cc                       ; 0050a4b0
        ;   XREF to: 0050a4cc (CONDITIONAL_JUMP)  ; LAB_0050a4cc
    FLD float ptr [ESP]                 ; 0050a4b2
    FCOMP float ptr [ESP + 0x10]        ; 0050a4b5
    FNSTSW AX                           ; 0050a4b9
    SAHF                                ; 0050a4bb
    JBE 0x0050a4d4                      ; 0050a4bc
        ;   XREF to: 0050a4d4 (CONDITIONAL_JUMP)  ; LAB_0050a4d4
    FLD float ptr [EDX]                 ; 0050a4be
    FADD float ptr [ESP + 0x10]         ; 0050a4c0
    FSTP float ptr [EDX]                ; 0050a4c4
        ;   Label: LAB_0050a4c4
    XOR EAX,EAX                         ; 0050a4c6
    ADD ESP,0x4                         ; 0050a4c8
    RET                                 ; 0050a4cb
    FLD float ptr [EDX]                 ; 0050a4cc
        ;   Label: LAB_0050a4cc
    FSUB float ptr [ESP + 0x10]         ; 0050a4ce
    JMP 0x0050a4c4                      ; 0050a4d2
        ;   XREF to: 0050a4c4 (UNCONDITIONAL_JUMP)  ; LAB_0050a4c4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050a4d4
        ;   Label: LAB_0050a4d4
    MOV dword ptr [EDX],EAX             ; 0050a4d8
    MOV EAX,0x1                         ; 0050a4da
    ADD ESP,0x4                         ; 0050a4df
    RET                                 ; 0050a4e2

