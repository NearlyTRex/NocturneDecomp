; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00421300(CBugs *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004212e4 = 004213a9
;   undefined4 s_wp_disease_loop_wav_005b7738+1
;   TerminatedCString s_wp_disease_munch_wav_005b774d
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600530
;   undefined4 DAT_006045f8
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_bugs.cpp_FUN_004221c0
;   core_bugs.cpp_FUN_00422570
;   core_bugs.cpp_FUN_004229f0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_mission.cpp_FUN_004f6f10
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421300
        ;   Label: core_bugs.cpp_FUN_00421300
    PUSH ESI                            ; 00421301
    PUSH EDI                            ; 00421302
    PUSH EBP                            ; 00421303
    MOV EBX,dword ptr [ESP + 0x14]      ; 00421304
    PUSH dword ptr [ESP + 0x18]         ; 00421308
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042130c
    PUSH EBX                            ; 00421312
    CALL dword ptr [EAX + 0x148]        ; 00421313
    ADD ESP,0x8                         ; 00421319
    TEST EAX,EAX                        ; 0042131c
    JZ 0x0042142d                       ; 0042131e
        ;   XREF to: 0042142d (CONDITIONAL_JUMP)  ; LAB_0042142d
    FLD float ptr [EBX + 0x1bd38]       ; 00421324
    FSUB float ptr [ESP + 0x18]         ; 0042132a
    FLDZ                                ; 0042132e
    FXCH                                ; 00421330
    FSTP float ptr [EBX + 0x1bd38]      ; 00421332
    FCOMP float ptr [EBX + 0x1bd38]     ; 00421338
    FNSTSW AX                           ; 0042133e
    SAHF                                ; 00421340
    JA 0x00421432                       ; 00421341
        ;   XREF to: 00421432 (CONDITIONAL_JUMP)  ; LAB_00421432
    FLDZ                                ; 00421347
        ;   Label: LAB_00421347
    FCOMP float ptr [EBX + 0x1be98]     ; 00421349
    FNSTSW AX                           ; 0042134f
    SAHF                                ; 00421351
    JNC 0x0042137d                      ; 00421352
        ;   XREF to: 0042137d (CONDITIONAL_JUMP)  ; LAB_0042137d
    FLD float ptr [EBX + 0x1be98]       ; 00421354
    FSUB float ptr [ESP + 0x18]         ; 0042135a
    FLDZ                                ; 0042135e
    FXCH                                ; 00421360
    FSTP float ptr [EBX + 0x1be98]      ; 00421362
    FCOMP float ptr [EBX + 0x1be98]     ; 00421368
    FNSTSW AX                           ; 0042136e
    SAHF                                ; 00421370
    JBE 0x0042137d                      ; 00421371
        ;   XREF to: 0042137d (CONDITIONAL_JUMP)  ; LAB_0042137d
    MOV dword ptr [EBX + 0x1be98],0x0   ; 00421373
    CMP dword ptr [EBX + 0x1bd2c],0x0   ; 0042137d
        ;   Label: LAB_0042137d
    JZ 0x00421441                       ; 00421384
        ;   XREF to: 00421441 (CONDITIONAL_JUMP)  ; LAB_00421441
    CMP dword ptr [EBX + 0x1bd30],0x0   ; 0042138a
        ;   Label: LAB_0042138a
    JZ 0x0042146e                       ; 00421391
        ;   XREF to: 0042146e (CONDITIONAL_JUMP)  ; LAB_0042146e
    MOV EAX,dword ptr [EBX + 0xd054]    ; 00421397
        ;   Label: LAB_00421397
    CMP EAX,0x3                         ; 0042139d
    JA 0x004213cd                       ; 004213a0
        ;   XREF to: 004213cd (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4212e4]  ; 004213a2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [EBX + 0x1be9c]   ; 004213a9
        ;   Label: caseD_0
    PUSH ESI                            ; 004213af
    CALL sound_sndmain.cpp_FUN_00556700 ; 004213b0
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004213b5
    TEST EAX,EAX                        ; 004213b8
    JZ 0x0042149b                       ; 004213ba
        ;   XREF to: 0042149b (CONDITIONAL_JUMP)  ; LAB_0042149b
    PUSH dword ptr [ESP + 0x18]         ; 004213c0
        ;   Label: LAB_004213c0
    PUSH EBX                            ; 004213c4
    CALL core_bugs.cpp_FUN_004221c0     ; 004213c5
        ;   XREF to: 004221c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_004221c0(CBugs * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004213ca
        ;   Label: LAB_004213ca
    MOV EBP,dword ptr [EBX + 0xcde4]    ; 004213cd
        ;   Label: caseD_3
    TEST EBP,EBP                        ; 004213d3
    JZ 0x004213e8                       ; 004213d5
        ;   XREF to: 004213e8 (CONDITIONAL_JUMP)  ; LAB_004213e8
    FLDZ                                ; 004213d7
    FCOMP float ptr [EBP + 0x2538]      ; 004213d9
    FNSTSW AX                           ; 004213df
    SAHF                                ; 004213e1
    JC 0x0042153b                       ; 004213e2
        ;   XREF to: 0042153b (CONDITIONAL_JUMP)  ; LAB_0042153b
    FLD float ptr [EBX + 0x1bd34]       ; 004213e8
        ;   Label: LAB_004213e8
    FSUB float ptr [ESP + 0x18]         ; 004213ee
    FLDZ                                ; 004213f2
    FXCH                                ; 004213f4
    FSTP float ptr [EBX + 0x1bd34]      ; 004213f6
    FCOMP float ptr [EBX + 0x1bd34]     ; 004213fc
    FNSTSW AX                           ; 00421402
    SAHF                                ; 00421404
    JC 0x00421420                       ; 00421405
        ;   XREF to: 00421420 (CONDITIONAL_JUMP)  ; LAB_00421420
    MOV EDX,dword ptr [EBX + 0xd058]    ; 00421407
    MOV dword ptr [EBX + 0x1bd34],0x3dcccccd ; 0042140d
    SUB EDX,0x3                         ; 00421417
    MOV dword ptr [EBX + 0xd058],EDX    ; 0042141a
    CMP dword ptr [EBX + 0xd058],0x0    ; 00421420
        ;   Label: LAB_00421420
    JLE 0x0042156b                      ; 00421427
        ;   XREF to: 0042156b (CONDITIONAL_JUMP)  ; LAB_0042156b
    POP EBP                             ; 0042142d
        ;   Label: LAB_0042142d
    POP EDI                             ; 0042142e
    POP ESI                             ; 0042142f
    POP EBX                             ; 00421430
    RET                                 ; 00421431
    MOV dword ptr [EBX + 0x1bd38],0x0   ; 00421432
        ;   Label: LAB_00421432
    JMP 0x00421347                      ; 0042143c
        ;   XREF to: 00421347 (UNCONDITIONAL_JUMP)  ; LAB_00421347
    LEA EAX,[EBX + 0x1bd3c]             ; 00421441
        ;   Label: LAB_00421441
    PUSH EAX                            ; 00421447
    MOV ECX,dword ptr [0x005fba60]      ; 00421448 | DAT_005fba60
    PUSH ECX                            ; 0042144e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0042144f
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00421454
    TEST EAX,EAX                        ; 00421457
    JZ 0x0042138a                       ; 00421459
        ;   XREF to: 0042138a (CONDITIONAL_JUMP)  ; LAB_0042138a
    MOV dword ptr [EBX + 0x1bd2c],0x1   ; 0042145f
    JMP 0x0042138a                      ; 00421469
        ;   XREF to: 0042138a (UNCONDITIONAL_JUMP)  ; LAB_0042138a
    LEA EAX,[EBX + 0x1bda0]             ; 0042146e
        ;   Label: LAB_0042146e
    PUSH EAX                            ; 00421474
    MOV EDI,dword ptr [0x005fba60]      ; 00421475 | DAT_005fba60
    PUSH EDI                            ; 0042147b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0042147c
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00421481
    TEST EAX,EAX                        ; 00421484
    JZ 0x00421397                       ; 00421486
        ;   XREF to: 00421397 (CONDITIONAL_JUMP)  ; LAB_00421397
    MOV dword ptr [EBX + 0x1bd30],0x1   ; 0042148c
    JMP 0x00421397                      ; 00421496
        ;   XREF to: 00421397 (UNCONDITIONAL_JUMP)  ; LAB_00421397
    LEA EAX,[EBX + 0x20]                ; 0042149b
        ;   Label: LAB_0042149b
    PUSH EAX                            ; 0042149e
    PUSH 0x5b7739                       ; 0042149f | s_wp_disease_loop_wav_005b7738+1
    PUSH EBX                            ; 004214a4
    MOV EDI,dword ptr [0x006045f8]      ; 004214a5 | DAT_006045f8
    PUSH EDI                            ; 004214ab
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004214ac
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004214b1
    MOV dword ptr [EBX + 0x1be9c],EAX   ; 004214b4
    JMP 0x004213c0                      ; 004214ba
        ;   XREF to: 004213c0 (UNCONDITIONAL_JUMP)  ; LAB_004213c0
    MOV EBP,dword ptr [EBX + 0x1be9c]   ; 004214bf
        ;   Label: caseD_1
    PUSH EBP                            ; 004214c5
    CALL sound_sndmain.cpp_FUN_00556700 ; 004214c6
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004214cb
    TEST EAX,EAX                        ; 004214ce
    JZ 0x004214eb                       ; 004214d0
        ;   XREF to: 004214eb (CONDITIONAL_JUMP)  ; LAB_004214eb
    MOV EAX,dword ptr [EBX + 0x1be9c]   ; 004214d2
    PUSH EAX                            ; 004214d8
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004214d9
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004214de
    MOV dword ptr [EBX + 0x1be9c],0x0   ; 004214e1
    MOV EDX,dword ptr [EBX + 0x1bea0]   ; 004214eb
        ;   Label: LAB_004214eb
    PUSH EDX                            ; 004214f1
    CALL sound_sndmain.cpp_FUN_00556700 ; 004214f2
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004214f7
    TEST EAX,EAX                        ; 004214fa
    JNZ 0x0042151d                      ; 004214fc
        ;   XREF to: 0042151d (CONDITIONAL_JUMP)  ; LAB_0042151d
    LEA EAX,[EBX + 0x20]                ; 004214fe
    PUSH EAX                            ; 00421501
    PUSH 0x5b774d                       ; 00421502 | = "wp_disease_munch.wav"
    PUSH EBX                            ; 00421507
    MOV ECX,dword ptr [0x006045f8]      ; 00421508 | DAT_006045f8
    PUSH ECX                            ; 0042150e
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0042150f
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00421514
    MOV dword ptr [EBX + 0x1bea0],EAX   ; 00421517
    PUSH dword ptr [ESP + 0x18]         ; 0042151d
        ;   Label: LAB_0042151d
    PUSH EBX                            ; 00421521
    CALL core_bugs.cpp_FUN_00422570     ; 00421522
        ;   XREF to: 00422570 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00422570(CBugs * this_ptr, float delta_time)
    JMP 0x004213ca                      ; 00421527
        ;   XREF to: 004213ca (UNCONDITIONAL_JUMP)  ; LAB_004213ca
    PUSH dword ptr [ESP + 0x18]         ; 0042152c
        ;   Label: caseD_2
    PUSH EBX                            ; 00421530
    CALL core_bugs.cpp_FUN_004229f0     ; 00421531
        ;   XREF to: 004229f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_004229f0(CBugs * this_ptr, float delta_time)
    JMP 0x004213ca                      ; 00421536
        ;   XREF to: 004213ca (UNCONDITIONAL_JUMP)  ; LAB_004213ca
    CMP dword ptr [EBX + 0x1be94],0x0   ; 0042153b
        ;   Label: LAB_0042153b
    JZ 0x00421555                       ; 00421542
        ;   XREF to: 00421555 (CONDITIONAL_JUMP)  ; LAB_00421555
    FLDZ                                ; 00421544
    FCOMP float ptr [EBX + 0x1be98]     ; 00421546
    FNSTSW AX                           ; 0042154c
    SAHF                                ; 0042154e
    JNC 0x004213e8                      ; 0042154f
        ;   XREF to: 004213e8 (CONDITIONAL_JUMP)  ; LAB_004213e8
    FLDZ                                ; 00421555
        ;   Label: LAB_00421555
    FCOMP float ptr [EBX + 0x1bd38]     ; 00421557
    FNSTSW AX                           ; 0042155d
    SAHF                                ; 0042155f
    JNC 0x004213e8                      ; 00421560
        ;   XREF to: 004213e8 (CONDITIONAL_JUMP)  ; LAB_004213e8
    POP EBP                             ; 00421566
    POP EDI                             ; 00421567
    POP ESI                             ; 00421568
    POP EBX                             ; 00421569
    RET                                 ; 0042156a
    PUSH 0x1                            ; 0042156b
        ;   Label: LAB_0042156b
    PUSH EBX                            ; 0042156d
    MOV ESI,dword ptr [0x00600530]      ; 0042156e | DAT_00600530
    PUSH ESI                            ; 00421574 | DAT_01d81080
    MOV dword ptr [EBX + 0xd058],0x0    ; 00421575
    CALL core_mission.cpp_FUN_004f6f10  ; 0042157f
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 00421584
    MOV EDI,dword ptr [EBX + 0x1be9c]   ; 00421587
    PUSH EDI                            ; 0042158d
    CALL sound_sndmain.cpp_FUN_00556700 ; 0042158e
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00421593
    TEST EAX,EAX                        ; 00421596
    JZ 0x004215b3                       ; 00421598
        ;   XREF to: 004215b3 (CONDITIONAL_JUMP)  ; LAB_004215b3
    MOV EBP,dword ptr [EBX + 0x1be9c]   ; 0042159a
    PUSH EBP                            ; 004215a0
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004215a1
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004215a6
    MOV dword ptr [EBX + 0x1be9c],0x0   ; 004215a9
    MOV EAX,dword ptr [EBX + 0x1bea0]   ; 004215b3
        ;   Label: LAB_004215b3
    PUSH EAX                            ; 004215b9
    CALL sound_sndmain.cpp_FUN_00556700 ; 004215ba
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004215bf
    TEST EAX,EAX                        ; 004215c2
    JZ 0x0042142d                       ; 004215c4
        ;   XREF to: 0042142d (CONDITIONAL_JUMP)  ; LAB_0042142d
    MOV EDX,dword ptr [EBX + 0x1bea0]   ; 004215ca
    PUSH EDX                            ; 004215d0
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004215d1
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004215d6
    MOV dword ptr [EBX + 0x1bea0],0x0   ; 004215d9
    POP EBP                             ; 004215e3
    POP EDI                             ; 004215e4
    POP ESI                             ; 004215e5
    POP EBX                             ; 004215e6
    RET                                 ; 004215e7

