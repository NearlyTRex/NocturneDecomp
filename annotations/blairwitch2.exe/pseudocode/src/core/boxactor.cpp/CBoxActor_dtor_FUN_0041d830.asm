; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_0041d830(CBoxActor *this_ptr,uint flags)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoxActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d830
        ;   Label: core_boxactor.cpp_CBoxActor_dtor_FUN_0041d830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d831
    TEST byte ptr [ESP + 0xc],0x4       ; 0041d835
    JNZ 0x0041d86d                      ; 0041d83a
        ;   XREF to: 0041d86d (CONDITIONAL_JUMP)  ; LAB_0041d86d
    PUSH 0x0                            ; 0041d83c
    ADD EBX,0x4f0                       ; 0041d83e
    PUSH EBX                            ; 0041d844
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 0041d845
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d84a
    PUSH 0x1                            ; 0041d84d
    LEA EBX,[EAX + 0xfffffb10]          ; 0041d84f
    PUSH EBX                            ; 0041d855
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0041d856
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d85b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041d85e
    MOV EBX,EAX                         ; 0041d862
    TEST DL,0x2                         ; 0041d864
    JNZ 0x0041d888                      ; 0041d867
        ;   XREF to: 0041d888 (CONDITIONAL_JUMP)  ; LAB_0041d888
    MOV EAX,EBX                         ; 0041d869
    POP EBX                             ; 0041d86b
    RET                                 ; 0041d86c
    PUSH 0x5f3c40                       ; 0041d86d | g_CBoxActorTypeInfo
        ;   Label: LAB_0041d86d
    PUSH EBX                            ; 0041d872
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0041d873
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041d878
    PUSH EAX                            ; 0041d87b
    CALL crt_unknown.c_FUN_005b7fce     ; 0041d87c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0041d881
    MOV EAX,EBX                         ; 0041d884
    POP EBX                             ; 0041d886
    RET                                 ; 0041d887
    PUSH EAX                            ; 0041d888
        ;   Label: LAB_0041d888
    CALL crt_unknown.c_FUN_005b7fdc     ; 0041d889
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041d88e
    MOV EAX,EBX                         ; 0041d891
    POP EBX                             ; 0041d893
    RET                                 ; 0041d894

