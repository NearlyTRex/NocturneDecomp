; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CVector_ctor_FUN_00410340(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040dc20
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40 at 0041cae9
;   core_boneguy.cpp_FUN_0041b770 at 0041b796
;   core_lightgun.cpp_CLightGun_fire_FUN_00505c70 at 00505fef
;   core_mobster.cpp_FUN_00525110 at 00525136
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c899
;   core_script.cpp_makeVector_FUN_00567d00 at 00567d06
;   core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0 at 005fb2a4
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fa96b
;   core_zombie.cpp_FUN_005f8da0 at 005f8dc6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410340
        ;   Label: core_actor.cpp_CVector_ctor_FUN_00410340
    RET                                 ; 00410344

