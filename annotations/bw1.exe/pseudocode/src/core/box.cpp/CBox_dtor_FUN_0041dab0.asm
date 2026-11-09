; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dab0(CBox *this_ptr,uint flags)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00418c70 at 00418c9c
;   core_boxactor.cpp_CBoxActor_dtor_FUN_004237a0 at 004237b5
;   core_boxactor.cpp_CLightActor_dtor_FUN_00423720 at 00423745
;   core_fire.cpp_CStake_dtor_FUN_004b7800 at 004b780a
;   core_fire.cpp_CToss_dtor_FUN_004b7620 at 004b762c
;   core_simbox.cpp_CSimBox_dtor_FUN_00562b00 at 00562b15
;   core_stone.cpp_CTempleStone_dtor_FUN_00584f70 at 00584f85
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 at 005ad5ef
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041dab0
        ;   Label: core_box.cpp_CBox_dtor_FUN_0041dab0
    RET                                 ; 0041dab4

