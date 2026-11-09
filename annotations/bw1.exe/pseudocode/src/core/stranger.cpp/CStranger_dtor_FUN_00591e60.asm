; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00591e60(CStranger *this_ptr,uint flags)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStrangerTypeInfo
;
; Called Functions:
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591e60
        ;   Label: core_stranger.cpp_CStranger_dtor_FUN_00591e60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00591e61
    TEST byte ptr [ESP + 0xc],0x4       ; 00591e65
    JNZ 0x00591e86                      ; 00591e6a
        ;   XREF to: 00591e86 (CONDITIONAL_JUMP)  ; LAB_00591e86
    PUSH 0x1                            ; 00591e6c
    PUSH EBX                            ; 00591e6e
    CALL core_hero.cpp_FUN_004ea980     ; 00591e6f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 00591e74
    MOV DL,byte ptr [ESP + 0xc]         ; 00591e77
    MOV EBX,EAX                         ; 00591e7b
    TEST DL,0x2                         ; 00591e7d
    JNZ 0x00591ea1                      ; 00591e80
        ;   XREF to: 00591ea1 (CONDITIONAL_JUMP)  ; LAB_00591ea1
    MOV EAX,EBX                         ; 00591e82
    POP EBX                             ; 00591e84
    RET                                 ; 00591e85
    PUSH 0x606230                       ; 00591e86 | g_CStrangerTypeInfo
        ;   Label: LAB_00591e86
    PUSH EBX                            ; 00591e8b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00591e8c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00591e91
    PUSH EAX                            ; 00591e94
    CALL crt_unknown.c_FUN_005c0336     ; 00591e95
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00591e9a
    MOV EAX,EBX                         ; 00591e9d
    POP EBX                             ; 00591e9f
    RET                                 ; 00591ea0
    PUSH EAX                            ; 00591ea1
        ;   Label: LAB_00591ea1
    CALL crt_unknown.c_FUN_005c0344     ; 00591ea2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00591ea7
    MOV EAX,EBX                         ; 00591eaa
    POP EBX                             ; 00591eac
    RET                                 ; 00591ead

