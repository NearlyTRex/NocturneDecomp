; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f5b0(CBackgroundActor *this_ptr,uint flags)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBackgroundActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f5b0
        ;   Label: core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f5b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f5b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f5b5
    JNZ 0x0040f5d6                      ; 0040f5ba
        ;   XREF to: 0040f5d6 (CONDITIONAL_JUMP)  ; LAB_0040f5d6
    PUSH 0x1                            ; 0040f5bc
    PUSH EBX                            ; 0040f5be
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0040f5bf
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f5c4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f5c7
    MOV EBX,EAX                         ; 0040f5cb
    TEST DL,0x2                         ; 0040f5cd
    JNZ 0x0040f5f1                      ; 0040f5d0
        ;   XREF to: 0040f5f1 (CONDITIONAL_JUMP)  ; LAB_0040f5f1
    MOV EAX,EBX                         ; 0040f5d2
    POP EBX                             ; 0040f5d4
    RET                                 ; 0040f5d5
    PUSH 0x5f2950                       ; 0040f5d6 | g_CBackgroundActorTypeInfo
        ;   Label: LAB_0040f5d6
    PUSH EBX                            ; 0040f5db
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0040f5dc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040f5e1
    PUSH EAX                            ; 0040f5e4
    CALL crt_unknown.c_FUN_005b7fce     ; 0040f5e5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0040f5ea
    MOV EAX,EBX                         ; 0040f5ed
    POP EBX                             ; 0040f5ef
    RET                                 ; 0040f5f0
    PUSH EAX                            ; 0040f5f1
        ;   Label: LAB_0040f5f1
    CALL crt_unknown.c_FUN_005b7fdc     ; 0040f5f2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040f5f7
    MOV EAX,EBX                         ; 0040f5fa
    POP EBX                             ; 0040f5fc
    RET                                 ; 0040f5fd

