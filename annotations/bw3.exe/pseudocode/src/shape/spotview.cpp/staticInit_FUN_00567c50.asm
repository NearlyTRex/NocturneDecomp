; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_staticInit_FUN_00567c50(void)
;
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00567c60
;
; *****************************************************************************

section .text

    PUSH 0x2cf6170                      ; 00567c50
        ;   Label: shape_spotview.cpp_staticInit_FUN_00567c50
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_00567c60 ; 00567c55
        ;   XREF to: 00567c60 (UNCONDITIONAL_CALL)  ; CSpotView * shape_spotview.cpp_CSpotView_ctor_FUN_00567c60(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00567c5a
    RET                                 ; 00567c5d

