; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CChain * core_chain.cpp_CChain_dtor_FUN_00431360(CChain * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CChainTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_chain.cpp_FUN_004313f0
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431360
        ;   Label: core_chain.cpp_CChain_dtor_FUN_00431360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00431361
    TEST byte ptr [ESP + 0xc],0x4       ; 00431365
    JNZ 0x0043139d                      ; 0043136a
        ;   XREF to: 0043139d (CONDITIONAL_JUMP)  ; LAB_0043139d
    PUSH 0x0                            ; 0043136c
    ADD EBX,0x28c                       ; 0043136e
    PUSH EBX                            ; 00431374
    CALL core_chain.cpp_FUN_004313f0    ; 00431375
        ;   XREF to: 004313f0 (UNCONDITIONAL_CALL)  ; int core_chain.cpp_FUN_004313f0(SChainVertex * * objs)
    ADD ESP,0x8                         ; 0043137a
    PUSH 0x1                            ; 0043137d
    LEA EBX,[EAX + 0xfffffd74]          ; 0043137f
    PUSH EBX                            ; 00431385
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00431386
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0043138b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043138e
    MOV EBX,EAX                         ; 00431392
    TEST DL,0x2                         ; 00431394
    JNZ 0x004313b8                      ; 00431397
        ;   XREF to: 004313b8 (CONDITIONAL_JUMP)  ; LAB_004313b8
    MOV EAX,EBX                         ; 00431399
    POP EBX                             ; 0043139b
    RET                                 ; 0043139c
    PUSH 0x65bb10                       ; 0043139d | g_CChainTypeInfo
        ;   Label: LAB_0043139d
    PUSH EBX                            ; 004313a2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004313a3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004313a8
    PUSH EAX                            ; 004313ab
    CALL crt_memory.c_free_FUN_005fe659 ; 004313ac
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004313b1
    MOV EAX,EBX                         ; 004313b4
    POP EBX                             ; 004313b6
    RET                                 ; 004313b7
    PUSH EAX                            ; 004313b8
        ;   Label: LAB_004313b8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004313b9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004313be
    MOV EAX,EBX                         ; 004313c1
    POP EBX                             ; 004313c3
    RET                                 ; 004313c4

