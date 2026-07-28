; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_pendulum_cpp_FUN_004f3e40(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CPendulumTypeInfo_005a1320
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3e40
        ;   Label: core_pendulum.cpp_FUN_004f3e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3e41
    TEST byte ptr [ESP + 0xc],0x4       ; 004f3e45
    JNZ 0x004f3e66                      ; 004f3e4a
        ;   XREF to: 004f3e66 (CONDITIONAL_JUMP)  ; LAB_004f3e66
    PUSH 0x1                            ; 004f3e4c
    PUSH EBX                            ; 004f3e4e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004f3e4f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f3e54
    MOV DL,byte ptr [ESP + 0xc]         ; 004f3e57
    MOV EBX,EAX                         ; 004f3e5b
    TEST DL,0x2                         ; 004f3e5d
    JNZ 0x004f3e81                      ; 004f3e60
        ;   XREF to: 004f3e81 (CONDITIONAL_JUMP)  ; LAB_004f3e81
    MOV EAX,EBX                         ; 004f3e62
    POP EBX                             ; 004f3e64
    RET                                 ; 004f3e65
    PUSH 0x5a1320                       ; 004f3e66 | g_CPendulumTypeInfo_005a1320
        ;   Label: LAB_004f3e66
    PUSH EBX                            ; 004f3e6b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004f3e6c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f3e71
    PUSH EAX                            ; 004f3e74
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004f3e75
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004f3e7a
    MOV EAX,EBX                         ; 004f3e7d
    POP EBX                             ; 004f3e7f
    RET                                 ; 004f3e80
    PUSH EAX                            ; 004f3e81
        ;   Label: LAB_004f3e81
    CALL crt_unknown.c_FUN_00564494     ; 004f3e82
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004f3e87
    MOV EAX,EBX                         ; 004f3e8a
    POP EBX                             ; 004f3e8c
    RET                                 ; 004f3e8d

