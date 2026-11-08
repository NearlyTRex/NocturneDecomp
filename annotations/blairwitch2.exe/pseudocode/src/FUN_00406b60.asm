; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406b60(int param_1)
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

    PUSH EBX                            ; 00406b60
        ;   Label: FUN_00406b60
    PUSH ESI                            ; 00406b61
    PUSH EBP                            ; 00406b62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406b63
    LEA ESI,[EBX + 0x18]                ; 00406b67
    LEA EAX,[EBX + 0x8]                 ; 00406b6a
    PUSH EAX                            ; 00406b6d
    CALL FUN_00403970                   ; 00406b6e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00406b73
    TEST EAX,EAX                        ; 00406b76
    JZ 0x00406bc4                       ; 00406b78
        ;   XREF to: 00406bc4 (CONDITIONAL_JUMP)  ; LAB_00406bc4
    CMP dword ptr [0x01c38b40],0x0      ; 00406b7a | DAT_01c38b40
    JNZ 0x00406bdf                      ; 00406b81
        ;   XREF to: 00406bdf (CONDITIONAL_JUMP)  ; LAB_00406bdf
    CMP dword ptr [0x006141c0],0x20     ; 00406b83 | DAT_006141c0
    JNZ 0x00406bd3                      ; 00406b8a
        ;   XREF to: 00406bd3 (CONDITIONAL_JUMP)  ; LAB_00406bd3
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406b8c | DAT_01c35e6c
    PUSH EDI                            ; 00406b96
        ;   Label: LAB_00406b96
    MOV EDI,0x1f3                       ; 00406b97
    MOV EBP,0x1                         ; 00406b9c
    PUSH EBX                            ; 00406ba1
    MOV dword ptr [0x01c38b54],EDI      ; 00406ba2 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00406ba8 | DAT_01c38b58
    CALL FUN_00403a20                   ; 00406bae
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00403a20()
    ADD ESP,0x4                         ; 00406bb3
    PUSH ESI                            ; 00406bb6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406bb7
    PUSH EAX                            ; 00406bba
    CALL FUN_00431d90                   ; 00406bbb
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00406bc0
    POP EDI                             ; 00406bc3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406bc4
        ;   Label: LAB_00406bc4
    ADD EBX,0x18                        ; 00406bc7
    SHL EAX,0x2                         ; 00406bca
    ADD EAX,EBX                         ; 00406bcd
    POP EBP                             ; 00406bcf
    POP ESI                             ; 00406bd0
    POP EBX                             ; 00406bd1
    RET                                 ; 00406bd2
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406bd3 | DAT_01c35e6c
        ;   Label: LAB_00406bd3
    JMP 0x00406b96                      ; 00406bdd
        ;   XREF to: 00406b96 (UNCONDITIONAL_JUMP)  ; LAB_00406b96
    CMP dword ptr [0x006141c0],0x20     ; 00406bdf | DAT_006141c0
        ;   Label: LAB_00406bdf
    JNZ 0x00406bf4                      ; 00406be6
        ;   XREF to: 00406bf4 (CONDITIONAL_JUMP)  ; LAB_00406bf4
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406be8 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00406b96                      ; 00406bf2
        ;   XREF to: 00406b96 (UNCONDITIONAL_JUMP)  ; LAB_00406b96
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406bf4 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00406bf4
    JMP 0x00406b96                      ; 00406bfe
        ;   XREF to: 00406b96 (UNCONDITIONAL_JUMP)  ; LAB_00406b96

