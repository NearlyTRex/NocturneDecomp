; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcube_cpp_FUN_00444c90(SIntersectXZCylinder *cylinder)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00445010 at 004452c6
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00444f70 at 00444f99
;
; Referenced Globals:
;   undefined4 DAT_005ce7da
;   undefined4 DAT_005ce7de
;   undefined4 DAT_005ce7e2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444c90
        ;   Label: core_dcube.cpp_FUN_00444c90
    PUSH EBP                            ; 00444c91
    MOV EBP,ESP                         ; 00444c92
    SUB ESP,0x58                        ; 00444c94
    AND ESP,0xfffffff8                  ; 00444c97
    MOV EDX,dword ptr [EBP + 0xc]       ; 00444c9a
    FLD float ptr [EDX + 0x44]          ; 00444c9d
    FLD float ptr [EDX + 0x48]          ; 00444ca0
    FSUB float ptr [EDX + 0x40]         ; 00444ca3
    FXCH                                ; 00444ca6
    FSUB float ptr [EDX + 0x3c]         ; 00444ca8
    FXCH                                ; 00444cab
    FST float ptr [ESP + 0x1c]          ; 00444cad
    FCHS                                ; 00444cb1
    FST float ptr [ESP + 0x50]          ; 00444cb3
    FMUL float ptr [ESP + 0x50]         ; 00444cb7
    FXCH                                ; 00444cbb
    FST float ptr [ESP + 0x20]          ; 00444cbd
    FMUL float ptr [ESP + 0x20]         ; 00444cc1
    FADDP                               ; 00444cc5
    FLDZ                                ; 00444cc7
    FXCH                                ; 00444cc9
    FSTP double ptr [ESP + 0x10]        ; 00444ccb
    FCOMP double ptr [ESP + 0x10]       ; 00444ccf
    FNSTSW AX                           ; 00444cd3
    SAHF                                ; 00444cd5
    JNC 0x00444ef0                      ; 00444cd6
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD double ptr [ESP + 0x10]         ; 00444cdc
    FSQRT                               ; 00444ce0
    FLD float ptr [ESP + 0x50]          ; 00444ce2
    FLD1                                ; 00444ce6
    FDIVRP ST2,ST0                      ; 00444ce8
    FMUL ST1                            ; 00444cea
    FLD float ptr [EDX + 0x10]          ; 00444cec
    FSUB float ptr [EDX + 0x3c]         ; 00444cef
    FXCH                                ; 00444cf2
    FSTP float ptr [ESP + 0x50]         ; 00444cf4
    FMUL float ptr [ESP + 0x50]         ; 00444cf8
    FLD float ptr [ESP + 0x20]          ; 00444cfc
    FMULP ST2                           ; 00444d00
    FLD float ptr [EDX + 0x14]          ; 00444d02
    FSUB float ptr [EDX + 0x40]         ; 00444d05
    FXCH ST2                            ; 00444d08
    FSTP float ptr [ESP + 0x4c]         ; 00444d0a
    FXCH                                ; 00444d0e
    FMUL float ptr [ESP + 0x4c]         ; 00444d10
    FADDP                               ; 00444d14
    FLDZ                                ; 00444d16
    FCOMPP                              ; 00444d18
    FNSTSW AX                           ; 00444d1a
    SAHF                                ; 00444d1c
    JC 0x00444ef7                       ; 00444d1d
        ;   XREF to: 00444ef7 (CONDITIONAL_JUMP)  ; LAB_00444ef7
    FLD float ptr [EDX + 0x18]          ; 00444d23
        ;   Label: LAB_00444d23
    FMUL float ptr [ESP + 0x50]         ; 00444d26
    FLD float ptr [EDX + 0x1c]          ; 00444d2a
    FMUL float ptr [ESP + 0x4c]         ; 00444d2d
    FADDP                               ; 00444d31
    FST float ptr [ESP + 0x28]          ; 00444d33
    FLDZ                                ; 00444d37
    FCOMPP                              ; 00444d39
    FNSTSW AX                           ; 00444d3b
    SAHF                                ; 00444d3d
    JNC 0x00444ef0                      ; 00444d3e
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD float ptr [ESP + 0x50]          ; 00444d44
    FLD float ptr [EDX + 0x3c]          ; 00444d48
    FMUL ST1                            ; 00444d4b
    FLD float ptr [EDX + 0x10]          ; 00444d4d
    FMULP ST2                           ; 00444d50
    FLD float ptr [ESP + 0x4c]          ; 00444d52
    FLD float ptr [EDX + 0x40]          ; 00444d56
    FMUL ST1                            ; 00444d59
    FLD float ptr [EDX + 0x14]          ; 00444d5b
    FMULP ST2                           ; 00444d5e
    FADDP ST2,ST0                       ; 00444d60
    FADDP ST2,ST0                       ; 00444d62
    FSTP float ptr [ESP + 0x40]         ; 00444d64
    FCOMP float ptr [ESP + 0x40]        ; 00444d68
    FNSTSW AX                           ; 00444d6c
    SAHF                                ; 00444d6e
    JA 0x00444ef0                       ; 00444d6f
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD float ptr [ESP + 0x50]          ; 00444d75
    FLD ST0                             ; 00444d79
    FMUL float ptr [EDX + 0x20]         ; 00444d7b
    FLD float ptr [ESP + 0x4c]          ; 00444d7e
    FLD ST0                             ; 00444d82
    FMUL float ptr [EDX + 0x20]         ; 00444d84
    FXCH ST2                            ; 00444d87
    FADD float ptr [EDX + 0x10]         ; 00444d89
    FXCH ST2                            ; 00444d8c
    FADD float ptr [EDX + 0x14]         ; 00444d8e
    FXCH ST2                            ; 00444d91
    FST float ptr [ESP + 0x3c]          ; 00444d93
    FMULP ST3                           ; 00444d97
    FXCH                                ; 00444d99
    FST float ptr [ESP + 0x44]          ; 00444d9b
    FMULP                               ; 00444d9f
    FADDP                               ; 00444da1
    FSUBR float ptr [ESP + 0x40]        ; 00444da3
    FST float ptr [ESP + 0x24]          ; 00444da7
    FCOMP float ptr [ESP + 0x28]        ; 00444dab
    FNSTSW AX                           ; 00444daf
    SAHF                                ; 00444db1
    JA 0x00444ef0                       ; 00444db2
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD float ptr [ESP + 0x24]          ; 00444db8
    FDIV float ptr [ESP + 0x28]         ; 00444dbc
    FST float ptr [ESP + 0x24]          ; 00444dc0
    FCOMP float ptr [EDX]               ; 00444dc4
    FNSTSW AX                           ; 00444dc6
    SAHF                                ; 00444dc8
    JNC 0x00444ef0                      ; 00444dc9
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD float ptr [ESP + 0x20]          ; 00444dcf
    FABS                                ; 00444dd3
    FLD float ptr [ESP + 0x1c]          ; 00444dd5
    FABS                                ; 00444dd9
    FLD float ptr [ESP + 0x24]          ; 00444ddb
    FLD float ptr [EDX + 0x18]          ; 00444ddf
    FMUL ST1                            ; 00444de2
    FLD float ptr [EDX + 0x1c]          ; 00444de4
    FMULP ST2                           ; 00444de7
    FADD float ptr [ESP + 0x3c]         ; 00444de9
    FXCH                                ; 00444ded
    FADD float ptr [ESP + 0x44]         ; 00444def
    FXCH                                ; 00444df3
    FSTP float ptr [EDX + 0x54]         ; 00444df5
    FSTP float ptr [EDX + 0x58]         ; 00444df8
    FCOMPP                              ; 00444dfb
    FNSTSW AX                           ; 00444dfd
    SAHF                                ; 00444dff
    JNC 0x00444f12                      ; 00444e00
        ;   XREF to: 00444f12 (CONDITIONAL_JUMP)  ; LAB_00444f12
    FLD float ptr [EDX + 0x54]          ; 00444e06
    FSUB float ptr [EDX + 0x3c]         ; 00444e09
    FDIV float ptr [ESP + 0x20]         ; 00444e0c
    FSTP float ptr [EDX + 0x50]         ; 00444e10
        ;   Label: LAB_00444e10
    FLDZ                                ; 00444e13
    FLD float ptr [EDX + 0x50]          ; 00444e15
    FSTP double ptr [ESP + 0x8]         ; 00444e18
    FCOMP double ptr [ESP + 0x8]        ; 00444e1c
    FNSTSW AX                           ; 00444e20
    SAHF                                ; 00444e22
    JBE 0x00444f21                      ; 00444e23
        ;   XREF to: 00444f21 (CONDITIONAL_JUMP)  ; LAB_00444f21
    MOV dword ptr [EDX + 0x50],0x0      ; 00444e29
    FLD float ptr [EDX + 0x3c]          ; 00444e30
    MOV EAX,dword ptr [EDX + 0x40]      ; 00444e33
    MOV dword ptr [EDX + 0x58],EAX      ; 00444e36
        ;   Label: LAB_00444e36
    FSTP float ptr [EDX + 0x54]         ; 00444e39
    FLD float ptr [EDX + 0x18]          ; 00444e3c
    FMUL ST0                            ; 00444e3f
    FLD float ptr [EDX + 0x18]          ; 00444e41
    FLD float ptr [EDX + 0x54]          ; 00444e44
    FSUB float ptr [EDX + 0x10]         ; 00444e47
    FXCH                                ; 00444e4a
    FMUL ST1                            ; 00444e4c
    FLD float ptr [EDX + 0x1c]          ; 00444e4e
    FMUL ST0                            ; 00444e51
    FLD ST2                             ; 00444e53
    FMULP ST3                           ; 00444e55
    FLD float ptr [EDX + 0x58]          ; 00444e57
    FSUB float ptr [EDX + 0x14]         ; 00444e5a
    FLD float ptr [EDX + 0x1c]          ; 00444e5d
    FMUL ST1                            ; 00444e60
    FLD ST1                             ; 00444e62
    FXCH ST3                            ; 00444e64
    FADDP ST6,ST0                       ; 00444e66
    FXCH ST2                            ; 00444e68
    FMULP                               ; 00444e6a
    FXCH ST4                            ; 00444e6c
    FST float ptr [ESP + 0x38]          ; 00444e6e
    FMUL float ptr [0x005ce7de]         ; 00444e72 | DAT_005ce7de
    FXCH ST4                            ; 00444e78
    FADDP ST3,ST0                       ; 00444e7a
    FADDP                               ; 00444e7c
    FLD float ptr [EDX + 0x20]          ; 00444e7e
    FMUL ST0                            ; 00444e81
    FXCH                                ; 00444e83
    FMUL float ptr [0x005ce7da]         ; 00444e85 | DAT_005ce7da
    FXCH                                ; 00444e8b
    FSUBP ST2,ST0                       ; 00444e8d
    FXCH ST2                            ; 00444e8f
    FMULP                               ; 00444e91
    FXCH                                ; 00444e93
    FST float ptr [ESP + 0x48]          ; 00444e95
    FMUL float ptr [ESP + 0x48]         ; 00444e99
    FSUBRP                              ; 00444e9d
    FLDZ                                ; 00444e9f
    FXCH                                ; 00444ea1
    FSTP float ptr [ESP + 0x18]         ; 00444ea3
    FCOMP float ptr [ESP + 0x18]        ; 00444ea7
    FNSTSW AX                           ; 00444eab
    SAHF                                ; 00444ead
    JA 0x00444ef0                       ; 00444eae
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD float ptr [ESP + 0x48]          ; 00444eb0
    FCHS                                ; 00444eb4
    FLD float ptr [ESP + 0x18]          ; 00444eb6
    FSQRT                               ; 00444eba
    FSUBP                               ; 00444ebc
    FLD float ptr [ESP + 0x38]          ; 00444ebe
    FMUL float ptr [0x005ce7e2]         ; 00444ec2 | DAT_005ce7e2
    FDIVP                               ; 00444ec8
    FLDZ                                ; 00444eca
    FXCH                                ; 00444ecc
    FST float ptr [EDX + 0x4c]          ; 00444ece
    FSTP double ptr [ESP]               ; 00444ed1
    FCOMP double ptr [ESP]              ; 00444ed4
    FNSTSW AX                           ; 00444ed7
    SAHF                                ; 00444ed9
    JA 0x00444ef0                       ; 00444eda
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD1                                ; 00444edc
    FCOMP double ptr [ESP]              ; 00444ede
    FNSTSW AX                           ; 00444ee1
    SAHF                                ; 00444ee3
    JC 0x00444ef0                       ; 00444ee4
        ;   XREF to: 00444ef0 (CONDITIONAL_JUMP)  ; LAB_00444ef0
    FLD float ptr [EDX + 0x4c]          ; 00444ee6
    FCOMP float ptr [EDX]               ; 00444ee9
    FNSTSW AX                           ; 00444eeb
    SAHF                                ; 00444eed
    JC 0x00444f58                       ; 00444eee
        ;   XREF to: 00444f58 (CONDITIONAL_JUMP)  ; LAB_00444f58
    XOR EAX,EAX                         ; 00444ef0
        ;   Label: LAB_00444ef0
    MOV ESP,EBP                         ; 00444ef2
    POP EBP                             ; 00444ef4
    POP EBX                             ; 00444ef5
    RET                                 ; 00444ef6
    MOV BL,byte ptr [ESP + 0x4f]        ; 00444ef7
        ;   Label: LAB_00444ef7
    MOV AH,byte ptr [ESP + 0x53]        ; 00444efb
    XOR BL,0x80                         ; 00444eff
    XOR AH,0x80                         ; 00444f02
    MOV byte ptr [ESP + 0x4f],BL        ; 00444f05
    MOV byte ptr [ESP + 0x53],AH        ; 00444f09
    JMP 0x00444d23                      ; 00444f0d
        ;   XREF to: 00444d23 (UNCONDITIONAL_JUMP)  ; LAB_00444d23
    FLD float ptr [EDX + 0x58]          ; 00444f12
        ;   Label: LAB_00444f12
    FSUB float ptr [EDX + 0x40]         ; 00444f15
    FDIV float ptr [ESP + 0x1c]         ; 00444f18
    JMP 0x00444e10                      ; 00444f1c
        ;   XREF to: 00444e10 (UNCONDITIONAL_JUMP)  ; LAB_00444e10
    FLD1                                ; 00444f21
        ;   Label: LAB_00444f21
    FCOMP double ptr [ESP + 0x8]        ; 00444f23
    FNSTSW AX                           ; 00444f27
    SAHF                                ; 00444f29
    JNC 0x00444f3e                      ; 00444f2a
        ;   XREF to: 00444f3e (CONDITIONAL_JUMP)  ; LAB_00444f3e
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 00444f2c
    FLD float ptr [EDX + 0x44]          ; 00444f33
    MOV EAX,dword ptr [EDX + 0x48]      ; 00444f36
    JMP 0x00444e36                      ; 00444f39
        ;   XREF to: 00444e36 (UNCONDITIONAL_JUMP)  ; LAB_00444e36
    FLD float ptr [ESP + 0x24]          ; 00444f3e
        ;   Label: LAB_00444f3e
    FLDZ                                ; 00444f42
    FCOMPP                              ; 00444f44
    FNSTSW AX                           ; 00444f46
    SAHF                                ; 00444f48
    JBE 0x00444f51                      ; 00444f49
        ;   XREF to: 00444f51 (CONDITIONAL_JUMP)  ; LAB_00444f51
    XOR ECX,ECX                         ; 00444f4b
    MOV dword ptr [ESP + 0x24],ECX      ; 00444f4d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00444f51
        ;   Label: LAB_00444f51
    MOV dword ptr [EDX + 0x4c],EAX      ; 00444f55
    MOV EAX,0x1                         ; 00444f58
        ;   Label: LAB_00444f58
    MOV ESP,EBP                         ; 00444f5d
    POP EBP                             ; 00444f5f
    POP EBX                             ; 00444f60
    RET                                 ; 00444f61

