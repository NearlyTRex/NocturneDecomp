; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a08f0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005a08f0
        ;   Label: FUN_005a08f0
    PUSH EDX                            ; 005a08f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a08f5
    PUSH ECX                            ; 005a08f9
    CALL FUN_00430430                   ; 005a08fa
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 005a08ff
    RET                                 ; 005a0902

