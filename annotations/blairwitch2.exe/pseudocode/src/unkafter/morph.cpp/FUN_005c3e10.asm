; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_morph_cpp_FUN_005c3e10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00621816
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00621816] ; 005c3e10 | DAT_00621816
        ;   Label: unkafter_morph.cpp_FUN_005c3e10
    FSUBRP                              ; 005c3e16
    FLDCW word ptr [ESP + 0x18]         ; 005c3e18
    ADD ESP,0x24                        ; 005c3e1c
    POP EDX                             ; 005c3e1f
    POP ECX                             ; 005c3e20
    POP EAX                             ; 005c3e21
    RET                                 ; 005c3e22

