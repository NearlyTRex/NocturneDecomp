; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570070(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00570070
        ;   Label: FUN_00570070
    PUSH EDX                            ; 00570074
    MOV ECX,dword ptr [ESP + 0x8]       ; 00570075
    PUSH ECX                            ; 00570079
    CALL FUN_00427680                   ; 0057007a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0057007f
    RET                                 ; 00570082

