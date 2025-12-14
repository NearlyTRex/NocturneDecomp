; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_spotview.cpp_staticInit_FUN_005b95b0(void)
;
;
; Referenced Globals:
;   CSpotView g_CSpotViewInstance
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0
;
; *****************************************************************************

section .text

    PUSH 0x3f6b9e0                      ; 005b95b0 | g_CSpotViewInstance
        ;   Label: shape_spotview.cpp_staticInit_FUN_005b95b0
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0 ; 005b95b5
        ;   XREF to: 005b95c0 (UNCONDITIONAL_CALL)  ; CSpotView * shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 005b95ba
    RET                                 ; 005b95bd

