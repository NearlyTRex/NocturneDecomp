; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dirmat_cpp_CMatrix3x3f_invert_FUN_00471e10(CMatrix3x3f *this_ptr)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_dirmat_cpp_0061edb3
;   TerminatedCString s_CMatrix_invert_Singular__0061edc6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471e10
        ;   Label: core_dirmat.cpp_CMatrix3x3f_invert_FUN_00471e10
    PUSH ESI                            ; 00471e11
    PUSH EBP                            ; 00471e12
    MOV EBP,ESP                         ; 00471e13
    SUB ESP,0x28                        ; 00471e15
    AND ESP,0xfffffff8                  ; 00471e18
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471e1b
    FLD float ptr [EBX + 0xc]           ; 00471e1e
    FMUL float ptr [EBX + 0x20]         ; 00471e21
    FLD float ptr [EBX + 0x14]          ; 00471e24
    FMUL float ptr [EBX + 0x18]         ; 00471e27
    FSUBP                               ; 00471e2a
    FMUL float ptr [EBX + 0x4]          ; 00471e2c
    FLD float ptr [EBX + 0x10]          ; 00471e2f
    FMUL float ptr [EBX + 0x20]         ; 00471e32
    FLD float ptr [EBX + 0x14]          ; 00471e35
    FMUL float ptr [EBX + 0x1c]         ; 00471e38
    FSUBP                               ; 00471e3b
    FMUL float ptr [EBX]                ; 00471e3d
    FSUBRP                              ; 00471e3f
    FLD float ptr [EBX + 0xc]           ; 00471e41
    FMUL float ptr [EBX + 0x1c]         ; 00471e44
    FLD float ptr [EBX + 0x10]          ; 00471e47
    FMUL float ptr [EBX + 0x18]         ; 00471e4a
    FSUBP                               ; 00471e4d
    FMUL float ptr [EBX + 0x8]          ; 00471e4f
    FADDP                               ; 00471e52
    FSTP float ptr [ESP]                ; 00471e54
    TEST dword ptr [ESP],0x7fffffff     ; 00471e57
    JZ 0x00471f9b                       ; 00471e5e
        ;   XREF to: 00471f9b (CONDITIONAL_JUMP)  ; LAB_00471f9b
    FLD float ptr [EBX + 0x10]          ; 00471e64
        ;   Label: LAB_00471e64
    FMUL float ptr [EBX + 0x20]         ; 00471e67
    FLD float ptr [EBX + 0xc]           ; 00471e6a
    FMUL float ptr [EBX + 0x20]         ; 00471e6d
    FLD float ptr [EBX + 0xc]           ; 00471e70
    FMUL float ptr [EBX + 0x1c]         ; 00471e73
    FLD float ptr [EBX + 0x4]           ; 00471e76
    FMUL float ptr [EBX + 0x20]         ; 00471e79
    FLD float ptr [EBX + 0x8]           ; 00471e7c
    FMUL float ptr [EBX + 0x18]         ; 00471e7f
    FLD float ptr [EBX + 0x14]          ; 00471e82
    FMUL float ptr [EBX + 0x1c]         ; 00471e85
    FLD float ptr [EBX + 0x14]          ; 00471e88
    FXCH                                ; 00471e8b
    FSUBP ST6,ST0                       ; 00471e8d
    FMUL float ptr [EBX + 0x18]         ; 00471e8f
    FXCH ST5                            ; 00471e92
    FSTP float ptr [ESP + 0x10]         ; 00471e94
    FLD float ptr [EBX + 0x10]          ; 00471e98
    FMUL float ptr [EBX + 0x18]         ; 00471e9b
    FXCH ST5                            ; 00471e9e
    FSUBP ST4,ST0                       ; 00471ea0
    FLD float ptr [ESP]                 ; 00471ea2
    FXCH ST4                            ; 00471ea5
    FCHS                                ; 00471ea7
    FSTP float ptr [ESP + 0x1c]         ; 00471ea9
    FLD float ptr [EBX + 0x4]           ; 00471ead
    FLD1                                ; 00471eb0
    FXCH                                ; 00471eb2
    FMUL float ptr [EBX + 0x18]         ; 00471eb4
    FXCH                                ; 00471eb7
    FDIVRP ST5,ST0                      ; 00471eb9
    FXCH ST5                            ; 00471ebb
    FSUBP ST3,ST0                       ; 00471ebd
    FXCH ST2                            ; 00471ebf
    FSTP float ptr [ESP + 0xc]          ; 00471ec1
    FLD float ptr [EBX + 0x8]           ; 00471ec5
    FMUL float ptr [EBX + 0x1c]         ; 00471ec8
    FLD float ptr [EBX + 0x4]           ; 00471ecb
    FXCH                                ; 00471ece
    FSUBP ST2,ST0                       ; 00471ed0
    FMUL float ptr [EBX + 0x14]         ; 00471ed2
    FXCH                                ; 00471ed5
    FCHS                                ; 00471ed7
    FSTP float ptr [ESP + 0x18]         ; 00471ed9
    FLD float ptr [EBX]                 ; 00471edd
    FMUL float ptr [EBX + 0x20]         ; 00471edf
    FLD float ptr [EBX + 0x4]           ; 00471ee2
    FMUL float ptr [EBX + 0xc]          ; 00471ee5
    FXCH                                ; 00471ee8
    FSUBRP ST3,ST0                      ; 00471eea
    FLD float ptr [EBX + 0x8]           ; 00471eec
    FMUL float ptr [EBX + 0x10]         ; 00471eef
    FLD float ptr [EBX]                 ; 00471ef2
    FMUL float ptr [EBX + 0x1c]         ; 00471ef4
    FXCH                                ; 00471ef7
    FSUBP ST3,ST0                       ; 00471ef9
    FXCH ST2                            ; 00471efb
    FSTP float ptr [ESP + 0x4]          ; 00471efd
    FLD float ptr [EBX]                 ; 00471f01
    FMUL float ptr [EBX + 0x10]         ; 00471f03
    FLD float ptr [EBX + 0x8]           ; 00471f06
    FMUL float ptr [EBX + 0xc]          ; 00471f09
    FXCH                                ; 00471f0c
    FSUBRP ST2,ST0                      ; 00471f0e
    FXCH                                ; 00471f10
    FSTP float ptr [ESP + 0x14]         ; 00471f12
    FLD float ptr [EBX]                 ; 00471f16
    FMUL float ptr [EBX + 0x14]         ; 00471f18
    FLD float ptr [ESP + 0x10]          ; 00471f1b
    FXCH ST5                            ; 00471f1f
    FSTP float ptr [ESP]                ; 00471f21
    FXCH ST4                            ; 00471f24
    FMUL float ptr [ESP]                ; 00471f26
    FXCH ST2                            ; 00471f29
    FSUBRP ST5,ST0                      ; 00471f2b
    FLD float ptr [ESP + 0x18]          ; 00471f2d
    FMUL float ptr [ESP]                ; 00471f31
    FXCH ST4                            ; 00471f34
    FSUBRP                              ; 00471f36
    FXCH ST4                            ; 00471f38
    FCHS                                ; 00471f3a
    FSTP float ptr [ESP + 0x24]         ; 00471f3c
    FLD float ptr [ESP + 0x4]           ; 00471f40
    FMUL float ptr [ESP]                ; 00471f44
    FXCH ST4                            ; 00471f47
    FCHS                                ; 00471f49
    FLD float ptr [ESP + 0x1c]          ; 00471f4b
    FMUL float ptr [ESP]                ; 00471f4f
    FXCH ST3                            ; 00471f52
    FMUL float ptr [ESP]                ; 00471f54
    FXCH                                ; 00471f57
    FMUL float ptr [ESP]                ; 00471f59
    FLD float ptr [ESP + 0xc]           ; 00471f5c
    FMUL float ptr [ESP]                ; 00471f60
    FXCH ST3                            ; 00471f63
    FSTP float ptr [EBX]                ; 00471f65
    FLD float ptr [ESP + 0x24]          ; 00471f67
    FMUL float ptr [ESP]                ; 00471f6b
    FXCH ST5                            ; 00471f6e
    FSTP float ptr [EBX + 0x4]          ; 00471f70
    FLD float ptr [ESP + 0x14]          ; 00471f73
    FMUL float ptr [ESP]                ; 00471f77
    FXCH ST6                            ; 00471f7a
    FSTP float ptr [EBX + 0x8]          ; 00471f7c
    FXCH ST3                            ; 00471f7f
    FSTP float ptr [EBX + 0xc]          ; 00471f81
    FSTP float ptr [EBX + 0x10]         ; 00471f84
    FXCH                                ; 00471f87
    FSTP float ptr [EBX + 0x14]         ; 00471f89
    FSTP float ptr [EBX + 0x18]         ; 00471f8c
    FSTP float ptr [EBX + 0x1c]         ; 00471f8f
    FSTP float ptr [EBX + 0x20]         ; 00471f92
    MOV ESP,EBP                         ; 00471f95
    POP EBP                             ; 00471f97
    POP ESI                             ; 00471f98
    POP EBX                             ; 00471f99
    RET                                 ; 00471f9a
    MOV ECX,0x61edb3                    ; 00471f9b | = "..\\core\\dirmat.cpp"
        ;   Label: LAB_00471f9b
    MOV ESI,0x69                        ; 00471fa0
    PUSH 0x61edc6                       ; 00471fa5 | = "CMatrix::invert - Singular matrix"
    MOV dword ptr [0x02f0ca48],ECX      ; 00471faa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00471fb0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00471fb6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471fbb
    JMP 0x00471e64                      ; 00471fbe
        ;   XREF to: 00471e64 (UNCONDITIONAL_JUMP)  ; LAB_00471e64

