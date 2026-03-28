; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint flags)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStairsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_stairs.cpp_CDemonTriangle_arrdtor_FUN_005bac80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bac10
        ;   Label: core_stairs.cpp_CStairs_dtor_FUN_005bac10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bac11
    TEST byte ptr [ESP + 0xc],0x4       ; 005bac15
    JNZ 0x005bac4d                      ; 005bac1a
        ;   XREF to: 005bac4d (CONDITIONAL_JUMP)  ; LAB_005bac4d
    PUSH 0x0                            ; 005bac1c
    ADD EBX,0x170                       ; 005bac1e
    PUSH EBX                            ; 005bac24
    CALL core_stairs.cpp_CDemonTriangle_arrdtor_FUN_005bac80 ; 005bac25
        ;   XREF to: 005bac80 (UNCONDITIONAL_CALL)  ; CDemonTriangle * core_stairs.cpp_CDemonTriangle_arrdtor_FUN_005bac80(CDemonTriangle * objs, uint flags)
    ADD ESP,0x8                         ; 005bac2a
    PUSH 0x1                            ; 005bac2d
    LEA EBX,[EAX + 0xfffffe90]          ; 005bac2f
    PUSH EBX                            ; 005bac35
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005bac36
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005bac3b
    MOV DL,byte ptr [ESP + 0xc]         ; 005bac3e
    MOV EBX,EAX                         ; 005bac42
    TEST DL,0x2                         ; 005bac44
    JNZ 0x005bac68                      ; 005bac47
        ;   XREF to: 005bac68 (CONDITIONAL_JUMP)  ; LAB_005bac68
    MOV EAX,EBX                         ; 005bac49
    POP EBX                             ; 005bac4b
    RET                                 ; 005bac4c
    PUSH 0x6635c0                       ; 005bac4d | g_CStairsTypeInfo
        ;   Label: LAB_005bac4d
    PUSH EBX                            ; 005bac52
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005bac53
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005bac58
    PUSH EAX                            ; 005bac5b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005bac5c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005bac61
    MOV EAX,EBX                         ; 005bac64
    POP EBX                             ; 005bac66
    RET                                 ; 005bac67
    PUSH EAX                            ; 005bac68
        ;   Label: LAB_005bac68
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005bac69
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005bac6e
    MOV EAX,EBX                         ; 005bac71
    POP EBX                             ; 005bac73
    RET                                 ; 005bac74

