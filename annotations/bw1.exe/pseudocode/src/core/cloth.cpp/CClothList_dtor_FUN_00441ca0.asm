; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_dtor_FUN_00441ca0(CClothList *this_ptr,uint flags)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[47]:
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ece5
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040ed75
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412690 at 004126b5
;   core_batman.cpp_CBatman_dtor_FUN_00414320 at 00414345
;   core_beast.cpp_CBeast_dtor_FUN_00414900 at 00414925
;   core_biggs.cpp_CBiggs_dtor_FUN_004150f0 at 00415125
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041d850 at 0041d875
;   core_bride.cpp_CBride_dtor_FUN_00424e90 at 00424eb5
;   core_bugs.cpp_CBugs_dtor_FUN_00428180 at 004281a5
;   core_carved.cpp_CCarved_dtor_FUN_0042bf50 at 0042bf75
;   ... and 37 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_reset_FUN_00441d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441ca0
        ;   Label: core_cloth.cpp_CClothList_dtor_FUN_00441ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441ca1
    PUSH EBX                            ; 00441ca5
    CALL core_cloth.cpp_CClothList_reset_FUN_00441d70 ; 00441ca6
        ;   XREF to: 00441d70 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_00441d70(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00441cab
    MOV EAX,EBX                         ; 00441cae
    POP EBX                             ; 00441cb0
    RET                                 ; 00441cb1

