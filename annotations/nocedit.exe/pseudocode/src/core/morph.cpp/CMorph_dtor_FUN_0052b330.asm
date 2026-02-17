; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_0052b330(CMorph *this_ptr,uint flags)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[7]:
;   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 at 00418d29
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005078ca
;   core_mimic.cpp_CMimic_dtor_FUN_0051f2c0 at 0051f31f
;   core_moloch.cpp_CMoloch_dtor_FUN_00528bf0 at 00528c0f
;   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 at 00545c6a
;   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 at 005c7839
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 at 005e7719
;
; Called Functions:
;   core_morph.cpp_CMorph_free_FUN_0052b350
;   core_morph.cpp_CMorphModel_arrdtor_FUN_0052cd10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052b330
        ;   Label: core_morph.cpp_CMorph_dtor_FUN_0052b330
    PUSH EDX                            ; 0052b334
    CALL core_morph.cpp_CMorph_free_FUN_0052b350 ; 0052b335
        ;   XREF to: 0052b350 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_free_FUN_0052b350(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0052b33a
    PUSH 0x0                            ; 0052b33d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052b33f
    PUSH ECX                            ; 0052b343
    CALL core_morph.cpp_CMorphModel_arrdtor_FUN_0052cd10 ; 0052b344
        ;   XREF to: 0052cd10 (UNCONDITIONAL_CALL)  ; CMorphModel * core_morph.cpp_CMorphModel_arrdtor_FUN_0052cd10(CMorphModel * objs, uint flags)
    ADD ESP,0x8                         ; 0052b349
    RET                                 ; 0052b34c

