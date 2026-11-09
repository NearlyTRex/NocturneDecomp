; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_asgaya_cpp_FUN_005af4db(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060a044
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0060a044] ; 005af4db | DAT_0060a044
        ;   Label: unkafter_asgaya.cpp_FUN_005af4db
    FSUBRP                              ; 005af4e1
    FCHS                                ; 005af4e3
    FLDCW word ptr [ESP + 0x18]         ; 005af4e5
    ADD ESP,0x24                        ; 005af4e9
    POP EDX                             ; 005af4ec
    POP ECX                             ; 005af4ed
    POP EAX                             ; 005af4ee
    RET                                 ; 005af4ef

