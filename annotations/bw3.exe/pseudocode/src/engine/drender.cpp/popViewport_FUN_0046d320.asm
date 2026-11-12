; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_popViewport_FUN_0046d320(void)
;
;
; XREF[7]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00412c50 at 00412eab
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00449a00 at 00449a23
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750 at 004497e7
;   core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0 at 0045c862
;   core_inv.cpp_FUN_004dbe70 at 004dc3b1
;   core_setdir.cpp_FUN_0053f940 at 0053fec0
;   core_setdir.cpp_FUN_00540cf0 at 00540e54
;
; Called Functions:
;   engine_matrix.c_popViewport_FUN_004e6c50
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_popViewport_FUN_004e6c50 ; 0046d320
        ;   XREF to: 004e6c50 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004e6c50()
        ;   Label: engine_drender.cpp_popViewport_FUN_0046d320
    RET                                 ; 0046d325

