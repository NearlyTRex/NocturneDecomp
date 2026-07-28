; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_door_cpp_FUN_004566b0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDoorTypeInfo_0059c360
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004566b0
        ;   Label: core_door.cpp_FUN_004566b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004566b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004566b5
    JNZ 0x004566d6                      ; 004566ba
        ;   XREF to: 004566d6 (CONDITIONAL_JUMP)  ; LAB_004566d6
    PUSH 0x1                            ; 004566bc
    PUSH EBX                            ; 004566be
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004566bf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004566c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004566c7
    MOV EBX,EAX                         ; 004566cb
    TEST DL,0x2                         ; 004566cd
    JNZ 0x004566f1                      ; 004566d0
        ;   XREF to: 004566f1 (CONDITIONAL_JUMP)  ; LAB_004566f1
    MOV EAX,EBX                         ; 004566d2
    POP EBX                             ; 004566d4
    RET                                 ; 004566d5
    PUSH 0x59c360                       ; 004566d6 | g_CDoorTypeInfo_0059c360
        ;   Label: LAB_004566d6
    PUSH EBX                            ; 004566db
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004566dc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004566e1
    PUSH EAX                            ; 004566e4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004566e5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004566ea
    MOV EAX,EBX                         ; 004566ed
    POP EBX                             ; 004566ef
    RET                                 ; 004566f0
    PUSH EAX                            ; 004566f1
        ;   Label: LAB_004566f1
    CALL crt_unknown.c_FUN_00564494     ; 004566f2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004566f7
    MOV EAX,EBX                         ; 004566fa
    POP EBX                             ; 004566fc
    RET                                 ; 004566fd

