; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004e0ab0(CLever *this_ptr,uint flags)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLeverTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0ab0
        ;   Label: core_lever.cpp_CLever_dtor_FUN_004e0ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0ab1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e0ab5
    JNZ 0x004e0ad6                      ; 004e0aba
        ;   XREF to: 004e0ad6 (CONDITIONAL_JUMP)  ; LAB_004e0ad6
    PUSH 0x1                            ; 004e0abc
    PUSH EBX                            ; 004e0abe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004e0abf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e0ac4
    MOV DL,byte ptr [ESP + 0xc]         ; 004e0ac7
    MOV EBX,EAX                         ; 004e0acb
    TEST DL,0x2                         ; 004e0acd
    JNZ 0x004e0af1                      ; 004e0ad0
        ;   XREF to: 004e0af1 (CONDITIONAL_JUMP)  ; LAB_004e0af1
    MOV EAX,EBX                         ; 004e0ad2
    POP EBX                             ; 004e0ad4
    RET                                 ; 004e0ad5
    PUSH 0x5e24b0                       ; 004e0ad6 | g_CLeverTypeInfo
        ;   Label: LAB_004e0ad6
    PUSH EBX                            ; 004e0adb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004e0adc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004e0ae1
    PUSH EAX                            ; 004e0ae4
    CALL crt_unknown.c_FUN_005a30b6     ; 004e0ae5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004e0aea
    MOV EAX,EBX                         ; 004e0aed
    POP EBX                             ; 004e0aef
    RET                                 ; 004e0af0
    PUSH EAX                            ; 004e0af1
        ;   Label: LAB_004e0af1
    CALL crt_unknown.c_FUN_005a30c4     ; 004e0af2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004e0af7
    MOV EAX,EBX                         ; 004e0afa
    POP EBX                             ; 004e0afc
    RET                                 ; 004e0afd

