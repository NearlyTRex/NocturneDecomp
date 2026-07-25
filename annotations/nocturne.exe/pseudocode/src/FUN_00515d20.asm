; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00515d20(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00515cf0 at 00515d03
;
; Referenced Globals:
;   TerminatedCString s_shotgun_kfm_00591036
;   undefined4 DAT_005a1aec
;   undefined1* PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_005a1af4 = 00553f10
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515d20
        ;   Label: FUN_00515d20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00515d21
    PUSH EDX                            ; 00515d25
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 00515d26
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_ctor_FUN_00553d90()
    ADD ESP,0x4                         ; 00515d2b
    PUSH 0x591036                       ; 00515d2e | = "shotgun.kfm"
    MOV EBX,EAX                         ; 00515d33
    ADD EAX,0x150                       ; 00515d35
    PUSH EAX                            ; 00515d3a
    MOV dword ptr [EAX + -0x4],0x5a1af4 ; 00515d3b | PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_005a1af4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00515d42
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x570],0x41200000 ; 00515d47
    MOV dword ptr [EBX + 0x2d0],0x1     ; 00515d51
    MOV dword ptr [EBX + 0x2d4],0x2     ; 00515d5b
    MOV dword ptr [EBX + 0x2d8],0x1     ; 00515d65
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00515d6f
    MOV dword ptr [EBX + 0x2e0],0x41700000 ; 00515d79
    FLD float ptr [0x005a1aec]          ; 00515d83 | DAT_005a1aec
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00515d89
    ADD ESP,0x8                         ; 00515d93
    MOV dword ptr [EBX + 0x574],0x0     ; 00515d96
    MOV EAX,EBX                         ; 00515da0
    FSTP float ptr [EBX + 0x55c]        ; 00515da2
    POP EBX                             ; 00515da8
    RET                                 ; 00515da9

