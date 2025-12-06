; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0(CShotgun * this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shotgun.cpp_FUN_00587ea0 at 00587eba
;
; Referenced Globals:
;   TerminatedCString s_shotgun_kfm_00649afc
;   undefined4 DAT_00662a7c
;   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00662a84
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587ee0
        ;   Label: core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00587ee1
    PUSH EDX                            ; 00587ee5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 00587ee6 | CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00587eeb
    PUSH 0x649afc                       ; 00587eee | = "shotgun.kfm" | s_shotgun_kfm_00649afc = shotgun.kfm
    MOV EBX,EAX                         ; 00587ef3
    ADD EAX,0x158                       ; 00587ef5
    PUSH EAX                            ; 00587efa
    MOV dword ptr [EAX + -0x4],0x662a84 ; 00587efb | CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00662a84
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00587f02 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x578],0x41200000 ; 00587f07
    MOV dword ptr [EBX + 0x2d8],0x1     ; 00587f11
    MOV dword ptr [EBX + 0x2dc],0x2     ; 00587f1b
    MOV dword ptr [EBX + 0x2e0],0x1     ; 00587f25
    MOV dword ptr [EBX + 0x2e4],0x1     ; 00587f2f
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 00587f39
    FLD float ptr [0x00662a7c]          ; 00587f43 | DAT_00662a7c
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00587f49
    ADD ESP,0x8                         ; 00587f53
    MOV dword ptr [EBX + 0x57c],0x0     ; 00587f56
    MOV EAX,EBX                         ; 00587f60
    FSTP float ptr [EBX + 0x564]        ; 00587f62
    POP EBX                             ; 00587f68
    RET                                 ; 00587f69

