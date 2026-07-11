; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5cd0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004ff2c0 at 005038bb
;
; Called Functions:
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5cd0
        ;   Label: FUN_004b5cd0
    PUSH 0x2c                           ; 004b5cd4
    PUSH 0x0                            ; 004b5cd6
    ADD EAX,0xbc94                      ; 004b5cd8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b5cdd
    PUSH EAX                            ; 004b5ce1
    MOV dword ptr [EAX + 0x13da4],EDX   ; 004b5ce2
    CALL FUN_00563cc0                   ; 004b5ce8
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 004b5ced
    RET                                 ; 004b5cf0

