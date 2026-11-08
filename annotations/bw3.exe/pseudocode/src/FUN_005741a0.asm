; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005741a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005741a0
        ;   Label: FUN_005741a0
    PUSH EDX                            ; 005741a4
    CALL FUN_00572530                   ; 005741a5
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined FUN_00572530()
    ADD ESP,0x4                         ; 005741aa
    MOV dword ptr [EAX],0x5e5ac4        ; 005741ad
    RET                                 ; 005741b3

