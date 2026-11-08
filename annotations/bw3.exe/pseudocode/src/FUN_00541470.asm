; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00541470(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_005418d0 at 005419c0
;
; Referenced Globals:
;   undefined4 DAT_005db0f0
;
; Called Functions:
;   FUN_0041e220
;   FUN_0045b800
;   FUN_0045b870
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541470
        ;   Label: FUN_00541470
    PUSH ESI                            ; 00541471
    PUSH EDI                            ; 00541472
    PUSH EBP                            ; 00541473
    MOV EBP,ESP                         ; 00541474
    SUB ESP,0x184                       ; 00541476
    SUB EBP,0x7a                        ; 0054147c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0054147f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00541485
    LEA EDI,[EBP + -0x32]               ; 0054148b
    LEA ESI,[EBP + 0xa]                 ; 0054148e
    FLD float ptr [EAX + 0xc]           ; 00541491
    FLD float ptr [EAX + 0x10]          ; 00541494
    FLD float ptr [EAX + 0x14]          ; 00541497
    FXCH ST2                            ; 0054149a
    FCHS                                ; 0054149c
    FXCH                                ; 0054149e
    FCHS                                ; 005414a0
    FXCH ST2                            ; 005414a2
    FCHS                                ; 005414a4
    FXCH                                ; 005414a6
    FSTP float ptr [EBP + 0xa]          ; 005414a8
    FXCH                                ; 005414ab
    FSTP float ptr [EBP + 0xe]          ; 005414ad
    FSTP float ptr [EBP + 0x12]         ; 005414b0
    MOVSD ES:EDI,ESI                    ; 005414b3
    MOVSD ES:EDI,ESI                    ; 005414b4
    MOVSD ES:EDI,ESI                    ; 005414b5
    LEA EAX,[EBP + 0xffffff56]          ; 005414b6
    LEA ESI,[EBP + -0x32]               ; 005414bc
    CMP EAX,ESI                         ; 005414bf
    JNZ 0x00541848                      ; 005414c1
        ;   XREF to: 00541848 (CONDITIONAL_JUMP)  ; LAB_00541848
    MOV ESI,dword ptr [EBP + 0x92]      ; 005414c7
        ;   Label: LAB_005414c7
    LEA EAX,[EBP + 0xffffff62]          ; 005414cd
    ADD ESI,0xc                         ; 005414d3
    CMP EAX,ESI                         ; 005414d6
    JNZ 0x00541868                      ; 005414d8
        ;   XREF to: 00541868 (CONDITIONAL_JUMP)  ; LAB_00541868
    PUSH 0x5db0f0                       ; 005414de | DAT_005db0f0
        ;   Label: LAB_005414de
    PUSH 0x8                            ; 005414e3
    LEA EAX,[EBP + 0xfffffef6]          ; 005414e5
    PUSH EAX                            ; 005414eb
    CALL FUN_005a30d7                   ; 005414ec
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    MOV EAX,dword ptr [EBP + 0x92]      ; 005414f1
    ADD ESP,0xc                         ; 005414f7
    ADD EAX,0x18                        ; 005414fa
    XOR EDX,EDX                         ; 005414fd
    MOV dword ptr [EBP + 0x6e],EAX      ; 005414ff
    LEA EAX,[EBX + 0x18]                ; 00541502
    MOV dword ptr [EBP + 0x6a],EDX      ; 00541505
    MOV dword ptr [EBP + 0x56],EAX      ; 00541508
    MOV EAX,dword ptr [EBX + 0xc]       ; 0054150b
        ;   Label: LAB_0054150b
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0054150e
    MOV dword ptr [EBP + 0x5a],EAX      ; 00541511
    IMUL EAX,ECX,0xc                    ; 00541514
    LEA ESI,[EBP + 0xfffffef6]          ; 00541517
    ADD EAX,ESI                         ; 0054151d
    MOV dword ptr [EBP + 0x66],EAX      ; 0054151f
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00541522
        ;   Label: LAB_00541522
    MOV dword ptr [EBP + -0x56],EAX     ; 00541525
    TEST byte ptr [EBP + 0x6a],0x2      ; 00541528
    JZ 0x0054189e                       ; 0054152c
        ;   XREF to: 0054189e (CONDITIONAL_JUMP)  ; LAB_0054189e
    FLD float ptr [EBX + 0x10]          ; 00541532
    FCHS                                ; 00541535
    FSTP float ptr [EBP + 0x5e]         ; 00541537
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0054153a
        ;   Label: LAB_0054153a
    MOV DL,byte ptr [EBP + 0x6a]        ; 0054153d
    MOV dword ptr [EBP + -0x52],EAX     ; 00541540
    TEST DL,0x4                         ; 00541543
    JZ 0x005418a9                       ; 00541546
        ;   XREF to: 005418a9 (CONDITIONAL_JUMP)  ; LAB_005418a9
    FLD float ptr [EBX + 0x14]          ; 0054154c
    FCHS                                ; 0054154f
    FSTP float ptr [EBP + 0x62]         ; 00541551
    MOV EAX,dword ptr [EBP + 0x62]      ; 00541554
        ;   Label: LAB_00541554
    MOV dword ptr [EBP + -0x4e],EAX     ; 00541557
    LEA EAX,[EBP + -0x56]               ; 0054155a
    PUSH EAX                            ; 0054155d
    MOV ESI,dword ptr [EBP + 0x56]      ; 0054155e
    PUSH ESI                            ; 00541561
    LEA ESI,[EBP + 0x22]                ; 00541562
    LEA EDI,[EBP + -0x3e]               ; 00541565
    CALL FUN_0045b800                   ; 00541568
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[EBP + 0x22]                ; 0054156d
    MOVSD ES:EDI,ESI                    ; 00541570
    MOVSD ES:EDI,ESI                    ; 00541571
    MOVSD ES:EDI,ESI                    ; 00541572
    FLD float ptr [EBP + -0x3e]         ; 00541573
    FLD float ptr [EBP + -0x3a]         ; 00541576
    FLD float ptr [EBP + -0x36]         ; 00541579
    LEA EDI,[EBP + -0x7a]               ; 0054157c
    LEA ESI,[EBP + -0x26]               ; 0054157f
    FXCH ST2                            ; 00541582
    FADD float ptr [EBX]                ; 00541584
    FXCH                                ; 00541586
    FADD float ptr [EBX + 0x4]          ; 00541588
    FXCH ST2                            ; 0054158b
    FADD float ptr [EBX + 0x8]          ; 0054158d
    FXCH                                ; 00541590
    FSTP float ptr [EBP + -0x26]        ; 00541592
    FXCH                                ; 00541595
    FSTP float ptr [EBP + -0x22]        ; 00541597
    FSTP float ptr [EBP + -0x1e]        ; 0054159a
    MOVSD ES:EDI,ESI                    ; 0054159d
    MOVSD ES:EDI,ESI                    ; 0054159e
    MOVSD ES:EDI,ESI                    ; 0054159f
    LEA EAX,[EBP + -0x56]               ; 005415a0
    LEA ESI,[EBP + -0x7a]               ; 005415a3
    ADD ESP,0x8                         ; 005415a6
    CMP EAX,ESI                         ; 005415a9
    JZ 0x005415bf                       ; 005415ab
        ;   XREF to: 005415bf (CONDITIONAL_JUMP)  ; LAB_005415bf
    MOV EAX,dword ptr [EBP + -0x7a]     ; 005415ad
    MOV dword ptr [EBP + -0x56],EAX     ; 005415b0
    MOV EAX,dword ptr [EBP + -0x76]     ; 005415b3
    MOV dword ptr [EBP + -0x52],EAX     ; 005415b6
    MOV EAX,dword ptr [EBP + -0x72]     ; 005415b9
    MOV dword ptr [EBP + -0x4e],EAX     ; 005415bc
    FLD float ptr [EBP + -0x56]         ; 005415bf
        ;   Label: LAB_005415bf
    FLD float ptr [EBP + -0x52]         ; 005415c2
    FLD float ptr [EBP + -0x4e]         ; 005415c5
    MOV EAX,dword ptr [EBP + 0x92]      ; 005415c8
    LEA EDI,[EBP + 0xffffff7a]          ; 005415ce
    LEA ESI,[EBP + -0x1a]               ; 005415d4
    FXCH ST2                            ; 005415d7
    FSUB float ptr [EAX]                ; 005415d9
    FXCH                                ; 005415db
    FSUB float ptr [EAX + 0x4]          ; 005415dd
    FXCH ST2                            ; 005415e0
    FSUB float ptr [EAX + 0x8]          ; 005415e2
    FXCH                                ; 005415e5
    FSTP float ptr [EBP + -0x1a]        ; 005415e7
    FXCH                                ; 005415ea
    FSTP float ptr [EBP + -0x16]        ; 005415ec
    FSTP float ptr [EBP + -0x12]        ; 005415ef
    LEA EAX,[EBP + 0xffffff7a]          ; 005415f2
    MOVSD ES:EDI,ESI                    ; 005415f8
    MOVSD ES:EDI,ESI                    ; 005415f9
    MOVSD ES:EDI,ESI                    ; 005415fa
    PUSH EAX                            ; 005415fb
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005415fc
    PUSH EDI                            ; 005415ff
    LEA ESI,[EBP + -0x2]                ; 00541600
    LEA EDI,[EBP + -0xe]                ; 00541603
    CALL FUN_0045b870                   ; 00541606
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[EBP + -0x2]                ; 0054160b
    MOVSD ES:EDI,ESI                    ; 0054160e
    MOVSD ES:EDI,ESI                    ; 0054160f
    MOVSD ES:EDI,ESI                    ; 00541610
    LEA EAX,[EBP + -0x56]               ; 00541611
    LEA ESI,[EBP + -0xe]                ; 00541614
    ADD ESP,0x8                         ; 00541617
    CMP EAX,ESI                         ; 0054161a
    JZ 0x00541630                       ; 0054161c
        ;   XREF to: 00541630 (CONDITIONAL_JUMP)  ; LAB_00541630
    MOV EAX,dword ptr [EBP + -0xe]      ; 0054161e
    MOV dword ptr [EBP + -0x56],EAX     ; 00541621
    MOV EAX,dword ptr [EBP + -0xa]      ; 00541624
    MOV dword ptr [EBP + -0x52],EAX     ; 00541627
    MOV EAX,dword ptr [EBP + -0x6]      ; 0054162a
    MOV dword ptr [EBP + -0x4e],EAX     ; 0054162d
    FLD float ptr [EBP + 0xffffff56]    ; 00541630
        ;   Label: LAB_00541630
    FCOMP float ptr [EBP + -0x56]       ; 00541636
    FNSTSW AX                           ; 00541639
    SAHF                                ; 0054163b
    JA 0x00541688                       ; 0054163c
        ;   XREF to: 00541688 (CONDITIONAL_JUMP)  ; LAB_00541688
    FLD float ptr [EBP + 0xffffff5a]    ; 0054163e
    FCOMP float ptr [EBP + -0x52]       ; 00541644
    FNSTSW AX                           ; 00541647
    SAHF                                ; 00541649
    JA 0x00541688                       ; 0054164a
        ;   XREF to: 00541688 (CONDITIONAL_JUMP)  ; LAB_00541688
    FLD float ptr [EBP + 0xffffff5e]    ; 0054164c
    FCOMP float ptr [EBP + -0x4e]       ; 00541652
    FNSTSW AX                           ; 00541655
    SAHF                                ; 00541657
    JA 0x00541688                       ; 00541658
        ;   XREF to: 00541688 (CONDITIONAL_JUMP)  ; LAB_00541688
    FLD float ptr [EBP + 0xffffff62]    ; 0054165a
    FCOMP float ptr [EBP + -0x56]       ; 00541660
    FNSTSW AX                           ; 00541663
    SAHF                                ; 00541665
    JC 0x00541688                       ; 00541666
        ;   XREF to: 00541688 (CONDITIONAL_JUMP)  ; LAB_00541688
    FLD float ptr [EBP + 0xffffff66]    ; 00541668
    FCOMP float ptr [EBP + -0x52]       ; 0054166e
    FNSTSW AX                           ; 00541671
    SAHF                                ; 00541673
    JC 0x00541688                       ; 00541674
        ;   XREF to: 00541688 (CONDITIONAL_JUMP)  ; LAB_00541688
    FLD float ptr [EBP + 0xffffff6a]    ; 00541676
    FCOMP float ptr [EBP + -0x4e]       ; 0054167c
    FNSTSW AX                           ; 0054167f
    SAHF                                ; 00541681
    JNC 0x005418b4                      ; 00541682
        ;   XREF to: 005418b4 (CONDITIONAL_JUMP)  ; LAB_005418b4
    MOV EDX,dword ptr [EBP + 0x66]      ; 00541688
        ;   Label: LAB_00541688
    LEA EAX,[EBP + -0x56]               ; 0054168b
    CMP EAX,EDX                         ; 0054168e
    JZ 0x005416a3                       ; 00541690
        ;   XREF to: 005416a3 (CONDITIONAL_JUMP)  ; LAB_005416a3
    MOV EAX,dword ptr [EBP + -0x56]     ; 00541692
    MOV dword ptr [EDX],EAX             ; 00541695
    MOV EAX,dword ptr [EBP + -0x52]     ; 00541697
    MOV dword ptr [EDX + 0x4],EAX       ; 0054169a
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0054169d
    MOV dword ptr [EDX + 0x8],EAX       ; 005416a0
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005416a3
        ;   Label: LAB_005416a3
    MOV ECX,dword ptr [EBP + 0x66]      ; 005416a6
    INC ESI                             ; 005416a9
    ADD ECX,0xc                         ; 005416aa
    MOV dword ptr [EBP + 0x6a],ESI      ; 005416ad
    MOV dword ptr [EBP + 0x66],ECX      ; 005416b0
    CMP ESI,0x8                         ; 005416b3
    JL 0x00541887                       ; 005416b6
        ;   XREF to: 00541887 (CONDITIONAL_JUMP)  ; LAB_00541887
    XOR EAX,EAX                         ; 005416bc
    LEA EBX,[EBP + 0xfffffef6]          ; 005416be
    MOV dword ptr [EBP + 0x52],EAX      ; 005416c4
    MOV EAX,dword ptr [EBP + 0x52]      ; 005416c7
        ;   Label: LAB_005416c7
    XOR AL,0x1                          ; 005416ca
    IMUL EAX,EAX,0xc                    ; 005416cc
    LEA ESI,[EBP + 0xfffffef6]          ; 005416cf
    PUSH 0x0                            ; 005416d5
    LEA EDI,[EBP + 0x16]                ; 005416d7
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 005416da
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 005416de
    FLD float ptr [ESI + EAX*0x1]       ; 005416e2
    LEA ESI,[EBP + -0x4a]               ; 005416e5
    LEA EAX,[EBP + 0x16]                ; 005416e8
    FSUB float ptr [EBX]                ; 005416eb
    FXCH ST2                            ; 005416ed
    FSUB float ptr [EBX + 0x4]          ; 005416ef
    FXCH                                ; 005416f2
    FSUB float ptr [EBX + 0x8]          ; 005416f4
    FXCH ST2                            ; 005416f7
    FSTP float ptr [EBP + -0x4a]        ; 005416f9
    PUSH EAX                            ; 005416fc
    FSTP float ptr [EBP + -0x46]        ; 005416fd
    LEA EAX,[EBP + 0xffffff56]          ; 00541700
    PUSH EBX                            ; 00541706
    FSTP float ptr [EBP + -0x42]        ; 00541707
    PUSH EAX                            ; 0054170a
    MOVSD ES:EDI,ESI                    ; 0054170b
    MOVSD ES:EDI,ESI                    ; 0054170c
    MOVSD ES:EDI,ESI                    ; 0054170d
    CALL FUN_0041e220                   ; 0054170e
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e220()
    FLDZ                                ; 00541713
    MOV dword ptr [EBP + 0x76],EAX      ; 00541715
    ADD ESP,0x10                        ; 00541718
    MOV EAX,dword ptr [EBP + 0x76]      ; 0054171b
    MOV dword ptr [EBP + 0x72],EAX      ; 0054171e
    FLD float ptr [EBP + 0x72]          ; 00541721
    FSTP double ptr [EBP + 0x4a]        ; 00541724
    FCOMP double ptr [EBP + 0x4a]       ; 00541727
    FNSTSW AX                           ; 0054172a
    SAHF                                ; 0054172c
    JA 0x0054173d                       ; 0054172d
        ;   XREF to: 0054173d (CONDITIONAL_JUMP)  ; LAB_0054173d
    FLD1                                ; 0054172f
    FCOMP double ptr [EBP + 0x4a]       ; 00541731
    FNSTSW AX                           ; 00541734
    SAHF                                ; 00541736
    JNC 0x005418b4                      ; 00541737
        ;   XREF to: 005418b4 (CONDITIONAL_JUMP)  ; LAB_005418b4
    MOV ESI,dword ptr [EBP + 0x52]      ; 0054173d
        ;   Label: LAB_0054173d
    XOR SI,0x2                          ; 00541740
    IMUL ESI,ESI,0xc                    ; 00541744
    LEA EAX,[EBP + 0xfffffef6]          ; 00541747
    PUSH 0x0                            ; 0054174d
    LEA EDI,[EBP + 0x2e]                ; 0054174f
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 00541752
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 00541756
    FLD float ptr [ESI + EAX*0x1]       ; 0054175a
    LEA ESI,[EBP + -0x6e]               ; 0054175d
    LEA EAX,[EBP + 0x2e]                ; 00541760
    FSUB float ptr [EBX]                ; 00541763
    FXCH ST2                            ; 00541765
    FSUB float ptr [EBX + 0x4]          ; 00541767
    FXCH                                ; 0054176a
    FSUB float ptr [EBX + 0x8]          ; 0054176c
    FXCH ST2                            ; 0054176f
    FSTP float ptr [EBP + -0x6e]        ; 00541771
    PUSH EAX                            ; 00541774
    FSTP float ptr [EBP + -0x6a]        ; 00541775
    LEA EAX,[EBP + 0xffffff56]          ; 00541778
    PUSH EBX                            ; 0054177e
    FSTP float ptr [EBP + -0x66]        ; 0054177f
    PUSH EAX                            ; 00541782
    MOVSD ES:EDI,ESI                    ; 00541783
    MOVSD ES:EDI,ESI                    ; 00541784
    MOVSD ES:EDI,ESI                    ; 00541785
    CALL FUN_0041e220                   ; 00541786
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e220()
    FLDZ                                ; 0054178b
    MOV dword ptr [EBP + 0x76],EAX      ; 0054178d
    ADD ESP,0x10                        ; 00541790
    FLD float ptr [EBP + 0x76]          ; 00541793
    FSTP double ptr [EBP + 0x42]        ; 00541796
    FCOMP double ptr [EBP + 0x42]       ; 00541799
    FNSTSW AX                           ; 0054179c
    SAHF                                ; 0054179e
    JA 0x005417af                       ; 0054179f
        ;   XREF to: 005417af (CONDITIONAL_JUMP)  ; LAB_005417af
    FLD1                                ; 005417a1
    FCOMP double ptr [EBP + 0x42]       ; 005417a3
    FNSTSW AX                           ; 005417a6
    SAHF                                ; 005417a8
    JNC 0x005418b4                      ; 005417a9
        ;   XREF to: 005418b4 (CONDITIONAL_JUMP)  ; LAB_005418b4
    MOV EAX,dword ptr [EBP + 0x52]      ; 005417af
        ;   Label: LAB_005417af
    XOR AL,0x4                          ; 005417b2
    IMUL EAX,EAX,0xc                    ; 005417b4
    LEA ESI,[EBP + 0xfffffef6]          ; 005417b7
    PUSH 0x0                            ; 005417bd
    LEA EDI,[EBP + -0x62]               ; 005417bf
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 005417c2
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 005417c6
    FLD float ptr [ESI + EAX*0x1]       ; 005417ca
    LEA ESI,[EBP + 0xffffff6e]          ; 005417cd
    LEA EAX,[EBP + -0x62]               ; 005417d3
    FSUB float ptr [EBX]                ; 005417d6
    FXCH ST2                            ; 005417d8
    FSUB float ptr [EBX + 0x4]          ; 005417da
    FXCH                                ; 005417dd
    FSUB float ptr [EBX + 0x8]          ; 005417df
    FXCH ST2                            ; 005417e2
    FSTP float ptr [EBP + 0xffffff6e]   ; 005417e4
    PUSH EAX                            ; 005417ea
    FSTP float ptr [EBP + 0xffffff72]   ; 005417eb
    LEA EAX,[EBP + 0xffffff56]          ; 005417f1
    PUSH EBX                            ; 005417f7
    FSTP float ptr [EBP + 0xffffff76]   ; 005417f8
    PUSH EAX                            ; 005417fe
    MOVSD ES:EDI,ESI                    ; 005417ff
    MOVSD ES:EDI,ESI                    ; 00541800
    MOVSD ES:EDI,ESI                    ; 00541801
    CALL FUN_0041e220                   ; 00541802
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e220()
    FLDZ                                ; 00541807
    MOV dword ptr [EBP + 0x76],EAX      ; 00541809
    ADD ESP,0x10                        ; 0054180c
    FLD float ptr [EBP + 0x76]          ; 0054180f
    FSTP double ptr [EBP + 0x3a]        ; 00541812
    FCOMP double ptr [EBP + 0x3a]       ; 00541815
    FNSTSW AX                           ; 00541818
    SAHF                                ; 0054181a
    JA 0x0054182b                       ; 0054181b
        ;   XREF to: 0054182b (CONDITIONAL_JUMP)  ; LAB_0054182b
    FLD1                                ; 0054181d
    FCOMP double ptr [EBP + 0x3a]       ; 0054181f
    FNSTSW AX                           ; 00541822
    SAHF                                ; 00541824
    JNC 0x005418b4                      ; 00541825
        ;   XREF to: 005418b4 (CONDITIONAL_JUMP)  ; LAB_005418b4
    MOV EDX,dword ptr [EBP + 0x52]      ; 0054182b
        ;   Label: LAB_0054182b
    INC EDX                             ; 0054182e
    ADD EBX,0xc                         ; 0054182f
    MOV dword ptr [EBP + 0x52],EDX      ; 00541832
    CMP EDX,0x8                         ; 00541835
    JL 0x005416c7                       ; 00541838
        ;   XREF to: 005416c7 (CONDITIONAL_JUMP)  ; LAB_005416c7
    XOR EAX,EAX                         ; 0054183e
    LEA ESP,[EBP + 0x7a]                ; 00541840
    POP EBP                             ; 00541843
    POP EDI                             ; 00541844
    POP ESI                             ; 00541845
    POP EBX                             ; 00541846
    RET                                 ; 00541847
    MOV EAX,dword ptr [EBP + -0x32]     ; 00541848
        ;   Label: LAB_00541848
    MOV dword ptr [EBP + 0xffffff56],EAX ; 0054184b
    MOV EAX,dword ptr [EBP + -0x2e]     ; 00541851
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 00541854
    MOV EAX,dword ptr [EBP + -0x2a]     ; 0054185a
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 0054185d
    JMP 0x005414c7                      ; 00541863
        ;   XREF to: 005414c7 (UNCONDITIONAL_JUMP)  ; LAB_005414c7
    MOV EAX,dword ptr [ESI]             ; 00541868
        ;   Label: LAB_00541868
    MOV dword ptr [EBP + 0xffffff62],EAX ; 0054186a
    MOV EAX,dword ptr [ESI + 0x4]       ; 00541870
    MOV dword ptr [EBP + 0xffffff66],EAX ; 00541873
    MOV EAX,dword ptr [ESI + 0x8]       ; 00541879
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 0054187c
    JMP 0x005414de                      ; 00541882
        ;   XREF to: 005414de (UNCONDITIONAL_JUMP)  ; LAB_005414de
    TEST byte ptr [EBP + 0x6a],0x1      ; 00541887
        ;   Label: LAB_00541887
    JZ 0x0054150b                       ; 0054188b
        ;   XREF to: 0054150b (CONDITIONAL_JUMP)  ; LAB_0054150b
    FLD float ptr [EBX + 0xc]           ; 00541891
    FCHS                                ; 00541894
    FSTP float ptr [EBP + 0x5a]         ; 00541896
    JMP 0x00541522                      ; 00541899
        ;   XREF to: 00541522 (UNCONDITIONAL_JUMP)  ; LAB_00541522
    MOV EAX,dword ptr [EBX + 0x10]      ; 0054189e
        ;   Label: LAB_0054189e
    MOV dword ptr [EBP + 0x5e],EAX      ; 005418a1
    JMP 0x0054153a                      ; 005418a4
        ;   XREF to: 0054153a (UNCONDITIONAL_JUMP)  ; LAB_0054153a
    MOV EAX,dword ptr [EBX + 0x14]      ; 005418a9
        ;   Label: LAB_005418a9
    MOV dword ptr [EBP + 0x62],EAX      ; 005418ac
    JMP 0x00541554                      ; 005418af
        ;   XREF to: 00541554 (UNCONDITIONAL_JUMP)  ; LAB_00541554
    MOV EAX,0x1                         ; 005418b4
        ;   Label: LAB_005418b4
    LEA ESP,[EBP + 0x7a]                ; 005418b9
    POP EBP                             ; 005418bc
    POP EDI                             ; 005418bd
    POP ESI                             ; 005418be
    POP EBX                             ; 005418bf
    RET                                 ; 005418c0

