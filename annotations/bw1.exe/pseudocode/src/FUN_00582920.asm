; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582920(void)
;
;
; XREF[1]:
;   FUN_0048e770 at 0048e7ca
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833f0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582920 | DAT_01c50948
        ;   Label: FUN_00582920
    JNZ 0x0058292c                      ; 00582927
        ;   XREF to: 0058292c (CONDITIONAL_JUMP)  ; LAB_0058292c
    XOR EAX,EAX                         ; 00582929
    RET                                 ; 0058292b
    CALL dword ptr [0x02c833f0]         ; 0058292c | DAT_02c833f0
        ;   Label: LAB_0058292c
    RET                                 ; 00582932

