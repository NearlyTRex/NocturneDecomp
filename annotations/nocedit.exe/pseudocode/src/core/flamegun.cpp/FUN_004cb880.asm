; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlameThrower * core_flamegun.cpp_FUN_004cb880(CFlameThrower * this_ptr)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flamegun.cpp_FUN_004cb840 at 004cb85a
;
; Referenced Globals:
;   TerminatedCString s_flamegun_kfm_0062a38e
;   undefined4 DAT_0065e26c
;   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065e284
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb880
        ;   Label: core_flamegun.cpp_FUN_004cb880
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cb881
    PUSH EDX                            ; 004cb885
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 004cb886
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004cb88b
    PUSH 0x62a38e                       ; 004cb88e | = "flamegun.kfm"
    MOV EBX,EAX                         ; 004cb893
    ADD EAX,0x158                       ; 004cb895
    PUSH EAX                            ; 004cb89a
    MOV dword ptr [EAX + -0x4],0x65e284 ; 004cb89b | PTR_core_weapon.cpp_ActorModelSomething_FUN_0065e284
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004cb8a2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x57c],0x0     ; 004cb8a7
    MOV dword ptr [EBX + 0x578],0x0     ; 004cb8b1
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004cb8bb
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004cb8c5
    MOV dword ptr [EBX + 0x2e0],0x2     ; 004cb8cf
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004cb8d9
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 004cb8e3
    MOV dword ptr [EBX + 0x2ec],0x1     ; 004cb8ed
    FLD float ptr [0x0065e26c]          ; 004cb8f7 | DAT_0065e26c
    MOV dword ptr [EBX + 0x584],0x0     ; 004cb8fd
    ADD ESP,0x8                         ; 004cb907
    MOV dword ptr [EBX + 0x580],0x0     ; 004cb90a
    MOV EAX,EBX                         ; 004cb914
    FSTP float ptr [EBX + 0x564]        ; 004cb916
    POP EBX                             ; 004cb91c
    RET                                 ; 004cb91d

