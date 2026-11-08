; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f100(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040f100
        ;   Label: FUN_0040f100
    PUSH EDX                            ; 0040f104
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040f105
    PUSH ECX                            ; 0040f109
    CALL FUN_00427680                   ; 0040f10a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0040f10f
    RET                                 ; 0040f112

