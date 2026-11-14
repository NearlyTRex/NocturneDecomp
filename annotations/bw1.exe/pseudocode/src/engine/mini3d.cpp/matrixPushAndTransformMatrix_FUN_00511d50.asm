; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_00511d50(CMatrix3x3f *rotation,CVector3f *position)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   rotation
; CVector3f *      Stack[0x8]:4   position
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;   undefined4 DAT_01d24ffc
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511d50
        ;   Label: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_00511d50
    PUSH ESI                            ; 00511d51
    PUSH EBP                            ; 00511d52
    SUB ESP,0xc                         ; 00511d53
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00511d56
    MOV ESI,dword ptr [ESP + 0x20]      ; 00511d5a
    MOV EDX,dword ptr [0x01d22580]      ; 00511d5e | DAT_01d22580
    INC EDX                             ; 00511d64
    MOV dword ptr [0x01d22580],EDX      ; 00511d65 | DAT_01d22580
    CMP EDX,0x9                         ; 00511d6b
    JG 0x00511f1e                       ; 00511d6e
        ;   XREF to: 00511f1e (CONDITIONAL_JUMP)  ; LAB_00511f1e
    MOV EAX,[0x01d22580]                ; 00511d74 | DAT_01d22580
        ;   Label: LAB_00511d74
    SHL EAX,0x2                         ; 00511d79
    MOV EDX,EAX                         ; 00511d7c
    SHL EAX,0x4                         ; 00511d7e
    SUB EAX,EDX                         ; 00511d81
    MOV EDX,0x1d22584                   ; 00511d83
    ADD EDX,EAX                         ; 00511d88
    MOV EAX,[0x01d2257c]                ; 00511d8a | DAT_01d2257c
    FLD float ptr [EAX + 0x28]          ; 00511d8f
    FSUB float ptr [ESI + 0x4]          ; 00511d92
    FLD ST0                             ; 00511d95
    FMUL float ptr [EBX + 0xc]          ; 00511d97
    FLD float ptr [EAX + 0x24]          ; 00511d9a
    FSUB float ptr [ESI]                ; 00511d9d
    FLD ST0                             ; 00511d9f
    FMUL float ptr [EBX]                ; 00511da1
    FLD float ptr [EAX + 0x2c]          ; 00511da3
    FXCH                                ; 00511da6
    FADDP ST3,ST0                       ; 00511da8
    FSUB float ptr [ESI + 0x8]          ; 00511daa
    FLD ST0                             ; 00511dad
    FMUL float ptr [EBX + 0x18]         ; 00511daf
    FADDP ST3,ST0                       ; 00511db2
    FLD ST1                             ; 00511db4
    FXCH ST3                            ; 00511db6
    FSTP float ptr [EDX + 0x24]         ; 00511db8
    FXCH ST2                            ; 00511dbb
    FMUL float ptr [EBX + 0x4]          ; 00511dbd
    FLD ST3                             ; 00511dc0
    FMUL float ptr [EBX + 0x10]         ; 00511dc2
    FADDP                               ; 00511dc5
    FLD ST2                             ; 00511dc7
    FMUL float ptr [EBX + 0x1c]         ; 00511dc9
    FADDP                               ; 00511dcc
    FSTP float ptr [EDX + 0x28]         ; 00511dce
    FMUL float ptr [EBX + 0x8]          ; 00511dd1
    FXCH ST2                            ; 00511dd4
    FMUL float ptr [EBX + 0x14]         ; 00511dd6
    FADDP ST2,ST0                       ; 00511dd9
    FMUL float ptr [EBX + 0x20]         ; 00511ddb
    FADDP                               ; 00511dde
    FSTP float ptr [EDX + 0x2c]         ; 00511de0
    FLD float ptr [EAX + 0x34]          ; 00511de3
    FMUL float ptr [EBX + 0xc]          ; 00511de6
    FLD float ptr [EAX + 0x30]          ; 00511de9
    FMUL float ptr [EBX]                ; 00511dec
    FADDP                               ; 00511dee
    FLD float ptr [EAX + 0x38]          ; 00511df0
    FMUL float ptr [EBX + 0x18]         ; 00511df3
    FADDP                               ; 00511df6
    FSTP float ptr [EDX + 0x30]         ; 00511df8
    FLD float ptr [EAX + 0x30]          ; 00511dfb
    FMUL float ptr [EBX + 0x4]          ; 00511dfe
    FLD float ptr [EAX + 0x34]          ; 00511e01
    FMUL float ptr [EBX + 0x10]         ; 00511e04
    FADDP                               ; 00511e07
    FLD float ptr [EAX + 0x38]          ; 00511e09
    FMUL float ptr [EBX + 0x1c]         ; 00511e0c
    FADDP                               ; 00511e0f
    FSTP float ptr [EDX + 0x34]         ; 00511e11
    FLD float ptr [EAX + 0x30]          ; 00511e14
    FMUL float ptr [EBX + 0x8]          ; 00511e17
    FLD float ptr [EAX + 0x34]          ; 00511e1a
    FMUL float ptr [EBX + 0x14]         ; 00511e1d
    FADDP                               ; 00511e20
    FLD float ptr [EAX + 0x38]          ; 00511e22
    FMUL float ptr [EBX + 0x20]         ; 00511e25
    FADDP                               ; 00511e28
    FSTP float ptr [EDX + 0x38]         ; 00511e2a
    FLD float ptr [EBX + 0xc]           ; 00511e2d
    FMUL float ptr [EAX + 0xc]          ; 00511e30
    FLD float ptr [EBX]                 ; 00511e33
    FMUL float ptr [EAX]                ; 00511e35
    FADDP                               ; 00511e37
    FLD float ptr [EBX + 0x18]          ; 00511e39
    FMUL float ptr [EAX + 0x18]         ; 00511e3c
    FADDP                               ; 00511e3f
    FSTP float ptr [EDX]                ; 00511e41
    FLD float ptr [EBX + 0xc]           ; 00511e43
    FMUL float ptr [EAX + 0x10]         ; 00511e46
    FLD float ptr [EBX]                 ; 00511e49
    FMUL float ptr [EAX + 0x4]          ; 00511e4b
    FADDP                               ; 00511e4e
    FLD float ptr [EBX + 0x18]          ; 00511e50
    FMUL float ptr [EAX + 0x1c]         ; 00511e53
    FADDP                               ; 00511e56
    FSTP float ptr [EDX + 0x4]          ; 00511e58
    FLD float ptr [EBX + 0xc]           ; 00511e5b
    FMUL float ptr [EAX + 0x14]         ; 00511e5e
    FLD float ptr [EBX]                 ; 00511e61
    FMUL float ptr [EAX + 0x8]          ; 00511e63
    FADDP                               ; 00511e66
    FLD float ptr [EBX + 0x18]          ; 00511e68
    FMUL float ptr [EAX + 0x20]         ; 00511e6b
    FADDP                               ; 00511e6e
    FSTP float ptr [EDX + 0x8]          ; 00511e70
    FLD float ptr [EBX + 0x10]          ; 00511e73
    FMUL float ptr [EAX + 0xc]          ; 00511e76
    FLD float ptr [EBX + 0x4]           ; 00511e79
    FMUL float ptr [EAX]                ; 00511e7c
    FADDP                               ; 00511e7e
    FLD float ptr [EBX + 0x1c]          ; 00511e80
    FMUL float ptr [EAX + 0x18]         ; 00511e83
    FADDP                               ; 00511e86
    FSTP float ptr [EDX + 0xc]          ; 00511e88
    FLD float ptr [EBX + 0x4]           ; 00511e8b
    FMUL float ptr [EAX + 0x4]          ; 00511e8e
    FLD float ptr [EBX + 0x10]          ; 00511e91
    FMUL float ptr [EAX + 0x10]         ; 00511e94
    FADDP                               ; 00511e97
    FLD float ptr [EBX + 0x1c]          ; 00511e99
    FMUL float ptr [EAX + 0x1c]         ; 00511e9c
    FADDP                               ; 00511e9f
    FSTP float ptr [EDX + 0x10]         ; 00511ea1
    FLD float ptr [EBX + 0x4]           ; 00511ea4
    FMUL float ptr [EAX + 0x8]          ; 00511ea7
    FLD float ptr [EBX + 0x10]          ; 00511eaa
    FMUL float ptr [EAX + 0x14]         ; 00511ead
    FADDP                               ; 00511eb0
    FLD float ptr [EBX + 0x1c]          ; 00511eb2
    FMUL float ptr [EAX + 0x20]         ; 00511eb5
    FADDP                               ; 00511eb8
    FSTP float ptr [EDX + 0x14]         ; 00511eba
    FLD float ptr [EBX + 0x14]          ; 00511ebd
    FMUL float ptr [EAX + 0xc]          ; 00511ec0
    FLD float ptr [EBX + 0x8]           ; 00511ec3
    FMUL float ptr [EAX]                ; 00511ec6
    FADDP                               ; 00511ec8
    FLD float ptr [EBX + 0x20]          ; 00511eca
    FMUL float ptr [EAX + 0x18]         ; 00511ecd
    FADDP                               ; 00511ed0
    FSTP float ptr [EDX + 0x18]         ; 00511ed2
    FLD float ptr [EBX + 0x8]           ; 00511ed5
    FMUL float ptr [EAX + 0x4]          ; 00511ed8
    FLD float ptr [EBX + 0x14]          ; 00511edb
    FMUL float ptr [EAX + 0x10]         ; 00511ede
    FADDP                               ; 00511ee1
    FLD float ptr [EBX + 0x20]          ; 00511ee3
    FMUL float ptr [EAX + 0x1c]         ; 00511ee6
    FADDP                               ; 00511ee9
    FSTP float ptr [EDX + 0x1c]         ; 00511eeb
    FLD float ptr [EBX + 0x8]           ; 00511eee
    FMUL float ptr [EAX + 0x8]          ; 00511ef1
    FLD float ptr [EBX + 0x14]          ; 00511ef4
    FMUL float ptr [EAX + 0x14]         ; 00511ef7
    FADDP                               ; 00511efa
    FLD float ptr [EBX + 0x20]          ; 00511efc
    FMUL float ptr [EAX + 0x20]         ; 00511eff
    MOV dword ptr [0x01d2257c],EDX      ; 00511f02 | DAT_01d2257c
    MOV EAX,0x1                         ; 00511f08
    FADDP                               ; 00511f0d
    MOV [0x01d24ffc],EAX                ; 00511f0f | DAT_01d24ffc
    FSTP float ptr [EDX + 0x20]         ; 00511f14
    ADD ESP,0xc                         ; 00511f17
    POP EBP                             ; 00511f1a
    POP ESI                             ; 00511f1b
    POP EBX                             ; 00511f1c
    RET                                 ; 00511f1d
    PUSH EDI                            ; 00511f1e
        ;   Label: LAB_00511f1e
    MOV EDI,0x5e8b9d                    ; 00511f1f
    MOV EBP,0x447                       ; 00511f24
    PUSH 0x5e8bb2                       ; 00511f29
    MOV dword ptr [0x01d1d400],EDI      ; 00511f2e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00511f34 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00511f3a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00511f3f
    POP EDI                             ; 00511f42
    JMP 0x00511d74                      ; 00511f43
        ;   XREF to: 00511d74 (UNCONDITIONAL_JUMP)  ; LAB_00511d74

