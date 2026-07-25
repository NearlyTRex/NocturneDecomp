; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005341f0(void)
;
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00534200
;
; *****************************************************************************

section .text

    PUSH 0x2dc9e64                      ; 005341f0
        ;   Label: FUN_005341f0
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_00534200 ; 005341f5
        ;   XREF to: 00534200 (UNCONDITIONAL_CALL)  ; undefined shape_spotview.cpp_CSpotView_ctor_FUN_00534200()
    ADD ESP,0x4                         ; 005341fa
    RET                                 ; 005341fd

