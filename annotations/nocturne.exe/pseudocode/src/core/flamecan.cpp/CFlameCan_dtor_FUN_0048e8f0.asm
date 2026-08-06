; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_0048e8f0(CFlameCan *this_ptr,uint flags)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameCanTypeInfo_0059d760
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e8f0
        ;   Label: core_flamecan.cpp_CFlameCan_dtor_FUN_0048e8f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048e8f1
    TEST byte ptr [ESP + 0xc],0x4       ; 0048e8f5
    JNZ 0x0048e92d                      ; 0048e8fa
        ;   XREF to: 0048e92d (CONDITIONAL_JUMP)  ; LAB_0048e92d
    PUSH 0x1                            ; 0048e8fc
    ADD EBX,0x338                       ; 0048e8fe
    PUSH EBX                            ; 0048e904
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0048e905
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048e90a
    PUSH 0x1                            ; 0048e90d
    LEA EBX,[EAX + 0xfffffcc8]          ; 0048e90f
    PUSH EBX                            ; 0048e915
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0048e916
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048e91b
    MOV DL,byte ptr [ESP + 0xc]         ; 0048e91e
    MOV EBX,EAX                         ; 0048e922
    TEST DL,0x2                         ; 0048e924
    JNZ 0x0048e948                      ; 0048e927
        ;   XREF to: 0048e948 (CONDITIONAL_JUMP)  ; LAB_0048e948
    MOV EAX,EBX                         ; 0048e929
    POP EBX                             ; 0048e92b
    RET                                 ; 0048e92c
    PUSH 0x59d760                       ; 0048e92d | g_CFlameCanTypeInfo_0059d760
        ;   Label: LAB_0048e92d
    PUSH EBX                            ; 0048e932
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0048e933
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0048e938
    PUSH EAX                            ; 0048e93b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0048e93c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0048e941
    MOV EAX,EBX                         ; 0048e944
    POP EBX                             ; 0048e946
    RET                                 ; 0048e947
    PUSH EAX                            ; 0048e948
        ;   Label: LAB_0048e948
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0048e949
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0048e94e
    MOV EAX,EBX                         ; 0048e951
    POP EBX                             ; 0048e953
    RET                                 ; 0048e954

