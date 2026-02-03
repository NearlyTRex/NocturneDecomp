; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004d7660(CGabriella *this_ptr,uint flags)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGabriellaTypeInfo
;
; Called Functions:
;   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7660
        ;   Label: core_gabriela.cpp_CGabriella_dtor_FUN_004d7660
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d7661
    TEST byte ptr [ESP + 0xc],0x4       ; 004d7665
    JNZ 0x004d769d                      ; 004d766a
        ;   XREF to: 004d769d (CONDITIONAL_JUMP)  ; LAB_004d769d
    PUSH 0x0                            ; 004d766c
    ADD EBX,0x1fc14                     ; 004d766e
    PUSH EBX                            ; 004d7674
    CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 ; 004d7675
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00()
    ADD ESP,0x8                         ; 004d767a
    PUSH 0x1                            ; 004d767d
    LEA EBX,[EAX + 0xfffe03ec]          ; 004d767f
    PUSH EBX                            ; 004d7685
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 004d7686
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d768b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d768e
    MOV EBX,EAX                         ; 004d7692
    TEST DL,0x2                         ; 004d7694
    JNZ 0x004d76b8                      ; 004d7697
        ;   XREF to: 004d76b8 (CONDITIONAL_JUMP)  ; LAB_004d76b8
    MOV EAX,EBX                         ; 004d7699
    POP EBX                             ; 004d769b
    RET                                 ; 004d769c
    PUSH 0x65e970                       ; 004d769d | g_CGabriellaTypeInfo
        ;   Label: LAB_004d769d
    PUSH EBX                            ; 004d76a2
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004d76a3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004d76a8
    PUSH EAX                            ; 004d76ab
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004d76ac
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004d76b1
    MOV EAX,EBX                         ; 004d76b4
    POP EBX                             ; 004d76b6
    RET                                 ; 004d76b7
    PUSH EAX                            ; 004d76b8
        ;   Label: LAB_004d76b8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004d76b9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004d76be
    MOV EAX,EBX                         ; 004d76c1
    POP EBX                             ; 004d76c3
    RET                                 ; 004d76c4

