; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f0f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cc949
;   undefined4 DAT_005cc94d
;   undefined4 DAT_005cc951
;   undefined4 DAT_005f3e28
;
; Called Functions:
;   FUN_0040cf60
;   FUN_0040cfc0
;   FUN_00421a00
;   FUN_0044fd00
;   FUN_0044fd70
;   FUN_00487eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f0f0
        ;   Label: FUN_0041f0f0
    PUSH ESI                            ; 0041f0f1
    PUSH EDI                            ; 0041f0f2
    PUSH EBP                            ; 0041f0f3
    MOV EBP,ESP                         ; 0041f0f4
    SUB ESP,0x2c                        ; 0041f0f6
    AND ESP,0xfffffff8                  ; 0041f0f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f0fc
    MOV dword ptr [EAX + 0x38],0x0      ; 0041f0ff
    PUSH EAX                            ; 0041f106
    MOV EDX,dword ptr [EAX + 0x38]      ; 0041f107
    MOV dword ptr [EAX + 0x34],EDX      ; 0041f10a
    MOV EDX,dword ptr [EAX + 0x34]      ; 0041f10d
    MOV dword ptr [EAX + 0x30],EDX      ; 0041f110
    CALL FUN_00487eb0                   ; 0041f113
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 0041f118
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f11b
    MOV dword ptr [EAX + 0x16f00],0x4   ; 0041f11e
    MOV ECX,dword ptr [EAX + 0x16f00]   ; 0041f128
    XOR EBX,EBX                         ; 0041f12e
    TEST ECX,ECX                        ; 0041f130
    JLE 0x0041f1d3                      ; 0041f132
        ;   XREF to: 0041f1d3 (CONDITIONAL_JUMP)  ; LAB_0041f1d3
    ADD EAX,0x16f04                     ; 0041f138
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041f13d
    LEA ESI,[EAX + 0x78]                ; 0041f141
    IMUL EDI,EBX,0x17c                  ; 0041f144
        ;   Label: LAB_0041f144
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0041f14a
    MOV AH,byte ptr [ESI]               ; 0041f14e
    ADD EDI,ECX                         ; 0041f150
    TEST AH,AH                          ; 0041f152
    JNZ 0x0041f35e                      ; 0041f154
        ;   XREF to: 0041f35e (CONDITIONAL_JUMP)  ; LAB_0041f35e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f15a
    MOV EDX,dword ptr [EAX + 0x16f00]   ; 0041f15d
    DEC EDX                             ; 0041f163
    MOV EDI,EBX                         ; 0041f164
    MOV dword ptr [EAX + 0x16f00],EDX   ; 0041f166
    CMP EBX,EDX                         ; 0041f16c
    JGE 0x0041f1c4                      ; 0041f16e
        ;   XREF to: 0041f1c4 (CONDITIONAL_JUMP)  ; LAB_0041f1c4
    IMUL EAX,EBX,0x17c                  ; 0041f170
    LEA EDX,[ECX + EAX*0x1]             ; 0041f176
    ADD EAX,0x1f4                       ; 0041f179
    ADD EAX,ECX                         ; 0041f17e
    MOV dword ptr [ESP + 0x20],EDX      ; 0041f180
    MOV dword ptr [ESP + 0x24],EAX      ; 0041f184
    MOV ECX,dword ptr [ESP + 0x24]      ; 0041f188
        ;   Label: LAB_0041f188
    PUSH ECX                            ; 0041f18c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041f18d
    PUSH EAX                            ; 0041f191
    CALL FUN_0044fd70                   ; 0041f192
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0041f197
    INC EDI                             ; 0041f19a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0041f19b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0041f19f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f1a3
    ADD EDX,0x17c                       ; 0041f1a6
    ADD ECX,0x17c                       ; 0041f1ac
    MOV dword ptr [ESP + 0x20],EDX      ; 0041f1b2
    MOV EDX,dword ptr [EAX + 0x16f00]   ; 0041f1b6
    MOV dword ptr [ESP + 0x24],ECX      ; 0041f1bc
    CMP EDI,EDX                         ; 0041f1c0
    JL 0x0041f188                       ; 0041f1c2
        ;   XREF to: 0041f188 (CONDITIONAL_JUMP)  ; LAB_0041f188
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f1c4
        ;   Label: LAB_0041f1c4
    CMP EBX,dword ptr [EAX + 0x16f00]   ; 0041f1c7
    JL 0x0041f144                       ; 0041f1cd
        ;   XREF to: 0041f144 (CONDITIONAL_JUMP)  ; LAB_0041f144
    XOR EAX,EAX                         ; 0041f1d3
        ;   Label: LAB_0041f1d3
    MOV dword ptr [ESP + 0x18],EAX      ; 0041f1d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f1d9
    CMP dword ptr [EAX + 0x10afc],0x0   ; 0041f1dc
    JLE 0x0041f323                      ; 0041f1e3
        ;   XREF to: 0041f323 (CONDITIONAL_JUMP)  ; LAB_0041f323
    FLD float ptr [0x005f3e28]          ; 0041f1e9 | DAT_005f3e28
    FLD ST0                             ; 0041f1ef
    FMUL float ptr [0x005cc949]         ; 0041f1f1 | DAT_005cc949
    FXCH                                ; 0041f1f7
    FMUL float ptr [0x005cc94d]         ; 0041f1f9 | DAT_005cc94d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0041f1ff
    ADD EAX,0x10b00                     ; 0041f202
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041f207
    MOV dword ptr [ESP + 0x10],EAX      ; 0041f20a
    ADD EDI,0x10b20                     ; 0041f20e
    ADD EBX,0x10b14                     ; 0041f214
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f21a
    FXCH                                ; 0041f21d
    FSTP float ptr [ESP]                ; 0041f21f
    ADD EAX,0x10b08                     ; 0041f222
    FSTP float ptr [ESP + 0x4]          ; 0041f227
    MOV dword ptr [ESP + 0x14],EAX      ; 0041f22b
    MOV ESI,dword ptr [ESP + 0x18]      ; 0041f22f
        ;   Label: LAB_0041f22f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041f233
    SHL ESI,0x6                         ; 0041f237
    ADD ESI,EAX                         ; 0041f23a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f23c
    MOV dword ptr [ESI],0x0             ; 0041f23f
    MOV EAX,dword ptr [EAX + 0x16f00]   ; 0041f245
    DEC EAX                             ; 0041f24b
    PUSH EAX                            ; 0041f24c
    PUSH 0x0                            ; 0041f24d
    CALL FUN_0040cfc0                   ; 0041f24f
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 0041f254
    FLD double ptr [0x005cc951]         ; 0041f257 | DAT_005cc951
    FLD float ptr [ESP]                 ; 0041f25d
    FMUL ST1                            ; 0041f260
    FLD float ptr [ESP + 0x4]           ; 0041f262
    FMULP ST2                           ; 0041f266
    FSTP float ptr [ESP + 0x8]          ; 0041f268
    PUSH dword ptr [ESP + 0x8]          ; 0041f26c
    FSTP float ptr [ESP + 0x10]         ; 0041f270
    PUSH dword ptr [ESP + 0x10]         ; 0041f274
    MOV dword ptr [ESI + 0x4],EAX       ; 0041f278
    CALL FUN_0040cf60                   ; 0041f27b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x30],EAX      ; 0041f280
    FLD float ptr [ESP + 0x30]          ; 0041f284
    ADD ESP,0x8                         ; 0041f288
    PUSH dword ptr [ESP + 0x8]          ; 0041f28b
    MOV dword ptr [ESI + 0xc],0x0       ; 0041f28f
    PUSH dword ptr [ESP + 0x10]         ; 0041f296
    FSTP float ptr [ESI + 0x8]          ; 0041f29a
    CALL FUN_0040cf60                   ; 0041f29d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x30],EAX      ; 0041f2a2
    FLD float ptr [ESP + 0x30]          ; 0041f2a6
    ADD ESP,0x8                         ; 0041f2aa
    FSTP float ptr [ESI + 0x10]         ; 0041f2ad
    PUSH 0x40490fdb                     ; 0041f2b0
    MOV dword ptr [EBX + 0x8],0x0       ; 0041f2b5
    PUSH 0xc0490fdb                     ; 0041f2bc
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041f2c1
    MOV dword ptr [EBX + 0x4],EAX       ; 0041f2c4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041f2c7
    MOV dword ptr [EBX],EAX             ; 0041f2ca
    CALL FUN_0040cf60                   ; 0041f2cc
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x30],EAX      ; 0041f2d1
    FLD float ptr [ESP + 0x30]          ; 0041f2d5
    ADD ESP,0x8                         ; 0041f2d9
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041f2dc
    FSTP float ptr [ESI + 0x18]         ; 0041f2e0
    CMP EDI,EDX                         ; 0041f2e3
    JZ 0x0041f2f8                       ; 0041f2e5
        ;   XREF to: 0041f2f8 (CONDITIONAL_JUMP)  ; LAB_0041f2f8
    MOV EAX,dword ptr [EBX + -0xc]      ; 0041f2e7
    MOV dword ptr [EDI],EAX             ; 0041f2ea
    MOV EAX,dword ptr [EBX + -0x8]      ; 0041f2ec
    MOV dword ptr [EDI + 0x4],EAX       ; 0041f2ef
    MOV EAX,dword ptr [EBX + -0x4]      ; 0041f2f2
    MOV dword ptr [EDI + 0x8],EAX       ; 0041f2f5
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041f2f8
        ;   Label: LAB_0041f2f8
    MOV EAX,dword ptr [ESP + 0x18]      ; 0041f2fc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041f300
    ADD EDI,0x40                        ; 0041f303
    ADD EBX,0x40                        ; 0041f306
    ADD ESI,0x40                        ; 0041f309
    INC EAX                             ; 0041f30c
    MOV ECX,dword ptr [EDX + 0x10afc]   ; 0041f30d
    MOV dword ptr [ESP + 0x14],ESI      ; 0041f313
    MOV dword ptr [ESP + 0x18],EAX      ; 0041f317
    CMP EAX,ECX                         ; 0041f31b
    JL 0x0041f22f                       ; 0041f31d
        ;   XREF to: 0041f22f (CONDITIONAL_JUMP)  ; LAB_0041f22f
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041f323
        ;   Label: LAB_0041f323
    PUSH EBX                            ; 0041f326
    CALL FUN_00421a00                   ; 0041f327
        ;   XREF to: 00421a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00421a00()
    MOV dword ptr [EBX + 0x1e620],0xffffd8f1 ; 0041f32c
    MOV dword ptr [EBX + 0x1e624],0xffffd8f1 ; 0041f336
    MOV dword ptr [EBX + 0x100],0x1     ; 0041f340
    ADD ESP,0x4                         ; 0041f34a
    MOV dword ptr [EBX + 0x1e630],0x0   ; 0041f34d
    MOV ESP,EBP                         ; 0041f357
    POP EBP                             ; 0041f359
    POP EDI                             ; 0041f35a
    POP ESI                             ; 0041f35b
    POP EBX                             ; 0041f35c
    RET                                 ; 0041f35d
    PUSH EDI                            ; 0041f35e
        ;   Label: LAB_0041f35e
    CALL FUN_0044fd00                   ; 0041f35f
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESI,0x17c                       ; 0041f364
    INC EBX                             ; 0041f36a
    ADD ESP,0x4                         ; 0041f36b
    JMP 0x0041f1c4                      ; 0041f36e
        ;   XREF to: 0041f1c4 (UNCONDITIONAL_JUMP)  ; LAB_0041f1c4

