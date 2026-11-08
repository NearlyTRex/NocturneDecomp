; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403ce0(int param_1)
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

    PUSH EBX                            ; 00403ce0
        ;   Label: FUN_00403ce0
    PUSH ESI                            ; 00403ce1
    PUSH EBP                            ; 00403ce2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403ce3
    LEA ESI,[EBX + 0x18]                ; 00403ce7
    LEA EAX,[EBX + 0x8]                 ; 00403cea
    PUSH EAX                            ; 00403ced
    CALL FUN_00403970                   ; 00403cee
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00403cf3
    TEST EAX,EAX                        ; 00403cf6
    JZ 0x00403d41                       ; 00403cf8
        ;   XREF to: 00403d41 (CONDITIONAL_JUMP)  ; LAB_00403d41
    CMP dword ptr [0x01c38b40],0x0      ; 00403cfa | DAT_01c38b40
    JNZ 0x00403d5c                      ; 00403d01
        ;   XREF to: 00403d5c (CONDITIONAL_JUMP)  ; LAB_00403d5c
    CMP dword ptr [0x006141c0],0x20     ; 00403d03 | DAT_006141c0
    JNZ 0x00403d50                      ; 00403d0a
        ;   XREF to: 00403d50 (CONDITIONAL_JUMP)  ; LAB_00403d50
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00403d0c | DAT_01c35e6c
    PUSH EDI                            ; 00403d16
        ;   Label: LAB_00403d16
    MOV EDI,0x1                         ; 00403d17
    PUSH EBX                            ; 00403d1c
    XOR EBP,EBP                         ; 00403d1d
    MOV dword ptr [0x01c38b54],EDI      ; 00403d1f | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00403d25 | DAT_01c38b58
    CALL FUN_00403a20                   ; 00403d2b
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00403a20()
    ADD ESP,0x4                         ; 00403d30
    PUSH ESI                            ; 00403d33
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d34
    PUSH EAX                            ; 00403d37
    CALL FUN_00431d90                   ; 00403d38
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00403d3d
    POP EDI                             ; 00403d40
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d41
        ;   Label: LAB_00403d41
    ADD EBX,0x18                        ; 00403d44
    SHL EAX,0x2                         ; 00403d47
    ADD EAX,EBX                         ; 00403d4a
    POP EBP                             ; 00403d4c
    POP ESI                             ; 00403d4d
    POP EBX                             ; 00403d4e
    RET                                 ; 00403d4f
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00403d50 | DAT_01c35e6c
        ;   Label: LAB_00403d50
    JMP 0x00403d16                      ; 00403d5a
        ;   XREF to: 00403d16 (UNCONDITIONAL_JUMP)  ; LAB_00403d16
    CMP dword ptr [0x006141c0],0x20     ; 00403d5c | DAT_006141c0
        ;   Label: LAB_00403d5c
    JNZ 0x00403d71                      ; 00403d63
        ;   XREF to: 00403d71 (CONDITIONAL_JUMP)  ; LAB_00403d71
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00403d65 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00403d16                      ; 00403d6f
        ;   XREF to: 00403d16 (UNCONDITIONAL_JUMP)  ; LAB_00403d16
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00403d71 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00403d71
    JMP 0x00403d16                      ; 00403d7b
        ;   XREF to: 00403d16 (UNCONDITIONAL_JUMP)  ; LAB_00403d16

