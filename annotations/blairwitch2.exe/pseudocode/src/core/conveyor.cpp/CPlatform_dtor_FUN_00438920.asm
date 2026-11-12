; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00438920(CPlatform *this_ptr,uint flags)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CPlatformTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_course.cpp_CCourse_dtor_FUN_00438a70
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438920
        ;   Label: core_conveyor.cpp_CPlatform_dtor_FUN_00438920
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438921
    TEST byte ptr [ESP + 0xc],0x4       ; 00438925
    JNZ 0x0043895d                      ; 0043892a
        ;   XREF to: 0043895d (CONDITIONAL_JUMP)  ; LAB_0043895d
    PUSH 0x0                            ; 0043892c
    ADD EBX,0x46c                       ; 0043892e
    PUSH EBX                            ; 00438934
    CALL core_course.cpp_CCourse_dtor_FUN_00438a70 ; 00438935
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00438a70(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043893a
    PUSH 0x1                            ; 0043893d
    LEA EBX,[EAX + 0xfffffb94]          ; 0043893f
    PUSH EBX                            ; 00438945
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00438946
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043894b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043894e
    MOV EBX,EAX                         ; 00438952
    TEST DL,0x2                         ; 00438954
    JNZ 0x00438978                      ; 00438957
        ;   XREF to: 00438978 (CONDITIONAL_JUMP)  ; LAB_00438978
    MOV EAX,EBX                         ; 00438959
    POP EBX                             ; 0043895b
    RET                                 ; 0043895c
    PUSH 0x5f4960                       ; 0043895d | g_CPlatformTypeInfo
        ;   Label: LAB_0043895d
    PUSH EBX                            ; 00438962
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00438963
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00438968
    PUSH EAX                            ; 0043896b
    CALL crt_unknown.c_FUN_005b7fce     ; 0043896c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00438971
    MOV EAX,EBX                         ; 00438974
    POP EBX                             ; 00438976
    RET                                 ; 00438977
    PUSH EAX                            ; 00438978
        ;   Label: LAB_00438978
    CALL crt_unknown.c_FUN_005b7fdc     ; 00438979
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043897e
    MOV EAX,EBX                         ; 00438981
    POP EBX                             ; 00438983
    RET                                 ; 00438984

