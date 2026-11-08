; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005add60(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005add60
        ;   Label: FUN_005add60
    PUSH EDX                            ; 005add64
    MOV ECX,dword ptr [ESP + 0x8]       ; 005add65
    PUSH ECX                            ; 005add69
    CALL FUN_00409d10                   ; 005add6a
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d10()
    ADD ESP,0x8                         ; 005add6f
    RET                                 ; 005add72

