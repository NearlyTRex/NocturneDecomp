; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_00533c90(CSpike *this_ptr,uint flags)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpikeTypeInfo_005a2410
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533c90
        ;   Label: core_spike.cpp_CSpike_dtor_FUN_00533c90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00533c91
    TEST byte ptr [ESP + 0xc],0x4       ; 00533c95
    JNZ 0x00533cb6                      ; 00533c9a
        ;   XREF to: 00533cb6 (CONDITIONAL_JUMP)  ; LAB_00533cb6
    PUSH 0x1                            ; 00533c9c
    PUSH EBX                            ; 00533c9e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00533c9f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00533ca4
    MOV DL,byte ptr [ESP + 0xc]         ; 00533ca7
    MOV EBX,EAX                         ; 00533cab
    TEST DL,0x2                         ; 00533cad
    JNZ 0x00533cd1                      ; 00533cb0
        ;   XREF to: 00533cd1 (CONDITIONAL_JUMP)  ; LAB_00533cd1
    MOV EAX,EBX                         ; 00533cb2
    POP EBX                             ; 00533cb4
    RET                                 ; 00533cb5
    PUSH 0x5a2410                       ; 00533cb6 | g_CSpikeTypeInfo_005a2410
        ;   Label: LAB_00533cb6
    PUSH EBX                            ; 00533cbb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00533cbc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00533cc1
    PUSH EAX                            ; 00533cc4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00533cc5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00533cca
    MOV EAX,EBX                         ; 00533ccd
    POP EBX                             ; 00533ccf
    RET                                 ; 00533cd0
    PUSH EAX                            ; 00533cd1
        ;   Label: LAB_00533cd1
    CALL crt_unknown.c_FUN_00564494     ; 00533cd2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00533cd7
    MOV EAX,EBX                         ; 00533cda
    POP EBX                             ; 00533cdc
    RET                                 ; 00533cdd

