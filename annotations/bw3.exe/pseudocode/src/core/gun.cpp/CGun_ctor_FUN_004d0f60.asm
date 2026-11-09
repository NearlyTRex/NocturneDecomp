; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004d0f60(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gun.cpp_factoryFuncGun_FUN_004d0f30 at 004d0f43
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0f60
        ;   Label: core_gun.cpp_CGun_ctor_FUN_004d0f60
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0f61
    PUSH EDX                            ; 004d0f65
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 004d0f66
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004d0f6b
    PUSH 0x5c49cc                       ; 004d0f6e
    MOV EBX,EAX                         ; 004d0f73
    ADD EAX,0x158                       ; 004d0f75
    PUSH EAX                            ; 004d0f7a
    MOV dword ptr [EAX + -0x4],0x5e1094 ; 004d0f7b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004d0f82
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004d0f87
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004d0f91
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004d0f9b
    ADD ESP,0x8                         ; 004d0fa5
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004d0fa8
    MOV EAX,EBX                         ; 004d0fb2
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004d0fb4
    POP EBX                             ; 004d0fbe
    RET                                 ; 004d0fbf

