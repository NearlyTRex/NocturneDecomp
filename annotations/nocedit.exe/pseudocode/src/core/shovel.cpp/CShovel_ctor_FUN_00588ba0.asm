; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CShovel * core_shovel.cpp_CShovel_ctor_FUN_00588ba0(CShovel * this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shovel.cpp_factoryFunc_FUN_00588b60 at 00588b7a
;
; Referenced Globals:
;   TerminatedCString s_shoveit_kfm_00649b9a
;   CDemonActor_vtable g_CShovelVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588ba0
        ;   Label: core_shovel.cpp_CShovel_ctor_FUN_00588ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00588ba1
    PUSH EDX                            ; 00588ba5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 00588ba6
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00588bab
    PUSH 0x649b9a                       ; 00588bae | = "shoveit.kfm"
    MOV EBX,EAX                         ; 00588bb3
    ADD EAX,0x158                       ; 00588bb5
    PUSH EAX                            ; 00588bba
    MOV dword ptr [EAX + -0x4],0x662bd4 ; 00588bbb | g_CShovelVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00588bc2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2e0],0x7     ; 00588bc7
    MOV dword ptr [EBX + 0x56c],0xffffffff ; 00588bd1
    MOV dword ptr [EBX + 0x568],0x0     ; 00588bdb
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00588be5
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00588bef
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00588bf9
    ADD ESP,0x8                         ; 00588c03
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 00588c06
    MOV EAX,EBX                         ; 00588c10
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00588c12
    POP EBX                             ; 00588c1c
    RET                                 ; 00588c1d

