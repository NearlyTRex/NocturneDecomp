; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00534c10(CStairs *this_ptr,uint flags)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStairsTypeInfo_005a2590
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_stairs.cpp_SFly_arrdtor_FUN_00534c80
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534c10
        ;   Label: core_stairs.cpp_CStairs_dtor_FUN_00534c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00534c11
    TEST byte ptr [ESP + 0xc],0x4       ; 00534c15
    JNZ 0x00534c4d                      ; 00534c1a
        ;   XREF to: 00534c4d (CONDITIONAL_JUMP)  ; LAB_00534c4d
    PUSH 0x0                            ; 00534c1c
    ADD EBX,0x168                       ; 00534c1e
    PUSH EBX                            ; 00534c24
    CALL core_stairs.cpp_SFly_arrdtor_FUN_00534c80 ; 00534c25
        ;   XREF to: 00534c80 (UNCONDITIONAL_CALL)  ; SFly * core_stairs.cpp_SFly_arrdtor_FUN_00534c80(SFly * objs, uint flags)
    ADD ESP,0x8                         ; 00534c2a
    PUSH 0x1                            ; 00534c2d
    LEA EBX,[EAX + 0xfffffe98]          ; 00534c2f
    PUSH EBX                            ; 00534c35
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00534c36
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00534c3b
    MOV DL,byte ptr [ESP + 0xc]         ; 00534c3e
    MOV EBX,EAX                         ; 00534c42
    TEST DL,0x2                         ; 00534c44
    JNZ 0x00534c68                      ; 00534c47
        ;   XREF to: 00534c68 (CONDITIONAL_JUMP)  ; LAB_00534c68
    MOV EAX,EBX                         ; 00534c49
    POP EBX                             ; 00534c4b
    RET                                 ; 00534c4c
    PUSH 0x5a2590                       ; 00534c4d | g_CStairsTypeInfo_005a2590
        ;   Label: LAB_00534c4d
    PUSH EBX                            ; 00534c52
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00534c53
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00534c58
    PUSH EAX                            ; 00534c5b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00534c5c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00534c61
    MOV EAX,EBX                         ; 00534c64
    POP EBX                             ; 00534c66
    RET                                 ; 00534c67
    PUSH EAX                            ; 00534c68
        ;   Label: LAB_00534c68
    CALL crt_unknown.c_FUN_00564494     ; 00534c69
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00534c6e
    MOV EAX,EBX                         ; 00534c71
    POP EBX                             ; 00534c73
    RET                                 ; 00534c74

