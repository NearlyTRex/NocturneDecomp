; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_005c69c0(CStranger *this_ptr,uint flags)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStrangerTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c69c0
        ;   Label: core_stranger.cpp_CStranger_dtor_FUN_005c69c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c69c1
    TEST byte ptr [ESP + 0xc],0x4       ; 005c69c5
    JNZ 0x005c69e6                      ; 005c69ca
        ;   XREF to: 005c69e6 (CONDITIONAL_JUMP)  ; LAB_005c69e6
    PUSH 0x1                            ; 005c69cc
    PUSH EBX                            ; 005c69ce
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 005c69cf
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005c69d4
    MOV DL,byte ptr [ESP + 0xc]         ; 005c69d7
    MOV EBX,EAX                         ; 005c69db
    TEST DL,0x2                         ; 005c69dd
    JNZ 0x005c6a01                      ; 005c69e0
        ;   XREF to: 005c6a01 (CONDITIONAL_JUMP)  ; LAB_005c6a01
    MOV EAX,EBX                         ; 005c69e2
    POP EBX                             ; 005c69e4
    RET                                 ; 005c69e5
    PUSH 0x6638f0                       ; 005c69e6 | g_CStrangerTypeInfo
        ;   Label: LAB_005c69e6
    PUSH EBX                            ; 005c69eb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005c69ec
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005c69f1
    PUSH EAX                            ; 005c69f4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c69f5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c69fa
    MOV EAX,EBX                         ; 005c69fd
    POP EBX                             ; 005c69ff
    RET                                 ; 005c6a00
    PUSH EAX                            ; 005c6a01
        ;   Label: LAB_005c6a01
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005c6a02
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005c6a07
    MOV EAX,EBX                         ; 005c6a0a
    POP EBX                             ; 005c6a0c
    RET                                 ; 005c6a0d

