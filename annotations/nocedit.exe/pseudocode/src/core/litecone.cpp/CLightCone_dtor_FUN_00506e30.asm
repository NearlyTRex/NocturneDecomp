; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_00506e30(CLightCone *this_ptr,uint flags)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightConeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506e30
        ;   Label: core_litecone.cpp_CLightCone_dtor_FUN_00506e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506e31
    TEST byte ptr [ESP + 0xc],0x4       ; 00506e35
    JNZ 0x00506e56                      ; 00506e3a
        ;   XREF to: 00506e56 (CONDITIONAL_JUMP)  ; LAB_00506e56
    PUSH 0x1                            ; 00506e3c
    PUSH EBX                            ; 00506e3e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00506e3f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00506e44
    MOV DL,byte ptr [ESP + 0xc]         ; 00506e47
    MOV EBX,EAX                         ; 00506e4b
    TEST DL,0x2                         ; 00506e4d
    JNZ 0x00506e71                      ; 00506e50
        ;   XREF to: 00506e71 (CONDITIONAL_JUMP)  ; LAB_00506e71
    MOV EAX,EBX                         ; 00506e52
    POP EBX                             ; 00506e54
    RET                                 ; 00506e55
    PUSH 0x660ca0                       ; 00506e56 | g_CLightConeTypeInfo
        ;   Label: LAB_00506e56
    PUSH EBX                            ; 00506e5b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00506e5c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00506e61
    PUSH EAX                            ; 00506e64
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00506e65
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00506e6a
    MOV EAX,EBX                         ; 00506e6d
    POP EBX                             ; 00506e6f
    RET                                 ; 00506e70
    PUSH EAX                            ; 00506e71
        ;   Label: LAB_00506e71
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00506e72
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00506e77
    MOV EAX,EBX                         ; 00506e7a
    POP EBX                             ; 00506e7c
    RET                                 ; 00506e7d

