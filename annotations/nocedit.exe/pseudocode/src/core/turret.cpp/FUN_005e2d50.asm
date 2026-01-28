; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_turret_cpp_FUN_005e2d50(void)
;
; Local Variables:
; undefined1       Stack[-0xb4]:1  local_b4
;
; XREF[1]:
;   core_turret.cpp_CTurret_process_FUN_005e2430 at 005e2626
;
; Referenced Globals:
;   TerminatedCString s_s_has_no_guard_trigger_0065675b
;   float FLOAT_00656778 = -15
;   float FLOAT_0065677c = 15
;   float FLOAT_00656780 = 0.5
;   WatcomTypeInfo g_CVectorTypeInfo
;   float FLOAT_00664b6c = -0.5235988
;   float FLOAT_00664b70 = 1.221730
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_ConsolePtr
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
;   core_turret.cpp_FUN_005e3280
;   core_turret.cpp_FUN_005e3560
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2d50
        ;   Label: core_turret.cpp_FUN_005e2d50
    PUSH ESI                            ; 005e2d51
    PUSH EDI                            ; 005e2d52
    PUSH EBP                            ; 005e2d53
    SUB ESP,0x14c                       ; 005e2d54
    MOV ESI,dword ptr [ESP + 0x160]     ; 005e2d5a
    MOV EDX,dword ptr [ESI + 0x780]     ; 005e2d61
    TEST EDX,EDX                        ; 005e2d67
    JZ 0x005e2edc                       ; 005e2d69
        ;   XREF to: 005e2edc (CONDITIONAL_JUMP)  ; LAB_005e2edc
    MOV EAX,EDX                         ; 005e2d6f
    MOV EBX,dword ptr [EDX + 0x154]     ; 005e2d71
    LEA EDX,[ESP + 0xa8]                ; 005e2d77
    PUSH EDX                            ; 005e2d7e
    PUSH EAX                            ; 005e2d7f
    CALL dword ptr [EBX + 0x14]         ; 005e2d80
    ADD ESP,0x8                         ; 005e2d83
    LEA EAX,[ESP + 0x90]                ; 005e2d86
    PUSH EAX                            ; 005e2d8d
    XOR EBX,EBX                         ; 005e2d8e
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0 ; 005e2d90
        ;   XREF to: 00420fb0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e2d95
    PUSH EBX                            ; 005e2d98
        ;   Label: LAB_005e2d98
    LEA EAX,[ESP + 0xe8]                ; 005e2d99
    PUSH EAX                            ; 005e2da0
    LEA EAX,[ESP + 0xb0]                ; 005e2da1
    PUSH EAX                            ; 005e2da8
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 005e2da9
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 005e2dae
    PUSH EAX                            ; 005e2db1
    LEA EAX,[ESP + 0xf4]                ; 005e2db2
    PUSH EAX                            ; 005e2db9
    MOV EDI,dword ptr [ESI + 0x780]     ; 005e2dba
    PUSH EDI                            ; 005e2dc0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e2dc1
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005e2dc6
    PUSH EAX                            ; 005e2dc9
    LEA EAX,[ESP + 0x94]                ; 005e2dca
    PUSH EAX                            ; 005e2dd1
    INC EBX                             ; 005e2dd2
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005e2dd3
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005e2dd8
    CMP EBX,0x8                         ; 005e2ddb
    JL 0x005e2d98                       ; 005e2dde
        ;   XREF to: 005e2d98 (CONDITIONAL_JUMP)  ; LAB_005e2d98
    FLD float ptr [ESP + 0x90]          ; 005e2de0
    FLD float ptr [ESP + 0x94]          ; 005e2de7
    FLD float ptr [ESP + 0x98]          ; 005e2dee
    FLD float ptr [ESP + 0x9c]          ; 005e2df5
    FLD float ptr [ESP + 0xa0]          ; 005e2dfc
    FLD float ptr [ESP + 0xa4]          ; 005e2e03
    MOV EBP,0x41700000                  ; 005e2e0a
    MOV ECX,0x4479c000                  ; 005e2e0f
    LEA EAX,[ESI + 0x784]               ; 005e2e14
    MOV dword ptr [ESP + 0xc0],EBP      ; 005e2e1a
    MOV dword ptr [ESP + 0xc4],EBP      ; 005e2e21
    MOV dword ptr [ESP + 0xc8],EBP      ; 005e2e28
    MOV dword ptr [ESP + 0xcc],ECX      ; 005e2e2f
    MOV dword ptr [ESP + 0xd0],ECX      ; 005e2e36
    MOV EDI,ECX                         ; 005e2e3d
    MOV dword ptr [ESP + 0xd4],ECX      ; 005e2e3f
    MOV dword ptr [ESP + 0x148],EAX     ; 005e2e46
    FXCH ST5                            ; 005e2e4d
    FLD float ptr [0x00656778]          ; 005e2e4f | FLOAT_00656778
    FXCH                                ; 005e2e55
    FADD ST0,ST1                        ; 005e2e57
    FXCH ST5                            ; 005e2e59
    FADD ST0,ST1                        ; 005e2e5b
    FXCH ST4                            ; 005e2e5d
    FADDP                               ; 005e2e5f
    FXCH ST2                            ; 005e2e61
    FLD float ptr [0x0065677c]          ; 005e2e63 | FLOAT_0065677c
    FXCH                                ; 005e2e69
    FADD ST0,ST1                        ; 005e2e6b
    FXCH ST2                            ; 005e2e6d
    FADD ST0,ST1                        ; 005e2e6f
    FXCH ST6                            ; 005e2e71
    FADDP                               ; 005e2e73
    FXCH ST4                            ; 005e2e75
    FSTP float ptr [ESP + 0x90]         ; 005e2e77
    FXCH ST2                            ; 005e2e7e
    FSTP float ptr [ESP + 0x94]         ; 005e2e80
    FSTP float ptr [ESP + 0x98]         ; 005e2e87
    FSTP float ptr [ESP + 0x9c]         ; 005e2e8e
    FXCH                                ; 005e2e95
    FSTP float ptr [ESP + 0xa0]         ; 005e2e97
    FSTP float ptr [ESP + 0xa4]         ; 005e2e9e
    XOR EDI,ECX                         ; 005e2ea5
    XOR EBP,EBP                         ; 005e2ea7
    MOV EAX,[0x006810c8]                ; 005e2ea9 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005e2ea9
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 005e2eae | g_CDemonSetInstance.actor_list_ptr
    JGE 0x005e3200                      ; 005e2eb4
        ;   XREF to: 005e3200 (CONDITIONAL_JUMP)  ; LAB_005e3200
    MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14d158] ; 005e2eba | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    MOV EAX,dword ptr [ESP + 0x148]     ; 005e2ec1
    PUSH EAX                            ; 005e2ec8
    PUSH EBX                            ; 005e2ec9
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005e2eca
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005e2ecf
    TEST EAX,EAX                        ; 005e2ed2
    JNZ 0x005e2efc                      ; 005e2ed4
        ;   XREF to: 005e2efc (CONDITIONAL_JUMP)  ; LAB_005e2efc
    INC EDI                             ; 005e2ed6
        ;   Label: LAB_005e2ed6
    ADD EBP,0x4                         ; 005e2ed7
    JMP 0x005e2ea9                      ; 005e2eda
        ;   XREF to: 005e2ea9 (UNCONDITIONAL_JUMP)  ; LAB_005e2ea9
    PUSH ESI                            ; 005e2edc
        ;   Label: LAB_005e2edc
    PUSH 0x65675b                       ; 005e2edd | = "%s has no guard trigger!\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005e2ee2 | g_ConsolePtr | g_CConsolePtr
    PUSH ECX                            ; 005e2ee8 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005e2ee9
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005e2eee
    ADD ESP,0x14c                       ; 005e2ef1
    POP EBP                             ; 005e2ef7
    POP EDI                             ; 005e2ef8
    POP ESI                             ; 005e2ef9
    POP EBX                             ; 005e2efa
    RET                                 ; 005e2efb
    LEA EDX,[EBX + 0x20]                ; 005e2efc
        ;   Label: LAB_005e2efc
    FLD float ptr [ESP + 0x90]          ; 005e2eff
    FCOMP float ptr [EDX]               ; 005e2f06
    FNSTSW AX                           ; 005e2f08
    SAHF                                ; 005e2f0a
    JA 0x005e2ed6                       ; 005e2f0b
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0x94]          ; 005e2f0d
    FCOMP float ptr [EDX + 0x4]         ; 005e2f14
    FNSTSW AX                           ; 005e2f17
    SAHF                                ; 005e2f19
    JA 0x005e2ed6                       ; 005e2f1a
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0x98]          ; 005e2f1c
    FCOMP float ptr [EDX + 0x8]         ; 005e2f23
    FNSTSW AX                           ; 005e2f26
    SAHF                                ; 005e2f28
    JA 0x005e2ed6                       ; 005e2f29
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0x9c]          ; 005e2f2b
    FCOMP float ptr [EDX]               ; 005e2f32
    FNSTSW AX                           ; 005e2f34
    SAHF                                ; 005e2f36
    JC 0x005e2ed6                       ; 005e2f37
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xa0]          ; 005e2f39
    FCOMP float ptr [EDX + 0x4]         ; 005e2f40
    FNSTSW AX                           ; 005e2f43
    SAHF                                ; 005e2f45
    JC 0x005e2ed6                       ; 005e2f46
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xa4]          ; 005e2f48
    FCOMP float ptr [EDX + 0x8]         ; 005e2f4f
    FNSTSW AX                           ; 005e2f52
    SAHF                                ; 005e2f54
    JC 0x005e2ed6                       ; 005e2f55
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    PUSH EBX                            ; 005e2f5b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e2f5c
    CALL dword ptr [EAX + 0x54]         ; 005e2f62
    ADD ESP,0x4                         ; 005e2f65
    TEST EAX,EAX                        ; 005e2f68
    JZ 0x005e2ed6                       ; 005e2f6a
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    PUSH 0x6598c0                       ; 005e2f70 | g_CVectorTypeInfo
    PUSH 0xa                            ; 005e2f75
    LEA EAX,[ESP + 0x8]                 ; 005e2f77
    PUSH EAX                            ; 005e2f7b
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005e2f7c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005e2f81
    MOV EAX,ESP                         ; 005e2f84
    PUSH EAX                            ; 005e2f86
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e2f87
    PUSH EBX                            ; 005e2f8d
    CALL dword ptr [EDX + 0x4c]         ; 005e2f8e
    ADD ESP,0x8                         ; 005e2f91
    CMP EAX,0x1                         ; 005e2f94
    JGE 0x005e3033                      ; 005e2f97
        ;   XREF to: 005e3033 (CONDITIONAL_JUMP)  ; LAB_005e3033
    LEA EDX,[ESP + 0x78]                ; 005e2f9d
    PUSH EDX                            ; 005e2fa1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e2fa2
    PUSH EBX                            ; 005e2fa8
    CALL dword ptr [EAX + 0x14]         ; 005e2fa9
    LEA EDX,[EAX + 0xc]                 ; 005e2fac
    FLD float ptr [EAX]                 ; 005e2faf
    FADD float ptr [EDX]                ; 005e2fb1
    ADD ESP,0x8                         ; 005e2fb3
    FST float ptr [ESP + 0x12c]         ; 005e2fb6
    FLD float ptr [EAX + 0x4]           ; 005e2fbd
    FADD float ptr [EDX + 0x4]          ; 005e2fc0
    FXCH                                ; 005e2fc3
    FLD float ptr [0x00656780]          ; 005e2fc5 | FLOAT_00656780
    FXCH                                ; 005e2fcb
    FMUL ST1                            ; 005e2fcd
    FXCH ST2                            ; 005e2fcf
    FST float ptr [ESP + 0x130]         ; 005e2fd1
    FLD float ptr [EAX + 0x8]           ; 005e2fd8
    FADD float ptr [EDX + 0x8]          ; 005e2fdb
    FXCH                                ; 005e2fde
    FMUL ST2                            ; 005e2fe0
    FXCH                                ; 005e2fe2
    FST float ptr [ESP + 0x134]         ; 005e2fe4
    FMULP ST2                           ; 005e2feb
    LEA EAX,[ESP + 0xfc]                ; 005e2fed
    FXCH ST2                            ; 005e2ff4
    FSTP float ptr [ESP + 0xfc]         ; 005e2ff6
    FXCH                                ; 005e2ffd
    FSTP float ptr [ESP + 0x100]        ; 005e2fff
    MOV EDX,ESP                         ; 005e3006
    FSTP float ptr [ESP + 0x104]        ; 005e3008
    CMP EDX,EAX                         ; 005e300f
    JZ 0x005e3033                       ; 005e3011
        ;   XREF to: 005e3033 (CONDITIONAL_JUMP)  ; LAB_005e3033
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005e3013
    MOV dword ptr [ESP],EAX             ; 005e301a
    MOV EAX,dword ptr [ESP + 0x100]     ; 005e301d
    MOV dword ptr [ESP + 0x4],EAX       ; 005e3024
    MOV EAX,dword ptr [ESP + 0x104]     ; 005e3028
    MOV dword ptr [ESP + 0x8],EAX       ; 005e302f
    MOV EAX,ESP                         ; 005e3033
        ;   Label: LAB_005e3033
    PUSH EAX                            ; 005e3035
    LEA EAX,[ESP + 0x10c]               ; 005e3036
    PUSH EAX                            ; 005e303d
    PUSH EBX                            ; 005e303e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e303f
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005e3044
    LEA EAX,[ESP + 0x108]               ; 005e3047
    PUSH EAX                            ; 005e304e
    LEA EAX,[ESP + 0x13c]               ; 005e304f
    PUSH EAX                            ; 005e3056
    MOV EDX,dword ptr [ESI + 0x780]     ; 005e3057
    PUSH EDX                            ; 005e305d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005e305e
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005e3063
    MOV EBX,EAX                         ; 005e3066
    FLD float ptr [ESP + 0xa8]          ; 005e3068
    FCOMP float ptr [EAX]               ; 005e306f
    FNSTSW AX                           ; 005e3071
    SAHF                                ; 005e3073
    JA 0x005e2ed6                       ; 005e3074
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xac]          ; 005e307a
    FCOMP float ptr [EBX + 0x4]         ; 005e3081
    FNSTSW AX                           ; 005e3084
    SAHF                                ; 005e3086
    JA 0x005e2ed6                       ; 005e3087
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xb0]          ; 005e308d
    FCOMP float ptr [EBX + 0x8]         ; 005e3094
    FNSTSW AX                           ; 005e3097
    SAHF                                ; 005e3099
    JA 0x005e2ed6                       ; 005e309a
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xb4]          ; 005e30a0
    FCOMP float ptr [EBX]               ; 005e30a7
    FNSTSW AX                           ; 005e30a9
    SAHF                                ; 005e30ab
    JC 0x005e2ed6                       ; 005e30ac
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xb8]          ; 005e30b2
    FCOMP float ptr [EBX + 0x4]         ; 005e30b9
    FNSTSW AX                           ; 005e30bc
    SAHF                                ; 005e30be
    JC 0x005e2ed6                       ; 005e30bf
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0xbc]          ; 005e30c5
    FCOMP float ptr [EBX + 0x8]         ; 005e30cc
    FNSTSW AX                           ; 005e30cf
    SAHF                                ; 005e30d1
    JC 0x005e2ed6                       ; 005e30d2
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    LEA EAX,[ESP + 0x108]               ; 005e30d8
    PUSH EAX                            ; 005e30df
    LEA EAX,[ESP + 0xdc]                ; 005e30e0
    PUSH EAX                            ; 005e30e7
    PUSH ESI                            ; 005e30e8
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005e30e9
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005e30ee
    PUSH EAX                            ; 005e30f1
    LEA EAX,[ESP + 0x118]               ; 005e30f2
    PUSH EAX                            ; 005e30f9
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005e30fa
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005e30ff
    FLD float ptr [ESP + 0x114]         ; 005e3102
    FCOMP float ptr [0x00664b6c]        ; 005e3109 | FLOAT_00664b6c
    FNSTSW AX                           ; 005e310f
    SAHF                                ; 005e3111
    JC 0x005e2ed6                       ; 005e3112
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0x114]         ; 005e3118
    FCOMP float ptr [0x00664b70]        ; 005e311f | FLOAT_00664b70
    FNSTSW AX                           ; 005e3125
    SAHF                                ; 005e3127
    JA 0x005e2ed6                       ; 005e3128
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    FLD float ptr [ESP + 0x118]         ; 005e312e
    FMUL ST0                            ; 005e3135
    FLD float ptr [ESP + 0x114]         ; 005e3137
    FMUL ST0                            ; 005e313e
    FADDP                               ; 005e3140
    FLD float ptr [ESP + 0x11c]         ; 005e3142
    FMUL ST0                            ; 005e3149
    FADDP                               ; 005e314b
    FSQRT                               ; 005e314d
    FLD float ptr [ESP + 0xd0]          ; 005e314f
    FMUL ST0                            ; 005e3156
    FLD float ptr [ESP + 0xcc]          ; 005e3158
    FMUL ST0                            ; 005e315f
    FADDP                               ; 005e3161
    FLD float ptr [ESP + 0xd4]          ; 005e3163
    FMUL ST0                            ; 005e316a
    FADDP                               ; 005e316c
    FSQRT                               ; 005e316e
    FCOMPP                              ; 005e3170
    FNSTSW AX                           ; 005e3172
    SAHF                                ; 005e3174
    JC 0x005e2ed6                       ; 005e3175
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    LEA EDX,[ESP + 0xcc]                ; 005e317b
    LEA EAX,[ESP + 0x114]               ; 005e3182
    CMP EDX,EAX                         ; 005e3189
    JZ 0x005e31b7                       ; 005e318b
        ;   XREF to: 005e31b7 (CONDITIONAL_JUMP)  ; LAB_005e31b7
    MOV EAX,dword ptr [ESP + 0x114]     ; 005e318d
    MOV dword ptr [ESP + 0xcc],EAX      ; 005e3194
    MOV EAX,dword ptr [ESP + 0x118]     ; 005e319b
    MOV dword ptr [ESP + 0xd0],EAX      ; 005e31a2
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005e31a9
    MOV dword ptr [ESP + 0xd4],EAX      ; 005e31b0
    LEA EDX,[ESP + 0x120]               ; 005e31b7
        ;   Label: LAB_005e31b7
    LEA EAX,[ESP + 0x108]               ; 005e31be
    CMP EDX,EAX                         ; 005e31c5
    JZ 0x005e2ed6                       ; 005e31c7
        ;   XREF to: 005e2ed6 (CONDITIONAL_JUMP)  ; LAB_005e2ed6
    MOV EAX,dword ptr [ESP + 0x108]     ; 005e31cd
    MOV dword ptr [ESP + 0x120],EAX     ; 005e31d4
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005e31db
    MOV dword ptr [ESP + 0x124],EAX     ; 005e31e2
    MOV EAX,dword ptr [ESP + 0x110]     ; 005e31e9
    MOV dword ptr [ESP + 0x128],EAX     ; 005e31f0
    INC EDI                             ; 005e31f7
    ADD EBP,0x4                         ; 005e31f8
    JMP 0x005e2ea9                      ; 005e31fb
        ;   XREF to: 005e2ea9 (UNCONDITIONAL_JUMP)  ; LAB_005e2ea9
    CMP dword ptr [ESP + 0xd0],0x42c60000 ; 005e3200
        ;   Label: LAB_005e3200
    JG 0x005e3259                       ; 005e320b
        ;   XREF to: 005e3259 (CONDITIONAL_JUMP)  ; LAB_005e3259
    LEA EAX,[ESP + 0x120]               ; 005e320d
    PUSH dword ptr [ESP + 0x164]        ; 005e3214
    PUSH EAX                            ; 005e321b
    PUSH ESI                            ; 005e321c
    CALL core_turret.cpp_FUN_005e3280   ; 005e321d
        ;   XREF to: 005e3280 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_FUN_005e3280()
    FLD float ptr [ESI + 0x300]         ; 005e3222
    FLDZ                                ; 005e3228
    ADD ESP,0xc                         ; 005e322a
    FCOMPP                              ; 005e322d
    FNSTSW AX                           ; 005e322f
    SAHF                                ; 005e3231
    JC 0x005e3244                       ; 005e3232
        ;   XREF to: 005e3244 (CONDITIONAL_JUMP)  ; LAB_005e3244
    PUSH ESI                            ; 005e3234
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e3235
    CALL dword ptr [EAX + 0xf8]         ; 005e323b
    ADD ESP,0x4                         ; 005e3241
    MOV dword ptr [ESI + 0x86c],0x3f800000 ; 005e3244
        ;   Label: LAB_005e3244
    ADD ESP,0x14c                       ; 005e324e
    POP EBP                             ; 005e3254
    POP EDI                             ; 005e3255
    POP ESI                             ; 005e3256
    POP EBX                             ; 005e3257
    RET                                 ; 005e3258
    PUSH dword ptr [ESP + 0x164]        ; 005e3259
        ;   Label: LAB_005e3259
    PUSH ESI                            ; 005e3260
    CALL core_turret.cpp_FUN_005e3560   ; 005e3261
        ;   XREF to: 005e3560 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_FUN_005e3560()
    ADD ESP,0x8                         ; 005e3266
    ADD ESP,0x14c                       ; 005e3269
    POP EBP                             ; 005e326f
    POP EDI                             ; 005e3270
    POP ESI                             ; 005e3271
    POP EBX                             ; 005e3272
    RET                                 ; 005e3273

