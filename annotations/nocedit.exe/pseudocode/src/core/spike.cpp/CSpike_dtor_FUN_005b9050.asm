; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005b9050(CSpike *this_ptr,uint d1,uint d2)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpikeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9050
        ;   Label: core_spike.cpp_CSpike_dtor_FUN_005b9050
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b9051
    TEST byte ptr [ESP + 0xc],0x4       ; 005b9055
    JNZ 0x005b9076                      ; 005b905a
        ;   XREF to: 005b9076 (CONDITIONAL_JUMP)  ; LAB_005b9076
    PUSH 0x1                            ; 005b905c
    PUSH EBX                            ; 005b905e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005b905f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 005b9064
    MOV DL,byte ptr [ESP + 0xc]         ; 005b9067
    MOV EBX,EAX                         ; 005b906b
    TEST DL,0x2                         ; 005b906d
    JNZ 0x005b9091                      ; 005b9070
        ;   XREF to: 005b9091 (CONDITIONAL_JUMP)  ; LAB_005b9091
    MOV EAX,EBX                         ; 005b9072
    POP EBX                             ; 005b9074
    RET                                 ; 005b9075
    PUSH 0x663450                       ; 005b9076 | g_CSpikeTypeInfo
        ;   Label: LAB_005b9076
    PUSH EBX                            ; 005b907b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005b907c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005b9081
    PUSH EAX                            ; 005b9084
    CALL crt_memory.c_free_FUN_005fe659 ; 005b9085
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005b908a
    MOV EAX,EBX                         ; 005b908d
    POP EBX                             ; 005b908f
    RET                                 ; 005b9090
    PUSH EAX                            ; 005b9091
        ;   Label: LAB_005b9091
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005b9092
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005b9097
    MOV EAX,EBX                         ; 005b909a
    POP EBX                             ; 005b909c
    RET                                 ; 005b909d

