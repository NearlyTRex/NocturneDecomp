; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0050d170(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050baa0 at 0050c1dc
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_005cb744
;   TerminatedCString s_queuePop_empty_queue_005cb755
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ec1514
;   undefined4 DAT_01ec183c
;   undefined4 DAT_01ec1840
;   undefined4 DAT_01ec1844
;   undefined4 DAT_01ec1848
;   undefined4 DAT_01ec184c
;   undefined4 DAT_01ec1850
;   undefined4 DAT_01ec1854
;   undefined4 DAT_01ec1858
;   undefined4 DAT_01ec185c
;   undefined4 DAT_01ec1860
;   ... and 12 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_0050b320
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d170
        ;   Label: FUN_0050d170
    PUSH ESI                            ; 0050d171
    PUSH EDI                            ; 0050d172
    PUSH EBP                            ; 0050d173
    SUB ESP,0x18                        ; 0050d174
    MOV EBX,dword ptr [0x01ed02b0]      ; 0050d177 | DAT_01ed02b0
    PUSH 0x2774                         ; 0050d17d
    PUSH 0x0                            ; 0050d182
    PUSH 0x1ed02b8                      ; 0050d184
    MOV ESI,0x1                         ; 0050d189
    CALL FUN_005a28f0                   ; 0050d18e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV ECX,dword ptr [0x01ec183c]      ; 0050d193 | DAT_01ec183c
    MOV EBX,dword ptr [0x01ec1840]      ; 0050d199 | DAT_01ec1840
    ADD ESP,0xc                         ; 0050d19f
    MOV dword ptr [0x01ed2a2c],ESI      ; 0050d1a2 | DAT_01ed2a2c
    XOR EDX,EDX                         ; 0050d1a8
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050d1aa
    MOV dword ptr [0x01ed02ac],EDX      ; 0050d1b1 | DAT_01ed02ac
    SUB EAX,EBX                         ; 0050d1b7
    MOV dword ptr [ESP + 0x4],ESI       ; 0050d1b9
    SHL EAX,0x3                         ; 0050d1bd
    MOV dword ptr [0x01ec184c],ECX      ; 0050d1c0 | DAT_01ec184c
    ADD EAX,EBX                         ; 0050d1c6
    MOV DL,byte ptr [ESP + 0x4]         ; 0050d1c8
    MOV dword ptr [0x01ec1854],EBX      ; 0050d1cc | DAT_01ec1854
    MOV byte ptr [ECX + EAX*0x4 + 0x1ed02b8],DL ; 0050d1d2
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050d1d9
    MOV EBX,ESI                         ; 0050d1dd
    MOV [0x01ec1850],EAX                ; 0050d1df | DAT_01ec1850
    IMUL EAX,dword ptr [0x01ec1848],0x64 ; 0050d1e4 | DAT_01ec1848
        ;   Label: LAB_0050d1e4
    ADD EAX,dword ptr [0x01ec1844]      ; 0050d1eb | DAT_01ec1844
    CMP byte ptr [EAX + 0x1ed02b8],0x0  ; 0050d1f1
    JNZ 0x0050d329                      ; 0050d1f8
        ;   XREF to: 0050d329 (CONDITIONAL_JUMP)  ; LAB_0050d329
    LEA ESI,[ESP + 0xc]                 ; 0050d1fe
    LEA EBP,[ESP + 0x10]                ; 0050d202
    LEA EDI,[ESP + 0x8]                 ; 0050d206
    MOV EAX,[0x01ed02ac]                ; 0050d20a | DAT_01ed02ac
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d20f | DAT_01ed02b0
    CMP EAX,EBX                         ; 0050d215
    JZ 0x0050d330                       ; 0050d217
        ;   XREF to: 0050d330 (CONDITIONAL_JUMP)  ; LAB_0050d330
    IMUL EAX,dword ptr [0x01ed02ac],0xc ; 0050d21d | DAT_01ed02ac
        ;   Label: LAB_0050d21d
    MOV EDX,dword ptr [EAX + 0x1ec184c] ; 0050d224 | DAT_01ec184c | DAT_01ec1858
    MOV dword ptr [EDI],EDX             ; 0050d22a
    MOV EDX,dword ptr [EAX + 0x1ec1850] ; 0050d22c | DAT_01ec1850 | DAT_01ec185c
    MOV ECX,dword ptr [0x01ed02ac]      ; 0050d232 | DAT_01ed02ac
    MOV dword ptr [ESI],EDX             ; 0050d238
    INC ECX                             ; 0050d23a
    MOV EAX,dword ptr [EAX + 0x1ec1854] ; 0050d23b | DAT_01ec1854 | DAT_01ec1860
    MOV dword ptr [0x01ed02ac],ECX      ; 0050d241 | DAT_01ed02ac
    MOV dword ptr [EBP],EAX             ; 0050d247
    CMP ECX,0x1388                      ; 0050d24a
    JL 0x0050d25a                       ; 0050d250
        ;   XREF to: 0050d25a (CONDITIONAL_JUMP)  ; LAB_0050d25a
    XOR EDI,EDI                         ; 0050d252
    MOV dword ptr [0x01ed02ac],EDI      ; 0050d254 | DAT_01ed02ac
    MOV EBP,dword ptr [ESP + 0xc]       ; 0050d25a
        ;   Label: LAB_0050d25a
    PUSH EBP                            ; 0050d25e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d25f
    PUSH EAX                            ; 0050d263
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050d264
    INC EAX                             ; 0050d268
    PUSH EAX                            ; 0050d269
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050d26a
    PUSH EDX                            ; 0050d26e
    CALL FUN_0050b320                   ; 0050d26f
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050d274
    MOV EBP,EAX                         ; 0050d277
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050d279
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d27d
    PUSH ECX                            ; 0050d281
    INC EAX                             ; 0050d282
    PUSH EAX                            ; 0050d283
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050d284
    PUSH ESI                            ; 0050d288
    MOV EDI,dword ptr [ESP + 0x38]      ; 0050d289
    PUSH EDI                            ; 0050d28d
    CALL FUN_0050b320                   ; 0050d28e
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050d293
    MOV EDI,EAX                         ; 0050d296
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d298
    PUSH EAX                            ; 0050d29c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050d29d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050d2a1
    PUSH EDX                            ; 0050d2a5
    DEC EAX                             ; 0050d2a6
    PUSH EAX                            ; 0050d2a7
    MOV ECX,dword ptr [ESP + 0x38]      ; 0050d2a8
    PUSH ECX                            ; 0050d2ac
    CALL FUN_0050b320                   ; 0050d2ad
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050d2b2
    MOV ESI,EAX                         ; 0050d2b5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d2b7
    PUSH EAX                            ; 0050d2bb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d2bc
    DEC EAX                             ; 0050d2c0
    PUSH EAX                            ; 0050d2c1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050d2c2
    PUSH EDX                            ; 0050d2c6
    MOV ECX,dword ptr [ESP + 0x38]      ; 0050d2c7
    PUSH ECX                            ; 0050d2cb
    CALL FUN_0050b320                   ; 0050d2cc
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    MOV EDX,dword ptr [0x01ec183c]      ; 0050d2d1 | DAT_01ec183c
    ADD ESP,0x10                        ; 0050d2d7
    MOV ECX,EAX                         ; 0050d2da
    CMP EDX,dword ptr [ESP + 0x8]       ; 0050d2dc
    JZ 0x0050d357                       ; 0050d2e0
        ;   XREF to: 0050d357 (CONDITIONAL_JUMP)  ; LAB_0050d357
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d2e2
        ;   Label: LAB_0050d2e2
    CMP EAX,dword ptr [0x01ec1844]      ; 0050d2e6 | DAT_01ec1844
    JZ 0x0050d5b5                       ; 0050d2ec
        ;   XREF to: 0050d5b5 (CONDITIONAL_JUMP)  ; LAB_0050d5b5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d2f2
        ;   Label: LAB_0050d2f2
    MOV EDX,dword ptr [0x01ec1514]      ; 0050d2f6 | DAT_01ec1514
    SUB EAX,EBP                         ; 0050d2fc
    CMP EAX,EDX                         ; 0050d2fe
    JL 0x0050d5ca                       ; 0050d300
        ;   XREF to: 0050d5ca (CONDITIONAL_JUMP)  ; LAB_0050d5ca
    MOV EBX,dword ptr [0x01ed02b0]      ; 0050d306 | DAT_01ed02b0
        ;   Label: LAB_0050d306
    MOV EAX,[0x01ed02ac]                ; 0050d30c | DAT_01ed02ac
    CMP EAX,EBX                         ; 0050d311
    JNZ 0x0050d1e4                      ; 0050d313
        ;   XREF to: 0050d1e4 (CONDITIONAL_JUMP)  ; LAB_0050d1e4
    XOR EAX,EBX                         ; 0050d319
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d31b | DAT_01ed02b0
        ;   Label: LAB_0050d31b
    ADD ESP,0x18                        ; 0050d321
    POP EBP                             ; 0050d324
    POP EDI                             ; 0050d325
    POP ESI                             ; 0050d326
    POP EBX                             ; 0050d327
    RET                                 ; 0050d328
    MOV EAX,0x1                         ; 0050d329
        ;   Label: LAB_0050d329
    JMP 0x0050d31b                      ; 0050d32e
        ;   XREF to: 0050d31b (UNCONDITIONAL_JUMP)  ; LAB_0050d31b
    MOV ECX,0x5cb744                    ; 0050d330 | = "..\\core\\path.cpp"
        ;   Label: LAB_0050d330
    MOV EAX,0xdf                        ; 0050d335
    PUSH 0x5cb755                       ; 0050d33a | = "queuePop - empty queue?!"
    MOV dword ptr [0x01d71de0],ECX      ; 0050d33f | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0050d345 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0050d34a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0050d34f
    JMP 0x0050d21d                      ; 0050d352
        ;   XREF to: 0050d21d (UNCONDITIONAL_JUMP)  ; LAB_0050d21d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d357
        ;   Label: LAB_0050d357
    CMP EAX,dword ptr [0x01ec1840]      ; 0050d35b | DAT_01ec1840
    JNZ 0x0050d2e2                      ; 0050d361
        ;   XREF to: 0050d2e2 (CONDITIONAL_JUMP)  ; LAB_0050d2e2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d367
        ;   Label: LAB_0050d367
    CMP EAX,0x63                        ; 0050d36b
    JGE 0x0050d400                      ; 0050d36e
        ;   XREF to: 0050d400 (CONDITIONAL_JUMP)  ; LAB_0050d400
    INC EAX                             ; 0050d374
    IMUL EAX,EAX,0x64                   ; 0050d375
    ADD EAX,dword ptr [ESP + 0x8]       ; 0050d378
    CMP byte ptr [EAX + 0x1ed02b8],0x0  ; 0050d37c
    JNZ 0x0050d400                      ; 0050d383
        ;   XREF to: 0050d400 (CONDITIONAL_JUMP)  ; LAB_0050d400
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050d389
    MOV EAX,EBP                         ; 0050d38d
    SUB EAX,EDX                         ; 0050d38f
    CDQ                                 ; 0050d391
    XOR EAX,EDX                         ; 0050d392
    SUB EAX,EDX                         ; 0050d394
    CMP EAX,dword ptr [0x01ec1514]      ; 0050d396 | DAT_01ec1514
    JGE 0x0050d400                      ; 0050d39c
        ;   XREF to: 0050d400 (CONDITIONAL_JUMP)  ; LAB_0050d400
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d39e
    INC EAX                             ; 0050d3a2
    MOV dword ptr [ESP + 0x14],EAX      ; 0050d3a3
    IMUL EAX,EAX,0x64                   ; 0050d3a7
    ADD EAX,dword ptr [ESP + 0x8]       ; 0050d3aa
    MOV EDX,0x1                         ; 0050d3ae
    MOV EBX,dword ptr [0x01ed02b0]      ; 0050d3b3 | DAT_01ed02b0
    MOV byte ptr [EAX + 0x1ed02b8],DL   ; 0050d3b9
    IMUL EDX,EBX,0xc                    ; 0050d3bf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d3c2
    MOV dword ptr [EDX + 0x1ec184c],EAX ; 0050d3c6 | DAT_01ec1858
    INC EBX                             ; 0050d3cc
    MOV dword ptr [EDX + 0x1ec1850],EBP ; 0050d3cd | DAT_01ec185c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050d3d3
    MOV EBP,dword ptr [0x01ed2a2c]      ; 0050d3d7 | DAT_01ed2a2c
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d3dd | DAT_01ed02b0
    INC EBP                             ; 0050d3e3
    MOV dword ptr [EDX + 0x1ec1854],EAX ; 0050d3e4 | DAT_01ec1860
    MOV dword ptr [0x01ed2a2c],EBP      ; 0050d3ea | DAT_01ed2a2c
    CMP EBX,0x1388                      ; 0050d3f0
    JL 0x0050d400                       ; 0050d3f6
        ;   XREF to: 0050d400 (CONDITIONAL_JUMP)  ; LAB_0050d400
    XOR EBX,EBX                         ; 0050d3f8
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d3fa | DAT_01ed02b0
    CMP dword ptr [ESP + 0x8],0x63      ; 0050d400
        ;   Label: LAB_0050d400
    JGE 0x0050d487                      ; 0050d405
        ;   XREF to: 0050d487 (CONDITIONAL_JUMP)  ; LAB_0050d487
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 0050d40b
    ADD EAX,dword ptr [ESP + 0x8]       ; 0050d410
    CMP byte ptr [EAX + 0x1ed02b9],0x0  ; 0050d414
    JNZ 0x0050d487                      ; 0050d41b
        ;   XREF to: 0050d487 (CONDITIONAL_JUMP)  ; LAB_0050d487
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050d41d
    MOV EAX,EDI                         ; 0050d421
    SUB EAX,EDX                         ; 0050d423
    CDQ                                 ; 0050d425
    XOR EAX,EDX                         ; 0050d426
    SUB EAX,EDX                         ; 0050d428
    CMP EAX,dword ptr [0x01ec1514]      ; 0050d42a | DAT_01ec1514
    JGE 0x0050d487                      ; 0050d430
        ;   XREF to: 0050d487 (CONDITIONAL_JUMP)  ; LAB_0050d487
    MOV EBP,dword ptr [ESP + 0x10]      ; 0050d432
    IMUL EBX,EBP,0x64                   ; 0050d436
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d439
    MOV EDX,0x3                         ; 0050d43d
    MOV byte ptr [EBX + EAX*0x1 + 0x1ed02b9],DL ; 0050d442
    MOV EBX,dword ptr [0x01ed02b0]      ; 0050d449 | DAT_01ed02b0
    IMUL EDX,EBX,0xc                    ; 0050d44f
    INC EAX                             ; 0050d452
    MOV dword ptr [EDX + 0x1ec184c],EAX ; 0050d453 | DAT_01ec1864
    INC EBX                             ; 0050d459
    MOV dword ptr [EDX + 0x1ec1850],EDI ; 0050d45a | DAT_01ec1868
    MOV EAX,[0x01ed2a2c]                ; 0050d460 | DAT_01ed2a2c
    MOV dword ptr [EDX + 0x1ec1854],EBP ; 0050d465 | DAT_01ec186c
    INC EAX                             ; 0050d46b
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d46c | DAT_01ed02b0
    MOV [0x01ed2a2c],EAX                ; 0050d472 | DAT_01ed2a2c
    CMP EBX,0x1388                      ; 0050d477
    JL 0x0050d487                       ; 0050d47d
        ;   XREF to: 0050d487 (CONDITIONAL_JUMP)  ; LAB_0050d487
    XOR EBX,EBX                         ; 0050d47f
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d481 | DAT_01ed02b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050d487
        ;   Label: LAB_0050d487
    TEST EDX,EDX                        ; 0050d48b
    JLE 0x0050d515                      ; 0050d48d
        ;   XREF to: 0050d515 (CONDITIONAL_JUMP)  ; LAB_0050d515
    LEA EAX,[EDX + -0x1]                ; 0050d493
    IMUL EAX,EAX,0x64                   ; 0050d496
    ADD EAX,dword ptr [ESP + 0x8]       ; 0050d499
    CMP byte ptr [EAX + 0x1ed02b8],0x0  ; 0050d49d
    JNZ 0x0050d515                      ; 0050d4a4
        ;   XREF to: 0050d515 (CONDITIONAL_JUMP)  ; LAB_0050d515
    MOV EBP,dword ptr [ESP + 0xc]       ; 0050d4a6
    MOV EAX,ESI                         ; 0050d4aa
    SUB EAX,EBP                         ; 0050d4ac
    CDQ                                 ; 0050d4ae
    XOR EAX,EDX                         ; 0050d4af
    SUB EAX,EDX                         ; 0050d4b1
    CMP EAX,dword ptr [0x01ec1514]      ; 0050d4b3 | DAT_01ec1514
    JGE 0x0050d515                      ; 0050d4b9
        ;   XREF to: 0050d515 (CONDITIONAL_JUMP)  ; LAB_0050d515
    MOV EDI,dword ptr [ESP + 0x10]      ; 0050d4bb
    DEC EDI                             ; 0050d4bf
    IMUL EDX,EDI,0x64                   ; 0050d4c0
    ADD EDX,dword ptr [ESP + 0x8]       ; 0050d4c3
    MOV EAX,0x2                         ; 0050d4c7
    MOV EBX,dword ptr [0x01ed02b0]      ; 0050d4cc | DAT_01ed02b0
    MOV byte ptr [EDX + 0x1ed02b8],AL   ; 0050d4d2
    IMUL EDX,EBX,0xc                    ; 0050d4d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d4db
    MOV dword ptr [EDX + 0x1ec184c],EAX ; 0050d4df | DAT_01ec1870
    INC EBX                             ; 0050d4e5
    MOV dword ptr [EDX + 0x1ec1850],ESI ; 0050d4e6 | DAT_01ec1874
    MOV ESI,dword ptr [0x01ed2a2c]      ; 0050d4ec | DAT_01ed2a2c
    MOV dword ptr [EDX + 0x1ec1854],EDI ; 0050d4f2 | DAT_01ec1878
    INC ESI                             ; 0050d4f8
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d4f9 | DAT_01ed02b0
    MOV dword ptr [0x01ed2a2c],ESI      ; 0050d4ff | DAT_01ed2a2c
    CMP EBX,0x1388                      ; 0050d505
    JL 0x0050d515                       ; 0050d50b
        ;   XREF to: 0050d515 (CONDITIONAL_JUMP)  ; LAB_0050d515
    XOR EBX,EBX                         ; 0050d50d
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d50f | DAT_01ed02b0
    MOV EDI,dword ptr [ESP + 0x8]       ; 0050d515
        ;   Label: LAB_0050d515
    TEST EDI,EDI                        ; 0050d519
    JLE 0x0050d306                      ; 0050d51b
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 0050d521
    ADD EAX,EDI                         ; 0050d526
    CMP byte ptr [EAX + 0x1ed02b7],0x0  ; 0050d528
    JNZ 0x0050d306                      ; 0050d52f
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    MOV ESI,dword ptr [ESP + 0xc]       ; 0050d535
    MOV EAX,ECX                         ; 0050d539
    SUB EAX,ESI                         ; 0050d53b
    CDQ                                 ; 0050d53d
    XOR EAX,EDX                         ; 0050d53e
    SUB EAX,EDX                         ; 0050d540
    CMP EAX,dword ptr [0x01ec1514]      ; 0050d542 | DAT_01ec1514
    JGE 0x0050d306                      ; 0050d548
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    IMUL EDX,dword ptr [ESP + 0x10],0x64 ; 0050d54e
    MOV dword ptr [ESP],0x4             ; 0050d553
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d55a
    MOV BL,byte ptr [ESP]               ; 0050d55e
    MOV byte ptr [EDX + EAX*0x1 + 0x1ed02b7],BL ; 0050d561
    MOV EBX,dword ptr [0x01ed02b0]      ; 0050d568 | DAT_01ed02b0
    IMUL EDX,EBX,0xc                    ; 0050d56e
    MOV ESI,dword ptr [0x01ed2a2c]      ; 0050d571 | DAT_01ed2a2c
    INC ESI                             ; 0050d577
    DEC EAX                             ; 0050d578
    MOV dword ptr [0x01ed2a2c],ESI      ; 0050d579 | DAT_01ed2a2c
    MOV dword ptr [EDX + 0x1ec184c],EAX ; 0050d57f | DAT_01ec187c
    INC EBX                             ; 0050d585
    MOV dword ptr [EDX + 0x1ec1850],ECX ; 0050d586 | DAT_01ec1880
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d58c
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d590 | DAT_01ed02b0
    MOV dword ptr [EDX + 0x1ec1854],EAX ; 0050d596 | DAT_01ec1884
    CMP EBX,0x1388                      ; 0050d59c
    JL 0x0050d306                       ; 0050d5a2
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    XOR EBX,EBX                         ; 0050d5a8
    MOV dword ptr [0x01ed02b0],EBX      ; 0050d5aa | DAT_01ed02b0
    JMP 0x0050d306                      ; 0050d5b0
        ;   XREF to: 0050d306 (UNCONDITIONAL_JUMP)  ; LAB_0050d306
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d5b5
        ;   Label: LAB_0050d5b5
    CMP EAX,dword ptr [0x01ec1848]      ; 0050d5b9 | DAT_01ec1848
    JNZ 0x0050d2f2                      ; 0050d5bf
        ;   XREF to: 0050d2f2 (CONDITIONAL_JUMP)  ; LAB_0050d2f2
    JMP 0x0050d367                      ; 0050d5c5
        ;   XREF to: 0050d367 (UNCONDITIONAL_JUMP)  ; LAB_0050d367
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d5ca
        ;   Label: LAB_0050d5ca
    SUB EAX,ESI                         ; 0050d5ce
    CMP EAX,EDX                         ; 0050d5d0
    JGE 0x0050d306                      ; 0050d5d2
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d5d8
    SUB EAX,EDI                         ; 0050d5dc
    CMP EAX,EDX                         ; 0050d5de
    JGE 0x0050d306                      ; 0050d5e0
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d5e6
    SUB EAX,ECX                         ; 0050d5ea
    CMP EAX,EDX                         ; 0050d5ec
    JGE 0x0050d306                      ; 0050d5ee
        ;   XREF to: 0050d306 (CONDITIONAL_JUMP)  ; LAB_0050d306
    JMP 0x0050d367                      ; 0050d5f4
        ;   XREF to: 0050d367 (UNCONDITIONAL_JUMP)  ; LAB_0050d367

