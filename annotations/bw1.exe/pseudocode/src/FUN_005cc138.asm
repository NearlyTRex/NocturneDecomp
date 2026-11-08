; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005cc138(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00628d06
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628d06] ; 005cc138 | DAT_00628d06
        ;   Label: FUN_005cc138
    FADDP                               ; 005cc13e
    FLDCW word ptr [ESP + 0x18]         ; 005cc140
    ADD ESP,0x24                        ; 005cc144
    POP EDX                             ; 005cc147
    POP ECX                             ; 005cc148
    POP EAX                             ; 005cc149
    RET                                 ; 005cc14a

