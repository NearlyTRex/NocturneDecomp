; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(CMoloch *this_ptr,uint flags)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CHero_full_vtable g_CMolochVTable
;   WatcomTypeInfo g_CMolochTypeInfo_005a0c10
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd9f0
        ;   Label: core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dd9f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dd9f5
    JNZ 0x004dda47                      ; 004dd9fa
        ;   XREF to: 004dda47 (CONDITIONAL_JUMP)  ; LAB_004dda47
    PUSH 0x0                            ; 004dd9fc
    ADD EBX,0x21dc4                     ; 004dd9fe
    PUSH EBX                            ; 004dda04
    MOV dword ptr [EBX + 0xfffde388],0x5a0ac4 ; 004dda05 | g_CMolochVTable
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 004dda0f
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004e0070(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dda14
    PUSH 0x0                            ; 004dda17
    SUB EAX,0x2388                      ; 004dda19
    PUSH EAX                            ; 004dda1e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004dda1f
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dda24
    PUSH 0x1                            ; 004dda27
    LEA EBX,[EAX + 0xfffe05c4]          ; 004dda29
    PUSH EBX                            ; 004dda2f
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 004dda30
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dda35
    MOV DL,byte ptr [ESP + 0xc]         ; 004dda38
    MOV EBX,EAX                         ; 004dda3c
    TEST DL,0x2                         ; 004dda3e
    JNZ 0x004dda62                      ; 004dda41
        ;   XREF to: 004dda62 (CONDITIONAL_JUMP)  ; LAB_004dda62
    MOV EAX,EBX                         ; 004dda43
    POP EBX                             ; 004dda45
    RET                                 ; 004dda46
    PUSH 0x5a0c10                       ; 004dda47 | g_CMolochTypeInfo_005a0c10
        ;   Label: LAB_004dda47
    PUSH EBX                            ; 004dda4c
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004dda4d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004dda52
    PUSH EAX                            ; 004dda55
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004dda56
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004dda5b
    MOV EAX,EBX                         ; 004dda5e
    POP EBX                             ; 004dda60
    RET                                 ; 004dda61
    PUSH EAX                            ; 004dda62
        ;   Label: LAB_004dda62
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004dda63
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004dda68
    MOV EAX,EBX                         ; 004dda6b
    POP EBX                             ; 004dda6d
    RET                                 ; 004dda6e

