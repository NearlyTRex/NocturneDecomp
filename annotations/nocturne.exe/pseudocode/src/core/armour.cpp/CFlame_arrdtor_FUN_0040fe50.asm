; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_armour_cpp_CFlame_arrdtor_FUN_0040fe50(CFlame *objs,uint flags)
;
; Parameters:
; CFlame *         Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[37]:
;   core_armour.cpp_CArmour_dtor_FUN_0040fc30 at 0040fc49
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd09
;   core_batcreat.cpp_CBatCreature_dtor_FUN_004132c0 at 004132d9
;   core_batman.cpp_CBatman_dtor_FUN_00414c60 at 00414c79
;   core_beast.cpp_CBeast_dtor_FUN_00415250 at 00415269
;   core_biggs.cpp_CBiggs_dtor_FUN_00415a30 at 00415a59
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400 at 0041a429
;   core_bride.cpp_CBride_dtor_FUN_00420f20 at 00420f39
;   core_bugs.cpp_CBugs_dtor_FUN_00423d90 at 00423db9
;   core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0 at 0042b5e9
;   ... and 27 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo_00599940
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x599940                       ; 0040fe50 | g_CFlameTypeInfo_00599940
        ;   Label: core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
    PUSH 0x32                           ; 0040fe55
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe57
    PUSH EDX                            ; 0040fe5b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0040fe5c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0040fe61
    RET                                 ; 0040fe64

