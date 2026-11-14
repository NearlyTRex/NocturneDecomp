; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCross * __cdecl core_cross_cpp_CCross_dtor_FUN_005a6b30(CCross *this_ptr,uint flags)
;
; Parameters:
; CCross *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CWeapon_full_vtable g_CCrossVTable
;   WatcomTypeInfo g_CCrossTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6b30
        ;   Label: core_cross.cpp_CCross_dtor_FUN_005a6b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a6b31
    TEST byte ptr [ESP + 0xc],0x4       ; 005a6b35
    JNZ 0x005a6b60                      ; 005a6b3a
        ;   XREF to: 005a6b60 (CONDITIONAL_JUMP)  ; LAB_005a6b60
    PUSH 0x1                            ; 005a6b3c
    PUSH EBX                            ; 005a6b3e
    MOV dword ptr [EBX + 0x2b0],0x5ffe84 ; 005a6b3f | g_CCrossVTable
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 005a6b49
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a6b4e
    MOV DL,byte ptr [ESP + 0xc]         ; 005a6b51
    MOV EBX,EAX                         ; 005a6b55
    TEST DL,0x2                         ; 005a6b57
    JNZ 0x005a6b7b                      ; 005a6b5a
        ;   XREF to: 005a6b7b (CONDITIONAL_JUMP)  ; LAB_005a6b7b
    MOV EAX,EBX                         ; 005a6b5c
    POP EBX                             ; 005a6b5e
    RET                                 ; 005a6b5f
    PUSH 0x6000a0                       ; 005a6b60 | g_CCrossTypeInfo
        ;   Label: LAB_005a6b60
    PUSH EBX                            ; 005a6b65
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a6b66
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a6b6b
    PUSH EAX                            ; 005a6b6e
    CALL crt_unknown.c_FUN_005b7fce     ; 005a6b6f
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a6b74
    MOV EAX,EBX                         ; 005a6b77
    POP EBX                             ; 005a6b79
    RET                                 ; 005a6b7a
    PUSH EAX                            ; 005a6b7b
        ;   Label: LAB_005a6b7b
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a6b7c
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a6b81
    MOV EAX,EBX                         ; 005a6b84
    POP EBX                             ; 005a6b86
    RET                                 ; 005a6b87

