; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_0045ab40(CDraculaBride *this_ptr,char *sound_name,float volume)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   volume
; Local Variables:
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0 at 0045a876
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 00458fe7
;
; Referenced Globals:
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 DAT_01b4d260
;   SFreaky[6] g_SFreaky_ARRAY_01b4d280
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].position.x
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].position.y
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].position.z
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].tangent.x
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].tangent.y
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].tangent.z
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].t
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].control_points[0].x
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].control_points[0].y
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].control_points[0].z
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].control_points[1].x
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].control_points[1].y
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;   core_sound.cpp_FUN_0052d030
;   core_spline.cpp_computeSplineBasis_FUN_00533ce0
;   core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10
;   core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_isSoundBusy_FUN_00528490
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ab40
        ;   Label: core_dracbrid.cpp_CDraculaBride_FUN_0045ab40
    PUSH ESI                            ; 0045ab41
    PUSH EDI                            ; 0045ab42
    PUSH EBP                            ; 0045ab43
    SUB ESP,0x164                       ; 0045ab44
    MOV EBP,dword ptr [ESP + 0x178]     ; 0045ab4a
    PUSH 0x40e00000                     ; 0045ab51
    PUSH 0x3f800000                     ; 0045ab56
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ab5b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ab60
    FLD float ptr [ESP + 0x168]         ; 0045ab67
    ADD ESP,0x8                         ; 0045ab6e
    FSTP float ptr [EBP + 0xbdb8]       ; 0045ab71
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00528490 ; 0045ab77
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00528490()
    TEST EAX,EAX                        ; 0045ab7c
    JZ 0x0045aba1                       ; 0045ab7e
        ;   XREF to: 0045aba1 (CONDITIONAL_JUMP)  ; LAB_0045aba1
    MOV EBX,0x1b4d280                   ; 0045ab80
    XOR ESI,ESI                         ; 0045ab85
    MOV EDX,dword ptr [EBX]             ; 0045ab87 | g_SFreaky_ARRAY_01b4d280 | g_SFreaky_ARRAY_01b4d280[1].sfx_handle
        ;   Label: LAB_0045ab87
    PUSH EDX                            ; 0045ab89
    MOV EDI,EBX                         ; 0045ab8a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0045ab8c
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0045ab91
    TEST EAX,EAX                        ; 0045ab94
    JZ 0x0045abac                       ; 0045ab96
        ;   XREF to: 0045abac (CONDITIONAL_JUMP)  ; LAB_0045abac
    INC ESI                             ; 0045ab98
    ADD EBX,0x54                        ; 0045ab99
    CMP ESI,0x6                         ; 0045ab9c
    JL 0x0045ab87                       ; 0045ab9f
        ;   XREF to: 0045ab87 (CONDITIONAL_JUMP)  ; LAB_0045ab87
    ADD ESP,0x164                       ; 0045aba1
        ;   Label: LAB_0045aba1
    POP EBP                             ; 0045aba7
    POP EDI                             ; 0045aba8
    POP ESI                             ; 0045aba9
    POP EBX                             ; 0045abaa
    RET                                 ; 0045abab
    MOV ECX,dword ptr [0x01b4d260]      ; 0045abac | DAT_01b4d260
        ;   Label: LAB_0045abac
    PUSH ECX                            ; 0045abb2
    MOV dword ptr [EBX + 0x1c],EAX      ; 0045abb3 | g_SFreaky_ARRAY_01b4d280[0].t
    LEA EAX,[ESP + 0x134]               ; 0045abb6
    PUSH EAX                            ; 0045abbd
    LEA EAX,[EBP + 0x150]               ; 0045abbe
    PUSH EAX                            ; 0045abc4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 0045abc5
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0045abca
    PUSH EAX                            ; 0045abcd
    LEA EAX,[ESP + 0x128]               ; 0045abce
    PUSH EAX                            ; 0045abd5
    PUSH EBP                            ; 0045abd6
    ADD EBX,0x2c                        ; 0045abd7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0045abda
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0045abdf
    CMP EBX,EAX                         ; 0045abe2
    JZ 0x0045abf6                       ; 0045abe4
        ;   XREF to: 0045abf6 (CONDITIONAL_JUMP)  ; LAB_0045abf6
    MOV EDX,dword ptr [EAX]             ; 0045abe6
    MOV dword ptr [EBX],EDX             ; 0045abe8 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045abea
    MOV dword ptr [EBX + 0x4],EDX       ; 0045abed | g_SFreaky_ARRAY_01b4d280[0].control_points[1].y
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045abf0
    MOV dword ptr [EBX + 0x8],EDX       ; 0045abf3 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].z
    LEA EBX,[EDI + 0x2c]                ; 0045abf6
        ;   Label: LAB_0045abf6
    MOV EAX,dword ptr [EBX]             ; 0045abf9 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].x
    MOV dword ptr [ESP + 0x148],EAX     ; 0045abfb
    LEA EAX,[EBX + 0x4]                 ; 0045ac02
    MOV EAX,dword ptr [EAX]             ; 0045ac05 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].y
    MOV dword ptr [ESP + 0x14c],EAX     ; 0045ac07
    LEA EAX,[EBX + 0x8]                 ; 0045ac0e
    PUSH 0x40a00000                     ; 0045ac11
    MOV EAX,dword ptr [EAX]             ; 0045ac16 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].z
    PUSH 0xc0a00000                     ; 0045ac18
    MOV dword ptr [ESP + 0x158],EAX     ; 0045ac1d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ac24
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ac29
    FLD float ptr [ESP + 0x168]         ; 0045ac30
    ADD ESP,0x8                         ; 0045ac37
    PUSH 0x40000000                     ; 0045ac3a
    FADD float ptr [ESP + 0x14c]        ; 0045ac3f
    PUSH 0xc0000000                     ; 0045ac46
    FSTP float ptr [ESP + 0x150]        ; 0045ac4b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ac52
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ac57
    FLD float ptr [ESP + 0x168]         ; 0045ac5e
    ADD ESP,0x8                         ; 0045ac65
    PUSH 0x40a00000                     ; 0045ac68
    FADD float ptr [ESP + 0x150]        ; 0045ac6d
    PUSH 0xc0a00000                     ; 0045ac74
    FSTP float ptr [ESP + 0x154]        ; 0045ac79
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ac80
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ac85
    FLD float ptr [ESP + 0x168]         ; 0045ac8c
    ADD ESP,0x8                         ; 0045ac93
    MOV EAX,dword ptr [ESP + 0x148]     ; 0045ac96
    FADD float ptr [ESP + 0x150]        ; 0045ac9d
    MOV dword ptr [ESP + 0x100],EAX     ; 0045aca4
    LEA EAX,[ESP + 0x148]               ; 0045acab
    FSTP float ptr [ESP + 0x150]        ; 0045acb2
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045acb9
    MOV dword ptr [ESP + 0x104],EAX     ; 0045acbc
    LEA EAX,[ESP + 0x148]               ; 0045acc3
    MOV EAX,dword ptr [EAX + 0x8]       ; 0045acca
    LEA EBX,[EDI + 0x20]                ; 0045accd
    MOV dword ptr [ESP + 0x108],EAX     ; 0045acd0
    LEA EAX,[ESP + 0x100]               ; 0045acd7
    CMP EBX,EAX                         ; 0045acde
    JZ 0x0045acff                       ; 0045ace0
        ;   XREF to: 0045acff (CONDITIONAL_JUMP)  ; LAB_0045acff
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045ace2
    MOV dword ptr [EBX],EAX             ; 0045ace9 | g_SFreaky_ARRAY_01b4d280[0].control_points[0].x
    MOV EAX,dword ptr [ESP + 0x104]     ; 0045aceb
    MOV dword ptr [EBX + 0x4],EAX       ; 0045acf2 | g_SFreaky_ARRAY_01b4d280[0].control_points[0].y
    MOV EAX,dword ptr [ESP + 0x108]     ; 0045acf5
    MOV dword ptr [EBX + 0x8],EAX       ; 0045acfc | g_SFreaky_ARRAY_01b4d280[0].control_points[0].z
    LEA EBX,[EDI + 0x2c]                ; 0045acff
        ;   Label: LAB_0045acff
    MOV EAX,dword ptr [EBX]             ; 0045ad02 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].x
    MOV dword ptr [ESP + 0xf4],EAX      ; 0045ad04
    LEA EAX,[EBX + 0x4]                 ; 0045ad0b
    MOV EAX,dword ptr [EAX]             ; 0045ad0e | g_SFreaky_ARRAY_01b4d280[0].control_points[1].y
    MOV dword ptr [ESP + 0xf8],EAX      ; 0045ad10
    LEA EAX,[EBX + 0x8]                 ; 0045ad17
    PUSH 0x40a00000                     ; 0045ad1a
    MOV EAX,dword ptr [EAX]             ; 0045ad1f | g_SFreaky_ARRAY_01b4d280[0].control_points[1].z
    PUSH 0xc0a00000                     ; 0045ad21
    MOV dword ptr [ESP + 0x104],EAX     ; 0045ad26
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ad2d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ad32
    FLD float ptr [ESP + 0x168]         ; 0045ad39
    ADD ESP,0x8                         ; 0045ad40
    PUSH 0x40000000                     ; 0045ad43
    FADD float ptr [ESP + 0xf8]         ; 0045ad48
    PUSH 0xc0000000                     ; 0045ad4f
    FSTP float ptr [ESP + 0xfc]         ; 0045ad54
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ad5b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ad60
    FLD float ptr [ESP + 0x168]         ; 0045ad67
    ADD ESP,0x8                         ; 0045ad6e
    PUSH 0x40a00000                     ; 0045ad71
    FADD float ptr [ESP + 0xfc]         ; 0045ad76
    PUSH 0xc0a00000                     ; 0045ad7d
    FSTP float ptr [ESP + 0x100]        ; 0045ad82
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ad89
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ad8e
    FLD float ptr [ESP + 0x168]         ; 0045ad95
    ADD ESP,0x8                         ; 0045ad9c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0045ad9f
    FADD float ptr [ESP + 0xfc]         ; 0045ada6
    MOV dword ptr [ESP + 0x118],EAX     ; 0045adad
    LEA EAX,[ESP + 0xf4]                ; 0045adb4
    FSTP float ptr [ESP + 0xfc]         ; 0045adbb
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045adc2
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045adc5
    LEA EAX,[ESP + 0xf4]                ; 0045adcc
    MOV EAX,dword ptr [EAX + 0x8]       ; 0045add3
    LEA EBX,[EDI + 0x38]                ; 0045add6
    MOV dword ptr [ESP + 0x120],EAX     ; 0045add9
    LEA EAX,[ESP + 0x118]               ; 0045ade0
    CMP EBX,EAX                         ; 0045ade7
    JZ 0x0045ae08                       ; 0045ade9
        ;   XREF to: 0045ae08 (CONDITIONAL_JUMP)  ; LAB_0045ae08
    MOV EAX,dword ptr [ESP + 0x118]     ; 0045adeb
    MOV dword ptr [EBX],EAX             ; 0045adf2 | g_SFreaky_ARRAY_01b4d280[0].control_points[2].x
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0045adf4
    MOV dword ptr [EBX + 0x4],EAX       ; 0045adfb | g_SFreaky_ARRAY_01b4d280[0].control_points[2].y
    MOV EAX,dword ptr [ESP + 0x120]     ; 0045adfe
    MOV dword ptr [EBX + 0x8],EAX       ; 0045ae05 | g_SFreaky_ARRAY_01b4d280[0].control_points[2].z
    MOV EAX,[0x01fb860c]                ; 0045ae08 | g_CDemonCamera_01fb8508.position.x
        ;   Label: LAB_0045ae08
    MOV dword ptr [ESP + 0x10c],EAX     ; 0045ae0d
    MOV EAX,0x1fb860c                   ; 0045ae14
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045ae19 | g_CDemonCamera_01fb8508.position.y
    MOV dword ptr [ESP + 0x110],EAX     ; 0045ae1c
    MOV EAX,0x1fb860c                   ; 0045ae23
    PUSH 0x40a00000                     ; 0045ae28
    MOV EAX,dword ptr [EAX + 0x8]       ; 0045ae2d | g_CDemonCamera_01fb8508.position.z
    PUSH 0xc0a00000                     ; 0045ae30
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045ae35
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ae3c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ae41
    FLD float ptr [ESP + 0x168]         ; 0045ae48
    ADD ESP,0x8                         ; 0045ae4f
    PUSH 0x40000000                     ; 0045ae52
    FADD float ptr [ESP + 0x110]        ; 0045ae57
    PUSH 0xc0000000                     ; 0045ae5e
    FSTP float ptr [ESP + 0x114]        ; 0045ae63
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ae6a
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ae6f
    FLD float ptr [ESP + 0x168]         ; 0045ae76
    ADD ESP,0x8                         ; 0045ae7d
    PUSH 0x40a00000                     ; 0045ae80
    FADD float ptr [ESP + 0x114]        ; 0045ae85
    PUSH 0xc0a00000                     ; 0045ae8c
    FSTP float ptr [ESP + 0x118]        ; 0045ae91
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045ae98
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0045ae9d
    FLD float ptr [ESP + 0x168]         ; 0045aea4
    ADD ESP,0x8                         ; 0045aeab
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0045aeae
    FADD float ptr [ESP + 0x114]        ; 0045aeb5
    MOV dword ptr [ESP + 0x13c],EAX     ; 0045aebc
    LEA EAX,[ESP + 0x10c]               ; 0045aec3
    FSTP float ptr [ESP + 0x114]        ; 0045aeca
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045aed1
    MOV dword ptr [ESP + 0x140],EAX     ; 0045aed4
    LEA EAX,[ESP + 0x10c]               ; 0045aedb
    MOV EAX,dword ptr [EAX + 0x8]       ; 0045aee2
    LEA EBX,[EDI + 0x44]                ; 0045aee5
    MOV dword ptr [ESP + 0x144],EAX     ; 0045aee8
    LEA EAX,[ESP + 0x13c]               ; 0045aeef
    CMP EBX,EAX                         ; 0045aef6
    JZ 0x0045af17                       ; 0045aef8
        ;   XREF to: 0045af17 (CONDITIONAL_JUMP)  ; LAB_0045af17
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0045aefa
    MOV dword ptr [EBX],EAX             ; 0045af01 | g_SFreaky_ARRAY_01b4d280[0].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x140]     ; 0045af03
    MOV dword ptr [EBX + 0x4],EAX       ; 0045af0a | g_SFreaky_ARRAY_01b4d280[0].control_points[3].y
    MOV EAX,dword ptr [ESP + 0x144]     ; 0045af0d
    MOV dword ptr [EBX + 0x8],EAX       ; 0045af14 | g_SFreaky_ARRAY_01b4d280[0].control_points[3].z
    PUSH 0x0                            ; 0045af17
        ;   Label: LAB_0045af17
    LEA EAX,[ESP + 0xcc]                ; 0045af19
    PUSH dword ptr [EDI + 0x1c]         ; 0045af20 | g_SFreaky_ARRAY_01b4d280[0].t
    PUSH EAX                            ; 0045af23
    CALL core_spline.cpp_computeSplineBasis_FUN_00533ce0 ; 0045af24
        ;   XREF to: 00533ce0 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_computeSplineBasis_FUN_00533ce0(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 0045af29
    LEA EAX,[EDI + 0x44]                ; 0045af2c
    PUSH EAX                            ; 0045af2f | g_SFreaky_ARRAY_01b4d280[0].control_points[3].x
    LEA EAX,[EDI + 0x38]                ; 0045af30
    PUSH EAX                            ; 0045af33 | g_SFreaky_ARRAY_01b4d280[0].control_points[2].x
    LEA EAX,[EDI + 0x2c]                ; 0045af34
    PUSH EAX                            ; 0045af37 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].x
    LEA EAX,[EDI + 0x20]                ; 0045af38
    PUSH EAX                            ; 0045af3b | g_SFreaky_ARRAY_01b4d280[0].control_points[0].x
    LEA EAX,[ESP + 0xf8]                ; 0045af3c
    PUSH EAX                            ; 0045af43
    LEA EAX,[ESP + 0xdc]                ; 0045af44
    PUSH EAX                            ; 0045af4b
    LEA EBX,[EDI + 0x4]                 ; 0045af4c
    CALL core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10 ; 0045af4f
        ;   XREF to: 00533f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 0045af54
    CMP EBX,EAX                         ; 0045af57
    JZ 0x0045af6b                       ; 0045af59
        ;   XREF to: 0045af6b (CONDITIONAL_JUMP)  ; LAB_0045af6b
    MOV EDX,dword ptr [EAX]             ; 0045af5b
    MOV dword ptr [EBX],EDX             ; 0045af5d | g_SFreaky_ARRAY_01b4d280[0].position.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045af5f
    MOV dword ptr [EBX + 0x4],EDX       ; 0045af62 | g_SFreaky_ARRAY_01b4d280[0].position.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045af65
    MOV dword ptr [EBX + 0x8],EDX       ; 0045af68 | g_SFreaky_ARRAY_01b4d280[0].position.z
    LEA EAX,[EDI + 0x44]                ; 0045af6b
        ;   Label: LAB_0045af6b
    PUSH EAX                            ; 0045af6e | g_SFreaky_ARRAY_01b4d280[0].control_points[3].x
    LEA EAX,[EDI + 0x38]                ; 0045af6f
    PUSH EAX                            ; 0045af72 | g_SFreaky_ARRAY_01b4d280[0].control_points[2].x
    LEA EAX,[EDI + 0x2c]                ; 0045af73
    PUSH EAX                            ; 0045af76 | g_SFreaky_ARRAY_01b4d280[0].control_points[1].x
    LEA EAX,[EDI + 0x20]                ; 0045af77
    PUSH EAX                            ; 0045af7a | g_SFreaky_ARRAY_01b4d280[0].control_points[0].x
    LEA EAX,[ESP + 0x164]               ; 0045af7b
    PUSH EAX                            ; 0045af82
    LEA EAX,[ESP + 0xdc]                ; 0045af83
    PUSH EAX                            ; 0045af8a
    LEA EBX,[EDI + 0x10]                ; 0045af8b
    CALL core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0 ; 0045af8e
        ;   XREF to: 005340d0 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 0045af93
    CMP EBX,EAX                         ; 0045af96
    JZ 0x0045afaa                       ; 0045af98
        ;   XREF to: 0045afaa (CONDITIONAL_JUMP)  ; LAB_0045afaa
    MOV EDX,dword ptr [EAX]             ; 0045af9a
    MOV dword ptr [EBX],EDX             ; 0045af9c | g_SFreaky_ARRAY_01b4d280[0].tangent.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045af9e
    MOV dword ptr [EBX + 0x4],EDX       ; 0045afa1 | g_SFreaky_ARRAY_01b4d280[0].tangent.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045afa4
    MOV dword ptr [EBX + 0x8],EDX       ; 0045afa7 | g_SFreaky_ARRAY_01b4d280[0].tangent.z
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0045afaa
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_0045afaa
    LEA EAX,[EDI + 0x4]                 ; 0045afaf
    PUSH EAX                            ; 0045afb2 | g_SFreaky_ARRAY_01b4d280[0].position.x
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0 ; 0045afb3
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0045afb8
    LEA EAX,[EDI + 0x10]                ; 0045afbb
    PUSH EAX                            ; 0045afbe | g_SFreaky_ARRAY_01b4d280[0].tangent.x
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090 ; 0045afbf
        ;   XREF to: 00526090 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0045afc4
    PUSH dword ptr [ESP + 0x180]        ; 0045afc7
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 0045afce
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0(float volume)
    ADD ESP,0x4                         ; 0045afd3
    MOV EBX,dword ptr [ESP + 0x17c]     ; 0045afd6
    PUSH EBX                            ; 0045afdd
    LEA EAX,[ESP + 0x4]                 ; 0045afde
    PUSH EAX                            ; 0045afe2
    MOV ESI,dword ptr [0x005bed68]      ; 0045afe3 | g_CSound_PTR_005bed68
    PUSH ESI                            ; 0045afe9
    CALL core_sound.cpp_FUN_0052d030    ; 0045afea
        ;   XREF to: 0052d030 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0052d030(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0045afef
    MOV EAX,ESP                         ; 0045aff2
    PUSH EAX                            ; 0045aff4
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 0045aff5
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 0045affa
    MOV dword ptr [EDI],EAX             ; 0045affd | g_SFreaky_ARRAY_01b4d280
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0045afff
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV dword ptr [EDI + 0x50],EBP      ; 0045b004 | g_SFreaky_ARRAY_01b4d280[0].owner
    ADD ESP,0x164                       ; 0045b007
    POP EBP                             ; 0045b00d
    POP EDI                             ; 0045b00e
    POP ESI                             ; 0045b00f
    POP EBX                             ; 0045b010
    RET                                 ; 0045b011

