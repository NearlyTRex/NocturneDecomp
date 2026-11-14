; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CVector3f_ctor_FUN_0040d220(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004186b0 at 00418735
;   core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_00416f50 at 00416f86
;   core_carved.cpp_CCarved_getCarryObjToBodyXForm_FUN_00427780 at 00427849
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 004271ea
;   core_carved.cpp_FUN_004256e0 at 00425716
;   core_demnfolk.cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_00457300 at 004573c9
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 004568fe
;   core_demnfolk.cpp_FUN_004548e0 at 00454916
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c1fd
;   core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90 at 0058b2af
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d220
        ;   Label: core_actor.cpp_CVector3f_ctor_FUN_0040d220
    RET                                 ; 0040d224

