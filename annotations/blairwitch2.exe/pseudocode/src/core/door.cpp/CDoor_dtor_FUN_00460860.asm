; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00460860(CDoor *this_ptr,uint flags)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDoorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460860
        ;   Label: core_door.cpp_CDoor_dtor_FUN_00460860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460861
    TEST byte ptr [ESP + 0xc],0x4       ; 00460865
    JNZ 0x00460886                      ; 0046086a
        ;   XREF to: 00460886 (CONDITIONAL_JUMP)  ; LAB_00460886
    PUSH 0x1                            ; 0046086c
    PUSH EBX                            ; 0046086e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0046086f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00460874
    MOV DL,byte ptr [ESP + 0xc]         ; 00460877
    MOV EBX,EAX                         ; 0046087b
    TEST DL,0x2                         ; 0046087d
    JNZ 0x004608a1                      ; 00460880
        ;   XREF to: 004608a1 (CONDITIONAL_JUMP)  ; LAB_004608a1
    MOV EAX,EBX                         ; 00460882
    POP EBX                             ; 00460884
    RET                                 ; 00460885
    PUSH 0x5f55d0                       ; 00460886 | g_CDoorTypeInfo
        ;   Label: LAB_00460886
    PUSH EBX                            ; 0046088b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0046088c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00460891
    PUSH EAX                            ; 00460894
    CALL crt_unknown.c_FUN_005b7fce     ; 00460895
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0046089a
    MOV EAX,EBX                         ; 0046089d
    POP EBX                             ; 0046089f
    RET                                 ; 004608a0
    PUSH EAX                            ; 004608a1
        ;   Label: LAB_004608a1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004608a2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004608a7
    MOV EAX,EBX                         ; 004608aa
    POP EBX                             ; 004608ac
    RET                                 ; 004608ad

