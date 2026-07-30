; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00516a10(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shovel.cpp_factoryFunc_FUN_005169e0 at 005169f3
;
; Referenced Globals:
;   TerminatedCString s_shoveit_kfm_005910c5
;   CWeapon_full_vtable g_CShovelVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516a10
        ;   Label: core_shovel.cpp_CShovel_ctor_FUN_00516a10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00516a11
    PUSH EDX                            ; 00516a15
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 00516a16
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_00553d90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00516a1b
    PUSH 0x5910c5                       ; 00516a1e | = "shoveit.kfm"
    MOV EBX,EAX                         ; 00516a23
    ADD EAX,0x150                       ; 00516a25
    PUSH EAX                            ; 00516a2a
    MOV dword ptr [EAX + -0x4],0x5a1c34 ; 00516a2b | g_CShovelVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00516a32
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x7     ; 00516a37
    MOV dword ptr [EBX + 0x564],0xffffffff ; 00516a41
    MOV dword ptr [EBX + 0x560],0x0     ; 00516a4b
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00516a55
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00516a5f
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00516a69
    ADD ESP,0x8                         ; 00516a73
    MOV dword ptr [EBX + 0x2e0],0x40a00000 ; 00516a76
    MOV EAX,EBX                         ; 00516a80
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00516a82
    POP EBX                             ; 00516a8c
    RET                                 ; 00516a8d

