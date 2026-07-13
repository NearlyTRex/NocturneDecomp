; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0042cd30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059b340
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0042cdc0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cd30
        ;   Label: FUN_0042cd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042cd31
    TEST byte ptr [ESP + 0xc],0x4       ; 0042cd35
    JNZ 0x0042cd6d                      ; 0042cd3a
        ;   XREF to: 0042cd6d (CONDITIONAL_JUMP)  ; LAB_0042cd6d
    PUSH 0x0                            ; 0042cd3c
    ADD EBX,0x284                       ; 0042cd3e
    PUSH EBX                            ; 0042cd44
    CALL FUN_0042cdc0                   ; 0042cd45
        ;   XREF to: 0042cdc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cdc0()
    ADD ESP,0x8                         ; 0042cd4a
    PUSH 0x1                            ; 0042cd4d
    LEA EBX,[EAX + 0xfffffd7c]          ; 0042cd4f
    PUSH EBX                            ; 0042cd55
    CALL FUN_00409ea0                   ; 0042cd56
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0042cd5b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042cd5e
    MOV EBX,EAX                         ; 0042cd62
    TEST DL,0x2                         ; 0042cd64
    JNZ 0x0042cd88                      ; 0042cd67
        ;   XREF to: 0042cd88 (CONDITIONAL_JUMP)  ; LAB_0042cd88
    MOV EAX,EBX                         ; 0042cd69
    POP EBX                             ; 0042cd6b
    RET                                 ; 0042cd6c
    PUSH 0x59b340                       ; 0042cd6d | DAT_0059b340
        ;   Label: LAB_0042cd6d
    PUSH EBX                            ; 0042cd72
    CALL FUN_0056445f                   ; 0042cd73
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0042cd78
    PUSH EAX                            ; 0042cd7b
    CALL FUN_00564486                   ; 0042cd7c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0042cd81
    MOV EAX,EBX                         ; 0042cd84
    POP EBX                             ; 0042cd86
    RET                                 ; 0042cd87
    PUSH EAX                            ; 0042cd88
        ;   Label: LAB_0042cd88
    CALL FUN_00564494                   ; 0042cd89
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0042cd8e
    MOV EAX,EBX                         ; 0042cd91
    POP EBX                             ; 0042cd93
    RET                                 ; 0042cd94

