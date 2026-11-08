; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ab80(int param_1)
;
;
; XREF[3]:
;   FUN_0047acc0 at 0047ada7
;   FUN_0047b1f0 at 0047b5af
;   FUN_0047d270 at 0047d6ab
;
; Called Functions:
;   FUN_0047ab10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ab80
        ;   Label: FUN_0047ab80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047ab81
    MOV EDX,dword ptr [EBX + 0x138]     ; 0047ab85
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047ab8b
    CMP EAX,EDX                         ; 0047ab91
    JG 0x0047ab99                       ; 0047ab93
        ;   XREF to: 0047ab99 (CONDITIONAL_JUMP)  ; LAB_0047ab99
    JL 0x0047abb2                       ; 0047ab95
        ;   XREF to: 0047abb2 (CONDITIONAL_JUMP)  ; LAB_0047abb2
    POP EBX                             ; 0047ab97
    RET                                 ; 0047ab98
    PUSH EAX                            ; 0047ab99
        ;   Label: LAB_0047ab99
    PUSH EDX                            ; 0047ab9a
    PUSH EBX                            ; 0047ab9b
    CALL FUN_0047ab10                   ; 0047ab9c
        ;   XREF to: 0047ab10 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab10()
    MOV EAX,dword ptr [EBX + 0x138]     ; 0047aba1
    ADD ESP,0xc                         ; 0047aba7
    MOV dword ptr [EBX + 0x134],EAX     ; 0047abaa
    POP EBX                             ; 0047abb0
    RET                                 ; 0047abb1
    PUSH EDX                            ; 0047abb2
        ;   Label: LAB_0047abb2
    PUSH EAX                            ; 0047abb3
    PUSH EBX                            ; 0047abb4
    CALL FUN_0047ab10                   ; 0047abb5
        ;   XREF to: 0047ab10 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab10()
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047abba
    ADD ESP,0xc                         ; 0047abc0
    MOV dword ptr [EBX + 0x138],EAX     ; 0047abc3
    POP EBX                             ; 0047abc9
    RET                                 ; 0047abca

