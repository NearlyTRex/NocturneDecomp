; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582940(void)
;
;
; XREF[1]:
;   FUN_0044ceb0 at 0044d0ed
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833f4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582940 | DAT_01c50948
        ;   Label: FUN_00582940
    JNZ 0x0058294c                      ; 00582947
        ;   XREF to: 0058294c (CONDITIONAL_JUMP)  ; LAB_0058294c
    XOR EAX,EAX                         ; 00582949
    RET                                 ; 0058294b
    CALL dword ptr [0x02c833f4]         ; 0058294c | DAT_02c833f4
        ;   Label: LAB_0058294c
    RET                                 ; 00582952

