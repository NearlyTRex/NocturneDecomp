; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564905(void)
;
;
; Referenced Globals:
;   TerminatedCString s_undefined_constructor_or_005989b8
;
; Called Functions:
;   FUN_0056af76
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00564905
        ;   Label: FUN_00564905
    PUSH 0x5989b8                       ; 00564907 | = "undefined constructor or destructor c..."
    CALL FUN_0056af76                   ; 0056490c
        ;   XREF to: 0056af76 (UNCONDITIONAL_CALL)  ; undefined FUN_0056af76()
    ADD ESP,0x8                         ; 00564911
    RET                                 ; 00564914

