; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004df730(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df730
        ;   Label: FUN_004df730
    SUB ESP,0x30                        ; 004df731
    MOV EBX,dword ptr [ESP + 0x38]      ; 004df734
    LEA EAX,[EBX + 0x158]               ; 004df738
    PUSH EAX                            ; 004df73e
    CALL FUN_004625a0                   ; 004df73f
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004df744
    ADD ESP,0x4                         ; 004df74a
    CMP EDX,0x1                         ; 004df74d
    JGE 0x004df759                      ; 004df750
        ;   XREF to: 004df759 (CONDITIONAL_JUMP)  ; LAB_004df759
    XOR EAX,EAX                         ; 004df752
    ADD ESP,0x30                        ; 004df754
    POP EBX                             ; 004df757
    RET                                 ; 004df758
    PUSH EDI                            ; 004df759
        ;   Label: LAB_004df759
    PUSH ESI                            ; 004df75a
    PUSH EBX                            ; 004df75b
    CALL FUN_004087f0                   ; 004df75c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004df761
    PUSH 0x0                            ; 004df764
    MOV EAX,dword ptr [EBX + 0x154]     ; 004df766
    PUSH EBX                            ; 004df76c
    LEA ESI,[ESP + 0x28]                ; 004df76d
    LEA EDI,[ESP + 0x10]                ; 004df771
    CALL dword ptr [EAX + 0x1c]         ; 004df775
    MOV ECX,0x6                         ; 004df778
    ADD ESP,0x4                         ; 004df77d
    LEA EAX,[ESP + 0xc]                 ; 004df780
    LEA ESI,[ESP + 0x24]                ; 004df784
    PUSH EAX                            ; 004df788
    MOVSD.REP ES:EDI,ESI                ; 004df789
    CALL FUN_0041daf0                   ; 004df78b
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004df790
    MOV ESI,EAX                         ; 004df793
    TEST EAX,EAX                        ; 004df795
    JZ 0x004df7ac                       ; 004df797
        ;   XREF to: 004df7ac (CONDITIONAL_JUMP)  ; LAB_004df7ac
    PUSH -0x1                           ; 004df799
    LEA EAX,[EBX + 0x158]               ; 004df79b
    PUSH 0x0                            ; 004df7a1
    PUSH EAX                            ; 004df7a3
    CALL FUN_00462540                   ; 004df7a4
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 004df7a9
    PUSH EBX                            ; 004df7ac
        ;   Label: LAB_004df7ac
    CALL FUN_00408830                   ; 004df7ad
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004df7b2
    MOV EAX,ESI                         ; 004df7b5
    POP ESI                             ; 004df7b7
    POP EDI                             ; 004df7b8
    ADD ESP,0x30                        ; 004df7b9
    POP EBX                             ; 004df7bc
    RET                                 ; 004df7bd

