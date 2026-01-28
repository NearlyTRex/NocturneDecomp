; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_005df780(CTrash *this_ptr,uint d1,uint d2)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrashTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df780
        ;   Label: core_trash.cpp_CTrash_dtor_FUN_005df780
    MOV EBX,dword ptr [ESP + 0x8]       ; 005df781
    TEST byte ptr [ESP + 0xc],0x4       ; 005df785
    JNZ 0x005df7a6                      ; 005df78a
        ;   XREF to: 005df7a6 (CONDITIONAL_JUMP)  ; LAB_005df7a6
    PUSH 0x1                            ; 005df78c
    PUSH EBX                            ; 005df78e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005df78f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 005df794
    MOV DL,byte ptr [ESP + 0xc]         ; 005df797
    MOV EBX,EAX                         ; 005df79b
    TEST DL,0x2                         ; 005df79d
    JNZ 0x005df7c1                      ; 005df7a0
        ;   XREF to: 005df7c1 (CONDITIONAL_JUMP)  ; LAB_005df7c1
    MOV EAX,EBX                         ; 005df7a2
    POP EBX                             ; 005df7a4
    RET                                 ; 005df7a5
    PUSH 0x6649e0                       ; 005df7a6 | g_CTrashTypeInfo
        ;   Label: LAB_005df7a6
    PUSH EBX                            ; 005df7ab
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005df7ac
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005df7b1
    PUSH EAX                            ; 005df7b4
    CALL crt_memory.c_free_FUN_005fe659 ; 005df7b5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005df7ba
    MOV EAX,EBX                         ; 005df7bd
    POP EBX                             ; 005df7bf
    RET                                 ; 005df7c0
    PUSH EAX                            ; 005df7c1
        ;   Label: LAB_005df7c1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005df7c2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005df7c7
    MOV EAX,EBX                         ; 005df7ca
    POP EBX                             ; 005df7cc
    RET                                 ; 005df7cd

