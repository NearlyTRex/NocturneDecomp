; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lightgun.cpp_FUN_00505ac0()
;
;
; XREF[2]:
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 0050655d
;   core_lightgun.cpp_FUN_00505c70 at 00505eb8
;
; Referenced Globals:
;   undefined4 DAT_00660a44
;   CDemonLight g_CDemonLightInstance
;   undefined4 g_CDemonLightInstance.base.base.position.x
;   undefined4 g_CDemonLightInstance.base.base.position.y
;   undefined4 g_CDemonLightInstance.base.base.position.z
;   undefined4 DAT_02d7eb00
;   undefined4 g_CDemonLightInstance.base.base.projection_scale
;   undefined4 g_CDemonLightInstance.base.max_distance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   undefined4 g_CDemonLightInstance.field17_0x1cbc
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505ac0
        ;   Label: core_lightgun.cpp_FUN_00505ac0
    PUSH ESI                            ; 00505ac1
    SUB ESP,0x18                        ; 00505ac2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00505ac5
    MOV EDX,ESP                         ; 00505ac9
    PUSH EDX                            ; 00505acb
    MOV EAX,dword ptr [EBX + 0x154]     ; 00505acc
    PUSH EBX                            ; 00505ad2
    CALL dword ptr [EAX + 0xf4]         ; 00505ad3
    ADD ESP,0x8                         ; 00505ad9
    PUSH EAX                            ; 00505adc
    LEA EAX,[ESP + 0x10]                ; 00505add
    PUSH EAX                            ; 00505ae1
    PUSH EBX                            ; 00505ae2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00505ae3 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV EDX,0x1                         ; 00505ae8
    LEA EAX,[ESP + 0x18]                ; 00505aed
    ADD ESP,0xc                         ; 00505af1
    XOR ECX,ECX                         ; 00505af4
    MOV dword ptr [0x02d807a4],EDX      ; 00505af6 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x02d807ac],ECX      ; 00505afc | g_CDemonLightInstance.field17_0x1cbc
    CMP EAX,0x2d7eaf4                   ; 00505b02 | g_CDemonLightInstance.base.base.position.x
    JZ 0x00505b24                       ; 00505b07 | LAB_00505b24
        ;   XREF to: 00505b24 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 00505b09
    MOV [0x02d7eaf4],EAX                ; 00505b0d | g_CDemonLightInstance.base.base.position.x
    MOV EAX,dword ptr [ESP + 0x10]      ; 00505b12
    MOV [0x02d7eaf8],EAX                ; 00505b16 | g_CDemonLightInstance.base.base.position.y
    MOV EAX,dword ptr [ESP + 0x14]      ; 00505b1b
    MOV [0x02d7eafc],EAX                ; 00505b1f | g_CDemonLightInstance.base.base.position.z
    ADD EBX,0x30                        ; 00505b24
        ;   Label: LAB_00505b24
    PUSH EBX                            ; 00505b27
    PUSH 0x2d7eb00                      ; 00505b28 | DAT_02d7eb00
    MOV ESI,0x1                         ; 00505b2d
    MOV EBX,0x42000000                  ; 00505b32
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00505b37 | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00505b3c
    FLD float ptr [0x00660a44]          ; 00505b3f | DAT_00660a44
    PUSH 0x3f800000                     ; 00505b45
    MOV dword ptr [0x02d7ec30],EBX      ; 00505b4a | g_CDemonLightInstance.base.max_distance
    PUSH 0x2d7eaf0                      ; 00505b50 | CDemonLight g_CDemonLightInstance
    FSTP float ptr [0x02d7eb28]         ; 00505b55 | g_CDemonLightInstance.base.base.projection_scale
    MOV dword ptr [0x02d807c0],ESI      ; 00505b5b | g_CDemonLightInstance.antialiasing_enabled
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 00505b61 | void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00505b66
    ADD ESP,0x18                        ; 00505b69
    POP ESI                             ; 00505b6c
    POP EBX                             ; 00505b6d
    RET                                 ; 00505b6e

