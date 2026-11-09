; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004e74d0(CMelee *this_ptr,uint flags)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMeleeTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e74d0
        ;   Label: core_melee.cpp_CMelee_dtor_FUN_004e74d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e74d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e74d5
    JNZ 0x004e74f6                      ; 004e74da
        ;   XREF to: 004e74f6 (CONDITIONAL_JUMP)  ; LAB_004e74f6
    PUSH 0x1                            ; 004e74dc
    PUSH EBX                            ; 004e74de
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004e74df
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e74e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004e74e7
    MOV EBX,EAX                         ; 004e74eb
    TEST DL,0x2                         ; 004e74ed
    JNZ 0x004e7511                      ; 004e74f0
        ;   XREF to: 004e7511 (CONDITIONAL_JUMP)  ; LAB_004e7511
    MOV EAX,EBX                         ; 004e74f2
    POP EBX                             ; 004e74f4
    RET                                 ; 004e74f5
    PUSH 0x5e28a0                       ; 004e74f6 | g_CMeleeTypeInfo
        ;   Label: LAB_004e74f6
    PUSH EBX                            ; 004e74fb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004e74fc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004e7501
    PUSH EAX                            ; 004e7504
    CALL crt_unknown.c_FUN_005a30b6     ; 004e7505
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004e750a
    MOV EAX,EBX                         ; 004e750d
    POP EBX                             ; 004e750f
    RET                                 ; 004e7510
    PUSH EAX                            ; 004e7511
        ;   Label: LAB_004e7511
    CALL crt_unknown.c_FUN_005a30c4     ; 004e7512
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004e7517
    MOV EAX,EBX                         ; 004e751a
    POP EBX                             ; 004e751c
    RET                                 ; 004e751d

