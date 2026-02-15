; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_00505430(CLever *this_ptr,uint flags)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLeverTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505430
        ;   Label: core_lever.cpp_CLever_dtor_FUN_00505430
    MOV EBX,dword ptr [ESP + 0x8]       ; 00505431
    TEST byte ptr [ESP + 0xc],0x4       ; 00505435
    JNZ 0x00505456                      ; 0050543a
        ;   XREF to: 00505456 (CONDITIONAL_JUMP)  ; LAB_00505456
    PUSH 0x1                            ; 0050543c
    PUSH EBX                            ; 0050543e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0050543f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00505444
    MOV DL,byte ptr [ESP + 0xc]         ; 00505447
    MOV EBX,EAX                         ; 0050544b
    TEST DL,0x2                         ; 0050544d
    JNZ 0x00505471                      ; 00505450
        ;   XREF to: 00505471 (CONDITIONAL_JUMP)  ; LAB_00505471
    MOV EAX,EBX                         ; 00505452
    POP EBX                             ; 00505454
    RET                                 ; 00505455
    PUSH 0x660a00                       ; 00505456 | g_CLeverTypeInfo
        ;   Label: LAB_00505456
    PUSH EBX                            ; 0050545b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0050545c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00505461
    PUSH EAX                            ; 00505464
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00505465
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0050546a
    MOV EAX,EBX                         ; 0050546d
    POP EBX                             ; 0050546f
    RET                                 ; 00505470
    PUSH EAX                            ; 00505471
        ;   Label: LAB_00505471
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00505472
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00505477
    MOV EAX,EBX                         ; 0050547a
    POP EBX                             ; 0050547c
    RET                                 ; 0050547d

