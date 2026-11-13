; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_00528660(CRifle *this_ptr,uint flags)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CRifleTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528660
        ;   Label: core_rifle.cpp_CRifle_dtor_FUN_00528660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528661
    TEST byte ptr [ESP + 0xc],0x4       ; 00528665
    JNZ 0x00528686                      ; 0052866a
        ;   XREF to: 00528686 (CONDITIONAL_JUMP)  ; LAB_00528686
    PUSH 0x1                            ; 0052866c
    PUSH EBX                            ; 0052866e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 0052866f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00528674
    MOV DL,byte ptr [ESP + 0xc]         ; 00528677
    MOV EBX,EAX                         ; 0052867b
    TEST DL,0x2                         ; 0052867d
    JNZ 0x005286a1                      ; 00528680
        ;   XREF to: 005286a1 (CONDITIONAL_JUMP)  ; LAB_005286a1
    MOV EAX,EBX                         ; 00528682
    POP EBX                             ; 00528684
    RET                                 ; 00528685
    PUSH 0x5e3970                       ; 00528686 | g_CRifleTypeInfo
        ;   Label: LAB_00528686
    PUSH EBX                            ; 0052868b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0052868c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00528691
    PUSH EAX                            ; 00528694
    CALL crt_unknown.c_FUN_005a30b6     ; 00528695
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0052869a
    MOV EAX,EBX                         ; 0052869d
    POP EBX                             ; 0052869f
    RET                                 ; 005286a0
    PUSH EAX                            ; 005286a1
        ;   Label: LAB_005286a1
    CALL crt_unknown.c_FUN_005a30c4     ; 005286a2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005286a7
    MOV EAX,EBX                         ; 005286aa
    POP EBX                             ; 005286ac
    RET                                 ; 005286ad

