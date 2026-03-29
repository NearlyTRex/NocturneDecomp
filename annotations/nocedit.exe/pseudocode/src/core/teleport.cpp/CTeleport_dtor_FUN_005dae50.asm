; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_005dae50(CTeleport *this_ptr,uint flags)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dae50
        ;   Label: core_teleport.cpp_CTeleport_dtor_FUN_005dae50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005dae51
    TEST byte ptr [ESP + 0xc],0x4       ; 005dae55
    JNZ 0x005dae76                      ; 005dae5a
        ;   XREF to: 005dae76 (CONDITIONAL_JUMP)  ; LAB_005dae76
    PUSH 0x1                            ; 005dae5c
    PUSH EBX                            ; 005dae5e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005dae5f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dae64
    MOV DL,byte ptr [ESP + 0xc]         ; 005dae67
    MOV EBX,EAX                         ; 005dae6b
    TEST DL,0x2                         ; 005dae6d
    JNZ 0x005dae91                      ; 005dae70
        ;   XREF to: 005dae91 (CONDITIONAL_JUMP)  ; LAB_005dae91
    MOV EAX,EBX                         ; 005dae72
    POP EBX                             ; 005dae74
    RET                                 ; 005dae75
    PUSH 0x664410                       ; 005dae76 | g_CTeleportTypeInfo
        ;   Label: LAB_005dae76
    PUSH EBX                            ; 005dae7b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005dae7c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005dae81
    PUSH EAX                            ; 005dae84
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005dae85
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005dae8a
    MOV EAX,EBX                         ; 005dae8d
    POP EBX                             ; 005dae8f
    RET                                 ; 005dae90
    PUSH EAX                            ; 005dae91
        ;   Label: LAB_005dae91
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005dae92
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005dae97
    MOV EAX,EBX                         ; 005dae9a
    POP EBX                             ; 005dae9c
    RET                                 ; 005dae9d

