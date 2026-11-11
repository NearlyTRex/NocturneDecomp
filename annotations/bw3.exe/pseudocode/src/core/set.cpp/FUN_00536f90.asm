; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00536f90(CDemonSet *param_1)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 00536126
;
; Referenced Globals:
;   undefined4 DAT_005d05ef
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CGameInstance.letterbox_mode
;   undefined4 DAT_01d5ba14
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0207bab8
;   undefined4 DAT_0207babc
;   undefined4 DAT_0207bac0
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536f90
        ;   Label: core_set.cpp_FUN_00536f90
    PUSH ESI                            ; 00536f91
    PUSH EDI                            ; 00536f92
    PUSH EBP                            ; 00536f93
    SUB ESP,0x64                        ; 00536f94
    MOV EBP,dword ptr [ESP + 0x78]      ; 00536f97
    XOR EDX,EDX                         ; 00536f9b
    MOV EAX,[0x005fe9dc]                ; 00536f9d | g_CGamePtr
    MOV dword ptr [0x0207babc],EDX      ; 00536fa2 | DAT_0207babc
    MOV EBX,dword ptr [EAX + 0x24c]     ; 00536fa8 | g_CGameInstance.letterbox_mode
    MOV dword ptr [0x0207bab8],EDX      ; 00536fae | DAT_0207bab8
    TEST EBX,EBX                        ; 00536fb4
    JNZ 0x0053700d                      ; 00536fb6
        ;   XREF to: 0053700d (CONDITIONAL_JUMP)  ; LAB_0053700d
    MOV EAX,[0x01d5ba14]                ; 00536fb8 | DAT_01d5ba14
    SHL EAX,0x2                         ; 00536fbd
    MOV ESI,dword ptr [EAX + 0x1d5ba04] ; 00536fc0
    TEST ESI,ESI                        ; 00536fc6
    JZ 0x0053700d                       ; 00536fc8
        ;   XREF to: 0053700d (CONDITIONAL_JUMP)  ; LAB_0053700d
    MOV EDI,dword ptr [ESI + 0x20b68]   ; 00536fca
    MOV EAX,ESI                         ; 00536fd0
    TEST EDI,EDI                        ; 00536fd2
    JZ 0x00536fe1                       ; 00536fd4
        ;   XREF to: 00536fe1 (CONDITIONAL_JUMP)  ; LAB_00536fe1
    MOV EAX,dword ptr [ESI + 0x20b70]   ; 00536fd6
    MOV [0x0207bab8],EAX                ; 00536fdc | DAT_0207bab8
    MOV EAX,[0x01d5ba14]                ; 00536fe1 | DAT_01d5ba14
        ;   Label: LAB_00536fe1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00536fe6
    FLD float ptr [EAX + 0x20b90]       ; 00536fed
    MOV EDX,dword ptr [EAX + 0x20b8c]   ; 00536ff3
    FCOS                                ; 00536ff9
    FADD double ptr [0x005d05ef]        ; 00536ffb | DAT_005d05ef
    MOV dword ptr [0x0207babc],EDX      ; 00537001 | DAT_0207babc
    FSTP float ptr [0x0207bac0]         ; 00537007 | DAT_0207bac0
    MOV EAX,dword ptr [EBP + 0x15f6fc]  ; 0053700d
        ;   Label: LAB_0053700d
    DEC EAX                             ; 00537013
    MOV dword ptr [ESP + 0x4c],EAX      ; 00537014
    TEST EAX,EAX                        ; 00537018
    JL 0x00537057                       ; 0053701a
        ;   XREF to: 00537057 (CONDITIONAL_JUMP)  ; LAB_00537057
    SHL EAX,0x2                         ; 0053701c
    ADD EAX,EBP                         ; 0053701f
    MOV dword ptr [ESP + 0x48],EAX      ; 00537021
    MOV EBX,dword ptr [ESP + 0x48]      ; 00537025
        ;   Label: LAB_00537025
    MOV EBX,dword ptr [EBX + 0x15f700]  ; 00537029
    CMP dword ptr [EBX + 0xfc],0x0      ; 0053702f
    JNZ 0x0053705f                      ; 00537036
        ;   XREF to: 0053705f (CONDITIONAL_JUMP)  ; LAB_0053705f
    AND byte ptr [EBX + 0x144],0xf7     ; 00537038
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053703f
        ;   Label: LAB_0053703f
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00537043
    SUB EDX,0x4                         ; 00537047
    DEC ECX                             ; 0053704a
    MOV dword ptr [ESP + 0x48],EDX      ; 0053704b
    MOV dword ptr [ESP + 0x4c],ECX      ; 0053704f
    TEST ECX,ECX                        ; 00537053
    JGE 0x00537025                      ; 00537055
        ;   XREF to: 00537025 (CONDITIONAL_JUMP)  ; LAB_00537025
    ADD ESP,0x64                        ; 00537057
        ;   Label: LAB_00537057
    POP EBP                             ; 0053705a
    POP EDI                             ; 0053705b
    POP ESI                             ; 0053705c
    POP EBX                             ; 0053705d
    RET                                 ; 0053705e
    PUSH EBX                            ; 0053705f
        ;   Label: LAB_0053705f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00537060
    LEA ESI,[ESP + 0x4]                 ; 00537066
    LEA EDI,[ESP + 0x34]                ; 0053706a
    CALL dword ptr [EAX + 0x1c]         ; 0053706e
    MOV ECX,0x6                         ; 00537071
    LEA ESI,[ESP + 0x4]                 ; 00537076
    ADD ESP,0x4                         ; 0053707a
    MOVSD.REP ES:EDI,ESI                ; 0053707d
    LEA EDX,[ESP + 0x18]                ; 0053707f
    LEA ESI,[ESP + 0x30]                ; 00537083
    CMP EDX,ESI                         ; 00537087
    JZ 0x005370a3                       ; 00537089
        ;   XREF to: 005370a3 (CONDITIONAL_JUMP)  ; LAB_005370a3
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053708b
    MOV dword ptr [ESP + 0x18],EAX      ; 0053708f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00537093
    MOV dword ptr [ESP + 0x1c],EAX      ; 00537097
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053709b
    MOV dword ptr [ESP + 0x20],EAX      ; 0053709f
    LEA EAX,[ESP + 0x24]                ; 005370a3
        ;   Label: LAB_005370a3
    LEA EDX,[ESI + 0xc]                 ; 005370a7
    CMP EAX,EDX                         ; 005370aa
    JZ 0x005370c2                       ; 005370ac
        ;   XREF to: 005370c2 (CONDITIONAL_JUMP)  ; LAB_005370c2
    MOV EAX,dword ptr [EDX]             ; 005370ae
    MOV dword ptr [ESP + 0x24],EAX      ; 005370b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 005370b4
    MOV dword ptr [ESP + 0x28],EAX      ; 005370b7
    MOV EAX,dword ptr [EDX + 0x8]       ; 005370bb
    MOV dword ptr [ESP + 0x2c],EAX      ; 005370be
    LEA EAX,[EBX + 0x3c]                ; 005370c2
        ;   Label: LAB_005370c2
    PUSH EAX                            ; 005370c5
    LEA EAX,[ESP + 0x28]                ; 005370c6
    PUSH EAX                            ; 005370ca
    LEA EAX,[ESP + 0x20]                ; 005370cb
    PUSH EAX                            ; 005370cf
    LEA EAX,[EBX + 0x30]                ; 005370d0
    PUSH EAX                            ; 005370d3
    LEA EAX,[EBX + 0x20]                ; 005370d4
    PUSH EAX                            ; 005370d7
    PUSH EBP                            ; 005370d8
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 005370d9
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 005370de
    MOV EAX,dword ptr [EBX + 0x108]     ; 005370e1
    MOV dword ptr [ESP + 0x54],EAX      ; 005370e7
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005370eb
    MOV ESI,EBX                         ; 005370f1
    MOV dword ptr [ESP + 0x58],EAX      ; 005370f3
    MOV EAX,dword ptr [EBX + 0x110]     ; 005370f7
    MOV EDI,dword ptr [0x0207bab8]      ; 005370fd | DAT_0207bab8
    MOV dword ptr [ESP + 0x50],EAX      ; 00537103
    CMP EBX,EDI                         ; 00537107
    JNZ 0x00537147                      ; 00537109
        ;   XREF to: 00537147 (CONDITIONAL_JUMP)  ; LAB_00537147
    MOV EDX,dword ptr [ESP + 0x54]      ; 0053710b
    LEA EDX,[EDX + EDX*0x2]             ; 0053710f
    MOV EAX,EDX                         ; 00537112
    SAR EDX,0x1f                        ; 00537114
    SUB EAX,EDX                         ; 00537117
    SAR EAX,0x1                         ; 00537119
    MOV EDX,dword ptr [ESP + 0x58]      ; 0053711b
    LEA EDX,[EDX + EDX*0x2]             ; 0053711f
    MOV dword ptr [ESP + 0x54],EAX      ; 00537122
    MOV EAX,EDX                         ; 00537126
    SAR EDX,0x1f                        ; 00537128
    SUB EAX,EDX                         ; 0053712b
    SAR EAX,0x1                         ; 0053712d
    MOV EDX,dword ptr [ESP + 0x50]      ; 0053712f
    LEA EDX,[EDX + EDX*0x2]             ; 00537133
    MOV dword ptr [ESP + 0x58],EAX      ; 00537136
    MOV EAX,EDX                         ; 0053713a
    SAR EDX,0x1f                        ; 0053713c
    SUB EAX,EDX                         ; 0053713f
    SAR EAX,0x1                         ; 00537141
    MOV dword ptr [ESP + 0x50],EAX      ; 00537143
    CMP ESI,dword ptr [0x0207babc]      ; 00537147 | DAT_0207babc
        ;   Label: LAB_00537147
    JNZ 0x005371a8                      ; 0053714d
        ;   XREF to: 005371a8 (CONDITIONAL_JUMP)  ; LAB_005371a8
    MOV EAX,dword ptr [ESP + 0x54]      ; 0053714f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00537153
    MOV EAX,dword ptr [ESP + 0x58]      ; 00537157
    MOV dword ptr [ESP + 0x60],EAX      ; 0053715b
    FILD dword ptr [ESP + 0x60]         ; 0053715f
    FLD1                                ; 00537163
    FLD float ptr [0x0207bac0]          ; 00537165 | DAT_0207bac0
    FXCH                                ; 0053716b
    FDIV ST0,ST1                        ; 0053716d
    FILD dword ptr [ESP + 0x5c]         ; 0053716f
    FMULP ST2                           ; 00537173
    MOV EAX,dword ptr [ESP + 0x50]      ; 00537175
    MOV dword ptr [ESP + 0x60],EAX      ; 00537179
    FXCH ST2                            ; 0053717d
    FMUL ST2                            ; 0053717f
    FILD dword ptr [ESP + 0x60]         ; 00537181
    FMULP ST3                           ; 00537185
    FXCH                                ; 00537187
    CALL crt_math.c_round_FUN_005a3120  ; 00537189
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x54]        ; 0053718e
    CALL crt_math.c_round_FUN_005a3120  ; 00537192
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00537197
    CALL crt_math.c_round_FUN_005a3120  ; 00537199
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0053719e
    FISTP dword ptr [ESP + 0x58]        ; 005371a0
    FISTP dword ptr [ESP + 0x50]        ; 005371a4
    MOV EDX,dword ptr [ESP + 0x50]      ; 005371a8
        ;   Label: LAB_005371a8
    PUSH EDX                            ; 005371ac
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005371ad
    PUSH ECX                            ; 005371b1
    MOV ESI,dword ptr [ESP + 0x5c]      ; 005371b2
    PUSH ESI                            ; 005371b6
    MOV EDI,dword ptr [0x00603b28]      ; 005371b7 | g_CDemonSetPtr
    PUSH EDI                            ; 005371bd | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 005371be
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 005371c3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005371c6
    PUSH EBX                            ; 005371cc
    CALL dword ptr [EAX + 0x14]         ; 005371cd
    ADD ESP,0x4                         ; 005371d0
    TEST EAX,EAX                        ; 005371d3
    JZ 0x00537264                       ; 005371d5
        ;   XREF to: 00537264 (CONDITIONAL_JUMP)  ; LAB_00537264
    OR byte ptr [EBX + 0x144],0x8       ; 005371db
    PUSH 0x1                            ; 005371e2
        ;   Label: LAB_005371e2
    MOV EAX,[0x005f2afc]                ; 005371e4 | DAT_005f2afc
    PUSH EAX                            ; 005371e9 | DAT_01bdd7e4
    XOR ESI,ESI                         ; 005371ea
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 005371ec
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EBP + 0x15acc8]  ; 005371f1
    ADD ESP,0x8                         ; 005371f7
    TEST EDX,EDX                        ; 005371fa
    JLE 0x00537247                      ; 005371fc
        ;   XREF to: 00537247 (CONDITIONAL_JUMP)  ; LAB_00537247
    PUSH 0x0                            ; 005371fe
        ;   Label: LAB_005371fe
    PUSH ESI                            ; 00537200
    PUSH EBP                            ; 00537201
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 ; 00537202
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00537207
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053720a
    PUSH EBX                            ; 00537210
    CALL dword ptr [EAX + 0x14]         ; 00537211
    ADD ESP,0x4                         ; 00537214
    TEST EAX,EAX                        ; 00537217
    JZ 0x00537222                       ; 00537219
        ;   XREF to: 00537222 (CONDITIONAL_JUMP)  ; LAB_00537222
    OR byte ptr [EBX + 0x144],0x8       ; 0053721b
    PUSH 0x1                            ; 00537222
        ;   Label: LAB_00537222
    MOV ECX,dword ptr [0x005f2afc]      ; 00537224 | DAT_005f2afc
    PUSH ECX                            ; 0053722a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0053722b
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00537230
    PUSH EBP                            ; 00537233
    INC ESI                             ; 00537234
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 ; 00537235
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(CDemonSet * this_ptr)
    MOV EDI,dword ptr [EBP + 0x15acc8]  ; 0053723a
    ADD ESP,0x4                         ; 00537240
    CMP ESI,EDI                         ; 00537243
    JL 0x005371fe                       ; 00537245
        ;   XREF to: 005371fe (CONDITIONAL_JUMP)  ; LAB_005371fe
    PUSH 0x10000                        ; 00537247
        ;   Label: LAB_00537247
    PUSH 0x10000                        ; 0053724c
    PUSH 0x10000                        ; 00537251
    PUSH EBP                            ; 00537256
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 00537257
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0053725c
    JMP 0x0053703f                      ; 0053725f
        ;   XREF to: 0053703f (UNCONDITIONAL_JUMP)  ; LAB_0053703f
    AND byte ptr [EBX + 0x144],0xf7     ; 00537264
        ;   Label: LAB_00537264
    JMP 0x005371e2                      ; 0053726b
        ;   XREF to: 005371e2 (UNCONDITIONAL_JUMP)  ; LAB_005371e2

