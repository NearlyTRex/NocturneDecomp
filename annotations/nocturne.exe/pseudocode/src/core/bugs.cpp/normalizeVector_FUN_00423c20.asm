; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_normalizeVector_FUN_00423c20(CVector3f *dest)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00423c20
        ;   Label: core_bugs.cpp_normalizeVector_FUN_00423c20
    MOV EBP,ESP                         ; 00423c21
    SUB ESP,0x8                         ; 00423c23
    AND ESP,0xfffffff8                  ; 00423c26
    MOV EDX,dword ptr [EBP + 0x8]       ; 00423c29
    FLD float ptr [EDX + 0x4]           ; 00423c2c
    FMUL ST0                            ; 00423c2f
    FLD float ptr [EDX]                 ; 00423c31
    FMUL ST0                            ; 00423c33
    FADDP                               ; 00423c35
    FLD float ptr [EDX + 0x8]           ; 00423c37
    FMUL ST0                            ; 00423c3a
    FADDP                               ; 00423c3c
    FSQRT                               ; 00423c3e
    FST float ptr [ESP]                 ; 00423c40
    FLDZ                                ; 00423c43
    FCOMPP                              ; 00423c45
    FNSTSW AX                           ; 00423c47
    SAHF                                ; 00423c49
    JNC 0x00423c71                      ; 00423c4a
        ;   XREF to: 00423c71 (CONDITIONAL_JUMP)  ; LAB_00423c71
    FLD1                                ; 00423c4c
    FLD float ptr [EDX]                 ; 00423c4e
    FXCH                                ; 00423c50
    FDIV float ptr [ESP]                ; 00423c52
    FXCH                                ; 00423c55
    FMUL ST1                            ; 00423c57
    FLD float ptr [EDX + 0x4]           ; 00423c59
    FMUL ST2                            ; 00423c5c
    FLD float ptr [EDX + 0x8]           ; 00423c5e
    FMULP ST3                           ; 00423c61
    FXCH                                ; 00423c63
    FSTP float ptr [EDX]                ; 00423c65
    FSTP float ptr [EDX + 0x4]          ; 00423c67
    FSTP float ptr [EDX + 0x8]          ; 00423c6a
    MOV ESP,EBP                         ; 00423c6d
    POP EBP                             ; 00423c6f
    RET                                 ; 00423c70
    MOV dword ptr [EDX + 0x8],0x0       ; 00423c71
        ;   Label: LAB_00423c71
    MOV EAX,dword ptr [EDX + 0x8]       ; 00423c78
    MOV dword ptr [EDX + 0x4],EAX       ; 00423c7b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00423c7e
    MOV dword ptr [EDX],EAX             ; 00423c81
    MOV ESP,EBP                         ; 00423c83
    POP EBP                             ; 00423c85
    RET                                 ; 00423c86

