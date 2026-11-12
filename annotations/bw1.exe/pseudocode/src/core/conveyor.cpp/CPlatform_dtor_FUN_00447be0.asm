; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00447be0(CPlatform *this_ptr,uint flags)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CPlatformTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_course.cpp_CCourse_dtor_FUN_00447d30
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447be0
        ;   Label: core_conveyor.cpp_CPlatform_dtor_FUN_00447be0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447be1
    TEST byte ptr [ESP + 0xc],0x4       ; 00447be5
    JNZ 0x00447c1d                      ; 00447bea
        ;   XREF to: 00447c1d (CONDITIONAL_JUMP)  ; LAB_00447c1d
    PUSH 0x0                            ; 00447bec
    ADD EBX,0x310                       ; 00447bee
    PUSH EBX                            ; 00447bf4
    CALL core_course.cpp_CCourse_dtor_FUN_00447d30 ; 00447bf5
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00447d30(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00447bfa
    PUSH 0x1                            ; 00447bfd
    LEA EBX,[EAX + 0xfffffcf0]          ; 00447bff
    PUSH EBX                            ; 00447c05
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00447c06
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00447c0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00447c0e
    MOV EBX,EAX                         ; 00447c12
    TEST DL,0x2                         ; 00447c14
    JNZ 0x00447c38                      ; 00447c17
        ;   XREF to: 00447c38 (CONDITIONAL_JUMP)  ; LAB_00447c38
    MOV EAX,EBX                         ; 00447c19
    POP EBX                             ; 00447c1b
    RET                                 ; 00447c1c
    PUSH 0x5fe060                       ; 00447c1d | g_CPlatformTypeInfo
        ;   Label: LAB_00447c1d
    PUSH EBX                            ; 00447c22
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00447c23
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00447c28
    PUSH EAX                            ; 00447c2b
    CALL crt_unknown.c_FUN_005c0336     ; 00447c2c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00447c31
    MOV EAX,EBX                         ; 00447c34
    POP EBX                             ; 00447c36
    RET                                 ; 00447c37
    PUSH EAX                            ; 00447c38
        ;   Label: LAB_00447c38
    CALL crt_unknown.c_FUN_005c0344     ; 00447c39
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00447c3e
    MOV EAX,EBX                         ; 00447c41
    POP EBX                             ; 00447c43
    RET                                 ; 00447c44

