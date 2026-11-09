; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_2d_c_FUN_00403480(int param_1,int param_2,int param_3,int param_4,uint param_5)
;
;
; XREF[1]:
;   engine_2d.c_mapTextureFrameBuffer_FUN_004036a0 at 004036b3
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303b8
;   undefined4 DAT_007303bc
;   undefined4 DAT_007303c0
;   undefined4 DAT_007303c4
;   undefined4 DAT_007303c8
;   undefined4 DAT_007303cc
;   undefined4 DAT_007303d0
;   undefined4 DAT_007303d4
;   undefined4 DAT_007303d8
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6b5a8
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403480
        ;   Label: engine_2d.c_FUN_00403480
    PUSH ESI                            ; 00403481
    PUSH EDI                            ; 00403482
    PUSH EBP                            ; 00403483
    MOV EBP,dword ptr [ESP + 0x18]      ; 00403484
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00403488
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040348c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403490
    CMP dword ptr [0x007303b8],0x0      ; 00403494 | DAT_007303b8
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
    MOV EDX,0x5b5220                    ; 004034c8
    MOV ECX,0x99d                       ; 004034cd
    PUSH 0x5b522f                       ; 004034d2
    MOV dword ptr [0x01d71de0],EDX      ; 004034d7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004034dd | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004034e3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
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
    MOV EAX,0x5b5253                    ; 0040350a
    MOV EDX,0x99e                       ; 0040350f
    PUSH 0x5b5262                       ; 00403514
    MOV [0x01d71de0],EAX                ; 00403519 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0040351e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00403524
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00403529
    CMP EBP,0x1                         ; 0040352c
        ;   Label: LAB_0040352c
    JGE 0x0040368c                      ; 0040352f
        ;   XREF to: 0040368c (CONDITIONAL_JUMP)  ; LAB_0040368c
    MOV ECX,0x5b5282                    ; 00403535
        ;   Label: LAB_00403535
    MOV EAX,0x99f                       ; 0040353a
    PUSH 0x5b5291                       ; 0040353f
    MOV dword ptr [0x01d71de0],ECX      ; 00403544 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0040354a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040354f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00403554
    CMP EDI,0x4b0                       ; 00403557
        ;   Label: LAB_00403557
    JLE 0x00403582                      ; 0040355d
        ;   XREF to: 00403582 (CONDITIONAL_JUMP)  ; LAB_00403582
    MOV EDX,0x5b52af                    ; 0040355f
    MOV ECX,0x9a0                       ; 00403564
    PUSH 0x5b52be                       ; 00403569
    MOV dword ptr [0x01d71de0],EDX      ; 0040356e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00403574 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040357a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040357f
    CMP dword ptr [ESP + 0x14],0x0      ; 00403582
        ;   Label: LAB_00403582
    JNZ 0x004035ac                      ; 00403587
        ;   XREF to: 004035ac (CONDITIONAL_JUMP)  ; LAB_004035ac
    MOV EDX,0x5b52de                    ; 00403589
    MOV ECX,0x9a1                       ; 0040358e
    PUSH 0x5b52ed                       ; 00403593
    MOV dword ptr [0x01d71de0],EDX      ; 00403598 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040359e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004035a4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004035a9
    MOV EAX,[0x005fba18]                ; 004035ac | DAT_005fba18
        ;   Label: LAB_004035ac
    MOV [0x007303b8],EAX                ; 004035b1 | DAT_007303b8
    MOV EAX,[0x005fba1c]                ; 004035b6 | DAT_005fba1c
    MOV EDX,dword ptr [0x01c5faec]      ; 004035bb | DAT_01c5faec
    MOV [0x007303bc],EAX                ; 004035c1 | DAT_007303bc
    MOV EAX,[0x01c6b5a8]                ; 004035c6 | DAT_01c6b5a8
    XOR ECX,ECX                         ; 004035cb
    MOV [0x007303c0],EAX                ; 004035cd | DAT_007303c0
    MOV EAX,[0x01c6b5ac]                ; 004035d2 | DAT_01c6b5ac
    MOV dword ptr [0x005fba18],EBP      ; 004035d7 | DAT_005fba18
    MOV [0x007303c4],EAX                ; 004035dd | DAT_007303c4
    MOV EAX,[0x01c6b5b0]                ; 004035e2 | DAT_01c6b5b0
    DEC EBP                             ; 004035e7
    MOV [0x007303c8],EAX                ; 004035e8 | DAT_007303c8
    MOV EAX,[0x01c6b5b4]                ; 004035ed | DAT_01c6b5b4
    MOV dword ptr [0x005fba1c],EDI      ; 004035f2 | DAT_005fba1c
    MOV [0x007303cc],EAX                ; 004035f8 | DAT_007303cc
    MOV EAX,[0x005fba20]                ; 004035fd | DAT_005fba20
    MOV dword ptr [0x01c6b5a8],ECX      ; 00403602 | DAT_01c6b5a8
    MOV [0x007303d0],EAX                ; 00403608 | DAT_007303d0
    MOV EAX,[0x01c5faec]                ; 0040360d | DAT_01c5faec
    MOV dword ptr [0x01c6b5ac],ECX      ; 00403612 | DAT_01c6b5ac
    MOV [0x007303d4],EAX                ; 00403618 | DAT_007303d4
    MOV EAX,[0x01c5faf0]                ; 0040361d | DAT_01c5faf0
    MOV dword ptr [0x01c6b5b0],EBP      ; 00403622 | DAT_01c6b5b0
    SUB EAX,EDX                         ; 00403628
    MOV dword ptr [0x005fba20],ESI      ; 0040362a | DAT_005fba20
    MOV [0x007303d8],EAX                ; 00403630 | DAT_007303d8
    LEA EAX,[EDI + -0x1]                ; 00403635
    MOV EDX,dword ptr [ESP + 0x14]      ; 00403638
    MOV [0x01c6b5b4],EAX                ; 0040363c | DAT_01c6b5b4
    TEST EDI,EDI                        ; 00403641
    JLE 0x00403660                      ; 00403643
        ;   XREF to: 00403660 (CONDITIONAL_JUMP)  ; LAB_00403660
    LEA ECX,[EDI*0x4 + 0x0]             ; 00403645
    XOR EAX,EAX                         ; 0040364c
    MOV dword ptr [EAX + 0x1c5faec],EDX ; 0040364e
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
    MOV ECX,0x5b51f0                    ; 00403665
        ;   Label: LAB_00403665
    MOV EAX,0x995                       ; 0040366a
    PUSH 0x5b51ff                       ; 0040366f
    MOV dword ptr [0x01d71de0],ECX      ; 00403674 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0040367a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040367f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00403684
    JMP 0x004034a1                      ; 00403687
        ;   XREF to: 004034a1 (UNCONDITIONAL_JUMP)  ; LAB_004034a1
    CMP EDI,0x1                         ; 0040368c
        ;   Label: LAB_0040368c
    JL 0x00403535                       ; 0040368f
        ;   XREF to: 00403535 (CONDITIONAL_JUMP)  ; LAB_00403535
    JMP 0x00403557                      ; 00403695
        ;   XREF to: 00403557 (UNCONDITIONAL_JUMP)  ; LAB_00403557

