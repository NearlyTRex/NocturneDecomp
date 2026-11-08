; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446e20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00446e20
        ;   Label: FUN_00446e20
    PUSH EDX                            ; 00446e24
    CALL FUN_0042f240                   ; 00446e25
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 00446e2a
    RET                                 ; 00446e2d

