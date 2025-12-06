; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0(CObj * this_ptr, uint flag_mask, CMatrix3x3d * matrix, CVector3d * pivot)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
; CMatrix3x3d *    Stack[0xc]:4   matrix
; CVector3d *      Stack[0x10]:4   pivot
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2dd0
        ;   Label: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
    PUSH ESI                            ; 005d2dd1
    PUSH EDI                            ; 005d2dd2
    PUSH EBP                            ; 005d2dd3
    MOV EBP,ESP                         ; 005d2dd4
    SUB ESP,0x94                        ; 005d2dd6
    AND ESP,0xfffffff8                  ; 005d2ddc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d2ddf
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d2de2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d2de5
    PUSH EDX                            ; 005d2de8
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d2de9
    CALL dword ptr [EAX + 0x4]          ; 005d2dec
    ADD ESP,0x4                         ; 005d2def
    TEST EAX,EAX                        ; 005d2df2
    JZ 0x005d2e35                       ; 005d2df4 | LAB_005d2e35
        ;   XREF to: 005d2e35 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d2df6
    XOR ECX,ECX                         ; 005d2df9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d2dfb
    MOV dword ptr [ESP + 0x90],ECX      ; 005d2dfe
    MOV ESI,dword ptr [EAX]             ; 005d2e05
    MOV EDX,dword ptr [EDX + 0x4]       ; 005d2e07
    TEST ESI,ESI                        ; 005d2e0a
    JBE 0x005d2e35                      ; 005d2e0c | LAB_005d2e35
        ;   XREF to: 005d2e35 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 005d2e0e
        ;   Label: LAB_005d2e0e
    MOV EAX,dword ptr [EDX + 0x34]      ; 005d2e11
    AND EAX,EDI                         ; 005d2e14
    CMP EAX,EDI                         ; 005d2e16
    JZ 0x005d2e3c                       ; 005d2e18 | LAB_005d2e3c
        ;   XREF to: 005d2e3c (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x90]      ; 005d2e1a
        ;   Label: LAB_005d2e1a
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d2e21
    ADD EDX,0x38                        ; 005d2e24
    INC EDI                             ; 005d2e27
    MOV ESI,dword ptr [ECX]             ; 005d2e28
    MOV dword ptr [ESP + 0x90],EDI      ; 005d2e2a
    CMP EDI,ESI                         ; 005d2e31
    JC 0x005d2e0e                       ; 005d2e33 | LAB_005d2e0e
        ;   XREF to: 005d2e0e (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005d2e35
        ;   Label: LAB_005d2e35
    POP EBP                             ; 005d2e37
    POP EDI                             ; 005d2e38
    POP ESI                             ; 005d2e39
    POP EBX                             ; 005d2e3a
    RET                                 ; 005d2e3b
    FLD double ptr [EDX]                ; 005d2e3c
        ;   Label: LAB_005d2e3c
    FLD double ptr [EDX + 0x8]          ; 005d2e3e
    FLD double ptr [EDX + 0x10]         ; 005d2e41
    MOV EAX,dword ptr [EBP + 0x20]      ; 005d2e44
    MOV ECX,0x6                         ; 005d2e47
    MOV EDI,ESP                         ; 005d2e4c
    LEA ESI,[ESP + 0x60]                ; 005d2e4e
    FXCH ST2                            ; 005d2e52
    FSUB double ptr [EAX]               ; 005d2e54
    FXCH                                ; 005d2e56
    FSUB double ptr [EAX + 0x8]         ; 005d2e58
    FXCH ST2                            ; 005d2e5b
    FSUB double ptr [EAX + 0x10]        ; 005d2e5d
    FXCH                                ; 005d2e60
    FSTP double ptr [ESP + 0x60]        ; 005d2e62
    FXCH                                ; 005d2e66
    FSTP double ptr [ESP + 0x68]        ; 005d2e68
    FSTP double ptr [ESP + 0x70]        ; 005d2e6c
    MOVSD.REP ES:EDI,ESI                ; 005d2e70
    FLD double ptr [EBX + 0x8]          ; 005d2e72
    FMUL double ptr [ESP + 0x8]         ; 005d2e75
    FLD double ptr [EBX + 0x20]         ; 005d2e79
    FMUL double ptr [ESP + 0x8]         ; 005d2e7c
    FLD double ptr [EBX + 0x38]         ; 005d2e80
    FMUL double ptr [ESP + 0x8]         ; 005d2e83
    FLD double ptr [EBX]                ; 005d2e87
    FMUL double ptr [ESP]               ; 005d2e89
    FLD double ptr [EBX + 0x18]         ; 005d2e8c
    FMUL double ptr [ESP]               ; 005d2e8f
    FLD double ptr [EBX + 0x30]         ; 005d2e92
    FXCH ST2                            ; 005d2e95
    FADDP ST5,ST0                       ; 005d2e97
    FXCH                                ; 005d2e99
    FMUL double ptr [ESP]               ; 005d2e9b
    FLD double ptr [EBX + 0x10]         ; 005d2e9e
    FMUL double ptr [ESP + 0x10]        ; 005d2ea1
    FXCH ST2                            ; 005d2ea5
    FADDP ST4,ST0                       ; 005d2ea7
    FADDP ST2,ST0                       ; 005d2ea9
    FLD double ptr [EBX + 0x28]         ; 005d2eab
    FMUL double ptr [ESP + 0x10]        ; 005d2eae
    FLD double ptr [EBX + 0x40]         ; 005d2eb2
    FMUL double ptr [ESP + 0x10]        ; 005d2eb5
    MOV ECX,0x6                         ; 005d2eb9
    LEA EDI,[ESP + 0x48]                ; 005d2ebe
    LEA ESI,[ESP + 0x30]                ; 005d2ec2
    FXCH ST2                            ; 005d2ec6
    FADDP ST5,ST0                       ; 005d2ec8
    FADDP ST3,ST0                       ; 005d2eca
    FADDP                               ; 005d2ecc
    FXCH ST2                            ; 005d2ece
    FSTP double ptr [ESP + 0x30]        ; 005d2ed0
    FSTP double ptr [ESP + 0x38]        ; 005d2ed4
    FSTP double ptr [ESP + 0x40]        ; 005d2ed8
    MOVSD.REP ES:EDI,ESI                ; 005d2edc
    FLD double ptr [ESP + 0x48]         ; 005d2ede
    FLD double ptr [ESP + 0x50]         ; 005d2ee2
    FLD double ptr [ESP + 0x58]         ; 005d2ee6
    MOV ECX,0x6                         ; 005d2eea
    LEA EDI,[ESP + 0x18]                ; 005d2eef
    LEA ESI,[ESP + 0x78]                ; 005d2ef3
    FXCH ST2                            ; 005d2ef7
    FADD double ptr [EAX]               ; 005d2ef9
    FXCH                                ; 005d2efb
    FADD double ptr [EAX + 0x8]         ; 005d2efd
    FXCH ST2                            ; 005d2f00
    FADD double ptr [EAX + 0x10]        ; 005d2f02
    FXCH                                ; 005d2f05
    FSTP double ptr [ESP + 0x78]        ; 005d2f07
    FXCH                                ; 005d2f0b
    FSTP double ptr [ESP + 0x80]        ; 005d2f0d
    FSTP double ptr [ESP + 0x88]        ; 005d2f14
    MOVSD.REP ES:EDI,ESI                ; 005d2f1b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d2f1d
    MOV dword ptr [EDX],EAX             ; 005d2f21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d2f23
    MOV dword ptr [EDX + 0x4],EAX       ; 005d2f27
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d2f2a
    MOV dword ptr [EDX + 0x8],EAX       ; 005d2f2e
    MOV EAX,dword ptr [ESP + 0x24]      ; 005d2f31
    MOV dword ptr [EDX + 0xc],EAX       ; 005d2f35
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d2f38
    MOV dword ptr [EDX + 0x10],EAX      ; 005d2f3c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005d2f3f
    MOV dword ptr [EDX + 0x14],EAX      ; 005d2f43
    JMP 0x005d2e1a                      ; 005d2f46 | LAB_005d2e1a
        ;   XREF to: 005d2e1a (UNCONDITIONAL_JUMP)

