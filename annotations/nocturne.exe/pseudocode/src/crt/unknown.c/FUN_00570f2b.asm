; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_00570f2b(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c40be
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x005c40be] ; 00570f2b | DAT_005c40be
        ;   Label: crt_unknown.c_FUN_00570f2b
    FADDP                               ; 00570f31
    FCHS                                ; 00570f33
    FLDCW word ptr [ESP + 0x18]         ; 00570f35
    ADD ESP,0x24                        ; 00570f39
    POP EDX                             ; 00570f3c
    POP ECX                             ; 00570f3d
    POP EAX                             ; 00570f3e
    RET                                 ; 00570f3f

