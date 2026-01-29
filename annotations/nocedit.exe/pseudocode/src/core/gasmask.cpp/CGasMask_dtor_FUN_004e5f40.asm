; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004e5f40(CGasMask *this_ptr,uint d1,uint d2)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CGasMaskTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5f40
        ;   Label: core_gasmask.cpp_CGasMask_dtor_FUN_004e5f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e5f41
    TEST byte ptr [ESP + 0xc],0x4       ; 004e5f45
    JNZ 0x004e5f66                      ; 004e5f4a
        ;   XREF to: 004e5f66 (CONDITIONAL_JUMP)  ; LAB_004e5f66
    PUSH 0x1                            ; 004e5f4c
    PUSH EBX                            ; 004e5f4e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004e5f4f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004e5f54
    MOV DL,byte ptr [ESP + 0xc]         ; 004e5f57
    MOV EBX,EAX                         ; 004e5f5b
    TEST DL,0x2                         ; 004e5f5d
    JNZ 0x004e5f81                      ; 004e5f60
        ;   XREF to: 004e5f81 (CONDITIONAL_JUMP)  ; LAB_004e5f81
    MOV EAX,EBX                         ; 004e5f62
    POP EBX                             ; 004e5f64
    RET                                 ; 004e5f65
    PUSH 0x65ece0                       ; 004e5f66 | g_CGasMaskTypeInfo
        ;   Label: LAB_004e5f66
    PUSH EBX                            ; 004e5f6b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004e5f6c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e5f71
    PUSH EAX                            ; 004e5f74
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004e5f75
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004e5f7a
    MOV EAX,EBX                         ; 004e5f7d
    POP EBX                             ; 004e5f7f
    RET                                 ; 004e5f80
    PUSH EAX                            ; 004e5f81
        ;   Label: LAB_004e5f81
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004e5f82
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004e5f87
    MOV EAX,EBX                         ; 004e5f8a
    POP EBX                             ; 004e5f8c
    RET                                 ; 004e5f8d

