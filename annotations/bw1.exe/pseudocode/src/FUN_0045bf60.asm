; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045bf60(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0045b560 at 0045b7a4
;
; Called Functions:
;   FUN_0045bec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bf60
        ;   Label: FUN_0045bf60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045bf61
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045bf65
    PUSH EDX                            ; 0045bf69
    PUSH EBX                            ; 0045bf6a
    CALL FUN_0045bec0                   ; 0045bf6b
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045bec0()
    ADD ESP,0x8                         ; 0045bf70
    TEST EAX,EAX                        ; 0045bf73
    JL 0x0045bf95                       ; 0045bf75
        ;   XREF to: 0045bf95 (CONDITIONAL_JUMP)  ; LAB_0045bf95
    SHL EAX,0x3                         ; 0045bf77
    MOV EDX,EAX                         ; 0045bf7a
    SHL EAX,0x4                         ; 0045bf7c
    SUB EAX,EDX                         ; 0045bf7f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25ac] ; 0045bf81
    TEST EAX,EAX                        ; 0045bf88
    JL 0x0045bf95                       ; 0045bf8a
        ;   XREF to: 0045bf95 (CONDITIONAL_JUMP)  ; LAB_0045bf95
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0045bf8c
    POP EBX                             ; 0045bf93
    RET                                 ; 0045bf94
    XOR EAX,EAX                         ; 0045bf95
        ;   Label: LAB_0045bf95
    POP EBX                             ; 0045bf97
    RET                                 ; 0045bf98

