; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00428010(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00428010
        ;   Label: core_bugs.cpp_FUN_00428010
    MOV EBP,ESP                         ; 00428011
    SUB ESP,0x8                         ; 00428013
    AND ESP,0xfffffff8                  ; 00428016
    MOV EDX,dword ptr [EBP + 0x8]       ; 00428019
    FLD float ptr [EDX + 0x4]           ; 0042801c
    FMUL ST0                            ; 0042801f
    FLD float ptr [EDX]                 ; 00428021
    FMUL ST0                            ; 00428023
    FADDP                               ; 00428025
    FLD float ptr [EDX + 0x8]           ; 00428027
    FMUL ST0                            ; 0042802a
    FADDP                               ; 0042802c
    FSQRT                               ; 0042802e
    FLDZ                                ; 00428030
    FXCH                                ; 00428032
    FSTP float ptr [ESP + 0x4]          ; 00428034
    FCOMP float ptr [ESP + 0x4]         ; 00428038
    FNSTSW AX                           ; 0042803c
    SAHF                                ; 0042803e
    JNC 0x00428067                      ; 0042803f
        ;   XREF to: 00428067 (CONDITIONAL_JUMP)  ; LAB_00428067
    FLD1                                ; 00428041
    FLD float ptr [EDX]                 ; 00428043
    FXCH                                ; 00428045
    FDIV float ptr [ESP + 0x4]          ; 00428047
    FXCH                                ; 0042804b
    FMUL ST1                            ; 0042804d
    FLD float ptr [EDX + 0x4]           ; 0042804f
    FMUL ST2                            ; 00428052
    FLD float ptr [EDX + 0x8]           ; 00428054
    FMULP ST3                           ; 00428057
    FXCH                                ; 00428059
    FSTP float ptr [EDX]                ; 0042805b
    FSTP float ptr [EDX + 0x4]          ; 0042805d
    FSTP float ptr [EDX + 0x8]          ; 00428060
    MOV ESP,EBP                         ; 00428063
    POP EBP                             ; 00428065
    RET                                 ; 00428066
    MOV dword ptr [EDX + 0x8],0x0       ; 00428067
        ;   Label: LAB_00428067
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042806e
    MOV dword ptr [EDX + 0x4],EAX       ; 00428071
    MOV EAX,dword ptr [EDX + 0x4]       ; 00428074
    MOV dword ptr [EDX],EAX             ; 00428077
    MOV ESP,EBP                         ; 00428079
    POP EBP                             ; 0042807b
    RET                                 ; 0042807c

