; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004852f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   FUN_00485640 at 0048581f
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb64
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   FUN_00402f30
;   FUN_00403040
;   FUN_004f3520
;   FUN_004f3ab0
;   FUN_004f3ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004852f0
        ;   Label: FUN_004852f0
    PUSH ESI                            ; 004852f1
    PUSH EDI                            ; 004852f2
    PUSH EBP                            ; 004852f3
    MOV ESI,dword ptr [ESP + 0x24]      ; 004852f4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004852f8
    MOV EDX,dword ptr [0x01c5baec]      ; 004852fc | DAT_01c5baec
    MOV EBX,dword ptr [0x01c5bb64]      ; 00485302 | DAT_01c5bb64
    TEST EDX,EDX                        ; 00485308
    JNZ 0x00485380                      ; 0048530a
        ;   XREF to: 00485380 (CONDITIONAL_JUMP)  ; LAB_00485380
    MOV dword ptr [0x01c6b5c0],EBX      ; 0048530c | DAT_01c6b5c0
    TEST EDI,EDI                        ; 00485312
        ;   Label: LAB_00485312
    JNZ 0x004853bf                      ; 00485314
        ;   XREF to: 004853bf (CONDITIONAL_JUMP)  ; LAB_004853bf
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048531a
        ;   Label: LAB_0048531a
    ADD EDX,dword ptr [ESP + 0x1c]      ; 0048531e
    DEC EDX                             ; 00485322
    MOV EAX,EDX                         ; 00485323
    SAR EDX,0x1f                        ; 00485325
    SUB EAX,EDX                         ; 00485328
    SAR EAX,0x1                         ; 0048532a
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048532c
    MOV EDX,dword ptr [ESP + 0x20]      ; 00485330
    LEA EBX,[EAX + ESI*0x1]             ; 00485334
    SUB EDX,ECX                         ; 00485337
    MOV EBP,0x3                         ; 00485339
    MOV EAX,EDX                         ; 0048533e
    SAR EDX,0x1f                        ; 00485340
    IDIV EBP                            ; 00485343
    LEA EBP,[EBX + EAX*0x1]             ; 00485345
    TEST EDI,EDI                        ; 00485348
    JNZ 0x00485454                      ; 0048534a
        ;   XREF to: 00485454 (CONDITIONAL_JUMP)  ; LAB_00485454
    LEA EDX,[ECX + EAX*0x1 + 0x1]       ; 00485350
    ADD ESI,EDX                         ; 00485354
    TEST EAX,EAX                        ; 00485356
    JLE 0x0048537b                      ; 00485358
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    MOV EDI,EBX                         ; 0048535a
    CMP dword ptr [0x01c5baec],0x0      ; 0048535c | DAT_01c5baec
        ;   Label: LAB_0048535c
    JNZ 0x00485439                      ; 00485363
        ;   XREF to: 00485439 (CONDITIONAL_JUMP)  ; LAB_00485439
    PUSH EBX                            ; 00485369
    PUSH ESI                            ; 0048536a
    PUSH EDI                            ; 0048536b
    CALL FUN_00402f30                   ; 0048536c
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 00485371
    DEC EDI                             ; 00485374
    INC EBX                             ; 00485375
    INC ESI                             ; 00485376
    CMP EBX,EBP                         ; 00485377
    JL 0x0048535c                       ; 00485379
        ;   XREF to: 0048535c (CONDITIONAL_JUMP)  ; LAB_0048535c
    POP EBP                             ; 0048537b
        ;   Label: LAB_0048537b
    POP EDI                             ; 0048537c
    POP ESI                             ; 0048537d
    POP EBX                             ; 0048537e
    RET                                 ; 0048537f
    AND EBX,0xff                        ; 00485380
        ;   Label: LAB_00485380
    MOV EAX,EBX                         ; 00485386
    SHL EBX,0x2                         ; 00485388
    SUB EBX,EAX                         ; 0048538b
    XOR EAX,EAX                         ; 0048538d
    MOV AL,byte ptr [EBX + 0x1c6af99]   ; 0048538f | DAT_01c6af99
    MOV EDX,EAX                         ; 00485395
    XOR EAX,EAX                         ; 00485397
    MOV AL,byte ptr [EBX + 0x1c6af98]   ; 00485399 | DAT_01c6af98
    SHL EDX,0x8                         ; 0048539f
    SHL EAX,0x10                        ; 004853a2
    OR EDX,EAX                          ; 004853a5
    XOR EAX,EAX                         ; 004853a7
    MOV AL,byte ptr [EBX + 0x1c6af9a]   ; 004853a9 | DAT_01c6af9a
    OR EAX,EDX                          ; 004853af
    PUSH EAX                            ; 004853b1
    CALL FUN_004f3520                   ; 004853b2
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3520()
    ADD ESP,0x4                         ; 004853b7
    JMP 0x00485312                      ; 004853ba
        ;   XREF to: 00485312 (UNCONDITIONAL_JUMP)  ; LAB_00485312
    CMP EDI,0x1                         ; 004853bf
        ;   Label: LAB_004853bf
    JZ 0x0048531a                       ; 004853c2
        ;   XREF to: 0048531a (CONDITIONAL_JUMP)  ; LAB_0048531a
    MOV EDX,dword ptr [ESP + 0x18]      ; 004853c8
    ADD EDX,dword ptr [ESP + 0x20]      ; 004853cc
    DEC EDX                             ; 004853d0
    MOV EAX,EDX                         ; 004853d1
    SAR EDX,0x1f                        ; 004853d3
    SUB EAX,EDX                         ; 004853d6
    SAR EAX,0x1                         ; 004853d8
    MOV EBP,dword ptr [ESP + 0x14]      ; 004853da
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004853de
    LEA EBX,[EAX + ESI*0x1]             ; 004853e2
    SUB EDX,EBP                         ; 004853e5
    MOV EBP,0x3                         ; 004853e7
    MOV EAX,EDX                         ; 004853ec
    SAR EDX,0x1f                        ; 004853ee
    IDIV EBP                            ; 004853f1
    LEA EDX,[EBX + EAX*0x1]             ; 004853f3
    CMP EDI,0x2                         ; 004853f6
    JNZ 0x004854be                      ; 004853f9
        ;   XREF to: 004854be (CONDITIONAL_JUMP)  ; LAB_004854be
    MOV EDI,dword ptr [ESP + 0x14]      ; 004853ff
    ADD EDI,EAX                         ; 00485403
    INC EDI                             ; 00485405
    ADD EDI,ESI                         ; 00485406
    TEST EAX,EAX                        ; 00485408
    JLE 0x0048537b                      ; 0048540a
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    MOV ESI,EBX                         ; 00485410
    MOV EBP,EDX                         ; 00485412
    CMP dword ptr [0x01c5baec],0x0      ; 00485414 | DAT_01c5baec
        ;   Label: LAB_00485414
    JNZ 0x004854a3                      ; 0048541b
        ;   XREF to: 004854a3 (CONDITIONAL_JUMP)  ; LAB_004854a3
    PUSH EBX                            ; 00485421
    PUSH ESI                            ; 00485422
    PUSH EDI                            ; 00485423
    CALL FUN_00403040                   ; 00485424
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    ADD ESP,0xc                         ; 00485429
    INC EDI                             ; 0048542c
    INC EBX                             ; 0048542d
    DEC ESI                             ; 0048542e
    CMP EBX,EBP                         ; 0048542f
    JGE 0x0048537b                      ; 00485431
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    JMP 0x00485414                      ; 00485437
        ;   XREF to: 00485414 (UNCONDITIONAL_JUMP)  ; LAB_00485414
    PUSH EBX                            ; 00485439
        ;   Label: LAB_00485439
    PUSH ESI                            ; 0048543a
    PUSH EDI                            ; 0048543b
    CALL FUN_004f3ab0                   ; 0048543c
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3ab0()
    ADD ESP,0xc                         ; 00485441
    DEC EDI                             ; 00485444
    INC EBX                             ; 00485445
    INC ESI                             ; 00485446
    CMP EBX,EBP                         ; 00485447
    JL 0x0048535c                       ; 00485449
        ;   XREF to: 0048535c (CONDITIONAL_JUMP)  ; LAB_0048535c
    POP EBP                             ; 0048544f
    POP EDI                             ; 00485450
    POP ESI                             ; 00485451
    POP EBX                             ; 00485452
    RET                                 ; 00485453
    MOV EDX,dword ptr [ESP + 0x20]      ; 00485454
        ;   Label: LAB_00485454
    SUB EDX,EAX                         ; 00485458
    SUB EDX,0x2                         ; 0048545a
    LEA EDI,[EDX + ESI*0x1]             ; 0048545d
    TEST EAX,EAX                        ; 00485460
    JLE 0x0048537b                      ; 00485462
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    MOV ESI,EBX                         ; 00485468
    CMP dword ptr [0x01c5baec],0x0      ; 0048546a | DAT_01c5baec
        ;   Label: LAB_0048546a
    JNZ 0x0048548b                      ; 00485471
        ;   XREF to: 0048548b (CONDITIONAL_JUMP)  ; LAB_0048548b
    PUSH EBX                            ; 00485473
    PUSH EDI                            ; 00485474
    PUSH ESI                            ; 00485475
    CALL FUN_00402f30                   ; 00485476
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 0048547b
    DEC ESI                             ; 0048547e
    INC EBX                             ; 0048547f
    DEC EDI                             ; 00485480
    CMP EBX,EBP                         ; 00485481
    JGE 0x0048537b                      ; 00485483
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    JMP 0x0048546a                      ; 00485489
        ;   XREF to: 0048546a (UNCONDITIONAL_JUMP)  ; LAB_0048546a
    PUSH EBX                            ; 0048548b
        ;   Label: LAB_0048548b
    PUSH EDI                            ; 0048548c
    PUSH ESI                            ; 0048548d
    CALL FUN_004f3ab0                   ; 0048548e
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3ab0()
    ADD ESP,0xc                         ; 00485493
    DEC ESI                             ; 00485496
    INC EBX                             ; 00485497
    DEC EDI                             ; 00485498
    CMP EBX,EBP                         ; 00485499
    JGE 0x0048537b                      ; 0048549b
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    JMP 0x0048546a                      ; 004854a1
        ;   XREF to: 0048546a (UNCONDITIONAL_JUMP)  ; LAB_0048546a
    PUSH EBX                            ; 004854a3
        ;   Label: LAB_004854a3
    PUSH ESI                            ; 004854a4
    PUSH EDI                            ; 004854a5
    CALL FUN_004f3ad0                   ; 004854a6
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3ad0()
    ADD ESP,0xc                         ; 004854ab
    INC EDI                             ; 004854ae
    INC EBX                             ; 004854af
    DEC ESI                             ; 004854b0
    CMP EBX,EBP                         ; 004854b1
    JGE 0x0048537b                      ; 004854b3
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    JMP 0x00485414                      ; 004854b9
        ;   XREF to: 00485414 (UNCONDITIONAL_JUMP)  ; LAB_00485414
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004854be
        ;   Label: LAB_004854be
    SUB EDI,EAX                         ; 004854c2
    SUB EDI,0x2                         ; 004854c4
    ADD EDI,ESI                         ; 004854c7
    TEST EAX,EAX                        ; 004854c9
    JLE 0x0048537b                      ; 004854cb
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    MOV ESI,EBX                         ; 004854d1
    MOV EBP,EDX                         ; 004854d3
    CMP dword ptr [0x01c5baec],0x0      ; 004854d5 | DAT_01c5baec
        ;   Label: LAB_004854d5
    JNZ 0x004854f6                      ; 004854dc
        ;   XREF to: 004854f6 (CONDITIONAL_JUMP)  ; LAB_004854f6
    PUSH EBX                            ; 004854de
    PUSH ESI                            ; 004854df
    PUSH EDI                            ; 004854e0
    CALL FUN_00403040                   ; 004854e1
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    ADD ESP,0xc                         ; 004854e6
    DEC EDI                             ; 004854e9
    INC EBX                             ; 004854ea
    DEC ESI                             ; 004854eb
    CMP EBX,EBP                         ; 004854ec
    JGE 0x0048537b                      ; 004854ee
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    JMP 0x004854d5                      ; 004854f4
        ;   XREF to: 004854d5 (UNCONDITIONAL_JUMP)  ; LAB_004854d5
    PUSH EBX                            ; 004854f6
        ;   Label: LAB_004854f6
    PUSH ESI                            ; 004854f7
    PUSH EDI                            ; 004854f8
    CALL FUN_004f3ad0                   ; 004854f9
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3ad0()
    ADD ESP,0xc                         ; 004854fe
    DEC EDI                             ; 00485501
    INC EBX                             ; 00485502
    DEC ESI                             ; 00485503
    CMP EBX,EBP                         ; 00485504
    JGE 0x0048537b                      ; 00485506
        ;   XREF to: 0048537b (CONDITIONAL_JUMP)  ; LAB_0048537b
    JMP 0x004854d5                      ; 0048550c
        ;   XREF to: 004854d5 (UNCONDITIONAL_JUMP)  ; LAB_004854d5

