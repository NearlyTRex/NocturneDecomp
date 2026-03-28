; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_00528bf0(CMoloch *this_ptr,uint flags)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CMolochVTable
;   WatcomTypeInfo g_CMolochTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   core_morph.cpp_CMorph_dtor_FUN_0052b330
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528bf0
        ;   Label: core_moloch.cpp_CMoloch_dtor_FUN_00528bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528bf1
    TEST byte ptr [ESP + 0xc],0x4       ; 00528bf5
    JNZ 0x00528c47                      ; 00528bfa
        ;   XREF to: 00528c47 (CONDITIONAL_JUMP)  ; LAB_00528c47
    PUSH 0x0                            ; 00528bfc
    ADD EBX,0x21f5c                     ; 00528bfe
    PUSH EBX                            ; 00528c04
    MOV dword ptr [EBX + 0xfffde1f8],0x661944 ; 00528c05 | g_CMolochVTable
    CALL core_morph.cpp_CMorph_dtor_FUN_0052b330 ; 00528c0f
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_0052b330(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00528c14
    PUSH 0x0                            ; 00528c17
    SUB EAX,0x2388                      ; 00528c19
    PUSH EAX                            ; 00528c1e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00528c1f
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00528c24
    PUSH 0x1                            ; 00528c27
    LEA EBX,[EAX + 0xfffe042c]          ; 00528c29
    PUSH EBX                            ; 00528c2f
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 00528c30
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00528c35
    MOV DL,byte ptr [ESP + 0xc]         ; 00528c38
    MOV EBX,EAX                         ; 00528c3c
    TEST DL,0x2                         ; 00528c3e
    JNZ 0x00528c62                      ; 00528c41
        ;   XREF to: 00528c62 (CONDITIONAL_JUMP)  ; LAB_00528c62
    MOV EAX,EBX                         ; 00528c43
    POP EBX                             ; 00528c45
    RET                                 ; 00528c46
    PUSH 0x661ab0                       ; 00528c47 | g_CMolochTypeInfo
        ;   Label: LAB_00528c47
    PUSH EBX                            ; 00528c4c
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00528c4d
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00528c52
    PUSH EAX                            ; 00528c55
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00528c56
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00528c5b
    MOV EAX,EBX                         ; 00528c5e
    POP EBX                             ; 00528c60
    RET                                 ; 00528c61
    PUSH EAX                            ; 00528c62
        ;   Label: LAB_00528c62
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00528c63
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00528c68
    MOV EAX,EBX                         ; 00528c6b
    POP EBX                             ; 00528c6d
    RET                                 ; 00528c6e

