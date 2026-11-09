; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popViewport_FUN_0046b740(void)
;
;
; XREF[7]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200 at 0043c223
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 at 0043bfe7
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 at 0044a352
;   core_inv.cpp_FUN_004dbd80 at 004dc236
;   core_level.cpp_FUN_004e1600 at 004e19fd
;   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30 at 00538a37
;   unkaddr_0059aa80.cpp_FUN_0059bb60 at 0059bdbb
;
; Called Functions:
;   engine_matrix.c_popViewport_FUN_004ea570
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_popViewport_FUN_004ea570 ; 0046b740
        ;   XREF to: 004ea570 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004ea570()
        ;   Label: engine_matrix.c_popViewport_FUN_0046b740
    RET                                 ; 0046b745

