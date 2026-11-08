; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e3c0(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_0054ec60 at 0054edd4
;   FUN_0054f0d0 at 0054f768
;   FUN_00550260 at 0055038e
;   FUN_00550da0 at 00550f2c
;   FUN_00551170 at 00551304
;   FUN_0055b330 at 0055b419
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_006144d0
;   undefined4 DAT_00622c1c
;   undefined4 DAT_00622c28
;   undefined4 DAT_00625bc0
;   undefined4 DAT_00625c90
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01fe5c1c
;   undefined4 DAT_02c8afb0
;
; Called Functions:
;   FUN_00467270
;   FUN_004837b0
;   FUN_004839f0
;   FUN_00483a20
;   FUN_00483e60
;   FUN_00486900
;   FUN_0048d4f0
;   FUN_0048e4e0
;   FUN_0048e640
;   FUN_004e1db0
;   FUN_00519e40
;   FUN_00555460
;   FUN_00555590
;   FUN_00555610
;   FUN_0059f3e0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e3c0
        ;   Label: FUN_0054e3c0
    PUSH ESI                            ; 0054e3c1
    PUSH EDI                            ; 0054e3c2
    PUSH EBP                            ; 0054e3c3
    SUB ESP,0xc                         ; 0054e3c4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054e3c7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054e3cb
    PUSH 0x622c1c                       ; 0054e3cf | DAT_00622c1c
    MOV EDX,dword ptr [0x00612560]      ; 0054e3d4 | DAT_00612560
    PUSH EDX                            ; 0054e3da | DAT_01bc120c
    CALL FUN_00483a20                   ; 0054e3db
        ;   XREF to: 00483a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483a20()
    ADD ESP,0x8                         ; 0054e3e0
    MOV ECX,dword ptr [0x00612560]      ; 0054e3e3 | DAT_00612560
    PUSH 0x3e800000                     ; 0054e3e9
    PUSH ECX                            ; 0054e3ee | DAT_01bc120c
    CALL FUN_004839f0                   ; 0054e3ef
        ;   XREF to: 004839f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004839f0()
    ADD ESP,0x8                         ; 0054e3f4
    TEST ESI,ESI                        ; 0054e3f7
    JZ 0x0054e5a1                       ; 0054e3f9
        ;   XREF to: 0054e5a1 (CONDITIONAL_JUMP)  ; LAB_0054e5a1
    MOV EDI,dword ptr [EBX + 0x15aeb8]  ; 0054e3ff
    TEST EDI,EDI                        ; 0054e405
    JL 0x0054e5a1                       ; 0054e407
        ;   XREF to: 0054e5a1 (CONDITIONAL_JUMP)  ; LAB_0054e5a1
    IMUL EAX,EDI,0x1a4                  ; 0054e40d
    ADD EAX,EBX                         ; 0054e413
    MOV EDX,dword ptr [EAX + 0x198]     ; 0054e415
    CMP EDX,0x1                         ; 0054e41b
    JGE 0x0054e584                      ; 0054e41e
        ;   XREF to: 0054e584 (CONDITIONAL_JUMP)  ; LAB_0054e584
    MOV ESI,0x2                         ; 0054e424
        ;   Label: LAB_0054e424
    XOR EAX,EAX                         ; 0054e429
        ;   Label: LAB_0054e429
    PUSH EAX                            ; 0054e42b
        ;   Label: LAB_0054e42b
    PUSH dword ptr [ESP + 0x28]         ; 0054e42c
    PUSH 0x1fe5c1c                      ; 0054e430 | DAT_01fe5c1c
    CALL FUN_0048d4f0                   ; 0054e435
        ;   XREF to: 0048d4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048d4f0()
    ADD ESP,0xc                         ; 0054e43a
    CMP ESI,0x2                         ; 0054e43d
    JNZ 0x0054e46b                      ; 0054e440
        ;   XREF to: 0054e46b (CONDITIONAL_JUMP)  ; LAB_0054e46b
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 0054e442
    LEA ESI,[EBX + 0x4]                 ; 0054e44c
    ADD EAX,ESI                         ; 0054e44f
    LEA ESI,[EAX + 0x198]               ; 0054e451
    PUSH ESI                            ; 0054e457
    ADD EAX,0x194                       ; 0054e458
    PUSH EAX                            ; 0054e45d
    PUSH 0x1fe5c1c                      ; 0054e45e | DAT_01fe5c1c
    CALL FUN_0048e640                   ; 0054e463
        ;   XREF to: 0048e640 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e640()
    ADD ESP,0xc                         ; 0054e468
    MOV ECX,dword ptr [0x00612560]      ; 0054e46b | DAT_00612560
        ;   Label: LAB_0054e46b
    PUSH ECX                            ; 0054e471 | DAT_01bc120c
    CALL FUN_00483e60                   ; 0054e472
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0054e477
    TEST EAX,EAX                        ; 0054e47a
    JNZ 0x0054e60d                      ; 0054e47c
        ;   XREF to: 0054e60d (CONDITIONAL_JUMP)  ; LAB_0054e60d
    CMP dword ptr [0x01c50948],0x0      ; 0054e482 | DAT_01c50948
    JNZ 0x0054e494                      ; 0054e489
        ;   XREF to: 0054e494 (CONDITIONAL_JUMP)  ; LAB_0054e494
    PUSH EBX                            ; 0054e48b
    CALL FUN_00555610                   ; 0054e48c
        ;   XREF to: 00555610 (UNCONDITIONAL_CALL)  ; undefined FUN_00555610()
    ADD ESP,0x4                         ; 0054e491
    MOV EDX,dword ptr [0x01c50948]      ; 0054e494 | DAT_01c50948
        ;   Label: LAB_0054e494
    TEST EDX,EDX                        ; 0054e49a
    JNZ 0x0054e50b                      ; 0054e49c
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)  ; LAB_0054e50b
    CMP dword ptr [EBX + 0x15aca4],0x0  ; 0054e49e
    JZ 0x0054e4d7                       ; 0054e4a5
        ;   XREF to: 0054e4d7 (CONDITIONAL_JUMP)  ; LAB_0054e4d7
    MOV EAX,ESP                         ; 0054e4a7
    PUSH EAX                            ; 0054e4a9
    MOV EAX,[0x00612560]                ; 0054e4aa | DAT_00612560
    MOV dword ptr [ESP + 0x4],EDX       ; 0054e4af
    PUSH EAX                            ; 0054e4b3 | DAT_01bc120c
    MOV dword ptr [ESP + 0xc],EDX       ; 0054e4b4
    MOV dword ptr [ESP + 0x10],EDX      ; 0054e4b8
    CALL FUN_004837b0                   ; 0054e4bc
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 0054e4c1
    PUSH -0x1                           ; 0054e4c4
    XOR ESI,ESI                         ; 0054e4c6
    PUSH ESI                            ; 0054e4c8
    PUSH ESI                            ; 0054e4c9
    PUSH 0x1fe5fac                      ; 0054e4ca
    CALL FUN_00467270                   ; 0054e4cf
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; undefined FUN_00467270()
    ADD ESP,0x10                        ; 0054e4d4
    CMP dword ptr [EBX + 0x15aca0],0x0  ; 0054e4d7
        ;   Label: LAB_0054e4d7
    JZ 0x0054e5b1                       ; 0054e4de
        ;   XREF to: 0054e5b1 (CONDITIONAL_JUMP)  ; LAB_0054e5b1
    CMP dword ptr [EBX + 0x15ac9c],0x0  ; 0054e4e4
        ;   Label: LAB_0054e4e4
    JZ 0x0054e5e0                       ; 0054e4eb
        ;   XREF to: 0054e5e0 (CONDITIONAL_JUMP)  ; LAB_0054e5e0
    CMP dword ptr [EBX + 0x15acb8],0x0  ; 0054e4f1
        ;   Label: LAB_0054e4f1
    JZ 0x0054e50b                       ; 0054e4f8
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)  ; LAB_0054e50b
    PUSH 0x1                            ; 0054e4fa
    MOV ESI,dword ptr [0x00625bc0]      ; 0054e4fc | DAT_00625bc0
    PUSH ESI                            ; 0054e502
    CALL FUN_0059f3e0                   ; 0054e503
        ;   XREF to: 0059f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f3e0()
    ADD ESP,0x8                         ; 0054e508
    MOV EBP,dword ptr [EBX + 0x15acc8]  ; 0054e50b
        ;   Label: LAB_0054e50b
    XOR EDI,EDI                         ; 0054e511
    TEST EBP,EBP                        ; 0054e513
    JLE 0x0054e57c                      ; 0054e515
        ;   XREF to: 0054e57c (CONDITIONAL_JUMP)  ; LAB_0054e57c
    MOV ESI,EBX                         ; 0054e517
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0054e519
        ;   Label: LAB_0054e519
    ADD EAX,0x1ec                       ; 0054e51f
    PUSH EAX                            ; 0054e524
    CALL FUN_00519e40                   ; 0054e525
        ;   XREF to: 00519e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00519e40()
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0054e52a
    MOV EBP,dword ptr [EAX + 0x180]     ; 0054e530
    ADD ESP,0x4                         ; 0054e536
    TEST EBP,EBP                        ; 0054e539
    JZ 0x0054e546                       ; 0054e53b
        ;   XREF to: 0054e546 (CONDITIONAL_JUMP)  ; LAB_0054e546
    PUSH EAX                            ; 0054e53d
    CALL FUN_004e1db0                   ; 0054e53e
        ;   XREF to: 004e1db0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1db0()
    ADD ESP,0x4                         ; 0054e543
    PUSH 0x1                            ; 0054e546
        ;   Label: LAB_0054e546
    PUSH EDI                            ; 0054e548
    PUSH EBX                            ; 0054e549
    CALL FUN_00555460                   ; 0054e54a
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; undefined FUN_00555460()
    ADD ESP,0xc                         ; 0054e54f
    PUSH 0x0                            ; 0054e552
    PUSH dword ptr [ESP + 0x28]         ; 0054e554
    PUSH 0x1fe5c1c                      ; 0054e558 | DAT_01fe5c1c
    CALL FUN_0048d4f0                   ; 0054e55d
        ;   XREF to: 0048d4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048d4f0()
    ADD ESP,0xc                         ; 0054e562
    PUSH EBX                            ; 0054e565
    ADD ESI,0x4                         ; 0054e566
    INC EDI                             ; 0054e569
    CALL FUN_00555590                   ; 0054e56a
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; undefined FUN_00555590()
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 0054e56f
    ADD ESP,0x4                         ; 0054e575
    CMP EDI,ECX                         ; 0054e578
    JL 0x0054e519                       ; 0054e57a
        ;   XREF to: 0054e519 (CONDITIONAL_JUMP)  ; LAB_0054e519
    ADD ESP,0xc                         ; 0054e57c
        ;   Label: LAB_0054e57c
    POP EBP                             ; 0054e57f
    POP EDI                             ; 0054e580
    POP ESI                             ; 0054e581
    POP EBX                             ; 0054e582
    RET                                 ; 0054e583
    MOV ECX,dword ptr [EAX + 0x19c]     ; 0054e584
        ;   Label: LAB_0054e584
    TEST ECX,ECX                        ; 0054e58a
    JZ 0x0054e424                       ; 0054e58c
        ;   XREF to: 0054e424 (CONDITIONAL_JUMP)  ; LAB_0054e424
    PUSH ECX                            ; 0054e592
    PUSH EDX                            ; 0054e593
    PUSH 0x1fe5c1c                      ; 0054e594 | DAT_01fe5c1c
    CALL FUN_0048e4e0                   ; 0054e599
        ;   XREF to: 0048e4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e4e0()
    ADD ESP,0xc                         ; 0054e59e
    CMP ESI,0x1                         ; 0054e5a1
        ;   Label: LAB_0054e5a1
    JNZ 0x0054e429                      ; 0054e5a4
        ;   XREF to: 0054e429 (CONDITIONAL_JUMP)  ; LAB_0054e429
    MOV EAX,ESI                         ; 0054e5aa
    JMP 0x0054e42b                      ; 0054e5ac
        ;   XREF to: 0054e42b (UNCONDITIONAL_JUMP)  ; LAB_0054e42b
    CMP dword ptr [EBX + 0x161640],0x0  ; 0054e5b1
        ;   Label: LAB_0054e5b1
    JZ 0x0054e4e4                       ; 0054e5b8
        ;   XREF to: 0054e4e4 (CONDITIONAL_JUMP)  ; LAB_0054e4e4
    MOV ESI,dword ptr [EBX + 0x161664]  ; 0054e5be
    PUSH ESI                            ; 0054e5c4
    LEA EAX,[EBX + 0x161644]            ; 0054e5c5
    PUSH EAX                            ; 0054e5cb
    MOV EDI,dword ptr [0x006144d0]      ; 0054e5cc | DAT_006144d0
    PUSH EDI                            ; 0054e5d2
    CALL FUN_00486900                   ; 0054e5d3
        ;   XREF to: 00486900 (UNCONDITIONAL_CALL)  ; undefined FUN_00486900()
    ADD ESP,0xc                         ; 0054e5d8
    JMP 0x0054e4e4                      ; 0054e5db
        ;   XREF to: 0054e4e4 (UNCONDITIONAL_JUMP)  ; LAB_0054e4e4
    MOV EAX,[0x00625c90]                ; 0054e5e0 | DAT_00625c90
        ;   Label: LAB_0054e5e0
    PUSH EAX                            ; 0054e5e5 | DAT_02c8afb0
    CALL FUN_005a9a40                   ; 0054e5e6
        ;   XREF to: 005a9a40 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9a40()
    MOV EAX,[0x00625c90]                ; 0054e5eb | DAT_00625c90
    MOV EDX,dword ptr [EAX]             ; 0054e5f0 | DAT_02c8afb0
    ADD ESP,0x4                         ; 0054e5f2
    TEST EDX,EDX                        ; 0054e5f5
    JNZ 0x0054e4f1                      ; 0054e5f7
        ;   XREF to: 0054e4f1 (CONDITIONAL_JUMP)  ; LAB_0054e4f1
    PUSH 0x1                            ; 0054e5fd
    PUSH EAX                            ; 0054e5ff | DAT_02c8afb0
    CALL FUN_005a9f10                   ; 0054e600
        ;   XREF to: 005a9f10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9f10()
    ADD ESP,0x8                         ; 0054e605
    JMP 0x0054e4f1                      ; 0054e608
        ;   XREF to: 0054e4f1 (UNCONDITIONAL_JUMP)  ; LAB_0054e4f1
    CMP dword ptr [0x00622c28],0x0      ; 0054e60d | DAT_00622c28
        ;   Label: LAB_0054e60d
    JZ 0x0054e57c                       ; 0054e614
        ;   XREF to: 0054e57c (CONDITIONAL_JUMP)  ; LAB_0054e57c
    MOV EBP,dword ptr [EBX + 0x15acc8]  ; 0054e61a
    XOR EDI,EDI                         ; 0054e620
    TEST EBP,EBP                        ; 0054e622
    JLE 0x0054e57c                      ; 0054e624
        ;   XREF to: 0054e57c (CONDITIONAL_JUMP)  ; LAB_0054e57c
    MOV ESI,EBX                         ; 0054e62a
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0054e62c
        ;   Label: LAB_0054e62c
    ADD EAX,0x1ec                       ; 0054e632
    PUSH EAX                            ; 0054e637
    CALL FUN_00519e40                   ; 0054e638
        ;   XREF to: 00519e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00519e40()
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0054e63d
    MOV EDX,dword ptr [EAX + 0x180]     ; 0054e643
    ADD ESP,0x4                         ; 0054e649
    TEST EDX,EDX                        ; 0054e64c
    JZ 0x0054e659                       ; 0054e64e
        ;   XREF to: 0054e659 (CONDITIONAL_JUMP)  ; LAB_0054e659
    PUSH EAX                            ; 0054e650
    CALL FUN_004e1db0                   ; 0054e651
        ;   XREF to: 004e1db0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1db0()
    ADD ESP,0x4                         ; 0054e656
    PUSH 0x0                            ; 0054e659
        ;   Label: LAB_0054e659
    PUSH EDI                            ; 0054e65b
    PUSH EBX                            ; 0054e65c
    CALL FUN_00555460                   ; 0054e65d
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; undefined FUN_00555460()
    ADD ESP,0xc                         ; 0054e662
    PUSH 0x0                            ; 0054e665
    PUSH dword ptr [ESP + 0x28]         ; 0054e667
    PUSH 0x1fe5c1c                      ; 0054e66b | DAT_01fe5c1c
    CALL FUN_0048d4f0                   ; 0054e670
        ;   XREF to: 0048d4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048d4f0()
    ADD ESP,0xc                         ; 0054e675
    PUSH EBX                            ; 0054e678
    ADD ESI,0x4                         ; 0054e679
    INC EDI                             ; 0054e67c
    CALL FUN_00555590                   ; 0054e67d
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; undefined FUN_00555590()
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 0054e682
    ADD ESP,0x4                         ; 0054e688
    CMP EDI,EAX                         ; 0054e68b
    JGE 0x0054e57c                      ; 0054e68d
        ;   XREF to: 0054e57c (CONDITIONAL_JUMP)  ; LAB_0054e57c
    JMP 0x0054e62c                      ; 0054e693
        ;   XREF to: 0054e62c (UNCONDITIONAL_JUMP)  ; LAB_0054e62c

