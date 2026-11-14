; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_0053fd70(CShotgun *this_ptr,uint flags)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShotgunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053fd70
        ;   Label: core_shotgun.cpp_CShotgun_dtor_FUN_0053fd70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053fd71
    TEST byte ptr [ESP + 0xc],0x4       ; 0053fd75
    JNZ 0x0053fd96                      ; 0053fd7a
        ;   XREF to: 0053fd96 (CONDITIONAL_JUMP)  ; LAB_0053fd96
    PUSH 0x1                            ; 0053fd7c
    PUSH EBX                            ; 0053fd7e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 0053fd7f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053fd84
    MOV DL,byte ptr [ESP + 0xc]         ; 0053fd87
    MOV EBX,EAX                         ; 0053fd8b
    TEST DL,0x2                         ; 0053fd8d
    JNZ 0x0053fdb1                      ; 0053fd90
        ;   XREF to: 0053fdb1 (CONDITIONAL_JUMP)  ; LAB_0053fdb1
    MOV EAX,EBX                         ; 0053fd92
    POP EBX                             ; 0053fd94
    RET                                 ; 0053fd95
    PUSH 0x5fb6d0                       ; 0053fd96 | g_CShotgunTypeInfo
        ;   Label: LAB_0053fd96
    PUSH EBX                            ; 0053fd9b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0053fd9c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0053fda1
    PUSH EAX                            ; 0053fda4
    CALL crt_unknown.c_FUN_005b7fce     ; 0053fda5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0053fdaa
    MOV EAX,EBX                         ; 0053fdad
    POP EBX                             ; 0053fdaf
    RET                                 ; 0053fdb0
    PUSH EAX                            ; 0053fdb1
        ;   Label: LAB_0053fdb1
    CALL crt_unknown.c_FUN_005b7fdc     ; 0053fdb2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0053fdb7
    MOV EAX,EBX                         ; 0053fdba
    POP EBX                             ; 0053fdbc
    RET                                 ; 0053fdbd

