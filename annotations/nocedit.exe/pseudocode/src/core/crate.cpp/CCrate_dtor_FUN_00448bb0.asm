; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_00448bb0(CCrate *this_ptr,uint flags)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrateTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448bb0
        ;   Label: core_crate.cpp_CCrate_dtor_FUN_00448bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448bb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00448bb5
    JNZ 0x00448bd6                      ; 00448bba
        ;   XREF to: 00448bd6 (CONDITIONAL_JUMP)  ; LAB_00448bd6
    PUSH 0x1                            ; 00448bbc
    PUSH EBX                            ; 00448bbe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00448bbf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00448bc4
    MOV DL,byte ptr [ESP + 0xc]         ; 00448bc7
    MOV EBX,EAX                         ; 00448bcb
    TEST DL,0x2                         ; 00448bcd
    JNZ 0x00448bf1                      ; 00448bd0
        ;   XREF to: 00448bf1 (CONDITIONAL_JUMP)  ; LAB_00448bf1
    MOV EAX,EBX                         ; 00448bd2
    POP EBX                             ; 00448bd4
    RET                                 ; 00448bd5
    PUSH 0x65c350                       ; 00448bd6 | g_CCrateTypeInfo
        ;   Label: LAB_00448bd6
    PUSH EBX                            ; 00448bdb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00448bdc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00448be1
    PUSH EAX                            ; 00448be4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00448be5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00448bea
    MOV EAX,EBX                         ; 00448bed
    POP EBX                             ; 00448bef
    RET                                 ; 00448bf0
    PUSH EAX                            ; 00448bf1
        ;   Label: LAB_00448bf1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00448bf2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00448bf7
    MOV EAX,EBX                         ; 00448bfa
    POP EBX                             ; 00448bfc
    RET                                 ; 00448bfd

