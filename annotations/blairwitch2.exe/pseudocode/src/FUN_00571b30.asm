; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571b30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510460
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571b30
        ;   Label: FUN_00571b30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00571b31
    PUSH EDX                            ; 00571b35
    CALL FUN_00510460                   ; 00571b36
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; undefined FUN_00510460()
    ADD ESP,0x4                         ; 00571b3b
    PUSH 0x5ec3e3                       ; 00571b3e
    MOV EBX,EAX                         ; 00571b43
    ADD EAX,0x2b4                       ; 00571b45
    PUSH EAX                            ; 00571b4a
    MOV dword ptr [EAX + -0x4],0x5fc744 ; 00571b4b
    CALL FUN_005478b0                   ; 00571b52
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 00571b57
    MOV EAX,EBX                         ; 00571b5a
    POP EBX                             ; 00571b5c
    RET                                 ; 00571b5d

