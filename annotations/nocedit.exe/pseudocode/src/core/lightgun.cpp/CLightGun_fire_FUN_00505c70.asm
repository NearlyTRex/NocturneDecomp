; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_00505c70(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x78]:1  local_78
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_0063145d
;   TerminatedCString s_CBatman_0063146b
;   TerminatedCString s_CBatCreature_00631473
;   TerminatedCString s_CBride_00631480
;   TerminatedCString s_CGhoul_00631487
;   TerminatedCString s_CTVBat_0063148e
;   TerminatedCString s_CBatCreature_00631495
;   TerminatedCString s_CWerewolf_006314a2
;   TerminatedCString s_CSvetlana_006314ac
;   TerminatedCString s_CTrigger_CGlass_006314b6
;   TerminatedCString s_s_in_volume_006314ce
;   TerminatedCString s_cre_fire_wav_006314dc
;   double DOUBLE_006314ee = 1.5
;   float FLOAT_006314f6 = 0.5
;   float FLOAT_00660a40 = 30
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CVector_ctor_FUN_00410340
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
;   core_lightgun.cpp_CLightGun_FUN_00505ac0
;   core_setcolid.cpp_CDemonSet_FUN_00574170
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505c70
        ;   Label: core_lightgun.cpp_CLightGun_fire_FUN_00505c70
    PUSH ESI                            ; 00505c71
    PUSH EDI                            ; 00505c72
    PUSH EBP                            ; 00505c73
    MOV EBP,ESP                         ; 00505c74
    SUB ESP,0x110                       ; 00505c76
    AND ESP,0xfffffff8                  ; 00505c7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505c7f
    FLD float ptr [EAX + 0x580]         ; 00505c82
    FCOMP float ptr [0x00660a40]        ; 00505c88 | FLOAT_00660a40
    FNSTSW AX                           ; 00505c8e
    SAHF                                ; 00505c90
    JNC 0x00505c9c                      ; 00505c91
        ;   XREF to: 00505c9c (CONDITIONAL_JUMP)  ; LAB_00505c9c
    XOR EAX,EAX                         ; 00505c93
    MOV ESP,EBP                         ; 00505c95
    POP EBP                             ; 00505c97
    POP EDI                             ; 00505c98
    POP ESI                             ; 00505c99
    POP EBX                             ; 00505c9a
    RET                                 ; 00505c9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505c9c
        ;   Label: LAB_00505c9c
    LEA EBX,[ESP + 0xa8]                ; 00505c9f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00505ca6
    PUSH EBX                            ; 00505ca9
    FLD float ptr [EAX + 0x2e8]         ; 00505caa
    MOV dword ptr [EAX + 0x580],0x0     ; 00505cb0
    PUSH EDX                            ; 00505cba
    FSTP float ptr [EAX + 0x58c]        ; 00505cbb
    MOV EAX,dword ptr [EAX + 0x154]     ; 00505cc1
    CALL dword ptr [EAX + 0xf4]         ; 00505cc7
    ADD ESP,0x8                         ; 00505ccd
    PUSH EAX                            ; 00505cd0
    LEA EAX,[ESP + 0xb8]                ; 00505cd1
    PUSH EAX                            ; 00505cd8
    MOV ECX,dword ptr [EBP + 0x14]      ; 00505cd9
    PUSH ECX                            ; 00505cdc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00505cdd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00505ce2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505ce5
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 00505ce8
    MOV dword ptr [ESP + 0xd4],EAX      ; 00505cee
    LEA EAX,[ESP + 0xcc]                ; 00505cf5
    PUSH EAX                            ; 00505cfc
    LEA EAX,[ESP + 0x94]                ; 00505cfd
    PUSH EAX                            ; 00505d04
    MOV EDI,dword ptr [EBP + 0x14]      ; 00505d05
    XOR EBX,EBX                         ; 00505d08
    PUSH EDI                            ; 00505d0a
    MOV dword ptr [ESP + 0xd8],EBX      ; 00505d0b
    MOV dword ptr [ESP + 0xdc],EBX      ; 00505d12
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00505d19
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00505d1e
    FLD float ptr [ESP + 0xb4]          ; 00505d21
    FLD float ptr [ESP + 0xb8]          ; 00505d28
    FLD float ptr [ESP + 0xbc]          ; 00505d2f
    FXCH ST2                            ; 00505d36
    FADD float ptr [ESP + 0x90]         ; 00505d38
    FXCH                                ; 00505d3f
    FADD float ptr [ESP + 0x94]         ; 00505d41
    FXCH ST2                            ; 00505d48
    FADD float ptr [ESP + 0x98]         ; 00505d4a
    FXCH                                ; 00505d51
    FSTP float ptr [ESP + 0x84]         ; 00505d53
    FXCH                                ; 00505d5a
    FSTP float ptr [ESP + 0x88]         ; 00505d5c
    FSTP float ptr [ESP + 0x8c]         ; 00505d63
    FLD float ptr [EDI + 0x2e8]         ; 00505d6a
    FDIVR double ptr [0x006314ee]       ; 00505d70 | DOUBLE_006314ee
    FLD float ptr [ESP + 0x90]          ; 00505d76
    FXCH                                ; 00505d7d
    FSTP float ptr [ESP + 0xf0]         ; 00505d7f
    FMUL float ptr [ESP + 0xf0]         ; 00505d86
    FLD float ptr [ESP + 0x94]          ; 00505d8d
    FMUL float ptr [ESP + 0xf0]         ; 00505d94
    FLD float ptr [ESP + 0x98]          ; 00505d9b
    FMUL float ptr [ESP + 0xf0]         ; 00505da2
    MOV EAX,[0x006810c8]                ; 00505da9 | g_CDemonSetInstance | g_CDemonSetPtr
    FLD float ptr [ESP + 0xb4]          ; 00505dae
    FLD float ptr [ESP + 0xb8]          ; 00505db5
    FLD float ptr [ESP + 0xbc]          ; 00505dbc
    PUSH EAX                            ; 00505dc3 | g_CDemonSetInstance
    FXCH ST5                            ; 00505dc4
    FSTP float ptr [ESP + 0x7c]         ; 00505dc6
    FXCH ST3                            ; 00505dca
    FSTP float ptr [ESP + 0x80]         ; 00505dcc
    FXCH                                ; 00505dd3
    FSTP float ptr [ESP + 0x84]         ; 00505dd5
    FSUB float ptr [ESP + 0x7c]         ; 00505ddc
    FXCH                                ; 00505de0
    FSUB float ptr [ESP + 0x80]         ; 00505de2
    FXCH ST2                            ; 00505de9
    FSUB float ptr [ESP + 0x84]         ; 00505deb
    FXCH                                ; 00505df2
    FSTP float ptr [ESP + 0xe8]         ; 00505df4
    FXCH                                ; 00505dfb
    FSTP float ptr [ESP + 0xec]         ; 00505dfd
    FSTP float ptr [ESP + 0xf0]         ; 00505e04
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 00505e0b
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505e10
    PUSH 0x1                            ; 00505e13
    MOV EDX,dword ptr [0x006810c8]      ; 00505e15 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00505e1b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 00505e1c
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00505e21
    MOV ECX,dword ptr [0x006810c8]      ; 00505e24 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00505e2a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574170 ; 00505e2b
        ;   XREF to: 00574170 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00574170(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505e30
    PUSH EDI                            ; 00505e33
    MOV ESI,dword ptr [0x006810c8]      ; 00505e34 | g_CDemonSetPtr
    PUSH ESI                            ; 00505e3a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00505e3b
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDI,dword ptr [EDI + 0x304]     ; 00505e40
    ADD ESP,0x8                         ; 00505e46
    TEST EDI,EDI                        ; 00505e49
    JNZ 0x005060c8                      ; 00505e4b
        ;   XREF to: 005060c8 (CONDITIONAL_JUMP)  ; LAB_005060c8
    MOV EBX,dword ptr [0x006810c8]      ; 00505e51 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00505e51
    PUSH EBX                            ; 00505e57 | g_CDemonSetInstance
    XOR EDI,EDI                         ; 00505e58
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10 ; 00505e5a
        ;   XREF to: 00573e10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505e5f
    LEA EAX,[ESP + 0x84]                ; 00505e62
        ;   Label: LAB_00505e62
    PUSH EAX                            ; 00505e69
    LEA EAX,[ESP + 0xe8]                ; 00505e6a
    PUSH EAX                            ; 00505e71
    MOV ESI,dword ptr [0x006810c8]      ; 00505e72 | g_CDemonSetPtr
    PUSH ESI                            ; 00505e78 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 00505e79
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x118],EAX     ; 00505e7e
    FLD float ptr [ESP + 0x118]         ; 00505e85
    ADD ESP,0xc                         ; 00505e8c
    FLDZ                                ; 00505e8f
    FXCH                                ; 00505e91
    FST float ptr [ESP + 0x8]           ; 00505e93
    FSTP double ptr [ESP]               ; 00505e97
    FCOMP double ptr [ESP]              ; 00505e9a
    FNSTSW AX                           ; 00505e9d
    SAHF                                ; 00505e9f
    JBE 0x005060e6                      ; 00505ea0
        ;   XREF to: 005060e6 (CONDITIONAL_JUMP)  ; LAB_005060e6
    MOV EAX,[0x006810c8]                ; 00505ea6 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00505ea6
    PUSH EAX                            ; 00505eab | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 ; 00505eac
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505eb1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00505eb4
    PUSH EDX                            ; 00505eb7
    CALL core_lightgun.cpp_CLightGun_FUN_00505ac0 ; 00505eb8
        ;   XREF to: 00505ac0 (UNCONDITIONAL_CALL)  ; void core_lightgun.cpp_CLightGun_FUN_00505ac0(CLightGun * this_ptr)
    ADD ESP,0x4                         ; 00505ebd
    XOR ECX,ECX                         ; 00505ec0
    MOV dword ptr [ESP + 0x100],ECX     ; 00505ec2
    MOV dword ptr [ESP + 0xfc],ECX      ; 00505ec9
    MOV EAX,[0x006810c8]                ; 00505ed0 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00505ed0
    MOV EBX,dword ptr [ESP + 0x100]     ; 00505ed5
    CMP EBX,dword ptr [EAX + 0x14f098]  ; 00505edc | g_CDemonSetInstance.damage_listener_count
    JGE 0x005063e6                      ; 00505ee2
        ;   XREF to: 005063e6 (CONDITIONAL_JUMP)  ; LAB_005063e6
    ADD EAX,dword ptr [ESP + 0xfc]      ; 00505ee8
    MOV ESI,dword ptr [EAX + 0x14f09c]  ; 00505eef | g_CDemonSetInstance.damage_listeners | DAT_03263318
    PUSH ESI                            ; 00505ef5
    MOV EAX,dword ptr [ESI + 0x154]     ; 00505ef6
    CALL dword ptr [EAX + 0xf4]         ; 00505efc
    ADD ESP,0x4                         ; 00505f02
    TEST EAX,EAX                        ; 00505f05
    JZ 0x00506274                       ; 00505f07
        ;   XREF to: 00506274 (CONDITIONAL_JUMP)  ; LAB_00506274
    PUSH 0x63145d                       ; 00505f0d | = "CDraculaBride"
        ;   Label: LAB_00505f0d
    PUSH ESI                            ; 00505f12
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505f13
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505f18
    TEST EAX,EAX                        ; 00505f1b
    JZ 0x005062e7                       ; 00505f1d
        ;   XREF to: 005062e7 (CONDITIONAL_JUMP)  ; LAB_005062e7
    LEA EAX,[ESP + 0x48]                ; 00505f23
        ;   Label: LAB_00505f23
    PUSH EAX                            ; 00505f27
    MOV EBX,dword ptr [ESI + 0x154]     ; 00505f28
    PUSH ESI                            ; 00505f2e
    CALL dword ptr [EBX + 0x14]         ; 00505f2f
    ADD ESP,0x8                         ; 00505f32
    LEA EAX,[ESP + 0x54]                ; 00505f35
    PUSH EAX                            ; 00505f39
    LEA EAX,[ESP + 0x4c]                ; 00505f3a
    PUSH EAX                            ; 00505f3e
    LEA EAX,[ESI + 0x30]                ; 00505f3f
    PUSH EAX                            ; 00505f42
    LEA EAX,[ESI + 0x20]                ; 00505f43
    PUSH EAX                            ; 00505f46
    PUSH 0x2d7eaf0                      ; 00505f47 | g_CDemonLightInstance
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 ; 00505f4c
        ;   XREF to: 00452180 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera * this_ptr, CVector3f * position, CVector3f * min_corner, CVector3f * max_corner)
    ADD ESP,0x14                        ; 00505f51
    TEST EAX,EAX                        ; 00505f54
    JZ 0x005060a3                       ; 00505f56
        ;   XREF to: 005060a3 (CONDITIONAL_JUMP)  ; LAB_005060a3
    PUSH ESI                            ; 00505f5c
    PUSH 0x6314ce                       ; 00505f5d | = "%s in volume\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 00505f62 | g_ConsolePtr | g_CConsolePtr
    PUSH EBX                            ; 00505f68 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00505f69
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    LEA EAX,[ESP + 0xf0]                ; 00505f6e
    ADD ESP,0xc                         ; 00505f75
    MOV dword ptr [ESP + 0x108],EAX     ; 00505f78
    MOV EAX,[0x006810c8]                ; 00505f7f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 00505f84 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10 ; 00505f85
        ;   XREF to: 00573e10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505f8a
    LEA EAX,[ESP + 0x60]                ; 00505f8d
    PUSH EAX                            ; 00505f91
    MOV EBX,dword ptr [ESI + 0x154]     ; 00505f92
    PUSH ESI                            ; 00505f98
    CALL dword ptr [EBX + 0x14]         ; 00505f99
    MOV EBX,EAX                         ; 00505f9c
    ADD ESP,0x8                         ; 00505f9e
    ADD EAX,0xc                         ; 00505fa1
    MOV dword ptr [ESP + 0x10c],EAX     ; 00505fa4
    LEA EAX,[ESP + 0xc0]                ; 00505fab
    PUSH EAX                            ; 00505fb2
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 00505fb3
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00505fb8
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00505fbb
    FLD float ptr [EBX]                 ; 00505fc2
    FADD float ptr [EAX]                ; 00505fc4
    FSTP float ptr [ESP + 0xc0]         ; 00505fc6
    FLD float ptr [EBX + 0x4]           ; 00505fcd
    FADD float ptr [EAX + 0x4]          ; 00505fd0
    FSTP float ptr [ESP + 0xc4]         ; 00505fd3
    FLD float ptr [EBX + 0x8]           ; 00505fda
    FADD float ptr [EAX + 0x8]          ; 00505fdd
    LEA EAX,[ESP + 0xd8]                ; 00505fe0
    PUSH EAX                            ; 00505fe7
    FSTP float ptr [ESP + 0xcc]         ; 00505fe8
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 00505fef
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00505ff4
    FLD float ptr [0x006314f6]          ; 00505ff7 | FLOAT_006314f6
    FLD float ptr [ESP + 0xc0]          ; 00505ffd
    FMUL ST1                            ; 00506004
    FLD float ptr [ESP + 0xc4]          ; 00506006
    FMUL ST2                            ; 0050600d
    FLD float ptr [ESP + 0xc8]          ; 0050600f
    FMULP ST3                           ; 00506016
    LEA EAX,[ESP + 0xd8]                ; 00506018
    MOV EDI,ESI                         ; 0050601f
    PUSH EAX                            ; 00506021
    LEA EAX,[ESP + 0xa0]                ; 00506022
    FXCH                                ; 00506029
    FSTP float ptr [ESP + 0xdc]         ; 0050602b
    PUSH EAX                            ; 00506032
    FSTP float ptr [ESP + 0xe4]         ; 00506033
    PUSH ESI                            ; 0050603a
    FSTP float ptr [ESP + 0xec]         ; 0050603b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00506042
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00506047
    XOR EDX,EDX                         ; 0050604a
    XOR EBX,EBX                         ; 0050604c
    MOV dword ptr [ESP + 0xf8],EDX      ; 0050604e
    LEA EAX,[ESP + 0x9c]                ; 00506055
        ;   Label: LAB_00506055
    PUSH EAX                            ; 0050605c
    MOV ECX,dword ptr [ESP + 0x10c]     ; 0050605d
    PUSH ECX                            ; 00506064
    MOV EAX,[0x006810c8]                ; 00506065 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0050606a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 0050606b
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV EAX,[0x006810c8]                ; 00506070 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00506075 | DAT_032613bc
    ADD ESP,0xc                         ; 0050607b
    TEST EDX,EDX                        ; 0050607e
    JNZ 0x00506352                      ; 00506080
        ;   XREF to: 00506352 (CONDITIONAL_JUMP)  ; LAB_00506352
    MOV EDI,dword ptr [0x006810c8]      ; 00506086 | g_CDemonSetPtr
        ;   Label: LAB_00506086
    PUSH EDI                            ; 0050608c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 ; 0050608d
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00506092
    CMP dword ptr [ESP + 0xf8],0x0      ; 00506095
    JNZ 0x0050637d                      ; 0050609d
        ;   XREF to: 0050637d (CONDITIONAL_JUMP)  ; LAB_0050637d
    MOV ESI,dword ptr [ESP + 0x100]     ; 005060a3
        ;   Label: LAB_005060a3
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005060aa
    INC ESI                             ; 005060b1
    ADD EBX,0x4                         ; 005060b2
    MOV dword ptr [ESP + 0x100],ESI     ; 005060b5
    MOV dword ptr [ESP + 0xfc],EBX      ; 005060bc
    JMP 0x00505ed0                      ; 005060c3
        ;   XREF to: 00505ed0 (UNCONDITIONAL_JUMP)  ; LAB_00505ed0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005060c8
        ;   Label: LAB_005060c8
    MOV EDX,dword ptr [EAX + 0x304]     ; 005060cb
    PUSH EDX                            ; 005060d1
    MOV ECX,dword ptr [0x006810c8]      ; 005060d2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005060d8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005060d9
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005060de
    JMP 0x00505e51                      ; 005060e1
        ;   XREF to: 00505e51 (UNCONDITIONAL_JUMP)  ; LAB_00505e51
    FLD1                                ; 005060e6
        ;   Label: LAB_005060e6
    FCOMP double ptr [ESP]              ; 005060e8
    FNSTSW AX                           ; 005060eb
    SAHF                                ; 005060ed
    JC 0x00505ea6                       ; 005060ee
        ;   XREF to: 00505ea6 (CONDITIONAL_JUMP)  ; LAB_00505ea6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005060f4
    FLD float ptr [EAX + 0x2e8]         ; 005060f7
    FMUL float ptr [ESP + 0x8]          ; 005060fd
    FSTP float ptr [EAX + 0x58c]        ; 00506101
    MOV EAX,[0x00823c4c]                ; 00506107 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0050610c
    MOV EAX,[0x006810c8]                ; 0050610d | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00506112 | DAT_032613bc
    PUSH EDX                            ; 00506118
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00506119
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0050611e
    MOV dword ptr [ESP + 0x104],EAX     ; 00506121
    TEST EAX,EAX                        ; 00506128
    JZ 0x00506149                       ; 0050612a
        ;   XREF to: 00506149 (CONDITIONAL_JUMP)  ; LAB_00506149
    PUSH EAX                            ; 0050612c
    MOV EBX,dword ptr [EAX + 0x154]     ; 0050612d
    CALL dword ptr [EBX + 0x120]        ; 00506133
    ADD ESP,0x4                         ; 00506139
    TEST EAX,EAX                        ; 0050613c
    JLE 0x00506149                      ; 0050613e
        ;   XREF to: 00506149 (CONDITIONAL_JUMP)  ; LAB_00506149
    XOR ECX,ECX                         ; 00506140
    MOV dword ptr [ESP + 0x104],ECX     ; 00506142
    MOV EBX,dword ptr [0x02d83360]      ; 00506149 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00506149
    MOV EAX,[0x006810c8]                ; 0050614f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00506154
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00506155 | DAT_032613bc
    PUSH ESI                            ; 0050615b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0050615c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00506161
    MOV ESI,EAX                         ; 00506164
    MOV EAX,[0x03f87490]                ; 00506166 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 0050616b
    MOV EAX,[0x006810c8]                ; 0050616c | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00506171 | DAT_032613bc
    PUSH EDX                            ; 00506177
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00506178
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0050617d
    MOV EBX,EAX                         ; 00506180
    MOV ECX,dword ptr [ESP + 0x104]     ; 00506182
    MOV dword ptr [ESP + 0xf4],EAX      ; 00506189
    TEST ECX,ECX                        ; 00506190
    JZ 0x005061ea                       ; 00506192
        ;   XREF to: 005061ea (CONDITIONAL_JUMP)  ; LAB_005061ea
    PUSH ECX                            ; 00506194
    MOV EAX,dword ptr [ECX + 0x154]     ; 00506195
    CALL dword ptr [EAX + 0xf4]         ; 0050619b
    ADD ESP,0x4                         ; 005061a1
    TEST EAX,EAX                        ; 005061a4
    JZ 0x00505ea6                       ; 005061a6
        ;   XREF to: 00505ea6 (CONDITIONAL_JUMP)  ; LAB_00505ea6
    TEST EDI,EDI                        ; 005061ac
    JNZ 0x00505ea6                      ; 005061ae
        ;   XREF to: 00505ea6 (CONDITIONAL_JUMP)  ; LAB_00505ea6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005061b4
    MOV ESI,dword ptr [0x006810c8]      ; 005061b7 | g_CDemonSetPtr
    FLD float ptr [0x00660a40]          ; 005061bd | FLOAT_00660a40
    PUSH ESI                            ; 005061c3 | g_CDemonSetInstance
    FSTP float ptr [EAX + 0x580]        ; 005061c4
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 ; 005061ca
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005061cf
    MOV EDI,dword ptr [0x006810c8]      ; 005061d2 | g_CDemonSetPtr
    PUSH EDI                            ; 005061d8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005061d9
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005061de
    XOR EAX,EAX                         ; 005061e1
    MOV ESP,EBP                         ; 005061e3
    POP EBP                             ; 005061e5
    POP EDI                             ; 005061e6
    POP ESI                             ; 005061e7
    POP EBX                             ; 005061e8
    RET                                 ; 005061e9
    TEST ESI,ESI                        ; 005061ea
        ;   Label: LAB_005061ea
    JNZ 0x00506255                      ; 005061ec
        ;   XREF to: 00506255 (CONDITIONAL_JUMP)  ; LAB_00506255
    TEST EAX,EAX                        ; 005061ee
    JZ 0x00506265                       ; 005061f0
        ;   XREF to: 00506265 (CONDITIONAL_JUMP)  ; LAB_00506265
    PUSH EAX                            ; 005061f2
    CALL core_trigger.cpp_CTrigger_FUN_005e0aa0 ; 005061f3
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005061f8
    MOV ESI,dword ptr [EBP + 0x14]      ; 005061fb
    PUSH ESI                            ; 005061fe
    PUSH EBX                            ; 005061ff
    CALL core_trigger.cpp_CTrigger_FUN_005e0ac0 ; 00506200
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_FUN_005e0ac0(CTrigger * this_ptr)
    ADD ESP,0x8                         ; 00506205
    TEST EAX,EAX                        ; 00506208
    JZ 0x00506239                       ; 0050620a
        ;   XREF to: 00506239 (CONDITIONAL_JUMP)  ; LAB_00506239
    PUSH ESI                            ; 0050620c
    MOV EAX,dword ptr [ESI + 0x154]     ; 0050620d
    CALL dword ptr [EAX + 0x100]        ; 00506213
    MOV dword ptr [ESP + 0x110],EAX     ; 00506219
    FLD float ptr [ESP + 0x110]         ; 00506220
    ADD ESP,0x4                         ; 00506227
    SUB ESP,0x4                         ; 0050622a
    FSTP float ptr [ESP]                ; 0050622d
    PUSH EBX                            ; 00506230
    CALL core_trigger.cpp_CTrigger_FUN_005e0b00 ; 00506231
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_FUN_005e0b00(CTrigger * this_ptr)
    ADD ESP,0x8                         ; 00506236
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00506239
        ;   Label: LAB_00506239
    PUSH EAX                            ; 00506240
    MOV EDX,dword ptr [0x006810c8]      ; 00506241 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00506247 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00506248
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0050624d
    JMP 0x00505ea6                      ; 00506250
        ;   XREF to: 00505ea6 (UNCONDITIONAL_JUMP)  ; LAB_00505ea6
    PUSH ESI                            ; 00506255
        ;   Label: LAB_00506255
    MOV ECX,dword ptr [0x006810c8]      ; 00506256 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0050625c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0050625d
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00506262
    INC EDI                             ; 00506265
        ;   Label: LAB_00506265
    CMP EDI,0x1                         ; 00506266
    JL 0x00505e62                       ; 00506269
        ;   XREF to: 00505e62 (CONDITIONAL_JUMP)  ; LAB_00505e62
    JMP 0x00505ea6                      ; 0050626f
        ;   XREF to: 00505ea6 (UNCONDITIONAL_JUMP)  ; LAB_00505ea6
    PUSH 0x631487                       ; 00506274 | = "CGhoul"
        ;   Label: LAB_00506274
    PUSH ESI                            ; 00506279
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0050627a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050627f
    TEST EAX,EAX                        ; 00506282
    JNZ 0x00505f23                      ; 00506284
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    PUSH 0x63148e                       ; 0050628a | = "CTVBat"
    PUSH ESI                            ; 0050628f
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00506290
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00506295
    TEST EAX,EAX                        ; 00506298
    JNZ 0x00505f23                      ; 0050629a
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    PUSH 0x631495                       ; 005062a0 | = "CBatCreature"
    PUSH ESI                            ; 005062a5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005062a6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005062ab
    TEST EAX,EAX                        ; 005062ae
    JNZ 0x00505f23                      ; 005062b0
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    PUSH 0x6314a2                       ; 005062b6 | = "CWerewolf"
    PUSH ESI                            ; 005062bb
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005062bc
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005062c1
    TEST EAX,EAX                        ; 005062c4
    JNZ 0x00505f23                      ; 005062c6
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    PUSH 0x6314ac                       ; 005062cc | = "CSvetlana"
    PUSH ESI                            ; 005062d1
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005062d2
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005062d7
    TEST EAX,EAX                        ; 005062da
    JNZ 0x00505f23                      ; 005062dc
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    JMP 0x00505f0d                      ; 005062e2
        ;   XREF to: 00505f0d (UNCONDITIONAL_JUMP)  ; LAB_00505f0d
    PUSH 0x63146b                       ; 005062e7 | = "CBatman"
        ;   Label: LAB_005062e7
    PUSH ESI                            ; 005062ec
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005062ed
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005062f2
    TEST EAX,EAX                        ; 005062f5
    JNZ 0x00505f23                      ; 005062f7
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    PUSH 0x631473                       ; 005062fd | = "CBatCreature"
    PUSH ESI                            ; 00506302
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00506303
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00506308
    TEST EAX,EAX                        ; 0050630b
    JNZ 0x00505f23                      ; 0050630d
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    PUSH 0x631480                       ; 00506313 | = "CBride"
    PUSH ESI                            ; 00506318
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00506319
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050631e
    TEST EAX,EAX                        ; 00506321
    JNZ 0x00505f23                      ; 00506323
        ;   XREF to: 00505f23 (CONDITIONAL_JUMP)  ; LAB_00505f23
    JMP 0x005060a3                      ; 00506329
        ;   XREF to: 005060a3 (UNCONDITIONAL_JUMP)  ; LAB_005060a3
    MOV EAX,[0x006810c8]                ; 0050632e | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_0050632e
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00506333 | DAT_032613bc
    PUSH ECX                            ; 00506339
    PUSH EAX                            ; 0050633a | g_CDemonSetInstance
    INC EBX                             ; 0050633b
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0050633c
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00506341
    CMP EBX,0x3                         ; 00506344
    JL 0x00506055                       ; 00506347
        ;   XREF to: 00506055 (CONDITIONAL_JUMP)  ; LAB_00506055
    JMP 0x00506086                      ; 0050634d
        ;   XREF to: 00506086 (UNCONDITIONAL_JUMP)  ; LAB_00506086
    CMP EDI,EDX                         ; 00506352
        ;   Label: LAB_00506352
    JNZ 0x00506366                      ; 00506354
        ;   XREF to: 00506366 (CONDITIONAL_JUMP)  ; LAB_00506366
    MOV dword ptr [ESP + 0xf8],0x1      ; 00506356
    JMP 0x00506086                      ; 00506361
        ;   XREF to: 00506086 (UNCONDITIONAL_JUMP)  ; LAB_00506086
    PUSH 0x6314b6                       ; 00506366 | = "CTrigger || CGlass"
        ;   Label: LAB_00506366
    PUSH EDX                            ; 0050636b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0050636c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00506371
    TEST EAX,EAX                        ; 00506374
    JNZ 0x0050632e                      ; 00506376
        ;   XREF to: 0050632e (CONDITIONAL_JUMP)  ; LAB_0050632e
    JMP 0x00506086                      ; 00506378
        ;   XREF to: 00506086 (UNCONDITIONAL_JUMP)  ; LAB_00506086
    LEA EAX,[ESP + 0xc]                 ; 0050637d
        ;   Label: LAB_0050637d
    PUSH EAX                            ; 00506381
    XOR EBX,EBX                         ; 00506382
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00506384
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EDX,0x3dcccccd                  ; 00506389
    ADD ESP,0x4                         ; 0050638e
    MOV ECX,0x6c                        ; 00506391
    MOV EAX,dword ptr [EBP + 0x14]      ; 00506396
    MOV dword ptr [ESP + 0x10],EDX      ; 00506399
    MOV dword ptr [ESP + 0x3c],ECX      ; 0050639d
    MOV dword ptr [ESP + 0x14],EBX      ; 005063a1
    MOV dword ptr [ESP + 0x20],EBX      ; 005063a5
    MOV dword ptr [ESP + 0x1c],EBX      ; 005063a9
    MOV dword ptr [ESP + 0x18],EBX      ; 005063ad
    MOV ECX,dword ptr [EBP + 0x14]      ; 005063b1
    MOV dword ptr [ESP + 0x40],EAX      ; 005063b4
    PUSH ECX                            ; 005063b8
    MOV EAX,dword ptr [EAX + 0x154]     ; 005063b9
    CALL dword ptr [EAX + 0x8c]         ; 005063bf
    ADD ESP,0x4                         ; 005063c5
    MOV dword ptr [ESP + 0x44],EAX      ; 005063c8
    LEA EAX,[ESP + 0xc]                 ; 005063cc
    PUSH EAX                            ; 005063d0
    MOV EBX,dword ptr [ESI + 0x154]     ; 005063d1
    PUSH ESI                            ; 005063d7
    CALL dword ptr [EBX + 0x11c]        ; 005063d8
    ADD ESP,0x8                         ; 005063de
    JMP 0x005060a3                      ; 005063e1
        ;   XREF to: 005060a3 (UNCONDITIONAL_JUMP)  ; LAB_005060a3
    PUSH EAX                            ; 005063e6 | g_CDemonSetInstance
        ;   Label: LAB_005063e6
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005063e7
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005063ec
    LEA EAX,[ESP + 0xb4]                ; 005063ef
    PUSH EAX                            ; 005063f6
    PUSH 0x6314dc                       ; 005063f7 | = "cre-fire.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 005063fc
    PUSH EDI                            ; 005063ff
    MOV EAX,[0x00681ef8]                ; 00506400 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 00506405 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 00506406
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0050640b
    MOV EDX,dword ptr [EDI + 0x57c]     ; 0050640e
    PUSH dword ptr [0x00660a48]         ; 00506414 | FLOAT_00660a48
    PUSH EDX                            ; 0050641a
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 0050641b
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    MOV EAX,0x1                         ; 00506420
    MOV dword ptr [EDI + 0x578],0x1     ; 00506425
    ADD ESP,0x8                         ; 0050642f
    MOV dword ptr [EDI + 0x588],0x1     ; 00506432
    MOV ESP,EBP                         ; 0050643c
    POP EBP                             ; 0050643e
    POP EDI                             ; 0050643f
    POP ESI                             ; 00506440
    POP EBX                             ; 00506441
    RET                                 ; 00506442

