; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00532500(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00532500
        ;   Label: FUN_00532500
    PUSH EDX                            ; 00532504
    MOV ECX,dword ptr [ESP + 0x8]       ; 00532505
    PUSH ECX                            ; 00532509
    CALL FUN_00430430                   ; 0053250a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 0053250f
    RET                                 ; 00532512

