; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRifle * __cdecl core_rifle_cpp_CRifle_ctor_FUN_0053ff20(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_rifle.cpp_factoryFuncRifle_FUN_0053fef0 at 0053ff03
;
; Referenced Globals:
;   undefined4 DAT_00604afc
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ff20
        ;   Label: core_rifle.cpp_CRifle_ctor_FUN_0053ff20
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053ff21
    PUSH EDX                            ; 0053ff25
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 0053ff26
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0053ff2b
    PUSH 0x5edc06                       ; 0053ff2e
    MOV EBX,EAX                         ; 0053ff33
    ADD EAX,0x158                       ; 0053ff35
    PUSH EAX                            ; 0053ff3a
    MOV dword ptr [EAX + -0x4],0x604b04 ; 0053ff3b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0053ff42
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x578],0x40400000 ; 0053ff47
    MOV dword ptr [EBX + 0x2d8],0x2     ; 0053ff51
    MOV dword ptr [EBX + 0x2dc],0x3     ; 0053ff5b
    MOV dword ptr [EBX + 0x2e0],0x9     ; 0053ff65
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0053ff6f
    MOV dword ptr [EBX + 0x2e8],0x420c0000 ; 0053ff79
    FLD float ptr [0x00604afc]          ; 0053ff83 | DAT_00604afc
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0053ff89
    ADD ESP,0x8                         ; 0053ff93
    MOV dword ptr [EBX + 0x57c],0x0     ; 0053ff96
    MOV EAX,EBX                         ; 0053ffa0
    FSTP float ptr [EBX + 0x564]        ; 0053ffa2
    POP EBX                             ; 0053ffa8
    RET                                 ; 0053ffa9

