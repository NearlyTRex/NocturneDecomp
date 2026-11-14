; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004a0c40(CFlameCan *this_ptr,uint flags)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameCanTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0c40
        ;   Label: core_flamecan.cpp_CFlameCan_dtor_FUN_004a0c40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0c41
    TEST byte ptr [ESP + 0xc],0x4       ; 004a0c45
    JNZ 0x004a0c7d                      ; 004a0c4a
        ;   XREF to: 004a0c7d (CONDITIONAL_JUMP)  ; LAB_004a0c7d
    PUSH 0x1                            ; 004a0c4c
    ADD EBX,0x49c                       ; 004a0c4e
    PUSH EBX                            ; 004a0c54
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004a0c55
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a0c5a
    PUSH 0x1                            ; 004a0c5d
    LEA EBX,[EAX + 0xfffffb64]          ; 004a0c5f
    PUSH EBX                            ; 004a0c65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004a0c66
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a0c6b
    MOV DL,byte ptr [ESP + 0xc]         ; 004a0c6e
    MOV EBX,EAX                         ; 004a0c72
    TEST DL,0x2                         ; 004a0c74
    JNZ 0x004a0c98                      ; 004a0c77
        ;   XREF to: 004a0c98 (CONDITIONAL_JUMP)  ; LAB_004a0c98
    MOV EAX,EBX                         ; 004a0c79
    POP EBX                             ; 004a0c7b
    RET                                 ; 004a0c7c
    PUSH 0x5f6b10                       ; 004a0c7d | g_CFlameCanTypeInfo
        ;   Label: LAB_004a0c7d
    PUSH EBX                            ; 004a0c82
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a0c83
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a0c88
    PUSH EAX                            ; 004a0c8b
    CALL crt_unknown.c_FUN_005b7fce     ; 004a0c8c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a0c91
    MOV EAX,EBX                         ; 004a0c94
    POP EBX                             ; 004a0c96
    RET                                 ; 004a0c97
    PUSH EAX                            ; 004a0c98
        ;   Label: LAB_004a0c98
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a0c99
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a0c9e
    MOV EAX,EBX                         ; 004a0ca1
    POP EBX                             ; 004a0ca3
    RET                                 ; 004a0ca4

