; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[64]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040df20 at 0040df69
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e810 at 0040e857
;   core_asgaya.cpp_CAsgaya_renderOpaque_FUN_005a1760 at 005a17c2
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a193a
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 00597a28
;   core_bat.cpp_CBat_renderOpaque_FUN_0040f200 at 0040f249
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00414e90 at 00414f02
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90 at 0041905e
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004215f0 at 004217ab
;   core_chain.cpp_CChain_renderTransparent_FUN_0042a280 at 0042a2fe
;   ... and 54 more
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005f2afc]      ; 00408830 | DAT_005f2afc
        ;   Label: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
    PUSH EDX                            ; 00408836
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 00408837
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0040883c
    RET                                 ; 0040883f

