; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_0056f410(CTrigger *this_ptr,uint flags)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTriggerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f410
        ;   Label: core_trigger.cpp_CTrigger_dtor_FUN_0056f410
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f411
    TEST byte ptr [ESP + 0xc],0x4       ; 0056f415
    JNZ 0x0056f436                      ; 0056f41a
        ;   XREF to: 0056f436 (CONDITIONAL_JUMP)  ; LAB_0056f436
    PUSH 0x1                            ; 0056f41c
    PUSH EBX                            ; 0056f41e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0056f41f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056f424
    MOV DL,byte ptr [ESP + 0xc]         ; 0056f427
    MOV EBX,EAX                         ; 0056f42b
    TEST DL,0x2                         ; 0056f42d
    JNZ 0x0056f451                      ; 0056f430
        ;   XREF to: 0056f451 (CONDITIONAL_JUMP)  ; LAB_0056f451
    MOV EAX,EBX                         ; 0056f432
    POP EBX                             ; 0056f434
    RET                                 ; 0056f435
    PUSH 0x5e59b0                       ; 0056f436 | g_CTriggerTypeInfo
        ;   Label: LAB_0056f436
    PUSH EBX                            ; 0056f43b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0056f43c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0056f441
    PUSH EAX                            ; 0056f444
    CALL crt_unknown.c_FUN_005a30b6     ; 0056f445
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0056f44a
    MOV EAX,EBX                         ; 0056f44d
    POP EBX                             ; 0056f44f
    RET                                 ; 0056f450
    PUSH EAX                            ; 0056f451
        ;   Label: LAB_0056f451
    CALL crt_unknown.c_FUN_005a30c4     ; 0056f452
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0056f457
    MOV EAX,EBX                         ; 0056f45a
    POP EBX                             ; 0056f45c
    RET                                 ; 0056f45d

