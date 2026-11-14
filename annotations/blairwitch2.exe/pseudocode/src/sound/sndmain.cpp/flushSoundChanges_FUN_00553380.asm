; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00553380(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_unlockSound_FUN_00551440 at 0055356b
;
; Referenced Globals:
;   undefined4 DAT_0263cf7c
;   undefined4 DAT_0263d038
;   undefined4 DAT_0263d084
;   undefined4 DAT_0263d098
;   undefined4 DAT_0263d150
;   undefined4 DAT_0263d153
;   undefined4 DAT_02648428
;   undefined4 DAT_02648438
;   undefined4 DAT_02648448
;   undefined4 DAT_026484b8
;   undefined4 DAT_02648e80
;   undefined4 DAT_02648e88
;   undefined4 DAT_02649024
;   undefined4 DAT_02649027
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00553380
        ;   Label: sound_sndmain.cpp_flushSoundChanges_FUN_00553380
    CMP dword ptr [0x02648e80],0x0      ; 00553381 | DAT_02648e80
    JNZ 0x0055338c                      ; 00553388
        ;   XREF to: 0055338c (CONDITIONAL_JUMP)  ; LAB_0055338c
    POP EBP                             ; 0055338a
        ;   Label: LAB_0055338a
    RET                                 ; 0055338b
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30 ; 0055338c
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30()
        ;   Label: LAB_0055338c
    CMP EAX,0x1                         ; 00553391
    JL 0x0055338a                       ; 00553394
        ;   XREF to: 0055338a (CONDITIONAL_JUMP)  ; LAB_0055338a
    PUSH EDI                            ; 00553396
    PUSH ESI                            ; 00553397
    PUSH EBX                            ; 00553398
    MOV ESI,0x263cf1c                   ; 00553399
    LEA EDI,[ESI + 0x4700]              ; 0055339e
    MOV ECX,dword ptr [ESI + 0x60]      ; 005533a4 | DAT_0263cf7c | DAT_0263d098
        ;   Label: LAB_005533a4
    MOV EBX,ESI                         ; 005533a7
    TEST ECX,ECX                        ; 005533a9
    JNZ 0x005534b1                      ; 005533ab
        ;   XREF to: 005534b1 (CONDITIONAL_JUMP)  ; LAB_005534b1
    ADD ESI,0x11c                       ; 005533b1
        ;   Label: LAB_005533b1
    CMP ESI,EDI                         ; 005533b7
    JNZ 0x005533a4                      ; 005533b9
        ;   XREF to: 005533a4 (CONDITIONAL_JUMP)  ; LAB_005533a4
    TEST byte ptr [0x02649024],0x2      ; 005533bb | DAT_02649024
    JZ 0x00553408                       ; 005533c2
        ;   XREF to: 00553408 (CONDITIONAL_JUMP)  ; LAB_00553408
    MOV EAX,[0x026484b8]                ; 005533c4 | DAT_026484b8
    MOV ESI,dword ptr [EAX*0x8 + 0x264844c] ; 005533c9
    PUSH ESI                            ; 005533d0
    MOV EDI,dword ptr [EAX*0x8 + 0x2648448] ; 005533d1 | DAT_02648448
    PUSH EDI                            ; 005533d8
    MOV EBP,dword ptr [EAX*0x8 + 0x264843c] ; 005533d9
    PUSH EBP                            ; 005533e0
    MOV ECX,dword ptr [EAX*0x8 + 0x2648438] ; 005533e1 | DAT_02648438
    PUSH ECX                            ; 005533e8
    MOV ESI,dword ptr [EAX*0x8 + 0x264842c] ; 005533e9
    PUSH ESI                            ; 005533f0
    MOV EDI,dword ptr [EAX*0x8 + 0x2648428] ; 005533f1 | DAT_02648428
    MOV EDX,dword ptr [0x02648e80]      ; 005533f8 | DAT_02648e80
    PUSH EDI                            ; 005533fe
    MOV EBX,dword ptr [EDX]             ; 005533ff
    PUSH EDX                            ; 00553401
    CALL dword ptr [EBX + 0x1c]         ; 00553402
    ADD ESP,0x1c                        ; 00553405
    TEST byte ptr [0x02649027],0x20     ; 00553408 | DAT_02649027
        ;   Label: LAB_00553408
    JZ 0x00553464                       ; 0055340f
        ;   XREF to: 00553464 (CONDITIONAL_JUMP)  ; LAB_00553464
    MOV EAX,[0x026484b8]                ; 00553411 | DAT_026484b8
    PUSH dword ptr [EAX*0x4 + 0x26484b0] ; 00553416
    PUSH dword ptr [EAX*0x4 + 0x26484a8] ; 0055341d
    PUSH dword ptr [EAX*0x4 + 0x26484a0] ; 00553424
    PUSH dword ptr [EAX*0x4 + 0x2648498] ; 0055342b
    PUSH dword ptr [EAX*0x4 + 0x2648490] ; 00553432
    PUSH dword ptr [EAX*0x4 + 0x2648488] ; 00553439
    PUSH dword ptr [EAX*0x4 + 0x2648480] ; 00553440
    MOV EDX,dword ptr [0x02648e80]      ; 00553447 | DAT_02648e80
    PUSH dword ptr [EAX*0x4 + 0x2648478] ; 0055344d
    MOV EBX,dword ptr [EDX]             ; 00553454
    PUSH dword ptr [EAX*0x4 + 0x2648470] ; 00553456
    PUSH EDX                            ; 0055345d
    CALL dword ptr [EBX + 0x20]         ; 0055345e
    ADD ESP,0x28                        ; 00553461
    TEST byte ptr [0x02649024],0x4      ; 00553464 | DAT_02649024
        ;   Label: LAB_00553464
    JZ 0x00553496                       ; 0055346b
        ;   XREF to: 00553496 (CONDITIONAL_JUMP)  ; LAB_00553496
    MOV EAX,[0x026484b8]                ; 0055346d | DAT_026484b8
    PUSH dword ptr [EAX*0x4 + 0x2648468] ; 00553472
    MOV EDX,dword ptr [0x02648e80]      ; 00553479 | DAT_02648e80
    PUSH dword ptr [EAX*0x4 + 0x2648460] ; 0055347f
    MOV EBX,dword ptr [EDX]             ; 00553486
    PUSH dword ptr [EAX*0x4 + 0x2648458] ; 00553488
    PUSH EDX                            ; 0055348f
    CALL dword ptr [EBX + 0x24]         ; 00553490
    ADD ESP,0x10                        ; 00553493
    MOV EAX,[0x02648e80]                ; 00553496 | DAT_02648e80
        ;   Label: LAB_00553496
    XOR EBP,EBP                         ; 0055349b
    PUSH EAX                            ; 0055349d
    MOV EDX,dword ptr [EAX]             ; 0055349e
    MOV dword ptr [0x02649024],EBP      ; 005534a0 | DAT_02649024
    CALL dword ptr [EDX + 0x18]         ; 005534a6
    ADD ESP,0x4                         ; 005534a9
    POP EBX                             ; 005534ac
    POP ESI                             ; 005534ad
    POP EDI                             ; 005534ae
    POP EBP                             ; 005534af
    RET                                 ; 005534b0
    CMP dword ptr [0x02648e88],0x1      ; 005534b1 | DAT_02648e88
        ;   Label: LAB_005534b1
    JNZ 0x005534c5                      ; 005534b8
        ;   XREF to: 005534c5 (CONDITIONAL_JUMP)  ; LAB_005534c5
    MOV EAX,[0x02649024]                ; 005534ba | DAT_02649024
    OR dword ptr [ESI + 0x118],EAX      ; 005534bf | DAT_0263d150
    TEST byte ptr [EBX + 0x4c],0x1      ; 005534c5 | DAT_0263d084
        ;   Label: LAB_005534c5
    JZ 0x005534d5                       ; 005534c9
        ;   XREF to: 005534d5 (CONDITIONAL_JUMP)  ; LAB_005534d5
    AND dword ptr [EBX + 0x118],0xdffffff9 ; 005534cb | DAT_0263d150
    CMP dword ptr [EBX + 0x118],0x0     ; 005534d5 | DAT_0263d150
        ;   Label: LAB_005534d5
    JZ 0x005533b1                       ; 005534dc
        ;   XREF to: 005533b1 (CONDITIONAL_JUMP)  ; LAB_005533b1
    PUSH 0x0                            ; 005534e2
    PUSH EBX                            ; 005534e4 | DAT_0263d038
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 ; 005534e5
        ;   XREF to: 0054e8c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005534ea
    MOV ECX,dword ptr [EBX + 0x118]     ; 005534ed | DAT_0263d150
    PUSH ECX                            ; 005534f3
    MOV EAX,[0x02648e80]                ; 005534f4 | DAT_02648e80
    PUSH EBX                            ; 005534f9 | DAT_0263d038
    MOV EDX,dword ptr [EAX]             ; 005534fa
    PUSH EAX                            ; 005534fc
    CALL dword ptr [EDX + 0x44]         ; 005534fd
    ADD ESP,0xc                         ; 00553500
    TEST EAX,EAX                        ; 00553503
    JZ 0x00553533                       ; 00553505
        ;   XREF to: 00553533 (CONDITIONAL_JUMP)  ; LAB_00553533
    TEST byte ptr [EBX + 0x11b],0x40    ; 00553507 | DAT_0263d153
    JZ 0x005533b1                       ; 0055350e
        ;   XREF to: 005533b1 (CONDITIONAL_JUMP)  ; LAB_005533b1
    PUSH EBX                            ; 00553514 | DAT_0263d038
    MOV EAX,[0x02648e80]                ; 00553515 | DAT_02648e80
    PUSH EAX                            ; 0055351a
    MOV EDX,dword ptr [EAX]             ; 0055351b
    CALL dword ptr [EDX + 0x4c]         ; 0055351d
    ADD ESP,0x8                         ; 00553520
    TEST EAX,EAX                        ; 00553523
    JZ 0x00553533                       ; 00553525
        ;   XREF to: 00553533 (CONDITIONAL_JUMP)  ; LAB_00553533
    AND byte ptr [EBX + 0x11b],0xbf     ; 00553527 | DAT_0263d153
    JMP 0x005533b1                      ; 0055352e
        ;   XREF to: 005533b1 (UNCONDITIONAL_JUMP)  ; LAB_005533b1
    PUSH EBX                            ; 00553533 | DAT_0263d038
        ;   Label: LAB_00553533
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 00553534
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00553539
    JMP 0x005533b1                      ; 0055353c
        ;   XREF to: 005533b1 (UNCONDITIONAL_JUMP)  ; LAB_005533b1

