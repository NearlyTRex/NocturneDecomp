; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended * header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_00630cfa
;   TerminatedCString s_Bad_keyframe_1_00630d0f
;   TerminatedCString s_engine_keyframe_c_00630d1e
;   TerminatedCString s_ZBP_not_found_00630d33
;   double g_SplineNormalizer = 0.0000152587890625
;   float g_SplineCoeff_T3_W0 = -0.5
;   float g_SplineCoeff_T1_W0 = 0.5
;   double g_SplineCoeff_Scale = 65536
;   float g_SplineCoeff_T3_W2 = 1.5
;   float g_SplineCoeff_T2_W2 = -2.5
;   float g_SplineCoeff_T2_W3 = 2
;   float g_SplineCoeff_T3_W3 = -1.5
;   int g_AnimationTimerValue
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
;   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
;   engine_model.c_getMRGLSize_FUN_00528700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501f30
        ;   Label: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
    PUSH ESI                            ; 00501f31
    PUSH EDI                            ; 00501f32
    PUSH EBP                            ; 00501f33
    MOV EBP,ESP                         ; 00501f34
    SUB ESP,0x30                        ; 00501f36
    AND ESP,0xfffffff8                  ; 00501f39
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501f3c
    CMP dword ptr [EAX + 0x14],0x0      ; 00501f3f
    JZ 0x005022c8                       ; 00501f43 | LAB_005022c8
        ;   XREF to: 005022c8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x14]      ; 00501f49
        ;   Label: LAB_00501f49
    MOV EDX,dword ptr [EBP + 0x14]      ; 00501f4c
    MOV ESI,dword ptr [ESI + 0x8]       ; 00501f4f
    MOV EBX,dword ptr [EDX + 0xc]       ; 00501f52
    IMUL ESI,EBX                        ; 00501f55
    MOV EAX,dword ptr [EDX + 0x10]      ; 00501f58
    CDQ                                 ; 00501f5b
    MOV ECX,EDX                         ; 00501f5c
    XOR EAX,EDX                         ; 00501f5e
    XOR EDX,EDX                         ; 00501f60
    DIV EBX                             ; 00501f62
    CMP EAX,0x7fff                      ; 00501f64
    JC 0x00501f70                       ; 00501f69 | LAB_00501f70
        ;   XREF to: 00501f70 (CONDITIONAL_JUMP)
    MOV EAX,0x7fff                      ; 00501f6b
    PUSH EAX                            ; 00501f70
        ;   Label: LAB_00501f70
    XOR EAX,EAX                         ; 00501f71
    DIV EBX                             ; 00501f73
    POP EDX                             ; 00501f75
    SHRD EAX,EDX,0x10                   ; 00501f76
    XOR EAX,ECX                         ; 00501f7a
    MOV EDX,dword ptr [0x02cf6a84]      ; 00501f7c | int g_AnimationTimerValue
    MOV ECX,EAX                         ; 00501f82
    MOV EAX,EDX                         ; 00501f84
    SAR EDX,0x1f                        ; 00501f86
    IDIV ESI                            ; 00501f89
    MOV EBX,ECX                         ; 00501f8b
    SAR EBX,0x10                        ; 00501f8d
    AND ECX,0xffff                      ; 00501f90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501f96
    MOV dword ptr [ESP],ECX             ; 00501f99
    LEA ESI,[EBX + 0x1]                 ; 00501f9c
    MOV EDI,dword ptr [EAX + 0x8]       ; 00501f9f
    MOV dword ptr [EAX + 0x10],EDX      ; 00501fa2
    CMP ESI,EDI                         ; 00501fa5
    JL 0x00501fab                       ; 00501fa7 | LAB_00501fab
        ;   XREF to: 00501fab (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00501fa9
    MOV EDX,dword ptr [EBP + 0x14]      ; 00501fab
        ;   Label: LAB_00501fab
    LEA EAX,[ESI + 0x1]                 ; 00501fae
    MOV ECX,dword ptr [EDX + 0x8]       ; 00501fb1
    MOV dword ptr [ESP + 0x24],EAX      ; 00501fb4
    CMP EAX,ECX                         ; 00501fb8
    JL 0x00501fc2                       ; 00501fba | LAB_00501fc2
        ;   XREF to: 00501fc2 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 00501fbc
    MOV dword ptr [ESP + 0x24],EDI      ; 00501fbe
    LEA EDI,[EBX + -0x1]                ; 00501fc2
        ;   Label: LAB_00501fc2
    TEST EDI,EDI                        ; 00501fc5
    JL 0x005022d6                       ; 00501fc7 | LAB_005022d6
        ;   XREF to: 005022d6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501fcd
        ;   Label: LAB_00501fcd
    MOV EAX,dword ptr [EAX + 0x14]      ; 00501fd0
    ADD EAX,0x8                         ; 00501fd3
    MOV EDX,dword ptr [EAX]             ; 00501fd6
    MOV dword ptr [ESP + 0x10],EAX      ; 00501fd8
    CMP EDX,0x2                         ; 00501fdc
    JZ 0x00502003                       ; 00501fdf | LAB_00502003
        ;   XREF to: 00502003 (CONDITIONAL_JUMP)
    MOV ECX,0x630cfa                    ; 00501fe1 | = "..\\engine\\keyframe.c" | s_engine_keyframe_c_00630cfa = ..\engine\keyframe.c
    MOV EAX,0x16b                       ; 00501fe6
    PUSH 0x630d0f                       ; 00501feb | = "Bad keyframe 1" | s_Bad_keyframe_1_00630d0f = Bad keyframe 1
    MOV dword ptr [0x02f0ca48],ECX      ; 00501ff0 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00501ff6 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00501ffb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502000
    MOV EDX,dword ptr [EBP + 0x14]      ; 00502003
        ;   Label: LAB_00502003
    MOV EAX,EDX                         ; 00502006
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x118] ; 00502008
    ADD EAX,0x14                        ; 0050200f
    MOV dword ptr [ESP + 0x28],EAX      ; 00502012
    MOV EAX,dword ptr [ESP + 0x24]      ; 00502016
    SHL EAX,0x2                         ; 0050201a
    ADD EAX,EDX                         ; 0050201d
    MOV ESI,dword ptr [EAX + 0x118]     ; 0050201f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00502025
    ADD EAX,EDX                         ; 0050202c
    MOV EDI,dword ptr [EAX + 0x118]     ; 0050202e
    MOV EAX,dword ptr [ESP]             ; 00502034
    MOV dword ptr [ESP + 0x2c],EAX      ; 00502037
    FILD dword ptr [ESP + 0x2c]         ; 0050203b
    FMUL double ptr [0x00630d48]        ; 0050203f | double g_SplineNormalizer
    FLD ST0                             ; 00502045
    FMUL ST1                            ; 00502047
    FLD ST0                             ; 00502049
    FMUL ST2                            ; 0050204b
    FLD ST1                             ; 0050204d
    FMUL float ptr [0x00630d68]         ; 0050204f | float g_SplineCoeff_T2_W3
    FLD ST1                             ; 00502055
    FMUL float ptr [0x00630d50]         ; 00502057 | float g_SplineCoeff_T3_W0
    FLD ST2                             ; 0050205d
    FMUL float ptr [0x00630d60]         ; 0050205f | float g_SplineCoeff_T3_W2
    FLD ST3                             ; 00502065
    FXCH ST2                            ; 00502067
    FADD ST0,ST5                        ; 00502069
    FXCH ST2                            ; 0050206b
    FMUL float ptr [0x00630d6c]         ; 0050206d | float g_SplineCoeff_T3_W3
    FXCH ST6                            ; 00502073
    FMUL float ptr [0x00630d54]         ; 00502075 | float g_SplineCoeff_T1_W0
    FXCH ST4                            ; 0050207b
    FMUL float ptr [0x00630d54]         ; 0050207d | float g_SplineCoeff_T1_W0
    FXCH ST4                            ; 00502083
    FSTP float ptr [ESP + 0x2c]         ; 00502085
    FXCH                                ; 00502089
    FSUB float ptr [ESP + 0x2c]         ; 0050208b
    FLD ST4                             ; 0050208f
    FMUL float ptr [0x00630d54]         ; 00502091 | float g_SplineCoeff_T1_W0
    FXCH                                ; 00502097
    FMUL double ptr [0x00630d58]        ; 00502099 | double g_SplineCoeff_Scale
    FXCH                                ; 0050209f
    FSUBP ST4,ST0                       ; 005020a1
    FXCH ST4                            ; 005020a3
    FMUL float ptr [0x00630d64]         ; 005020a5 | float g_SplineCoeff_T2_W2
    FXCH ST3                            ; 005020ab
    FMUL double ptr [0x00630d58]        ; 005020ad | double g_SplineCoeff_Scale
    FXCH ST3                            ; 005020b3
    FADDP                               ; 005020b5
    FXCH ST4                            ; 005020b7
    FADDP                               ; 005020b9
    FLD1                                ; 005020bb
    FADDP ST4,ST0                       ; 005020bd
    FADD float ptr [ESP + 0x2c]         ; 005020bf
    FXCH ST3                            ; 005020c3
    FMUL double ptr [0x00630d58]        ; 005020c5 | double g_SplineCoeff_Scale
    FXCH ST3                            ; 005020cb
    FMUL double ptr [0x00630d58]        ; 005020cd | double g_SplineCoeff_Scale
    SHL EBX,0x2                         ; 005020d3
    MOV ECX,dword ptr [EDX + 0x14]      ; 005020d6
    ADD EBX,EDX                         ; 005020d9
    ADD ECX,0x14                        ; 005020db
    MOV EBX,dword ptr [EBX + 0x118]     ; 005020de
    XOR EAX,EAX                         ; 005020e4
    ADD EBX,0x14                        ; 005020e6
    MOV dword ptr [ESP + 0x24],EAX      ; 005020e9
    MOV EAX,dword ptr [ESP + 0x10]      ; 005020ed
    ADD ESI,0x14                        ; 005020f1
    ADD EDI,0x14                        ; 005020f4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005020f7
    FXCH                                ; 005020fa
    CALL crt_math.c_round_FUN_005fe6b0  ; 005020fc | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x1c]        ; 00502101
    FXCH                                ; 00502105
    CALL crt_math.c_round_FUN_005fe6b0  ; 00502107 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 0050210c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050210e | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 00502113
    CALL crt_math.c_round_FUN_005fe6b0  ; 00502115 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 0050211a
    FISTP dword ptr [ESP + 0x18]        ; 0050211c
    FISTP dword ptr [ESP + 0x14]        ; 00502120
    FISTP dword ptr [ESP + 0x20]        ; 00502124
    TEST EDX,EDX                        ; 00502128
    JLE 0x00502267                      ; 0050212a | LAB_00502267
        ;   XREF to: 00502267 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 00502130
        ;   Label: LAB_00502130
    MOV EDX,dword ptr [EDI]             ; 00502134
    IMUL EDX                            ; 00502136
    SHRD EAX,EDX,0x10                   ; 00502138
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050213c
    MOV EDX,dword ptr [EBX]             ; 00502140
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502142
    IMUL EDX                            ; 00502146
    SHRD EAX,EDX,0x10                   ; 00502148
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050214c
    ADD EDX,EAX                         ; 00502150
    MOV dword ptr [ESP + 0x2c],EDX      ; 00502152
    MOV EDX,dword ptr [ESP + 0x28]      ; 00502156
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050215a
    MOV EDX,dword ptr [EDX]             ; 0050215e
    IMUL EDX                            ; 00502160
    SHRD EAX,EDX,0x10                   ; 00502162
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00502166
    ADD EDX,EAX                         ; 0050216a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050216c
    MOV dword ptr [ESP + 0x2c],EDX      ; 00502170
    MOV EDX,dword ptr [ESI]             ; 00502174
    IMUL EDX                            ; 00502176
    SHRD EAX,EDX,0x10                   ; 00502178
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050217c
    ADD EDX,EAX                         ; 00502180
    MOV dword ptr [ECX],EDX             ; 00502182
    MOV EAX,dword ptr [ESP + 0x18]      ; 00502184
    MOV EDX,dword ptr [EDI + 0x4]       ; 00502188
    IMUL EDX                            ; 0050218b
    SHRD EAX,EDX,0x10                   ; 0050218d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00502191
    MOV EDX,dword ptr [EBX + 0x4]       ; 00502195
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502198
    IMUL EDX                            ; 0050219c
    SHRD EAX,EDX,0x10                   ; 0050219e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005021a2
    ADD EDX,EAX                         ; 005021a6
    MOV dword ptr [ESP + 0x2c],EDX      ; 005021a8
    MOV EDX,dword ptr [ESP + 0x28]      ; 005021ac
    MOV EAX,dword ptr [ESP + 0x20]      ; 005021b0
    MOV EDX,dword ptr [EDX + 0x4]       ; 005021b4
    IMUL EDX                            ; 005021b7
    SHRD EAX,EDX,0x10                   ; 005021b9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005021bd
    ADD EDX,EAX                         ; 005021c1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005021c3
    MOV dword ptr [ESP + 0x2c],EDX      ; 005021c7
    MOV EDX,dword ptr [ESI + 0x4]       ; 005021cb
    IMUL EDX                            ; 005021ce
    SHRD EAX,EDX,0x10                   ; 005021d0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005021d4
    ADD EDX,EAX                         ; 005021d8
    MOV dword ptr [ECX + 0x4],EDX       ; 005021da
    MOV EAX,dword ptr [ESP + 0x18]      ; 005021dd
    MOV EDX,dword ptr [EDI + 0x8]       ; 005021e1
    IMUL EDX                            ; 005021e4
    SHRD EAX,EDX,0x10                   ; 005021e6
    MOV dword ptr [ESP + 0x2c],EAX      ; 005021ea
    MOV EDX,dword ptr [EBX + 0x8]       ; 005021ee
    MOV EAX,dword ptr [ESP + 0x14]      ; 005021f1
    IMUL EDX                            ; 005021f5
    SHRD EAX,EDX,0x10                   ; 005021f7
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005021fb
    ADD EDX,EAX                         ; 005021ff
    MOV dword ptr [ESP + 0x2c],EDX      ; 00502201
    MOV EDX,dword ptr [ESP + 0x28]      ; 00502205
    MOV EAX,dword ptr [ESP + 0x20]      ; 00502209
    MOV EDX,dword ptr [EDX + 0x8]       ; 0050220d
    ADD EDI,0xc                         ; 00502210
    IMUL EDX                            ; 00502213
    SHRD EAX,EDX,0x10                   ; 00502215
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00502219
    ADD EBX,0xc                         ; 0050221d
    ADD EDX,EAX                         ; 00502220
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502222
    MOV dword ptr [ESP + 0x2c],EDX      ; 00502226
    MOV EDX,dword ptr [ESI + 0x8]       ; 0050222a
    ADD ESI,0xc                         ; 0050222d
    IMUL EDX                            ; 00502230
    SHRD EAX,EDX,0x10                   ; 00502232
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00502236
    ADD ECX,0xc                         ; 0050223a
    ADD EDX,EAX                         ; 0050223d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050223f
    MOV dword ptr [ECX + -0x4],EDX      ; 00502243
    MOV EDX,dword ptr [ESP + 0x28]      ; 00502246
    INC EAX                             ; 0050224a
    ADD EDX,0xc                         ; 0050224b
    MOV dword ptr [ESP + 0x24],EAX      ; 0050224e
    MOV dword ptr [ESP + 0x28],EDX      ; 00502252
    MOV EDX,dword ptr [ESP + 0x10]      ; 00502256
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050225a
    CMP EAX,dword ptr [EDX + 0x8]       ; 0050225e
    JL 0x00502130                       ; 00502261 | LAB_00502130
        ;   XREF to: 00502130 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ECX]             ; 00502267
        ;   Label: LAB_00502267
    MOV EBX,ECX                         ; 00502269
    CMP ESI,0x17                        ; 0050226b
    JNZ 0x005022e2                      ; 0050226e | LAB_005022e2
        ;   XREF to: 005022e2 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x14]      ; 00502270
        ;   Label: LAB_00502270
    MOV ESI,dword ptr [ESI + 0x14]      ; 00502273
    ADD EBX,0xc                         ; 00502276
    ADD ESI,0x14                        ; 00502279
    MOV ECX,dword ptr [EBX]             ; 0050227c
        ;   Label: LAB_0050227c
    CMP ECX,0x18                        ; 0050227e
    JC 0x00502293                       ; 00502281 | LAB_00502293
        ;   XREF to: 00502293 (CONDITIONAL_JUMP)
    JA 0x00502315                       ; 00502283 | LAB_00502315
        ;   XREF to: 00502315 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00502289
    PUSH ESI                            ; 0050228a
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0 ; 0050228b | void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output)
        ;   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00502290
        ;   Label: LAB_00502290
    PUSH EBX                            ; 00502293
        ;   Label: LAB_00502293
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 00502294 | int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)
    SHR EAX,0x2                         ; 00502299
    SHL EAX,0x2                         ; 0050229c
    ADD EBX,EAX                         ; 0050229f
    MOV EDX,dword ptr [EBX]             ; 005022a1
    ADD ESP,0x4                         ; 005022a3
    TEST EDX,EDX                        ; 005022a6
    JNZ 0x0050227c                      ; 005022a8 | LAB_0050227c
        ;   XREF to: 0050227c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005022aa
    MOV ECX,dword ptr [EAX + 0x14]      ; 005022ad
    PUSH ECX                            ; 005022b0
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00407890 ; 005022b1 | void engine_3d.c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended * chain)
        ;   XREF to: 00407890 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005022b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005022b9
    ADD EAX,0x158                       ; 005022bc
    MOV ESP,EBP                         ; 005022c1
    POP EBP                             ; 005022c3
    POP EDI                             ; 005022c4
    POP ESI                             ; 005022c5
    POP EBX                             ; 005022c6
    RET                                 ; 005022c7
    PUSH EAX                            ; 005022c8
        ;   Label: LAB_005022c8
    CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 ; 005022c9 | void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel * keyframe_model)
        ;   XREF to: 00501d40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005022ce
    JMP 0x00501f49                      ; 005022d1 | LAB_00501f49
        ;   XREF to: 00501f49 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x14]      ; 005022d6
        ;   Label: LAB_005022d6
    MOV EDI,dword ptr [EDI + 0x8]       ; 005022d9
    DEC EDI                             ; 005022dc
    JMP 0x00501fcd                      ; 005022dd | LAB_00501fcd
        ;   XREF to: 00501fcd (UNCONDITIONAL_JUMP)
    MOV EDI,0x630d1e                    ; 005022e2 | = "..\\engine\\keyframe.c" | s_engine_keyframe_c_00630d1e = ..\engine\keyframe.c
        ;   Label: LAB_005022e2
    MOV EAX,0x1a6                       ; 005022e7
    PUSH 0x630d33                       ; 005022ec | = "ZBP not found!" | s_ZBP_not_found_00630d33 = ZBP not found!
    MOV dword ptr [0x02f0ca48],EDI      ; 005022f1 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005022f7 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005022fc | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502301
    JMP 0x00502270                      ; 00502304 | LAB_00502270
        ;   XREF to: 00502270 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00502309
        ;   Label: LAB_00502309
    PUSH ESI                            ; 0050230a
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00 ; 0050230b | void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data)
        ;   XREF to: 00501a00 (UNCONDITIONAL_CALL)
    JMP 0x00502290                      ; 00502310 | LAB_00502290
        ;   XREF to: 00502290 (UNCONDITIONAL_JUMP)
    CMP ECX,0x19                        ; 00502315
        ;   Label: LAB_00502315
    JZ 0x00502309                       ; 00502318 | LAB_00502309
        ;   XREF to: 00502309 (CONDITIONAL_JUMP)
    JMP 0x00502293                      ; 0050231a | LAB_00502293
        ;   XREF to: 00502293 (UNCONDITIONAL_JUMP)

