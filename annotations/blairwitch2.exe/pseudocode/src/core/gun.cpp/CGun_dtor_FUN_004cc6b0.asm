; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004cc6b0(CGun *this_ptr,uint flags)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc6b0
        ;   Label: core_gun.cpp_CGun_dtor_FUN_004cc6b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc6b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cc6b5
    JNZ 0x004cc6d6                      ; 004cc6ba
        ;   XREF to: 004cc6d6 (CONDITIONAL_JUMP)  ; LAB_004cc6d6
    PUSH 0x1                            ; 004cc6bc
    PUSH EBX                            ; 004cc6be
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 004cc6bf
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cc6c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004cc6c7
    MOV EBX,EAX                         ; 004cc6cb
    TEST DL,0x2                         ; 004cc6cd
    JNZ 0x004cc6f1                      ; 004cc6d0
        ;   XREF to: 004cc6f1 (CONDITIONAL_JUMP)  ; LAB_004cc6f1
    MOV EAX,EBX                         ; 004cc6d2
    POP EBX                             ; 004cc6d4
    RET                                 ; 004cc6d5
    PUSH 0x5f7f40                       ; 004cc6d6 | g_CGunTypeInfo
        ;   Label: LAB_004cc6d6
    PUSH EBX                            ; 004cc6db
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004cc6dc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cc6e1
    PUSH EAX                            ; 004cc6e4
    CALL crt_unknown.c_FUN_005b7fce     ; 004cc6e5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004cc6ea
    MOV EAX,EBX                         ; 004cc6ed
    POP EBX                             ; 004cc6ef
    RET                                 ; 004cc6f0
    PUSH EAX                            ; 004cc6f1
        ;   Label: LAB_004cc6f1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004cc6f2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004cc6f7
    MOV EAX,EBX                         ; 004cc6fa
    POP EBX                             ; 004cc6fc
    RET                                 ; 004cc6fd

