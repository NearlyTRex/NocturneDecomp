; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_005deab0(CTrap *this_ptr,uint flags)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrapTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005deab0
        ;   Label: core_trap.cpp_CTrap_dtor_FUN_005deab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005deab1
    TEST byte ptr [ESP + 0xc],0x4       ; 005deab5
    JNZ 0x005dead6                      ; 005deaba
        ;   XREF to: 005dead6 (CONDITIONAL_JUMP)  ; LAB_005dead6
    PUSH 0x1                            ; 005deabc
    PUSH EBX                            ; 005deabe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005deabf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005deac4
    MOV DL,byte ptr [ESP + 0xc]         ; 005deac7
    MOV EBX,EAX                         ; 005deacb
    TEST DL,0x2                         ; 005deacd
    JNZ 0x005deaf1                      ; 005dead0
        ;   XREF to: 005deaf1 (CONDITIONAL_JUMP)  ; LAB_005deaf1
    MOV EAX,EBX                         ; 005dead2
    POP EBX                             ; 005dead4
    RET                                 ; 005dead5
    PUSH 0x6648b0                       ; 005dead6 | g_CTrapTypeInfo
        ;   Label: LAB_005dead6
    PUSH EBX                            ; 005deadb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005deadc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005deae1
    PUSH EAX                            ; 005deae4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005deae5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005deaea
    MOV EAX,EBX                         ; 005deaed
    POP EBX                             ; 005deaef
    RET                                 ; 005deaf0
    PUSH EAX                            ; 005deaf1
        ;   Label: LAB_005deaf1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005deaf2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005deaf7
    MOV EAX,EBX                         ; 005deafa
    POP EBX                             ; 005deafc
    RET                                 ; 005deafd

