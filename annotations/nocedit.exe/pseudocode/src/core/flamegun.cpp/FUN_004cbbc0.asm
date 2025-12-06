; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlashlight * core_flamegun.cpp_FUN_004cbbc0(CFlashlight * this_ptr)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_FUN_004cbb80 at 004cbb9a
;
; Referenced Globals:
;   TerminatedCString s_flashlit_kfm_0062a3c9
;   undefined4 DAT_0065e3cc
;   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065e3d4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbbc0
        ;   Label: core_flamegun.cpp_FUN_004cbbc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cbbc1
    PUSH EDX                            ; 004cbbc5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 004cbbc6 | CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cbbcb
    PUSH 0x62a3c9                       ; 004cbbce | = "flashlit.kfm" | s_flashlit_kfm_0062a3c9 = flashlit.kfm
    MOV EBX,EAX                         ; 004cbbd3
    ADD EAX,0x158                       ; 004cbbd5
    PUSH EAX                            ; 004cbbda
    MOV dword ptr [EAX + -0x4],0x65e3d4 ; 004cbbdb | CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065e3d4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004cbbe2 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004cbbe7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004cbbf1
    MOV dword ptr [EBX + 0x2e0],0x5     ; 004cbbfb
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004cbc05
    MOV dword ptr [EBX + 0x2e8],0x0     ; 004cbc0f
    FLD float ptr [0x0065e3cc]          ; 004cbc19 | DAT_0065e3cc
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004cbc1f
    ADD ESP,0x8                         ; 004cbc29
    MOV dword ptr [EBX + 0x568],0x0     ; 004cbc2c
    MOV EAX,EBX                         ; 004cbc36
    FSTP float ptr [EBX + 0x564]        ; 004cbc38
    POP EBX                             ; 004cbc3e
    RET                                 ; 004cbc3f

