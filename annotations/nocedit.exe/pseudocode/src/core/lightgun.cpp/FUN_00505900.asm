; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLightGun * core_lightgun.cpp_FUN_00505900(CLightGun * this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lightgun.cpp_FUN_005058c0 at 005058da
;
; Referenced Globals:
;   TerminatedCString s_cre_kfm_00631455
;   float FLOAT_00660a3c = 8
;   float FLOAT_00660a40 = 30
;   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00660a64
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505900
        ;   Label: core_lightgun.cpp_FUN_00505900
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505901
    PUSH EDX                            ; 00505905
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 00505906
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0050590b
    PUSH 0x631455                       ; 0050590e | = "cre.kfm"
    MOV EBX,EAX                         ; 00505913
    ADD EAX,0x158                       ; 00505915
    PUSH EAX                            ; 0050591a
    MOV dword ptr [EAX + -0x4],0x660a64 ; 0050591b | PTR_core_weapon.cpp_ActorModelSomething_FUN_00660a64
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00505922
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x57c],0x0     ; 00505927
    MOV dword ptr [EBX + 0x578],0x0     ; 00505931
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0050593b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00505945
    MOV dword ptr [EBX + 0x2e0],0x2     ; 0050594f
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00505959
    MOV dword ptr [EBX + 0x2e8],0x42000000 ; 00505963
    MOV dword ptr [EBX + 0x2ec],0x1     ; 0050596d
    FLD float ptr [0x00660a3c]          ; 00505977 | FLOAT_00660a3c
    MOV dword ptr [EBX + 0x2f0],0x0     ; 0050597d
    FLD float ptr [0x00660a40]          ; 00505987 | FLOAT_00660a40
    MOV dword ptr [EBX + 0x588],0x0     ; 0050598d
    ADD ESP,0x8                         ; 00505997
    MOV dword ptr [EBX + 0x584],0x3f800000 ; 0050599a
    MOV EAX,EBX                         ; 005059a4
    FXCH                                ; 005059a6
    FSTP float ptr [EBX + 0x564]        ; 005059a8
    FSTP float ptr [EBX + 0x580]        ; 005059ae
    POP EBX                             ; 005059b4
    RET                                 ; 005059b5

