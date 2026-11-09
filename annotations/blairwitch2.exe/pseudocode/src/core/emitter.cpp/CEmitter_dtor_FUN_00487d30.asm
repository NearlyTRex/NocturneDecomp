; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00487d30(CEmitter *this_ptr,uint flags)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEmitterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487d30
        ;   Label: core_emitter.cpp_CEmitter_dtor_FUN_00487d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00487d31
    TEST byte ptr [ESP + 0xc],0x4       ; 00487d35
    JNZ 0x00487d56                      ; 00487d3a
        ;   XREF to: 00487d56 (CONDITIONAL_JUMP)  ; LAB_00487d56
    PUSH 0x1                            ; 00487d3c
    PUSH EBX                            ; 00487d3e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00487d3f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00487d44
    MOV DL,byte ptr [ESP + 0xc]         ; 00487d47
    MOV EBX,EAX                         ; 00487d4b
    TEST DL,0x2                         ; 00487d4d
    JNZ 0x00487d71                      ; 00487d50
        ;   XREF to: 00487d71 (CONDITIONAL_JUMP)  ; LAB_00487d71
    MOV EAX,EBX                         ; 00487d52
    POP EBX                             ; 00487d54
    RET                                 ; 00487d55
    PUSH 0x5f6030                       ; 00487d56 | g_CEmitterTypeInfo
        ;   Label: LAB_00487d56
    PUSH EBX                            ; 00487d5b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00487d5c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00487d61
    PUSH EAX                            ; 00487d64
    CALL crt_unknown.c_FUN_005b7fce     ; 00487d65
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00487d6a
    MOV EAX,EBX                         ; 00487d6d
    POP EBX                             ; 00487d6f
    RET                                 ; 00487d70
    PUSH EAX                            ; 00487d71
        ;   Label: LAB_00487d71
    CALL crt_unknown.c_FUN_005b7fdc     ; 00487d72
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00487d77
    MOV EAX,EBX                         ; 00487d7a
    POP EBX                             ; 00487d7c
    RET                                 ; 00487d7d

