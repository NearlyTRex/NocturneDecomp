; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHero * core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CHero *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CIcePickTypeInfo_0059f530
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb6b0
        ;   Label: core_icepick.cpp_CIcePick_dtor_FUN_004bb6b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb6b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004bb6b5
    JNZ 0x004bb6d6                      ; 004bb6ba
        ;   XREF to: 004bb6d6 (CONDITIONAL_JUMP)  ; LAB_004bb6d6
    PUSH 0x1                            ; 004bb6bc
    PUSH EBX                            ; 004bb6be
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 004bb6bf
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb6c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004bb6c7
    MOV EBX,EAX                         ; 004bb6cb
    TEST DL,0x2                         ; 004bb6cd
    JNZ 0x004bb6f1                      ; 004bb6d0
        ;   XREF to: 004bb6f1 (CONDITIONAL_JUMP)  ; LAB_004bb6f1
    MOV EAX,EBX                         ; 004bb6d2
    POP EBX                             ; 004bb6d4
    RET                                 ; 004bb6d5
    PUSH 0x59f530                       ; 004bb6d6 | g_CIcePickTypeInfo_0059f530
        ;   Label: LAB_004bb6d6
    PUSH EBX                            ; 004bb6db
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004bb6dc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004bb6e1
    PUSH EAX                            ; 004bb6e4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004bb6e5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004bb6ea
    MOV EAX,EBX                         ; 004bb6ed
    POP EBX                             ; 004bb6ef
    RET                                 ; 004bb6f0
    PUSH EAX                            ; 004bb6f1
        ;   Label: LAB_004bb6f1
    CALL crt_unknown.c_FUN_00564494     ; 004bb6f2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004bb6f7
    MOV EAX,EBX                         ; 004bb6fa
    POP EBX                             ; 004bb6fc
    RET                                 ; 004bb6fd

