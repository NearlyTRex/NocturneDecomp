; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00478d70(CDoor *this_ptr,uint flags)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDoorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478d70
        ;   Label: core_door.cpp_CDoor_dtor_FUN_00478d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478d71
    TEST byte ptr [ESP + 0xc],0x4       ; 00478d75
    JNZ 0x00478d96                      ; 00478d7a
        ;   XREF to: 00478d96 (CONDITIONAL_JUMP)  ; LAB_00478d96
    PUSH 0x1                            ; 00478d7c
    PUSH EBX                            ; 00478d7e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00478d7f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00478d84
    MOV DL,byte ptr [ESP + 0xc]         ; 00478d87
    MOV EBX,EAX                         ; 00478d8b
    TEST DL,0x2                         ; 00478d8d
    JNZ 0x00478db1                      ; 00478d90
        ;   XREF to: 00478db1 (CONDITIONAL_JUMP)  ; LAB_00478db1
    MOV EAX,EBX                         ; 00478d92
    POP EBX                             ; 00478d94
    RET                                 ; 00478d95
    PUSH 0x5ff110                       ; 00478d96 | g_CDoorTypeInfo
        ;   Label: LAB_00478d96
    PUSH EBX                            ; 00478d9b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00478d9c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00478da1
    PUSH EAX                            ; 00478da4
    CALL crt_unknown.c_FUN_005c0336     ; 00478da5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00478daa
    MOV EAX,EBX                         ; 00478dad
    POP EBX                             ; 00478daf
    RET                                 ; 00478db0
    PUSH EAX                            ; 00478db1
        ;   Label: LAB_00478db1
    CALL crt_unknown.c_FUN_005c0344     ; 00478db2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00478db7
    MOV EAX,EBX                         ; 00478dba
    POP EBX                             ; 00478dbc
    RET                                 ; 00478dbd

