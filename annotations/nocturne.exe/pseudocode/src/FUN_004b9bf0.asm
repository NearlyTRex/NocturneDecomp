; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b9bf0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059f3a0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_004efdd0
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9bf0
        ;   Label: FUN_004b9bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9bf1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b9bf5
    JNZ 0x004b9c91                      ; 004b9bfa
        ;   XREF to: 004b9c91 (CONDITIONAL_JUMP)  ; LAB_004b9c91
    PUSH 0x0                            ; 004b9c00
    ADD EBX,0xbc8c                      ; 004b9c02
    PUSH EBX                            ; 004b9c08
    CALL FUN_004efdd0                   ; 004b9c09
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004efdd0()
    ADD ESP,0x8                         ; 004b9c0e
    PUSH 0x0                            ; 004b9c11
    SUB EAX,0x88c8                      ; 004b9c13
    PUSH EAX                            ; 004b9c18
    CALL FUN_0040fe50                   ; 004b9c19
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 004b9c1e
    PUSH 0x0                            ; 004b9c21
    SUB EAX,0x4b0                       ; 004b9c23
    PUSH EAX                            ; 004b9c28
    CALL FUN_0040fe30                   ; 004b9c29
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 004b9c2e
    PUSH 0x0                            ; 004b9c31
    SUB EAX,0x20c                       ; 004b9c33
    PUSH EAX                            ; 004b9c38
    CALL FUN_0040fe10                   ; 004b9c39
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b9c3e
    PUSH 0x0                            ; 004b9c41
    SUB EAX,0xb4                        ; 004b9c43
    PUSH EAX                            ; 004b9c48
    CALL FUN_0040fe10                   ; 004b9c49
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b9c4e
    PUSH 0x0                            ; 004b9c51
    SUB EAX,0x1c8                       ; 004b9c53
    PUSH EAX                            ; 004b9c58
    CALL FUN_00438250                   ; 004b9c59
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004b9c5e
    PUSH 0x0                            ; 004b9c61
    SUB EAX,0x293c                      ; 004b9c63
    PUSH EAX                            ; 004b9c68
    CALL FUN_0051b6e0                   ; 004b9c69
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004b9c6e
    PUSH 0x1                            ; 004b9c71
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b9c73
    PUSH EBX                            ; 004b9c79
    CALL FUN_00409ea0                   ; 004b9c7a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004b9c7f
    MOV DL,byte ptr [ESP + 0xc]         ; 004b9c82
    MOV EBX,EAX                         ; 004b9c86
    TEST DL,0x2                         ; 004b9c88
    JNZ 0x004b9cac                      ; 004b9c8b
        ;   XREF to: 004b9cac (CONDITIONAL_JUMP)  ; LAB_004b9cac
    MOV EAX,EBX                         ; 004b9c8d
    POP EBX                             ; 004b9c8f
    RET                                 ; 004b9c90
    PUSH 0x59f3a0                       ; 004b9c91 | DAT_0059f3a0
        ;   Label: LAB_004b9c91
    PUSH EBX                            ; 004b9c96
    CALL FUN_0056445f                   ; 004b9c97
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004b9c9c
    PUSH EAX                            ; 004b9c9f
    CALL FUN_00564486                   ; 004b9ca0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004b9ca5
    MOV EAX,EBX                         ; 004b9ca8
    POP EBX                             ; 004b9caa
    RET                                 ; 004b9cab
    PUSH EAX                            ; 004b9cac
        ;   Label: LAB_004b9cac
    CALL FUN_00564494                   ; 004b9cad
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b9cb2
    MOV EAX,EBX                         ; 004b9cb5
    POP EBX                             ; 004b9cb7
    RET                                 ; 004b9cb8

