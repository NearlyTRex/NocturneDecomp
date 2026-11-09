; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00562410(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shovel.cpp_factoryFuncShovel_FUN_005623e0 at 005623f3
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562410
        ;   Label: core_shovel.cpp_CShovel_ctor_FUN_00562410
    MOV EDX,dword ptr [ESP + 0x8]       ; 00562411
    PUSH EDX                            ; 00562415
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 00562416
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0056241b
    PUSH 0x5f1a13                       ; 0056241e
    MOV EBX,EAX                         ; 00562423
    ADD EAX,0x158                       ; 00562425
    PUSH EAX                            ; 0056242a
    MOV dword ptr [EAX + -0x4],0x605624 ; 0056242b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00562432
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2e0],0x7     ; 00562437
    MOV dword ptr [EBX + 0x56c],0xffffffff ; 00562441
    MOV dword ptr [EBX + 0x568],0x0     ; 0056244b
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00562455
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0056245f
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00562469
    ADD ESP,0x8                         ; 00562473
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 00562476
    MOV EAX,EBX                         ; 00562480
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00562482
    POP EBX                             ; 0056248c
    RET                                 ; 0056248d

