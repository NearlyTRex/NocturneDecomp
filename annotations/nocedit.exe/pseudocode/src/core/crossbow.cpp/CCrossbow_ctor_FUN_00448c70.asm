; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00448c70(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_factoryFunc_FUN_00448c30 at 00448c4a
;
; Referenced Globals:
;   TerminatedCString s_crossbow_kfm_00619b79
;   CDemonActor_vtable g_CCrossbowVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448c70
        ;   Label: core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448c71
    PUSH EBX                            ; 00448c75
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 00448c76
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00448c7b
    ADD EAX,0x57c                       ; 00448c7e
    PUSH EAX                            ; 00448c83
    CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0 ; 00448c84
        ;   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00448c89
    LEA EBX,[EAX + 0xfffffa84]          ; 00448c8c
    PUSH 0x619b79                       ; 00448c92 | = "crossbow.kfm"
    LEA EAX,[EBX + 0x158]               ; 00448c97
    PUSH EAX                            ; 00448c9d
    MOV dword ptr [EBX + 0x154],0x65c394 ; 00448c9e | g_CCrossbowVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00448ca8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x300],0x0     ; 00448cad
    MOV dword ptr [EBX + 0x578],0x0     ; 00448cb7
    MOV dword ptr [EBX + 0x6d4],0x3ee66666 ; 00448cc1
    MOV dword ptr [EBX + 0x6d8],0x3f59999a ; 00448ccb
    MOV dword ptr [EBX + 0x6dc],0x3ee66666 ; 00448cd5
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00448cdf
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00448ce9
    MOV dword ptr [EBX + 0x2e0],0x1     ; 00448cf3
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00448cfd
    ADD ESP,0x8                         ; 00448d07
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 00448d0a
    MOV EAX,EBX                         ; 00448d14
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00448d16
    POP EBX                             ; 00448d20
    RET                                 ; 00448d21

