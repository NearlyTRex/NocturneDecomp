; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b8b70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059f080
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

    PUSH EBX                            ; 004b8b70
        ;   Label: FUN_004b8b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b8b71
    TEST byte ptr [ESP + 0xc],0x4       ; 004b8b75
    JNZ 0x004b8c11                      ; 004b8b7a
        ;   XREF to: 004b8c11 (CONDITIONAL_JUMP)  ; LAB_004b8c11
    PUSH 0x0                            ; 004b8b80
    ADD EBX,0xbc8c                      ; 004b8b82
    PUSH EBX                            ; 004b8b88
    CALL FUN_004efdd0                   ; 004b8b89
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004efdd0()
    ADD ESP,0x8                         ; 004b8b8e
    PUSH 0x0                            ; 004b8b91
    SUB EAX,0x88c8                      ; 004b8b93
    PUSH EAX                            ; 004b8b98
    CALL FUN_0040fe50                   ; 004b8b99
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 004b8b9e
    PUSH 0x0                            ; 004b8ba1
    SUB EAX,0x4b0                       ; 004b8ba3
    PUSH EAX                            ; 004b8ba8
    CALL FUN_0040fe30                   ; 004b8ba9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 004b8bae
    PUSH 0x0                            ; 004b8bb1
    SUB EAX,0x20c                       ; 004b8bb3
    PUSH EAX                            ; 004b8bb8
    CALL FUN_0040fe10                   ; 004b8bb9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b8bbe
    PUSH 0x0                            ; 004b8bc1
    SUB EAX,0xb4                        ; 004b8bc3
    PUSH EAX                            ; 004b8bc8
    CALL FUN_0040fe10                   ; 004b8bc9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b8bce
    PUSH 0x0                            ; 004b8bd1
    SUB EAX,0x1c8                       ; 004b8bd3
    PUSH EAX                            ; 004b8bd8
    CALL FUN_00438250                   ; 004b8bd9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004b8bde
    PUSH 0x0                            ; 004b8be1
    SUB EAX,0x293c                      ; 004b8be3
    PUSH EAX                            ; 004b8be8
    CALL FUN_0051b6e0                   ; 004b8be9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004b8bee
    PUSH 0x1                            ; 004b8bf1
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b8bf3
    PUSH EBX                            ; 004b8bf9
    CALL FUN_00409ea0                   ; 004b8bfa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004b8bff
    MOV DL,byte ptr [ESP + 0xc]         ; 004b8c02
    MOV EBX,EAX                         ; 004b8c06
    TEST DL,0x2                         ; 004b8c08
    JNZ 0x004b8c2c                      ; 004b8c0b
        ;   XREF to: 004b8c2c (CONDITIONAL_JUMP)  ; LAB_004b8c2c
    MOV EAX,EBX                         ; 004b8c0d
    POP EBX                             ; 004b8c0f
    RET                                 ; 004b8c10
    PUSH 0x59f080                       ; 004b8c11 | DAT_0059f080
        ;   Label: LAB_004b8c11
    PUSH EBX                            ; 004b8c16
    CALL FUN_0056445f                   ; 004b8c17
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004b8c1c
    PUSH EAX                            ; 004b8c1f
    CALL FUN_00564486                   ; 004b8c20
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004b8c25
    MOV EAX,EBX                         ; 004b8c28
    POP EBX                             ; 004b8c2a
    RET                                 ; 004b8c2b
    PUSH EAX                            ; 004b8c2c
        ;   Label: LAB_004b8c2c
    CALL FUN_00564494                   ; 004b8c2d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b8c32
    MOV EAX,EBX                         ; 004b8c35
    POP EBX                             ; 004b8c37
    RET                                 ; 004b8c38

