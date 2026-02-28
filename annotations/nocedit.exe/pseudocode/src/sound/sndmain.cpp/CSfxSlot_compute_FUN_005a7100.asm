; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot *this_ptr,float delta_time)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
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
; XREF[12]:
;   sound_sndmain.cpp_getSfxOptions_FUN_005a97e0 at 005a97fc
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 at 005acdf6
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 at 005acc5a
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40 at 005a9b63
;   sound_sndmain.cpp_setSfxPosition_FUN_005a9820 at 005a987a
;   sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_005a9910 at 005a993a
;   sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70 at 005a9aa0
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0 at 005a98da
;   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00 at 005a9a30
;   sound_sndmain.cpp_setSfxVelocity_FUN_005a9970 at 005a99ca
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0065022e
;   TerminatedCString s_SfxSlot_compute_must_be__00650243
;   TerminatedCString s_SFXDBG_sample_s_00650266
;   TerminatedCString s_Killing_s_in_compute_0065027b
;   TerminatedCString s_auto_computing_delay_00650294
;   TerminatedCString s_delayRemaining_7_2fs_006502af
;   TerminatedCString s_freq_5_2f_006502ca
;   TerminatedCString s_distToEar_7_2fs_006502da
;   TerminatedCString s_doppler_5_2f_006502f0
;   TerminatedCString s_doppler_clamped_5_2f_00650303
;   TerminatedCString s_non_spatialized_00650320
;   TerminatedCString s_vol_5_2f_00650333
;   TerminatedCString s_channelVol_d_5_2f_00650342
;   TerminatedCString s_effFreq_5_2f_0065035c
;   double DOUBLE_00663138 = -1
;   ... and 18 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070
;   sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
;   sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
;   sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7100
        ;   Label: sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
    PUSH ESI                            ; 005a7101
    PUSH EDI                            ; 005a7102
    PUSH EBP                            ; 005a7103
    MOV EBP,ESP                         ; 005a7104
    SUB ESP,0x68                        ; 005a7106
    AND ESP,0xfffffff8                  ; 005a7109
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a710c
    CMP dword ptr [0x03f6940c],0x0      ; 005a710f | g_SoundLockCount
    JLE 0x005a738a                      ; 005a7116
        ;   XREF to: 005a738a (CONDITIONAL_JUMP)  ; LAB_005a738a
    MOV EDI,dword ptr [ESI + 0x78]      ; 005a711c
        ;   Label: LAB_005a711c
    TEST EDI,EDI                        ; 005a711f
    JZ 0x005a73b2                       ; 005a7121
        ;   XREF to: 005a73b2 (CONDITIONAL_JUMP)  ; LAB_005a73b2
    XOR EAX,EAX                         ; 005a7127
    MOV EDX,dword ptr [ESI + 0x118]     ; 005a7129
    MOV dword ptr [ESP + 0x60],EAX      ; 005a712f
    CMP EDX,0x1                         ; 005a7133
    JNZ 0x005a714d                      ; 005a7136
        ;   XREF to: 005a714d (CONDITIONAL_JUMP)  ; LAB_005a714d
    PUSH EDI                            ; 005a7138
    PUSH 0x650266                       ; 005a7139 | = "SFXDBG: sample = %s\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005a713e | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 005a7144 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7145
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005a714a
    CMP dword ptr [ESI + 0x74],0x0      ; 005a714d
        ;   Label: LAB_005a714d
    JZ 0x005a73bb                       ; 005a7151
        ;   XREF to: 005a73bb (CONDITIONAL_JUMP)  ; LAB_005a73bb
    FLDZ                                ; 005a7157
    FCOMP double ptr [ESI + 0x60]       ; 005a7159
    FNSTSW AX                           ; 005a715c
    SAHF                                ; 005a715e
    JA 0x005a73bb                       ; 005a715f
        ;   XREF to: 005a73bb (CONDITIONAL_JUMP)  ; LAB_005a73bb
    FLD float ptr [EBP + 0x18]          ; 005a7165
    FLDZ                                ; 005a7168
    FCOMPP                              ; 005a716a
    FNSTSW AX                           ; 005a716c
    SAHF                                ; 005a716e
    JNC 0x005a71c3                      ; 005a716f
        ;   XREF to: 005a71c3 (CONDITIONAL_JUMP)  ; LAB_005a71c3
    FLD float ptr [ESI + 0x110]         ; 005a7171
    FLDZ                                ; 005a7177
    FCOMPP                              ; 005a7179
    FNSTSW AX                           ; 005a717b
    SAHF                                ; 005a717d
    JA 0x005a71c3                       ; 005a717e
        ;   XREF to: 005a71c3 (CONDITIONAL_JUMP)  ; LAB_005a71c3
    FLD float ptr [ESI + 0x110]         ; 005a7180
    FCOMP float ptr [EBP + 0x18]        ; 005a7186
    FNSTSW AX                           ; 005a7189
    SAHF                                ; 005a718b
    JBE 0x005a73e5                      ; 005a718c
        ;   XREF to: 005a73e5 (CONDITIONAL_JUMP)  ; LAB_005a73e5
    FLD float ptr [ESI + 0x10c]         ; 005a7192
    FSUB float ptr [ESI + 0x44]         ; 005a7198
    FLD float ptr [EBP + 0x18]          ; 005a719b
    FLD ST0                             ; 005a719e
    FDIV float ptr [ESI + 0x110]        ; 005a71a0
    FMULP ST2                           ; 005a71a6
    FSUBR float ptr [ESI + 0x110]       ; 005a71a8
    FXCH                                ; 005a71ae
    FADD float ptr [ESI + 0x44]         ; 005a71b0
    FXCH                                ; 005a71b3
    FSTP float ptr [ESI + 0x110]        ; 005a71b5
    FSTP float ptr [ESI + 0x44]         ; 005a71bb
    OR byte ptr [ESP + 0x60],0x8        ; 005a71be
        ;   Label: LAB_005a71be
    PUSH ESI                            ; 005a71c3
        ;   Label: LAB_005a71c3
    CALL sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0 ; 005a71c4
        ;   XREF to: 005a6ce0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot * this_ptr)
    FLD double ptr [ESI + 0x4c]         ; 005a71c9
    ADD ESP,0x4                         ; 005a71cc
    FCOMP double ptr [0x00663138]       ; 005a71cf | DOUBLE_00663138
    FNSTSW AX                           ; 005a71d5
    SAHF                                ; 005a71d7
    JZ 0x005a73ff                       ; 005a71d8
        ;   XREF to: 005a73ff (CONDITIONAL_JUMP)  ; LAB_005a73ff
    CMP dword ptr [ESI + 0x118],0x1     ; 005a71de
        ;   Label: LAB_005a71de
    JNZ 0x005a7203                      ; 005a71e5
        ;   XREF to: 005a7203 (CONDITIONAL_JUMP)  ; LAB_005a7203
    MOV EDI,dword ptr [ESI + 0x50]      ; 005a71e7
    PUSH EDI                            ; 005a71ea
    MOV EAX,dword ptr [ESI + 0x4c]      ; 005a71eb
    PUSH EAX                            ; 005a71ee
    PUSH 0x6502af                       ; 005a71ef | = "  delayRemaining = %7.2fs\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005a71f4 | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 005a71fa | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a71fb
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a7200
    FLD float ptr [ESI + 0x48]          ; 005a7203
        ;   Label: LAB_005a7203
    MOV ECX,dword ptr [ESI + 0x118]     ; 005a7206
    FSTP float ptr [ESI + 0x7c]         ; 005a720c
    CMP ECX,0x1                         ; 005a720f
    JNZ 0x005a7231                      ; 005a7212
        ;   XREF to: 005a7231 (CONDITIONAL_JUMP)  ; LAB_005a7231
    SUB ESP,0x8                         ; 005a7214
    FLD float ptr [ESI + 0x7c]          ; 005a7217
    FSTP double ptr [ESP]               ; 005a721a
    PUSH 0x6502ca                       ; 005a721d | = "  freq = %5.2f\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005a7222 | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 005a7228 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7229
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a722e
    TEST byte ptr [ESI + 0x5c],0x1      ; 005a7231
        ;   Label: LAB_005a7231
    JZ 0x005a742a                       ; 005a7235
        ;   XREF to: 005a742a (CONDITIONAL_JUMP)  ; LAB_005a742a
    CMP dword ptr [ESI + 0x118],0x1     ; 005a723b
    JNZ 0x005a7258                      ; 005a7242
        ;   XREF to: 005a7258 (CONDITIONAL_JUMP)  ; LAB_005a7258
    PUSH 0x650320                       ; 005a7244 | = "  non spatialized\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005a7249 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 005a724f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7250
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005a7255
    PUSH ESI                            ; 005a7258
        ;   Label: LAB_005a7258
    CALL sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80 ; 005a7259
        ;   XREF to: 005a6d80 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a725e
    PUSH ESI                            ; 005a7261
    CALL sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0 ; 005a7262
        ;   XREF to: 005a6df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot * this_ptr)
    MOV EBX,dword ptr [ESI + 0x118]     ; 005a7267
    ADD ESP,0x4                         ; 005a726d
    CMP EBX,0x1                         ; 005a7270
    JNZ 0x005a7292                      ; 005a7273
        ;   XREF to: 005a7292 (CONDITIONAL_JUMP)  ; LAB_005a7292
    SUB ESP,0x8                         ; 005a7275
    FLD float ptr [ESI + 0x44]          ; 005a7278
    FSTP double ptr [ESP]               ; 005a727b
    PUSH 0x650333                       ; 005a727e | = "  vol = %5.2f\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005a7283 | g_CConsolePtr
    PUSH EDI                            ; 005a7289 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a728a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a728f
    PUSH ESI                            ; 005a7292
        ;   Label: LAB_005a7292
    CALL sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00 ; 005a7293
        ;   XREF to: 005a6f00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot * this_ptr)
    MOV EAX,dword ptr [ESI + 0x118]     ; 005a7298
    ADD ESP,0x4                         ; 005a729e
    CMP EAX,0x1                         ; 005a72a1
    JNZ 0x005a7300                      ; 005a72a4
        ;   XREF to: 005a7300 (CONDITIONAL_JUMP)  ; LAB_005a7300
    MOV EDX,dword ptr [0x00681b18]      ; 005a72a6 | g_AudioChannelCount
    XOR EBX,EBX                         ; 005a72ac
    TEST EDX,EDX                        ; 005a72ae
    JLE 0x005a7300                      ; 005a72b0
        ;   XREF to: 005a7300 (CONDITIONAL_JUMP)  ; LAB_005a7300
    MOV EDI,ESI                         ; 005a72b2
    MOV ECX,dword ptr [ESI + 0x78]      ; 005a72b4
        ;   Label: LAB_005a72b4
    MOV ECX,dword ptr [ECX + 0x104]     ; 005a72b7
    MOV EAX,0x1                         ; 005a72bd
    DEC ECX                             ; 005a72c2
    SHL EAX,CL                          ; 005a72c3
    MOV dword ptr [ESP + 0x64],EAX      ; 005a72c5
    FILD dword ptr [ESP + 0x64]         ; 005a72c9
    FMUL float ptr [EDI + 0xa0]         ; 005a72cd
    SUB ESP,0x8                         ; 005a72d3
    FSTP double ptr [ESP]               ; 005a72d6
    PUSH EBX                            ; 005a72d9
    PUSH 0x650342                       ; 005a72da | = "  channelVol[%d] = %5.2f\n"
    MOV EAX,[0x0066e8e0]                ; 005a72df | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 005a72e4 | g_CConsoleInstance
    ADD EDI,0x4                         ; 005a72e5
    INC EBX                             ; 005a72e8
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a72e9
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EDX,dword ptr [0x00681b18]      ; 005a72ee | g_AudioChannelCount
    ADD ESP,0x14                        ; 005a72f4
    CMP EBX,EDX                         ; 005a72f7
    JL 0x005a72b4                       ; 005a72f9
        ;   XREF to: 005a72b4 (CONDITIONAL_JUMP)  ; LAB_005a72b4
    LEA EAX,[EAX]                       ; 005a72fb
    MOV ECX,ECX                         ; 005a72fe
    FLD float ptr [ESI + 0x7c]          ; 005a7300
        ;   Label: LAB_005a7300
    FLD1                                ; 005a7303
    FDIV double ptr [0x00663150]        ; 005a7305 | DOUBLE_00663150
    FSTP double ptr [ESP + 0x50]        ; 005a730b
    FCOMP double ptr [ESP + 0x50]       ; 005a730f
    FNSTSW AX                           ; 005a7313
    SAHF                                ; 005a7315
    JNC 0x005a731f                      ; 005a7316
        ;   XREF to: 005a731f (CONDITIONAL_JUMP)  ; LAB_005a731f
    FLD double ptr [ESP + 0x50]         ; 005a7318
    FSTP float ptr [ESI + 0x7c]         ; 005a731c
    FLD float ptr [ESI + 0x7c]          ; 005a731f
        ;   Label: LAB_005a731f
    FCOMP double ptr [0x00663150]       ; 005a7322 | DOUBLE_00663150
    FNSTSW AX                           ; 005a7328
    SAHF                                ; 005a732a
    JBE 0x005a7336                      ; 005a732b
        ;   XREF to: 005a7336 (CONDITIONAL_JUMP)  ; LAB_005a7336
    FLD double ptr [0x00663150]         ; 005a732d | DOUBLE_00663150
    FSTP float ptr [ESI + 0x7c]         ; 005a7333
    CMP dword ptr [ESI + 0x118],0x1     ; 005a7336
        ;   Label: LAB_005a7336
    JNZ 0x005a735c                      ; 005a733d
        ;   XREF to: 005a735c (CONDITIONAL_JUMP)  ; LAB_005a735c
    SUB ESP,0x8                         ; 005a733f
    FLD float ptr [ESI + 0x7c]          ; 005a7342
    FSTP double ptr [ESP]               ; 005a7345
    PUSH 0x65035c                       ; 005a7348 | = "  effFreq = %5.2f\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005a734d | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 005a7353 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7354
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a7359
    MOV EDI,dword ptr [ESP + 0x60]      ; 005a735c
        ;   Label: LAB_005a735c
    TEST EDI,EDI                        ; 005a7360
    JZ 0x005a737e                       ; 005a7362
        ;   XREF to: 005a737e (CONDITIONAL_JUMP)  ; LAB_005a737e
    MOV EAX,[0x03f69268]                ; 005a7364 | g_CSoundDevicePtr
    TEST EAX,EAX                        ; 005a7369
    JZ 0x005a737e                       ; 005a736b
        ;   XREF to: 005a737e (CONDITIONAL_JUMP)  ; LAB_005a737e
    CMP dword ptr [ESI + 0x70],0x0      ; 005a736d
    JZ 0x005a737e                       ; 005a7371
        ;   XREF to: 005a737e (CONDITIONAL_JUMP)  ; LAB_005a737e
    PUSH EDI                            ; 005a7373
    PUSH ESI                            ; 005a7374
    MOV ECX,dword ptr [EAX]             ; 005a7375
    PUSH EAX                            ; 005a7377
    CALL dword ptr [ECX + 0x40]         ; 005a7378
    ADD ESP,0xc                         ; 005a737b
    MOV EAX,0x1                         ; 005a737e
        ;   Label: LAB_005a737e
    MOV ESP,EBP                         ; 005a7383
    POP EBP                             ; 005a7385
    POP EDI                             ; 005a7386
    POP ESI                             ; 005a7387
    POP EBX                             ; 005a7388
    RET                                 ; 005a7389
    MOV ECX,0x65022e                    ; 005a738a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a738a
    MOV EBX,0x96a                       ; 005a738f
    PUSH 0x650243                       ; 005a7394 | = "SfxSlot::compute - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a7399 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a739f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a73a5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a73aa
    JMP 0x005a711c                      ; 005a73ad
        ;   XREF to: 005a711c (UNCONDITIONAL_JUMP)  ; LAB_005a711c
    XOR EAX,EAX                         ; 005a73b2
        ;   Label: LAB_005a73b2
    MOV ESP,EBP                         ; 005a73b4
    POP EBP                             ; 005a73b6
    POP EDI                             ; 005a73b7
    POP ESI                             ; 005a73b8
    POP EBX                             ; 005a73b9
    RET                                 ; 005a73ba
    MOV ECX,dword ptr [ESI + 0x78]      ; 005a73bb
        ;   Label: LAB_005a73bb
    PUSH ECX                            ; 005a73be
    PUSH 0x65027b                       ; 005a73bf | = "Killing %s in compute()\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005a73c4 | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 005a73ca | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a73cb
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005a73d0
    PUSH ESI                            ; 005a73d3
        ;   Label: LAB_005a73d3
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a73d4
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
    ADD ESP,0x4                         ; 005a73d9
    XOR EAX,EAX                         ; 005a73dc
    MOV ESP,EBP                         ; 005a73de
    POP EBP                             ; 005a73e0
    POP EDI                             ; 005a73e1
    POP ESI                             ; 005a73e2
    POP EBX                             ; 005a73e3
    RET                                 ; 005a73e4
    TEST dword ptr [ESI + 0x114],0x7fffffff ; 005a73e5
        ;   Label: LAB_005a73e5
    JNZ 0x005a73d3                      ; 005a73ef
        ;   XREF to: 005a73d3 (CONDITIONAL_JUMP)  ; LAB_005a73d3
    MOV EAX,dword ptr [ESI + 0x10c]     ; 005a73f1
    MOV dword ptr [ESI + 0x44],EAX      ; 005a73f7
    JMP 0x005a71be                      ; 005a73fa
        ;   XREF to: 005a71be (UNCONDITIONAL_JUMP)  ; LAB_005a71be
    CMP dword ptr [ESI + 0x118],0x1     ; 005a73ff
        ;   Label: LAB_005a73ff
    JNZ 0x005a741c                      ; 005a7406
        ;   XREF to: 005a741c (CONDITIONAL_JUMP)  ; LAB_005a741c
    PUSH 0x650294                       ; 005a7408 | = "  auto computing delay...\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005a740d | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 005a7413 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7414
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005a7419
    PUSH ESI                            ; 005a741c
        ;   Label: LAB_005a741c
    CALL sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070 ; 005a741d
        ;   XREF to: 005a7070 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a7422
    JMP 0x005a71de                      ; 005a7425
        ;   XREF to: 005a71de (UNCONDITIONAL_JUMP)  ; LAB_005a71de
    FLD double ptr [ESI + 0xc]          ; 005a742a
        ;   Label: LAB_005a742a
    FLD double ptr [ESI + 0x4]          ; 005a742d
    FSUB double ptr [0x03f68830]        ; 005a7430 | g_Cached3DListenerPos
    FXCH                                ; 005a7436
    FSUB double ptr [0x03f68838]        ; 005a7438 | g_Cached3DListenerPos.y
    FXCH                                ; 005a743e
    FST double ptr [ESP + 0x38]         ; 005a7440
    FMUL double ptr [ESP + 0x38]        ; 005a7444
    FXCH                                ; 005a7448
    FST double ptr [ESP + 0x28]         ; 005a744a
    FMUL double ptr [ESP + 0x28]        ; 005a744e
    FLD double ptr [ESI + 0x14]         ; 005a7452
    FSUB double ptr [0x03f68840]        ; 005a7455 | g_Cached3DListenerPos.z
    FXCH                                ; 005a745b
    FADDP ST2,ST0                       ; 005a745d
    FST double ptr [ESP + 0x48]         ; 005a745f
    FMUL double ptr [ESP + 0x48]        ; 005a7463
    FADDP                               ; 005a7467
    FSQRT                               ; 005a7469
    MOV EDI,dword ptr [ESI + 0x118]     ; 005a746b
    FSTP double ptr [ESP + 0x40]        ; 005a7471
    CMP EDI,0x1                         ; 005a7475
    JNZ 0x005a7498                      ; 005a7478
        ;   XREF to: 005a7498 (CONDITIONAL_JUMP)  ; LAB_005a7498
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a747a
    PUSH EAX                            ; 005a747e
    MOV EDX,dword ptr [ESP + 0x44]      ; 005a747f
    PUSH EDX                            ; 005a7483
    PUSH 0x6502da                       ; 005a7484 | = "  distToEar = %7.2fs\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005a7489 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 005a748f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7490
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a7495
    FLDZ                                ; 005a7498
        ;   Label: LAB_005a7498
    FLD double ptr [0x03f68848]         ; 005a749a | g_Cached3DListenerVelocity
    FLD double ptr [0x03f68850]         ; 005a74a0 | g_Cached3DListenerVelocity.y
    FLD double ptr [0x03f68858]         ; 005a74a6 | g_Cached3DListenerVelocity.z
    FXCH ST2                            ; 005a74ac
    FSUB double ptr [ESI + 0x24]        ; 005a74ae
    FXCH                                ; 005a74b1
    FSUB double ptr [ESI + 0x2c]        ; 005a74b3
    FXCH ST2                            ; 005a74b6
    FSUB double ptr [ESI + 0x34]        ; 005a74b8
    FXCH                                ; 005a74bb
    FSTP double ptr [ESP + 0x30]        ; 005a74bd
    FXCH                                ; 005a74c1
    FSTP double ptr [ESP]               ; 005a74c3
    FSTP double ptr [ESP + 0x8]         ; 005a74c6
    FCOMP double ptr [ESP + 0x40]       ; 005a74ca
    FNSTSW AX                           ; 005a74ce
    SAHF                                ; 005a74d0
    JNC 0x005a75c2                      ; 005a74d1
        ;   XREF to: 005a75c2 (CONDITIONAL_JUMP)  ; LAB_005a75c2
    FLD double ptr [ESP + 0x38]         ; 005a74d7
    FMUL double ptr [ESP + 0x30]        ; 005a74db
    FLD double ptr [ESP + 0x28]         ; 005a74df
    FMUL double ptr [ESP]               ; 005a74e3
    FADDP                               ; 005a74e6
    FLD double ptr [ESP + 0x48]         ; 005a74e8
    FMUL double ptr [ESP + 0x8]         ; 005a74ec
    FADDP                               ; 005a74f0
    FDIV double ptr [ESP + 0x40]        ; 005a74f2
    FSTP double ptr [ESP + 0x10]        ; 005a74f6
        ;   Label: LAB_005a74f6
    FLD double ptr [ESP + 0x10]         ; 005a74fa
    FMUL double ptr [0x00681b30]        ; 005a74fe | g_Cached3DDistanceFactor
    FLD double ptr [0x00663140]         ; 005a7504 | DOUBLE_00663140
    FXCH                                ; 005a750a
    FADD ST0,ST1                        ; 005a750c
    FDIVRP                              ; 005a750e
    MOV EBX,dword ptr [ESI + 0x118]     ; 005a7510
    FSTP double ptr [ESP + 0x18]        ; 005a7516
    CMP EBX,0x1                         ; 005a751a
    JNZ 0x005a753d                      ; 005a751d
        ;   XREF to: 005a753d (CONDITIONAL_JUMP)  ; LAB_005a753d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a751f
    PUSH EDI                            ; 005a7523
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a7524
    PUSH EAX                            ; 005a7528
    PUSH 0x6502f0                       ; 005a7529 | = "  doppler = %5.2f\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005a752e | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 005a7534 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7535
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a753a
    FLD1                                ; 005a753d
        ;   Label: LAB_005a753d
    FDIV double ptr [0x00663148]        ; 005a753f | DOUBLE_00663148
    FLD double ptr [ESP + 0x18]         ; 005a7545
    FXCH                                ; 005a7549
    FSTP double ptr [ESP + 0x20]        ; 005a754b
    FCOMP double ptr [ESP + 0x20]       ; 005a754f
    FNSTSW AX                           ; 005a7553
    SAHF                                ; 005a7555
    JNC 0x005a7568                      ; 005a7556
        ;   XREF to: 005a7568 (CONDITIONAL_JUMP)  ; LAB_005a7568
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a7558
    MOV dword ptr [ESP + 0x18],EAX      ; 005a755c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a7560
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a7564
    FLD double ptr [ESP + 0x18]         ; 005a7568
        ;   Label: LAB_005a7568
    FCOMP double ptr [0x00663148]       ; 005a756c | DOUBLE_00663148
    FNSTSW AX                           ; 005a7572
    SAHF                                ; 005a7574
    JBE 0x005a7589                      ; 005a7575
        ;   XREF to: 005a7589 (CONDITIONAL_JUMP)  ; LAB_005a7589
    MOV EAX,[0x00663148]                ; 005a7577 | DOUBLE_00663148
    MOV dword ptr [ESP + 0x18],EAX      ; 005a757c
    MOV EAX,[0x0066314c]                ; 005a7580 | DOUBLE_00663148+4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a7585
    CMP dword ptr [ESI + 0x118],0x1     ; 005a7589
        ;   Label: LAB_005a7589
    JNZ 0x005a75af                      ; 005a7590
        ;   XREF to: 005a75af (CONDITIONAL_JUMP)  ; LAB_005a75af
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a7592
    PUSH EBX                            ; 005a7596
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a7597
    PUSH EDI                            ; 005a759b
    PUSH 0x650303                       ; 005a759c | = "  doppler (clamped) = %5.2f\n"
    MOV EAX,[0x0066e8e0]                ; 005a75a1 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 005a75a6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a75a7
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005a75ac
    FLD float ptr [ESI + 0x7c]          ; 005a75af
        ;   Label: LAB_005a75af
    FLD ST0                             ; 005a75b2
    FMUL double ptr [ESP + 0x18]        ; 005a75b4
    FSTP ST1                            ; 005a75b8
    FSTP float ptr [ESI + 0x7c]         ; 005a75ba
    JMP 0x005a7258                      ; 005a75bd
        ;   XREF to: 005a7258 (UNCONDITIONAL_JUMP)  ; LAB_005a7258
    FLD double ptr [ESP + 0x30]         ; 005a75c2
        ;   Label: LAB_005a75c2
    FMUL ST0                            ; 005a75c6
    FLD double ptr [ESP]                ; 005a75c8
    FMUL ST0                            ; 005a75cb
    FADDP                               ; 005a75cd
    FLD double ptr [ESP + 0x8]          ; 005a75cf
    FMUL ST0                            ; 005a75d3
    FADDP                               ; 005a75d5
    FSQRT                               ; 005a75d7
    JMP 0x005a74f6                      ; 005a75d9
        ;   XREF to: 005a74f6 (UNCONDITIONAL_JUMP)  ; LAB_005a74f6

