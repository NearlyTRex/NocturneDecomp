; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0055a3c0(undefined4 param_1)
;
; Local Variables:
; undefined8       Stack[-0x160]:8  local_160
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0xe8]:1  local_e8
; undefined1       Stack[-0xe7]:1  local_e7
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004b5190 at 004b5cbf
;
; Referenced Globals:
;   void* switchdataD_0055a3ac = 0055aaab
;   undefined4 DAT_005ea823
;   undefined4 DAT_005ea825
;   undefined4 DAT_005ea829
;   undefined4 DAT_005ea82d
;   undefined4 DAT_005ea831
;   TerminatedCString s_trainext_wav_005ea835
;   TerminatedCString s_railnoiz_wav_005ea842
;   TerminatedCString s_rail_s_wav_005ea84f
;   undefined1 DAT_005ea85b
;   undefined1 DAT_005ea85c
;   undefined1 DAT_005ea85d
;   TerminatedCString s_p_wav_005ea85e
;   TerminatedCString s_s_g_005ea865
;   undefined4 s_wind_ctl_wav_005ea893+1
;   ... and 47 more
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00535e10
;   FUN_00537e00
;   FUN_00537e90
;   FUN_00550210
;   FUN_00550270
;   FUN_00550310
;   FUN_00550380
;   FUN_00550450
;   FUN_005504d0
;   FUN_005506b0
;   FUN_00550b70
;   FUN_00550f20
;   FUN_00551050
;   FUN_00551100
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a3c0
        ;   Label: FUN_0055a3c0
    PUSH ESI                            ; 0055a3c1
    PUSH EDI                            ; 0055a3c2
    PUSH EBP                            ; 0055a3c3
    MOV EBP,ESP                         ; 0055a3c4
    SUB ESP,0x144                       ; 0055a3c6
    AND ESP,0xfffffff8                  ; 0055a3cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055a3cf
    MOV EAX,[0x00616494]                ; 0055a3d2 | DAT_00616494
    MOV EAX,dword ptr [EAX + 0x284]     ; 0055a3d7 | DAT_01cb6b84
    MOV dword ptr [ESP + 0x110],EAX     ; 0055a3dd
    FLD float ptr [ESP + 0x110]         ; 0055a3e4
    FMUL double ptr [0x005ea8b4]        ; 0055a3eb | DAT_005ea8b4
    MOV dword ptr [ESP + 0x11c],EAX     ; 0055a3f1
    FSTP float ptr [ESP + 0x12c]        ; 0055a3f8
    CALL FUN_00558d50                   ; 0055a3ff
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00558d50()
    FLD float ptr [0x0264b2a8]          ; 0055a404 | DAT_0264b2a8
    FLD float ptr [ESP + 0x12c]         ; 0055a40a
    FCHS                                ; 0055a411
    FXCH                                ; 0055a413
    FSUB float ptr [0x0264b2ac]         ; 0055a415 | DAT_0264b2ac
    FXCH                                ; 0055a41b
    FSTP float ptr [ESP + 0x118]        ; 0055a41d
    FST float ptr [ESP + 0x128]         ; 0055a424
    FCOMP float ptr [ESP + 0x118]       ; 0055a42b
    FNSTSW AX                           ; 0055a432
    SAHF                                ; 0055a434
    JC 0x0055a92a                       ; 0055a435
        ;   XREF to: 0055a92a (CONDITIONAL_JUMP)  ; LAB_0055a92a
    FLD float ptr [ESP + 0x128]         ; 0055a43b
        ;   Label: LAB_0055a43b
    FCOMP float ptr [ESP + 0x12c]       ; 0055a442
    FNSTSW AX                           ; 0055a449
    SAHF                                ; 0055a44b
    JBE 0x0055a45c                      ; 0055a44c
        ;   XREF to: 0055a45c (CONDITIONAL_JUMP)  ; LAB_0055a45c
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0055a44e
    MOV dword ptr [ESP + 0x128],EAX     ; 0055a455
    FLD float ptr [0x0264b2ac]          ; 0055a45c | DAT_0264b2ac
        ;   Label: LAB_0055a45c
    FADD float ptr [ESP + 0x128]        ; 0055a462
    FST float ptr [0x0264b2ac]          ; 0055a469 | DAT_0264b2ac
    FCOMP double ptr [0x005ea8bc]       ; 0055a46f | DAT_005ea8bc
    FNSTSW AX                           ; 0055a475
    SAHF                                ; 0055a477
    JBE 0x0055a954                      ; 0055a478
        ;   XREF to: 0055a954 (CONDITIONAL_JUMP)  ; LAB_0055a954
    MOV ESI,dword ptr [0x0264b294]      ; 0055a47e | DAT_0264b294
    PUSH ESI                            ; 0055a484
    PUSH EBX                            ; 0055a485
    CALL FUN_0055af70                   ; 0055a486
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af70()
    ADD ESP,0x8                         ; 0055a48b
    TEST EAX,EAX                        ; 0055a48e
    JZ 0x0055a93d                       ; 0055a490
        ;   XREF to: 0055a93d (CONDITIONAL_JUMP)  ; LAB_0055a93d
    MOV EDI,dword ptr [0x0264b294]      ; 0055a496 | DAT_0264b294
        ;   Label: LAB_0055a496
    PUSH dword ptr [0x0264b2ac]         ; 0055a49c | DAT_0264b2ac
    PUSH EDI                            ; 0055a4a2
    CALL FUN_00550f20                   ; 0055a4a3
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00550f20()
    ADD ESP,0x8                         ; 0055a4a8
    XOR EAX,EAX                         ; 0055a4ab
        ;   Label: LAB_0055a4ab
    MOV dword ptr [ESP + 0x8],EAX       ; 0055a4ad
    MOV EAX,[0x0061e520]                ; 0055a4b1 | DAT_0061e520
    FLD float ptr [EAX + 0xc]           ; 0055a4b6 | DAT_0265379c
    FLDZ                                ; 0055a4b9
    FCOMPP                              ; 0055a4bb
    FNSTSW AX                           ; 0055a4bd
    SAHF                                ; 0055a4bf
    JNC 0x0055a50d                      ; 0055a4c0
        ;   XREF to: 0055a50d (CONDITIONAL_JUMP)  ; LAB_0055a50d
    PUSH 0x4                            ; 0055a4c2
    MOV EAX,[0x0061b5a8]                ; 0055a4c4 | DAT_0061b5a8
    PUSH 0x5ea8a1                       ; 0055a4c9 | DAT_005ea8a1
    ADD EAX,0x14d0f0                    ; 0055a4ce
    PUSH EAX                            ; 0055a4d3
    CALL FUN_005b8da0                   ; 0055a4d4
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0055a4d9
    TEST EAX,EAX                        ; 0055a4dc
    JNZ 0x0055a50d                      ; 0055a4de
        ;   XREF to: 0055a50d (CONDITIONAL_JUMP)  ; LAB_0055a50d
    MOV EAX,[0x0061e520]                ; 0055a4e0 | DAT_0061e520
    FLD float ptr [EAX + 0xc]           ; 0055a4e5 | DAT_0265379c
    FSQRT                               ; 0055a4e8
    FMUL double ptr [0x005ea8c4]        ; 0055a4ea | DAT_005ea8c4
    FADD double ptr [0x005ea8cc]        ; 0055a4f0 | DAT_005ea8cc
    FST float ptr [ESP + 0x8]           ; 0055a4f6
    FCOMP double ptr [0x005ea8d4]       ; 0055a4fa | DAT_005ea8d4
    FNSTSW AX                           ; 0055a500
    SAHF                                ; 0055a502
    JBE 0x0055a50d                      ; 0055a503
        ;   XREF to: 0055a50d (CONDITIONAL_JUMP)  ; LAB_0055a50d
    MOV dword ptr [ESP + 0x8],0x3f333333 ; 0055a505
    FLD float ptr [ESP + 0x8]           ; 0055a50d
        ;   Label: LAB_0055a50d
    FLD float ptr [ESP + 0x12c]         ; 0055a511
    FCHS                                ; 0055a518
    FXCH                                ; 0055a51a
    FSUB float ptr [0x0264b2b0]         ; 0055a51c | DAT_0264b2b0
    FXCH                                ; 0055a522
    FSTP float ptr [ESP + 0x114]        ; 0055a524
    FST float ptr [ESP + 0x124]         ; 0055a52b
    FCOMP float ptr [ESP + 0x114]       ; 0055a532
    FNSTSW AX                           ; 0055a539
    SAHF                                ; 0055a53b
    JNC 0x0055a54c                      ; 0055a53c
        ;   XREF to: 0055a54c (CONDITIONAL_JUMP)  ; LAB_0055a54c
    MOV EAX,dword ptr [ESP + 0x114]     ; 0055a53e
    MOV dword ptr [ESP + 0x124],EAX     ; 0055a545
    FLD float ptr [ESP + 0x124]         ; 0055a54c
        ;   Label: LAB_0055a54c
    FCOMP float ptr [ESP + 0x12c]       ; 0055a553
    FNSTSW AX                           ; 0055a55a
    SAHF                                ; 0055a55c
    JBE 0x0055a56d                      ; 0055a55d
        ;   XREF to: 0055a56d (CONDITIONAL_JUMP)  ; LAB_0055a56d
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0055a55f
    MOV dword ptr [ESP + 0x124],EAX     ; 0055a566
    FLD float ptr [0x0264b2b0]          ; 0055a56d | DAT_0264b2b0
        ;   Label: LAB_0055a56d
    FADD float ptr [ESP + 0x124]        ; 0055a573
    FST float ptr [0x0264b2b0]          ; 0055a57a | DAT_0264b2b0
    FCOMP double ptr [0x005ea8bc]       ; 0055a580 | DAT_005ea8bc
    FNSTSW AX                           ; 0055a586
    SAHF                                ; 0055a588
    JBE 0x0055a988                      ; 0055a589
        ;   XREF to: 0055a988 (CONDITIONAL_JUMP)  ; LAB_0055a988
    MOV ESI,dword ptr [0x0264b298]      ; 0055a58f | DAT_0264b298
    PUSH ESI                            ; 0055a595
    PUSH EBX                            ; 0055a596
    CALL FUN_0055af70                   ; 0055a597
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af70()
    ADD ESP,0x8                         ; 0055a59c
    TEST EAX,EAX                        ; 0055a59f
    JZ 0x0055a971                       ; 0055a5a1
        ;   XREF to: 0055a971 (CONDITIONAL_JUMP)  ; LAB_0055a971
    MOV EDI,dword ptr [0x0264b298]      ; 0055a5a7 | DAT_0264b298
        ;   Label: LAB_0055a5a7
    PUSH dword ptr [0x0264b2b0]         ; 0055a5ad | DAT_0264b2b0
    PUSH EDI                            ; 0055a5b3
    CALL FUN_00550f20                   ; 0055a5b4
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00550f20()
    ADD ESP,0x8                         ; 0055a5b9
    FLD float ptr [0x0264bae0]          ; 0055a5bc | DAT_0264bae0
        ;   Label: LAB_0055a5bc
    FCOMP float ptr [ESP + 0x11c]       ; 0055a5c2
    FNSTSW AX                           ; 0055a5c9
    SAHF                                ; 0055a5cb
    JBE 0x0055a9a5                      ; 0055a5cc
        ;   XREF to: 0055a9a5 (CONDITIONAL_JUMP)  ; LAB_0055a9a5
    FLD float ptr [0x0264badc]          ; 0055a5d2 | DAT_0264badc
    FSUB float ptr [0x0264bad8]         ; 0055a5d8 | DAT_0264bad8
    FLD float ptr [ESP + 0x11c]         ; 0055a5de
    FLD ST0                             ; 0055a5e5
    FDIV float ptr [0x0264bae0]         ; 0055a5e7 | DAT_0264bae0
    FMULP ST2                           ; 0055a5ed
    FSUBR float ptr [0x0264bae0]        ; 0055a5ef | DAT_0264bae0
    FXCH                                ; 0055a5f5
    FADD float ptr [0x0264bad8]         ; 0055a5f7 | DAT_0264bad8
    FXCH                                ; 0055a5fd
    FSTP float ptr [0x0264bae0]         ; 0055a5ff | DAT_0264bae0
    FSTP float ptr [0x0264bad8]         ; 0055a605 | DAT_0264bad8
    PUSH 0x0                            ; 0055a60b
        ;   Label: LAB_0055a60b
    CALL FUN_005512a0                   ; 0055a60d
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005512a0()
    ADD ESP,0x4                         ; 0055a612
    TEST EAX,EAX                        ; 0055a615
    JZ 0x0055a9bd                       ; 0055a617
        ;   XREF to: 0055a9bd (CONDITIONAL_JUMP)  ; LAB_0055a9bd
    PUSH 0x1                            ; 0055a61d
    PUSH 0x3                            ; 0055a61f
    CALL FUN_00551220                   ; 0055a621
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; undefined FUN_00551220()
    ADD ESP,0x8                         ; 0055a626
    PUSH 0x0                            ; 0055a629
    CALL FUN_00551190                   ; 0055a62b
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined FUN_00551190()
    MOV dword ptr [ESP + 0x144],EAX     ; 0055a630
    FLD float ptr [ESP + 0x144]         ; 0055a637
    ADD ESP,0x4                         ; 0055a63e
    FMUL float ptr [0x0264bad8]         ; 0055a641 | DAT_0264bad8
    SUB ESP,0x4                         ; 0055a647
    FSTP float ptr [ESP]                ; 0055a64a
    PUSH 0x3                            ; 0055a64d
    CALL FUN_00551100                   ; 0055a64f
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; undefined FUN_00551100()
    ADD ESP,0x8                         ; 0055a654
        ;   Label: LAB_0055a654
    MOV EAX,[0x0061b5a8]                ; 0055a657 | DAT_0061b5a8 | DAT_01e661b8
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 0055a65c | DAT_01fc0e70
    JZ 0x0055a923                       ; 0055a663
        ;   XREF to: 0055a923 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [0x00616494]      ; 0055a669 | DAT_00616494
    FLD float ptr [EDX + 0x284]         ; 0055a66f | DAT_01cb6b84
    MOV ECX,dword ptr [EDX + 0x25c]     ; 0055a675 | DAT_01cb6b5c
    FSTP float ptr [ESP + 0x134]        ; 0055a67b
    TEST ECX,ECX                        ; 0055a682
    JNZ 0x0055a9ca                      ; 0055a684
        ;   XREF to: 0055a9ca (CONDITIONAL_JUMP)  ; LAB_0055a9ca
    MOV EBX,dword ptr [0x0264bb94]      ; 0055a68a | DAT_0264bb94
    CMP EBX,dword ptr [EAX + 0x15aeb8]  ; 0055a690 | DAT_01fc1070
    JZ 0x0055a754                       ; 0055a696
        ;   XREF to: 0055a754 (CONDITIONAL_JUMP)  ; LAB_0055a754
    PUSH EAX                            ; 0055a69c | DAT_01e661b8
    CALL FUN_00537e00                   ; 0055a69d
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0055a6a2
    MOV ESI,dword ptr [0x0061b5a8]      ; 0055a6a5 | DAT_0061b5a8
    PUSH ESI                            ; 0055a6ab | DAT_01e661b8
    LEA EDI,[ESP + 0x108]               ; 0055a6ac
    MOV ESI,0x264b29c                   ; 0055a6b3
    CALL FUN_00537e90                   ; 0055a6b8
        ;   XREF to: 00537e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e90()
    ADD ESP,0x4                         ; 0055a6bd
    MOVSD ES:EDI,ESI                    ; 0055a6c0 | DAT_0264b29c
    MOVSD ES:EDI,ESI                    ; 0055a6c1 | DAT_0264b2a0
    MOVSD ES:EDI,ESI                    ; 0055a6c2 | DAT_0264b2a4
    FLD float ptr [ESP + 0x108]         ; 0055a6c3
    MOV EAX,dword ptr [ESP + 0x104]     ; 0055a6ca
    LEA EDI,[ESP + 0xf8]                ; 0055a6d1
    LEA ESI,[ESP + 0xe0]                ; 0055a6d8
    MOV dword ptr [ESP + 0xe0],EAX      ; 0055a6df
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0055a6e6
    FADD float ptr [0x005ea8dc]         ; 0055a6ed | DAT_005ea8dc
    MOV dword ptr [ESP + 0xe8],EAX      ; 0055a6f3
    LEA EAX,[ESP + 0xf8]                ; 0055a6fa
    FSTP float ptr [ESP + 0xe4]         ; 0055a701
    PUSH EAX                            ; 0055a708
    LEA EAX,[ESP + 0x108]               ; 0055a709
    MOVSD ES:EDI,ESI                    ; 0055a710
    MOVSD ES:EDI,ESI                    ; 0055a711
    MOVSD ES:EDI,ESI                    ; 0055a712
    PUSH EAX                            ; 0055a713
    MOV EDI,dword ptr [0x0061b5a8]      ; 0055a714 | DAT_0061b5a8
    PUSH EDI                            ; 0055a71a | DAT_01e661b8
    CALL FUN_00535e10                   ; 0055a71b
        ;   XREF to: 00535e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00535e10()
    ADD ESP,0xc                         ; 0055a720
    TEST EAX,EAX                        ; 0055a723
    JZ 0x0055a9e5                       ; 0055a725
        ;   XREF to: 0055a9e5 (CONDITIONAL_JUMP)  ; LAB_0055a9e5
    MOV dword ptr [0x0061c060],0x5ea829 ; 0055a72b | PTR_DAT_0061c060 | DAT_005ea829
    MOV ECX,dword ptr [0x0061b5a8]      ; 0055a735 | DAT_0061b5a8
        ;   Label: LAB_0055a735
    PUSH ECX                            ; 0055a73b | DAT_01e661b8
    CALL FUN_00537e00                   ; 0055a73c
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    MOV EAX,[0x0061b5a8]                ; 0055a741 | DAT_0061b5a8
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0055a746 | DAT_01fc1070
    ADD ESP,0x4                         ; 0055a74c
    MOV [0x0264bb94],EAX                ; 0055a74f | DAT_0264bb94
    CALL FUN_00550450                   ; 0055a754
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
        ;   Label: LAB_0055a754
    PUSH 0x1                            ; 0055a759
    CALL FUN_00550380                   ; 0055a75b
        ;   XREF to: 00550380 (UNCONDITIONAL_CALL)  ; undefined FUN_00550380()
    ADD ESP,0x4                         ; 0055a760
    PUSH 0x3                            ; 0055a763
    CALL FUN_00550310                   ; 0055a765
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; undefined FUN_00550310()
    ADD ESP,0x4                         ; 0055a76a
    PUSH 0x5ea831                       ; 0055a76d | DAT_005ea831
    MOV EDI,dword ptr [0x0061c060]      ; 0055a772 | PTR_DAT_0061c060
    PUSH EDI                            ; 0055a778 | DAT_005ea829
    CALL FUN_005b8130                   ; 0055a779
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0055a77e
    TEST EAX,EAX                        ; 0055a781
    JNZ 0x0055a9f4                      ; 0055a783
        ;   XREF to: 0055a9f4 (CONDITIONAL_JUMP)  ; LAB_0055a9f4
    MOV ECX,dword ptr [0x0264bb9c]      ; 0055a789 | DAT_0264bb9c
    PUSH ECX                            ; 0055a78f
    MOV EBX,0x3ecccccd                  ; 0055a790
    CALL FUN_00551050                   ; 0055a795
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0055a79a
    MOV dword ptr [ESP + 0x4],EBX       ; 0055a79d
    MOV ESI,dword ptr [0x0264bb98]      ; 0055a7a1 | DAT_0264bb98
        ;   Label: LAB_0055a7a1
    PUSH ESI                            ; 0055a7a7
    CALL FUN_00550b70                   ; 0055a7a8
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0055a7ad
    TEST EAX,EAX                        ; 0055a7b0
    JZ 0x0055aa42                       ; 0055a7b2
        ;   XREF to: 0055aa42 (CONDITIONAL_JUMP)  ; LAB_0055aa42
    MOV EDI,dword ptr [0x0061c060]      ; 0055a7b8 | PTR_DAT_0061c060
    PUSH EDI                            ; 0055a7be | DAT_005ea829
    MOV EAX,[0x0061c064]                ; 0055a7bf | PTR_DAT_0061c064
    PUSH EAX                            ; 0055a7c4 | DAT_005ea823
    CALL FUN_005b8130                   ; 0055a7c5
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0055a7ca
    TEST EAX,EAX                        ; 0055a7cd
    JNZ 0x0055aa7b                      ; 0055a7cf
        ;   XREF to: 0055aa7b (CONDITIONAL_JUMP)  ; LAB_0055aa7b
    CALL FUN_005504d0                   ; 0055a7d5
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
        ;   Label: LAB_0055a7d5
    MOV ESI,0x41f00000                  ; 0055a7da
    MOV EBX,0x264bae4                   ; 0055a7df
    MOV EAX,[0x0061c060]                ; 0055a7e4 | PTR_DAT_0061c060
    XOR ECX,ECX                         ; 0055a7e9
    MOV [0x0061c064],EAX                ; 0055a7eb | PTR_DAT_0061c064
    MOV dword ptr [0x0264bb84],ECX      ; 0055a7f0 | DAT_0264bb84
    MOV dword ptr [0x0264bb88],ECX      ; 0055a7f6 | DAT_0264bb88
    MOV dword ptr [0x0264bb8c],ESI      ; 0055a7fc | DAT_0264bb8c
    MOV dword ptr [ESP + 0x130],ECX     ; 0055a802
    MOV dword ptr [ESP + 0x13c],ECX     ; 0055a809
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0055a810
        ;   Label: LAB_0055a810
    SHL EAX,0x4                         ; 0055a817
    MOV EDX,dword ptr [EAX + 0x264baf0] ; 0055a81a
    PUSH EDX                            ; 0055a820
    MOV dword ptr [ESP + 0x13c],EAX     ; 0055a821
    CALL FUN_00550b70                   ; 0055a828
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0055a82d
    TEST EAX,EAX                        ; 0055a830
    JZ 0x0055aa9f                       ; 0055a832
        ;   XREF to: 0055aa9f (CONDITIONAL_JUMP)  ; LAB_0055aa9f
    FLD float ptr [ESP + 0x134]         ; 0055a838
    FLD float ptr [0x0264bb84]          ; 0055a83f | DAT_0264bb84
    FMUL ST1                            ; 0055a845
    FLD float ptr [0x0264bb88]          ; 0055a847 | DAT_0264bb88
    FMUL ST2                            ; 0055a84d
    FLD float ptr [0x0264bb8c]          ; 0055a84f | DAT_0264bb8c
    FMULP ST3                           ; 0055a855
    LEA EDI,[ESP + 0xd4]                ; 0055a857
    LEA ESI,[ESP + 0xec]                ; 0055a85e
    FXCH                                ; 0055a865
    FSTP float ptr [ESP + 0xec]         ; 0055a867
    FSTP float ptr [ESP + 0xf0]         ; 0055a86e
    FSTP float ptr [ESP + 0xf4]         ; 0055a875
    MOVSD ES:EDI,ESI                    ; 0055a87c
    MOVSD ES:EDI,ESI                    ; 0055a87d
    MOVSD ES:EDI,ESI                    ; 0055a87e
    MOV EAX,dword ptr [ESP + 0x138]     ; 0055a87f
    FLD float ptr [EBX]                 ; 0055a886 | DAT_0264bae4
    FLD float ptr [EBX + 0x4]           ; 0055a888 | DAT_0264bae8
    FLD float ptr [EBX + 0x8]           ; 0055a88b | DAT_0264baec
    FXCH ST2                            ; 0055a88e
    FADD float ptr [ESP + 0xd4]         ; 0055a890
    FXCH                                ; 0055a897
    FADD float ptr [ESP + 0xd8]         ; 0055a899
    FXCH ST2                            ; 0055a8a0
    FADD float ptr [ESP + 0xdc]         ; 0055a8a2
    FXCH                                ; 0055a8a9
    FSTP float ptr [EBX]                ; 0055a8ab | DAT_0264bae4
    FXCH                                ; 0055a8ad
    FSTP float ptr [EBX + 0x4]          ; 0055a8af | DAT_0264bae8
    FSTP float ptr [EBX + 0x8]          ; 0055a8b2 | DAT_0264baec
    FLD float ptr [EAX + 0x264baec]     ; 0055a8b5 | DAT_0264baec
    FABS                                ; 0055a8bb
    FCOMP double ptr [0x005ea8fc]       ; 0055a8bd | DAT_005ea8fc
    FNSTSW AX                           ; 0055a8c3
    SAHF                                ; 0055a8c5
    JBE 0x0055a8de                      ; 0055a8c6
        ;   XREF to: 0055a8de (CONDITIONAL_JUMP)  ; LAB_0055a8de
    MOV EAX,dword ptr [ESP + 0x138]     ; 0055a8c8
    MOV ECX,dword ptr [EAX + 0x264baf0] ; 0055a8cf
    PUSH ECX                            ; 0055a8d5
    CALL FUN_00551050                   ; 0055a8d6
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0055a8db
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0055a8de
        ;   Label: LAB_0055a8de
    INC ESI                             ; 0055a8e5
    ADD EBX,0x10                        ; 0055a8e6
    MOV dword ptr [ESP + 0x13c],ESI     ; 0055a8e9
    CMP ESI,0xa                         ; 0055a8f0
    JL 0x0055a810                       ; 0055a8f3
        ;   XREF to: 0055a810 (CONDITIONAL_JUMP)  ; LAB_0055a810
    FLD float ptr [0x0264bb90]          ; 0055a8f9 | DAT_0264bb90
    FSUB float ptr [ESP + 0x134]        ; 0055a8ff
    FST float ptr [0x0264bb90]          ; 0055a906 | DAT_0264bb90
    FLDZ                                ; 0055a90c
    FCOMPP                              ; 0055a90e
    FNSTSW AX                           ; 0055a910
    SAHF                                ; 0055a912
    JC 0x0055a923                       ; 0055a913
        ;   XREF to: 0055a923 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [ESP + 0x130],0x0     ; 0055a915
    JNZ 0x0055abda                      ; 0055a91d
        ;   XREF to: 0055abda (CONDITIONAL_JUMP)  ; LAB_0055abda
    MOV ESP,EBP                         ; 0055a923
        ;   Label: caseD_4
    POP EBP                             ; 0055a925
    POP EDI                             ; 0055a926
    POP ESI                             ; 0055a927
    POP EBX                             ; 0055a928
    RET                                 ; 0055a929
    MOV EAX,dword ptr [ESP + 0x118]     ; 0055a92a
        ;   Label: LAB_0055a92a
    MOV dword ptr [ESP + 0x128],EAX     ; 0055a931
    JMP 0x0055a43b                      ; 0055a938
        ;   XREF to: 0055a43b (UNCONDITIONAL_JUMP)  ; LAB_0055a43b
    PUSH 0x5ea894                       ; 0055a93d | s_wind_ctl_wav_005ea893+1
        ;   Label: LAB_0055a93d
    CALL FUN_005506b0                   ; 0055a942
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005506b0()
    ADD ESP,0x4                         ; 0055a947
    MOV [0x0264b294],EAX                ; 0055a94a | DAT_0264b294
    JMP 0x0055a496                      ; 0055a94f
        ;   XREF to: 0055a496 (UNCONDITIONAL_JUMP)  ; LAB_0055a496
    MOV EDX,dword ptr [0x0264b294]      ; 0055a954 | DAT_0264b294
        ;   Label: LAB_0055a954
    PUSH EDX                            ; 0055a95a
    PUSH EBX                            ; 0055a95b
    CALL FUN_0055af80                   ; 0055a95c
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af80()
    XOR ECX,ECX                         ; 0055a961
    ADD ESP,0x8                         ; 0055a963
    MOV dword ptr [0x0264b2ac],ECX      ; 0055a966 | DAT_0264b2ac
    JMP 0x0055a4ab                      ; 0055a96c
        ;   XREF to: 0055a4ab (UNCONDITIONAL_JUMP)  ; LAB_0055a4ab
    PUSH 0x5ea8a6                       ; 0055a971 | = "water-2.wav"
        ;   Label: LAB_0055a971
    CALL FUN_005506b0                   ; 0055a976
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005506b0()
    ADD ESP,0x4                         ; 0055a97b
    MOV [0x0264b298],EAX                ; 0055a97e | DAT_0264b298
    JMP 0x0055a5a7                      ; 0055a983
        ;   XREF to: 0055a5a7 (UNCONDITIONAL_JUMP)  ; LAB_0055a5a7
    MOV ECX,dword ptr [0x0264b298]      ; 0055a988 | DAT_0264b298
        ;   Label: LAB_0055a988
    PUSH ECX                            ; 0055a98e
    PUSH EBX                            ; 0055a98f
    CALL FUN_0055af80                   ; 0055a990
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af80()
    XOR EBX,EBX                         ; 0055a995
    ADD ESP,0x8                         ; 0055a997
    MOV dword ptr [0x0264b2b0],EBX      ; 0055a99a | DAT_0264b2b0
    JMP 0x0055a5bc                      ; 0055a9a0
        ;   XREF to: 0055a5bc (UNCONDITIONAL_JUMP)  ; LAB_0055a5bc
    FLD float ptr [0x0264badc]          ; 0055a9a5 | DAT_0264badc
        ;   Label: LAB_0055a9a5
    XOR EAX,EAX                         ; 0055a9ab
    FSTP float ptr [0x0264bad8]         ; 0055a9ad | DAT_0264bad8
    MOV [0x0264bae0],EAX                ; 0055a9b3 | DAT_0264bae0
    JMP 0x0055a60b                      ; 0055a9b8
        ;   XREF to: 0055a60b (UNCONDITIONAL_JUMP)  ; LAB_0055a60b
    PUSH EAX                            ; 0055a9bd
        ;   Label: LAB_0055a9bd
    PUSH 0x3                            ; 0055a9be
    CALL FUN_00551220                   ; 0055a9c0
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; undefined FUN_00551220()
    JMP 0x0055a654                      ; 0055a9c5
        ;   XREF to: 0055a654 (UNCONDITIONAL_JUMP)  ; LAB_0055a654
    MOV ESI,0x5ea825                    ; 0055a9ca | DAT_005ea825
        ;   Label: LAB_0055a9ca
    MOV EBX,0xffffffff                  ; 0055a9cf
    MOV dword ptr [0x0061c060],ESI      ; 0055a9d4 | PTR_DAT_0061c060
    MOV dword ptr [0x0264bb94],EBX      ; 0055a9da | DAT_0264bb94
    JMP 0x0055a754                      ; 0055a9e0
        ;   XREF to: 0055a754 (UNCONDITIONAL_JUMP)  ; LAB_0055a754
    MOV dword ptr [0x0061c060],0x5ea82d ; 0055a9e5 | PTR_DAT_0061c060 | DAT_005ea82d
        ;   Label: LAB_0055a9e5
    JMP 0x0055a735                      ; 0055a9ef
        ;   XREF to: 0055a735 (UNCONDITIONAL_JUMP)  ; LAB_0055a735
    MOV EDX,dword ptr [0x0264bb9c]      ; 0055a9f4 | DAT_0264bb9c
        ;   Label: LAB_0055a9f4
    MOV EAX,0x3f333333                  ; 0055a9fa
    PUSH EDX                            ; 0055a9ff
    MOV dword ptr [ESP + 0x8],EAX       ; 0055aa00
    CALL FUN_00550b70                   ; 0055aa04
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0055aa09
    TEST EAX,EAX                        ; 0055aa0c
    JNZ 0x0055a7a1                      ; 0055aa0e
        ;   XREF to: 0055a7a1 (CONDITIONAL_JUMP)  ; LAB_0055a7a1
    CALL FUN_00550450                   ; 0055aa14
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    PUSH 0x3ecccccd                     ; 0055aa19
    CALL FUN_00550270                   ; 0055aa1e
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; undefined FUN_00550270()
    ADD ESP,0x4                         ; 0055aa23
    PUSH 0x5ea835                       ; 0055aa26 | = "trainext.wav"
    CALL FUN_005506b0                   ; 0055aa2b
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005506b0()
    ADD ESP,0x4                         ; 0055aa30
    MOV [0x0264bb9c],EAX                ; 0055aa33 | DAT_0264bb9c
    CALL FUN_005504d0                   ; 0055aa38
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    JMP 0x0055a7a1                      ; 0055aa3d
        ;   XREF to: 0055a7a1 (UNCONDITIONAL_JUMP)  ; LAB_0055a7a1
    CALL FUN_00550450                   ; 0055aa42
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
        ;   Label: LAB_0055aa42
    FLD float ptr [ESP + 0x4]           ; 0055aa47
    FMUL double ptr [0x005ea8e4]        ; 0055aa4b | DAT_005ea8e4
    SUB ESP,0x4                         ; 0055aa51
    FSTP float ptr [ESP]                ; 0055aa54
    CALL FUN_00550270                   ; 0055aa57
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; undefined FUN_00550270()
    ADD ESP,0x4                         ; 0055aa5c
    PUSH 0x5ea842                       ; 0055aa5f | = "railnoiz.wav"
    CALL FUN_005506b0                   ; 0055aa64
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005506b0()
    ADD ESP,0x4                         ; 0055aa69
    MOV [0x0264bb98],EAX                ; 0055aa6c | DAT_0264bb98
    CALL FUN_005504d0                   ; 0055aa71
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    JMP 0x0055a7d5                      ; 0055aa76
        ;   XREF to: 0055a7d5 (UNCONDITIONAL_JUMP)  ; LAB_0055a7d5
    FLD float ptr [ESP + 0x4]           ; 0055aa7b
        ;   Label: LAB_0055aa7b
    FMUL double ptr [0x005ea8e4]        ; 0055aa7f | DAT_005ea8e4
    SUB ESP,0x4                         ; 0055aa85
    MOV EDX,dword ptr [0x0264bb98]      ; 0055aa88 | DAT_0264bb98
    FSTP float ptr [ESP]                ; 0055aa8e
    PUSH EDX                            ; 0055aa91
    CALL FUN_00550f20                   ; 0055aa92
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00550f20()
    ADD ESP,0x8                         ; 0055aa97
    JMP 0x0055a7d5                      ; 0055aa9a
        ;   XREF to: 0055a7d5 (UNCONDITIONAL_JUMP)  ; LAB_0055a7d5
    MOV dword ptr [ESP + 0x130],EBX     ; 0055aa9f | DAT_0264bae4
        ;   Label: LAB_0055aa9f
    JMP 0x0055a8de                      ; 0055aaa6
        ;   XREF to: 0055a8de (UNCONDITIONAL_JUMP)  ; LAB_0055a8de
    FLD float ptr [ESP + 0x4]           ; 0055aaab
        ;   Label: caseD_0
    MOV EDI,dword ptr [0x0061c060]      ; 0055aaaf | PTR_DAT_0061c060
    FMUL double ptr [0x005ea8f4]        ; 0055aab5 | DAT_005ea8f4
    PUSH EDI                            ; 0055aabb | DAT_005ea829
    MOV ESI,0x41c80000                  ; 0055aabc
    PUSH 0x5ea84f                       ; 0055aac1 | = "rail?%s.wav"
    LEA EAX,[ESP + 0x78]                ; 0055aac6
    MOV dword ptr [ESP + 0x128],ESI     ; 0055aaca
    PUSH EAX                            ; 0055aad1
    FSTP float ptr [ESP + 0xc]          ; 0055aad2
    CALL FUN_005b7790                   ; 0055aad6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0055aadb
    PUSH 0x40000000                     ; 0055aade
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x134]     ; 0055aae3
    PUSH 0xc0400000                     ; 0055aaea
    MOV dword ptr [EAX],0x0             ; 0055aaef
    CALL FUN_0040cf60                   ; 0055aaf5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x148],EAX     ; 0055aafa
    FLD float ptr [ESP + 0x148]         ; 0055ab01
    ADD ESP,0x8                         ; 0055ab08
    FMUL float ptr [ESP + 0x120]        ; 0055ab0b
    MOV EAX,dword ptr [ESP + 0x130]     ; 0055ab12
    FADD float ptr [0x0264b2a4]         ; 0055ab19 | DAT_0264b2a4
    MOV dword ptr [EAX + 0x4],0x0       ; 0055ab1f
    FSTP float ptr [EAX + 0x8]          ; 0055ab26
    CALL FUN_00550450                   ; 0055ab29
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    PUSH 0x3                            ; 0055ab2e
    CALL FUN_00550310                   ; 0055ab30
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; undefined FUN_00550310()
    ADD ESP,0x4                         ; 0055ab35
    PUSH 0x264bb84                      ; 0055ab38 | DAT_0264bb84
    CALL FUN_00550210                   ; 0055ab3d
        ;   XREF to: 00550210 (UNCONDITIONAL_CALL)  ; undefined FUN_00550210()
    ADD ESP,0x4                         ; 0055ab42
    FLD float ptr [ESP]                 ; 0055ab45
    SUB ESP,0x8                         ; 0055ab48
    LEA EAX,[ESP + 0x78]                ; 0055ab4b
    FSTP double ptr [ESP]               ; 0055ab4f
    PUSH EAX                            ; 0055ab52
    PUSH 0x5ea865                       ; 0055ab53 | = "%s @ %g"
    LEA EAX,[ESP + 0x1c]                ; 0055ab58
    PUSH EAX                            ; 0055ab5c
    CALL FUN_005b7790                   ; 0055ab5d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x14                        ; 0055ab62
    MOV EAX,dword ptr [ESP + 0x130]     ; 0055ab65
    PUSH EAX                            ; 0055ab6c
    LEA EAX,[ESP + 0x10]                ; 0055ab6d
    PUSH EAX                            ; 0055ab71
    PUSH 0x0                            ; 0055ab72
    MOV EDX,dword ptr [0x0061c068]      ; 0055ab74 | DAT_0061c068
    PUSH EDX                            ; 0055ab7a
    CALL FUN_0055ae80                   ; 0055ab7b
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0x10                        ; 0055ab80
    MOV EDX,dword ptr [ESP + 0x130]     ; 0055ab83
    MOV dword ptr [EDX + 0xc],EAX       ; 0055ab8a
    CALL FUN_005504d0                   ; 0055ab8d
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    MOV ESP,EBP                         ; 0055ab92
    POP EBP                             ; 0055ab94
    POP EDI                             ; 0055ab95
    POP ESI                             ; 0055ab96
    POP EBX                             ; 0055ab97
    RET                                 ; 0055ab98
    FLD float ptr [ESP + 0x4]           ; 0055ab99
        ;   Label: caseD_2
    FMUL double ptr [0x005ea8ec]        ; 0055ab9d | DAT_005ea8ec
    MOV EBX,0x41a00000                  ; 0055aba3
    MOV ESI,0x5ea85b                    ; 0055aba8 | DAT_005ea85b
    LEA EDI,[ESP + 0x70]                ; 0055abad
    MOV dword ptr [ESP + 0x120],EBX     ; 0055abb1
    FSTP float ptr [ESP]                ; 0055abb8
    PUSH EDI                            ; 0055abbb
    MOV AL,byte ptr [ESI]               ; 0055abbc | DAT_005ea85b | DAT_005ea85d
        ;   Label: LAB_0055abbc
    MOV byte ptr [EDI],AL               ; 0055abbe
    CMP AL,0x0                          ; 0055abc0
    JZ 0x0055abd4                       ; 0055abc2
        ;   XREF to: 0055abd4 (CONDITIONAL_JUMP)  ; LAB_0055abd4
    MOV AL,byte ptr [ESI + 0x1]         ; 0055abc4 | DAT_005ea85c | = "p?.wav"
    ADD ESI,0x2                         ; 0055abc7
    MOV byte ptr [EDI + 0x1],AL         ; 0055abca
    ADD EDI,0x2                         ; 0055abcd
    CMP AL,0x0                          ; 0055abd0
    JNZ 0x0055abbc                      ; 0055abd2
        ;   XREF to: 0055abbc (CONDITIONAL_JUMP)  ; LAB_0055abbc
    POP EDI                             ; 0055abd4
        ;   Label: LAB_0055abd4
    JMP 0x0055aade                      ; 0055abd5
        ;   XREF to: 0055aade (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x40a00000                     ; 0055abda
        ;   Label: LAB_0055abda
    PUSH 0x3f800000                     ; 0055abdf
    LEA EDI,[ESP + 0x78]                ; 0055abe4
    MOV ESI,0x61c288                    ; 0055abe8 | DAT_0061c288
    CALL FUN_0040cf60                   ; 0055abed
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x148],EAX     ; 0055abf2
    MOV ECX,0x19                        ; 0055abf9
    FLD float ptr [ESP + 0x148]         ; 0055abfe
    ADD ESP,0x8                         ; 0055ac05
    MOV EDX,0x41a00000                  ; 0055ac08
    MOVSD.REP ES:EDI,ESI                ; 0055ac0d | DAT_0061c288 | DAT_0061c28c
    FSTP float ptr [0x0264bb90]         ; 0055ac0f | DAT_0264bb90
    MOV ECX,0x3f800000                  ; 0055ac15
    MOV dword ptr [ESP + 0x120],EDX     ; 0055ac1a
    MOV dword ptr [ESP],ECX             ; 0055ac21
    CALL FUN_005b849c                   ; 0055ac24
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    MOV EDX,EAX                         ; 0055ac29
    MOV EBX,0x5                         ; 0055ac2b
    SAR EDX,0x1f                        ; 0055ac30
    IDIV EBX                            ; 0055ac33
    CMP EDX,0x4                         ; 0055ac35
    JA 0x0055aade                       ; 0055ac38
        ;   XREF to: 0055aade (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x55a3ac]  ; 0055ac3e | caseD_1 | caseD_3 | caseD_4
        ;   Label: switchD

