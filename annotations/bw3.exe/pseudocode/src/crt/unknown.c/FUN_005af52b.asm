; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005af52b(void)
;
;
; Referenced Globals:
;   float10 g_FLOAT10_0060a04e = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0060a04e] ; 005af52b | g_FLOAT10_0060a04e
        ;   Label: crt_unknown.c_FUN_005af52b
    FADDP                               ; 005af531
    FCHS                                ; 005af533
    FLDCW word ptr [ESP + 0x18]         ; 005af535
    ADD ESP,0x24                        ; 005af539
    POP EDX                             ; 005af53c
    POP ECX                             ; 005af53d
    POP EAX                             ; 005af53e
    RET                                 ; 005af53f

