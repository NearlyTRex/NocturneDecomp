; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f8110(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_004f7e00 at 004f7ebb
;   engine_mini3d.cpp_FUN_004f8330 at 004f83f0
;
; Referenced Globals:
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c2b650
;   undefined4 DAT_01d17ab4
;   undefined4 DAT_01d17ab8
;   undefined4 DAT_01d17ac0
;   undefined4 DAT_01d17ac4
;   undefined4 DAT_01d17b08
;   undefined4 DAT_01d17b10
;   undefined4 DAT_01d17fb8
;   undefined4 DAT_01d17fbc
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f7f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8110
        ;   Label: engine_mini3d.cpp_FUN_004f8110
    PUSH ESI                            ; 004f8111
    PUSH EDI                            ; 004f8112
    PUSH EBP                            ; 004f8113
    SUB ESP,0x10                        ; 004f8114
    MOV EBX,dword ptr [0x01d17ab4]      ; 004f8117 | DAT_01d17ab4
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f811d
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f8121
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f8125
    FLD float ptr [ESI + 0x14]          ; 004f8129
    FLD float ptr [EBP + 0x18]          ; 004f812c
    FSUB float ptr [ESI + 0x18]         ; 004f812f
    FXCH                                ; 004f8132
    FSUB float ptr [EDI + 0x14]         ; 004f8134
    FMULP                               ; 004f8137
    FLD float ptr [EBP + 0x14]          ; 004f8139
    FLD float ptr [ESI + 0x18]          ; 004f813c
    FSUB float ptr [EDI + 0x18]         ; 004f813f
    FXCH                                ; 004f8142
    FSUB float ptr [ESI + 0x14]         ; 004f8144
    FMULP                               ; 004f8147
    FCOMPP                              ; 004f8149
    FNSTSW AX                           ; 004f814b
    SAHF                                ; 004f814d
    JC 0x004f815e                       ; 004f814e
        ;   XREF to: 004f815e (CONDITIONAL_JUMP)  ; LAB_004f815e
    MOV dword ptr [0x01d17ab4],EBX      ; 004f8150 | DAT_01d17ab4
        ;   Label: LAB_004f8150
    ADD ESP,0x10                        ; 004f8156
    POP EBP                             ; 004f8159
    POP EDI                             ; 004f815a
    POP ESI                             ; 004f815b
    POP EBX                             ; 004f815c
    RET                                 ; 004f815d
    MOV EDX,0x4b0                       ; 004f815e
        ;   Label: LAB_004f815e
    PUSH ESI                            ; 004f8163
    XOR ECX,ECX                         ; 004f8164
    MOV dword ptr [0x01d17fb8],EDX      ; 004f8166 | DAT_01d17fb8
    PUSH EDI                            ; 004f816c
    MOV dword ptr [0x01d17fbc],ECX      ; 004f816d | DAT_01d17fbc
    MOV dword ptr [0x01d17ab4],ECX      ; 004f8173 | DAT_01d17ab4
    CALL engine_mini3d.cpp_FUN_004f7f80 ; 004f8179
        ;   XREF to: 004f7f80 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7f80()
    ADD ESP,0x8                         ; 004f817e
    PUSH EBP                            ; 004f8181
    PUSH ESI                            ; 004f8182
    CALL engine_mini3d.cpp_FUN_004f7f80 ; 004f8183
        ;   XREF to: 004f7f80 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7f80()
    ADD ESP,0x8                         ; 004f8188
    PUSH EDI                            ; 004f818b
    PUSH EBP                            ; 004f818c
    CALL engine_mini3d.cpp_FUN_004f7f80 ; 004f818d
        ;   XREF to: 004f7f80 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7f80()
    MOV EAX,0x1d17ab8                   ; 004f8192
    MOV EBX,dword ptr [0x01d17ab4]      ; 004f8197 | DAT_01d17ab4
    MOV ECX,dword ptr [0x01d17fb8]      ; 004f819d | DAT_01d17fb8
    ADD ESP,0x8                         ; 004f81a3
    XOR EDX,EDX                         ; 004f81a6
    TEST EBX,EBX                        ; 004f81a8
    JLE 0x004f82e5                      ; 004f81aa
        ;   XREF to: 004f82e5 (CONDITIONAL_JUMP)  ; LAB_004f82e5
    CMP ECX,dword ptr [EAX]             ; 004f81b0 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f81b0
    JNZ 0x004f82d9                      ; 004f81b2
        ;   XREF to: 004f82d9 (CONDITIONAL_JUMP)  ; LAB_004f82d9
    TEST EAX,EAX                        ; 004f81b8
    JZ 0x004f82d9                       ; 004f81ba
        ;   XREF to: 004f82d9 (CONDITIONAL_JUMP)  ; LAB_004f82d9
    MOV EDI,EAX                         ; 004f81c0
        ;   Label: LAB_004f81c0
    TEST EAX,EAX                        ; 004f81c2
    JZ 0x004f8150                       ; 004f81c4
        ;   XREF to: 004f8150 (CONDITIONAL_JUMP)  ; LAB_004f8150
    MOV ESI,dword ptr [0x01d17fb8]      ; 004f81c6 | DAT_01d17fb8
    MOV ECX,EAX                         ; 004f81cc
    XOR EDX,EDX                         ; 004f81ce
    MOV EAX,0x1d17ab8                   ; 004f81d0
    TEST EBX,EBX                        ; 004f81d5
    JLE 0x004f82f8                      ; 004f81d7
        ;   XREF to: 004f82f8 (CONDITIONAL_JUMP)  ; LAB_004f82f8
    CMP ESI,dword ptr [EAX]             ; 004f81dd | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f81dd
    JNZ 0x004f82ec                      ; 004f81df
        ;   XREF to: 004f82ec (CONDITIONAL_JUMP)  ; LAB_004f82ec
    CMP EAX,ECX                         ; 004f81e5
    JZ 0x004f82ec                       ; 004f81e7
        ;   XREF to: 004f82ec (CONDITIONAL_JUMP)  ; LAB_004f82ec
    MOV EBP,EAX                         ; 004f81ed
        ;   Label: LAB_004f81ed
    TEST EAX,EAX                        ; 004f81ef
    JZ 0x004f8150                       ; 004f81f1
        ;   XREF to: 004f8150 (CONDITIONAL_JUMP)  ; LAB_004f8150
    MOV EAX,[0x01d17fb8]                ; 004f81f7 | DAT_01d17fb8
    MOV dword ptr [ESP + 0xc],EAX       ; 004f81fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f8200
        ;   Label: LAB_004f8200
    CMP EAX,dword ptr [EDI + 0x4]       ; 004f8204
    JL 0x004f823c                       ; 004f8207
        ;   XREF to: 004f823c (CONDITIONAL_JUMP)  ; LAB_004f823c
    MOV ESI,EAX                         ; 004f8209
    MOV ECX,EBP                         ; 004f820b
    MOV dword ptr [EDI],0xffffffff      ; 004f820d
    XOR EDX,EDX                         ; 004f8213
    MOV EAX,0x1d17ab8                   ; 004f8215
    TEST EBX,EBX                        ; 004f821a
    JLE 0x004f830b                      ; 004f821c
        ;   XREF to: 004f830b (CONDITIONAL_JUMP)  ; LAB_004f830b
    CMP ESI,dword ptr [EAX]             ; 004f8222 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f8222
    JNZ 0x004f82ff                      ; 004f8224
        ;   XREF to: 004f82ff (CONDITIONAL_JUMP)  ; LAB_004f82ff
    CMP EAX,ECX                         ; 004f822a
    JZ 0x004f82ff                       ; 004f822c
        ;   XREF to: 004f82ff (CONDITIONAL_JUMP)  ; LAB_004f82ff
    MOV EDI,EAX                         ; 004f8232
        ;   Label: LAB_004f8232
    TEST EAX,EAX                        ; 004f8234
    JZ 0x004f8150                       ; 004f8236
        ;   XREF to: 004f8150 (CONDITIONAL_JUMP)  ; LAB_004f8150
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f823c
        ;   Label: LAB_004f823c
    CMP EAX,dword ptr [EBP + 0x4]       ; 004f8240
    JL 0x004f8279                       ; 004f8243
        ;   XREF to: 004f8279 (CONDITIONAL_JUMP)  ; LAB_004f8279
    MOV ECX,EAX                         ; 004f8245
    MOV ESI,EDI                         ; 004f8247
    MOV dword ptr [EBP],0xffffffff      ; 004f8249
    XOR EDX,EDX                         ; 004f8250
    MOV EAX,0x1d17ab8                   ; 004f8252
    TEST EBX,EBX                        ; 004f8257
    JLE 0x004f831e                      ; 004f8259
        ;   XREF to: 004f831e (CONDITIONAL_JUMP)  ; LAB_004f831e
    CMP ECX,dword ptr [EAX]             ; 004f825f | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f825f
    JNZ 0x004f8312                      ; 004f8261
        ;   XREF to: 004f8312 (CONDITIONAL_JUMP)  ; LAB_004f8312
    CMP EAX,ESI                         ; 004f8267
    JZ 0x004f8312                       ; 004f8269
        ;   XREF to: 004f8312 (CONDITIONAL_JUMP)  ; LAB_004f8312
    MOV EBP,EAX                         ; 004f826f
        ;   Label: LAB_004f826f
    TEST EAX,EAX                        ; 004f8271
    JZ 0x004f8150                       ; 004f8273
        ;   XREF to: 004f8150 (CONDITIONAL_JUMP)  ; LAB_004f8150
    MOV EAX,dword ptr [EDI + 0x8]       ; 004f8279 | DAT_01d17ac0
        ;   Label: LAB_004f8279
    MOV ECX,dword ptr [EBP + 0x8]       ; 004f827c | DAT_01d17b10 | DAT_01d17ac0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f827f
    CMP EAX,ECX                         ; 004f8283
    JLE 0x004f828d                      ; 004f8285
        ;   XREF to: 004f828d (CONDITIONAL_JUMP)  ; LAB_004f828d
    MOV ESI,EAX                         ; 004f8287
    MOV EAX,ECX                         ; 004f8289
    MOV ECX,ESI                         ; 004f828b
    SAR EAX,0x10                        ; 004f828d
        ;   Label: LAB_004f828d
    MOV EDX,dword ptr [EDX*0x4 + 0x1c2a38c] ; 004f8290 | DAT_01c2b64c | DAT_01c2b650
    LEA ESI,[EAX*0x4 + 0x0]             ; 004f8297
    SAR ECX,0x10                        ; 004f829e
    ADD EDX,ESI                         ; 004f82a1
    CMP EAX,ECX                         ; 004f82a3
    JGE 0x004f82b5                      ; 004f82a5
        ;   XREF to: 004f82b5 (CONDITIONAL_JUMP)  ; LAB_004f82b5
    INC EAX                             ; 004f82a7
        ;   Label: LAB_004f82a7
    MOV dword ptr [EDX],0x80000000      ; 004f82a8
    ADD EDX,0x4                         ; 004f82ae
    CMP EAX,ECX                         ; 004f82b1
    JL 0x004f82a7                       ; 004f82b3
        ;   XREF to: 004f82a7 (CONDITIONAL_JUMP)  ; LAB_004f82a7
    MOV EDX,dword ptr [EDI + 0x8]       ; 004f82b5 | DAT_01d17ac0
        ;   Label: LAB_004f82b5
    MOV EAX,dword ptr [EDI + 0xc]       ; 004f82b8 | DAT_01d17ac4
    ADD EDX,EAX                         ; 004f82bb
    MOV dword ptr [EDI + 0x8],EDX       ; 004f82bd
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f82c0
    MOV EAX,dword ptr [EBP + 0xc]       ; 004f82c4
    MOV ECX,dword ptr [EBP + 0x8]       ; 004f82c7
    INC ESI                             ; 004f82ca
    ADD ECX,EAX                         ; 004f82cb
    MOV dword ptr [ESP + 0xc],ESI       ; 004f82cd
    MOV dword ptr [EBP + 0x8],ECX       ; 004f82d1
    JMP 0x004f8200                      ; 004f82d4
        ;   XREF to: 004f8200 (UNCONDITIONAL_JUMP)  ; LAB_004f8200
    INC EDX                             ; 004f82d9
        ;   Label: LAB_004f82d9
    ADD EAX,0x50                        ; 004f82da
    CMP EDX,EBX                         ; 004f82dd
    JL 0x004f81b0                       ; 004f82df
        ;   XREF to: 004f81b0 (CONDITIONAL_JUMP)  ; LAB_004f81b0
    XOR EAX,EAX                         ; 004f82e5
        ;   Label: LAB_004f82e5
    JMP 0x004f81c0                      ; 004f82e7
        ;   XREF to: 004f81c0 (UNCONDITIONAL_JUMP)  ; LAB_004f81c0
    INC EDX                             ; 004f82ec
        ;   Label: LAB_004f82ec
    ADD EAX,0x50                        ; 004f82ed
    CMP EDX,EBX                         ; 004f82f0
    JL 0x004f81dd                       ; 004f82f2
        ;   XREF to: 004f81dd (CONDITIONAL_JUMP)  ; LAB_004f81dd
    XOR EAX,EAX                         ; 004f82f8
        ;   Label: LAB_004f82f8
    JMP 0x004f81ed                      ; 004f82fa
        ;   XREF to: 004f81ed (UNCONDITIONAL_JUMP)  ; LAB_004f81ed
    INC EDX                             ; 004f82ff
        ;   Label: LAB_004f82ff
    ADD EAX,0x50                        ; 004f8300
    CMP EDX,EBX                         ; 004f8303
    JL 0x004f8222                       ; 004f8305
        ;   XREF to: 004f8222 (CONDITIONAL_JUMP)  ; LAB_004f8222
    XOR EAX,EAX                         ; 004f830b
        ;   Label: LAB_004f830b
    JMP 0x004f8232                      ; 004f830d
        ;   XREF to: 004f8232 (UNCONDITIONAL_JUMP)  ; LAB_004f8232
    INC EDX                             ; 004f8312
        ;   Label: LAB_004f8312
    ADD EAX,0x50                        ; 004f8313
    CMP EDX,EBX                         ; 004f8316
    JL 0x004f825f                       ; 004f8318
        ;   XREF to: 004f825f (CONDITIONAL_JUMP)  ; LAB_004f825f
    XOR EAX,EAX                         ; 004f831e
        ;   Label: LAB_004f831e
    JMP 0x004f826f                      ; 004f8320
        ;   XREF to: 004f826f (UNCONDITIONAL_JUMP)  ; LAB_004f826f

