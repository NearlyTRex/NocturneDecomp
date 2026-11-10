; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00533e5e(CDemonSet *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_0203a414
;   undefined4 DAT_0203a598
;   undefined4 DAT_0203ad1c
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 DAT_0203b3e8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750
;   core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044aa20
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070
;   core_dcamera.cpp_FUN_0044de30
;   core_dcamera.cpp_FUN_00450e10
;   core_main.c_FUN_004e4330
;   core_set.cpp_CDemonSet_clearLights_FUN_00537520
;   core_set.cpp_CDemonSet_initScene_FUN_00534420
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
;   core_setutil.cpp_C3DSCamera_apply_FUN_00541fb0
;   core_setutil.cpp_FUN_00543380
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_unknown.c_sprintf_FUN_005a28c0
;   ... and 2 more
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00533e5e
        ;   Label: core_set.cpp_FUN_00533e5e
    PUSH EBX                            ; 00533e60
    PUSH ESI                            ; 00533e61
    PUSH EDI                            ; 00533e62
    PUSH EBP                            ; 00533e63
    SUB ESP,0x17c                       ; 00533e64
    XOR EDX,EDX                         ; 00533e6a
    MOV ECX,dword ptr [0x0203a414]      ; 00533e6c | DAT_0203a414
    MOV dword ptr [ESP + 0x140],EDX     ; 00533e72
    TEST ECX,ECX                        ; 00533e79
    JZ 0x0053411f                       ; 00533e7b
        ;   XREF to: 0053411f (CONDITIONAL_JUMP)  ; LAB_0053411f
    XOR EDI,EDI                         ; 00533e81
        ;   Label: LAB_00533e81
    MOV EAX,dword ptr [ESP + 0x190]     ; 00533e83
    MOV dword ptr [0x0203ad1c],EDI      ; 00533e8a | DAT_0203ad1c
    MOV dword ptr [0x0203b3e8],EDI      ; 00533e90 | DAT_0203b3e8
    MOV dword ptr [ESP + 0x16c],EDI     ; 00533e96
    MOV ECX,dword ptr [EAX]             ; 00533e9d
    MOV dword ptr [0x0203a598],EDI      ; 00533e9f | DAT_0203a598
    TEST ECX,ECX                        ; 00533ea5
    JLE 0x005340fe                      ; 00533ea7
        ;   XREF to: 005340fe (CONDITIONAL_JUMP)  ; LAB_005340fe
    ADD EAX,0x19a30                     ; 00533ead
    MOV dword ptr [ESP + 0x158],EAX     ; 00533eb2
    MOV dword ptr [ESP + 0x154],EAX     ; 00533eb9
    MOV EAX,dword ptr [ESP + 0x194]     ; 00533ec0
    INC EAX                             ; 00533ec7
    MOV dword ptr [ESP + 0x148],EAX     ; 00533ec8
    MOV EAX,dword ptr [ESP + 0x190]     ; 00533ecf
    ADD EAX,0x4                         ; 00533ed6
    MOV dword ptr [ESP + 0x144],EAX     ; 00533ed9
    MOV EAX,dword ptr [ESP + 0x190]     ; 00533ee0
    MOV dword ptr [ESP + 0x14c],EDI     ; 00533ee7
    MOV dword ptr [ESP + 0x150],EAX     ; 00533eee
    IMUL EBX,dword ptr [ESP + 0x16c],0x1a4 ; 00533ef5
        ;   Label: LAB_00533ef5
    MOV EAX,dword ptr [ESP + 0x150]     ; 00533f00
    MOV EBP,dword ptr [EAX + 0x144]     ; 00533f07
    TEST EBP,EBP                        ; 00533f0d
    JZ 0x00534140                       ; 00533f0f
        ;   XREF to: 00534140 (CONDITIONAL_JUMP)  ; LAB_00534140
    MOV dword ptr [ESP + 0x170],0x21    ; 00533f15
        ;   Label: LAB_00533f15
    MOV EBX,dword ptr [ESP + 0x190]     ; 00533f20
    MOV ESI,dword ptr [ESP + 0x194]     ; 00533f27
    MOV EBX,dword ptr [EBX + 0x19a2c]   ; 00533f2e
    XOR EAX,EAX                         ; 00533f34
    MOV dword ptr [ESP + 0x168],EBX     ; 00533f36
    CMP ESI,-0x1                        ; 00533f3d
    JZ 0x00533f52                       ; 00533f40
        ;   XREF to: 00533f52 (CONDITIONAL_JUMP)  ; LAB_00533f52
    MOV EBX,dword ptr [ESP + 0x148]     ; 00533f42
    MOV EAX,ESI                         ; 00533f49
    MOV dword ptr [ESP + 0x168],EBX     ; 00533f4b
    MOV EDI,dword ptr [ESP + 0x168]     ; 00533f52
        ;   Label: LAB_00533f52
    MOV dword ptr [ESP + 0x178],EAX     ; 00533f59
    CMP EAX,EDI                         ; 00533f60
    JGE 0x0053408e                      ; 00533f62
        ;   XREF to: 0053408e (CONDITIONAL_JUMP)  ; LAB_0053408e
    IMUL EAX,EAX,0x1898                 ; 00533f68
    MOV EBX,dword ptr [ESP + 0x150]     ; 00533f6e
    MOV dword ptr [ESP + 0x164],EBX     ; 00533f75
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00533f7c
    MOV EBP,dword ptr [ESP + 0x14c]     ; 00533f83
    MOV dword ptr [ESP + 0x160],EBX     ; 00533f8a
    MOV EBX,dword ptr [ESP + 0x150]     ; 00533f91
    MOV ESI,dword ptr [ESP + 0x16c]     ; 00533f98
    MOV dword ptr [ESP + 0x15c],EBX     ; 00533f9f
    ADD EBP,EAX                         ; 00533fa6
    MOV EBX,dword ptr [ESP + 0x190]     ; 00533fa8
    ADD EAX,ESI                         ; 00533faf
    ADD EAX,EBX                         ; 00533fb1
    ADD EBP,EBX                         ; 00533fb3
    MOV dword ptr [ESP + 0x174],EAX     ; 00533fb5
    IMUL ESI,dword ptr [ESP + 0x178],0x1898 ; 00533fbc
        ;   Label: LAB_00533fbc
    MOV EBX,dword ptr [ESP + 0x190]     ; 00533fc7
    ADD EBX,ESI                         ; 00533fce
    CMP dword ptr [EBX + 0x19a30],0x0   ; 00533fd0
    JNZ 0x00534362                      ; 00533fd7
        ;   XREF to: 00534362 (CONDITIONAL_JUMP)  ; LAB_00534362
    MOV EDX,dword ptr [0x0203a414]      ; 00533fdd | DAT_0203a414
    XOR EBX,EBX                         ; 00533fe3
    TEST EDX,EDX                        ; 00533fe5
    JLE 0x00534010                      ; 00533fe7
        ;   XREF to: 00534010 (CONDITIONAL_JUMP)  ; LAB_00534010
    ADD ESI,dword ptr [ESP + 0x158]     ; 00533fe9
    LEA EDI,[ESI + 0x4]                 ; 00533ff0
    XOR ESI,ESI                         ; 00533ff3
    MOV EAX,dword ptr [ESI + 0x203a418] ; 00533ff5
        ;   Label: LAB_00533ff5
    PUSH EDI                            ; 00533ffb
    ADD EAX,0x40                        ; 00533ffc
    PUSH EAX                            ; 00533fff
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00534000
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00534005
    TEST EAX,EAX                        ; 00534008
    JNZ 0x0053428b                      ; 0053400a
        ;   XREF to: 0053428b (CONDITIONAL_JUMP)  ; LAB_0053428b
    CMP EBX,dword ptr [0x0203a414]      ; 00534010 | DAT_0203a414
        ;   Label: LAB_00534010
    JNZ 0x0053403b                      ; 00534016
        ;   XREF to: 0053403b (CONDITIONAL_JUMP)  ; LAB_0053403b
    MOV EDX,0x5d032c                    ; 00534018
    MOV ECX,0x36a                       ; 0053401d
    PUSH 0x5d033c                       ; 00534022
    MOV dword ptr [0x01d71de0],EDX      ; 00534027 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0053402d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00534033
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00534038
    MOV EAX,dword ptr [ESP + 0x164]     ; 0053403b
        ;   Label: LAB_0053403b
    MOV ESI,dword ptr [EAX + 0x144]     ; 00534042
    MOV EBX,dword ptr [EBX*0x4 + 0x203a418] ; 00534048
    TEST ESI,ESI                        ; 0053404f
    JZ 0x005342a2                       ; 00534051
        ;   XREF to: 005342a2 (CONDITIONAL_JUMP)  ; LAB_005342a2
    MOV EAX,dword ptr [ESP + 0x174]     ; 00534057
        ;   Label: LAB_00534057
    MOV EDX,dword ptr [ESP + 0x178]     ; 0053405e
    MOV ECX,dword ptr [ESP + 0x168]     ; 00534065
    ADD EBP,0x1898                      ; 0053406c
    ADD EAX,0x1898                      ; 00534072
    INC EDX                             ; 00534077
    MOV dword ptr [ESP + 0x174],EAX     ; 00534078
    MOV dword ptr [ESP + 0x178],EDX     ; 0053407f
    CMP EDX,ECX                         ; 00534086
    JL 0x00533fbc                       ; 00534088
        ;   XREF to: 00533fbc (CONDITIONAL_JUMP)  ; LAB_00533fbc
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0053408e
        ;   Label: LAB_0053408e
    PUSH EBX                            ; 00534095
    PUSH 0x5d03a4                       ; 00534096
    LEA EAX,[ESP + 0x8]                 ; 0053409b
    PUSH EAX                            ; 0053409f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005340a0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005340a5
    PUSH 0x0                            ; 005340a8
    PUSH 0x0                            ; 005340aa
    LEA EAX,[ESP + 0x8]                 ; 005340ac
    PUSH EAX                            ; 005340b0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005340b1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005340b6
    LEA EBP,[EBX + 0x1]                 ; 005340b9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 005340bc
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    MOV ESI,dword ptr [ESP + 0x150]     ; 005340c1
    MOV EDI,dword ptr [ESP + 0x14c]     ; 005340c8
    MOV EBX,dword ptr [ESP + 0x190]     ; 005340cf
    MOV dword ptr [ESP + 0x16c],EBP     ; 005340d6
    ADD ESI,0x1a4                       ; 005340dd
    ADD EDI,0x10                        ; 005340e3
    MOV EDX,dword ptr [EBX]             ; 005340e6
    MOV dword ptr [ESP + 0x150],ESI     ; 005340e8
    MOV dword ptr [ESP + 0x14c],EDI     ; 005340ef
    CMP EBP,EDX                         ; 005340f6
    JL 0x00533ef5                       ; 005340f8
        ;   XREF to: 00533ef5 (CONDITIONAL_JUMP)  ; LAB_00533ef5
    CMP dword ptr [ESP + 0x140],0x0     ; 005340fe
        ;   Label: LAB_005340fe
    JNZ 0x005343f4                      ; 00534106
        ;   XREF to: 005343f4 (CONDITIONAL_JUMP)  ; LAB_005343f4
    XOR EBP,EBP                         ; 0053410c
    MOV dword ptr [0x0203b37c],EBP      ; 0053410e | g_CDemonRaytraceInstance
    ADD ESP,0x17c                       ; 00534114
    POP EBP                             ; 0053411a
    POP EDI                             ; 0053411b
    POP ESI                             ; 0053411c
    POP EBX                             ; 0053411d
    RET                                 ; 0053411e
    MOV EBX,dword ptr [ESP + 0x190]     ; 0053411f
        ;   Label: LAB_0053411f
    PUSH EBX                            ; 00534126
    MOV ESI,0x1                         ; 00534127
    CALL core_set.cpp_CDemonSet_initScene_FUN_00534420 ; 0053412c
        ;   XREF to: 00534420 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_00534420(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00534131
    MOV dword ptr [ESP + 0x140],ESI     ; 00534134
    JMP 0x00533e81                      ; 0053413b
        ;   XREF to: 00533e81 (UNCONDITIONAL_JUMP)  ; LAB_00533e81
    MOV EAX,dword ptr [ESP + 0x144]     ; 00534140
        ;   Label: LAB_00534140
    PUSH 0x2038f4c                      ; 00534147
    ADD EBX,EAX                         ; 0053414c
    PUSH EBX                            ; 0053414e
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_00541fb0 ; 0053414f
        ;   XREF to: 00541fb0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_apply_FUN_00541fb0()
    ADD ESP,0x8                         ; 00534154
    PUSH EBP                            ; 00534157
    PUSH 0x2038f4c                      ; 00534158
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 ; 0053415d
        ;   XREF to: 00448ff0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00534162
    PUSH EBP                            ; 00534165
    MOV ECX,dword ptr [ESP + 0x194]     ; 00534166
    PUSH 0x461c3f9a                     ; 0053416d
    MOV EDX,0x1                         ; 00534172
    PUSH ECX                            ; 00534177
    MOV dword ptr [0x0203b37c],EDX      ; 00534178 | g_CDemonRaytraceInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 ; 0053417e
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00534183
    PUSH EBP                            ; 00534186
    PUSH 0x2038f4c                      ; 00534187
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750 ; 0053418c
        ;   XREF to: 00449750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 00534191
    PUSH 0x2038f4c                      ; 00534194
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070 ; 00534199
        ;   XREF to: 0044b070 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0053419e
    PUSH 0x2038f4c                      ; 005341a1
    LEA ESI,[ESP + 0x104]               ; 005341a6
    LEA EDI,[ESP + 0x11c]               ; 005341ad
    CALL core_dcamera.cpp_FUN_00450e10  ; 005341b4
        ;   XREF to: 00450e10 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00450e10()
    MOV ECX,0x6                         ; 005341b9
    LEA ESI,[ESP + 0x104]               ; 005341be
    ADD ESP,0x4                         ; 005341c5
    MOVSD.REP ES:EDI,ESI                ; 005341c8
    ADD EBX,0x17c                       ; 005341ca
    LEA EDI,[ESP + 0x118]               ; 005341d0
    MOV ESI,EBX                         ; 005341d7
    CMP EBX,EDI                         ; 005341d9
    JZ 0x005341fa                       ; 005341db
        ;   XREF to: 005341fa (CONDITIONAL_JUMP)  ; LAB_005341fa
    MOV EAX,dword ptr [ESP + 0x118]     ; 005341dd
    MOV dword ptr [EBX],EAX             ; 005341e4
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005341e6
    MOV dword ptr [EBX + 0x4],EAX       ; 005341ed
    MOV EAX,dword ptr [ESP + 0x120]     ; 005341f0
    MOV dword ptr [EBX + 0x8],EAX       ; 005341f7
    LEA EBX,[EDI + 0xc]                 ; 005341fa
        ;   Label: LAB_005341fa
    LEA EAX,[ESI + 0xc]                 ; 005341fd
    CMP EAX,EBX                         ; 00534200
    JZ 0x00534214                       ; 00534202
        ;   XREF to: 00534214 (CONDITIONAL_JUMP)  ; LAB_00534214
    MOV EDX,dword ptr [EBX]             ; 00534204
    MOV dword ptr [EAX],EDX             ; 00534206
    MOV EDX,dword ptr [EBX + 0x4]       ; 00534208
    MOV dword ptr [EAX + 0x4],EDX       ; 0053420b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053420e
    MOV dword ptr [EAX + 0x8],EDX       ; 00534211
    MOV EAX,dword ptr [ESP + 0x150]     ; 00534214
        ;   Label: LAB_00534214
    SUB ESP,0x8                         ; 0053421b
    FLD float ptr [EAX + 0x194]         ; 0053421e
    FSTP double ptr [ESP]               ; 00534224
    SUB ESP,0x8                         ; 00534227
    FLD float ptr [EAX + 0x190]         ; 0053422a
    FSTP double ptr [ESP]               ; 00534230
    SUB ESP,0x8                         ; 00534233
    FLD float ptr [EAX + 0x18c]         ; 00534236
    FSTP double ptr [ESP]               ; 0053423c
    SUB ESP,0x8                         ; 0053423f
    FLD float ptr [EAX + 0x188]         ; 00534242
    FSTP double ptr [ESP]               ; 00534248
    SUB ESP,0x8                         ; 0053424b
    FLD float ptr [EAX + 0x184]         ; 0053424e
    FSTP double ptr [ESP]               ; 00534254
    SUB ESP,0x8                         ; 00534257
    FLD float ptr [EAX + 0x180]         ; 0053425a
    FSTP double ptr [ESP]               ; 00534260
    PUSH 0x5d02f3                       ; 00534263
    LEA EAX,[ESP + 0x34]                ; 00534268
    PUSH EAX                            ; 0053426c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0053426d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x38                        ; 00534272
    PUSH 0x16                           ; 00534275
    PUSH 0x0                            ; 00534277
    LEA EAX,[ESP + 0x8]                 ; 00534279
    PUSH EAX                            ; 0053427d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0053427e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00534283
    JMP 0x00533f15                      ; 00534286
        ;   XREF to: 00533f15 (UNCONDITIONAL_JUMP)  ; LAB_00533f15
    MOV ECX,dword ptr [0x0203a414]      ; 0053428b | DAT_0203a414
        ;   Label: LAB_0053428b
    INC EBX                             ; 00534291
    ADD ESI,0x4                         ; 00534292
    CMP EBX,ECX                         ; 00534295
    JL 0x00533ff5                       ; 00534297
        ;   XREF to: 00533ff5 (CONDITIONAL_JUMP)  ; LAB_00533ff5
    JMP 0x00534010                      ; 0053429d
        ;   XREF to: 00534010 (UNCONDITIONAL_JUMP)  ; LAB_00534010
    PUSH ESI                            ; 005342a2
        ;   Label: LAB_005342a2
    PUSH EBX                            ; 005342a3
    PUSH 0x2038f4c                      ; 005342a4
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044aa20 ; 005342a9
        ;   XREF to: 0044aa20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044aa20(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 005342ae
    PUSH EBX                            ; 005342b1
    PUSH 0x2038f4c                      ; 005342b2
    CALL core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60 ; 005342b7
        ;   XREF to: 0044dd60 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 005342bc
    PUSH EBX                            ; 005342bf
    MOV ESI,dword ptr [ESP + 0x178]     ; 005342c0
    PUSH 0x2038f4c                      ; 005342c7
    MOV byte ptr [ESI + 0x19b58],AL     ; 005342cc
    LEA ESI,[ESP + 0x138]               ; 005342d2
    CALL core_dcamera.cpp_FUN_0044de30  ; 005342d9
        ;   XREF to: 0044de30 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044de30()
    LEA ESI,[ESP + 0x138]               ; 005342de
    ADD ESP,0x8                         ; 005342e5
    LEA EDI,[EBP + 0x19c54]             ; 005342e8
    MOV EAX,dword ptr [ESP + 0x174]     ; 005342ee
    MOVSD ES:EDI,ESI                    ; 005342f5
    MOVSD ES:EDI,ESI                    ; 005342f6
    MOVSD ES:EDI,ESI                    ; 005342f7
    MOVSD ES:EDI,ESI                    ; 005342f8
    CMP byte ptr [EAX + 0x19b58],0x0    ; 005342f9
    JZ 0x00534057                       ; 00534300
        ;   XREF to: 00534057 (CONDITIONAL_JUMP)  ; LAB_00534057
    MOV EDI,dword ptr [EBP + 0x19c60]   ; 00534306
    PUSH EDI                            ; 0053430c
    MOV EAX,dword ptr [EBP + 0x19c5c]   ; 0053430d
    PUSH EAX                            ; 00534313
    MOV EDX,dword ptr [EBP + 0x19c58]   ; 00534314
    PUSH EDX                            ; 0053431a
    MOV ECX,dword ptr [EBP + 0x19c54]   ; 0053431b
    PUSH ECX                            ; 00534321
    MOV EBX,dword ptr [ESP + 0x188]     ; 00534322
    PUSH EBX                            ; 00534329
    PUSH 0x5d0388                       ; 0053432a
    LEA EAX,[ESP + 0x18]                ; 0053432f
    PUSH EAX                            ; 00534333
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00534334
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 00534339
    MOV ESI,dword ptr [ESP + 0x170]     ; 0053433c
    PUSH ESI                            ; 00534343
    PUSH 0x0                            ; 00534344
    LEA EAX,[ESP + 0x8]                 ; 00534346
    PUSH EAX                            ; 0053434a
    LEA EDI,[ESI + 0xb]                 ; 0053434b
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0053434e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00534353
    MOV dword ptr [ESP + 0x170],EDI     ; 00534356
    JMP 0x00534057                      ; 0053435d
        ;   XREF to: 00534057 (UNCONDITIONAL_JUMP)  ; LAB_00534057
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00534362
        ;   Label: LAB_00534362
    MOV EDI,dword ptr [ESP + 0x16c]     ; 00534369
    MOV ECX,dword ptr [EAX + 0x144]     ; 00534370
    ADD EDI,EBX                         ; 00534376
    TEST ECX,ECX                        ; 00534378
    JZ 0x00534388                       ; 0053437a
        ;   XREF to: 00534388 (CONDITIONAL_JUMP)  ; LAB_00534388
    MOV byte ptr [EDI + 0x19b58],0x0    ; 0053437c
    JMP 0x00534057                      ; 00534383
        ;   XREF to: 00534057 (UNCONDITIONAL_JUMP)  ; LAB_00534057
    PUSH 0x1                            ; 00534388
        ;   Label: LAB_00534388
    PUSH 0x2038f4c                      ; 0053438a
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 ; 0053438f
        ;   XREF to: 00448ff0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00534394
    ADD ESI,dword ptr [ESP + 0x154]     ; 00534397
    PUSH ESI                            ; 0053439e
    CALL core_setutil.cpp_FUN_00543380  ; 0053439f
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_FUN_00543380(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 005343a4
    PUSH 0x0                            ; 005343a7
    PUSH 0x2038f4c                      ; 005343a9
    MOV byte ptr [EDI + 0x19b58],AL     ; 005343ae
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750 ; 005343b4
        ;   XREF to: 00449750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 005343b9
    MOV EAX,dword ptr [ESP + 0x160]     ; 005343bc
    MOV dword ptr [EBX + EAX*0x1 + 0x19c54],0x0 ; 005343c3
    MOV dword ptr [EBX + EAX*0x1 + 0x19c58],0x0 ; 005343ce
    MOV dword ptr [EBX + EAX*0x1 + 0x19c5c],0x0 ; 005343d9
    MOV dword ptr [EBX + EAX*0x1 + 0x19c60],0x0 ; 005343e4
    JMP 0x00534057                      ; 005343ef
        ;   XREF to: 00534057 (UNCONDITIONAL_JUMP)  ; LAB_00534057
    MOV EBX,dword ptr [ESP + 0x190]     ; 005343f4
        ;   Label: LAB_005343f4
    PUSH EBX                            ; 005343fb
    CALL core_set.cpp_CDemonSet_clearLights_FUN_00537520 ; 005343fc
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_00537520(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00534401
    XOR EBP,EBP                         ; 00534404
    MOV dword ptr [0x0203b37c],EBP      ; 00534406 | g_CDemonRaytraceInstance
    ADD ESP,0x17c                       ; 0053440c
    POP EBP                             ; 00534412
    POP EDI                             ; 00534413
    POP ESI                             ; 00534414
    POP EBX                             ; 00534415
    RET                                 ; 00534416

