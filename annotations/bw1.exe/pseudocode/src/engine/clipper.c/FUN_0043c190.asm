; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043c190(uint param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
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
;   FUN_0043cbf0 at 0043cc04
;
; Referenced Globals:
;   void* switchdataD_0043c13c = 0043c412
;   void* PTR_caseD_1_0043c140 = 0043c6dc
;   void* PTR_caseD_3_0043c148 = 0043c425
;   void* switchdataD_0043c14c = 0043c4af
;   void* PTR_caseD_1_0043c150 = 0043c7b5
;   void* PTR_caseD_3_0043c158 = 0043c4b4
;   void* switchdataD_0043c15c = 0043c548
;   void* PTR_caseD_1_0043c160 = 0043c864
;   void* PTR_caseD_3_0043c168 = 0043c54d
;   void* switchdataD_0043c16c = 0043c5eb
;   void* PTR_caseD_1_0043c170 = 0043c913
;   void* PTR_caseD_3_0043c178 = 0043c5f0
;   void* switchdataD_0043c17c = 0043cab2
;   void* PTR_caseD_3_0043c188 = 0043caf7
;   TerminatedCString s_engine_clipper_c_005d66da
;   ... and 36 more
;
; Called Functions:
;   FUN_0043b4b0
;   FUN_0043b5b0
;   FUN_0043b6b0
;   FUN_0043b7b0
;   FUN_0043b8b0
;   FUN_005030e0
;   FUN_0053dd60
;   FUN_00582370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c190
        ;   Label: FUN_0043c190
    PUSH ESI                            ; 0043c191
    PUSH EDI                            ; 0043c192
    PUSH EBP                            ; 0043c193
    SUB ESP,0x13c                       ; 0043c194
    MOV EBP,dword ptr [ESP + 0x150]     ; 0043c19a
    MOV ECX,0xffffffff                  ; 0043c1a1
    XOR EAX,EAX                         ; 0043c1a6
    XOR ESI,ESI                         ; 0043c1a8
    TEST EBP,EBP                        ; 0043c1aa
    JLE 0x0043c1d1                      ; 0043c1ac
        ;   XREF to: 0043c1d1 (CONDITIONAL_JUMP)  ; LAB_0043c1d1
    MOV EDX,dword ptr [ESP + 0x154]     ; 0043c1ae
    IMUL EBX,dword ptr [EDX],0x30       ; 0043c1b5
        ;   Label: LAB_0043c1b5
    MOV EBX,dword ptr [EBX + 0x629024]  ; 0043c1b8 | DAT_00629024
    TEST EBX,0x80000000                 ; 0043c1be
    JZ 0x0043c1c7                       ; 0043c1c4
        ;   XREF to: 0043c1c7 (CONDITIONAL_JUMP)  ; LAB_0043c1c7
    INC ESI                             ; 0043c1c6
    ADD EDX,0x4                         ; 0043c1c7
        ;   Label: LAB_0043c1c7
    INC EAX                             ; 0043c1ca
    AND ECX,EBX                         ; 0043c1cb
    CMP EAX,EBP                         ; 0043c1cd
    JL 0x0043c1b5                       ; 0043c1cf
        ;   XREF to: 0043c1b5 (CONDITIONAL_JUMP)  ; LAB_0043c1b5
    CMP ESI,EBP                         ; 0043c1d1
        ;   Label: LAB_0043c1d1
    JNZ 0x0043c1de                      ; 0043c1d3
        ;   XREF to: 0043c1de (CONDITIONAL_JUMP)  ; LAB_0043c1de
    TEST CL,0xff                        ; 0043c1d5
    JNZ 0x0043c2a0                      ; 0043c1d8
        ;   XREF to: 0043c2a0 (CONDITIONAL_JUMP)  ; LAB_0043c2a0
    TEST ESI,ESI                        ; 0043c1de
        ;   Label: LAB_0043c1de
    JNZ 0x0043c38d                      ; 0043c1e0
        ;   XREF to: 0043c38d (CONDITIONAL_JUMP)  ; LAB_0043c38d
    CMP dword ptr [0x01c50948],0x0      ; 0043c1e6 | DAT_01c50948
    JZ 0x0043c308                       ; 0043c1ed
        ;   XREF to: 0043c308 (CONDITIONAL_JUMP)  ; LAB_0043c308
    CMP dword ptr [0x00713a74],0x0      ; 0043c1f3 | DAT_00713a74
    JNZ 0x0043c308                      ; 0043c1fa
        ;   XREF to: 0043c308 (CONDITIONAL_JUMP)  ; LAB_0043c308
    XOR EAX,EAX                         ; 0043c200
    TEST EBP,EBP                        ; 0043c202
    JLE 0x0043c230                      ; 0043c204
        ;   XREF to: 0043c230 (CONDITIONAL_JUMP)  ; LAB_0043c230
    MOV EBX,dword ptr [ESP + 0x154]     ; 0043c206
    IMUL EDX,dword ptr [EBX],0x30       ; 0043c20d
        ;   Label: LAB_0043c20d
    INC EAX                             ; 0043c210
    ADD EDX,0x629014                    ; 0043c211 | DAT_00629014
    ADD EBX,0x4                         ; 0043c217
    MOV dword ptr [EAX*0x4 + 0x7c7b54],EDX ; 0043c21a | DAT_007c7b58 | DAT_007c7b5c
    CMP EAX,EBP                         ; 0043c221
    JL 0x0043c20d                       ; 0043c223
        ;   XREF to: 0043c20d (CONDITIONAL_JUMP)  ; LAB_0043c20d
    LEA EAX,[EAX]                       ; 0043c225
    LEA EDX,[EDX]                       ; 0043c22b
    MOV EBX,EBX                         ; 0043c22e
    CMP dword ptr [0x00713a7c],0x0      ; 0043c230 | DAT_00713a7c
        ;   Label: LAB_0043c230
    JZ 0x0043c2d2                       ; 0043c237
        ;   XREF to: 0043c2d2 (CONDITIONAL_JUMP)  ; LAB_0043c2d2
    CMP EBP,0x3                         ; 0043c23d
    JLE 0x0043c2b2                      ; 0043c240
        ;   XREF to: 0043c2b2 (CONDITIONAL_JUMP)  ; LAB_0043c2b2
    LEA EAX,[EBP + -0x2]                ; 0043c246
    XOR EBX,EBX                         ; 0043c249
    MOV dword ptr [ESP + 0x100],EAX     ; 0043c24b
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043c252
    XOR ESI,ESI                         ; 0043c259
    TEST EDI,EDI                        ; 0043c25b
    JLE 0x0043c287                      ; 0043c25d
        ;   XREF to: 0043c287 (CONDITIONAL_JUMP)  ; LAB_0043c287
    MOV EAX,dword ptr [EBX + 0x7c7b60]  ; 0043c25f | DAT_007c7b60 | DAT_007c7b64
        ;   Label: LAB_0043c25f
    PUSH EAX                            ; 0043c265
    MOV EDX,dword ptr [EBX + 0x7c7b5c]  ; 0043c266 | DAT_007c7b5c | DAT_007c7b60
    PUSH EDX                            ; 0043c26c
    MOV ECX,dword ptr [0x007c7b58]      ; 0043c26d | DAT_007c7b58
    PUSH ECX                            ; 0043c273
    CALL FUN_0053dd60                   ; 0043c274
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dd60()
    ADD ESP,0xc                         ; 0043c279
    TEST EAX,EAX                        ; 0043c27c
    JZ 0x0043c2af                       ; 0043c27e
        ;   XREF to: 0043c2af (CONDITIONAL_JUMP)  ; LAB_0043c2af
    ADD EBX,0x4                         ; 0043c280
        ;   Label: LAB_0043c280
    CMP EBX,EDI                         ; 0043c283
    JL 0x0043c25f                       ; 0043c285
        ;   XREF to: 0043c25f (CONDITIONAL_JUMP)  ; LAB_0043c25f
    CMP ESI,dword ptr [ESP + 0x100]     ; 0043c287
        ;   Label: LAB_0043c287
    JNZ 0x0043c2d2                      ; 0043c28e
        ;   XREF to: 0043c2d2 (CONDITIONAL_JUMP)  ; LAB_0043c2d2
        ;   Label: LAB_0043c28e
    MOV EAX,0x1                         ; 0043c290
        ;   Label: LAB_0043c290
    ADD ESP,0x13c                       ; 0043c295
        ;   Label: LAB_0043c295
    POP EBP                             ; 0043c29b
    POP EDI                             ; 0043c29c
    POP ESI                             ; 0043c29d
    POP EBX                             ; 0043c29e
    RET                                 ; 0043c29f
    XOR ESI,EBP                         ; 0043c2a0
        ;   Label: LAB_0043c2a0
    MOV EAX,0x1                         ; 0043c2a2
    MOV dword ptr [0x007c7554],ESI      ; 0043c2a7 | DAT_007c7554
    JMP 0x0043c295                      ; 0043c2ad
        ;   XREF to: 0043c295 (UNCONDITIONAL_JUMP)  ; LAB_0043c295
    INC ESI                             ; 0043c2af
        ;   Label: LAB_0043c2af
    JMP 0x0043c280                      ; 0043c2b0
        ;   XREF to: 0043c280 (UNCONDITIONAL_JUMP)  ; LAB_0043c280
    MOV EAX,[0x007c7b60]                ; 0043c2b2 | DAT_007c7b60
        ;   Label: LAB_0043c2b2
    PUSH EAX                            ; 0043c2b7
    MOV EDX,dword ptr [0x007c7b5c]      ; 0043c2b8 | DAT_007c7b5c
    PUSH EDX                            ; 0043c2be
    MOV ECX,dword ptr [0x007c7b58]      ; 0043c2bf | DAT_007c7b58
    PUSH ECX                            ; 0043c2c5
    CALL FUN_0053dd60                   ; 0043c2c6
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dd60()
    ADD ESP,0xc                         ; 0043c2cb
    TEST EAX,EAX                        ; 0043c2ce
    JMP 0x0043c28e                      ; 0043c2d0
        ;   XREF to: 0043c28e (UNCONDITIONAL_JUMP)  ; LAB_0043c28e
    MOV ESI,dword ptr [0x01c51d14]      ; 0043c2d2 | DAT_01c51d14
        ;   Label: LAB_0043c2d2
    PUSH ESI                            ; 0043c2d8
    LEA EAX,[EBP + -0x2]                ; 0043c2d9
    MOV EBX,dword ptr [0x01e7dac8]      ; 0043c2dc | DAT_01e7dac8
    PUSH EBP                            ; 0043c2e2
    ADD EBX,EAX                         ; 0043c2e3
    PUSH 0x7c7b58                       ; 0043c2e5 | DAT_007c7b58
    MOV dword ptr [0x01e7dac8],EBX      ; 0043c2ea | DAT_01e7dac8
    CALL FUN_00582370                   ; 0043c2f0
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; undefined FUN_00582370()
    MOV EAX,0x1                         ; 0043c2f5
    ADD ESP,0xc                         ; 0043c2fa
    ADD ESP,0x13c                       ; 0043c2fd
    POP EBP                             ; 0043c303
    POP EDI                             ; 0043c304
    POP ESI                             ; 0043c305
    POP EBX                             ; 0043c306
    RET                                 ; 0043c307
    XOR EBX,EBX                         ; 0043c308
        ;   Label: LAB_0043c308
    MOV dword ptr [0x007c7554],EBP      ; 0043c30a | DAT_007c7554
    MOV dword ptr [ESP + 0x130],EBX     ; 0043c310
    TEST EBP,EBP                        ; 0043c317
    JLE 0x0043c380                      ; 0043c319
        ;   XREF to: 0043c380 (CONDITIONAL_JUMP)  ; LAB_0043c380
    MOV EDX,dword ptr [ESP + 0x154]     ; 0043c31b
    MOV EBX,0x7c7558                    ; 0043c322 | DAT_007c7558
    IMUL ESI,dword ptr [EDX],0x30       ; 0043c327
        ;   Label: LAB_0043c327
    MOV ECX,0x30                        ; 0043c32a
    ADD ESI,0x629014                    ; 0043c32f | DAT_00629014
    MOV EDI,EBX                         ; 0043c335
    TEST EDI,0x7                        ; 0043c337
    JZ 0x0043c345                       ; 0043c33d
        ;   XREF to: 0043c345 (CONDITIONAL_JUMP)  ; LAB_0043c345
    MOVSD ES:EDI,ESI                    ; 0043c33f | DAT_00629014 | DAT_007c7588
    SUB ECX,0x4                         ; 0043c340
    JLE 0x0043c362                      ; 0043c343
        ;   XREF to: 0043c362 (CONDITIONAL_JUMP)  ; LAB_0043c362
    SUB ECX,0x8                         ; 0043c345
        ;   Label: LAB_0043c345
    JL 0x0043c356                       ; 0043c348
        ;   XREF to: 0043c356 (CONDITIONAL_JUMP)  ; LAB_0043c356
    FILD qword ptr [ESI]                ; 0043c34a | DAT_00629014 | DAT_0062901c | DAT_00629018
    ADD ESI,0x8                         ; 0043c34c
    FISTP qword ptr [EDI]               ; 0043c34f | DAT_007c7558 | DAT_007c7560 | DAT_007c758c
    ADD EDI,0x8                         ; 0043c351
    JMP 0x0043c345                      ; 0043c354
        ;   XREF to: 0043c345 (UNCONDITIONAL_JUMP)  ; LAB_0043c345
    ADD ECX,0x8                         ; 0043c356
        ;   Label: LAB_0043c356
    JLE 0x0043c362                      ; 0043c359
        ;   XREF to: 0043c362 (CONDITIONAL_JUMP)  ; LAB_0043c362
    MOVSD ES:EDI,ESI                    ; 0043c35b | DAT_0062901c | DAT_007c7560
    SUB ECX,0x4                         ; 0043c35c
    JLE 0x0043c362                      ; 0043c35f
        ;   XREF to: 0043c362 (CONDITIONAL_JUMP)  ; LAB_0043c362
    MOVSD ES:EDI,ESI                    ; 0043c361 | DAT_00629020 | DAT_007c7564
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043c362
        ;   Label: LAB_0043c362
    ADD EDX,0x4                         ; 0043c369
    INC EAX                             ; 0043c36c
    ADD EBX,0x30                        ; 0043c36d
    MOV dword ptr [ESP + 0x130],EAX     ; 0043c370
    CMP EBP,EAX                         ; 0043c377
    JG 0x0043c327                       ; 0043c379
        ;   XREF to: 0043c327 (CONDITIONAL_JUMP)  ; LAB_0043c327
    LEA EAX,[EAX]                       ; 0043c37b
    MOV ECX,ECX                         ; 0043c37e
    XOR EAX,EAX                         ; 0043c380
        ;   Label: LAB_0043c380
    ADD ESP,0x13c                       ; 0043c382
    POP EBP                             ; 0043c388
    POP EDI                             ; 0043c389
    POP ESI                             ; 0043c38a
    POP EBX                             ; 0043c38b
    RET                                 ; 0043c38c
    XOR EAX,EAX                         ; 0043c38d
        ;   Label: LAB_0043c38d
    TEST EBP,EBP                        ; 0043c38f
    JLE 0x0043c3b0                      ; 0043c391
        ;   XREF to: 0043c3b0 (CONDITIONAL_JUMP)  ; LAB_0043c3b0
    MOV EBX,dword ptr [ESP + 0x154]     ; 0043c393
    IMUL EDX,dword ptr [EBX],0x30       ; 0043c39a
        ;   Label: LAB_0043c39a
    INC EAX                             ; 0043c39d
    ADD EDX,0x629014                    ; 0043c39e | DAT_00629014
    ADD EBX,0x4                         ; 0043c3a4
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 0043c3a7
    CMP EAX,EBP                         ; 0043c3ab
    JL 0x0043c39a                       ; 0043c3ad
        ;   XREF to: 0043c39a (CONDITIONAL_JUMP)  ; LAB_0043c39a
    NOP                                 ; 0043c3af
    LEA EAX,[ESP + 0x80]                ; 0043c3b0
        ;   Label: LAB_0043c3b0
    MOV EDX,ESP                         ; 0043c3b7
    MOV dword ptr [0x007c7554],EBP      ; 0043c3b9 | DAT_007c7554
    MOV dword ptr [ESP + 0x108],EBP     ; 0043c3bf
    XOR EBX,EBX                         ; 0043c3c6
    XOR ESI,ESI                         ; 0043c3c8
    XOR EDI,EDI                         ; 0043c3ca
    MOV dword ptr [0x007c841c],EBX      ; 0043c3cc | DAT_007c841c
    MOV dword ptr [ESP + 0x134],EAX     ; 0043c3d2
    MOV dword ptr [ESP + 0x12c],EDI     ; 0043c3d9
    MOV EBX,dword ptr [EDX + EBP*0x4 + -0x4] ; 0043c3e0
    TEST EBP,EBP                        ; 0043c3e4
    JLE 0x0043c444                      ; 0043c3e6
        ;   XREF to: 0043c444 (CONDITIONAL_JUMP)  ; LAB_0043c444
    MOV EBP,ESP                         ; 0043c3e8
    MOV EDX,dword ptr [EBX]             ; 0043c3ea | DAT_00629014
        ;   Label: LAB_0043c3ea
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043c3ec | DAT_0062901c
    MOV EDI,dword ptr [EBP]             ; 0043c3ef
    XOR EAX,EAX                         ; 0043c3f2
    CMP EDX,ECX                         ; 0043c3f4
    JL 0x0043c3fd                       ; 0043c3f6
        ;   XREF to: 0043c3fd (CONDITIONAL_JUMP)  ; LAB_0043c3fd
    MOV EAX,0x1                         ; 0043c3f8
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043c3fd | DAT_0062901c
        ;   Label: LAB_0043c3fd
    CMP ECX,dword ptr [EDI]             ; 0043c400 | DAT_00629014
    JG 0x0043c406                       ; 0043c402
        ;   XREF to: 0043c406 (CONDITIONAL_JUMP)  ; LAB_0043c406
    OR AL,0x2                           ; 0043c404
    CMP EAX,0x3                         ; 0043c406
        ;   Label: LAB_0043c406
    JA 0x0043c425                       ; 0043c409
        ;   XREF to: 0043c425 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43c13c]  ; 0043c40b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x134]     ; 0043c412
        ;   Label: caseD_0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043c419
    ADD EAX,ECX                         ; 0043c420
    INC ESI                             ; 0043c422
    MOV dword ptr [EAX],EBX             ; 0043c423
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0043c425
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x108]     ; 0043c42c
    MOV EBX,EDI                         ; 0043c433
    INC EAX                             ; 0043c435
    ADD EBP,0x4                         ; 0043c436
    MOV dword ptr [ESP + 0x12c],EAX     ; 0043c439
    CMP EAX,EDX                         ; 0043c440
    JL 0x0043c3ea                       ; 0043c442
        ;   XREF to: 0043c3ea (CONDITIONAL_JUMP)  ; LAB_0043c3ea
    MOV dword ptr [0x007c7554],ESI      ; 0043c444 | DAT_007c7554
        ;   Label: LAB_0043c444
    CMP ESI,0x3                         ; 0043c44a
    JL 0x0043c290                       ; 0043c44d
        ;   XREF to: 0043c290 (CONDITIONAL_JUMP)  ; LAB_0043c290
    LEA EDX,[ESP + 0x80]                ; 0043c453
    MOV EBP,ESP                         ; 0043c45a
    XOR EBX,EBX                         ; 0043c45c
    MOV dword ptr [ESP + 0x104],ESI     ; 0043c45e
    MOV dword ptr [ESP + 0x11c],EBX     ; 0043c465
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 0043c46c
    TEST ESI,ESI                        ; 0043c470
    JLE 0x0043c4e1                      ; 0043c472
        ;   XREF to: 0043c4e1 (CONDITIONAL_JUMP)  ; LAB_0043c4e1
    MOV dword ptr [ESP + 0x114],EDX     ; 0043c474
    MOV ESI,dword ptr [ESP + 0x114]     ; 0043c47b
        ;   Label: LAB_0043c47b
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043c482
    MOV ECX,dword ptr [EDI]             ; 0043c485
    XOR EAX,EAX                         ; 0043c487
    NEG EDX                             ; 0043c489
    MOV ESI,dword ptr [ESI]             ; 0043c48b
    CMP EDX,ECX                         ; 0043c48d
    JL 0x0043c496                       ; 0043c48f
        ;   XREF to: 0043c496 (CONDITIONAL_JUMP)  ; LAB_0043c496
    MOV EAX,0x1                         ; 0043c491
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043c496
        ;   Label: LAB_0043c496
    MOV ECX,dword ptr [ESI]             ; 0043c499
    NEG EDX                             ; 0043c49b
    CMP EDX,ECX                         ; 0043c49d
    JL 0x0043c4a3                       ; 0043c49f
        ;   XREF to: 0043c4a3 (CONDITIONAL_JUMP)  ; LAB_0043c4a3
    OR AL,0x2                           ; 0043c4a1
    CMP EAX,0x3                         ; 0043c4a3
        ;   Label: LAB_0043c4a3
    JA 0x0043c4b4                       ; 0043c4a6
        ;   XREF to: 0043c4b4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43c14c]  ; 0043c4a8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043c4af
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043c4b0
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043c4b4
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x104]     ; 0043c4bb
    MOV EDI,ESI                         ; 0043c4c2
    MOV ESI,dword ptr [ESP + 0x114]     ; 0043c4c4
    INC EAX                             ; 0043c4cb
    ADD ESI,0x4                         ; 0043c4cc
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043c4cf
    MOV dword ptr [ESP + 0x114],ESI     ; 0043c4d6
    CMP EAX,EDX                         ; 0043c4dd
    JL 0x0043c47b                       ; 0043c4df
        ;   XREF to: 0043c47b (CONDITIONAL_JUMP)  ; LAB_0043c47b
    MOV dword ptr [0x007c7554],EBX      ; 0043c4e1 | DAT_007c7554
        ;   Label: LAB_0043c4e1
    CMP EBX,0x3                         ; 0043c4e7
    JL 0x0043c290                       ; 0043c4ea
        ;   XREF to: 0043c290 (CONDITIONAL_JUMP)  ; LAB_0043c290
    MOV EDX,ESP                         ; 0043c4f0
    LEA EBP,[ESP + 0x80]                ; 0043c4f2
    XOR ESI,ESI                         ; 0043c4f9
    MOV dword ptr [ESP + 0x110],EBX     ; 0043c4fb
    MOV dword ptr [ESP + 0x128],ESI     ; 0043c502
    MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4] ; 0043c509
    TEST EBX,EBX                        ; 0043c50d
    JLE 0x0043c57a                      ; 0043c50f
        ;   XREF to: 0043c57a (CONDITIONAL_JUMP)  ; LAB_0043c57a
    MOV dword ptr [ESP + 0x120],EDX     ; 0043c511
    MOV EBX,dword ptr [ESP + 0x120]     ; 0043c518
        ;   Label: LAB_0043c518
    MOV EDX,dword ptr [EDI + 0x4]       ; 0043c51f | DAT_00629018
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043c522 | DAT_0062901c
    XOR EAX,EAX                         ; 0043c525
    MOV EBX,dword ptr [EBX]             ; 0043c527
    CMP EDX,ECX                         ; 0043c529
    JL 0x0043c532                       ; 0043c52b
        ;   XREF to: 0043c532 (CONDITIONAL_JUMP)  ; LAB_0043c532
    MOV EAX,0x1                         ; 0043c52d
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043c532 | DAT_0062901c
        ;   Label: LAB_0043c532
    CMP ECX,dword ptr [EBX + 0x4]       ; 0043c535 | DAT_00629018
    JG 0x0043c53c                       ; 0043c538
        ;   XREF to: 0043c53c (CONDITIONAL_JUMP)  ; LAB_0043c53c
    OR AL,0x2                           ; 0043c53a
    CMP EAX,0x3                         ; 0043c53c
        ;   Label: LAB_0043c53c
    JA 0x0043c54d                       ; 0043c53f
        ;   XREF to: 0043c54d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43c15c]  ; 0043c541 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC ESI                             ; 0043c548
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 0043c549
    MOV ECX,dword ptr [ESP + 0x120]     ; 0043c54d
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x110]     ; 0043c554
    MOV EDI,EBX                         ; 0043c55b
    MOV EBX,dword ptr [ESP + 0x128]     ; 0043c55d
    ADD ECX,0x4                         ; 0043c564
    INC EBX                             ; 0043c567
    MOV dword ptr [ESP + 0x120],ECX     ; 0043c568
    MOV dword ptr [ESP + 0x128],EBX     ; 0043c56f
    CMP EBX,EDX                         ; 0043c576
    JL 0x0043c518                       ; 0043c578
        ;   XREF to: 0043c518 (CONDITIONAL_JUMP)  ; LAB_0043c518
    MOV dword ptr [0x007c7554],ESI      ; 0043c57a | DAT_007c7554
        ;   Label: LAB_0043c57a
    CMP ESI,0x3                         ; 0043c580
    JL 0x0043c290                       ; 0043c583
        ;   XREF to: 0043c290 (CONDITIONAL_JUMP)  ; LAB_0043c290
    LEA EDX,[ESP + 0x80]                ; 0043c589
    MOV EBP,ESP                         ; 0043c590
    XOR EBX,EBX                         ; 0043c592
    MOV dword ptr [ESP + 0x10c],ESI     ; 0043c594
    MOV dword ptr [ESP + 0x124],EBX     ; 0043c59b
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 0043c5a2
    TEST ESI,ESI                        ; 0043c5a6
    JLE 0x0043c61d                      ; 0043c5a8
        ;   XREF to: 0043c61d (CONDITIONAL_JUMP)  ; LAB_0043c61d
    MOV dword ptr [ESP + 0x118],EDX     ; 0043c5ae
    MOV ESI,dword ptr [ESP + 0x118]     ; 0043c5b5
        ;   Label: LAB_0043c5b5
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043c5bc
    MOV ECX,dword ptr [EDI + 0x4]       ; 0043c5bf
    XOR EAX,EAX                         ; 0043c5c2
    NEG EDX                             ; 0043c5c4
    MOV ESI,dword ptr [ESI]             ; 0043c5c6
    CMP EDX,ECX                         ; 0043c5c8
    JL 0x0043c5d1                       ; 0043c5ca
        ;   XREF to: 0043c5d1 (CONDITIONAL_JUMP)  ; LAB_0043c5d1
    MOV EAX,0x1                         ; 0043c5cc
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043c5d1
        ;   Label: LAB_0043c5d1
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043c5d4
    NEG EDX                             ; 0043c5d7
    CMP EDX,ECX                         ; 0043c5d9
    JL 0x0043c5df                       ; 0043c5db
        ;   XREF to: 0043c5df (CONDITIONAL_JUMP)  ; LAB_0043c5df
    OR AL,0x2                           ; 0043c5dd
    CMP EAX,0x3                         ; 0043c5df
        ;   Label: LAB_0043c5df
    JA 0x0043c5f0                       ; 0043c5e2
        ;   XREF to: 0043c5f0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43c16c]  ; 0043c5e4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043c5eb
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043c5ec
    MOV ECX,dword ptr [ESP + 0x118]     ; 0043c5f0
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0043c5f7
    MOV EDI,ESI                         ; 0043c5fe
    MOV ESI,dword ptr [ESP + 0x124]     ; 0043c600
    ADD ECX,0x4                         ; 0043c607
    INC ESI                             ; 0043c60a
    MOV dword ptr [ESP + 0x118],ECX     ; 0043c60b
    MOV dword ptr [ESP + 0x124],ESI     ; 0043c612
    CMP ESI,EDX                         ; 0043c619
    JL 0x0043c5b5                       ; 0043c61b
        ;   XREF to: 0043c5b5 (CONDITIONAL_JUMP)  ; LAB_0043c5b5
    MOV dword ptr [0x007c7554],EBX      ; 0043c61d | DAT_007c7554
        ;   Label: LAB_0043c61d
    CMP EBX,0x3                         ; 0043c623
    JL 0x0043c290                       ; 0043c626
        ;   XREF to: 0043c290 (CONDITIONAL_JUMP)  ; LAB_0043c290
    XOR EDX,EDX                         ; 0043c62c
    TEST EBX,EBX                        ; 0043c62e
    JLE 0x0043c680                      ; 0043c630
        ;   XREF to: 0043c680 (CONDITIONAL_JUMP)  ; LAB_0043c680
    MOV EBX,0x7c7558                    ; 0043c632 | DAT_007c7558
    XOR EBP,EBP                         ; 0043c637
    MOV ECX,0x30                        ; 0043c639
        ;   Label: LAB_0043c639
    MOV EDI,EBX                         ; 0043c63e
    MOV ESI,dword ptr [ESP + EBP*0x1]   ; 0043c640
    TEST EDI,0x7                        ; 0043c643
    JZ 0x0043c651                       ; 0043c649
        ;   XREF to: 0043c651 (CONDITIONAL_JUMP)  ; LAB_0043c651
    MOVSD ES:EDI,ESI                    ; 0043c64b | DAT_007c7588
    SUB ECX,0x4                         ; 0043c64c
    JLE 0x0043c66e                      ; 0043c64f
        ;   XREF to: 0043c66e (CONDITIONAL_JUMP)  ; LAB_0043c66e
    SUB ECX,0x8                         ; 0043c651
        ;   Label: LAB_0043c651
    JL 0x0043c662                       ; 0043c654
        ;   XREF to: 0043c662 (CONDITIONAL_JUMP)  ; LAB_0043c662
    FILD qword ptr [ESI]                ; 0043c656 | DAT_00629014 | DAT_0062901c
    ADD ESI,0x8                         ; 0043c658
    FISTP qword ptr [EDI]               ; 0043c65b | DAT_007c7558 | DAT_007c7560 | DAT_007c758c
    ADD EDI,0x8                         ; 0043c65d
    JMP 0x0043c651                      ; 0043c660
        ;   XREF to: 0043c651 (UNCONDITIONAL_JUMP)  ; LAB_0043c651
    ADD ECX,0x8                         ; 0043c662
        ;   Label: LAB_0043c662
    JLE 0x0043c66e                      ; 0043c665
        ;   XREF to: 0043c66e (CONDITIONAL_JUMP)  ; LAB_0043c66e
    MOVSD ES:EDI,ESI                    ; 0043c667 | DAT_0062901c | DAT_007c7560
    SUB ECX,0x4                         ; 0043c668
    JLE 0x0043c66e                      ; 0043c66b
        ;   XREF to: 0043c66e (CONDITIONAL_JUMP)  ; LAB_0043c66e
    MOVSD ES:EDI,ESI                    ; 0043c66d | DAT_00629020 | DAT_007c7564
    ADD EBP,0x4                         ; 0043c66e
        ;   Label: LAB_0043c66e
    INC EDX                             ; 0043c671
    MOV ECX,dword ptr [0x007c7554]      ; 0043c672 | DAT_007c7554
    ADD EBX,0x30                        ; 0043c678
    CMP EDX,ECX                         ; 0043c67b
    JL 0x0043c639                       ; 0043c67d
        ;   XREF to: 0043c639 (CONDITIONAL_JUMP)  ; LAB_0043c639
    NOP                                 ; 0043c67f
    MOV ESI,dword ptr [0x00610d44]      ; 0043c680 | DAT_00610d44
        ;   Label: LAB_0043c680
    XOR EBX,EBX                         ; 0043c686
    TEST ESI,ESI                        ; 0043c688
    JNZ 0x0043c9c2                      ; 0043c68a
        ;   XREF to: 0043c9c2 (CONDITIONAL_JUMP)  ; LAB_0043c9c2
    MOV EBP,dword ptr [0x007c7554]      ; 0043c690 | DAT_007c7554
        ;   Label: LAB_0043c690
    CMP EBP,0x3                         ; 0043c696
    JL 0x0043c290                       ; 0043c699
        ;   XREF to: 0043c290 (CONDITIONAL_JUMP)  ; LAB_0043c290
    XOR EDX,EDX                         ; 0043c69f
    TEST EBP,EBP                        ; 0043c6a1
    JLE 0x0043c6cf                      ; 0043c6a3
        ;   XREF to: 0043c6cf (CONDITIONAL_JUMP)  ; LAB_0043c6cf
    MOV EAX,0x7c7558                    ; 0043c6a5 | DAT_007c7558
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043c6aa | DAT_007c7560 | DAT_007c7590
        ;   Label: LAB_0043c6aa
    TEST EBX,EBX                        ; 0043c6ad
    JNZ 0x0043cbb3                      ; 0043c6af
        ;   XREF to: 0043cbb3 (CONDITIONAL_JUMP)  ; LAB_0043cbb3
    MOV dword ptr [EAX + 0x8],0x1       ; 0043c6b5 | DAT_007c7560 | DAT_007c7590
    MOV dword ptr [EAX],EBX             ; 0043c6bc | DAT_007c7558 | DAT_007c7588
    MOV dword ptr [EAX + 0x4],EBX       ; 0043c6be | DAT_007c755c | DAT_007c758c
        ;   Label: LAB_0043c6be
    MOV ECX,dword ptr [0x007c7554]      ; 0043c6c1 | DAT_007c7554
        ;   Label: LAB_0043c6c1
    INC EDX                             ; 0043c6c7
    ADD EAX,0x30                        ; 0043c6c8
    CMP EDX,ECX                         ; 0043c6cb
    JL 0x0043c6aa                       ; 0043c6cd
        ;   XREF to: 0043c6aa (CONDITIONAL_JUMP)  ; LAB_0043c6aa
    XOR EAX,EAX                         ; 0043c6cf
        ;   Label: LAB_0043c6cf
    ADD ESP,0x13c                       ; 0043c6d1
    POP EBP                             ; 0043c6d7
    POP EDI                             ; 0043c6d8
    POP ESI                             ; 0043c6d9
    POP EBX                             ; 0043c6da
    RET                                 ; 0043c6db
    CMP dword ptr [0x007c841c],0xc      ; 0043c6dc | DAT_007c841c
        ;   Label: caseD_1
    JL 0x0043c707                       ; 0043c6e3
        ;   XREF to: 0043c707 (CONDITIONAL_JUMP)  ; LAB_0043c707
    MOV EAX,0x5d66da                    ; 0043c6e5 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 0043c6ea
    PUSH 0x5d66ee                       ; 0043c6ef | = "Ran out of clipped verts!"
    MOV [0x01d1d400],EAX                ; 0043c6f4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0043c6f9 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c6ff
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c704
    MOV EAX,[0x007c841c]                ; 0043c707 | DAT_007c841c
        ;   Label: LAB_0043c707
    IMUL EDX,EAX,0x30                   ; 0043c70c
    MOV ECX,dword ptr [ESP + 0x134]     ; 0043c70f
    ADD EDX,0x7c81dc                    ; 0043c716 | DAT_007c81dc
    INC EAX                             ; 0043c71c
    PUSH EDX                            ; 0043c71d | DAT_007c81dc
    MOV [0x007c841c],EAX                ; 0043c71e | DAT_007c841c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043c723
    PUSH EBX                            ; 0043c72a
    ADD EAX,ECX                         ; 0043c72b
    PUSH EDI                            ; 0043c72d
    INC ESI                             ; 0043c72e
    MOV dword ptr [EAX],EDX             ; 0043c72f | DAT_007c81dc
    CALL FUN_0043b4b0                   ; 0043c731
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b4b0()
    ADD ESP,0xc                         ; 0043c736
    JMP 0x0043c425                      ; 0043c739
        ;   XREF to: 0043c425 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDX,dword ptr [ESP + 0x134]     ; 0043c73e
        ;   Label: caseD_2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043c745
    ADD EAX,EDX                         ; 0043c74c
    MOV ECX,dword ptr [0x007c841c]      ; 0043c74e | DAT_007c841c
    INC ESI                             ; 0043c754
    MOV dword ptr [EAX],EBX             ; 0043c755
    CMP ECX,0xc                         ; 0043c757
    JL 0x0043c77e                       ; 0043c75a
        ;   XREF to: 0043c77e (CONDITIONAL_JUMP)  ; LAB_0043c77e
    MOV EAX,0x5d66da                    ; 0043c75c | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 0043c761
    PUSH 0x5d66ee                       ; 0043c766 | = "Ran out of clipped verts!"
    MOV [0x01d1d400],EAX                ; 0043c76b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0043c770 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c776
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c77b
    MOV EAX,[0x007c841c]                ; 0043c77e | DAT_007c841c
        ;   Label: LAB_0043c77e
    IMUL EDX,EAX,0x30                   ; 0043c783
    MOV ECX,dword ptr [ESP + 0x134]     ; 0043c786
    ADD EDX,0x7c81dc                    ; 0043c78d | DAT_007c81dc
    INC EAX                             ; 0043c793
    PUSH EDX                            ; 0043c794 | DAT_007c81dc
    MOV [0x007c841c],EAX                ; 0043c795 | DAT_007c841c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043c79a
    PUSH EDI                            ; 0043c7a1
    ADD EAX,ECX                         ; 0043c7a2
    PUSH EBX                            ; 0043c7a4
    INC ESI                             ; 0043c7a5
    MOV dword ptr [EAX],EDX             ; 0043c7a6 | DAT_007c81dc
    CALL FUN_0043b4b0                   ; 0043c7a8
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b4b0()
    ADD ESP,0xc                         ; 0043c7ad
    JMP 0x0043c425                      ; 0043c7b0
        ;   XREF to: 0043c425 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007c841c],0xc      ; 0043c7b5 | DAT_007c841c
        ;   Label: caseD_1
    JL 0x0043c7e0                       ; 0043c7bc
        ;   XREF to: 0043c7e0 (CONDITIONAL_JUMP)  ; LAB_0043c7e0
    MOV ECX,0x5d66da                    ; 0043c7be | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043c7c3
    PUSH 0x5d66ee                       ; 0043c7c8 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],ECX      ; 0043c7cd | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0043c7d3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c7d8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c7dd
    MOV EAX,[0x007c841c]                ; 0043c7e0 | DAT_007c841c
        ;   Label: LAB_0043c7e0
    IMUL EDX,EAX,0x30                   ; 0043c7e5
    ADD EDX,0x7c81dc                    ; 0043c7e8 | DAT_007c81dc
    PUSH EDX                            ; 0043c7ee | DAT_007c81dc
    PUSH EDI                            ; 0043c7ef
    INC EBX                             ; 0043c7f0
    INC EAX                             ; 0043c7f1
    PUSH ESI                            ; 0043c7f2
    MOV [0x007c841c],EAX                ; 0043c7f3 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043c7f8 | DAT_007c81dc
    CALL FUN_0043b5b0                   ; 0043c7fc
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b5b0()
    ADD ESP,0xc                         ; 0043c801
    JMP 0x0043c4b4                      ; 0043c804
        ;   XREF to: 0043c4b4 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043c809
        ;   Label: caseD_2
    MOV EAX,[0x007c841c]                ; 0043c80a | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043c80f
    CMP EAX,0xc                         ; 0043c813
    JL 0x0043c83b                       ; 0043c816
        ;   XREF to: 0043c83b (CONDITIONAL_JUMP)  ; LAB_0043c83b
    MOV EDX,0x5d66da                    ; 0043c818 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043c81d
    PUSH 0x5d66ee                       ; 0043c822 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],EDX      ; 0043c827 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043c82d | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c833
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c838
    MOV EAX,[0x007c841c]                ; 0043c83b | DAT_007c841c
        ;   Label: LAB_0043c83b
    IMUL EDX,EAX,0x30                   ; 0043c840
    ADD EDX,0x7c81dc                    ; 0043c843 | DAT_007c81dc
    PUSH EDX                            ; 0043c849 | DAT_007c81dc
    PUSH ESI                            ; 0043c84a
    INC EBX                             ; 0043c84b
    INC EAX                             ; 0043c84c
    PUSH EDI                            ; 0043c84d
    MOV [0x007c841c],EAX                ; 0043c84e | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043c853 | DAT_007c81dc
    CALL FUN_0043b5b0                   ; 0043c857
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b5b0()
    ADD ESP,0xc                         ; 0043c85c
    JMP 0x0043c4b4                      ; 0043c85f
        ;   XREF to: 0043c4b4 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007c841c],0xc      ; 0043c864 | DAT_007c841c
        ;   Label: caseD_1
    JL 0x0043c88f                       ; 0043c86b
        ;   XREF to: 0043c88f (CONDITIONAL_JUMP)  ; LAB_0043c88f
    MOV ECX,0x5d66da                    ; 0043c86d | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043c872
    PUSH 0x5d66ee                       ; 0043c877 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],ECX      ; 0043c87c | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0043c882 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c887
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c88c
    MOV EAX,[0x007c841c]                ; 0043c88f | DAT_007c841c
        ;   Label: LAB_0043c88f
    IMUL EDX,EAX,0x30                   ; 0043c894
    ADD EDX,0x7c81dc                    ; 0043c897 | DAT_007c81dc
    PUSH EDX                            ; 0043c89d | DAT_007c81dc
    PUSH EDI                            ; 0043c89e
    INC ESI                             ; 0043c89f
    INC EAX                             ; 0043c8a0
    PUSH EBX                            ; 0043c8a1
    MOV [0x007c841c],EAX                ; 0043c8a2 | DAT_007c841c
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 0043c8a7 | DAT_007c81dc
    CALL FUN_0043b6b0                   ; 0043c8ab
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b6b0()
    ADD ESP,0xc                         ; 0043c8b0
    JMP 0x0043c54d                      ; 0043c8b3
        ;   XREF to: 0043c54d (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 0043c8b8
        ;   Label: caseD_2
    MOV EAX,[0x007c841c]                ; 0043c8b9 | DAT_007c841c
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 0043c8be
    CMP EAX,0xc                         ; 0043c8c2
    JL 0x0043c8ea                       ; 0043c8c5
        ;   XREF to: 0043c8ea (CONDITIONAL_JUMP)  ; LAB_0043c8ea
    MOV EDX,0x5d66da                    ; 0043c8c7 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043c8cc
    PUSH 0x5d66ee                       ; 0043c8d1 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],EDX      ; 0043c8d6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043c8dc | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c8e2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c8e7
    MOV EAX,[0x007c841c]                ; 0043c8ea | DAT_007c841c
        ;   Label: LAB_0043c8ea
    IMUL EDX,EAX,0x30                   ; 0043c8ef
    ADD EDX,0x7c81dc                    ; 0043c8f2 | DAT_007c81dc
    PUSH EDX                            ; 0043c8f8 | DAT_007c81dc
    PUSH EBX                            ; 0043c8f9
    INC ESI                             ; 0043c8fa
    INC EAX                             ; 0043c8fb
    PUSH EDI                            ; 0043c8fc
    MOV [0x007c841c],EAX                ; 0043c8fd | DAT_007c841c
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 0043c902 | DAT_007c81dc
    CALL FUN_0043b6b0                   ; 0043c906
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b6b0()
    ADD ESP,0xc                         ; 0043c90b
    JMP 0x0043c54d                      ; 0043c90e
        ;   XREF to: 0043c54d (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007c841c],0xc      ; 0043c913 | DAT_007c841c
        ;   Label: caseD_1
    JL 0x0043c93e                       ; 0043c91a
        ;   XREF to: 0043c93e (CONDITIONAL_JUMP)  ; LAB_0043c93e
    MOV ECX,0x5d66da                    ; 0043c91c | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043c921
    PUSH 0x5d66ee                       ; 0043c926 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],ECX      ; 0043c92b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0043c931 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c936
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c93b
    MOV EAX,[0x007c841c]                ; 0043c93e | DAT_007c841c
        ;   Label: LAB_0043c93e
    IMUL EDX,EAX,0x30                   ; 0043c943
    ADD EDX,0x7c81dc                    ; 0043c946 | DAT_007c81dc
    PUSH EDX                            ; 0043c94c | DAT_007c81dc
    PUSH EDI                            ; 0043c94d
    INC EBX                             ; 0043c94e
    INC EAX                             ; 0043c94f
    PUSH ESI                            ; 0043c950
    MOV [0x007c841c],EAX                ; 0043c951 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043c956 | DAT_007c81dc
    CALL FUN_0043b7b0                   ; 0043c95a
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b7b0()
    ADD ESP,0xc                         ; 0043c95f
    JMP 0x0043c5f0                      ; 0043c962
        ;   XREF to: 0043c5f0 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043c967
        ;   Label: caseD_2
    MOV EAX,[0x007c841c]                ; 0043c968 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043c96d
    CMP EAX,0xc                         ; 0043c971
    JL 0x0043c999                       ; 0043c974
        ;   XREF to: 0043c999 (CONDITIONAL_JUMP)  ; LAB_0043c999
    MOV EDX,0x5d66da                    ; 0043c976 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043c97b
    PUSH 0x5d66ee                       ; 0043c980 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],EDX      ; 0043c985 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043c98b | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043c991
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043c996
    MOV EAX,[0x007c841c]                ; 0043c999 | DAT_007c841c
        ;   Label: LAB_0043c999
    IMUL EDX,EAX,0x30                   ; 0043c99e
    ADD EDX,0x7c81dc                    ; 0043c9a1 | DAT_007c81dc
    PUSH EDX                            ; 0043c9a7 | DAT_007c81dc
    PUSH ESI                            ; 0043c9a8
    INC EBX                             ; 0043c9a9
    INC EAX                             ; 0043c9aa
    PUSH EDI                            ; 0043c9ab
    MOV [0x007c841c],EAX                ; 0043c9ac | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043c9b1 | DAT_007c81dc
    CALL FUN_0043b7b0                   ; 0043c9b5
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b7b0()
    ADD ESP,0xc                         ; 0043c9ba
    JMP 0x0043c5f0                      ; 0043c9bd
        ;   XREF to: 0043c5f0 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDI,dword ptr [0x007c7554]      ; 0043c9c2 | DAT_007c7554
        ;   Label: LAB_0043c9c2
    TEST EDI,EDI                        ; 0043c9c8
    JLE 0x0043c9ed                      ; 0043c9ca
        ;   XREF to: 0043c9ed (CONDITIONAL_JUMP)  ; LAB_0043c9ed
    LEA ECX,[EDI*0x4 + 0x0]             ; 0043c9cc
    SUB ECX,EDI                         ; 0043c9d3
    XOR EAX,EAX                         ; 0043c9d5
    SHL ECX,0x4                         ; 0043c9d7
    MOV ESI,dword ptr [EAX + 0x7c7560]  ; 0043c9da | DAT_007c7560 | DAT_007c7590
        ;   Label: LAB_0043c9da
    CMP EBX,ESI                         ; 0043c9e0
    JGE 0x0043c9e6                      ; 0043c9e2
        ;   XREF to: 0043c9e6 (CONDITIONAL_JUMP)  ; LAB_0043c9e6
    MOV EBX,ESI                         ; 0043c9e4
    ADD EAX,0x30                        ; 0043c9e6
        ;   Label: LAB_0043c9e6
    CMP EAX,ECX                         ; 0043c9e9
    JL 0x0043c9da                       ; 0043c9eb
        ;   XREF to: 0043c9da (CONDITIONAL_JUMP)  ; LAB_0043c9da
    CMP EBX,dword ptr [0x00610d44]      ; 0043c9ed | DAT_00610d44
        ;   Label: LAB_0043c9ed
    JL 0x0043c690                       ; 0043c9f3
        ;   XREF to: 0043c690 (CONDITIONAL_JUMP)  ; LAB_0043c690
    MOV EAX,[0x007c7554]                ; 0043c9f9 | DAT_007c7554
    MOV [0x007c7bd8],EAX                ; 0043c9fe | DAT_007c7bd8
    LEA ECX,[EAX*0x4 + 0x0]             ; 0043ca03
    MOV ESI,0x7c7558                    ; 0043ca0a | DAT_007c7558
    SUB ECX,EAX                         ; 0043ca0f
    MOV EDI,0x7c7bdc                    ; 0043ca11 | DAT_007c7bdc
    SHL ECX,0x4                         ; 0043ca16
    TEST EDI,0x7                        ; 0043ca19
    JZ 0x0043ca27                       ; 0043ca1f
        ;   XREF to: 0043ca27 (CONDITIONAL_JUMP)  ; LAB_0043ca27
    MOVSD ES:EDI,ESI                    ; 0043ca21 | DAT_007c7558 | DAT_007c7bdc
    SUB ECX,0x4                         ; 0043ca22
    JLE 0x0043ca44                      ; 0043ca25
        ;   XREF to: 0043ca44 (CONDITIONAL_JUMP)  ; LAB_0043ca44
    SUB ECX,0x8                         ; 0043ca27
        ;   Label: LAB_0043ca27
    JL 0x0043ca38                       ; 0043ca2a
        ;   XREF to: 0043ca38 (CONDITIONAL_JUMP)  ; LAB_0043ca38
    FILD qword ptr [ESI]                ; 0043ca2c | DAT_007c755c
    ADD ESI,0x8                         ; 0043ca2e
    FISTP qword ptr [EDI]               ; 0043ca31 | DAT_007c7be0
    ADD EDI,0x8                         ; 0043ca33
    JMP 0x0043ca27                      ; 0043ca36
        ;   XREF to: 0043ca27 (UNCONDITIONAL_JUMP)  ; LAB_0043ca27
    ADD ECX,0x8                         ; 0043ca38
        ;   Label: LAB_0043ca38
    JLE 0x0043ca44                      ; 0043ca3b
        ;   XREF to: 0043ca44 (CONDITIONAL_JUMP)  ; LAB_0043ca44
    MOVSD ES:EDI,ESI                    ; 0043ca3d | DAT_007c755c | DAT_007c7be0
    SUB ECX,0x4                         ; 0043ca3e
    JLE 0x0043ca44                      ; 0043ca41
        ;   XREF to: 0043ca44 (CONDITIONAL_JUMP)  ; LAB_0043ca44
    MOVSD ES:EDI,ESI                    ; 0043ca43 | DAT_007c7560 | DAT_007c7be0+4
    XOR EAX,EAX                         ; 0043ca44
        ;   Label: LAB_0043ca44
    MOV ECX,dword ptr [0x007c7bd8]      ; 0043ca46 | DAT_007c7bd8
    MOV [0x007c7554],EAX                ; 0043ca4c | DAT_007c7554
    MOV dword ptr [ESP + 0x138],EAX     ; 0043ca51
    TEST ECX,ECX                        ; 0043ca58
    JLE 0x0043c690                      ; 0043ca5a
        ;   XREF to: 0043c690 (CONDITIONAL_JUMP)  ; LAB_0043c690
    MOV EBP,0x7c7bdc                    ; 0043ca60 | DAT_007c7bdc
    MOV EAX,dword ptr [ESP + 0x138]     ; 0043ca65
        ;   Label: LAB_0043ca65
    MOV ECX,dword ptr [0x007c7bd8]      ; 0043ca6c | DAT_007c7bd8
    INC EAX                             ; 0043ca72
    CMP EAX,ECX                         ; 0043ca73
    JNZ 0x0043ca79                      ; 0043ca75
        ;   XREF to: 0043ca79 (CONDITIONAL_JUMP)  ; LAB_0043ca79
    XOR EAX,ECX                         ; 0043ca77
    IMUL EAX,EAX,0x30                   ; 0043ca79
        ;   Label: LAB_0043ca79
    MOV EDX,0x7c7bdc                    ; 0043ca7c | DAT_007c7bdc
    MOV ESI,dword ptr [0x00610d44]      ; 0043ca81 | DAT_00610d44
    MOV EBX,EBP                         ; 0043ca87
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043ca89 | DAT_007c7be0+4 | DAT_007c7c10+4
    ADD EDX,EAX                         ; 0043ca8c
    XOR EAX,EAX                         ; 0043ca8e
    CMP ECX,ESI                         ; 0043ca90
    JL 0x0043ca99                       ; 0043ca92
        ;   XREF to: 0043ca99 (CONDITIONAL_JUMP)  ; LAB_0043ca99
    MOV EAX,0x1                         ; 0043ca94
    MOV EDI,dword ptr [0x00610d44]      ; 0043ca99 | DAT_00610d44
        ;   Label: LAB_0043ca99
    CMP EDI,dword ptr [EDX + 0x8]       ; 0043ca9f | DAT_007c7be0+4
    JG 0x0043caa6                       ; 0043caa2
        ;   XREF to: 0043caa6 (CONDITIONAL_JUMP)  ; LAB_0043caa6
    OR AL,0x2                           ; 0043caa4
    CMP EAX,0x3                         ; 0043caa6
        ;   Label: LAB_0043caa6
    JA 0x0043caf7                       ; 0043caa9
        ;   XREF to: 0043caf7 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43c17c]  ; 0043caab | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 0043cab2 | DAT_007c7554
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043cab9
    ADD EDI,0x7c7558                    ; 0043cabe | DAT_007c7558
    MOV ESI,EBX                         ; 0043cac4
    TEST EDI,0x7                        ; 0043cac6
    JZ 0x0043cad4                       ; 0043cacc
        ;   XREF to: 0043cad4 (CONDITIONAL_JUMP)  ; LAB_0043cad4
    MOVSD ES:EDI,ESI                    ; 0043cace | DAT_007c7c0c | DAT_007c7558
    SUB ECX,0x4                         ; 0043cacf
    JLE 0x0043caf1                      ; 0043cad2
        ;   XREF to: 0043caf1 (CONDITIONAL_JUMP)  ; LAB_0043caf1
    SUB ECX,0x8                         ; 0043cad4
        ;   Label: LAB_0043cad4
    JL 0x0043cae5                       ; 0043cad7
        ;   XREF to: 0043cae5 (CONDITIONAL_JUMP)  ; LAB_0043cae5
    FILD qword ptr [ESI]                ; 0043cad9 | DAT_007c7c0c | DAT_007c7c10+4
    ADD ESI,0x8                         ; 0043cadb
    FISTP qword ptr [EDI]               ; 0043cade | DAT_007c7558 | DAT_007c7560 | DAT_007c755c
    ADD EDI,0x8                         ; 0043cae0
    JMP 0x0043cad4                      ; 0043cae3
        ;   XREF to: 0043cad4 (UNCONDITIONAL_JUMP)  ; LAB_0043cad4
    ADD ECX,0x8                         ; 0043cae5
        ;   Label: LAB_0043cae5
    JLE 0x0043caf1                      ; 0043cae8
        ;   XREF to: 0043caf1 (CONDITIONAL_JUMP)  ; LAB_0043caf1
    MOVSD ES:EDI,ESI                    ; 0043caea | DAT_007c7c10+4 | DAT_007c7560
    SUB ECX,0x4                         ; 0043caeb
    JLE 0x0043caf1                      ; 0043caee
        ;   XREF to: 0043caf1 (CONDITIONAL_JUMP)  ; LAB_0043caf1
    MOVSD ES:EDI,ESI                    ; 0043caf0 | DAT_007c7c18 | DAT_007c7564
    INC dword ptr [0x007c7554]          ; 0043caf1 | DAT_007c7554
        ;   Label: LAB_0043caf1
    MOV EDI,dword ptr [ESP + 0x138]     ; 0043caf7
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007c7bd8]      ; 0043cafe | DAT_007c7bd8
    INC EDI                             ; 0043cb04
    ADD EBP,0x30                        ; 0043cb05
    MOV dword ptr [ESP + 0x138],EDI     ; 0043cb08
    CMP EDI,EDX                         ; 0043cb0f
    JGE 0x0043c690                      ; 0043cb11
        ;   XREF to: 0043c690 (CONDITIONAL_JUMP)  ; LAB_0043c690
    JMP 0x0043ca65                      ; 0043cb17
        ;   XREF to: 0043ca65 (UNCONDITIONAL_JUMP)  ; LAB_0043ca65
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 0043cb1c | DAT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 0043cb23 | DAT_007c7558
    PUSH EAX                            ; 0043cb28 | DAT_007c7558
    PUSH EBX                            ; 0043cb29 | DAT_007c7c0c
    PUSH EDX                            ; 0043cb2a
    CALL FUN_0043b8b0                   ; 0043cb2b
        ;   XREF to: 0043b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b8b0()
    MOV EBX,dword ptr [0x007c7554]      ; 0043cb30 | DAT_007c7554
    INC EBX                             ; 0043cb36
    ADD ESP,0xc                         ; 0043cb37
    MOV dword ptr [0x007c7554],EBX      ; 0043cb3a | DAT_007c7554
    JMP 0x0043caf7                      ; 0043cb40
        ;   XREF to: 0043caf7 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 0043cb42 | DAT_007c7554
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043cb49
    MOV ESI,EBX                         ; 0043cb4e
    ADD EDI,0x7c7558                    ; 0043cb50 | DAT_007c7558
    TEST EDI,0x7                        ; 0043cb56
    JZ 0x0043cb64                       ; 0043cb5c
        ;   XREF to: 0043cb64 (CONDITIONAL_JUMP)  ; LAB_0043cb64
    MOVSD ES:EDI,ESI                    ; 0043cb5e | DAT_007c7c0c | DAT_007c7558
    SUB ECX,0x4                         ; 0043cb5f
    JLE 0x0043cb81                      ; 0043cb62
        ;   XREF to: 0043cb81 (CONDITIONAL_JUMP)  ; LAB_0043cb81
    SUB ECX,0x8                         ; 0043cb64
        ;   Label: LAB_0043cb64
    JL 0x0043cb75                       ; 0043cb67
        ;   XREF to: 0043cb75 (CONDITIONAL_JUMP)  ; LAB_0043cb75
    FILD qword ptr [ESI]                ; 0043cb69 | DAT_007c7c0c | DAT_007c7c10+4
    ADD ESI,0x8                         ; 0043cb6b
    FISTP qword ptr [EDI]               ; 0043cb6e | DAT_007c7558 | DAT_007c7560 | DAT_007c755c
    ADD EDI,0x8                         ; 0043cb70
    JMP 0x0043cb64                      ; 0043cb73
        ;   XREF to: 0043cb64 (UNCONDITIONAL_JUMP)  ; LAB_0043cb64
    ADD ECX,0x8                         ; 0043cb75
        ;   Label: LAB_0043cb75
    JLE 0x0043cb81                      ; 0043cb78
        ;   XREF to: 0043cb81 (CONDITIONAL_JUMP)  ; LAB_0043cb81
    MOVSD ES:EDI,ESI                    ; 0043cb7a | DAT_007c7c10+4 | DAT_007c7560
    SUB ECX,0x4                         ; 0043cb7b
    JLE 0x0043cb81                      ; 0043cb7e
        ;   XREF to: 0043cb81 (CONDITIONAL_JUMP)  ; LAB_0043cb81
    MOVSD ES:EDI,ESI                    ; 0043cb80 | DAT_007c7c18 | DAT_007c7564
    MOV ECX,dword ptr [0x007c7554]      ; 0043cb81 | DAT_007c7554
        ;   Label: LAB_0043cb81
    INC ECX                             ; 0043cb87
    MOV dword ptr [0x007c7554],ECX      ; 0043cb88 | DAT_007c7554
    IMUL EAX,ECX,0x30                   ; 0043cb8e
    ADD EAX,0x7c7558                    ; 0043cb91 | DAT_007c7558
    PUSH EAX                            ; 0043cb96 | DAT_007c7588
    PUSH EDX                            ; 0043cb97
    PUSH EBX                            ; 0043cb98 | DAT_007c7c0c
    CALL FUN_0043b8b0                   ; 0043cb99
        ;   XREF to: 0043b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b8b0()
    MOV EDI,dword ptr [0x007c7554]      ; 0043cb9e | DAT_007c7554
    INC EDI                             ; 0043cba4
    ADD ESP,0xc                         ; 0043cba5
    MOV dword ptr [0x007c7554],EDI      ; 0043cba8 | DAT_007c7554
    JMP 0x0043caf7                      ; 0043cbae
        ;   XREF to: 0043caf7 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,dword ptr [EAX]             ; 0043cbb3 | DAT_007c7588
        ;   Label: LAB_0043cbb3
    CMP ECX,EBX                         ; 0043cbb5
    JLE 0x0043cbc0                      ; 0043cbb7
        ;   XREF to: 0043cbc0 (CONDITIONAL_JUMP)  ; LAB_0043cbc0
    MOV dword ptr [EAX],EBX             ; 0043cbb9 | DAT_007c7588
    JMP 0x0043c6c1                      ; 0043cbbb
        ;   XREF to: 0043c6c1 (UNCONDITIONAL_JUMP)  ; LAB_0043c6c1
    NEG EBX                             ; 0043cbc0
        ;   Label: LAB_0043cbc0
    CMP EBX,ECX                         ; 0043cbc2
    JLE 0x0043cbcd                      ; 0043cbc4
        ;   XREF to: 0043cbcd (CONDITIONAL_JUMP)  ; LAB_0043cbcd
    MOV dword ptr [EAX],EBX             ; 0043cbc6 | DAT_007c7588
    JMP 0x0043c6c1                      ; 0043cbc8
        ;   XREF to: 0043c6c1 (UNCONDITIONAL_JUMP)  ; LAB_0043c6c1
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043cbcd | DAT_007c7590
        ;   Label: LAB_0043cbcd
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043cbd0 | DAT_007c758c
    CMP ECX,EBP                         ; 0043cbd3
    JLE 0x0043cbdf                      ; 0043cbd5
        ;   XREF to: 0043cbdf (CONDITIONAL_JUMP)  ; LAB_0043cbdf
    MOV dword ptr [EAX + 0x4],EBP       ; 0043cbd7 | DAT_007c758c
    JMP 0x0043c6c1                      ; 0043cbda
        ;   XREF to: 0043c6c1 (UNCONDITIONAL_JUMP)  ; LAB_0043c6c1
    CMP EBX,ECX                         ; 0043cbdf
        ;   Label: LAB_0043cbdf
    JLE 0x0043c6c1                      ; 0043cbe1
        ;   XREF to: 0043c6c1 (CONDITIONAL_JUMP)  ; LAB_0043c6c1
    JMP 0x0043c6be                      ; 0043cbe7
        ;   XREF to: 0043c6be (UNCONDITIONAL_JUMP)  ; LAB_0043c6be

