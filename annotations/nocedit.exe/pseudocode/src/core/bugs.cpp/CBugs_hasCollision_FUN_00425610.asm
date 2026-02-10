; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_bugs_cpp_CBugs_hasCollision_FUN_00425610(CBugs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[1]:
;   core_bugs.cpp_CBugs_getDeathState_FUN_00425620 at 00425633
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00425610
        ;   Label: core_bugs.cpp_CBugs_hasCollision_FUN_00425610
    RET                                 ; 00425612

