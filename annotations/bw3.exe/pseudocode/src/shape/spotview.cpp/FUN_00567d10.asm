; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_FUN_00567d10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5c0e
;   undefined4 DAT_005d5c16
;   undefined4 DAT_005d5c1e
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600284
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_clampValues_FUN_00567ff0
;   shape_spotview.cpp_CSpotView_reset_FUN_00567cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567d10
        ;   Label: shape_spotview.cpp_FUN_00567d10
    PUSH EBP                            ; 00567d11
    MOV EBP,ESP                         ; 00567d12
    SUB ESP,0x18                        ; 00567d14
    AND ESP,0xfffffff8                  ; 00567d17
    MOV EBX,dword ptr [EBP + 0xc]       ; 00567d1a
    PUSH 0x38                           ; 00567d1d
    MOV EAX,[0x00600284]                ; 00567d1f | DAT_00600284
    MOV EDX,0x3f800000                  ; 00567d24
    PUSH EAX                            ; 00567d29
    MOV dword ptr [ESP + 0x8],EDX       ; 00567d2a
    MOV EDX,dword ptr [EAX]             ; 00567d2e
    CALL dword ptr [EDX]                ; 00567d30
    ADD ESP,0x8                         ; 00567d32
    TEST EAX,EAX                        ; 00567d35
    JZ 0x00567faf                       ; 00567d37
        ;   XREF to: 00567faf (CONDITIONAL_JUMP)  ; LAB_00567faf
    MOV dword ptr [ESP],0x3d4ccccd      ; 00567d3d
    MOV EAX,[0x005fe9dc]                ; 00567d44 | g_CGamePtr
        ;   Label: LAB_00567d44
    FLD float ptr [ESP]                 ; 00567d49
    FLD ST0                             ; 00567d4c
    FMUL double ptr [0x005d5c16]        ; 00567d4e | DAT_005d5c16
    FLD float ptr [EAX + 0x314]         ; 00567d54
    FMULP ST2                           ; 00567d5a
    FLD float ptr [EBX + 0x2c]          ; 00567d5c
    FMUL double ptr [0x005d5c1e]        ; 00567d5f | DAT_005d5c1e
    FXCH ST2                            ; 00567d65
    FST float ptr [ESP + 0xc]           ; 00567d67
    FMUL float ptr [0x005d5c0e]         ; 00567d6b | DAT_005d5c0e
    FXCH                                ; 00567d71
    FSTP float ptr [ESP + 0x8]          ; 00567d73
    FXCH                                ; 00567d77
    FST float ptr [ESP + 0x4]           ; 00567d79
    FLD1                                ; 00567d7d
    FXCH ST2                            ; 00567d7f
    FSTP float ptr [ESP + 0x10]         ; 00567d81
    FXCH                                ; 00567d85
    FCOMPP                              ; 00567d87
    FNSTSW AX                           ; 00567d89
    SAHF                                ; 00567d8b
    JBE 0x00567d96                      ; 00567d8c
        ;   XREF to: 00567d96 (CONDITIONAL_JUMP)  ; LAB_00567d96
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 00567d8e
    FLD float ptr [ESP + 0x4]           ; 00567d96
        ;   Label: LAB_00567d96
    FMUL float ptr [ESP + 0xc]          ; 00567d9a
    FLD float ptr [EBX + 0x2c]          ; 00567d9e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00567da1
    FLD1                                ; 00567da4
    MOV dword ptr [ESP + 0x14],EAX      ; 00567da6
    FXCH ST2                            ; 00567daa
    FSTP float ptr [ESP + 0x4]          ; 00567dac
    FXCH                                ; 00567db0
    FCOMPP                              ; 00567db2
    FNSTSW AX                           ; 00567db4
    SAHF                                ; 00567db6
    JBE 0x00567dc1                      ; 00567db7
        ;   XREF to: 00567dc1 (CONDITIONAL_JUMP)  ; LAB_00567dc1
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00567db9
    FLD float ptr [ESP + 0x14]          ; 00567dc1
        ;   Label: LAB_00567dc1
    FMUL float ptr [ESP + 0xc]          ; 00567dc5
    MOV AH,byte ptr [EBP + 0x10]        ; 00567dc9
    FSTP float ptr [ESP + 0x14]         ; 00567dcc
    TEST AH,0x2                         ; 00567dd0
    JZ 0x00567e4d                       ; 00567dd3
        ;   XREF to: 00567e4d (CONDITIONAL_JUMP)  ; LAB_00567e4d
    PUSH 0x52                           ; 00567dd9
    MOV EAX,[0x00600284]                ; 00567ddb | DAT_00600284
    PUSH EAX                            ; 00567de0
    MOV EDX,dword ptr [EAX]             ; 00567de1
    CALL dword ptr [EDX]                ; 00567de3
    ADD ESP,0x8                         ; 00567de5
    TEST EAX,EAX                        ; 00567de8
    JZ 0x00567df6                       ; 00567dea
        ;   XREF to: 00567df6 (CONDITIONAL_JUMP)  ; LAB_00567df6
    FLD float ptr [EBX + 0x28]          ; 00567dec
    FADD float ptr [ESP + 0x10]         ; 00567def
    FSTP float ptr [EBX + 0x28]         ; 00567df3
    PUSH 0x53                           ; 00567df6
        ;   Label: LAB_00567df6
    MOV EAX,[0x00600284]                ; 00567df8 | DAT_00600284
    PUSH EAX                            ; 00567dfd
    MOV EDX,dword ptr [EAX]             ; 00567dfe
    CALL dword ptr [EDX]                ; 00567e00
    ADD ESP,0x8                         ; 00567e02
    TEST EAX,EAX                        ; 00567e05
    JZ 0x00567e13                       ; 00567e07
        ;   XREF to: 00567e13 (CONDITIONAL_JUMP)  ; LAB_00567e13
    FLD float ptr [EBX + 0x28]          ; 00567e09
    FSUB float ptr [ESP + 0x10]         ; 00567e0c
    FSTP float ptr [EBX + 0x28]         ; 00567e10
    PUSH 0x35                           ; 00567e13
        ;   Label: LAB_00567e13
    MOV EAX,[0x00600284]                ; 00567e15 | DAT_00600284
    PUSH EAX                            ; 00567e1a
    MOV EDX,dword ptr [EAX]             ; 00567e1b
    CALL dword ptr [EDX]                ; 00567e1d
    ADD ESP,0x8                         ; 00567e1f
    TEST EAX,EAX                        ; 00567e22
    JZ 0x00567e30                       ; 00567e24
        ;   XREF to: 00567e30 (CONDITIONAL_JUMP)  ; LAB_00567e30
    FLD float ptr [EBX + 0x28]          ; 00567e26
    FADD float ptr [ESP + 0x10]         ; 00567e29
    FSTP float ptr [EBX + 0x28]         ; 00567e2d
    PUSH 0x37                           ; 00567e30
        ;   Label: LAB_00567e30
    MOV EAX,[0x00600284]                ; 00567e32 | DAT_00600284
    PUSH EAX                            ; 00567e37
    MOV EDX,dword ptr [EAX]             ; 00567e38
    CALL dword ptr [EDX]                ; 00567e3a
    ADD ESP,0x8                         ; 00567e3c
    TEST EAX,EAX                        ; 00567e3f
    JZ 0x00567e4d                       ; 00567e41
        ;   XREF to: 00567e4d (CONDITIONAL_JUMP)  ; LAB_00567e4d
    FLD float ptr [EBX + 0x28]          ; 00567e43
    FSUB float ptr [ESP + 0x10]         ; 00567e46
    FSTP float ptr [EBX + 0x28]         ; 00567e4a
    TEST byte ptr [EBP + 0x10],0x1      ; 00567e4d
        ;   Label: LAB_00567e4d
    JZ 0x00567e8d                       ; 00567e51
        ;   XREF to: 00567e8d (CONDITIONAL_JUMP)  ; LAB_00567e8d
    PUSH 0x4a                           ; 00567e53
    MOV EAX,[0x00600284]                ; 00567e55 | DAT_00600284
    PUSH EAX                            ; 00567e5a
    MOV EDX,dword ptr [EAX]             ; 00567e5b
    CALL dword ptr [EDX]                ; 00567e5d
    ADD ESP,0x8                         ; 00567e5f
    TEST EAX,EAX                        ; 00567e62
    JZ 0x00567e70                       ; 00567e64
        ;   XREF to: 00567e70 (CONDITIONAL_JUMP)  ; LAB_00567e70
    FLD float ptr [EBX + 0x24]          ; 00567e66
    FADD float ptr [ESP + 0x10]         ; 00567e69
    FSTP float ptr [EBX + 0x24]         ; 00567e6d
    PUSH 0x4e                           ; 00567e70
        ;   Label: LAB_00567e70
    MOV EAX,[0x00600284]                ; 00567e72 | DAT_00600284
    PUSH EAX                            ; 00567e77
    MOV EDX,dword ptr [EAX]             ; 00567e78
    CALL dword ptr [EDX]                ; 00567e7a
    ADD ESP,0x8                         ; 00567e7c
    TEST EAX,EAX                        ; 00567e7f
    JZ 0x00567e8d                       ; 00567e81
        ;   XREF to: 00567e8d (CONDITIONAL_JUMP)  ; LAB_00567e8d
    FLD float ptr [EBX + 0x24]          ; 00567e83
    FSUB float ptr [ESP + 0x10]         ; 00567e86
    FSTP float ptr [EBX + 0x24]         ; 00567e8a
    TEST byte ptr [EBP + 0x10],0x8      ; 00567e8d
        ;   Label: LAB_00567e8d
    JZ 0x00567f0b                       ; 00567e91
        ;   XREF to: 00567f0b (CONDITIONAL_JUMP)  ; LAB_00567f0b
    PUSH 0x4b                           ; 00567e97
    MOV EAX,[0x00600284]                ; 00567e99 | DAT_00600284
    PUSH EAX                            ; 00567e9e
    MOV EDX,dword ptr [EAX]             ; 00567e9f
    CALL dword ptr [EDX]                ; 00567ea1
    ADD ESP,0x8                         ; 00567ea3
    TEST EAX,EAX                        ; 00567ea6
    JZ 0x00567eb4                       ; 00567ea8
        ;   XREF to: 00567eb4 (CONDITIONAL_JUMP)  ; LAB_00567eb4
    FLD float ptr [EBX + 0x30]          ; 00567eaa
    FSUB float ptr [ESP + 0x14]         ; 00567ead
    FSTP float ptr [EBX + 0x30]         ; 00567eb1
    PUSH 0x4d                           ; 00567eb4
        ;   Label: LAB_00567eb4
    MOV EAX,[0x00600284]                ; 00567eb6 | DAT_00600284
    PUSH EAX                            ; 00567ebb
    MOV EDX,dword ptr [EAX]             ; 00567ebc
    CALL dword ptr [EDX]                ; 00567ebe
    ADD ESP,0x8                         ; 00567ec0
    TEST EAX,EAX                        ; 00567ec3
    JZ 0x00567ed1                       ; 00567ec5
        ;   XREF to: 00567ed1 (CONDITIONAL_JUMP)  ; LAB_00567ed1
    FLD float ptr [EBX + 0x30]          ; 00567ec7
    FADD float ptr [ESP + 0x14]         ; 00567eca
    FSTP float ptr [EBX + 0x30]         ; 00567ece
    PUSH 0x10                           ; 00567ed1
        ;   Label: LAB_00567ed1
    MOV EAX,[0x00600284]                ; 00567ed3 | DAT_00600284
    PUSH EAX                            ; 00567ed8
    MOV EDX,dword ptr [EAX]             ; 00567ed9
    CALL dword ptr [EDX]                ; 00567edb
    ADD ESP,0x8                         ; 00567edd
    TEST EAX,EAX                        ; 00567ee0
    JZ 0x00567eee                       ; 00567ee2
        ;   XREF to: 00567eee (CONDITIONAL_JUMP)  ; LAB_00567eee
    FLD float ptr [EBX + 0x34]          ; 00567ee4
    FADD float ptr [ESP + 0x14]         ; 00567ee7
    FSTP float ptr [EBX + 0x34]         ; 00567eeb
    PUSH 0x1e                           ; 00567eee
        ;   Label: LAB_00567eee
    MOV EAX,[0x00600284]                ; 00567ef0 | DAT_00600284
    PUSH EAX                            ; 00567ef5
    MOV EDX,dword ptr [EAX]             ; 00567ef6
    CALL dword ptr [EDX]                ; 00567ef8
    ADD ESP,0x8                         ; 00567efa
    TEST EAX,EAX                        ; 00567efd
    JZ 0x00567f0b                       ; 00567eff
        ;   XREF to: 00567f0b (CONDITIONAL_JUMP)  ; LAB_00567f0b
    FLD float ptr [EBX + 0x34]          ; 00567f01
    FSUB float ptr [ESP + 0x14]         ; 00567f04
    FSTP float ptr [EBX + 0x34]         ; 00567f08
    TEST byte ptr [EBP + 0x10],0x4      ; 00567f0b
        ;   Label: LAB_00567f0b
    JZ 0x00567f4b                       ; 00567f0f
        ;   XREF to: 00567f4b (CONDITIONAL_JUMP)  ; LAB_00567f4b
    PUSH 0x48                           ; 00567f11
    MOV EAX,[0x00600284]                ; 00567f13 | DAT_00600284
    PUSH EAX                            ; 00567f18
    MOV EDX,dword ptr [EAX]             ; 00567f19
    CALL dword ptr [EDX]                ; 00567f1b
    ADD ESP,0x8                         ; 00567f1d
    TEST EAX,EAX                        ; 00567f20
    JZ 0x00567f2e                       ; 00567f22
        ;   XREF to: 00567f2e (CONDITIONAL_JUMP)  ; LAB_00567f2e
    FLD float ptr [EBX + 0x2c]          ; 00567f24
    FSUB float ptr [ESP + 0x4]          ; 00567f27
    FSTP float ptr [EBX + 0x2c]         ; 00567f2b
    PUSH 0x50                           ; 00567f2e
        ;   Label: LAB_00567f2e
    MOV EAX,[0x00600284]                ; 00567f30 | DAT_00600284
    PUSH EAX                            ; 00567f35
    MOV EDX,dword ptr [EAX]             ; 00567f36
    CALL dword ptr [EDX]                ; 00567f38
    ADD ESP,0x8                         ; 00567f3a
    TEST EAX,EAX                        ; 00567f3d
    JZ 0x00567f4b                       ; 00567f3f
        ;   XREF to: 00567f4b (CONDITIONAL_JUMP)  ; LAB_00567f4b
    FLD float ptr [EBX + 0x2c]          ; 00567f41
    FADD float ptr [ESP + 0x4]          ; 00567f44
    FSTP float ptr [EBX + 0x2c]         ; 00567f48
    TEST byte ptr [EBP + 0x10],0x10     ; 00567f4b
        ;   Label: LAB_00567f4b
    JZ 0x00567f8d                       ; 00567f4f
        ;   XREF to: 00567f8d (CONDITIONAL_JUMP)  ; LAB_00567f8d
    PUSH 0xd                            ; 00567f51
    MOV EAX,[0x00600284]                ; 00567f53 | DAT_00600284
    PUSH EAX                            ; 00567f58
    MOV EDX,dword ptr [EAX]             ; 00567f59
    CALL dword ptr [EDX + 0x4]          ; 00567f5b
    ADD ESP,0x8                         ; 00567f5e
    TEST EAX,EAX                        ; 00567f61
    JZ 0x00567f6f                       ; 00567f63
        ;   XREF to: 00567f6f (CONDITIONAL_JUMP)  ; LAB_00567f6f
    FLD float ptr [EBX + 0x38]          ; 00567f65
    FDIV float ptr [ESP + 0x8]          ; 00567f68
    FSTP float ptr [EBX + 0x38]         ; 00567f6c
    PUSH 0xc                            ; 00567f6f
        ;   Label: LAB_00567f6f
    MOV EAX,[0x00600284]                ; 00567f71 | DAT_00600284
    PUSH EAX                            ; 00567f76
    MOV EDX,dword ptr [EAX]             ; 00567f77
    CALL dword ptr [EDX + 0x4]          ; 00567f79
    ADD ESP,0x8                         ; 00567f7c
    TEST EAX,EAX                        ; 00567f7f
    JZ 0x00567f8d                       ; 00567f81
        ;   XREF to: 00567f8d (CONDITIONAL_JUMP)  ; LAB_00567f8d
    FLD float ptr [EBX + 0x38]          ; 00567f83
    FMUL float ptr [ESP + 0x8]          ; 00567f86
    FSTP float ptr [EBX + 0x38]         ; 00567f8a
    PUSH 0x4c                           ; 00567f8d
        ;   Label: LAB_00567f8d
    MOV EAX,[0x00600284]                ; 00567f8f | DAT_00600284
    PUSH EAX                            ; 00567f94
    MOV EDX,dword ptr [EAX]             ; 00567f95
    CALL dword ptr [EDX + 0x4]          ; 00567f97
    ADD ESP,0x8                         ; 00567f9a
    TEST EAX,EAX                        ; 00567f9d
    JNZ 0x00567fd2                      ; 00567f9f
        ;   XREF to: 00567fd2 (CONDITIONAL_JUMP)  ; LAB_00567fd2
    PUSH EBX                            ; 00567fa1
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00567ff0 ; 00567fa2
        ;   XREF to: 00567ff0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00567ff0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00567fa7
    MOV ESP,EBP                         ; 00567faa
    POP EBP                             ; 00567fac
    POP EBX                             ; 00567fad
    RET                                 ; 00567fae
    PUSH 0x2a                           ; 00567faf
        ;   Label: LAB_00567faf
    MOV EAX,[0x00600284]                ; 00567fb1 | DAT_00600284
    PUSH EAX                            ; 00567fb6
    MOV EDX,dword ptr [EAX]             ; 00567fb7
    CALL dword ptr [EDX]                ; 00567fb9
    ADD ESP,0x8                         ; 00567fbb
    TEST EAX,EAX                        ; 00567fbe
    JZ 0x00567d44                       ; 00567fc0
        ;   XREF to: 00567d44 (CONDITIONAL_JUMP)  ; LAB_00567d44
    MOV dword ptr [ESP],0x40800000      ; 00567fc6
    JMP 0x00567d44                      ; 00567fcd
        ;   XREF to: 00567d44 (UNCONDITIONAL_JUMP)  ; LAB_00567d44
    MOV EDX,dword ptr [EBP + 0x10]      ; 00567fd2
        ;   Label: LAB_00567fd2
    PUSH EDX                            ; 00567fd5
    PUSH EBX                            ; 00567fd6
    CALL shape_spotview.cpp_CSpotView_reset_FUN_00567cc0 ; 00567fd7
        ;   XREF to: 00567cc0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_00567cc0(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 00567fdc
    PUSH EBX                            ; 00567fdf
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00567ff0 ; 00567fe0
        ;   XREF to: 00567ff0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00567ff0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00567fe5
    MOV ESP,EBP                         ; 00567fe8
    POP EBP                             ; 00567fea
    POP EBX                             ; 00567feb
    RET                                 ; 00567fec

