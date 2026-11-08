; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404a60(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00403a20
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404a60
        ;   Label: FUN_00404a60
    PUSH ESI                            ; 00404a61
    PUSH EBP                            ; 00404a62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404a63
    LEA ESI,[EBX + 0x18]                ; 00404a67
    LEA EAX,[EBX + 0x8]                 ; 00404a6a
    PUSH EAX                            ; 00404a6d
    CALL FUN_00403970                   ; 00404a6e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00404a73
    TEST EAX,EAX                        ; 00404a76
    JZ 0x00404ac4                       ; 00404a78
        ;   XREF to: 00404ac4 (CONDITIONAL_JUMP)  ; LAB_00404ac4
    CMP dword ptr [0x01c38b40],0x0      ; 00404a7a | DAT_01c38b40
    JNZ 0x00404adf                      ; 00404a81
        ;   XREF to: 00404adf (CONDITIONAL_JUMP)  ; LAB_00404adf
    CMP dword ptr [0x006141c0],0x20     ; 00404a83 | DAT_006141c0
    JNZ 0x00404ad3                      ; 00404a8a
        ;   XREF to: 00404ad3 (CONDITIONAL_JUMP)  ; LAB_00404ad3
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404a8c | DAT_01c35e6c
    PUSH EDI                            ; 00404a96
        ;   Label: LAB_00404a96
    MOV EDI,0xd1                        ; 00404a97
    MOV EBP,0x3                         ; 00404a9c
    PUSH EBX                            ; 00404aa1
    MOV dword ptr [0x01c38b54],EDI      ; 00404aa2 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00404aa8 | DAT_01c38b58
    CALL FUN_00403a20                   ; 00404aae
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00403a20()
    ADD ESP,0x4                         ; 00404ab3
    PUSH ESI                            ; 00404ab6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ab7
    PUSH EAX                            ; 00404aba
    CALL FUN_00431d90                   ; 00404abb
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00404ac0
    POP EDI                             ; 00404ac3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ac4
        ;   Label: LAB_00404ac4
    ADD EBX,0x18                        ; 00404ac7
    SHL EAX,0x2                         ; 00404aca
    ADD EAX,EBX                         ; 00404acd
    POP EBP                             ; 00404acf
    POP ESI                             ; 00404ad0
    POP EBX                             ; 00404ad1
    RET                                 ; 00404ad2
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404ad3 | DAT_01c35e6c
        ;   Label: LAB_00404ad3
    JMP 0x00404a96                      ; 00404add
        ;   XREF to: 00404a96 (UNCONDITIONAL_JUMP)  ; LAB_00404a96
    CMP dword ptr [0x006141c0],0x20     ; 00404adf | DAT_006141c0
        ;   Label: LAB_00404adf
    JNZ 0x00404af4                      ; 00404ae6
        ;   XREF to: 00404af4 (CONDITIONAL_JUMP)  ; LAB_00404af4
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404ae8 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00404a96                      ; 00404af2
        ;   XREF to: 00404a96 (UNCONDITIONAL_JUMP)  ; LAB_00404a96
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404af4 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00404af4
    JMP 0x00404a96                      ; 00404afe
        ;   XREF to: 00404a96 (UNCONDITIONAL_JUMP)  ; LAB_00404a96

