; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_platfrm_cpp_CPlatform_dtor_FUN_00512cf0(CPlatform *this_ptr,uint flags)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CPlatformTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_course.cpp_CCourse_dtor_FUN_004448f0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512cf0
        ;   Label: core_platfrm.cpp_CPlatform_dtor_FUN_00512cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00512cf1
    TEST byte ptr [ESP + 0xc],0x4       ; 00512cf5
    JNZ 0x00512d2d                      ; 00512cfa
        ;   XREF to: 00512d2d (CONDITIONAL_JUMP)  ; LAB_00512d2d
    PUSH 0x0                            ; 00512cfc
    ADD EBX,0x310                       ; 00512cfe
    PUSH EBX                            ; 00512d04
    CALL core_course.cpp_CCourse_dtor_FUN_004448f0 ; 00512d05
        ;   XREF to: 004448f0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004448f0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00512d0a
    PUSH 0x1                            ; 00512d0d
    LEA EBX,[EAX + 0xfffffcf0]          ; 00512d0f
    PUSH EBX                            ; 00512d15
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00512d16
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00512d1b
    MOV DL,byte ptr [ESP + 0xc]         ; 00512d1e
    MOV EBX,EAX                         ; 00512d22
    TEST DL,0x2                         ; 00512d24
    JNZ 0x00512d48                      ; 00512d27
        ;   XREF to: 00512d48 (CONDITIONAL_JUMP)  ; LAB_00512d48
    MOV EAX,EBX                         ; 00512d29
    POP EBX                             ; 00512d2b
    RET                                 ; 00512d2c
    PUSH 0x5e33e0                       ; 00512d2d | g_CPlatformTypeInfo
        ;   Label: LAB_00512d2d
    PUSH EBX                            ; 00512d32
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00512d33
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00512d38
    PUSH EAX                            ; 00512d3b
    CALL crt_unknown.c_FUN_005a30b6     ; 00512d3c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00512d41
    MOV EAX,EBX                         ; 00512d44
    POP EBX                             ; 00512d46
    RET                                 ; 00512d47
    PUSH EAX                            ; 00512d48
        ;   Label: LAB_00512d48
    CALL crt_unknown.c_FUN_005a30c4     ; 00512d49
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00512d4e
    MOV EAX,EBX                         ; 00512d51
    POP EBX                             ; 00512d53
    RET                                 ; 00512d54

