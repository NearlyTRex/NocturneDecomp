; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1c80(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d1c80
        ;   Label: FUN_004d1c80
    PUSH EDX                            ; 004d1c84
    CALL FUN_0057af40                   ; 004d1c85
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 004d1c8a
    PUSH 0x5c4a43                       ; 004d1c8d
    CALL FUN_00556230                   ; 004d1c92
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004d1c97
    PUSH 0x5c4a51                       ; 004d1c9a
    CALL FUN_00556230                   ; 004d1c9f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004d1ca4
    RET                                 ; 004d1ca7

