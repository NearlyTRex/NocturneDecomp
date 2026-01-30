; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_shotgun_cpp_FUN_00587f70(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonLight g_CDemonLightInstance
;   undefined4 g_CDemonLightInstance.base.base.position.x
;   undefined4 g_CDemonLightInstance.base.base.position.y
;   undefined4 g_CDemonLightInstance.base.base.position.z
;   undefined4 DAT_02d7eb00
;   undefined4 g_CDemonLightInstance.base.base.projection_scale
;   undefined4 g_CDemonLightInstance.base.max_distance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   undefined4 g_CDemonLightInstance.unk2
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587f70
        ;   Label: core_shotgun.cpp_FUN_00587f70
    PUSH EBP                            ; 00587f71
    SUB ESP,0x18                        ; 00587f72
    MOV EBX,dword ptr [ESP + 0x24]      ; 00587f75
    CMP dword ptr [EBX + 0x57c],0x0     ; 00587f79
    JNZ 0x00587f9f                      ; 00587f80
        ;   XREF to: 00587f9f (CONDITIONAL_JUMP)  ; LAB_00587f9f
    PUSH dword ptr [ESP + 0x28]         ; 00587f82
        ;   Label: LAB_00587f82
    PUSH EBX                            ; 00587f86
    MOV dword ptr [EBX + 0x57c],0x0     ; 00587f87
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 00587f91
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00587f96
    ADD ESP,0x18                        ; 00587f99
    POP EBP                             ; 00587f9c
    POP EBX                             ; 00587f9d
    RET                                 ; 00587f9e
    PUSH EDI                            ; 00587f9f
        ;   Label: LAB_00587f9f
    PUSH ESI                            ; 00587fa0
    LEA EAX,[ESP + 0x14]                ; 00587fa1
    PUSH EAX                            ; 00587fa5
    MOV ECX,0x1                         ; 00587fa6
    MOV EDX,dword ptr [EBX + 0x154]     ; 00587fab
    PUSH EBX                            ; 00587fb1
    MOV dword ptr [0x02d807a4],ECX      ; 00587fb2 | g_CDemonLightInstance.light_enabled_flag
    CALL dword ptr [EDX + 0xf4]         ; 00587fb8
    ADD ESP,0x8                         ; 00587fbe
    PUSH EAX                            ; 00587fc1
    LEA EAX,[ESP + 0xc]                 ; 00587fc2
    PUSH EAX                            ; 00587fc6
    PUSH EBX                            ; 00587fc7
    XOR ESI,ESI                         ; 00587fc8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00587fca
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EAX,[ESP + 0x14]                ; 00587fcf
    ADD ESP,0xc                         ; 00587fd3
    MOV dword ptr [0x02d807ac],ESI      ; 00587fd6 | g_CDemonLightInstance.unk2
    CMP EAX,0x2d7eaf4                   ; 00587fdc | g_CDemonLightInstance.base.base.position.x
    JZ 0x00587ffe                       ; 00587fe1
        ;   XREF to: 00587ffe (CONDITIONAL_JUMP)  ; LAB_00587ffe
    MOV EAX,dword ptr [ESP + 0x8]       ; 00587fe3
    MOV [0x02d7eaf4],EAX                ; 00587fe7 | g_CDemonLightInstance.base.base.position.x
    MOV EAX,dword ptr [ESP + 0xc]       ; 00587fec
    MOV [0x02d7eaf8],EAX                ; 00587ff0 | g_CDemonLightInstance.base.base.position.y
    MOV EAX,dword ptr [ESP + 0x10]      ; 00587ff5
    MOV [0x02d7eafc],EAX                ; 00587ff9 | g_CDemonLightInstance.base.base.position.z
    LEA EAX,[EBX + 0x30]                ; 00587ffe
        ;   Label: LAB_00587ffe
    PUSH EAX                            ; 00588001
    PUSH 0x2d7eb00                      ; 00588002 | DAT_02d7eb00
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00588007
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0058800c
    MOV EDI,0x42e00000                  ; 0058800f
    PUSH 0x3f800000                     ; 00588014
    FLD float ptr [EBX + 0x580]         ; 00588019
    PUSH 0x2d7eaf0                      ; 0058801f | g_CDemonLightInstance
    FSTP float ptr [0x02d7ec30]         ; 00588024 | g_CDemonLightInstance.base.max_distance
    MOV dword ptr [0x02d7eb28],EDI      ; 0058802a | g_CDemonLightInstance.base.base.projection_scale
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 00588030
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00588035
    PUSH 0x2d7eaf0                      ; 00588038 | g_CDemonLightInstance
    MOV EAX,[0x006810c8]                ; 0058803d | g_CDemonSetInstance | g_CDemonSetPtr
    XOR EBP,EBP                         ; 00588042
    PUSH EAX                            ; 00588044 | g_CDemonSetInstance
    MOV dword ptr [0x02d807c0],EBP      ; 00588045 | g_CDemonLightInstance.antialiasing_enabled
    CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090 ; 0058804b
        ;   XREF to: 0056d090 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00588050
    POP ESI                             ; 00588053
    POP EDI                             ; 00588054
    JMP 0x00587f82                      ; 00588055
        ;   XREF to: 00587f82 (UNCONDITIONAL_JUMP)  ; LAB_00587f82

