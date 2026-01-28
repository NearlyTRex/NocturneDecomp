; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_backgnd_cpp_freeFires_FUN_00412700(SFire **objs)
;
; Parameters:
; SFire * *        Stack[0x4]:4   objs
;
; XREF[37]:
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 00412529
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 at 00416349
;   core_batman.cpp_CBatman_dtor_FUN_00417d60 at 00417d89
;   core_beast.cpp_CBeast_dtor_FUN_00418490 at 004184b9
;   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 at 00418d49
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 at 0041da79
;   core_bride.cpp_CBride_dtor_FUN_00424b80 at 00424ba9
;   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 at 00427c09
;   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 at 0042fa19
;   core_cow.cpp_FUN_00444cd0 at 00444cf9
;   ... and 27 more
;
; Referenced Globals:
;   WatcomTypeInfo g_SFireTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x659f00                       ; 00412700 | g_SFireTypeInfo
        ;   Label: core_backgnd.cpp_freeFires_FUN_00412700
    PUSH 0x32                           ; 00412705
    MOV EDX,dword ptr [ESP + 0xc]       ; 00412707
    PUSH EDX                            ; 0041270b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0041270c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00412711
    RET                                 ; 00412714

