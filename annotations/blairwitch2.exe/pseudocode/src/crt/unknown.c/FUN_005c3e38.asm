; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005c3e38(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00621816
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00621816] ; 005c3e38 | DAT_00621816
        ;   Label: crt_unknown.c_FUN_005c3e38
    FADDP                               ; 005c3e3e
    FLDCW word ptr [ESP + 0x18]         ; 005c3e40
    ADD ESP,0x24                        ; 005c3e44
    POP EDX                             ; 005c3e47
    POP ECX                             ; 005c3e48
    POP EAX                             ; 005c3e49
    RET                                 ; 005c3e4a

