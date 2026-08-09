; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004f02f0(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gun.cpp_factoryFuncGun_FUN_004f02b0 at 004f02ca
;
; Referenced Globals:
;   TerminatedCString s_gat_kfm_0062e798
;   CWeapon_full_vtable g_CGunVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f02f0
        ;   Label: core_gun.cpp_CGun_ctor_FUN_004f02f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f02f1
    PUSH EDX                            ; 004f02f5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 004f02f6
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004f02fb
    PUSH 0x62e798                       ; 004f02fe | = "gat.kfm"
    MOV EBX,EAX                         ; 004f0303
    ADD EAX,0x158                       ; 004f0305
    PUSH EAX                            ; 004f030a
    MOV dword ptr [EAX + -0x4],0x65f2a4 ; 004f030b | g_CGunVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004f0312
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004f0317
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004f0321
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004f032b
    ADD ESP,0x8                         ; 004f0335
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004f0338
    MOV EAX,EBX                         ; 004f0342
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004f0344
    POP EBX                             ; 004f034e
    RET                                 ; 004f034f

