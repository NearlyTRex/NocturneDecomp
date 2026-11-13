; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_staticInit_FUN_00584380(void)
;
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00584390
;
; *****************************************************************************

section .text

    PUSH 0x2c83514                      ; 00584380
        ;   Label: shape_spotview.cpp_staticInit_FUN_00584380
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_00584390 ; 00584385
        ;   XREF to: 00584390 (UNCONDITIONAL_CALL)  ; CSpotView * shape_spotview.cpp_CSpotView_ctor_FUN_00584390(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0058438a
    RET                                 ; 0058438d

