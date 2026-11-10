; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_bugs_cpp_CBugs_getCollisionType_FUN_00421aa0(CBugs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[1]:
;   core_bugs.cpp_CBugs_getDeathState_FUN_00421ab0 at 00421ac3
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00421aa0
        ;   Label: core_bugs.cpp_CBugs_getCollisionType_FUN_00421aa0
    RET                                 ; 00421aa2

