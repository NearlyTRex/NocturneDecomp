; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058fc60(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0058fc60
        ;   Label: FUN_0058fc60
    PUSH EDX                            ; 0058fc64
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058fc65
    PUSH ECX                            ; 0058fc69
    CALL FUN_00430430                   ; 0058fc6a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 0058fc6f
    RET                                 ; 0058fc72

