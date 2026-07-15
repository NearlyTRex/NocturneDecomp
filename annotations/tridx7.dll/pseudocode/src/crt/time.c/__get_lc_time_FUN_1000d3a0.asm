; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_time_c___get_lc_time_FUN_1000d3a0(__lc_time_data *lc_time)
;
; Parameters:
; __lc_time_data * Stack[0x4]:4   lc_time
;
; Referenced Globals:
;   undefined2 DAT_1001795e
;   undefined2 DAT_10017960
;
; Called Functions:
;   crt_locale.c___getlocaleinfo_FUN_1000f6e0
;   crt_time.c__maketimefmt_FUN_1000d960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000d3a0
        ;   Label: crt_time.c___get_lc_time_FUN_1000d3a0
    PUSH ESI                            ; 1000d3a1
    PUSH EDI                            ; 1000d3a2
    XOR EBX,EBX                         ; 1000d3a3
    MOV BX,word ptr [0x10017960]        ; 1000d3a5 | DAT_10017960
    PUSH EBP                            ; 1000d3ac
    XOR EDI,EDI                         ; 1000d3ad
    MOV ESI,dword ptr [ESP + 0x14]      ; 1000d3af
    MOV DI,word ptr [0x1001795e]        ; 1000d3b3 | DAT_1001795e
    TEST ESI,ESI                        ; 1000d3ba
    JNZ 0x1000d3c8                      ; 1000d3bc
        ;   XREF to: 1000d3c8 (CONDITIONAL_JUMP)  ; LAB_1000d3c8
    MOV EAX,0xffffffff                  ; 1000d3be
    POP EBP                             ; 1000d3c3
    POP EDI                             ; 1000d3c4
    POP ESI                             ; 1000d3c5
    POP EBX                             ; 1000d3c6
    RET                                 ; 1000d3c7
    LEA EAX,[ESI + 0x4]                 ; 1000d3c8
        ;   Label: LAB_1000d3c8
    PUSH EAX                            ; 1000d3cb
    PUSH 0x31                           ; 1000d3cc
    PUSH EDI                            ; 1000d3ce
    PUSH 0x1                            ; 1000d3cf
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d3d1
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d3d6
    MOV EBP,EAX                         ; 1000d3d9
    LEA EAX,[ESI + 0x8]                 ; 1000d3db
    PUSH EAX                            ; 1000d3de
    PUSH 0x32                           ; 1000d3df
    PUSH EDI                            ; 1000d3e1
    PUSH 0x1                            ; 1000d3e2
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d3e4
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d3e9
    OR EBP,EAX                          ; 1000d3ec
    LEA EAX,[ESI + 0xc]                 ; 1000d3ee
    PUSH EAX                            ; 1000d3f1
    PUSH 0x33                           ; 1000d3f2
    PUSH EDI                            ; 1000d3f4
    PUSH 0x1                            ; 1000d3f5
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d3f7
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d3fc
    OR EBP,EAX                          ; 1000d3ff
    LEA EAX,[ESI + 0x10]                ; 1000d401
    PUSH EAX                            ; 1000d404
    PUSH 0x34                           ; 1000d405
    PUSH EDI                            ; 1000d407
    PUSH 0x1                            ; 1000d408
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d40a
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d40f
    OR EBP,EAX                          ; 1000d412
    LEA EAX,[ESI + 0x14]                ; 1000d414
    PUSH EAX                            ; 1000d417
    PUSH 0x35                           ; 1000d418
    PUSH EDI                            ; 1000d41a
    PUSH 0x1                            ; 1000d41b
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d41d
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d422
    OR EBP,EAX                          ; 1000d425
    LEA EAX,[ESI + 0x18]                ; 1000d427
    PUSH EAX                            ; 1000d42a
    PUSH 0x36                           ; 1000d42b
    PUSH EDI                            ; 1000d42d
    PUSH 0x1                            ; 1000d42e
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d430
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d435
    OR EBP,EAX                          ; 1000d438
    PUSH ESI                            ; 1000d43a
    PUSH 0x37                           ; 1000d43b
    PUSH EDI                            ; 1000d43d
    PUSH 0x1                            ; 1000d43e
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d440
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d445
    OR EBP,EAX                          ; 1000d448
    LEA EAX,[ESI + 0x20]                ; 1000d44a
    PUSH EAX                            ; 1000d44d
    PUSH 0x2a                           ; 1000d44e
    PUSH EDI                            ; 1000d450
    PUSH 0x1                            ; 1000d451
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d453
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d458
    OR EBP,EAX                          ; 1000d45b
    LEA EAX,[ESI + 0x24]                ; 1000d45d
    PUSH EAX                            ; 1000d460
    PUSH 0x2b                           ; 1000d461
    PUSH EDI                            ; 1000d463
    PUSH 0x1                            ; 1000d464
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d466
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d46b
    OR EBP,EAX                          ; 1000d46e
    LEA EAX,[ESI + 0x28]                ; 1000d470
    PUSH EAX                            ; 1000d473
    PUSH 0x2c                           ; 1000d474
    PUSH EDI                            ; 1000d476
    PUSH 0x1                            ; 1000d477
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d479
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d47e
    OR EBP,EAX                          ; 1000d481
    LEA EAX,[ESI + 0x2c]                ; 1000d483
    PUSH EAX                            ; 1000d486
    PUSH 0x2d                           ; 1000d487
    PUSH EDI                            ; 1000d489
    PUSH 0x1                            ; 1000d48a
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d48c
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d491
    OR EBP,EAX                          ; 1000d494
    LEA EAX,[ESI + 0x30]                ; 1000d496
    PUSH EAX                            ; 1000d499
    PUSH 0x2e                           ; 1000d49a
    PUSH EDI                            ; 1000d49c
    PUSH 0x1                            ; 1000d49d
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d49f
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d4a4
    OR EBP,EAX                          ; 1000d4a7
    LEA EAX,[ESI + 0x34]                ; 1000d4a9
    PUSH EAX                            ; 1000d4ac
    PUSH 0x2f                           ; 1000d4ad
    PUSH EDI                            ; 1000d4af
    PUSH 0x1                            ; 1000d4b0
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d4b2
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d4b7
    OR EBP,EAX                          ; 1000d4ba
    LEA EAX,[ESI + 0x1c]                ; 1000d4bc
    PUSH EAX                            ; 1000d4bf
    PUSH 0x30                           ; 1000d4c0
    PUSH EDI                            ; 1000d4c2
    PUSH 0x1                            ; 1000d4c3
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d4c5
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d4ca
    OR EBP,EAX                          ; 1000d4cd
    LEA EAX,[ESI + 0x38]                ; 1000d4cf
    PUSH EAX                            ; 1000d4d2
    PUSH 0x44                           ; 1000d4d3
    PUSH EDI                            ; 1000d4d5
    PUSH 0x1                            ; 1000d4d6
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d4d8
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d4dd
    OR EBP,EAX                          ; 1000d4e0
    LEA EAX,[ESI + 0x3c]                ; 1000d4e2
    PUSH EAX                            ; 1000d4e5
    PUSH 0x45                           ; 1000d4e6
    PUSH EDI                            ; 1000d4e8
    PUSH 0x1                            ; 1000d4e9
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d4eb
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d4f0
    OR EBP,EAX                          ; 1000d4f3
    LEA EAX,[ESI + 0x40]                ; 1000d4f5
    PUSH EAX                            ; 1000d4f8
    PUSH 0x46                           ; 1000d4f9
    PUSH EDI                            ; 1000d4fb
    PUSH 0x1                            ; 1000d4fc
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d4fe
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d503
    OR EBP,EAX                          ; 1000d506
    LEA EAX,[ESI + 0x44]                ; 1000d508
    PUSH EAX                            ; 1000d50b
    PUSH 0x47                           ; 1000d50c
    PUSH EDI                            ; 1000d50e
    PUSH 0x1                            ; 1000d50f
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d511
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d516
    OR EBP,EAX                          ; 1000d519
    LEA EAX,[ESI + 0x48]                ; 1000d51b
    PUSH EAX                            ; 1000d51e
    PUSH 0x48                           ; 1000d51f
    PUSH EDI                            ; 1000d521
    PUSH 0x1                            ; 1000d522
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d524
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d529
    OR EBP,EAX                          ; 1000d52c
    LEA EAX,[ESI + 0x4c]                ; 1000d52e
    PUSH EAX                            ; 1000d531
    PUSH 0x49                           ; 1000d532
    PUSH EDI                            ; 1000d534
    PUSH 0x1                            ; 1000d535
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d537
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d53c
    OR EBP,EAX                          ; 1000d53f
    LEA EAX,[ESI + 0x50]                ; 1000d541
    PUSH EAX                            ; 1000d544
    PUSH 0x4a                           ; 1000d545
    PUSH EDI                            ; 1000d547
    PUSH 0x1                            ; 1000d548
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d54a
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d54f
    OR EBP,EAX                          ; 1000d552
    LEA EAX,[ESI + 0x54]                ; 1000d554
    PUSH EAX                            ; 1000d557
    PUSH 0x4b                           ; 1000d558
    PUSH EDI                            ; 1000d55a
    PUSH 0x1                            ; 1000d55b
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d55d
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d562
    OR EBP,EAX                          ; 1000d565
    LEA EAX,[ESI + 0x58]                ; 1000d567
    PUSH EAX                            ; 1000d56a
    PUSH 0x4c                           ; 1000d56b
    PUSH EDI                            ; 1000d56d
    PUSH 0x1                            ; 1000d56e
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d570
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d575
    OR EBP,EAX                          ; 1000d578
    LEA EAX,[ESI + 0x5c]                ; 1000d57a
    PUSH EAX                            ; 1000d57d
    PUSH 0x4d                           ; 1000d57e
    PUSH EDI                            ; 1000d580
    PUSH 0x1                            ; 1000d581
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d583
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d588
    OR EBP,EAX                          ; 1000d58b
    LEA EAX,[ESI + 0x60]                ; 1000d58d
    PUSH EAX                            ; 1000d590
    PUSH 0x4e                           ; 1000d591
    PUSH EDI                            ; 1000d593
    PUSH 0x1                            ; 1000d594
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d596
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d59b
    OR EBP,EAX                          ; 1000d59e
    LEA EAX,[ESI + 0x64]                ; 1000d5a0
    PUSH EAX                            ; 1000d5a3
    PUSH 0x4f                           ; 1000d5a4
    PUSH EDI                            ; 1000d5a6
    PUSH 0x1                            ; 1000d5a7
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d5a9
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d5ae
    OR EBP,EAX                          ; 1000d5b1
    LEA EAX,[ESI + 0x68]                ; 1000d5b3
    PUSH EAX                            ; 1000d5b6
    PUSH 0x38                           ; 1000d5b7
    PUSH EDI                            ; 1000d5b9
    PUSH 0x1                            ; 1000d5ba
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d5bc
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d5c1
    OR EBP,EAX                          ; 1000d5c4
    LEA EAX,[ESI + 0x6c]                ; 1000d5c6
    PUSH EAX                            ; 1000d5c9
    PUSH 0x39                           ; 1000d5ca
    PUSH EDI                            ; 1000d5cc
    PUSH 0x1                            ; 1000d5cd
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d5cf
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d5d4
    OR EBP,EAX                          ; 1000d5d7
    LEA EAX,[ESI + 0x70]                ; 1000d5d9
    PUSH EAX                            ; 1000d5dc
    PUSH 0x3a                           ; 1000d5dd
    PUSH EDI                            ; 1000d5df
    PUSH 0x1                            ; 1000d5e0
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d5e2
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d5e7
    OR EBP,EAX                          ; 1000d5ea
    LEA EAX,[ESI + 0x74]                ; 1000d5ec
    PUSH EAX                            ; 1000d5ef
    PUSH 0x3b                           ; 1000d5f0
    PUSH EDI                            ; 1000d5f2
    PUSH 0x1                            ; 1000d5f3
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d5f5
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d5fa
    OR EBP,EAX                          ; 1000d5fd
    LEA EAX,[ESI + 0x78]                ; 1000d5ff
    PUSH EAX                            ; 1000d602
    PUSH 0x3c                           ; 1000d603
    PUSH EDI                            ; 1000d605
    PUSH 0x1                            ; 1000d606
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d608
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d60d
    OR EBP,EAX                          ; 1000d610
    LEA EAX,[ESI + 0x7c]                ; 1000d612
    PUSH EAX                            ; 1000d615
    PUSH 0x3d                           ; 1000d616
    PUSH EDI                            ; 1000d618
    PUSH 0x1                            ; 1000d619
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d61b
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d620
    OR EBP,EAX                          ; 1000d623
    LEA EAX,[ESI + 0x80]                ; 1000d625
    PUSH EAX                            ; 1000d62b
    PUSH 0x3e                           ; 1000d62c
    PUSH EDI                            ; 1000d62e
    PUSH 0x1                            ; 1000d62f
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d631
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d636
    OR EBP,EAX                          ; 1000d639
    LEA EAX,[ESI + 0x84]                ; 1000d63b
    PUSH EAX                            ; 1000d641
    PUSH 0x3f                           ; 1000d642
    PUSH EDI                            ; 1000d644
    PUSH 0x1                            ; 1000d645
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d647
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d64c
    OR EBP,EAX                          ; 1000d64f
    LEA EAX,[ESI + 0x88]                ; 1000d651
    PUSH EAX                            ; 1000d657
    PUSH 0x40                           ; 1000d658
    PUSH EDI                            ; 1000d65a
    PUSH 0x1                            ; 1000d65b
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d65d
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d662
    OR EBP,EAX                          ; 1000d665
    LEA EAX,[ESI + 0x8c]                ; 1000d667
    PUSH EAX                            ; 1000d66d
    PUSH 0x41                           ; 1000d66e
    PUSH EDI                            ; 1000d670
    PUSH 0x1                            ; 1000d671
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d673
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d678
    OR EBP,EAX                          ; 1000d67b
    LEA EAX,[ESI + 0x90]                ; 1000d67d
    PUSH EAX                            ; 1000d683
    PUSH 0x42                           ; 1000d684
    PUSH EDI                            ; 1000d686
    PUSH 0x1                            ; 1000d687
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d689
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d68e
    OR EBP,EAX                          ; 1000d691
    LEA EAX,[ESI + 0x94]                ; 1000d693
    PUSH EAX                            ; 1000d699
    PUSH 0x43                           ; 1000d69a
    PUSH EDI                            ; 1000d69c
    PUSH 0x1                            ; 1000d69d
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d69f
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d6a4
    OR EBP,EAX                          ; 1000d6a7
    LEA EAX,[ESI + 0x98]                ; 1000d6a9
    PUSH EAX                            ; 1000d6af
    PUSH 0x28                           ; 1000d6b0
    PUSH EDI                            ; 1000d6b2
    PUSH 0x1                            ; 1000d6b3
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d6b5
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d6ba
    OR EBP,EAX                          ; 1000d6bd
    LEA EAX,[ESI + 0x9c]                ; 1000d6bf
    PUSH EAX                            ; 1000d6c5
    PUSH 0x29                           ; 1000d6c6
    PUSH EDI                            ; 1000d6c8
    PUSH 0x1                            ; 1000d6c9
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d6cb
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d6d0
    OR EBP,EAX                          ; 1000d6d3
    LEA EAX,[ESI + 0xa0]                ; 1000d6d5
    PUSH EAX                            ; 1000d6db
    PUSH 0x1f                           ; 1000d6dc
    PUSH EBX                            ; 1000d6de
    PUSH 0x1                            ; 1000d6df
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d6e1
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d6e6
    OR EBP,EAX                          ; 1000d6e9
    LEA EAX,[ESI + 0xa4]                ; 1000d6eb
    PUSH EAX                            ; 1000d6f1
    PUSH 0x20                           ; 1000d6f2
    PUSH EBX                            ; 1000d6f4
    PUSH 0x1                            ; 1000d6f5
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d6f7
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d6fc
    OR EBP,EAX                          ; 1000d6ff
    PUSH ESI                            ; 1000d701
    PUSH EBX                            ; 1000d702
    CALL crt_time.c__maketimefmt_FUN_1000d960 ; 1000d703
        ;   XREF to: 1000d960 (UNCONDITIONAL_CALL)  ; uint crt_time.c__maketimefmt_FUN_1000d960(LCID lcid, __lc_time_data * tdata)
    ADD ESP,0x8                         ; 1000d708
    OR EBP,EAX                          ; 1000d70b
    MOV EAX,EBP                         ; 1000d70d
    POP EBP                             ; 1000d70f
    POP EDI                             ; 1000d710
    POP ESI                             ; 1000d711
    POP EBX                             ; 1000d712
    RET                                 ; 1000d713

