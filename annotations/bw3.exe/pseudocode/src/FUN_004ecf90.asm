; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004ecf90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c7e6d
;   undefined4 DAT_01d76ca8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ecf90
        ;   Label: FUN_004ecf90
    FLD float ptr [0x01d76ca8]          ; 004ecf93 | DAT_01d76ca8
    FMUL float ptr [0x005c7e6d]         ; 004ecf99 | DAT_005c7e6d
    FSTP float ptr [ESP]                ; 004ecf9f
    MOV EAX,dword ptr [ESP]             ; 004ecfa2
    ADD ESP,0x4                         ; 004ecfa5
    RET                                 ; 004ecfa8

