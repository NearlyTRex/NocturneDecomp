; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ce510(CHAR *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cdce0 at 005cde0e
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d8
;
; Called Functions:
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_FUN_005c85c0
;   crt_unknown.c_FUN_005cdb10
;   crt_unknown.c_FUN_005ce6dc
;   crt_unknown.c_FUN_005cebe0
;   crt_unknown.c_FUN_005cec10
;   crt_unknown.c_FUN_005cee44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce510
        ;   Label: crt_unknown.c_FUN_005ce510
    PUSH ESI                            ; 005ce511
    PUSH EDI                            ; 005ce512
    PUSH EBP                            ; 005ce513
    SUB ESP,0x14                        ; 005ce514
    MOV EDX,0x2                         ; 005ce517
    PUSH 0x3d                           ; 005ce51c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005ce51e
    MOV EBX,0x1                         ; 005ce522
    PUSH ECX                            ; 005ce527
    MOV dword ptr [ESP + 0xc],EDX       ; 005ce528
    MOV dword ptr [ESP + 0x8],EBX       ; 005ce52c
    CALL crt_unknown.c_FUN_005cdb10     ; 005ce530
        ;   XREF to: 005cdb10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cdb10()
    MOV EBP,EAX                         ; 005ce535
    ADD ESP,0x8                         ; 005ce537
    TEST EAX,EAX                        ; 005ce53a
    JNZ 0x005ce548                      ; 005ce53c
        ;   XREF to: 005ce548 (CONDITIONAL_JUMP)  ; LAB_005ce548
    MOV EAX,0xffffffff                  ; 005ce53e
    JMP 0x005ce6d4                      ; 005ce543
        ;   XREF to: 005ce6d4 (UNCONDITIONAL_JUMP)  ; LAB_005ce6d4
    MOV ESI,dword ptr [ESP + 0x28]      ; 005ce548
        ;   Label: LAB_005ce548
    CMP EAX,ESI                         ; 005ce54c
    JNZ 0x005ce55d                      ; 005ce54e
        ;   XREF to: 005ce55d (CONDITIONAL_JUMP)  ; LAB_005ce55d
    MOV EAX,0xffffffff                  ; 005ce550
    ADD ESP,0x14                        ; 005ce555
    POP EBP                             ; 005ce558
    POP EDI                             ; 005ce559
    POP ESI                             ; 005ce55a
    POP EBX                             ; 005ce55b
    RET                                 ; 005ce55c
    SUB EAX,ESI                         ; 005ce55d
        ;   Label: LAB_005ce55d
    MOV dword ptr [ESP + 0x10],EAX      ; 005ce55f
    ADD EAX,EBX                         ; 005ce563
    PUSH EAX                            ; 005ce565
    CALL crt_unknown.c_FUN_005c08d0     ; 005ce566
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ce56b
    MOV EBX,EAX                         ; 005ce56e
    MOV dword ptr [ESP + 0x8],EAX       ; 005ce570
    TEST EAX,EAX                        ; 005ce574
    JNZ 0x005ce585                      ; 005ce576
        ;   XREF to: 005ce585 (CONDITIONAL_JUMP)  ; LAB_005ce585
    MOV EAX,0xffffffff                  ; 005ce578
    ADD ESP,0x14                        ; 005ce57d
    POP EBP                             ; 005ce580
    POP EDI                             ; 005ce581
    POP ESI                             ; 005ce582
    POP EBX                             ; 005ce583
    RET                                 ; 005ce584
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ce585
        ;   Label: LAB_005ce585
    MOV EDI,EAX                         ; 005ce589
    PUSH ES                             ; 005ce58b
    MOV AX,DS                           ; 005ce58c
    MOV ES,AX                           ; 005ce58e
    PUSH EDI                            ; 005ce590
    MOV EAX,ECX                         ; 005ce591
    SHR ECX,0x2                         ; 005ce593
    MOVSD.REP ES:EDI,ESI                ; 005ce596
    MOV CL,AL                           ; 005ce598
    AND CL,0x3                          ; 005ce59a
    MOVSB.REP ES:EDI,ESI                ; 005ce59d
    POP EDI                             ; 005ce59f
    POP ES                              ; 005ce5a0
    LEA ESI,[EBP + 0x1]                 ; 005ce5a1
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ce5a4
    PUSH ESI                            ; 005ce5a8
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005ce5a9
    CALL crt_unknown.c_FUN_005cebe0     ; 005ce5ad
        ;   XREF to: 005cebe0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cebe0()
    MOV EBP,EAX                         ; 005ce5b2
    ADD ESP,0x4                         ; 005ce5b4
    TEST EAX,EAX                        ; 005ce5b7
    JZ 0x005ce5ff                       ; 005ce5b9
        ;   XREF to: 005ce5ff (CONDITIONAL_JUMP)  ; LAB_005ce5ff
    INC EAX                             ; 005ce5bb
    PUSH EAX                            ; 005ce5bc
    CALL crt_unknown.c_FUN_005c08d0     ; 005ce5bd
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ce5c2
    MOV EDX,EAX                         ; 005ce5c5
    MOV dword ptr [ESP + 0xc],EAX       ; 005ce5c7
    TEST EAX,EAX                        ; 005ce5cb
    JNZ 0x005ce5df                      ; 005ce5cd
        ;   XREF to: 005ce5df (CONDITIONAL_JUMP)  ; LAB_005ce5df
    PUSH EBX                            ; 005ce5cf
    CALL crt_unknown.c_FUN_005c09f0     ; 005ce5d0
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    MOV EAX,0xffffffff                  ; 005ce5d5
    JMP 0x005ce6d1                      ; 005ce5da
        ;   XREF to: 005ce6d1 (UNCONDITIONAL_JUMP)  ; LAB_005ce6d1
    MOV ECX,EBP                         ; 005ce5df
        ;   Label: LAB_005ce5df
    MOV EDI,EAX                         ; 005ce5e1
    PUSH ES                             ; 005ce5e3
    MOV AX,DS                           ; 005ce5e4
    MOV ES,AX                           ; 005ce5e6
    PUSH EDI                            ; 005ce5e8
    MOV EAX,ECX                         ; 005ce5e9
    SHR ECX,0x2                         ; 005ce5eb
    MOVSD.REP ES:EDI,ESI                ; 005ce5ee
    MOV CL,AL                           ; 005ce5f0
    AND CL,0x3                          ; 005ce5f2
    MOVSB.REP ES:EDI,ESI                ; 005ce5f5
    POP EDI                             ; 005ce5f7
    POP ES                              ; 005ce5f8
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 005ce5f9
    JMP 0x005ce603                      ; 005ce5fd
        ;   XREF to: 005ce603 (UNCONDITIONAL_JUMP)  ; LAB_005ce603
    MOV dword ptr [ESP + 0xc],EAX       ; 005ce5ff
        ;   Label: LAB_005ce5ff
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ce603
        ;   Label: LAB_005ce603
    PUSH EAX                            ; 005ce607
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ce608
    PUSH EDX                            ; 005ce60c
    CALL dword ptr CS:[0x5d0630]        ; 005ce60d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ce614
    PUSH ECX                            ; 005ce618
    MOV EBX,EAX                         ; 005ce619
    CALL crt_unknown.c_FUN_005c09f0     ; 005ce61b
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005ce620
    MOV ESI,dword ptr [ESP + 0xc]       ; 005ce623
    PUSH ESI                            ; 005ce627
    CALL crt_unknown.c_FUN_005c09f0     ; 005ce628
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005ce62d
    TEST EBX,EBX                        ; 005ce630
    JNZ 0x005ce641                      ; 005ce632
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    MOV EAX,0xffffffff                  ; 005ce634
    ADD ESP,0x14                        ; 005ce639
    POP EBP                             ; 005ce63c
    POP EDI                             ; 005ce63d
    POP ESI                             ; 005ce63e
    POP EBX                             ; 005ce63f
    RET                                 ; 005ce640
    MOV EDI,dword ptr [ESP + 0x28]      ; 005ce641
        ;   Label: LAB_005ce641
    PUSH EDI                            ; 005ce645
    CALL crt_unknown.c_FUN_005ce6dc     ; 005ce646
        ;   XREF to: 005ce6dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce6dc()
    ADD ESP,0x4                         ; 005ce64b
    TEST EAX,EAX                        ; 005ce64e
    JZ 0x005ce65f                       ; 005ce650
        ;   XREF to: 005ce65f (CONDITIONAL_JUMP)  ; LAB_005ce65f
    MOV EAX,0xffffffff                  ; 005ce652
    ADD ESP,0x14                        ; 005ce657
    POP EBP                             ; 005ce65a
    POP EDI                             ; 005ce65b
    POP ESI                             ; 005ce65c
    POP EBX                             ; 005ce65d
    RET                                 ; 005ce65e
    CMP dword ptr [0x02c9f6d8],0x0      ; 005ce65f | DAT_02c9f6d8
        ;   Label: LAB_005ce65f
    JZ 0x005ce6d4                       ; 005ce666
        ;   XREF to: 005ce6d4 (CONDITIONAL_JUMP)  ; LAB_005ce6d4
    PUSH EDI                            ; 005ce668
    CALL crt_unknown.c_FUN_005cebe0     ; 005ce669
        ;   XREF to: 005cebe0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cebe0()
    ADD ESP,0x4                         ; 005ce66e
    LEA ESI,[EAX + 0x1]                 ; 005ce671
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ce674
    IMUL EAX,ESI                        ; 005ce678
    PUSH EAX                            ; 005ce67b
    CALL crt_unknown.c_FUN_005c08d0     ; 005ce67c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    MOV EBX,EAX                         ; 005ce681
    ADD ESP,0x4                         ; 005ce683
    TEST EAX,EAX                        ; 005ce686
    JNZ 0x005ce6a1                      ; 005ce688
        ;   XREF to: 005ce6a1 (CONDITIONAL_JUMP)  ; LAB_005ce6a1
    PUSH 0x5                            ; 005ce68a
    CALL crt_unknown.c_FUN_005c85c0     ; 005ce68c
        ;   XREF to: 005c85c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c85c0()
    MOV EAX,0xffffffff                  ; 005ce691
    ADD ESP,0x4                         ; 005ce696
    ADD ESP,0x14                        ; 005ce699
    POP EBP                             ; 005ce69c
    POP EDI                             ; 005ce69d
    POP ESI                             ; 005ce69e
    POP EBX                             ; 005ce69f
    RET                                 ; 005ce6a0
    IMUL ESI,dword ptr [ESP]            ; 005ce6a1
        ;   Label: LAB_005ce6a1
    PUSH ESI                            ; 005ce6a5
    PUSH EDI                            ; 005ce6a6
    PUSH EAX                            ; 005ce6a7
    CALL crt_unknown.c_FUN_005cec10     ; 005ce6a8
        ;   XREF to: 005cec10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cec10()
    ADD ESP,0xc                         ; 005ce6ad
    CMP EAX,-0x1                        ; 005ce6b0
    JNZ 0x005ce6cb                      ; 005ce6b3
        ;   XREF to: 005ce6cb (CONDITIONAL_JUMP)  ; LAB_005ce6cb
    PUSH EBX                            ; 005ce6b5
    CALL crt_unknown.c_FUN_005c09f0     ; 005ce6b6
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    MOV EAX,0xffffffff                  ; 005ce6bb
    ADD ESP,0x4                         ; 005ce6c0
    ADD ESP,0x14                        ; 005ce6c3
    POP EBP                             ; 005ce6c6
    POP EDI                             ; 005ce6c7
    POP ESI                             ; 005ce6c8
    POP EBX                             ; 005ce6c9
    RET                                 ; 005ce6ca
    PUSH EBX                            ; 005ce6cb
        ;   Label: LAB_005ce6cb
    CALL crt_unknown.c_FUN_005cee44     ; 005ce6cc
        ;   XREF to: 005cee44 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cee44()
    ADD ESP,0x4                         ; 005ce6d1
        ;   Label: LAB_005ce6d1
    ADD ESP,0x14                        ; 005ce6d4
        ;   Label: LAB_005ce6d4
    POP EBP                             ; 005ce6d7
    POP EDI                             ; 005ce6d8
    POP ESI                             ; 005ce6d9
    POP EBX                             ; 005ce6da
    RET                                 ; 005ce6db

