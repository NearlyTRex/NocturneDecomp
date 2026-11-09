; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(CFlashlight *this_ptr)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_factoryFuncFlashlight_FUN_004a7520 at 004a7533
;
; Referenced Globals:
;   undefined4 DAT_005e008c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7550
        ;   Label: core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a7551
    PUSH EDX                            ; 004a7555
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 004a7556
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004a755b
    PUSH 0x5c0cf3                       ; 004a755e
    MOV EBX,EAX                         ; 004a7563
    ADD EAX,0x158                       ; 004a7565
    PUSH EAX                            ; 004a756a
    MOV dword ptr [EAX + -0x4],0x5e0094 ; 004a756b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004a7572
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004a7577
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004a7581
    MOV dword ptr [EBX + 0x2e0],0x5     ; 004a758b
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004a7595
    MOV dword ptr [EBX + 0x2e8],0x0     ; 004a759f
    FLD float ptr [0x005e008c]          ; 004a75a9 | DAT_005e008c
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004a75af
    ADD ESP,0x8                         ; 004a75b9
    MOV dword ptr [EBX + 0x568],0x0     ; 004a75bc
    MOV EAX,EBX                         ; 004a75c6
    FSTP float ptr [EBX + 0x564]        ; 004a75c8
    POP EBX                             ; 004a75ce
    RET                                 ; 004a75cf

