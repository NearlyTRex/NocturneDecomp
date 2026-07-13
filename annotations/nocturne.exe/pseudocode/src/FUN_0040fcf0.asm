; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040fcf0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599920
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fcf0
        ;   Label: FUN_0040fcf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fcf1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040fcf5
    JNZ 0x0040fd81                      ; 0040fcfa
        ;   XREF to: 0040fd81 (CONDITIONAL_JUMP)  ; LAB_0040fd81
    PUSH 0x0                            ; 0040fd00
    ADD EBX,0x33c4                      ; 0040fd02
    PUSH EBX                            ; 0040fd08
    CALL FUN_0040fe50                   ; 0040fd09
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 0040fd0e
    PUSH 0x0                            ; 0040fd11
    SUB EAX,0x4b0                       ; 0040fd13
    PUSH EAX                            ; 0040fd18
    CALL FUN_0040fe30                   ; 0040fd19
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 0040fd1e
    PUSH 0x0                            ; 0040fd21
    SUB EAX,0x20c                       ; 0040fd23
    PUSH EAX                            ; 0040fd28
    CALL FUN_0040fe10                   ; 0040fd29
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0040fd2e
    PUSH 0x0                            ; 0040fd31
    SUB EAX,0xb4                        ; 0040fd33
    PUSH EAX                            ; 0040fd38
    CALL FUN_0040fe10                   ; 0040fd39
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0040fd3e
    PUSH 0x0                            ; 0040fd41
    SUB EAX,0x1c8                       ; 0040fd43
    PUSH EAX                            ; 0040fd48
    CALL FUN_00438250                   ; 0040fd49
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 0040fd4e
    PUSH 0x0                            ; 0040fd51
    SUB EAX,0x293c                      ; 0040fd53
    PUSH EAX                            ; 0040fd58
    CALL FUN_0051b6e0                   ; 0040fd59
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 0040fd5e
    PUSH 0x1                            ; 0040fd61
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040fd63
    PUSH EBX                            ; 0040fd69
    CALL FUN_00409ea0                   ; 0040fd6a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0040fd6f
    MOV DL,byte ptr [ESP + 0xc]         ; 0040fd72
    MOV EBX,EAX                         ; 0040fd76
    TEST DL,0x2                         ; 0040fd78
    JNZ 0x0040fd9c                      ; 0040fd7b
        ;   XREF to: 0040fd9c (CONDITIONAL_JUMP)  ; LAB_0040fd9c
    MOV EAX,EBX                         ; 0040fd7d
    POP EBX                             ; 0040fd7f
    RET                                 ; 0040fd80
    PUSH 0x599920                       ; 0040fd81 | DAT_00599920
        ;   Label: LAB_0040fd81
    PUSH EBX                            ; 0040fd86
    CALL FUN_0056445f                   ; 0040fd87
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0040fd8c
    PUSH EAX                            ; 0040fd8f
    CALL FUN_00564486                   ; 0040fd90
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0040fd95
    MOV EAX,EBX                         ; 0040fd98
    POP EBX                             ; 0040fd9a
    RET                                 ; 0040fd9b
    PUSH EAX                            ; 0040fd9c
        ;   Label: LAB_0040fd9c
    CALL FUN_00564494                   ; 0040fd9d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0040fda2
    MOV EAX,EBX                         ; 0040fda5
    POP EBX                             ; 0040fda7
    RET                                 ; 0040fda8

