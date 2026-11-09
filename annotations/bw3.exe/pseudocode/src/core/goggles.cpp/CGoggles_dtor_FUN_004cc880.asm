; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_004cc880(CGoggles *this_ptr,uint flags)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGogglesTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc880
        ;   Label: core_goggles.cpp_CGoggles_dtor_FUN_004cc880
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc881
    TEST byte ptr [ESP + 0xc],0x4       ; 004cc885
    JNZ 0x004cc8a6                      ; 004cc88a
        ;   XREF to: 004cc8a6 (CONDITIONAL_JUMP)  ; LAB_004cc8a6
    PUSH 0x1                            ; 004cc88c
    PUSH EBX                            ; 004cc88e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004cc88f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cc894
    MOV DL,byte ptr [ESP + 0xc]         ; 004cc897
    MOV EBX,EAX                         ; 004cc89b
    TEST DL,0x2                         ; 004cc89d
    JNZ 0x004cc8c1                      ; 004cc8a0
        ;   XREF to: 004cc8c1 (CONDITIONAL_JUMP)  ; LAB_004cc8c1
    MOV EAX,EBX                         ; 004cc8a2
    POP EBX                             ; 004cc8a4
    RET                                 ; 004cc8a5
    PUSH 0x5e0de0                       ; 004cc8a6 | g_CGogglesTypeInfo
        ;   Label: LAB_004cc8a6
    PUSH EBX                            ; 004cc8ab
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004cc8ac
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004cc8b1
    PUSH EAX                            ; 004cc8b4
    CALL crt_unknown.c_FUN_005a30b6     ; 004cc8b5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004cc8ba
    MOV EAX,EBX                         ; 004cc8bd
    POP EBX                             ; 004cc8bf
    RET                                 ; 004cc8c0
    PUSH EAX                            ; 004cc8c1
        ;   Label: LAB_004cc8c1
    CALL crt_unknown.c_FUN_005a30c4     ; 004cc8c2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004cc8c7
    MOV EAX,EBX                         ; 004cc8ca
    POP EBX                             ; 004cc8cc
    RET                                 ; 004cc8cd

