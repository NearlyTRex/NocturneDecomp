; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[37]:
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 00412549
;   core_armour.cpp_CEnemy_dtor_FUN_004125c0 at 00412609
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 at 00416369
;   core_batman.cpp_CBatman_dtor_FUN_00417d60 at 00417da9
;   core_beast.cpp_CBeast_dtor_FUN_00418490 at 004184c9
;   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 at 00418d69
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 at 0041da89
;   core_bride.cpp_CBride_dtor_FUN_00424b80 at 00424bc9
;   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 at 00427c29
;   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 at 0042fa29
;   ... and 27 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 004126e0 | g_CVectorTypeInfo
        ;   Label: core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
    PUSH 0xf                            ; 004126e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004126e7
    PUSH EDX                            ; 004126eb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004126ec
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004126f1
    RET                                 ; 004126f4

