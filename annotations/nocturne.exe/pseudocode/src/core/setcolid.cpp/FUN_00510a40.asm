; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00510a40(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,float param_8)
;
; Local Variables:
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_00425050 at 004252cf
;   FUN_004a9270 at 004a9f71
;   FUN_0053c800 at 0053cdce
;   FUN_00546e10 at 005473a0
;   FUN_0055ef50 at 0055fef4
;
; Referenced Globals:
;   string s_..\\core\\setcolid.cpp_00590a2d
;   string s_info.keyFramedModelInstancePtr_!_00590a42
;   string s_..\\core\\setcolid.cpp_00590a8e
;   string s_Invalid_collision_type!_00590aa3
;   undefined4 DAT_00590abd
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_0040a200
;   FUN_0040a220
;   FUN_0040a290
;   FUN_0040a540
;   FUN_0041dc20
;   FUN_00453e10
;   FUN_00454530
;   FUN_00468a20
;   FUN_00468af0
;   FUN_004c8440
;   FUN_005103f0
;   FUN_00510710
;   FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510a40
        ;   Label: FUN_00510a40
    PUSH ESI                            ; 00510a41
    PUSH EDI                            ; 00510a42
    PUSH EBP                            ; 00510a43
    MOV EBP,ESP                         ; 00510a44
    SUB ESP,0x298                       ; 00510a46
    AND ESP,0xfffffff8                  ; 00510a4c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00510a4f
    PUSH dword ptr [EBP + 0x30]         ; 00510a52
    PUSH dword ptr [EBP + 0x2c]         ; 00510a55
    PUSH dword ptr [EBP + 0x28]         ; 00510a58
    PUSH dword ptr [EBP + 0x24]         ; 00510a5b
    PUSH dword ptr [EBP + 0x20]         ; 00510a5e
    PUSH dword ptr [EBP + 0x1c]         ; 00510a61
    LEA EAX,[ESP + 0x174]               ; 00510a64
    PUSH dword ptr [EBP + 0x18]         ; 00510a6b
    PUSH EAX                            ; 00510a6e
    CALL FUN_00468a20                   ; 00510a6f
        ;   XREF to: 00468a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00468a20()
    ADD ESP,0x20                        ; 00510a74
    TEST dword ptr [EBP + 0x20],0x7fffffff ; 00510a77
    JNZ 0x00510a89                      ; 00510a7e
        ;   XREF to: 00510a89 (CONDITIONAL_JUMP)  ; LAB_00510a89
    TEST dword ptr [EBP + 0x24],0x7fffffff ; 00510a80
    JZ 0x00510a9e                       ; 00510a87
        ;   XREF to: 00510a9e (CONDITIONAL_JUMP)  ; LAB_00510a9e
    LEA EAX,[ESP + 0x15c]               ; 00510a89
        ;   Label: LAB_00510a89
    PUSH EAX                            ; 00510a90
    PUSH 0x1fba938                      ; 00510a91 | DAT_01fba938
    CALL FUN_00468af0                   ; 00510a96
        ;   XREF to: 00468af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00468af0()
    ADD ESP,0x8                         ; 00510a9b
    MOV dword ptr [EDI + 0x14cd4c],0x1  ; 00510a9e
        ;   Label: LAB_00510a9e
    MOV dword ptr [EDI + 0x14cd60],0xffffffff ; 00510aa8
    MOV dword ptr [EDI + 0x14cd64],0xffffffff ; 00510ab2
    MOV EBX,dword ptr [EDI + 0x15f2ac]  ; 00510abc
    MOV dword ptr [EDI + 0x14cd5c],0x0  ; 00510ac2
    TEST EBX,EBX                        ; 00510acc
    JL 0x00510c54                       ; 00510ace
        ;   XREF to: 00510c54 (CONDITIONAL_JUMP)  ; LAB_00510c54
    FLD float ptr [ESP + 0x16c]         ; 00510ad4
    FLD ST0                             ; 00510adb
    FLD float ptr [ESP + 0x174]         ; 00510add
    FLDZ                                ; 00510ae4
    FXCH ST3                            ; 00510ae6
    FSUB float ptr [ESP + 0x17c]        ; 00510ae8
    FXCH ST2                            ; 00510aef
    FADD float ptr [ESP + 0x17c]        ; 00510af1
    FXCH ST2                            ; 00510af8
    FSTP float ptr [ESP + 0x210]        ; 00510afa
    FXCH                                ; 00510b01
    FSTP float ptr [ESP + 0x21c]        ; 00510b03
    FXCH                                ; 00510b0a
    FCOMPP                              ; 00510b0c
    FNSTSW AX                           ; 00510b0e
    SAHF                                ; 00510b10
    JNC 0x00510cd3                      ; 00510b11
        ;   XREF to: 00510cd3 (CONDITIONAL_JUMP)  ; LAB_00510cd3
    FLD float ptr [ESP + 0x21c]         ; 00510b17
    FADD float ptr [ESP + 0x174]        ; 00510b1e
    FSTP float ptr [ESP + 0x21c]        ; 00510b25
    FLD float ptr [ESP + 0x170]         ; 00510b2c
        ;   Label: LAB_00510b2c
    FLD ST0                             ; 00510b33
    FLD float ptr [ESP + 0x178]         ; 00510b35
    MOV EAX,dword ptr [ESP + 0x184]     ; 00510b3c
    FLDZ                                ; 00510b43
    MOV dword ptr [ESP + 0x214],EAX     ; 00510b45
    FXCH ST3                            ; 00510b4c
    FSUB float ptr [ESP + 0x17c]        ; 00510b4e
    FXCH ST2                            ; 00510b55
    FADD float ptr [ESP + 0x17c]        ; 00510b57
    FXCH ST2                            ; 00510b5e
    FSTP float ptr [ESP + 0x218]        ; 00510b60
    MOV EAX,dword ptr [ESP + 0x180]     ; 00510b67
    FXCH                                ; 00510b6e
    FSTP float ptr [ESP + 0x224]        ; 00510b70
    MOV dword ptr [ESP + 0x220],EAX     ; 00510b77
    FXCH                                ; 00510b7e
    FCOMPP                              ; 00510b80
    FNSTSW AX                           ; 00510b82
    SAHF                                ; 00510b84
    JNC 0x00510ced                      ; 00510b85
        ;   XREF to: 00510ced (CONDITIONAL_JUMP)  ; LAB_00510ced
    FLD float ptr [ESP + 0x224]         ; 00510b8b
    FADD float ptr [ESP + 0x178]        ; 00510b92
    FSTP float ptr [ESP + 0x224]        ; 00510b99
    LEA EAX,[ESP + 0x1b8]               ; 00510ba0
        ;   Label: LAB_00510ba0
    PUSH EAX                            ; 00510ba7
    CALL FUN_00511990                   ; 00510ba8
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined FUN_00511990()
    ADD ESP,0x4                         ; 00510bad
    MOV EAX,dword ptr [EDI + 0x15f298]  ; 00510bb0
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00510bb6
    MOV EAX,dword ptr [EDI + 0x15f29c]  ; 00510bbd
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00510bc3
    MOV EAX,dword ptr [EDI + 0x15f2a0]  ; 00510bca
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00510bd0
    MOV EAX,dword ptr [EDI + 0x15f2a4]  ; 00510bd7
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00510bdd
    MOV EAX,dword ptr [EDI + 0x15f2a8]  ; 00510be4
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00510bea
    XOR ESI,ESI                         ; 00510bf1
    MOV EAX,dword ptr [EDI + 0x1569c0]  ; 00510bf3
    MOV dword ptr [ESP + 0x294],ESI     ; 00510bf9
    TEST EAX,EAX                        ; 00510c00
    JLE 0x00510c54                      ; 00510c02
        ;   XREF to: 00510c54 (CONDITIONAL_JUMP)  ; LAB_00510c54
    MOV dword ptr [ESP + 0x290],EDI     ; 00510c04
    MOV EBX,dword ptr [ESP + 0x290]     ; 00510c0b
        ;   Label: LAB_00510c0b
    MOV EBX,dword ptr [EBX + 0x1569c4]  ; 00510c12
    PUSH EBX                            ; 00510c18
    PUSH EDI                            ; 00510c19
    CALL FUN_005103f0                   ; 00510c1a
        ;   XREF to: 005103f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005103f0()
    ADD ESP,0x8                         ; 00510c1f
    TEST EAX,EAX                        ; 00510c22
    JZ 0x00510d07                       ; 00510c24
        ;   XREF to: 00510d07 (CONDITIONAL_JUMP)  ; LAB_00510d07
    MOV EDX,dword ptr [ESP + 0x290]     ; 00510c2a
        ;   Label: LAB_00510c2a
    MOV ECX,dword ptr [ESP + 0x294]     ; 00510c31
    MOV EBX,dword ptr [EDI + 0x1569c0]  ; 00510c38
    ADD EDX,0x4                         ; 00510c3e
    INC ECX                             ; 00510c41
    MOV dword ptr [ESP + 0x290],EDX     ; 00510c42
    MOV dword ptr [ESP + 0x294],ECX     ; 00510c49
    CMP ECX,EBX                         ; 00510c50
    JL 0x00510c0b                       ; 00510c52
        ;   XREF to: 00510c0b (CONDITIONAL_JUMP)  ; LAB_00510c0b
    FLD float ptr [ESP + 0x15c]         ; 00510c54
        ;   Label: LAB_00510c54
    FLD1                                ; 00510c5b
    FCOMPP                              ; 00510c5d
    FNSTSW AX                           ; 00510c5f
    SAHF                                ; 00510c61
    JC 0x00510cc5                       ; 00510c62
        ;   XREF to: 00510cc5 (CONDITIONAL_JUMP)  ; LAB_00510cc5
    FLD float ptr [ESP + 0x160]         ; 00510c64
    FMUL ST0                            ; 00510c6b
    FLD float ptr [ESP + 0x164]         ; 00510c6d
    FMUL ST0                            ; 00510c74
    FADDP                               ; 00510c76
    FLD float ptr [ESP + 0x168]         ; 00510c78
    FMUL ST0                            ; 00510c7f
    FADDP                               ; 00510c81
    FSQRT                               ; 00510c83
    FST float ptr [ESP + 0xa0]          ; 00510c85
    FLDZ                                ; 00510c8c
    FCOMPP                              ; 00510c8e
    FNSTSW AX                           ; 00510c90
    SAHF                                ; 00510c92
    JC 0x00511366                       ; 00510c93
        ;   XREF to: 00511366 (CONDITIONAL_JUMP)  ; LAB_00511366
    XOR ECX,ECX                         ; 00510c99
    MOV dword ptr [ESP + 0x164],ECX     ; 00510c9b
    MOV dword ptr [ESP + 0x160],ECX     ; 00510ca2
    MOV dword ptr [ESP + 0x168],ECX     ; 00510ca9
    LEA EAX,[ESP + 0x160]               ; 00510cb0
        ;   Label: LAB_00510cb0
    ADD EDI,0x14cd40                    ; 00510cb7
    CMP EDI,EAX                         ; 00510cbd
    JNZ 0x005113aa                      ; 00510cbf
        ;   XREF to: 005113aa (CONDITIONAL_JUMP)  ; LAB_005113aa
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00510cc5
        ;   Label: LAB_00510cc5
    MOV ESP,EBP                         ; 00510ccc
    POP EBP                             ; 00510cce
    POP EDI                             ; 00510ccf
    POP ESI                             ; 00510cd0
    POP EBX                             ; 00510cd1
    RET                                 ; 00510cd2
    FLD float ptr [ESP + 0x210]         ; 00510cd3
        ;   Label: LAB_00510cd3
    FADD float ptr [ESP + 0x174]        ; 00510cda
    FSTP float ptr [ESP + 0x210]        ; 00510ce1
    JMP 0x00510b2c                      ; 00510ce8
        ;   XREF to: 00510b2c (UNCONDITIONAL_JUMP)  ; LAB_00510b2c
    FLD float ptr [ESP + 0x218]         ; 00510ced
        ;   Label: LAB_00510ced
    FADD float ptr [ESP + 0x178]        ; 00510cf4
    FSTP float ptr [ESP + 0x218]        ; 00510cfb
    JMP 0x00510ba0                      ; 00510d02
        ;   XREF to: 00510ba0 (UNCONDITIONAL_JUMP)  ; LAB_00510ba0
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00510d07
        ;   Label: LAB_00510d07
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00510d0e
    LEA EAX,[ESP + 0x1b8]               ; 00510d15
    PUSH EAX                            ; 00510d1c
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00510d1d
    PUSH EBX                            ; 00510d23
    CALL dword ptr [ESI + 0x34]         ; 00510d24
    MOV ESI,EAX                         ; 00510d27
    ADD ESP,0x8                         ; 00510d29
    TEST EAX,EAX                        ; 00510d2c
    JZ 0x00510c2a                       ; 00510d2e
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    PUSH EAX                            ; 00510d34
    LEA EAX,[ESP + 0x1bc]               ; 00510d35
    PUSH EAX                            ; 00510d3c
    LEA EAX,[ESP + 0x200]               ; 00510d3d
    PUSH EAX                            ; 00510d44
    PUSH EBX                            ; 00510d45
    CALL FUN_0040a540                   ; 00510d46
        ;   XREF to: 0040a540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a540()
    ADD ESP,0x10                        ; 00510d4b
    PUSH EAX                            ; 00510d4e
    LEA EAX,[ESP + 0x214]               ; 00510d4f
    PUSH EAX                            ; 00510d56
    CALL FUN_0041dc20                   ; 00510d57
        ;   XREF to: 0041dc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dc20()
    ADD ESP,0x8                         ; 00510d5c
    TEST EAX,EAX                        ; 00510d5f
    JZ 0x00510c2a                       ; 00510d61
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    MOV EDX,dword ptr [ESP + 0x1dc]     ; 00510d67
    TEST EDX,EDX                        ; 00510d6e
    JZ 0x00511320                       ; 00510d70
        ;   XREF to: 00511320 (CONDITIONAL_JUMP)  ; LAB_00511320
    PUSH EDX                            ; 00510d76
    CALL FUN_00454530                   ; 00510d77
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 00510d7c
    MOV EDX,dword ptr [EAX + 0x358]     ; 00510d7f
    MOV ESI,EAX                         ; 00510d85
    TEST EDX,EDX                        ; 00510d87
    JNZ 0x00510daf                      ; 00510d89
        ;   XREF to: 00510daf (CONDITIONAL_JUMP)  ; LAB_00510daf
    PUSH EAX                            ; 00510d8b
    MOV ECX,0x590a2d                    ; 00510d8c | = "..\\core\\setcolid.cpp"
    MOV EDX,0x389                       ; 00510d91
    PUSH 0x590a42                       ; 00510d96 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01cc4800],ECX      ; 00510d9b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00510da1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00510da7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00510dac
    FLD float ptr [EBP + 0x30]          ; 00510daf
        ;   Label: LAB_00510daf
    SUB ESP,0x4                         ; 00510db2
    FSUB float ptr [EBX + 0x24]         ; 00510db5
    FLD float ptr [EBP + 0x2c]          ; 00510db8
    FXCH                                ; 00510dbb
    FSTP float ptr [ESP]                ; 00510dbd
    FSUB float ptr [EBX + 0x24]         ; 00510dc0
    SUB ESP,0x4                         ; 00510dc3
    FSTP float ptr [ESP]                ; 00510dc6
    PUSH dword ptr [EBP + 0x28]         ; 00510dc9
    PUSH dword ptr [ESP + 0x184]        ; 00510dcc
    FLD float ptr [ESP + 0x180]         ; 00510dd3
    PUSH dword ptr [ESP + 0x184]        ; 00510dda
    FSUB float ptr [EBX + 0x28]         ; 00510de1
    SUB ESP,0x4                         ; 00510de4
    FSTP float ptr [ESP]                ; 00510de7
    FLD float ptr [ESP + 0x184]         ; 00510dea
    SUB ESP,0x4                         ; 00510df1
    FSUB float ptr [EBX + 0x20]         ; 00510df4
    LEA EAX,[ESP + 0xc0]                ; 00510df7
    FSTP float ptr [ESP]                ; 00510dfe
    PUSH EAX                            ; 00510e01
    CALL FUN_00468a20                   ; 00510e02
        ;   XREF to: 00468a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00468a20()
    ADD ESP,0x20                        ; 00510e07
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00510e0a
    MOV dword ptr [ESP + 0xa4],EAX      ; 00510e11
    LEA EAX,[EBX + 0x30]                ; 00510e18
    PUSH EAX                            ; 00510e1b
    LEA EAX,[ESP + 0xa8]                ; 00510e1c
    PUSH EAX                            ; 00510e23
    PUSH 0x0                            ; 00510e24
    PUSH ESI                            ; 00510e26
    CALL FUN_00453e10                   ; 00510e27
        ;   XREF to: 00453e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00453e10()
    ADD ESP,0x10                        ; 00510e2c
    FLD float ptr [ESP + 0xa4]          ; 00510e2f
    FCOMP float ptr [ESP + 0x15c]       ; 00510e36
    FNSTSW AX                           ; 00510e3d
    SAHF                                ; 00510e3f
    JNC 0x00510c2a                      ; 00510e40
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00510e46
    LEA ESI,[ESP + 0xa8]                ; 00510e4d
    MOV dword ptr [ESP + 0x15c],EAX     ; 00510e54
    LEA EAX,[ESP + 0x160]               ; 00510e5b
    CMP EAX,ESI                         ; 00510e62
    JZ 0x00510e90                       ; 00510e64
        ;   XREF to: 00510e90 (CONDITIONAL_JUMP)  ; LAB_00510e90
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00510e66
    MOV dword ptr [ESP + 0x160],EAX     ; 00510e6d
    MOV EAX,dword ptr [ESP + 0xac]      ; 00510e74
    MOV dword ptr [ESP + 0x164],EAX     ; 00510e7b
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00510e82
    MOV dword ptr [ESP + 0x168],EAX     ; 00510e89
    MOV dword ptr [EDI + 0x14cd5c],EBX  ; 00510e90
        ;   Label: LAB_00510e90
    JMP 0x00510c2a                      ; 00510e96
        ;   XREF to: 00510c2a (UNCONDITIONAL_JUMP)  ; LAB_00510c2a
    LEA EAX,[EBX + 0x3c]                ; 00510e9b
        ;   Label: LAB_00510e9b
    PUSH EAX                            ; 00510e9e
    LEA EAX,[EBX + 0x20]                ; 00510e9f
    PUSH EAX                            ; 00510ea2
    LEA ESI,[ESP + 0x1e8]               ; 00510ea3
    PUSH ESI                            ; 00510eaa
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00510eab
    PUSH EBX                            ; 00510eb1
    CALL dword ptr [EAX + 0x14]         ; 00510eb2
    ADD ESP,0x8                         ; 00510eb5
    PUSH EAX                            ; 00510eb8
    LEA EAX,[ESP + 0x168]               ; 00510eb9
    PUSH EAX                            ; 00510ec0
    PUSH EDI                            ; 00510ec1
    CALL FUN_00510710                   ; 00510ec2
        ;   XREF to: 00510710 (UNCONDITIONAL_CALL)  ; undefined FUN_00510710()
    ADD ESP,0x14                        ; 00510ec7
    TEST EAX,EAX                        ; 00510eca
    JZ 0x00510c2a                       ; 00510ecc
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    MOV dword ptr [EDI + 0x14cd5c],EBX  ; 00510ed2
    JMP 0x00510c2a                      ; 00510ed8
        ;   XREF to: 00510c2a (UNCONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD float ptr [ESP + 0x1cc]         ; 00510edd
        ;   Label: LAB_00510edd
    FADD float ptr [EBX + 0x24]         ; 00510ee4
    FLD float ptr [ESP + 0x1d0]         ; 00510ee7
    FXCH                                ; 00510eee
    FSTP float ptr [ESP + 0x1cc]        ; 00510ef0
    FADD float ptr [EBX + 0x24]         ; 00510ef7
    FSTP float ptr [ESP + 0x1d0]        ; 00510efa
    MOV EAX,dword ptr [EBX + 0x20]      ; 00510f01
    MOV dword ptr [ESP + 0x98],EAX      ; 00510f04
    MOV EAX,dword ptr [EBX + 0x28]      ; 00510f0b
    FLD float ptr [ESP + 0x180]         ; 00510f0e
    MOV dword ptr [ESP + 0x9c],EAX      ; 00510f15
    FCOMP float ptr [ESP + 0x1cc]       ; 00510f1c
    FNSTSW AX                           ; 00510f23
    SAHF                                ; 00510f25
    JBE 0x00510c2a                      ; 00510f26
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD float ptr [ESP + 0x184]         ; 00510f2c
    FCOMP float ptr [ESP + 0x1d0]       ; 00510f33
    FNSTSW AX                           ; 00510f3a
    SAHF                                ; 00510f3c
    JNC 0x00510c2a                      ; 00510f3d
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD float ptr [ESP + 0x98]          ; 00510f43
    FSUB float ptr [ESP + 0x16c]        ; 00510f4a
    FST double ptr [ESP + 0x28]         ; 00510f51
    FMUL double ptr [ESP + 0x28]        ; 00510f55
    FLD float ptr [ESP + 0x1d4]         ; 00510f59
    FLD float ptr [ESP + 0x9c]          ; 00510f60
    FSUB float ptr [ESP + 0x170]        ; 00510f67
    FXCH                                ; 00510f6e
    FADD float ptr [ESP + 0x17c]        ; 00510f70
    FXCH                                ; 00510f77
    FST double ptr [ESP + 0x38]         ; 00510f79
    FMUL double ptr [ESP + 0x38]        ; 00510f7d
    FXCH                                ; 00510f81
    FST double ptr [ESP + 0x20]         ; 00510f83
    FMUL double ptr [ESP + 0x20]        ; 00510f87
    FXCH                                ; 00510f8b
    FADDP ST2,ST0                       ; 00510f8d
    FSTP double ptr [ESP + 0x8]         ; 00510f8f
    FST double ptr [ESP + 0x80]         ; 00510f93
    FCOMP double ptr [ESP + 0x8]        ; 00510f9a
    FNSTSW AX                           ; 00510f9e
    SAHF                                ; 00510fa0
    JNC 0x00511028                      ; 00510fa1
        ;   XREF to: 00511028 (CONDITIONAL_JUMP)  ; LAB_00511028
    FLD double ptr [ESP + 0x80]         ; 00510fa7
    FSQRT                               ; 00510fae
    FSUB double ptr [ESP + 0x20]        ; 00510fb0
    FST double ptr [ESP + 0x30]         ; 00510fb4
    FCOMP double ptr [0x00590abd]       ; 00510fb8 | DAT_00590abd
    FNSTSW AX                           ; 00510fbe
    SAHF                                ; 00510fc0
    JBE 0x00510fd5                      ; 00510fc1
        ;   XREF to: 00510fd5 (CONDITIONAL_JUMP)  ; LAB_00510fd5
    MOV EDX,0xd2f1a9fc                  ; 00510fc3
    MOV ECX,0xbf50624d                  ; 00510fc8
    MOV dword ptr [ESP + 0x30],EDX      ; 00510fcd
    MOV dword ptr [ESP + 0x34],ECX      ; 00510fd1
    FLD float ptr [ESP + 0x15c]         ; 00510fd5
        ;   Label: LAB_00510fd5
    FCOMP double ptr [ESP + 0x30]       ; 00510fdc
    FNSTSW AX                           ; 00510fe0
    SAHF                                ; 00510fe2
    JBE 0x00510c2a                      ; 00510fe3
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD double ptr [ESP + 0x30]         ; 00510fe9
    FLD double ptr [ESP + 0x28]         ; 00510fed
    FLD double ptr [ESP + 0x38]         ; 00510ff1
    FXCH ST2                            ; 00510ff5
    FSTP float ptr [ESP + 0x15c]        ; 00510ff7
    FCHS                                ; 00510ffe
    FXCH                                ; 00511000
    FCHS                                ; 00511002
    XOR ESI,ESI                         ; 00511004
    FXCH                                ; 00511006
    FSTP float ptr [ESP + 0x160]        ; 00511008
    FSTP float ptr [ESP + 0x168]        ; 0051100f
    MOV dword ptr [ESP + 0x164],ESI     ; 00511016
    MOV dword ptr [EDI + 0x14cd5c],EBX  ; 0051101d
    JMP 0x00510c2a                      ; 00511023
        ;   XREF to: 00510c2a (UNCONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD double ptr [ESP + 0x28]         ; 00511028
        ;   Label: LAB_00511028
    FLD float ptr [ESP + 0x190]         ; 0051102c
    FSTP double ptr [ESP + 0x58]        ; 00511033
    FMUL double ptr [ESP + 0x58]        ; 00511037
    FLD float ptr [ESP + 0x194]         ; 0051103b
    FSTP double ptr [ESP + 0x60]        ; 00511042
    FLD double ptr [ESP + 0x38]         ; 00511046
    FMUL double ptr [ESP + 0x60]        ; 0051104a
    FADDP                               ; 0051104e
    FLDZ                                ; 00511050
    FXCH                                ; 00511052
    FSTP double ptr [ESP + 0x18]        ; 00511054
    FCOMP double ptr [ESP + 0x18]       ; 00511058
    FNSTSW AX                           ; 0051105c
    SAHF                                ; 0051105e
    JNC 0x00510c2a                      ; 0051105f
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD double ptr [ESP + 0x18]         ; 00511065
    FLD double ptr [ESP + 0x58]         ; 00511069
    FMUL ST1                            ; 0051106d
    FLD double ptr [ESP + 0x60]         ; 0051106f
    FMULP ST2                           ; 00511073
    FLD float ptr [ESP + 0x16c]         ; 00511075
    FSTP double ptr [ESP + 0x10]        ; 0051107c
    FADD double ptr [ESP + 0x10]        ; 00511080
    FLD float ptr [ESP + 0x98]          ; 00511084
    FXCH                                ; 0051108b
    FSTP double ptr [ESP + 0x78]        ; 0051108d
    FSUB double ptr [ESP + 0x78]        ; 00511091
    FMUL ST0                            ; 00511095
    FLD float ptr [ESP + 0x170]         ; 00511097
    FSTP double ptr [ESP + 0x50]        ; 0051109e
    FXCH                                ; 005110a2
    FADD double ptr [ESP + 0x50]        ; 005110a4
    FLD float ptr [ESP + 0x9c]          ; 005110a8
    FXCH                                ; 005110af
    FSTP double ptr [ESP + 0x68]        ; 005110b1
    FSUB double ptr [ESP + 0x68]        ; 005110b5
    FMUL ST0                            ; 005110b9
    FADDP                               ; 005110bb
    FST double ptr [ESP + 0x70]         ; 005110bd
    FCOMP double ptr [ESP + 0x8]        ; 005110c1
    FNSTSW AX                           ; 005110c5
    SAHF                                ; 005110c7
    JNC 0x00510c2a                      ; 005110c8
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD float ptr [ESP + 0x174]         ; 005110ce
    FST double ptr [ESP + 0x90]         ; 005110d5
    FABS                                ; 005110dc
    FLD double ptr [ESP + 0x8]          ; 005110de
    FSUB double ptr [ESP + 0x70]        ; 005110e2
    FSQRT                               ; 005110e6
    FLD float ptr [ESP + 0x178]         ; 005110e8
    FST double ptr [ESP + 0x88]         ; 005110ef
    FABS                                ; 005110f6
    FLD double ptr [ESP + 0x58]         ; 005110f8
    FMUL ST2                            ; 005110fc
    FLD double ptr [ESP + 0x60]         ; 005110fe
    FMULP ST3                           ; 00511102
    FLD double ptr [ESP + 0x68]         ; 00511104
    FLD double ptr [ESP + 0x78]         ; 00511108
    FSUBRP ST2,ST0                      ; 0051110c
    FSUBRP ST3,ST0                      ; 0051110e
    FSTP double ptr [ESP]               ; 00511110
    FXCH                                ; 00511113
    FSTP double ptr [ESP + 0x40]        ; 00511115
    FCOMPP                              ; 00511119
    FNSTSW AX                           ; 0051111b
    SAHF                                ; 0051111d
    JNC 0x005111b0                      ; 0051111e
        ;   XREF to: 005111b0 (CONDITIONAL_JUMP)  ; LAB_005111b0
    FLD double ptr [ESP]                ; 00511124
    FSUB double ptr [ESP + 0x10]        ; 00511127
    FDIV double ptr [ESP + 0x90]        ; 0051112b
    FSTP double ptr [ESP + 0x48]        ; 00511132
        ;   Label: LAB_00511132
    FLDZ                                ; 00511136
    FCOMP double ptr [ESP + 0x48]       ; 00511138
    FNSTSW AX                           ; 0051113c
    SAHF                                ; 0051113e
    JA 0x00510c2a                       ; 0051113f
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD float ptr [ESP + 0x15c]         ; 00511145
    FCOMP double ptr [ESP + 0x48]       ; 0051114c
    FNSTSW AX                           ; 00511150
    SAHF                                ; 00511152
    JBE 0x00510c2a                      ; 00511153
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD1                                ; 00511159
    FCOMP double ptr [ESP + 0x48]       ; 0051115b
    FNSTSW AX                           ; 0051115f
    SAHF                                ; 00511161
    JC 0x00510c2a                       ; 00511162
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD double ptr [ESP + 0x48]         ; 00511168
    FLD float ptr [ESP + 0x98]          ; 0051116c
    FLD float ptr [ESP + 0x9c]          ; 00511173
    FXCH ST2                            ; 0051117a
    FSTP float ptr [ESP + 0x15c]        ; 0051117c
    XOR EAX,EAX                         ; 00511183
    FSUBR double ptr [ESP]              ; 00511185
    FXCH                                ; 00511188
    FSUBR double ptr [ESP + 0x40]       ; 0051118a
    MOV dword ptr [ESP + 0x164],EAX     ; 0051118e
    FXCH                                ; 00511195
    FSTP float ptr [ESP + 0x160]        ; 00511197
    FSTP float ptr [ESP + 0x168]        ; 0051119e
    MOV dword ptr [EDI + 0x14cd5c],EBX  ; 005111a5
    JMP 0x00510c2a                      ; 005111ab
        ;   XREF to: 00510c2a (UNCONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD double ptr [ESP + 0x40]         ; 005111b0
        ;   Label: LAB_005111b0
    FSUB double ptr [ESP + 0x50]        ; 005111b4
    FDIV double ptr [ESP + 0x88]        ; 005111b8
    JMP 0x00511132                      ; 005111bf
        ;   XREF to: 00511132 (UNCONDITIONAL_JUMP)  ; LAB_00511132
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005111c4
        ;   Label: LAB_005111c4
    MOV dword ptr [ESP + 0x240],EAX     ; 005111cb
    MOV EAX,dword ptr [ESP + 0x170]     ; 005111d2
    MOV dword ptr [ESP + 0x248],EAX     ; 005111d9
    LEA EAX,[ESP + 0x240]               ; 005111e0
    PUSH EAX                            ; 005111e7
    LEA EAX,[ESP + 0x22c]               ; 005111e8
    PUSH EAX                            ; 005111ef
    PUSH EBX                            ; 005111f0
    MOV dword ptr [ESP + 0x250],EDX     ; 005111f1
    CALL FUN_0040a290                   ; 005111f8
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 005111fd
    MOV EAX,dword ptr [ESP + 0x174]     ; 00511200
    MOV dword ptr [ESP + 0x234],EAX     ; 00511207
    MOV EAX,dword ptr [ESP + 0x178]     ; 0051120e
    MOV dword ptr [ESP + 0x23c],EAX     ; 00511215
    LEA EAX,[ESP + 0x234]               ; 0051121c
    PUSH EAX                            ; 00511223
    LEA EAX,[ESP + 0x250]               ; 00511224
    PUSH EAX                            ; 0051122b
    XOR ESI,ESI                         ; 0051122c
    PUSH EBX                            ; 0051122e
    MOV dword ptr [ESP + 0x244],ESI     ; 0051122f
    CALL FUN_0040a220                   ; 00511236
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a220()
    ADD ESP,0xc                         ; 0051123b
    FLD float ptr [EBP + 0x30]          ; 0051123e
    SUB ESP,0x4                         ; 00511241
    FSUB float ptr [EBX + 0x24]         ; 00511244
    FLD float ptr [EBP + 0x2c]          ; 00511247
    FXCH                                ; 0051124a
    FSTP float ptr [ESP]                ; 0051124c
    FSUB float ptr [EBX + 0x24]         ; 0051124f
    SUB ESP,0x4                         ; 00511252
    FSTP float ptr [ESP]                ; 00511255
    PUSH dword ptr [EBP + 0x28]         ; 00511258
    PUSH dword ptr [ESP + 0x260]        ; 0051125b
    PUSH dword ptr [ESP + 0x25c]        ; 00511262
    PUSH dword ptr [ESP + 0x244]        ; 00511269
    LEA EAX,[ESP + 0x118]               ; 00511270
    PUSH dword ptr [ESP + 0x240]        ; 00511277
    PUSH EAX                            ; 0051127e
    CALL FUN_00468a20                   ; 0051127f
        ;   XREF to: 00468a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00468a20()
    ADD ESP,0x20                        ; 00511284
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00511287
    MOV dword ptr [ESP + 0x100],EAX     ; 0051128e
    LEA EAX,[ESP + 0x100]               ; 00511295
    PUSH EAX                            ; 0051129c
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0051129d
    PUSH EBX                            ; 005112a3
    CALL dword ptr [ESI + 0xb4]         ; 005112a4
    ADD ESP,0x8                         ; 005112aa
    FLD float ptr [ESP + 0x100]         ; 005112ad
    FCOMP float ptr [ESP + 0x15c]       ; 005112b4
    FNSTSW AX                           ; 005112bb
    SAHF                                ; 005112bd
    JNC 0x00510c2a                      ; 005112be
        ;   XREF to: 00510c2a (CONDITIONAL_JUMP)  ; LAB_00510c2a
    MOV EAX,dword ptr [ESP + 0x100]     ; 005112c4
    MOV dword ptr [ESP + 0x15c],EAX     ; 005112cb
    LEA EAX,[ESP + 0x104]               ; 005112d2
    PUSH EAX                            ; 005112d9
    LEA EAX,[ESP + 0x25c]               ; 005112da
    PUSH EAX                            ; 005112e1
    PUSH EBX                            ; 005112e2
    CALL FUN_0040a200                   ; 005112e3
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    MOV ESI,EAX                         ; 005112e8
    LEA EAX,[ESP + 0x16c]               ; 005112ea
    ADD ESP,0xc                         ; 005112f1
    CMP EAX,ESI                         ; 005112f4
    JZ 0x00511315                       ; 005112f6
        ;   XREF to: 00511315 (CONDITIONAL_JUMP)  ; LAB_00511315
    MOV EAX,dword ptr [ESI]             ; 005112f8
    MOV dword ptr [ESP + 0x160],EAX     ; 005112fa
    MOV EAX,dword ptr [ESI + 0x4]       ; 00511301
    MOV dword ptr [ESP + 0x164],EAX     ; 00511304
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051130b
    MOV dword ptr [ESP + 0x168],EAX     ; 0051130e
    MOV dword ptr [EDI + 0x14cd5c],EBX  ; 00511315
        ;   Label: LAB_00511315
    JMP 0x00510c2a                      ; 0051131b
        ;   XREF to: 00510c2a (UNCONDITIONAL_JUMP)  ; LAB_00510c2a
    CMP ESI,0x2                         ; 00511320
        ;   Label: LAB_00511320
    JNC 0x00511330                      ; 00511323
        ;   XREF to: 00511330 (CONDITIONAL_JUMP)  ; LAB_00511330
    CMP ESI,0x1                         ; 00511325
    JZ 0x00510e9b                       ; 00511328
        ;   XREF to: 00510e9b (CONDITIONAL_JUMP)  ; LAB_00510e9b
    JMP 0x0051133f                      ; 0051132e
        ;   XREF to: 0051133f (UNCONDITIONAL_JUMP)  ; LAB_0051133f
    JBE 0x00510edd                      ; 00511330
        ;   XREF to: 00510edd (CONDITIONAL_JUMP)  ; LAB_00510edd
        ;   Label: LAB_00511330
    CMP ESI,0x3                         ; 00511336
    JZ 0x005111c4                       ; 00511339
        ;   XREF to: 005111c4 (CONDITIONAL_JUMP)  ; LAB_005111c4
    MOV EAX,0x590a8e                    ; 0051133f | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_0051133f
    MOV EDX,0x3f1                       ; 00511344
    PUSH 0x590aa3                       ; 00511349 | = "Invalid collision type!"
    MOV [0x01cc4800],EAX                ; 0051134e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00511353 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00511359
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0051135e
    JMP 0x00510c2a                      ; 00511361
        ;   XREF to: 00510c2a (UNCONDITIONAL_JUMP)  ; LAB_00510c2a
    FLD1                                ; 00511366
        ;   Label: LAB_00511366
    FLD float ptr [ESP + 0x160]         ; 00511368
    FXCH                                ; 0051136f
    FDIV float ptr [ESP + 0xa0]         ; 00511371
    FXCH                                ; 00511378
    FMUL ST1                            ; 0051137a
    FLD float ptr [ESP + 0x164]         ; 0051137c
    FMUL ST2                            ; 00511383
    FLD float ptr [ESP + 0x168]         ; 00511385
    FMULP ST3                           ; 0051138c
    FXCH                                ; 0051138e
    FSTP float ptr [ESP + 0x160]        ; 00511390
    FSTP float ptr [ESP + 0x164]        ; 00511397
    FSTP float ptr [ESP + 0x168]        ; 0051139e
    JMP 0x00510cb0                      ; 005113a5
        ;   XREF to: 00510cb0 (UNCONDITIONAL_JUMP)  ; LAB_00510cb0
    MOV EAX,dword ptr [ESP + 0x160]     ; 005113aa
        ;   Label: LAB_005113aa
    MOV dword ptr [EDI],EAX             ; 005113b1
    MOV EAX,dword ptr [ESP + 0x164]     ; 005113b3
    MOV dword ptr [EDI + 0x4],EAX       ; 005113ba
    MOV EAX,dword ptr [ESP + 0x168]     ; 005113bd
    MOV dword ptr [EDI + 0x8],EAX       ; 005113c4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005113c7
    MOV ESP,EBP                         ; 005113ce
    POP EBP                             ; 005113d0
    POP EDI                             ; 005113d1
    POP ESI                             ; 005113d2
    POP EBX                             ; 005113d3
    RET                                 ; 005113d4

