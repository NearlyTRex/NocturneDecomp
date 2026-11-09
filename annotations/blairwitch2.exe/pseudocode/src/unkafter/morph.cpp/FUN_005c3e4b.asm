; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_morph_cpp_FUN_005c3e4b(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00621816
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00621816] ; 005c3e4b | DAT_00621816
        ;   Label: unkafter_morph.cpp_FUN_005c3e4b
    FADDP                               ; 005c3e51
    FCHS                                ; 005c3e53
    FLDCW word ptr [ESP + 0x18]         ; 005c3e55
    ADD ESP,0x24                        ; 005c3e59
    POP EDX                             ; 005c3e5c
    POP ECX                             ; 005c3e5d
    POP EAX                             ; 005c3e5e
    RET                                 ; 005c3e5f

