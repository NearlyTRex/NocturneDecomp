; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d2f0(int param_1)
;
; Local Variables:
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
;   FUN_00550580 at 005505d5
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01481e54
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;   undefined4 DAT_01c50948
;
; Called Functions:
;   FUN_0044d210
;   FUN_004886f1
;   FUN_00582aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d2f0
        ;   Label: FUN_0044d2f0
    PUSH ESI                            ; 0044d2f1
    PUSH EDI                            ; 0044d2f2
    PUSH EBP                            ; 0044d2f3
    SUB ESP,0x24                        ; 0044d2f4
    MOV EDX,dword ptr [0x01c50948]      ; 0044d2f7 | DAT_01c50948
    TEST EDX,EDX                        ; 0044d2fd
    JNZ 0x0044d530                      ; 0044d2ff
        ;   XREF to: 0044d530 (CONDITIONAL_JUMP)  ; LAB_0044d530
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d305
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 0044d309
    CMP ECX,0x100                       ; 0044d30f
    JG 0x0044d554                       ; 0044d315
        ;   XREF to: 0044d554 (CONDITIONAL_JUMP)  ; LAB_0044d554
    XOR EBX,EBX                         ; 0044d31b
    TEST ECX,ECX                        ; 0044d31d
    JLE 0x0044d37b                      ; 0044d31f
        ;   XREF to: 0044d37b (CONDITIONAL_JUMP)  ; LAB_0044d37b
    LEA EDX,[EAX + 0x1d4]               ; 0044d321
    MOV EBP,dword ptr [EDX]             ; 0044d327
        ;   Label: LAB_0044d327
    MOV EAX,EDX                         ; 0044d329
    TEST EBP,EBP                        ; 0044d32b
    JL 0x0044d58d                       ; 0044d32d
        ;   XREF to: 0044d58d (CONDITIONAL_JUMP)  ; LAB_0044d58d
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044d333
        ;   Label: LAB_0044d333
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044d337
    MOV EDI,dword ptr [ESI + 0x144]     ; 0044d33a
    CMP ECX,EDI                         ; 0044d340
    JGE 0x0044d598                      ; 0044d342
        ;   XREF to: 0044d598 (CONDITIONAL_JUMP)  ; LAB_0044d598
    CMP dword ptr [EAX + 0x8],0x0       ; 0044d348
        ;   Label: LAB_0044d348
    JL 0x0044d5a3                       ; 0044d34c
        ;   XREF to: 0044d5a3 (CONDITIONAL_JUMP)  ; LAB_0044d5a3
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044d352
        ;   Label: LAB_0044d352
    MOV ECX,dword ptr [EAX + 0xc]       ; 0044d356
    MOV EDI,dword ptr [ESI + 0x148]     ; 0044d359
    CMP ECX,EDI                         ; 0044d35f
    JL 0x0044d369                       ; 0044d361
        ;   XREF to: 0044d369 (CONDITIONAL_JUMP)  ; LAB_0044d369
    LEA ECX,[EDI + -0x1]                ; 0044d363
    MOV dword ptr [EAX + 0xc],ECX       ; 0044d366
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d369
        ;   Label: LAB_0044d369
    INC EBX                             ; 0044d36d
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 0044d36e
    ADD EDX,0x10                        ; 0044d374
    CMP EBX,ECX                         ; 0044d377
    JL 0x0044d327                       ; 0044d379
        ;   XREF to: 0044d327 (CONDITIONAL_JUMP)  ; LAB_0044d327
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d37b
        ;   Label: LAB_0044d37b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0044d37f
    XOR ESI,ESI                         ; 0044d383
    XOR ECX,ECX                         ; 0044d385
    MOV dword ptr [ESP + 0x18],ESI      ; 0044d387
    MOV EDI,dword ptr [EAX + 0x1d0]     ; 0044d38b
    MOV EBX,dword ptr [EBX + 0x148]     ; 0044d391
    TEST EDI,EDI                        ; 0044d397
    JLE 0x0044d3cc                      ; 0044d399
        ;   XREF to: 0044d3cc (CONDITIONAL_JUMP)  ; LAB_0044d3cc
    ADD EAX,0x1d4                       ; 0044d39b
    MOV ESI,dword ptr [EAX + 0x8]       ; 0044d3a0
        ;   Label: LAB_0044d3a0
    MOV EDX,EAX                         ; 0044d3a3
    CMP EBX,ESI                         ; 0044d3a5
    JLE 0x0044d3ab                      ; 0044d3a7
        ;   XREF to: 0044d3ab (CONDITIONAL_JUMP)  ; LAB_0044d3ab
    MOV EBX,ESI                         ; 0044d3a9
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044d3ab
        ;   Label: LAB_0044d3ab
    MOV ESI,dword ptr [EDX + 0xc]       ; 0044d3af
    CMP ESI,EDI                         ; 0044d3b2
    JLE 0x0044d3ba                      ; 0044d3b4
        ;   XREF to: 0044d3ba (CONDITIONAL_JUMP)  ; LAB_0044d3ba
    MOV dword ptr [ESP + 0x18],ESI      ; 0044d3b6
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044d3ba
        ;   Label: LAB_0044d3ba
    INC ECX                             ; 0044d3be
    MOV EBP,dword ptr [EDX + 0x1d0]     ; 0044d3bf
    ADD EAX,0x10                        ; 0044d3c5
    CMP ECX,EBP                         ; 0044d3c8
    JL 0x0044d3a0                       ; 0044d3ca
        ;   XREF to: 0044d3a0 (CONDITIONAL_JUMP)  ; LAB_0044d3a0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d3cc
        ;   Label: LAB_0044d3cc
    MOV dword ptr [ESP + 0x20],EBX      ; 0044d3d0
    CMP EBX,EAX                         ; 0044d3d4
    JG 0x0044d528                       ; 0044d3d6
        ;   XREF to: 0044d528 (CONDITIONAL_JUMP)  ; LAB_0044d528
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d3dc
    SHL EBX,0x2                         ; 0044d3e0
    ADD EAX,0x1d4                       ; 0044d3e3
    MOV dword ptr [ESP + 0x14],EBX      ; 0044d3e8
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d3ec
    XOR ECX,ECX                         ; 0044d3f0
        ;   Label: LAB_0044d3f0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d3f2
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044d3f6
    MOV ESI,dword ptr [EAX + 0x1d0]     ; 0044d3fa
    MOV dword ptr [0x01481e54],ECX      ; 0044d400 | DAT_01481e54
    TEST ESI,ESI                        ; 0044d406
    JLE 0x0044d490                      ; 0044d408
        ;   XREF to: 0044d490 (CONDITIONAL_JUMP)  ; LAB_0044d490
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044d40e
    XOR EBP,EBP                         ; 0044d412
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044d414
        ;   Label: LAB_0044d414
    MOV ESI,dword ptr [EDI + 0x8]       ; 0044d418
    MOV EDX,EDI                         ; 0044d41b
    CMP EAX,ESI                         ; 0044d41d
    JL 0x0044d476                       ; 0044d41f
        ;   XREF to: 0044d476 (CONDITIONAL_JUMP)  ; LAB_0044d476
    CMP EAX,dword ptr [EDI + 0xc]       ; 0044d421
    JG 0x0044d476                       ; 0044d424
        ;   XREF to: 0044d476 (CONDITIONAL_JUMP)  ; LAB_0044d476
    MOV EBX,dword ptr [0x01481e54]      ; 0044d426 | DAT_01481e54
    XOR ECX,ECX                         ; 0044d42c
    TEST EBX,EBX                        ; 0044d42e
    JLE 0x0044d451                      ; 0044d430
        ;   XREF to: 0044d451 (CONDITIONAL_JUMP)  ; LAB_0044d451
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044d432
    XOR EAX,EAX                         ; 0044d439
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044d43b
        ;   Label: LAB_0044d43b
    CMP EBX,dword ptr [EAX + 0x1481e58] ; 0044d43e
    JGE 0x0044d5af                      ; 0044d444
        ;   XREF to: 0044d5af (CONDITIONAL_JUMP)  ; LAB_0044d5af
    ADD EAX,0x4                         ; 0044d44a
        ;   Label: LAB_0044d44a
    CMP EAX,ESI                         ; 0044d44d
    JL 0x0044d43b                       ; 0044d44f
        ;   XREF to: 0044d43b (CONDITIONAL_JUMP)  ; LAB_0044d43b
    TEST ECX,ECX                        ; 0044d451
        ;   Label: LAB_0044d451
    JNZ 0x0044d476                      ; 0044d453
        ;   XREF to: 0044d476 (CONDITIONAL_JUMP)  ; LAB_0044d476
    MOV EAX,dword ptr [EDX]             ; 0044d455
    MOV dword ptr [EBP + 0x1481e58],EAX ; 0044d457
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044d45d
    MOV EDX,dword ptr [0x01481e54]      ; 0044d460 | DAT_01481e54
    ADD EBP,0x4                         ; 0044d466
    INC EDX                             ; 0044d469
    MOV dword ptr [EBP + 0x1482254],EAX ; 0044d46a
    MOV dword ptr [0x01481e54],EDX      ; 0044d470 | DAT_01481e54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044d476
        ;   Label: LAB_0044d476
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044d47a
    ADD EDI,0x10                        ; 0044d47e
    INC EAX                             ; 0044d481
    MOV ECX,dword ptr [EDX + 0x1d0]     ; 0044d482
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044d488
    CMP EAX,ECX                         ; 0044d48c
    JL 0x0044d414                       ; 0044d48e
        ;   XREF to: 0044d414 (CONDITIONAL_JUMP)  ; LAB_0044d414
    MOV EBX,dword ptr [0x01481e54]      ; 0044d490 | DAT_01481e54
        ;   Label: LAB_0044d490
    XOR EDI,EDI                         ; 0044d496
    TEST EBX,EBX                        ; 0044d498
    JLE 0x0044d508                      ; 0044d49a
        ;   XREF to: 0044d508 (CONDITIONAL_JUMP)  ; LAB_0044d508
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044d49c
    XOR ESI,ESI                         ; 0044d4a0
    MOV EAX,dword ptr [ESI + 0x1481e58] ; 0044d4a2
        ;   Label: LAB_0044d4a2
    MOV EDX,dword ptr [EBP + 0x1c4480c] ; 0044d4a8 | DAT_01c4480c | DAT_01c44810
    SHL EAX,0x2                         ; 0044d4ae
    LEA ECX,[EDX + EAX*0x1]             ; 0044d4b1
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044d4b4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044d4b8
    IMUL EAX,dword ptr [EDX + 0x144]    ; 0044d4bc
    ADD EAX,dword ptr [ESI + 0x1481e58] ; 0044d4c3
    LEA EDX,[EAX*0x4 + 0x0]             ; 0044d4c9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d4d0
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0044d4d4
    MOV EBX,dword ptr [ESI + 0x1481e58] ; 0044d4da
    ADD EDX,EAX                         ; 0044d4e0
    MOV EAX,dword ptr [ESI + 0x1482258] ; 0044d4e2
    SUB EAX,EBX                         ; 0044d4e8
    SHL EAX,0x2                         ; 0044d4ea
    ADD EAX,0x4                         ; 0044d4ed
    PUSH EAX                            ; 0044d4f0
    PUSH EDX                            ; 0044d4f1
    PUSH ECX                            ; 0044d4f2
    ADD ESI,0x4                         ; 0044d4f3
    INC EDI                             ; 0044d4f6
    CALL FUN_004886f1                   ; 0044d4f7
        ;   XREF to: 004886f1 (UNCONDITIONAL_CALL)  ; undefined FUN_004886f1()
    MOV EAX,[0x01481e54]                ; 0044d4fc | DAT_01481e54
    ADD ESP,0xc                         ; 0044d501
    CMP EDI,EAX                         ; 0044d504
    JL 0x0044d4a2                       ; 0044d506
        ;   XREF to: 0044d4a2 (CONDITIONAL_JUMP)  ; LAB_0044d4a2
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044d508
        ;   Label: LAB_0044d508
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044d50c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044d510
    ADD EBP,0x4                         ; 0044d514
    INC EAX                             ; 0044d517
    MOV dword ptr [ESP + 0x14],EBP      ; 0044d518
    MOV dword ptr [ESP + 0x20],EAX      ; 0044d51c
    CMP EAX,EDX                         ; 0044d520
    JLE 0x0044d3f0                      ; 0044d522
        ;   XREF to: 0044d3f0 (CONDITIONAL_JUMP)  ; LAB_0044d3f0
    ADD ESP,0x24                        ; 0044d528
        ;   Label: LAB_0044d528
    POP EBP                             ; 0044d52b
    POP EDI                             ; 0044d52c
    POP ESI                             ; 0044d52d
    POP EBX                             ; 0044d52e
    RET                                 ; 0044d52f
    MOV EAX,[0x0061b49c]                ; 0044d530 | DAT_0061b49c
        ;   Label: LAB_0044d530
    DEC EAX                             ; 0044d535
    PUSH EAX                            ; 0044d536
    MOV EAX,[0x0061b498]                ; 0044d537 | DAT_0061b498
    DEC EAX                             ; 0044d53c
    PUSH EAX                            ; 0044d53d
    PUSH 0x0                            ; 0044d53e
    PUSH 0x0                            ; 0044d540
    PUSH 0x0                            ; 0044d542
    CALL FUN_00582aa0                   ; 0044d544
        ;   XREF to: 00582aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00582aa0()
    ADD ESP,0x14                        ; 0044d549
    ADD ESP,0x24                        ; 0044d54c
    POP EBP                             ; 0044d54f
    POP EDI                             ; 0044d550
    POP ESI                             ; 0044d551
    POP EBX                             ; 0044d552
    RET                                 ; 0044d553
    MOV dword ptr [ESP],EDX             ; 0044d554
        ;   Label: LAB_0044d554
    MOV dword ptr [ESP + 0x8],EDX       ; 0044d557
    MOV EAX,dword ptr [EAX + 0x144]     ; 0044d55b
    DEC EAX                             ; 0044d561
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d562
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044d566
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044d56a
    DEC EAX                             ; 0044d570
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d571
    MOV EAX,ESP                         ; 0044d575
    PUSH EAX                            ; 0044d577
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044d578
    PUSH EAX                            ; 0044d57c
    CALL FUN_0044d210                   ; 0044d57d
        ;   XREF to: 0044d210 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d210()
    ADD ESP,0x8                         ; 0044d582
    ADD ESP,0x24                        ; 0044d585
    POP EBP                             ; 0044d588
    POP EDI                             ; 0044d589
    POP ESI                             ; 0044d58a
    POP EBX                             ; 0044d58b
    RET                                 ; 0044d58c
    MOV dword ptr [EDX],0x0             ; 0044d58d
        ;   Label: LAB_0044d58d
    JMP 0x0044d333                      ; 0044d593
        ;   XREF to: 0044d333 (UNCONDITIONAL_JUMP)  ; LAB_0044d333
    LEA ECX,[EDI + -0x1]                ; 0044d598
        ;   Label: LAB_0044d598
    MOV dword ptr [EAX + 0x4],ECX       ; 0044d59b
    JMP 0x0044d348                      ; 0044d59e
        ;   XREF to: 0044d348 (UNCONDITIONAL_JUMP)  ; LAB_0044d348
    MOV dword ptr [EAX + 0x8],0x0       ; 0044d5a3
        ;   Label: LAB_0044d5a3
    JMP 0x0044d352                      ; 0044d5aa
        ;   XREF to: 0044d352 (UNCONDITIONAL_JUMP)  ; LAB_0044d352
    MOV EBX,dword ptr [EDX]             ; 0044d5af
        ;   Label: LAB_0044d5af
    CMP EBX,dword ptr [EAX + 0x1482258] ; 0044d5b1
    JG 0x0044d44a                       ; 0044d5b7
        ;   XREF to: 0044d44a (CONDITIONAL_JUMP)  ; LAB_0044d44a
    CMP EBX,dword ptr [EAX + 0x1481e58] ; 0044d5bd
    JL 0x0044d5d4                       ; 0044d5c3
        ;   XREF to: 0044d5d4 (CONDITIONAL_JUMP)  ; LAB_0044d5d4
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044d5c5
    CMP EBX,dword ptr [EAX + 0x1482258] ; 0044d5c8
    JLE 0x0044d476                      ; 0044d5ce
        ;   XREF to: 0044d476 (CONDITIONAL_JUMP)  ; LAB_0044d476
    MOV EBX,dword ptr [EDX]             ; 0044d5d4
        ;   Label: LAB_0044d5d4
    CMP EBX,dword ptr [EAX + 0x1481e58] ; 0044d5d6
    JGE 0x0044d5e9                      ; 0044d5dc
        ;   XREF to: 0044d5e9 (CONDITIONAL_JUMP)  ; LAB_0044d5e9
    MOV ECX,0x1                         ; 0044d5de
    MOV dword ptr [EAX + 0x1481e58],EBX ; 0044d5e3
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044d5e9
        ;   Label: LAB_0044d5e9
    CMP EBX,dword ptr [EAX + 0x1482258] ; 0044d5ec
    JLE 0x0044d5ff                      ; 0044d5f2
        ;   XREF to: 0044d5ff (CONDITIONAL_JUMP)  ; LAB_0044d5ff
    MOV dword ptr [EAX + 0x1482258],EBX ; 0044d5f4
    JMP 0x0044d476                      ; 0044d5fa
        ;   XREF to: 0044d476 (UNCONDITIONAL_JUMP)  ; LAB_0044d476
    TEST ECX,ECX                        ; 0044d5ff
        ;   Label: LAB_0044d5ff
    JNZ 0x0044d451                      ; 0044d601
        ;   XREF to: 0044d451 (CONDITIONAL_JUMP)  ; LAB_0044d451
    JMP 0x0044d44a                      ; 0044d607
        ;   XREF to: 0044d44a (UNCONDITIONAL_JUMP)  ; LAB_0044d44a

