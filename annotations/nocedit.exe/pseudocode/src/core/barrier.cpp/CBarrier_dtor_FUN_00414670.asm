; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBarrier * core_barrier.cpp_CBarrier_dtor_FUN_00414670(CBarrier * this_ptr, uint d1, uint d2)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CBarrierTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414670
        ;   Label: core_barrier.cpp_CBarrier_dtor_FUN_00414670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414671
    TEST byte ptr [ESP + 0xc],0x4       ; 00414675
    JNZ 0x00414696                      ; 0041467a
        ;   XREF to: 00414696 (CONDITIONAL_JUMP)  ; LAB_00414696
    PUSH 0x1                            ; 0041467c
    PUSH EBX                            ; 0041467e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041467f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 00414684
    MOV DL,byte ptr [ESP + 0xc]         ; 00414687
    MOV EBX,EAX                         ; 0041468b
    TEST DL,0x2                         ; 0041468d
    JNZ 0x004146b1                      ; 00414690
        ;   XREF to: 004146b1 (CONDITIONAL_JUMP)  ; LAB_004146b1
    MOV EAX,EBX                         ; 00414692
    POP EBX                             ; 00414694
    RET                                 ; 00414695
    PUSH 0x65a440                       ; 00414696 | g_CBarrierTypeInfo
        ;   Label: LAB_00414696
    PUSH EBX                            ; 0041469b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0041469c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004146a1
    PUSH EAX                            ; 004146a4
    CALL crt_memory.c_free_FUN_005fe659 ; 004146a5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004146aa
    MOV EAX,EBX                         ; 004146ad
    POP EBX                             ; 004146af
    RET                                 ; 004146b0
    PUSH EAX                            ; 004146b1
        ;   Label: LAB_004146b1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004146b2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004146b7
    MOV EAX,EBX                         ; 004146ba
    POP EBX                             ; 004146bc
    RET                                 ; 004146bd

