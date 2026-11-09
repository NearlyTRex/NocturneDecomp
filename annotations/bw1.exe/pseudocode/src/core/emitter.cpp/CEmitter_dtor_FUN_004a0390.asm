; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_004a0390(CEmitter *this_ptr,uint flags)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEmitterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0390
        ;   Label: core_emitter.cpp_CEmitter_dtor_FUN_004a0390
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0391
    TEST byte ptr [ESP + 0xc],0x4       ; 004a0395
    JNZ 0x004a03b6                      ; 004a039a
        ;   XREF to: 004a03b6 (CONDITIONAL_JUMP)  ; LAB_004a03b6
    PUSH 0x1                            ; 004a039c
    PUSH EBX                            ; 004a039e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004a039f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a03a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a03a7
    MOV EBX,EAX                         ; 004a03ab
    TEST DL,0x2                         ; 004a03ad
    JNZ 0x004a03d1                      ; 004a03b0
        ;   XREF to: 004a03d1 (CONDITIONAL_JUMP)  ; LAB_004a03d1
    MOV EAX,EBX                         ; 004a03b2
    POP EBX                             ; 004a03b4
    RET                                 ; 004a03b5
    PUSH 0x5ffb10                       ; 004a03b6 | g_CEmitterTypeInfo
        ;   Label: LAB_004a03b6
    PUSH EBX                            ; 004a03bb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004a03bc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004a03c1
    PUSH EAX                            ; 004a03c4
    CALL crt_unknown.c_FUN_005c0336     ; 004a03c5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004a03ca
    MOV EAX,EBX                         ; 004a03cd
    POP EBX                             ; 004a03cf
    RET                                 ; 004a03d0
    PUSH EAX                            ; 004a03d1
        ;   Label: LAB_004a03d1
    CALL crt_unknown.c_FUN_005c0344     ; 004a03d2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004a03d7
    MOV EAX,EBX                         ; 004a03da
    POP EBX                             ; 004a03dc
    RET                                 ; 004a03dd

