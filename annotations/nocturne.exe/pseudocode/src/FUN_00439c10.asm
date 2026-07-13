; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00439c10(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059b510
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

    PUSH EBX                            ; 00439c10
        ;   Label: FUN_00439c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439c11
    TEST byte ptr [ESP + 0xc],0x4       ; 00439c15
    JNZ 0x00439c47                      ; 00439c1a
        ;   XREF to: 00439c47 (CONDITIONAL_JUMP)  ; LAB_00439c47
    PUSH 0x0                            ; 00439c1c
    ADD EBX,0x4                         ; 00439c1e
    PUSH EBX                            ; 00439c21
    CALL FUN_00439370                   ; 00439c22
        ;   XREF to: 00439370 (UNCONDITIONAL_CALL)  ; undefined FUN_00439370()
    ADD ESP,0x8                         ; 00439c27
    PUSH 0x1                            ; 00439c2a
    LEA EBX,[EAX + -0x4]                ; 00439c2c
    PUSH EBX                            ; 00439c2f
    CALL FUN_00438f30                   ; 00439c30
        ;   XREF to: 00438f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00438f30()
    ADD ESP,0x8                         ; 00439c35
    MOV DL,byte ptr [ESP + 0xc]         ; 00439c38
    MOV EBX,EAX                         ; 00439c3c
    TEST DL,0x2                         ; 00439c3e
    JNZ 0x00439c62                      ; 00439c41
        ;   XREF to: 00439c62 (CONDITIONAL_JUMP)  ; LAB_00439c62
    MOV EAX,EBX                         ; 00439c43
    POP EBX                             ; 00439c45
    RET                                 ; 00439c46
    PUSH 0x59b510                       ; 00439c47 | DAT_0059b510
        ;   Label: LAB_00439c47
    PUSH EBX                            ; 00439c4c
    CALL FUN_0056445f                   ; 00439c4d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00439c52
    PUSH EAX                            ; 00439c55
    CALL FUN_00564486                   ; 00439c56
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00439c5b
    MOV EAX,EBX                         ; 00439c5e
    POP EBX                             ; 00439c60
    RET                                 ; 00439c61
    PUSH EAX                            ; 00439c62
        ;   Label: LAB_00439c62
    CALL FUN_00564494                   ; 00439c63
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00439c68
    MOV EAX,EBX                         ; 00439c6b
    POP EBX                             ; 00439c6d
    RET                                 ; 00439c6e

