; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CMatrix3x3d *    Stack[0x8]:4   matrix
; CVector3d *      Stack[0xc]:4   pivot
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2c40
        ;   Label: shape_superopt.cpp_CObj_transform_FUN_005d2c40
    PUSH ESI                            ; 005d2c41
    PUSH EDI                            ; 005d2c42
    PUSH EBP                            ; 005d2c43
    MOV EBP,ESP                         ; 005d2c44
    SUB ESP,0x94                        ; 005d2c46
    AND ESP,0xfffffff8                  ; 005d2c4c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005d2c4f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d2c52
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d2c55
    PUSH EDX                            ; 005d2c58
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d2c59
    CALL dword ptr [EAX + 0x4]          ; 005d2c5c
    ADD ESP,0x4                         ; 005d2c5f
    TEST EAX,EAX                        ; 005d2c62
    JZ 0x005d2dc0                       ; 005d2c64
        ;   XREF to: 005d2dc0 (CONDITIONAL_JUMP)  ; LAB_005d2dc0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d2c6a
    XOR ECX,ECX                         ; 005d2c6d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d2c6f
    MOV dword ptr [ESP + 0x90],ECX      ; 005d2c72
    MOV ESI,dword ptr [EAX]             ; 005d2c79
    MOV EDX,dword ptr [EDX + 0x4]       ; 005d2c7b
    TEST ESI,ESI                        ; 005d2c7e
    JBE 0x005d2dc0                      ; 005d2c80
        ;   XREF to: 005d2dc0 (CONDITIONAL_JUMP)  ; LAB_005d2dc0
    FLD double ptr [EDX]                ; 005d2c86
        ;   Label: LAB_005d2c86
    FLD double ptr [EDX + 0x8]          ; 005d2c88
    FLD double ptr [EDX + 0x10]         ; 005d2c8b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2c8e
    MOV ECX,0x6                         ; 005d2c91
    LEA EDI,[ESP + 0x60]                ; 005d2c96
    LEA ESI,[ESP + 0x18]                ; 005d2c9a
    FXCH ST2                            ; 005d2c9e
    FSUB double ptr [EAX]               ; 005d2ca0
    FXCH                                ; 005d2ca2
    FSUB double ptr [EAX + 0x8]         ; 005d2ca4
    FXCH ST2                            ; 005d2ca7
    FSUB double ptr [EAX + 0x10]        ; 005d2ca9
    FXCH                                ; 005d2cac
    FSTP double ptr [ESP + 0x18]        ; 005d2cae
    FXCH                                ; 005d2cb2
    FSTP double ptr [ESP + 0x20]        ; 005d2cb4
    FSTP double ptr [ESP + 0x28]        ; 005d2cb8
    MOVSD.REP ES:EDI,ESI                ; 005d2cbc
    FLD double ptr [EBX + 0x8]          ; 005d2cbe
    FMUL double ptr [ESP + 0x68]        ; 005d2cc1
    FLD double ptr [EBX + 0x20]         ; 005d2cc5
    FMUL double ptr [ESP + 0x68]        ; 005d2cc8
    FLD double ptr [EBX + 0x38]         ; 005d2ccc
    FMUL double ptr [ESP + 0x68]        ; 005d2ccf
    FLD double ptr [EBX]                ; 005d2cd3
    FMUL double ptr [ESP + 0x60]        ; 005d2cd5
    FLD double ptr [EBX + 0x18]         ; 005d2cd9
    FMUL double ptr [ESP + 0x60]        ; 005d2cdc
    FLD double ptr [EBX + 0x30]         ; 005d2ce0
    FXCH ST2                            ; 005d2ce3
    FADDP ST5,ST0                       ; 005d2ce5
    FXCH                                ; 005d2ce7
    FMUL double ptr [ESP + 0x60]        ; 005d2ce9
    FLD double ptr [EBX + 0x10]         ; 005d2ced
    FMUL double ptr [ESP + 0x70]        ; 005d2cf0
    FXCH ST2                            ; 005d2cf4
    FADDP ST4,ST0                       ; 005d2cf6
    FADDP ST2,ST0                       ; 005d2cf8
    FLD double ptr [EBX + 0x28]         ; 005d2cfa
    FMUL double ptr [ESP + 0x70]        ; 005d2cfd
    FLD double ptr [EBX + 0x40]         ; 005d2d01
    FMUL double ptr [ESP + 0x70]        ; 005d2d04
    MOV ECX,0x6                         ; 005d2d08
    MOV EDI,ESP                         ; 005d2d0d
    LEA ESI,[ESP + 0x78]                ; 005d2d0f
    FXCH ST2                            ; 005d2d13
    FADDP ST5,ST0                       ; 005d2d15
    FADDP ST3,ST0                       ; 005d2d17
    FADDP                               ; 005d2d19
    FXCH ST2                            ; 005d2d1b
    FSTP double ptr [ESP + 0x78]        ; 005d2d1d
    FSTP double ptr [ESP + 0x80]        ; 005d2d21
    FSTP double ptr [ESP + 0x88]        ; 005d2d28
    MOVSD.REP ES:EDI,ESI                ; 005d2d2f
    FLD double ptr [ESP]                ; 005d2d31
    FLD double ptr [ESP + 0x8]          ; 005d2d34
    FLD double ptr [ESP + 0x10]         ; 005d2d38
    MOV ECX,0x6                         ; 005d2d3c
    LEA EDI,[ESP + 0x30]                ; 005d2d41
    LEA ESI,[ESP + 0x48]                ; 005d2d45
    FXCH ST2                            ; 005d2d49
    FADD double ptr [EAX]               ; 005d2d4b
    FXCH                                ; 005d2d4d
    FADD double ptr [EAX + 0x8]         ; 005d2d4f
    FXCH ST2                            ; 005d2d52
    FADD double ptr [EAX + 0x10]        ; 005d2d54
    FXCH                                ; 005d2d57
    FSTP double ptr [ESP + 0x48]        ; 005d2d59
    FXCH                                ; 005d2d5d
    FSTP double ptr [ESP + 0x50]        ; 005d2d5f
    FSTP double ptr [ESP + 0x58]        ; 005d2d63
    MOVSD.REP ES:EDI,ESI                ; 005d2d67
    ADD EDX,0x38                        ; 005d2d69
    MOV EAX,dword ptr [ESP + 0x30]      ; 005d2d6c
    MOV dword ptr [EDX + -0x38],EAX     ; 005d2d70
    MOV EAX,dword ptr [ESP + 0x34]      ; 005d2d73
    MOV dword ptr [EDX + -0x34],EAX     ; 005d2d77
    MOV EAX,dword ptr [ESP + 0x38]      ; 005d2d7a
    MOV dword ptr [EDX + -0x30],EAX     ; 005d2d7e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005d2d81
    MOV dword ptr [EDX + -0x2c],EAX     ; 005d2d85
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d2d88
    MOV EDI,dword ptr [ESP + 0x90]      ; 005d2d8c
    MOV dword ptr [EDX + -0x28],EAX     ; 005d2d93
    MOV EAX,dword ptr [ESP + 0x44]      ; 005d2d96
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d2d9a
    MOV dword ptr [EDX + -0x24],EAX     ; 005d2d9d
    INC EDI                             ; 005d2da0
    MOV ESI,dword ptr [ECX]             ; 005d2da1
    MOV dword ptr [ESP + 0x90],EDI      ; 005d2da3
    CMP EDI,ESI                         ; 005d2daa
    JC 0x005d2c86                       ; 005d2dac
        ;   XREF to: 005d2c86 (CONDITIONAL_JUMP)  ; LAB_005d2c86
    LEA EAX,[EAX]                       ; 005d2db2
    LEA EDX,[EDX]                       ; 005d2db8
    MOV EAX,EAX                         ; 005d2dbe
    MOV ESP,EBP                         ; 005d2dc0
        ;   Label: LAB_005d2dc0
    POP EBP                             ; 005d2dc2
    POP EDI                             ; 005d2dc3
    POP ESI                             ; 005d2dc4
    POP EBX                             ; 005d2dc5
    RET                                 ; 005d2dc6

