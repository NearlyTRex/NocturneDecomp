; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popViewport_FUN_00483c40(void)
;
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0 at 0044d8e3
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 at 0044d6a7
;   core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0 at 00462b52
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 at 004f952b
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fee08
;   core_setdir.cpp_FUN_00559f80 at 0055a500
;   core_setdir.cpp_FUN_0055b330 at 0055b494
;   unkafter_bmppuzzl.cpp_FUN_00416fa0 at 00417207
;
; Called Functions:
;   engine_matrix.c_popViewport_FUN_00509210
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_popViewport_FUN_00509210 ; 00483c40
        ;   XREF to: 00509210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00509210()
        ;   Label: engine_matrix.c_popViewport_FUN_00483c40
    RET                                 ; 00483c45

