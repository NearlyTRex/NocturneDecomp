; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CVector_ctor_FUN_0040e160(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004194b0 at 00419528
;   core_boneguy.cpp_FUN_004181f0 at 00418216
;   core_lightgun.cpp_CLightGun_fire_FUN_004c71a0 at 004c74d4
;   core_mobster.cpp_FUN_004da070 at 004da096
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501349
;   core_script.cpp_makeVector_FUN_00505880 at 00505886
;   core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_00560cd0 at 00560d84
;   core_zombie.cpp_CZombie_process_FUN_0055ef50 at 0056044b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e160
        ;   Label: core_actor.cpp_CVector_ctor_FUN_0040e160
    RET                                 ; 0040e164

