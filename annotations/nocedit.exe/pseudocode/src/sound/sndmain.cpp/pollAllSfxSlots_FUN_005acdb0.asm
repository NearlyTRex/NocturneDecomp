; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_005acdb0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 at 005aed74
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0065104e
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00651063
;   double DOUBLE_00651087 = 8.47710503472222E-7
;   double DOUBLE_0065108f = 0.25
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[1].status
;   int g_SfxLastSlot
;   int g_SoundLockCount
;   int g_SoundStartTime
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acdb0
        ;   Label: sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0
    PUSH ESI                            ; 005acdb1
    PUSH EBP                            ; 005acdb2
    MOV EBP,ESP                         ; 005acdb3
    SUB ESP,0x8                         ; 005acdb5
    AND ESP,0xfffffff8                  ; 005acdb8
    CMP dword ptr [0x03f6940c],0x0      ; 005acdbb | g_SoundLockCount
    JLE 0x005ace1b                      ; 005acdc2
        ;   XREF to: 005ace1b (CONDITIONAL_JUMP)  ; LAB_005ace1b
    CALL sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530 ; 005acdc4
        ;   XREF to: 005a5530 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530()
        ;   Label: LAB_005acdc4
    MOV EBX,dword ptr [0x03f69410]      ; 005acdc9 | g_SoundStartTime
    XOR ESI,ESI                         ; 005acdcf
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005acdd1
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV dword ptr [ESP],ESI             ; 005acdd6
    MOV [0x03f69410],EAX                ; 005acdd9 | g_SoundStartTime
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 005acdde
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
    TEST EAX,EAX                        ; 005acde3
    JNZ 0x005ace40                      ; 005acde5
        ;   XREF to: 005ace40 (CONDITIONAL_JUMP)  ; LAB_005ace40
    MOV EBX,0x3f5daa4                   ; 005acde7 | g_SfxSlots
        ;   Label: LAB_005acde7
    LEA ESI,[EBX + 0x4a00]              ; 005acdec | g_SfxLastSlot
    PUSH dword ptr [ESP]                ; 005acdf2
        ;   Label: LAB_005acdf2
    PUSH EBX                            ; 005acdf5 | g_SfxSlots | g_SfxSlots[1].status
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005acdf6
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005acdfb
    TEST EAX,EAX                        ; 005acdfe
    JZ 0x005ace0b                       ; 005ace00
        ;   XREF to: 005ace0b (CONDITIONAL_JUMP)  ; LAB_005ace0b
    PUSH EBX                            ; 005ace02 | g_SfxSlots
    CALL sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0 ; 005ace03
        ;   XREF to: 005a7fe0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005ace08
    ADD EBX,0x128                       ; 005ace0b | g_SfxSlots[1].status
        ;   Label: LAB_005ace0b
    CMP EBX,ESI                         ; 005ace11
    JNZ 0x005acdf2                      ; 005ace13
        ;   XREF to: 005acdf2 (CONDITIONAL_JUMP)  ; LAB_005acdf2
    MOV ESP,EBP                         ; 005ace15
    POP EBP                             ; 005ace17
    POP ESI                             ; 005ace18
    POP EBX                             ; 005ace19
    RET                                 ; 005ace1a
    MOV ECX,0x65104e                    ; 005ace1b | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ace1b
    MOV EBX,0x1718                      ; 005ace20
    PUSH 0x651063                       ; 005ace25 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005ace2a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005ace30 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ace36
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ace3b
    JMP 0x005acdc4                      ; 005ace3e
        ;   XREF to: 005acdc4 (UNCONDITIONAL_JUMP)  ; LAB_005acdc4
    MOV EAX,[0x03f69410]                ; 005ace40 | g_SoundStartTime
        ;   Label: LAB_005ace40
    SUB EAX,EBX                         ; 005ace45
    MOV dword ptr [ESP + 0x4],EAX       ; 005ace47
    FILD dword ptr [ESP + 0x4]          ; 005ace4b
    FMUL double ptr [0x00651087]        ; 005ace4f | DOUBLE_00651087
    FST float ptr [ESP]                 ; 005ace55
    FLDZ                                ; 005ace58
    FCOMPP                              ; 005ace5a
    FNSTSW AX                           ; 005ace5c
    SAHF                                ; 005ace5e
    JBE 0x005ace64                      ; 005ace5f
        ;   XREF to: 005ace64 (CONDITIONAL_JUMP)  ; LAB_005ace64
    MOV dword ptr [ESP],ESI             ; 005ace61
    FLD float ptr [ESP]                 ; 005ace64
        ;   Label: LAB_005ace64
    FCOMP double ptr [0x0065108f]       ; 005ace67 | DOUBLE_0065108f
    FNSTSW AX                           ; 005ace6d
    SAHF                                ; 005ace6f
    JBE 0x005acde7                      ; 005ace70
        ;   XREF to: 005acde7 (CONDITIONAL_JUMP)  ; LAB_005acde7
    MOV dword ptr [ESP],0x3e800000      ; 005ace76
    JMP 0x005acde7                      ; 005ace7d
        ;   XREF to: 005acde7 (UNCONDITIONAL_JUMP)  ; LAB_005acde7

