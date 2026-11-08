; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410460(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410460
        ;   Label: FUN_00410460
    PUSH EDX                            ; 00410464
    CALL FUN_005ad4c0                   ; 00410465
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    MOV dword ptr [EAX + 0x154],0x5fbc34 ; 0041046a
    MOV dword ptr [EAX + 0x2e0],0x8     ; 00410474
    MOV dword ptr [EAX + 0x2e4],0x0     ; 0041047e
    MOV dword ptr [EAX + 0x2e8],0x43480000 ; 00410488
    MOV dword ptr [EAX + 0x2ec],0x0     ; 00410492
    MOV dword ptr [EAX + 0x2f0],0x0     ; 0041049c
    ADD ESP,0x4                         ; 004104a6
    MOV dword ptr [EAX + 0x578],0x0     ; 004104a9
    RET                                 ; 004104b3

