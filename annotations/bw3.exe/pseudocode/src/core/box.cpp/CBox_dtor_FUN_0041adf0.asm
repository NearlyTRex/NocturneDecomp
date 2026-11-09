; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041adf0(CBox *this_ptr,uint flags)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00414880 at 004148ac
;   core_boxactor.cpp_CBoxActor_dtor_FUN_00420db0 at 00420dc5
;   core_boxactor.cpp_CLightActor_dtor_FUN_00420d30 at 00420d55
;   core_fire.cpp_CStake_dtor_FUN_004a48a0 at 004a48aa
;   core_fire.cpp_CToss_dtor_FUN_004a46c0 at 004a46cc
;   core_simbox.cpp_CSimBox_dtor_FUN_00547720 at 00547735
;   core_stone.cpp_CTempleStone_dtor_FUN_005689e0 at 005689f5
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 at 0057aeef
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041adf0
        ;   Label: core_box.cpp_CBox_dtor_FUN_0041adf0
    RET                                 ; 0041adf4

