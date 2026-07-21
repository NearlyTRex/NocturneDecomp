; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499ca0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 s_..\\core\\gabriela.cpp_00582291+1
;   string s_Don't_know_how_to_carry_light_%s_005822a7
;   undefined4 DAT_005822ca
;   undefined4 DAT_005822d2
;   undefined4 DAT_005822da
;   undefined4 DAT_00764ad4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_buildRotationY_FUN_0055c7b0
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499ca0
        ;   Label: FUN_00499ca0
    PUSH EDI                            ; 00499ca1
    PUSH EBP                            ; 00499ca2
    MOV EBP,ESP                         ; 00499ca3
    SUB ESP,0x184                       ; 00499ca5
    AND ESP,0xfffffff8                  ; 00499cab
    MOV EBX,ESI                         ; 00499cae
    MOV EDX,dword ptr [EBP + 0x14]      ; 00499cb0
    MOV EAX,EDX                         ; 00499cb3
    SHL EAX,0x4                         ; 00499cb5
    ADD EAX,EDX                         ; 00499cb8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00499cba
    SHL EAX,0x2                         ; 00499cbd
    ADD EAX,EDX                         ; 00499cc0
    MOV EDI,dword ptr [EAX + 0x24ac]    ; 00499cc2
    MOV EAX,dword ptr [EAX + 0x24a4]    ; 00499cc8
    XOR ECX,ECX                         ; 00499cce
    MOV dword ptr [ESP + 0x180],EAX     ; 00499cd0
    MOV dword ptr [ESP + 0x140],ECX     ; 00499cd7
    MOV EAX,[0x00764ad4]                ; 00499cde | DAT_00764ad4
    MOV dword ptr [ESP + 0x13c],ECX     ; 00499ce3
    PUSH EAX                            ; 00499cea
    MOV dword ptr [ESP + 0x13c],ECX     ; 00499ceb
    MOV dword ptr [ESP + 0x180],ECX     ; 00499cf2
    PUSH EDI                            ; 00499cf9
    MOV dword ptr [ESP + 0x180],ECX     ; 00499cfa
    MOV dword ptr [ESP + 0x17c],ECX     ; 00499d01
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00499d08
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00499d0d
    MOV ESI,EAX                         ; 00499d10
    TEST EAX,EAX                        ; 00499d12
    JNZ 0x00499e5a                      ; 00499d14
        ;   XREF to: 00499e5a (CONDITIONAL_JUMP)  ; LAB_00499e5a
    MOV EDI,dword ptr [EBP + 0x14]      ; 00499d1a
        ;   Label: LAB_00499d1a
    TEST EDI,EDI                        ; 00499d1d
    JNZ 0x0049a09b                      ; 00499d1f
        ;   XREF to: 0049a09b (CONDITIONAL_JUMP)  ; LAB_0049a09b
    MOV EAX,0xbecccccd                  ; 00499d25
    LEA EDX,[ESP + 0x15c]               ; 00499d2a
    MOV dword ptr [ESP + 0x130],EDI     ; 00499d31
    MOV dword ptr [ESP + 0x12c],EAX     ; 00499d38
    LEA EAX,[ESP + 0x12c]               ; 00499d3f
    MOV dword ptr [ESP + 0x134],EDI     ; 00499d46
    CMP EDX,EAX                         ; 00499d4d
    JZ 0x00499d6b                       ; 00499d4f
        ;   XREF to: 00499d6b (CONDITIONAL_JUMP)  ; LAB_00499d6b
    MOV ESI,0xbecccccd                  ; 00499d51
    MOV dword ptr [ESP + 0x160],EDI     ; 00499d56
    MOV dword ptr [ESP + 0x164],EDI     ; 00499d5d
    MOV dword ptr [ESP + 0x15c],ESI     ; 00499d64
    MOV EDX,dword ptr [ESP + 0x180]     ; 00499d6b
        ;   Label: LAB_00499d6b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00499d72
    SUB EAX,EDX                         ; 00499d79
    MOV EDX,dword ptr [EBP + 0x10]      ; 00499d7b
    SHL EAX,0x4                         ; 00499d7e
    ADD EDX,0xfd0                       ; 00499d81
    ADD EAX,EDX                         ; 00499d87
    PUSH EAX                            ; 00499d89
    LEA EAX,[ESP + 0x160]               ; 00499d8a
    PUSH EAX                            ; 00499d91
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_0055a910 ; 00499d92
        ;   XREF to: 0055a910 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_0055a910()
    ADD ESP,0x8                         ; 00499d97
    LEA EAX,[ESP + 0x138]               ; 00499d9a
    PUSH EAX                            ; 00499da1
    LEA EAX,[ESP + 0x160]               ; 00499da2
    PUSH EAX                            ; 00499da9
    LEA EAX,[ESP + 0x38]                ; 00499daa
    PUSH EAX                            ; 00499dae
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00499daf
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 00499db4
    LEA EAX,[ESP + 0x30]                ; 00499db7
    PUSH EAX                            ; 00499dbb
    LEA EAX,[ESP + 0x178]               ; 00499dbc
    PUSH EAX                            ; 00499dc3
    LEA EAX,[ESP + 0x128]               ; 00499dc4
    PUSH EAX                            ; 00499dcb
    LEA ESI,[ESP + 0x3c]                ; 00499dcc
    MOV EDI,EBX                         ; 00499dd0
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00499dd2
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00499dd7
    MOV ECX,0xc                         ; 00499dda
    FLD float ptr [ESP + 0x15c]         ; 00499ddf
    FLD float ptr [ESP + 0x160]         ; 00499de6
    FLD float ptr [ESP + 0x164]         ; 00499ded
    FLD float ptr [ESP + 0x3c]          ; 00499df4
    FLD float ptr [ESP + 0x4c]          ; 00499df8
    FXCH ST4                            ; 00499dfc
    FSUB float ptr [EAX]                ; 00499dfe
    FLD float ptr [ESP + 0x5c]          ; 00499e00
    FXCH                                ; 00499e04
    FSTP float ptr [ESP + 0x150]        ; 00499e06
    FXCH ST3                            ; 00499e0d
    FSUB float ptr [EAX + 0x4]          ; 00499e0f
    FXCH                                ; 00499e12
    FADD float ptr [ESP + 0x150]        ; 00499e14
    FXCH                                ; 00499e1b
    FSTP float ptr [ESP + 0x154]        ; 00499e1d
    FXCH                                ; 00499e24
    FSUB float ptr [EAX + 0x8]          ; 00499e26
    FXCH ST3                            ; 00499e29
    FADD float ptr [ESP + 0x154]        ; 00499e2b
    FXCH ST3                            ; 00499e32
    FSTP float ptr [ESP + 0x158]        ; 00499e34
    FSTP float ptr [ESP + 0x3c]         ; 00499e3b
    FADD float ptr [ESP + 0x158]        ; 00499e3f
    FXCH                                ; 00499e46
    FSTP float ptr [ESP + 0x4c]         ; 00499e48
    FSTP float ptr [ESP + 0x5c]         ; 00499e4c
    MOVSD.REP ES:EDI,ESI                ; 00499e50
    MOV EAX,EBX                         ; 00499e52
    MOV ESP,EBP                         ; 00499e54
    POP EBP                             ; 00499e56
    POP EDI                             ; 00499e57
    POP EBX                             ; 00499e58
    RET                                 ; 00499e59
    LEA EAX,[ESP + 0xf0]                ; 00499e5a
        ;   Label: LAB_00499e5a
    PUSH EAX                            ; 00499e61
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00499e62
    PUSH EDI                            ; 00499e68
    CALL dword ptr [EDX + 0x14]         ; 00499e69
    ADD ESP,0x8                         ; 00499e6c
    FLD float ptr [ESP + 0xf0]          ; 00499e6f
    FADD float ptr [ESP + 0xfc]         ; 00499e76
    FST float ptr [ESP + 0x168]         ; 00499e7d
    FLD float ptr [0x005822ca]          ; 00499e84 | DAT_005822ca
    FXCH                                ; 00499e8a
    FMUL ST1                            ; 00499e8c
    FLD float ptr [ESP + 0xf8]          ; 00499e8e
    FLD float ptr [ESP + 0xf4]          ; 00499e95
    FADD float ptr [ESP + 0x100]        ; 00499e9c
    FXCH                                ; 00499ea3
    FADD float ptr [ESP + 0x104]        ; 00499ea5
    FXCH                                ; 00499eac
    FST float ptr [ESP + 0x16c]         ; 00499eae
    FMUL ST3                            ; 00499eb5
    FXCH                                ; 00499eb7
    FST float ptr [ESP + 0x170]         ; 00499eb9
    FMULP ST3                           ; 00499ec0
    LEA EAX,[ESP + 0x108]               ; 00499ec2
    LEA EDX,[ESP + 0x174]               ; 00499ec9
    FXCH                                ; 00499ed0
    FSTP float ptr [ESP + 0x108]        ; 00499ed2
    FSTP float ptr [ESP + 0x10c]        ; 00499ed9
    FSTP float ptr [ESP + 0x110]        ; 00499ee0
    CMP EDX,EAX                         ; 00499ee7
    JZ 0x00499f15                       ; 00499ee9
        ;   XREF to: 00499f15 (CONDITIONAL_JUMP)  ; LAB_00499f15
    MOV EAX,dword ptr [ESP + 0x108]     ; 00499eeb
    MOV dword ptr [ESP + 0x174],EAX     ; 00499ef2
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00499ef9
    MOV dword ptr [ESP + 0x178],EAX     ; 00499f00
    MOV EAX,dword ptr [ESP + 0x110]     ; 00499f07
    MOV dword ptr [ESP + 0x17c],EAX     ; 00499f0e
    MOV EDX,dword ptr [ESI + 0x664]     ; 00499f15
        ;   Label: LAB_00499f15
    CMP EDX,0x2                         ; 00499f1b
    JNZ 0x00499f33                      ; 00499f1e
        ;   XREF to: 00499f33 (CONDITIONAL_JUMP)  ; LAB_00499f33
    MOV EAX,dword ptr [ESP + 0x100]     ; 00499f20
    MOV dword ptr [ESP + 0x178],EAX     ; 00499f27
    JMP 0x00499d1a                      ; 00499f2e
        ;   XREF to: 00499d1a (UNCONDITIONAL_JUMP)  ; LAB_00499d1a
    CMP EDX,0x1                         ; 00499f33
        ;   Label: LAB_00499f33
    JNZ 0x0049a05b                      ; 00499f36
        ;   XREF to: 0049a05b (CONDITIONAL_JUMP)  ; LAB_0049a05b
    MOV ECX,dword ptr [EBP + 0x14]      ; 00499f3c
    TEST ECX,ECX                        ; 00499f3f
    JNZ 0x0049a019                      ; 00499f41
        ;   XREF to: 0049a019 (CONDITIONAL_JUMP)  ; LAB_0049a019
    PUSH 0xbfc90fdb                     ; 00499f47
    LEA ESI,[ESP + 0x4]                 ; 00499f4c
    LEA EDI,[ESP + 0xc4]                ; 00499f50
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 00499f57
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 00499f5c
    LEA ESI,[ESP + 0x4]                 ; 00499f61
    ADD ESP,0x4                         ; 00499f65
        ;   Label: LAB_00499f65
    MOVSD.REP ES:EDI,ESI                ; 00499f68
    MOV EDX,dword ptr [ESP + 0x180]     ; 00499f6a
        ;   Label: LAB_00499f6a
    LEA EAX,[EDX*0x4 + 0x0]             ; 00499f71
    SUB EAX,EDX                         ; 00499f78
    MOV EDX,dword ptr [EBP + 0x10]      ; 00499f7a
    SHL EAX,0x4                         ; 00499f7d
    ADD EDX,0xfd0                       ; 00499f80
    ADD EAX,EDX                         ; 00499f86
    PUSH EAX                            ; 00499f88
    LEA EAX,[ESP + 0xc4]                ; 00499f89
    PUSH EAX                            ; 00499f90
    LEA ESI,[ESP + 0x68]                ; 00499f91
    LEA EDI,[ESP + 0xc8]                ; 00499f95
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00499f9c
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 00499fa1
    LEA EAX,[ESP + 0x144]               ; 00499fa4
    MOV ECX,0xc                         ; 00499fab
    PUSH EAX                            ; 00499fb0
    LEA EAX,[ESP + 0xc4]                ; 00499fb1
    LEA ESI,[ESP + 0x64]                ; 00499fb8
    PUSH EAX                            ; 00499fbc
    MOVSD.REP ES:EDI,ESI                ; 00499fbd
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 00499fbf
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    MOV EDX,EAX                         ; 00499fc4
    LEA EAX,[ESP + 0x140]               ; 00499fc6
    ADD ESP,0x8                         ; 00499fcd
    CMP EAX,EDX                         ; 00499fd0
    JZ 0x00499ff1                       ; 00499fd2
        ;   XREF to: 00499ff1 (CONDITIONAL_JUMP)  ; LAB_00499ff1
    MOV EAX,dword ptr [EDX]             ; 00499fd4
    MOV dword ptr [ESP + 0x138],EAX     ; 00499fd6
    MOV EAX,dword ptr [EDX + 0x4]       ; 00499fdd
    MOV dword ptr [ESP + 0x13c],EAX     ; 00499fe0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00499fe7
    MOV dword ptr [ESP + 0x140],EAX     ; 00499fea
    FLD float ptr [ESP + 0xf8]          ; 00499ff1
        ;   Label: LAB_00499ff1
    FMUL double ptr [0x005822d2]        ; 00499ff8 | DAT_005822d2
    FLD float ptr [ESP + 0x104]         ; 00499ffe
    FMUL double ptr [0x005822da]        ; 0049a005 | DAT_005822da
    FADDP                               ; 0049a00b
    FSTP float ptr [ESP + 0x17c]        ; 0049a00d
    JMP 0x00499d1a                      ; 0049a014
        ;   XREF to: 00499d1a (UNCONDITIONAL_JUMP)  ; LAB_00499d1a
    CMP ECX,EDX                         ; 0049a019
        ;   Label: LAB_0049a019
    JNZ 0x0049a046                      ; 0049a01b
        ;   XREF to: 0049a046 (CONDITIONAL_JUMP)  ; LAB_0049a046
    PUSH 0x3fc90fdb                     ; 0049a01d
    LEA ESI,[ESP + 0x94]                ; 0049a022
    LEA EDI,[ESP + 0xc4]                ; 0049a029
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0049a030
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 0049a035
    LEA ESI,[ESP + 0x94]                ; 0049a03a
    JMP 0x00499f65                      ; 0049a041
        ;   XREF to: 00499f65 (UNCONDITIONAL_JUMP)  ; LAB_00499f65
    LEA EAX,[ESP + 0xc0]                ; 0049a046
        ;   Label: LAB_0049a046
    PUSH EAX                            ; 0049a04d
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 0049a04e
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    ADD ESP,0x4                         ; 0049a053
    JMP 0x00499f6a                      ; 0049a056
        ;   XREF to: 00499f6a (UNCONDITIONAL_JUMP)  ; LAB_00499f6a
    CMP EDX,0x3                         ; 0049a05b
        ;   Label: LAB_0049a05b
    JNZ 0x0049a073                      ; 0049a05e
        ;   XREF to: 0049a073 (CONDITIONAL_JUMP)  ; LAB_0049a073
    MOV EAX,dword ptr [ESP + 0x100]     ; 0049a060
    MOV dword ptr [ESP + 0x178],EAX     ; 0049a067
    JMP 0x00499d1a                      ; 0049a06e
        ;   XREF to: 00499d1a (UNCONDITIONAL_JUMP)  ; LAB_00499d1a
    PUSH ESI                            ; 0049a073
        ;   Label: LAB_0049a073
    MOV EAX,0x582292                    ; 0049a074 | s_..\core\gabriela.cpp_00582291+1
    MOV EDX,0x945                       ; 0049a079
    PUSH 0x5822a7                       ; 0049a07e | = "Don't know how to carry light %s"
    MOV [0x01cc4800],EAX                ; 0049a083 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0049a088 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0049a08e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0049a093
    JMP 0x00499d1a                      ; 0049a096
        ;   XREF to: 00499d1a (UNCONDITIONAL_JUMP)  ; LAB_00499d1a
    CMP EDI,0x1                         ; 0049a09b
        ;   Label: LAB_0049a09b
    JNZ 0x0049a0ee                      ; 0049a09e
        ;   XREF to: 0049a0ee (CONDITIONAL_JUMP)  ; LAB_0049a0ee
    MOV EDI,0x3ecccccd                  ; 0049a0a0
    XOR EAX,EAX                         ; 0049a0a5
    LEA EDX,[ESP + 0x15c]               ; 0049a0a7
    MOV dword ptr [ESP + 0x118],EAX     ; 0049a0ae
    MOV dword ptr [ESP + 0x11c],EAX     ; 0049a0b5
    LEA EAX,[ESP + 0x114]               ; 0049a0bc
    MOV dword ptr [ESP + 0x114],EDI     ; 0049a0c3
    CMP EDX,EAX                         ; 0049a0ca
    JZ 0x00499d6b                       ; 0049a0cc
        ;   XREF to: 00499d6b (CONDITIONAL_JUMP)  ; LAB_00499d6b
    XOR ESI,ESI                         ; 0049a0d2
    MOV dword ptr [ESP + 0x15c],EDI     ; 0049a0d4
    MOV dword ptr [ESP + 0x160],ESI     ; 0049a0db
    MOV dword ptr [ESP + 0x164],ESI     ; 0049a0e2
    JMP 0x00499d6b                      ; 0049a0e9
        ;   XREF to: 00499d6b (UNCONDITIONAL_JUMP)  ; LAB_00499d6b
    XOR EDX,EDX                         ; 0049a0ee
        ;   Label: LAB_0049a0ee
    MOV dword ptr [ESP + 0x160],EDX     ; 0049a0f0
    MOV dword ptr [ESP + 0x15c],EDX     ; 0049a0f7
    MOV dword ptr [ESP + 0x164],EDX     ; 0049a0fe
    JMP 0x00499d6b                      ; 0049a105
        ;   XREF to: 00499d6b (UNCONDITIONAL_JUMP)  ; LAB_00499d6b

