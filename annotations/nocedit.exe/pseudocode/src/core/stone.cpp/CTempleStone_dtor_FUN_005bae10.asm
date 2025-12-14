; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTempleStone * core_stone.cpp_CTempleStone_dtor_FUN_005bae10(CTempleStone * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CTempleStoneTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bae10
        ;   Label: core_stone.cpp_CTempleStone_dtor_FUN_005bae10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bae11
    TEST byte ptr [ESP + 0xc],0x4       ; 005bae15
    JNZ 0x005bae4d                      ; 005bae1a
        ;   XREF to: 005bae4d (CONDITIONAL_JUMP)  ; LAB_005bae4d
    PUSH 0x0                            ; 005bae1c
    ADD EBX,0x394                       ; 005bae1e
    PUSH EBX                            ; 005bae24
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 005bae25
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr)
    ADD ESP,0x8                         ; 005bae2a
    PUSH 0x1                            ; 005bae2d
    LEA EBX,[EAX + 0xfffffc6c]          ; 005bae2f
    PUSH EBX                            ; 005bae35
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005bae36
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 005bae3b
    MOV DL,byte ptr [ESP + 0xc]         ; 005bae3e
    MOV EBX,EAX                         ; 005bae42
    TEST DL,0x2                         ; 005bae44
    JNZ 0x005bae68                      ; 005bae47
        ;   XREF to: 005bae68 (CONDITIONAL_JUMP)  ; LAB_005bae68
    MOV EAX,EBX                         ; 005bae49
    POP EBX                             ; 005bae4b
    RET                                 ; 005bae4c
    PUSH 0x6636f0                       ; 005bae4d | g_CTempleStoneTypeInfo
        ;   Label: LAB_005bae4d
    PUSH EBX                            ; 005bae52
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005bae53
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005bae58
    PUSH EAX                            ; 005bae5b
    CALL crt_memory.c_free_FUN_005fe659 ; 005bae5c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005bae61
    MOV EAX,EBX                         ; 005bae64
    POP EBX                             ; 005bae66
    RET                                 ; 005bae67
    PUSH EAX                            ; 005bae68
        ;   Label: LAB_005bae68
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005bae69
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005bae6e
    MOV EAX,EBX                         ; 005bae71
    POP EBX                             ; 005bae73
    RET                                 ; 005bae74

