; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_FUN_0053de10 at 0053de3c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00474db0
        ;   Label: core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0
    MOV EBP,ESP                         ; 00474db1
    SUB ESP,0x14                        ; 00474db3
    AND ESP,0xfffffff8                  ; 00474db6
    MOV EDX,dword ptr [EBP + 0x8]       ; 00474db9
    FLD float ptr [EBP + 0x14]          ; 00474dbc
    FMUL ST0                            ; 00474dbf
    FLD float ptr [EBP + 0x18]          ; 00474dc1
    MOV EAX,dword ptr [EBP + 0xc]       ; 00474dc4
    FMUL float ptr [EBP + 0x18]         ; 00474dc7
    MOV dword ptr [EDX + 0x10],EAX      ; 00474dca
    MOV EAX,dword ptr [EBP + 0x10]      ; 00474dcd
    MOV dword ptr [EDX + 0x14],EAX      ; 00474dd0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474dd3
    MOV dword ptr [EDX + 0x18],EAX      ; 00474dd6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00474dd9
    MOV dword ptr [EDX + 0x1c],EAX      ; 00474ddc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00474ddf
    MOV dword ptr [EDX + 0x20],EAX      ; 00474de2
    MOV EAX,dword ptr [EBP + 0x24]      ; 00474de5
    MOV dword ptr [EDX + 0x24],EAX      ; 00474de8
    MOV EAX,dword ptr [EBP + 0x20]      ; 00474deb
    FADDP                               ; 00474dee
    MOV dword ptr [EDX + 0x28],EAX      ; 00474df0
    FSQRT                               ; 00474df3
    FLD float ptr [EBP + 0x1c]          ; 00474df5
    FDIV ST0,ST1                        ; 00474df8
    FLD float ptr [EBP + 0xc]           ; 00474dfa
    FMUL float ptr [EBP + 0x14]         ; 00474dfd
    FLD float ptr [EBP + 0x10]          ; 00474e00
    FMUL float ptr [EBP + 0x18]         ; 00474e03
    FLD1                                ; 00474e06
    FADDP ST3,ST0                       ; 00474e08
    FLD ST2                             ; 00474e0a
    FMUL float ptr [EBP + 0x14]         ; 00474e0c
    FXCH                                ; 00474e0f
    FADDP ST2,ST0                       ; 00474e11
    FMUL float ptr [EBP + 0x14]         ; 00474e13
    FXCH                                ; 00474e16
    FSTP float ptr [EDX + 0x2c]         ; 00474e18
    FADD float ptr [EDX + 0x2c]         ; 00474e1b
    FXCH                                ; 00474e1e
    FMUL float ptr [EBP + 0x18]         ; 00474e20
    FMUL float ptr [EBP + 0x18]         ; 00474e23
    MOV dword ptr [EDX],0x3f8147ae      ; 00474e26
    FXCH ST2                            ; 00474e2c
    FST float ptr [ESP]                 ; 00474e2e
    FXCH ST2                            ; 00474e31
    FADDP                               ; 00474e33
    FLDZ                                ; 00474e35
    FXCH                                ; 00474e37
    FSTP float ptr [EDX + 0x30]         ; 00474e39
    FCOMPP                              ; 00474e3c
    FNSTSW AX                           ; 00474e3e
    SAHF                                ; 00474e40
    JNC 0x00474e60                      ; 00474e41
        ;   XREF to: 00474e60 (CONDITIONAL_JUMP)  ; LAB_00474e60
    FLD1                                ; 00474e43
    FLD float ptr [EBP + 0x14]          ; 00474e45
    FXCH                                ; 00474e48
    FDIV float ptr [ESP]                ; 00474e4a
    FXCH                                ; 00474e4d
    FMUL ST1                            ; 00474e4f
    FLD float ptr [EBP + 0x18]          ; 00474e51
    FMULP ST2                           ; 00474e54
    FSTP float ptr [EDX + 0x34]         ; 00474e56
    FSTP float ptr [EDX + 0x38]         ; 00474e59
    MOV ESP,EBP                         ; 00474e5c
    POP EBP                             ; 00474e5e
    RET                                 ; 00474e5f
    MOV dword ptr [EDX + 0x38],0x0      ; 00474e60
        ;   Label: LAB_00474e60
    MOV dword ptr [EDX + 0x34],0x0      ; 00474e67
    MOV ESP,EBP                         ; 00474e6e
    POP EBP                             ; 00474e70
    RET                                 ; 00474e71

