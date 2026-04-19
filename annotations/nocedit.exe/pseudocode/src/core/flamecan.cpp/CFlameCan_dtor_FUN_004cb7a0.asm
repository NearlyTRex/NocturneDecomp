; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004cb7a0(CFlameCan *this_ptr,uint flags)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameCanTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb7a0
        ;   Label: core_flamecan.cpp_CFlameCan_dtor_FUN_004cb7a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cb7a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cb7a5
    JNZ 0x004cb7dd                      ; 004cb7aa
        ;   XREF to: 004cb7dd (CONDITIONAL_JUMP)  ; LAB_004cb7dd
    PUSH 0x1                            ; 004cb7ac
    ADD EBX,0x340                       ; 004cb7ae
    PUSH EBX                            ; 004cb7b4
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004cb7b5
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cb7ba
    PUSH 0x1                            ; 004cb7bd
    LEA EBX,[EAX + 0xfffffcc0]          ; 004cb7bf
    PUSH EBX                            ; 004cb7c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004cb7c6
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cb7cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004cb7ce
    MOV EBX,EAX                         ; 004cb7d2
    TEST DL,0x2                         ; 004cb7d4
    JNZ 0x004cb7f8                      ; 004cb7d7
        ;   XREF to: 004cb7f8 (CONDITIONAL_JUMP)  ; LAB_004cb7f8
    MOV EAX,EBX                         ; 004cb7d9
    POP EBX                             ; 004cb7db
    RET                                 ; 004cb7dc
    PUSH 0x65e230                       ; 004cb7dd | g_CFlameCanTypeInfo
        ;   Label: LAB_004cb7dd
    PUSH EBX                            ; 004cb7e2
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004cb7e3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cb7e8
    PUSH EAX                            ; 004cb7eb
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004cb7ec
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004cb7f1
    MOV EAX,EBX                         ; 004cb7f4
    POP EBX                             ; 004cb7f6
    RET                                 ; 004cb7f7
    PUSH EAX                            ; 004cb7f8
        ;   Label: LAB_004cb7f8
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004cb7f9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004cb7fe
    MOV EAX,EBX                         ; 004cb801
    POP EBX                             ; 004cb803
    RET                                 ; 004cb804

