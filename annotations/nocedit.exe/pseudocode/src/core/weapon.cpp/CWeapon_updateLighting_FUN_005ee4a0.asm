; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   float FLOAT_00657b21 = 0.3490658
;   float FLOAT_00657b25 = 15
;   float FLOAT_00657b29 = 0.06666667
;   CGame* g_CGamePtr = 02d81a9c
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
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
;   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;   core_set.cpp_CDemonSet_FUN_0056d110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee4a0
        ;   Label: core_weapon.cpp_CWeapon_updateLighting_FUN_005ee4a0
    PUSH ESI                            ; 005ee4a1
    PUSH EBP                            ; 005ee4a2
    SUB ESP,0x2c                        ; 005ee4a3
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005ee4a6
    MOV EDX,ESP                         ; 005ee4aa
    PUSH EDX                            ; 005ee4ac
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ee4ad
    PUSH EBX                            ; 005ee4b3
    CALL dword ptr [EAX + 0xf4]         ; 005ee4b4
    ADD ESP,0x8                         ; 005ee4ba
    PUSH EAX                            ; 005ee4bd
    LEA EAX,[ESP + 0x1c]                ; 005ee4be
    PUSH EAX                            ; 005ee4c2
    PUSH EBX                            ; 005ee4c3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005ee4c4
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,0x1                         ; 005ee4c9
    LEA EAX,[ESP + 0x24]                ; 005ee4ce
    ADD ESP,0xc                         ; 005ee4d2
    MOV dword ptr [0x02d807a4],EDX      ; 005ee4d5 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x02d807ac],EDX      ; 005ee4db | g_CDemonLightInstance.unk2
    CMP EAX,0x2d7eaf4                   ; 005ee4e1 | g_CDemonLightInstance.base.base.position.x
    JZ 0x005ee503                       ; 005ee4e6
        ;   XREF to: 005ee503 (CONDITIONAL_JUMP)  ; LAB_005ee503
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ee4e8
    MOV [0x02d7eaf4],EAX                ; 005ee4ec | g_CDemonLightInstance.base.base.position.x
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ee4f1
    MOV [0x02d7eaf8],EAX                ; 005ee4f5 | g_CDemonLightInstance.base.base.position.y
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ee4fa
    MOV [0x02d7eafc],EAX                ; 005ee4fe | g_CDemonLightInstance.base.base.position.z
    LEA EDX,[EBX + 0x30]                ; 005ee503
        ;   Label: LAB_005ee503
    MOV EAX,dword ptr [EDX]             ; 005ee506
    MOV dword ptr [ESP + 0xc],EAX       ; 005ee508
    LEA EAX,[EDX + 0x4]                 ; 005ee50c
    MOV EAX,dword ptr [EAX]             ; 005ee50f
    MOV dword ptr [ESP + 0x10],EAX      ; 005ee511
    LEA EAX,[EDX + 0x8]                 ; 005ee515
    MOV ESI,0x42000000                  ; 005ee518
    MOV EAX,dword ptr [EAX]             ; 005ee51d
    MOV EBP,0x1                         ; 005ee51f
    MOV dword ptr [ESP + 0x14],EAX      ; 005ee524
    LEA EAX,[ESP + 0xc]                 ; 005ee528
    FLD float ptr [ESP + 0xc]           ; 005ee52c
    PUSH EAX                            ; 005ee530
    FADD float ptr [0x00657b21]         ; 005ee531 | FLOAT_00657b21
    PUSH 0x2d7eb00                      ; 005ee537 | DAT_02d7eb00
    FSTP float ptr [ESP + 0x14]         ; 005ee53c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005ee540
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005ee545
    MOV EDX,dword ptr [0x02db880c]      ; 005ee548 | g_CHeroClassInfo.name_hash
    MOV EAX,0x3f800000                  ; 005ee54e
    PUSH EDX                            ; 005ee553
    MOV dword ptr [0x02d7ec30],ESI      ; 005ee554 | g_CDemonLightInstance.base.max_distance
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ee55a
    PUSH EBX                            ; 005ee55e
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ee55f
    MOV dword ptr [0x02d7eb28],ESI      ; 005ee565 | g_CDemonLightInstance.base.base.projection_scale
    MOV dword ptr [0x02d807c0],EBP      ; 005ee56b | g_CDemonLightInstance.antialiasing_enabled
    CALL dword ptr [EAX + 0x8c]         ; 005ee571
    ADD ESP,0x4                         ; 005ee577
    PUSH EAX                            ; 005ee57a
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ee57b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005ee580
    TEST EAX,EAX                        ; 005ee583
    JZ 0x005ee5ae                       ; 005ee585
        ;   XREF to: 005ee5ae (CONDITIONAL_JUMP)  ; LAB_005ee5ae
    MOV EAX,dword ptr [EAX + 0x1f738]   ; 005ee587
    MOV dword ptr [ESP + 0x24],EAX      ; 005ee58d
    FLD float ptr [ESP + 0x24]          ; 005ee591
    FCOMP float ptr [0x00657b25]        ; 005ee595 | FLOAT_00657b25
    FNSTSW AX                           ; 005ee59b
    SAHF                                ; 005ee59d
    JNC 0x005ee5ae                      ; 005ee59e
        ;   XREF to: 005ee5ae (CONDITIONAL_JUMP)  ; LAB_005ee5ae
    FLD float ptr [ESP + 0x24]          ; 005ee5a0
    FMUL float ptr [0x00657b29]         ; 005ee5a4 | FLOAT_00657b29
    FSTP float ptr [ESP + 0x28]         ; 005ee5aa
    PUSH dword ptr [ESP + 0x28]         ; 005ee5ae
        ;   Label: LAB_005ee5ae
    PUSH 0x2d7eaf0                      ; 005ee5b2 | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 005ee5b7
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
    MOV EAX,[0x0067b654]                ; 005ee5bc | g_CGameInstance | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x244]     ; 005ee5c1 | g_CGameInstance.auto_save_blocked
    ADD ESP,0x8                         ; 005ee5c7
    TEST ECX,ECX                        ; 005ee5ca
    JNZ 0x005ee5d5                      ; 005ee5cc
        ;   XREF to: 005ee5d5 (CONDITIONAL_JUMP)  ; LAB_005ee5d5
    ADD ESP,0x2c                        ; 005ee5ce
    POP EBP                             ; 005ee5d1
    POP ESI                             ; 005ee5d2
    POP EBX                             ; 005ee5d3
    RET                                 ; 005ee5d4
    PUSH EDI                            ; 005ee5d5
        ;   Label: LAB_005ee5d5
    LEA EAX,[ESP + 0x1c]                ; 005ee5d6
    PUSH EAX                            ; 005ee5da
    PUSH 0x3f95d7c                      ; 005ee5db | DAT_03f95d7c
    CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310 ; 005ee5e0
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
    ADD ESP,0x8                         ; 005ee5e5
    MOV EBX,0x8000                      ; 005ee5e8
    PUSH 0x40400000                     ; 005ee5ed
    MOV AH,0x20                         ; 005ee5f2
    PUSH 0x3f95d7c                      ; 005ee5f4 | DAT_03f95d7c
    MOV dword ptr [0x03f95db8],EBX      ; 005ee5f9 | DAT_03f95d7c.intensity_multiplier
    MOV byte ptr [0x03f95d98],AH        ; 005ee5ff | DAT_03f95d7c.intensity
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360 ; 005ee605
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 005ee60a
    PUSH 0x3f95d7c                      ; 005ee60d | DAT_03f95d7c
    MOV EDI,dword ptr [0x006810c8]      ; 005ee612 | g_CDemonSetPtr
    XOR ESI,ESI                         ; 005ee618
    PUSH EDI                            ; 005ee61a | g_CDemonSetInstance
    MOV dword ptr [0x03f95d9c],ESI      ; 005ee61b | DAT_03f95d7c.corona_mode
    CALL core_set.cpp_CDemonSet_FUN_0056d110 ; 005ee621
        ;   XREF to: 0056d110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d110(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 005ee626
    POP EDI                             ; 005ee629
    ADD ESP,0x2c                        ; 005ee62a
    POP EBP                             ; 005ee62d
    POP ESI                             ; 005ee62e
    POP EBX                             ; 005ee62f
    RET                                 ; 005ee630

