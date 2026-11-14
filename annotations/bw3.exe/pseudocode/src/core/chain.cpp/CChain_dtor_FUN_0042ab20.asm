; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042ab20(CChain *this_ptr,uint flags)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CChainTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ab20
        ;   Label: core_chain.cpp_CChain_dtor_FUN_0042ab20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042ab21
    TEST byte ptr [ESP + 0xc],0x4       ; 0042ab25
    JNZ 0x0042ab46                      ; 0042ab2a
        ;   XREF to: 0042ab46 (CONDITIONAL_JUMP)  ; LAB_0042ab46
    PUSH 0x1                            ; 0042ab2c
    PUSH EBX                            ; 0042ab2e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0042ab2f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042ab34
    MOV DL,byte ptr [ESP + 0xc]         ; 0042ab37
    MOV EBX,EAX                         ; 0042ab3b
    TEST DL,0x2                         ; 0042ab3d
    JNZ 0x0042ab61                      ; 0042ab40
        ;   XREF to: 0042ab61 (CONDITIONAL_JUMP)  ; LAB_0042ab61
    MOV EAX,EBX                         ; 0042ab42
    POP EBX                             ; 0042ab44
    RET                                 ; 0042ab45
    PUSH 0x5dd1f0                       ; 0042ab46 | g_CChainTypeInfo
        ;   Label: LAB_0042ab46
    PUSH EBX                            ; 0042ab4b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0042ab4c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0042ab51
    PUSH EAX                            ; 0042ab54
    CALL crt_unknown.c_FUN_005a30b6     ; 0042ab55
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0042ab5a
    MOV EAX,EBX                         ; 0042ab5d
    POP EBX                             ; 0042ab5f
    RET                                 ; 0042ab60
    PUSH EAX                            ; 0042ab61
        ;   Label: LAB_0042ab61
    CALL crt_unknown.c_FUN_005a30c4     ; 0042ab62
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0042ab67
    MOV EAX,EBX                         ; 0042ab6a
    POP EBX                             ; 0042ab6c
    RET                                 ; 0042ab6d

