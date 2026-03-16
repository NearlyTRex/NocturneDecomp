; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle,uint output_format)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; uint             Stack[0x8]:4   output_format
; Local Variables:
; _SPLIT_DOUBLE    Stack[-0x28]:8  local_28
; _SPLIT_DOUBLE    Stack[-0x20]:8  local_20
;
; XREF[5]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 at 004b0df3
;   core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40 at 0053ebc9
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de43f
;   core_turret.cpp_CTurret_process_FUN_005e2430 at 005e28bb
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad560
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9720
        ;   Label: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
    PUSH ESI                            ; 005a9721
    PUSH EDI                            ; 005a9722
    PUSH EBP                            ; 005a9723
    MOV EBP,ESP                         ; 005a9724
    SUB ESP,0x18                        ; 005a9726
    AND ESP,0xfffffff8                  ; 005a9729
    PUSH 0x1                            ; 005a972c
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a972e
    PUSH EDX                            ; 005a9731
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9732
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a9737
    MOV EBX,EAX                         ; 005a973a
    TEST EAX,EAX                        ; 005a973c
    JZ 0x005a97aa                       ; 005a973e
        ;   XREF to: 005a97aa (CONDITIONAL_JUMP)  ; LAB_005a97aa
    CMP dword ptr [EAX + 0x70],0x0      ; 005a9740
    JZ 0x005a975c                       ; 005a9744
        ;   XREF to: 005a975c (CONDITIONAL_JUMP)  ; LAB_005a975c
    CMP dword ptr [0x03f69268],0x0      ; 005a9746 | g_CSoundDevicePtr
    JZ 0x005a975c                       ; 005a974d
        ;   XREF to: 005a975c (CONDITIONAL_JUMP)  ; LAB_005a975c
    PUSH EAX                            ; 005a974f
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0 ; 005a9750
        ;   XREF to: 005a80e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a9755
    TEST EAX,EAX                        ; 005a9758
    JZ 0x005a97b8                       ; 005a975a
        ;   XREF to: 005a97b8 (CONDITIONAL_JUMP)  ; LAB_005a97b8
    MOV EDX,dword ptr [EBP + 0x18]      ; 005a975c
        ;   Label: LAB_005a975c
    PUSH EDX                            ; 005a975f
    PUSH dword ptr [EBX + 0x68]         ; 005a9760
    SUB ESP,0x8                         ; 005a9763
    FLD double ptr [EBX + 0x60]         ; 005a9766
    FSTP double ptr [ESP]               ; 005a9769
    PUSH dword ptr [EBX + 0x78]         ; 005a976c
    NOP                                 ; 005a976f
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580 ; 005a9770
        ;   XREF to: 005a8580 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x24],EAX      ; 005a9775
    MOV dword ptr [ESP + 0x28],EDX      ; 005a9779
    FLD double ptr [ESP + 0x24]         ; 005a977d
    ADD ESP,0x14                        ; 005a9781
    FSTP double ptr [ESP + 0x8]         ; 005a9784
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9788
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a978d
    MOV dword ptr [ESP],EAX             ; 005a9791
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a9794
    MOV dword ptr [ESP + 0x4],EAX       ; 005a9798
    MOV EAX,dword ptr [ESP]             ; 005a979c
        ;   Label: LAB_005a979c
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a979f
    MOV ESP,EBP                         ; 005a97a3
    POP EBP                             ; 005a97a5
    POP EDI                             ; 005a97a6
    POP ESI                             ; 005a97a7
    POP EBX                             ; 005a97a8
    RET                                 ; 005a97a9
    MOV ECX,0xbff00000                  ; 005a97aa
        ;   Label: LAB_005a97aa
    MOV dword ptr [ESP],EAX             ; 005a97af
    MOV dword ptr [ESP + 0x4],ECX       ; 005a97b2
    JMP 0x005a979c                      ; 005a97b6
        ;   XREF to: 005a979c (UNCONDITIONAL_JUMP)  ; LAB_005a979c
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a97b8
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a97b8
    XOR EDI,EDI                         ; 005a97bd
    MOV EAX,0xbff00000                  ; 005a97bf
    MOV dword ptr [ESP],EDI             ; 005a97c4
    MOV dword ptr [ESP + 0x4],EAX       ; 005a97c7
    MOV EAX,dword ptr [ESP]             ; 005a97cb
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a97ce
    MOV ESP,EBP                         ; 005a97d2
    POP EBP                             ; 005a97d4
    POP EDI                             ; 005a97d5
    POP ESI                             ; 005a97d6
    POP EBX                             ; 005a97d7
    RET                                 ; 005a97d8

