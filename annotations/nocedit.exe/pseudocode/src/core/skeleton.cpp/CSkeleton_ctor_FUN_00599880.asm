; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_motion.cpp_CMotionList_ctor_FUN_0052cd50
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 00599880
        ;   Label: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00599885
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059988a
    PUSH EAX                            ; 0059988e
    CALL core_motion.cpp_CMotionList_ctor_FUN_0052cd50 ; 0059988f
        ;   XREF to: 0052cd50 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionList_ctor_FUN_0052cd50(CMotionList * this_ptr)
    ADD ESP,0x4                         ; 00599894
    PUSH 0x6598c0                       ; 00599897 | g_CVectorTypeInfo
    PUSH 0x64                           ; 0059989c
    ADD EAX,0x2937c                     ; 0059989e
    PUSH EAX                            ; 005998a3
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005998a4
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0xfffff1dc],0x0 ; 005998a9
    MOV dword ptr [EAX + -0x10],0x0     ; 005998b3
    MOV dword ptr [EAX + -0xc],0x0      ; 005998ba
    MOV dword ptr [EAX + -0x8],0x0      ; 005998c1
    MOV dword ptr [EAX + -0x4],0x0      ; 005998c8
    ADD ESP,0xc                         ; 005998cf
    MOV dword ptr [EAX],0xc7c34f80      ; 005998d2
    SUB EAX,0x2937c                     ; 005998d8
    RET                                 ; 005998dd

