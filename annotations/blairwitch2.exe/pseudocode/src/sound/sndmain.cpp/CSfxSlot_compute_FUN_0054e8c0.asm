; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(CSfxSlot *this_ptr,float delta_time)
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
;   sound_sndmain.cpp_FUN_0054d060 at 0054d182
;   sound_sndmain.cpp_FUN_005506b0 at 005508f1
;   sound_sndmain.cpp_FUN_00553380 at 005534e5
;   sound_sndmain.cpp_FUN_005541f0 at 005543ba
;   sound_sndmain.cpp_FUN_00554510 at 0055456f
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e85ed
;   TerminatedCString s_SfxSlot_compute_must_be_005e8602
;   TerminatedCString s_SFXDBG_sample_s_005e8625
;   TerminatedCString s_Killing_s_in_compute_005e863a
;   TerminatedCString s_auto_computing_delay_005e8653
;   TerminatedCString s_delayRemaining_7_2fs_005e866e
;   TerminatedCString s_freq_5_2f_005e8689
;   TerminatedCString s_distToEar_7_2fs_005e8699
;   TerminatedCString s_doppler_5_2f_005e86af
;   TerminatedCString s_doppler_clamped_5_2f_005e86c2
;   TerminatedCString s_non_spatialized_005e86df
;   TerminatedCString s_vol_5_2f_005e86f2
;   TerminatedCString s_channelVol_d_5_2f_005e8701
;   TerminatedCString s_effFreq_5_2f_005e871b
;   undefined4 DAT_005fbc14
;   ... and 15 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_console.cpp_FUN_00436710
;   sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_0054e820
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_FUN_0054cb70
;   sound_sndmain.cpp_FUN_0054e3d0
;   sound_sndmain.cpp_FUN_0054e560
;   sound_sndmain.cpp_FUN_0054e5d0
;   sound_sndmain.cpp_FUN_0054e6e0
;   sound_sndmain.cpp_FUN_00551650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e8c0
        ;   Label: sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0
    PUSH ESI                            ; 0054e8c1
    PUSH EDI                            ; 0054e8c2
    PUSH EBP                            ; 0054e8c3
    MOV EBP,ESP                         ; 0054e8c4
    SUB ESP,0x3c                        ; 0054e8c6
    AND ESP,0xfffffff8                  ; 0054e8c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054e8cc
    CMP dword ptr [0x0264901c],0x0      ; 0054e8cf | DAT_0264901c
    JLE 0x0054eb59                      ; 0054e8d6
        ;   XREF to: 0054eb59 (CONDITIONAL_JUMP)  ; LAB_0054eb59
    MOV EDI,dword ptr [EBX + 0x68]      ; 0054e8dc
        ;   Label: LAB_0054e8dc
    TEST EDI,EDI                        ; 0054e8df
    JZ 0x0054eb81                       ; 0054e8e1
        ;   XREF to: 0054eb81 (CONDITIONAL_JUMP)  ; LAB_0054eb81
    CMP dword ptr [EBX + 0x108],0x1     ; 0054e8e7
    JNZ 0x0054e905                      ; 0054e8ee
        ;   XREF to: 0054e905 (CONDITIONAL_JUMP)  ; LAB_0054e905
    PUSH EDI                            ; 0054e8f0
    PUSH 0x5e8625                       ; 0054e8f1 | = "SFXDBG: sample = %s\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0054e8f6 | g_CConsolePtr
    PUSH ECX                            ; 0054e8fc | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054e8fd
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0054e902
    CMP dword ptr [EBX + 0x64],0x0      ; 0054e905
        ;   Label: LAB_0054e905
    JZ 0x0054eb8a                       ; 0054e909
        ;   XREF to: 0054eb8a (CONDITIONAL_JUMP)  ; LAB_0054eb8a
    FLDZ                                ; 0054e90f
    FCOMP double ptr [EBX + 0x50]       ; 0054e911
    FNSTSW AX                           ; 0054e914
    SAHF                                ; 0054e916
    JA 0x0054eb8a                       ; 0054e917
        ;   XREF to: 0054eb8a (CONDITIONAL_JUMP)  ; LAB_0054eb8a
    FLDZ                                ; 0054e91d
    FCOMP float ptr [EBP + 0x18]        ; 0054e91f
    FNSTSW AX                           ; 0054e922
    SAHF                                ; 0054e924
    JNC 0x0054e979                      ; 0054e925
        ;   XREF to: 0054e979 (CONDITIONAL_JUMP)  ; LAB_0054e979
    FLDZ                                ; 0054e927
    FCOMP float ptr [EBX + 0x100]       ; 0054e929
    FNSTSW AX                           ; 0054e92f
    SAHF                                ; 0054e931
    JA 0x0054e979                       ; 0054e932
        ;   XREF to: 0054e979 (CONDITIONAL_JUMP)  ; LAB_0054e979
    FLD float ptr [EBX + 0x100]         ; 0054e934
    FCOMP float ptr [EBP + 0x18]        ; 0054e93a
    FNSTSW AX                           ; 0054e93d
    SAHF                                ; 0054e93f
    JBE 0x0054ebb4                      ; 0054e940
        ;   XREF to: 0054ebb4 (CONDITIONAL_JUMP)  ; LAB_0054ebb4
    FLD float ptr [EBX + 0xfc]          ; 0054e946
    FSUB float ptr [EBX + 0x38]         ; 0054e94c
    FLD float ptr [EBP + 0x18]          ; 0054e94f
    FLD ST0                             ; 0054e952
    FDIV float ptr [EBX + 0x100]        ; 0054e954
    FMULP ST2                           ; 0054e95a
    FSUBR float ptr [EBX + 0x100]       ; 0054e95c
    FXCH                                ; 0054e962
    FADD float ptr [EBX + 0x38]         ; 0054e964
    FXCH                                ; 0054e967
    FSTP float ptr [EBX + 0x100]        ; 0054e969
    FSTP float ptr [EBX + 0x38]         ; 0054e96f
    OR byte ptr [EBX + 0x118],0x8       ; 0054e972
        ;   Label: LAB_0054e972
    PUSH EBX                            ; 0054e979
        ;   Label: LAB_0054e979
    CALL sound_sndmain.cpp_FUN_0054e3d0 ; 0054e97a
        ;   XREF to: 0054e3d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054e3d0()
    ADD ESP,0x4                         ; 0054e97f
    MOV EAX,dword ptr [EBX + 0x18]      ; 0054e982
    PUSH EAX                            ; 0054e985
    MOV EDX,dword ptr [EBX + 0x14]      ; 0054e986
    PUSH EDX                            ; 0054e989
    MOV ECX,dword ptr [EBX + 0x10]      ; 0054e98a
    PUSH ECX                            ; 0054e98d
    MOV ESI,dword ptr [EBX + 0xc]       ; 0054e98e
    PUSH ESI                            ; 0054e991
    MOV EDI,dword ptr [EBX + 0x8]       ; 0054e992
    PUSH EDI                            ; 0054e995
    MOV EAX,dword ptr [EBX + 0x4]       ; 0054e996
    PUSH EAX                            ; 0054e999
    CALL sound_sndmain.cpp_FUN_00551650 ; 0054e99a
        ;   XREF to: 00551650 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551650()
    MOV EDX,dword ptr [0x026484bc]      ; 0054e99f | DAT_026484bc
    ADD ESP,0x18                        ; 0054e9a5
    MOV [0x026484b8],EAX                ; 0054e9a8 | DAT_026484b8
    TEST EDX,EDX                        ; 0054e9ad
    JZ 0x0054e9b6                       ; 0054e9af
        ;   XREF to: 0054e9b6 (CONDITIONAL_JUMP)  ; LAB_0054e9b6
    CALL sound_sndmain.cpp_FUN_0054cb70 ; 0054e9b1
        ;   XREF to: 0054cb70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054cb70()
    FLD float ptr [EBX + 0x40]          ; 0054e9b6
        ;   Label: LAB_0054e9b6
    FCOMP float ptr [0x005fbc14]        ; 0054e9b9 | DAT_005fbc14
    FNSTSW AX                           ; 0054e9bf
    SAHF                                ; 0054e9c1
    JZ 0x0054ebce                       ; 0054e9c2
        ;   XREF to: 0054ebce (CONDITIONAL_JUMP)  ; LAB_0054ebce
    CMP dword ptr [EBX + 0x108],0x1     ; 0054e9c8
        ;   Label: LAB_0054e9c8
    JNZ 0x0054e9ed                      ; 0054e9cf
        ;   XREF to: 0054e9ed (CONDITIONAL_JUMP)  ; LAB_0054e9ed
    SUB ESP,0x8                         ; 0054e9d1
    FLD float ptr [EBX + 0x40]          ; 0054e9d4
    FSTP double ptr [ESP]               ; 0054e9d7
    PUSH 0x5e866e                       ; 0054e9da | = "  delayRemaining = %7.2fs\n"
    MOV EAX,[0x00609ed0]                ; 0054e9df | g_CConsolePtr
    PUSH EAX                            ; 0054e9e4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054e9e5
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054e9ea
    FLD float ptr [EBX + 0x3c]          ; 0054e9ed
        ;   Label: LAB_0054e9ed
    MOV EDX,dword ptr [EBX + 0x108]     ; 0054e9f0
    FSTP float ptr [EBX + 0x6c]         ; 0054e9f6
    CMP EDX,0x1                         ; 0054e9f9
    JNZ 0x0054ea1b                      ; 0054e9fc
        ;   XREF to: 0054ea1b (CONDITIONAL_JUMP)  ; LAB_0054ea1b
    SUB ESP,0x8                         ; 0054e9fe
    FLD float ptr [EBX + 0x6c]          ; 0054ea01
    FSTP double ptr [ESP]               ; 0054ea04
    PUSH 0x5e8689                       ; 0054ea07 | = "  freq = %5.2f\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0054ea0c | g_CConsolePtr
    PUSH ECX                            ; 0054ea12 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ea13
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054ea18
    TEST byte ptr [EBX + 0x4c],0x1      ; 0054ea1b
        ;   Label: LAB_0054ea1b
    JZ 0x0054ebf9                       ; 0054ea1f
        ;   XREF to: 0054ebf9 (CONDITIONAL_JUMP)  ; LAB_0054ebf9
    CMP dword ptr [EBX + 0x108],0x1     ; 0054ea25
    JNZ 0x0054ea41                      ; 0054ea2c
        ;   XREF to: 0054ea41 (CONDITIONAL_JUMP)  ; LAB_0054ea41
    PUSH 0x5e86df                       ; 0054ea2e | = "  non spatialized\n"
    MOV EAX,[0x00609ed0]                ; 0054ea33 | g_CConsolePtr
    PUSH EAX                            ; 0054ea38 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ea39
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0054ea3e
    PUSH EBX                            ; 0054ea41
        ;   Label: LAB_0054ea41
    CALL sound_sndmain.cpp_FUN_0054e560 ; 0054ea42
        ;   XREF to: 0054e560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_0054e560(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054ea47
    PUSH EBX                            ; 0054ea4a
    CALL sound_sndmain.cpp_FUN_0054e5d0 ; 0054ea4b
        ;   XREF to: 0054e5d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_0054e5d0(CSfxSlot * this_ptr)
    MOV EDX,dword ptr [EBX + 0x108]     ; 0054ea50
    ADD ESP,0x4                         ; 0054ea56
    CMP EDX,0x1                         ; 0054ea59
    JNZ 0x0054ea7b                      ; 0054ea5c
        ;   XREF to: 0054ea7b (CONDITIONAL_JUMP)  ; LAB_0054ea7b
    SUB ESP,0x8                         ; 0054ea5e
    FLD float ptr [EBX + 0x38]          ; 0054ea61
    FSTP double ptr [ESP]               ; 0054ea64
    PUSH 0x5e86f2                       ; 0054ea67 | = "  vol = %5.2f\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0054ea6c | g_CConsolePtr
    PUSH ECX                            ; 0054ea72 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ea73
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054ea78
    PUSH EBX                            ; 0054ea7b
        ;   Label: LAB_0054ea7b
    CALL sound_sndmain.cpp_FUN_0054e6e0 ; 0054ea7c
        ;   XREF to: 0054e6e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_0054e6e0(CSfxSlot * this_ptr)
    MOV ESI,dword ptr [EBX + 0x108]     ; 0054ea81
    ADD ESP,0x4                         ; 0054ea87
    CMP ESI,0x1                         ; 0054ea8a
    JNZ 0x0054eaf0                      ; 0054ea8d
        ;   XREF to: 0054eaf0 (CONDITIONAL_JUMP)  ; LAB_0054eaf0
    MOV EDI,dword ptr [0x0061bc9c]      ; 0054ea8f | DAT_0061bc9c
    XOR ESI,ESI                         ; 0054ea95
    TEST EDI,EDI                        ; 0054ea97
    JLE 0x0054eaf0                      ; 0054ea99
        ;   XREF to: 0054eaf0 (CONDITIONAL_JUMP)  ; LAB_0054eaf0
    MOV EDI,EBX                         ; 0054ea9b
    MOV ECX,dword ptr [EBX + 0x68]      ; 0054ea9d
        ;   Label: LAB_0054ea9d
    MOV ECX,dword ptr [ECX + 0x104]     ; 0054eaa0
    MOV EAX,0x1                         ; 0054eaa6
    DEC ECX                             ; 0054eaab
    SHL EAX,CL                          ; 0054eaac
    MOV dword ptr [ESP + 0x38],EAX      ; 0054eaae
    FILD dword ptr [ESP + 0x38]         ; 0054eab2
    FMUL float ptr [EDI + 0x90]         ; 0054eab6
    SUB ESP,0x8                         ; 0054eabc
    FSTP double ptr [ESP]               ; 0054eabf
    PUSH ESI                            ; 0054eac2
    PUSH 0x5e8701                       ; 0054eac3 | = "  channelVol[%d] = %5.2f\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0054eac8 | g_CConsolePtr
    PUSH ECX                            ; 0054eace | g_CConsoleInstance
    ADD EDI,0x4                         ; 0054eacf
    INC ESI                             ; 0054ead2
    CALL engine_console.cpp_FUN_00436710 ; 0054ead3
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,[0x0061bc9c]                ; 0054ead8 | DAT_0061bc9c
    ADD ESP,0x14                        ; 0054eadd
    CMP ESI,EAX                         ; 0054eae0
    JL 0x0054ea9d                       ; 0054eae2
        ;   XREF to: 0054ea9d (CONDITIONAL_JUMP)  ; LAB_0054ea9d
    LEA EAX,[EAX]                       ; 0054eae4
    LEA EDX,[EDX]                       ; 0054eaea
    FLD1                                ; 0054eaf0
        ;   Label: LAB_0054eaf0
    FDIV float ptr [0x005fbc20]         ; 0054eaf2 | DAT_005fbc20
    FLD float ptr [EBX + 0x6c]          ; 0054eaf8
    FXCH                                ; 0054eafb
    FSTP float ptr [ESP + 0x34]         ; 0054eafd
    FCOMP float ptr [ESP + 0x34]        ; 0054eb01
    FNSTSW AX                           ; 0054eb05
    SAHF                                ; 0054eb07
    JNC 0x0054eb11                      ; 0054eb08
        ;   XREF to: 0054eb11 (CONDITIONAL_JUMP)  ; LAB_0054eb11
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054eb0a
    MOV dword ptr [EBX + 0x6c],EAX      ; 0054eb0e
    FLD float ptr [EBX + 0x6c]          ; 0054eb11
        ;   Label: LAB_0054eb11
    FCOMP float ptr [0x005fbc20]        ; 0054eb14 | DAT_005fbc20
    FNSTSW AX                           ; 0054eb1a
    SAHF                                ; 0054eb1c
    JBE 0x0054eb27                      ; 0054eb1d
        ;   XREF to: 0054eb27 (CONDITIONAL_JUMP)  ; LAB_0054eb27
    MOV EAX,[0x005fbc20]                ; 0054eb1f | DAT_005fbc20
    MOV dword ptr [EBX + 0x6c],EAX      ; 0054eb24
    CMP dword ptr [EBX + 0x108],0x1     ; 0054eb27
        ;   Label: LAB_0054eb27
    JNZ 0x0054eb4d                      ; 0054eb2e
        ;   XREF to: 0054eb4d (CONDITIONAL_JUMP)  ; LAB_0054eb4d
    SUB ESP,0x8                         ; 0054eb30
    FLD float ptr [EBX + 0x6c]          ; 0054eb33
    FSTP double ptr [ESP]               ; 0054eb36
    PUSH 0x5e871b                       ; 0054eb39 | = "  effFreq = %5.2f\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0054eb3e | g_CConsolePtr
    PUSH ECX                            ; 0054eb44 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054eb45
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054eb4a
    MOV EAX,0x1                         ; 0054eb4d
        ;   Label: LAB_0054eb4d
    MOV ESP,EBP                         ; 0054eb52
    POP EBP                             ; 0054eb54
    POP EDI                             ; 0054eb55
    POP ESI                             ; 0054eb56
    POP EBX                             ; 0054eb57
    RET                                 ; 0054eb58
    MOV ECX,0x5e85ed                    ; 0054eb59 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054eb59
    MOV ESI,0xade                       ; 0054eb5e
    PUSH 0x5e8602                       ; 0054eb63 | = "SfxSlot::compute - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054eb68 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054eb6e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054eb74
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054eb79
    JMP 0x0054e8dc                      ; 0054eb7c
        ;   XREF to: 0054e8dc (UNCONDITIONAL_JUMP)  ; LAB_0054e8dc
    XOR EAX,EAX                         ; 0054eb81
        ;   Label: LAB_0054eb81
    MOV ESP,EBP                         ; 0054eb83
    POP EBP                             ; 0054eb85
    POP EDI                             ; 0054eb86
    POP ESI                             ; 0054eb87
    POP EBX                             ; 0054eb88
    RET                                 ; 0054eb89
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054eb8a
        ;   Label: LAB_0054eb8a
    PUSH EAX                            ; 0054eb8d
    PUSH 0x5e863a                       ; 0054eb8e | = "Killing %s in compute()\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0054eb93 | g_CConsolePtr
    PUSH EDX                            ; 0054eb99 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054eb9a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0054eb9f
    PUSH EBX                            ; 0054eba2
        ;   Label: LAB_0054eba2
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0054eba3
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054eba8
    XOR EAX,EAX                         ; 0054ebab
    MOV ESP,EBP                         ; 0054ebad
    POP EBP                             ; 0054ebaf
    POP EDI                             ; 0054ebb0
    POP ESI                             ; 0054ebb1
    POP EBX                             ; 0054ebb2
    RET                                 ; 0054ebb3
    TEST dword ptr [EBX + 0x104],0x7fffffff ; 0054ebb4
        ;   Label: LAB_0054ebb4
    JNZ 0x0054eba2                      ; 0054ebbe
        ;   XREF to: 0054eba2 (CONDITIONAL_JUMP)  ; LAB_0054eba2
    MOV EAX,dword ptr [EBX + 0xfc]      ; 0054ebc0
    MOV dword ptr [EBX + 0x38],EAX      ; 0054ebc6
    JMP 0x0054e972                      ; 0054ebc9
        ;   XREF to: 0054e972 (UNCONDITIONAL_JUMP)  ; LAB_0054e972
    CMP dword ptr [EBX + 0x108],0x1     ; 0054ebce
        ;   Label: LAB_0054ebce
    JNZ 0x0054ebeb                      ; 0054ebd5
        ;   XREF to: 0054ebeb (CONDITIONAL_JUMP)  ; LAB_0054ebeb
    PUSH 0x5e8653                       ; 0054ebd7 | = "  auto computing delay...\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 0054ebdc | g_CConsolePtr
    PUSH ESI                            ; 0054ebe2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ebe3
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0054ebe8
    PUSH EBX                            ; 0054ebeb
        ;   Label: LAB_0054ebeb
    CALL sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_0054e820 ; 0054ebec
        ;   XREF to: 0054e820 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_0054e820(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054ebf1
    JMP 0x0054e9c8                      ; 0054ebf4
        ;   XREF to: 0054e9c8 (UNCONDITIONAL_JUMP)  ; LAB_0054e9c8
    FLD double ptr [EBX + 0x4]          ; 0054ebf9
        ;   Label: LAB_0054ebf9
    MOV EAX,[0x026484b8]                ; 0054ebfc | DAT_026484b8
    FLD double ptr [EBX + 0xc]          ; 0054ec01
    FXCH                                ; 0054ec04
    FSUB double ptr [EAX*0x8 + 0x2648428] ; 0054ec06 | DAT_02648428
    FXCH                                ; 0054ec0d
    FSUB double ptr [EAX*0x8 + 0x2648438] ; 0054ec0f | DAT_02648438
    FXCH                                ; 0054ec16
    FST double ptr [ESP]                ; 0054ec18
    FMUL double ptr [ESP]               ; 0054ec1b
    FXCH                                ; 0054ec1e
    FST double ptr [ESP + 0x8]          ; 0054ec20
    FMUL double ptr [ESP + 0x8]         ; 0054ec24
    FLD double ptr [EBX + 0x14]         ; 0054ec28
    FSUB double ptr [EAX*0x8 + 0x2648448] ; 0054ec2b | DAT_02648448
    FXCH                                ; 0054ec32
    FADDP ST2,ST0                       ; 0054ec34
    FST double ptr [ESP + 0x10]         ; 0054ec36
    FMUL double ptr [ESP + 0x10]        ; 0054ec3a
    FADDP                               ; 0054ec3e
    FSQRT                               ; 0054ec40
    MOV ESI,dword ptr [EBX + 0x108]     ; 0054ec42
    FSTP float ptr [ESP + 0x20]         ; 0054ec48
    CMP ESI,0x1                         ; 0054ec4c
    JNZ 0x0054ec6f                      ; 0054ec4f
        ;   XREF to: 0054ec6f (CONDITIONAL_JUMP)  ; LAB_0054ec6f
    FLD float ptr [ESP + 0x20]          ; 0054ec51
    SUB ESP,0x8                         ; 0054ec55
    FSTP double ptr [ESP]               ; 0054ec58
    PUSH 0x5e8699                       ; 0054ec5b | = "  distToEar = %7.2fs\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0054ec60 | g_CConsolePtr
    PUSH EDI                            ; 0054ec66 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ec67
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054ec6c
    MOV EAX,[0x026484b8]                ; 0054ec6f | DAT_026484b8
        ;   Label: LAB_0054ec6f
    FLDZ                                ; 0054ec74
    FLD float ptr [EAX*0x4 + 0x2648458] ; 0054ec76
    FLD float ptr [EAX*0x4 + 0x2648460] ; 0054ec7d
    FLD float ptr [EAX*0x4 + 0x2648468] ; 0054ec84
    FXCH ST2                            ; 0054ec8b
    FSUB float ptr [EBX + 0x24]         ; 0054ec8d
    FXCH                                ; 0054ec90
    FSUB float ptr [EBX + 0x28]         ; 0054ec92
    FXCH ST2                            ; 0054ec95
    FSUB float ptr [EBX + 0x2c]         ; 0054ec97
    FXCH                                ; 0054ec9a
    FSTP float ptr [ESP + 0x18]         ; 0054ec9c
    FXCH                                ; 0054eca0
    FSTP float ptr [ESP + 0x24]         ; 0054eca2
    FSTP float ptr [ESP + 0x1c]         ; 0054eca6
    FCOMP float ptr [ESP + 0x20]        ; 0054ecaa
    FNSTSW AX                           ; 0054ecae
    SAHF                                ; 0054ecb0
    JNC 0x0054ed8e                      ; 0054ecb1
        ;   XREF to: 0054ed8e (CONDITIONAL_JUMP)  ; LAB_0054ed8e
    FLD float ptr [ESP + 0x18]          ; 0054ecb7
    FMUL double ptr [ESP]               ; 0054ecbb
    FLD float ptr [ESP + 0x24]          ; 0054ecbe
    FMUL double ptr [ESP + 0x8]         ; 0054ecc2
    FADDP                               ; 0054ecc6
    FLD float ptr [ESP + 0x1c]          ; 0054ecc8
    FMUL double ptr [ESP + 0x10]        ; 0054eccc
    FADDP                               ; 0054ecd0
    FDIV float ptr [ESP + 0x20]         ; 0054ecd2
    FSTP float ptr [ESP + 0x30]         ; 0054ecd6
        ;   Label: LAB_0054ecd6
    FLD float ptr [ESP + 0x30]          ; 0054ecda
    FMUL float ptr [0x0061bcb4]         ; 0054ecde | DAT_0061bcb4
    FLD float ptr [0x005fbc18]          ; 0054ece4 | DAT_005fbc18
    FXCH                                ; 0054ecea
    FADD ST0,ST1                        ; 0054ecec
    FDIVRP                              ; 0054ecee
    MOV EAX,dword ptr [EBX + 0x108]     ; 0054ecf0
    FSTP float ptr [ESP + 0x28]         ; 0054ecf6
    CMP EAX,0x1                         ; 0054ecfa
    JNZ 0x0054ed1d                      ; 0054ecfd
        ;   XREF to: 0054ed1d (CONDITIONAL_JUMP)  ; LAB_0054ed1d
    FLD float ptr [ESP + 0x28]          ; 0054ecff
    SUB ESP,0x8                         ; 0054ed03
    FSTP double ptr [ESP]               ; 0054ed06
    PUSH 0x5e86af                       ; 0054ed09 | = "  doppler = %5.2f\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0054ed0e | g_CConsolePtr
    PUSH EDX                            ; 0054ed14 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ed15
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054ed1a
    FLD1                                ; 0054ed1d
        ;   Label: LAB_0054ed1d
    FDIV float ptr [0x005fbc1c]         ; 0054ed1f | DAT_005fbc1c
    FLD float ptr [ESP + 0x28]          ; 0054ed25
    FXCH                                ; 0054ed29
    FSTP float ptr [ESP + 0x2c]         ; 0054ed2b
    FCOMP float ptr [ESP + 0x2c]        ; 0054ed2f
    FNSTSW AX                           ; 0054ed33
    SAHF                                ; 0054ed35
    JNC 0x0054ed40                      ; 0054ed36
        ;   XREF to: 0054ed40 (CONDITIONAL_JUMP)  ; LAB_0054ed40
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054ed38
    MOV dword ptr [ESP + 0x28],EAX      ; 0054ed3c
    FLD float ptr [ESP + 0x28]          ; 0054ed40
        ;   Label: LAB_0054ed40
    FCOMP float ptr [0x005fbc1c]        ; 0054ed44 | DAT_005fbc1c
    FNSTSW AX                           ; 0054ed4a
    SAHF                                ; 0054ed4c
    JBE 0x0054ed58                      ; 0054ed4d
        ;   XREF to: 0054ed58 (CONDITIONAL_JUMP)  ; LAB_0054ed58
    MOV EAX,[0x005fbc1c]                ; 0054ed4f | DAT_005fbc1c
    MOV dword ptr [ESP + 0x28],EAX      ; 0054ed54
    CMP dword ptr [EBX + 0x108],0x1     ; 0054ed58
        ;   Label: LAB_0054ed58
    JNZ 0x0054ed7f                      ; 0054ed5f
        ;   XREF to: 0054ed7f (CONDITIONAL_JUMP)  ; LAB_0054ed7f
    FLD float ptr [ESP + 0x28]          ; 0054ed61
    SUB ESP,0x8                         ; 0054ed65
    FSTP double ptr [ESP]               ; 0054ed68
    PUSH 0x5e86c2                       ; 0054ed6b | = "  doppler (clamped) = %5.2f\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 0054ed70 | g_CConsolePtr
    PUSH ESI                            ; 0054ed76 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054ed77
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0054ed7c
    FLD float ptr [EBX + 0x6c]          ; 0054ed7f
        ;   Label: LAB_0054ed7f
    FMUL float ptr [ESP + 0x28]         ; 0054ed82
    FSTP float ptr [EBX + 0x6c]         ; 0054ed86
    JMP 0x0054ea41                      ; 0054ed89
        ;   XREF to: 0054ea41 (UNCONDITIONAL_JUMP)  ; LAB_0054ea41
    FLD float ptr [ESP + 0x18]          ; 0054ed8e
        ;   Label: LAB_0054ed8e
    FMUL ST0                            ; 0054ed92
    FLD float ptr [ESP + 0x24]          ; 0054ed94
    FMUL ST0                            ; 0054ed98
    FADDP                               ; 0054ed9a
    FLD float ptr [ESP + 0x1c]          ; 0054ed9c
    FMUL ST0                            ; 0054eda0
    FADDP                               ; 0054eda2
    FSQRT                               ; 0054eda4
    JMP 0x0054ecd6                      ; 0054eda6
        ;   XREF to: 0054ecd6 (UNCONDITIONAL_JUMP)  ; LAB_0054ecd6

