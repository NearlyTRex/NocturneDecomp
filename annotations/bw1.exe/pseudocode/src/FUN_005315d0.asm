; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005315d0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00531280 at 0053129c
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 005315d0
        ;   Label: FUN_005315d0
    PUSH 0x7                            ; 005315d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005315d7
    PUSH EDX                            ; 005315db
    CALL FUN_005c1066                   ; 005315dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 005315e1
    RET                                 ; 005315e4

