; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf350(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf350
        ;   Label: FUN_004cf350
    ADD EAX,0x158                       ; 004cf354
    PUSH EAX                            ; 004cf359
    CALL FUN_00462580                   ; 004cf35a
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004cf35f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cf362
    PUSH EDX                            ; 004cf366
    CALL FUN_00408890                   ; 004cf367
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004cf36c
    RET                                 ; 004cf36f

