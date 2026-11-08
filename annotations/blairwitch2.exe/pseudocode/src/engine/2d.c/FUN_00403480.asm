; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403480(int param_1,int param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca38
;   undefined4 DAT_0070ca3c
;   undefined4 DAT_0070ca40
;   undefined4 DAT_0070ca44
;   undefined4 DAT_0070ca48
;   undefined4 DAT_0070ca4c
;   undefined4 DAT_0070ca50
;   undefined4 DAT_0070ca54
;   undefined4 DAT_0070ca58
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35e48
;   ... and 5 more
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403480
        ;   Label: FUN_00403480
    PUSH ESI                            ; 00403481
    PUSH EDI                            ; 00403482
    PUSH EBP                            ; 00403483
    MOV EBP,dword ptr [ESP + 0x18]      ; 00403484
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00403488
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040348c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403490
    CMP dword ptr [0x0070ca38],0x0      ; 00403494 | DAT_0070ca38
    JNZ 0x00403665                      ; 0040349b
        ;   XREF to: 00403665 (CONDITIONAL_JUMP)  ; LAB_00403665
    TEST EBX,EBX                        ; 004034a1
        ;   Label: LAB_004034a1
    JNZ 0x004034b9                      ; 004034a3
        ;   XREF to: 004034b9 (CONDITIONAL_JUMP)  ; LAB_004034b9
    MOV EDX,EBP                         ; 004034a5
    IMUL EDX,ESI                        ; 004034a7
    MOV EAX,EDX                         ; 004034aa
    SAR EDX,0x1f                        ; 004034ac
    SHL EDX,0x3                         ; 004034af
    SBB EAX,EDX                         ; 004034b2
    SAR EAX,0x3                         ; 004034b4
    MOV EBX,EAX                         ; 004034b7
    CMP ESI,0x8                         ; 004034b9
        ;   Label: LAB_004034b9
    JZ 0x004034eb                       ; 004034bc
        ;   XREF to: 004034eb (CONDITIONAL_JUMP)  ; LAB_004034eb
    CMP ESI,0x10                        ; 004034be
    JZ 0x004034eb                       ; 004034c1
        ;   XREF to: 004034eb (CONDITIONAL_JUMP)  ; LAB_004034eb
    CMP ESI,0x20                        ; 004034c3
    JZ 0x004034eb                       ; 004034c6
        ;   XREF to: 004034eb (CONDITIONAL_JUMP)  ; LAB_004034eb
    MOV EDX,0x5ca1e8                    ; 004034c8
    MOV ECX,0x983                       ; 004034cd
    PUSH 0x5ca1f7                       ; 004034d2
    MOV dword ptr [0x01d046a0],EDX      ; 004034d7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004034dd | DAT_01d046a4
    CALL FUN_004e4500                   ; 004034e3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004034e8
    MOV EDX,EBP                         ; 004034eb
        ;   Label: LAB_004034eb
    IMUL EDX,ESI                        ; 004034ed
    MOV EAX,EDX                         ; 004034f0
    SAR EDX,0x1f                        ; 004034f2
    SHL EDX,0x3                         ; 004034f5
    SBB EAX,EDX                         ; 004034f8
    SAR EAX,0x3                         ; 004034fa
    MOV ECX,EAX                         ; 004034fd
    MOV EAX,EBX                         ; 004034ff
    CDQ                                 ; 00403501
    XOR EAX,EDX                         ; 00403502
    SUB EAX,EDX                         ; 00403504
    CMP EAX,ECX                         ; 00403506
    JGE 0x0040352c                      ; 00403508
        ;   XREF to: 0040352c (CONDITIONAL_JUMP)  ; LAB_0040352c
    MOV EAX,0x5ca21b                    ; 0040350a
    MOV EDX,0x984                       ; 0040350f
    PUSH 0x5ca22a                       ; 00403514
    MOV [0x01d046a0],EAX                ; 00403519 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0040351e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00403524
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00403529
    CMP EBP,0x1                         ; 0040352c
        ;   Label: LAB_0040352c
    JGE 0x0040368c                      ; 0040352f
        ;   XREF to: 0040368c (CONDITIONAL_JUMP)  ; LAB_0040368c
    MOV ECX,0x5ca24a                    ; 00403535
        ;   Label: LAB_00403535
    MOV EAX,0x985                       ; 0040353a
    PUSH 0x5ca259                       ; 0040353f
    MOV dword ptr [0x01d046a0],ECX      ; 00403544 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0040354a | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040354f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00403554
    CMP EDI,0x4b0                       ; 00403557
        ;   Label: LAB_00403557
    JLE 0x00403582                      ; 0040355d
        ;   XREF to: 00403582 (CONDITIONAL_JUMP)  ; LAB_00403582
    MOV EDX,0x5ca277                    ; 0040355f
    MOV ECX,0x986                       ; 00403564
    PUSH 0x5ca286                       ; 00403569
    MOV dword ptr [0x01d046a0],EDX      ; 0040356e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00403574 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040357a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040357f
    CMP dword ptr [ESP + 0x14],0x0      ; 00403582
        ;   Label: LAB_00403582
    JNZ 0x004035ac                      ; 00403587
        ;   XREF to: 004035ac (CONDITIONAL_JUMP)  ; LAB_004035ac
    MOV EDX,0x5ca2a6                    ; 00403589
    MOV ECX,0x987                       ; 0040358e
    PUSH 0x5ca2b5                       ; 00403593
    MOV dword ptr [0x01d046a0],EDX      ; 00403598 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040359e | DAT_01d046a4
    CALL FUN_004e4500                   ; 004035a4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004035a9
    MOV EAX,[0x006141b8]                ; 004035ac | DAT_006141b8
        ;   Label: LAB_004035ac
    MOV [0x0070ca38],EAX                ; 004035b1 | DAT_0070ca38
    MOV EAX,[0x006141bc]                ; 004035b6 | DAT_006141bc
    MOV EDX,dword ptr [0x01c2a38c]      ; 004035bb | DAT_01c2a38c
    MOV [0x0070ca3c],EAX                ; 004035c1 | DAT_0070ca3c
    MOV EAX,[0x01c35e48]                ; 004035c6 | DAT_01c35e48
    XOR ECX,ECX                         ; 004035cb
    MOV [0x0070ca40],EAX                ; 004035cd | DAT_0070ca40
    MOV EAX,[0x01c35e4c]                ; 004035d2 | DAT_01c35e4c
    MOV dword ptr [0x006141b8],EBP      ; 004035d7 | DAT_006141b8
    MOV [0x0070ca44],EAX                ; 004035dd | DAT_0070ca44
    MOV EAX,[0x01c35e50]                ; 004035e2 | DAT_01c35e50
    DEC EBP                             ; 004035e7
    MOV [0x0070ca48],EAX                ; 004035e8 | DAT_0070ca48
    MOV EAX,[0x01c35e54]                ; 004035ed | DAT_01c35e54
    MOV dword ptr [0x006141bc],EDI      ; 004035f2 | DAT_006141bc
    MOV [0x0070ca4c],EAX                ; 004035f8 | DAT_0070ca4c
    MOV EAX,[0x006141c0]                ; 004035fd | DAT_006141c0
    MOV dword ptr [0x01c35e48],ECX      ; 00403602 | DAT_01c35e48
    MOV [0x0070ca50],EAX                ; 00403608 | DAT_0070ca50
    MOV EAX,[0x01c2a38c]                ; 0040360d | DAT_01c2a38c
    MOV dword ptr [0x01c35e4c],ECX      ; 00403612 | DAT_01c35e4c
    MOV [0x0070ca54],EAX                ; 00403618 | DAT_0070ca54
    MOV EAX,[0x01c2a390]                ; 0040361d | DAT_01c2a390
    MOV dword ptr [0x01c35e50],EBP      ; 00403622 | DAT_01c35e50
    SUB EAX,EDX                         ; 00403628
    MOV dword ptr [0x006141c0],ESI      ; 0040362a | DAT_006141c0
    MOV [0x0070ca58],EAX                ; 00403630 | DAT_0070ca58
    LEA EAX,[EDI + -0x1]                ; 00403635
    MOV EDX,dword ptr [ESP + 0x14]      ; 00403638
    MOV [0x01c35e54],EAX                ; 0040363c | DAT_01c35e54
    TEST EDI,EDI                        ; 00403641
    JLE 0x00403660                      ; 00403643
        ;   XREF to: 00403660 (CONDITIONAL_JUMP)  ; LAB_00403660
    LEA ECX,[EDI*0x4 + 0x0]             ; 00403645
    XOR EAX,EAX                         ; 0040364c
    MOV dword ptr [EAX + 0x1c2a38c],EDX ; 0040364e
        ;   Label: LAB_0040364e
    ADD EAX,0x4                         ; 00403654
    ADD EDX,EBX                         ; 00403657
    CMP EAX,ECX                         ; 00403659
    JL 0x0040364e                       ; 0040365b
        ;   XREF to: 0040364e (CONDITIONAL_JUMP)  ; LAB_0040364e
    LEA EAX,[EAX]                       ; 0040365d
    POP EBP                             ; 00403660
        ;   Label: LAB_00403660
    POP EDI                             ; 00403661
    POP ESI                             ; 00403662
    POP EBX                             ; 00403663
    RET                                 ; 00403664
    MOV ECX,0x5ca1b8                    ; 00403665
        ;   Label: LAB_00403665
    MOV EAX,0x97b                       ; 0040366a
    PUSH 0x5ca1c7                       ; 0040366f
    MOV dword ptr [0x01d046a0],ECX      ; 00403674 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0040367a | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040367f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00403684
    JMP 0x004034a1                      ; 00403687
        ;   XREF to: 004034a1 (UNCONDITIONAL_JUMP)  ; LAB_004034a1
    CMP EDI,0x1                         ; 0040368c
        ;   Label: LAB_0040368c
    JL 0x00403535                       ; 0040368f
        ;   XREF to: 00403535 (CONDITIONAL_JUMP)  ; LAB_00403535
    JMP 0x00403557                      ; 00403695
        ;   XREF to: 00403557 (UNCONDITIONAL_JUMP)  ; LAB_00403557

