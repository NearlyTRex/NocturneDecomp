; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531280(int param_1)
;
;
; Called Functions:
;   FUN_004dc1f0
;   FUN_005315d0
;   FUN_005315f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531280
        ;   Label: FUN_00531280
    PUSH 0x0                            ; 00531284
    ADD EAX,0x12c                       ; 00531286
    PUSH EAX                            ; 0053128b
    CALL FUN_005315f0                   ; 0053128c
        ;   XREF to: 005315f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005315f0()
    ADD ESP,0x8                         ; 00531291
    PUSH 0x0                            ; 00531294
    SUB EAX,0x8c                        ; 00531296
    PUSH EAX                            ; 0053129b
    CALL FUN_005315d0                   ; 0053129c
        ;   XREF to: 005315d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005315d0()
    ADD ESP,0x8                         ; 005312a1
    PUSH 0x0                            ; 005312a4
    SUB EAX,0xa0                        ; 005312a6
    PUSH EAX                            ; 005312ab
    CALL FUN_004dc1f0                   ; 005312ac
        ;   XREF to: 004dc1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc1f0()
    ADD ESP,0x8                         ; 005312b1
    RET                                 ; 005312b4

