; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eac0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040eac0
        ;   Label: FUN_0040eac0
    PUSH EDX                            ; 0040eac4
    CALL FUN_00408a80                   ; 0040eac5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 0040eaca
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040eacd
    ADD EAX,0x2b4                       ; 0040ead1
    PUSH EAX                            ; 0040ead6
    CALL FUN_0044fd00                   ; 0040ead7
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0040eadc
    RET                                 ; 0040eadf

