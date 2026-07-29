; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_Camera_box_7_2f_7_2f_7_2_005902ac
;   TerminatedCString s_core_set_cpp_005902e5
;   TerminatedCString s_CDemonSet_precomuputeLig_005902f5
;   TerminatedCString s_Light_d_Box_d_d_d_d_00590341
;   TerminatedCString s_Precomputing_lights_from_0059035d
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01fb99d0
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
;   core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
;   core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50
;   core_dcamera.cpp_FUN_004421b0
;   core_dcamera.cpp_FUN_00447f20
;   core_main.c_FUN_004c8440
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
;   core_set.cpp_FUN_0050ad20
;   core_setutil.cpp_FUN_005148b0
;   core_setutil.cpp_FUN_00515c40
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strcmp_FUN_005649c0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507f80
        ;   Label: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80
    PUSH ESI                            ; 00507f81
    PUSH EDI                            ; 00507f82
    PUSH EBP                            ; 00507f83
    SUB ESP,0x160                       ; 00507f84
    XOR EDX,EDX                         ; 00507f8a
    MOV ECX,dword ptr [0x01fb99d0]      ; 00507f8c | DAT_01fb99d0
    MOV dword ptr [ESP + 0x128],EDX     ; 00507f92
    TEST ECX,ECX                        ; 00507f99
    JZ 0x005083e3                       ; 00507f9b
        ;   XREF to: 005083e3 (CONDITIONAL_JUMP)  ; LAB_005083e3
    MOV EAX,dword ptr [ESP + 0x174]     ; 00507fa1
        ;   Label: LAB_00507fa1
    XOR EDI,EDI                         ; 00507fa8
    MOV EBP,dword ptr [EAX]             ; 00507faa
    MOV dword ptr [ESP + 0x150],EDI     ; 00507fac
    TEST EBP,EBP                        ; 00507fb3
    JLE 0x005083c2                      ; 00507fb5
        ;   XREF to: 005083c2 (CONDITIONAL_JUMP)  ; LAB_005083c2
    ADD EAX,0x19648                     ; 00507fbb
    MOV dword ptr [ESP + 0x144],EAX     ; 00507fc0
    MOV dword ptr [ESP + 0x140],EAX     ; 00507fc7
    MOV EAX,dword ptr [ESP + 0x178]     ; 00507fce
    INC EAX                             ; 00507fd5
    MOV dword ptr [ESP + 0x12c],EAX     ; 00507fd6
    MOV EAX,dword ptr [ESP + 0x174]     ; 00507fdd
    ADD EAX,0x4                         ; 00507fe4
    MOV dword ptr [ESP + 0x130],EAX     ; 00507fe7
    MOV EAX,dword ptr [ESP + 0x174]     ; 00507fee
    ADD EAX,0x17c                       ; 00507ff5
    MOV dword ptr [ESP + 0x138],EAX     ; 00507ffa
    MOV EAX,dword ptr [ESP + 0x174]     ; 00508001
    MOV dword ptr [ESP + 0x134],EDI     ; 00508008
    MOV dword ptr [ESP + 0x13c],EAX     ; 0050800f
    IMUL EAX,dword ptr [ESP + 0x150],0x1a0 ; 00508016
        ;   Label: LAB_00508016
    MOV EBX,dword ptr [ESP + 0x130]     ; 00508021
    PUSH 0x1fb8508                      ; 00508028
    ADD EAX,EBX                         ; 0050802d
    PUSH EAX                            ; 0050802f
    CALL core_setutil.cpp_FUN_005148b0  ; 00508030
        ;   XREF to: 005148b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_FUN_005148b0(C3DSCamera * this_ptr, CDemonCamera * camera)
    ADD ESP,0x8                         ; 00508035
    PUSH 0x0                            ; 00508038
    PUSH 0x1fb8508                      ; 0050803a
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 ; 0050803f
        ;   XREF to: 00440290 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00508044
    PUSH 0x0                            ; 00508047
    MOV EDI,dword ptr [ESP + 0x178]     ; 00508049
    PUSH 0x461c3f9a                     ; 00508050
    MOV ESI,0x1                         ; 00508055
    PUSH EDI                            ; 0050805a
    MOV dword ptr [0x01fba938],ESI      ; 0050805b | DAT_01fba938
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 00508061
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00508066
    PUSH 0x0                            ; 00508069
    PUSH 0x1fb8508                      ; 0050806b
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 ; 00508070
        ;   XREF to: 00440a20 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20()
    ADD ESP,0x8                         ; 00508075
    PUSH 0x1fb8508                      ; 00508078
    CALL core_dcamera.cpp_FUN_004421b0  ; 0050807d
        ;   XREF to: 004421b0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_FUN_004421b0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00508082
    LEA EAX,[ESP + 0x100]               ; 00508085
    PUSH EAX                            ; 0050808c
    PUSH 0x1fb8508                      ; 0050808d
    CALL core_dcamera.cpp_FUN_00447f20  ; 00508092
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; CVector3f * core_dcamera.cpp_FUN_00447f20(CDemonCamera * this_ptr, CVector3f * output_bounds)
    ADD ESP,0x8                         ; 00508097
    MOV ESI,dword ptr [ESP + 0x138]     ; 0050809a
    MOV EBX,EAX                         ; 005080a1
    CMP EAX,ESI                         ; 005080a3
    JZ 0x005080b7                       ; 005080a5
        ;   XREF to: 005080b7 (CONDITIONAL_JUMP)  ; LAB_005080b7
    MOV EDX,dword ptr [EAX]             ; 005080a7
    MOV dword ptr [ESI],EDX             ; 005080a9
    MOV EDX,dword ptr [EAX + 0x4]       ; 005080ab
    MOV dword ptr [ESI + 0x4],EDX       ; 005080ae
    MOV EDX,dword ptr [EAX + 0x8]       ; 005080b1
    MOV dword ptr [ESI + 0x8],EDX       ; 005080b4
    ADD EBX,0xc                         ; 005080b7
        ;   Label: LAB_005080b7
    LEA EAX,[ESI + 0xc]                 ; 005080ba
    CMP EAX,EBX                         ; 005080bd
    JZ 0x005080d1                       ; 005080bf
        ;   XREF to: 005080d1 (CONDITIONAL_JUMP)  ; LAB_005080d1
    MOV EDX,dword ptr [EBX]             ; 005080c1
    MOV dword ptr [EAX],EDX             ; 005080c3
    MOV EDX,dword ptr [EBX + 0x4]       ; 005080c5
    MOV dword ptr [EAX + 0x4],EDX       ; 005080c8
    MOV EDX,dword ptr [EBX + 0x8]       ; 005080cb
    MOV dword ptr [EAX + 0x8],EDX       ; 005080ce
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005080d1
        ;   Label: LAB_005080d1
    SUB ESP,0x8                         ; 005080d8
    FLD float ptr [EAX + 0x190]         ; 005080db
    FSTP double ptr [ESP]               ; 005080e1
    SUB ESP,0x8                         ; 005080e4
    FLD float ptr [EAX + 0x18c]         ; 005080e7
    FSTP double ptr [ESP]               ; 005080ed
    SUB ESP,0x8                         ; 005080f0
    FLD float ptr [EAX + 0x188]         ; 005080f3
    FSTP double ptr [ESP]               ; 005080f9
    SUB ESP,0x8                         ; 005080fc
    FLD float ptr [EAX + 0x184]         ; 005080ff
    FSTP double ptr [ESP]               ; 00508105
    SUB ESP,0x8                         ; 00508108
    FLD float ptr [EAX + 0x180]         ; 0050810b
    FSTP double ptr [ESP]               ; 00508111
    SUB ESP,0x8                         ; 00508114
    FLD float ptr [EAX + 0x17c]         ; 00508117
    FSTP double ptr [ESP]               ; 0050811d
    PUSH 0x5902ac                       ; 00508120 | = "Camera box (%7.2f, %7.2f, %7.2f) - (%..."
    LEA EAX,[ESP + 0x34]                ; 00508125
    PUSH EAX                            ; 00508129
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050812a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x38                        ; 0050812f
    PUSH 0x16                           ; 00508132
    PUSH 0x0                            ; 00508134
    LEA EAX,[ESP + 0x8]                 ; 00508136
    PUSH EAX                            ; 0050813a
    CALL engine_2d.c_drawText_FUN_00402600 ; 0050813b
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 00508140
    MOV EAX,0x21                        ; 00508143
    MOV EBX,dword ptr [ESP + 0x174]     ; 00508148
    MOV EDX,dword ptr [ESP + 0x178]     ; 0050814f
    MOV dword ptr [ESP + 0x154],EAX     ; 00508156
    MOV EBX,dword ptr [EBX + 0x19644]   ; 0050815d
    XOR EAX,EAX                         ; 00508163
    MOV dword ptr [ESP + 0x14c],EBX     ; 00508165
    CMP EDX,-0x1                        ; 0050816c
    JZ 0x00508181                       ; 0050816f
        ;   XREF to: 00508181 (CONDITIONAL_JUMP)  ; LAB_00508181
    MOV EBX,dword ptr [ESP + 0x12c]     ; 00508171
    MOV EAX,EDX                         ; 00508178
    MOV dword ptr [ESP + 0x14c],EBX     ; 0050817a
    MOV ECX,dword ptr [ESP + 0x14c]     ; 00508181
        ;   Label: LAB_00508181
    MOV dword ptr [ESP + 0x15c],EAX     ; 00508188
    CMP EAX,ECX                         ; 0050818f
    JGE 0x00508339                      ; 00508191
        ;   XREF to: 00508339 (CONDITIONAL_JUMP)  ; LAB_00508339
    IMUL EAX,EAX,0x1898                 ; 00508197
    MOV EBX,dword ptr [ESP + 0x134]     ; 0050819d
    MOV EDX,dword ptr [ESP + 0x174]     ; 005081a4
    MOV ECX,dword ptr [ESP + 0x150]     ; 005081ab
    MOV dword ptr [ESP + 0x148],EBX     ; 005081b2
    LEA EBP,[EBX + EAX*0x1]             ; 005081b9
    ADD EAX,ECX                         ; 005081bc
    ADD EAX,EDX                         ; 005081be
    ADD EBP,EDX                         ; 005081c0
    MOV dword ptr [ESP + 0x158],EAX     ; 005081c2
    IMUL ESI,dword ptr [ESP + 0x15c],0x1898 ; 005081c9
        ;   Label: LAB_005081c9
    MOV EBX,dword ptr [ESP + 0x174]     ; 005081d4
    ADD EBX,ESI                         ; 005081db
    CMP dword ptr [EBX + 0x19648],0x0   ; 005081dd
    JNZ 0x0050841a                      ; 005081e4
        ;   XREF to: 0050841a (CONDITIONAL_JUMP)  ; LAB_0050841a
    MOV ECX,dword ptr [0x01fb99d0]      ; 005081ea | DAT_01fb99d0
    XOR EBX,EBX                         ; 005081f0
    TEST ECX,ECX                        ; 005081f2
    JLE 0x0050821a                      ; 005081f4
        ;   XREF to: 0050821a (CONDITIONAL_JUMP)  ; LAB_0050821a
    ADD ESI,dword ptr [ESP + 0x144]     ; 005081f6
    LEA EDI,[ESI + 0x4]                 ; 005081fd
    XOR ESI,ESI                         ; 00508200
    PUSH EDI                            ; 00508202
        ;   Label: LAB_00508202
    MOV ECX,dword ptr [ESI + 0x1fb99d4] ; 00508203
    PUSH ECX                            ; 00508209
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0050820a
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050820f
    TEST EAX,EAX                        ; 00508212
    JNZ 0x00508404                      ; 00508214
        ;   XREF to: 00508404 (CONDITIONAL_JUMP)  ; LAB_00508404
    CMP EBX,dword ptr [0x01fb99d0]      ; 0050821a | DAT_01fb99d0
        ;   Label: LAB_0050821a
    JNZ 0x00508244                      ; 00508220
        ;   XREF to: 00508244 (CONDITIONAL_JUMP)  ; LAB_00508244
    MOV EDI,0x5902e5                    ; 00508222 | = "..\\core\\set.cpp"
    MOV EAX,0x2e8                       ; 00508227
    PUSH 0x5902f5                       ; 0050822c | = "CDemonSet::precomuputeLightVisibility..."
    MOV dword ptr [0x01cc4800],EDI      ; 00508231 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00508237 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0050823c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00508241
    PUSH 0x0                            ; 00508244
        ;   Label: LAB_00508244
    MOV EBX,dword ptr [EBX*0x4 + 0x1fb99d4] ; 00508246
    PUSH EBX                            ; 0050824d
    PUSH 0x1fb8508                      ; 0050824e
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50 ; 00508253
        ;   XREF to: 00441c50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 00508258
    PUSH EBX                            ; 0050825b
    PUSH 0x1fb8508                      ; 0050825c
    CALL core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20 ; 00508261
        ;   XREF to: 00444e20 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 00508266
    PUSH EBX                            ; 00508269
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0050826a
    PUSH 0x1fb8508                      ; 00508271
    MOV byte ptr [ESI + 0x19770],AL     ; 00508276
    LEA ESI,[ESP + 0x120]               ; 0050827c
    CALL core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0 ; 00508283
        ;   XREF to: 00444ef0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0()
    LEA ESI,[ESP + 0x120]               ; 00508288
    ADD ESP,0x8                         ; 0050828f
    LEA EDI,[EBP + 0x1986c]             ; 00508292
    MOV EAX,dword ptr [ESP + 0x158]     ; 00508298
    MOVSD ES:EDI,ESI                    ; 0050829f
    MOVSD ES:EDI,ESI                    ; 005082a0
    MOVSD ES:EDI,ESI                    ; 005082a1
    MOVSD ES:EDI,ESI                    ; 005082a2
    CMP byte ptr [EAX + 0x19770],0x0    ; 005082a3
    JZ 0x00508301                       ; 005082aa
        ;   XREF to: 00508301 (CONDITIONAL_JUMP)  ; LAB_00508301
    MOV EDX,dword ptr [EBP + 0x19878]   ; 005082ac
    PUSH EDX                            ; 005082b2
    MOV ECX,dword ptr [EBP + 0x19874]   ; 005082b3
    PUSH ECX                            ; 005082b9
    MOV EBX,dword ptr [EBP + 0x19870]   ; 005082ba
    PUSH EBX                            ; 005082c0
    MOV ESI,dword ptr [EBP + 0x1986c]   ; 005082c1
    PUSH ESI                            ; 005082c7
    MOV EDI,dword ptr [ESP + 0x16c]     ; 005082c8
    PUSH EDI                            ; 005082cf
    PUSH 0x590341                       ; 005082d0 | = "Light %d, Box : %d,%d,%d,%d"
    LEA EAX,[ESP + 0x18]                ; 005082d5
    PUSH EAX                            ; 005082d9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005082da
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x1c                        ; 005082df
    MOV EAX,dword ptr [ESP + 0x154]     ; 005082e2
    PUSH EAX                            ; 005082e9
    PUSH 0x0                            ; 005082ea
    LEA EAX,[ESP + 0x8]                 ; 005082ec
    PUSH EAX                            ; 005082f0
    CALL engine_2d.c_drawText_FUN_00402600 ; 005082f1
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 005082f6
    ADD dword ptr [ESP + 0x154],0xb     ; 005082f9
    MOV EBX,dword ptr [ESP + 0x158]     ; 00508301
        ;   Label: LAB_00508301
    MOV ESI,dword ptr [ESP + 0x15c]     ; 00508308
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0050830f
    ADD EBP,0x1898                      ; 00508316
    ADD EBX,0x1898                      ; 0050831c
    INC ESI                             ; 00508322
    MOV dword ptr [ESP + 0x158],EBX     ; 00508323
    MOV dword ptr [ESP + 0x15c],ESI     ; 0050832a
    CMP ESI,EDI                         ; 00508331
    JL 0x005081c9                       ; 00508333
        ;   XREF to: 005081c9 (CONDITIONAL_JUMP)  ; LAB_005081c9
    MOV EAX,dword ptr [ESP + 0x150]     ; 00508339
        ;   Label: LAB_00508339
    PUSH EAX                            ; 00508340
    PUSH 0x59035d                       ; 00508341 | = "Precomputing lights from camera : %d"
    LEA EAX,[ESP + 0x8]                 ; 00508346
    PUSH EAX                            ; 0050834a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050834b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00508350
    PUSH 0x0                            ; 00508353
    PUSH 0x0                            ; 00508355
    LEA EAX,[ESP + 0x8]                 ; 00508357
    PUSH EAX                            ; 0050835b
    CALL engine_2d.c_drawText_FUN_00402600 ; 0050835c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 00508361
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00508364
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EDX,dword ptr [ESP + 0x138]     ; 00508369
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00508370
    MOV EBX,dword ptr [ESP + 0x134]     ; 00508377
    MOV ESI,dword ptr [ESP + 0x150]     ; 0050837e
    ADD EDX,0x1a0                       ; 00508385
    ADD ECX,0x1a0                       ; 0050838b
    ADD EBX,0x10                        ; 00508391
    INC ESI                             ; 00508394
    MOV dword ptr [ESP + 0x134],EBX     ; 00508395
    MOV EBX,dword ptr [ESP + 0x174]     ; 0050839c
    MOV dword ptr [ESP + 0x138],EDX     ; 005083a3
    MOV dword ptr [ESP + 0x13c],ECX     ; 005083aa
    MOV EDI,dword ptr [EBX]             ; 005083b1
    MOV dword ptr [ESP + 0x150],ESI     ; 005083b3
    CMP ESI,EDI                         ; 005083ba
    JL 0x00508016                       ; 005083bc
        ;   XREF to: 00508016 (CONDITIONAL_JUMP)  ; LAB_00508016
    CMP dword ptr [ESP + 0x128],0x0     ; 005083c2
        ;   Label: LAB_005083c2
    JNZ 0x0050848e                      ; 005083ca
        ;   XREF to: 0050848e (CONDITIONAL_JUMP)  ; LAB_0050848e
    XOR ECX,ECX                         ; 005083d0
    MOV dword ptr [0x01fba938],ECX      ; 005083d2 | DAT_01fba938
    ADD ESP,0x160                       ; 005083d8
    POP EBP                             ; 005083de
    POP EDI                             ; 005083df
    POP ESI                             ; 005083e0
    POP EBX                             ; 005083e1
    RET                                 ; 005083e2
    MOV EBX,dword ptr [ESP + 0x174]     ; 005083e3
        ;   Label: LAB_005083e3
    PUSH EBX                            ; 005083ea
    MOV ESI,0x1                         ; 005083eb
    CALL core_set.cpp_CDemonSet_initScene_FUN_005084c0 ; 005083f0
        ;   XREF to: 005084c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005083f5
    MOV dword ptr [ESP + 0x128],ESI     ; 005083f8
    JMP 0x00507fa1                      ; 005083ff
        ;   XREF to: 00507fa1 (UNCONDITIONAL_JUMP)  ; LAB_00507fa1
    MOV EAX,[0x01fb99d0]                ; 00508404 | DAT_01fb99d0
        ;   Label: LAB_00508404
    INC EBX                             ; 00508409
    ADD ESI,0x4                         ; 0050840a
    CMP EBX,EAX                         ; 0050840d
    JL 0x00508202                       ; 0050840f
        ;   XREF to: 00508202 (CONDITIONAL_JUMP)  ; LAB_00508202
    JMP 0x0050821a                      ; 00508415
        ;   XREF to: 0050821a (UNCONDITIONAL_JUMP)  ; LAB_0050821a
    PUSH 0x1                            ; 0050841a
        ;   Label: LAB_0050841a
    PUSH 0x1fb8508                      ; 0050841c
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 ; 00508421
        ;   XREF to: 00440290 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00508426
    ADD ESI,dword ptr [ESP + 0x140]     ; 00508429
    PUSH ESI                            ; 00508430
    CALL core_setutil.cpp_FUN_00515c40  ; 00508431
        ;   XREF to: 00515c40 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_FUN_00515c40()
    ADD ESP,0x4                         ; 00508436
    PUSH 0x0                            ; 00508439
    MOV ESI,dword ptr [ESP + 0x154]     ; 0050843b
    PUSH 0x1fb8508                      ; 00508442
    MOV byte ptr [ESI + EBX*0x1 + 0x19770],AL ; 00508447
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 ; 0050844e
        ;   XREF to: 00440a20 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20()
    ADD ESP,0x8                         ; 00508453
    MOV EAX,dword ptr [ESP + 0x148]     ; 00508456
    MOV dword ptr [EBX + EAX*0x1 + 0x1986c],0x0 ; 0050845d
    MOV dword ptr [EBX + EAX*0x1 + 0x19870],0x0 ; 00508468
    MOV dword ptr [EBX + EAX*0x1 + 0x19874],0x0 ; 00508473
    MOV dword ptr [EBX + EAX*0x1 + 0x19878],0x0 ; 0050847e
    JMP 0x00508301                      ; 00508489
        ;   XREF to: 00508301 (UNCONDITIONAL_JUMP)  ; LAB_00508301
    MOV EAX,dword ptr [ESP + 0x174]     ; 0050848e
        ;   Label: LAB_0050848e
    PUSH EAX                            ; 00508495
    CALL core_set.cpp_FUN_0050ad20      ; 00508496
        ;   XREF to: 0050ad20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050ad20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050849b
    XOR ECX,ECX                         ; 0050849e
    MOV dword ptr [0x01fba938],ECX      ; 005084a0 | DAT_01fba938
    ADD ESP,0x160                       ; 005084a6
    POP EBP                             ; 005084ac
    POP EDI                             ; 005084ad
    POP ESI                             ; 005084ae
    POP EBX                             ; 005084af
    RET                                 ; 005084b0

