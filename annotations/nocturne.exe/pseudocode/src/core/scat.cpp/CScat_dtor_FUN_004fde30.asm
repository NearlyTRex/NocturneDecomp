; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_004fde30(CScat *this_ptr,uint flags)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CScatTypeInfo_005a16a0
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fde30
        ;   Label: core_scat.cpp_CScat_dtor_FUN_004fde30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fde31
    TEST byte ptr [ESP + 0xc],0x4       ; 004fde35
    JNZ 0x004fde56                      ; 004fde3a
        ;   XREF to: 004fde56 (CONDITIONAL_JUMP)  ; LAB_004fde56
    PUSH 0x1                            ; 004fde3c
    PUSH EBX                            ; 004fde3e
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 004fde3f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004fde44
    MOV DL,byte ptr [ESP + 0xc]         ; 004fde47
    MOV EBX,EAX                         ; 004fde4b
    TEST DL,0x2                         ; 004fde4d
    JNZ 0x004fde71                      ; 004fde50
        ;   XREF to: 004fde71 (CONDITIONAL_JUMP)  ; LAB_004fde71
    MOV EAX,EBX                         ; 004fde52
    POP EBX                             ; 004fde54
    RET                                 ; 004fde55
    PUSH 0x5a16a0                       ; 004fde56 | g_CScatTypeInfo_005a16a0
        ;   Label: LAB_004fde56
    PUSH EBX                            ; 004fde5b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004fde5c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004fde61
    PUSH EAX                            ; 004fde64
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004fde65
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004fde6a
    MOV EAX,EBX                         ; 004fde6d
    POP EBX                             ; 004fde6f
    RET                                 ; 004fde70
    PUSH EAX                            ; 004fde71
        ;   Label: LAB_004fde71
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004fde72
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004fde77
    MOV EAX,EBX                         ; 004fde7a
    POP EBX                             ; 004fde7c
    RET                                 ; 004fde7d

