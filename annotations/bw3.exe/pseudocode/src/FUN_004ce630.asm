; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ce630(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00534890 at 005352dd
;   FUN_00535da0 at 0053620c
;   FUN_0053ba00 at 0053ba10
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d21320
;   undefined4 DAT_01d276b8
;   undefined4 DAT_01d4a940
;   undefined4 DAT_01d4aec8
;
; Called Functions:
;   FUN_004cd600
;   FUN_004cd690
;   FUN_004cdc90
;   FUN_004cdd30
;   FUN_004ce310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce630
        ;   Label: FUN_004ce630
    PUSH ESI                            ; 004ce631
    PUSH EDI                            ; 004ce632
    PUSH EBP                            ; 004ce633
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ce634
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ce638
    MOV EAX,[0x005fe9dc]                ; 004ce63c | DAT_005fe9dc | DAT_01d2130c
    CMP dword ptr [EAX + 0x14],0x0      ; 004ce641 | DAT_01d21320
    JNZ 0x004ce655                      ; 004ce645
        ;   XREF to: 004ce655 (CONDITIONAL_JUMP)  ; LAB_004ce655
    LEA EAX,[EAX]                       ; 004ce647
    LEA EDX,[EDX]                       ; 004ce64d
    POP EBP                             ; 004ce650
        ;   Label: LAB_004ce650
    POP EDI                             ; 004ce651
    POP ESI                             ; 004ce652
    POP EBX                             ; 004ce653
    RET                                 ; 004ce654
    PUSH 0x1d276bc                      ; 004ce655
        ;   Label: LAB_004ce655
    CALL FUN_004cd600                   ; 004ce65a
        ;   XREF to: 004cd600 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd600()
    ADD ESP,0x4                         ; 004ce65f
    TEST EBP,EBP                        ; 004ce662
    JZ 0x004ce71b                       ; 004ce664
        ;   XREF to: 004ce71b (CONDITIONAL_JUMP)  ; LAB_004ce71b
    MOV EBX,dword ptr [0x01d276b8]      ; 004ce66a | DAT_01d276b8
    XOR ESI,ESI                         ; 004ce670
    TEST EBX,EBX                        ; 004ce672
    JLE 0x004ce6a0                      ; 004ce674
        ;   XREF to: 004ce6a0 (CONDITIONAL_JUMP)  ; LAB_004ce6a0
    MOV EBX,0x1d276bc                   ; 004ce676
    PUSH 0x0                            ; 004ce67b
        ;   Label: LAB_004ce67b
    PUSH EBX                            ; 004ce67d
    INC ESI                             ; 004ce67e
    CALL FUN_004cd690                   ; 004ce67f
        ;   XREF to: 004cd690 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd690()
    MOV ECX,dword ptr [0x01d276b8]      ; 004ce684 | DAT_01d276b8
    ADD ESP,0x8                         ; 004ce68a
    ADD EBX,0x48                        ; 004ce68d
    CMP ESI,ECX                         ; 004ce690
    JL 0x004ce67b                       ; 004ce692
        ;   XREF to: 004ce67b (CONDITIONAL_JUMP)  ; LAB_004ce67b
    LEA EAX,[EAX]                       ; 004ce694
    LEA EDX,[EDX]                       ; 004ce69a
    PUSH 0x1d4a944                      ; 004ce6a0
        ;   Label: LAB_004ce6a0
    CALL FUN_004cdc90                   ; 004ce6a5
        ;   XREF to: 004cdc90 (UNCONDITIONAL_CALL)  ; undefined FUN_004cdc90()
    ADD ESP,0x4                         ; 004ce6aa
    TEST EBP,EBP                        ; 004ce6ad
    JZ 0x004ce75c                       ; 004ce6af
        ;   XREF to: 004ce75c (CONDITIONAL_JUMP)  ; LAB_004ce75c
    MOV ESI,dword ptr [0x01d4a940]      ; 004ce6b5 | DAT_01d4a940
    XOR EBX,EBX                         ; 004ce6bb
    TEST ESI,ESI                        ; 004ce6bd
    JLE 0x004ce6e0                      ; 004ce6bf
        ;   XREF to: 004ce6e0 (CONDITIONAL_JUMP)  ; LAB_004ce6e0
    MOV ESI,0x1d4a944                   ; 004ce6c1
    PUSH 0x0                            ; 004ce6c6
        ;   Label: LAB_004ce6c6
    PUSH ESI                            ; 004ce6c8
    INC EBX                             ; 004ce6c9
    CALL FUN_004cdd30                   ; 004ce6ca
        ;   XREF to: 004cdd30 (UNCONDITIONAL_CALL)  ; undefined FUN_004cdd30()
    MOV ECX,dword ptr [0x01d4a940]      ; 004ce6cf | DAT_01d4a940
    ADD ESP,0x8                         ; 004ce6d5
    ADD ESI,0x2c                        ; 004ce6d8
    CMP EBX,ECX                         ; 004ce6db
    JL 0x004ce6c6                       ; 004ce6dd
        ;   XREF to: 004ce6c6 (CONDITIONAL_JUMP)  ; LAB_004ce6c6
    NOP                                 ; 004ce6df
    TEST EBP,EBP                        ; 004ce6e0
        ;   Label: LAB_004ce6e0
    JZ 0x004ce79d                       ; 004ce6e2
        ;   XREF to: 004ce79d (CONDITIONAL_JUMP)  ; LAB_004ce79d
    MOV ESI,dword ptr [0x01d4aec8]      ; 004ce6e8 | DAT_01d4aec8
    XOR EBX,EBX                         ; 004ce6ee
    TEST ESI,ESI                        ; 004ce6f0
    JLE 0x004ce650                      ; 004ce6f2
        ;   XREF to: 004ce650 (CONDITIONAL_JUMP)  ; LAB_004ce650
    MOV ESI,0x1d4aecc                   ; 004ce6f8
    PUSH 0x0                            ; 004ce6fd
        ;   Label: LAB_004ce6fd
    PUSH ESI                            ; 004ce6ff
    INC EBX                             ; 004ce700
    CALL FUN_004ce310                   ; 004ce701
        ;   XREF to: 004ce310 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce310()
    MOV EDX,dword ptr [0x01d4aec8]      ; 004ce706 | DAT_01d4aec8
    ADD ESP,0x8                         ; 004ce70c
    ADD ESI,0x44                        ; 004ce70f
    CMP EBX,EDX                         ; 004ce712
    JL 0x004ce6fd                       ; 004ce714
        ;   XREF to: 004ce6fd (CONDITIONAL_JUMP)  ; LAB_004ce6fd
    POP EBP                             ; 004ce716
    POP EDI                             ; 004ce717
    POP ESI                             ; 004ce718
    POP EBX                             ; 004ce719
    RET                                 ; 004ce71a
    MOV ECX,dword ptr [0x01d276b8]      ; 004ce71b | DAT_01d276b8
        ;   Label: LAB_004ce71b
    XOR ESI,ESI                         ; 004ce721
    TEST ECX,ECX                        ; 004ce723
    JLE 0x004ce6a0                      ; 004ce725
        ;   XREF to: 004ce6a0 (CONDITIONAL_JUMP)  ; LAB_004ce6a0
    XOR EBX,EBX                         ; 004ce72b
    CMP dword ptr [EBX + 0x1d276bc],0x0 ; 004ce72d
        ;   Label: LAB_004ce72d
    JZ 0x004ce749                       ; 004ce734
        ;   XREF to: 004ce749 (CONDITIONAL_JUMP)  ; LAB_004ce749
    MOV EAX,[0x01d276b8]                ; 004ce736 | DAT_01d276b8
        ;   Label: LAB_004ce736
    INC ESI                             ; 004ce73b
    ADD EBX,0x48                        ; 004ce73c
    CMP ESI,EAX                         ; 004ce73f
    JGE 0x004ce6a0                      ; 004ce741
        ;   XREF to: 004ce6a0 (CONDITIONAL_JUMP)  ; LAB_004ce6a0
    JMP 0x004ce72d                      ; 004ce747
        ;   XREF to: 004ce72d (UNCONDITIONAL_JUMP)  ; LAB_004ce72d
    MOV EAX,0x1d276bc                   ; 004ce749
        ;   Label: LAB_004ce749
    PUSH EDI                            ; 004ce74e
    ADD EAX,EBX                         ; 004ce74f
    PUSH EAX                            ; 004ce751
    CALL FUN_004cd690                   ; 004ce752
        ;   XREF to: 004cd690 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd690()
    ADD ESP,0x8                         ; 004ce757
    JMP 0x004ce736                      ; 004ce75a
        ;   XREF to: 004ce736 (UNCONDITIONAL_JUMP)  ; LAB_004ce736
    MOV EBX,dword ptr [0x01d4a940]      ; 004ce75c | DAT_01d4a940
        ;   Label: LAB_004ce75c
    XOR ESI,ESI                         ; 004ce762
    TEST EBX,EBX                        ; 004ce764
    JLE 0x004ce6e0                      ; 004ce766
        ;   XREF to: 004ce6e0 (CONDITIONAL_JUMP)  ; LAB_004ce6e0
    XOR EBX,EBX                         ; 004ce76c
    CMP dword ptr [EBX + 0x1d4a944],0x0 ; 004ce76e
        ;   Label: LAB_004ce76e
    JZ 0x004ce78a                       ; 004ce775
        ;   XREF to: 004ce78a (CONDITIONAL_JUMP)  ; LAB_004ce78a
    MOV EAX,[0x01d4a940]                ; 004ce777 | DAT_01d4a940
        ;   Label: LAB_004ce777
    INC ESI                             ; 004ce77c
    ADD EBX,0x2c                        ; 004ce77d
    CMP ESI,EAX                         ; 004ce780
    JGE 0x004ce6e0                      ; 004ce782
        ;   XREF to: 004ce6e0 (CONDITIONAL_JUMP)  ; LAB_004ce6e0
    JMP 0x004ce76e                      ; 004ce788
        ;   XREF to: 004ce76e (UNCONDITIONAL_JUMP)  ; LAB_004ce76e
    MOV EAX,0x1d4a944                   ; 004ce78a
        ;   Label: LAB_004ce78a
    PUSH EDI                            ; 004ce78f
    ADD EAX,EBX                         ; 004ce790
    PUSH EAX                            ; 004ce792
    CALL FUN_004cdd30                   ; 004ce793
        ;   XREF to: 004cdd30 (UNCONDITIONAL_CALL)  ; undefined FUN_004cdd30()
    ADD ESP,0x8                         ; 004ce798
    JMP 0x004ce777                      ; 004ce79b
        ;   XREF to: 004ce777 (UNCONDITIONAL_JUMP)  ; LAB_004ce777
    MOV EBX,dword ptr [0x01d4aec8]      ; 004ce79d | DAT_01d4aec8
        ;   Label: LAB_004ce79d
    XOR ESI,ESI                         ; 004ce7a3
    TEST EBX,EBX                        ; 004ce7a5
    JLE 0x004ce650                      ; 004ce7a7
        ;   XREF to: 004ce650 (CONDITIONAL_JUMP)  ; LAB_004ce650
    XOR EBX,EBX                         ; 004ce7ad
    CMP dword ptr [EBX + 0x1d4aecc],0x0 ; 004ce7af
        ;   Label: LAB_004ce7af
    JZ 0x004ce7cc                       ; 004ce7b6
        ;   XREF to: 004ce7cc (CONDITIONAL_JUMP)  ; LAB_004ce7cc
    MOV EBP,dword ptr [0x01d4aec8]      ; 004ce7b8 | DAT_01d4aec8
        ;   Label: LAB_004ce7b8
    INC ESI                             ; 004ce7be
    ADD EBX,0x44                        ; 004ce7bf
    CMP ESI,EBP                         ; 004ce7c2
    JGE 0x004ce650                      ; 004ce7c4
        ;   XREF to: 004ce650 (CONDITIONAL_JUMP)  ; LAB_004ce650
    JMP 0x004ce7af                      ; 004ce7ca
        ;   XREF to: 004ce7af (UNCONDITIONAL_JUMP)  ; LAB_004ce7af
    MOV EAX,0x1d4aecc                   ; 004ce7cc
        ;   Label: LAB_004ce7cc
    PUSH EDI                            ; 004ce7d1
    ADD EAX,EBX                         ; 004ce7d2
    PUSH EAX                            ; 004ce7d4
    CALL FUN_004ce310                   ; 004ce7d5
        ;   XREF to: 004ce310 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce310()
    ADD ESP,0x8                         ; 004ce7da
    JMP 0x004ce7b8                      ; 004ce7dd
        ;   XREF to: 004ce7b8 (UNCONDITIONAL_JUMP)  ; LAB_004ce7b8

