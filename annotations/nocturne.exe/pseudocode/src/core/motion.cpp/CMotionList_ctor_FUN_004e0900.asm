; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_motion_cpp_CMotionList_ctor_FUN_004e0900(CMotionList *this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_FUN_00517350 at 0051735f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0900
        ;   Label: core_motion.cpp_CMotionList_ctor_FUN_004e0900
    MOV dword ptr [EAX + 0x964],0x0     ; 004e0904
    MOV dword ptr [EAX],0x0             ; 004e090e
    RET                                 ; 004e0914

