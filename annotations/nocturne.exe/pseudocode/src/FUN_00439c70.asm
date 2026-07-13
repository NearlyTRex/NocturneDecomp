; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00439c70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059b530
;
; Called Functions:
;   FUN_00438f30
;   FUN_00439370
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439c70
        ;   Label: FUN_00439c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439c71
    TEST byte ptr [ESP + 0xc],0x4       ; 00439c75
    JNZ 0x00439ca7                      ; 00439c7a
        ;   XREF to: 00439ca7 (CONDITIONAL_JUMP)  ; LAB_00439ca7
    PUSH 0x0                            ; 00439c7c
    ADD EBX,0x4                         ; 00439c7e
    PUSH EBX                            ; 00439c81
    CALL FUN_00439370                   ; 00439c82
        ;   XREF to: 00439370 (UNCONDITIONAL_CALL)  ; undefined FUN_00439370()
    ADD ESP,0x8                         ; 00439c87
    PUSH 0x1                            ; 00439c8a
    LEA EBX,[EAX + -0x4]                ; 00439c8c
    PUSH EBX                            ; 00439c8f
    CALL FUN_00438f30                   ; 00439c90
        ;   XREF to: 00438f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00438f30()
    ADD ESP,0x8                         ; 00439c95
    MOV DL,byte ptr [ESP + 0xc]         ; 00439c98
    MOV EBX,EAX                         ; 00439c9c
    TEST DL,0x2                         ; 00439c9e
    JNZ 0x00439cc2                      ; 00439ca1
        ;   XREF to: 00439cc2 (CONDITIONAL_JUMP)  ; LAB_00439cc2
    MOV EAX,EBX                         ; 00439ca3
    POP EBX                             ; 00439ca5
    RET                                 ; 00439ca6
    PUSH 0x59b530                       ; 00439ca7 | DAT_0059b530
        ;   Label: LAB_00439ca7
    PUSH EBX                            ; 00439cac
    CALL FUN_0056445f                   ; 00439cad
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00439cb2
    PUSH EAX                            ; 00439cb5
    CALL FUN_00564486                   ; 00439cb6
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00439cbb
    MOV EAX,EBX                         ; 00439cbe
    POP EBX                             ; 00439cc0
    RET                                 ; 00439cc1
    PUSH EAX                            ; 00439cc2
        ;   Label: LAB_00439cc2
    CALL FUN_00564494                   ; 00439cc3
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00439cc8
    MOV EAX,EBX                         ; 00439ccb
    POP EBX                             ; 00439ccd
    RET                                 ; 00439cce

