; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_005019b0(CKeyActor *this_ptr,uint flags)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005019b0
        ;   Label: core_keyactor.cpp_CKeyActor_dtor_FUN_005019b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005019b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005019b5
    JNZ 0x005019d6                      ; 005019ba
        ;   XREF to: 005019d6 (CONDITIONAL_JUMP)  ; LAB_005019d6
    PUSH 0x1                            ; 005019bc
    PUSH EBX                            ; 005019be
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005019bf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005019c4
    MOV DL,byte ptr [ESP + 0xc]         ; 005019c7
    MOV EBX,EAX                         ; 005019cb
    TEST DL,0x2                         ; 005019cd
    JNZ 0x005019f1                      ; 005019d0
        ;   XREF to: 005019f1 (CONDITIONAL_JUMP)  ; LAB_005019f1
    MOV EAX,EBX                         ; 005019d2
    POP EBX                             ; 005019d4
    RET                                 ; 005019d5
    PUSH 0x6605a0                       ; 005019d6 | g_CKeyActorTypeInfo
        ;   Label: LAB_005019d6
    PUSH EBX                            ; 005019db
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005019dc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005019e1
    PUSH EAX                            ; 005019e4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005019e5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005019ea
    MOV EAX,EBX                         ; 005019ed
    POP EBX                             ; 005019ef
    RET                                 ; 005019f0
    PUSH EAX                            ; 005019f1
        ;   Label: LAB_005019f1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005019f2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005019f7
    MOV EAX,EBX                         ; 005019fa
    POP EBX                             ; 005019fc
    RET                                 ; 005019fd

