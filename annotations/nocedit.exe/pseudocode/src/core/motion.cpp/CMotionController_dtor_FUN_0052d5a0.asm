; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController *this_ptr,uint d1)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 at 0059de70
;
; Referenced Globals:
;   CMotionController_vtable g_CMotionControllerVTable
;   WatcomTypeInfo g_CMotionControllerTypeInfo
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d5a0
        ;   Label: core_motion.cpp_CMotionController_dtor_FUN_0052d5a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052d5a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052d5a5
    TEST AL,0x4                         ; 0052d5a9
    JNZ 0x0052d5bc                      ; 0052d5ab
        ;   XREF to: 0052d5bc (CONDITIONAL_JUMP)  ; LAB_0052d5bc
    MOV dword ptr [EBX + 0x50],0x661bc4 ; 0052d5ad | g_CMotionControllerVTable
    TEST AL,0x2                         ; 0052d5b4
    JNZ 0x0052d5d7                      ; 0052d5b6
        ;   XREF to: 0052d5d7 (CONDITIONAL_JUMP)  ; LAB_0052d5d7
    MOV EAX,EBX                         ; 0052d5b8
    POP EBX                             ; 0052d5ba
    RET                                 ; 0052d5bb
    PUSH 0x661bd0                       ; 0052d5bc | g_CMotionControllerTypeInfo
        ;   Label: LAB_0052d5bc
    PUSH EBX                            ; 0052d5c1
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0052d5c2
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0052d5c7
    PUSH EAX                            ; 0052d5ca
    CALL crt_memory.c_free_FUN_005fe659 ; 0052d5cb
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0052d5d0
    MOV EAX,EBX                         ; 0052d5d3
    POP EBX                             ; 0052d5d5
    RET                                 ; 0052d5d6
    PUSH EBX                            ; 0052d5d7
        ;   Label: LAB_0052d5d7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0052d5d8
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0052d5dd
    MOV EAX,EBX                         ; 0052d5e0
    POP EBX                             ; 0052d5e2
    RET                                 ; 0052d5e3

