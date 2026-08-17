; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 at 00440ac7
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 at 0044e7a2
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 at 004c0f34
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5e19
;   core_setdir.cpp_CDemonSet_FUN_005125a0 at 005129a8
;   core_setdir.cpp_CDemonSet_FUN_00513720 at 00513884
;
; Called Functions:
;   engine_matrix.c_popViewport_FUN_004ce920
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_popViewport_FUN_004ce920 ; 00460e70
        ;   XREF to: 004ce920 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_004ce920()
        ;   Label: engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
    RET                                 ; 00460e75

