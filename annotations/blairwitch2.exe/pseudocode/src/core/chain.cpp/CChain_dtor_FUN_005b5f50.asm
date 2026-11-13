; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_005b5f50(CChain *this_ptr,uint flags)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CChainTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5f50
        ;   Label: core_chain.cpp_CChain_dtor_FUN_005b5f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b5f51
    TEST byte ptr [ESP + 0xc],0x4       ; 005b5f55
    JNZ 0x005b5f76                      ; 005b5f5a
        ;   XREF to: 005b5f76 (CONDITIONAL_JUMP)  ; LAB_005b5f76
    PUSH 0x1                            ; 005b5f5c
    PUSH EBX                            ; 005b5f5e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005b5f5f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b5f64
    MOV DL,byte ptr [ESP + 0xc]         ; 005b5f67
    MOV EBX,EAX                         ; 005b5f6b
    TEST DL,0x2                         ; 005b5f6d
    JNZ 0x005b5f91                      ; 005b5f70
        ;   XREF to: 005b5f91 (CONDITIONAL_JUMP)  ; LAB_005b5f91
    MOV EAX,EBX                         ; 005b5f72
    POP EBX                             ; 005b5f74
    RET                                 ; 005b5f75
    PUSH 0x601380                       ; 005b5f76 | g_CChainTypeInfo
        ;   Label: LAB_005b5f76
    PUSH EBX                            ; 005b5f7b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005b5f7c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005b5f81
    PUSH EAX                            ; 005b5f84
    CALL crt_unknown.c_FUN_005b7fce     ; 005b5f85
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005b5f8a
    MOV EAX,EBX                         ; 005b5f8d
    POP EBX                             ; 005b5f8f
    RET                                 ; 005b5f90
    PUSH EAX                            ; 005b5f91
        ;   Label: LAB_005b5f91
    CALL crt_unknown.c_FUN_005b7fdc     ; 005b5f92
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005b5f97
    MOV EAX,EBX                         ; 005b5f9a
    POP EBX                             ; 005b5f9c
    RET                                 ; 005b5f9d

