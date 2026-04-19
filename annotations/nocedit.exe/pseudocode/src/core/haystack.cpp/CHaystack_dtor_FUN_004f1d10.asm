; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004f1d10(CHaystack *this_ptr,uint flags)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHaystackTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1d10
        ;   Label: core_haystack.cpp_CHaystack_dtor_FUN_004f1d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f1d11
    TEST byte ptr [ESP + 0xc],0x4       ; 004f1d15
    JNZ 0x004f1d36                      ; 004f1d1a
        ;   XREF to: 004f1d36 (CONDITIONAL_JUMP)  ; LAB_004f1d36
    PUSH 0x1                            ; 004f1d1c
    PUSH EBX                            ; 004f1d1e
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 004f1d1f
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f1d24
    MOV DL,byte ptr [ESP + 0xc]         ; 004f1d27
    MOV EBX,EAX                         ; 004f1d2b
    TEST DL,0x2                         ; 004f1d2d
    JNZ 0x004f1d51                      ; 004f1d30
        ;   XREF to: 004f1d51 (CONDITIONAL_JUMP)  ; LAB_004f1d51
    MOV EAX,EBX                         ; 004f1d32
    POP EBX                             ; 004f1d34
    RET                                 ; 004f1d35
    PUSH 0x65f560                       ; 004f1d36 | g_CHaystackTypeInfo
        ;   Label: LAB_004f1d36
    PUSH EBX                            ; 004f1d3b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004f1d3c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f1d41
    PUSH EAX                            ; 004f1d44
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004f1d45
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f1d4a
    MOV EAX,EBX                         ; 004f1d4d
    POP EBX                             ; 004f1d4f
    RET                                 ; 004f1d50
    PUSH EAX                            ; 004f1d51
        ;   Label: LAB_004f1d51
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004f1d52
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f1d57
    MOV EAX,EBX                         ; 004f1d5a
    POP EBX                             ; 004f1d5c
    RET                                 ; 004f1d5d

