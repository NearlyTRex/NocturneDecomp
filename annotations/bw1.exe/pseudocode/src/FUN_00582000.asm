; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582000(void)
;
;
; XREF[1]:
;   FUN_0044d610 at 0044d637
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833a4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582000 | DAT_01c50948
        ;   Label: FUN_00582000
    JNZ 0x0058200c                      ; 00582007
        ;   XREF to: 0058200c (CONDITIONAL_JUMP)  ; LAB_0058200c
    XOR EAX,EAX                         ; 00582009
    RET                                 ; 0058200b
    CALL dword ptr [0x02c833a4]         ; 0058200c | DAT_02c833a4
        ;   Label: LAB_0058200c
    RET                                 ; 00582012

