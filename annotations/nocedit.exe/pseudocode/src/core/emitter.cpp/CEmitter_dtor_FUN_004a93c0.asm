; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_004a93c0(CEmitter *this_ptr,uint flags)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEmitterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a93c0
        ;   Label: core_emitter.cpp_CEmitter_dtor_FUN_004a93c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a93c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a93c5
    JNZ 0x004a93e6                      ; 004a93ca
        ;   XREF to: 004a93e6 (CONDITIONAL_JUMP)  ; LAB_004a93e6
    PUSH 0x1                            ; 004a93cc
    PUSH EBX                            ; 004a93ce
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004a93cf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a93d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a93d7
    MOV EBX,EAX                         ; 004a93db
    TEST DL,0x2                         ; 004a93dd
    JNZ 0x004a9401                      ; 004a93e0
        ;   XREF to: 004a9401 (CONDITIONAL_JUMP)  ; LAB_004a9401
    MOV EAX,EBX                         ; 004a93e2
    POP EBX                             ; 004a93e4
    RET                                 ; 004a93e5
    PUSH 0x65d790                       ; 004a93e6 | g_CEmitterTypeInfo
        ;   Label: LAB_004a93e6
    PUSH EBX                            ; 004a93eb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004a93ec
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a93f1
    PUSH EAX                            ; 004a93f4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004a93f5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004a93fa
    MOV EAX,EBX                         ; 004a93fd
    POP EBX                             ; 004a93ff
    RET                                 ; 004a9400
    PUSH EAX                            ; 004a9401
        ;   Label: LAB_004a9401
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004a9402
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004a9407
    MOV EAX,EBX                         ; 004a940a
    POP EBX                             ; 004a940c
    RET                                 ; 004a940d

