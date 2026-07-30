; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[62]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040ec30 at 0040ec66
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040f2b0 at 0040f2e8
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80 at 0040ffd2
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 0041129a
;   core_bat.cpp_CBat_renderOpaque_FUN_00411e30 at 00411e66
;   core_batman.cpp_CBatman_renderOpaque_FUN_00414340 at 00414429
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760 at 00415852
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430 at 004164a2
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419c20 at 00419cc5
;   core_bugs.cpp_CBugs_renderOpaque_FUN_00421540 at 004216be
;   ... and 52 more
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005ae704]      ; 00409f60 | DAT_005ae704
        ;   Label: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
    PUSH EDX                            ; 00409f66 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00409f67
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00409f6c
    RET                                 ; 00409f6f

