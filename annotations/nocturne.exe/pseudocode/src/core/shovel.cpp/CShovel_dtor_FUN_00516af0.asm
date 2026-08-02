; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00516af0(CShovel *this_ptr,uint flags)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShovelTypeInfo_005a1d30
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516af0
        ;   Label: core_shovel.cpp_CShovel_dtor_FUN_00516af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00516af1
    TEST byte ptr [ESP + 0xc],0x4       ; 00516af5
    JNZ 0x00516b16                      ; 00516afa
        ;   XREF to: 00516b16 (CONDITIONAL_JUMP)  ; LAB_00516b16
    PUSH 0x1                            ; 00516afc
    PUSH EBX                            ; 00516afe
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 00516aff
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00516b04
    MOV DL,byte ptr [ESP + 0xc]         ; 00516b07
    MOV EBX,EAX                         ; 00516b0b
    TEST DL,0x2                         ; 00516b0d
    JNZ 0x00516b31                      ; 00516b10
        ;   XREF to: 00516b31 (CONDITIONAL_JUMP)  ; LAB_00516b31
    MOV EAX,EBX                         ; 00516b12
    POP EBX                             ; 00516b14
    RET                                 ; 00516b15
    PUSH 0x5a1d30                       ; 00516b16 | g_CShovelTypeInfo_005a1d30
        ;   Label: LAB_00516b16
    PUSH EBX                            ; 00516b1b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00516b1c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00516b21
    PUSH EAX                            ; 00516b24
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00516b25
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00516b2a
    MOV EAX,EBX                         ; 00516b2d
    POP EBX                             ; 00516b2f
    RET                                 ; 00516b30
    PUSH EAX                            ; 00516b31
        ;   Label: LAB_00516b31
    CALL crt_unknown.c_FUN_00564494     ; 00516b32
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00516b37
    MOV EAX,EBX                         ; 00516b3a
    POP EBX                             ; 00516b3c
    RET                                 ; 00516b3d

