; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c5450(int param_1,byte *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005c0428 at 005c048c
;   FUN_005c2c70 at 005c2c9e
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_005c5430
;   FUN_005c543c
;   FUN_005c571c
;   FUN_005c5818
;   FUN_005c5854
;   FUN_005c594c
;   FUN_005c5ab0
;   FUN_005c5b64
;   FUN_005c5c78
;   FUN_005c5f7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5450
        ;   Label: FUN_005c5450
    PUSH ESI                            ; 005c5451
    PUSH EDI                            ; 005c5452
    PUSH EBP                            ; 005c5453
    SUB ESP,0x4                         ; 005c5454
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c5457
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c545b
    MOV EAX,dword ptr [EAX]             ; 005c545f
    MOV dword ptr [ESP],EAX             ; 005c5461
    MOV AH,byte ptr [ESI + 0x10]        ; 005c5464
    XOR EBP,EBP                         ; 005c5467
    AND AH,0xfd                         ; 005c5469
    XOR EDI,EDI                         ; 005c546c
    MOV byte ptr [ESI + 0x10],AH        ; 005c546e
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c5471
        ;   Label: LAB_005c5471
    LEA EDX,[EBX + 0x1]                 ; 005c5475
    MOV dword ptr [ESP + 0x1c],EDX      ; 005c5478
    MOV BL,byte ptr [EBX]               ; 005c547c
    AND EBX,0xff                        ; 005c547e
    JZ 0x005c5700                       ; 005c5484
        ;   XREF to: 005c5700 (CONDITIONAL_JUMP)  ; LAB_005c5700
    MOV AL,BL                           ; 005c548a
    INC AL                              ; 005c548c
    AND EAX,0xff                        ; 005c548e
    TEST byte ptr [EAX + 0x626114],0x2  ; 005c5493 | DAT_00626114
    JZ 0x005c54ac                       ; 005c549a
        ;   XREF to: 005c54ac (CONDITIONAL_JUMP)  ; LAB_005c54ac
    PUSH ESI                            ; 005c549c
    CALL FUN_005c5818                   ; 005c549d
        ;   XREF to: 005c5818 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5818()
    ADD ESP,0x4                         ; 005c54a2
    ADD EDI,EAX                         ; 005c54a5
    JMP 0x005c56c4                      ; 005c54a7
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x25                        ; 005c54ac
        ;   Label: LAB_005c54ac
    JZ 0x005c54db                       ; 005c54af
        ;   XREF to: 005c54db (CONDITIONAL_JUMP)  ; LAB_005c54db
    PUSH ESI                            ; 005c54b1
    CALL FUN_005c5430                   ; 005c54b2
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5430()
    ADD ESP,0x4                         ; 005c54b7
    CMP EAX,EBX                         ; 005c54ba
    JZ 0x005c56c3                       ; 005c54bc
        ;   XREF to: 005c56c3 (CONDITIONAL_JUMP)  ; LAB_005c56c3
    TEST byte ptr [ESI + 0x10],0x2      ; 005c54c2
    JNZ 0x005c5700                      ; 005c54c6
        ;   XREF to: 005c5700 (CONDITIONAL_JUMP)  ; LAB_005c5700
    PUSH ESI                            ; 005c54cc
    PUSH EAX                            ; 005c54cd
    CALL FUN_005c543c                   ; 005c54ce
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined FUN_005c543c()
    ADD ESP,0x8                         ; 005c54d3
    JMP 0x005c5700                      ; 005c54d6
        ;   XREF to: 005c5700 (UNCONDITIONAL_JUMP)  ; LAB_005c5700
    PUSH ESI                            ; 005c54db
        ;   Label: LAB_005c54db
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c54dc
    PUSH EBX                            ; 005c54e0
    CALL FUN_005c571c                   ; 005c54e1
        ;   XREF to: 005c571c (UNCONDITIONAL_CALL)  ; undefined FUN_005c571c()
    ADD ESP,0x8                         ; 005c54e6
    XOR EBX,EBX                         ; 005c54e9
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c54eb
    MOV BL,byte ptr [EAX]               ; 005c54ef
    TEST EBX,EBX                        ; 005c54f1
    JZ 0x005c54fa                       ; 005c54f3
        ;   XREF to: 005c54fa (CONDITIONAL_JUMP)  ; LAB_005c54fa
    INC EAX                             ; 005c54f5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c54f6
    CMP EBX,0x64                        ; 005c54fa
        ;   Label: LAB_005c54fa
    JC 0x005c556d                       ; 005c54fd
        ;   XREF to: 005c556d (CONDITIONAL_JUMP)  ; LAB_005c556d
    JBE 0x005c55d5                      ; 005c54ff
        ;   XREF to: 005c55d5 (CONDITIONAL_JUMP)  ; LAB_005c55d5
    CMP EBX,0x6f                        ; 005c5505
    JC 0x005c5546                       ; 005c5508
        ;   XREF to: 005c5546 (CONDITIONAL_JUMP)  ; LAB_005c5546
    JBE 0x005c5603                      ; 005c550a
        ;   XREF to: 005c5603 (CONDITIONAL_JUMP)  ; LAB_005c5603
    CMP EBX,0x73                        ; 005c5510
    JC 0x005c5538                       ; 005c5513
        ;   XREF to: 005c5538 (CONDITIONAL_JUMP)  ; LAB_005c5538
    JBE 0x005c564e                      ; 005c5515
        ;   XREF to: 005c564e (CONDITIONAL_JUMP)  ; LAB_005c564e
    CMP EBX,0x75                        ; 005c551b
    JC 0x005c56c4                       ; 005c551e
        ;   XREF to: 005c56c4 (CONDITIONAL_JUMP)  ; LAB_005c56c4
    JBE 0x005c5617                      ; 005c5524
        ;   XREF to: 005c5617 (CONDITIONAL_JUMP)  ; LAB_005c5617
    CMP EBX,0x78                        ; 005c552a
    JZ 0x005c562b                       ; 005c552d
        ;   XREF to: 005c562b (CONDITIONAL_JUMP)  ; LAB_005c562b
    JMP 0x005c56c4                      ; 005c5533
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x70                        ; 005c5538
        ;   Label: LAB_005c5538
    JZ 0x005c562b                       ; 005c553b
        ;   XREF to: 005c562b (CONDITIONAL_JUMP)  ; LAB_005c562b
    JMP 0x005c56c4                      ; 005c5541
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x69                        ; 005c5546
        ;   Label: LAB_005c5546
    JC 0x005c555f                       ; 005c5549
        ;   XREF to: 005c555f (CONDITIONAL_JUMP)  ; LAB_005c555f
    JBE 0x005c55ec                      ; 005c554b
        ;   XREF to: 005c55ec (CONDITIONAL_JUMP)  ; LAB_005c55ec
    CMP EBX,0x6e                        ; 005c5551
    JZ 0x005c5693                       ; 005c5554
        ;   XREF to: 005c5693 (CONDITIONAL_JUMP)  ; LAB_005c5693
    JMP 0x005c56c4                      ; 005c555a
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x67                        ; 005c555f
        ;   Label: LAB_005c555f
    JBE 0x005c563f                      ; 005c5562
        ;   XREF to: 005c563f (CONDITIONAL_JUMP)  ; LAB_005c563f
    JMP 0x005c56c4                      ; 005c5568
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x47                        ; 005c556d
        ;   Label: LAB_005c556d
    JC 0x005c55ae                       ; 005c5570
        ;   XREF to: 005c55ae (CONDITIONAL_JUMP)  ; LAB_005c55ae
    JBE 0x005c563f                      ; 005c5572
        ;   XREF to: 005c563f (CONDITIONAL_JUMP)  ; LAB_005c563f
    CMP EBX,0x58                        ; 005c5578
    JC 0x005c55a0                       ; 005c557b
        ;   XREF to: 005c55a0 (CONDITIONAL_JUMP)  ; LAB_005c55a0
    JBE 0x005c562b                      ; 005c557d
        ;   XREF to: 005c562b (CONDITIONAL_JUMP)  ; LAB_005c562b
    CMP EBX,0x5b                        ; 005c5583
    JC 0x005c56c4                       ; 005c5586
        ;   XREF to: 005c56c4 (CONDITIONAL_JUMP)  ; LAB_005c56c4
    JBE 0x005c5659                      ; 005c558c
        ;   XREF to: 005c5659 (CONDITIONAL_JUMP)  ; LAB_005c5659
    CMP EBX,0x63                        ; 005c5592
    JZ 0x005c5672                       ; 005c5595
        ;   XREF to: 005c5672 (CONDITIONAL_JUMP)  ; LAB_005c5672
    JMP 0x005c56c4                      ; 005c559b
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x53                        ; 005c55a0
        ;   Label: LAB_005c55a0
    JZ 0x005c564a                       ; 005c55a3
        ;   XREF to: 005c564a (CONDITIONAL_JUMP)  ; LAB_005c564a
    JMP 0x005c56c4                      ; 005c55a9
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x43                        ; 005c55ae
        ;   Label: LAB_005c55ae
    JC 0x005c55c7                       ; 005c55b1
        ;   XREF to: 005c55c7 (CONDITIONAL_JUMP)  ; LAB_005c55c7
    JBE 0x005c566e                      ; 005c55b3
        ;   XREF to: 005c566e (CONDITIONAL_JUMP)  ; LAB_005c566e
    CMP EBX,0x45                        ; 005c55b9
    JZ 0x005c563f                       ; 005c55bc
        ;   XREF to: 005c563f (CONDITIONAL_JUMP)  ; LAB_005c563f
    JMP 0x005c56c4                      ; 005c55c2
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    CMP EBX,0x25                        ; 005c55c7
        ;   Label: LAB_005c55c7
    JZ 0x005c56a4                       ; 005c55ca
        ;   XREF to: 005c56a4 (CONDITIONAL_JUMP)  ; LAB_005c56a4
    JMP 0x005c56c4                      ; 005c55d0
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    PUSH 0x1                            ; 005c55d5
        ;   Label: LAB_005c55d5
    PUSH 0xa                            ; 005c55d7
    LEA EAX,[ESP + 0x8]                 ; 005c55d9
    PUSH EAX                            ; 005c55dd
    PUSH ESI                            ; 005c55de
    CALL FUN_005c5f7c                   ; 005c55df
        ;   XREF to: 005c5f7c (UNCONDITIONAL_CALL)  ; undefined FUN_005c5f7c()
    ADD ESP,0x10                        ; 005c55e4
    JMP 0x005c567e                      ; 005c55e7
        ;   XREF to: 005c567e (UNCONDITIONAL_JUMP)  ; LAB_005c567e
    PUSH 0x1                            ; 005c55ec
        ;   Label: LAB_005c55ec
    PUSH 0x0                            ; 005c55ee
    LEA EAX,[ESP + 0x8]                 ; 005c55f0
    PUSH EAX                            ; 005c55f4
    PUSH ESI                            ; 005c55f5
    CALL FUN_005c5f7c                   ; 005c55f6
        ;   XREF to: 005c5f7c (UNCONDITIONAL_CALL)  ; undefined FUN_005c5f7c()
    ADD ESP,0x10                        ; 005c55fb
    JMP 0x005c567e                      ; 005c55fe
        ;   XREF to: 005c567e (UNCONDITIONAL_JUMP)  ; LAB_005c567e
    PUSH 0x1                            ; 005c5603
        ;   Label: LAB_005c5603
    PUSH 0x8                            ; 005c5605
    LEA EAX,[ESP + 0x8]                 ; 005c5607
    PUSH EAX                            ; 005c560b
    PUSH ESI                            ; 005c560c
    CALL FUN_005c5f7c                   ; 005c560d
        ;   XREF to: 005c5f7c (UNCONDITIONAL_CALL)  ; undefined FUN_005c5f7c()
    ADD ESP,0x10                        ; 005c5612
    JMP 0x005c567e                      ; 005c5615
        ;   XREF to: 005c567e (UNCONDITIONAL_JUMP)  ; LAB_005c567e
    PUSH 0x0                            ; 005c5617
        ;   Label: LAB_005c5617
    PUSH 0xa                            ; 005c5619
    LEA EAX,[ESP + 0x8]                 ; 005c561b
    PUSH EAX                            ; 005c561f
    PUSH ESI                            ; 005c5620
    CALL FUN_005c5f7c                   ; 005c5621
        ;   XREF to: 005c5f7c (UNCONDITIONAL_CALL)  ; undefined FUN_005c5f7c()
    ADD ESP,0x10                        ; 005c5626
    JMP 0x005c567e                      ; 005c5629
        ;   XREF to: 005c567e (UNCONDITIONAL_JUMP)  ; LAB_005c567e
    PUSH 0x1                            ; 005c562b
        ;   Label: LAB_005c562b
    PUSH 0x10                           ; 005c562d
    LEA EAX,[ESP + 0x8]                 ; 005c562f
    PUSH EAX                            ; 005c5633
    PUSH ESI                            ; 005c5634
    CALL FUN_005c5f7c                   ; 005c5635
        ;   XREF to: 005c5f7c (UNCONDITIONAL_CALL)  ; undefined FUN_005c5f7c()
    ADD ESP,0x10                        ; 005c563a
    JMP 0x005c567e                      ; 005c563d
        ;   XREF to: 005c567e (UNCONDITIONAL_JUMP)  ; LAB_005c567e
    MOV EAX,ESP                         ; 005c563f
        ;   Label: LAB_005c563f
    PUSH EAX                            ; 005c5641
    PUSH ESI                            ; 005c5642
    CALL FUN_005c5c78                   ; 005c5643
        ;   XREF to: 005c5c78 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5c78()
    JMP 0x005c567b                      ; 005c5648
        ;   XREF to: 005c567b (UNCONDITIONAL_JUMP)  ; LAB_005c567b
    OR byte ptr [ESI + 0x10],0x20       ; 005c564a
        ;   Label: LAB_005c564a
    MOV EAX,ESP                         ; 005c564e
        ;   Label: LAB_005c564e
    PUSH EAX                            ; 005c5650
    PUSH ESI                            ; 005c5651
    CALL FUN_005c594c                   ; 005c5652
        ;   XREF to: 005c594c (UNCONDITIONAL_CALL)  ; undefined FUN_005c594c()
    JMP 0x005c567b                      ; 005c5657
        ;   XREF to: 005c567b (UNCONDITIONAL_JUMP)  ; LAB_005c567b
    LEA EAX,[ESP + 0x1c]                ; 005c5659
        ;   Label: LAB_005c5659
    PUSH EAX                            ; 005c565d
    LEA EAX,[ESP + 0x4]                 ; 005c565e
    PUSH EAX                            ; 005c5662
    PUSH ESI                            ; 005c5663
    CALL FUN_005c5b64                   ; 005c5664
        ;   XREF to: 005c5b64 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5b64()
    ADD ESP,0xc                         ; 005c5669
    JMP 0x005c567e                      ; 005c566c
        ;   XREF to: 005c567e (UNCONDITIONAL_JUMP)  ; LAB_005c567e
    OR byte ptr [ESI + 0x10],0x20       ; 005c566e
        ;   Label: LAB_005c566e
    MOV EAX,ESP                         ; 005c5672
        ;   Label: LAB_005c5672
    PUSH EAX                            ; 005c5674
    PUSH ESI                            ; 005c5675
    CALL FUN_005c5854                   ; 005c5676
        ;   XREF to: 005c5854 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5854()
    ADD ESP,0x8                         ; 005c567b
        ;   Label: LAB_005c567b
    MOV EBX,EAX                         ; 005c567e
        ;   Label: LAB_005c567e
    TEST EBX,EBX                        ; 005c5680
    JLE 0x005c5700                      ; 005c5682
        ;   XREF to: 005c5700 (CONDITIONAL_JUMP)  ; LAB_005c5700
    ADD EDI,EBX                         ; 005c5688
    TEST byte ptr [ESI + 0x10],0x1      ; 005c568a
    JZ 0x005c56c4                       ; 005c568e
        ;   XREF to: 005c56c4 (CONDITIONAL_JUMP)  ; LAB_005c56c4
    INC EBP                             ; 005c5690
    JMP 0x005c56c4                      ; 005c5691
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    PUSH EDI                            ; 005c5693
        ;   Label: LAB_005c5693
    LEA EAX,[ESP + 0x4]                 ; 005c5694
    PUSH EAX                            ; 005c5698
    PUSH ESI                            ; 005c5699
    CALL FUN_005c5ab0                   ; 005c569a
        ;   XREF to: 005c5ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5ab0()
    ADD ESP,0xc                         ; 005c569f
    JMP 0x005c56c4                      ; 005c56a2
        ;   XREF to: 005c56c4 (UNCONDITIONAL_JUMP)  ; LAB_005c56c4
    PUSH ESI                            ; 005c56a4
        ;   Label: LAB_005c56a4
    CALL FUN_005c5430                   ; 005c56a5
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5430()
    ADD ESP,0x4                         ; 005c56aa
    CMP EAX,EBX                         ; 005c56ad
    JZ 0x005c56c3                       ; 005c56af
        ;   XREF to: 005c56c3 (CONDITIONAL_JUMP)  ; LAB_005c56c3
    TEST byte ptr [ESI + 0x10],0x2      ; 005c56b1
    JNZ 0x005c5700                      ; 005c56b5
        ;   XREF to: 005c5700 (CONDITIONAL_JUMP)  ; LAB_005c5700
    PUSH ESI                            ; 005c56b7
    PUSH EAX                            ; 005c56b8
    CALL FUN_005c543c                   ; 005c56b9
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined FUN_005c543c()
    ADD ESP,0x8                         ; 005c56be
    JMP 0x005c5700                      ; 005c56c1
        ;   XREF to: 005c5700 (UNCONDITIONAL_JUMP)  ; LAB_005c5700
    INC EDI                             ; 005c56c3
        ;   Label: LAB_005c56c3
    TEST byte ptr [ESI + 0x10],0x2      ; 005c56c4
        ;   Label: LAB_005c56c4
    JZ 0x005c5471                       ; 005c56c8
        ;   XREF to: 005c5471 (CONDITIONAL_JUMP)  ; LAB_005c5471
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c56ce
    CMP byte ptr [EAX],0x25             ; 005c56d2
    JNZ 0x005c5700                      ; 005c56d5
        ;   XREF to: 005c5700 (CONDITIONAL_JUMP)  ; LAB_005c5700
    PUSH ESI                            ; 005c56d7
    LEA ECX,[EAX + 0x1]                 ; 005c56d8
    PUSH ECX                            ; 005c56db
    MOV dword ptr [ESP + 0x24],ECX      ; 005c56dc
    CALL FUN_005c571c                   ; 005c56e0
        ;   XREF to: 005c571c (UNCONDITIONAL_CALL)  ; undefined FUN_005c571c()
    ADD ESP,0x8                         ; 005c56e5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c56e8
    CMP byte ptr [EAX],0x6e             ; 005c56ec
    JNZ 0x005c5700                      ; 005c56ef
        ;   XREF to: 005c5700 (CONDITIONAL_JUMP)  ; LAB_005c5700
    PUSH EDI                            ; 005c56f1
    LEA EAX,[ESP + 0x4]                 ; 005c56f2
    PUSH EAX                            ; 005c56f6
    PUSH ESI                            ; 005c56f7
    CALL FUN_005c5ab0                   ; 005c56f8
        ;   XREF to: 005c5ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5ab0()
    ADD ESP,0xc                         ; 005c56fd
    TEST EBP,EBP                        ; 005c5700
        ;   Label: LAB_005c5700
    JNZ 0x005c5711                      ; 005c5702
        ;   XREF to: 005c5711 (CONDITIONAL_JUMP)  ; LAB_005c5711
    TEST byte ptr [ESI + 0x10],0x2      ; 005c5704
    JZ 0x005c5711                       ; 005c5708
        ;   XREF to: 005c5711 (CONDITIONAL_JUMP)  ; LAB_005c5711
    MOV EAX,0xffffffff                  ; 005c570a
    JMP 0x005c5713                      ; 005c570f
        ;   XREF to: 005c5713 (UNCONDITIONAL_JUMP)  ; LAB_005c5713
    MOV EAX,EBP                         ; 005c5711
        ;   Label: LAB_005c5711
    ADD ESP,0x4                         ; 005c5713
        ;   Label: LAB_005c5713
    POP EBP                             ; 005c5716
    POP EDI                             ; 005c5717
    POP ESI                             ; 005c5718
    POP EBX                             ; 005c5719
    RET                                 ; 005c571a

