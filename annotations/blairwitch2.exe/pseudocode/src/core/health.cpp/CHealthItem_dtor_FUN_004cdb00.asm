; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * core_health_cpp_CHealthItem_dtor_FUN_004cdb00(CHealthItem *this_ptr,uint flags)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CHealthItemVTable
;   WatcomTypeInfo g_CHealthItemTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdb00
        ;   Label: core_health.cpp_CHealthItem_dtor_FUN_004cdb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cdb01
    TEST byte ptr [ESP + 0xc],0x4       ; 004cdb05
    JNZ 0x004cdb30                      ; 004cdb0a
        ;   XREF to: 004cdb30 (CONDITIONAL_JUMP)  ; LAB_004cdb30
    PUSH 0x1                            ; 004cdb0c
    PUSH EBX                            ; 004cdb0e
    MOV dword ptr [EBX + 0x2b0],0x5f8144 ; 004cdb0f | g_CHealthItemVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004cdb19
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cdb1e
    MOV DL,byte ptr [ESP + 0xc]         ; 004cdb21
    MOV EBX,EAX                         ; 004cdb25
    TEST DL,0x2                         ; 004cdb27
    JNZ 0x004cdb4b                      ; 004cdb2a
        ;   XREF to: 004cdb4b (CONDITIONAL_JUMP)  ; LAB_004cdb4b
    MOV EAX,EBX                         ; 004cdb2c
    POP EBX                             ; 004cdb2e
    RET                                 ; 004cdb2f
    PUSH 0x5f8230                       ; 004cdb30 | g_CHealthItemTypeInfo
        ;   Label: LAB_004cdb30
    PUSH EBX                            ; 004cdb35
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004cdb36
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004cdb3b
    PUSH EAX                            ; 004cdb3e
    CALL crt_unknown.c_FUN_005b7fce     ; 004cdb3f
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004cdb44
    MOV EAX,EBX                         ; 004cdb47
    POP EBX                             ; 004cdb49
    RET                                 ; 004cdb4a
    PUSH EAX                            ; 004cdb4b
        ;   Label: LAB_004cdb4b
    CALL crt_unknown.c_FUN_005b7fdc     ; 004cdb4c
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004cdb51
    MOV EAX,EBX                         ; 004cdb54
    POP EBX                             ; 004cdb56
    RET                                 ; 004cdb57

