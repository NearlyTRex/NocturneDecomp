; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_normalizeVector_FUN_00427a60(CVector3f *dest)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00427a60
        ;   Label: core_bugs.cpp_normalizeVector_FUN_00427a60
    MOV EBP,ESP                         ; 00427a61
    SUB ESP,0x8                         ; 00427a63
    AND ESP,0xfffffff8                  ; 00427a66
    MOV EDX,dword ptr [EBP + 0x8]       ; 00427a69
    FLD float ptr [EDX + 0x4]           ; 00427a6c
    FMUL ST0                            ; 00427a6f
    FLD float ptr [EDX]                 ; 00427a71
    FMUL ST0                            ; 00427a73
    FADDP                               ; 00427a75
    FLD float ptr [EDX + 0x8]           ; 00427a77
    FMUL ST0                            ; 00427a7a
    FADDP                               ; 00427a7c
    FSQRT                               ; 00427a7e
    FST float ptr [ESP]                 ; 00427a80
    FLDZ                                ; 00427a83
    FCOMPP                              ; 00427a85
    FNSTSW AX                           ; 00427a87
    SAHF                                ; 00427a89
    JNC 0x00427ab1                      ; 00427a8a
        ;   XREF to: 00427ab1 (CONDITIONAL_JUMP)  ; LAB_00427ab1
    FLD1                                ; 00427a8c
    FLD float ptr [EDX]                 ; 00427a8e
    FXCH                                ; 00427a90
    FDIV float ptr [ESP]                ; 00427a92
    FXCH                                ; 00427a95
    FMUL ST1                            ; 00427a97
    FLD float ptr [EDX + 0x4]           ; 00427a99
    FMUL ST2                            ; 00427a9c
    FLD float ptr [EDX + 0x8]           ; 00427a9e
    FMULP ST3                           ; 00427aa1
    FXCH                                ; 00427aa3
    FSTP float ptr [EDX]                ; 00427aa5
    FSTP float ptr [EDX + 0x4]          ; 00427aa7
    FSTP float ptr [EDX + 0x8]          ; 00427aaa
    MOV ESP,EBP                         ; 00427aad
    POP EBP                             ; 00427aaf
    RET                                 ; 00427ab0
    MOV dword ptr [EDX + 0x8],0x0       ; 00427ab1
        ;   Label: LAB_00427ab1
    MOV EAX,dword ptr [EDX + 0x8]       ; 00427ab8
    MOV dword ptr [EDX + 0x4],EAX       ; 00427abb
    MOV EAX,dword ptr [EDX + 0x4]       ; 00427abe
    MOV dword ptr [EDX],EAX             ; 00427ac1
    MOV ESP,EBP                         ; 00427ac3
    POP EBP                             ; 00427ac5
    RET                                 ; 00427ac6

