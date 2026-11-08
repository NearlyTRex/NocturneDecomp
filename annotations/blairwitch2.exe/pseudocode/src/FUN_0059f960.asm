; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059f960(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059f960
        ;   Label: FUN_0059f960
    PUSH EDX                            ; 0059f964
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059f965
    PUSH ECX                            ; 0059f969
    CALL FUN_00427680                   ; 0059f96a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0059f96f
    RET                                 ; 0059f972

