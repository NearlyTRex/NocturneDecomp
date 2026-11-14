; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_00478cd0(SIntersectXZCylinder *cylinder)
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
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0 at 00478fd9
;   core_dtri.cpp_cylinderTriangleTest_FUN_00479050 at 004792b6
;
; Referenced Globals:
;   undefined4 DAT_005bcc89
;   undefined4 DAT_005bcc8d
;   undefined4 DAT_005bcc91
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478cd0
        ;   Label: core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0
    PUSH EBP                            ; 00478cd1
    MOV EBP,ESP                         ; 00478cd2
    SUB ESP,0x58                        ; 00478cd4
    AND ESP,0xfffffff8                  ; 00478cd7
    MOV EDX,dword ptr [EBP + 0xc]       ; 00478cda
    FLD float ptr [EDX + 0x44]          ; 00478cdd
    FLD float ptr [EDX + 0x48]          ; 00478ce0
    FSUB float ptr [EDX + 0x40]         ; 00478ce3
    FXCH                                ; 00478ce6
    FSUB float ptr [EDX + 0x3c]         ; 00478ce8
    FXCH                                ; 00478ceb
    FST float ptr [ESP + 0x1c]          ; 00478ced
    FCHS                                ; 00478cf1
    FST float ptr [ESP + 0x50]          ; 00478cf3
    FMUL float ptr [ESP + 0x50]         ; 00478cf7
    FXCH                                ; 00478cfb
    FST float ptr [ESP + 0x20]          ; 00478cfd
    FMUL float ptr [ESP + 0x20]         ; 00478d01
    FADDP                               ; 00478d05
    FLDZ                                ; 00478d07
    FXCH                                ; 00478d09
    FSTP double ptr [ESP + 0x10]        ; 00478d0b
    FCOMP double ptr [ESP + 0x10]       ; 00478d0f
    FNSTSW AX                           ; 00478d13
    SAHF                                ; 00478d15
    JNC 0x00478f30                      ; 00478d16
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD double ptr [ESP + 0x10]         ; 00478d1c
    FSQRT                               ; 00478d20
    FLD float ptr [ESP + 0x50]          ; 00478d22
    FLD1                                ; 00478d26
    FDIVRP ST2,ST0                      ; 00478d28
    FMUL ST1                            ; 00478d2a
    FLD float ptr [EDX + 0x10]          ; 00478d2c
    FSUB float ptr [EDX + 0x3c]         ; 00478d2f
    FXCH                                ; 00478d32
    FSTP float ptr [ESP + 0x50]         ; 00478d34
    FMUL float ptr [ESP + 0x50]         ; 00478d38
    FLD float ptr [ESP + 0x20]          ; 00478d3c
    FMULP ST2                           ; 00478d40
    FLD float ptr [EDX + 0x14]          ; 00478d42
    FSUB float ptr [EDX + 0x40]         ; 00478d45
    FXCH ST2                            ; 00478d48
    FSTP float ptr [ESP + 0x4c]         ; 00478d4a
    FXCH                                ; 00478d4e
    FMUL float ptr [ESP + 0x4c]         ; 00478d50
    FADDP                               ; 00478d54
    FLDZ                                ; 00478d56
    FCOMPP                              ; 00478d58
    FNSTSW AX                           ; 00478d5a
    SAHF                                ; 00478d5c
    JC 0x00478f37                       ; 00478d5d
        ;   XREF to: 00478f37 (CONDITIONAL_JUMP)  ; LAB_00478f37
    FLD float ptr [EDX + 0x18]          ; 00478d63
        ;   Label: LAB_00478d63
    FMUL float ptr [ESP + 0x50]         ; 00478d66
    FLD float ptr [EDX + 0x1c]          ; 00478d6a
    FMUL float ptr [ESP + 0x4c]         ; 00478d6d
    FADDP                               ; 00478d71
    FST float ptr [ESP + 0x28]          ; 00478d73
    FLDZ                                ; 00478d77
    FCOMPP                              ; 00478d79
    FNSTSW AX                           ; 00478d7b
    SAHF                                ; 00478d7d
    JNC 0x00478f30                      ; 00478d7e
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD float ptr [ESP + 0x50]          ; 00478d84
    FLD float ptr [EDX + 0x3c]          ; 00478d88
    FMUL ST1                            ; 00478d8b
    FLD float ptr [EDX + 0x10]          ; 00478d8d
    FMULP ST2                           ; 00478d90
    FLD float ptr [ESP + 0x4c]          ; 00478d92
    FLD float ptr [EDX + 0x40]          ; 00478d96
    FMUL ST1                            ; 00478d99
    FLD float ptr [EDX + 0x14]          ; 00478d9b
    FMULP ST2                           ; 00478d9e
    FADDP ST2,ST0                       ; 00478da0
    FADDP ST2,ST0                       ; 00478da2
    FSTP float ptr [ESP + 0x40]         ; 00478da4
    FCOMP float ptr [ESP + 0x40]        ; 00478da8
    FNSTSW AX                           ; 00478dac
    SAHF                                ; 00478dae
    JA 0x00478f30                       ; 00478daf
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD float ptr [ESP + 0x50]          ; 00478db5
    FLD ST0                             ; 00478db9
    FMUL float ptr [EDX + 0x20]         ; 00478dbb
    FLD float ptr [ESP + 0x4c]          ; 00478dbe
    FLD ST0                             ; 00478dc2
    FMUL float ptr [EDX + 0x20]         ; 00478dc4
    FXCH ST2                            ; 00478dc7
    FADD float ptr [EDX + 0x10]         ; 00478dc9
    FXCH ST2                            ; 00478dcc
    FADD float ptr [EDX + 0x14]         ; 00478dce
    FXCH ST2                            ; 00478dd1
    FST float ptr [ESP + 0x3c]          ; 00478dd3
    FMULP ST3                           ; 00478dd7
    FXCH                                ; 00478dd9
    FST float ptr [ESP + 0x44]          ; 00478ddb
    FMULP                               ; 00478ddf
    FADDP                               ; 00478de1
    FSUBR float ptr [ESP + 0x40]        ; 00478de3
    FST float ptr [ESP + 0x24]          ; 00478de7
    FCOMP float ptr [ESP + 0x28]        ; 00478deb
    FNSTSW AX                           ; 00478def
    SAHF                                ; 00478df1
    JA 0x00478f30                       ; 00478df2
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD float ptr [ESP + 0x24]          ; 00478df8
    FDIV float ptr [ESP + 0x28]         ; 00478dfc
    FST float ptr [ESP + 0x24]          ; 00478e00
    FCOMP float ptr [EDX]               ; 00478e04
    FNSTSW AX                           ; 00478e06
    SAHF                                ; 00478e08
    JNC 0x00478f30                      ; 00478e09
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD float ptr [ESP + 0x20]          ; 00478e0f
    FABS                                ; 00478e13
    FLD float ptr [ESP + 0x1c]          ; 00478e15
    FABS                                ; 00478e19
    FLD float ptr [ESP + 0x24]          ; 00478e1b
    FLD float ptr [EDX + 0x18]          ; 00478e1f
    FMUL ST1                            ; 00478e22
    FLD float ptr [EDX + 0x1c]          ; 00478e24
    FMULP ST2                           ; 00478e27
    FADD float ptr [ESP + 0x3c]         ; 00478e29
    FXCH                                ; 00478e2d
    FADD float ptr [ESP + 0x44]         ; 00478e2f
    FXCH                                ; 00478e33
    FSTP float ptr [EDX + 0x54]         ; 00478e35
    FSTP float ptr [EDX + 0x58]         ; 00478e38
    FCOMPP                              ; 00478e3b
    FNSTSW AX                           ; 00478e3d
    SAHF                                ; 00478e3f
    JNC 0x00478f52                      ; 00478e40
        ;   XREF to: 00478f52 (CONDITIONAL_JUMP)  ; LAB_00478f52
    FLD float ptr [EDX + 0x54]          ; 00478e46
    FSUB float ptr [EDX + 0x3c]         ; 00478e49
    FDIV float ptr [ESP + 0x20]         ; 00478e4c
    FSTP float ptr [EDX + 0x50]         ; 00478e50
        ;   Label: LAB_00478e50
    FLDZ                                ; 00478e53
    FLD float ptr [EDX + 0x50]          ; 00478e55
    FSTP double ptr [ESP + 0x8]         ; 00478e58
    FCOMP double ptr [ESP + 0x8]        ; 00478e5c
    FNSTSW AX                           ; 00478e60
    SAHF                                ; 00478e62
    JBE 0x00478f61                      ; 00478e63
        ;   XREF to: 00478f61 (CONDITIONAL_JUMP)  ; LAB_00478f61
    MOV dword ptr [EDX + 0x50],0x0      ; 00478e69
    FLD float ptr [EDX + 0x3c]          ; 00478e70
    MOV EAX,dword ptr [EDX + 0x40]      ; 00478e73
    MOV dword ptr [EDX + 0x58],EAX      ; 00478e76
        ;   Label: LAB_00478e76
    FSTP float ptr [EDX + 0x54]         ; 00478e79
    FLD float ptr [EDX + 0x18]          ; 00478e7c
    FMUL ST0                            ; 00478e7f
    FLD float ptr [EDX + 0x18]          ; 00478e81
    FLD float ptr [EDX + 0x54]          ; 00478e84
    FSUB float ptr [EDX + 0x10]         ; 00478e87
    FXCH                                ; 00478e8a
    FMUL ST1                            ; 00478e8c
    FLD float ptr [EDX + 0x1c]          ; 00478e8e
    FMUL ST0                            ; 00478e91
    FLD ST2                             ; 00478e93
    FMULP ST3                           ; 00478e95
    FLD float ptr [EDX + 0x58]          ; 00478e97
    FSUB float ptr [EDX + 0x14]         ; 00478e9a
    FLD float ptr [EDX + 0x1c]          ; 00478e9d
    FMUL ST1                            ; 00478ea0
    FLD ST1                             ; 00478ea2
    FXCH ST3                            ; 00478ea4
    FADDP ST6,ST0                       ; 00478ea6
    FXCH ST2                            ; 00478ea8
    FMULP                               ; 00478eaa
    FXCH ST4                            ; 00478eac
    FST float ptr [ESP + 0x38]          ; 00478eae
    FMUL float ptr [0x005bcc8d]         ; 00478eb2 | DAT_005bcc8d
    FXCH ST4                            ; 00478eb8
    FADDP ST3,ST0                       ; 00478eba
    FADDP                               ; 00478ebc
    FLD float ptr [EDX + 0x20]          ; 00478ebe
    FMUL ST0                            ; 00478ec1
    FXCH                                ; 00478ec3
    FMUL float ptr [0x005bcc89]         ; 00478ec5 | DAT_005bcc89
    FXCH                                ; 00478ecb
    FSUBP ST2,ST0                       ; 00478ecd
    FXCH ST2                            ; 00478ecf
    FMULP                               ; 00478ed1
    FXCH                                ; 00478ed3
    FST float ptr [ESP + 0x48]          ; 00478ed5
    FMUL float ptr [ESP + 0x48]         ; 00478ed9
    FSUBRP                              ; 00478edd
    FLDZ                                ; 00478edf
    FXCH                                ; 00478ee1
    FSTP float ptr [ESP + 0x18]         ; 00478ee3
    FCOMP float ptr [ESP + 0x18]        ; 00478ee7
    FNSTSW AX                           ; 00478eeb
    SAHF                                ; 00478eed
    JA 0x00478f30                       ; 00478eee
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD float ptr [ESP + 0x48]          ; 00478ef0
    FCHS                                ; 00478ef4
    FLD float ptr [ESP + 0x18]          ; 00478ef6
    FSQRT                               ; 00478efa
    FSUBP                               ; 00478efc
    FLD float ptr [ESP + 0x38]          ; 00478efe
    FMUL float ptr [0x005bcc91]         ; 00478f02 | DAT_005bcc91
    FDIVP                               ; 00478f08
    FLDZ                                ; 00478f0a
    FXCH                                ; 00478f0c
    FST float ptr [EDX + 0x4c]          ; 00478f0e
    FSTP double ptr [ESP]               ; 00478f11
    FCOMP double ptr [ESP]              ; 00478f14
    FNSTSW AX                           ; 00478f17
    SAHF                                ; 00478f19
    JA 0x00478f30                       ; 00478f1a
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD1                                ; 00478f1c
    FCOMP double ptr [ESP]              ; 00478f1e
    FNSTSW AX                           ; 00478f21
    SAHF                                ; 00478f23
    JC 0x00478f30                       ; 00478f24
        ;   XREF to: 00478f30 (CONDITIONAL_JUMP)  ; LAB_00478f30
    FLD float ptr [EDX + 0x4c]          ; 00478f26
    FCOMP float ptr [EDX]               ; 00478f29
    FNSTSW AX                           ; 00478f2b
    SAHF                                ; 00478f2d
    JC 0x00478f98                       ; 00478f2e
        ;   XREF to: 00478f98 (CONDITIONAL_JUMP)  ; LAB_00478f98
    XOR EAX,EAX                         ; 00478f30
        ;   Label: LAB_00478f30
    MOV ESP,EBP                         ; 00478f32
    POP EBP                             ; 00478f34
    POP EBX                             ; 00478f35
    RET                                 ; 00478f36
    MOV BL,byte ptr [ESP + 0x4f]        ; 00478f37
        ;   Label: LAB_00478f37
    MOV AH,byte ptr [ESP + 0x53]        ; 00478f3b
    XOR BL,0x80                         ; 00478f3f
    XOR AH,0x80                         ; 00478f42
    MOV byte ptr [ESP + 0x4f],BL        ; 00478f45
    MOV byte ptr [ESP + 0x53],AH        ; 00478f49
    JMP 0x00478d63                      ; 00478f4d
        ;   XREF to: 00478d63 (UNCONDITIONAL_JUMP)  ; LAB_00478d63
    FLD float ptr [EDX + 0x58]          ; 00478f52
        ;   Label: LAB_00478f52
    FSUB float ptr [EDX + 0x40]         ; 00478f55
    FDIV float ptr [ESP + 0x1c]         ; 00478f58
    JMP 0x00478e50                      ; 00478f5c
        ;   XREF to: 00478e50 (UNCONDITIONAL_JUMP)  ; LAB_00478e50
    FLD1                                ; 00478f61
        ;   Label: LAB_00478f61
    FCOMP double ptr [ESP + 0x8]        ; 00478f63
    FNSTSW AX                           ; 00478f67
    SAHF                                ; 00478f69
    JNC 0x00478f7e                      ; 00478f6a
        ;   XREF to: 00478f7e (CONDITIONAL_JUMP)  ; LAB_00478f7e
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 00478f6c
    FLD float ptr [EDX + 0x44]          ; 00478f73
    MOV EAX,dword ptr [EDX + 0x48]      ; 00478f76
    JMP 0x00478e76                      ; 00478f79
        ;   XREF to: 00478e76 (UNCONDITIONAL_JUMP)  ; LAB_00478e76
    FLD float ptr [ESP + 0x24]          ; 00478f7e
        ;   Label: LAB_00478f7e
    FLDZ                                ; 00478f82
    FCOMPP                              ; 00478f84
    FNSTSW AX                           ; 00478f86
    SAHF                                ; 00478f88
    JBE 0x00478f91                      ; 00478f89
        ;   XREF to: 00478f91 (CONDITIONAL_JUMP)  ; LAB_00478f91
    XOR ECX,ECX                         ; 00478f8b
    MOV dword ptr [ESP + 0x24],ECX      ; 00478f8d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478f91
        ;   Label: LAB_00478f91
    MOV dword ptr [EDX + 0x4c],EAX      ; 00478f95
    MOV EAX,0x1                         ; 00478f98
        ;   Label: LAB_00478f98
    MOV ESP,EBP                         ; 00478f9d
    POP EBP                             ; 00478f9f
    POP EBX                             ; 00478fa0
    RET                                 ; 00478fa1

