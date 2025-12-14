; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDynamite * core_dynamite.cpp_ctor_FUN_0049cdc0(CDynamite * this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dynamite.cpp_FUN_0049cd80 at 0049cd9a
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_00622e81
;   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065d314
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cdc0
        ;   Label: core_dynamite.cpp_ctor_FUN_0049cdc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049cdc1
    PUSH EDX                            ; 0049cdc5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 0049cdc6
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0049cdcb
    PUSH 0x622e81                       ; 0049cdce | = "dynamitestick.kfm"
    MOV EBX,EAX                         ; 0049cdd3
    ADD EAX,0x158                       ; 0049cdd5
    PUSH EAX                            ; 0049cdda
    MOV dword ptr [EAX + -0x4],0x65d314 ; 0049cddb | PTR_core_weapon.cpp_ActorModelSomething_FUN_0065d314
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0049cde2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    LEA EAX,[EBX + 0x57c]               ; 0049cde7
    MOV dword ptr [EBX + 0x564],0x3f800000 ; 0049cded
    MOV dword ptr [EAX + 0x8],0x0       ; 0049cdf7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0049cdfe
    MOV dword ptr [EAX + 0x4],EDX       ; 0049ce01
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049ce04
    MOV dword ptr [EAX],EDX             ; 0049ce07
    MOV dword ptr [EBX + 0x578],0xbf800000 ; 0049ce09
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0049ce13
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0049ce1d
    MOV dword ptr [EBX + 0x2e0],0x3     ; 0049ce27
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0049ce31
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 0049ce3b
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0049ce45
    ADD ESP,0x8                         ; 0049ce4f
    MOV dword ptr [EBX + 0x2f0],0x0     ; 0049ce52
    MOV EAX,EBX                         ; 0049ce5c
    MOV dword ptr [EBX + 0x588],0x0     ; 0049ce5e
    POP EBX                             ; 0049ce68
    RET                                 ; 0049ce69

