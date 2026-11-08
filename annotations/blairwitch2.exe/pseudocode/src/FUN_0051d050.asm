; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051d050(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00431d90 at 00431dbf
;
; Referenced Globals:
;   undefined4 DAT_0061b424
;   undefined4 DAT_00622014
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622020
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622040
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b50
;   undefined4 DAT_01c38b54
;   ... and 5 more
;
; Called Functions:
;   FUN_0051c580
;   FUN_0051c760
;   FUN_0055d6d7
;   FUN_0055f920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d050
        ;   Label: FUN_0051d050
    PUSH ESI                            ; 0051d051
    PUSH EDI                            ; 0051d052
    PUSH EBP                            ; 0051d053
    SUB ESP,0x54                        ; 0051d054
    CMP dword ptr [0x0070ca7c],0x0      ; 0051d057 | DAT_0070ca7c
    JZ 0x0051d0bd                       ; 0051d05e
        ;   XREF to: 0051d0bd (CONDITIONAL_JUMP)  ; LAB_0051d0bd
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0051d060
    CMP ECX,0x3                         ; 0051d064
    JLE 0x0051d13c                      ; 0051d067
        ;   XREF to: 0051d13c (CONDITIONAL_JUMP)  ; LAB_0051d13c
    MOV EBX,dword ptr [ESP + 0x68]      ; 0051d06d
    LEA EBP,[ECX + -0x2]                ; 0051d071
    XOR ESI,ESI                         ; 0051d074
    XOR EDI,EDI                         ; 0051d076
    TEST EBP,EBP                        ; 0051d078
    JLE 0x0051d0b5                      ; 0051d07a
        ;   XREF to: 0051d0b5 (CONDITIONAL_JUMP)  ; LAB_0051d0b5
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 0051d07c
        ;   Label: LAB_0051d07c
    ADD EAX,0x622014                    ; 0051d080 | DAT_00622014
    MOV ECX,dword ptr [EBX + 0x4]       ; 0051d085
    PUSH EAX                            ; 0051d088
    IMUL EAX,ECX,0x30                   ; 0051d089
    ADD EAX,0x622014                    ; 0051d08c | DAT_00622014
    MOV EDX,dword ptr [EBX]             ; 0051d091
    PUSH EAX                            ; 0051d093
    IMUL EAX,EDX,0x30                   ; 0051d094
    ADD EAX,0x622014                    ; 0051d097 | DAT_00622014
    PUSH EAX                            ; 0051d09c
    CALL FUN_0051c760                   ; 0051d09d
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051d0a2
    TEST EAX,EAX                        ; 0051d0a5
    JZ 0x0051d136                       ; 0051d0a7
        ;   XREF to: 0051d136 (CONDITIONAL_JUMP)  ; LAB_0051d136
    INC ESI                             ; 0051d0ad
        ;   Label: LAB_0051d0ad
    ADD EBX,0x4                         ; 0051d0ae
    CMP ESI,EBP                         ; 0051d0b1
    JL 0x0051d07c                       ; 0051d0b3
        ;   XREF to: 0051d07c (CONDITIONAL_JUMP)  ; LAB_0051d07c
    CMP EDI,EBP                         ; 0051d0b5
        ;   Label: LAB_0051d0b5
    JZ 0x0051d12e                       ; 0051d0b7
        ;   XREF to: 0051d12e (CONDITIONAL_JUMP)  ; LAB_0051d12e
    CMP dword ptr [0x01c37788],0x0      ; 0051d0bd | DAT_01c37788
        ;   Label: LAB_0051d0bd
    JZ 0x0051d19e                       ; 0051d0c4
        ;   XREF to: 0051d19e (CONDITIONAL_JUMP)  ; LAB_0051d19e
    CMP dword ptr [0x0070ca74],0x0      ; 0051d0ca | DAT_0070ca74
    JNZ 0x0051d19e                      ; 0051d0d1
        ;   XREF to: 0051d19e (CONDITIONAL_JUMP)  ; LAB_0051d19e
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051d0d7
    XOR EAX,EAX                         ; 0051d0db
    TEST EBX,EBX                        ; 0051d0dd
    JLE 0x0051d100                      ; 0051d0df
        ;   XREF to: 0051d100 (CONDITIONAL_JUMP)  ; LAB_0051d100
    MOV ECX,dword ptr [ESP + 0x68]      ; 0051d0e1
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0051d0e5
    IMUL EDX,dword ptr [ECX],0x30       ; 0051d0e9
        ;   Label: LAB_0051d0e9
    INC EAX                             ; 0051d0ec
    ADD EDX,0x622014                    ; 0051d0ed | DAT_00622014
    ADD ECX,0x4                         ; 0051d0f3
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 0051d0f6
    CMP EAX,ESI                         ; 0051d0fa
    JL 0x0051d0e9                       ; 0051d0fc
        ;   XREF to: 0051d0e9 (CONDITIONAL_JUMP)  ; LAB_0051d0e9
    MOV EAX,EAX                         ; 0051d0fe
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0051d100
        ;   Label: LAB_0051d100
    MOV EDI,dword ptr [0x01e61b58]      ; 0051d104 | DAT_01e61b58
    MOV EBP,dword ptr [0x01c38b54]      ; 0051d10a | DAT_01c38b54
    SUB EAX,0x2                         ; 0051d110
    PUSH EBP                            ; 0051d113
    ADD EDI,EAX                         ; 0051d114
    MOV EAX,dword ptr [ESP + 0x70]      ; 0051d116
    PUSH EAX                            ; 0051d11a
    LEA EAX,[ESP + 0x8]                 ; 0051d11b
    PUSH EAX                            ; 0051d11f
    MOV dword ptr [0x01e61b58],EDI      ; 0051d120 | DAT_01e61b58
    CALL FUN_0055f920                   ; 0051d126
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f920()
    ADD ESP,0xc                         ; 0051d12b
    ADD ESP,0x54                        ; 0051d12e
        ;   Label: LAB_0051d12e
    POP EBP                             ; 0051d131
    POP EDI                             ; 0051d132
    POP ESI                             ; 0051d133
    POP EBX                             ; 0051d134
    RET                                 ; 0051d135
    INC EDI                             ; 0051d136
        ;   Label: LAB_0051d136
    JMP 0x0051d0ad                      ; 0051d137
        ;   XREF to: 0051d0ad (UNCONDITIONAL_JUMP)  ; LAB_0051d0ad
    MOV EDX,dword ptr [ESP + 0x68]      ; 0051d13c
        ;   Label: LAB_0051d13c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0051d140
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051d143
    SUB EAX,EDX                         ; 0051d14a
    SHL EAX,0x4                         ; 0051d14c
    MOV EDX,dword ptr [ESP + 0x68]      ; 0051d14f
    ADD EAX,0x622014                    ; 0051d153 | DAT_00622014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0051d158
    PUSH EAX                            ; 0051d15b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051d15c
    SUB EAX,EDX                         ; 0051d163
    SHL EAX,0x4                         ; 0051d165
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051d168
    ADD EAX,0x622014                    ; 0051d16c | DAT_00622014
    MOV EDX,dword ptr [EDX]             ; 0051d171
    PUSH EAX                            ; 0051d173
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051d174
    SUB EAX,EDX                         ; 0051d17b
    SHL EAX,0x4                         ; 0051d17d
    ADD EAX,0x622014                    ; 0051d180 | DAT_00622014
    PUSH EAX                            ; 0051d185
    CALL FUN_0051c760                   ; 0051d186
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051d18b
    TEST EAX,EAX                        ; 0051d18e
    JNZ 0x0051d0bd                      ; 0051d190
        ;   XREF to: 0051d0bd (CONDITIONAL_JUMP)  ; LAB_0051d0bd
    ADD ESP,0x54                        ; 0051d196
    POP EBP                             ; 0051d199
    POP EDI                             ; 0051d19a
    POP ESI                             ; 0051d19b
    POP EBX                             ; 0051d19c
    RET                                 ; 0051d19d
    MOV ESI,0x4b0                       ; 0051d19e
        ;   Label: LAB_0051d19e
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0051d1a3
    XOR EDI,EDI                         ; 0051d1a7
    MOV EDX,dword ptr [0x01e61b58]      ; 0051d1a9 | DAT_01e61b58
    MOV dword ptr [0x01e61b50],EDI      ; 0051d1af | DAT_01e61b50
    MOV dword ptr [0x01e61648],EDI      ; 0051d1b5 | DAT_01e61648
    MOV dword ptr [ESP + 0x48],EDI      ; 0051d1bb
    INC EDX                             ; 0051d1bf
    MOV dword ptr [0x01e61b4c],ESI      ; 0051d1c0 | DAT_01e61b4c
    MOV dword ptr [0x01e61b58],EDX      ; 0051d1c6 | DAT_01e61b58
    TEST ECX,ECX                        ; 0051d1cc
    JLE 0x0051d239                      ; 0051d1ce
        ;   XREF to: 0051d239 (CONDITIONAL_JUMP)  ; LAB_0051d239
    MOV EAX,dword ptr [ESP + 0x68]      ; 0051d1d0
    MOV dword ptr [ESP + 0x44],EAX      ; 0051d1d4
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051d1d8
        ;   Label: LAB_0051d1d8
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051d1dc
    INC EAX                             ; 0051d1e0
    CMP EAX,EBX                         ; 0051d1e1
    JL 0x0051d1e7                       ; 0051d1e3
        ;   XREF to: 0051d1e7 (CONDITIONAL_JUMP)  ; LAB_0051d1e7
    XOR EAX,EAX                         ; 0051d1e5
    MOV EDX,dword ptr [ESP + 0x44]      ; 0051d1e7
        ;   Label: LAB_0051d1e7
    IMUL EBP,dword ptr [EDX],0x30       ; 0051d1eb
    MOV ESI,dword ptr [ESP + 0x68]      ; 0051d1ee
    SHL EAX,0x2                         ; 0051d1f2
    ADD EAX,ESI                         ; 0051d1f5
    IMUL EAX,dword ptr [EAX],0x30       ; 0051d1f7
    ADD EBP,0x622014                    ; 0051d1fa | DAT_00622014
    ADD EAX,0x622014                    ; 0051d200 | DAT_00622014
    MOV EBX,EBP                         ; 0051d205
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051d207 | DAT_00622028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0051d20a | DAT_00622028
    SAR ECX,0x10                        ; 0051d20d
    SAR ESI,0x10                        ; 0051d210
    MOV EDI,EAX                         ; 0051d213
    CMP ECX,ESI                         ; 0051d215
    JNZ 0x0051d368                      ; 0051d217
        ;   XREF to: 0051d368 (CONDITIONAL_JUMP)  ; LAB_0051d368
    MOV ESI,dword ptr [ESP + 0x44]      ; 0051d21d
        ;   Label: LAB_0051d21d
    MOV EDI,dword ptr [ESP + 0x48]      ; 0051d221
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0051d225
    ADD ESI,0x4                         ; 0051d229
    INC EDI                             ; 0051d22c
    MOV dword ptr [ESP + 0x44],ESI      ; 0051d22d
    MOV dword ptr [ESP + 0x48],EDI      ; 0051d231
    CMP EDI,EBP                         ; 0051d235
    JL 0x0051d1d8                       ; 0051d237
        ;   XREF to: 0051d1d8 (CONDITIONAL_JUMP)  ; LAB_0051d1d8
    PUSH 0x0                            ; 0051d239
        ;   Label: LAB_0051d239
    MOV EAX,[0x01e61b4c]                ; 0051d23b | DAT_01e61b4c
    PUSH EAX                            ; 0051d240
    CALL FUN_0051c580                   ; 0051d241
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051d246
    MOV EBP,EAX                         ; 0051d249
    TEST EAX,EAX                        ; 0051d24b
    JZ 0x0051d12e                       ; 0051d24d
        ;   XREF to: 0051d12e (CONDITIONAL_JUMP)  ; LAB_0051d12e
    PUSH EAX                            ; 0051d253
    MOV EDX,dword ptr [0x01e61b4c]      ; 0051d254 | DAT_01e61b4c
    PUSH EDX                            ; 0051d25a
    CALL FUN_0051c580                   ; 0051d25b
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051d260
    MOV dword ptr [ESP + 0x50],EAX      ; 0051d263
    TEST EAX,EAX                        ; 0051d267
    JZ 0x0051d12e                       ; 0051d269
        ;   XREF to: 0051d12e (CONDITIONAL_JUMP)  ; LAB_0051d12e
    MOV EAX,[0x01e61b4c]                ; 0051d26f | DAT_01e61b4c
    MOV ECX,dword ptr [0x0061b424]      ; 0051d274 | DAT_0061b424
    MOV dword ptr [ESP + 0x4c],EAX      ; 0051d27a
    CMP EAX,ECX                         ; 0051d27e
    JGE 0x0051d12e                      ; 0051d280
        ;   XREF to: 0051d12e (CONDITIONAL_JUMP)  ; LAB_0051d12e
        ;   Label: LAB_0051d280
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051d286
    CMP EAX,dword ptr [EBP + 0x4]       ; 0051d28a
    JGE 0x0051d54f                      ; 0051d28d
        ;   XREF to: 0051d54f (CONDITIONAL_JUMP)  ; LAB_0051d54f
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051d293
        ;   Label: LAB_0051d293
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051d297
    CMP EAX,dword ptr [EDX + 0x4]       ; 0051d29b
    JL 0x0051d2bc                       ; 0051d29e
        ;   XREF to: 0051d2bc (CONDITIONAL_JUMP)  ; LAB_0051d2bc
    PUSH EBP                            ; 0051d2a0
    PUSH EAX                            ; 0051d2a1
    MOV dword ptr [EDX],0xffffffff      ; 0051d2a2
    CALL FUN_0051c580                   ; 0051d2a8
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051d2ad
    MOV dword ptr [ESP + 0x50],EAX      ; 0051d2b0
    TEST EAX,EAX                        ; 0051d2b4
    JZ 0x0051d12e                       ; 0051d2b6
        ;   XREF to: 0051d12e (CONDITIONAL_JUMP)  ; LAB_0051d12e
    MOV EDI,dword ptr [ESP + 0x50]      ; 0051d2bc
        ;   Label: LAB_0051d2bc
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0051d2c0
    MOV ESI,EBP                         ; 0051d2c4
    CALL FUN_0055d6d7                   ; 0051d2c6
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d6d7()
    MOV EAX,dword ptr [EBP + 0xc]       ; 0051d2cb
    ADD dword ptr [EBP + 0x8],EAX       ; 0051d2ce
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051d2d1
    MOV ESI,dword ptr [EBP + 0x20]      ; 0051d2d4
    MOV EDI,dword ptr [EBP + 0x10]      ; 0051d2d7
    MOV EDX,dword ptr [EBP + 0x28]      ; 0051d2da
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051d2dd
    MOV ECX,dword ptr [EBP + 0x30]      ; 0051d2e0
    ADD EBX,EAX                         ; 0051d2e3
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051d2e5
    MOV dword ptr [EBP + 0x18],EBX      ; 0051d2e8
    ADD ESI,EAX                         ; 0051d2eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051d2ed
    MOV dword ptr [EBP + 0x20],ESI      ; 0051d2f0
    ADD EDI,EAX                         ; 0051d2f3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051d2f5
    MOV dword ptr [EBP + 0x10],EDI      ; 0051d2f8
    ADD EDX,EAX                         ; 0051d2fb
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051d2fd
    MOV dword ptr [EBP + 0x28],EDX      ; 0051d300
    ADD ECX,EAX                         ; 0051d303
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051d305
    MOV dword ptr [EBP + 0x30],ECX      ; 0051d309
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051d30c
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051d310
    MOV EBX,dword ptr [EDX + 0x8]       ; 0051d313
    MOV ESI,dword ptr [EDX + 0x18]      ; 0051d316
    ADD EBX,EAX                         ; 0051d319
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0051d31b
    MOV dword ptr [EDX + 0x8],EBX       ; 0051d31e
    ADD ESI,EAX                         ; 0051d321
    MOV dword ptr [EDX + 0x18],ESI      ; 0051d323
    MOV EDI,dword ptr [EDX + 0x20]      ; 0051d326
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051d329
    MOV EBX,dword ptr [EDX + 0x28]      ; 0051d32c
    MOV EAX,dword ptr [EDX + 0x24]      ; 0051d32f
    MOV ESI,dword ptr [EDX + 0x30]      ; 0051d332
    ADD EDI,EAX                         ; 0051d335
    MOV EAX,dword ptr [EDX + 0x14]      ; 0051d337
    MOV dword ptr [EDX + 0x20],EDI      ; 0051d33a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0051d33d
    ADD ECX,EAX                         ; 0051d341
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0051d343
    MOV dword ptr [EDX + 0x10],ECX      ; 0051d346
    ADD EBX,EAX                         ; 0051d349
    MOV EAX,dword ptr [EDX + 0x34]      ; 0051d34b
    MOV dword ptr [EDX + 0x28],EBX      ; 0051d34e
    ADD ESI,EAX                         ; 0051d351
    INC EDI                             ; 0051d353
    MOV dword ptr [EDX + 0x30],ESI      ; 0051d354
    MOV EDX,dword ptr [0x0061b424]      ; 0051d357 | DAT_0061b424
    MOV dword ptr [ESP + 0x4c],EDI      ; 0051d35d
    CMP EDI,EDX                         ; 0051d361
    JMP 0x0051d280                      ; 0051d363
        ;   XREF to: 0051d280 (UNCONDITIONAL_JUMP)  ; LAB_0051d280
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051d368 | DAT_00622028
        ;   Label: LAB_0051d368
    CMP EDX,dword ptr [EAX + 0x14]      ; 0051d36b | DAT_00622028
    JLE 0x0051d37a                      ; 0051d36e
        ;   XREF to: 0051d37a (CONDITIONAL_JUMP)  ; LAB_0051d37a
    MOV EBX,EAX                         ; 0051d370
    MOV EDI,EBP                         ; 0051d372
    MOV EAX,ECX                         ; 0051d374
    MOV ECX,ESI                         ; 0051d376
    MOV ESI,EAX                         ; 0051d378
    IMUL EBP,dword ptr [0x01e61648],0x50 ; 0051d37a | DAT_01e61648
        ;   Label: LAB_0051d37a
    ADD EBP,0x1e6164c                   ; 0051d381
    MOV dword ptr [EBP],ECX             ; 0051d387
    MOV EDX,dword ptr [0x01e61b4c]      ; 0051d38a | DAT_01e61b4c
    MOV dword ptr [EBP + 0x4],ESI       ; 0051d390
    CMP ECX,EDX                         ; 0051d393
    JGE 0x0051d39d                      ; 0051d395
        ;   XREF to: 0051d39d (CONDITIONAL_JUMP)  ; LAB_0051d39d
    MOV dword ptr [0x01e61b4c],ECX      ; 0051d397 | DAT_01e61b4c
    CMP ESI,dword ptr [0x01e61b50]      ; 0051d39d | DAT_01e61b50
        ;   Label: LAB_0051d39d
    JLE 0x0051d3ab                      ; 0051d3a3
        ;   XREF to: 0051d3ab (CONDITIONAL_JUMP)  ; LAB_0051d3ab
    MOV dword ptr [0x01e61b50],ESI      ; 0051d3a5 | DAT_01e61b50
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051d3ab | DAT_00622028
        ;   Label: LAB_0051d3ab
    MOV ECX,dword ptr [EDI + 0x14]      ; 0051d3ae | DAT_00622028
    SUB ECX,ESI                         ; 0051d3b1
    CMP ECX,0x10000                     ; 0051d3b3
    JNC 0x0051d503                      ; 0051d3b9
        ;   XREF to: 0051d503 (CONDITIONAL_JUMP)  ; LAB_0051d503
    XOR ECX,ECX                         ; 0051d3bf
    MOV EAX,dword ptr [EDI + 0x10]      ; 0051d3c1 | DAT_00622024
        ;   Label: LAB_0051d3c1
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051d3c4 | DAT_00622024
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051d3c7 | DAT_00622028
    SUB EAX,EDX                         ; 0051d3ca
    AND ESI,0xffff                      ; 0051d3cc
    MOV EDX,EAX                         ; 0051d3d2
    MOV EAX,ECX                         ; 0051d3d4
    XOR SI,0xffff                       ; 0051d3d6
    IMUL EDX                            ; 0051d3da
    SHRD EAX,EDX,0x10                   ; 0051d3dc
    MOV EDX,EAX                         ; 0051d3e0
    MOV dword ptr [EBP + 0xc],EAX       ; 0051d3e2
    MOV EAX,ESI                         ; 0051d3e5
    IMUL EDX                            ; 0051d3e7
    SHRD EAX,EDX,0x10                   ; 0051d3e9
    MOV dword ptr [ESP + 0x40],EAX      ; 0051d3ed
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051d3f1
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051d3f5 | DAT_00622024
    ADD EAX,EDX                         ; 0051d3f8
    MOV dword ptr [EBP + 0x8],EAX       ; 0051d3fa
    MOV EAX,dword ptr [EDI + 0x18]      ; 0051d3fd | DAT_0062202c
    MOV EDX,dword ptr [EBX + 0x18]      ; 0051d400 | DAT_0062202c
    SUB EAX,EDX                         ; 0051d403
    MOV EDX,EAX                         ; 0051d405
    MOV EAX,ECX                         ; 0051d407
    IMUL EDX                            ; 0051d409
    SHRD EAX,EDX,0x10                   ; 0051d40b
    MOV EDX,EAX                         ; 0051d40f
    MOV dword ptr [EBP + 0x1c],EAX      ; 0051d411
    MOV EAX,ESI                         ; 0051d414
    IMUL EDX                            ; 0051d416
    SHRD EAX,EDX,0x10                   ; 0051d418
    MOV dword ptr [ESP + 0x40],EAX      ; 0051d41c
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051d420
    MOV EAX,dword ptr [EBX + 0x18]      ; 0051d424 | DAT_0062202c
    ADD EAX,EDX                         ; 0051d427
    MOV dword ptr [EBP + 0x18],EAX      ; 0051d429
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051d42c | DAT_00622030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051d42f | DAT_00622030
    SUB EAX,EDX                         ; 0051d432
    MOV EDX,EAX                         ; 0051d434
    MOV EAX,ECX                         ; 0051d436
    IMUL EDX                            ; 0051d438
    SHRD EAX,EDX,0x10                   ; 0051d43a
    MOV EDX,EAX                         ; 0051d43e
    MOV dword ptr [EBP + 0x24],EAX      ; 0051d440
    MOV EAX,ESI                         ; 0051d443
    IMUL EDX                            ; 0051d445
    SHRD EAX,EDX,0x10                   ; 0051d447
    MOV dword ptr [ESP + 0x40],EAX      ; 0051d44b
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051d44f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051d453 | DAT_00622030
    ADD EAX,EDX                         ; 0051d456
    MOV dword ptr [EBP + 0x20],EAX      ; 0051d458
    MOV EAX,dword ptr [EDI + 0x20]      ; 0051d45b | DAT_00622034
    MOV EDX,dword ptr [EBX + 0x20]      ; 0051d45e | DAT_00622034
    SUB EAX,EDX                         ; 0051d461
    MOV EDX,EAX                         ; 0051d463
    MOV EAX,ECX                         ; 0051d465
    IMUL EDX                            ; 0051d467
    SHRD EAX,EDX,0x10                   ; 0051d469
    MOV EDX,EAX                         ; 0051d46d
    MOV dword ptr [EBP + 0x14],EAX      ; 0051d46f
    MOV EAX,ESI                         ; 0051d472
    IMUL EDX                            ; 0051d474
    SHRD EAX,EDX,0x10                   ; 0051d476
    MOV dword ptr [ESP + 0x40],EAX      ; 0051d47a
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051d47e
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051d482 | DAT_00622034
    ADD EAX,EDX                         ; 0051d485
    MOV dword ptr [EBP + 0x10],EAX      ; 0051d487
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0051d48a | DAT_00622040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0051d48d | DAT_00622040
    SUB EAX,EDX                         ; 0051d490
    MOV EDX,EAX                         ; 0051d492
    MOV EAX,ECX                         ; 0051d494
    IMUL EDX                            ; 0051d496
    SHRD EAX,EDX,0x10                   ; 0051d498
    MOV EDX,EAX                         ; 0051d49c
    MOV dword ptr [EBP + 0x34],EAX      ; 0051d49e
    MOV EAX,ESI                         ; 0051d4a1
    IMUL EDX                            ; 0051d4a3
    SHRD EAX,EDX,0x10                   ; 0051d4a5
    MOV dword ptr [ESP + 0x40],EAX      ; 0051d4a9
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051d4ad
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0051d4b1 | DAT_00622040
    ADD EAX,EDX                         ; 0051d4b4
    MOV dword ptr [EBP + 0x30],EAX      ; 0051d4b6
    CMP dword ptr [0x01c38b58],0x1      ; 0051d4b9 | DAT_01c38b58
    JNZ 0x0051d51b                      ; 0051d4c0
        ;   XREF to: 0051d51b (CONDITIONAL_JUMP)  ; LAB_0051d51b
    CMP dword ptr [0x01c38b50],0x0      ; 0051d4c2 | DAT_01c38b50
    JZ 0x0051d513                       ; 0051d4c9
        ;   XREF to: 0051d513 (CONDITIONAL_JUMP)  ; LAB_0051d513
    MOV EAX,0x7fffffff                  ; 0051d4cb
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051d4d0 | DAT_0062201c
    MOV EBX,EAX                         ; 0051d4d3
    SUB EBX,EDX                         ; 0051d4d5
    MOV EDX,EAX                         ; 0051d4d7
    SUB EDX,dword ptr [EDI + 0x8]       ; 0051d4d9 | DAT_0062201c
    MOV EAX,ECX                         ; 0051d4dc
        ;   Label: LAB_0051d4dc
    SUB EDX,EBX                         ; 0051d4de
    IMUL EDX                            ; 0051d4e0
    SHRD EAX,EDX,0x10                   ; 0051d4e2
    MOV EDX,EAX                         ; 0051d4e6
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051d4e8
    MOV EAX,ESI                         ; 0051d4eb
    IMUL EDX                            ; 0051d4ed
    SHRD EAX,EDX,0x10                   ; 0051d4ef
    ADD EBX,EAX                         ; 0051d4f3
    MOV dword ptr [EBP + 0x28],EBX      ; 0051d4f5
    INC dword ptr [0x01e61648]          ; 0051d4f8 | DAT_01e61648
    JMP 0x0051d21d                      ; 0051d4fe
        ;   XREF to: 0051d21d (UNCONDITIONAL_JUMP)  ; LAB_0051d21d
    MOV EAX,0xffffffff                  ; 0051d503
        ;   Label: LAB_0051d503
    XOR EDX,EDX                         ; 0051d508
    DIV ECX                             ; 0051d50a
    MOV ECX,EAX                         ; 0051d50c
    JMP 0x0051d3c1                      ; 0051d50e
        ;   XREF to: 0051d3c1 (UNCONDITIONAL_JUMP)  ; LAB_0051d3c1
    MOV EDX,dword ptr [EDI + 0xc]       ; 0051d513 | DAT_00622020
        ;   Label: LAB_0051d513
    MOV EBX,dword ptr [EBX + 0xc]       ; 0051d516 | DAT_00622020
    JMP 0x0051d4dc                      ; 0051d519
        ;   XREF to: 0051d4dc (UNCONDITIONAL_JUMP)  ; LAB_0051d4dc
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051d51b | DAT_0062201c
        ;   Label: LAB_0051d51b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051d51e | DAT_0062201c
    SUB EAX,EDX                         ; 0051d521
    MOV EDX,EAX                         ; 0051d523
    MOV EAX,ECX                         ; 0051d525
    IMUL EDX                            ; 0051d527
    SHRD EAX,EDX,0x10                   ; 0051d529
    MOV EDX,EAX                         ; 0051d52d
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051d52f
    MOV EAX,ESI                         ; 0051d532
    IMUL EDX                            ; 0051d534
    SHRD EAX,EDX,0x10                   ; 0051d536
    MOV EDX,EAX                         ; 0051d53a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0051d53c | DAT_0062201c
    ADD EAX,EDX                         ; 0051d53f
    MOV dword ptr [EBP + 0x28],EAX      ; 0051d541
    INC dword ptr [0x01e61648]          ; 0051d544 | DAT_01e61648
    JMP 0x0051d21d                      ; 0051d54a
        ;   XREF to: 0051d21d (UNCONDITIONAL_JUMP)  ; LAB_0051d21d
    MOV EBX,dword ptr [ESP + 0x50]      ; 0051d54f
        ;   Label: LAB_0051d54f
    PUSH EBX                            ; 0051d553
    PUSH EAX                            ; 0051d554
    MOV dword ptr [EBP],0xffffffff      ; 0051d555
    CALL FUN_0051c580                   ; 0051d55c
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051d561
    MOV EBP,EAX                         ; 0051d564
    TEST EAX,EAX                        ; 0051d566
    JZ 0x0051d12e                       ; 0051d568
        ;   XREF to: 0051d12e (CONDITIONAL_JUMP)  ; LAB_0051d12e
    JMP 0x0051d293                      ; 0051d56e
        ;   XREF to: 0051d293 (UNCONDITIONAL_JUMP)  ; LAB_0051d293

