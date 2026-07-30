; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_backgnd_cpp_CBackgroundActor_dtor_FUN_004100f0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBackgroundActorTypeInfo_00599a80
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004100f0
        ;   Label: core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004100f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004100f5
    JNZ 0x00410116                      ; 004100fa
        ;   XREF to: 00410116 (CONDITIONAL_JUMP)  ; LAB_00410116
    PUSH 0x1                            ; 004100fc
    PUSH EBX                            ; 004100fe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004100ff
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00410104
    MOV DL,byte ptr [ESP + 0xc]         ; 00410107
    MOV EBX,EAX                         ; 0041010b
    TEST DL,0x2                         ; 0041010d
    JNZ 0x00410131                      ; 00410110
        ;   XREF to: 00410131 (CONDITIONAL_JUMP)  ; LAB_00410131
    MOV EAX,EBX                         ; 00410112
    POP EBX                             ; 00410114
    RET                                 ; 00410115
    PUSH 0x599a80                       ; 00410116 | g_CBackgroundActorTypeInfo_00599a80
        ;   Label: LAB_00410116
    PUSH EBX                            ; 0041011b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041011c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00410121
    PUSH EAX                            ; 00410124
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00410125
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0041012a
    MOV EAX,EBX                         ; 0041012d
    POP EBX                             ; 0041012f
    RET                                 ; 00410130
    PUSH EAX                            ; 00410131
        ;   Label: LAB_00410131
    CALL crt_unknown.c_FUN_00564494     ; 00410132
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00410137
    MOV EAX,EBX                         ; 0041013a
    POP EBX                             ; 0041013c
    RET                                 ; 0041013d

