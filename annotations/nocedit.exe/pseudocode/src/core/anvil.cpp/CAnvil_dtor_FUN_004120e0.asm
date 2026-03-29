; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_004120e0(CAnvil *this_ptr,uint flags)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAnvilTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004120e0
        ;   Label: core_anvil.cpp_CAnvil_dtor_FUN_004120e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004120e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004120e5
    JNZ 0x00412106                      ; 004120ea
        ;   XREF to: 00412106 (CONDITIONAL_JUMP)  ; LAB_00412106
    PUSH 0x1                            ; 004120ec
    PUSH EBX                            ; 004120ee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004120ef
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004120f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004120f7
    MOV EBX,EAX                         ; 004120fb
    TEST DL,0x2                         ; 004120fd
    JNZ 0x00412121                      ; 00412100
        ;   XREF to: 00412121 (CONDITIONAL_JUMP)  ; LAB_00412121
    MOV EAX,EBX                         ; 00412102
    POP EBX                             ; 00412104
    RET                                 ; 00412105
    PUSH 0x659cf0                       ; 00412106 | g_CAnvilTypeInfo
        ;   Label: LAB_00412106
    PUSH EBX                            ; 0041210b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0041210c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00412111
    PUSH EAX                            ; 00412114
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00412115
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0041211a
    MOV EAX,EBX                         ; 0041211d
    POP EBX                             ; 0041211f
    RET                                 ; 00412120
    PUSH EAX                            ; 00412121
        ;   Label: LAB_00412121
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00412122
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00412127
    MOV EAX,EBX                         ; 0041212a
    POP EBX                             ; 0041212c
    RET                                 ; 0041212d

