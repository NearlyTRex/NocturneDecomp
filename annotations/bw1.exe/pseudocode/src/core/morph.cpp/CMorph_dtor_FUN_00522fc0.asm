; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_00522fc0(CMorph *this_ptr,uint flags)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_dtor_FUN_004150f0 at 00415105
;   core_mimic.cpp_CMimic_dtor_FUN_0050f1b0 at 0050f1f9
;   core_moloch.cpp_CMoloch_dtor_FUN_005203b0 at 005203cf
;   core_passngr.cpp_CPassenger_dtor_FUN_00532850 at 00532893
;   core_succubus.cpp_CSuccubus_dtor_FUN_00592ce0 at 00592cf9
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_005a7420 at 005a7439
;
; Called Functions:
;   core_morph.cpp_CMorph_free_FUN_00522fe0
;   core_morph.cpp_FUN_00523880
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00522fc0
        ;   Label: core_morph.cpp_CMorph_dtor_FUN_00522fc0
    PUSH EDX                            ; 00522fc4
    CALL core_morph.cpp_CMorph_free_FUN_00522fe0 ; 00522fc5
        ;   XREF to: 00522fe0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_free_FUN_00522fe0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00522fca
    PUSH 0x0                            ; 00522fcd
    MOV ECX,dword ptr [ESP + 0x8]       ; 00522fcf
    PUSH ECX                            ; 00522fd3
    CALL core_morph.cpp_FUN_00523880    ; 00522fd4
        ;   XREF to: 00523880 (UNCONDITIONAL_CALL)  ; CMorphModel * core_morph.cpp_FUN_00523880(CMorphModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00522fd9
    RET                                 ; 00522fdc

