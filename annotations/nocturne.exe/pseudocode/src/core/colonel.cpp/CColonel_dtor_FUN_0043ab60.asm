; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_0043ab60(CColonel *this_ptr,uint flags)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CColonelTypeInfo_0059b6c0
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ab60
        ;   Label: core_colonel.cpp_CColonel_dtor_FUN_0043ab60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ab61
    TEST byte ptr [ESP + 0xc],0x4       ; 0043ab65
    JNZ 0x0043ab86                      ; 0043ab6a
        ;   XREF to: 0043ab86 (CONDITIONAL_JUMP)  ; LAB_0043ab86
    PUSH 0x1                            ; 0043ab6c
    PUSH EBX                            ; 0043ab6e
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 0043ab6f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043ab74
    MOV DL,byte ptr [ESP + 0xc]         ; 0043ab77
    MOV EBX,EAX                         ; 0043ab7b
    TEST DL,0x2                         ; 0043ab7d
    JNZ 0x0043aba1                      ; 0043ab80
        ;   XREF to: 0043aba1 (CONDITIONAL_JUMP)  ; LAB_0043aba1
    MOV EAX,EBX                         ; 0043ab82
    POP EBX                             ; 0043ab84
    RET                                 ; 0043ab85
    PUSH 0x59b6c0                       ; 0043ab86 | g_CColonelTypeInfo_0059b6c0
        ;   Label: LAB_0043ab86
    PUSH EBX                            ; 0043ab8b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0043ab8c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043ab91
    PUSH EAX                            ; 0043ab94
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043ab95
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0043ab9a
    MOV EAX,EBX                         ; 0043ab9d
    POP EBX                             ; 0043ab9f
    RET                                 ; 0043aba0
    PUSH EAX                            ; 0043aba1
        ;   Label: LAB_0043aba1
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0043aba2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0043aba7
    MOV EAX,EBX                         ; 0043abaa
    POP EBX                             ; 0043abac
    RET                                 ; 0043abad

