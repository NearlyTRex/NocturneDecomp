; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00552350(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00556240 at 0055639c
;
; Referenced Globals:
;   undefined4 DAT_005d29d6
;   undefined4 DAT_005d29da
;   TerminatedCString s_sound_005d29df
;   TerminatedCString s_sound_sndmain_cpp_005d29e5
;   TerminatedCString s_Out_of_memory_005d29fa
;   TerminatedCString s_sound_005d2a09
;   undefined4 DAT_005e485c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cebc20
;   undefined4 DAT_02cebf24
;   undefined4 DAT_02cebf28
;   undefined4 DAT_02cebf30
;   undefined4 DAT_02cebf80
;
; Called Functions:
;   FUN_004657f0
;   FUN_00465e50
;   FUN_004e4330
;   FUN_00502750
;   FUN_005027b0
;   FUN_00551000
;   FUN_00551620
;   FUN_005533b0
;   FUN_00553520
;   FUN_005537c0
;   FUN_00555900
;   FUN_00573d40
;   FUN_00573fc0
;   FUN_005a3120
;   FUN_005a3260
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552350
        ;   Label: FUN_00552350
    PUSH ESI                            ; 00552351
    PUSH EDI                            ; 00552352
    PUSH EBP                            ; 00552353
    SUB ESP,0x108                       ; 00552354
    MOV EBX,dword ptr [0x02cebc20]      ; 0055235a | DAT_02cebc20
    MOV ESI,dword ptr [ESP + 0x120]     ; 00552360
    XOR EDX,EDX                         ; 00552367
    XOR EBP,EBP                         ; 00552369
    INC EBX                             ; 0055236b
        ;   Label: LAB_0055236b
    CMP EBX,0x40                        ; 0055236c
    JL 0x00552373                       ; 0055236f
        ;   XREF to: 00552373 (CONDITIONAL_JUMP)  ; LAB_00552373
    MOV EBX,EBP                         ; 00552371
    IMUL EAX,EBX,0x1b0                  ; 00552373
        ;   Label: LAB_00552373
    MOV ECX,dword ptr [EAX + 0x2cebd74] ; 00552379 | DAT_02cebf24
    CMP EBP,ECX                         ; 0055237f
    JZ 0x005523b6                       ; 00552381
        ;   XREF to: 005523b6 (CONDITIONAL_JUMP)  ; LAB_005523b6
    INC EDX                             ; 00552383
        ;   Label: LAB_00552383
    CMP EDX,0x40                        ; 00552384
    JL 0x0055236b                       ; 00552387
        ;   XREF to: 0055236b (CONDITIONAL_JUMP)  ; LAB_0055236b
    XOR EBP,EBP                         ; 00552389
    MOV dword ptr [ESP + 0x104],EBP     ; 0055238b
    MOV EBP,dword ptr [ESP + 0x104]     ; 00552392
        ;   Label: LAB_00552392
    MOV dword ptr [0x02cebc20],EBX      ; 00552399 | DAT_02cebc20
    TEST EBP,EBP                        ; 0055239f
    JNZ 0x005523e2                      ; 005523a1
        ;   XREF to: 005523e2 (CONDITIONAL_JUMP)  ; LAB_005523e2
    XOR EAX,EAX                         ; 005523a3
    MOV EBX,dword ptr [0x02cebc20]      ; 005523a5 | DAT_02cebc20
    ADD ESP,0x108                       ; 005523ab
    POP EBP                             ; 005523b1
    POP EDI                             ; 005523b2
    POP ESI                             ; 005523b3
    POP EBX                             ; 005523b4
    RET                                 ; 005523b5
    MOV EDI,dword ptr [EAX + 0x2cebd78] ; 005523b6 | DAT_02cebf28
        ;   Label: LAB_005523b6
    CMP ECX,EDI                         ; 005523bc
    JNZ 0x00552383                      ; 005523be
        ;   XREF to: 00552383 (CONDITIONAL_JUMP)  ; LAB_00552383
    MOV ECX,dword ptr [EAX + 0x2cebd80] ; 005523c0 | DAT_02cebf30
    CMP EDI,ECX                         ; 005523c6
    JNZ 0x00552383                      ; 005523c8
        ;   XREF to: 00552383 (CONDITIONAL_JUMP)  ; LAB_00552383
    CMP ECX,dword ptr [EAX + 0x2cebdd0] ; 005523ca | DAT_02cebf80
    JNZ 0x00552383                      ; 005523d0
        ;   XREF to: 00552383 (CONDITIONAL_JUMP)  ; LAB_00552383
    MOV EDX,0x2cebc24                   ; 005523d2
    ADD EDX,EAX                         ; 005523d7
    MOV dword ptr [ESP + 0x104],EDX     ; 005523d9
    JMP 0x00552392                      ; 005523e0
        ;   XREF to: 00552392 (UNCONDITIONAL_JUMP)  ; LAB_00552392
    MOV EAX,ESP                         ; 005523e2
        ;   Label: LAB_005523e2
    PUSH EAX                            ; 005523e4
    PUSH 0x0                            ; 005523e5
    PUSH 0x0                            ; 005523e7
    PUSH 0x0                            ; 005523e9
    PUSH ESI                            ; 005523eb
    CALL FUN_00465e50                   ; 005523ec
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e50()
    ADD ESP,0x14                        ; 005523f1
    PUSH 0x5d29d6                       ; 005523f4 | DAT_005d29d6
    LEA EAX,[ESP + 0x4]                 ; 005523f9
    PUSH EAX                            ; 005523fd
    CALL FUN_005a3260                   ; 005523fe
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00552403
    TEST EAX,EAX                        ; 00552406
    JNZ 0x00552588                      ; 00552408
        ;   XREF to: 00552588 (CONDITIONAL_JUMP)  ; LAB_00552588
    PUSH ESI                            ; 0055240e
        ;   Label: LAB_0055240e
    PUSH 0x5d29df                       ; 0055240f | = "sound"
    CALL FUN_004657f0                   ; 00552414
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004657f0()
    ADD ESP,0x8                         ; 00552419
    TEST EAX,EAX                        ; 0055241c
    JLE 0x005526aa                      ; 0055241e
        ;   XREF to: 005526aa (CONDITIONAL_JUMP)  ; LAB_005526aa
    PUSH 0x8630                         ; 00552424
    CALL FUN_005a3cb2                   ; 00552429
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 0055242e
    TEST EAX,EAX                        ; 00552431
    JZ 0x0055243e                       ; 00552433
        ;   XREF to: 0055243e (CONDITIONAL_JUMP)  ; LAB_0055243e
    PUSH EAX                            ; 00552435
    CALL FUN_00502750                   ; 00552436
        ;   XREF to: 00502750 (UNCONDITIONAL_CALL)  ; undefined FUN_00502750()
    ADD ESP,0x4                         ; 0055243b
    MOV dword ptr [EBP + 0x174],EAX     ; 0055243e
        ;   Label: LAB_0055243e
    TEST EAX,EAX                        ; 00552444
    JNZ 0x0055246a                      ; 00552446
        ;   XREF to: 0055246a (CONDITIONAL_JUMP)  ; LAB_0055246a
    MOV EAX,0x5d29e5                    ; 00552448 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x463                       ; 0055244d
    PUSH 0x5d29fa                       ; 00552452 | = "Out of memory."
    MOV [0x01d71de0],EAX                ; 00552457 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0055245c | DAT_01d71de4
    CALL FUN_004e4330                   ; 00552462
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00552467
    PUSH ESI                            ; 0055246a
        ;   Label: LAB_0055246a
    MOV ECX,dword ptr [EBP + 0x174]     ; 0055246b
    PUSH ECX                            ; 00552471
    CALL FUN_005027b0                   ; 00552472
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005027b0()
    ADD ESP,0x8                         ; 00552477
    MOV EDI,EBP                         ; 0055247a
    PUSH EDI                            ; 0055247c
    MOV AL,byte ptr [ESI]               ; 0055247d
        ;   Label: LAB_0055247d
    MOV byte ptr [EDI],AL               ; 0055247f
    CMP AL,0x0                          ; 00552481
    JZ 0x00552495                       ; 00552483
        ;   XREF to: 00552495 (CONDITIONAL_JUMP)  ; LAB_00552495
    MOV AL,byte ptr [ESI + 0x1]         ; 00552485
    ADD ESI,0x2                         ; 00552488
    MOV byte ptr [EDI + 0x1],AL         ; 0055248b
    ADD EDI,0x2                         ; 0055248e
    CMP AL,0x0                          ; 00552491
    JNZ 0x0055247d                      ; 00552493
        ;   XREF to: 0055247d (CONDITIONAL_JUMP)  ; LAB_0055247d
    POP EDI                             ; 00552495
        ;   Label: LAB_00552495
    MOV dword ptr [EBP + 0x100],0x1     ; 00552496
    MOV EAX,dword ptr [EBP + 0x174]     ; 005524a0
    MOV dword ptr [EBP + 0x104],0x10    ; 005524a6
    MOV EAX,dword ptr [EAX + 0x104]     ; 005524b0
    MOV dword ptr [EBP + 0x108],EAX     ; 005524b6
    MOV EAX,dword ptr [EBP + 0x174]     ; 005524bc
    MOV EAX,dword ptr [EAX + 0x100]     ; 005524c2
    MOV dword ptr [EBP + 0x110],0xffffffff ; 005524c8
    PUSH EBP                            ; 005524d2
    MOV dword ptr [EBP + 0x10c],EAX     ; 005524d3
    CALL FUN_00551620                   ; 005524d9
        ;   XREF to: 00551620 (UNCONDITIONAL_CALL)  ; undefined FUN_00551620()
    MOV dword ptr [EBP + 0x150],0x0     ; 005524de
    FILD dword ptr [EBP + 0x10c]        ; 005524e8
    MOV dword ptr [EBP + 0x154],0x0     ; 005524ee
    FMUL float ptr [0x005e485c]         ; 005524f8 | DAT_005e485c
    MOV dword ptr [EBP + 0x158],0x0     ; 005524fe
    ADD ESP,0x4                         ; 00552508
    MOV dword ptr [EBP + 0x15c],0x0     ; 0055250b
    CALL FUN_005a3120                   ; 00552515
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EBP + 0x164]       ; 0055251a
    MOV ESI,dword ptr [EBP + 0x164]     ; 00552520
    MOV dword ptr [EBP + 0x16c],0x0     ; 00552526
    PUSH ESI                            ; 00552530
    MOV dword ptr [EBP + 0x170],0x0     ; 00552531
    MOV EAX,dword ptr [ESP + 0x120]     ; 0055253b
    PUSH EBP                            ; 00552542
    MOV dword ptr [EBP + 0x160],EAX     ; 00552543
    CALL FUN_00555900                   ; 00552549
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined FUN_00555900()
    ADD ESP,0x8                         ; 0055254e
    PUSH EBP                            ; 00552551
    MOV dword ptr [EBP + 0x168],EAX     ; 00552552
    CALL FUN_005533b0                   ; 00552558
        ;   XREF to: 005533b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005533b0()
    ADD ESP,0x4                         ; 0055255d
    TEST EAX,EAX                        ; 00552560
    JZ 0x005526aa                       ; 00552562
        ;   XREF to: 005526aa (CONDITIONAL_JUMP)  ; LAB_005526aa
    PUSH 0x0                            ; 00552568
        ;   Label: LAB_00552568
    PUSH 0x0                            ; 0055256a
    PUSH EBP                            ; 0055256c
    CALL FUN_005537c0                   ; 0055256d
        ;   XREF to: 005537c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005537c0()
    ADD ESP,0xc                         ; 00552572
    MOV EAX,EBP                         ; 00552575
    MOV EBX,dword ptr [0x02cebc20]      ; 00552577 | DAT_02cebc20
    ADD ESP,0x108                       ; 0055257d
    POP EBP                             ; 00552583
    POP EDI                             ; 00552584
    POP ESI                             ; 00552585
    POP EBX                             ; 00552586
    RET                                 ; 00552587
    PUSH 0x5d29da                       ; 00552588 | DAT_005d29da
        ;   Label: LAB_00552588
    LEA EAX,[ESP + 0x4]                 ; 0055258d
    PUSH EAX                            ; 00552591
    CALL FUN_005a3260                   ; 00552592
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00552597
    TEST EAX,EAX                        ; 0055259a
    JZ 0x0055240e                       ; 0055259c
        ;   XREF to: 0055240e (CONDITIONAL_JUMP)  ; LAB_0055240e
    PUSH 0x1                            ; 005525a2
    PUSH ESI                            ; 005525a4
    PUSH 0x5d2a09                       ; 005525a5 | = "sound"
    LEA EAX,[EBP + 0x17c]               ; 005525aa
    PUSH EAX                            ; 005525b0
    MOV dword ptr [ESP + 0x110],EAX     ; 005525b1
    CALL FUN_00573fc0                   ; 005525b8
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573fc0()
    ADD ESP,0x10                        ; 005525bd
    TEST EAX,EAX                        ; 005525c0
    JZ 0x005526aa                       ; 005525c2
        ;   XREF to: 005526aa (CONDITIONAL_JUMP)  ; LAB_005526aa
    MOV EDI,EBP                         ; 005525c8
    MOV ECX,dword ptr [ESP + 0x100]     ; 005525ca
    PUSH EDI                            ; 005525d1
    MOV AL,byte ptr [ESI]               ; 005525d2
        ;   Label: LAB_005525d2
    MOV byte ptr [EDI],AL               ; 005525d4
    CMP AL,0x0                          ; 005525d6
    JZ 0x005525ea                       ; 005525d8
        ;   XREF to: 005525ea (CONDITIONAL_JUMP)  ; LAB_005525ea
    MOV AL,byte ptr [ESI + 0x1]         ; 005525da
    ADD ESI,0x2                         ; 005525dd
    MOV byte ptr [EDI + 0x1],AL         ; 005525e0
    ADD EDI,0x2                         ; 005525e3
    CMP AL,0x0                          ; 005525e6
    JNZ 0x005525d2                      ; 005525e8
        ;   XREF to: 005525d2 (CONDITIONAL_JUMP)  ; LAB_005525d2
    POP EDI                             ; 005525ea
        ;   Label: LAB_005525ea
    PUSH ECX                            ; 005525eb
    CALL FUN_00573d40                   ; 005525ec
        ;   XREF to: 00573d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00573d40()
    ADD ESP,0x4                         ; 005525f1
    PUSH EBP                            ; 005525f4
    MOV dword ptr [EBP + 0x178],EAX     ; 005525f5
    LEA EAX,[EBP + 0x178]               ; 005525fb
    PUSH EAX                            ; 00552601
    MOV EDI,dword ptr [ESP + 0x108]     ; 00552602
    PUSH EDI                            ; 00552609
    CALL FUN_00551000                   ; 0055260a
        ;   XREF to: 00551000 (UNCONDITIONAL_CALL)  ; undefined FUN_00551000()
    ADD ESP,0xc                         ; 0055260f
    TEST EAX,EAX                        ; 00552612
    JZ 0x005526aa                       ; 00552614
        ;   XREF to: 005526aa (CONDITIONAL_JUMP)  ; LAB_005526aa
    PUSH EBP                            ; 0055261a
    CALL FUN_00551620                   ; 0055261b
        ;   XREF to: 00551620 (UNCONDITIONAL_CALL)  ; undefined FUN_00551620()
    MOV dword ptr [EBP + 0x150],0x0     ; 00552620
    FILD dword ptr [EBP + 0x10c]        ; 0055262a
    MOV dword ptr [EBP + 0x154],0x0     ; 00552630
    FMUL float ptr [0x005e485c]         ; 0055263a | DAT_005e485c
    MOV dword ptr [EBP + 0x158],0x0     ; 00552640
    ADD ESP,0x4                         ; 0055264a
    MOV dword ptr [EBP + 0x15c],0x0     ; 0055264d
    CALL FUN_005a3120                   ; 00552657
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EBP + 0x164]       ; 0055265c
    MOV EDX,dword ptr [EBP + 0x164]     ; 00552662
    MOV dword ptr [EBP + 0x16c],0x0     ; 00552668
    PUSH EDX                            ; 00552672
    MOV dword ptr [EBP + 0x170],0x0     ; 00552673
    MOV EAX,dword ptr [ESP + 0x120]     ; 0055267d
    PUSH EBP                            ; 00552684
    MOV dword ptr [EBP + 0x160],EAX     ; 00552685
    CALL FUN_00555900                   ; 0055268b
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined FUN_00555900()
    ADD ESP,0x8                         ; 00552690
    PUSH EBP                            ; 00552693
    MOV dword ptr [EBP + 0x168],EAX     ; 00552694
    CALL FUN_005533b0                   ; 0055269a
        ;   XREF to: 005533b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005533b0()
    ADD ESP,0x4                         ; 0055269f
    TEST EAX,EAX                        ; 005526a2
    JNZ 0x00552568                      ; 005526a4
        ;   XREF to: 00552568 (CONDITIONAL_JUMP)  ; LAB_00552568
    PUSH EBP                            ; 005526aa
        ;   Label: LAB_005526aa
    CALL FUN_00553520                   ; 005526ab
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
    ADD ESP,0x4                         ; 005526b0
    XOR EAX,EAX                         ; 005526b3
    MOV EBX,dword ptr [0x02cebc20]      ; 005526b5 | DAT_02cebc20
    ADD ESP,0x108                       ; 005526bb
    POP EBP                             ; 005526c1
    POP EDI                             ; 005526c2
    POP ESI                             ; 005526c3
    POP EBX                             ; 005526c4
    RET                                 ; 005526c5

