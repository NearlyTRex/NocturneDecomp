; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(undefined4 param_1,int param_2,byte param_3)
;
; Local Variables:
; undefined4       Stack[-0xcd0]:4  local_cd0
; undefined4       Stack[-0xccc]:4  local_ccc
; undefined4       Stack[-0xcc8]:4  local_cc8
; undefined4       Stack[-0xcb8]:4  local_cb8
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   string s_DirectSux:_Unable_to_%s._(%s)_005940b7
;   string s_..\\sound\\snddx.cpp_00594488
;   string s_DirectSoundDevice::setSfxPos_-_i_0059449b
;   string s_Set_hardware_sfx_3d_buffer_posit_005944c9
;   string s_Set_hardware_sfx_3d_buffer_veloc_005944ed
;   string s_Set_hardware_sfx_secondary_buffe_00594511
;   string s_Set_hardware_sfx_secondary_buffe_0059453a
;   string s_Set_hardware_sfx_3d_buffer_mode_00594566
;   string s_Set_hardware_sfx_3d_buffer_minim_00594586
;   string s_Set_hardware_sfx_3d_buffer_maxim_005945b2
;   string s_..\\sound\\snddx.cpp_005945de
;   string s_DirectSoundDevice::setSfxOpt_-_n_005945f1
;   string s_Commit_hardware_sfx_3d_buffer_se_0059462b
;   string s_DirectSoundDevice::setSfxOpt_-_f_00594652
;   undefined4 DAT_0059467f
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_004c8440
;   FUN_00529980
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b270
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270
    PUSH ESI                            ; 0052b271
    PUSH EDI                            ; 0052b272
    PUSH EBP                            ; 0052b273
    MOV EBP,ESP                         ; 0052b274
    SUB ESP,0xcac                       ; 0052b276
    AND ESP,0xfffffff8                  ; 0052b27c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052b27f
    MOV ESI,dword ptr [EBX + 0x6c]      ; 0052b282
    TEST ESI,ESI                        ; 0052b285
    JLE 0x0052b292                      ; 0052b287
        ;   XREF to: 0052b292 (CONDITIONAL_JUMP)  ; LAB_0052b292
    CMP ESI,0x1f                        ; 0052b289
    JL 0x0052b4fa                       ; 0052b28c
        ;   XREF to: 0052b4fa (CONDITIONAL_JUMP)  ; LAB_0052b4fa
    MOV EDI,0x594488                    ; 0052b292 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0052b292
    MOV EAX,0x2f3                       ; 0052b297
    PUSH 0x59449b                       ; 0052b29c | = "DirectSoundDevice::setSfxPos - invali..."
    MOV dword ptr [0x01cc4800],EDI      ; 0052b2a1 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0052b2a7 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052b2ac
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052b2b1
    MOV EDI,0x1                         ; 0052b2b4
        ;   Label: LAB_0052b2b4
    XOR EDX,EDX                         ; 0052b2b9
    MOV EAX,dword ptr [ESI*0x4 + 0x2dc92a8] ; 0052b2bb
    MOV dword ptr [ESP + 0xc9c],EDX     ; 0052b2c2
    MOV dword ptr [ESP + 0xca0],EAX     ; 0052b2c9
    MOV ESI,dword ptr [ESI*0x4 + 0x2dc9324] ; 0052b2d0
    TEST EAX,EAX                        ; 0052b2d7
    JZ 0x0052b520                       ; 0052b2d9
        ;   XREF to: 0052b520 (CONDITIONAL_JUMP)  ; LAB_0052b520
    TEST ESI,ESI                        ; 0052b2df
    JZ 0x0052b520                       ; 0052b2e1
        ;   XREF to: 0052b520 (CONDITIONAL_JUMP)  ; LAB_0052b520
    TEST byte ptr [EBP + 0x1c],0x88     ; 0052b2e7
    JZ 0x0052b330                       ; 0052b2eb
        ;   XREF to: 0052b330 (CONDITIONAL_JUMP)  ; LAB_0052b330
    MOV EAX,dword ptr [EBX + 0xfc]      ; 0052b2ed
    MOV dword ptr [ESP + 0xc94],EAX     ; 0052b2f3
    MOV EAX,dword ptr [EBX + 0x104]     ; 0052b2fa
    MOV dword ptr [ESP + 0xc98],EAX     ; 0052b300
    MOV EAX,dword ptr [EBX]             ; 0052b307
    PUSH EAX                            ; 0052b309
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 0052b30a
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0xcac],EAX     ; 0052b30f
    FLD float ptr [ESP + 0xcac]         ; 0052b316
    ADD ESP,0x4                         ; 0052b31d
    MOV DL,byte ptr [EBX + 0x5c]        ; 0052b320
    FSTP float ptr [ESP + 0x8]          ; 0052b323
    TEST DL,0x1                         ; 0052b327
    JZ 0x0052b52b                       ; 0052b32a
        ;   XREF to: 0052b52b (CONDITIONAL_JUMP)  ; LAB_0052b52b
    TEST byte ptr [EBP + 0x1c],0x2      ; 0052b330
        ;   Label: LAB_0052b330
    JZ 0x0052b36c                       ; 0052b334
        ;   XREF to: 0052b36c (CONDITIONAL_JUMP)  ; LAB_0052b36c
    PUSH 0x1                            ; 0052b336
    FLD double ptr [EBX + 0x14]         ; 0052b338
    SUB ESP,0x4                         ; 0052b33b
    MOV EAX,dword ptr [ESI]             ; 0052b33e
    FSTP float ptr [ESP]                ; 0052b340
    SUB ESP,0x4                         ; 0052b343
    FLD double ptr [EBX + 0xc]          ; 0052b346
    FSTP float ptr [ESP]                ; 0052b349
    SUB ESP,0x4                         ; 0052b34c
    FLD double ptr [EBX + 0x4]          ; 0052b34f
    FSTP float ptr [ESP]                ; 0052b352
    PUSH ESI                            ; 0052b355
    CALL dword ptr [EAX + 0x4c]         ; 0052b356
    TEST EAX,EAX                        ; 0052b359
    JNZ 0x0052b571                      ; 0052b35b
        ;   XREF to: 0052b571 (CONDITIONAL_JUMP)  ; LAB_0052b571
    MOV dword ptr [ESP + 0xc9c],0x1     ; 0052b361
        ;   Label: LAB_0052b361
    TEST byte ptr [EBP + 0x1c],0x4      ; 0052b36c
        ;   Label: LAB_0052b36c
    JZ 0x0052b3a8                       ; 0052b370
        ;   XREF to: 0052b3a8 (CONDITIONAL_JUMP)  ; LAB_0052b3a8
    PUSH 0x1                            ; 0052b372
    FLD double ptr [EBX + 0x34]         ; 0052b374
    SUB ESP,0x4                         ; 0052b377
    MOV EAX,dword ptr [ESI]             ; 0052b37a
    FSTP float ptr [ESP]                ; 0052b37c
    SUB ESP,0x4                         ; 0052b37f
    FLD double ptr [EBX + 0x2c]         ; 0052b382
    FSTP float ptr [ESP]                ; 0052b385
    SUB ESP,0x4                         ; 0052b388
    FLD double ptr [EBX + 0x24]         ; 0052b38b
    FSTP float ptr [ESP]                ; 0052b38e
    PUSH ESI                            ; 0052b391
    CALL dword ptr [EAX + 0x50]         ; 0052b392
    TEST EAX,EAX                        ; 0052b395
    JNZ 0x0052b5ac                      ; 0052b397
        ;   XREF to: 0052b5ac (CONDITIONAL_JUMP)  ; LAB_0052b5ac
    MOV dword ptr [ESP + 0xc9c],0x1     ; 0052b39d
        ;   Label: LAB_0052b39d
    TEST byte ptr [EBP + 0x1c],0x8      ; 0052b3a8
        ;   Label: LAB_0052b3a8
    JZ 0x0052b3f7                       ; 0052b3ac
        ;   XREF to: 0052b3f7 (CONDITIONAL_JUMP)  ; LAB_0052b3f7
    FLD float ptr [EBX + 0x44]          ; 0052b3ae
    FMUL float ptr [ESP + 0x8]          ; 0052b3b1
    FLDZ                                ; 0052b3b5
    FXCH                                ; 0052b3b7
    FSTP double ptr [ESP]               ; 0052b3b9
    FCOMP double ptr [ESP]              ; 0052b3bc
    FNSTSW AX                           ; 0052b3bf
    SAHF                                ; 0052b3c1
    JC 0x0052b5e7                       ; 0052b3c2
        ;   XREF to: 0052b5e7 (CONDITIONAL_JUMP)  ; LAB_0052b5e7
    MOV dword ptr [ESP + 0xca4],0xffffd8f0 ; 0052b3c8
        ;   Label: LAB_0052b3c8
    MOV EDX,dword ptr [ESP + 0xca4]     ; 0052b3d3
        ;   Label: LAB_0052b3d3
    MOV EAX,dword ptr [ESP + 0xca0]     ; 0052b3da
    PUSH EDX                            ; 0052b3e1
    MOV ECX,dword ptr [ESP + 0xca4]     ; 0052b3e2
    MOV EAX,dword ptr [EAX]             ; 0052b3e9
    PUSH ECX                            ; 0052b3eb
    CALL dword ptr [EAX + 0x3c]         ; 0052b3ec
    TEST EAX,EAX                        ; 0052b3ef
    JNZ 0x0052b666                      ; 0052b3f1
        ;   XREF to: 0052b666 (CONDITIONAL_JUMP)  ; LAB_0052b666
    TEST byte ptr [EBP + 0x1c],0x10     ; 0052b3f7
        ;   Label: LAB_0052b3f7
    JZ 0x0052b439                       ; 0052b3fb
        ;   XREF to: 0052b439 (CONDITIONAL_JUMP)  ; LAB_0052b439
    MOV EDX,dword ptr [EBX + 0x74]      ; 0052b3fd
    FILD dword ptr [EDX + 0x10c]        ; 0052b400
    FMUL float ptr [EBX + 0x48]         ; 0052b406
    CALL crt_math.c_round_FUN_00563a30  ; 0052b409
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [ESP + 0xc8c]       ; 0052b40e
    MOV EDX,dword ptr [ESP + 0xc8c]     ; 0052b415
    MOV EAX,dword ptr [ESP + 0xca0]     ; 0052b41c
    PUSH EDX                            ; 0052b423
    MOV EDX,dword ptr [ESP + 0xca4]     ; 0052b424
    MOV EAX,dword ptr [EAX]             ; 0052b42b
    PUSH EDX                            ; 0052b42d
    CALL dword ptr [EAX + 0x44]         ; 0052b42e
    TEST EAX,EAX                        ; 0052b431
    JNZ 0x0052b6a1                      ; 0052b433
        ;   XREF to: 0052b6a1 (CONDITIONAL_JUMP)  ; LAB_0052b6a1
    TEST byte ptr [EBP + 0x1c],0x40     ; 0052b439
        ;   Label: LAB_0052b439
    JZ 0x0052b46a                       ; 0052b43d
        ;   XREF to: 0052b46a (CONDITIONAL_JUMP)  ; LAB_0052b46a
    MOV DL,byte ptr [EBX + 0x5c]        ; 0052b43f
    XOR EAX,EAX                         ; 0052b442
    TEST DL,0x1                         ; 0052b444
    JZ 0x0052b44e                       ; 0052b447
        ;   XREF to: 0052b44e (CONDITIONAL_JUMP)  ; LAB_0052b44e
    MOV EAX,0x2                         ; 0052b449
    PUSH 0x1                            ; 0052b44e
        ;   Label: LAB_0052b44e
    PUSH EAX                            ; 0052b450
    MOV EDX,dword ptr [ESI]             ; 0052b451
    PUSH ESI                            ; 0052b453
    CALL dword ptr [EDX + 0x48]         ; 0052b454
    TEST EAX,EAX                        ; 0052b457
    JNZ 0x0052b6dc                      ; 0052b459
        ;   XREF to: 0052b6dc (CONDITIONAL_JUMP)  ; LAB_0052b6dc
    MOV dword ptr [ESP + 0xc9c],0x1     ; 0052b45f
        ;   Label: LAB_0052b45f
    TEST byte ptr [EBP + 0x1c],0x80     ; 0052b46a
        ;   Label: LAB_0052b46a
    JZ 0x0052b787                       ; 0052b46e
        ;   XREF to: 0052b787 (CONDITIONAL_JUMP)  ; LAB_0052b787
    PUSH 0x1                            ; 0052b474
    MOV EAX,dword ptr [ESI]             ; 0052b476
    PUSH dword ptr [ESP + 0xc98]        ; 0052b478
    PUSH ESI                            ; 0052b47f
    CALL dword ptr [EAX + 0x44]         ; 0052b480
    TEST EAX,EAX                        ; 0052b483
    JNZ 0x0052b717                      ; 0052b485
        ;   XREF to: 0052b717 (CONDITIONAL_JUMP)  ; LAB_0052b717
    PUSH 0x1                            ; 0052b48b
        ;   Label: LAB_0052b48b
    MOV EAX,dword ptr [ESI]             ; 0052b48d
    PUSH dword ptr [ESP + 0xc9c]        ; 0052b48f
    PUSH ESI                            ; 0052b496
    CALL dword ptr [EAX + 0x40]         ; 0052b497
    TEST EAX,EAX                        ; 0052b49a
    JNZ 0x0052b752                      ; 0052b49c
        ;   XREF to: 0052b752 (CONDITIONAL_JUMP)  ; LAB_0052b752
    CMP dword ptr [0x02dc9220],0x0      ; 0052b4a2 | DAT_02dc9220
        ;   Label: LAB_0052b4a2
    JNZ 0x0052b4cd                      ; 0052b4a9
        ;   XREF to: 0052b4cd (CONDITIONAL_JUMP)  ; LAB_0052b4cd
    MOV EAX,0x5945de                    ; 0052b4ab | = "..\\sound\\snddx.cpp"
    MOV EDX,0x37c                       ; 0052b4b0
    PUSH 0x5945f1                       ; 0052b4b5 | = "DirectSoundDevice::setSfxOpt - no 3d ..."
    MOV [0x01cc4800],EAX                ; 0052b4ba | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0052b4bf | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052b4c5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052b4ca
    MOV EAX,[0x02dc9220]                ; 0052b4cd | DAT_02dc9220
        ;   Label: LAB_0052b4cd
    PUSH EAX                            ; 0052b4d2
    MOV EBX,dword ptr [EAX]             ; 0052b4d3
    CALL dword ptr [EBX + 0x44]         ; 0052b4d5
    TEST EAX,EAX                        ; 0052b4d8
    JNZ 0x0052b79a                      ; 0052b4da
        ;   XREF to: 0052b79a (CONDITIONAL_JUMP)  ; LAB_0052b79a
    TEST EDI,EDI                        ; 0052b4e0
        ;   Label: LAB_0052b4e0
    JNZ 0x0052b4f1                      ; 0052b4e2
        ;   XREF to: 0052b4f1 (CONDITIONAL_JUMP)  ; LAB_0052b4f1
    PUSH 0x594652                       ; 0052b4e4 | = "DirectSoundDevice::setSfxOpt - failed\n"
        ;   Label: LAB_0052b4e4
    CALL FUN_00529980                   ; 0052b4e9
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b4ee
    MOV EAX,EDI                         ; 0052b4f1
        ;   Label: LAB_0052b4f1
    MOV ESP,EBP                         ; 0052b4f3
    POP EBP                             ; 0052b4f5
    POP EDI                             ; 0052b4f6
    POP ESI                             ; 0052b4f7
    POP EBX                             ; 0052b4f8
    RET                                 ; 0052b4f9
    LEA EAX,[ESI*0x4 + 0x0]             ; 0052b4fa
        ;   Label: LAB_0052b4fa
    CMP dword ptr [EAX + 0x2dc92a8],0x0 ; 0052b501
    JZ 0x0052b292                       ; 0052b508
        ;   XREF to: 0052b292 (CONDITIONAL_JUMP)  ; LAB_0052b292
    CMP dword ptr [EAX + 0x2dc9324],0x0 ; 0052b50e
    JZ 0x0052b292                       ; 0052b515
        ;   XREF to: 0052b292 (CONDITIONAL_JUMP)  ; LAB_0052b292
    JMP 0x0052b2b4                      ; 0052b51b
        ;   XREF to: 0052b2b4 (UNCONDITIONAL_JUMP)  ; LAB_0052b2b4
    XOR EDI,EDI                         ; 0052b520
        ;   Label: LAB_0052b520
    MOV EAX,EDI                         ; 0052b522
    MOV ESP,EBP                         ; 0052b524
    POP EBP                             ; 0052b526
    POP EDI                             ; 0052b527
    POP ESI                             ; 0052b528
    POP EBX                             ; 0052b529
    RET                                 ; 0052b52a
    FLD float ptr [ESP + 0x8]           ; 0052b52b
        ;   Label: LAB_0052b52b
    FLDZ                                ; 0052b52f
    FCOMPP                              ; 0052b531
    FNSTSW AX                           ; 0052b533
    SAHF                                ; 0052b535
    JNC 0x0052b330                      ; 0052b536
        ;   XREF to: 0052b330 (CONDITIONAL_JUMP)  ; LAB_0052b330
    FLD float ptr [ESP + 0x8]           ; 0052b53c
    FDIV ST0,ST0                        ; 0052b540
    FLD float ptr [ESP + 0xc94]         ; 0052b542
    FMUL float ptr [ESP + 0x8]          ; 0052b549
    FLD float ptr [ESP + 0xc98]         ; 0052b54d
    FMUL float ptr [ESP + 0x8]          ; 0052b554
    FXCH                                ; 0052b558
    FSTP float ptr [ESP + 0xc94]        ; 0052b55a
    FSTP float ptr [ESP + 0xc98]        ; 0052b561
    FSTP float ptr [ESP + 0x8]          ; 0052b568
    JMP 0x0052b330                      ; 0052b56c
        ;   XREF to: 0052b330 (UNCONDITIONAL_JUMP)  ; LAB_0052b330
    PUSH EAX                            ; 0052b571
        ;   Label: LAB_0052b571
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b572
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b577
    PUSH EAX                            ; 0052b57a
    PUSH 0x5944c9                       ; 0052b57b | = "Set hardware sfx 3d buffer position"
    PUSH 0x5940b7                       ; 0052b580 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4c8]               ; 0052b585
    PUSH EAX                            ; 0052b58c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b58d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b592
    LEA EAX,[ESP + 0x4bc]               ; 0052b595
    PUSH EAX                            ; 0052b59c
    XOR EDI,EDI                         ; 0052b59d
    CALL FUN_00529980                   ; 0052b59f
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b5a4
    JMP 0x0052b361                      ; 0052b5a7
        ;   XREF to: 0052b361 (UNCONDITIONAL_JUMP)  ; LAB_0052b361
    PUSH EAX                            ; 0052b5ac
        ;   Label: LAB_0052b5ac
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b5ad
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b5b2
    PUSH EAX                            ; 0052b5b5
    PUSH 0x5944ed                       ; 0052b5b6 | = "Set hardware sfx 3d buffer velocity"
    PUSH 0x5940b7                       ; 0052b5bb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x338]               ; 0052b5c0
    PUSH EAX                            ; 0052b5c7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b5c8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b5cd
    LEA EAX,[ESP + 0x32c]               ; 0052b5d0
    PUSH EAX                            ; 0052b5d7
    XOR EDI,EDI                         ; 0052b5d8
    CALL FUN_00529980                   ; 0052b5da
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b5df
    JMP 0x0052b39d                      ; 0052b5e2
        ;   XREF to: 0052b39d (UNCONDITIONAL_JUMP)  ; LAB_0052b39d
    FLD1                                ; 0052b5e7
        ;   Label: LAB_0052b5e7
    FCOMP double ptr [ESP]              ; 0052b5e9
    FNSTSW AX                           ; 0052b5ec
    SAHF                                ; 0052b5ee
    JA 0x0052b5ff                       ; 0052b5ef
        ;   XREF to: 0052b5ff (CONDITIONAL_JUMP)  ; LAB_0052b5ff
    XOR EDX,EDX                         ; 0052b5f1
    MOV dword ptr [ESP + 0xca4],EDX     ; 0052b5f3
    JMP 0x0052b3d3                      ; 0052b5fa
        ;   XREF to: 0052b3d3 (UNCONDITIONAL_JUMP)  ; LAB_0052b3d3
    FLD double ptr [ESP]                ; 0052b5ff
        ;   Label: LAB_0052b5ff
    FLDLN2                              ; 0052b602
    FXCH                                ; 0052b604
    FYL2X                               ; 0052b606
    FMUL double ptr [0x0059467f]        ; 0052b608 | DAT_0059467f
    SUB ESP,0x8                         ; 0052b60e
    FSTP double ptr [ESP]               ; 0052b611
    CALL crt_math.c_floor_FUN_005648c0  ; 0052b614
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0xc94],EAX     ; 0052b619
    MOV dword ptr [ESP + 0xc98],EDX     ; 0052b620
    FLD double ptr [ESP + 0xc94]        ; 0052b627
    ADD ESP,0x8                         ; 0052b62e
    CALL crt_math.c_round_FUN_00563a30  ; 0052b631
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xca4]       ; 0052b636
    MOV EAX,dword ptr [ESP + 0xca4]     ; 0052b63d
    TEST EAX,EAX                        ; 0052b644
    JLE 0x0052b656                      ; 0052b646
        ;   XREF to: 0052b656 (CONDITIONAL_JUMP)  ; LAB_0052b656
    XOR EAX,EAX                         ; 0052b648
    MOV dword ptr [ESP + 0xca4],EAX     ; 0052b64a
    JMP 0x0052b3d3                      ; 0052b651
        ;   XREF to: 0052b3d3 (UNCONDITIONAL_JUMP)  ; LAB_0052b3d3
    CMP EAX,0xffffd8f0                  ; 0052b656
        ;   Label: LAB_0052b656
    JGE 0x0052b3d3                      ; 0052b65b
        ;   XREF to: 0052b3d3 (CONDITIONAL_JUMP)  ; LAB_0052b3d3
    JMP 0x0052b3c8                      ; 0052b661
        ;   XREF to: 0052b3c8 (UNCONDITIONAL_JUMP)  ; LAB_0052b3c8
    PUSH EAX                            ; 0052b666
        ;   Label: LAB_0052b666
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b667
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b66c
    PUSH EAX                            ; 0052b66f
    PUSH 0x594511                       ; 0052b670 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5940b7                       ; 0052b675 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7e8]               ; 0052b67a
    PUSH EAX                            ; 0052b681
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b682
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b687
    LEA EAX,[ESP + 0x7dc]               ; 0052b68a
    PUSH EAX                            ; 0052b691
    XOR EDI,EDI                         ; 0052b692
    CALL FUN_00529980                   ; 0052b694
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b699
    JMP 0x0052b3f7                      ; 0052b69c
        ;   XREF to: 0052b3f7 (UNCONDITIONAL_JUMP)  ; LAB_0052b3f7
    PUSH EAX                            ; 0052b6a1
        ;   Label: LAB_0052b6a1
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b6a2
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b6a7
    PUSH EAX                            ; 0052b6aa
    PUSH 0x59453a                       ; 0052b6ab | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5940b7                       ; 0052b6b0 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a8]               ; 0052b6b5
    PUSH EAX                            ; 0052b6bc
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b6bd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b6c2
    LEA EAX,[ESP + 0x19c]               ; 0052b6c5
    PUSH EAX                            ; 0052b6cc
    XOR EDI,EDI                         ; 0052b6cd
    CALL FUN_00529980                   ; 0052b6cf
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b6d4
    JMP 0x0052b439                      ; 0052b6d7
        ;   XREF to: 0052b439 (UNCONDITIONAL_JUMP)  ; LAB_0052b439
    PUSH EAX                            ; 0052b6dc
        ;   Label: LAB_0052b6dc
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b6dd
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b6e2
    PUSH EAX                            ; 0052b6e5
    PUSH 0x594566                       ; 0052b6e6 | = "Set hardware sfx 3d buffer mode"
    PUSH 0x5940b7                       ; 0052b6eb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x658]               ; 0052b6f0
    PUSH EAX                            ; 0052b6f7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b6f8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b6fd
    LEA EAX,[ESP + 0x64c]               ; 0052b700
    PUSH EAX                            ; 0052b707
    XOR EDI,EDI                         ; 0052b708
    CALL FUN_00529980                   ; 0052b70a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b70f
    JMP 0x0052b45f                      ; 0052b712
        ;   XREF to: 0052b45f (UNCONDITIONAL_JUMP)  ; LAB_0052b45f
    PUSH EAX                            ; 0052b717
        ;   Label: LAB_0052b717
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b718
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b71d
    PUSH EAX                            ; 0052b720
    PUSH 0x594586                       ; 0052b721 | = "Set hardware sfx 3d buffer minimum di..."
    PUSH 0x5940b7                       ; 0052b726 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x978]               ; 0052b72b
    PUSH EAX                            ; 0052b732
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b733
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b738
    LEA EAX,[ESP + 0x96c]               ; 0052b73b
    PUSH EAX                            ; 0052b742
    XOR EDI,EDI                         ; 0052b743
    CALL FUN_00529980                   ; 0052b745
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b74a
    JMP 0x0052b48b                      ; 0052b74d
        ;   XREF to: 0052b48b (UNCONDITIONAL_JUMP)  ; LAB_0052b48b
    PUSH EAX                            ; 0052b752
        ;   Label: LAB_0052b752
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b753
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b758
    PUSH EAX                            ; 0052b75b
    PUSH 0x5945b2                       ; 0052b75c | = "Set hardware sfx 3d buffer maximum di..."
    PUSH 0x5940b7                       ; 0052b761 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x18]                ; 0052b766
    PUSH EAX                            ; 0052b76a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b76b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b770
    LEA EAX,[ESP + 0xc]                 ; 0052b773
    PUSH EAX                            ; 0052b777
    XOR EDI,EDI                         ; 0052b778
    CALL FUN_00529980                   ; 0052b77a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b77f
    JMP 0x0052b4a2                      ; 0052b782
        ;   XREF to: 0052b4a2 (UNCONDITIONAL_JUMP)  ; LAB_0052b4a2
    CMP dword ptr [ESP + 0xc9c],0x0     ; 0052b787
        ;   Label: LAB_0052b787
    JNZ 0x0052b4a2                      ; 0052b78f
        ;   XREF to: 0052b4a2 (CONDITIONAL_JUMP)  ; LAB_0052b4a2
    JMP 0x0052b4e0                      ; 0052b795
        ;   XREF to: 0052b4e0 (UNCONDITIONAL_JUMP)  ; LAB_0052b4e0
    PUSH EAX                            ; 0052b79a
        ;   Label: LAB_0052b79a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b79b
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b7a0
    PUSH EAX                            ; 0052b7a3
    PUSH 0x59462b                       ; 0052b7a4 | = "Commit hardware sfx 3d buffer settings"
    PUSH 0x5940b7                       ; 0052b7a9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xb08]               ; 0052b7ae
    PUSH EAX                            ; 0052b7b5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b7b6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b7bb
    LEA EAX,[ESP + 0xafc]               ; 0052b7be
    PUSH EAX                            ; 0052b7c5
    XOR EDI,EDI                         ; 0052b7c6
    CALL FUN_00529980                   ; 0052b7c8
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b7cd
    JMP 0x0052b4e4                      ; 0052b7d0
        ;   XREF to: 0052b4e4 (UNCONDITIONAL_JUMP)  ; LAB_0052b4e4

