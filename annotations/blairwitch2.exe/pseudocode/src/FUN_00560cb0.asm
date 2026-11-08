; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560cb0(int param_1)
;
;
; XREF[1]:
;   FUN_00560760 at 00560a7e
;
; Referenced Globals:
;   undefined4 DAT_005eb0c8
;   undefined4 DAT_005eb0cc
;   undefined4 DAT_005eb0d0
;   undefined4 DAT_005eb0d4
;   undefined4 DAT_0061b5a8
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_00408de0
;   FUN_004093a0
;   FUN_0041a590
;   FUN_0041a600
;   FUN_0041b600
;   FUN_004222d0
;   FUN_00537fa0
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560cb0
        ;   Label: FUN_00560cb0
    PUSH ESI                            ; 00560cb1
    PUSH EDI                            ; 00560cb2
    PUSH EBP                            ; 00560cb3
    MOV EBP,ESP                         ; 00560cb4
    SUB ESP,0x238                       ; 00560cb6
    AND ESP,0xfffffff8                  ; 00560cbc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00560cbf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00560cc2
    PUSH EDX                            ; 00560cc5
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00560cc6
    LEA ESI,[ESP + 0x10c]               ; 00560ccc
    LEA EDI,[ESP + 0xf4]                ; 00560cd3
    CALL dword ptr [EAX + 0x24]         ; 00560cda
    MOV ECX,0x6                         ; 00560cdd
    LEA ESI,[ESP + 0x10c]               ; 00560ce2
    ADD ESP,0x4                         ; 00560ce9
    LEA EAX,[ESP + 0x120]               ; 00560cec
    MOVSD.REP ES:EDI,ESI                ; 00560cf3
    PUSH EAX                            ; 00560cf5
    FLD float ptr [ESP + 0xf4]          ; 00560cf6
    FLD float ptr [ESP + 0xf8]          ; 00560cfd
    FLD float ptr [ESP + 0x100]         ; 00560d04
    FLD float ptr [ESP + 0x104]         ; 00560d0b
    FXCH ST3                            ; 00560d12
    FLD float ptr [0x005eb0c8]          ; 00560d14 | DAT_005eb0c8
    FXCH                                ; 00560d1a
    FADD ST0,ST1                        ; 00560d1c
    FXCH ST3                            ; 00560d1e
    FADDP                               ; 00560d20
    FXCH                                ; 00560d22
    FLD float ptr [0x005eb0cc]          ; 00560d24 | DAT_005eb0cc
    FXCH                                ; 00560d2a
    FADD ST0,ST1                        ; 00560d2c
    FXCH ST4                            ; 00560d2e
    FADDP                               ; 00560d30
    FXCH ST2                            ; 00560d32
    FSTP float ptr [ESP + 0xf4]         ; 00560d34
    FSTP float ptr [ESP + 0xf8]         ; 00560d3b
    FXCH                                ; 00560d42
    FSTP float ptr [ESP + 0x100]        ; 00560d44
    FSTP float ptr [ESP + 0x104]        ; 00560d4b
    CALL FUN_0041b600                   ; 00560d52
        ;   XREF to: 0041b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b600()
    ADD ESP,0x4                         ; 00560d57
    PUSH 0x5f22b0                       ; 00560d5a
    PUSH 0x8                            ; 00560d5f
    LEA EAX,[ESP + 0x18]                ; 00560d61
    PUSH EAX                            ; 00560d65
    CALL FUN_005b7f5f                   ; 00560d66
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00560d6b
    XOR ECX,ECX                         ; 00560d6e
    LEA EBX,[ESP + 0x10]                ; 00560d70
    MOV dword ptr [ESP + 0x230],ECX     ; 00560d74
    MOV ESI,dword ptr [ESP + 0x230]     ; 00560d7b
        ;   Label: LAB_00560d7b
    PUSH ESI                            ; 00560d82
    LEA EAX,[ESP + 0xf4]                ; 00560d83
    PUSH EAX                            ; 00560d8a
    LEA ESI,[ESP + 0x1ac]               ; 00560d8b
    LEA EDI,[ESP + 0x200]               ; 00560d92
    CALL FUN_0041a600                   ; 00560d99
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x1ac]               ; 00560d9e
    ADD ESP,0x8                         ; 00560da5
    LEA EAX,[ESP + 0x1f8]               ; 00560da8
    MOVSD ES:EDI,ESI                    ; 00560daf
    MOVSD ES:EDI,ESI                    ; 00560db0
    MOVSD ES:EDI,ESI                    ; 00560db1
    PUSH EAX                            ; 00560db2
    MOV EDI,dword ptr [EBP + 0x14]      ; 00560db3
    PUSH EDI                            ; 00560db6
    LEA ESI,[ESP + 0x1f4]               ; 00560db7
    CALL FUN_00408d70                   ; 00560dbe
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[ESP + 0x1dc]               ; 00560dc3
    LEA ESI,[ESP + 0x1f4]               ; 00560dca
    ADD ESP,0x8                         ; 00560dd1
    LEA EAX,[ESP + 0x1d4]               ; 00560dd4
    MOVSD ES:EDI,ESI                    ; 00560ddb
    MOVSD ES:EDI,ESI                    ; 00560ddc
    MOVSD ES:EDI,ESI                    ; 00560ddd
    CMP EBX,EAX                         ; 00560dde
    JZ 0x00560dff                       ; 00560de0
        ;   XREF to: 00560dff (CONDITIONAL_JUMP)  ; LAB_00560dff
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00560de2
    MOV dword ptr [EBX],EAX             ; 00560de9
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00560deb
    MOV dword ptr [EBX + 0x4],EAX       ; 00560df2
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00560df5
    MOV dword ptr [EBX + 0x8],EAX       ; 00560dfc
    PUSH EBX                            ; 00560dff
        ;   Label: LAB_00560dff
    LEA EAX,[ESP + 0x124]               ; 00560e00
    PUSH EAX                            ; 00560e07
    CALL FUN_0041a590                   ; 00560e08
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a590()
    ADD ESP,0x8                         ; 00560e0d
    MOV EAX,dword ptr [ESP + 0x230]     ; 00560e10
    INC EAX                             ; 00560e17
    ADD EBX,0xc                         ; 00560e18
    MOV dword ptr [ESP + 0x230],EAX     ; 00560e1b
    CMP EAX,0x8                         ; 00560e22
    JL 0x00560d7b                       ; 00560e25
        ;   XREF to: 00560d7b (CONDITIONAL_JUMP)  ; LAB_00560d7b
    FLD float ptr [ESP + 0xf4]          ; 00560e2b
    FMUL ST0                            ; 00560e32
    FLD float ptr [ESP + 0xf0]          ; 00560e34
    FMUL ST0                            ; 00560e3b
    FADDP                               ; 00560e3d
    FLD float ptr [ESP + 0xf8]          ; 00560e3f
    FMUL ST0                            ; 00560e46
    FADDP                               ; 00560e48
    FSQRT                               ; 00560e4a
    FLD float ptr [ESP + 0xfc]          ; 00560e4c
    FMUL ST0                            ; 00560e53
    FLD float ptr [ESP + 0x100]         ; 00560e55
    FMUL ST0                            ; 00560e5c
    FADDP                               ; 00560e5e
    FLD float ptr [ESP + 0x104]         ; 00560e60
    FMUL ST0                            ; 00560e67
    FADDP                               ; 00560e69
    FSTP float ptr [ESP + 0xc]          ; 00560e6b
    FSTP float ptr [ESP + 0x210]        ; 00560e6f
    MOV EAX,dword ptr [ESP + 0x210]     ; 00560e76
    FLD float ptr [ESP + 0xc]           ; 00560e7d
    MOV dword ptr [ESP + 0x218],EAX     ; 00560e81
    FSQRT                               ; 00560e88
    FST float ptr [ESP + 0x214]         ; 00560e8a
    FCOMP float ptr [ESP + 0x210]       ; 00560e91
    FNSTSW AX                           ; 00560e98
    SAHF                                ; 00560e9a
    JA 0x00560fbe                       ; 00560e9b
        ;   XREF to: 00560fbe (CONDITIONAL_JUMP)  ; LAB_00560fbe
    FLD float ptr [ESP + 0x218]         ; 00560ea1
        ;   Label: LAB_00560ea1
    FMUL float ptr [0x005eb0d0]         ; 00560ea8 | DAT_005eb0d0
    FADD float ptr [0x005eb0d4]         ; 00560eae | DAT_005eb0d4
    FST float ptr [ESP + 0x218]         ; 00560eb4
    FMUL float ptr [ESP + 0x218]        ; 00560ebb
    FLD float ptr [ESP + 0x104]         ; 00560ec2
    FSUB float ptr [ESP + 0xf8]         ; 00560ec9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00560ed0
    FSTP float ptr [ESP + 0x234]        ; 00560ed3
    MOV EAX,dword ptr [ESP + 0x234]     ; 00560eda
    LEA EDI,[ESP + 0x198]               ; 00560ee1
    MOV dword ptr [ESP + 0x14c],EAX     ; 00560ee8
    LEA EAX,[ESP + 0x144]               ; 00560eef
    XOR ECX,ECX                         ; 00560ef6
    PUSH EAX                            ; 00560ef8
    MOV dword ptr [ESP + 0x148],ECX     ; 00560ef9
    MOV dword ptr [ESP + 0x14c],ECX     ; 00560f00
    PUSH ESI                            ; 00560f07
    LEA ESI,[ESP + 0x158]               ; 00560f08
    FSTP float ptr [ESP + 0x224]        ; 00560f0f
    CALL FUN_00408cf0                   ; 00560f16
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0x158]               ; 00560f1b
    ADD ESP,0x8                         ; 00560f22
    MOVSD ES:EDI,ESI                    ; 00560f25
    MOVSD ES:EDI,ESI                    ; 00560f26
    MOVSD ES:EDI,ESI                    ; 00560f27
    MOV EAX,dword ptr [EBP + 0x14]      ; 00560f28
    XOR EDI,EDI                         ; 00560f2b
    ADD EAX,0x20                        ; 00560f2d
    MOV dword ptr [ESP + 0x22c],EDI     ; 00560f30
    MOV dword ptr [ESP + 0x224],EAX     ; 00560f37
    MOV dword ptr [ESP + 0x228],EDI     ; 00560f3e
    MOV EAX,[0x0061b5a8]                ; 00560f45 | DAT_0061b5a8
        ;   Label: LAB_00560f45
    MOV EDX,dword ptr [ESP + 0x22c]     ; 00560f4a
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 00560f51
    JGE 0x005612b4                      ; 00560f57
        ;   XREF to: 005612b4 (CONDITIONAL_JUMP)  ; LAB_005612b4
    ADD EAX,dword ptr [ESP + 0x228]     ; 00560f5d
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00560f64
    MOV EAX,dword ptr [ESP + 0x224]     ; 00560f6a
    LEA ESI,[EBX + 0x20]                ; 00560f71
    FLD float ptr [EAX]                 ; 00560f74
    FSUB float ptr [ESI]                ; 00560f76
    FMUL ST0                            ; 00560f78
    FLD float ptr [EAX + 0x4]           ; 00560f7a
    FSUB float ptr [ESI + 0x4]          ; 00560f7d
    FMUL ST0                            ; 00560f80
    FLD float ptr [EAX + 0x8]           ; 00560f82
    FXCH                                ; 00560f85
    FADDP ST2,ST0                       ; 00560f87
    FSUB float ptr [ESI + 0x8]          ; 00560f89
    FMUL ST0                            ; 00560f8c
    FADDP                               ; 00560f8e
    FCOMP float ptr [ESP + 0x21c]       ; 00560f90
    FNSTSW AX                           ; 00560f97
    SAHF                                ; 00560f99
    JBE 0x00560fd1                      ; 00560f9a
        ;   XREF to: 00560fd1 (CONDITIONAL_JUMP)  ; LAB_00560fd1
    MOV ECX,dword ptr [ESP + 0x22c]     ; 00560f9c
        ;   Label: LAB_00560f9c
    MOV EDX,dword ptr [ESP + 0x228]     ; 00560fa3
    INC ECX                             ; 00560faa
    ADD EDX,0x4                         ; 00560fab
    MOV dword ptr [ESP + 0x22c],ECX     ; 00560fae
    MOV dword ptr [ESP + 0x228],EDX     ; 00560fb5
    JMP 0x00560f45                      ; 00560fbc
        ;   XREF to: 00560f45 (UNCONDITIONAL_JUMP)  ; LAB_00560f45
    MOV EAX,dword ptr [ESP + 0x214]     ; 00560fbe
        ;   Label: LAB_00560fbe
    MOV dword ptr [ESP + 0x218],EAX     ; 00560fc5
    JMP 0x00560ea1                      ; 00560fcc
        ;   XREF to: 00560ea1 (UNCONDITIONAL_JUMP)  ; LAB_00560ea1
    LEA EAX,[ESP + 0xac]                ; 00560fd1
        ;   Label: LAB_00560fd1
    PUSH EAX                            ; 00560fd8
    CALL FUN_00537fa0                   ; 00560fd9
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537fa0()
    ADD ESP,0x4                         ; 00560fde
    LEA EDX,[ESP + 0xac]                ; 00560fe1
    XOR EDI,EDI                         ; 00560fe8
    PUSH EDX                            ; 00560fea
    MOV dword ptr [ESP + 0xb0],EDI      ; 00560feb
    PUSH EBX                            ; 00560ff2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00560ff3
    CALL dword ptr [EAX + 0x44]         ; 00560ff9
    ADD ESP,0x8                         ; 00560ffc
    MOV dword ptr [ESP + 0x220],EAX     ; 00560fff
    TEST EAX,EAX                        ; 00561006
    JZ 0x00560f9c                       ; 00561008
        ;   XREF to: 00560f9c (CONDITIONAL_JUMP)  ; LAB_00560f9c
    PUSH ESI                            ; 0056100a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056100b
    MOV dword ptr [ESP + 0xc4],EDI      ; 0056100e
    PUSH EDX                            ; 00561015
    LEA ESI,[ESP + 0x1e8]               ; 00561016
    LEA EDI,[ESP + 0x164]               ; 0056101d
    CALL FUN_00408de0                   ; 00561024
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x1e8]               ; 00561029
    ADD ESP,0x8                         ; 00561030
    MOVSD ES:EDI,ESI                    ; 00561033
    MOVSD ES:EDI,ESI                    ; 00561034
    MOVSD ES:EDI,ESI                    ; 00561035
    FLD float ptr [ESP + 0x15c]         ; 00561036
    FCOMP float ptr [ESP + 0xf0]        ; 0056103d
    FNSTSW AX                           ; 00561044
    SAHF                                ; 00561046
    JNC 0x00561057                      ; 00561047
        ;   XREF to: 00561057 (CONDITIONAL_JUMP)  ; LAB_00561057
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00561049
    MOV dword ptr [ESP + 0x15c],EAX     ; 00561050
    FLD float ptr [ESP + 0x15c]         ; 00561057
        ;   Label: LAB_00561057
    FCOMP float ptr [ESP + 0xfc]        ; 0056105e
    FNSTSW AX                           ; 00561065
    SAHF                                ; 00561067
    JBE 0x00561078                      ; 00561068
        ;   XREF to: 00561078 (CONDITIONAL_JUMP)  ; LAB_00561078
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0056106a
    MOV dword ptr [ESP + 0x15c],EAX     ; 00561071
    FLD float ptr [ESP + 0x160]         ; 00561078
        ;   Label: LAB_00561078
    FCOMP float ptr [ESP + 0xf4]        ; 0056107f
    FNSTSW AX                           ; 00561086
    SAHF                                ; 00561088
    JNC 0x00561099                      ; 00561089
        ;   XREF to: 00561099 (CONDITIONAL_JUMP)  ; LAB_00561099
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0056108b
    MOV dword ptr [ESP + 0x160],EAX     ; 00561092
    FLD float ptr [ESP + 0x160]         ; 00561099
        ;   Label: LAB_00561099
    FCOMP float ptr [ESP + 0x100]       ; 005610a0
    FNSTSW AX                           ; 005610a7
    SAHF                                ; 005610a9
    JBE 0x005610ba                      ; 005610aa
        ;   XREF to: 005610ba (CONDITIONAL_JUMP)  ; LAB_005610ba
    MOV EAX,dword ptr [ESP + 0x100]     ; 005610ac
    MOV dword ptr [ESP + 0x160],EAX     ; 005610b3
    LEA EAX,[ESP + 0x15c]               ; 005610ba
        ;   Label: LAB_005610ba
    MOV ESI,dword ptr [EBP + 0x14]      ; 005610c1
    PUSH EAX                            ; 005610c4
    LEA EDI,[ESP + 0x1b4]               ; 005610c5
    XOR ECX,ECX                         ; 005610cc
    PUSH ESI                            ; 005610ce
    LEA ESI,[ESP + 0x1d0]               ; 005610cf
    MOV dword ptr [ESP + 0x16c],ECX     ; 005610d6
    CALL FUN_00408d70                   ; 005610dd
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x1d0]               ; 005610e2
    ADD ESP,0x8                         ; 005610e9
    LEA EAX,[ESP + 0x120]               ; 005610ec
    MOVSD ES:EDI,ESI                    ; 005610f3
    MOVSD ES:EDI,ESI                    ; 005610f4
    MOVSD ES:EDI,ESI                    ; 005610f5
    PUSH EAX                            ; 005610f6
    MOV EDI,dword ptr [ESP + 0x224]     ; 005610f7
    PUSH EDI                            ; 005610fe
    LEA EAX,[ESP + 0xb4]                ; 005610ff
    PUSH EAX                            ; 00561106
    LEA EAX,[ESP + 0xe0]                ; 00561107
    PUSH EAX                            ; 0056110e
    LEA EAX,[ESP + 0x1a8]               ; 0056110f
    PUSH EAX                            ; 00561116
    LEA EAX,[ESP + 0x1c4]               ; 00561117
    PUSH EAX                            ; 0056111e
    PUSH EBX                            ; 0056111f
    CALL FUN_004093a0                   ; 00561120
        ;   XREF to: 004093a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004093a0()
    MOV dword ptr [ESP + 0x250],EAX     ; 00561125
    FLD float ptr [ESP + 0x250]         ; 0056112c
    ADD ESP,0x1c                        ; 00561133
    FLDZ                                ; 00561136
    FXCH                                ; 00561138
    FST float ptr [ESP + 0x8]           ; 0056113a
    FSTP double ptr [ESP]               ; 0056113e
    FCOMP double ptr [ESP]              ; 00561141
    FNSTSW AX                           ; 00561144
    SAHF                                ; 00561146
    JA 0x00560f9c                       ; 00561147
        ;   XREF to: 00560f9c (CONDITIONAL_JUMP)  ; LAB_00560f9c
    FLD1                                ; 0056114d
    FCOMP double ptr [ESP]              ; 0056114f
    FNSTSW AX                           ; 00561152
    SAHF                                ; 00561154
    JC 0x00560f9c                       ; 00561155
        ;   XREF to: 00560f9c (CONDITIONAL_JUMP)  ; LAB_00560f9c
    FLD float ptr [ESP + 0x8]           ; 0056115b
    FLD float ptr [ESP + 0x198]         ; 0056115f
    FMUL ST1                            ; 00561166
    FLD float ptr [ESP + 0x19c]         ; 00561168
    FMUL ST2                            ; 0056116f
    FLD float ptr [ESP + 0x1a0]         ; 00561171
    FMULP ST3                           ; 00561178
    FLD float ptr [ESP + 0x1b0]         ; 0056117a
    FLD float ptr [ESP + 0x1b4]         ; 00561181
    FLD float ptr [ESP + 0x1b8]         ; 00561188
    LEA EDI,[ESP + 0x180]               ; 0056118f
    LEA ESI,[ESP + 0x168]               ; 00561196
    LEA EAX,[ESP + 0x174]               ; 0056119d
    FXCH ST4                            ; 005611a4
    FSTP float ptr [ESP + 0x168]        ; 005611a6
    FXCH ST2                            ; 005611ad
    FSTP float ptr [ESP + 0x16c]        ; 005611af
    FXCH ST3                            ; 005611b6
    FSTP float ptr [ESP + 0x170]        ; 005611b8
    MOVSD ES:EDI,ESI                    ; 005611bf
    MOVSD ES:EDI,ESI                    ; 005611c0
    MOVSD ES:EDI,ESI                    ; 005611c1
    PUSH EAX                            ; 005611c2
    LEA EDI,[ESP + 0x178]               ; 005611c3
    LEA ESI,[ESP + 0x1c0]               ; 005611ca
    FXCH ST2                            ; 005611d1
    FADD float ptr [ESP + 0x184]        ; 005611d3
    FXCH ST2                            ; 005611da
    FADD float ptr [ESP + 0x188]        ; 005611dc
    FXCH                                ; 005611e3
    FADD float ptr [ESP + 0x18c]        ; 005611e5
    FXCH ST2                            ; 005611ec
    FSTP float ptr [ESP + 0x1c0]        ; 005611ee
    FSTP float ptr [ESP + 0x1c4]        ; 005611f5
    FSTP float ptr [ESP + 0x1c8]        ; 005611fc
    MOVSD ES:EDI,ESI                    ; 00561203
    MOVSD ES:EDI,ESI                    ; 00561204
    MOVSD ES:EDI,ESI                    ; 00561205
    PUSH EBX                            ; 00561206
    LEA ESI,[ESP + 0x194]               ; 00561207
    LEA EDI,[ESP + 0x140]               ; 0056120e
    CALL FUN_00408de0                   ; 00561215
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 0056121a
    LEA EAX,[ESP + 0x70]                ; 0056121d
    LEA ESI,[ESP + 0x18c]               ; 00561221
    PUSH EAX                            ; 00561228
    MOVSD ES:EDI,ESI                    ; 00561229
    MOVSD ES:EDI,ESI                    ; 0056122a
    MOVSD ES:EDI,ESI                    ; 0056122b
    CALL FUN_004222d0                   ; 0056122c
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00561231
    MOV EAX,dword ptr [EBP + 0x14]      ; 00561234
    MOV EAX,dword ptr [EAX + 0x6b4]     ; 00561237
    MOV dword ptr [ESP + 0x74],EAX      ; 0056123d
    MOV EAX,0x67                        ; 00561241
    LEA EDX,[ESP + 0x138]               ; 00561246
    MOV dword ptr [ESP + 0xa0],EAX      ; 0056124d
    LEA EAX,[ESP + 0x8c]                ; 00561254
    CMP EAX,EDX                         ; 0056125b
    JZ 0x00561289                       ; 0056125d
        ;   XREF to: 00561289 (CONDITIONAL_JUMP)  ; LAB_00561289
    MOV EAX,dword ptr [ESP + 0x138]     ; 0056125f
    MOV dword ptr [ESP + 0x8c],EAX      ; 00561266
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0056126d
    MOV dword ptr [ESP + 0x90],EAX      ; 00561274
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056127b
    MOV dword ptr [ESP + 0x94],EAX      ; 00561282
    LEA EDX,[ESP + 0x70]                ; 00561289
        ;   Label: LAB_00561289
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056128d
    PUSH EDX                            ; 00561290
    MOV dword ptr [ESP + 0xa8],EAX      ; 00561291
    MOV dword ptr [ESP + 0xac],EAX      ; 00561298
    PUSH EBX                            ; 0056129f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005612a0
    CALL dword ptr [EAX + 0x110]        ; 005612a6
    ADD ESP,0x8                         ; 005612ac
    JMP 0x00560f9c                      ; 005612af
        ;   XREF to: 00560f9c (UNCONDITIONAL_JUMP)  ; LAB_00560f9c
    MOV ESP,EBP                         ; 005612b4
        ;   Label: LAB_005612b4
    POP EBP                             ; 005612b6
    POP EDI                             ; 005612b7
    POP ESI                             ; 005612b8
    POP EBX                             ; 005612b9
    RET                                 ; 005612ba

