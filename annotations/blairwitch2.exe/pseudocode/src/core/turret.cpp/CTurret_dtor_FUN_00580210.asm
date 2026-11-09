; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_00580210(CTurret *this_ptr,uint flags)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTurretTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580210
        ;   Label: core_turret.cpp_CTurret_dtor_FUN_00580210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00580211
    TEST byte ptr [ESP + 0xc],0x4       ; 00580215
    JNZ 0x00580236                      ; 0058021a
        ;   XREF to: 00580236 (CONDITIONAL_JUMP)  ; LAB_00580236
    PUSH 0x1                            ; 0058021c
    PUSH EBX                            ; 0058021e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 0058021f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00580224
    MOV DL,byte ptr [ESP + 0xc]         ; 00580227
    MOV EBX,EAX                         ; 0058022b
    TEST DL,0x2                         ; 0058022d
    JNZ 0x00580251                      ; 00580230
        ;   XREF to: 00580251 (CONDITIONAL_JUMP)  ; LAB_00580251
    MOV EAX,EBX                         ; 00580232
    POP EBX                             ; 00580234
    RET                                 ; 00580235
    PUSH 0x5fd650                       ; 00580236 | g_CTurretTypeInfo
        ;   Label: LAB_00580236
    PUSH EBX                            ; 0058023b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0058023c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00580241
    PUSH EAX                            ; 00580244
    CALL crt_unknown.c_FUN_005b7fce     ; 00580245
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0058024a
    MOV EAX,EBX                         ; 0058024d
    POP EBX                             ; 0058024f
    RET                                 ; 00580250
    PUSH EAX                            ; 00580251
        ;   Label: LAB_00580251
    CALL crt_unknown.c_FUN_005b7fdc     ; 00580252
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00580257
    MOV EAX,EBX                         ; 0058025a
    POP EBX                             ; 0058025c
    RET                                 ; 0058025d

