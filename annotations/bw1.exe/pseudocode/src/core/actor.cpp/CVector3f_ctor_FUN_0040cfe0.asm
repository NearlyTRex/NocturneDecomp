; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; XREF[15]:
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720 at 0041c7a5
;   core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_0041b2a0 at 0041b2d6
;   core_carved.cpp_CCarved_getCarryObjToBodyXForm_FUN_0042a4f0 at 0042a5b9
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429f6b
;   core_carved.cpp_FUN_00428450 at 00428486
;   core_demnfolk.cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_0045b120 at 0045b1e9
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00459100 at 0045a8ba
;   core_demnfolk.cpp_FUN_00458790 at 004587c6
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 00500973
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 005020d3
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cfe0
        ;   Label: core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
    RET                                 ; 0040cfe4

