; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_motion.cpp_CMotionList_ctor_FUN_0052cd50(CMotionList * this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_ctor_FUN_00599880 at 0059988f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052cd50
        ;   Label: core_motion.cpp_CMotionList_ctor_FUN_0052cd50
    MOV dword ptr [EAX + 0x964],0x0     ; 0052cd54
    MOV dword ptr [EAX],0x0             ; 0052cd5e
    RET                                 ; 0052cd64

