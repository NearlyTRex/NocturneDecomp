; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_bugs_cpp_CBugs_getCollisionType_FUN_0041f8e0(CBugs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[1]:
;   core_bugs.cpp_CBugs_getDeathState_FUN_0041f8f0 at 0041f903
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 0041f8e0
        ;   Label: core_bugs.cpp_CBugs_getCollisionType_FUN_0041f8e0
    RET                                 ; 0041f8e2

