; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004b9860(CFlameThrower *this_ptr,uint flags)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameThrowerTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9860
        ;   Label: core_flamegun.cpp_CFlameThrower_dtor_FUN_004b9860
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9861
    TEST byte ptr [ESP + 0xc],0x4       ; 004b9865
    JNZ 0x004b9886                      ; 004b986a
        ;   XREF to: 004b9886 (CONDITIONAL_JUMP)  ; LAB_004b9886
    PUSH 0x1                            ; 004b986c
    PUSH EBX                            ; 004b986e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 004b986f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9874
    MOV DL,byte ptr [ESP + 0xc]         ; 004b9877
    MOV EBX,EAX                         ; 004b987b
    TEST DL,0x2                         ; 004b987d
    JNZ 0x004b98a1                      ; 004b9880
        ;   XREF to: 004b98a1 (CONDITIONAL_JUMP)  ; LAB_004b98a1
    MOV EAX,EBX                         ; 004b9882
    POP EBX                             ; 004b9884
    RET                                 ; 004b9885
    PUSH 0x6006d0                       ; 004b9886 | g_CFlameThrowerTypeInfo
        ;   Label: LAB_004b9886
    PUSH EBX                            ; 004b988b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004b988c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004b9891
    PUSH EAX                            ; 004b9894
    CALL crt_unknown.c_FUN_005c0336     ; 004b9895
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004b989a
    MOV EAX,EBX                         ; 004b989d
    POP EBX                             ; 004b989f
    RET                                 ; 004b98a0
    PUSH EAX                            ; 004b98a1
        ;   Label: LAB_004b98a1
    CALL crt_unknown.c_FUN_005c0344     ; 004b98a2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004b98a7
    MOV EAX,EBX                         ; 004b98aa
    POP EBX                             ; 004b98ac
    RET                                 ; 004b98ad

