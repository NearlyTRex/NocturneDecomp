; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_dtor_FUN_005b1480(CClothList *this_ptr,uint flags)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[56]:
;   core_armour.cpp_CArmour_dtor_FUN_0040f120 at 0040f155
;   core_armour.cpp_CEnemy_dtor_FUN_0040f1c0 at 0040f1f5
;   core_basicnpc.cpp_CBasicNPC_dtor_FUN_005a4980 at 005a49b5
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412a20 at 00412a55
;   core_batman.cpp_CBatman_dtor_FUN_00414620 at 00414655
;   core_beast.cpp_CBeast_dtor_FUN_00414c10 at 00414c45
;   core_belling.cpp_CBelling_dtor_FUN_005a9130 at 005a9165
;   core_biggs.cpp_CBiggs_dtor_FUN_00415410 at 00415455
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a3d0 at 0041a405
;   core_bride.cpp_CBride_dtor_FUN_0041ee50 at 0041ee85
;   ... and 46 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_reset_FUN_005b1550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1480
        ;   Label: core_cloth.cpp_CClothList_dtor_FUN_005b1480
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1481
    PUSH EBX                            ; 005b1485
    CALL core_cloth.cpp_CClothList_reset_FUN_005b1550 ; 005b1486
        ;   XREF to: 005b1550 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_005b1550(CClothList * this_ptr)
    ADD ESP,0x4                         ; 005b148b
    MOV EAX,EBX                         ; 005b148e
    POP EBX                             ; 005b1490
    RET                                 ; 005b1491

