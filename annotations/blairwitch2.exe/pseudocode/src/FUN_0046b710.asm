; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[7]:
;   FUN_0043b7f0 at 0043b95a
;   FUN_0043c040 at 0043c14b
;   FUN_0044a020 at 0044a068
;   FUN_004dbd80 at 004dbec4
;   FUN_004e1600 at 004e16b8
;   FUN_005389b0 at 005389eb
;   FUN_0059bb60 at 0059bc62
;
; Called Functions:
;   FUN_004ea410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b710
        ;   Label: FUN_0046b710
    PUSH ESI                            ; 0046b711
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046b712
    PUSH EDX                            ; 0046b716
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046b717
    PUSH ECX                            ; 0046b71b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046b71c
    PUSH EBX                            ; 0046b720
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046b721
    PUSH ESI                            ; 0046b725
    CALL FUN_004ea410                   ; 0046b726
        ;   XREF to: 004ea410 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea410()
    ADD ESP,0x10                        ; 0046b72b
    POP ESI                             ; 0046b72e
    POP EBX                             ; 0046b72f
    RET                                 ; 0046b730

