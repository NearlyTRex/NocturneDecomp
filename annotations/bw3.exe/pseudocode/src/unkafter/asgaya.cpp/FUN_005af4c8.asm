; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_asgaya_cpp_FUN_005af4c8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060a044
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0060a044] ; 005af4c8 | DAT_0060a044
        ;   Label: unkafter_asgaya.cpp_FUN_005af4c8
    FSUBRP                              ; 005af4ce
    FLDCW word ptr [ESP + 0x18]         ; 005af4d0
    ADD ESP,0x24                        ; 005af4d4
    POP EDX                             ; 005af4d7
    POP ECX                             ; 005af4d8
    POP EAX                             ; 005af4d9
    RET                                 ; 005af4da

