; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_005b6e80(CMorph *this_ptr,uint flags)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_dtor_FUN_00415410 at 00415425
;   core_mimic.cpp_CMimic_dtor_FUN_004f0400 at 004f0449
;   core_moloch.cpp_CMoloch_dtor_FUN_00501400 at 0050141f
;   core_passngr.cpp_CPassenger_dtor_FUN_005114f0 at 00511533
;   core_succubus.cpp_CSuccubus_dtor_FUN_00570090 at 005700a9
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_005837e0 at 005837f9
;
; Called Functions:
;   core_morph.cpp_CMorph_free_FUN_005b6ea0
;   core_morph.cpp_FUN_005b7720
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b6e80
        ;   Label: core_morph.cpp_CMorph_dtor_FUN_005b6e80
    PUSH EDX                            ; 005b6e84
    CALL core_morph.cpp_CMorph_free_FUN_005b6ea0 ; 005b6e85
        ;   XREF to: 005b6ea0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_free_FUN_005b6ea0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005b6e8a
    PUSH 0x0                            ; 005b6e8d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b6e8f
    PUSH ECX                            ; 005b6e93
    CALL core_morph.cpp_FUN_005b7720    ; 005b6e94
        ;   XREF to: 005b7720 (UNCONDITIONAL_CALL)  ; CMorphModel * core_morph.cpp_FUN_005b7720(CMorphModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b6e99
    RET                                 ; 005b6e9c

