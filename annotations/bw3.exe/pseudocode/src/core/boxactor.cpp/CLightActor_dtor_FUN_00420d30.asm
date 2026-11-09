; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_00420d30(CLightActor *this_ptr,uint flags)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_box.cpp_CBox_dtor_FUN_0041adf0
;   core_dlight.cpp_CDemonLight_dtor_FUN_0045c240
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420d30
        ;   Label: core_boxactor.cpp_CLightActor_dtor_FUN_00420d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00420d31
    TEST byte ptr [ESP + 0xc],0x4       ; 00420d35
    JNZ 0x00420d7d                      ; 00420d3a
        ;   XREF to: 00420d7d (CONDITIONAL_JUMP)  ; LAB_00420d7d
    PUSH 0x0                            ; 00420d3c
    ADD EBX,0x6ec                       ; 00420d3e
    PUSH EBX                            ; 00420d44
    CALL core_dlight.cpp_CDemonLight_dtor_FUN_0045c240 ; 00420d45
        ;   XREF to: 0045c240 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_dtor_FUN_0045c240(CDemonLight * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00420d4a
    PUSH 0x0                            ; 00420d4d
    SUB EAX,0x358                       ; 00420d4f
    PUSH EAX                            ; 00420d54
    CALL core_box.cpp_CBox_dtor_FUN_0041adf0 ; 00420d55
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041adf0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00420d5a
    PUSH 0x1                            ; 00420d5d
    LEA EBX,[EAX + 0xfffffc6c]          ; 00420d5f
    PUSH EBX                            ; 00420d65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00420d66
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00420d6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00420d6e
    MOV EBX,EAX                         ; 00420d72
    TEST DL,0x2                         ; 00420d74
    JNZ 0x00420d98                      ; 00420d77
        ;   XREF to: 00420d98 (CONDITIONAL_JUMP)  ; LAB_00420d98
    MOV EAX,EBX                         ; 00420d79
    POP EBX                             ; 00420d7b
    RET                                 ; 00420d7c
    PUSH 0x5dcb70                       ; 00420d7d | g_CLightActorTypeInfo
        ;   Label: LAB_00420d7d
    PUSH EBX                            ; 00420d82
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00420d83
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00420d88
    PUSH EAX                            ; 00420d8b
    CALL crt_unknown.c_FUN_005a30b6     ; 00420d8c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00420d91
    MOV EAX,EBX                         ; 00420d94
    POP EBX                             ; 00420d96
    RET                                 ; 00420d97
    PUSH EAX                            ; 00420d98
        ;   Label: LAB_00420d98
    CALL crt_unknown.c_FUN_005a30c4     ; 00420d99
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00420d9e
    MOV EAX,EBX                         ; 00420da1
    POP EBX                             ; 00420da3
    RET                                 ; 00420da4

