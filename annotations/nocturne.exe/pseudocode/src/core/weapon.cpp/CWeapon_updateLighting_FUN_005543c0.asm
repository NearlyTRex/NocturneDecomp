; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   float FLOAT_00597c09 = 0.3490658
;   float FLOAT_00597c0d = 15
;   float FLOAT_00597c11 = 0.06666667
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonLight g_CDemonLight_01c74640
;   undefined4 g_CDemonLight_01c74640.base.fixed_point_scale
;   undefined4 g_CDemonLight_01c74640.base.position.x
;   undefined4 g_CDemonLight_01c74640.base.position.y
;   undefined4 g_CDemonLight_01c74640.base.position.z
;   undefined4 g_CDemonLight_01c74640.base.rotation_matrix.m[0].x
;   undefined4 g_CDemonLight_01c74640.base.focal_length
;   undefined4 g_CDemonLight_01c74640.light_enabled_flag
;   undefined4 g_CDemonLight_01c74640.volumetric_enabled
;   undefined4 g_CDemonLight_01c74640.antialiasing_enabled
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005543c0
        ;   Label: core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0
    PUSH ESI                            ; 005543c1
    PUSH EBP                            ; 005543c2
    SUB ESP,0x2c                        ; 005543c3
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005543c6
    MOV EDX,ESP                         ; 005543ca
    PUSH EDX                            ; 005543cc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005543cd
    PUSH EBX                            ; 005543d3
    CALL dword ptr [EAX + 0xd8]         ; 005543d4
    ADD ESP,0x8                         ; 005543da
    PUSH EAX                            ; 005543dd
    LEA EAX,[ESP + 0x1c]                ; 005543de
    PUSH EAX                            ; 005543e2
    PUSH EBX                            ; 005543e3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005543e4
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,0x1                         ; 005543e9
    LEA EAX,[ESP + 0x24]                ; 005543ee
    ADD ESP,0xc                         ; 005543f2
    MOV dword ptr [0x01c762f4],EDX      ; 005543f5 | g_CDemonLight_01c74640.light_enabled_flag
    MOV dword ptr [0x01c762fc],EDX      ; 005543fb | g_CDemonLight_01c74640.volumetric_enabled
    CMP EAX,0x1c74744                   ; 00554401
    JZ 0x00554423                       ; 00554406
        ;   XREF to: 00554423 (CONDITIONAL_JUMP)  ; LAB_00554423
    MOV EAX,dword ptr [ESP + 0x18]      ; 00554408
    MOV [0x01c74744],EAX                ; 0055440c | g_CDemonLight_01c74640.base.position.x
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00554411
    MOV [0x01c74748],EAX                ; 00554415 | g_CDemonLight_01c74640.base.position.y
    MOV EAX,dword ptr [ESP + 0x20]      ; 0055441a
    MOV [0x01c7474c],EAX                ; 0055441e | g_CDemonLight_01c74640.base.position.z
    LEA EDX,[EBX + 0x30]                ; 00554423
        ;   Label: LAB_00554423
    MOV EAX,dword ptr [EDX]             ; 00554426
    MOV dword ptr [ESP + 0xc],EAX       ; 00554428
    LEA EAX,[EDX + 0x4]                 ; 0055442c
    MOV EAX,dword ptr [EAX]             ; 0055442f
    MOV dword ptr [ESP + 0x10],EAX      ; 00554431
    LEA EAX,[EDX + 0x8]                 ; 00554435
    MOV ESI,0x42000000                  ; 00554438
    MOV EAX,dword ptr [EAX]             ; 0055443d
    MOV EBP,0x1                         ; 0055443f
    MOV dword ptr [ESP + 0x14],EAX      ; 00554444
    LEA EAX,[ESP + 0xc]                 ; 00554448
    FLD float ptr [ESP + 0xc]           ; 0055444c
    PUSH EAX                            ; 00554450
    FADD float ptr [0x00597c09]         ; 00554451 | FLOAT_00597c09
    PUSH 0x1c74750                      ; 00554457 | g_CDemonLight_01c74640.base.rotation_matrix.m[0].x
    FSTP float ptr [ESP + 0x14]         ; 0055445c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00554460
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00554465
    MOV EDX,dword ptr [0x01cae124]      ; 00554468 | g_CHeroActorType_01cae0ec.name_hash
    MOV EAX,0x3f800000                  ; 0055446e
    PUSH EDX                            ; 00554473
    MOV dword ptr [0x01c74740],ESI      ; 00554474 | g_CDemonLight_01c74640.base.fixed_point_scale
    MOV dword ptr [ESP + 0x2c],EAX      ; 0055447a
    PUSH EBX                            ; 0055447e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0055447f
    MOV dword ptr [0x01c74778],ESI      ; 00554485 | g_CDemonLight_01c74640.base.focal_length
    MOV dword ptr [0x01c76310],EBP      ; 0055448b | g_CDemonLight_01c74640.antialiasing_enabled
    CALL dword ptr [EAX + 0x8c]         ; 00554491
    ADD ESP,0x4                         ; 00554497
    PUSH EAX                            ; 0055449a
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0055449b
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005544a0
    TEST EAX,EAX                        ; 005544a3
    JZ 0x005544ce                       ; 005544a5
        ;   XREF to: 005544ce (CONDITIONAL_JUMP)  ; LAB_005544ce
    MOV EAX,dword ptr [EAX + 0x1f5a0]   ; 005544a7
    MOV dword ptr [ESP + 0x24],EAX      ; 005544ad
    FLD float ptr [ESP + 0x24]          ; 005544b1
    FCOMP float ptr [0x00597c0d]        ; 005544b5 | FLOAT_00597c0d
    FNSTSW AX                           ; 005544bb
    SAHF                                ; 005544bd
    JNC 0x005544ce                      ; 005544be
        ;   XREF to: 005544ce (CONDITIONAL_JUMP)  ; LAB_005544ce
    FLD float ptr [ESP + 0x24]          ; 005544c0
    FMUL float ptr [0x00597c11]         ; 005544c4 | FLOAT_00597c11
    FSTP float ptr [ESP + 0x28]         ; 005544ca
    PUSH dword ptr [ESP + 0x28]         ; 005544ce
        ;   Label: LAB_005544ce
    PUSH 0x1c74640                      ; 005544d2 | g_CDemonLight_01c74640
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 005544d7
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight * this_ptr, float intensity)
    MOV EAX,[0x005b9354]                ; 005544dc | g_CGame_PTR_005b9354 | g_CGame_01c775ec
    MOV ECX,dword ptr [EAX + 0x244]     ; 005544e1 | g_CGame_01c775ec.flashlight_active
    ADD ESP,0x8                         ; 005544e7
    TEST ECX,ECX                        ; 005544ea
    JNZ 0x005544f5                      ; 005544ec
        ;   XREF to: 005544f5 (CONDITIONAL_JUMP)  ; LAB_005544f5
    ADD ESP,0x2c                        ; 005544ee
    POP EBP                             ; 005544f1
    POP ESI                             ; 005544f2
    POP EBX                             ; 005544f3
    RET                                 ; 005544f4
    PUSH EDI                            ; 005544f5
        ;   Label: LAB_005544f5
    LEA EAX,[ESP + 0x1c]                ; 005544f6
    PUSH EAX                            ; 005544fa
    PUSH 0x2ddf9ac                      ; 005544fb
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 00554500
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00554505
    MOV EBX,0x8000                      ; 00554508
    PUSH 0x40400000                     ; 0055450d
    MOV AH,0x20                         ; 00554512
    PUSH 0x2ddf9ac                      ; 00554514
    MOV dword ptr [0x02ddf9e8],EBX      ; 00554519 | DAT_02ddf9e8
    MOV byte ptr [0x02ddf9c8],AH        ; 0055451f | DAT_02ddf9c8
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 00554525
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0055452a
    PUSH 0x2ddf9ac                      ; 0055452d
    MOV EDI,dword ptr [0x005be368]      ; 00554532 | g_CDemonSet_PTR_005be368
    XOR ESI,ESI                         ; 00554538
    PUSH EDI                            ; 0055453a | g_CDemonSet_01e57284
    MOV dword ptr [0x02ddf9cc],ESI      ; 0055453b | DAT_02ddf9cc
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0 ; 00554541
        ;   XREF to: 0050a9f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 00554546
    POP EDI                             ; 00554549
    ADD ESP,0x2c                        ; 0055454a
    POP EBP                             ; 0055454d
    POP ESI                             ; 0055454e
    POP EBX                             ; 0055454f
    RET                                 ; 00554550

