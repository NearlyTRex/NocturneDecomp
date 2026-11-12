; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004ea5a0(CHealthItem *this_ptr,uint flags)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHealthItemTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea5a0
        ;   Label: core_health.cpp_CHealthItem_dtor_FUN_004ea5a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea5a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ea5a5
    JNZ 0x004ea5c6                      ; 004ea5aa
        ;   XREF to: 004ea5c6 (CONDITIONAL_JUMP)  ; LAB_004ea5c6
    PUSH 0x1                            ; 004ea5ac
    PUSH EBX                            ; 004ea5ae
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ea5af
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ea5b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004ea5b7
    MOV EBX,EAX                         ; 004ea5bb
    TEST DL,0x2                         ; 004ea5bd
    JNZ 0x004ea5e1                      ; 004ea5c0
        ;   XREF to: 004ea5e1 (CONDITIONAL_JUMP)  ; LAB_004ea5e1
    MOV EAX,EBX                         ; 004ea5c2
    POP EBX                             ; 004ea5c4
    RET                                 ; 004ea5c5
    PUSH 0x601cf0                       ; 004ea5c6 | g_CHealthItemTypeInfo
        ;   Label: LAB_004ea5c6
    PUSH EBX                            ; 004ea5cb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ea5cc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004ea5d1
    PUSH EAX                            ; 004ea5d4
    CALL crt_unknown.c_FUN_005c0336     ; 004ea5d5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ea5da
    MOV EAX,EBX                         ; 004ea5dd
    POP EBX                             ; 004ea5df
    RET                                 ; 004ea5e0
    PUSH EAX                            ; 004ea5e1
        ;   Label: LAB_004ea5e1
    CALL crt_unknown.c_FUN_005c0344     ; 004ea5e2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ea5e7
    MOV EAX,EBX                         ; 004ea5ea
    POP EBX                             ; 004ea5ec
    RET                                 ; 004ea5ed

