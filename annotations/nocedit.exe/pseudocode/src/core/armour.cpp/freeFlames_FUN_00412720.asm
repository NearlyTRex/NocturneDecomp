; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlame * __cdecl core_armour_cpp_freeFlames_FUN_00412720(CFlame *objs)
;
; Parameters:
; CFlame *         Stack[0x4]:4   objs
;
; XREF[37]:
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 00412519
;   core_armour.cpp_CEnemy_dtor_FUN_004125c0 at 004125d9
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 at 00416339
;   core_batman.cpp_CBatman_dtor_FUN_00417d60 at 00417d79
;   core_beast.cpp_CBeast_dtor_FUN_00418490 at 004184a9
;   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 at 00418d39
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 at 0041da69
;   core_bride.cpp_CBride_dtor_FUN_00424b80 at 00424b99
;   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 at 00427bf9
;   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 at 0042fa09
;   ... and 27 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x659ee0                       ; 00412720 | g_CFlameTypeInfo
        ;   Label: core_armour.cpp_freeFlames_FUN_00412720
    PUSH 0x32                           ; 00412725
    MOV EDX,dword ptr [ESP + 0xc]       ; 00412727
    PUSH EDX                            ; 0041272b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0041272c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00412731
    RET                                 ; 00412734

