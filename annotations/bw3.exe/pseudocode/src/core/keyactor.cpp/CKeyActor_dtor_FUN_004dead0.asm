; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004dead0(CKeyActor *this_ptr,uint flags)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dead0
        ;   Label: core_keyactor.cpp_CKeyActor_dtor_FUN_004dead0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dead1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dead5
    JNZ 0x004deaf6                      ; 004deada
        ;   XREF to: 004deaf6 (CONDITIONAL_JUMP)  ; LAB_004deaf6
    PUSH 0x1                            ; 004deadc
    PUSH EBX                            ; 004deade
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004deadf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004deae4
    MOV DL,byte ptr [ESP + 0xc]         ; 004deae7
    MOV EBX,EAX                         ; 004deaeb
    TEST DL,0x2                         ; 004deaed
    JNZ 0x004deb11                      ; 004deaf0
        ;   XREF to: 004deb11 (CONDITIONAL_JUMP)  ; LAB_004deb11
    MOV EAX,EBX                         ; 004deaf2
    POP EBX                             ; 004deaf4
    RET                                 ; 004deaf5
    PUSH 0x5e2230                       ; 004deaf6 | g_CKeyActorTypeInfo
        ;   Label: LAB_004deaf6
    PUSH EBX                            ; 004deafb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004deafc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004deb01
    PUSH EAX                            ; 004deb04
    CALL crt_unknown.c_FUN_005a30b6     ; 004deb05
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004deb0a
    MOV EAX,EBX                         ; 004deb0d
    POP EBX                             ; 004deb0f
    RET                                 ; 004deb10
    PUSH EAX                            ; 004deb11
        ;   Label: LAB_004deb11
    CALL crt_unknown.c_FUN_005a30c4     ; 004deb12
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004deb17
    MOV EAX,EBX                         ; 004deb1a
    POP EBX                             ; 004deb1c
    RET                                 ; 004deb1d

