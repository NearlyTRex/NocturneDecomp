; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0059af00(CTrash *this_ptr,uint flags)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrashTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059af00
        ;   Label: core_trash.cpp_CTrash_dtor_FUN_0059af00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059af01
    TEST byte ptr [ESP + 0xc],0x4       ; 0059af05
    JNZ 0x0059af26                      ; 0059af0a
        ;   XREF to: 0059af26 (CONDITIONAL_JUMP)  ; LAB_0059af26
    PUSH 0x1                            ; 0059af0c
    PUSH EBX                            ; 0059af0e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0059af0f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059af14
    MOV DL,byte ptr [ESP + 0xc]         ; 0059af17
    MOV EBX,EAX                         ; 0059af1b
    TEST DL,0x2                         ; 0059af1d
    JNZ 0x0059af41                      ; 0059af20
        ;   XREF to: 0059af41 (CONDITIONAL_JUMP)  ; LAB_0059af41
    MOV EAX,EBX                         ; 0059af22
    POP EBX                             ; 0059af24
    RET                                 ; 0059af25
    PUSH 0x607190                       ; 0059af26 | g_CTrashTypeInfo
        ;   Label: LAB_0059af26
    PUSH EBX                            ; 0059af2b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0059af2c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0059af31
    PUSH EAX                            ; 0059af34
    CALL crt_unknown.c_FUN_005c0336     ; 0059af35
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0059af3a
    MOV EAX,EBX                         ; 0059af3d
    POP EBX                             ; 0059af3f
    RET                                 ; 0059af40
    PUSH EAX                            ; 0059af41
        ;   Label: LAB_0059af41
    CALL crt_unknown.c_FUN_005c0344     ; 0059af42
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0059af47
    MOV EAX,EBX                         ; 0059af4a
    POP EBX                             ; 0059af4c
    RET                                 ; 0059af4d

