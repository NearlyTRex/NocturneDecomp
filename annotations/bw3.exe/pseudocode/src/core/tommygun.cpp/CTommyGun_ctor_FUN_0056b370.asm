; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_0056b370(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tommygun.cpp_factoryFuncTommyGun_FUN_0056b340 at 0056b353
;
; Referenced Globals:
;   undefined4 DAT_005e53bc
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b370
        ;   Label: core_tommygun.cpp_CTommyGun_ctor_FUN_0056b370
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056b371
    PUSH EDX                            ; 0056b375
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 0056b376
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0056b37b
    PUSH 0x5d6449                       ; 0056b37e
    MOV EBX,EAX                         ; 0056b383
    ADD EAX,0x158                       ; 0056b385
    PUSH EAX                            ; 0056b38a
    MOV dword ptr [EAX + -0x4],0x5e53c4 ; 0056b38b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0056b392
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0056b397
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0056b3a1
    MOV dword ptr [EBX + 0x2e0],0x4     ; 0056b3ab
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0056b3b5
    MOV dword ptr [EBX + 0x2e8],0x42c80000 ; 0056b3bf
    MOV dword ptr [EBX + 0x2ec],0x1     ; 0056b3c9
    MOV dword ptr [EBX + 0x598],0x0     ; 0056b3d3
    FLD float ptr [0x005e53bc]          ; 0056b3dd | DAT_005e53bc
    MOV dword ptr [EBX + 0x59c],0x0     ; 0056b3e3
    ADD ESP,0x8                         ; 0056b3ed
    MOV dword ptr [EBX + 0x594],0x0     ; 0056b3f0
    MOV EAX,EBX                         ; 0056b3fa
    FSTP float ptr [EBX + 0x564]        ; 0056b3fc
    POP EBX                             ; 0056b402
    RET                                 ; 0056b403

