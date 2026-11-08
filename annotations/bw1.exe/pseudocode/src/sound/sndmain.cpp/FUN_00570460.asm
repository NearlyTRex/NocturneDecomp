; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00570460(int param_1,float param_2,float param_3)
;
; Local Variables:
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
;
; XREF[2]:
;   FUN_00572d20 at 00572f50
;   FUN_00577040 at 0057708e
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3254
;   TerminatedCString s_generateSilence_invalid_005f3269
;   TerminatedCString s_sound_sndmain_cpp_005f34ab
;   TerminatedCString s_SfxSlot_pollStream_must_005f34c0
;   TerminatedCString s_sound_sndmain_cpp_005f34e6
;   TerminatedCString s_SfxSample_pollStream_my_005f34fb
;   TerminatedCString s_SfxSample_pollStream_no_005f3530
;   TerminatedCString s_sound_sndmain_cpp_005f355a
;   TerminatedCString s_SfxSample_pollStream_can_005f356f
;   TerminatedCString s_SfxSample_pollStream_err_005f35b8
;   TerminatedCString s_sound_sndmain_cpp_005f35f6
;   TerminatedCString s_nextLoadSampleDest_d_all_005f360b
;   TerminatedCString s_Error_locking_s_while_st_005f3635
;   TerminatedCString s_sound_sndmain_cpp_005f3657
;   TerminatedCString s_Can_t_stream_unless_we_h_005f366c
;   ... and 14 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_0052b170
;   FUN_00570020
;   FUN_00570160
;   FUN_00570260
;   FUN_005702c0
;   FUN_00571d70
;   FUN_00571fa0
;   FUN_005723e0
;   FUN_00572400
;   FUN_00572680
;   FUN_005773f0
;   FUN_005a0c10
;   FUN_005a0d70
;   FUN_005bfb70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570460
        ;   Label: FUN_00570460
    PUSH ESI                            ; 00570461
    PUSH EDI                            ; 00570462
    PUSH EBP                            ; 00570463
    SUB ESP,0x28                        ; 00570464
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00570467
    CMP dword ptr [0x02c807ec],0x0      ; 0057046b | DAT_02c807ec
    JLE 0x00570733                      ; 00570472
        ;   XREF to: 00570733 (CONDITIONAL_JUMP)  ; LAB_00570733
    MOV ESI,dword ptr [EBP + 0x160]     ; 00570478
        ;   Label: LAB_00570478
    TEST ESI,ESI                        ; 0057047e
    JL 0x0057075b                       ; 00570480
        ;   XREF to: 0057075b (CONDITIONAL_JUMP)  ; LAB_0057075b
    LEA EAX,[ESI*0x8 + 0x0]             ; 00570486
    ADD EAX,ESI                         ; 0057048d
    SHL EAX,0x3                         ; 0057048f
    SUB EAX,ESI                         ; 00570492
    MOV EDX,0x2c745ec                   ; 00570494
    SHL EAX,0x2                         ; 00570499
    ADD EDX,EAX                         ; 0057049c
    MOV EDI,dword ptr [EDX + 0x64]      ; 0057049e | DAT_02c74650
    MOV dword ptr [ESP + 0x24],EDX      ; 005704a1
    TEST EDI,EDI                        ; 005704a5
    JNZ 0x00570768                      ; 005704a7
        ;   XREF to: 00570768 (CONDITIONAL_JUMP)  ; LAB_00570768
    MOV ECX,0x5f34e6                    ; 005704ad | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005704ad
    MOV EBX,0x918                       ; 005704b2
    PUSH 0x5f34fb                       ; 005704b7 | = "SfxSample::pollStream - my sfx isn't ..."
    MOV dword ptr [0x01d1d400],ECX      ; 005704bc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005704c2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005704c8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005704cd
    CMP dword ptr [0x02c80650],0x0      ; 005704d0 | DAT_02c80650
        ;   Label: LAB_005704d0
    JZ 0x00570776                       ; 005704d7
        ;   XREF to: 00570776 (CONDITIONAL_JUMP)  ; LAB_00570776
    CMP dword ptr [EBP + 0x124],0x1     ; 005704dd
    JZ 0x00570509                       ; 005704e4
        ;   XREF to: 00570509 (CONDITIONAL_JUMP)  ; LAB_00570509
    PUSH EBP                            ; 005704e6
    MOV EAX,0x5f355a                    ; 005704e7 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x929                       ; 005704ec
    PUSH 0x5f356f                       ; 005704f1 | = "SfxSample::pollStream - cannot stream..."
    MOV [0x01d1d400],EAX                ; 005704f6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005704fb | DAT_01d1d404
    CALL FUN_005030e0                   ; 00570501
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00570506
    MOV EAX,dword ptr [ESP + 0x24]      ; 00570509
        ;   Label: LAB_00570509
    CMP dword ptr [EAX + 0x60],0x0      ; 0057050d | DAT_02c7464c
    JZ 0x00570550                       ; 00570511
        ;   XREF to: 00570550 (CONDITIONAL_JUMP)  ; LAB_00570550
    PUSH EAX                            ; 00570513
    CALL FUN_00571fa0                   ; 00570514
        ;   XREF to: 00571fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00571fa0()
    ADD ESP,0x4                         ; 00570519
    TEST EAX,EAX                        ; 0057051c
    JZ 0x00570785                       ; 0057051e
        ;   XREF to: 00570785 (CONDITIONAL_JUMP)  ; LAB_00570785
    PUSH EBP                            ; 00570524
    CALL FUN_00572680                   ; 00570525
        ;   XREF to: 00572680 (UNCONDITIONAL_CALL)  ; undefined FUN_00572680()
    ADD ESP,0x4                         ; 0057052a
    TEST EAX,EAX                        ; 0057052d
    JNZ 0x00570550                      ; 0057052f
        ;   XREF to: 00570550 (CONDITIONAL_JUMP)  ; LAB_00570550
    CMP dword ptr [EBP + 0x110],0x0     ; 00570531
    JL 0x00570550                       ; 00570538
        ;   XREF to: 00570550 (CONDITIONAL_JUMP)  ; LAB_00570550
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057053a
    FILD dword ptr [EBP + 0x110]        ; 0057053e
    FCOMP double ptr [EAX + 0x50]       ; 00570544
    FNSTSW AX                           ; 00570547
    SAHF                                ; 00570549
    JBE 0x00570713                      ; 0057054a
        ;   XREF to: 00570713 (CONDITIONAL_JUMP)  ; LAB_00570713
    FILD dword ptr [EBP + 0x10c]        ; 00570550
        ;   Label: LAB_00570550
    FMUL float ptr [ESP + 0x40]         ; 00570556
    MOV EDI,dword ptr [EBP + 0x164]     ; 0057055a
    CALL FUN_005c03a0                   ; 00570560
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00570565
    CMP EDI,dword ptr [ESP]             ; 00570568
    JGE 0x00570570                      ; 0057056b
        ;   XREF to: 00570570 (CONDITIONAL_JUMP)  ; LAB_00570570
    MOV dword ptr [ESP],EDI             ; 0057056d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00570570
        ;   Label: LAB_00570570
    FILD dword ptr [EBP + 0x170]        ; 00570574
    FSUB double ptr [EAX + 0x10c]       ; 0057057a
    CALL FUN_005c03a0                   ; 00570580
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 00570585
    CMP dword ptr [ESP + 0x8],0x0       ; 00570589
    JL 0x00570797                       ; 0057058e
        ;   XREF to: 00570797 (CONDITIONAL_JUMP)  ; LAB_00570797
    MOV EAX,dword ptr [ESP + 0x8]       ; 00570594
        ;   Label: LAB_00570594
    CMP EAX,dword ptr [ESP]             ; 00570598
    JGE 0x0057075b                      ; 0057059b
        ;   XREF to: 0057075b (CONDITIONAL_JUMP)  ; LAB_0057075b
    MOV EBX,0x5f5e0ff                   ; 005705a1
    MOV ESI,dword ptr [EBP + 0x158]     ; 005705a6
    MOV dword ptr [ESP + 0xc],EBX       ; 005705ac
    TEST ESI,ESI                        ; 005705b0
    JZ 0x005705c6                       ; 005705b2
        ;   XREF to: 005705c6 (CONDITIONAL_JUMP)  ; LAB_005705c6
    PUSH 0x3c00                         ; 005705b4
    PUSH EBP                            ; 005705b9
    CALL FUN_005723e0                   ; 005705ba
        ;   XREF to: 005723e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005723e0()
    ADD ESP,0x8                         ; 005705bf
    MOV dword ptr [ESP + 0xc],EAX       ; 005705c2
    FILD dword ptr [EBP + 0x10c]        ; 005705c6
        ;   Label: LAB_005705c6
    MOV EAX,dword ptr [EBP + 0x164]     ; 005705cc
    FMUL float ptr [ESP + 0x44]         ; 005705d2
    DEC EAX                             ; 005705d6
    CALL FUN_005c03a0                   ; 005705d7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 005705dc
    CMP EAX,dword ptr [ESP + 0x4]       ; 005705e0
    JGE 0x005705ea                      ; 005705e4
        ;   XREF to: 005705ea (CONDITIONAL_JUMP)  ; LAB_005705ea
    MOV dword ptr [ESP + 0x4],EAX       ; 005705e6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005705ea
        ;   Label: LAB_005705ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005705ee
    SUB EAX,EDX                         ; 005705f2
    MOV dword ptr [ESP + 0x1c],EAX      ; 005705f4
    TEST EAX,EAX                        ; 005705f8
    JLE 0x00570922                      ; 005705fa
        ;   XREF to: 00570922 (CONDITIONAL_JUMP)  ; LAB_00570922
    LEA EAX,[EBP + 0x17c]               ; 00570600
    MOV dword ptr [ESP + 0x10],EAX      ; 00570606
    MOV ESI,dword ptr [EBP + 0x170]     ; 0057060a
        ;   Label: LAB_0057060a
    TEST ESI,ESI                        ; 00570610
    JL 0x0057061c                       ; 00570612
        ;   XREF to: 0057061c (CONDITIONAL_JUMP)  ; LAB_0057061c
    CMP ESI,dword ptr [EBP + 0x164]     ; 00570614
    JL 0x0057064c                       ; 0057061a
        ;   XREF to: 0057064c (CONDITIONAL_JUMP)  ; LAB_0057064c
    MOV ECX,dword ptr [EBP + 0x164]     ; 0057061c
        ;   Label: LAB_0057061c
    PUSH ECX                            ; 00570622
    MOV EBX,dword ptr [EBP + 0x170]     ; 00570623
    PUSH EBX                            ; 00570629
    MOV EAX,0x5f35f6                    ; 0057062a | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x96e                       ; 0057062f
    PUSH 0x5f360b                       ; 00570634 | = "nextLoadSampleDest = %d, allocLength ..."
    MOV [0x01d1d400],EAX                ; 00570639 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0057063e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00570644
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 00570649
    MOV ESI,dword ptr [EBP + 0x170]     ; 0057064c
        ;   Label: LAB_0057064c
    MOV EBX,dword ptr [EBP + 0x164]     ; 00570652
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00570658
    SUB EBX,ESI                         ; 0057065c
    CMP EBX,EDI                         ; 0057065e
    JLE 0x00570664                      ; 00570660
        ;   XREF to: 00570664 (CONDITIONAL_JUMP)  ; LAB_00570664
    MOV EBX,EDI                         ; 00570662
    MOV EAX,dword ptr [ESP + 0xc]       ; 00570664
        ;   Label: LAB_00570664
    CMP EBX,EAX                         ; 00570668
    JLE 0x0057066e                      ; 0057066a
        ;   XREF to: 0057066e (CONDITIONAL_JUMP)  ; LAB_0057066e
    MOV EBX,EAX                         ; 0057066c
    MOV EDX,dword ptr [EBP + 0x110]     ; 0057066e
        ;   Label: LAB_0057066e
    XOR EDI,EDI                         ; 00570674
    TEST EDX,EDX                        ; 00570676
    JL 0x005706c8                       ; 00570678
        ;   XREF to: 005706c8 (CONDITIONAL_JUMP)  ; LAB_005706c8
    CMP EDX,dword ptr [EBP + 0x16c]     ; 0057067a
    JG 0x005707c3                       ; 00570680
        ;   XREF to: 005707c3 (CONDITIONAL_JUMP)  ; LAB_005707c3
    MOV EAX,dword ptr [ESP + 0x24]      ; 00570686
    MOV EDX,dword ptr [EAX + 0x68]      ; 0057068a | DAT_02c74654
    PUSH EDX                            ; 0057068d
    CALL FUN_00572680                   ; 0057068e
        ;   XREF to: 00572680 (UNCONDITIONAL_CALL)  ; undefined FUN_00572680()
    ADD ESP,0x4                         ; 00570693
    TEST EAX,EAX                        ; 00570696
    JZ 0x005707ac                       ; 00570698
        ;   XREF to: 005707ac (CONDITIONAL_JUMP)  ; LAB_005707ac
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057069e
    MOV EAX,dword ptr [EAX + 0x68]      ; 005706a2 | DAT_02c74654
    MOV EDX,dword ptr [EAX + 0x110]     ; 005706a5
    CMP EDX,dword ptr [EAX + 0x164]     ; 005706ab
    JZ 0x005707ac                       ; 005706b1
        ;   XREF to: 005707ac (CONDITIONAL_JUMP)  ; LAB_005707ac
    MOV EDX,dword ptr [EBP + 0x170]     ; 005706b7
    PUSH EDX                            ; 005706bd
    PUSH EDI                            ; 005706be
    PUSH EAX                            ; 005706bf
    CALL FUN_005702c0                   ; 005706c0
        ;   XREF to: 005702c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005702c0()
    ADD ESP,0xc                         ; 005706c5
    MOV ECX,0x1                         ; 005706c8
        ;   Label: LAB_005706c8
    MOV ESI,0x2c68388                   ; 005706cd
    XOR EAX,EAX                         ; 005706d2
    MOV EDX,dword ptr [EBP + 0x158]     ; 005706d4
    MOV dword ptr [ESP + 0x18],EAX      ; 005706da
    MOV dword ptr [ESP + 0x14],ECX      ; 005706de
    TEST EDX,EDX                        ; 005706e2
    JNZ 0x005707e9                      ; 005706e4
        ;   XREF to: 005707e9 (CONDITIONAL_JUMP)  ; LAB_005707e9
    PUSH EBX                            ; 005706ea
    MOV ECX,dword ptr [EBP + 0x170]     ; 005706eb
    PUSH ECX                            ; 005706f1
    PUSH EBP                            ; 005706f2
    CALL FUN_00570160                   ; 005706f3
        ;   XREF to: 00570160 (UNCONDITIONAL_CALL)  ; undefined FUN_00570160()
    ADD ESP,0xc                         ; 005706f8
    MOV ESI,EAX                         ; 005706fb
    TEST EAX,EAX                        ; 005706fd
    JNZ 0x005707da                      ; 005706ff
        ;   XREF to: 005707da (CONDITIONAL_JUMP)  ; LAB_005707da
    PUSH EBP                            ; 00570705
    PUSH 0x5f3635                       ; 00570706 | = "Error locking %s while streaming\n"
    CALL FUN_005773f0                   ; 0057070b
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
        ;   Label: LAB_0057070b
    ADD ESP,0x8                         ; 00570710
    MOV ECX,dword ptr [ESP + 0x24]      ; 00570713
        ;   Label: LAB_00570713
    PUSH ECX                            ; 00570717
    CALL FUN_00571d70                   ; 00570718
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00571d70()
    ADD ESP,0x4                         ; 0057071d
    PUSH EBP                            ; 00570720
    CALL FUN_00570020                   ; 00570721
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; undefined FUN_00570020()
    ADD ESP,0x4                         ; 00570726
    XOR EAX,EAX                         ; 00570729
    ADD ESP,0x28                        ; 0057072b
    POP EBP                             ; 0057072e
    POP EDI                             ; 0057072f
    POP ESI                             ; 00570730
    POP EBX                             ; 00570731
    RET                                 ; 00570732
    MOV ECX,0x5f34ab                    ; 00570733 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00570733
    MOV EBX,0x90a                       ; 00570738
    PUSH 0x5f34c0                       ; 0057073d | = "SfxSlot::pollStream - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00570742 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00570748 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0057074e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00570753
    JMP 0x00570478                      ; 00570756
        ;   XREF to: 00570478 (UNCONDITIONAL_JUMP)  ; LAB_00570478
    MOV EAX,0x1                         ; 0057075b
        ;   Label: LAB_0057075b
    ADD ESP,0x28                        ; 00570760
    POP EBP                             ; 00570763
    POP EDI                             ; 00570764
    POP ESI                             ; 00570765
    POP EBX                             ; 00570766
    RET                                 ; 00570767
    CMP EBP,dword ptr [EDX + 0x68]      ; 00570768 | DAT_02c74654
        ;   Label: LAB_00570768
    JNZ 0x005704ad                      ; 0057076b
        ;   XREF to: 005704ad (CONDITIONAL_JUMP)  ; LAB_005704ad
    JMP 0x005704d0                      ; 00570771
        ;   XREF to: 005704d0 (UNCONDITIONAL_JUMP)  ; LAB_005704d0
    PUSH 0x5f3530                       ; 00570776 | = "SfxSample::pollStream - no sound devi..."
        ;   Label: LAB_00570776
    CALL FUN_005773f0                   ; 0057077b
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00570780
    JMP 0x00570713                      ; 00570783
        ;   XREF to: 00570713 (UNCONDITIONAL_JUMP)  ; LAB_00570713
    PUSH 0x5f35b8                       ; 00570785 | = "SfxSample::pollStream - error querryi..."
        ;   Label: LAB_00570785
    CALL FUN_005773f0                   ; 0057078a
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057078f
    JMP 0x00570713                      ; 00570792
        ;   XREF to: 00570713 (UNCONDITIONAL_JUMP)  ; LAB_00570713
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570797
        ;   Label: LAB_00570797
    MOV EAX,dword ptr [EBP + 0x164]     ; 0057079b
    ADD EDX,EAX                         ; 005707a1
    MOV dword ptr [ESP + 0x8],EDX       ; 005707a3
    JMP 0x00570594                      ; 005707a7
        ;   XREF to: 00570594 (UNCONDITIONAL_JUMP)  ; LAB_00570594
    CMP dword ptr [EBP + 0x158],0x0     ; 005707ac
        ;   Label: LAB_005707ac
    JZ 0x00570922                       ; 005707b3
        ;   XREF to: 00570922 (CONDITIONAL_JUMP)  ; LAB_00570922
    MOV EDI,0x1                         ; 005707b9
    JMP 0x005706c8                      ; 005707be
        ;   XREF to: 005706c8 (UNCONDITIONAL_JUMP)  ; LAB_005706c8
    MOV EAX,EDX                         ; 005707c3
        ;   Label: LAB_005707c3
    SUB EAX,dword ptr [EBP + 0x16c]     ; 005707c5
    CMP EBX,EAX                         ; 005707cb
    JLE 0x005706c8                      ; 005707cd
        ;   XREF to: 005706c8 (CONDITIONAL_JUMP)  ; LAB_005706c8
    MOV EBX,EAX                         ; 005707d3
    JMP 0x005706c8                      ; 005707d5
        ;   XREF to: 005706c8 (UNCONDITIONAL_JUMP)  ; LAB_005706c8
    XOR EDX,EDX                         ; 005707da
        ;   Label: LAB_005707da
    MOV EAX,0x1                         ; 005707dc
    MOV dword ptr [ESP + 0x14],EDX      ; 005707e1
    MOV dword ptr [ESP + 0x18],EAX      ; 005707e5
    TEST EDI,EDI                        ; 005707e9
        ;   Label: LAB_005707e9
    JZ 0x00570962                       ; 005707eb
        ;   XREF to: 00570962 (CONDITIONAL_JUMP)  ; LAB_00570962
    MOV EAX,dword ptr [ESP + 0x24]      ; 005707f1
    MOV EAX,dword ptr [EAX + 0x68]      ; 005707f5 | DAT_02c74654
    MOV EDX,dword ptr [EAX + 0x108]     ; 005707f8
    IMUL EDX,EBX                        ; 005707fe
    MOV EAX,dword ptr [EAX + 0x104]     ; 00570801
    CMP EAX,0x8                         ; 00570807
    JNC 0x00570956                      ; 0057080a
        ;   XREF to: 00570956 (CONDITIONAL_JUMP)  ; LAB_00570956
    MOV EDI,0x5f3254                    ; 00570810 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00570810
    MOV EAX,0x689                       ; 00570815
    PUSH 0x5f3269                       ; 0057081a | = "generateSilence - invalid bit depth!"
    MOV dword ptr [0x01d1d400],EDI      ; 0057081f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00570825 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0057082a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0057082f
    MOV dword ptr [ESP + 0x20],EBX      ; 00570832
        ;   Label: LAB_00570832
    CMP dword ptr [ESP + 0x14],0x0      ; 00570836
        ;   Label: LAB_00570836
    JZ 0x00570a2e                       ; 0057083b
        ;   XREF to: 00570a2e (CONDITIONAL_JUMP)  ; LAB_00570a2e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00570841
    TEST ECX,ECX                        ; 00570845
    JLE 0x00570a2e                      ; 00570847
        ;   XREF to: 00570a2e (CONDITIONAL_JUMP)  ; LAB_00570a2e
    PUSH ECX                            ; 0057084d
    MOV EAX,dword ptr [EBP + 0x170]     ; 0057084e
    PUSH EAX                            ; 00570854
    PUSH EBP                            ; 00570855
    CALL FUN_00570160                   ; 00570856
        ;   XREF to: 00570160 (UNCONDITIONAL_CALL)  ; undefined FUN_00570160()
    MOV EDI,EAX                         ; 0057085b
    ADD ESP,0xc                         ; 0057085d
    TEST EAX,EAX                        ; 00570860
    JZ 0x00570a23                       ; 00570862
        ;   XREF to: 00570a23 (CONDITIONAL_JUMP)  ; LAB_00570a23
    MOV EDX,dword ptr [ESP + 0x20]      ; 00570868
    PUSH EDX                            ; 0057086c
    PUSH EBP                            ; 0057086d
    CALL FUN_00572400                   ; 0057086e
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined FUN_00572400()
    ADD ESP,0x8                         ; 00570873
    MOV ESI,0x2c68388                   ; 00570876
    MOV ECX,EAX                         ; 0057087b
    PUSH EDI                            ; 0057087d
    MOV EAX,ECX                         ; 0057087e
    SHR ECX,0x2                         ; 00570880
    MOVSD.REP ES:EDI,ESI                ; 00570883 | DAT_02c68388 | DAT_02c6838c
    MOV CL,AL                           ; 00570885
    AND CL,0x3                          ; 00570887
    MOVSB.REP ES:EDI,ESI                ; 0057088a | DAT_02c6838c | DAT_02c6838d
    POP EDI                             ; 0057088c
    PUSH EBP                            ; 0057088d
        ;   Label: LAB_0057088d
    CALL FUN_00570260                   ; 0057088e
        ;   XREF to: 00570260 (UNCONDITIONAL_CALL)  ; undefined FUN_00570260()
    ADD ESP,0x4                         ; 00570893
    MOV ECX,dword ptr [ESP + 0x20]      ; 00570896
        ;   Label: LAB_00570896
    CMP EBX,ECX                         ; 0057089a
    JGE 0x005708c3                      ; 0057089c
        ;   XREF to: 005708c3 (CONDITIONAL_JUMP)  ; LAB_005708c3
    PUSH EBX                            ; 0057089e
    PUSH ECX                            ; 0057089f
    MOV ESI,0x5f36ea                    ; 005708a0 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x9f3                       ; 005708a5
    PUSH 0x5f36ff                       ; 005708aa | = "MP3 decoded more than batch: r = %d, ..."
    MOV dword ptr [0x01d1d400],ESI      ; 005708af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005708b5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005708bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 005708c0
    MOV EDX,dword ptr [ESP + 0x20]      ; 005708c3
        ;   Label: LAB_005708c3
    CMP EBX,EDX                         ; 005708c7
    JZ 0x005708d9                       ; 005708c9
        ;   XREF to: 005708d9 (CONDITIONAL_JUMP)  ; LAB_005708d9
    MOV EAX,dword ptr [EBP + 0x16c]     ; 005708cb
    ADD EAX,EDX                         ; 005708d1
    MOV dword ptr [EBP + 0x110],EAX     ; 005708d3
    MOV EAX,dword ptr [ESP + 0x20]      ; 005708d9
        ;   Label: LAB_005708d9
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005708dd
    MOV ESI,dword ptr [EBP + 0x16c]     ; 005708e1
    MOV EDI,dword ptr [EBP + 0x170]     ; 005708e7
    MOV EDX,dword ptr [EBP + 0x164]     ; 005708ed
    ADD ESI,EAX                         ; 005708f3
    SUB EBX,EAX                         ; 005708f5
    ADD EDI,EAX                         ; 005708f7
    MOV dword ptr [EBP + 0x16c],ESI     ; 005708f9
    MOV dword ptr [ESP + 0x1c],EBX      ; 005708ff
    MOV dword ptr [EBP + 0x170],EDI     ; 00570903
    CMP EDI,EDX                         ; 00570909
    JL 0x00570917                       ; 0057090b
        ;   XREF to: 00570917 (CONDITIONAL_JUMP)  ; LAB_00570917
    MOV dword ptr [EBP + 0x170],0x0     ; 0057090d
    CMP dword ptr [ESP + 0x1c],0x0      ; 00570917
        ;   Label: LAB_00570917
    JG 0x0057060a                       ; 0057091c
        ;   XREF to: 0057060a (CONDITIONAL_JUMP)  ; LAB_0057060a
    MOV EAX,0x1                         ; 00570922
        ;   Label: LAB_00570922
    ADD ESP,0x28                        ; 00570927
    POP EBP                             ; 0057092a
    POP EDI                             ; 0057092b
    POP ESI                             ; 0057092c
    POP EBX                             ; 0057092d
    RET                                 ; 0057092e
    PUSH EDX                            ; 0057092f
        ;   Label: LAB_0057092f
    PUSH 0x80                           ; 00570930
    PUSH ESI                            ; 00570935 | DAT_02c68388
    CALL FUN_005bfb70                   ; 00570936
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0057093b
    JMP 0x00570832                      ; 0057093e
        ;   XREF to: 00570832 (UNCONDITIONAL_JUMP)  ; LAB_00570832
    ADD EDX,EDX                         ; 00570943
        ;   Label: LAB_00570943
    PUSH EDX                            ; 00570945
    PUSH 0x0                            ; 00570946
    PUSH ESI                            ; 00570948 | DAT_02c68388
    CALL FUN_005bfb70                   ; 00570949
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0057094e
    JMP 0x00570832                      ; 00570951
        ;   XREF to: 00570832 (UNCONDITIONAL_JUMP)  ; LAB_00570832
    JBE 0x0057092f                      ; 00570956
        ;   XREF to: 0057092f (CONDITIONAL_JUMP)  ; LAB_0057092f
        ;   Label: LAB_00570956
    CMP EAX,0x10                        ; 00570958
    JZ 0x00570943                       ; 0057095b
        ;   XREF to: 00570943 (CONDITIONAL_JUMP)  ; LAB_00570943
    JMP 0x00570810                      ; 0057095d
        ;   XREF to: 00570810 (UNCONDITIONAL_JUMP)  ; LAB_00570810
    MOV ECX,dword ptr [EBP + 0x174]     ; 00570962
        ;   Label: LAB_00570962
    TEST ECX,ECX                        ; 00570968
    JNZ 0x00570a0f                      ; 0057096a
        ;   XREF to: 00570a0f (CONDITIONAL_JUMP)  ; LAB_00570a0f
    MOV EDI,dword ptr [ESP + 0x10]      ; 00570970
    PUSH EDI                            ; 00570974
    CALL FUN_005a0d70                   ; 00570975
        ;   XREF to: 005a0d70 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0d70()
    ADD ESP,0x4                         ; 0057097a
    TEST EAX,EAX                        ; 0057097d
    JZ 0x005709d7                       ; 0057097f
        ;   XREF to: 005709d7 (CONDITIONAL_JUMP)  ; LAB_005709d7
    PUSH EBX                            ; 00570981
        ;   Label: LAB_00570981
    PUSH EBP                            ; 00570982
    CALL FUN_00572400                   ; 00570983
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined FUN_00572400()
    ADD ESP,0x8                         ; 00570988
    PUSH EAX                            ; 0057098b
    PUSH ESI                            ; 0057098c
    MOV ECX,dword ptr [ESP + 0x18]      ; 0057098d
    PUSH ECX                            ; 00570991
    MOV EDI,EAX                         ; 00570992
    CALL FUN_005a0c10                   ; 00570994
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 00570999
    CMP EAX,EDI                         ; 0057099c
    JNZ 0x005709fb                      ; 0057099e
        ;   XREF to: 005709fb (CONDITIONAL_JUMP)  ; LAB_005709fb
    MOV EAX,dword ptr [ESP + 0x24]      ; 005709a0
    MOV EAX,dword ptr [EAX + 0x68]      ; 005709a4 | DAT_02c74654
    MOV ESI,dword ptr [EAX + 0x104]     ; 005709a7
    MOV dword ptr [ESP + 0x20],EBX      ; 005709ad
    CMP ESI,0x10                        ; 005709b1
    JNZ 0x00570836                      ; 005709b4
        ;   XREF to: 00570836 (CONDITIONAL_JUMP)  ; LAB_00570836
    XOR EAX,EAX                         ; 005709ba
    MOV EDX,dword ptr [ESP + 0x24]      ; 005709bc
        ;   Label: LAB_005709bc
    MOV EDX,dword ptr [EDX + 0x68]      ; 005709c0 | DAT_02c74654
    MOV EDX,dword ptr [EDX + 0x108]     ; 005709c3
    IMUL EDX,EBX                        ; 005709c9
    CMP EAX,EDX                         ; 005709cc
    JGE 0x00570836                      ; 005709ce
        ;   XREF to: 00570836 (CONDITIONAL_JUMP)  ; LAB_00570836
    INC EAX                             ; 005709d4
    JMP 0x005709bc                      ; 005709d5
        ;   XREF to: 005709bc (UNCONDITIONAL_JUMP)  ; LAB_005709bc
    MOV EAX,0x5f3657                    ; 005709d7 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005709d7
    MOV EDX,0x9c0                       ; 005709dc
    PUSH 0x5f366c                       ; 005709e1 | = "Can't stream unless we have mp3 decod..."
    MOV [0x01d1d400],EAX                ; 005709e6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005709eb | DAT_01d1d404
    CALL FUN_005030e0                   ; 005709f1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005709f6
    JMP 0x00570981                      ; 005709f9
        ;   XREF to: 00570981 (UNCONDITIONAL_JUMP)  ; LAB_00570981
    PUSH EBP                            ; 005709fb
        ;   Label: LAB_005709fb
    CALL FUN_00570260                   ; 005709fc
        ;   XREF to: 00570260 (UNCONDITIONAL_CALL)  ; undefined FUN_00570260()
    ADD ESP,0x4                         ; 00570a01
    PUSH EBP                            ; 00570a04
    PUSH 0x5f36a6                       ; 00570a05 | = "Error reading %s while streaming\n"
    JMP 0x0057070b                      ; 00570a0a
        ;   XREF to: 0057070b (UNCONDITIONAL_JUMP)  ; LAB_0057070b
    PUSH EBX                            ; 00570a0f
        ;   Label: LAB_00570a0f
    PUSH ESI                            ; 00570a10
    PUSH ECX                            ; 00570a11
    CALL FUN_0052b170                   ; 00570a12
        ;   XREF to: 0052b170 (UNCONDITIONAL_CALL)  ; undefined FUN_0052b170()
    ADD ESP,0xc                         ; 00570a17
    MOV dword ptr [ESP + 0x20],EAX      ; 00570a1a
    JMP 0x00570836                      ; 00570a1e
        ;   XREF to: 00570836 (UNCONDITIONAL_JUMP)  ; LAB_00570836
    PUSH EBP                            ; 00570a23
        ;   Label: LAB_00570a23
    PUSH 0x5f36c8                       ; 00570a24 | = "Error locking %s while streaming\n"
    JMP 0x0057070b                      ; 00570a29
        ;   XREF to: 0057070b (UNCONDITIONAL_JUMP)  ; LAB_0057070b
    CMP dword ptr [ESP + 0x18],0x0      ; 00570a2e
        ;   Label: LAB_00570a2e
    JNZ 0x0057088d                      ; 00570a33
        ;   XREF to: 0057088d (CONDITIONAL_JUMP)  ; LAB_0057088d
    JMP 0x00570896                      ; 00570a39
        ;   XREF to: 00570896 (UNCONDITIONAL_JUMP)  ; LAB_00570896

