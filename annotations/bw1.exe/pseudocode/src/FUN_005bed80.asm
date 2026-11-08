; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bed80(int param_1)
;
;
; XREF[2]:
;   FUN_005bafb0 at 005bb133
;   FUN_005bd560 at 005bda0c
;
; Referenced Globals:
;   TerminatedCString s_CHASE_2_005fa9be
;
; Called Functions:
;   FUN_0040cc60
;   FUN_00524150
;   FUN_005247c0
;   FUN_00524a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bed80
        ;   Label: FUN_005bed80
    PUSH 0x0                            ; 005bed81
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bed83
    PUSH 0x5fa9be                       ; 005bed87 | = "CHASE_2"
    ADD EBX,0x158                       ; 005bed8c
    PUSH EBX                            ; 005bed92
    CALL FUN_00524a00                   ; 005bed93
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 005bed98
    PUSH EAX                            ; 005bed9b
    CALL FUN_00524150                   ; 005bed9c
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; undefined FUN_00524150()
    ADD ESP,0xc                         ; 005beda1
    CMP EAX,0x16                        ; 005beda4
    JNZ 0x005bedd9                      ; 005beda7
        ;   XREF to: 005bedd9 (CONDITIONAL_JUMP)  ; LAB_005bedd9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005beda9
    MOV EDX,dword ptr [EAX + 0xc2f0]    ; 005bedad
    TEST EDX,EDX                        ; 005bedb3
    JZ 0x005bedc6                       ; 005bedb5
        ;   XREF to: 005bedc6 (CONDITIONAL_JUMP)  ; LAB_005bedc6
    PUSH 0x1                            ; 005bedb7
    PUSH 0x16                           ; 005bedb9
    PUSH EBX                            ; 005bedbb
        ;   Label: LAB_005bedbb
    CALL FUN_005247c0                   ; 005bedbc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005bedc1
    POP EBX                             ; 005bedc4
    RET                                 ; 005bedc5
    PUSH 0x1                            ; 005bedc6
        ;   Label: LAB_005bedc6
    PUSH 0x2                            ; 005bedc8
    PUSH EDX                            ; 005bedca
    CALL FUN_0040cc60                   ; 005bedcb
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 005bedd0
    ADD EAX,0x15                        ; 005bedd3
    PUSH EAX                            ; 005bedd6
    JMP 0x005bedbb                      ; 005bedd7
        ;   XREF to: 005bedbb (UNCONDITIONAL_JUMP)  ; LAB_005bedbb
    PUSH 0x1                            ; 005bedd9
        ;   Label: LAB_005bedd9
    PUSH 0x1                            ; 005beddb
    PUSH EBX                            ; 005beddd
    CALL FUN_005247c0                   ; 005bedde
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005bede3
    POP EBX                             ; 005bede6
    RET                                 ; 005bede7

