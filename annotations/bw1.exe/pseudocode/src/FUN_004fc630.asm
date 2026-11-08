; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fc630(int param_1)
;
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc630
        ;   Label: FUN_004fc630
    PUSH ESI                            ; 004fc631
    PUSH EDI                            ; 004fc632
    SUB ESP,0x30                        ; 004fc633
    MOV EBX,dword ptr [ESP + 0x40]      ; 004fc636
    PUSH EBX                            ; 004fc63a
    CALL FUN_004087b0                   ; 004fc63b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 004fc640
    PUSH 0x0                            ; 004fc643
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fc645
    PUSH EBX                            ; 004fc64b
    LEA ESI,[ESP + 0x8]                 ; 004fc64c
    LEA EDI,[ESP + 0x20]                ; 004fc650
    CALL dword ptr [EAX + 0x1c]         ; 004fc654
    MOV ECX,0x6                         ; 004fc657
    ADD ESP,0x4                         ; 004fc65c
    LEA EAX,[ESP + 0x1c]                ; 004fc65f
    LEA ESI,[ESP + 0x4]                 ; 004fc663
    PUSH EAX                            ; 004fc667
    MOVSD.REP ES:EDI,ESI                ; 004fc668
    CALL FUN_004207b0                   ; 004fc66a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004fc66f
    MOV ESI,EAX                         ; 004fc672
    TEST EAX,EAX                        ; 004fc674
    JNZ 0x004fc68a                      ; 004fc676
        ;   XREF to: 004fc68a (CONDITIONAL_JUMP)  ; LAB_004fc68a
    PUSH EBX                            ; 004fc678
    CALL FUN_004087f0                   ; 004fc679
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004fc67e
    MOV EAX,ESI                         ; 004fc681
    ADD ESP,0x30                        ; 004fc683
    POP EDI                             ; 004fc686
    POP ESI                             ; 004fc687
    POP EBX                             ; 004fc688
    RET                                 ; 004fc689
    PUSH -0x1                           ; 004fc68a
        ;   Label: LAB_004fc68a
    LEA EAX,[EBX + 0x158]               ; 004fc68c
    PUSH 0x0                            ; 004fc692
    PUSH EAX                            ; 004fc694
    CALL FUN_004688a0                   ; 004fc695
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004fc69a
    PUSH EBX                            ; 004fc69d
    CALL FUN_004087f0                   ; 004fc69e
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004fc6a3
    MOV EAX,ESI                         ; 004fc6a6
    ADD ESP,0x30                        ; 004fc6a8
    POP EDI                             ; 004fc6ab
    POP ESI                             ; 004fc6ac
    POP EBX                             ; 004fc6ad
    RET                                 ; 004fc6ae

