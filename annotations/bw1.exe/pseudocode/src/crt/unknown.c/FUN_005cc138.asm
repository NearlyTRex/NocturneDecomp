; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005cc138(void)
;
;
; Referenced Globals:
;   float10 g_FLOAT10_00628d06 = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628d06] ; 005cc138 | g_FLOAT10_00628d06
        ;   Label: crt_unknown.c_FUN_005cc138
    FADDP                               ; 005cc13e
    FLDCW word ptr [ESP + 0x18]         ; 005cc140
    ADD ESP,0x24                        ; 005cc144
    POP EDX                             ; 005cc147
    POP ECX                             ; 005cc148
    POP EAX                             ; 005cc149
    RET                                 ; 005cc14a

