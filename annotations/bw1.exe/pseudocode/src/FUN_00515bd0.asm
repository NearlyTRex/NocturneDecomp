; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00515bd0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00516060 at 00516133
;   FUN_005168c0 at 0051697a
;
; Referenced Globals:
;   undefined4 DAT_0061f600
;   undefined4 DAT_0061f604
;   undefined4 DAT_0061f608
;   undefined4 DAT_0061f60c
;   undefined4 DAT_0061f610
;   undefined4 DAT_01d2c0c4
;   undefined4 DAT_01d2c0c8
;   undefined4 DAT_01d2c0d0
;   undefined4 DAT_01d2c0d4
;   undefined4 DAT_01d2c0d8
;   undefined4 DAT_01d2c0e0
;   undefined4 DAT_01d2c0e4
;   undefined4 DAT_01d2c0e8
;   undefined4 DAT_01d2c0ec
;   undefined4 DAT_01d2c0f0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515bd0
        ;   Label: FUN_00515bd0
    PUSH ESI                            ; 00515bd1
    PUSH EDI                            ; 00515bd2
    PUSH EBP                            ; 00515bd3
    SUB ESP,0x50                        ; 00515bd4
    MOV EDI,dword ptr [ESP + 0x64]      ; 00515bd7
    MOV EAX,[0x01d2c0c4]                ; 00515bdb | DAT_01d2c0c4
    LEA EBP,[EAX*0x4 + 0x0]             ; 00515be0
    ADD EBP,EAX                         ; 00515be7
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515be9
    SHL EBP,0x4                         ; 00515bed
    FLD float ptr [EDI + 0x18]          ; 00515bf0
    ADD EBP,0x1d2c0c8                   ; 00515bf3
    FCOMP float ptr [EAX + 0x18]        ; 00515bf9
    FNSTSW AX                           ; 00515bfc
    SAHF                                ; 00515bfe
    JBE 0x00515c0b                      ; 00515bff
        ;   XREF to: 00515c0b (CONDITIONAL_JUMP)  ; LAB_00515c0b
    MOV EAX,EDI                         ; 00515c01
    MOV EDI,dword ptr [ESP + 0x68]      ; 00515c03
    MOV dword ptr [ESP + 0x68],EAX      ; 00515c07
    LEA EBX,[EDI + 0x18]                ; 00515c0b
        ;   Label: LAB_00515c0b
    MOV EAX,EBP                         ; 00515c0e
    FLD float ptr [EBX]                 ; 00515c10
    FLD float ptr [0x0061f600]          ; 00515c12 | DAT_0061f600
    FSUBP                               ; 00515c18
    FISTP dword ptr [EAX]               ; 00515c1a | DAT_01d2c0c8
    MOV EBX,dword ptr [ESP + 0x68]      ; 00515c1c
    LEA EAX,[EBP + 0x4]                 ; 00515c20
    ADD EBX,0x18                        ; 00515c23
    FLD float ptr [EBX]                 ; 00515c26
    FLD float ptr [0x0061f600]          ; 00515c28 | DAT_0061f600
    FSUBP                               ; 00515c2e
    FISTP dword ptr [EAX]               ; 00515c30
    MOV EAX,dword ptr [EBP]             ; 00515c32 | DAT_01d2c0c8
    CMP EAX,dword ptr [EBP + 0x4]       ; 00515c35
    JZ 0x00515fdf                       ; 00515c38
        ;   XREF to: 00515fdf (CONDITIONAL_JUMP)  ; LAB_00515fdf
    CMP EAX,dword ptr [0x01d2c5c8]      ; 00515c3e | DAT_01d2c5c8
    JGE 0x00515c4b                      ; 00515c44
        ;   XREF to: 00515c4b (CONDITIONAL_JUMP)  ; LAB_00515c4b
    MOV [0x01d2c5c8],EAX                ; 00515c46 | DAT_01d2c5c8
    MOV EBX,dword ptr [0x01d2c5cc]      ; 00515c4b | DAT_01d2c5cc
        ;   Label: LAB_00515c4b
    MOV EAX,dword ptr [EBP + 0x4]       ; 00515c51
    CMP EAX,EBX                         ; 00515c54
    JLE 0x00515c5d                      ; 00515c56
        ;   XREF to: 00515c5d (CONDITIONAL_JUMP)  ; LAB_00515c5d
    MOV [0x01d2c5cc],EAX                ; 00515c58 | DAT_01d2c5cc
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515c5d
        ;   Label: LAB_00515c5d
    FLD float ptr [EAX + 0x18]          ; 00515c61
    FSUB float ptr [EDI + 0x18]         ; 00515c64
    FSTP float ptr [ESP + 0x48]         ; 00515c67
    CMP dword ptr [ESP + 0x48],0x3f800000 ; 00515c6b
    JGE 0x00515fe7                      ; 00515c73
        ;   XREF to: 00515fe7 (CONDITIONAL_JUMP)  ; LAB_00515fe7
    XOR EAX,EAX                         ; 00515c79
    MOV dword ptr [ESP + 0x48],EAX      ; 00515c7b
    FLD1                                ; 00515c7f
        ;   Label: LAB_00515c7f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515c81
    FSUB float ptr [EDI + 0x18]         ; 00515c85
    FILD dword ptr [EBP]                ; 00515c88 | DAT_01d2c0c8
    FLD float ptr [EAX + 0x14]          ; 00515c8b
    FSUB float ptr [EDI + 0x14]         ; 00515c8e
    FXCH                                ; 00515c91
    FADDP ST2,ST0                       ; 00515c93
    FMUL float ptr [ESP + 0x48]         ; 00515c95
    FXCH                                ; 00515c99
    FMUL float ptr [ESP + 0x48]         ; 00515c9b
    LEA EBX,[ESP + 0x4]                 ; 00515c9f
    LEA EAX,[EBP + 0xc]                 ; 00515ca3
    FXCH                                ; 00515ca6
    FSTP float ptr [ESP + 0x4]          ; 00515ca8
    FSTP float ptr [ESP + 0x44]         ; 00515cac
    FLD float ptr [EBX]                 ; 00515cb0
    FLD float ptr [0x0061f608]          ; 00515cb2 | DAT_0061f608
    FMULP                               ; 00515cb8
    FLD float ptr [0x0061f600]          ; 00515cba | DAT_0061f600
    FSUBP                               ; 00515cc0
    FISTP dword ptr [EAX]               ; 00515cc2 | DAT_01d2c0d4
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515cc4
    FLD float ptr [EAX + 0x14]          ; 00515cc8
    FSUB float ptr [EDI + 0x14]         ; 00515ccb
    FMUL float ptr [ESP + 0x44]         ; 00515cce
    LEA EBX,[ESP + 0x24]                ; 00515cd2
    FADD float ptr [EDI + 0x14]         ; 00515cd6
    LEA EAX,[EBP + 0x8]                 ; 00515cd9
    FSTP float ptr [ESP + 0x24]         ; 00515cdc
    FLD float ptr [EBX]                 ; 00515ce0
    FLD float ptr [0x0061f608]          ; 00515ce2 | DAT_0061f608
    FMULP                               ; 00515ce8
    FLD float ptr [0x0061f600]          ; 00515cea | DAT_0061f600
    FSUBP                               ; 00515cf0
    FISTP dword ptr [EAX]               ; 00515cf2 | DAT_01d2c0d0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515cf4
    FLD float ptr [EAX + 0x1c]          ; 00515cf8
    FSUB float ptr [EDI + 0x1c]         ; 00515cfb
    FMUL float ptr [ESP + 0x48]         ; 00515cfe
    LEA EBX,[ESP + 0x8]                 ; 00515d02
    LEA EAX,[EBP + 0x1c]                ; 00515d06
    FSTP float ptr [ESP + 0x8]          ; 00515d09
    FLD float ptr [EBX]                 ; 00515d0d
    FLD float ptr [0x0061f60c]          ; 00515d0f | DAT_0061f60c
    FMULP                               ; 00515d15
    FLD float ptr [0x0061f600]          ; 00515d17 | DAT_0061f600
    FSUBP                               ; 00515d1d
    FISTP dword ptr [EAX]               ; 00515d1f | DAT_01d2c0e4
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515d21
    FLD float ptr [EAX + 0x1c]          ; 00515d25
    FSUB float ptr [EDI + 0x1c]         ; 00515d28
    FMUL float ptr [ESP + 0x44]         ; 00515d2b
    LEA EBX,[ESP + 0x28]                ; 00515d2f
    FADD float ptr [EDI + 0x1c]         ; 00515d33
    LEA EAX,[EBP + 0x18]                ; 00515d36
    FSTP float ptr [ESP + 0x28]         ; 00515d39
    FLD float ptr [EBX]                 ; 00515d3d
    FLD float ptr [0x0061f60c]          ; 00515d3f | DAT_0061f60c
    FMULP                               ; 00515d45
    FLD float ptr [0x0061f600]          ; 00515d47 | DAT_0061f600
    FSUBP                               ; 00515d4d
    FISTP dword ptr [EAX]               ; 00515d4f | DAT_01d2c0e0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515d51
    FLD float ptr [EAX + 0x20]          ; 00515d55
    FSUB float ptr [EDI + 0x20]         ; 00515d58
    FMUL float ptr [ESP + 0x48]         ; 00515d5b
    LEA EBX,[ESP + 0xc]                 ; 00515d5f
    LEA EAX,[EBP + 0x24]                ; 00515d63
    FSTP float ptr [ESP + 0xc]          ; 00515d66
    FLD float ptr [EBX]                 ; 00515d6a
    FLD float ptr [0x0061f60c]          ; 00515d6c | DAT_0061f60c
    FMULP                               ; 00515d72
    FLD float ptr [0x0061f600]          ; 00515d74 | DAT_0061f600
    FSUBP                               ; 00515d7a
    FISTP dword ptr [EAX]               ; 00515d7c | DAT_01d2c0ec
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515d7e
    FLD float ptr [EAX + 0x20]          ; 00515d82
    FSUB float ptr [EDI + 0x20]         ; 00515d85
    FMUL float ptr [ESP + 0x44]         ; 00515d88
    LEA EBX,[ESP + 0x2c]                ; 00515d8c
    FADD float ptr [EDI + 0x20]         ; 00515d90
    LEA EAX,[EBP + 0x20]                ; 00515d93
    FSTP float ptr [ESP + 0x2c]         ; 00515d96
    FLD float ptr [EBX]                 ; 00515d9a
    FLD float ptr [0x0061f60c]          ; 00515d9c | DAT_0061f60c
    FMULP                               ; 00515da2
    FLD float ptr [0x0061f600]          ; 00515da4 | DAT_0061f600
    FSUBP                               ; 00515daa
    FISTP dword ptr [EAX]               ; 00515dac | DAT_01d2c0e8
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515dae
    FLD float ptr [EAX + 0x2c]          ; 00515db2
    FSUB float ptr [EDI + 0x2c]         ; 00515db5
    FMUL float ptr [ESP + 0x48]         ; 00515db8
    LEA EBX,[ESP + 0x10]                ; 00515dbc
    LEA EAX,[EBP + 0x14]                ; 00515dc0
    FSTP float ptr [ESP + 0x10]         ; 00515dc3
    FLD float ptr [EBX]                 ; 00515dc7
    FLD float ptr [0x0061f604]          ; 00515dc9 | DAT_0061f604
    FMULP                               ; 00515dcf
    FLD float ptr [0x0061f600]          ; 00515dd1 | DAT_0061f600
    FSUBP                               ; 00515dd7
    FISTP dword ptr [EAX]               ; 00515dd9
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515ddb
    FLD float ptr [EAX + 0x2c]          ; 00515ddf
    FSUB float ptr [EDI + 0x2c]         ; 00515de2
    FMUL float ptr [ESP + 0x44]         ; 00515de5
    LEA EBX,[ESP + 0x30]                ; 00515de9
    FADD float ptr [EDI + 0x2c]         ; 00515ded
    LEA EAX,[EBP + 0x10]                ; 00515df0
    FSTP float ptr [ESP + 0x30]         ; 00515df3
    FLD float ptr [EBX]                 ; 00515df7
    FLD float ptr [0x0061f604]          ; 00515df9 | DAT_0061f604
    FMULP                               ; 00515dff
    FLD float ptr [0x0061f600]          ; 00515e01 | DAT_0061f600
    FSUBP                               ; 00515e07
    FISTP dword ptr [EAX]               ; 00515e09 | DAT_01d2c0d8
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515e0b
    FLD float ptr [EAX + 0x34]          ; 00515e0f
    FSUB float ptr [EDI + 0x34]         ; 00515e12
    FMUL float ptr [ESP + 0x48]         ; 00515e15
    LEA EBX,[ESP + 0x14]                ; 00515e19
    LEA EAX,[EBP + 0x34]                ; 00515e1d
    FSTP float ptr [ESP + 0x14]         ; 00515e20
    FLD float ptr [EBX]                 ; 00515e24
    FLD float ptr [0x0061f604]          ; 00515e26 | DAT_0061f604
    FMULP                               ; 00515e2c
    FLD float ptr [0x0061f600]          ; 00515e2e | DAT_0061f600
    FSUBP                               ; 00515e34
    FISTP dword ptr [EAX]               ; 00515e36
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515e38
    FLD float ptr [EAX + 0x34]          ; 00515e3c
    FSUB float ptr [EDI + 0x34]         ; 00515e3f
    FMUL float ptr [ESP + 0x44]         ; 00515e42
    LEA EBX,[ESP + 0x34]                ; 00515e46
    FADD float ptr [EDI + 0x34]         ; 00515e4a
    LEA EAX,[EBP + 0x30]                ; 00515e4d
    FSTP float ptr [ESP + 0x34]         ; 00515e50
    FLD float ptr [EBX]                 ; 00515e54
    FLD float ptr [0x0061f604]          ; 00515e56 | DAT_0061f604
    FMULP                               ; 00515e5c
    FLD float ptr [0x0061f600]          ; 00515e5e | DAT_0061f600
    FSUBP                               ; 00515e64
    FISTP dword ptr [EAX]               ; 00515e66
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515e68
    FLD float ptr [EAX + 0x30]          ; 00515e6c
    FSUB float ptr [EDI + 0x30]         ; 00515e6f
    FMUL float ptr [ESP + 0x48]         ; 00515e72
    LEA EBX,[ESP + 0x18]                ; 00515e76
    LEA EAX,[EBP + 0x4c]                ; 00515e7a
    FSTP float ptr [ESP + 0x18]         ; 00515e7d
    FLD float ptr [EBX]                 ; 00515e81
    FLD float ptr [0x0061f604]          ; 00515e83 | DAT_0061f604
    FMULP                               ; 00515e89
    FLD float ptr [0x0061f600]          ; 00515e8b | DAT_0061f600
    FSUBP                               ; 00515e91
    FISTP dword ptr [EAX]               ; 00515e93
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515e95
    FLD float ptr [EAX + 0x30]          ; 00515e99
    FSUB float ptr [EDI + 0x30]         ; 00515e9c
    FMUL float ptr [ESP + 0x44]         ; 00515e9f
    LEA EBX,[ESP + 0x38]                ; 00515ea3
    FADD float ptr [EDI + 0x30]         ; 00515ea7
    LEA EAX,[EBP + 0x48]                ; 00515eaa
    FSTP float ptr [ESP + 0x38]         ; 00515ead
    FLD float ptr [EBX]                 ; 00515eb1
    FLD float ptr [0x0061f604]          ; 00515eb3 | DAT_0061f604
    FMULP                               ; 00515eb9
    FLD float ptr [0x0061f600]          ; 00515ebb | DAT_0061f600
    FSUBP                               ; 00515ec1
    FISTP dword ptr [EAX]               ; 00515ec3
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515ec5
    FLD float ptr [EAX + 0xc]           ; 00515ec9
    FSUB float ptr [EDI + 0xc]          ; 00515ecc
    FMUL float ptr [ESP + 0x48]         ; 00515ecf
    LEA EBX,[ESP + 0x1c]                ; 00515ed3
    LEA EAX,[EBP + 0x2c]                ; 00515ed7
    FSTP float ptr [ESP + 0x1c]         ; 00515eda
    FLD float ptr [EBX]                 ; 00515ede
    FLD float ptr [0x0061f610]          ; 00515ee0 | DAT_0061f610
    FMULP                               ; 00515ee6
    FLD float ptr [0x0061f600]          ; 00515ee8 | DAT_0061f600
    FSUBP                               ; 00515eee
    FISTP dword ptr [EAX]               ; 00515ef0 | DAT_01d2c0f4
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515ef2
    FLD float ptr [EAX + 0xc]           ; 00515ef6
    FSUB float ptr [EDI + 0xc]          ; 00515ef9
    FMUL float ptr [ESP + 0x44]         ; 00515efc
    LEA EBX,[ESP + 0x3c]                ; 00515f00
    FADD float ptr [EDI + 0xc]          ; 00515f04
    LEA EAX,[EBP + 0x28]                ; 00515f07
    FSTP float ptr [ESP + 0x3c]         ; 00515f0a
    FLD float ptr [EBX]                 ; 00515f0e
    FLD float ptr [0x0061f610]          ; 00515f10 | DAT_0061f610
    FMULP                               ; 00515f16
    FLD float ptr [0x0061f600]          ; 00515f18 | DAT_0061f600
    FSUBP                               ; 00515f1e
    FISTP dword ptr [EAX]               ; 00515f20 | DAT_01d2c0f0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515f22
    FLD float ptr [EAX + 0x28]          ; 00515f26
    FSUB float ptr [EDI + 0x28]         ; 00515f29
    FMUL float ptr [ESP + 0x48]         ; 00515f2c
    LEA EBX,[ESP + 0x4c]                ; 00515f30
    LEA EAX,[EBP + 0x3c]                ; 00515f34
    FSTP float ptr [ESP + 0x4c]         ; 00515f37
    FLD float ptr [EBX]                 ; 00515f3b
    FLD float ptr [0x0061f604]          ; 00515f3d | DAT_0061f604
    FMULP                               ; 00515f43
    FLD float ptr [0x0061f600]          ; 00515f45 | DAT_0061f600
    FSUBP                               ; 00515f4b
    FISTP dword ptr [EAX]               ; 00515f4d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515f4f
    FLD float ptr [EAX + 0x28]          ; 00515f53
    FSUB float ptr [EDI + 0x28]         ; 00515f56
    FMUL float ptr [ESP + 0x44]         ; 00515f59
    LEA EBX,[ESP + 0x40]                ; 00515f5d
    FADD float ptr [EDI + 0x28]         ; 00515f61
    LEA EAX,[EBP + 0x38]                ; 00515f64
    FSTP float ptr [ESP + 0x40]         ; 00515f67
    FLD float ptr [EBX]                 ; 00515f6b
    FLD float ptr [0x0061f604]          ; 00515f6d | DAT_0061f604
    FMULP                               ; 00515f73
    FLD float ptr [0x0061f600]          ; 00515f75 | DAT_0061f600
    FSUBP                               ; 00515f7b
    FISTP dword ptr [EAX]               ; 00515f7d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515f7f
    FLD float ptr [EAX + 0x24]          ; 00515f83
    FSUB float ptr [EDI + 0x24]         ; 00515f86
    FMUL float ptr [ESP + 0x48]         ; 00515f89
    LEA EBX,[ESP + 0x20]                ; 00515f8d
    LEA EAX,[EBP + 0x44]                ; 00515f91
    FSTP float ptr [ESP + 0x20]         ; 00515f94
    FLD float ptr [EBX]                 ; 00515f98
    FLD float ptr [0x0061f604]          ; 00515f9a | DAT_0061f604
    FMULP                               ; 00515fa0
    FLD float ptr [0x0061f600]          ; 00515fa2 | DAT_0061f600
    FSUBP                               ; 00515fa8
    FISTP dword ptr [EAX]               ; 00515faa
    MOV EAX,dword ptr [ESP + 0x68]      ; 00515fac
    FLD float ptr [EAX + 0x24]          ; 00515fb0
    FSUB float ptr [EDI + 0x24]         ; 00515fb3
    FMUL float ptr [ESP + 0x44]         ; 00515fb6
    MOV EBX,ESP                         ; 00515fba
    FADD float ptr [EDI + 0x24]         ; 00515fbc
    LEA EAX,[EBP + 0x40]                ; 00515fbf
    FSTP float ptr [ESP]                ; 00515fc2
    FLD float ptr [EBX]                 ; 00515fc5
    FLD float ptr [0x0061f604]          ; 00515fc7 | DAT_0061f604
    FMULP                               ; 00515fcd
    FLD float ptr [0x0061f600]          ; 00515fcf | DAT_0061f600
    FSUBP                               ; 00515fd5
    FISTP dword ptr [EAX]               ; 00515fd7
    INC dword ptr [0x01d2c0c4]          ; 00515fd9 | DAT_01d2c0c4
    ADD ESP,0x50                        ; 00515fdf
        ;   Label: LAB_00515fdf
    POP EBP                             ; 00515fe2
    POP EDI                             ; 00515fe3
    POP ESI                             ; 00515fe4
    POP EBX                             ; 00515fe5
    RET                                 ; 00515fe6
    FLD1                                ; 00515fe7
        ;   Label: LAB_00515fe7
    FDIV float ptr [ESP + 0x48]         ; 00515fe9
    FSTP float ptr [ESP + 0x48]         ; 00515fed
    JMP 0x00515c7f                      ; 00515ff1
        ;   XREF to: 00515c7f (UNCONDITIONAL_JUMP)  ; LAB_00515c7f

