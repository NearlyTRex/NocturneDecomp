; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0054a7d0(CPendulum *this_ptr,uint d1,uint d2)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CPendulumTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a7d0
        ;   Label: core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a7d1
    TEST byte ptr [ESP + 0xc],0x4       ; 0054a7d5
    JNZ 0x0054a7f6                      ; 0054a7da
        ;   XREF to: 0054a7f6 (CONDITIONAL_JUMP)  ; LAB_0054a7f6
    PUSH 0x1                            ; 0054a7dc
    PUSH EBX                            ; 0054a7de
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0054a7df
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0054a7e4
    MOV DL,byte ptr [ESP + 0xc]         ; 0054a7e7
    MOV EBX,EAX                         ; 0054a7eb
    TEST DL,0x2                         ; 0054a7ed
    JNZ 0x0054a811                      ; 0054a7f0
        ;   XREF to: 0054a811 (CONDITIONAL_JUMP)  ; LAB_0054a811
    MOV EAX,EBX                         ; 0054a7f2
    POP EBX                             ; 0054a7f4
    RET                                 ; 0054a7f5
    PUSH 0x662240                       ; 0054a7f6 | g_CPendulumTypeInfo
        ;   Label: LAB_0054a7f6
    PUSH EBX                            ; 0054a7fb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0054a7fc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054a801
    PUSH EAX                            ; 0054a804
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0054a805
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0054a80a
    MOV EAX,EBX                         ; 0054a80d
    POP EBX                             ; 0054a80f
    RET                                 ; 0054a810
    PUSH EAX                            ; 0054a811
        ;   Label: LAB_0054a811
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0054a812
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0054a817
    MOV EAX,EBX                         ; 0054a81a
    POP EBX                             ; 0054a81c
    RET                                 ; 0054a81d

