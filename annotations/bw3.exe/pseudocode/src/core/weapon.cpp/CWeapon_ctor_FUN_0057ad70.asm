; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780 at 0040f786
;   core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0 at 004103f6
;   core_burncrss.cpp_CBurncross_ctor_FUN_00424430 at 00424436
;   core_disease.cpp_CDisease_ctor_FUN_0045bf80 at 0045bf86
;   core_dynamite.cpp_CDynamite_ctor_FUN_0047b080 at 0047b086
;   core_elephant.cpp_CElephantGun_ctor_FUN_00486ba0 at 00486ba6
;   core_exorcism.cpp_CExorcism_ctor_FUN_0048a310 at 0048a317
;   core_firestff.cpp_CFirestaff_ctor_FUN_004a4ad0 at 004a4adf
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550 at 004a7556
;   core_flintlck.cpp_CFlintlock_ctor_FUN_004ae7e0 at 004ae7e6
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_box.cpp_CBox_ctor_FUN_0041ad40
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ad70
        ;   Label: core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057ad71
    PUSH EBX                            ; 0057ad75
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0057ad76
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057ad7b
    ADD EAX,0x158                       ; 0057ad7e
    PUSH EAX                            ; 0057ad83
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0057ad84
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057ad89
    ADD EAX,0x1b0                       ; 0057ad8c
    PUSH EAX                            ; 0057ad91
    CALL core_box.cpp_CBox_ctor_FUN_0041ad40 ; 0057ad92
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041ad40(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffcf8]          ; 0057ad97
    MOV dword ptr [EBX + 0x154],0x5e6244 ; 0057ad9d
    MOV dword ptr [EBX + 0x564],0x40a00000 ; 0057ada7
    MOV dword ptr [EBX + 0x300],0x0     ; 0057adb1
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0057adbb
    MOV dword ptr [EBX + 0x304],0x0     ; 0057adc5
    MOV dword ptr [EBX + 0x568],0x14    ; 0057adcf
    MOV dword ptr [EBX + 0x56c],0x0     ; 0057add9
    MOV dword ptr [EBX + 0x100],0x1     ; 0057ade3
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0057aded
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0057adf7
    MOV dword ptr [EBX + 0x2e0],0x0     ; 0057ae01
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0057ae0b
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 0057ae15
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0057ae1f
    ADD ESP,0x4                         ; 0057ae29
    MOV dword ptr [EBX + 0x2f0],0x1     ; 0057ae2c
    PUSH 0x5d7813                       ; 0057ae36
    MOV dword ptr [EBX + 0x2f4],0xff    ; 0057ae3b
    LEA EAX,[EBX + 0x158]               ; 0057ae45
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0057ae4b
    PUSH EAX                            ; 0057ae55
    MOV dword ptr [EBX + 0x2fc],0x0     ; 0057ae56
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0057ae60
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x580],0x0     ; 0057ae65
    MOV dword ptr [EBX + 0x584],0x0     ; 0057ae6f
    MOV dword ptr [EBX + 0x570],0x0     ; 0057ae79
    MOV dword ptr [EBX + 0x58c],0x1     ; 0057ae83
    MOV dword ptr [EBX + 0x588],0x10000 ; 0057ae8d
    MOV dword ptr [EBX + 0x574],0x0     ; 0057ae97
    MOV dword ptr [EBX + 0x57c],0x1     ; 0057aea1
    ADD ESP,0x8                         ; 0057aeab
    MOV dword ptr [EBX + 0x590],0x0     ; 0057aeae
    MOV EAX,EBX                         ; 0057aeb8
    MOV dword ptr [EBX + 0x578],0x1     ; 0057aeba
    POP EBX                             ; 0057aec4
    RET                                 ; 0057aec5

