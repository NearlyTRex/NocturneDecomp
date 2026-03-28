; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder *this_ptr,uint flags)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroPlaceholderVTable
;   WatcomTypeInfo g_CHeroPlaceholderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c30
        ;   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3c31
    TEST byte ptr [ESP + 0xc],0x4       ; 004f3c35
    JNZ 0x004f3c60                      ; 004f3c3a
        ;   XREF to: 004f3c60 (CONDITIONAL_JUMP)  ; LAB_004f3c60
    PUSH 0x1                            ; 004f3c3c
    PUSH EBX                            ; 004f3c3e
    MOV dword ptr [EBX + 0x154],0x65f844 ; 004f3c3f | g_CHeroPlaceholderVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f3c49
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f3c4e
    MOV DL,byte ptr [ESP + 0xc]         ; 004f3c51
    MOV EBX,EAX                         ; 004f3c55
    TEST DL,0x2                         ; 004f3c57
    JNZ 0x004f3c7b                      ; 004f3c5a
        ;   XREF to: 004f3c7b (CONDITIONAL_JUMP)  ; LAB_004f3c7b
    MOV EAX,EBX                         ; 004f3c5c
    POP EBX                             ; 004f3c5e
    RET                                 ; 004f3c5f
    PUSH 0x65f930                       ; 004f3c60 | g_CHeroPlaceholderTypeInfo
        ;   Label: LAB_004f3c60
    PUSH EBX                            ; 004f3c65
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004f3c66
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f3c6b
    PUSH EAX                            ; 004f3c6e
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004f3c6f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f3c74
    MOV EAX,EBX                         ; 004f3c77
    POP EBX                             ; 004f3c79
    RET                                 ; 004f3c7a
    PUSH EAX                            ; 004f3c7b
        ;   Label: LAB_004f3c7b
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004f3c7c
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f3c81
    MOV EAX,EBX                         ; 004f3c84
    POP EBX                             ; 004f3c86
    RET                                 ; 004f3c87

