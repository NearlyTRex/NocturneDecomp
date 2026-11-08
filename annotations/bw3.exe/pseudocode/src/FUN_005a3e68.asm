; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a3e68(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005a3e50 at 005a3e5b
;
; Called Functions:
;   FUN_005a3660
;   FUN_005a3780
;   FUN_005a9e60
;   FUN_005aa044
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3e68
        ;   Label: FUN_005a3e68
    PUSH ESI                            ; 005a3e69
    PUSH EDI                            ; 005a3e6a
    PUSH EBP                            ; 005a3e6b
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3e6c
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a3e70
    TEST EBX,EBX                        ; 005a3e74
    JNZ 0x005a3e86                      ; 005a3e76
        ;   XREF to: 005a3e86 (CONDITIONAL_JUMP)  ; LAB_005a3e86
    PUSH EDI                            ; 005a3e78
    CALL FUN_005a3660                   ; 005a3e79
        ;   XREF to: 005a3660 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3660()
    ADD ESP,0x4                         ; 005a3e7e
    POP EBP                             ; 005a3e81
    POP EDI                             ; 005a3e82
    POP ESI                             ; 005a3e83
    POP EBX                             ; 005a3e84
    RET                                 ; 005a3e85
    TEST EDI,EDI                        ; 005a3e86
        ;   Label: LAB_005a3e86
    JNZ 0x005a3e9a                      ; 005a3e88
        ;   XREF to: 005a3e9a (CONDITIONAL_JUMP)  ; LAB_005a3e9a
    PUSH EBX                            ; 005a3e8a
    CALL FUN_005a3780                   ; 005a3e8b
        ;   XREF to: 005a3780 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3780()
    ADD ESP,0x4                         ; 005a3e90
    XOR EAX,EAX                         ; 005a3e93
    POP EBP                             ; 005a3e95
    POP EDI                             ; 005a3e96
    POP ESI                             ; 005a3e97
    POP EBX                             ; 005a3e98
    RET                                 ; 005a3e99
    PUSH EBX                            ; 005a3e9a
        ;   Label: LAB_005a3e9a
    CALL FUN_005a9e60                   ; 005a3e9b
        ;   XREF to: 005a9e60 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9e60()
    ADD ESP,0x4                         ; 005a3ea0
    PUSH EDI                            ; 005a3ea3
    PUSH EBX                            ; 005a3ea4
    MOV ESI,EAX                         ; 005a3ea5
    CALL FUN_005aa044                   ; 005a3ea7
        ;   XREF to: 005aa044 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa044()
    ADD ESP,0x8                         ; 005a3eac
    MOV EBP,EAX                         ; 005a3eaf
    TEST EAX,EAX                        ; 005a3eb1
    JNZ 0x005a3ef5                      ; 005a3eb3
        ;   XREF to: 005a3ef5 (CONDITIONAL_JUMP)  ; LAB_005a3ef5
    PUSH EDI                            ; 005a3eb5
    CALL FUN_005a3660                   ; 005a3eb6
        ;   XREF to: 005a3660 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3660()
    ADD ESP,0x4                         ; 005a3ebb
    MOV EBP,EAX                         ; 005a3ebe
    TEST EAX,EAX                        ; 005a3ec0
    JZ 0x005a3eeb                       ; 005a3ec2
        ;   XREF to: 005a3eeb (CONDITIONAL_JUMP)  ; LAB_005a3eeb
    MOV ECX,ESI                         ; 005a3ec4
    MOV EDI,EAX                         ; 005a3ec6
    MOV ESI,EBX                         ; 005a3ec8
    PUSH ES                             ; 005a3eca
    MOV AX,DS                           ; 005a3ecb
    MOV ES,AX                           ; 005a3ecd
    PUSH EDI                            ; 005a3ecf
    MOV EAX,ECX                         ; 005a3ed0
    SHR ECX,0x2                         ; 005a3ed2
    MOVSD.REP ES:EDI,ESI                ; 005a3ed5
    MOV CL,AL                           ; 005a3ed7
    AND CL,0x3                          ; 005a3ed9
    MOVSB.REP ES:EDI,ESI                ; 005a3edc
    POP EDI                             ; 005a3ede
    POP ES                              ; 005a3edf
    PUSH EBX                            ; 005a3ee0
    CALL FUN_005a3780                   ; 005a3ee1
        ;   XREF to: 005a3780 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3780()
    ADD ESP,0x4                         ; 005a3ee6
    JMP 0x005a3ef5                      ; 005a3ee9
        ;   XREF to: 005a3ef5 (UNCONDITIONAL_JUMP)  ; LAB_005a3ef5
    PUSH ESI                            ; 005a3eeb
        ;   Label: LAB_005a3eeb
    PUSH EBX                            ; 005a3eec
    CALL FUN_005aa044                   ; 005a3eed
        ;   XREF to: 005aa044 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa044()
    ADD ESP,0x8                         ; 005a3ef2
    MOV EAX,EBP                         ; 005a3ef5
        ;   Label: LAB_005a3ef5
    POP EBP                             ; 005a3ef7
    POP EDI                             ; 005a3ef8
    POP ESI                             ; 005a3ef9
    POP EBX                             ; 005a3efa
    RET                                 ; 005a3efb

