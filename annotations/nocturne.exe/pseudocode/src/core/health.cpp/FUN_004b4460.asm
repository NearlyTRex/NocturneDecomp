; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_health_cpp_FUN_004b4460(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CHealthItemTypeInfo_0059eaf0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4460
        ;   Label: core_health.cpp_FUN_004b4460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b4461
    TEST byte ptr [ESP + 0xc],0x4       ; 004b4465
    JNZ 0x004b4486                      ; 004b446a
        ;   XREF to: 004b4486 (CONDITIONAL_JUMP)  ; LAB_004b4486
    PUSH 0x1                            ; 004b446c
    PUSH EBX                            ; 004b446e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b446f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b4474
    MOV DL,byte ptr [ESP + 0xc]         ; 004b4477
    MOV EBX,EAX                         ; 004b447b
    TEST DL,0x2                         ; 004b447d
    JNZ 0x004b44a1                      ; 004b4480
        ;   XREF to: 004b44a1 (CONDITIONAL_JUMP)  ; LAB_004b44a1
    MOV EAX,EBX                         ; 004b4482
    POP EBX                             ; 004b4484
    RET                                 ; 004b4485
    PUSH 0x59eaf0                       ; 004b4486 | g_CHealthItemTypeInfo_0059eaf0
        ;   Label: LAB_004b4486
    PUSH EBX                            ; 004b448b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b448c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004b4491
    PUSH EAX                            ; 004b4494
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b4495
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004b449a
    MOV EAX,EBX                         ; 004b449d
    POP EBX                             ; 004b449f
    RET                                 ; 004b44a0
    PUSH EAX                            ; 004b44a1
        ;   Label: LAB_004b44a1
    CALL crt_unknown.c_FUN_00564494     ; 004b44a2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004b44a7
    MOV EAX,EBX                         ; 004b44aa
    POP EBX                             ; 004b44ac
    RET                                 ; 004b44ad

