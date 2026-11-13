; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_005409c0(CRifle *this_ptr,uint flags)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CRifleTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005409c0
        ;   Label: core_rifle.cpp_CRifle_dtor_FUN_005409c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005409c1
    TEST byte ptr [ESP + 0xc],0x4       ; 005409c5
    JNZ 0x005409e6                      ; 005409ca
        ;   XREF to: 005409e6 (CONDITIONAL_JUMP)  ; LAB_005409e6
    PUSH 0x1                            ; 005409cc
    PUSH EBX                            ; 005409ce
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 005409cf
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005409d4
    MOV DL,byte ptr [ESP + 0xc]         ; 005409d7
    MOV EBX,EAX                         ; 005409db
    TEST DL,0x2                         ; 005409dd
    JNZ 0x00540a01                      ; 005409e0
        ;   XREF to: 00540a01 (CONDITIONAL_JUMP)  ; LAB_00540a01
    MOV EAX,EBX                         ; 005409e2
    POP EBX                             ; 005409e4
    RET                                 ; 005409e5
    PUSH 0x604c00                       ; 005409e6 | g_CRifleTypeInfo
        ;   Label: LAB_005409e6
    PUSH EBX                            ; 005409eb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005409ec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005409f1
    PUSH EAX                            ; 005409f4
    CALL crt_unknown.c_FUN_005c0336     ; 005409f5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005409fa
    MOV EAX,EBX                         ; 005409fd
    POP EBX                             ; 005409ff
    RET                                 ; 00540a00
    PUSH EAX                            ; 00540a01
        ;   Label: LAB_00540a01
    CALL crt_unknown.c_FUN_005c0344     ; 00540a02
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00540a07
    MOV EAX,EBX                         ; 00540a0a
    POP EBX                             ; 00540a0c
    RET                                 ; 00540a0d

