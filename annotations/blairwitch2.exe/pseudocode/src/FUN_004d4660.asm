; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d4660(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d4660
        ;   Label: FUN_004d4660
    PUSH EDX                            ; 004d4664
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d4665
    PUSH ECX                            ; 004d4669
    CALL FUN_00427680                   ; 004d466a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 004d466f
    RET                                 ; 004d4672

