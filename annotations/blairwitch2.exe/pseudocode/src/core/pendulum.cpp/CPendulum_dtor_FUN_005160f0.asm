; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_005160f0(CPendulum *this_ptr,uint flags)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CPendulumTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005160f0
        ;   Label: core_pendulum.cpp_CPendulum_dtor_FUN_005160f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005160f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005160f5
    JNZ 0x00516116                      ; 005160fa
        ;   XREF to: 00516116 (CONDITIONAL_JUMP)  ; LAB_00516116
    PUSH 0x1                            ; 005160fc
    PUSH EBX                            ; 005160fe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005160ff
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00516104
    MOV DL,byte ptr [ESP + 0xc]         ; 00516107
    MOV EBX,EAX                         ; 0051610b
    TEST DL,0x2                         ; 0051610d
    JNZ 0x00516131                      ; 00516110
        ;   XREF to: 00516131 (CONDITIONAL_JUMP)  ; LAB_00516131
    MOV EAX,EBX                         ; 00516112
    POP EBX                             ; 00516114
    RET                                 ; 00516115
    PUSH 0x5fabf0                       ; 00516116 | g_CPendulumTypeInfo
        ;   Label: LAB_00516116
    PUSH EBX                            ; 0051611b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0051611c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00516121
    PUSH EAX                            ; 00516124
    CALL crt_unknown.c_FUN_005b7fce     ; 00516125
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0051612a
    MOV EAX,EBX                         ; 0051612d
    POP EBX                             ; 0051612f
    RET                                 ; 00516130
    PUSH EAX                            ; 00516131
        ;   Label: LAB_00516131
    CALL crt_unknown.c_FUN_005b7fdc     ; 00516132
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00516137
    MOV EAX,EBX                         ; 0051613a
    POP EBX                             ; 0051613c
    RET                                 ; 0051613d

