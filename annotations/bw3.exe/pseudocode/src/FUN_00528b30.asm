; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00528b30(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052dce3
;
; Referenced Globals:
;   undefined4 DAT_005cdd33
;   TerminatedCString s_backup_005cdd38
;   undefined4 DAT_005cdd3f
;   undefined4 DAT_005cdd43
;   TerminatedCString s_action_005cdd48
;   TerminatedCString s_useItem_005cdd4f
;   TerminatedCString s_light_005cdd57
;   undefined4 DAT_005cdd5d
;   undefined4 DAT_005cdd62
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528b30
        ;   Label: FUN_00528b30
    PUSH ESI                            ; 00528b31
    MOV ESI,dword ptr [ESP + 0xc]       ; 00528b32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00528b36
    PUSH 0x5cdd33                       ; 00528b3a | DAT_005cdd33
    PUSH EBX                            ; 00528b3f
    CALL FUN_005a3260                   ; 00528b40
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528b45
    TEST EAX,EAX                        ; 00528b48
    JNZ 0x00528b51                      ; 00528b4a
        ;   XREF to: 00528b51 (CONDITIONAL_JUMP)  ; LAB_00528b51
    MOV EAX,ESI                         ; 00528b4c
    POP ESI                             ; 00528b4e
    POP EBX                             ; 00528b4f
    RET                                 ; 00528b50
    PUSH 0x5cdd38                       ; 00528b51 | = "backup"
        ;   Label: LAB_00528b51
    PUSH EBX                            ; 00528b56
    CALL FUN_005a3260                   ; 00528b57
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528b5c
    TEST EAX,EAX                        ; 00528b5f
    JNZ 0x00528b69                      ; 00528b61
        ;   XREF to: 00528b69 (CONDITIONAL_JUMP)  ; LAB_00528b69
    LEA EAX,[ESI + 0x4]                 ; 00528b63
    POP ESI                             ; 00528b66
    POP EBX                             ; 00528b67
    RET                                 ; 00528b68
    PUSH 0x5cdd3f                       ; 00528b69 | DAT_005cdd3f
        ;   Label: LAB_00528b69
    PUSH EBX                            ; 00528b6e
    CALL FUN_005a3260                   ; 00528b6f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528b74
    TEST EAX,EAX                        ; 00528b77
    JNZ 0x00528b81                      ; 00528b79
        ;   XREF to: 00528b81 (CONDITIONAL_JUMP)  ; LAB_00528b81
    LEA EAX,[ESI + 0x8]                 ; 00528b7b
    POP ESI                             ; 00528b7e
    POP EBX                             ; 00528b7f
    RET                                 ; 00528b80
    PUSH 0x5cdd43                       ; 00528b81 | DAT_005cdd43
        ;   Label: LAB_00528b81
    PUSH EBX                            ; 00528b86
    CALL FUN_005a3260                   ; 00528b87
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528b8c
    TEST EAX,EAX                        ; 00528b8f
    JNZ 0x00528b99                      ; 00528b91
        ;   XREF to: 00528b99 (CONDITIONAL_JUMP)  ; LAB_00528b99
    LEA EAX,[ESI + 0xc]                 ; 00528b93
    POP ESI                             ; 00528b96
    POP EBX                             ; 00528b97
    RET                                 ; 00528b98
    PUSH 0x5cdd48                       ; 00528b99 | = "action"
        ;   Label: LAB_00528b99
    PUSH EBX                            ; 00528b9e
    CALL FUN_005a3260                   ; 00528b9f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528ba4
    TEST EAX,EAX                        ; 00528ba7
    JNZ 0x00528bb1                      ; 00528ba9
        ;   XREF to: 00528bb1 (CONDITIONAL_JUMP)  ; LAB_00528bb1
    LEA EAX,[ESI + 0x10]                ; 00528bab
    POP ESI                             ; 00528bae
    POP EBX                             ; 00528baf
    RET                                 ; 00528bb0
    PUSH 0x5cdd4f                       ; 00528bb1 | = "useItem"
        ;   Label: LAB_00528bb1
    PUSH EBX                            ; 00528bb6
    CALL FUN_005a3260                   ; 00528bb7
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528bbc
    TEST EAX,EAX                        ; 00528bbf
    JNZ 0x00528bc9                      ; 00528bc1
        ;   XREF to: 00528bc9 (CONDITIONAL_JUMP)  ; LAB_00528bc9
    LEA EAX,[ESI + 0x14]                ; 00528bc3
    POP ESI                             ; 00528bc6
    POP EBX                             ; 00528bc7
    RET                                 ; 00528bc8
    PUSH 0x5cdd57                       ; 00528bc9 | = "light"
        ;   Label: LAB_00528bc9
    PUSH EBX                            ; 00528bce
    CALL FUN_005a3260                   ; 00528bcf
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528bd4
    TEST EAX,EAX                        ; 00528bd7
    JNZ 0x00528be1                      ; 00528bd9
        ;   XREF to: 00528be1 (CONDITIONAL_JUMP)  ; LAB_00528be1
    LEA EAX,[ESI + 0x18]                ; 00528bdb
    POP ESI                             ; 00528bde
    POP EBX                             ; 00528bdf
    RET                                 ; 00528be0
    PUSH 0x5cdd5d                       ; 00528be1 | DAT_005cdd5d
        ;   Label: LAB_00528be1
    PUSH EBX                            ; 00528be6
    CALL FUN_005a3260                   ; 00528be7
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528bec
    TEST EAX,EAX                        ; 00528bef
    JNZ 0x00528bf9                      ; 00528bf1
        ;   XREF to: 00528bf9 (CONDITIONAL_JUMP)  ; LAB_00528bf9
    LEA EAX,[ESI + 0x1c]                ; 00528bf3
    POP ESI                             ; 00528bf6
    POP EBX                             ; 00528bf7
    RET                                 ; 00528bf8
    PUSH 0x5cdd62                       ; 00528bf9 | DAT_005cdd62
        ;   Label: LAB_00528bf9
    PUSH EBX                            ; 00528bfe
    CALL FUN_005a3260                   ; 00528bff
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528c04
    TEST EAX,EAX                        ; 00528c07
    JNZ 0x00528c11                      ; 00528c09
        ;   XREF to: 00528c11 (CONDITIONAL_JUMP)  ; LAB_00528c11
    LEA EAX,[ESI + 0x20]                ; 00528c0b
    POP ESI                             ; 00528c0e
    POP EBX                             ; 00528c0f
    RET                                 ; 00528c10
    XOR EAX,EAX                         ; 00528c11
        ;   Label: LAB_00528c11
    POP ESI                             ; 00528c13
    POP EBX                             ; 00528c14
    RET                                 ; 00528c15

