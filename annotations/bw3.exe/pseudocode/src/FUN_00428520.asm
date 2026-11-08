; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00428520(int param_1,uint param_2)
;
;
; XREF[3]:
;   FUN_00425da0 at 00426c25
;   FUN_00427bc0 at 00427d9e
;   FUN_004285c0 at 004285cb
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005b7ddb
;   undefined4 DAT_005b7de4
;
; Called Functions:
;   FUN_005a3260
;   FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428520
        ;   Label: FUN_00428520
    PUSH EBP                            ; 00428521
    MOV EBP,ESP                         ; 00428522
    MOV EBX,dword ptr [EBP + 0x10]      ; 00428524
    CMP EBX,0x2                         ; 00428527
    JZ 0x00428546                       ; 0042852a
        ;   XREF to: 00428546 (CONDITIONAL_JUMP)  ; LAB_00428546
    MOV EAX,dword ptr [EBP + 0xc]       ; 0042852c
    PUSH 0x5b7ddb                       ; 0042852f | = "jeff.dfm"
    ADD EAX,0x24a8                      ; 00428534
    PUSH EAX                            ; 00428539
    CALL FUN_005a3260                   ; 0042853a
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0042853f
    TEST EAX,EAX                        ; 00428542
    JZ 0x00428576                       ; 00428544
        ;   XREF to: 00428576 (CONDITIONAL_JUMP)  ; LAB_00428576
    PUSH 0x3                            ; 00428546
        ;   Label: LAB_00428546
    MOV EAX,dword ptr [EBP + 0xc]       ; 00428548
    PUSH 0x5b7de4                       ; 0042854b | DAT_005b7de4
    ADD EAX,0x24a8                      ; 00428550
    PUSH EAX                            ; 00428555
    CALL FUN_005a3f90                   ; 00428556
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 0042855b
    TEST EAX,EAX                        ; 0042855e
    JNZ 0x00428598                      ; 00428560
        ;   XREF to: 00428598 (CONDITIONAL_JUMP)  ; LAB_00428598
    CMP EBX,0x2                         ; 00428562
    JNC 0x00428580                      ; 00428565
        ;   XREF to: 00428580 (CONDITIONAL_JUMP)  ; LAB_00428580
    CMP EBX,0x1                         ; 00428567
    JNZ 0x00428587                      ; 0042856a
        ;   XREF to: 00428587 (CONDITIONAL_JUMP)  ; LAB_00428587
    MOV EBX,0x1                         ; 0042856c
        ;   Label: LAB_0042856c
    MOV EAX,EBX                         ; 00428571
    POP EBP                             ; 00428573
    POP EBX                             ; 00428574
    RET                                 ; 00428575
    MOV EBX,0xffffffff                  ; 00428576
        ;   Label: LAB_00428576
    MOV EAX,EBX                         ; 0042857b
    POP EBP                             ; 0042857d
    POP EBX                             ; 0042857e
    RET                                 ; 0042857f
    JBE 0x0042856c                      ; 00428580
        ;   XREF to: 0042856c (CONDITIONAL_JUMP)  ; LAB_0042856c
        ;   Label: LAB_00428580
    CMP EBX,0x3                         ; 00428582
    JZ 0x0042856c                       ; 00428585
        ;   XREF to: 0042856c (CONDITIONAL_JUMP)  ; LAB_0042856c
    MOV EBX,0xffffffff                  ; 00428587
        ;   Label: LAB_00428587
    MOV EAX,EBX                         ; 0042858c
    POP EBP                             ; 0042858e
    POP EBX                             ; 0042858f
    RET                                 ; 00428590
    XOR EBX,EBX                         ; 00428591
        ;   Label: LAB_00428591
    MOV EAX,EBX                         ; 00428593
    POP EBP                             ; 00428595
    POP EBX                             ; 00428596
    RET                                 ; 00428597
    CMP EBX,0x2                         ; 00428598
        ;   Label: LAB_00428598
    JNC 0x004285ac                      ; 0042859b
        ;   XREF to: 004285ac (CONDITIONAL_JUMP)  ; LAB_004285ac
    CMP EBX,0x1                         ; 0042859d
    JZ 0x0042856c                       ; 004285a0
        ;   XREF to: 0042856c (CONDITIONAL_JUMP)  ; LAB_0042856c
    MOV EBX,0xffffffff                  ; 004285a2
    MOV EAX,EBX                         ; 004285a7
    POP EBP                             ; 004285a9
    POP EBX                             ; 004285aa
    RET                                 ; 004285ab
    JBE 0x00428591                      ; 004285ac
        ;   XREF to: 00428591 (CONDITIONAL_JUMP)  ; LAB_00428591
        ;   Label: LAB_004285ac
    CMP EBX,0x3                         ; 004285ae
    JZ 0x0042856c                       ; 004285b1
        ;   XREF to: 0042856c (CONDITIONAL_JUMP)  ; LAB_0042856c
    MOV EBX,0xffffffff                  ; 004285b3
    MOV EAX,EBX                         ; 004285b8
    POP EBP                             ; 004285ba
    POP EBX                             ; 004285bb
    RET                                 ; 004285bc

