; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060(CFlashlight *this_ptr)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_factoryFuncFlashlight_FUN_004a1030 at 004a1043
;
; Referenced Globals:
;   undefined4 DAT_005f6cac
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1060
        ;   Label: core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a1061
    PUSH EDX                            ; 004a1065
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 004a1066
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004a106b
    PUSH 0x5d59c4                       ; 004a106e
    MOV EBX,EAX                         ; 004a1073
    ADD EAX,0x2b4                       ; 004a1075
    PUSH EAX                            ; 004a107a
    MOV dword ptr [EAX + -0x4],0x5f6cb4 ; 004a107b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004a1082
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x434],0x0     ; 004a1087
    MOV dword ptr [EBX + 0x438],0x0     ; 004a1091
    MOV dword ptr [EBX + 0x43c],0x5     ; 004a109b
    MOV dword ptr [EBX + 0x440],0x0     ; 004a10a5
    MOV dword ptr [EBX + 0x444],0x0     ; 004a10af
    FLD float ptr [0x005f6cac]          ; 004a10b9 | DAT_005f6cac
    MOV dword ptr [EBX + 0x448],0x0     ; 004a10bf
    ADD ESP,0x8                         ; 004a10c9
    MOV dword ptr [EBX + 0x6c4],0x0     ; 004a10cc
    MOV EAX,EBX                         ; 004a10d6
    FSTP float ptr [EBX + 0x6c0]        ; 004a10d8
    POP EBX                             ; 004a10de
    RET                                 ; 004a10df

