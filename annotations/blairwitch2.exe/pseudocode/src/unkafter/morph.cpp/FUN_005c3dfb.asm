; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_morph_cpp_FUN_005c3dfb(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0062180c
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0062180c] ; 005c3dfb | DAT_0062180c
        ;   Label: unkafter_morph.cpp_FUN_005c3dfb
    FSUBRP                              ; 005c3e01
    FCHS                                ; 005c3e03
    FLDCW word ptr [ESP + 0x18]         ; 005c3e05
    ADD ESP,0x24                        ; 005c3e09
    POP EDX                             ; 005c3e0c
    POP ECX                             ; 005c3e0d
    POP EAX                             ; 005c3e0e
    RET                                 ; 005c3e0f

