; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_pendulum_cpp_didPhaseCross_FUN_00549aa0(float threshold,float old_phase,float new_phase)
;
; Parameters:
; float            Stack[0x4]:4   threshold
; float            Stack[0x8]:4   old_phase
; float            Stack[0xc]:4   new_phase
;
; Referenced Globals:
;   double DOUBLE_0063eca1 = -0.5
;   double DOUBLE_0063eca9 = 0.5
;   float FLOAT_0063ecb1 = -1
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 00549aa0
        ;   Label: core_pendulum.cpp_didPhaseCross_FUN_00549aa0
    FADD double ptr [0x0063eca1]        ; 00549aa4 | DOUBLE_0063eca1
    FLD float ptr [ESP + 0x8]           ; 00549aaa
    FCOMPP                              ; 00549aae
    FNSTSW AX                           ; 00549ab0
    SAHF                                ; 00549ab2
    JC 0x00549b71                       ; 00549ab3
        ;   XREF to: 00549b71 (CONDITIONAL_JUMP)  ; LAB_00549b71
    FLD float ptr [ESP + 0x4]           ; 00549ab9
        ;   Label: LAB_00549ab9
    FADD double ptr [0x0063eca9]        ; 00549abd | DOUBLE_0063eca9
    FLD float ptr [ESP + 0x8]           ; 00549ac3
    FCOMPP                              ; 00549ac7
    FNSTSW AX                           ; 00549ac9
    SAHF                                ; 00549acb
    JBE 0x00549adc                      ; 00549acc
        ;   XREF to: 00549adc (CONDITIONAL_JUMP)  ; LAB_00549adc
    FLD float ptr [ESP + 0x8]           ; 00549ace
    FADD float ptr [0x0063ecb1]         ; 00549ad2 | FLOAT_0063ecb1
    FSTP float ptr [ESP + 0x8]          ; 00549ad8
    FLD float ptr [ESP + 0x8]           ; 00549adc
        ;   Label: LAB_00549adc
    FCOMP float ptr [ESP + 0x4]         ; 00549ae0
    FNSTSW AX                           ; 00549ae4
    SAHF                                ; 00549ae6
    JA 0x00549b80                       ; 00549ae7
        ;   XREF to: 00549b80 (CONDITIONAL_JUMP)  ; LAB_00549b80
    FLD float ptr [ESP + 0xc]           ; 00549aed
    FCOMP float ptr [ESP + 0x8]         ; 00549af1
    FNSTSW AX                           ; 00549af5
    SAHF                                ; 00549af7
    JNC 0x00549b04                      ; 00549af8
        ;   XREF to: 00549b04 (CONDITIONAL_JUMP)  ; LAB_00549b04
    FLD1                                ; 00549afa
    FADD float ptr [ESP + 0xc]          ; 00549afc
    FSTP float ptr [ESP + 0xc]          ; 00549b00
    FLD float ptr [ESP + 0xc]           ; 00549b04
        ;   Label: LAB_00549b04
    FCOMP float ptr [ESP + 0x8]         ; 00549b08
    FNSTSW AX                           ; 00549b0c
    SAHF                                ; 00549b0e
    JNC 0x00549b1b                      ; 00549b0f
        ;   XREF to: 00549b1b (CONDITIONAL_JUMP)  ; LAB_00549b1b
    FLD1                                ; 00549b11
    FADD float ptr [ESP + 0xc]          ; 00549b13
    FSTP float ptr [ESP + 0xc]          ; 00549b17
    FLD float ptr [ESP + 0x8]           ; 00549b1b
        ;   Label: LAB_00549b1b
    FLD1                                ; 00549b1f
    FADDP                               ; 00549b21
    FLD float ptr [ESP + 0xc]           ; 00549b23
    FCOMPP                              ; 00549b27
    FNSTSW AX                           ; 00549b29
    SAHF                                ; 00549b2b
    JBE 0x00549b3c                      ; 00549b2c
        ;   XREF to: 00549b3c (CONDITIONAL_JUMP)  ; LAB_00549b3c
    FLD float ptr [ESP + 0xc]           ; 00549b2e
    FADD float ptr [0x0063ecb1]         ; 00549b32 | FLOAT_0063ecb1
    FSTP float ptr [ESP + 0xc]          ; 00549b38
    FLD float ptr [ESP + 0x8]           ; 00549b3c
        ;   Label: LAB_00549b3c
    FLD1                                ; 00549b40
    FADDP                               ; 00549b42
    FLD float ptr [ESP + 0xc]           ; 00549b44
    FCOMPP                              ; 00549b48
    FNSTSW AX                           ; 00549b4a
    SAHF                                ; 00549b4c
    JBE 0x00549b5d                      ; 00549b4d
        ;   XREF to: 00549b5d (CONDITIONAL_JUMP)  ; LAB_00549b5d
    FLD float ptr [ESP + 0xc]           ; 00549b4f
    FADD float ptr [0x0063ecb1]         ; 00549b53 | FLOAT_0063ecb1
    FSTP float ptr [ESP + 0xc]          ; 00549b59
    FLD float ptr [ESP + 0xc]           ; 00549b5d
        ;   Label: LAB_00549b5d
    FCOMP float ptr [ESP + 0x4]         ; 00549b61
    FNSTSW AX                           ; 00549b65
    SAHF                                ; 00549b67
    SETA AL                             ; 00549b68
    AND EAX,0xff                        ; 00549b6b
    RET                                 ; 00549b70
    FLD1                                ; 00549b71
        ;   Label: LAB_00549b71
    FADD float ptr [ESP + 0x8]          ; 00549b73
    FSTP float ptr [ESP + 0x8]          ; 00549b77
    JMP 0x00549ab9                      ; 00549b7b
        ;   XREF to: 00549ab9 (UNCONDITIONAL_JUMP)  ; LAB_00549ab9
    XOR EAX,EAX                         ; 00549b80
        ;   Label: LAB_00549b80
    RET                                 ; 00549b82

