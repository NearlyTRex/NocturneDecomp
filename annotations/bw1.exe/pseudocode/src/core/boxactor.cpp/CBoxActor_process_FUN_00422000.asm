; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_00422000(CBoxActor *this_ptr,float delta_time)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422f90 at 00422fa7
;
; Referenced Globals:
;   undefined4 DAT_005d4c08
;   undefined4 DAT_005d4c0c
;   undefined4 DAT_005d4c10
;   undefined4 DAT_005d4c18
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_box.cpp_CBox_process_FUN_0041e0d0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_setcolid.cpp_FUN_00559350
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;   sound_sndmain.cpp_FUN_00572a50
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422000
        ;   Label: core_boxactor.cpp_CBoxActor_process_FUN_00422000
    PUSH ESI                            ; 00422001
    PUSH EDI                            ; 00422002
    PUSH EBP                            ; 00422003
    MOV EBP,ESP                         ; 00422004
    SUB ESP,0x13c                       ; 00422006
    AND ESP,0xfffffff8                  ; 0042200c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042200f
    LEA EAX,[EBX + 0x158]               ; 00422012
    PUSH EAX                            ; 00422018
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00422019
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x30c]         ; 0042201e
    ADD ESP,0x4                         ; 00422024
    MOV ESI,dword ptr [EAX + 0x100]     ; 00422027
    FADD float ptr [EBX + 0x310]        ; 0042202d
    SUB ESP,0x8                         ; 00422033
    FST float ptr [EBX + 0x310]         ; 00422036
    FSTP double ptr [ESP]               ; 0042203c
    CALL crt_math.c_floor_FUN_005c0880  ; 0042203f
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x12c],EAX     ; 00422044
    MOV dword ptr [ESP + 0x130],EDX     ; 0042204b
    FLD double ptr [ESP + 0x12c]        ; 00422052
    ADD ESP,0x8                         ; 00422059
    CALL crt_math.c_round_FUN_005c03a0  ; 0042205c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x130]       ; 00422061
    MOV EAX,dword ptr [ESP + 0x130]     ; 00422068
    MOV dword ptr [ESP + 0x134],EAX     ; 0042206f
    FILD dword ptr [ESP + 0x134]        ; 00422076
    FSUBR float ptr [EBX + 0x310]       ; 0042207d
    MOV EDI,ESI                         ; 00422083
    FSTP float ptr [ESP + 0x12c]        ; 00422085
    TEST EAX,EAX                        ; 0042208c
    JL 0x0042222e                       ; 0042208e
        ;   XREF to: 0042222e (CONDITIONAL_JUMP)  ; LAB_0042222e
    MOV EDX,EAX                         ; 00422094
    SAR EDX,0x1f                        ; 00422096
    IDIV ESI                            ; 00422099
    MOV dword ptr [ESP + 0x130],EDX     ; 0042209b
    MOV EAX,dword ptr [ESP + 0x130]     ; 004220a2
        ;   Label: LAB_004220a2
    MOV dword ptr [ESP + 0x134],EAX     ; 004220a9
    MOV dword ptr [ESP + 0x138],EDI     ; 004220b0
    FILD dword ptr [ESP + 0x134]        ; 004220b7
    FADD float ptr [ESP + 0x12c]        ; 004220be
    FILD dword ptr [ESP + 0x138]        ; 004220c5
    FXCH                                ; 004220cc
    FSTP float ptr [EBX + 0x310]        ; 004220ce
    FCOMP float ptr [EBX + 0x310]       ; 004220d4
    FNSTSW AX                           ; 004220da
    SAHF                                ; 004220dc
    JA 0x004220e9                       ; 004220dd
        ;   XREF to: 004220e9 (CONDITIONAL_JUMP)  ; LAB_004220e9
    MOV dword ptr [EBX + 0x310],0x0     ; 004220df
    LEA EAX,[EBX + 0x300]               ; 004220e9
        ;   Label: LAB_004220e9
    FLD float ptr [EBP + 0x18]          ; 004220ef
    FLD float ptr [EAX]                 ; 004220f2
    FMUL ST1                            ; 004220f4
    FLD float ptr [EAX + 0x4]           ; 004220f6
    FMUL ST2                            ; 004220f9
    FLD float ptr [EAX + 0x8]           ; 004220fb
    FMULP ST3                           ; 004220fe
    LEA EDI,[ESP + 0xb8]                ; 00422100
    LEA ESI,[ESP + 0x88]                ; 00422107
    FXCH                                ; 0042210e
    FSTP float ptr [ESP + 0x88]         ; 00422110
    FSTP float ptr [ESP + 0x8c]         ; 00422117
    FSTP float ptr [ESP + 0x90]         ; 0042211e
    MOVSD ES:EDI,ESI                    ; 00422125
    MOVSD ES:EDI,ESI                    ; 00422126
    MOVSD ES:EDI,ESI                    ; 00422127
    FLD float ptr [0x005d4c08]          ; 00422128 | DAT_005d4c08
    FLD float ptr [ESP + 0xb8]          ; 0042212e
    FMUL ST1                            ; 00422135
    FLD float ptr [ESP + 0xbc]          ; 00422137
    FMUL ST2                            ; 0042213e
    FLD float ptr [ESP + 0xc0]          ; 00422140
    FMULP ST3                           ; 00422147
    LEA EAX,[EBX + 0x30]                ; 00422149
    LEA EDI,[ESP + 0xa0]                ; 0042214c
    LEA ESI,[ESP + 0x70]                ; 00422153
    FXCH                                ; 00422157
    FSTP float ptr [ESP + 0x70]         ; 00422159
    FSTP float ptr [ESP + 0x74]         ; 0042215d
    FSTP float ptr [ESP + 0x78]         ; 00422161
    MOVSD ES:EDI,ESI                    ; 00422165
    MOVSD ES:EDI,ESI                    ; 00422166
    MOVSD ES:EDI,ESI                    ; 00422167
    FLD float ptr [EAX]                 ; 00422168
    FLD float ptr [EAX + 0x4]           ; 0042216a
    FLD float ptr [EAX + 0x8]           ; 0042216d
    FXCH ST2                            ; 00422170
    FADD float ptr [ESP + 0xa0]         ; 00422172
    FXCH                                ; 00422179
    FADD float ptr [ESP + 0xa4]         ; 0042217b
    FXCH ST2                            ; 00422182
    FADD float ptr [ESP + 0xa8]         ; 00422184
    FXCH                                ; 0042218b
    FSTP float ptr [EAX]                ; 0042218d
    FXCH                                ; 0042218f
    FSTP float ptr [EAX + 0x4]          ; 00422191
    FSTP float ptr [EAX + 0x8]          ; 00422194
    PUSH dword ptr [EBX + 0x30]         ; 00422197
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0042219a
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x13c],EAX     ; 0042219f
    FLD float ptr [ESP + 0x13c]         ; 004221a6
    ADD ESP,0x4                         ; 004221ad
    PUSH dword ptr [EBX + 0x38]         ; 004221b0
    FSTP float ptr [EBX + 0x30]         ; 004221b3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004221b6
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x13c],EAX     ; 004221bb
    FLD float ptr [ESP + 0x13c]         ; 004221c2
    ADD ESP,0x4                         ; 004221c9
    PUSH dword ptr [EBX + 0x34]         ; 004221cc
    FSTP float ptr [EBX + 0x38]         ; 004221cf
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004221d2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x13c],EAX     ; 004221d7
    FLD float ptr [ESP + 0x13c]         ; 004221de
    MOV AH,byte ptr [EBX + 0x2d4]       ; 004221e5
    FSTP float ptr [EBX + 0x34]         ; 004221eb
    ADD ESP,0x4                         ; 004221ee
    TEST AH,AH                          ; 004221f1
    JZ 0x0042220f                       ; 004221f3
        ;   XREF to: 0042220f (CONDITIONAL_JUMP)  ; LAB_0042220f
    MOV ECX,dword ptr [EBX + 0x2fc]     ; 004221f5
    PUSH ECX                            ; 004221fb
    MOV ESI,dword ptr [0x006236b8]      ; 004221fc | DAT_006236b8
    PUSH ESI                            ; 00422202
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 00422203
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00422208
    TEST EAX,EAX                        ; 0042220b
    JZ 0x00422245                       ; 0042220d
        ;   XREF to: 00422245 (CONDITIONAL_JUMP)  ; LAB_00422245
    CMP dword ptr [EBX + 0x318],0x0     ; 0042220f
        ;   Label: LAB_0042220f
    JNZ 0x00422227                      ; 00422216
        ;   XREF to: 00422227 (CONDITIONAL_JUMP)  ; LAB_00422227
    FLD float ptr [EBX + 0x390]         ; 00422218
    FLDZ                                ; 0042221e
    FCOMPP                              ; 00422220
    FNSTSW AX                           ; 00422222
    SAHF                                ; 00422224
    JC 0x0042229b                       ; 00422225
        ;   XREF to: 0042229b (CONDITIONAL_JUMP)  ; LAB_0042229b
    MOV ESP,EBP                         ; 00422227
        ;   Label: LAB_00422227
    POP EBP                             ; 00422229
    POP EDI                             ; 0042222a
    POP ESI                             ; 0042222b
    POP EBX                             ; 0042222c
    RET                                 ; 0042222d
    NEG EAX                             ; 0042222e
        ;   Label: LAB_0042222e
    MOV EDX,EAX                         ; 00422230
    SAR EDX,0x1f                        ; 00422232
    IDIV ESI                            ; 00422235
    SUB ESI,EDX                         ; 00422237
    MOV dword ptr [ESP + 0x130],ESI     ; 00422239
    JMP 0x004220a2                      ; 00422240
        ;   XREF to: 004220a2 (UNCONDITIONAL_JUMP)  ; LAB_004220a2
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 00422245
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_00422245
    PUSH 0x2                            ; 0042224a
    PUSH 0x3f800000                     ; 0042224c
    PUSH 0x0                            ; 00422251
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00422253
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x144],EAX     ; 00422258
    FLD float ptr [ESP + 0x144]         ; 0042225f
    ADD ESP,0x8                         ; 00422266
    SUB ESP,0x8                         ; 00422269
    FSTP double ptr [ESP]               ; 0042226c
    CALL sound_sndmain.cpp_FUN_00572a50 ; 0042226f
        ;   XREF to: 00572a50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a50(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 00422274
    LEA EAX,[EBX + 0x2d4]               ; 00422277
    PUSH EAX                            ; 0042227d
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042227e
    PUSH EBX                            ; 00422284
    CALL dword ptr [EDX + 0x2c]         ; 00422285
    ADD ESP,0x8                         ; 00422288
    MOV dword ptr [EBX + 0x2fc],EAX     ; 0042228b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 00422291
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x0042220f                      ; 00422296
        ;   XREF to: 0042220f (UNCONDITIONAL_JUMP)  ; LAB_0042220f
    PUSH dword ptr [EBP + 0x18]         ; 0042229b
        ;   Label: LAB_0042229b
    LEA EDI,[ESP + 0x98]                ; 0042229e
    LEA EAX,[EBX + 0x394]               ; 004222a5
    LEA ESI,[EBX + 0x20]                ; 004222ab
    PUSH EAX                            ; 004222ae
    MOVSD ES:EDI,ESI                    ; 004222af
    MOVSD ES:EDI,ESI                    ; 004222b0
    MOVSD ES:EDI,ESI                    ; 004222b1
    CALL core_box.cpp_CBox_process_FUN_0041e0d0 ; 004222b2
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e0d0(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x30]                ; 004222b7
    LEA ESI,[EBX + 0x3a0]               ; 004222ba
    ADD ESP,0x8                         ; 004222c0
    CMP EAX,ESI                         ; 004222c3
    JZ 0x004222d7                       ; 004222c5
        ;   XREF to: 004222d7 (CONDITIONAL_JUMP)  ; LAB_004222d7
    MOV EDX,dword ptr [ESI]             ; 004222c7
    MOV dword ptr [EAX],EDX             ; 004222c9
    MOV EDX,dword ptr [ESI + 0x4]       ; 004222cb
    MOV dword ptr [EAX + 0x4],EDX       ; 004222ce
    MOV EDX,dword ptr [ESI + 0x8]       ; 004222d1
    MOV dword ptr [EAX + 0x8],EDX       ; 004222d4
    PUSH EBX                            ; 004222d7
        ;   Label: LAB_004222d7
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004222d8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004222dd
    MOV EAX,dword ptr [EBX + 0x154]     ; 004222e0
    PUSH EBX                            ; 004222e6
    LEA ESI,[ESP + 0x5c]                ; 004222e7
    LEA EDI,[ESP + 0x44]                ; 004222eb
    CALL dword ptr [EAX + 0x1c]         ; 004222ef
    MOV ECX,0x6                         ; 004222f2
    LEA ESI,[ESP + 0x5c]                ; 004222f7
    ADD ESP,0x4                         ; 004222fb
    MOVSD.REP ES:EDI,ESI                ; 004222fe
    LEA EAX,[ESP + 0x40]                ; 00422300
    FLD float ptr [ESP + 0x40]          ; 00422304
    FLD float ptr [ESP + 0x44]          ; 00422308
    FLD float ptr [ESP + 0x48]          ; 0042230c
    LEA EDI,[ESP + 0xf4]                ; 00422310
    LEA ESI,[ESP + 0x100]               ; 00422317
    FXCH ST2                            ; 0042231e
    FADD float ptr [EAX + 0xc]          ; 00422320
    FXCH                                ; 00422323
    FADD float ptr [EAX + 0x10]         ; 00422325
    FXCH ST2                            ; 00422328
    FADD float ptr [EAX + 0x14]         ; 0042232a
    FXCH                                ; 0042232d
    FSTP float ptr [ESP + 0x100]        ; 0042232f
    FXCH                                ; 00422336
    FSTP float ptr [ESP + 0x104]        ; 00422338
    FSTP float ptr [ESP + 0x108]        ; 0042233f
    MOVSD ES:EDI,ESI                    ; 00422346
    MOVSD ES:EDI,ESI                    ; 00422347
    MOVSD ES:EDI,ESI                    ; 00422348
    FLD float ptr [0x005d4c0c]          ; 00422349 | DAT_005d4c0c
    FLD float ptr [ESP + 0xf4]          ; 0042234f
    FMUL ST1                            ; 00422356
    FLD float ptr [ESP + 0xf8]          ; 00422358
    FMUL ST2                            ; 0042235f
    FLD float ptr [ESP + 0xfc]          ; 00422361
    FMULP ST3                           ; 00422368
    LEA EAX,[ESP + 0x7c]                ; 0042236a
    LEA EDI,[ESP + 0x10c]               ; 0042236e
    LEA ESI,[ESP + 0xdc]                ; 00422375
    FXCH                                ; 0042237c
    FSTP float ptr [ESP + 0xdc]         ; 0042237e
    FSTP float ptr [ESP + 0xe0]         ; 00422385
    FSTP float ptr [ESP + 0xe4]         ; 0042238c
    MOVSD ES:EDI,ESI                    ; 00422393
    MOVSD ES:EDI,ESI                    ; 00422394
    MOVSD ES:EDI,ESI                    ; 00422395
    PUSH EAX                            ; 00422396
    FLD float ptr [ESP + 0x110]         ; 00422397
    FLD float ptr [ESP + 0x114]         ; 0042239e
    FLD float ptr [ESP + 0x118]         ; 004223a5
    LEA EDI,[ESP + 0x80]                ; 004223ac
    LEA ESI,[ESP + 0x11c]               ; 004223b3
    FXCH ST2                            ; 004223ba
    FCHS                                ; 004223bc
    FXCH                                ; 004223be
    FCHS                                ; 004223c0
    FXCH ST2                            ; 004223c2
    FCHS                                ; 004223c4
    FXCH                                ; 004223c6
    FSTP float ptr [ESP + 0x11c]        ; 004223c8
    FXCH                                ; 004223cf
    FSTP float ptr [ESP + 0x120]        ; 004223d1
    FSTP float ptr [ESP + 0x124]        ; 004223d8
    MOVSD ES:EDI,ESI                    ; 004223df
    MOVSD ES:EDI,ESI                    ; 004223e0
    MOVSD ES:EDI,ESI                    ; 004223e1
    PUSH EBX                            ; 004223e2
    LEA ESI,[ESP + 0xf0]                ; 004223e3
    LEA EDI,[ESP + 0xb4]                ; 004223ea
    CALL core_actor.cpp_FUN_00408ac0    ; 004223f1
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xf0]                ; 004223f6
    ADD ESP,0x8                         ; 004223fd
    LEA EAX,[EBX + 0x394]               ; 00422400
    MOVSD ES:EDI,ESI                    ; 00422406
    MOVSD ES:EDI,ESI                    ; 00422407
    MOVSD ES:EDI,ESI                    ; 00422408
    FLD float ptr [EAX]                 ; 00422409
    FLD float ptr [EAX + 0x4]           ; 0042240b
    FLD float ptr [EAX + 0x8]           ; 0042240e
    LEA EDI,[ESP + 0xd0]                ; 00422411
    LEA ESI,[ESP + 0xc4]                ; 00422418
    FXCH ST2                            ; 0042241f
    FADD float ptr [ESP + 0xac]         ; 00422421
    FXCH                                ; 00422428
    FADD float ptr [ESP + 0xb0]         ; 0042242a
    FXCH ST2                            ; 00422431
    FADD float ptr [ESP + 0xb4]         ; 00422433
    FXCH                                ; 0042243a
    FSTP float ptr [ESP + 0xc4]         ; 0042243c
    FXCH                                ; 00422443
    FSTP float ptr [ESP + 0xc8]         ; 00422445
    FSTP float ptr [ESP + 0xcc]         ; 0042244c
    MOVSD ES:EDI,ESI                    ; 00422453
    MOVSD ES:EDI,ESI                    ; 00422454
    MOVSD ES:EDI,ESI                    ; 00422455
    LEA ESI,[EBX + 0x20]                ; 00422456
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00422459
    MOV dword ptr [ESI],EAX             ; 00422460
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00422462
    MOV dword ptr [ESI + 0x4],EAX       ; 00422469
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0042246c
    MOV dword ptr [ESI + 0x8],EAX       ; 00422473
    LEA EAX,[EBX + 0x3d4]               ; 00422476
    FLD float ptr [EAX + 0x4]           ; 0042247c
    FMUL ST0                            ; 0042247f
    FLD float ptr [EAX]                 ; 00422481
    FMUL ST0                            ; 00422483
    FADDP                               ; 00422485
    FLD float ptr [EAX + 0x8]           ; 00422487
    FMUL ST0                            ; 0042248a
    FADDP                               ; 0042248c
    FSQRT                               ; 0042248e
    FST float ptr [ESP]                 ; 00422490
    FCOMP double ptr [0x005d4c10]       ; 00422493 | DAT_005d4c10
    FNSTSW AX                           ; 00422499
    SAHF                                ; 0042249b
    JBE 0x00422227                      ; 0042249c
        ;   XREF to: 00422227 (CONDITIONAL_JUMP)  ; LAB_00422227
    LEA EAX,[ESP + 0x4]                 ; 004224a2
    PUSH EAX                            ; 004224a6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004224a7
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004224ac
    LEA EAX,[ESP + 0x4]                 ; 004224af
    FLD float ptr [ESP]                 ; 004224b3
    FMUL float ptr [EBX + 0x390]        ; 004224b6
    PUSH EAX                            ; 004224bc
    FMUL float ptr [0x005d4c18]         ; 004224bd | DAT_005d4c18
    PUSH ESI                            ; 004224c3
    LEA EAX,[ESP + 0x9c]                ; 004224c4
    MOV dword ptr [ESP + 0x40],EBX      ; 004224cb
    PUSH EAX                            ; 004224cf
    MOV EAX,[0x00622c18]                ; 004224d0 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x48],EBX      ; 004224d5
    PUSH EAX                            ; 004224d9
    FSTP float ptr [ESP + 0x18]         ; 004224da
    CALL core_setcolid.cpp_FUN_00559350 ; 004224de
        ;   XREF to: 00559350 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00559350()
    ADD ESP,0x10                        ; 004224e3
    MOV ESP,EBP                         ; 004224e6
    POP EBP                             ; 004224e8
    POP EDI                             ; 004224e9
    POP ESI                             ; 004224ea
    POP EBX                             ; 004224eb
    RET                                 ; 004224ec

