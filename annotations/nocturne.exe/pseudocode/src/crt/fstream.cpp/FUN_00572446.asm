; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_fstream_cpp_FUN_00572446(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00570630 at 0057066b
;
; Referenced Globals:
;   undefined4 DAT_005c1795
;   undefined4 DAT_005c1d98
;
; Called Functions:
;   crt_unknown.c_FUN_0056c488
;
; *****************************************************************************

section .text

    OR EBX,EBX                          ; 00572446
        ;   Label: crt_fstream.cpp_FUN_00572446
    JNZ 0x00572455                      ; 00572448
        ;   XREF to: 00572455 (CONDITIONAL_JUMP)  ; LAB_00572455
    ADD ECX,ECX                         ; 0057244a
    JNZ 0x00572453                      ; 0057244c
        ;   XREF to: 00572453 (CONDITIONAL_JUMP)  ; LAB_00572453
    JMP 0x005735fb                      ; 0057244e
        ;   XREF to: 005735fb (UNCONDITIONAL_JUMP)  ; LAB_005735fb
    RCR ECX,0x1                         ; 00572453
        ;   Label: LAB_00572453
    OR EAX,EAX                          ; 00572455
        ;   Label: LAB_00572455
    JNZ 0x00572460                      ; 00572457
        ;   XREF to: 00572460 (CONDITIONAL_JUMP)  ; LAB_00572460
    ADD EDX,EDX                         ; 00572459
    JNZ 0x0057245e                      ; 0057245b
        ;   XREF to: 0057245e (CONDITIONAL_JUMP)  ; LAB_0057245e
    RET                                 ; 0057245d
    RCR EDX,0x1                         ; 0057245e
        ;   Label: LAB_0057245e
    CMP byte ptr [0x005c1795],0x0       ; 00572460 | DAT_005c1795
        ;   Label: LAB_00572460
    JZ 0x00572499                       ; 00572467
        ;   XREF to: 00572499 (CONDITIONAL_JUMP)  ; LAB_00572499
    PUSH EDX                            ; 00572469
    PUSH EAX                            ; 0057246a
    FLD double ptr [ESP]                ; 0057246b
    PUSH ECX                            ; 0057246e
    PUSH EBX                            ; 0057246f
    TEST byte ptr [0x005c1d98],0x1      ; 00572470 | DAT_005c1d98
    JZ 0x00572480                       ; 00572477
        ;   XREF to: 00572480 (CONDITIONAL_JUMP)  ; LAB_00572480
    CALL crt_unknown.c_FUN_0056c488     ; 00572479
        ;   XREF to: 0056c488 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056c488()
    JMP 0x00572486                      ; 0057247e
        ;   XREF to: 00572486 (UNCONDITIONAL_JUMP)  ; LAB_00572486
    FDIV double ptr [ESP]               ; 00572480
        ;   Label: LAB_00572480
    ADD ESP,0x8                         ; 00572483
    FSTP double ptr [ESP]               ; 00572486
        ;   Label: LAB_00572486
    WAIT                                ; 00572489
    POP EAX                             ; 0057248a
    POP EDX                             ; 0057248b
    CMP EDX,0x80000000                  ; 0057248c
    JNZ 0x00572498                      ; 00572492
        ;   XREF to: 00572498 (CONDITIONAL_JUMP)  ; LAB_00572498
    SUB EDX,EDX                         ; 00572494
    MOV EAX,EDX                         ; 00572496
    RET                                 ; 00572498
        ;   Label: LAB_00572498
    PUSH EBP                            ; 00572499
        ;   Label: LAB_00572499
    MOV EBP,ESP                         ; 0057249a
    PUSH EDI                            ; 0057249c
    PUSH ESI                            ; 0057249d
    MOV EDI,EDX                         ; 0057249e
    MOV ESI,ECX                         ; 005724a0
    SAR EDI,0x14                        ; 005724a2
    SAR ECX,0x14                        ; 005724a5
    AND EDI,0x800007ff                  ; 005724a8
    AND ECX,0x800007ff                  ; 005724ae
    ROL EDI,0x10                        ; 005724b4
    ROL ECX,0x10                        ; 005724b7
    ADD DI,CX                           ; 005724ba
    ROL EDI,0x10                        ; 005724bd
    ROL ECX,0x10                        ; 005724c0
    AND EDX,0xfffff                     ; 005724c3
    AND ESI,0xfffff                     ; 005724c9
    OR DI,DI                            ; 005724cf
    JZ 0x005724dc                       ; 005724d2
        ;   XREF to: 005724dc (CONDITIONAL_JUMP)  ; LAB_005724dc
    OR EDX,0x100000                     ; 005724d4
    JMP 0x005724ea                      ; 005724da
        ;   XREF to: 005724ea (UNCONDITIONAL_JUMP)  ; LAB_005724ea
    ADD EAX,EAX                         ; 005724dc
        ;   Label: LAB_005724dc
    ADC EDX,EDX                         ; 005724de
    DEC DI                              ; 005724e0
    TEST EDX,0x100000                   ; 005724e2
    JZ 0x005724dc                       ; 005724e8
        ;   XREF to: 005724dc (CONDITIONAL_JUMP)  ; LAB_005724dc
    OR CX,CX                            ; 005724ea
        ;   Label: LAB_005724ea
    JZ 0x005724f7                       ; 005724ed
        ;   XREF to: 005724f7 (CONDITIONAL_JUMP)  ; LAB_005724f7
    OR ESI,0x100000                     ; 005724ef
    JMP 0x00572505                      ; 005724f5
        ;   XREF to: 00572505 (UNCONDITIONAL_JUMP)  ; LAB_00572505
    ADD EBX,EBX                         ; 005724f7
        ;   Label: LAB_005724f7
    ADC ESI,ESI                         ; 005724f9
    DEC CX                              ; 005724fb
    TEST ESI,0x100000                   ; 005724fd
    JZ 0x005724f7                       ; 00572503
        ;   XREF to: 005724f7 (CONDITIONAL_JUMP)  ; LAB_005724f7
    SUB DI,CX                           ; 00572505
        ;   Label: LAB_00572505
    ADD DI,0x3ff                        ; 00572508
    JS 0x00572520                       ; 0057250d
        ;   XREF to: 00572520 (CONDITIONAL_JUMP)  ; LAB_00572520
    CMP DI,0x7ff                        ; 0057250f
    JC 0x00572520                       ; 00572514
        ;   XREF to: 00572520 (CONDITIONAL_JUMP)  ; LAB_00572520
    MOV EAX,ECX                         ; 00572516
    POP ESI                             ; 00572518
    POP EDI                             ; 00572519
    POP EBP                             ; 0057251a
    JMP 0x00573607                      ; 0057251b
        ;   XREF to: 00573607 (UNCONDITIONAL_JUMP)  ; LAB_00573607
    CMP DI,-0x34                        ; 00572520
        ;   Label: LAB_00572520
    JGE 0x0057252e                      ; 00572524
        ;   XREF to: 0057252e (CONDITIONAL_JUMP)  ; LAB_0057252e
    POP ESI                             ; 00572526
    POP EDI                             ; 00572527
    POP EBP                             ; 00572528
    JMP 0x005735ea                      ; 00572529
        ;   XREF to: 005735ea (UNCONDITIONAL_JUMP)  ; LAB_005735ea
    PUSH EDI                            ; 0057252e
        ;   Label: LAB_0057252e
    MOV CL,0xb                          ; 0057252f
    SHLD EDX,EAX,CL                     ; 00572531
    SHLD EAX,EBP,CL                     ; 00572534
    AND EAX,0xfffff800                  ; 00572537
    SHLD ESI,EBX,CL                     ; 0057253c
    SHLD EBX,EBP,CL                     ; 0057253f
    AND EBX,0xfffff800                  ; 00572542
    PUSH ESI                            ; 00572548
    PUSH EBX                            ; 00572549
    MOV ECX,ESI                         ; 0057254a
    MOV EDI,EDX                         ; 0057254c
    MOV ESI,EAX                         ; 0057254e
    SUB EAX,EAX                         ; 00572550
    CMP ECX,EDX                         ; 00572552
    JA 0x00572559                       ; 00572554
        ;   XREF to: 00572559 (CONDITIONAL_JUMP)  ; LAB_00572559
    SUB EDX,ECX                         ; 00572556
    INC EAX                             ; 00572558
    PUSH EAX                            ; 00572559
        ;   Label: LAB_00572559
    MOV EAX,ESI                         ; 0057255a
    DIV ECX                             ; 0057255c
    PUSH EAX                            ; 0057255e
    XCHG EAX,EBX                        ; 0057255f
    MUL EBX                             ; 00572560
    XCHG EAX,ECX                        ; 00572562
    XCHG EBX,EDX                        ; 00572563
    MUL EDX                             ; 00572565
    ADD EAX,EBX                         ; 00572567
    ADC EDX,0x0                         ; 00572569
    MOV EBX,dword ptr [EBP + -0x14]     ; 0057256c
    TEST byte ptr [EBP + -0x18],0x1     ; 0057256f
    JZ 0x0057257a                       ; 00572573
        ;   XREF to: 0057257a (CONDITIONAL_JUMP)  ; LAB_0057257a
    ADD EAX,EBX                         ; 00572575
    ADC EDX,dword ptr [EBP + -0x10]     ; 00572577
    NEG ECX                             ; 0057257a
        ;   Label: LAB_0057257a
    SBB ESI,EAX                         ; 0057257c
    SBB EDI,EDX                         ; 0057257e
    JZ 0x00572594                       ; 00572580
        ;   XREF to: 00572594 (CONDITIONAL_JUMP)  ; LAB_00572594
    SUB dword ptr [EBP + -0x1c],0x1     ; 00572582
        ;   Label: LAB_00572582
    SBB dword ptr [EBP + -0x18],0x0     ; 00572586
    ADD ECX,EBX                         ; 0057258a
    ADC ESI,dword ptr [EBP + -0x10]     ; 0057258c
    ADC EDI,0x0                         ; 0057258f
    JNZ 0x00572582                      ; 00572592
        ;   XREF to: 00572582 (CONDITIONAL_JUMP)  ; LAB_00572582
    MOV EDI,ESI                         ; 00572594
        ;   Label: LAB_00572594
    MOV ESI,ECX                         ; 00572596
    MOV ECX,dword ptr [EBP + -0x10]     ; 00572598
    CMP ECX,EDI                         ; 0057259b
    JA 0x005725a9                       ; 0057259d
        ;   XREF to: 005725a9 (CONDITIONAL_JUMP)  ; LAB_005725a9
    SUB EDI,ECX                         ; 0057259f
    ADD dword ptr [EBP + -0x1c],0x1     ; 005725a1
    ADC dword ptr [EBP + -0x18],0x0     ; 005725a5
    MOV EDX,EDI                         ; 005725a9
        ;   Label: LAB_005725a9
    MOV EAX,ESI                         ; 005725ab
    DIV ECX                             ; 005725ad
    PUSH EAX                            ; 005725af
    OR EAX,EAX                          ; 005725b0
    JZ 0x005725e0                       ; 005725b2
        ;   XREF to: 005725e0 (CONDITIONAL_JUMP)  ; LAB_005725e0
    XCHG EAX,EBX                        ; 005725b4
    MUL EBX                             ; 005725b5
    XCHG EAX,ECX                        ; 005725b7
    XCHG EBX,EDX                        ; 005725b8
    MUL EDX                             ; 005725ba
    ADD EAX,EBX                         ; 005725bc
    ADC EDX,0x0                         ; 005725be
    NEG ECX                             ; 005725c1
    SBB ESI,EAX                         ; 005725c3
    SBB EDI,EDX                         ; 005725c5
    JZ 0x005725e0                       ; 005725c7
        ;   XREF to: 005725e0 (CONDITIONAL_JUMP)  ; LAB_005725e0
    SUB dword ptr [EBP + -0x20],0x1     ; 005725c9
        ;   Label: LAB_005725c9
    SBB dword ptr [EBP + -0x1c],0x0     ; 005725cd
    SBB dword ptr [EBP + -0x18],0x0     ; 005725d1
    ADD ECX,dword ptr [EBP + -0x14]     ; 005725d5
    ADC ESI,dword ptr [EBP + -0x10]     ; 005725d8
    ADC EDI,0x0                         ; 005725db
    JNZ 0x005725c9                      ; 005725de
        ;   XREF to: 005725c9 (CONDITIONAL_JUMP)  ; LAB_005725c9
    POP EAX                             ; 005725e0
        ;   Label: LAB_005725e0
    POP EDX                             ; 005725e1
    POP EBX                             ; 005725e2
    ADD ESP,0x8                         ; 005725e3
    POP EDI                             ; 005725e6
    DEC DI                              ; 005725e7
    SHR EBX,0x1                         ; 005725e9
    JNC 0x005725f2                      ; 005725eb
        ;   XREF to: 005725f2 (CONDITIONAL_JUMP)  ; LAB_005725f2
    RCR EDX,0x1                         ; 005725ed
    RCR EAX,0x1                         ; 005725ef
    INC EDI                             ; 005725f1
    SUB ESI,ESI                         ; 005725f2
        ;   Label: LAB_005725f2
    MOV CL,0xb                          ; 005725f4
    SHRD EAX,EDX,CL                     ; 005725f6
    RCR ESI,0x1                         ; 005725f9
    SHRD EDX,ESI,CL                     ; 005725fb
    OR EDX,0xfff00000                   ; 005725fe
    ADD ESI,ESI                         ; 00572604
    ADC EAX,0x0                         ; 00572606
    ADC EDX,0x0                         ; 00572609
    ADC EDI,0x0                         ; 0057260c
    OR DI,DI                            ; 0057260f
    JG 0x00572631                       ; 00572612
        ;   XREF to: 00572631 (CONDITIONAL_JUMP)  ; LAB_00572631
    JNZ 0x0057261a                      ; 00572614
        ;   XREF to: 0057261a (CONDITIONAL_JUMP)  ; LAB_0057261a
    MOV CL,0x1                          ; 00572616
    JMP 0x00572620                      ; 00572618
        ;   XREF to: 00572620 (UNCONDITIONAL_JUMP)  ; LAB_00572620
    NEG DI                              ; 0057261a
        ;   Label: LAB_0057261a
    MOV CX,DI                           ; 0057261d
    AND EDX,0x1fffff                    ; 00572620
        ;   Label: LAB_00572620
    SUB EBX,EBX                         ; 00572626
    SHRD EAX,EDX,CL                     ; 00572628
    SHRD EDX,EBX,CL                     ; 0057262b
    SUB DI,DI                           ; 0057262e
    AND EDX,0xfffff                     ; 00572631
        ;   Label: LAB_00572631
    MOV ESI,EDI                         ; 00572637
    ROR EDI,0xb                         ; 00572639
    ADD ESI,ESI                         ; 0057263c
    RCR EDI,0x1                         ; 0057263e
    AND EDI,0xfff00000                  ; 00572640
    OR EDX,EDI                          ; 00572646
    POP ESI                             ; 00572648
    POP EDI                             ; 00572649
    POP EBP                             ; 0057264a
    RET                                 ; 0057264b

