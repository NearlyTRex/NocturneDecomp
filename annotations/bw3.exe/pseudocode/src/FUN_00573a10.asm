; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573a10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00573a10
        ;   Label: FUN_00573a10
    PUSH EDX                            ; 00573a14
    CALL FUN_00572530                   ; 00573a15
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined FUN_00572530()
    ADD ESP,0x4                         ; 00573a1a
    MOV dword ptr [EAX],0x5e5a84        ; 00573a1d
    RET                                 ; 00573a23

