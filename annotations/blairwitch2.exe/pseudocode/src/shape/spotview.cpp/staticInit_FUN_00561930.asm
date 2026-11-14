; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_staticInit_FUN_00561930(void)
;
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00561940
;
; *****************************************************************************

section .text

    PUSH 0x264bd44                      ; 00561930
        ;   Label: shape_spotview.cpp_staticInit_FUN_00561930
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_00561940 ; 00561935
        ;   XREF to: 00561940 (UNCONDITIONAL_CALL)  ; CSpotView * shape_spotview.cpp_CSpotView_ctor_FUN_00561940(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0056193a
    RET                                 ; 0056193d

