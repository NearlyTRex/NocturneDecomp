; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00578f80(undefined4 param_1,int param_2,uint param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_sound_snddx_cpp_005f5025
;   TerminatedCString s_DirectSoundDevice_setSfx_005f5038
;   TerminatedCString s_Set_hardware_sfx_seconda_005f5066
;   TerminatedCString s_Set_hardware_sfx_seconda_005f508f
;   TerminatedCString s_Set_hardware_sfx_seconda_005f50b5
;   TerminatedCString s_Set_hardware_sfx_seconda_005f50e1
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005f5115
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005f5139
;   TerminatedCString s_Set_hardware_sfx_seconda_005f515d
;   TerminatedCString s_Set_hardware_sfx_seconda_005f5186
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005f51b2
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005f51d2
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005f51fe
;   TerminatedCString s_Set_hardware_sfx_seconda_005f522a
;   ... and 5 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_00573bc0
;   FUN_00575240
;   FUN_005773f0
;   FUN_00577500
;   FUN_005779b0
;   FUN_00577a50
;   FUN_005bfb40
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578f80
        ;   Label: FUN_00578f80
    PUSH ESI                            ; 00578f81
    PUSH EDI                            ; 00578f82
    PUSH EBP                            ; 00578f83
    MOV EBP,ESP                         ; 00578f84
    SUB ESP,0x12f8                      ; 00578f86
    AND ESP,0xfffffff8                  ; 00578f8c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00578f8f
    MOV ESI,dword ptr [EBX + 0x60]      ; 00578f92
    TEST ESI,ESI                        ; 00578f95
    JLE 0x00578fa2                      ; 00578f97
        ;   XREF to: 00578fa2 (CONDITIONAL_JUMP)  ; LAB_00578fa2
    CMP ESI,0x1f                        ; 00578f99
    JL 0x005791f0                       ; 00578f9c
        ;   XREF to: 005791f0 (CONDITIONAL_JUMP)  ; LAB_005791f0
    MOV ECX,0x5f5025                    ; 00578fa2 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_00578fa2
    MOV EDI,0x4f3                       ; 00578fa7
    PUSH 0x5f5038                       ; 00578fac | = "DirectSoundDevice::setSfxPos - invali..."
    MOV dword ptr [0x01d1d400],ECX      ; 00578fb1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00578fb7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00578fbd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00578fc2
    MOV dword ptr [ESP + 0x12ec],0x1    ; 00578fc5
        ;   Label: LAB_00578fc5
    LEA EAX,[ESI*0x8 + 0x0]             ; 00578fd0
    ADD EAX,ESI                         ; 00578fd7
    MOV EDX,0x2c823e0                   ; 00578fd9
    SHL EAX,0x2                         ; 00578fde
    ADD EDX,EAX                         ; 00578fe1
    MOV dword ptr [ESP + 0x12f0],EDX    ; 00578fe3
    MOV EDI,dword ptr [EDX]             ; 00578fea
    MOV ESI,dword ptr [EDX + 0x4]       ; 00578fec
    TEST EDI,EDI                        ; 00578fef
    JZ 0x005791e7                       ; 00578ff1
        ;   XREF to: 005791e7 (CONDITIONAL_JUMP)  ; LAB_005791e7
    TEST ESI,ESI                        ; 00578ff7
    JNZ 0x00579455                      ; 00578ff9
        ;   XREF to: 00579455 (CONDITIONAL_JUMP)  ; LAB_00579455
    TEST byte ptr [EBP + 0x1c],0xca     ; 00578fff
    JZ 0x0057912f                       ; 00579003
        ;   XREF to: 0057912f (CONDITIONAL_JUMP)  ; LAB_0057912f
    CALL FUN_00575240                   ; 00579009
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
    MOV ECX,0x1                         ; 0057900e
    MOV EDX,dword ptr [EBX + 0x90]      ; 00579013
    MOV ESI,EAX                         ; 00579019
    MOV dword ptr [ESP],EDX             ; 0057901b
    CMP EAX,ECX                         ; 0057901e
    JLE 0x00579044                      ; 00579020
        ;   XREF to: 00579044 (CONDITIONAL_JUMP)  ; LAB_00579044
    LEA EDX,[EBX + 0x4]                 ; 00579022
    FLD float ptr [EDX + 0x90]          ; 00579025
        ;   Label: LAB_00579025
    FCOMP float ptr [ESP]               ; 0057902b
    FNSTSW AX                           ; 0057902e
    SAHF                                ; 00579030
    JBE 0x0057903c                      ; 00579031
        ;   XREF to: 0057903c (CONDITIONAL_JUMP)  ; LAB_0057903c
    MOV EAX,dword ptr [EDX + 0x90]      ; 00579033
    MOV dword ptr [ESP],EAX             ; 00579039
    INC ECX                             ; 0057903c
        ;   Label: LAB_0057903c
    ADD EDX,0x4                         ; 0057903d
    CMP ECX,ESI                         ; 00579040
    JL 0x00579025                       ; 00579042
        ;   XREF to: 00579025 (CONDITIONAL_JUMP)  ; LAB_00579025
    PUSH dword ptr [ESP]                ; 00579044
        ;   Label: LAB_00579044
    CALL FUN_005779b0                   ; 00579047
        ;   XREF to: 005779b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005779b0()
    ADD ESP,0x4                         ; 0057904c
    MOV dword ptr [ESP + 0x12dc],EAX    ; 0057904f
    XOR EAX,EAX                         ; 00579056
    MOV dword ptr [ESP + 0x12e8],EAX    ; 00579058
    CMP ESI,0x2                         ; 0057905f
    JNZ 0x005790a3                      ; 00579062
        ;   XREF to: 005790a3 (CONDITIONAL_JUMP)  ; LAB_005790a3
    FLD float ptr [ESP]                 ; 00579064
    FLDZ                                ; 00579067
    FCOMPP                              ; 00579069
    FNSTSW AX                           ; 0057906b
    SAHF                                ; 0057906d
    JNC 0x005790a3                      ; 0057906e
        ;   XREF to: 005790a3 (CONDITIONAL_JUMP)  ; LAB_005790a3
    FLD float ptr [EBX + 0x90]          ; 00579070
    FCOMP float ptr [EBX + 0x94]        ; 00579076
    FNSTSW AX                           ; 0057907c
    SAHF                                ; 0057907e
    JNC 0x00579279                      ; 0057907f
        ;   XREF to: 00579279 (CONDITIONAL_JUMP)  ; LAB_00579279
    FLD float ptr [EBX + 0x90]          ; 00579085
    FLDZ                                ; 0057908b
    FCOMPP                              ; 0057908d
    FNSTSW AX                           ; 0057908f
    SAHF                                ; 00579091
    JC 0x0057920c                       ; 00579092
        ;   XREF to: 0057920c (CONDITIONAL_JUMP)  ; LAB_0057920c
    MOV dword ptr [ESP + 0x12e8],0x2710 ; 00579098
        ;   Label: LAB_00579098
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005790a3
        ;   Label: LAB_005790a3
    MOV EAX,dword ptr [ESP + 0x12dc]    ; 005790aa
    MOV ECX,dword ptr [EDX + 0x14]      ; 005790b1
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005790b4
    SUB EAX,ECX                         ; 005790b7
    CMP ESI,-0x1                        ; 005790b9
    JZ 0x00579314                       ; 005790bc
        ;   XREF to: 00579314 (CONDITIONAL_JUMP)  ; LAB_00579314
    MOV EDX,dword ptr [ESP + 0x12dc]    ; 005790c2
        ;   Label: LAB_005790c2
    PUSH EDX                            ; 005790c9
    MOV EAX,dword ptr [EDI]             ; 005790ca
    PUSH EDI                            ; 005790cc
    CALL dword ptr [EAX + 0x3c]         ; 005790cd
    TEST EAX,EAX                        ; 005790d0
    JNZ 0x00579327                      ; 005790d2
        ;   XREF to: 00579327 (CONDITIONAL_JUMP)  ; LAB_00579327
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005790d8
        ;   Label: LAB_005790d8
    MOV EAX,dword ptr [ESP + 0x12dc]    ; 005790df
    MOV dword ptr [EDX + 0x14],EAX      ; 005790e6
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005790e9
        ;   Label: LAB_005790e9
    MOV EAX,dword ptr [ESP + 0x12e8]    ; 005790f0
    MOV ESI,dword ptr [EDX + 0x18]      ; 005790f7
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005790fa
    SUB EAX,ESI                         ; 005790fd
    CMP EDX,-0x1                        ; 005790ff
    JZ 0x00579369                       ; 00579102
        ;   XREF to: 00579369 (CONDITIONAL_JUMP)  ; LAB_00579369
    MOV ECX,dword ptr [ESP + 0x12e8]    ; 00579108
        ;   Label: LAB_00579108
    PUSH ECX                            ; 0057910f
    MOV EAX,dword ptr [EDI]             ; 00579110
    PUSH EDI                            ; 00579112
    CALL dword ptr [EAX + 0x40]         ; 00579113
    TEST EAX,EAX                        ; 00579116
    JNZ 0x0057937c                      ; 00579118
        ;   XREF to: 0057937c (CONDITIONAL_JUMP)  ; LAB_0057937c
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0057911e
        ;   Label: LAB_0057911e
    MOV EAX,dword ptr [ESP + 0x12e8]    ; 00579125
    MOV dword ptr [EDX + 0x18],EAX      ; 0057912c
    TEST byte ptr [EBP + 0x1c],0x96     ; 0057912f
        ;   Label: LAB_0057912f
    JZ 0x00579182                       ; 00579133
        ;   XREF to: 00579182 (CONDITIONAL_JUMP)  ; LAB_00579182
    MOV EAX,dword ptr [EBX + 0x68]      ; 00579135
    FILD dword ptr [EAX + 0x10c]        ; 00579138
    FMUL float ptr [EBX + 0x6c]         ; 0057913e
    SUB ESP,0x4                         ; 00579141
    FSTP float ptr [ESP]                ; 00579144
    CALL FUN_00577a50                   ; 00579147
        ;   XREF to: 00577a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00577a50()
    ADD ESP,0x4                         ; 0057914c
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0057914f
    MOV ESI,EAX                         ; 00579156
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00579158
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0057915b
    SUB EAX,ECX                         ; 0057915e
    CMP EDX,-0x1                        ; 00579160
    JZ 0x005793be                       ; 00579163
        ;   XREF to: 005793be (CONDITIONAL_JUMP)  ; LAB_005793be
    PUSH ESI                            ; 00579169
        ;   Label: LAB_00579169
    MOV EAX,dword ptr [EDI]             ; 0057916a
    PUSH EDI                            ; 0057916c
    CALL dword ptr [EAX + 0x44]         ; 0057916d
    TEST EAX,EAX                        ; 00579170
    JNZ 0x005793d1                      ; 00579172
        ;   XREF to: 005793d1 (CONDITIONAL_JUMP)  ; LAB_005793d1
    MOV EAX,dword ptr [ESP + 0x12f0]    ; 00579178
        ;   Label: LAB_00579178
    MOV dword ptr [EAX + 0x1c],ESI      ; 0057917f
    TEST byte ptr [EBP + 0x1d],0x1      ; 00579182
        ;   Label: LAB_00579182
    JZ 0x005791b0                       ; 00579186
        ;   XREF to: 005791b0 (CONDITIONAL_JUMP)  ; LAB_005791b0
    FLD double ptr [EBX + 0x10c]        ; 00579188
    CALL FUN_005c03a0                   ; 0057918e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP qword ptr [ESP + 0x12c8]      ; 00579193
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 0057919a
    PUSH EAX                            ; 005791a1
    MOV EDX,dword ptr [EDI]             ; 005791a2
    PUSH EDI                            ; 005791a4
    CALL dword ptr [EDX + 0x34]         ; 005791a5
    TEST EAX,EAX                        ; 005791a8
    JNZ 0x00579413                      ; 005791aa
        ;   XREF to: 00579413 (CONDITIONAL_JUMP)  ; LAB_00579413
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005791b0
        ;   Label: LAB_005791b0
    NOT EAX                             ; 005791b3
    MOV EDI,dword ptr [EBX + 0x118]     ; 005791b5
    OR EAX,0x40000000                   ; 005791bb
    AND EDI,EAX                         ; 005791c0
    MOV EAX,dword ptr [ESP + 0x12ec]    ; 005791c2
    MOV dword ptr [EBX + 0x118],EDI     ; 005791c9
    TEST EAX,EAX                        ; 005791cf
    JNZ 0x005791e0                      ; 005791d1
        ;   XREF to: 005791e0 (CONDITIONAL_JUMP)  ; LAB_005791e0
    PUSH 0x5f525e                       ; 005791d3 | = "DirectSoundDevice::setSfxOpt - failed\n"
    CALL FUN_005773f0                   ; 005791d8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 005791dd
    MOV EDI,dword ptr [ESP + 0x12ec]    ; 005791e0
        ;   Label: LAB_005791e0
    MOV EAX,EDI                         ; 005791e7
        ;   Label: LAB_005791e7
    MOV ESP,EBP                         ; 005791e9
    POP EBP                             ; 005791eb
    POP EDI                             ; 005791ec
    POP ESI                             ; 005791ed
    POP EBX                             ; 005791ee
    RET                                 ; 005791ef
    LEA EAX,[ESI*0x8 + 0x0]             ; 005791f0
        ;   Label: LAB_005791f0
    ADD EAX,ESI                         ; 005791f7
    CMP dword ptr [EAX*0x4 + 0x2c823e0],0x0 ; 005791f9
    JZ 0x00578fa2                       ; 00579201
        ;   XREF to: 00578fa2 (CONDITIONAL_JUMP)  ; LAB_00578fa2
    JMP 0x00578fc5                      ; 00579207
        ;   XREF to: 00578fc5 (UNCONDITIONAL_JUMP)  ; LAB_00578fc5
    FLD float ptr [EBX + 0x94]          ; 0057920c
        ;   Label: LAB_0057920c
    FDIV float ptr [EBX + 0x90]         ; 00579212
    FLDLN2                              ; 00579218
    FXCH                                ; 0057921a
    FYL2X                               ; 0057921c
    FMUL double ptr [0x005f5293]        ; 0057921e | DAT_005f5293
    SUB ESP,0x8                         ; 00579224
    FSTP double ptr [ESP]               ; 00579227
    CALL FUN_005c0880                   ; 0057922a
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x12d0],EAX    ; 0057922f
    MOV dword ptr [ESP + 0x12d4],EDX    ; 00579236
    FLD double ptr [ESP + 0x12d0]       ; 0057923d
    ADD ESP,0x8                         ; 00579244
    CALL FUN_005c03a0                   ; 00579247
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x12e8]      ; 0057924c
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 00579253
    CMP EDX,0x2710                      ; 0057925a
    JGE 0x00579270                      ; 00579260
        ;   XREF to: 00579270 (CONDITIONAL_JUMP)  ; LAB_00579270
    XOR ESI,ESI                         ; 00579262
        ;   Label: LAB_00579262
    MOV dword ptr [ESP + 0x12e8],ESI    ; 00579264
    JMP 0x005790a3                      ; 0057926b
        ;   XREF to: 005790a3 (UNCONDITIONAL_JUMP)  ; LAB_005790a3
    TEST EDX,EDX                        ; 00579270
        ;   Label: LAB_00579270
    JG 0x00579262                       ; 00579272
        ;   XREF to: 00579262 (CONDITIONAL_JUMP)  ; LAB_00579262
    JMP 0x005790a3                      ; 00579274
        ;   XREF to: 005790a3 (UNCONDITIONAL_JUMP)  ; LAB_005790a3
    FLD float ptr [EBX + 0x90]          ; 00579279
        ;   Label: LAB_00579279
    FCOMP float ptr [EBX + 0x94]        ; 0057927f
    FNSTSW AX                           ; 00579285
    SAHF                                ; 00579287
    JNC 0x005790a3                      ; 00579288
        ;   XREF to: 005790a3 (CONDITIONAL_JUMP)  ; LAB_005790a3
    FLD float ptr [EBX + 0x94]          ; 0057928e
    FLDZ                                ; 00579294
    FCOMPP                              ; 00579296
    FNSTSW AX                           ; 00579298
    SAHF                                ; 0057929a
    JC 0x005792ad                       ; 0057929b
        ;   XREF to: 005792ad (CONDITIONAL_JUMP)  ; LAB_005792ad
    MOV dword ptr [ESP + 0x12e8],0xffffd8f0 ; 0057929d
    JMP 0x005790a3                      ; 005792a8
        ;   XREF to: 005790a3 (UNCONDITIONAL_JUMP)  ; LAB_005790a3
    FLD float ptr [EBX + 0x90]          ; 005792ad
        ;   Label: LAB_005792ad
    FDIV float ptr [EBX + 0x94]         ; 005792b3
    FLDLN2                              ; 005792b9
    FXCH                                ; 005792bb
    FYL2X                               ; 005792bd
    FMUL double ptr [0x005f528b]        ; 005792bf | DAT_005f528b
    SUB ESP,0x8                         ; 005792c5
    FSTP double ptr [ESP]               ; 005792c8
    CALL FUN_005c0880                   ; 005792cb
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x12d0],EAX    ; 005792d0
    MOV dword ptr [ESP + 0x12d4],EDX    ; 005792d7
    FLD double ptr [ESP + 0x12d0]       ; 005792de
    ADD ESP,0x8                         ; 005792e5
    CALL FUN_005c03a0                   ; 005792e8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x12e8]      ; 005792ed
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 005792f4
    TEST EDX,EDX                        ; 005792fb
    JL 0x00579098                       ; 005792fd
        ;   XREF to: 00579098 (CONDITIONAL_JUMP)  ; LAB_00579098
    CMP EDX,0xffffd8f0                  ; 00579303
    JLE 0x005790a3                      ; 00579309
        ;   XREF to: 005790a3 (CONDITIONAL_JUMP)  ; LAB_005790a3
    JMP 0x00579098                      ; 0057930f
        ;   XREF to: 00579098 (UNCONDITIONAL_JUMP)  ; LAB_00579098
    CDQ                                 ; 00579314
        ;   Label: LAB_00579314
    XOR EAX,EDX                         ; 00579315
    SUB EAX,EDX                         ; 00579317
    CMP EAX,0x1                         ; 00579319
    JG 0x005790c2                       ; 0057931c
        ;   XREF to: 005790c2 (CONDITIONAL_JUMP)  ; LAB_005790c2
    JMP 0x005790e9                      ; 00579322
        ;   XREF to: 005790e9 (UNCONDITIONAL_JUMP)  ; LAB_005790e9
    PUSH EAX                            ; 00579327
        ;   Label: LAB_00579327
    CALL FUN_00577500                   ; 00579328
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057932d
    PUSH EAX                            ; 00579330
    PUSH 0x5f5066                       ; 00579331 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5f4c35                       ; 00579336 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc94]               ; 0057933b
    PUSH EAX                            ; 00579342
    CALL FUN_005bfb40                   ; 00579343
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579348
    LEA EAX,[ESP + 0xc88]               ; 0057934b
    PUSH EAX                            ; 00579352
    CALL FUN_005773f0                   ; 00579353
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579358
    XOR ECX,ECX                         ; 0057935b
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0057935d
    JMP 0x005790d8                      ; 00579364
        ;   XREF to: 005790d8 (UNCONDITIONAL_JUMP)  ; LAB_005790d8
    CDQ                                 ; 00579369
        ;   Label: LAB_00579369
    XOR EAX,EDX                         ; 0057936a
    SUB EAX,EDX                         ; 0057936c
    CMP EAX,0x1                         ; 0057936e
    JG 0x00579108                       ; 00579371
        ;   XREF to: 00579108 (CONDITIONAL_JUMP)  ; LAB_00579108
    JMP 0x0057912f                      ; 00579377
        ;   XREF to: 0057912f (UNCONDITIONAL_JUMP)  ; LAB_0057912f
    PUSH EAX                            ; 0057937c
        ;   Label: LAB_0057937c
    CALL FUN_00577500                   ; 0057937d
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579382
    PUSH EAX                            ; 00579385
    PUSH 0x5f508f                       ; 00579386 | = "Set hardware sfx secondary buffer pan"
    PUSH 0x5f4c35                       ; 0057938b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4c4]               ; 00579390
    PUSH EAX                            ; 00579397
    CALL FUN_005bfb40                   ; 00579398
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057939d
    LEA EAX,[ESP + 0x4b8]               ; 005793a0
    PUSH EAX                            ; 005793a7
    XOR ESI,ESI                         ; 005793a8
    CALL FUN_005773f0                   ; 005793aa
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 005793af
    MOV dword ptr [ESP + 0x12ec],ESI    ; 005793b2
    JMP 0x0057911e                      ; 005793b9
        ;   XREF to: 0057911e (UNCONDITIONAL_JUMP)  ; LAB_0057911e
    CDQ                                 ; 005793be
        ;   Label: LAB_005793be
    XOR EAX,EDX                         ; 005793bf
    SUB EAX,EDX                         ; 005793c1
    CMP EAX,0x1                         ; 005793c3
    JG 0x00579169                       ; 005793c6
        ;   XREF to: 00579169 (CONDITIONAL_JUMP)  ; LAB_00579169
    JMP 0x00579182                      ; 005793cc
        ;   XREF to: 00579182 (UNCONDITIONAL_JUMP)  ; LAB_00579182
    PUSH EAX                            ; 005793d1
        ;   Label: LAB_005793d1
    CALL FUN_00577500                   ; 005793d2
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 005793d7
    PUSH EAX                            ; 005793da
    PUSH 0x5f50b5                       ; 005793db | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5f4c35                       ; 005793e0 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x974]               ; 005793e5
    PUSH EAX                            ; 005793ec
    CALL FUN_005bfb40                   ; 005793ed
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 005793f2
    LEA EAX,[ESP + 0x968]               ; 005793f5
    PUSH EAX                            ; 005793fc
    CALL FUN_005773f0                   ; 005793fd
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579402
    XOR ECX,ECX                         ; 00579405
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00579407
    JMP 0x00579178                      ; 0057940e
        ;   XREF to: 00579178 (UNCONDITIONAL_JUMP)  ; LAB_00579178
    PUSH EAX                            ; 00579413
        ;   Label: LAB_00579413
    CALL FUN_00577500                   ; 00579414
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579419
    PUSH EAX                            ; 0057941c
    PUSH 0x5f50e1                       ; 0057941d | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5f4c35                       ; 00579422 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xfb4]               ; 00579427
    PUSH EAX                            ; 0057942e
    CALL FUN_005bfb40                   ; 0057942f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579434
    LEA EAX,[ESP + 0xfa8]               ; 00579437
    PUSH EAX                            ; 0057943e
    XOR ESI,ESI                         ; 0057943f
    CALL FUN_005773f0                   ; 00579441
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579446
    MOV dword ptr [ESP + 0x12ec],ESI    ; 00579449
    JMP 0x005791b0                      ; 00579450
        ;   XREF to: 005791b0 (UNCONDITIONAL_JUMP)  ; LAB_005791b0
    TEST byte ptr [EBP + 0x1c],0x88     ; 00579455
        ;   Label: LAB_00579455
    JZ 0x0057949e                       ; 00579459
        ;   XREF to: 0057949e (CONDITIONAL_JUMP)  ; LAB_0057949e
    MOV EAX,dword ptr [EBX + 0xf0]      ; 0057945b
    MOV EDX,dword ptr [EBX]             ; 00579461
    MOV dword ptr [ESP + 0x12e0],EAX    ; 00579463
    MOV EAX,dword ptr [EBX + 0xf8]      ; 0057946a
    PUSH EDX                            ; 00579470
    MOV dword ptr [ESP + 0x12dc],EAX    ; 00579471
    CALL FUN_00573bc0                   ; 00579478
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0x12f8],EAX    ; 0057947d
    FLD float ptr [ESP + 0x12f8]        ; 00579484
    ADD ESP,0x4                         ; 0057948b
    MOV DL,byte ptr [EBX + 0x4c]        ; 0057948e
    FSTP float ptr [ESP + 0x4]          ; 00579491
    TEST DL,0x1                         ; 00579495
    JZ 0x00579694                       ; 00579498
        ;   XREF to: 00579694 (CONDITIONAL_JUMP)  ; LAB_00579694
    TEST byte ptr [EBP + 0x1c],0x2      ; 0057949e
        ;   Label: LAB_0057949e
    JZ 0x005794cf                       ; 005794a2
        ;   XREF to: 005794cf (CONDITIONAL_JUMP)  ; LAB_005794cf
    PUSH 0x1                            ; 005794a4
    FLD double ptr [EBX + 0x14]         ; 005794a6
    SUB ESP,0x4                         ; 005794a9
    MOV EAX,dword ptr [ESI]             ; 005794ac
    FSTP float ptr [ESP]                ; 005794ae
    SUB ESP,0x4                         ; 005794b1
    FLD double ptr [EBX + 0xc]          ; 005794b4
    FSTP float ptr [ESP]                ; 005794b7
    SUB ESP,0x4                         ; 005794ba
    FLD double ptr [EBX + 0x4]          ; 005794bd
    FSTP float ptr [ESP]                ; 005794c0
    PUSH ESI                            ; 005794c3
    CALL dword ptr [EAX + 0x4c]         ; 005794c4
    TEST EAX,EAX                        ; 005794c7
    JNZ 0x005796da                      ; 005794c9
        ;   XREF to: 005796da (CONDITIONAL_JUMP)  ; LAB_005796da
    TEST byte ptr [EBP + 0x1c],0x4      ; 005794cf
        ;   Label: LAB_005794cf
    JZ 0x005794ee                       ; 005794d3
        ;   XREF to: 005794ee (CONDITIONAL_JUMP)  ; LAB_005794ee
    PUSH 0x1                            ; 005794d5
    PUSH dword ptr [EBX + 0x2c]         ; 005794d7
    PUSH dword ptr [EBX + 0x28]         ; 005794da
    MOV EAX,dword ptr [ESI]             ; 005794dd
    PUSH dword ptr [EBX + 0x24]         ; 005794df
    PUSH ESI                            ; 005794e2
    CALL dword ptr [EAX + 0x50]         ; 005794e3
    TEST EAX,EAX                        ; 005794e6
    JNZ 0x0057971c                      ; 005794e8
        ;   XREF to: 0057971c (CONDITIONAL_JUMP)  ; LAB_0057971c
    TEST byte ptr [EBP + 0x1c],0x8      ; 005794ee
        ;   Label: LAB_005794ee
    JZ 0x00579543                       ; 005794f2
        ;   XREF to: 00579543 (CONDITIONAL_JUMP)  ; LAB_00579543
    FLD float ptr [EBX + 0x38]          ; 005794f4
    FMUL float ptr [ESP + 0x4]          ; 005794f7
    SUB ESP,0x4                         ; 005794fb
    FSTP float ptr [ESP]                ; 005794fe
    CALL FUN_005779b0                   ; 00579501
        ;   XREF to: 005779b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005779b0()
    ADD ESP,0x4                         ; 00579506
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00579509
    MOV dword ptr [ESP + 0x12d0],EAX    ; 0057950c
    CMP EDX,-0x1                        ; 00579513
    JNZ 0x0057975e                      ; 00579516
        ;   XREF to: 0057975e (CONDITIONAL_JUMP)  ; LAB_0057975e
    MOV EDX,dword ptr [ESP + 0x12d0]    ; 0057951c
        ;   Label: LAB_0057951c
    PUSH EDX                            ; 00579523
    MOV EAX,dword ptr [EDI]             ; 00579524
    PUSH EDI                            ; 00579526
    CALL dword ptr [EAX + 0x3c]         ; 00579527
    TEST EAX,EAX                        ; 0057952a
    JNZ 0x0057977b                      ; 0057952c
        ;   XREF to: 0057977b (CONDITIONAL_JUMP)  ; LAB_0057977b
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00579532
        ;   Label: LAB_00579532
    MOV EAX,dword ptr [ESP + 0x12d0]    ; 00579539
    MOV dword ptr [EDX + 0x14],EAX      ; 00579540
    TEST byte ptr [EBP + 0x1c],0x10     ; 00579543
        ;   Label: LAB_00579543
    JZ 0x0057959d                       ; 00579547
        ;   XREF to: 0057959d (CONDITIONAL_JUMP)  ; LAB_0057959d
    MOV EAX,dword ptr [EBX + 0x68]      ; 00579549
    FILD dword ptr [EAX + 0x10c]        ; 0057954c
    FMUL float ptr [EBX + 0x3c]         ; 00579552
    SUB ESP,0x4                         ; 00579555
    FSTP float ptr [ESP]                ; 00579558
    CALL FUN_00577a50                   ; 0057955b
        ;   XREF to: 00577a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00577a50()
    ADD ESP,0x4                         ; 00579560
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00579563
    MOV dword ptr [ESP + 0x12d4],EAX    ; 00579566
    CMP EDX,-0x1                        ; 0057956d
    JNZ 0x005797bd                      ; 00579570
        ;   XREF to: 005797bd (CONDITIONAL_JUMP)  ; LAB_005797bd
    MOV EDX,dword ptr [ESP + 0x12d4]    ; 00579576
        ;   Label: LAB_00579576
    PUSH EDX                            ; 0057957d
    MOV EAX,dword ptr [EDI]             ; 0057957e
    PUSH EDI                            ; 00579580
    CALL dword ptr [EAX + 0x44]         ; 00579581
    TEST EAX,EAX                        ; 00579584
    JNZ 0x005797da                      ; 00579586
        ;   XREF to: 005797da (CONDITIONAL_JUMP)  ; LAB_005797da
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0057958c
        ;   Label: LAB_0057958c
    MOV EAX,dword ptr [ESP + 0x12d4]    ; 00579593
    MOV dword ptr [EDX + 0x1c],EAX      ; 0057959a
    TEST byte ptr [EBP + 0x1c],0x40     ; 0057959d
        ;   Label: LAB_0057959d
    JZ 0x005795f2                       ; 005795a1
        ;   XREF to: 005795f2 (CONDITIONAL_JUMP)  ; LAB_005795f2
    XOR EAX,EAX                         ; 005795a3
    MOV DL,byte ptr [EBX + 0x4c]        ; 005795a5
    MOV dword ptr [ESP + 0x12e4],EAX    ; 005795a8
    TEST DL,0x1                         ; 005795af
    JZ 0x005795bf                       ; 005795b2
        ;   XREF to: 005795bf (CONDITIONAL_JUMP)  ; LAB_005795bf
    MOV dword ptr [ESP + 0x12e4],0x2    ; 005795b4
    CMP dword ptr [EBP + 0x1c],-0x1     ; 005795bf
        ;   Label: LAB_005795bf
    JNZ 0x0057981c                      ; 005795c3
        ;   XREF to: 0057981c (CONDITIONAL_JUMP)  ; LAB_0057981c
    PUSH 0x1                            ; 005795c9
        ;   Label: LAB_005795c9
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 005795cb
    PUSH EDX                            ; 005795d2
    MOV EAX,dword ptr [ESI]             ; 005795d3
    PUSH ESI                            ; 005795d5
    CALL dword ptr [EAX + 0x48]         ; 005795d6
    TEST EAX,EAX                        ; 005795d9
    JNZ 0x00579838                      ; 005795db
        ;   XREF to: 00579838 (CONDITIONAL_JUMP)  ; LAB_00579838
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005795e1
        ;   Label: LAB_005795e1
    MOV EAX,dword ptr [ESP + 0x12e4]    ; 005795e8
    MOV dword ptr [EDX + 0x20],EAX      ; 005795ef
    TEST byte ptr [EBP + 0x1c],0x80     ; 005795f2
        ;   Label: LAB_005795f2
    JZ 0x00579626                       ; 005795f6
        ;   XREF to: 00579626 (CONDITIONAL_JUMP)  ; LAB_00579626
    PUSH 0x1                            ; 005795f8
    MOV EAX,dword ptr [ESI]             ; 005795fa
    PUSH dword ptr [ESP + 0x12e4]       ; 005795fc
    PUSH ESI                            ; 00579603
    CALL dword ptr [EAX + 0x44]         ; 00579604
    TEST EAX,EAX                        ; 00579607
    JNZ 0x0057987a                      ; 00579609
        ;   XREF to: 0057987a (CONDITIONAL_JUMP)  ; LAB_0057987a
    PUSH 0x1                            ; 0057960f
        ;   Label: LAB_0057960f
    MOV EAX,dword ptr [ESI]             ; 00579611
    PUSH dword ptr [ESP + 0x12dc]       ; 00579613
    PUSH ESI                            ; 0057961a
    CALL dword ptr [EAX + 0x40]         ; 0057961b
    TEST EAX,EAX                        ; 0057961e
    JNZ 0x005798bc                      ; 00579620
        ;   XREF to: 005798bc (CONDITIONAL_JUMP)  ; LAB_005798bc
    TEST byte ptr [EBP + 0x1d],0x1      ; 00579626
        ;   Label: LAB_00579626
    JZ 0x005791b0                       ; 0057962a
        ;   XREF to: 005791b0 (CONDITIONAL_JUMP)  ; LAB_005791b0
    FLD double ptr [EBX + 0x10c]        ; 00579630
    CALL FUN_005c03a0                   ; 00579636
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP qword ptr [ESP + 0x12c8]      ; 0057963b
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00579642
    PUSH EAX                            ; 00579649
    MOV EDX,dword ptr [EDI]             ; 0057964a
    PUSH EDI                            ; 0057964c
    CALL dword ptr [EDX + 0x34]         ; 0057964d
    TEST EAX,EAX                        ; 00579650
    JZ 0x005791b0                       ; 00579652
        ;   XREF to: 005791b0 (CONDITIONAL_JUMP)  ; LAB_005791b0
    PUSH EAX                            ; 00579658
    CALL FUN_00577500                   ; 00579659
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057965e
    PUSH EAX                            ; 00579661
    PUSH 0x5f522a                       ; 00579662 | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5f4c35                       ; 00579667 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 0057966c
    PUSH EAX                            ; 00579670
    CALL FUN_005bfb40                   ; 00579671
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579676
    LEA EAX,[ESP + 0x8]                 ; 00579679
    PUSH EAX                            ; 0057967d
    CALL FUN_005773f0                   ; 0057967e
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579683
    XOR ECX,ECX                         ; 00579686
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00579688
    JMP 0x005791b0                      ; 0057968f
        ;   XREF to: 005791b0 (UNCONDITIONAL_JUMP)  ; LAB_005791b0
    FLD float ptr [ESP + 0x4]           ; 00579694
        ;   Label: LAB_00579694
    FLDZ                                ; 00579698
    FCOMPP                              ; 0057969a
    FNSTSW AX                           ; 0057969c
    SAHF                                ; 0057969e
    JNC 0x0057949e                      ; 0057969f
        ;   XREF to: 0057949e (CONDITIONAL_JUMP)  ; LAB_0057949e
    FLD float ptr [ESP + 0x4]           ; 005796a5
    FDIV ST0,ST0                        ; 005796a9
    FLD float ptr [ESP + 0x12e0]        ; 005796ab
    FMUL float ptr [ESP + 0x4]          ; 005796b2
    FLD float ptr [ESP + 0x12d8]        ; 005796b6
    FMUL float ptr [ESP + 0x4]          ; 005796bd
    FXCH                                ; 005796c1
    FSTP float ptr [ESP + 0x12e0]       ; 005796c3
    FSTP float ptr [ESP + 0x12d8]       ; 005796ca
    FSTP float ptr [ESP + 0x4]          ; 005796d1
    JMP 0x0057949e                      ; 005796d5
        ;   XREF to: 0057949e (UNCONDITIONAL_JUMP)  ; LAB_0057949e
    PUSH EAX                            ; 005796da
        ;   Label: LAB_005796da
    CALL FUN_00577500                   ; 005796db
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 005796e0
    PUSH EAX                            ; 005796e3
    PUSH 0x5f5115                       ; 005796e4 | = "Set hardware sfx 3d buffer position"
    PUSH 0x5f4c35                       ; 005796e9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7e4]               ; 005796ee
    PUSH EAX                            ; 005796f5
    CALL FUN_005bfb40                   ; 005796f6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 005796fb
    LEA EAX,[ESP + 0x7d8]               ; 005796fe
    PUSH EAX                            ; 00579705
    CALL FUN_005773f0                   ; 00579706
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057970b
    XOR ECX,ECX                         ; 0057970e
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00579710
    JMP 0x005794cf                      ; 00579717
        ;   XREF to: 005794cf (UNCONDITIONAL_JUMP)  ; LAB_005794cf
    PUSH EAX                            ; 0057971c
        ;   Label: LAB_0057971c
    CALL FUN_00577500                   ; 0057971d
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579722
    PUSH EAX                            ; 00579725
    PUSH 0x5f5139                       ; 00579726 | = "Set hardware sfx 3d buffer velocity"
    PUSH 0x5f4c35                       ; 0057972b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xe24]               ; 00579730
    PUSH EAX                            ; 00579737
    CALL FUN_005bfb40                   ; 00579738
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057973d
    LEA EAX,[ESP + 0xe18]               ; 00579740
    PUSH EAX                            ; 00579747
    CALL FUN_005773f0                   ; 00579748
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057974d
    XOR EAX,EAX                         ; 00579750
    MOV dword ptr [ESP + 0x12ec],EAX    ; 00579752
    JMP 0x005794ee                      ; 00579759
        ;   XREF to: 005794ee (UNCONDITIONAL_JUMP)  ; LAB_005794ee
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0057975e
        ;   Label: LAB_0057975e
    SUB EAX,dword ptr [EDX + 0x14]      ; 00579765
    CDQ                                 ; 00579768
    XOR EAX,EDX                         ; 00579769
    SUB EAX,EDX                         ; 0057976b
    CMP EAX,0x1                         ; 0057976d
    JG 0x0057951c                       ; 00579770
        ;   XREF to: 0057951c (CONDITIONAL_JUMP)  ; LAB_0057951c
    JMP 0x00579543                      ; 00579776
        ;   XREF to: 00579543 (UNCONDITIONAL_JUMP)  ; LAB_00579543
    PUSH EAX                            ; 0057977b
        ;   Label: LAB_0057977b
    CALL FUN_00577500                   ; 0057977c
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579781
    PUSH EAX                            ; 00579784
    PUSH 0x5f515d                       ; 00579785 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5f4c35                       ; 0057978a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x334]               ; 0057978f
    PUSH EAX                            ; 00579796
    CALL FUN_005bfb40                   ; 00579797
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057979c
    LEA EAX,[ESP + 0x328]               ; 0057979f
    PUSH EAX                            ; 005797a6
    CALL FUN_005773f0                   ; 005797a7
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 005797ac
    XOR ECX,ECX                         ; 005797af
    MOV dword ptr [ESP + 0x12ec],ECX    ; 005797b1
    JMP 0x00579532                      ; 005797b8
        ;   XREF to: 00579532 (UNCONDITIONAL_JUMP)  ; LAB_00579532
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005797bd
        ;   Label: LAB_005797bd
    SUB EAX,dword ptr [EDX + 0x1c]      ; 005797c4
    CDQ                                 ; 005797c7
    XOR EAX,EDX                         ; 005797c8
    SUB EAX,EDX                         ; 005797ca
    CMP EAX,0x1                         ; 005797cc
    JG 0x00579576                       ; 005797cf
        ;   XREF to: 00579576 (CONDITIONAL_JUMP)  ; LAB_00579576
    JMP 0x0057959d                      ; 005797d5
        ;   XREF to: 0057959d (UNCONDITIONAL_JUMP)  ; LAB_0057959d
    PUSH EAX                            ; 005797da
        ;   Label: LAB_005797da
    CALL FUN_00577500                   ; 005797db
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 005797e0
    PUSH EAX                            ; 005797e3
    PUSH 0x5f5186                       ; 005797e4 | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5f4c35                       ; 005797e9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x654]               ; 005797ee
    PUSH EAX                            ; 005797f5
    CALL FUN_005bfb40                   ; 005797f6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 005797fb
    LEA EAX,[ESP + 0x648]               ; 005797fe
    PUSH EAX                            ; 00579805
    CALL FUN_005773f0                   ; 00579806
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057980b
    XOR ECX,ECX                         ; 0057980e
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00579810
    JMP 0x0057958c                      ; 00579817
        ;   XREF to: 0057958c (UNCONDITIONAL_JUMP)  ; LAB_0057958c
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0057981c
        ;   Label: LAB_0057981c
    MOV EAX,dword ptr [ESP + 0x12e4]    ; 00579823
    CMP EAX,dword ptr [EDX + 0x20]      ; 0057982a
    JNZ 0x005795c9                      ; 0057982d
        ;   XREF to: 005795c9 (CONDITIONAL_JUMP)  ; LAB_005795c9
    JMP 0x005795f2                      ; 00579833
        ;   XREF to: 005795f2 (UNCONDITIONAL_JUMP)  ; LAB_005795f2
    PUSH EAX                            ; 00579838
        ;   Label: LAB_00579838
    CALL FUN_00577500                   ; 00579839
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057983e
    PUSH EAX                            ; 00579841
    PUSH 0x5f51b2                       ; 00579842 | = "Set hardware sfx 3d buffer mode"
    PUSH 0x5f4c35                       ; 00579847 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a4]               ; 0057984c
    PUSH EAX                            ; 00579853
    CALL FUN_005bfb40                   ; 00579854
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579859
    LEA EAX,[ESP + 0x198]               ; 0057985c
    PUSH EAX                            ; 00579863
    CALL FUN_005773f0                   ; 00579864
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579869
    XOR ECX,ECX                         ; 0057986c
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0057986e
    JMP 0x005795e1                      ; 00579875
        ;   XREF to: 005795e1 (UNCONDITIONAL_JUMP)  ; LAB_005795e1
    PUSH EAX                            ; 0057987a
        ;   Label: LAB_0057987a
    CALL FUN_00577500                   ; 0057987b
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579880
    PUSH EAX                            ; 00579883
    PUSH 0x5f51d2                       ; 00579884 | = "Set hardware sfx 3d buffer minimum di..."
    PUSH 0x5f4c35                       ; 00579889 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1144]              ; 0057988e
    PUSH EAX                            ; 00579895
    CALL FUN_005bfb40                   ; 00579896
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057989b
    LEA EAX,[ESP + 0x1138]              ; 0057989e
    PUSH EAX                            ; 005798a5
    CALL FUN_005773f0                   ; 005798a6
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 005798ab
    XOR EAX,EAX                         ; 005798ae
    MOV dword ptr [ESP + 0x12ec],EAX    ; 005798b0
    JMP 0x0057960f                      ; 005798b7
        ;   XREF to: 0057960f (UNCONDITIONAL_JUMP)  ; LAB_0057960f
    PUSH EAX                            ; 005798bc
        ;   Label: LAB_005798bc
    CALL FUN_00577500                   ; 005798bd
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 005798c2
    PUSH EAX                            ; 005798c5
    PUSH 0x5f51fe                       ; 005798c6 | = "Set hardware sfx 3d buffer maximum di..."
    PUSH 0x5f4c35                       ; 005798cb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xb04]               ; 005798d0
    PUSH EAX                            ; 005798d7
    CALL FUN_005bfb40                   ; 005798d8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 005798dd
    LEA EAX,[ESP + 0xaf8]               ; 005798e0
    PUSH EAX                            ; 005798e7
    CALL FUN_005773f0                   ; 005798e8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 005798ed
    XOR EDX,EDX                         ; 005798f0
    MOV dword ptr [ESP + 0x12ec],EDX    ; 005798f2
    JMP 0x00579626                      ; 005798f9
        ;   XREF to: 00579626 (UNCONDITIONAL_JUMP)  ; LAB_00579626

