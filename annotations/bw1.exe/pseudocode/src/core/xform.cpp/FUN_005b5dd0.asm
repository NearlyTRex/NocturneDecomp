; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_FUN_005b5dd0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
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
; XREF[1]:
;   core_bodypart.cpp_FUN_0041a200 at 0041a4a1
;
; Referenced Globals:
;   undefined4 DAT_005fa0f4
;   undefined4 DAT_005fa0f8
;   undefined4 DAT_005fa0fc
;   undefined4 DAT_005fa100
;   undefined4 DAT_005fa104
;   undefined4 DAT_005fa108
;   undefined4 DAT_005fa10c
;   undefined4 DAT_005fa110
;   undefined4 DAT_005fa114
;   undefined4 DAT_005fa118
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;   crt_math.c_asin_FUN_005c1cd6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5dd0
        ;   Label: core_xform.cpp_FUN_005b5dd0
    PUSH EDI                            ; 005b5dd1
    PUSH EBP                            ; 005b5dd2
    MOV EBP,ESP                         ; 005b5dd3
    SUB ESP,0x60                        ; 005b5dd5
    AND ESP,0xfffffff8                  ; 005b5dd8
    MOV EDX,dword ptr [EBP + 0x10]      ; 005b5ddb
    MOV ECX,ESI                         ; 005b5dde
    FLD float ptr [EDX + 0x4]           ; 005b5de0
    FMUL ST0                            ; 005b5de3
    FLD float ptr [EDX]                 ; 005b5de5
    FMUL ST0                            ; 005b5de7
    FADDP                               ; 005b5de9
    FLD float ptr [EDX + 0x8]           ; 005b5deb
    FMUL ST0                            ; 005b5dee
    FADDP                               ; 005b5df0
    FSQRT                               ; 005b5df2
    FLDZ                                ; 005b5df4
    FXCH                                ; 005b5df6
    FSTP float ptr [ESP + 0x50]         ; 005b5df8
    FCOMP float ptr [ESP + 0x50]        ; 005b5dfc
    FNSTSW AX                           ; 005b5e00
    SAHF                                ; 005b5e02
    JC 0x005b5f5d                       ; 005b5e03
        ;   XREF to: 005b5f5d (CONDITIONAL_JUMP)  ; LAB_005b5f5d
    FLD float ptr [EDX + 0x10]          ; 005b5e09
        ;   Label: LAB_005b5e09
    FMUL ST0                            ; 005b5e0c
    FLD float ptr [EDX + 0x14]          ; 005b5e0e
    FMUL ST0                            ; 005b5e11
    FADDP                               ; 005b5e13
    FLD float ptr [EDX + 0x18]          ; 005b5e15
    FMUL ST0                            ; 005b5e18
    FADDP                               ; 005b5e1a
    FSQRT                               ; 005b5e1c
    FLDZ                                ; 005b5e1e
    FXCH                                ; 005b5e20
    FSTP float ptr [ESP + 0x48]         ; 005b5e22
    FCOMP float ptr [ESP + 0x48]        ; 005b5e26
    FNSTSW AX                           ; 005b5e2a
    SAHF                                ; 005b5e2c
    JNC 0x005b5e39                      ; 005b5e2d
        ;   XREF to: 005b5e39 (CONDITIONAL_JUMP)  ; LAB_005b5e39
    FLD1                                ; 005b5e2f
    FDIV float ptr [ESP + 0x48]         ; 005b5e31
    FSTP float ptr [ESP + 0x48]         ; 005b5e35
    FLD float ptr [EDX + 0x20]          ; 005b5e39
        ;   Label: LAB_005b5e39
    FMUL ST0                            ; 005b5e3c
    FLD float ptr [EDX + 0x24]          ; 005b5e3e
    FMUL ST0                            ; 005b5e41
    FADDP                               ; 005b5e43
    FLD float ptr [EDX + 0x28]          ; 005b5e45
    FMUL ST0                            ; 005b5e48
    FADDP                               ; 005b5e4a
    FSQRT                               ; 005b5e4c
    FLDZ                                ; 005b5e4e
    FXCH                                ; 005b5e50
    FSTP float ptr [ESP + 0x4c]         ; 005b5e52
    FCOMP float ptr [ESP + 0x4c]        ; 005b5e56
    FNSTSW AX                           ; 005b5e5a
    SAHF                                ; 005b5e5c
    JNC 0x005b5e69                      ; 005b5e5d
        ;   XREF to: 005b5e69 (CONDITIONAL_JUMP)  ; LAB_005b5e69
    FLD1                                ; 005b5e5f
    FDIV float ptr [ESP + 0x4c]         ; 005b5e61
    FSTP float ptr [ESP + 0x4c]         ; 005b5e65
    FLD float ptr [EDX + 0x24]          ; 005b5e69
        ;   Label: LAB_005b5e69
    FCHS                                ; 005b5e6c
    FMUL float ptr [ESP + 0x4c]         ; 005b5e6e
    FST float ptr [ESP + 0x10]          ; 005b5e72
    FCOMP float ptr [0x005fa0f4]        ; 005b5e76 | DAT_005fa0f4
    FNSTSW AX                           ; 005b5e7c
    SAHF                                ; 005b5e7e
    JNC 0x005b5f6c                      ; 005b5e7f
        ;   XREF to: 005b5f6c (CONDITIONAL_JUMP)  ; LAB_005b5f6c
    MOV dword ptr [ESP + 0x1c],0xbfc90fdb ; 005b5e85
    FLD float ptr [ESP + 0x50]          ; 005b5e8d
        ;   Label: LAB_005b5e8d
    FLD float ptr [EDX]                 ; 005b5e91
    FMUL ST1                            ; 005b5e93
    FLD float ptr [EDX + 0x8]           ; 005b5e95
    FCHS                                ; 005b5e98
    XOR EBX,EBX                         ; 005b5e9a
    FMULP ST2                           ; 005b5e9c
    MOV dword ptr [ESP + 0x24],EBX      ; 005b5e9e
    FXCH                                ; 005b5ea2
    FSTP float ptr [ESP + 0x14]         ; 005b5ea4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b5ea8
    FSTP float ptr [ESP + 0x3c]         ; 005b5eac
    MOV dword ptr [ESP + 0x2c],EAX      ; 005b5eb0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b5eb4
    FLD float ptr [ESP + 0x14]          ; 005b5eb8
    MOV dword ptr [ESP + 0x18],EAX      ; 005b5ebc
    FCOMP float ptr [0x005fa108]        ; 005b5ec0 | DAT_005fa108
    FNSTSW AX                           ; 005b5ec6
    SAHF                                ; 005b5ec8
    JNC 0x005b6175                      ; 005b5ec9
        ;   XREF to: 005b6175 (CONDITIONAL_JUMP)  ; LAB_005b6175
    FLD float ptr [ESP + 0x14]          ; 005b5ecf
    FCOMP float ptr [0x005fa10c]        ; 005b5ed3 | DAT_005fa10c
    FNSTSW AX                           ; 005b5ed9
    SAHF                                ; 005b5edb
    JBE 0x005b6175                      ; 005b5edc
        ;   XREF to: 005b6175 (CONDITIONAL_JUMP)  ; LAB_005b6175
    FLD float ptr [ESP + 0x14]          ; 005b5ee2
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5ee6
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b5eeb
    FXCH                                ; 005b5eed
    FSTP float ptr [ESP + 0x58]         ; 005b5eef
    FCOMP float ptr [ESP + 0x3c]        ; 005b5ef3
    FNSTSW AX                           ; 005b5ef7
    SAHF                                ; 005b5ef9
    JBE 0x005b5f0a                      ; 005b5efa
        ;   XREF to: 005b5f0a (CONDITIONAL_JUMP)  ; LAB_005b5f0a
    FLD float ptr [0x005fa114]          ; 005b5efc | DAT_005fa114
    FSUB float ptr [ESP + 0x58]         ; 005b5f02
    FSTP float ptr [ESP + 0x58]         ; 005b5f06
    FLD float ptr [ESP + 0x58]          ; 005b5f0a
        ;   Label: LAB_005b5f0a
    FCOMP float ptr [0x005fa0fc]        ; 005b5f0e | DAT_005fa0fc
    FNSTSW AX                           ; 005b5f14
    SAHF                                ; 005b5f16
    JNC 0x005b5f27                      ; 005b5f17
        ;   XREF to: 005b5f27 (CONDITIONAL_JUMP)  ; LAB_005b5f27
    FLD float ptr [ESP + 0x58]          ; 005b5f19
    FADD float ptr [0x005fa100]         ; 005b5f1d | DAT_005fa100
    FSTP float ptr [ESP + 0x58]         ; 005b5f23
    FLD float ptr [ESP + 0x58]          ; 005b5f27
        ;   Label: LAB_005b5f27
    FCOMP float ptr [0x005fa114]        ; 005b5f2b | DAT_005fa114
    FNSTSW AX                           ; 005b5f31
    SAHF                                ; 005b5f33
    JBE 0x005b5f44                      ; 005b5f34
        ;   XREF to: 005b5f44 (CONDITIONAL_JUMP)  ; LAB_005b5f44
    FLD float ptr [ESP + 0x58]          ; 005b5f36
    FADD float ptr [0x005fa118]         ; 005b5f3a | DAT_005fa118
    FSTP float ptr [ESP + 0x58]         ; 005b5f40
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b5f44
        ;   Label: LAB_005b5f44
    MOV dword ptr [ESP + 0x20],EAX      ; 005b5f48
    LEA ESI,[ESP + 0x1c]                ; 005b5f4c
    MOV EDI,ECX                         ; 005b5f50
    MOVSD ES:EDI,ESI                    ; 005b5f52
    MOVSD ES:EDI,ESI                    ; 005b5f53
    MOVSD ES:EDI,ESI                    ; 005b5f54
    MOV EAX,ECX                         ; 005b5f55
    MOV ESP,EBP                         ; 005b5f57
    POP EBP                             ; 005b5f59
    POP EDI                             ; 005b5f5a
    POP EBX                             ; 005b5f5b
    RET                                 ; 005b5f5c
    FLD1                                ; 005b5f5d
        ;   Label: LAB_005b5f5d
    FDIV float ptr [ESP + 0x50]         ; 005b5f5f
    FSTP float ptr [ESP + 0x50]         ; 005b5f63
    JMP 0x005b5e09                      ; 005b5f67
        ;   XREF to: 005b5e09 (UNCONDITIONAL_JUMP)  ; LAB_005b5e09
    FLD float ptr [ESP + 0x10]          ; 005b5f6c
        ;   Label: LAB_005b5f6c
    FCOMP float ptr [0x005fa0f8]        ; 005b5f70 | DAT_005fa0f8
    FNSTSW AX                           ; 005b5f76
    SAHF                                ; 005b5f78
    JBE 0x005b5f88                      ; 005b5f79
        ;   XREF to: 005b5f88 (CONDITIONAL_JUMP)  ; LAB_005b5f88
    MOV dword ptr [ESP + 0x1c],0x3fc90fdb ; 005b5f7b
    JMP 0x005b5e8d                      ; 005b5f83
        ;   XREF to: 005b5e8d (UNCONDITIONAL_JUMP)  ; LAB_005b5e8d
    FLD float ptr [ESP + 0x10]          ; 005b5f88
        ;   Label: LAB_005b5f88
    FLD ST0                             ; 005b5f8c
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5f8e
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLD ST1                             ; 005b5f93
    FMULP ST2                           ; 005b5f95
    FLD1                                ; 005b5f97
    FSUBRP ST2,ST0                      ; 005b5f99
    FXCH                                ; 005b5f9b
    FSQRT                               ; 005b5f9d
    FXCH                                ; 005b5f9f
    FST float ptr [ESP + 0x1c]          ; 005b5fa1
    FXCH                                ; 005b5fa5
    FSTP float ptr [ESP + 0x40]         ; 005b5fa7
    FCOMP float ptr [0x005fa0fc]        ; 005b5fab | DAT_005fa0fc
    FNSTSW AX                           ; 005b5fb1
    SAHF                                ; 005b5fb3
    JNC 0x005b5fc4                      ; 005b5fb4
        ;   XREF to: 005b5fc4 (CONDITIONAL_JUMP)  ; LAB_005b5fc4
    FLD float ptr [ESP + 0x1c]          ; 005b5fb6
    FADD float ptr [0x005fa100]         ; 005b5fba | DAT_005fa100
    FSTP float ptr [ESP + 0x1c]         ; 005b5fc0
    FLD float ptr [ESP + 0x40]          ; 005b5fc4
        ;   Label: LAB_005b5fc4
    FCOMP float ptr [0x005fa104]        ; 005b5fc8 | DAT_005fa104
    FNSTSW AX                           ; 005b5fce
    SAHF                                ; 005b5fd0
    JC 0x005b5e8d                       ; 005b5fd1
        ;   XREF to: 005b5e8d (CONDITIONAL_JUMP)  ; LAB_005b5e8d
    FLD1                                ; 005b5fd7
    FDIV float ptr [ESP + 0x40]         ; 005b5fd9
    FLD float ptr [ESP + 0x4c]          ; 005b5fdd
    FLD float ptr [EDX + 0x28]          ; 005b5fe1
    FMUL ST1                            ; 005b5fe4
    FLD float ptr [EDX + 0x20]          ; 005b5fe6
    FMULP ST2                           ; 005b5fe9
    FXCH ST2                            ; 005b5feb
    FSTP float ptr [ESP + 0x44]         ; 005b5fed
    FMUL float ptr [ESP + 0x44]         ; 005b5ff1
    FXCH                                ; 005b5ff5
    FMUL float ptr [ESP + 0x44]         ; 005b5ff7
    FXCH                                ; 005b5ffb
    FSTP float ptr [ESP]                ; 005b5ffd
    MOV EAX,dword ptr [ESP]             ; 005b6000
    FSTP float ptr [ESP + 0x34]         ; 005b6003
    MOV dword ptr [ESP + 0x28],EAX      ; 005b6007
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b600b
    FLD float ptr [ESP]                 ; 005b600f
    MOV dword ptr [ESP + 0x8],EAX       ; 005b6012
    FCOMP float ptr [0x005fa108]        ; 005b6016 | DAT_005fa108
    FNSTSW AX                           ; 005b601c
    SAHF                                ; 005b601e
    JNC 0x005b61c6                      ; 005b601f
        ;   XREF to: 005b61c6 (CONDITIONAL_JUMP)  ; LAB_005b61c6
    FLD float ptr [ESP]                 ; 005b6025
    FCOMP float ptr [0x005fa10c]        ; 005b6028 | DAT_005fa10c
    FNSTSW AX                           ; 005b602e
    SAHF                                ; 005b6030
    JBE 0x005b61c6                      ; 005b6031
        ;   XREF to: 005b61c6 (CONDITIONAL_JUMP)  ; LAB_005b61c6
    FLD float ptr [ESP]                 ; 005b6037
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b603a
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b603f
    FXCH                                ; 005b6041
    FSTP float ptr [ESP + 0x5c]         ; 005b6043
    FCOMP float ptr [ESP + 0x34]        ; 005b6047
    FNSTSW AX                           ; 005b604b
    SAHF                                ; 005b604d
    JBE 0x005b605e                      ; 005b604e
        ;   XREF to: 005b605e (CONDITIONAL_JUMP)  ; LAB_005b605e
    FLD float ptr [0x005fa114]          ; 005b6050 | DAT_005fa114
    FSUB float ptr [ESP + 0x5c]         ; 005b6056
    FSTP float ptr [ESP + 0x5c]         ; 005b605a
    FLD float ptr [ESP + 0x5c]          ; 005b605e
        ;   Label: LAB_005b605e
    FCOMP float ptr [0x005fa0fc]        ; 005b6062 | DAT_005fa0fc
    FNSTSW AX                           ; 005b6068
    SAHF                                ; 005b606a
    JNC 0x005b607b                      ; 005b606b
        ;   XREF to: 005b607b (CONDITIONAL_JUMP)  ; LAB_005b607b
    FLD float ptr [ESP + 0x5c]          ; 005b606d
    FADD float ptr [0x005fa100]         ; 005b6071 | DAT_005fa100
    FSTP float ptr [ESP + 0x5c]         ; 005b6077
    FLD float ptr [ESP + 0x5c]          ; 005b607b
        ;   Label: LAB_005b607b
    FCOMP float ptr [0x005fa114]        ; 005b607f | DAT_005fa114
    FNSTSW AX                           ; 005b6085
    SAHF                                ; 005b6087
    JBE 0x005b6098                      ; 005b6088
        ;   XREF to: 005b6098 (CONDITIONAL_JUMP)  ; LAB_005b6098
    FLD float ptr [ESP + 0x5c]          ; 005b608a
    FADD float ptr [0x005fa118]         ; 005b608e | DAT_005fa118
    FSTP float ptr [ESP + 0x5c]         ; 005b6094
    FLD float ptr [EDX + 0x14]          ; 005b6098
        ;   Label: LAB_005b6098
    FMUL float ptr [ESP + 0x48]         ; 005b609b
    FLD float ptr [EDX + 0x4]           ; 005b609f
    FMUL float ptr [ESP + 0x50]         ; 005b60a2
    FXCH                                ; 005b60a6
    FLD float ptr [ESP + 0x44]          ; 005b60a8
    FXCH                                ; 005b60ac
    FMUL ST1                            ; 005b60ae
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b60b0
    FXCH ST2                            ; 005b60b4
    FMULP                               ; 005b60b6
    MOV dword ptr [ESP + 0x20],EAX      ; 005b60b8
    FSTP float ptr [ESP + 0xc]          ; 005b60bc
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b60c0
    FSTP float ptr [ESP + 0x38]         ; 005b60c4
    MOV dword ptr [ESP + 0x30],EAX      ; 005b60c8
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b60cc
    FLD float ptr [ESP + 0xc]           ; 005b60d0
    MOV dword ptr [ESP + 0x4],EAX       ; 005b60d4
    FCOMP float ptr [0x005fa108]        ; 005b60d8 | DAT_005fa108
    FNSTSW AX                           ; 005b60de
    SAHF                                ; 005b60e0
    JNC 0x005b6217                      ; 005b60e1
        ;   XREF to: 005b6217 (CONDITIONAL_JUMP)  ; LAB_005b6217
    FLD float ptr [ESP + 0xc]           ; 005b60e7
    FCOMP float ptr [0x005fa10c]        ; 005b60eb | DAT_005fa10c
    FNSTSW AX                           ; 005b60f1
    SAHF                                ; 005b60f3
    JBE 0x005b6217                      ; 005b60f4
        ;   XREF to: 005b6217 (CONDITIONAL_JUMP)  ; LAB_005b6217
    FLD float ptr [ESP + 0xc]           ; 005b60fa
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b60fe
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b6103
    FXCH                                ; 005b6105
    FSTP float ptr [ESP + 0x54]         ; 005b6107
    FCOMP float ptr [ESP + 0x38]        ; 005b610b
    FNSTSW AX                           ; 005b610f
    SAHF                                ; 005b6111
    JBE 0x005b6122                      ; 005b6112
        ;   XREF to: 005b6122 (CONDITIONAL_JUMP)  ; LAB_005b6122
    FLD float ptr [0x005fa114]          ; 005b6114 | DAT_005fa114
    FSUB float ptr [ESP + 0x54]         ; 005b611a
    FSTP float ptr [ESP + 0x54]         ; 005b611e
    FLD float ptr [ESP + 0x54]          ; 005b6122
        ;   Label: LAB_005b6122
    FCOMP float ptr [0x005fa0fc]        ; 005b6126 | DAT_005fa0fc
    FNSTSW AX                           ; 005b612c
    SAHF                                ; 005b612e
    JNC 0x005b613f                      ; 005b612f
        ;   XREF to: 005b613f (CONDITIONAL_JUMP)  ; LAB_005b613f
    FLD float ptr [ESP + 0x54]          ; 005b6131
    FADD float ptr [0x005fa100]         ; 005b6135 | DAT_005fa100
    FSTP float ptr [ESP + 0x54]         ; 005b613b
    FLD float ptr [ESP + 0x54]          ; 005b613f
        ;   Label: LAB_005b613f
    FCOMP float ptr [0x005fa114]        ; 005b6143 | DAT_005fa114
    FNSTSW AX                           ; 005b6149
    SAHF                                ; 005b614b
    JBE 0x005b615c                      ; 005b614c
        ;   XREF to: 005b615c (CONDITIONAL_JUMP)  ; LAB_005b615c
    FLD float ptr [ESP + 0x54]          ; 005b614e
    FADD float ptr [0x005fa118]         ; 005b6152 | DAT_005fa118
    FSTP float ptr [ESP + 0x54]         ; 005b6158
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b615c
        ;   Label: LAB_005b615c
    MOV dword ptr [ESP + 0x24],EAX      ; 005b6160
    LEA ESI,[ESP + 0x1c]                ; 005b6164
    MOV EDI,ECX                         ; 005b6168
    MOVSD ES:EDI,ESI                    ; 005b616a
    MOVSD ES:EDI,ESI                    ; 005b616b
    MOVSD ES:EDI,ESI                    ; 005b616c
    MOV EAX,ECX                         ; 005b616d
    MOV ESP,EBP                         ; 005b616f
    POP EBP                             ; 005b6171
    POP EDI                             ; 005b6172
    POP EBX                             ; 005b6173
    RET                                 ; 005b6174
    FLD float ptr [ESP + 0x18]          ; 005b6175
        ;   Label: LAB_005b6175
    FCOMP float ptr [0x005fa110]        ; 005b6179 | DAT_005fa110
    FNSTSW AX                           ; 005b617f
    SAHF                                ; 005b6181
    JA 0x005b61a5                       ; 005b6182
        ;   XREF to: 005b61a5 (CONDITIONAL_JUMP)  ; LAB_005b61a5
    MOV dword ptr [ESP + 0x58],0x40490fdb ; 005b6184
    FLDZ                                ; 005b618c
        ;   Label: LAB_005b618c
    FCOMP float ptr [ESP + 0x2c]        ; 005b618e
    FNSTSW AX                           ; 005b6192
    SAHF                                ; 005b6194
    JBE 0x005b5f0a                      ; 005b6195
        ;   XREF to: 005b5f0a (CONDITIONAL_JUMP)  ; LAB_005b5f0a
    XOR byte ptr [ESP + 0x5b],0x80      ; 005b619b
    JMP 0x005b5f0a                      ; 005b61a0
        ;   XREF to: 005b5f0a (UNCONDITIONAL_JUMP)  ; LAB_005b5f0a
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 005b61a5
        ;   Label: LAB_005b61a5
    JL 0x005b61b7                       ; 005b61ad
        ;   XREF to: 005b61b7 (CONDITIONAL_JUMP)  ; LAB_005b61b7
    XOR EDI,EDI                         ; 005b61af
    MOV dword ptr [ESP + 0x58],EDI      ; 005b61b1
    JMP 0x005b618c                      ; 005b61b5
        ;   XREF to: 005b618c (UNCONDITIONAL_JUMP)  ; LAB_005b618c
    FLD float ptr [ESP + 0x18]          ; 005b61b7
        ;   Label: LAB_005b61b7
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b61bb
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x58]         ; 005b61c0
    JMP 0x005b618c                      ; 005b61c4
        ;   XREF to: 005b618c (UNCONDITIONAL_JUMP)  ; LAB_005b618c
    FLD float ptr [ESP + 0x8]           ; 005b61c6
        ;   Label: LAB_005b61c6
    FCOMP float ptr [0x005fa110]        ; 005b61ca | DAT_005fa110
    FNSTSW AX                           ; 005b61d0
    SAHF                                ; 005b61d2
    JA 0x005b61f6                       ; 005b61d3
        ;   XREF to: 005b61f6 (CONDITIONAL_JUMP)  ; LAB_005b61f6
    MOV dword ptr [ESP + 0x5c],0x40490fdb ; 005b61d5
    FLDZ                                ; 005b61dd
        ;   Label: LAB_005b61dd
    FCOMP float ptr [ESP + 0x28]        ; 005b61df
    FNSTSW AX                           ; 005b61e3
    SAHF                                ; 005b61e5
    JBE 0x005b605e                      ; 005b61e6
        ;   XREF to: 005b605e (CONDITIONAL_JUMP)  ; LAB_005b605e
    XOR byte ptr [ESP + 0x5f],0x80      ; 005b61ec
    JMP 0x005b605e                      ; 005b61f1
        ;   XREF to: 005b605e (UNCONDITIONAL_JUMP)  ; LAB_005b605e
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 005b61f6
        ;   Label: LAB_005b61f6
    JL 0x005b6208                       ; 005b61fe
        ;   XREF to: 005b6208 (CONDITIONAL_JUMP)  ; LAB_005b6208
    XOR ESI,ESI                         ; 005b6200
    MOV dword ptr [ESP + 0x5c],ESI      ; 005b6202
    JMP 0x005b61dd                      ; 005b6206
        ;   XREF to: 005b61dd (UNCONDITIONAL_JUMP)  ; LAB_005b61dd
    FLD float ptr [ESP + 0x8]           ; 005b6208
        ;   Label: LAB_005b6208
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b620c
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x5c]         ; 005b6211
    JMP 0x005b61dd                      ; 005b6215
        ;   XREF to: 005b61dd (UNCONDITIONAL_JUMP)  ; LAB_005b61dd
    FLD float ptr [ESP + 0x4]           ; 005b6217
        ;   Label: LAB_005b6217
    FCOMP float ptr [0x005fa110]        ; 005b621b | DAT_005fa110
    FNSTSW AX                           ; 005b6221
    SAHF                                ; 005b6223
    JA 0x005b6247                       ; 005b6224
        ;   XREF to: 005b6247 (CONDITIONAL_JUMP)  ; LAB_005b6247
    MOV dword ptr [ESP + 0x54],0x40490fdb ; 005b6226
    FLDZ                                ; 005b622e
        ;   Label: LAB_005b622e
    FCOMP float ptr [ESP + 0x30]        ; 005b6230
    FNSTSW AX                           ; 005b6234
    SAHF                                ; 005b6236
    JBE 0x005b6122                      ; 005b6237
        ;   XREF to: 005b6122 (CONDITIONAL_JUMP)  ; LAB_005b6122
    XOR byte ptr [ESP + 0x57],0x80      ; 005b623d
    JMP 0x005b6122                      ; 005b6242
        ;   XREF to: 005b6122 (UNCONDITIONAL_JUMP)  ; LAB_005b6122
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 005b6247
        ;   Label: LAB_005b6247
    JL 0x005b6259                       ; 005b624f
        ;   XREF to: 005b6259 (CONDITIONAL_JUMP)  ; LAB_005b6259
    XOR EBX,EBX                         ; 005b6251
    MOV dword ptr [ESP + 0x54],EBX      ; 005b6253
    JMP 0x005b622e                      ; 005b6257
        ;   XREF to: 005b622e (UNCONDITIONAL_JUMP)  ; LAB_005b622e
    FLD float ptr [ESP + 0x4]           ; 005b6259
        ;   Label: LAB_005b6259
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b625d
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x54]         ; 005b6262
    JMP 0x005b622e                      ; 005b6266
        ;   XREF to: 005b622e (UNCONDITIONAL_JUMP)  ; LAB_005b622e

