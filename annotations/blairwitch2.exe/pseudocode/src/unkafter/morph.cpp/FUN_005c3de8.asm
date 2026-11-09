; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_morph_cpp_FUN_005c3de8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0062180c
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0062180c] ; 005c3de8 | DAT_0062180c
        ;   Label: unkafter_morph.cpp_FUN_005c3de8
    FSUBRP                              ; 005c3dee
    FLDCW word ptr [ESP + 0x18]         ; 005c3df0
    ADD ESP,0x24                        ; 005c3df4
    POP EDX                             ; 005c3df7
    POP ECX                             ; 005c3df8
    POP EAX                             ; 005c3df9
    RET                                 ; 005c3dfa

