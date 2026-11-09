; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004d4b40(CHeroPlaceholder *this_ptr,uint flags)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_CHeroPlaceholderVTable = 00408890
;   WatcomTypeInfo g_CHeroPlaceholderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4b40
        ;   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004d4b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4b41
    TEST byte ptr [ESP + 0xc],0x4       ; 004d4b45
    JNZ 0x004d4b70                      ; 004d4b4a
        ;   XREF to: 004d4b70 (CONDITIONAL_JUMP)  ; LAB_004d4b70
    PUSH 0x1                            ; 004d4b4c
    PUSH EBX                            ; 004d4b4e
    MOV dword ptr [EBX + 0x154],0x5e16a4 ; 004d4b4f | g_CHeroPlaceholderVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d4b59
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d4b5e
    MOV DL,byte ptr [ESP + 0xc]         ; 004d4b61
    MOV EBX,EAX                         ; 004d4b65
    TEST DL,0x2                         ; 004d4b67
    JNZ 0x004d4b8b                      ; 004d4b6a
        ;   XREF to: 004d4b8b (CONDITIONAL_JUMP)  ; LAB_004d4b8b
    MOV EAX,EBX                         ; 004d4b6c
    POP EBX                             ; 004d4b6e
    RET                                 ; 004d4b6f
    PUSH 0x5e1780                       ; 004d4b70 | g_CHeroPlaceholderTypeInfo
        ;   Label: LAB_004d4b70
    PUSH EBX                            ; 004d4b75
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d4b76
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004d4b7b
    PUSH EAX                            ; 004d4b7e
    CALL crt_unknown.c_FUN_005a30b6     ; 004d4b7f
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d4b84
    MOV EAX,EBX                         ; 004d4b87
    POP EBX                             ; 004d4b89
    RET                                 ; 004d4b8a
    PUSH EAX                            ; 004d4b8b
        ;   Label: LAB_004d4b8b
    CALL crt_unknown.c_FUN_005a30c4     ; 004d4b8c
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d4b91
    MOV EAX,EBX                         ; 004d4b94
    POP EBX                             ; 004d4b96
    RET                                 ; 004d4b97

