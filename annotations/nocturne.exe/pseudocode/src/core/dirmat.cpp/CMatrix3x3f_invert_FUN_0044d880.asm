; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_CMatrix3x3f_invert_FUN_0044d880(float *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_dirmat_cpp_0057c4a6
;   TerminatedCString s_CMatrix_invert_Singular_0057c4b9
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d880
        ;   Label: core_dirmat.cpp_CMatrix3x3f_invert_FUN_0044d880
    PUSH ESI                            ; 0044d881
    PUSH EBP                            ; 0044d882
    MOV EBP,ESP                         ; 0044d883
    SUB ESP,0x28                        ; 0044d885
    AND ESP,0xfffffff8                  ; 0044d888
    MOV EBX,dword ptr [EBP + 0x10]      ; 0044d88b
    FLD float ptr [EBX + 0xc]           ; 0044d88e
    FMUL float ptr [EBX + 0x20]         ; 0044d891
    FLD float ptr [EBX + 0x14]          ; 0044d894
    FMUL float ptr [EBX + 0x18]         ; 0044d897
    FSUBP                               ; 0044d89a
    FMUL float ptr [EBX + 0x4]          ; 0044d89c
    FLD float ptr [EBX + 0x10]          ; 0044d89f
    FMUL float ptr [EBX + 0x20]         ; 0044d8a2
    FLD float ptr [EBX + 0x14]          ; 0044d8a5
    FMUL float ptr [EBX + 0x1c]         ; 0044d8a8
    FSUBP                               ; 0044d8ab
    FMUL float ptr [EBX]                ; 0044d8ad
    FSUBRP                              ; 0044d8af
    FLD float ptr [EBX + 0xc]           ; 0044d8b1
    FMUL float ptr [EBX + 0x1c]         ; 0044d8b4
    FLD float ptr [EBX + 0x10]          ; 0044d8b7
    FMUL float ptr [EBX + 0x18]         ; 0044d8ba
    FSUBP                               ; 0044d8bd
    FMUL float ptr [EBX + 0x8]          ; 0044d8bf
    FADDP                               ; 0044d8c2
    FSTP float ptr [ESP]                ; 0044d8c4
    TEST dword ptr [ESP],0x7fffffff     ; 0044d8c7
    JZ 0x0044da0b                       ; 0044d8ce
        ;   XREF to: 0044da0b (CONDITIONAL_JUMP)  ; LAB_0044da0b
    FLD float ptr [EBX + 0x10]          ; 0044d8d4
        ;   Label: LAB_0044d8d4
    FMUL float ptr [EBX + 0x20]         ; 0044d8d7
    FLD float ptr [EBX + 0xc]           ; 0044d8da
    FMUL float ptr [EBX + 0x20]         ; 0044d8dd
    FLD float ptr [EBX + 0xc]           ; 0044d8e0
    FMUL float ptr [EBX + 0x1c]         ; 0044d8e3
    FLD float ptr [EBX + 0x4]           ; 0044d8e6
    FMUL float ptr [EBX + 0x20]         ; 0044d8e9
    FLD float ptr [EBX + 0x8]           ; 0044d8ec
    FMUL float ptr [EBX + 0x18]         ; 0044d8ef
    FLD float ptr [EBX + 0x14]          ; 0044d8f2
    FMUL float ptr [EBX + 0x1c]         ; 0044d8f5
    FLD float ptr [EBX + 0x14]          ; 0044d8f8
    FXCH                                ; 0044d8fb
    FSUBP ST6,ST0                       ; 0044d8fd
    FMUL float ptr [EBX + 0x18]         ; 0044d8ff
    FXCH ST5                            ; 0044d902
    FSTP float ptr [ESP + 0x10]         ; 0044d904
    FLD float ptr [EBX + 0x10]          ; 0044d908
    FMUL float ptr [EBX + 0x18]         ; 0044d90b
    FXCH ST5                            ; 0044d90e
    FSUBP ST4,ST0                       ; 0044d910
    FLD float ptr [ESP]                 ; 0044d912
    FXCH ST4                            ; 0044d915
    FCHS                                ; 0044d917
    FSTP float ptr [ESP + 0x1c]         ; 0044d919
    FLD float ptr [EBX + 0x4]           ; 0044d91d
    FLD1                                ; 0044d920
    FXCH                                ; 0044d922
    FMUL float ptr [EBX + 0x18]         ; 0044d924
    FXCH                                ; 0044d927
    FDIVRP ST5,ST0                      ; 0044d929
    FXCH ST5                            ; 0044d92b
    FSUBP ST3,ST0                       ; 0044d92d
    FXCH ST2                            ; 0044d92f
    FSTP float ptr [ESP + 0xc]          ; 0044d931
    FLD float ptr [EBX + 0x8]           ; 0044d935
    FMUL float ptr [EBX + 0x1c]         ; 0044d938
    FLD float ptr [EBX + 0x4]           ; 0044d93b
    FXCH                                ; 0044d93e
    FSUBP ST2,ST0                       ; 0044d940
    FMUL float ptr [EBX + 0x14]         ; 0044d942
    FXCH                                ; 0044d945
    FCHS                                ; 0044d947
    FSTP float ptr [ESP + 0x18]         ; 0044d949
    FLD float ptr [EBX]                 ; 0044d94d
    FMUL float ptr [EBX + 0x20]         ; 0044d94f
    FLD float ptr [EBX + 0x4]           ; 0044d952
    FMUL float ptr [EBX + 0xc]          ; 0044d955
    FXCH                                ; 0044d958
    FSUBRP ST3,ST0                      ; 0044d95a
    FLD float ptr [EBX + 0x8]           ; 0044d95c
    FMUL float ptr [EBX + 0x10]         ; 0044d95f
    FLD float ptr [EBX]                 ; 0044d962
    FMUL float ptr [EBX + 0x1c]         ; 0044d964
    FXCH                                ; 0044d967
    FSUBP ST3,ST0                       ; 0044d969
    FXCH ST2                            ; 0044d96b
    FSTP float ptr [ESP + 0x4]          ; 0044d96d
    FLD float ptr [EBX]                 ; 0044d971
    FMUL float ptr [EBX + 0x10]         ; 0044d973
    FLD float ptr [EBX + 0x8]           ; 0044d976
    FMUL float ptr [EBX + 0xc]          ; 0044d979
    FXCH                                ; 0044d97c
    FSUBRP ST2,ST0                      ; 0044d97e
    FXCH                                ; 0044d980
    FSTP float ptr [ESP + 0x14]         ; 0044d982
    FLD float ptr [EBX]                 ; 0044d986
    FMUL float ptr [EBX + 0x14]         ; 0044d988
    FLD float ptr [ESP + 0x10]          ; 0044d98b
    FXCH ST5                            ; 0044d98f
    FSTP float ptr [ESP]                ; 0044d991
    FXCH ST4                            ; 0044d994
    FMUL float ptr [ESP]                ; 0044d996
    FXCH ST2                            ; 0044d999
    FSUBRP ST5,ST0                      ; 0044d99b
    FLD float ptr [ESP + 0x18]          ; 0044d99d
    FMUL float ptr [ESP]                ; 0044d9a1
    FXCH ST4                            ; 0044d9a4
    FSUBRP                              ; 0044d9a6
    FXCH ST4                            ; 0044d9a8
    FCHS                                ; 0044d9aa
    FSTP float ptr [ESP + 0x24]         ; 0044d9ac
    FLD float ptr [ESP + 0x4]           ; 0044d9b0
    FMUL float ptr [ESP]                ; 0044d9b4
    FXCH ST4                            ; 0044d9b7
    FCHS                                ; 0044d9b9
    FLD float ptr [ESP + 0x1c]          ; 0044d9bb
    FMUL float ptr [ESP]                ; 0044d9bf
    FXCH ST3                            ; 0044d9c2
    FMUL float ptr [ESP]                ; 0044d9c4
    FXCH                                ; 0044d9c7
    FMUL float ptr [ESP]                ; 0044d9c9
    FLD float ptr [ESP + 0xc]           ; 0044d9cc
    FMUL float ptr [ESP]                ; 0044d9d0
    FXCH ST3                            ; 0044d9d3
    FSTP float ptr [EBX]                ; 0044d9d5
    FLD float ptr [ESP + 0x24]          ; 0044d9d7
    FMUL float ptr [ESP]                ; 0044d9db
    FXCH ST5                            ; 0044d9de
    FSTP float ptr [EBX + 0x4]          ; 0044d9e0
    FLD float ptr [ESP + 0x14]          ; 0044d9e3
    FMUL float ptr [ESP]                ; 0044d9e7
    FXCH ST6                            ; 0044d9ea
    FSTP float ptr [EBX + 0x8]          ; 0044d9ec
    FXCH ST3                            ; 0044d9ef
    FSTP float ptr [EBX + 0xc]          ; 0044d9f1
    FSTP float ptr [EBX + 0x10]         ; 0044d9f4
    FXCH                                ; 0044d9f7
    FSTP float ptr [EBX + 0x14]         ; 0044d9f9
    FSTP float ptr [EBX + 0x18]         ; 0044d9fc
    FSTP float ptr [EBX + 0x1c]         ; 0044d9ff
    FSTP float ptr [EBX + 0x20]         ; 0044da02
    MOV ESP,EBP                         ; 0044da05
    POP EBP                             ; 0044da07
    POP ESI                             ; 0044da08
    POP EBX                             ; 0044da09
    RET                                 ; 0044da0a
    MOV ECX,0x57c4a6                    ; 0044da0b | = "..\\core\\dirmat.cpp"
        ;   Label: LAB_0044da0b
    MOV ESI,0x69                        ; 0044da10
    PUSH 0x57c4b9                       ; 0044da15 | = "CMatrix::invert - Singular matrix"
    MOV dword ptr [0x01cc4800],ECX      ; 0044da1a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044da20 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044da26
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044da2b
    JMP 0x0044d8d4                      ; 0044da2e
        ;   XREF to: 0044d8d4 (UNCONDITIONAL_JUMP)  ; LAB_0044d8d4

