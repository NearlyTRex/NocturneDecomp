; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004f2a30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddae4
;   undefined4 DAT_01d098c8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f2a30
        ;   Label: FUN_004f2a30
    FLD float ptr [0x01d098c8]          ; 004f2a33 | DAT_01d098c8
    FMUL float ptr [0x005ddae4]         ; 004f2a39 | DAT_005ddae4
    FSTP float ptr [ESP]                ; 004f2a3f
    MOV EAX,dword ptr [ESP]             ; 004f2a42
    ADD ESP,0x4                         ; 004f2a45
    RET                                 ; 004f2a48

