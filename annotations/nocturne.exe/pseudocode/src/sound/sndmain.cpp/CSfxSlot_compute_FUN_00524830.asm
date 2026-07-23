; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00523170 at 00523292
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810 at 00529856
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0 at 005296ba
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130 at 00527153
;   sound_sndmain.cpp_setSfxPosition_FUN_00526e10 at 00526e6a
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0 at 00526eca
;   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0 at 00527020
;   sound_sndmain.cpp_setSfxVolume_FUN_005270d0 at 005270f9
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526812
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592e0d
;   TerminatedCString s_SfxSlot_compute_must_be_00592e22
;   TerminatedCString s_SFXDBG_sample_s_00592e45
;   TerminatedCString s_Killing_s_in_compute_00592e5a
;   TerminatedCString s_auto_computing_delay_00592e73
;   TerminatedCString s_delayRemaining_7_2fs_00592e8e
;   TerminatedCString s_freq_5_2f_00592ea9
;   TerminatedCString s_distToEar_7_2fs_00592eb9
;   TerminatedCString s_doppler_5_2f_00592ecf
;   TerminatedCString s_doppler_clamped_5_2f_00592ee2
;   TerminatedCString s_non_spatialized_00592eff
;   TerminatedCString s_vol_5_2f_00592f12
;   TerminatedCString s_channelVol_d_5_2f_00592f21
;   TerminatedCString s_effFreq_5_2f_00592f3b
;   undefined4 DAT_005a2148
;   ... and 18 more
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   FUN_004c8440
;   sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
;   sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
;   sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630
;   sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524830
        ;   Label: sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
    PUSH ESI                            ; 00524831
    PUSH EDI                            ; 00524832
    PUSH EBP                            ; 00524833
    MOV EBP,ESP                         ; 00524834
    SUB ESP,0x68                        ; 00524836
    AND ESP,0xfffffff8                  ; 00524839
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052483c
    CMP dword ptr [0x02dc84bc],0x0      ; 0052483f | DAT_02dc84bc
    JLE 0x00524aba                      ; 00524846
        ;   XREF to: 00524aba (CONDITIONAL_JUMP)  ; LAB_00524aba
    MOV EDI,dword ptr [ESI + 0x74]      ; 0052484c
        ;   Label: LAB_0052484c
    TEST EDI,EDI                        ; 0052484f
    JZ 0x00524ae2                       ; 00524851
        ;   XREF to: 00524ae2 (CONDITIONAL_JUMP)  ; LAB_00524ae2
    XOR EAX,EAX                         ; 00524857
    MOV EDX,dword ptr [ESI + 0x114]     ; 00524859
    MOV dword ptr [ESP + 0x60],EAX      ; 0052485f
    CMP EDX,0x1                         ; 00524863
    JNZ 0x0052487d                      ; 00524866
        ;   XREF to: 0052487d (CONDITIONAL_JUMP)  ; LAB_0052487d
    PUSH EDI                            ; 00524868
    PUSH 0x592e45                       ; 00524869 | = "SFXDBG: sample = %s\n"
    MOV EBX,dword ptr [0x005ad350]      ; 0052486e | PTR_DAT_005ad350
    PUSH EBX                            ; 00524874 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524875
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0052487a
    CMP dword ptr [ESI + 0x70],0x0      ; 0052487d
        ;   Label: LAB_0052487d
    JZ 0x00524aeb                       ; 00524881
        ;   XREF to: 00524aeb (CONDITIONAL_JUMP)  ; LAB_00524aeb
    FLDZ                                ; 00524887
    FCOMP double ptr [ESI + 0x60]       ; 00524889
    FNSTSW AX                           ; 0052488c
    SAHF                                ; 0052488e
    JA 0x00524aeb                       ; 0052488f
        ;   XREF to: 00524aeb (CONDITIONAL_JUMP)  ; LAB_00524aeb
    FLD float ptr [EBP + 0x18]          ; 00524895
    FLDZ                                ; 00524898
    FCOMPP                              ; 0052489a
    FNSTSW AX                           ; 0052489c
    SAHF                                ; 0052489e
    JNC 0x005248f3                      ; 0052489f
        ;   XREF to: 005248f3 (CONDITIONAL_JUMP)  ; LAB_005248f3
    FLD float ptr [ESI + 0x10c]         ; 005248a1
    FLDZ                                ; 005248a7
    FCOMPP                              ; 005248a9
    FNSTSW AX                           ; 005248ab
    SAHF                                ; 005248ad
    JA 0x005248f3                       ; 005248ae
        ;   XREF to: 005248f3 (CONDITIONAL_JUMP)  ; LAB_005248f3
    FLD float ptr [ESI + 0x10c]         ; 005248b0
    FCOMP float ptr [EBP + 0x18]        ; 005248b6
    FNSTSW AX                           ; 005248b9
    SAHF                                ; 005248bb
    JBE 0x00524b15                      ; 005248bc
        ;   XREF to: 00524b15 (CONDITIONAL_JUMP)  ; LAB_00524b15
    FLD float ptr [ESI + 0x108]         ; 005248c2
    FSUB float ptr [ESI + 0x44]         ; 005248c8
    FLD float ptr [EBP + 0x18]          ; 005248cb
    FLD ST0                             ; 005248ce
    FDIV float ptr [ESI + 0x10c]        ; 005248d0
    FMULP ST2                           ; 005248d6
    FSUBR float ptr [ESI + 0x10c]       ; 005248d8
    FXCH                                ; 005248de
    FADD float ptr [ESI + 0x44]         ; 005248e0
    FXCH                                ; 005248e3
    FSTP float ptr [ESI + 0x10c]        ; 005248e5
    FSTP float ptr [ESI + 0x44]         ; 005248eb
    OR byte ptr [ESP + 0x60],0x8        ; 005248ee
        ;   Label: LAB_005248ee
    PUSH ESI                            ; 005248f3
        ;   Label: LAB_005248f3
    CALL sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410 ; 005248f4
        ;   XREF to: 00524410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410()
    FLD double ptr [ESI + 0x4c]         ; 005248f9
    ADD ESP,0x4                         ; 005248fc
    FCOMP double ptr [0x005a2148]       ; 005248ff | DAT_005a2148
    FNSTSW AX                           ; 00524905
    SAHF                                ; 00524907
    JZ 0x00524b2f                       ; 00524908
        ;   XREF to: 00524b2f (CONDITIONAL_JUMP)  ; LAB_00524b2f
    CMP dword ptr [ESI + 0x114],0x1     ; 0052490e
        ;   Label: LAB_0052490e
    JNZ 0x00524933                      ; 00524915
        ;   XREF to: 00524933 (CONDITIONAL_JUMP)  ; LAB_00524933
    MOV EDI,dword ptr [ESI + 0x50]      ; 00524917
    PUSH EDI                            ; 0052491a
    MOV EAX,dword ptr [ESI + 0x4c]      ; 0052491b
    PUSH EAX                            ; 0052491e
    PUSH 0x592e8e                       ; 0052491f | = "  delayRemaining = %7.2fs\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00524924 | PTR_DAT_005ad350
    PUSH EDX                            ; 0052492a | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0052492b
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00524930
    FLD float ptr [ESI + 0x48]          ; 00524933
        ;   Label: LAB_00524933
    MOV ECX,dword ptr [ESI + 0x114]     ; 00524936
    FSTP float ptr [ESI + 0x78]         ; 0052493c
    CMP ECX,0x1                         ; 0052493f
    JNZ 0x00524961                      ; 00524942
        ;   XREF to: 00524961 (CONDITIONAL_JUMP)  ; LAB_00524961
    SUB ESP,0x8                         ; 00524944
    FLD float ptr [ESI + 0x78]          ; 00524947
    FSTP double ptr [ESP]               ; 0052494a
    PUSH 0x592ea9                       ; 0052494d | = "  freq = %5.2f\n"
    MOV EBX,dword ptr [0x005ad350]      ; 00524952 | PTR_DAT_005ad350
    PUSH EBX                            ; 00524958 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524959
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 0052495e
    TEST byte ptr [ESI + 0x5c],0x1      ; 00524961
        ;   Label: LAB_00524961
    JZ 0x00524b5a                       ; 00524965
        ;   XREF to: 00524b5a (CONDITIONAL_JUMP)  ; LAB_00524b5a
    CMP dword ptr [ESI + 0x114],0x1     ; 0052496b
    JNZ 0x00524988                      ; 00524972
        ;   XREF to: 00524988 (CONDITIONAL_JUMP)  ; LAB_00524988
    PUSH 0x592eff                       ; 00524974 | = "  non spatialized\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00524979 | PTR_DAT_005ad350
    PUSH ECX                            ; 0052497f | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524980
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x8                         ; 00524985
    PUSH ESI                            ; 00524988
        ;   Label: LAB_00524988
    CALL sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0 ; 00524989
        ;   XREF to: 005244b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0()
    ADD ESP,0x4                         ; 0052498e
    PUSH ESI                            ; 00524991
    CALL sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520 ; 00524992
        ;   XREF to: 00524520 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520()
    MOV EBX,dword ptr [ESI + 0x114]     ; 00524997
    ADD ESP,0x4                         ; 0052499d
    CMP EBX,0x1                         ; 005249a0
    JNZ 0x005249c2                      ; 005249a3
        ;   XREF to: 005249c2 (CONDITIONAL_JUMP)  ; LAB_005249c2
    SUB ESP,0x8                         ; 005249a5
    FLD float ptr [ESI + 0x44]          ; 005249a8
    FSTP double ptr [ESP]               ; 005249ab
    PUSH 0x592f12                       ; 005249ae | = "  vol = %5.2f\n"
    MOV EDI,dword ptr [0x005ad350]      ; 005249b3 | PTR_DAT_005ad350
    PUSH EDI                            ; 005249b9 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005249ba
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 005249bf
    PUSH ESI                            ; 005249c2
        ;   Label: LAB_005249c2
    CALL sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630 ; 005249c3
        ;   XREF to: 00524630 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630()
    MOV EAX,dword ptr [ESI + 0x114]     ; 005249c8
    ADD ESP,0x4                         ; 005249ce
    CMP EAX,0x1                         ; 005249d1
    JNZ 0x00524a30                      ; 005249d4
        ;   XREF to: 00524a30 (CONDITIONAL_JUMP)  ; LAB_00524a30
    MOV EDX,dword ptr [0x005bea68]      ; 005249d6 | DAT_005bea68
    XOR EBX,EBX                         ; 005249dc
    TEST EDX,EDX                        ; 005249de
    JLE 0x00524a30                      ; 005249e0
        ;   XREF to: 00524a30 (CONDITIONAL_JUMP)  ; LAB_00524a30
    MOV EDI,ESI                         ; 005249e2
    MOV ECX,dword ptr [ESI + 0x74]      ; 005249e4
        ;   Label: LAB_005249e4
    MOV ECX,dword ptr [ECX + 0x104]     ; 005249e7
    MOV EAX,0x1                         ; 005249ed
    DEC ECX                             ; 005249f2
    SHL EAX,CL                          ; 005249f3
    MOV dword ptr [ESP + 0x64],EAX      ; 005249f5
    FILD dword ptr [ESP + 0x64]         ; 005249f9
    FMUL float ptr [EDI + 0x9c]         ; 005249fd
    SUB ESP,0x8                         ; 00524a03
    FSTP double ptr [ESP]               ; 00524a06
    PUSH EBX                            ; 00524a09
    PUSH 0x592f21                       ; 00524a0a | = "  channelVol[%d] = %5.2f\n"
    MOV EAX,[0x005ad350]                ; 00524a0f | PTR_DAT_005ad350
    PUSH EAX                            ; 00524a14 | DAT_0077ad0c
    ADD EDI,0x4                         ; 00524a15
    INC EBX                             ; 00524a18
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524a19
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EDX,dword ptr [0x005bea68]      ; 00524a1e | DAT_005bea68
    ADD ESP,0x14                        ; 00524a24
    CMP EBX,EDX                         ; 00524a27
    JL 0x005249e4                       ; 00524a29
        ;   XREF to: 005249e4 (CONDITIONAL_JUMP)  ; LAB_005249e4
    LEA EAX,[EAX]                       ; 00524a2b
    MOV ECX,ECX                         ; 00524a2e
    FLD float ptr [ESI + 0x78]          ; 00524a30
        ;   Label: LAB_00524a30
    FLD1                                ; 00524a33
    FDIV double ptr [0x005a2160]        ; 00524a35 | FLOAT_005a2160
    FSTP double ptr [ESP + 0x50]        ; 00524a3b
    FCOMP double ptr [ESP + 0x50]       ; 00524a3f
    FNSTSW AX                           ; 00524a43
    SAHF                                ; 00524a45
    JNC 0x00524a4f                      ; 00524a46
        ;   XREF to: 00524a4f (CONDITIONAL_JUMP)  ; LAB_00524a4f
    FLD double ptr [ESP + 0x50]         ; 00524a48
    FSTP float ptr [ESI + 0x78]         ; 00524a4c
    FLD float ptr [ESI + 0x78]          ; 00524a4f
        ;   Label: LAB_00524a4f
    FCOMP double ptr [0x005a2160]       ; 00524a52 | FLOAT_005a2160
    FNSTSW AX                           ; 00524a58
    SAHF                                ; 00524a5a
    JBE 0x00524a66                      ; 00524a5b
        ;   XREF to: 00524a66 (CONDITIONAL_JUMP)  ; LAB_00524a66
    FLD double ptr [0x005a2160]         ; 00524a5d | FLOAT_005a2160
    FSTP float ptr [ESI + 0x78]         ; 00524a63
    CMP dword ptr [ESI + 0x114],0x1     ; 00524a66
        ;   Label: LAB_00524a66
    JNZ 0x00524a8c                      ; 00524a6d
        ;   XREF to: 00524a8c (CONDITIONAL_JUMP)  ; LAB_00524a8c
    SUB ESP,0x8                         ; 00524a6f
    FLD float ptr [ESI + 0x78]          ; 00524a72
    FSTP double ptr [ESP]               ; 00524a75
    PUSH 0x592f3b                       ; 00524a78 | = "  effFreq = %5.2f\n"
    MOV EBX,dword ptr [0x005ad350]      ; 00524a7d | PTR_DAT_005ad350
    PUSH EBX                            ; 00524a83 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524a84
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00524a89
    MOV EDI,dword ptr [ESP + 0x60]      ; 00524a8c
        ;   Label: LAB_00524a8c
    TEST EDI,EDI                        ; 00524a90
    JZ 0x00524aae                       ; 00524a92
        ;   XREF to: 00524aae (CONDITIONAL_JUMP)  ; LAB_00524aae
    MOV EAX,[0x02dc8318]                ; 00524a94 | DAT_02dc8318
    TEST EAX,EAX                        ; 00524a99
    JZ 0x00524aae                       ; 00524a9b
        ;   XREF to: 00524aae (CONDITIONAL_JUMP)  ; LAB_00524aae
    CMP dword ptr [ESI + 0x6c],0x0      ; 00524a9d
    JZ 0x00524aae                       ; 00524aa1
        ;   XREF to: 00524aae (CONDITIONAL_JUMP)  ; LAB_00524aae
    PUSH EDI                            ; 00524aa3
    PUSH ESI                            ; 00524aa4
    MOV ECX,dword ptr [EAX]             ; 00524aa5
    PUSH EAX                            ; 00524aa7
    CALL dword ptr [ECX + 0x40]         ; 00524aa8
    ADD ESP,0xc                         ; 00524aab
    MOV EAX,0x1                         ; 00524aae
        ;   Label: LAB_00524aae
    MOV ESP,EBP                         ; 00524ab3
    POP EBP                             ; 00524ab5
    POP EDI                             ; 00524ab6
    POP ESI                             ; 00524ab7
    POP EBX                             ; 00524ab8
    RET                                 ; 00524ab9
    MOV ECX,0x592e0d                    ; 00524aba | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00524aba
    MOV EBX,0x95d                       ; 00524abf
    PUSH 0x592e22                       ; 00524ac4 | = "SfxSlot::compute - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 00524ac9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00524acf | DAT_01cc4804
    CALL FUN_004c8440                   ; 00524ad5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00524ada
    JMP 0x0052484c                      ; 00524add
        ;   XREF to: 0052484c (UNCONDITIONAL_JUMP)  ; LAB_0052484c
    XOR EAX,EAX                         ; 00524ae2
        ;   Label: LAB_00524ae2
    MOV ESP,EBP                         ; 00524ae4
    POP EBP                             ; 00524ae6
    POP EDI                             ; 00524ae7
    POP ESI                             ; 00524ae8
    POP EBX                             ; 00524ae9
    RET                                 ; 00524aea
    MOV ECX,dword ptr [ESI + 0x74]      ; 00524aeb
        ;   Label: LAB_00524aeb
    PUSH ECX                            ; 00524aee
    PUSH 0x592e5a                       ; 00524aef | = "Killing %s in compute()\n"
    MOV EBX,dword ptr [0x005ad350]      ; 00524af4 | PTR_DAT_005ad350
    PUSH EBX                            ; 00524afa | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524afb
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 00524b00
    PUSH ESI                            ; 00524b03
        ;   Label: LAB_00524b03
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00524b04
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570()
    ADD ESP,0x4                         ; 00524b09
    XOR EAX,EAX                         ; 00524b0c
    MOV ESP,EBP                         ; 00524b0e
    POP EBP                             ; 00524b10
    POP EDI                             ; 00524b11
    POP ESI                             ; 00524b12
    POP EBX                             ; 00524b13
    RET                                 ; 00524b14
    TEST dword ptr [ESI + 0x110],0x7fffffff ; 00524b15
        ;   Label: LAB_00524b15
    JNZ 0x00524b03                      ; 00524b1f
        ;   XREF to: 00524b03 (CONDITIONAL_JUMP)  ; LAB_00524b03
    MOV EAX,dword ptr [ESI + 0x108]     ; 00524b21
    MOV dword ptr [ESI + 0x44],EAX      ; 00524b27
    JMP 0x005248ee                      ; 00524b2a
        ;   XREF to: 005248ee (UNCONDITIONAL_JUMP)  ; LAB_005248ee
    CMP dword ptr [ESI + 0x114],0x1     ; 00524b2f
        ;   Label: LAB_00524b2f
    JNZ 0x00524b4c                      ; 00524b36
        ;   XREF to: 00524b4c (CONDITIONAL_JUMP)  ; LAB_00524b4c
    PUSH 0x592e73                       ; 00524b38 | = "  auto computing delay...\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00524b3d | PTR_DAT_005ad350
    PUSH ECX                            ; 00524b43 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524b44
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x8                         ; 00524b49
    PUSH ESI                            ; 00524b4c
        ;   Label: LAB_00524b4c
    CALL sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0 ; 00524b4d
        ;   XREF to: 005247a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0()
    ADD ESP,0x4                         ; 00524b52
    JMP 0x0052490e                      ; 00524b55
        ;   XREF to: 0052490e (UNCONDITIONAL_JUMP)  ; LAB_0052490e
    FLD double ptr [ESI + 0xc]          ; 00524b5a
        ;   Label: LAB_00524b5a
    FLD double ptr [ESI + 0x4]          ; 00524b5d
    FSUB double ptr [0x02dc78e0]        ; 00524b60 | DAT_02dc78e0
    FXCH                                ; 00524b66
    FSUB double ptr [0x02dc78e8]        ; 00524b68 | DAT_02dc78e8
    FXCH                                ; 00524b6e
    FST double ptr [ESP + 0x38]         ; 00524b70
    FMUL double ptr [ESP + 0x38]        ; 00524b74
    FXCH                                ; 00524b78
    FST double ptr [ESP + 0x28]         ; 00524b7a
    FMUL double ptr [ESP + 0x28]        ; 00524b7e
    FLD double ptr [ESI + 0x14]         ; 00524b82
    FSUB double ptr [0x02dc78f0]        ; 00524b85 | DAT_02dc78f0
    FXCH                                ; 00524b8b
    FADDP ST2,ST0                       ; 00524b8d
    FST double ptr [ESP + 0x48]         ; 00524b8f
    FMUL double ptr [ESP + 0x48]        ; 00524b93
    FADDP                               ; 00524b97
    FSQRT                               ; 00524b99
    MOV EDI,dword ptr [ESI + 0x114]     ; 00524b9b
    FSTP double ptr [ESP + 0x40]        ; 00524ba1
    CMP EDI,0x1                         ; 00524ba5
    JNZ 0x00524bc8                      ; 00524ba8
        ;   XREF to: 00524bc8 (CONDITIONAL_JUMP)  ; LAB_00524bc8
    MOV EAX,dword ptr [ESP + 0x44]      ; 00524baa
    PUSH EAX                            ; 00524bae
    MOV EDX,dword ptr [ESP + 0x44]      ; 00524baf
    PUSH EDX                            ; 00524bb3
    PUSH 0x592eb9                       ; 00524bb4 | = "  distToEar = %7.2fs\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00524bb9 | PTR_DAT_005ad350
    PUSH ECX                            ; 00524bbf | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524bc0
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00524bc5
    FLDZ                                ; 00524bc8
        ;   Label: LAB_00524bc8
    FLD double ptr [0x02dc78f8]         ; 00524bca | DAT_02dc78f8
    FLD double ptr [0x02dc7900]         ; 00524bd0 | DAT_02dc7900
    FLD double ptr [0x02dc7908]         ; 00524bd6 | DAT_02dc7908
    FXCH ST2                            ; 00524bdc
    FSUB double ptr [ESI + 0x24]        ; 00524bde
    FXCH                                ; 00524be1
    FSUB double ptr [ESI + 0x2c]        ; 00524be3
    FXCH ST2                            ; 00524be6
    FSUB double ptr [ESI + 0x34]        ; 00524be8
    FXCH                                ; 00524beb
    FSTP double ptr [ESP + 0x30]        ; 00524bed
    FXCH                                ; 00524bf1
    FSTP double ptr [ESP]               ; 00524bf3
    FSTP double ptr [ESP + 0x8]         ; 00524bf6
    FCOMP double ptr [ESP + 0x40]       ; 00524bfa
    FNSTSW AX                           ; 00524bfe
    SAHF                                ; 00524c00
    JNC 0x00524cf2                      ; 00524c01
        ;   XREF to: 00524cf2 (CONDITIONAL_JUMP)  ; LAB_00524cf2
    FLD double ptr [ESP + 0x38]         ; 00524c07
    FMUL double ptr [ESP + 0x30]        ; 00524c0b
    FLD double ptr [ESP + 0x28]         ; 00524c0f
    FMUL double ptr [ESP]               ; 00524c13
    FADDP                               ; 00524c16
    FLD double ptr [ESP + 0x48]         ; 00524c18
    FMUL double ptr [ESP + 0x8]         ; 00524c1c
    FADDP                               ; 00524c20
    FDIV double ptr [ESP + 0x40]        ; 00524c22
    FSTP double ptr [ESP + 0x10]        ; 00524c26
        ;   Label: LAB_00524c26
    FLD double ptr [ESP + 0x10]         ; 00524c2a
    FMUL double ptr [0x005bea80]        ; 00524c2e | DAT_005bea80
    FLD double ptr [0x005a2150]         ; 00524c34 | DAT_005a2150
    FXCH                                ; 00524c3a
    FADD ST0,ST1                        ; 00524c3c
    FDIVRP                              ; 00524c3e
    MOV EBX,dword ptr [ESI + 0x114]     ; 00524c40
    FSTP double ptr [ESP + 0x18]        ; 00524c46
    CMP EBX,0x1                         ; 00524c4a
    JNZ 0x00524c6d                      ; 00524c4d
        ;   XREF to: 00524c6d (CONDITIONAL_JUMP)  ; LAB_00524c6d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00524c4f
    PUSH EDI                            ; 00524c53
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00524c54
    PUSH EAX                            ; 00524c58
    PUSH 0x592ecf                       ; 00524c59 | = "  doppler = %5.2f\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00524c5e | PTR_DAT_005ad350
    PUSH EDX                            ; 00524c64 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524c65
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00524c6a
    FLD1                                ; 00524c6d
        ;   Label: LAB_00524c6d
    FDIV double ptr [0x005a2158]        ; 00524c6f | FLOAT_005a2158
    FLD double ptr [ESP + 0x18]         ; 00524c75
    FXCH                                ; 00524c79
    FSTP double ptr [ESP + 0x20]        ; 00524c7b
    FCOMP double ptr [ESP + 0x20]       ; 00524c7f
    FNSTSW AX                           ; 00524c83
    SAHF                                ; 00524c85
    JNC 0x00524c98                      ; 00524c86
        ;   XREF to: 00524c98 (CONDITIONAL_JUMP)  ; LAB_00524c98
    MOV EAX,dword ptr [ESP + 0x20]      ; 00524c88
    MOV dword ptr [ESP + 0x18],EAX      ; 00524c8c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00524c90
    MOV dword ptr [ESP + 0x1c],EAX      ; 00524c94
    FLD double ptr [ESP + 0x18]         ; 00524c98
        ;   Label: LAB_00524c98
    FCOMP double ptr [0x005a2158]       ; 00524c9c | FLOAT_005a2158
    FNSTSW AX                           ; 00524ca2
    SAHF                                ; 00524ca4
    JBE 0x00524cb9                      ; 00524ca5
        ;   XREF to: 00524cb9 (CONDITIONAL_JUMP)  ; LAB_00524cb9
    MOV EAX,[0x005a2158]                ; 00524ca7 | FLOAT_005a2158
    MOV dword ptr [ESP + 0x18],EAX      ; 00524cac
    MOV EAX,[0x005a215c]                ; 00524cb0 | FLOAT_005a215c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00524cb5
    CMP dword ptr [ESI + 0x114],0x1     ; 00524cb9
        ;   Label: LAB_00524cb9
    JNZ 0x00524cdf                      ; 00524cc0
        ;   XREF to: 00524cdf (CONDITIONAL_JUMP)  ; LAB_00524cdf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00524cc2
    PUSH EBX                            ; 00524cc6
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00524cc7
    PUSH EDI                            ; 00524ccb
    PUSH 0x592ee2                       ; 00524ccc | = "  doppler (clamped) = %5.2f\n"
    MOV EAX,[0x005ad350]                ; 00524cd1 | PTR_DAT_005ad350
    PUSH EAX                            ; 00524cd6 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00524cd7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00524cdc
    FLD float ptr [ESI + 0x78]          ; 00524cdf
        ;   Label: LAB_00524cdf
    FLD ST0                             ; 00524ce2
    FMUL double ptr [ESP + 0x18]        ; 00524ce4
    FSTP ST1                            ; 00524ce8
    FSTP float ptr [ESI + 0x78]         ; 00524cea
    JMP 0x00524988                      ; 00524ced
        ;   XREF to: 00524988 (UNCONDITIONAL_JUMP)  ; LAB_00524988
    FLD double ptr [ESP + 0x30]         ; 00524cf2
        ;   Label: LAB_00524cf2
    FMUL ST0                            ; 00524cf6
    FLD double ptr [ESP]                ; 00524cf8
    FMUL ST0                            ; 00524cfb
    FADDP                               ; 00524cfd
    FLD double ptr [ESP + 0x8]          ; 00524cff
    FMUL ST0                            ; 00524d03
    FADDP                               ; 00524d05
    FSQRT                               ; 00524d07
    JMP 0x00524c26                      ; 00524d09
        ;   XREF to: 00524c26 (UNCONDITIONAL_JUMP)  ; LAB_00524c26

