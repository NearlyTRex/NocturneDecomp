; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410bb0(CBaronWeapon *this_ptr,uint flags)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronWeaponTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410bb0
        ;   Label: core_baron.cpp_CBaronWeapon_dtor_FUN_00410bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410bb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00410bb5
    JNZ 0x00410bd6                      ; 00410bba
        ;   XREF to: 00410bd6 (CONDITIONAL_JUMP)  ; LAB_00410bd6
    PUSH 0x1                            ; 00410bbc
    PUSH EBX                            ; 00410bbe
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 00410bbf
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00410bc4
    MOV DL,byte ptr [ESP + 0xc]         ; 00410bc7
    MOV EBX,EAX                         ; 00410bcb
    TEST DL,0x2                         ; 00410bcd
    JNZ 0x00410bf1                      ; 00410bd0
        ;   XREF to: 00410bf1 (CONDITIONAL_JUMP)  ; LAB_00410bf1
    MOV EAX,EBX                         ; 00410bd2
    POP EBX                             ; 00410bd4
    RET                                 ; 00410bd5
    PUSH 0x5f2c20                       ; 00410bd6 | g_CBaronWeaponTypeInfo
        ;   Label: LAB_00410bd6
    PUSH EBX                            ; 00410bdb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00410bdc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00410be1
    PUSH EAX                            ; 00410be4
    CALL crt_unknown.c_FUN_005b7fce     ; 00410be5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00410bea
    MOV EAX,EBX                         ; 00410bed
    POP EBX                             ; 00410bef
    RET                                 ; 00410bf0
    PUSH EAX                            ; 00410bf1
        ;   Label: LAB_00410bf1
    CALL crt_unknown.c_FUN_005b7fdc     ; 00410bf2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00410bf7
    MOV EAX,EBX                         ; 00410bfa
    POP EBX                             ; 00410bfc
    RET                                 ; 00410bfd

