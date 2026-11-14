; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_00477c60(SIntersectXZCylinder *cylinder)
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
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00477f40 at 00477f69
;   core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 at 00478246
;
; Referenced Globals:
;   undefined4 DAT_005d1dd3
;   undefined4 DAT_005d1dd7
;   undefined4 DAT_005d1ddb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477c60
        ;   Label: core_dtri.cpp_cylinderEdgeIntersection_FUN_00477c60
    PUSH EBP                            ; 00477c61
    MOV EBP,ESP                         ; 00477c62
    SUB ESP,0x58                        ; 00477c64
    AND ESP,0xfffffff8                  ; 00477c67
    MOV EDX,dword ptr [EBP + 0xc]       ; 00477c6a
    FLD float ptr [EDX + 0x44]          ; 00477c6d
    FLD float ptr [EDX + 0x48]          ; 00477c70
    FSUB float ptr [EDX + 0x40]         ; 00477c73
    FXCH                                ; 00477c76
    FSUB float ptr [EDX + 0x3c]         ; 00477c78
    FXCH                                ; 00477c7b
    FST float ptr [ESP + 0x1c]          ; 00477c7d
    FCHS                                ; 00477c81
    FST float ptr [ESP + 0x50]          ; 00477c83
    FMUL float ptr [ESP + 0x50]         ; 00477c87
    FXCH                                ; 00477c8b
    FST float ptr [ESP + 0x20]          ; 00477c8d
    FMUL float ptr [ESP + 0x20]         ; 00477c91
    FADDP                               ; 00477c95
    FLDZ                                ; 00477c97
    FXCH                                ; 00477c99
    FSTP double ptr [ESP + 0x10]        ; 00477c9b
    FCOMP double ptr [ESP + 0x10]       ; 00477c9f
    FNSTSW AX                           ; 00477ca3
    SAHF                                ; 00477ca5
    JNC 0x00477ec0                      ; 00477ca6
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD double ptr [ESP + 0x10]         ; 00477cac
    FSQRT                               ; 00477cb0
    FLD float ptr [ESP + 0x50]          ; 00477cb2
    FLD1                                ; 00477cb6
    FDIVRP ST2,ST0                      ; 00477cb8
    FMUL ST1                            ; 00477cba
    FLD float ptr [EDX + 0x10]          ; 00477cbc
    FSUB float ptr [EDX + 0x3c]         ; 00477cbf
    FXCH                                ; 00477cc2
    FSTP float ptr [ESP + 0x50]         ; 00477cc4
    FMUL float ptr [ESP + 0x50]         ; 00477cc8
    FLD float ptr [ESP + 0x20]          ; 00477ccc
    FMULP ST2                           ; 00477cd0
    FLD float ptr [EDX + 0x14]          ; 00477cd2
    FSUB float ptr [EDX + 0x40]         ; 00477cd5
    FXCH ST2                            ; 00477cd8
    FSTP float ptr [ESP + 0x4c]         ; 00477cda
    FXCH                                ; 00477cde
    FMUL float ptr [ESP + 0x4c]         ; 00477ce0
    FADDP                               ; 00477ce4
    FLDZ                                ; 00477ce6
    FCOMPP                              ; 00477ce8
    FNSTSW AX                           ; 00477cea
    SAHF                                ; 00477cec
    JC 0x00477ec7                       ; 00477ced
        ;   XREF to: 00477ec7 (CONDITIONAL_JUMP)  ; LAB_00477ec7
    FLD float ptr [EDX + 0x18]          ; 00477cf3
        ;   Label: LAB_00477cf3
    FMUL float ptr [ESP + 0x50]         ; 00477cf6
    FLD float ptr [EDX + 0x1c]          ; 00477cfa
    FMUL float ptr [ESP + 0x4c]         ; 00477cfd
    FADDP                               ; 00477d01
    FST float ptr [ESP + 0x28]          ; 00477d03
    FLDZ                                ; 00477d07
    FCOMPP                              ; 00477d09
    FNSTSW AX                           ; 00477d0b
    SAHF                                ; 00477d0d
    JNC 0x00477ec0                      ; 00477d0e
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD float ptr [ESP + 0x50]          ; 00477d14
    FLD float ptr [EDX + 0x3c]          ; 00477d18
    FMUL ST1                            ; 00477d1b
    FLD float ptr [EDX + 0x10]          ; 00477d1d
    FMULP ST2                           ; 00477d20
    FLD float ptr [ESP + 0x4c]          ; 00477d22
    FLD float ptr [EDX + 0x40]          ; 00477d26
    FMUL ST1                            ; 00477d29
    FLD float ptr [EDX + 0x14]          ; 00477d2b
    FMULP ST2                           ; 00477d2e
    FADDP ST2,ST0                       ; 00477d30
    FADDP ST2,ST0                       ; 00477d32
    FSTP float ptr [ESP + 0x40]         ; 00477d34
    FCOMP float ptr [ESP + 0x40]        ; 00477d38
    FNSTSW AX                           ; 00477d3c
    SAHF                                ; 00477d3e
    JA 0x00477ec0                       ; 00477d3f
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD float ptr [ESP + 0x50]          ; 00477d45
    FLD ST0                             ; 00477d49
    FMUL float ptr [EDX + 0x20]         ; 00477d4b
    FLD float ptr [ESP + 0x4c]          ; 00477d4e
    FLD ST0                             ; 00477d52
    FMUL float ptr [EDX + 0x20]         ; 00477d54
    FXCH ST2                            ; 00477d57
    FADD float ptr [EDX + 0x10]         ; 00477d59
    FXCH ST2                            ; 00477d5c
    FADD float ptr [EDX + 0x14]         ; 00477d5e
    FXCH ST2                            ; 00477d61
    FST float ptr [ESP + 0x3c]          ; 00477d63
    FMULP ST3                           ; 00477d67
    FXCH                                ; 00477d69
    FST float ptr [ESP + 0x44]          ; 00477d6b
    FMULP                               ; 00477d6f
    FADDP                               ; 00477d71
    FSUBR float ptr [ESP + 0x40]        ; 00477d73
    FST float ptr [ESP + 0x24]          ; 00477d77
    FCOMP float ptr [ESP + 0x28]        ; 00477d7b
    FNSTSW AX                           ; 00477d7f
    SAHF                                ; 00477d81
    JA 0x00477ec0                       ; 00477d82
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD float ptr [ESP + 0x24]          ; 00477d88
    FDIV float ptr [ESP + 0x28]         ; 00477d8c
    FST float ptr [ESP + 0x24]          ; 00477d90
    FCOMP float ptr [EDX]               ; 00477d94
    FNSTSW AX                           ; 00477d96
    SAHF                                ; 00477d98
    JNC 0x00477ec0                      ; 00477d99
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD float ptr [ESP + 0x20]          ; 00477d9f
    FABS                                ; 00477da3
    FLD float ptr [ESP + 0x1c]          ; 00477da5
    FABS                                ; 00477da9
    FLD float ptr [ESP + 0x24]          ; 00477dab
    FLD float ptr [EDX + 0x18]          ; 00477daf
    FMUL ST1                            ; 00477db2
    FLD float ptr [EDX + 0x1c]          ; 00477db4
    FMULP ST2                           ; 00477db7
    FADD float ptr [ESP + 0x3c]         ; 00477db9
    FXCH                                ; 00477dbd
    FADD float ptr [ESP + 0x44]         ; 00477dbf
    FXCH                                ; 00477dc3
    FSTP float ptr [EDX + 0x54]         ; 00477dc5
    FSTP float ptr [EDX + 0x58]         ; 00477dc8
    FCOMPP                              ; 00477dcb
    FNSTSW AX                           ; 00477dcd
    SAHF                                ; 00477dcf
    JNC 0x00477ee2                      ; 00477dd0
        ;   XREF to: 00477ee2 (CONDITIONAL_JUMP)  ; LAB_00477ee2
    FLD float ptr [EDX + 0x54]          ; 00477dd6
    FSUB float ptr [EDX + 0x3c]         ; 00477dd9
    FDIV float ptr [ESP + 0x20]         ; 00477ddc
    FSTP float ptr [EDX + 0x50]         ; 00477de0
        ;   Label: LAB_00477de0
    FLDZ                                ; 00477de3
    FLD float ptr [EDX + 0x50]          ; 00477de5
    FSTP double ptr [ESP + 0x8]         ; 00477de8
    FCOMP double ptr [ESP + 0x8]        ; 00477dec
    FNSTSW AX                           ; 00477df0
    SAHF                                ; 00477df2
    JBE 0x00477ef1                      ; 00477df3
        ;   XREF to: 00477ef1 (CONDITIONAL_JUMP)  ; LAB_00477ef1
    MOV dword ptr [EDX + 0x50],0x0      ; 00477df9
    FLD float ptr [EDX + 0x3c]          ; 00477e00
    MOV EAX,dword ptr [EDX + 0x40]      ; 00477e03
    MOV dword ptr [EDX + 0x58],EAX      ; 00477e06
        ;   Label: LAB_00477e06
    FSTP float ptr [EDX + 0x54]         ; 00477e09
    FLD float ptr [EDX + 0x18]          ; 00477e0c
    FMUL ST0                            ; 00477e0f
    FLD float ptr [EDX + 0x18]          ; 00477e11
    FLD float ptr [EDX + 0x54]          ; 00477e14
    FSUB float ptr [EDX + 0x10]         ; 00477e17
    FXCH                                ; 00477e1a
    FMUL ST1                            ; 00477e1c
    FLD float ptr [EDX + 0x1c]          ; 00477e1e
    FMUL ST0                            ; 00477e21
    FLD ST2                             ; 00477e23
    FMULP ST3                           ; 00477e25
    FLD float ptr [EDX + 0x58]          ; 00477e27
    FSUB float ptr [EDX + 0x14]         ; 00477e2a
    FLD float ptr [EDX + 0x1c]          ; 00477e2d
    FMUL ST1                            ; 00477e30
    FLD ST1                             ; 00477e32
    FXCH ST3                            ; 00477e34
    FADDP ST6,ST0                       ; 00477e36
    FXCH ST2                            ; 00477e38
    FMULP                               ; 00477e3a
    FXCH ST4                            ; 00477e3c
    FST float ptr [ESP + 0x38]          ; 00477e3e
    FMUL float ptr [0x005d1dd7]         ; 00477e42 | DAT_005d1dd7
    FXCH ST4                            ; 00477e48
    FADDP ST3,ST0                       ; 00477e4a
    FADDP                               ; 00477e4c
    FLD float ptr [EDX + 0x20]          ; 00477e4e
    FMUL ST0                            ; 00477e51
    FXCH                                ; 00477e53
    FMUL float ptr [0x005d1dd3]         ; 00477e55 | DAT_005d1dd3
    FXCH                                ; 00477e5b
    FSUBP ST2,ST0                       ; 00477e5d
    FXCH ST2                            ; 00477e5f
    FMULP                               ; 00477e61
    FXCH                                ; 00477e63
    FST float ptr [ESP + 0x48]          ; 00477e65
    FMUL float ptr [ESP + 0x48]         ; 00477e69
    FSUBRP                              ; 00477e6d
    FLDZ                                ; 00477e6f
    FXCH                                ; 00477e71
    FSTP float ptr [ESP + 0x18]         ; 00477e73
    FCOMP float ptr [ESP + 0x18]        ; 00477e77
    FNSTSW AX                           ; 00477e7b
    SAHF                                ; 00477e7d
    JA 0x00477ec0                       ; 00477e7e
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD float ptr [ESP + 0x48]          ; 00477e80
    FCHS                                ; 00477e84
    FLD float ptr [ESP + 0x18]          ; 00477e86
    FSQRT                               ; 00477e8a
    FSUBP                               ; 00477e8c
    FLD float ptr [ESP + 0x38]          ; 00477e8e
    FMUL float ptr [0x005d1ddb]         ; 00477e92 | DAT_005d1ddb
    FDIVP                               ; 00477e98
    FLDZ                                ; 00477e9a
    FXCH                                ; 00477e9c
    FST float ptr [EDX + 0x4c]          ; 00477e9e
    FSTP double ptr [ESP]               ; 00477ea1
    FCOMP double ptr [ESP]              ; 00477ea4
    FNSTSW AX                           ; 00477ea7
    SAHF                                ; 00477ea9
    JA 0x00477ec0                       ; 00477eaa
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD1                                ; 00477eac
    FCOMP double ptr [ESP]              ; 00477eae
    FNSTSW AX                           ; 00477eb1
    SAHF                                ; 00477eb3
    JC 0x00477ec0                       ; 00477eb4
        ;   XREF to: 00477ec0 (CONDITIONAL_JUMP)  ; LAB_00477ec0
    FLD float ptr [EDX + 0x4c]          ; 00477eb6
    FCOMP float ptr [EDX]               ; 00477eb9
    FNSTSW AX                           ; 00477ebb
    SAHF                                ; 00477ebd
    JC 0x00477f28                       ; 00477ebe
        ;   XREF to: 00477f28 (CONDITIONAL_JUMP)  ; LAB_00477f28
    XOR EAX,EAX                         ; 00477ec0
        ;   Label: LAB_00477ec0
    MOV ESP,EBP                         ; 00477ec2
    POP EBP                             ; 00477ec4
    POP EBX                             ; 00477ec5
    RET                                 ; 00477ec6
    MOV BL,byte ptr [ESP + 0x4f]        ; 00477ec7
        ;   Label: LAB_00477ec7
    MOV AH,byte ptr [ESP + 0x53]        ; 00477ecb
    XOR BL,0x80                         ; 00477ecf
    XOR AH,0x80                         ; 00477ed2
    MOV byte ptr [ESP + 0x4f],BL        ; 00477ed5
    MOV byte ptr [ESP + 0x53],AH        ; 00477ed9
    JMP 0x00477cf3                      ; 00477edd
        ;   XREF to: 00477cf3 (UNCONDITIONAL_JUMP)  ; LAB_00477cf3
    FLD float ptr [EDX + 0x58]          ; 00477ee2
        ;   Label: LAB_00477ee2
    FSUB float ptr [EDX + 0x40]         ; 00477ee5
    FDIV float ptr [ESP + 0x1c]         ; 00477ee8
    JMP 0x00477de0                      ; 00477eec
        ;   XREF to: 00477de0 (UNCONDITIONAL_JUMP)  ; LAB_00477de0
    FLD1                                ; 00477ef1
        ;   Label: LAB_00477ef1
    FCOMP double ptr [ESP + 0x8]        ; 00477ef3
    FNSTSW AX                           ; 00477ef7
    SAHF                                ; 00477ef9
    JNC 0x00477f0e                      ; 00477efa
        ;   XREF to: 00477f0e (CONDITIONAL_JUMP)  ; LAB_00477f0e
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 00477efc
    FLD float ptr [EDX + 0x44]          ; 00477f03
    MOV EAX,dword ptr [EDX + 0x48]      ; 00477f06
    JMP 0x00477e06                      ; 00477f09
        ;   XREF to: 00477e06 (UNCONDITIONAL_JUMP)  ; LAB_00477e06
    FLD float ptr [ESP + 0x24]          ; 00477f0e
        ;   Label: LAB_00477f0e
    FLDZ                                ; 00477f12
    FCOMPP                              ; 00477f14
    FNSTSW AX                           ; 00477f16
    SAHF                                ; 00477f18
    JBE 0x00477f21                      ; 00477f19
        ;   XREF to: 00477f21 (CONDITIONAL_JUMP)  ; LAB_00477f21
    XOR ECX,ECX                         ; 00477f1b
    MOV dword ptr [ESP + 0x24],ECX      ; 00477f1d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00477f21
        ;   Label: LAB_00477f21
    MOV dword ptr [EDX + 0x4c],EAX      ; 00477f25
    MOV EAX,0x1                         ; 00477f28
        ;   Label: LAB_00477f28
    MOV ESP,EBP                         ; 00477f2d
    POP EBP                             ; 00477f2f
    POP EBX                             ; 00477f30
    RET                                 ; 00477f31

