; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00488f50(CEmitter *this_ptr,uint flags)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEmitterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488f50
        ;   Label: core_emitter.cpp_CEmitter_dtor_FUN_00488f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00488f51
    TEST byte ptr [ESP + 0xc],0x4       ; 00488f55
    JNZ 0x00488f76                      ; 00488f5a
        ;   XREF to: 00488f76 (CONDITIONAL_JUMP)  ; LAB_00488f76
    PUSH 0x1                            ; 00488f5c
    PUSH EBX                            ; 00488f5e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00488f5f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00488f64
    MOV DL,byte ptr [ESP + 0xc]         ; 00488f67
    MOV EBX,EAX                         ; 00488f6b
    TEST DL,0x2                         ; 00488f6d
    JNZ 0x00488f91                      ; 00488f70
        ;   XREF to: 00488f91 (CONDITIONAL_JUMP)  ; LAB_00488f91
    MOV EAX,EBX                         ; 00488f72
    POP EBX                             ; 00488f74
    RET                                 ; 00488f75
    PUSH 0x5df320                       ; 00488f76 | g_CEmitterTypeInfo
        ;   Label: LAB_00488f76
    PUSH EBX                            ; 00488f7b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00488f7c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00488f81
    PUSH EAX                            ; 00488f84
    CALL crt_unknown.c_FUN_005a30b6     ; 00488f85
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00488f8a
    MOV EAX,EBX                         ; 00488f8d
    POP EBX                             ; 00488f8f
    RET                                 ; 00488f90
    PUSH EAX                            ; 00488f91
        ;   Label: LAB_00488f91
    CALL crt_unknown.c_FUN_005a30c4     ; 00488f92
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00488f97
    MOV EAX,EBX                         ; 00488f9a
    POP EBX                             ; 00488f9c
    RET                                 ; 00488f9d

