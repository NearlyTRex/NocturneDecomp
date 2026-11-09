; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightStaff * core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(CLightStaff *this_ptr)
;
; Parameters:
; CLightStaff *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lightsta.cpp_factoryFuncLightStaff_FUN_004e0f40 at 004e0f53
;
; Referenced Globals:
;   undefined4 DAT_005e24ec
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0f70
        ;   Label: core_lightsta.cpp_CLightStaff_ctor_FUN_004e0f70
    PUSH ESI                            ; 004e0f71
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e0f72
    PUSH EDX                            ; 004e0f76
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 004e0f77
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004e0f7c
    PUSH 0x5c69c6                       ; 004e0f7f
    MOV EBX,EAX                         ; 004e0f84
    LEA ESI,[EAX + 0x158]               ; 004e0f86
    PUSH ESI                            ; 004e0f8c
    MOV dword ptr [EAX + 0x154],0x5e24f4 ; 004e0f8d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004e0f97
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e0f9c
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004e0fa6
    MOV dword ptr [EBX + 0x2e0],0xc     ; 004e0fb0
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004e0fba
    MOV dword ptr [EBX + 0x2e8],0x42000000 ; 004e0fc4
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004e0fce
    MOV dword ptr [EBX + 0x56c],0xa     ; 004e0fd8
    MOV dword ptr [EBX + 0x58c],0xa     ; 004e0fe2
    MOV dword ptr [EBX + 0x574],0x1     ; 004e0fec
    MOV dword ptr [EBX + 0x594],0x0     ; 004e0ff6
    MOV dword ptr [EBX + 0x57c],0x0     ; 004e1000
    MOV dword ptr [EBX + 0x578],0x2     ; 004e100a
    MOV dword ptr [EBX + 0x5bc],0x3dcccccd ; 004e1014
    FLD float ptr [0x005e24ec]          ; 004e101e | DAT_005e24ec
    MOV dword ptr [EBX + 0x5c0],0x0     ; 004e1024
    ADD ESP,0x8                         ; 004e102e
    MOV dword ptr [EBX + 0x5c4],0x0     ; 004e1031
    LEA ESI,[EBX + 0x5c8]               ; 004e103b
    FSTP float ptr [EBX + 0x564]        ; 004e1041
    PUSH 0x41000000                     ; 004e1047
    MOV dword ptr [ESI + 0x3c],0x8000   ; 004e104c
    PUSH ESI                            ; 004e1053
    MOV byte ptr [ESI + 0x1c],0x20      ; 004e1054
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 004e1058
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004e105d
    MOV EAX,EBX                         ; 004e1060
    MOV dword ptr [ESI + 0x20],0x1      ; 004e1062
    POP ESI                             ; 004e1069
    POP EBX                             ; 004e106a
    RET                                 ; 004e106b

