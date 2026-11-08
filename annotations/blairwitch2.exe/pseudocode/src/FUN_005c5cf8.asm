; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c5cf8(void)
;
;
; XREF[1]:
;   FUN_005c6710 at 005c679c
;
; Referenced Globals:
;   undefined1* PTR_FUN_0061f7f4 = 005c68a8
;
; Called Functions:
;   FUN_005c68a8
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f7f4]         ; 005c5cf8 | PTR_FUN_0061f7f4
        ;   Label: FUN_005c5cf8
    RET                                 ; 005c5cfe

