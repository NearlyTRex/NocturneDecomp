; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CClothList * __cdecl core_cloth_cpp_CClothList_dtor_FUN_0043bf80(CClothList *this_ptr,uint flags)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[37]:
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 00412559
;   core_armour.cpp_CEnemy_dtor_FUN_004125c0 at 00412619
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 at 00416379
;   core_batman.cpp_CBatman_dtor_FUN_00417d60 at 00417db9
;   core_beast.cpp_CBeast_dtor_FUN_00418490 at 004184e9
;   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 at 00418d79
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 at 0041daa9
;   core_bride.cpp_CBride_dtor_FUN_00424b80 at 00424bd9
;   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 at 00427c39
;   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 at 0042fa49
;   ... and 27 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_reset_FUN_0043c070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bf80
        ;   Label: core_cloth.cpp_CClothList_dtor_FUN_0043bf80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043bf81
    PUSH EBX                            ; 0043bf85
    CALL core_cloth.cpp_CClothList_reset_FUN_0043c070 ; 0043bf86
        ;   XREF to: 0043c070 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_0043c070(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0043bf8b
    MOV EAX,EBX                         ; 0043bf8e
    POP EBX                             ; 0043bf90
    RET                                 ; 0043bf91

