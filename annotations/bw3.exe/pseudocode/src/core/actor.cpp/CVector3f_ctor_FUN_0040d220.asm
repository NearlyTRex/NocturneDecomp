; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * core_actor_cpp_CVector3f_ctor_FUN_0040d220(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_boneguy.cpp_FUN_00416f50 at 00416f86
;   core_boneguy.cpp_FUN_004186b0 at 00418735
;   core_carved.cpp_FUN_004256e0 at 00425716
;   core_carved.cpp_FUN_00425da0 at 004271ea
;   core_carved.cpp_FUN_00427780 at 00427849
;   core_demnfolk.cpp_FUN_00455080 at 004568fe
;   core_demnfolk.cpp_FUN_00457300 at 004573c9
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c1fd
;   core_zombie.cpp_FUN_00588650 at 00588686
;   core_zombie.cpp_FUN_00588ee0 at 0058a754
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d220
        ;   Label: core_actor.cpp_CVector3f_ctor_FUN_0040d220
    RET                                 ; 0040d224

