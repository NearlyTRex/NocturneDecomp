; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_skeleton_cpp_FUN_00562be0(float *param_1,float *param_2,float *param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562be0
        ;   Label: core_skeleton.cpp_FUN_00562be0
    PUSH ESI                            ; 00562be1
    PUSH EDI                            ; 00562be2
    PUSH EBP                            ; 00562be3
    MOV EBP,ESP                         ; 00562be4
    SUB ESP,0x9c                        ; 00562be6
    AND ESP,0xfffffff8                  ; 00562bec
    MOV EDX,dword ptr [EBP + 0x14]      ; 00562bef
    MOV EBX,dword ptr [EBP + 0x18]      ; 00562bf2
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00562bf5
    FLD float ptr [EBX]                 ; 00562bf8
    FLD float ptr [EBX + 0x4]           ; 00562bfa
    FLD float ptr [EBX + 0x8]           ; 00562bfd
    LEA EDI,[ESP + 0x34]                ; 00562c00
    LEA ESI,[ESP + 0x10]                ; 00562c04
    FXCH ST2                            ; 00562c08
    FSUB float ptr [EDX]                ; 00562c0a
    FXCH                                ; 00562c0c
    FSUB float ptr [EDX + 0x4]          ; 00562c0e
    FXCH ST2                            ; 00562c11
    FSUB float ptr [EDX + 0x8]          ; 00562c13
    FXCH                                ; 00562c16
    FSTP float ptr [ESP + 0x10]         ; 00562c18
    FXCH                                ; 00562c1c
    FSTP float ptr [ESP + 0x14]         ; 00562c1e
    FSTP float ptr [ESP + 0x18]         ; 00562c22
    MOVSD ES:EDI,ESI                    ; 00562c26
    MOVSD ES:EDI,ESI                    ; 00562c27
    MOVSD ES:EDI,ESI                    ; 00562c28
    FLD float ptr [ESP + 0x38]          ; 00562c29
    FMUL ST0                            ; 00562c2d
    FLD float ptr [ESP + 0x34]          ; 00562c2f
    FMUL ST0                            ; 00562c33
    FADDP                               ; 00562c35
    FLD float ptr [ESP + 0x3c]          ; 00562c37
    FMUL ST0                            ; 00562c3b
    FADDP                               ; 00562c3d
    FSQRT                               ; 00562c3f
    FLDZ                                ; 00562c41
    FXCH                                ; 00562c43
    FSTP double ptr [ESP]               ; 00562c45
    FCOMP double ptr [ESP]              ; 00562c48
    FNSTSW AX                           ; 00562c4b
    SAHF                                ; 00562c4d
    JNC 0x00562d0f                      ; 00562c4e
        ;   XREF to: 00562d0f (CONDITIONAL_JUMP)  ; LAB_00562d0f
    FLD double ptr [ESP]                ; 00562c54
    FLD1                                ; 00562c57
    FLD float ptr [ESP + 0x34]          ; 00562c59
    FXCH ST2                            ; 00562c5d
    FSTP float ptr [ESP + 0x74]         ; 00562c5f
    FDIV float ptr [ESP + 0x74]         ; 00562c63
    FXCH                                ; 00562c67
    FMUL ST1                            ; 00562c69
    FLD float ptr [ESP + 0x38]          ; 00562c6b
    FMUL ST2                            ; 00562c6f
    FLD float ptr [ESP + 0x3c]          ; 00562c71
    FMULP ST3                           ; 00562c75
    FLD float ptr [ECX + 0x4]           ; 00562c77
    FXCH                                ; 00562c7a
    FSTP float ptr [ESP + 0x38]         ; 00562c7c
    FMUL float ptr [ESP + 0x38]         ; 00562c80
    FLD float ptr [EDX + 0x4]           ; 00562c84
    FMUL float ptr [ESP + 0x38]         ; 00562c87
    FXCH ST2                            ; 00562c8b
    FSTP float ptr [ESP + 0x34]         ; 00562c8d
    FLD float ptr [ECX]                 ; 00562c91
    FMUL float ptr [ESP + 0x34]         ; 00562c93
    FLD float ptr [EDX]                 ; 00562c97
    FMUL float ptr [ESP + 0x34]         ; 00562c99
    FXCH ST4                            ; 00562c9d
    FSTP float ptr [ESP + 0x3c]         ; 00562c9f
    FXCH ST3                            ; 00562ca3
    FADDP ST2,ST0                       ; 00562ca5
    FADDP ST2,ST0                       ; 00562ca7
    FLD float ptr [EDX + 0x8]           ; 00562ca9
    FMUL float ptr [ESP + 0x3c]         ; 00562cac
    FLD float ptr [ECX + 0x8]           ; 00562cb0
    FMUL float ptr [ESP + 0x3c]         ; 00562cb3
    FXCH                                ; 00562cb7
    FADDP ST2,ST0                       ; 00562cb9
    FADDP ST2,ST0                       ; 00562cbb
    FSUBP                               ; 00562cbd
    FLDZ                                ; 00562cbf
    FXCH                                ; 00562cc1
    FSTP double ptr [ESP + 0x8]         ; 00562cc3
    FCOMP double ptr [ESP + 0x8]        ; 00562cc7
    FNSTSW AX                           ; 00562ccb
    SAHF                                ; 00562ccd
    JNC 0x00562d0f                      ; 00562cce
        ;   XREF to: 00562d0f (CONDITIONAL_JUMP)  ; LAB_00562d0f
    FLD double ptr [ESP + 0x8]          ; 00562cd0
    FCOMP double ptr [ESP]              ; 00562cd4
    FNSTSW AX                           ; 00562cd7
    SAHF                                ; 00562cd9
    JC 0x00562d29                       ; 00562cda
        ;   XREF to: 00562d29 (CONDITIONAL_JUMP)  ; LAB_00562d29
    FLD float ptr [ECX]                 ; 00562cdc
    FSUB float ptr [EBX]                ; 00562cde
    FMUL ST0                            ; 00562ce0
    FLD float ptr [ECX + 0x4]           ; 00562ce2
    FSUB float ptr [EBX + 0x4]          ; 00562ce5
    FMUL ST0                            ; 00562ce8
    FLD float ptr [ECX + 0x8]           ; 00562cea
    FXCH                                ; 00562ced
    FADDP ST2,ST0                       ; 00562cef
    FSUB float ptr [EBX + 0x8]          ; 00562cf1
    FMUL ST0                            ; 00562cf4
        ;   Label: LAB_00562cf4
    FADDP                               ; 00562cf6
    FSQRT                               ; 00562cf8
    FSTP float ptr [ESP + 0x80]         ; 00562cfa
    MOV EAX,dword ptr [ESP + 0x80]      ; 00562d01
    MOV ESP,EBP                         ; 00562d08
    POP EBP                             ; 00562d0a
    POP EDI                             ; 00562d0b
    POP ESI                             ; 00562d0c
    POP EBX                             ; 00562d0d
    RET                                 ; 00562d0e
    FLD float ptr [ECX]                 ; 00562d0f
        ;   Label: LAB_00562d0f
    FSUB float ptr [EDX]                ; 00562d11
    FMUL ST0                            ; 00562d13
    FLD float ptr [ECX + 0x4]           ; 00562d15
    FSUB float ptr [EDX + 0x4]          ; 00562d18
    FMUL ST0                            ; 00562d1b
    FLD float ptr [ECX + 0x8]           ; 00562d1d
    FXCH                                ; 00562d20
    FADDP ST2,ST0                       ; 00562d22
    FSUB float ptr [EDX + 0x8]          ; 00562d24
    JMP 0x00562cf4                      ; 00562d27
        ;   XREF to: 00562cf4 (UNCONDITIONAL_JUMP)  ; LAB_00562cf4
    FLD float ptr [ESP + 0x34]          ; 00562d29
        ;   Label: LAB_00562d29
    FLD double ptr [ESP + 0x8]          ; 00562d2d
    FSTP float ptr [ESP + 0x90]         ; 00562d31
    FMUL float ptr [ESP + 0x90]         ; 00562d38
    FLD float ptr [ESP + 0x38]          ; 00562d3f
    FMUL float ptr [ESP + 0x90]         ; 00562d43
    FLD float ptr [ESP + 0x3c]          ; 00562d4a
    FMUL float ptr [ESP + 0x90]         ; 00562d4e
    LEA EDI,[ESP + 0x40]                ; 00562d55
    LEA ESI,[ESP + 0x28]                ; 00562d59
    FXCH ST2                            ; 00562d5d
    FSTP float ptr [ESP + 0x28]         ; 00562d5f
    FSTP float ptr [ESP + 0x2c]         ; 00562d63
    FSTP float ptr [ESP + 0x30]         ; 00562d67
    MOVSD ES:EDI,ESI                    ; 00562d6b
    MOVSD ES:EDI,ESI                    ; 00562d6c
    MOVSD ES:EDI,ESI                    ; 00562d6d
    FLD float ptr [EDX]                 ; 00562d6e
    FLD float ptr [EDX + 0x4]           ; 00562d70
    FLD float ptr [EDX + 0x8]           ; 00562d73
    LEA EDI,[ESP + 0x1c]                ; 00562d76
    LEA ESI,[ESP + 0x4c]                ; 00562d7a
    FXCH ST2                            ; 00562d7e
    FADD float ptr [ESP + 0x40]         ; 00562d80
    FXCH                                ; 00562d84
    FADD float ptr [ESP + 0x44]         ; 00562d86
    FXCH ST2                            ; 00562d8a
    FADD float ptr [ESP + 0x48]         ; 00562d8c
    FXCH                                ; 00562d90
    FSTP float ptr [ESP + 0x4c]         ; 00562d92
    FXCH                                ; 00562d96
    FSTP float ptr [ESP + 0x50]         ; 00562d98
    FSTP float ptr [ESP + 0x54]         ; 00562d9c
    MOVSD ES:EDI,ESI                    ; 00562da0
    MOVSD ES:EDI,ESI                    ; 00562da1
    MOVSD ES:EDI,ESI                    ; 00562da2
    FLD float ptr [ECX]                 ; 00562da3
    FSUB float ptr [ESP + 0x1c]         ; 00562da5
    FMUL ST0                            ; 00562da9
    FLD float ptr [ECX + 0x4]           ; 00562dab
    FSUB float ptr [ESP + 0x20]         ; 00562dae
    FMUL ST0                            ; 00562db2
    FLD float ptr [ECX + 0x8]           ; 00562db4
    FXCH                                ; 00562db7
    FADDP ST2,ST0                       ; 00562db9
    FSUB float ptr [ESP + 0x24]         ; 00562dbb
    JMP 0x00562cf4                      ; 00562dbf
        ;   XREF to: 00562cf4 (UNCONDITIONAL_JUMP)  ; LAB_00562cf4

