; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054d7a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0054fcd0
;   FUN_0057cd50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054d7a0
        ;   Label: FUN_0054d7a0
    PUSH EAX                            ; 0054d7a4
    CALL FUN_0054fcd0                   ; 0054d7a5
        ;   XREF to: 0054fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054fcd0()
    ADD ESP,0x4                         ; 0054d7aa
    ADD EAX,0x17c                       ; 0054d7ad
    PUSH EAX                            ; 0054d7b2
    CALL FUN_0057cd50                   ; 0054d7b3
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cd50()
    MOV dword ptr [EAX + -0x5c],0x0     ; 0054d7b8
    MOV dword ptr [EAX + -0x28],0x0     ; 0054d7bf
    MOV dword ptr [EAX + -0x24],0x0     ; 0054d7c6
    MOV dword ptr [EAX + -0x2c],0x0     ; 0054d7cd
    MOV dword ptr [EAX + -0x20],0x0     ; 0054d7d4
    MOV dword ptr [EAX + -0x1c],0xffffffff ; 0054d7db
    MOV dword ptr [EAX + -0x8],0x0      ; 0054d7e2
    MOV dword ptr [EAX + 0x2c],0x0      ; 0054d7e9
    MOV dword ptr [EAX + -0x18],0x0     ; 0054d7f0
    ADD ESP,0x4                         ; 0054d7f7
    MOV dword ptr [EAX + -0x14],0x0     ; 0054d7fa
    SUB EAX,0x17c                       ; 0054d801
    RET                                 ; 0054d806

