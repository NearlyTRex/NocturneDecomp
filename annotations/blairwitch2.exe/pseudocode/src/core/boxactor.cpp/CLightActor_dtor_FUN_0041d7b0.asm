; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_0041d7b0(CLightActor *this_ptr,uint flags)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;   core_dlight.cpp_CDemonLight_dtor_FUN_00449d30
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d7b0
        ;   Label: core_boxactor.cpp_CLightActor_dtor_FUN_0041d7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d7b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041d7b5
    JNZ 0x0041d7fd                      ; 0041d7ba
        ;   XREF to: 0041d7fd (CONDITIONAL_JUMP)  ; LAB_0041d7fd
    PUSH 0x0                            ; 0041d7bc
    ADD EBX,0x7d8                       ; 0041d7be
    PUSH EBX                            ; 0041d7c4
    CALL core_dlight.cpp_CDemonLight_dtor_FUN_00449d30 ; 0041d7c5
        ;   XREF to: 00449d30 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_dtor_FUN_00449d30(CDemonLight * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d7ca
    PUSH 0x0                            ; 0041d7cd
    SUB EAX,0x2e8                       ; 0041d7cf
    PUSH EAX                            ; 0041d7d4
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 0041d7d5
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d7da
    PUSH 0x1                            ; 0041d7dd
    LEA EBX,[EAX + 0xfffffb10]          ; 0041d7df
    PUSH EBX                            ; 0041d7e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0041d7e6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d7eb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041d7ee
    MOV EBX,EAX                         ; 0041d7f2
    TEST DL,0x2                         ; 0041d7f4
    JNZ 0x0041d818                      ; 0041d7f7
        ;   XREF to: 0041d818 (CONDITIONAL_JUMP)  ; LAB_0041d818
    MOV EAX,EBX                         ; 0041d7f9
    POP EBX                             ; 0041d7fb
    RET                                 ; 0041d7fc
    PUSH 0x5f3c20                       ; 0041d7fd | g_CLightActorTypeInfo
        ;   Label: LAB_0041d7fd
    PUSH EBX                            ; 0041d802
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0041d803
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0041d808
    PUSH EAX                            ; 0041d80b
    CALL crt_unknown.c_FUN_005b7fce     ; 0041d80c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0041d811
    MOV EAX,EBX                         ; 0041d814
    POP EBX                             ; 0041d816
    RET                                 ; 0041d817
    PUSH EAX                            ; 0041d818
        ;   Label: LAB_0041d818
    CALL crt_unknown.c_FUN_005b7fdc     ; 0041d819
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041d81e
    MOV EAX,EBX                         ; 0041d821
    POP EBX                             ; 0041d823
    RET                                 ; 0041d824

