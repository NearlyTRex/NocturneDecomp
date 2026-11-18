; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005af4f0(void)
;
;
; Referenced Globals:
;   float10 g_FLOAT10_0060a04e = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0060a04e] ; 005af4f0 | g_FLOAT10_0060a04e
        ;   Label: crt_unknown.c_FUN_005af4f0
    FSUBRP                              ; 005af4f6
    FLDCW word ptr [ESP + 0x18]         ; 005af4f8
    ADD ESP,0x24                        ; 005af4fc
    POP EDX                             ; 005af4ff
    POP ECX                             ; 005af500
    POP EAX                             ; 005af501
    RET                                 ; 005af502

