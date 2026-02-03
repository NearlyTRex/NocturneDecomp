; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840(CMirrorHack *this_ptr,uint flags)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMirrorHackTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b840
        ;   Label: core_manpuz.cpp_CMirrorHack_dtor_FUN_0050b840
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050b841
    TEST byte ptr [ESP + 0xc],0x4       ; 0050b845
    JNZ 0x0050b866                      ; 0050b84a
        ;   XREF to: 0050b866 (CONDITIONAL_JUMP)  ; LAB_0050b866
    PUSH 0x1                            ; 0050b84c
    PUSH EBX                            ; 0050b84e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0050b84f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050b854
    MOV DL,byte ptr [ESP + 0xc]         ; 0050b857
    MOV EBX,EAX                         ; 0050b85b
    TEST DL,0x2                         ; 0050b85d
    JNZ 0x0050b881                      ; 0050b860
        ;   XREF to: 0050b881 (CONDITIONAL_JUMP)  ; LAB_0050b881
    MOV EAX,EBX                         ; 0050b862
    POP EBX                             ; 0050b864
    RET                                 ; 0050b865
    PUSH 0x660fe0                       ; 0050b866 | g_CMirrorHackTypeInfo
        ;   Label: LAB_0050b866
    PUSH EBX                            ; 0050b86b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0050b86c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0050b871
    PUSH EAX                            ; 0050b874
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0050b875
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0050b87a
    MOV EAX,EBX                         ; 0050b87d
    POP EBX                             ; 0050b87f
    RET                                 ; 0050b880
    PUSH EAX                            ; 0050b881
        ;   Label: LAB_0050b881
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0050b882
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0050b887
    MOV EAX,EBX                         ; 0050b88a
    POP EBX                             ; 0050b88c
    RET                                 ; 0050b88d

