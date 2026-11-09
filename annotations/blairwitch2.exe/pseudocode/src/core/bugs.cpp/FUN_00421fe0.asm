; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00421fe0(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00421fe0
        ;   Label: core_bugs.cpp_FUN_00421fe0
    MOV EBP,ESP                         ; 00421fe1
    SUB ESP,0x8                         ; 00421fe3
    AND ESP,0xfffffff8                  ; 00421fe6
    MOV EDX,dword ptr [EBP + 0x8]       ; 00421fe9
    FLD float ptr [EDX + 0x4]           ; 00421fec
    FMUL ST0                            ; 00421fef
    FLD float ptr [EDX]                 ; 00421ff1
    FMUL ST0                            ; 00421ff3
    FADDP                               ; 00421ff5
    FLD float ptr [EDX + 0x8]           ; 00421ff7
    FMUL ST0                            ; 00421ffa
    FADDP                               ; 00421ffc
    FSQRT                               ; 00421ffe
    FLDZ                                ; 00422000
    FXCH                                ; 00422002
    FSTP float ptr [ESP + 0x4]          ; 00422004
    FCOMP float ptr [ESP + 0x4]         ; 00422008
    FNSTSW AX                           ; 0042200c
    SAHF                                ; 0042200e
    JNC 0x00422037                      ; 0042200f
        ;   XREF to: 00422037 (CONDITIONAL_JUMP)  ; LAB_00422037
    FLD1                                ; 00422011
    FLD float ptr [EDX]                 ; 00422013
    FXCH                                ; 00422015
    FDIV float ptr [ESP + 0x4]          ; 00422017
    FXCH                                ; 0042201b
    FMUL ST1                            ; 0042201d
    FLD float ptr [EDX + 0x4]           ; 0042201f
    FMUL ST2                            ; 00422022
    FLD float ptr [EDX + 0x8]           ; 00422024
    FMULP ST3                           ; 00422027
    FXCH                                ; 00422029
    FSTP float ptr [EDX]                ; 0042202b
    FSTP float ptr [EDX + 0x4]          ; 0042202d
    FSTP float ptr [EDX + 0x8]          ; 00422030
    MOV ESP,EBP                         ; 00422033
    POP EBP                             ; 00422035
    RET                                 ; 00422036
    MOV dword ptr [EDX + 0x8],0x0       ; 00422037
        ;   Label: LAB_00422037
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042203e
    MOV dword ptr [EDX + 0x4],EAX       ; 00422041
    MOV EAX,dword ptr [EDX + 0x4]       ; 00422044
    MOV dword ptr [EDX],EAX             ; 00422047
    MOV ESP,EBP                         ; 00422049
    POP EBP                             ; 0042204b
    RET                                 ; 0042204c

