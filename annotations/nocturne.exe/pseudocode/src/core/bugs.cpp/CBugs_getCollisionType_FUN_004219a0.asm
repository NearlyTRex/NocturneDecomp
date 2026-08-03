; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_bugs_cpp_CBugs_getCollisionType_FUN_004219a0(CBugs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[1]:
;   core_bugs.cpp_CBugs_getDeathState_FUN_004219b0 at 004219c3
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 004219a0
        ;   Label: core_bugs.cpp_CBugs_getCollisionType_FUN_004219a0
    RET                                 ; 004219a2

