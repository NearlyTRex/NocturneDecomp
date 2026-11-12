; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_00423720(CLightActor *this_ptr,uint flags)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;   core_dlight.cpp_CDemonLight_dtor_FUN_00462530
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423720
        ;   Label: core_boxactor.cpp_CLightActor_dtor_FUN_00423720
    MOV EBX,dword ptr [ESP + 0x8]       ; 00423721
    TEST byte ptr [ESP + 0xc],0x4       ; 00423725
    JNZ 0x0042376d                      ; 0042372a
        ;   XREF to: 0042376d (CONDITIONAL_JUMP)  ; LAB_0042376d
    PUSH 0x0                            ; 0042372c
    ADD EBX,0x67c                       ; 0042372e
    PUSH EBX                            ; 00423734
    CALL core_dlight.cpp_CDemonLight_dtor_FUN_00462530 ; 00423735
        ;   XREF to: 00462530 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_dtor_FUN_00462530(CDemonLight * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042373a
    PUSH 0x0                            ; 0042373d
    SUB EAX,0x2e8                       ; 0042373f
    PUSH EAX                            ; 00423744
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 00423745
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042374a
    PUSH 0x1                            ; 0042374d
    LEA EBX,[EAX + 0xfffffc6c]          ; 0042374f
    PUSH EBX                            ; 00423755
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00423756
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042375b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042375e
    MOV EBX,EAX                         ; 00423762
    TEST DL,0x2                         ; 00423764
    JNZ 0x00423788                      ; 00423767
        ;   XREF to: 00423788 (CONDITIONAL_JUMP)  ; LAB_00423788
    MOV EAX,EBX                         ; 00423769
    POP EBX                             ; 0042376b
    RET                                 ; 0042376c
    PUSH 0x5fd030                       ; 0042376d | g_CLightActorTypeInfo
        ;   Label: LAB_0042376d
    PUSH EBX                            ; 00423772
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00423773
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00423778
    PUSH EAX                            ; 0042377b
    CALL crt_unknown.c_FUN_005c0336     ; 0042377c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00423781
    MOV EAX,EBX                         ; 00423784
    POP EBX                             ; 00423786
    RET                                 ; 00423787
    PUSH EAX                            ; 00423788
        ;   Label: LAB_00423788
    CALL crt_unknown.c_FUN_005c0344     ; 00423789
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0042378e
    MOV EAX,EBX                         ; 00423791
    POP EBX                             ; 00423793
    RET                                 ; 00423794

