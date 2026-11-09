; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00473d40(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_FUN_00537030 at 0053705c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00473d40
        ;   Label: core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40
    MOV EBP,ESP                         ; 00473d41
    SUB ESP,0x14                        ; 00473d43
    AND ESP,0xfffffff8                  ; 00473d46
    MOV EDX,dword ptr [EBP + 0x8]       ; 00473d49
    FLD float ptr [EBP + 0x14]          ; 00473d4c
    FMUL ST0                            ; 00473d4f
    FLD float ptr [EBP + 0x18]          ; 00473d51
    MOV EAX,dword ptr [EBP + 0xc]       ; 00473d54
    FMUL float ptr [EBP + 0x18]         ; 00473d57
    MOV dword ptr [EDX + 0x10],EAX      ; 00473d5a
    MOV EAX,dword ptr [EBP + 0x10]      ; 00473d5d
    MOV dword ptr [EDX + 0x14],EAX      ; 00473d60
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473d63
    MOV dword ptr [EDX + 0x18],EAX      ; 00473d66
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473d69
    MOV dword ptr [EDX + 0x1c],EAX      ; 00473d6c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00473d6f
    MOV dword ptr [EDX + 0x20],EAX      ; 00473d72
    MOV EAX,dword ptr [EBP + 0x24]      ; 00473d75
    MOV dword ptr [EDX + 0x24],EAX      ; 00473d78
    MOV EAX,dword ptr [EBP + 0x20]      ; 00473d7b
    FADDP                               ; 00473d7e
    MOV dword ptr [EDX + 0x28],EAX      ; 00473d80
    FSQRT                               ; 00473d83
    FLD float ptr [EBP + 0x1c]          ; 00473d85
    FDIV ST0,ST1                        ; 00473d88
    FLD float ptr [EBP + 0xc]           ; 00473d8a
    FMUL float ptr [EBP + 0x14]         ; 00473d8d
    FLD float ptr [EBP + 0x10]          ; 00473d90
    FMUL float ptr [EBP + 0x18]         ; 00473d93
    FLD1                                ; 00473d96
    FADDP ST3,ST0                       ; 00473d98
    FLD ST2                             ; 00473d9a
    FMUL float ptr [EBP + 0x14]         ; 00473d9c
    FXCH                                ; 00473d9f
    FADDP ST2,ST0                       ; 00473da1
    FMUL float ptr [EBP + 0x14]         ; 00473da3
    FXCH                                ; 00473da6
    FSTP float ptr [EDX + 0x2c]         ; 00473da8
    FADD float ptr [EDX + 0x2c]         ; 00473dab
    FXCH                                ; 00473dae
    FMUL float ptr [EBP + 0x18]         ; 00473db0
    FMUL float ptr [EBP + 0x18]         ; 00473db3
    MOV dword ptr [EDX],0x3f8147ae      ; 00473db6
    FXCH ST2                            ; 00473dbc
    FST float ptr [ESP]                 ; 00473dbe
    FXCH ST2                            ; 00473dc1
    FADDP                               ; 00473dc3
    FLDZ                                ; 00473dc5
    FXCH                                ; 00473dc7
    FSTP float ptr [EDX + 0x30]         ; 00473dc9
    FCOMPP                              ; 00473dcc
    FNSTSW AX                           ; 00473dce
    SAHF                                ; 00473dd0
    JNC 0x00473df0                      ; 00473dd1
        ;   XREF to: 00473df0 (CONDITIONAL_JUMP)  ; LAB_00473df0
    FLD1                                ; 00473dd3
    FLD float ptr [EBP + 0x14]          ; 00473dd5
    FXCH                                ; 00473dd8
    FDIV float ptr [ESP]                ; 00473dda
    FXCH                                ; 00473ddd
    FMUL ST1                            ; 00473ddf
    FLD float ptr [EBP + 0x18]          ; 00473de1
    FMULP ST2                           ; 00473de4
    FSTP float ptr [EDX + 0x34]         ; 00473de6
    FSTP float ptr [EDX + 0x38]         ; 00473de9
    MOV ESP,EBP                         ; 00473dec
    POP EBP                             ; 00473dee
    RET                                 ; 00473def
    MOV dword ptr [EDX + 0x38],0x0      ; 00473df0
        ;   Label: LAB_00473df0
    MOV dword ptr [EDX + 0x34],0x0      ; 00473df7
    MOV ESP,EBP                         ; 00473dfe
    POP EBP                             ; 00473e00
    RET                                 ; 00473e01

