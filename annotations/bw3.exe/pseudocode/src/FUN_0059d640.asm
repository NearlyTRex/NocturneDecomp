; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059d640(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059d640
        ;   Label: FUN_0059d640
    PUSH EDX                            ; 0059d644
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059d645
    PUSH ECX                            ; 0059d649
    CALL FUN_00430430                   ; 0059d64a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 0059d64f
    RET                                 ; 0059d652

