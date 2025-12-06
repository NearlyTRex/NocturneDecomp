; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder * this_ptr, uint d1, uint d2)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroPlaceholderVTable
;   WatcomTypeInfo g_CHeroPlaceholderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c30
        ;   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3c31
    TEST byte ptr [ESP + 0xc],0x4       ; 004f3c35
    JNZ 0x004f3c60                      ; 004f3c3a | LAB_004f3c60
        ;   XREF to: 004f3c60 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004f3c3c
    PUSH EBX                            ; 004f3c3e
    MOV dword ptr [EBX + 0x154],0x65f844 ; 004f3c3f | CDemonActor_vtable g_CHeroPlaceholderVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f3c49 | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f3c4e
    MOV DL,byte ptr [ESP + 0xc]         ; 004f3c51
    MOV EBX,EAX                         ; 004f3c55
    TEST DL,0x2                         ; 004f3c57
    JNZ 0x004f3c7b                      ; 004f3c5a | LAB_004f3c7b
        ;   XREF to: 004f3c7b (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004f3c5c
    POP EBX                             ; 004f3c5e
    RET                                 ; 004f3c5f
    PUSH 0x65f930                       ; 004f3c60 | WatcomTypeInfo g_CHeroPlaceholderTypeInfo
        ;   Label: LAB_004f3c60
    PUSH EBX                            ; 004f3c65
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004f3c66 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f3c6b
    PUSH EAX                            ; 004f3c6e
    CALL crt_memory.c_free_FUN_005fe659 ; 004f3c6f | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f3c74
    MOV EAX,EBX                         ; 004f3c77
    POP EBX                             ; 004f3c79
    RET                                 ; 004f3c7a
    PUSH EAX                            ; 004f3c7b
        ;   Label: LAB_004f3c7b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f3c7c | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f3c81
    MOV EAX,EBX                         ; 004f3c84
    POP EBX                             ; 004f3c86
    RET                                 ; 004f3c87

