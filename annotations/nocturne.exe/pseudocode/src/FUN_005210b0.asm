; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005210b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005210b0
        ;   Label: FUN_005210b0
    PUSH EDX                            ; 005210b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005210b5
    PUSH ECX                            ; 005210b9
    CALL FUN_00427da0                   ; 005210ba
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427da0()
    ADD ESP,0x8                         ; 005210bf
    RET                                 ; 005210c2

