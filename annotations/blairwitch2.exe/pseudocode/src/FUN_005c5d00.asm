; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c5d00(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005c4b60 at 005c4b84
;
; Referenced Globals:
;   undefined1* PTR_FUN_0061f7f8 = 005c5cd0
;
; Called Functions:
;   FUN_005c5cd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c5d00
        ;   Label: FUN_005c5d00
    PUSH EDX                            ; 005c5d04
    CALL dword ptr [0x0061f7f8]         ; 005c5d05 | PTR_FUN_0061f7f8
    ADD ESP,0x4                         ; 005c5d0b
    RET                                 ; 005c5d0e

