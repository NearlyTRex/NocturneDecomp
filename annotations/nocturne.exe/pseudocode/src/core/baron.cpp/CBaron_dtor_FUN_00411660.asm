; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00411660(CBaron *this_ptr,uint flags)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronTypeInfo_00599d30
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411660
        ;   Label: core_baron.cpp_CBaron_dtor_FUN_00411660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411661
    TEST byte ptr [ESP + 0xc],0x4       ; 00411665
    JNZ 0x00411686                      ; 0041166a
        ;   XREF to: 00411686 (CONDITIONAL_JUMP)  ; LAB_00411686
    PUSH 0x1                            ; 0041166c
    PUSH EBX                            ; 0041166e
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 0041166f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00411674
    MOV DL,byte ptr [ESP + 0xc]         ; 00411677
    MOV EBX,EAX                         ; 0041167b
    TEST DL,0x2                         ; 0041167d
    JNZ 0x004116a1                      ; 00411680
        ;   XREF to: 004116a1 (CONDITIONAL_JUMP)  ; LAB_004116a1
    MOV EAX,EBX                         ; 00411682
    POP EBX                             ; 00411684
    RET                                 ; 00411685
    PUSH 0x599d30                       ; 00411686 | g_CBaronTypeInfo_00599d30
        ;   Label: LAB_00411686
    PUSH EBX                            ; 0041168b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041168c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00411691
    PUSH EAX                            ; 00411694
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00411695
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0041169a
    MOV EAX,EBX                         ; 0041169d
    POP EBX                             ; 0041169f
    RET                                 ; 004116a0
    PUSH EAX                            ; 004116a1
        ;   Label: LAB_004116a1
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004116a2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004116a7
    MOV EAX,EBX                         ; 004116aa
    POP EBX                             ; 004116ac
    RET                                 ; 004116ad

