; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea580(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004ea580
        ;   Label: FUN_004ea580
    PUSH EDX                            ; 004ea584
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ea585
    PUSH ECX                            ; 004ea589
    CALL FUN_00409d10                   ; 004ea58a
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d10()
    ADD ESP,0x8                         ; 004ea58f
    RET                                 ; 004ea592

