; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890 (CMansionPuzzleCircle *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
; uint             Stack[0x18]:4   d5
;
; Referenced Globals:
;   WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_manpuz.cpp_freeGems_FUN_0050bab0
;   core_manpuz.cpp_freePanels_FUN_0050ba90
;   core_manpuz.cpp_freeReflectors_FUN_0050bad0
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b890
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050b891
    TEST byte ptr [ESP + 0xc],0x4       ; 0050b895
    JNZ 0x0050b8ed                      ; 0050b89a
        ;   XREF to: 0050b8ed (CONDITIONAL_JUMP)  ; LAB_0050b8ed
    PUSH 0x0                            ; 0050b89c
    ADD EBX,0x1340                      ; 0050b89e
    PUSH EBX                            ; 0050b8a4
    CALL core_manpuz.cpp_freeReflectors_FUN_0050bad0 ; 0050b8a5
        ;   XREF to: 0050bad0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_freeReflectors_FUN_0050bad0(SReflector * * objs)
    ADD ESP,0x8                         ; 0050b8aa
    PUSH 0x0                            ; 0050b8ad
    SUB EAX,0x8a0                       ; 0050b8af
    PUSH EAX                            ; 0050b8b4
    CALL core_manpuz.cpp_freeGems_FUN_0050bab0 ; 0050b8b5
        ;   XREF to: 0050bab0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_freeGems_FUN_0050bab0(SGem * * objs)
    ADD ESP,0x8                         ; 0050b8ba
    PUSH 0x0                            ; 0050b8bd
    SUB EAX,0x4b0                       ; 0050b8bf
    PUSH EAX                            ; 0050b8c4
    CALL core_manpuz.cpp_freePanels_FUN_0050ba90 ; 0050b8c5
        ;   XREF to: 0050ba90 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_freePanels_FUN_0050ba90(SPanel * * objs)
    ADD ESP,0x8                         ; 0050b8ca
    PUSH 0x1                            ; 0050b8cd
    LEA EBX,[EAX + 0xfffffa10]          ; 0050b8cf
    PUSH EBX                            ; 0050b8d5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0050b8d6
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0050b8db
    MOV DL,byte ptr [ESP + 0xc]         ; 0050b8de
    MOV EBX,EAX                         ; 0050b8e2
    TEST DL,0x2                         ; 0050b8e4
    JNZ 0x0050b908                      ; 0050b8e7
        ;   XREF to: 0050b908 (CONDITIONAL_JUMP)  ; LAB_0050b908
    MOV EAX,EBX                         ; 0050b8e9
    POP EBX                             ; 0050b8eb
    RET                                 ; 0050b8ec
    PUSH 0x661000                       ; 0050b8ed | g_CMansionPuzzleCircleTypeInfo
        ;   Label: LAB_0050b8ed
    PUSH EBX                            ; 0050b8f2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0050b8f3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0050b8f8
    PUSH EAX                            ; 0050b8fb
    CALL crt_memory.c_free_FUN_005fe659 ; 0050b8fc
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0050b901
    MOV EAX,EBX                         ; 0050b904
    POP EBX                             ; 0050b906
    RET                                 ; 0050b907
    PUSH EAX                            ; 0050b908
        ;   Label: LAB_0050b908
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0050b909
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0050b90e
    MOV EAX,EBX                         ; 0050b911
    POP EBX                             ; 0050b913
    RET                                 ; 0050b914

