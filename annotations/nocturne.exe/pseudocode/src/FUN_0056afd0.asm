; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056afd0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0056b1a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056afd0
        ;   Label: FUN_0056afd0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056afd1
    PUSH EDX                            ; 0056afd5
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056afd6
    PUSH EBX                            ; 0056afda
    CALL FUN_0056b1a4                   ; 0056afdb
        ;   XREF to: 0056b1a4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b1a4()
    ADD ESP,0x8                         ; 0056afe0
    POP EBX                             ; 0056afe3
    RET                                 ; 0056afe4

