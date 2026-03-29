; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel *this_ptr,uint flags)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCryptVesselTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9d30
        ;   Label: core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e9d31
    TEST byte ptr [ESP + 0xc],0x4       ; 005e9d35
    JNZ 0x005e9d6d                      ; 005e9d3a
        ;   XREF to: 005e9d6d (CONDITIONAL_JUMP)  ; LAB_005e9d6d
    PUSH 0x1                            ; 005e9d3c
    ADD EBX,0x3c4                       ; 005e9d3e
    PUSH EBX                            ; 005e9d44
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e9d45
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e9d4a
    PUSH 0x1                            ; 005e9d4d
    LEA EBX,[EAX + 0xfffffc3c]          ; 005e9d4f
    PUSH EBX                            ; 005e9d55
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e9d56
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e9d5b
    MOV DL,byte ptr [ESP + 0xc]         ; 005e9d5e
    MOV EBX,EAX                         ; 005e9d62
    TEST DL,0x2                         ; 005e9d64
    JNZ 0x005e9d88                      ; 005e9d67
        ;   XREF to: 005e9d88 (CONDITIONAL_JUMP)  ; LAB_005e9d88
    MOV EAX,EBX                         ; 005e9d69
    POP EBX                             ; 005e9d6b
    RET                                 ; 005e9d6c
    PUSH 0x6652a0                       ; 005e9d6d | g_CCryptVesselTypeInfo
        ;   Label: LAB_005e9d6d
    PUSH EBX                            ; 005e9d72
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005e9d73
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005e9d78
    PUSH EAX                            ; 005e9d7b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005e9d7c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005e9d81
    MOV EAX,EBX                         ; 005e9d84
    POP EBX                             ; 005e9d86
    RET                                 ; 005e9d87
    PUSH EAX                            ; 005e9d88
        ;   Label: LAB_005e9d88
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005e9d89
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005e9d8e
    MOV EAX,EBX                         ; 005e9d91
    POP EBX                             ; 005e9d93
    RET                                 ; 005e9d94

