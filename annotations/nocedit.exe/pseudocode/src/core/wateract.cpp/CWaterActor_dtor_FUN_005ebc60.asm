; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor *this_ptr,uint flags)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWaterActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_wateract.cpp_FUN_005ebcf0
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ebc60
        ;   Label: core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ebc61
    TEST byte ptr [ESP + 0xc],0x4       ; 005ebc65
    JNZ 0x005ebc9d                      ; 005ebc6a
        ;   XREF to: 005ebc9d (CONDITIONAL_JUMP)  ; LAB_005ebc9d
    PUSH 0x0                            ; 005ebc6c
    ADD EBX,0x29c                       ; 005ebc6e
    PUSH EBX                            ; 005ebc74
    CALL core_wateract.cpp_FUN_005ebcf0 ; 005ebc75
        ;   XREF to: 005ebcf0 (UNCONDITIONAL_CALL)  ; void core_wateract.cpp_FUN_005ebcf0()
    ADD ESP,0x8                         ; 005ebc7a
    PUSH 0x1                            ; 005ebc7d
    LEA EBX,[EAX + 0xfffffd64]          ; 005ebc7f
    PUSH EBX                            ; 005ebc85
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005ebc86
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ebc8b
    MOV DL,byte ptr [ESP + 0xc]         ; 005ebc8e
    MOV EBX,EAX                         ; 005ebc92
    TEST DL,0x2                         ; 005ebc94
    JNZ 0x005ebcb8                      ; 005ebc97
        ;   XREF to: 005ebcb8 (CONDITIONAL_JUMP)  ; LAB_005ebcb8
    MOV EAX,EBX                         ; 005ebc99
    POP EBX                             ; 005ebc9b
    RET                                 ; 005ebc9c
    PUSH 0x665440                       ; 005ebc9d | g_CWaterActorTypeInfo
        ;   Label: LAB_005ebc9d
    PUSH EBX                            ; 005ebca2
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005ebca3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ebca8
    PUSH EAX                            ; 005ebcab
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005ebcac
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005ebcb1
    MOV EAX,EBX                         ; 005ebcb4
    POP EBX                             ; 005ebcb6
    RET                                 ; 005ebcb7
    PUSH EAX                            ; 005ebcb8
        ;   Label: LAB_005ebcb8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005ebcb9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005ebcbe
    MOV EAX,EBX                         ; 005ebcc1
    POP EBX                             ; 005ebcc3
    RET                                 ; 005ebcc4

