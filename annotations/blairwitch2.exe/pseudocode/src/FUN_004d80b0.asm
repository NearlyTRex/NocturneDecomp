; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d80b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d80b0
        ;   Label: FUN_004d80b0
    PUSH EDX                            ; 004d80b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d80b5
    PUSH ECX                            ; 004d80b9
    CALL FUN_00427680                   ; 004d80ba
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 004d80bf
    RET                                 ; 004d80c2

