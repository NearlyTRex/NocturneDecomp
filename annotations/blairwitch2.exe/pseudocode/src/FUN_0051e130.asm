; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051e130(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00433000 at 004330ee
;
; Referenced Globals:
;   void* switchdataD_0051e110 = 0051e380
;   undefined4 DAT_00622014
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622020
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c37788
;   ... and 9 more
;
; Called Functions:
;   FUN_0051c5c0
;   FUN_0051c630
;   FUN_0051c6b0
;   FUN_0051c720
;   FUN_0051c760
;   FUN_0055d6d7
;   FUN_0055f920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e130
        ;   Label: FUN_0051e130
    PUSH ESI                            ; 0051e131
    PUSH EDI                            ; 0051e132
    PUSH EBP                            ; 0051e133
    SUB ESP,0x58                        ; 0051e134
    CMP dword ptr [0x0070ca7c],0x0      ; 0051e137 | DAT_0070ca7c
    JZ 0x0051e19d                       ; 0051e13e
        ;   XREF to: 0051e19d (CONDITIONAL_JUMP)  ; LAB_0051e19d
    MOV ECX,dword ptr [ESP + 0x70]      ; 0051e140
    CMP ECX,0x3                         ; 0051e144
    JLE 0x0051e21b                      ; 0051e147
        ;   XREF to: 0051e21b (CONDITIONAL_JUMP)  ; LAB_0051e21b
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051e14d
    LEA EBP,[ECX + -0x2]                ; 0051e151
    XOR ESI,ESI                         ; 0051e154
    XOR EDI,EDI                         ; 0051e156
    TEST EBP,EBP                        ; 0051e158
    JLE 0x0051e195                      ; 0051e15a
        ;   XREF to: 0051e195 (CONDITIONAL_JUMP)  ; LAB_0051e195
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 0051e15c
        ;   Label: LAB_0051e15c
    ADD EAX,0x622014                    ; 0051e160 | DAT_00622014
    MOV ECX,dword ptr [EBX + 0x4]       ; 0051e165
    PUSH EAX                            ; 0051e168
    IMUL EAX,ECX,0x30                   ; 0051e169
    ADD EAX,0x622014                    ; 0051e16c | DAT_00622014
    MOV EDX,dword ptr [EBX]             ; 0051e171
    PUSH EAX                            ; 0051e173
    IMUL EAX,EDX,0x30                   ; 0051e174
    ADD EAX,0x622014                    ; 0051e177 | DAT_00622014
    PUSH EAX                            ; 0051e17c
    CALL FUN_0051c760                   ; 0051e17d
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051e182
    TEST EAX,EAX                        ; 0051e185
    JZ 0x0051e215                       ; 0051e187
        ;   XREF to: 0051e215 (CONDITIONAL_JUMP)  ; LAB_0051e215
    INC ESI                             ; 0051e18d
        ;   Label: LAB_0051e18d
    ADD EBX,0x4                         ; 0051e18e
    CMP ESI,EBP                         ; 0051e191
    JL 0x0051e15c                       ; 0051e193
        ;   XREF to: 0051e15c (CONDITIONAL_JUMP)  ; LAB_0051e15c
    CMP EDI,EBP                         ; 0051e195
        ;   Label: LAB_0051e195
    JZ 0x0051e20d                       ; 0051e197
        ;   XREF to: 0051e20d (CONDITIONAL_JUMP)  ; LAB_0051e20d
    CMP dword ptr [0x01c37788],0x0      ; 0051e19d | DAT_01c37788
        ;   Label: LAB_0051e19d
    JZ 0x0051e5ff                       ; 0051e1a4
        ;   XREF to: 0051e5ff (CONDITIONAL_JUMP)  ; LAB_0051e5ff
    CMP dword ptr [0x0070ca74],0x0      ; 0051e1aa | DAT_0070ca74
    JNZ 0x0051e5ff                      ; 0051e1b1
        ;   XREF to: 0051e5ff (CONDITIONAL_JUMP)  ; LAB_0051e5ff
    MOV EBX,dword ptr [ESP + 0x70]      ; 0051e1b7
    XOR EAX,EAX                         ; 0051e1bb
    TEST EBX,EBX                        ; 0051e1bd
    JLE 0x0051e1e0                      ; 0051e1bf
        ;   XREF to: 0051e1e0 (CONDITIONAL_JUMP)  ; LAB_0051e1e0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051e1c1
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051e1c5
    IMUL ECX,dword ptr [EDX],0x30       ; 0051e1c9
        ;   Label: LAB_0051e1c9
    INC EAX                             ; 0051e1cc
    ADD ECX,0x622014                    ; 0051e1cd | DAT_00622014
    ADD EDX,0x4                         ; 0051e1d3
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 0051e1d6
    CMP EAX,EBP                         ; 0051e1da
    JL 0x0051e1c9                       ; 0051e1dc
        ;   XREF to: 0051e1c9 (CONDITIONAL_JUMP)  ; LAB_0051e1c9
    MOV EAX,EAX                         ; 0051e1de
    MOV EAX,[0x01c38b54]                ; 0051e1e0 | DAT_01c38b54
        ;   Label: LAB_0051e1e0
    PUSH EAX                            ; 0051e1e5
    MOV EDX,dword ptr [ESP + 0x74]      ; 0051e1e6
    PUSH EDX                            ; 0051e1ea
    LEA EAX,[ESP + 0x8]                 ; 0051e1eb
    PUSH EAX                            ; 0051e1ef
    CALL FUN_0055f920                   ; 0051e1f0
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f920()
    ADD ESP,0xc                         ; 0051e1f5
    MOV EAX,dword ptr [ESP + 0x70]      ; 0051e1f8
    MOV ECX,dword ptr [0x01e61b58]      ; 0051e1fc | DAT_01e61b58
    SUB EAX,0x2                         ; 0051e202
    ADD ECX,EAX                         ; 0051e205
    MOV dword ptr [0x01e61b58],ECX      ; 0051e207 | DAT_01e61b58
    ADD ESP,0x58                        ; 0051e20d
        ;   Label: LAB_0051e20d
    POP EBP                             ; 0051e210
    POP EDI                             ; 0051e211
    POP ESI                             ; 0051e212
    POP EBX                             ; 0051e213
    RET                                 ; 0051e214
    INC EDI                             ; 0051e215
        ;   Label: LAB_0051e215
    JMP 0x0051e18d                      ; 0051e216
        ;   XREF to: 0051e18d (UNCONDITIONAL_JUMP)  ; LAB_0051e18d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051e21b
        ;   Label: LAB_0051e21b
    MOV EDX,dword ptr [EDX + 0x8]       ; 0051e21f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051e222
    SUB EAX,EDX                         ; 0051e229
    SHL EAX,0x4                         ; 0051e22b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051e22e
    ADD EAX,0x622014                    ; 0051e232 | DAT_00622014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0051e237
    PUSH EAX                            ; 0051e23a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051e23b
    SUB EAX,EDX                         ; 0051e242
    SHL EAX,0x4                         ; 0051e244
    MOV EDX,dword ptr [ESP + 0x70]      ; 0051e247
    ADD EAX,0x622014                    ; 0051e24b | DAT_00622014
    MOV EDX,dword ptr [EDX]             ; 0051e250
    PUSH EAX                            ; 0051e252
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051e253
    SUB EAX,EDX                         ; 0051e25a
    SHL EAX,0x4                         ; 0051e25c
    ADD EAX,0x622014                    ; 0051e25f | DAT_00622014
    PUSH EAX                            ; 0051e264
    CALL FUN_0051c760                   ; 0051e265
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051e26a
    TEST EAX,EAX                        ; 0051e26d
    JNZ 0x0051e19d                      ; 0051e26f
        ;   XREF to: 0051e19d (CONDITIONAL_JUMP)  ; LAB_0051e19d
    ADD ESP,0x58                        ; 0051e275
    POP EBP                             ; 0051e278
    POP EDI                             ; 0051e279
    POP ESI                             ; 0051e27a
    POP EBX                             ; 0051e27b
    RET                                 ; 0051e27c
    MOV ECX,dword ptr [ESP + 0x70]      ; 0051e27d
        ;   Label: caseD_1
    XOR ESI,ESI                         ; 0051e281
    TEST ECX,ECX                        ; 0051e283
    JLE 0x0051e380                      ; 0051e285
        ;   XREF to: 0051e380 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051e28b
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051e28f
    IMUL EAX,dword ptr [EBX],0x30       ; 0051e293
        ;   Label: LAB_0051e293
    PUSH 0x1                            ; 0051e296
    ADD EAX,0x622014                    ; 0051e298 | DAT_00622014
    PUSH EAX                            ; 0051e29d
    ADD EBX,0x4                         ; 0051e29e
    INC ESI                             ; 0051e2a1
    CALL FUN_0051c5c0                   ; 0051e2a2
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c5c0()
    ADD ESP,0x8                         ; 0051e2a7
    CMP ESI,EBP                         ; 0051e2aa
    JL 0x0051e293                       ; 0051e2ac
        ;   XREF to: 0051e293 (CONDITIONAL_JUMP)  ; LAB_0051e293
    JMP 0x0051e380                      ; 0051e2ae
        ;   XREF to: 0051e380 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x70]      ; 0051e2b3
        ;   Label: caseD_2
    XOR EBX,EBX                         ; 0051e2b7
    TEST EDX,EDX                        ; 0051e2b9
    JLE 0x0051e380                      ; 0051e2bb
        ;   XREF to: 0051e380 (CONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0051e2c1
    IMUL EAX,dword ptr [ESI],0x30       ; 0051e2c5
        ;   Label: LAB_0051e2c5
    PUSH 0x1                            ; 0051e2c8
    ADD EAX,0x622014                    ; 0051e2ca | DAT_00622014
    PUSH EAX                            ; 0051e2cf
    CALL FUN_0051c630                   ; 0051e2d0
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c630()
    ADD ESP,0x8                         ; 0051e2d5
    INC EBX                             ; 0051e2d8
    MOV ECX,dword ptr [ESP + 0x70]      ; 0051e2d9
    ADD ESI,0x4                         ; 0051e2dd
    CMP EBX,ECX                         ; 0051e2e0
    JL 0x0051e2c5                       ; 0051e2e2
        ;   XREF to: 0051e2c5 (CONDITIONAL_JUMP)  ; LAB_0051e2c5
    JMP 0x0051e380                      ; 0051e2e4
        ;   XREF to: 0051e380 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [ESP + 0x70]      ; 0051e2e9
        ;   Label: caseD_3
    XOR ESI,ESI                         ; 0051e2ed
    TEST EAX,EAX                        ; 0051e2ef
    JLE 0x0051e380                      ; 0051e2f1
        ;   XREF to: 0051e380 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051e2f7
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051e2fb
    IMUL EAX,dword ptr [EBX],0x30       ; 0051e2ff
        ;   Label: LAB_0051e2ff
    PUSH 0x1                            ; 0051e302
    ADD EAX,0x622014                    ; 0051e304 | DAT_00622014
    PUSH EAX                            ; 0051e309
    ADD EBX,0x4                         ; 0051e30a
    INC ESI                             ; 0051e30d
    CALL FUN_0051c6b0                   ; 0051e30e
        ;   XREF to: 0051c6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c6b0()
    ADD ESP,0x8                         ; 0051e313
    CMP ESI,EBP                         ; 0051e316
    JL 0x0051e2ff                       ; 0051e318
        ;   XREF to: 0051e2ff (CONDITIONAL_JUMP)  ; LAB_0051e2ff
    JMP 0x0051e380                      ; 0051e31a
        ;   XREF to: 0051e380 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051e31f
        ;   Label: caseD_5
    XOR ESI,ESI                         ; 0051e323
    TEST EBP,EBP                        ; 0051e325
    JLE 0x0051e380                      ; 0051e327
        ;   XREF to: 0051e380 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051e329
    IMUL EAX,dword ptr [EBX],0x30       ; 0051e32d
        ;   Label: LAB_0051e32d
    PUSH 0x1                            ; 0051e330
    ADD EAX,0x622014                    ; 0051e332 | DAT_00622014
    PUSH EAX                            ; 0051e337
    CALL FUN_0051c630                   ; 0051e338
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c630()
    ADD ESP,0x8                         ; 0051e33d
    INC ESI                             ; 0051e340
    MOV ECX,dword ptr [ESP + 0x70]      ; 0051e341
    ADD EBX,0x4                         ; 0051e345
    CMP ESI,ECX                         ; 0051e348
    JL 0x0051e32d                       ; 0051e34a
        ;   XREF to: 0051e32d (CONDITIONAL_JUMP)  ; LAB_0051e32d
    JMP 0x0051e380                      ; 0051e34c
        ;   XREF to: 0051e380 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [ESP + 0x70]      ; 0051e34e
        ;   Label: caseD_6
    XOR ESI,ESI                         ; 0051e352
    TEST EDI,EDI                        ; 0051e354
    JLE 0x0051e380                      ; 0051e356
        ;   XREF to: 0051e380 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051e358
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051e35c
    IMUL EAX,dword ptr [EBX],0x30       ; 0051e360
        ;   Label: LAB_0051e360
    PUSH 0x1                            ; 0051e363
    ADD EAX,0x622014                    ; 0051e365 | DAT_00622014
    PUSH EAX                            ; 0051e36a
    ADD EBX,0x4                         ; 0051e36b
    INC ESI                             ; 0051e36e
    CALL FUN_0051c720                   ; 0051e36f
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c720()
    ADD ESP,0x8                         ; 0051e374
    CMP ESI,EBP                         ; 0051e377
    JL 0x0051e360                       ; 0051e379
        ;   XREF to: 0051e360 (CONDITIONAL_JUMP)  ; LAB_0051e360
    LEA EAX,[EAX]                       ; 0051e37b
    MOV ECX,ECX                         ; 0051e37e
    MOV EAX,0x4b0                       ; 0051e380
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 0051e385
    MOV ESI,dword ptr [ESP + 0x70]      ; 0051e387
    MOV dword ptr [0x01e62064],EDX      ; 0051e38b | DAT_01e62064
    MOV dword ptr [0x01e61b5c],EDX      ; 0051e391 | DAT_01e61b5c
    MOV dword ptr [ESP + 0x4c],EDX      ; 0051e397
    MOV [0x01e62060],EAX                ; 0051e39b | DAT_01e62060
    TEST ESI,ESI                        ; 0051e3a0
    JLE 0x0051e40e                      ; 0051e3a2
        ;   XREF to: 0051e40e (CONDITIONAL_JUMP)  ; LAB_0051e40e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0051e3a4
    MOV dword ptr [ESP + 0x44],EAX      ; 0051e3a8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051e3ac
        ;   Label: LAB_0051e3ac
    MOV EDI,dword ptr [ESP + 0x70]      ; 0051e3b0
    INC EAX                             ; 0051e3b4
    CMP EAX,EDI                         ; 0051e3b5
    JL 0x0051e3bb                       ; 0051e3b7
        ;   XREF to: 0051e3bb (CONDITIONAL_JUMP)  ; LAB_0051e3bb
    XOR EAX,EAX                         ; 0051e3b9
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0051e3bb
        ;   Label: LAB_0051e3bb
    SHL EAX,0x2                         ; 0051e3bf
    ADD EAX,EBP                         ; 0051e3c2
    IMUL ECX,dword ptr [EAX],0x30       ; 0051e3c4
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051e3c7
    IMUL ESI,dword ptr [EAX],0x30       ; 0051e3cb
    ADD ECX,0x622014                    ; 0051e3ce | DAT_00622014
    ADD ESI,0x622014                    ; 0051e3d4 | DAT_00622014
    MOV EDI,ECX                         ; 0051e3da
    MOV EAX,dword ptr [ECX + 0x14]      ; 0051e3dc | DAT_00622028
    MOV EDX,dword ptr [ESI + 0x14]      ; 0051e3df | DAT_00622028
    SAR EAX,0x10                        ; 0051e3e2
    SAR EDX,0x10                        ; 0051e3e5
    MOV EBX,ESI                         ; 0051e3e8
    CMP EDX,EAX                         ; 0051e3ea
    JNZ 0x0051e621                      ; 0051e3ec
        ;   XREF to: 0051e621 (CONDITIONAL_JUMP)  ; LAB_0051e621
    MOV EDI,dword ptr [ESP + 0x44]      ; 0051e3f2
        ;   Label: LAB_0051e3f2
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0051e3f6
    MOV EDX,dword ptr [ESP + 0x70]      ; 0051e3fa
    ADD EDI,0x4                         ; 0051e3fe
    INC EBP                             ; 0051e401
    MOV dword ptr [ESP + 0x44],EDI      ; 0051e402
    MOV dword ptr [ESP + 0x4c],EBP      ; 0051e406
    CMP EBP,EDX                         ; 0051e40a
    JL 0x0051e3ac                       ; 0051e40c
        ;   XREF to: 0051e3ac (CONDITIONAL_JUMP)  ; LAB_0051e3ac
    MOV EAX,0x1e61b60                   ; 0051e40e
        ;   Label: LAB_0051e40e
    MOV ESI,dword ptr [0x01e61b5c]      ; 0051e413 | DAT_01e61b5c
    MOV EBX,dword ptr [0x01e62060]      ; 0051e419 | DAT_01e62060
    XOR ECX,ECX                         ; 0051e41f
    TEST ESI,ESI                        ; 0051e421
    JLE 0x0051e88f                      ; 0051e423
        ;   XREF to: 0051e88f (CONDITIONAL_JUMP)  ; LAB_0051e88f
    MOV EDX,dword ptr [0x01e61b5c]      ; 0051e429 | DAT_01e61b5c
    CMP EBX,dword ptr [EAX]             ; 0051e42f | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051e42f
    JNZ 0x0051e883                      ; 0051e431
        ;   XREF to: 0051e883 (CONDITIONAL_JUMP)  ; LAB_0051e883
    TEST EAX,EAX                        ; 0051e437
    JZ 0x0051e883                       ; 0051e439
        ;   XREF to: 0051e883 (CONDITIONAL_JUMP)  ; LAB_0051e883
    MOV dword ptr [ESP + 0x54],EAX      ; 0051e43f | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051e43f
    TEST EAX,EAX                        ; 0051e443
    JZ 0x0051e20d                       ; 0051e445
        ;   XREF to: 0051e20d (CONDITIONAL_JUMP)  ; LAB_0051e20d
    MOV EDI,dword ptr [0x01e61b5c]      ; 0051e44b | DAT_01e61b5c
    MOV ECX,dword ptr [0x01e62060]      ; 0051e451 | DAT_01e62060
    MOV EBX,EAX                         ; 0051e457
    XOR EDX,EDX                         ; 0051e459
    MOV EAX,0x1e61b60                   ; 0051e45b
    TEST EDI,EDI                        ; 0051e460
    JLE 0x0051e8a2                      ; 0051e462
        ;   XREF to: 0051e8a2 (CONDITIONAL_JUMP)  ; LAB_0051e8a2
    MOV EBP,dword ptr [0x01e61b5c]      ; 0051e468 | DAT_01e61b5c
    CMP ECX,dword ptr [EAX]             ; 0051e46e | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051e46e
    JNZ 0x0051e896                      ; 0051e470
        ;   XREF to: 0051e896 (CONDITIONAL_JUMP)  ; LAB_0051e896
    CMP EAX,EBX                         ; 0051e476
    JZ 0x0051e896                       ; 0051e478
        ;   XREF to: 0051e896 (CONDITIONAL_JUMP)  ; LAB_0051e896
    MOV EBP,EAX                         ; 0051e47e
        ;   Label: LAB_0051e47e
    TEST EAX,EAX                        ; 0051e480
    JZ 0x0051e20d                       ; 0051e482
        ;   XREF to: 0051e20d (CONDITIONAL_JUMP)  ; LAB_0051e20d
    MOV EAX,[0x01e62060]                ; 0051e488 | DAT_01e62060
    MOV dword ptr [ESP + 0x50],EAX      ; 0051e48d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051e491
        ;   Label: LAB_0051e491
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051e495
    CMP EAX,dword ptr [EDX + 0x4]       ; 0051e499
    JL 0x0051e4df                       ; 0051e49c
        ;   XREF to: 0051e4df (CONDITIONAL_JUMP)  ; LAB_0051e4df
    MOV ESI,dword ptr [0x01e61b5c]      ; 0051e49e | DAT_01e61b5c
    MOV EBX,EAX                         ; 0051e4a4
    MOV ECX,EBP                         ; 0051e4a6
    MOV dword ptr [EDX],0xffffffff      ; 0051e4a8
    MOV EAX,0x1e61b60                   ; 0051e4ae
    XOR EDX,EDX                         ; 0051e4b3
    TEST ESI,ESI                        ; 0051e4b5
    JLE 0x0051e8b5                      ; 0051e4b7
        ;   XREF to: 0051e8b5 (CONDITIONAL_JUMP)  ; LAB_0051e8b5
    MOV EDI,dword ptr [0x01e61b5c]      ; 0051e4bd | DAT_01e61b5c
    CMP EBX,dword ptr [EAX]             ; 0051e4c3 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051e4c3
    JNZ 0x0051e8a9                      ; 0051e4c5
        ;   XREF to: 0051e8a9 (CONDITIONAL_JUMP)  ; LAB_0051e8a9
    CMP EAX,ECX                         ; 0051e4cb
    JZ 0x0051e8a9                       ; 0051e4cd
        ;   XREF to: 0051e8a9 (CONDITIONAL_JUMP)  ; LAB_0051e8a9
    MOV dword ptr [ESP + 0x54],EAX      ; 0051e4d3 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051e4d3
    TEST EAX,EAX                        ; 0051e4d7
    JZ 0x0051e20d                       ; 0051e4d9
        ;   XREF to: 0051e20d (CONDITIONAL_JUMP)  ; LAB_0051e20d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051e4df
        ;   Label: LAB_0051e4df
    CMP EAX,dword ptr [EBP + 0x4]       ; 0051e4e3
    JL 0x0051e52a                       ; 0051e4e6
        ;   XREF to: 0051e52a (CONDITIONAL_JUMP)  ; LAB_0051e52a
    MOV EBX,dword ptr [ESP + 0x54]      ; 0051e4e8
    MOV ECX,EAX                         ; 0051e4ec
    MOV dword ptr [EBP],0xffffffff      ; 0051e4ee
    XOR EDX,EDX                         ; 0051e4f5
    MOV EBP,dword ptr [0x01e61b5c]      ; 0051e4f7 | DAT_01e61b5c
    MOV EAX,0x1e61b60                   ; 0051e4fd
    TEST EBP,EBP                        ; 0051e502
    JLE 0x0051e8c8                      ; 0051e504
        ;   XREF to: 0051e8c8 (CONDITIONAL_JUMP)  ; LAB_0051e8c8
    MOV ESI,dword ptr [0x01e61b5c]      ; 0051e50a | DAT_01e61b5c
    CMP ECX,dword ptr [EAX]             ; 0051e510 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051e510
    JNZ 0x0051e8bc                      ; 0051e512
        ;   XREF to: 0051e8bc (CONDITIONAL_JUMP)  ; LAB_0051e8bc
    CMP EAX,EBX                         ; 0051e518
    JZ 0x0051e8bc                       ; 0051e51a
        ;   XREF to: 0051e8bc (CONDITIONAL_JUMP)  ; LAB_0051e8bc
    MOV EBP,EAX                         ; 0051e520
        ;   Label: LAB_0051e520
    TEST EAX,EAX                        ; 0051e522
    JZ 0x0051e20d                       ; 0051e524
        ;   XREF to: 0051e20d (CONDITIONAL_JUMP)  ; LAB_0051e20d
    MOV ESI,dword ptr [ESP + 0x54]      ; 0051e52a
        ;   Label: LAB_0051e52a
    MOV EBX,dword ptr [ESP + 0x50]      ; 0051e52e
    MOV EDI,EBP                         ; 0051e532
    CALL FUN_0055d6d7                   ; 0051e534
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d6d7()
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051e539
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051e53d
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051e541
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051e544
    MOV EBX,dword ptr [EDX + 0x18]      ; 0051e547
    MOV ESI,dword ptr [EDX + 0x20]      ; 0051e54a
    MOV EDI,dword ptr [EDX + 0x28]      ; 0051e54d
    ADD ECX,EAX                         ; 0051e550
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0051e552
    MOV dword ptr [EDX + 0x8],ECX       ; 0051e555
    ADD EBX,EAX                         ; 0051e558
    MOV EAX,dword ptr [EDX + 0x24]      ; 0051e55a
    MOV dword ptr [EDX + 0x18],EBX      ; 0051e55d
    ADD ESI,EAX                         ; 0051e560
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0051e562
    MOV dword ptr [EDX + 0x20],ESI      ; 0051e565
    ADD EDI,EAX                         ; 0051e568
    MOV dword ptr [EDX + 0x28],EDI      ; 0051e56a
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051e56d
    MOV EBX,dword ptr [EDX + 0x38]      ; 0051e570
    MOV ESI,dword ptr [EDX + 0x40]      ; 0051e573
    MOV EAX,dword ptr [EDX + 0x14]      ; 0051e576
    MOV EDI,dword ptr [EDX + 0x30]      ; 0051e579
    ADD ECX,EAX                         ; 0051e57c
    MOV EAX,dword ptr [EDX + 0x3c]      ; 0051e57e
    MOV dword ptr [EDX + 0x10],ECX      ; 0051e581
    ADD EBX,EAX                         ; 0051e584
    MOV EAX,dword ptr [EDX + 0x44]      ; 0051e586
    MOV dword ptr [EDX + 0x38],EBX      ; 0051e589
    ADD ESI,EAX                         ; 0051e58c
    MOV EAX,dword ptr [EDX + 0x34]      ; 0051e58e
    MOV dword ptr [EDX + 0x40],ESI      ; 0051e591
    ADD EDI,EAX                         ; 0051e594
    MOV dword ptr [EDX + 0x30],EDI      ; 0051e596
    MOV EAX,dword ptr [EBP + 0xc]       ; 0051e599
    MOV EDX,dword ptr [EBP + 0x8]       ; 0051e59c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051e59f
    MOV EBX,dword ptr [EBP + 0x20]      ; 0051e5a2
    ADD EDX,EAX                         ; 0051e5a5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051e5a7
    MOV dword ptr [EBP + 0x8],EDX       ; 0051e5aa
    ADD ECX,EAX                         ; 0051e5ad
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051e5af
    MOV dword ptr [EBP + 0x18],ECX      ; 0051e5b2
    ADD EBX,EAX                         ; 0051e5b5
    MOV dword ptr [EBP + 0x20],EBX      ; 0051e5b7
    MOV ESI,dword ptr [EBP + 0x28]      ; 0051e5ba
    MOV EDI,dword ptr [EBP + 0x10]      ; 0051e5bd
    MOV EDX,dword ptr [EBP + 0x38]      ; 0051e5c0
    MOV ECX,dword ptr [EBP + 0x40]      ; 0051e5c3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051e5c6
    MOV EBX,dword ptr [EBP + 0x30]      ; 0051e5c9
    ADD ESI,EAX                         ; 0051e5cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e5ce
    MOV dword ptr [EBP + 0x28],ESI      ; 0051e5d1
    MOV ESI,dword ptr [ESP + 0x50]      ; 0051e5d4
    ADD EDI,EAX                         ; 0051e5d8
    INC ESI                             ; 0051e5da
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0051e5db
    MOV dword ptr [EBP + 0x10],EDI      ; 0051e5de
    ADD EDX,EAX                         ; 0051e5e1
    MOV EAX,dword ptr [EBP + 0x44]      ; 0051e5e3
    MOV dword ptr [EBP + 0x38],EDX      ; 0051e5e6
    ADD ECX,EAX                         ; 0051e5e9
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051e5eb
    MOV dword ptr [EBP + 0x40],ECX      ; 0051e5ee
    ADD EBX,EAX                         ; 0051e5f1
    MOV dword ptr [ESP + 0x50],ESI      ; 0051e5f3
    MOV dword ptr [EBP + 0x30],EBX      ; 0051e5f7
    JMP 0x0051e491                      ; 0051e5fa
        ;   XREF to: 0051e491 (UNCONDITIONAL_JUMP)  ; LAB_0051e491
    MOV ESI,dword ptr [0x01e61b58]      ; 0051e5ff | DAT_01e61b58
        ;   Label: LAB_0051e5ff
    INC ESI                             ; 0051e605
    MOV EAX,[0x01c38b58]                ; 0051e606 | DAT_01c38b58
    MOV dword ptr [0x01e61b58],ESI      ; 0051e60b | DAT_01e61b58
    CMP EAX,0x6                         ; 0051e611
    JA 0x0051e380                       ; 0051e614
        ;   XREF to: 0051e380 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x51e110]  ; 0051e61a | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [ESI + 0x14]      ; 0051e621 | DAT_00622028
        ;   Label: LAB_0051e621
    CMP EBP,dword ptr [ECX + 0x14]      ; 0051e624 | DAT_00622028
    JLE 0x0051e633                      ; 0051e627
        ;   XREF to: 0051e633 (CONDITIONAL_JUMP)  ; LAB_0051e633
    MOV EBX,ECX                         ; 0051e629
    MOV EDI,ESI                         ; 0051e62b
    MOV ECX,EDX                         ; 0051e62d
    MOV EDX,EAX                         ; 0051e62f
    MOV EAX,ECX                         ; 0051e631
    IMUL EBP,dword ptr [0x01e61b5c],0x50 ; 0051e633 | DAT_01e61b5c
        ;   Label: LAB_0051e633
    ADD EBP,0x1e61b60                   ; 0051e63a
    MOV dword ptr [EBP],EDX             ; 0051e640 | DAT_01e61b60
    MOV ECX,dword ptr [0x01e62060]      ; 0051e643 | DAT_01e62060
    MOV dword ptr [EBP + 0x4],EAX       ; 0051e649
    CMP EDX,ECX                         ; 0051e64c
    JGE 0x0051e656                      ; 0051e64e
        ;   XREF to: 0051e656 (CONDITIONAL_JUMP)  ; LAB_0051e656
    MOV dword ptr [0x01e62060],EDX      ; 0051e650 | DAT_01e62060
    CMP EAX,dword ptr [0x01e62064]      ; 0051e656 | DAT_01e62064
        ;   Label: LAB_0051e656
    JLE 0x0051e663                      ; 0051e65c
        ;   XREF to: 0051e663 (CONDITIONAL_JUMP)  ; LAB_0051e663
    MOV [0x01e62064],EAX                ; 0051e65e | DAT_01e62064
    MOV EAX,dword ptr [EBX + 0x14]      ; 0051e663 | DAT_00622028
        ;   Label: LAB_0051e663
    MOV ECX,dword ptr [EDI + 0x14]      ; 0051e666 | DAT_00622028
    SUB ECX,EAX                         ; 0051e669
    CMP ECX,0x10000                     ; 0051e66b
    JNC 0x0051e830                      ; 0051e671
        ;   XREF to: 0051e830 (CONDITIONAL_JUMP)  ; LAB_0051e830
    XOR ECX,ECX                         ; 0051e677
    MOV EAX,dword ptr [EDI + 0x10]      ; 0051e679 | DAT_00622024
        ;   Label: LAB_0051e679
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051e67c | DAT_00622024
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051e67f | DAT_00622028
    SUB EAX,EDX                         ; 0051e682
    AND ESI,0xffff                      ; 0051e684
    MOV EDX,EAX                         ; 0051e68a
    MOV EAX,ECX                         ; 0051e68c
    XOR SI,0xffff                       ; 0051e68e
    IMUL EDX                            ; 0051e692
    SHRD EAX,EDX,0x10                   ; 0051e694
    MOV EDX,EAX                         ; 0051e698
    MOV dword ptr [EBP + 0xc],EAX       ; 0051e69a
    MOV EAX,ESI                         ; 0051e69d
    IMUL EDX                            ; 0051e69f
    SHRD EAX,EDX,0x10                   ; 0051e6a1
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e6a5
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e6a9
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051e6ad | DAT_00622024
    ADD EAX,EDX                         ; 0051e6b0
    MOV dword ptr [EBP + 0x8],EAX       ; 0051e6b2
    MOV EAX,dword ptr [EDI + 0x18]      ; 0051e6b5 | DAT_0062202c
    MOV EDX,dword ptr [EBX + 0x18]      ; 0051e6b8 | DAT_0062202c
    SUB EAX,EDX                         ; 0051e6bb
    MOV EDX,EAX                         ; 0051e6bd
    MOV EAX,ECX                         ; 0051e6bf
    IMUL EDX                            ; 0051e6c1
    SHRD EAX,EDX,0x10                   ; 0051e6c3
    MOV EDX,EAX                         ; 0051e6c7
    MOV dword ptr [EBP + 0x1c],EAX      ; 0051e6c9
    MOV EAX,ESI                         ; 0051e6cc
    IMUL EDX                            ; 0051e6ce
    SHRD EAX,EDX,0x10                   ; 0051e6d0
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e6d4
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e6d8
    MOV EAX,dword ptr [EBX + 0x18]      ; 0051e6dc | DAT_0062202c
    ADD EAX,EDX                         ; 0051e6df
    MOV dword ptr [EBP + 0x18],EAX      ; 0051e6e1
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051e6e4 | DAT_00622030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051e6e7 | DAT_00622030
    SUB EAX,EDX                         ; 0051e6ea
    MOV EDX,EAX                         ; 0051e6ec
    MOV EAX,ECX                         ; 0051e6ee
    IMUL EDX                            ; 0051e6f0
    SHRD EAX,EDX,0x10                   ; 0051e6f2
    MOV EDX,EAX                         ; 0051e6f6
    MOV dword ptr [EBP + 0x24],EAX      ; 0051e6f8
    MOV EAX,ESI                         ; 0051e6fb
    IMUL EDX                            ; 0051e6fd
    SHRD EAX,EDX,0x10                   ; 0051e6ff
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e703
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e707
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051e70b | DAT_00622030
    ADD EAX,EDX                         ; 0051e70e
    MOV dword ptr [EBP + 0x20],EAX      ; 0051e710
    MOV EAX,dword ptr [EDI + 0x20]      ; 0051e713 | DAT_00622034
    MOV EDX,dword ptr [EBX + 0x20]      ; 0051e716 | DAT_00622034
    SUB EAX,EDX                         ; 0051e719
    MOV EDX,EAX                         ; 0051e71b
    MOV EAX,ECX                         ; 0051e71d
    IMUL EDX                            ; 0051e71f
    SHRD EAX,EDX,0x10                   ; 0051e721
    MOV EDX,EAX                         ; 0051e725
    MOV dword ptr [EBP + 0x14],EAX      ; 0051e727
    MOV EAX,ESI                         ; 0051e72a
    IMUL EDX                            ; 0051e72c
    SHRD EAX,EDX,0x10                   ; 0051e72e
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e732
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e736
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051e73a | DAT_00622034
    ADD EAX,EDX                         ; 0051e73d
    MOV dword ptr [EBP + 0x10],EAX      ; 0051e73f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0051e742 | DAT_00622040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0051e745 | DAT_00622040
    SUB EAX,EDX                         ; 0051e748
    MOV EDX,EAX                         ; 0051e74a
    MOV EAX,ECX                         ; 0051e74c
    IMUL EDX                            ; 0051e74e
    SHRD EAX,EDX,0x10                   ; 0051e750
    MOV EDX,EAX                         ; 0051e754
    MOV dword ptr [EBP + 0x34],EAX      ; 0051e756
    MOV EAX,ESI                         ; 0051e759
    IMUL EDX                            ; 0051e75b
    SHRD EAX,EDX,0x10                   ; 0051e75d
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e761
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e765
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0051e769 | DAT_00622040
    ADD EAX,EDX                         ; 0051e76c
    MOV dword ptr [EBP + 0x30],EAX      ; 0051e76e
    CMP dword ptr [0x01c38b58],0x1      ; 0051e771 | DAT_01c38b58
    JNZ 0x0051e84f                      ; 0051e778
        ;   XREF to: 0051e84f (CONDITIONAL_JUMP)  ; LAB_0051e84f
    CMP dword ptr [0x01c38b50],0x0      ; 0051e77e | DAT_01c38b50
    JZ 0x0051e840                       ; 0051e785
        ;   XREF to: 0051e840 (CONDITIONAL_JUMP)  ; LAB_0051e840
    MOV EAX,0x7fffffff                  ; 0051e78b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051e790 | DAT_0062201c
    SUB EAX,EDX                         ; 0051e793
    MOV dword ptr [ESP + 0x48],EAX      ; 0051e795
    MOV EDX,dword ptr [EDI + 0x8]       ; 0051e799 | DAT_0062201c
    MOV EAX,0x7fffffff                  ; 0051e79c
    SUB EAX,EDX                         ; 0051e7a1
    MOV EDX,dword ptr [ESP + 0x48]      ; 0051e7a3
        ;   Label: LAB_0051e7a3
    SUB EAX,EDX                         ; 0051e7a7
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e7a9
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e7ad
    MOV EAX,ECX                         ; 0051e7b1
    IMUL EDX                            ; 0051e7b3
    SHRD EAX,EDX,0x10                   ; 0051e7b5
    MOV EDX,EAX                         ; 0051e7b9
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051e7bb
    MOV EAX,ESI                         ; 0051e7be
    IMUL EDX                            ; 0051e7c0
    SHRD EAX,EDX,0x10                   ; 0051e7c2
    MOV EDX,dword ptr [ESP + 0x48]      ; 0051e7c6
    ADD EDX,EAX                         ; 0051e7ca
    MOV dword ptr [EBP + 0x28],EDX      ; 0051e7cc
    MOV EAX,dword ptr [EDI + 0x24]      ; 0051e7cf | DAT_00622038
        ;   Label: LAB_0051e7cf
    MOV EDX,dword ptr [EBX + 0x24]      ; 0051e7d2 | DAT_00622038
    SUB EAX,EDX                         ; 0051e7d5
    MOV EDX,EAX                         ; 0051e7d7
    MOV EAX,ECX                         ; 0051e7d9
    IMUL EDX                            ; 0051e7db
    SHRD EAX,EDX,0x10                   ; 0051e7dd
    MOV EDX,EAX                         ; 0051e7e1
    MOV dword ptr [EBP + 0x3c],EAX      ; 0051e7e3
    MOV EAX,ESI                         ; 0051e7e6
    IMUL EDX                            ; 0051e7e8
    SHRD EAX,EDX,0x10                   ; 0051e7ea
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e7ee
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e7f2
    MOV EAX,dword ptr [EBX + 0x24]      ; 0051e7f6 | DAT_00622038
    ADD EAX,EDX                         ; 0051e7f9
    MOV dword ptr [EBP + 0x38],EAX      ; 0051e7fb
    MOV EDX,dword ptr [EDI + 0x28]      ; 0051e7fe | DAT_0062203c
    MOV EDI,dword ptr [EBX + 0x28]      ; 0051e801 | DAT_0062203c
    MOV EAX,ECX                         ; 0051e804
    SUB EDX,EDI                         ; 0051e806
    IMUL EDX                            ; 0051e808
    SHRD EAX,EDX,0x10                   ; 0051e80a
    MOV EDX,EAX                         ; 0051e80e
    MOV dword ptr [EBP + 0x44],EAX      ; 0051e810
    MOV EAX,ESI                         ; 0051e813
    IMUL EDX                            ; 0051e815
    SHRD EAX,EDX,0x10                   ; 0051e817
    MOV EDX,EAX                         ; 0051e81b
    MOV EAX,dword ptr [EBX + 0x28]      ; 0051e81d | DAT_0062203c
    ADD EAX,EDX                         ; 0051e820
    MOV dword ptr [EBP + 0x40],EAX      ; 0051e822
    INC dword ptr [0x01e61b5c]          ; 0051e825 | DAT_01e61b5c
    JMP 0x0051e3f2                      ; 0051e82b
        ;   XREF to: 0051e3f2 (UNCONDITIONAL_JUMP)  ; LAB_0051e3f2
    MOV EAX,0xffffffff                  ; 0051e830
        ;   Label: LAB_0051e830
    XOR EDX,EDX                         ; 0051e835
    DIV ECX                             ; 0051e837
    MOV ECX,EAX                         ; 0051e839
    JMP 0x0051e679                      ; 0051e83b
        ;   XREF to: 0051e679 (UNCONDITIONAL_JUMP)  ; LAB_0051e679
    MOV EAX,dword ptr [EBX + 0xc]       ; 0051e840 | DAT_00622020
        ;   Label: LAB_0051e840
    MOV dword ptr [ESP + 0x48],EAX      ; 0051e843
    MOV EAX,dword ptr [EDI + 0xc]       ; 0051e847 | DAT_00622020
    JMP 0x0051e7a3                      ; 0051e84a
        ;   XREF to: 0051e7a3 (UNCONDITIONAL_JUMP)  ; LAB_0051e7a3
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051e84f | DAT_0062201c
        ;   Label: LAB_0051e84f
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051e852 | DAT_0062201c
    SUB EAX,EDX                         ; 0051e855
    MOV EDX,EAX                         ; 0051e857
    MOV EAX,ECX                         ; 0051e859
    IMUL EDX                            ; 0051e85b
    SHRD EAX,EDX,0x10                   ; 0051e85d
    MOV EDX,EAX                         ; 0051e861
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051e863
    MOV EAX,ESI                         ; 0051e866
    IMUL EDX                            ; 0051e868
    SHRD EAX,EDX,0x10                   ; 0051e86a
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e86e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e872
    MOV EAX,dword ptr [EBX + 0x8]       ; 0051e876 | DAT_0062201c
    ADD EAX,EDX                         ; 0051e879
    MOV dword ptr [EBP + 0x28],EAX      ; 0051e87b
    JMP 0x0051e7cf                      ; 0051e87e
        ;   XREF to: 0051e7cf (UNCONDITIONAL_JUMP)  ; LAB_0051e7cf
    INC ECX                             ; 0051e883
        ;   Label: LAB_0051e883
    ADD EAX,0x50                        ; 0051e884
    CMP ECX,EDX                         ; 0051e887
    JL 0x0051e42f                       ; 0051e889
        ;   XREF to: 0051e42f (CONDITIONAL_JUMP)  ; LAB_0051e42f
    XOR EAX,EAX                         ; 0051e88f
        ;   Label: LAB_0051e88f
    JMP 0x0051e43f                      ; 0051e891
        ;   XREF to: 0051e43f (UNCONDITIONAL_JUMP)  ; LAB_0051e43f
    INC EDX                             ; 0051e896
        ;   Label: LAB_0051e896
    ADD EAX,0x50                        ; 0051e897
    CMP EDX,EBP                         ; 0051e89a
    JL 0x0051e46e                       ; 0051e89c
        ;   XREF to: 0051e46e (CONDITIONAL_JUMP)  ; LAB_0051e46e
    XOR EAX,EAX                         ; 0051e8a2
        ;   Label: LAB_0051e8a2
    JMP 0x0051e47e                      ; 0051e8a4
        ;   XREF to: 0051e47e (UNCONDITIONAL_JUMP)  ; LAB_0051e47e
    INC EDX                             ; 0051e8a9
        ;   Label: LAB_0051e8a9
    ADD EAX,0x50                        ; 0051e8aa
    CMP EDX,EDI                         ; 0051e8ad
    JL 0x0051e4c3                       ; 0051e8af
        ;   XREF to: 0051e4c3 (CONDITIONAL_JUMP)  ; LAB_0051e4c3
    XOR EAX,EAX                         ; 0051e8b5
        ;   Label: LAB_0051e8b5
    JMP 0x0051e4d3                      ; 0051e8b7
        ;   XREF to: 0051e4d3 (UNCONDITIONAL_JUMP)  ; LAB_0051e4d3
    INC EDX                             ; 0051e8bc
        ;   Label: LAB_0051e8bc
    ADD EAX,0x50                        ; 0051e8bd
    CMP EDX,ESI                         ; 0051e8c0
    JL 0x0051e510                       ; 0051e8c2
        ;   XREF to: 0051e510 (CONDITIONAL_JUMP)  ; LAB_0051e510
    XOR EAX,EAX                         ; 0051e8c8
        ;   Label: LAB_0051e8c8
    JMP 0x0051e520                      ; 0051e8ca
        ;   XREF to: 0051e520 (UNCONDITIONAL_JUMP)  ; LAB_0051e520

