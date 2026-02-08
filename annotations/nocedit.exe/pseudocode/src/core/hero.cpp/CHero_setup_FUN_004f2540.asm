; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_setup_FUN_004f2540(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_baron.cpp_CBaron_setup_FUN_00412cb0 at 00412cb7
;   core_colonel.cpp_CColonel_setup_FUN_0043f850 at 0043f857
;   core_gabriela.cpp_CGabriella_setup_FUN_004d2c40 at 004d2c48
;   core_haystack.cpp_CHaystack_setup_FUN_004f0c80 at 004f0c87
;   core_icepick.cpp_CIcePick_setup_FUN_004f7e80 at 004f7e87
;   core_moloch.cpp_CMoloch_setup_FUN_00528c70 at 00528cf9
;   core_scat.cpp_CScat_setup_FUN_00556f90 at 00556f97
;   core_stranger.cpp_CStranger_setup_FUN_005bb4b0 at 005bb4bb
;   core_svetlana.cpp_CSvetlana_setup_FUN_005d88e0 at 005d8911
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_00428140
;   core_inv.cpp_CInventory_setupItems_FUN_004ff780
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2540
        ;   Label: core_hero.cpp_CHero_setup_FUN_004f2540
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f2541
    LEA EAX,[EBX + 0x158]               ; 004f2545
    PUSH EAX                            ; 004f254b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004f254c
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f2551
    PUSH EBX                            ; 004f2554
    CALL core_charactr.cpp_CCharacter_setup_FUN_00428140 ; 004f2555
        ;   XREF to: 00428140 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_00428140(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f255a
    ADD EBX,0x1f738                     ; 004f255d
    PUSH EBX                            ; 004f2563
    MOV dword ptr [EBX + 0xfffec6ec],0x0 ; 004f2564
    CALL core_inv.cpp_CInventory_setupItems_FUN_004ff780 ; 004f256e
        ;   XREF to: 004ff780 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_setupItems_FUN_004ff780(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f2573
    POP EBX                             ; 004f2576
    RET                                 ; 004f2577

