; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_keyactor.cpp_FUN_005019b0()
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005019b0
        ;   Label: core_keyactor.cpp_FUN_005019b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005019b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005019b5
    JNZ 0x005019d6                      ; 005019ba | LAB_005019d6
        ;   XREF to: 005019d6 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005019bc
    PUSH EBX                            ; 005019be
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005019bf | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005019c4
    MOV DL,byte ptr [ESP + 0xc]         ; 005019c7
    MOV EBX,EAX                         ; 005019cb
    TEST DL,0x2                         ; 005019cd
    JNZ 0x005019f1                      ; 005019d0 | LAB_005019f1
        ;   XREF to: 005019f1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005019d2
    POP EBX                             ; 005019d4
    RET                                 ; 005019d5
    PUSH 0x6605a0                       ; 005019d6 | WatcomTypeInfo g_CKeyActorTypeInfo
        ;   Label: LAB_005019d6
    PUSH EBX                            ; 005019db
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005019dc | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005019e1
    PUSH EAX                            ; 005019e4
    CALL crt_memory.c_free_FUN_005fe659 ; 005019e5 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005019ea
    MOV EAX,EBX                         ; 005019ed
    POP EBX                             ; 005019ef
    RET                                 ; 005019f0
    PUSH EAX                            ; 005019f1
        ;   Label: LAB_005019f1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005019f2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005019f7
    MOV EAX,EBX                         ; 005019fa
    POP EBX                             ; 005019fc
    RET                                 ; 005019fd

