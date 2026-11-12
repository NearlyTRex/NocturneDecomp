; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot *this_ptr,float delta_time)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
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
;
; XREF[5]:
;   sound_sndmain.cpp_FUN_00556240 at 00556481
;   sound_sndmain.cpp_FUN_00558f20 at 00559085
;   sound_sndmain.cpp_nextMixingBuffer_FUN_00552bd0 at 00552cf2
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0 at 0055a10f
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90 at 00559f5a
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d30d1
;   TerminatedCString s_SfxSlot_compute_must_be_005d30e6
;   TerminatedCString s_SFXDBG_sample_s_005d3109
;   TerminatedCString s_Killing_s_in_compute_005d311e
;   TerminatedCString s_auto_computing_delay_005d3137
;   TerminatedCString s_delayRemaining_7_2fs_005d3152
;   TerminatedCString s_freq_5_2f_005d316d
;   TerminatedCString s_distToEar_7_2fs_005d317d
;   TerminatedCString s_doppler_5_2f_005d3193
;   TerminatedCString s_doppler_clamped_5_2f_005d31a6
;   TerminatedCString s_non_spatialized_005d31c3
;   TerminatedCString s_vol_5_2f_005d31d6
;   TerminatedCString s_channelVol_d_5_2f_005d31e5
;   TerminatedCString s_effFreq_5_2f_005d31ff
;   undefined4 DAT_005e4824
;   ... and 15 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;   sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390
;   sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00554140
;   sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00554250
;   sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_FUN_005526d0
;   sound_sndmain.cpp_FUN_00553f40
;   sound_sndmain.cpp_FUN_005571e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554430
        ;   Label: sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
    PUSH ESI                            ; 00554431
    PUSH EDI                            ; 00554432
    PUSH EBP                            ; 00554433
    MOV EBP,ESP                         ; 00554434
    SUB ESP,0x3c                        ; 00554436
    AND ESP,0xfffffff8                  ; 00554439
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055443c
    CMP dword ptr [0x02cf341c],0x0      ; 0055443f | DAT_02cf341c
    JLE 0x005546c9                      ; 00554446
        ;   XREF to: 005546c9 (CONDITIONAL_JUMP)  ; LAB_005546c9
    MOV EDI,dword ptr [EBX + 0x68]      ; 0055444c
        ;   Label: LAB_0055444c
    TEST EDI,EDI                        ; 0055444f
    JZ 0x005546f1                       ; 00554451
        ;   XREF to: 005546f1 (CONDITIONAL_JUMP)  ; LAB_005546f1
    CMP dword ptr [EBX + 0x108],0x1     ; 00554457
    JNZ 0x00554475                      ; 0055445e
        ;   XREF to: 00554475 (CONDITIONAL_JUMP)  ; LAB_00554475
    PUSH EDI                            ; 00554460
    PUSH 0x5d3109                       ; 00554461 | = "SFXDBG: sample = %s\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00554466 | g_CConsolePtr
    PUSH ECX                            ; 0055446c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0055446d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00554472
    CMP dword ptr [EBX + 0x64],0x0      ; 00554475
        ;   Label: LAB_00554475
    JZ 0x005546fa                       ; 00554479
        ;   XREF to: 005546fa (CONDITIONAL_JUMP)  ; LAB_005546fa
    FLDZ                                ; 0055447f
    FCOMP double ptr [EBX + 0x50]       ; 00554481
    FNSTSW AX                           ; 00554484
    SAHF                                ; 00554486
    JA 0x005546fa                       ; 00554487
        ;   XREF to: 005546fa (CONDITIONAL_JUMP)  ; LAB_005546fa
    FLDZ                                ; 0055448d
    FCOMP float ptr [EBP + 0x18]        ; 0055448f
    FNSTSW AX                           ; 00554492
    SAHF                                ; 00554494
    JNC 0x005544e9                      ; 00554495
        ;   XREF to: 005544e9 (CONDITIONAL_JUMP)  ; LAB_005544e9
    FLDZ                                ; 00554497
    FCOMP float ptr [EBX + 0x100]       ; 00554499
    FNSTSW AX                           ; 0055449f
    SAHF                                ; 005544a1
    JA 0x005544e9                       ; 005544a2
        ;   XREF to: 005544e9 (CONDITIONAL_JUMP)  ; LAB_005544e9
    FLD float ptr [EBX + 0x100]         ; 005544a4
    FCOMP float ptr [EBP + 0x18]        ; 005544aa
    FNSTSW AX                           ; 005544ad
    SAHF                                ; 005544af
    JBE 0x00554724                      ; 005544b0
        ;   XREF to: 00554724 (CONDITIONAL_JUMP)  ; LAB_00554724
    FLD float ptr [EBX + 0xfc]          ; 005544b6
    FSUB float ptr [EBX + 0x38]         ; 005544bc
    FLD float ptr [EBP + 0x18]          ; 005544bf
    FLD ST0                             ; 005544c2
    FDIV float ptr [EBX + 0x100]        ; 005544c4
    FMULP ST2                           ; 005544ca
    FSUBR float ptr [EBX + 0x100]       ; 005544cc
    FXCH                                ; 005544d2
    FADD float ptr [EBX + 0x38]         ; 005544d4
    FXCH                                ; 005544d7
    FSTP float ptr [EBX + 0x100]        ; 005544d9
    FSTP float ptr [EBX + 0x38]         ; 005544df
    OR byte ptr [EBX + 0x118],0x8       ; 005544e2
        ;   Label: LAB_005544e2
    PUSH EBX                            ; 005544e9
        ;   Label: LAB_005544e9
    CALL sound_sndmain.cpp_FUN_00553f40 ; 005544ea
        ;   XREF to: 00553f40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553f40()
    ADD ESP,0x4                         ; 005544ef
    MOV EAX,dword ptr [EBX + 0x18]      ; 005544f2
    PUSH EAX                            ; 005544f5
    MOV EDX,dword ptr [EBX + 0x14]      ; 005544f6
    PUSH EDX                            ; 005544f9
    MOV ECX,dword ptr [EBX + 0x10]      ; 005544fa
    PUSH ECX                            ; 005544fd
    MOV ESI,dword ptr [EBX + 0xc]       ; 005544fe
    PUSH ESI                            ; 00554501
    MOV EDI,dword ptr [EBX + 0x8]       ; 00554502
    PUSH EDI                            ; 00554505
    MOV EAX,dword ptr [EBX + 0x4]       ; 00554506
    PUSH EAX                            ; 00554509
    CALL sound_sndmain.cpp_FUN_005571e0 ; 0055450a
        ;   XREF to: 005571e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005571e0()
    MOV EDX,dword ptr [0x02cf28bc]      ; 0055450f | DAT_02cf28bc
    ADD ESP,0x18                        ; 00554515
    MOV [0x02cf28b8],EAX                ; 00554518 | DAT_02cf28b8
    TEST EDX,EDX                        ; 0055451d
    JZ 0x00554526                       ; 0055451f
        ;   XREF to: 00554526 (CONDITIONAL_JUMP)  ; LAB_00554526
    CALL sound_sndmain.cpp_FUN_005526d0 ; 00554521
        ;   XREF to: 005526d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005526d0()
    FLD float ptr [EBX + 0x40]          ; 00554526
        ;   Label: LAB_00554526
    FCOMP float ptr [0x005e4824]        ; 00554529 | DAT_005e4824
    FNSTSW AX                           ; 0055452f
    SAHF                                ; 00554531
    JZ 0x0055473e                       ; 00554532
        ;   XREF to: 0055473e (CONDITIONAL_JUMP)  ; LAB_0055473e
    CMP dword ptr [EBX + 0x108],0x1     ; 00554538
        ;   Label: LAB_00554538
    JNZ 0x0055455d                      ; 0055453f
        ;   XREF to: 0055455d (CONDITIONAL_JUMP)  ; LAB_0055455d
    SUB ESP,0x8                         ; 00554541
    FLD float ptr [EBX + 0x40]          ; 00554544
    FSTP double ptr [ESP]               ; 00554547
    PUSH 0x5d3152                       ; 0055454a | = "  delayRemaining = %7.2fs\n"
    MOV EAX,[0x005f1690]                ; 0055454f | g_CConsolePtr
    PUSH EAX                            ; 00554554 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00554555
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0055455a
    FLD float ptr [EBX + 0x3c]          ; 0055455d
        ;   Label: LAB_0055455d
    MOV EDX,dword ptr [EBX + 0x108]     ; 00554560
    FSTP float ptr [EBX + 0x6c]         ; 00554566
    CMP EDX,0x1                         ; 00554569
    JNZ 0x0055458b                      ; 0055456c
        ;   XREF to: 0055458b (CONDITIONAL_JUMP)  ; LAB_0055458b
    SUB ESP,0x8                         ; 0055456e
    FLD float ptr [EBX + 0x6c]          ; 00554571
    FSTP double ptr [ESP]               ; 00554574
    PUSH 0x5d316d                       ; 00554577 | = "  freq = %5.2f\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0055457c | g_CConsolePtr
    PUSH ECX                            ; 00554582 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00554583
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00554588
    TEST byte ptr [EBX + 0x4c],0x1      ; 0055458b
        ;   Label: LAB_0055458b
    JZ 0x00554769                       ; 0055458f
        ;   XREF to: 00554769 (CONDITIONAL_JUMP)  ; LAB_00554769
    CMP dword ptr [EBX + 0x108],0x1     ; 00554595
    JNZ 0x005545b1                      ; 0055459c
        ;   XREF to: 005545b1 (CONDITIONAL_JUMP)  ; LAB_005545b1
    PUSH 0x5d31c3                       ; 0055459e | = "  non spatialized\n"
    MOV EAX,[0x005f1690]                ; 005545a3 | g_CConsolePtr
    PUSH EAX                            ; 005545a8 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005545a9
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005545ae
    PUSH EBX                            ; 005545b1
        ;   Label: LAB_005545b1
    CALL sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0 ; 005545b2
        ;   XREF to: 005540d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005545b7
    PUSH EBX                            ; 005545ba
    CALL sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00554140 ; 005545bb
        ;   XREF to: 00554140 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00554140(CSfxSlot * this_ptr)
    MOV EDX,dword ptr [EBX + 0x108]     ; 005545c0
    ADD ESP,0x4                         ; 005545c6
    CMP EDX,0x1                         ; 005545c9
    JNZ 0x005545eb                      ; 005545cc
        ;   XREF to: 005545eb (CONDITIONAL_JUMP)  ; LAB_005545eb
    SUB ESP,0x8                         ; 005545ce
    FLD float ptr [EBX + 0x38]          ; 005545d1
    FSTP double ptr [ESP]               ; 005545d4
    PUSH 0x5d31d6                       ; 005545d7 | = "  vol = %5.2f\n"
    MOV ECX,dword ptr [0x005f1690]      ; 005545dc | g_CConsolePtr
    PUSH ECX                            ; 005545e2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005545e3
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005545e8
    PUSH EBX                            ; 005545eb
        ;   Label: LAB_005545eb
    CALL sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00554250 ; 005545ec
        ;   XREF to: 00554250 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00554250(CSfxSlot * this_ptr)
    MOV ESI,dword ptr [EBX + 0x108]     ; 005545f1
    ADD ESP,0x4                         ; 005545f7
    CMP ESI,0x1                         ; 005545fa
    JNZ 0x00554660                      ; 005545fd
        ;   XREF to: 00554660 (CONDITIONAL_JUMP)  ; LAB_00554660
    MOV EDI,dword ptr [0x0060422c]      ; 005545ff | DAT_0060422c
    XOR ESI,ESI                         ; 00554605
    TEST EDI,EDI                        ; 00554607
    JLE 0x00554660                      ; 00554609
        ;   XREF to: 00554660 (CONDITIONAL_JUMP)  ; LAB_00554660
    MOV EDI,EBX                         ; 0055460b
    MOV ECX,dword ptr [EBX + 0x68]      ; 0055460d
        ;   Label: LAB_0055460d
    MOV ECX,dword ptr [ECX + 0x104]     ; 00554610
    MOV EAX,0x1                         ; 00554616
    DEC ECX                             ; 0055461b
    SHL EAX,CL                          ; 0055461c
    MOV dword ptr [ESP + 0x38],EAX      ; 0055461e
    FILD dword ptr [ESP + 0x38]         ; 00554622
    FMUL float ptr [EDI + 0x90]         ; 00554626
    SUB ESP,0x8                         ; 0055462c
    FSTP double ptr [ESP]               ; 0055462f
    PUSH ESI                            ; 00554632
    PUSH 0x5d31e5                       ; 00554633 | = "  channelVol[%d] = %5.2f\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00554638 | g_CConsolePtr
    PUSH ECX                            ; 0055463e | g_CConsoleInstance
    ADD EDI,0x4                         ; 0055463f
    INC ESI                             ; 00554642
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00554643
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EAX,[0x0060422c]                ; 00554648 | DAT_0060422c
    ADD ESP,0x14                        ; 0055464d
    CMP ESI,EAX                         ; 00554650
    JL 0x0055460d                       ; 00554652
        ;   XREF to: 0055460d (CONDITIONAL_JUMP)  ; LAB_0055460d
    LEA EAX,[EAX]                       ; 00554654
    LEA EDX,[EDX]                       ; 0055465a
    FLD1                                ; 00554660
        ;   Label: LAB_00554660
    FDIV float ptr [0x005e484c]         ; 00554662 | DAT_005e484c
    FLD float ptr [EBX + 0x6c]          ; 00554668
    FXCH                                ; 0055466b
    FSTP float ptr [ESP + 0x34]         ; 0055466d
    FCOMP float ptr [ESP + 0x34]        ; 00554671
    FNSTSW AX                           ; 00554675
    SAHF                                ; 00554677
    JNC 0x00554681                      ; 00554678
        ;   XREF to: 00554681 (CONDITIONAL_JUMP)  ; LAB_00554681
    MOV EAX,dword ptr [ESP + 0x34]      ; 0055467a
    MOV dword ptr [EBX + 0x6c],EAX      ; 0055467e
    FLD float ptr [EBX + 0x6c]          ; 00554681
        ;   Label: LAB_00554681
    FCOMP float ptr [0x005e484c]        ; 00554684 | DAT_005e484c
    FNSTSW AX                           ; 0055468a
    SAHF                                ; 0055468c
    JBE 0x00554697                      ; 0055468d
        ;   XREF to: 00554697 (CONDITIONAL_JUMP)  ; LAB_00554697
    MOV EAX,[0x005e484c]                ; 0055468f | DAT_005e484c
    MOV dword ptr [EBX + 0x6c],EAX      ; 00554694
    CMP dword ptr [EBX + 0x108],0x1     ; 00554697
        ;   Label: LAB_00554697
    JNZ 0x005546bd                      ; 0055469e
        ;   XREF to: 005546bd (CONDITIONAL_JUMP)  ; LAB_005546bd
    SUB ESP,0x8                         ; 005546a0
    FLD float ptr [EBX + 0x6c]          ; 005546a3
    FSTP double ptr [ESP]               ; 005546a6
    PUSH 0x5d31ff                       ; 005546a9 | = "  effFreq = %5.2f\n"
    MOV ECX,dword ptr [0x005f1690]      ; 005546ae | g_CConsolePtr
    PUSH ECX                            ; 005546b4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005546b5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005546ba
    MOV EAX,0x1                         ; 005546bd
        ;   Label: LAB_005546bd
    MOV ESP,EBP                         ; 005546c2
    POP EBP                             ; 005546c4
    POP EDI                             ; 005546c5
    POP ESI                             ; 005546c6
    POP EBX                             ; 005546c7
    RET                                 ; 005546c8
    MOV ECX,0x5d30d1                    ; 005546c9 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005546c9
    MOV ESI,0xae0                       ; 005546ce
    PUSH 0x5d30e6                       ; 005546d3 | = "SfxSlot::compute - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 005546d8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005546de | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005546e4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005546e9
    JMP 0x0055444c                      ; 005546ec
        ;   XREF to: 0055444c (UNCONDITIONAL_JUMP)  ; LAB_0055444c
    XOR EAX,EAX                         ; 005546f1
        ;   Label: LAB_005546f1
    MOV ESP,EBP                         ; 005546f3
    POP EBP                             ; 005546f5
    POP EDI                             ; 005546f6
    POP ESI                             ; 005546f7
    POP EBX                             ; 005546f8
    RET                                 ; 005546f9
    MOV EAX,dword ptr [EBX + 0x68]      ; 005546fa
        ;   Label: LAB_005546fa
    PUSH EAX                            ; 005546fd
    PUSH 0x5d311e                       ; 005546fe | = "Killing %s in compute()\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00554703 | g_CConsolePtr
    PUSH EDX                            ; 00554709 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0055470a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0055470f
    PUSH EBX                            ; 00554712
        ;   Label: LAB_00554712
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00554713
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00554718
    XOR EAX,EAX                         ; 0055471b
    MOV ESP,EBP                         ; 0055471d
    POP EBP                             ; 0055471f
    POP EDI                             ; 00554720
    POP ESI                             ; 00554721
    POP EBX                             ; 00554722
    RET                                 ; 00554723
    TEST dword ptr [EBX + 0x104],0x7fffffff ; 00554724
        ;   Label: LAB_00554724
    JNZ 0x00554712                      ; 0055472e
        ;   XREF to: 00554712 (CONDITIONAL_JUMP)  ; LAB_00554712
    MOV EAX,dword ptr [EBX + 0xfc]      ; 00554730
    MOV dword ptr [EBX + 0x38],EAX      ; 00554736
    JMP 0x005544e2                      ; 00554739
        ;   XREF to: 005544e2 (UNCONDITIONAL_JUMP)  ; LAB_005544e2
    CMP dword ptr [EBX + 0x108],0x1     ; 0055473e
        ;   Label: LAB_0055473e
    JNZ 0x0055475b                      ; 00554745
        ;   XREF to: 0055475b (CONDITIONAL_JUMP)  ; LAB_0055475b
    PUSH 0x5d3137                       ; 00554747 | = "  auto computing delay...\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0055474c | g_CConsolePtr
    PUSH ESI                            ; 00554752 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00554753
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00554758
    PUSH EBX                            ; 0055475b
        ;   Label: LAB_0055475b
    CALL sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390 ; 0055475c
        ;   XREF to: 00554390 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00554761
    JMP 0x00554538                      ; 00554764
        ;   XREF to: 00554538 (UNCONDITIONAL_JUMP)  ; LAB_00554538
    FLD double ptr [EBX + 0x4]          ; 00554769
        ;   Label: LAB_00554769
    MOV EAX,[0x02cf28b8]                ; 0055476c | DAT_02cf28b8
    FLD double ptr [EBX + 0xc]          ; 00554771
    FXCH                                ; 00554774
    FSUB double ptr [EAX*0x8 + 0x2cf2828] ; 00554776 | DAT_02cf2828
    FXCH                                ; 0055477d
    FSUB double ptr [EAX*0x8 + 0x2cf2838] ; 0055477f | DAT_02cf2838
    FXCH                                ; 00554786
    FST double ptr [ESP]                ; 00554788
    FMUL double ptr [ESP]               ; 0055478b
    FXCH                                ; 0055478e
    FST double ptr [ESP + 0x8]          ; 00554790
    FMUL double ptr [ESP + 0x8]         ; 00554794
    FLD double ptr [EBX + 0x14]         ; 00554798
    FSUB double ptr [EAX*0x8 + 0x2cf2848] ; 0055479b | DAT_02cf2848
    FXCH                                ; 005547a2
    FADDP ST2,ST0                       ; 005547a4
    FST double ptr [ESP + 0x10]         ; 005547a6
    FMUL double ptr [ESP + 0x10]        ; 005547aa
    FADDP                               ; 005547ae
    FSQRT                               ; 005547b0
    MOV ESI,dword ptr [EBX + 0x108]     ; 005547b2
    FSTP float ptr [ESP + 0x20]         ; 005547b8
    CMP ESI,0x1                         ; 005547bc
    JNZ 0x005547df                      ; 005547bf
        ;   XREF to: 005547df (CONDITIONAL_JUMP)  ; LAB_005547df
    FLD float ptr [ESP + 0x20]          ; 005547c1
    SUB ESP,0x8                         ; 005547c5
    FSTP double ptr [ESP]               ; 005547c8
    PUSH 0x5d317d                       ; 005547cb | = "  distToEar = %7.2fs\n"
    MOV EDI,dword ptr [0x005f1690]      ; 005547d0 | g_CConsolePtr
    PUSH EDI                            ; 005547d6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005547d7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005547dc
    MOV EAX,[0x02cf28b8]                ; 005547df | DAT_02cf28b8
        ;   Label: LAB_005547df
    FLDZ                                ; 005547e4
    FLD float ptr [EAX*0x4 + 0x2cf2858] ; 005547e6
    FLD float ptr [EAX*0x4 + 0x2cf2860] ; 005547ed
    FLD float ptr [EAX*0x4 + 0x2cf2868] ; 005547f4
    FXCH ST2                            ; 005547fb
    FSUB float ptr [EBX + 0x24]         ; 005547fd
    FXCH                                ; 00554800
    FSUB float ptr [EBX + 0x28]         ; 00554802
    FXCH ST2                            ; 00554805
    FSUB float ptr [EBX + 0x2c]         ; 00554807
    FXCH                                ; 0055480a
    FSTP float ptr [ESP + 0x18]         ; 0055480c
    FXCH                                ; 00554810
    FSTP float ptr [ESP + 0x24]         ; 00554812
    FSTP float ptr [ESP + 0x1c]         ; 00554816
    FCOMP float ptr [ESP + 0x20]        ; 0055481a
    FNSTSW AX                           ; 0055481e
    SAHF                                ; 00554820
    JNC 0x005548fe                      ; 00554821
        ;   XREF to: 005548fe (CONDITIONAL_JUMP)  ; LAB_005548fe
    FLD float ptr [ESP + 0x18]          ; 00554827
    FMUL double ptr [ESP]               ; 0055482b
    FLD float ptr [ESP + 0x24]          ; 0055482e
    FMUL double ptr [ESP + 0x8]         ; 00554832
    FADDP                               ; 00554836
    FLD float ptr [ESP + 0x1c]          ; 00554838
    FMUL double ptr [ESP + 0x10]        ; 0055483c
    FADDP                               ; 00554840
    FDIV float ptr [ESP + 0x20]         ; 00554842
    FSTP float ptr [ESP + 0x30]         ; 00554846
        ;   Label: LAB_00554846
    FLD float ptr [ESP + 0x30]          ; 0055484a
    FMUL float ptr [0x00604240]         ; 0055484e | DAT_00604240
    FLD float ptr [0x005e4844]          ; 00554854 | DAT_005e4844
    FXCH                                ; 0055485a
    FADD ST0,ST1                        ; 0055485c
    FDIVRP                              ; 0055485e
    MOV EAX,dword ptr [EBX + 0x108]     ; 00554860
    FSTP float ptr [ESP + 0x28]         ; 00554866
    CMP EAX,0x1                         ; 0055486a
    JNZ 0x0055488d                      ; 0055486d
        ;   XREF to: 0055488d (CONDITIONAL_JUMP)  ; LAB_0055488d
    FLD float ptr [ESP + 0x28]          ; 0055486f
    SUB ESP,0x8                         ; 00554873
    FSTP double ptr [ESP]               ; 00554876
    PUSH 0x5d3193                       ; 00554879 | = "  doppler = %5.2f\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0055487e | g_CConsolePtr
    PUSH EDX                            ; 00554884 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00554885
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0055488a
    FLD1                                ; 0055488d
        ;   Label: LAB_0055488d
    FDIV float ptr [0x005e4848]         ; 0055488f | DAT_005e4848
    FLD float ptr [ESP + 0x28]          ; 00554895
    FXCH                                ; 00554899
    FSTP float ptr [ESP + 0x2c]         ; 0055489b
    FCOMP float ptr [ESP + 0x2c]        ; 0055489f
    FNSTSW AX                           ; 005548a3
    SAHF                                ; 005548a5
    JNC 0x005548b0                      ; 005548a6
        ;   XREF to: 005548b0 (CONDITIONAL_JUMP)  ; LAB_005548b0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005548a8
    MOV dword ptr [ESP + 0x28],EAX      ; 005548ac
    FLD float ptr [ESP + 0x28]          ; 005548b0
        ;   Label: LAB_005548b0
    FCOMP float ptr [0x005e4848]        ; 005548b4 | DAT_005e4848
    FNSTSW AX                           ; 005548ba
    SAHF                                ; 005548bc
    JBE 0x005548c8                      ; 005548bd
        ;   XREF to: 005548c8 (CONDITIONAL_JUMP)  ; LAB_005548c8
    MOV EAX,[0x005e4848]                ; 005548bf | DAT_005e4848
    MOV dword ptr [ESP + 0x28],EAX      ; 005548c4
    CMP dword ptr [EBX + 0x108],0x1     ; 005548c8
        ;   Label: LAB_005548c8
    JNZ 0x005548ef                      ; 005548cf
        ;   XREF to: 005548ef (CONDITIONAL_JUMP)  ; LAB_005548ef
    FLD float ptr [ESP + 0x28]          ; 005548d1
    SUB ESP,0x8                         ; 005548d5
    FSTP double ptr [ESP]               ; 005548d8
    PUSH 0x5d31a6                       ; 005548db | = "  doppler (clamped) = %5.2f\n"
    MOV ESI,dword ptr [0x005f1690]      ; 005548e0 | g_CConsolePtr
    PUSH ESI                            ; 005548e6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005548e7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005548ec
    FLD float ptr [EBX + 0x6c]          ; 005548ef
        ;   Label: LAB_005548ef
    FMUL float ptr [ESP + 0x28]         ; 005548f2
    FSTP float ptr [EBX + 0x6c]         ; 005548f6
    JMP 0x005545b1                      ; 005548f9
        ;   XREF to: 005545b1 (UNCONDITIONAL_JUMP)  ; LAB_005545b1
    FLD float ptr [ESP + 0x18]          ; 005548fe
        ;   Label: LAB_005548fe
    FMUL ST0                            ; 00554902
    FLD float ptr [ESP + 0x24]          ; 00554904
    FMUL ST0                            ; 00554908
    FADDP                               ; 0055490a
    FLD float ptr [ESP + 0x1c]          ; 0055490c
    FMUL ST0                            ; 00554910
    FADDP                               ; 00554912
    FSQRT                               ; 00554914
    JMP 0x00554846                      ; 00554916
        ;   XREF to: 00554846 (UNCONDITIONAL_JUMP)  ; LAB_00554846

