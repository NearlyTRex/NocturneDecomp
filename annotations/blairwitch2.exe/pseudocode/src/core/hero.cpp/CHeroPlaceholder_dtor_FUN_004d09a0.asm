; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004d09a0(CHeroPlaceholder *this_ptr,uint flags)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CHeroPlaceholderVTable
;   WatcomTypeInfo g_CHeroPlaceholderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d09a0
        ;   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004d09a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d09a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d09a5
    JNZ 0x004d09d0                      ; 004d09aa
        ;   XREF to: 004d09d0 (CONDITIONAL_JUMP)  ; LAB_004d09d0
    PUSH 0x1                            ; 004d09ac
    PUSH EBX                            ; 004d09ae
    MOV dword ptr [EBX + 0x2b0],0x5f83f4 ; 004d09af | g_CHeroPlaceholderVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004d09b9
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d09be
    MOV DL,byte ptr [ESP + 0xc]         ; 004d09c1
    MOV EBX,EAX                         ; 004d09c5
    TEST DL,0x2                         ; 004d09c7
    JNZ 0x004d09eb                      ; 004d09ca
        ;   XREF to: 004d09eb (CONDITIONAL_JUMP)  ; LAB_004d09eb
    MOV EAX,EBX                         ; 004d09cc
    POP EBX                             ; 004d09ce
    RET                                 ; 004d09cf
    PUSH 0x5f84e0                       ; 004d09d0 | g_CHeroPlaceholderTypeInfo
        ;   Label: LAB_004d09d0
    PUSH EBX                            ; 004d09d5
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004d09d6
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d09db
    PUSH EAX                            ; 004d09de
    CALL crt_unknown.c_FUN_005b7fce     ; 004d09df
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004d09e4
    MOV EAX,EBX                         ; 004d09e7
    POP EBX                             ; 004d09e9
    RET                                 ; 004d09ea
    PUSH EAX                            ; 004d09eb
        ;   Label: LAB_004d09eb
    CALL crt_unknown.c_FUN_005b7fdc     ; 004d09ec
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d09f1
    MOV EAX,EBX                         ; 004d09f4
    POP EBX                             ; 004d09f6
    RET                                 ; 004d09f7

