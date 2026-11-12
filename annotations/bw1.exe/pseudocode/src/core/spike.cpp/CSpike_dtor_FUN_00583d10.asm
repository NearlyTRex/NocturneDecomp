; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_00583d10(CSpike *this_ptr,uint flags)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpikeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583d10
        ;   Label: core_spike.cpp_CSpike_dtor_FUN_00583d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00583d11
    TEST byte ptr [ESP + 0xc],0x4       ; 00583d15
    JNZ 0x00583d36                      ; 00583d1a
        ;   XREF to: 00583d36 (CONDITIONAL_JUMP)  ; LAB_00583d36
    PUSH 0x1                            ; 00583d1c
    PUSH EBX                            ; 00583d1e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00583d1f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00583d24
    MOV DL,byte ptr [ESP + 0xc]         ; 00583d27
    MOV EBX,EAX                         ; 00583d2b
    TEST DL,0x2                         ; 00583d2d
    JNZ 0x00583d51                      ; 00583d30
        ;   XREF to: 00583d51 (CONDITIONAL_JUMP)  ; LAB_00583d51
    MOV EAX,EBX                         ; 00583d32
    POP EBX                             ; 00583d34
    RET                                 ; 00583d35
    PUSH 0x605dc0                       ; 00583d36 | g_CSpikeTypeInfo
        ;   Label: LAB_00583d36
    PUSH EBX                            ; 00583d3b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00583d3c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00583d41
    PUSH EAX                            ; 00583d44
    CALL crt_unknown.c_FUN_005c0336     ; 00583d45
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00583d4a
    MOV EAX,EBX                         ; 00583d4d
    POP EBX                             ; 00583d4f
    RET                                 ; 00583d50
    PUSH EAX                            ; 00583d51
        ;   Label: LAB_00583d51
    CALL crt_unknown.c_FUN_005c0344     ; 00583d52
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00583d57
    MOV EAX,EBX                         ; 00583d5a
    POP EBX                             ; 00583d5c
    RET                                 ; 00583d5d

