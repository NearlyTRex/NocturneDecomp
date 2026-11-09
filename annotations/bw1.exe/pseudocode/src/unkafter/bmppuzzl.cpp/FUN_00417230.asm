; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bmppuzzl_cpp_FUN_00417230(void *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005d4002
;   undefined4 DAT_005d4005
;   undefined4 DAT_005d4008
;   undefined4 DAT_005d400b
;   undefined4 DAT_005d400e
;   undefined1 DAT_005d4011
;   undefined1 DAT_005d4012
;   undefined1 DAT_005d4013
;   TerminatedCString s_s_1_wav_005d4014
;   undefined1 DAT_005d401d
;   undefined1 DAT_005d401e
;   undefined1 DAT_005d401f
;   TerminatedCString s_s_1_wav_005d4020
;   undefined4 DAT_005d4029
;   TerminatedCString s_AR_d_005d402c
;   ... and 7 more
;
; Called Functions:
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417230
        ;   Label: unkafter_bmppuzzl.cpp_FUN_00417230
    PUSH ESI                            ; 00417231
    PUSH EDI                            ; 00417232
    PUSH EBP                            ; 00417233
    MOV EBP,ESP                         ; 00417234
    SUB ESP,0x640                       ; 00417236
    AND ESP,0xfffffff8                  ; 0041723c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041723f
    MOV EDX,dword ptr [EBP + 0x20]      ; 00417242
    PUSH EDX                            ; 00417245
    PUSH 0x5d4002                       ; 00417246 | DAT_005d4002
    LEA EAX,[ESP + 0x624]               ; 0041724b
    PUSH EAX                            ; 00417252
    CALL crt_unknown.c_FUN_005bfb40     ; 00417253
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00417258
    MOV ECX,dword ptr [EBP + 0x24]      ; 0041725b
    PUSH ECX                            ; 0041725e
    PUSH 0x5d4005                       ; 0041725f | DAT_005d4005
    LEA EAX,[ESP + 0x618]               ; 00417264
    PUSH EAX                            ; 0041726b
    CALL crt_unknown.c_FUN_005bfb40     ; 0041726c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00417271
    MOV ESI,dword ptr [EBP + 0x28]      ; 00417274
    PUSH ESI                            ; 00417277
    PUSH 0x5d4008                       ; 00417278 | DAT_005d4008
    LEA EAX,[ESP + 0x60c]               ; 0041727d
    PUSH EAX                            ; 00417284
    CALL crt_unknown.c_FUN_005bfb40     ; 00417285
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0041728a
    MOV EDI,dword ptr [EBX + 0xc20]     ; 0041728d
    MOV EAX,dword ptr [EBP + 0x18]      ; 00417293
    SUB EAX,EDI                         ; 00417296
    MOV dword ptr [ESP + 0x63c],EAX     ; 00417298
    FILD dword ptr [ESP + 0x63c]        ; 0041729f
    FABS                                ; 004172a6
    MOV EDX,dword ptr [EBX + 0xc24]     ; 004172a8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004172ae
    SUB EAX,EDX                         ; 004172b1
    MOV dword ptr [ESP + 0x63c],EAX     ; 004172b3
    FILD dword ptr [ESP + 0x63c]        ; 004172ba
    FABS                                ; 004172c1
    FXCH                                ; 004172c3
    FST float ptr [ESP + 0x638]         ; 004172c5
    FMUL float ptr [0x005d403a]         ; 004172cc | DAT_005d403a
    FXCH                                ; 004172d2
    FSTP float ptr [ESP + 0x634]        ; 004172d4
    SUB ESP,0x8                         ; 004172db
    FSTP double ptr [ESP]               ; 004172de
    PUSH 0x5d400b                       ; 004172e1 | DAT_005d400b
    LEA EAX,[ESP + 0x10]                ; 004172e6
    PUSH EAX                            ; 004172ea
    CALL crt_unknown.c_FUN_005bfb40     ; 004172eb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004172f0
    FLD float ptr [ESP + 0x634]         ; 004172f3
    FMUL float ptr [0x005d403a]         ; 004172fa | DAT_005d403a
    SUB ESP,0x8                         ; 00417300
    FSTP double ptr [ESP]               ; 00417303
    PUSH 0x5d400e                       ; 00417306 | DAT_005d400e
    LEA EAX,[ESP + 0x210]               ; 0041730b
    PUSH EAX                            ; 00417312
    CALL crt_unknown.c_FUN_005bfb40     ; 00417313
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 00417318
    MOV ESI,0x5d4011                    ; 0041731b | DAT_005d4011
    LEA EDI,[ESP + 0x404]               ; 00417320
    PUSH EDI                            ; 00417327
    MOV AL,byte ptr [ESI]               ; 00417328 | DAT_005d4011 | DAT_005d4013
        ;   Label: LAB_00417328
    MOV byte ptr [EDI],AL               ; 0041732a
    CMP AL,0x0                          ; 0041732c
    JZ 0x00417340                       ; 0041732e
        ;   XREF to: 00417340 (CONDITIONAL_JUMP)  ; LAB_00417340
    MOV AL,byte ptr [ESI + 0x1]         ; 00417330 | DAT_005d4012 | = "1.wav @ "
    ADD ESI,0x2                         ; 00417333
    MOV byte ptr [EDI + 0x1],AL         ; 00417336
    ADD EDI,0x2                         ; 00417339
    CMP AL,0x0                          ; 0041733c
    JNZ 0x00417328                      ; 0041733e
        ;   XREF to: 00417328 (CONDITIONAL_JUMP)  ; LAB_00417328
    POP EDI                             ; 00417340
        ;   Label: LAB_00417340
    LEA ESI,[ESP + 0x4]                 ; 00417341
    LEA EDI,[ESP + 0x404]               ; 00417345
    PUSH EDI                            ; 0041734c
    SUB ECX,ECX                         ; 0041734d
    DEC ECX                             ; 0041734f
    MOV AL,0x0                          ; 00417350
    SCASB.REPNE ES:EDI                  ; 00417352
    DEC EDI                             ; 00417354
    MOV AL,byte ptr [ESI]               ; 00417355
        ;   Label: LAB_00417355
    MOV byte ptr [EDI],AL               ; 00417357
    CMP AL,0x0                          ; 00417359
    JZ 0x0041736d                       ; 0041735b
        ;   XREF to: 0041736d (CONDITIONAL_JUMP)  ; LAB_0041736d
    MOV AL,byte ptr [ESI + 0x1]         ; 0041735d
    ADD ESI,0x2                         ; 00417360
    MOV byte ptr [EDI + 0x1],AL         ; 00417363
    ADD EDI,0x2                         ; 00417366
    CMP AL,0x0                          ; 00417369
    JNZ 0x00417355                      ; 0041736b
        ;   XREF to: 00417355 (CONDITIONAL_JUMP)  ; LAB_00417355
    POP EDI                             ; 0041736d
        ;   Label: LAB_0041736d
    MOV ESI,0x5d401d                    ; 0041736e | DAT_005d401d
    LEA EDI,[ESP + 0x504]               ; 00417373
    PUSH EDI                            ; 0041737a
    MOV AL,byte ptr [ESI]               ; 0041737b | DAT_005d401d | DAT_005d401f
        ;   Label: LAB_0041737b
    MOV byte ptr [EDI],AL               ; 0041737d
    CMP AL,0x0                          ; 0041737f
    JZ 0x00417393                       ; 00417381
        ;   XREF to: 00417393 (CONDITIONAL_JUMP)  ; LAB_00417393
    MOV AL,byte ptr [ESI + 0x1]         ; 00417383 | DAT_005d401e | = "1.wav @ "
    ADD ESI,0x2                         ; 00417386
    MOV byte ptr [EDI + 0x1],AL         ; 00417389
    ADD EDI,0x2                         ; 0041738c
    CMP AL,0x0                          ; 0041738f
    JNZ 0x0041737b                      ; 00417391
        ;   XREF to: 0041737b (CONDITIONAL_JUMP)  ; LAB_0041737b
    POP EDI                             ; 00417393
        ;   Label: LAB_00417393
    LEA ESI,[ESP + 0x204]               ; 00417394
    LEA EDI,[ESP + 0x504]               ; 0041739b
    PUSH EDI                            ; 004173a2
    SUB ECX,ECX                         ; 004173a3
    DEC ECX                             ; 004173a5
    MOV AL,0x0                          ; 004173a6
    SCASB.REPNE ES:EDI                  ; 004173a8
    DEC EDI                             ; 004173aa
    MOV AL,byte ptr [ESI]               ; 004173ab
        ;   Label: LAB_004173ab
    MOV byte ptr [EDI],AL               ; 004173ad
    CMP AL,0x0                          ; 004173af
    JZ 0x004173c3                       ; 004173b1
        ;   XREF to: 004173c3 (CONDITIONAL_JUMP)  ; LAB_004173c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004173b3
    ADD ESI,0x2                         ; 004173b6
    MOV byte ptr [EDI + 0x1],AL         ; 004173b9
    ADD EDI,0x2                         ; 004173bc
    CMP AL,0x0                          ; 004173bf
    JNZ 0x004173ab                      ; 004173c1
        ;   XREF to: 004173ab (CONDITIONAL_JUMP)  ; LAB_004173ab
    POP EDI                             ; 004173c3
        ;   Label: LAB_004173c3
    FLD float ptr [0x005d403e]          ; 004173c4 | DAT_005d403e
    FLD float ptr [ESP + 0x638]         ; 004173ca
    FMUL ST1                            ; 004173d1
    FLD float ptr [ESP + 0x634]         ; 004173d3
    FMULP ST2                           ; 004173da
    FLD1                                ; 004173dc
    FADDP ST2,ST0                       ; 004173de
    FADDP                               ; 004173e0
    FLD1                                ; 004173e2
    FDIVRP                              ; 004173e4
    FSTP float ptr [ESP]                ; 004173e6
    FLD float ptr [ESP]                 ; 004173e9
    SUB ESP,0x8                         ; 004173ec
    FSTP double ptr [ESP]               ; 004173ef
    PUSH 0x5d4029                       ; 004173f2 | DAT_005d4029
    LEA EAX,[ESP + 0x110]               ; 004173f7
    PUSH EAX                            ; 004173fe
    CALL crt_unknown.c_FUN_005bfb40     ; 004173ff
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 00417404
    MOV ECX,dword ptr [EBX + 0xc10]     ; 00417407
    PUSH ECX                            ; 0041740d
    PUSH 0x5d402c                       ; 0041740e | = "AR%d_"
    LEA EAX,[ESP + 0x630]               ; 00417413
    PUSH EAX                            ; 0041741a
    CALL crt_unknown.c_FUN_005bfb40     ; 0041741b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00417420
    LEA ESI,[ESP + 0x628]               ; 00417423
    LEA EDI,[ESP + 0x304]               ; 0041742a
    PUSH EDI                            ; 00417431
    MOV AL,byte ptr [ESI]               ; 00417432
        ;   Label: LAB_00417432
    MOV byte ptr [EDI],AL               ; 00417434
    CMP AL,0x0                          ; 00417436
    JZ 0x0041744a                       ; 00417438
        ;   XREF to: 0041744a (CONDITIONAL_JUMP)  ; LAB_0041744a
    MOV AL,byte ptr [ESI + 0x1]         ; 0041743a
    ADD ESI,0x2                         ; 0041743d
    MOV byte ptr [EDI + 0x1],AL         ; 00417440
    ADD EDI,0x2                         ; 00417443
    CMP AL,0x0                          ; 00417446
    JNZ 0x00417432                      ; 00417448
        ;   XREF to: 00417432 (CONDITIONAL_JUMP)  ; LAB_00417432
    POP EDI                             ; 0041744a
        ;   Label: LAB_0041744a
    LEA ESI,[ESP + 0x61c]               ; 0041744b
    LEA EDI,[ESP + 0x304]               ; 00417452
    PUSH EDI                            ; 00417459
    SUB ECX,ECX                         ; 0041745a
    DEC ECX                             ; 0041745c
    MOV AL,0x0                          ; 0041745d
    SCASB.REPNE ES:EDI                  ; 0041745f
    DEC EDI                             ; 00417461
    MOV AL,byte ptr [ESI]               ; 00417462
        ;   Label: LAB_00417462
    MOV byte ptr [EDI],AL               ; 00417464
    CMP AL,0x0                          ; 00417466
    JZ 0x0041747a                       ; 00417468
        ;   XREF to: 0041747a (CONDITIONAL_JUMP)  ; LAB_0041747a
    MOV AL,byte ptr [ESI + 0x1]         ; 0041746a
    ADD ESI,0x2                         ; 0041746d
    MOV byte ptr [EDI + 0x1],AL         ; 00417470
    ADD EDI,0x2                         ; 00417473
    CMP AL,0x0                          ; 00417476
    JNZ 0x00417462                      ; 00417478
        ;   XREF to: 00417462 (CONDITIONAL_JUMP)  ; LAB_00417462
    POP EDI                             ; 0041747a
        ;   Label: LAB_0041747a
    LEA ESI,[ESP + 0x610]               ; 0041747b
    LEA EDI,[ESP + 0x304]               ; 00417482
    PUSH EDI                            ; 00417489
    SUB ECX,ECX                         ; 0041748a
    DEC ECX                             ; 0041748c
    MOV AL,0x0                          ; 0041748d
    SCASB.REPNE ES:EDI                  ; 0041748f
    DEC EDI                             ; 00417491
    MOV AL,byte ptr [ESI]               ; 00417492
        ;   Label: LAB_00417492
    MOV byte ptr [EDI],AL               ; 00417494
    CMP AL,0x0                          ; 00417496
    JZ 0x004174aa                       ; 00417498
        ;   XREF to: 004174aa (CONDITIONAL_JUMP)  ; LAB_004174aa
    MOV AL,byte ptr [ESI + 0x1]         ; 0041749a
    ADD ESI,0x2                         ; 0041749d
    MOV byte ptr [EDI + 0x1],AL         ; 004174a0
    ADD EDI,0x2                         ; 004174a3
    CMP AL,0x0                          ; 004174a6
    JNZ 0x00417492                      ; 004174a8
        ;   XREF to: 00417492 (CONDITIONAL_JUMP)  ; LAB_00417492
    POP EDI                             ; 004174aa
        ;   Label: LAB_004174aa
    LEA ESI,[ESP + 0x604]               ; 004174ab
    LEA EDI,[ESP + 0x304]               ; 004174b2
    PUSH EDI                            ; 004174b9
    SUB ECX,ECX                         ; 004174ba
    DEC ECX                             ; 004174bc
    MOV AL,0x0                          ; 004174bd
    SCASB.REPNE ES:EDI                  ; 004174bf
    DEC EDI                             ; 004174c1
    MOV AL,byte ptr [ESI]               ; 004174c2
        ;   Label: LAB_004174c2
    MOV byte ptr [EDI],AL               ; 004174c4
    CMP AL,0x0                          ; 004174c6
    JZ 0x004174da                       ; 004174c8
        ;   XREF to: 004174da (CONDITIONAL_JUMP)  ; LAB_004174da
    MOV AL,byte ptr [ESI + 0x1]         ; 004174ca
    ADD ESI,0x2                         ; 004174cd
    MOV byte ptr [EDI + 0x1],AL         ; 004174d0
    ADD EDI,0x2                         ; 004174d3
    CMP AL,0x0                          ; 004174d6
    JNZ 0x004174c2                      ; 004174d8
        ;   XREF to: 004174c2 (CONDITIONAL_JUMP)  ; LAB_004174c2
    POP EDI                             ; 004174da
        ;   Label: LAB_004174da
    MOV ESI,0x5d4032                    ; 004174db | DAT_005d4032
    LEA EDI,[ESP + 0x304]               ; 004174e0
    PUSH EDI                            ; 004174e7
    SUB ECX,ECX                         ; 004174e8
    DEC ECX                             ; 004174ea
    MOV AL,0x0                          ; 004174eb
    SCASB.REPNE ES:EDI                  ; 004174ed
    DEC EDI                             ; 004174ef
    MOV AL,byte ptr [ESI]               ; 004174f0 | DAT_005d4032 | DAT_005d4034
        ;   Label: LAB_004174f0
    MOV byte ptr [EDI],AL               ; 004174f2
    CMP AL,0x0                          ; 004174f4
    JZ 0x00417508                       ; 004174f6
        ;   XREF to: 00417508 (CONDITIONAL_JUMP)  ; LAB_00417508
    MOV AL,byte ptr [ESI + 0x1]         ; 004174f8 | DAT_005d4033 | DAT_005d4035
    ADD ESI,0x2                         ; 004174fb
    MOV byte ptr [EDI + 0x1],AL         ; 004174fe
    ADD EDI,0x2                         ; 00417501
    CMP AL,0x0                          ; 00417504
    JNZ 0x004174f0                      ; 00417506
        ;   XREF to: 004174f0 (CONDITIONAL_JUMP)  ; LAB_004174f0
    POP EDI                             ; 00417508
        ;   Label: LAB_00417508
    LEA ESI,[ESP + 0x104]               ; 00417509
    LEA EDI,[ESP + 0x304]               ; 00417510
    PUSH EDI                            ; 00417517
    SUB ECX,ECX                         ; 00417518
    DEC ECX                             ; 0041751a
    MOV AL,0x0                          ; 0041751b
    SCASB.REPNE ES:EDI                  ; 0041751d
    DEC EDI                             ; 0041751f
    MOV AL,byte ptr [ESI]               ; 00417520
        ;   Label: LAB_00417520
    MOV byte ptr [EDI],AL               ; 00417522
    CMP AL,0x0                          ; 00417524
    JZ 0x00417538                       ; 00417526
        ;   XREF to: 00417538 (CONDITIONAL_JUMP)  ; LAB_00417538
    MOV AL,byte ptr [ESI + 0x1]         ; 00417528
    ADD ESI,0x2                         ; 0041752b
    MOV byte ptr [EDI + 0x1],AL         ; 0041752e
    ADD EDI,0x2                         ; 00417531
    CMP AL,0x0                          ; 00417534
    JNZ 0x00417520                      ; 00417536
        ;   XREF to: 00417520 (CONDITIONAL_JUMP)  ; LAB_00417520
    POP EDI                             ; 00417538
        ;   Label: LAB_00417538
    LEA EAX,[ESP + 0x404]               ; 00417539
    PUSH EAX                            ; 00417540
    PUSH EBX                            ; 00417541
    MOV ESI,dword ptr [0x006236b8]      ; 00417542 | DAT_006236b8
    PUSH ESI                            ; 00417548
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 00417549
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0041754e
    MOV dword ptr [EBX + 0xc18],EAX     ; 00417551
    LEA EAX,[ESP + 0x504]               ; 00417557
    PUSH EAX                            ; 0041755e
    PUSH EBX                            ; 0041755f
    MOV EDI,dword ptr [0x006236b8]      ; 00417560 | DAT_006236b8
    PUSH EDI                            ; 00417566
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 00417567
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0041756c
    MOV dword ptr [EBX + 0xc1c],EAX     ; 0041756f
    LEA EAX,[ESP + 0x304]               ; 00417575
    PUSH EAX                            ; 0041757c
    PUSH EBX                            ; 0041757d
    MOV EAX,[0x006236b8]                ; 0041757e | DAT_006236b8
    PUSH EAX                            ; 00417583
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 00417584
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 00417589
    MOV dword ptr [EBX + 0xc14],EAX     ; 0041758c
    MOV ESP,EBP                         ; 00417592
    POP EBP                             ; 00417594
    POP EDI                             ; 00417595
    POP ESI                             ; 00417596
    POP EBX                             ; 00417597
    RET                                 ; 00417598

