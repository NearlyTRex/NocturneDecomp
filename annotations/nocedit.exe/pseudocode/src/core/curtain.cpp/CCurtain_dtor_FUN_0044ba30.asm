; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0044ba30(CCurtain *this_ptr,uint flags)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCurtainTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_curtain.cpp_SCurtainVertex_arrdtor_FUN_0044bad0
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ba30
        ;   Label: core_curtain.cpp_CCurtain_dtor_FUN_0044ba30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044ba31
    TEST byte ptr [ESP + 0xc],0x4       ; 0044ba35
    JNZ 0x0044ba6d                      ; 0044ba3a
        ;   XREF to: 0044ba6d (CONDITIONAL_JUMP)  ; LAB_0044ba6d
    PUSH 0x0                            ; 0044ba3c
    ADD EBX,0x208                       ; 0044ba3e
    PUSH EBX                            ; 0044ba44
    CALL core_curtain.cpp_SCurtainVertex_arrdtor_FUN_0044bad0 ; 0044ba45
        ;   XREF to: 0044bad0 (UNCONDITIONAL_CALL)  ; SCurtainVertex * core_curtain.cpp_SCurtainVertex_arrdtor_FUN_0044bad0(SCurtainVertex * objs, uint flags)
    ADD ESP,0x8                         ; 0044ba4a
    PUSH 0x1                            ; 0044ba4d
    LEA EBX,[EAX + 0xfffffdf8]          ; 0044ba4f
    PUSH EBX                            ; 0044ba55
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0044ba56
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044ba5b
    MOV DL,byte ptr [ESP + 0xc]         ; 0044ba5e
    MOV EBX,EAX                         ; 0044ba62
    TEST DL,0x2                         ; 0044ba64
    JNZ 0x0044ba88                      ; 0044ba67
        ;   XREF to: 0044ba88 (CONDITIONAL_JUMP)  ; LAB_0044ba88
    MOV EAX,EBX                         ; 0044ba69
    POP EBX                             ; 0044ba6b
    RET                                 ; 0044ba6c
    PUSH 0x65c610                       ; 0044ba6d | g_CCurtainTypeInfo
        ;   Label: LAB_0044ba6d
    PUSH EBX                            ; 0044ba72
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0044ba73
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0044ba78
    PUSH EAX                            ; 0044ba7b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0044ba7c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0044ba81
    MOV EAX,EBX                         ; 0044ba84
    POP EBX                             ; 0044ba86
    RET                                 ; 0044ba87
    PUSH EAX                            ; 0044ba88
        ;   Label: LAB_0044ba88
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 0044ba89
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0044ba8e
    MOV EAX,EBX                         ; 0044ba91
    POP EBX                             ; 0044ba93
    RET                                 ; 0044ba94

