; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint flags)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSvetlanaTypeInfo
;
; Called Functions:
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d9f50
        ;   Label: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d9f51
    TEST byte ptr [ESP + 0xc],0x4       ; 005d9f55
    JNZ 0x005d9f9d                      ; 005d9f5a
        ;   XREF to: 005d9f9d (CONDITIONAL_JUMP)  ; LAB_005d9f9d
    PUSH 0x0                            ; 005d9f5c
    ADD EBX,0x5fa4c                     ; 005d9f5e
    PUSH EBX                            ; 005d9f64
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 005d9f65
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d9f6a
    PUSH 0x0                            ; 005d9f6d
    SUB EAX,0x3fe70                     ; 005d9f6f
    PUSH EAX                            ; 005d9f74
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 005d9f75
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d9f7a
    PUSH 0x1                            ; 005d9f7d
    LEA EBX,[EAX + 0xfffe0424]          ; 005d9f7f
    PUSH EBX                            ; 005d9f85
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 005d9f86
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d9f8b
    MOV DL,byte ptr [ESP + 0xc]         ; 005d9f8e
    MOV EBX,EAX                         ; 005d9f92
    TEST DL,0x2                         ; 005d9f94
    JNZ 0x005d9fb8                      ; 005d9f97
        ;   XREF to: 005d9fb8 (CONDITIONAL_JUMP)  ; LAB_005d9fb8
    MOV EAX,EBX                         ; 005d9f99
    POP EBX                             ; 005d9f9b
    RET                                 ; 005d9f9c
    PUSH 0x663ed0                       ; 005d9f9d | g_CSvetlanaTypeInfo
        ;   Label: LAB_005d9f9d
    PUSH EBX                            ; 005d9fa2
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005d9fa3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005d9fa8
    PUSH EAX                            ; 005d9fab
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005d9fac
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005d9fb1
    MOV EAX,EBX                         ; 005d9fb4
    POP EBX                             ; 005d9fb6
    RET                                 ; 005d9fb7
    PUSH EAX                            ; 005d9fb8
        ;   Label: LAB_005d9fb8
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005d9fb9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d9fbe
    MOV EAX,EBX                         ; 005d9fc1
    POP EBX                             ; 005d9fc3
    RET                                 ; 005d9fc4

