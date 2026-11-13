; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00573660(uint sfx_handle,uint output_format)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; uint             Stack[0x8]:4   output_format
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 at 004aa443
;   core_tommygun.cpp_CTommyGun_process_FUN_00598d50 at 00598e2f
;   core_turret.cpp_CTurret_process_FUN_005a23b0 at 005a285f
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573660
        ;   Label: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660
    PUSH ESI                            ; 00573661
    PUSH EDI                            ; 00573662
    PUSH EBP                            ; 00573663
    MOV EBP,ESP                         ; 00573664
    SUB ESP,0x18                        ; 00573666
    AND ESP,0xfffffff8                  ; 00573669
    PUSH 0x1                            ; 0057366c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057366e
    PUSH EDX                            ; 00573671
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10 ; 00573672
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00573677
    MOV EBX,EAX                         ; 0057367a
    TEST EAX,EAX                        ; 0057367c
    JZ 0x005736ea                       ; 0057367e
        ;   XREF to: 005736ea (CONDITIONAL_JUMP)  ; LAB_005736ea
    CMP dword ptr [EAX + 0x60],0x0      ; 00573680
    JZ 0x0057369c                       ; 00573684
        ;   XREF to: 0057369c (CONDITIONAL_JUMP)  ; LAB_0057369c
    CMP dword ptr [0x02c80650],0x0      ; 00573686 | DAT_02c80650
    JZ 0x0057369c                       ; 0057368d
        ;   XREF to: 0057369c (CONDITIONAL_JUMP)  ; LAB_0057369c
    PUSH EAX                            ; 0057368f
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0 ; 00573690
        ;   XREF to: 00571fa0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00573695
    TEST EAX,EAX                        ; 00573698
    JZ 0x005736f8                       ; 0057369a
        ;   XREF to: 005736f8 (CONDITIONAL_JUMP)  ; LAB_005736f8
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057369c
        ;   Label: LAB_0057369c
    PUSH EDX                            ; 0057369f
    MOV ECX,dword ptr [EBX + 0x58]      ; 005736a0
    PUSH ECX                            ; 005736a3
    MOV ESI,dword ptr [EBX + 0x54]      ; 005736a4
    PUSH ESI                            ; 005736a7
    MOV EDI,dword ptr [EBX + 0x50]      ; 005736a8
    PUSH EDI                            ; 005736ab
    MOV EAX,dword ptr [EBX + 0x68]      ; 005736ac
    PUSH EAX                            ; 005736af
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430 ; 005736b0
        ;   XREF to: 00572430 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x24],EAX      ; 005736b5
    MOV dword ptr [ESP + 0x28],EDX      ; 005736b9
    FLD double ptr [ESP + 0x24]         ; 005736bd
    ADD ESP,0x14                        ; 005736c1
    FSTP double ptr [ESP + 0x8]         ; 005736c4
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 005736c8
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    MOV EAX,dword ptr [ESP + 0x8]       ; 005736cd
    MOV dword ptr [ESP],EAX             ; 005736d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005736d4
    MOV dword ptr [ESP + 0x4],EAX       ; 005736d8
    MOV EAX,dword ptr [ESP]             ; 005736dc
        ;   Label: LAB_005736dc
    MOV EDX,dword ptr [ESP + 0x4]       ; 005736df
    MOV ESP,EBP                         ; 005736e3
    POP EBP                             ; 005736e5
    POP EDI                             ; 005736e6
    POP ESI                             ; 005736e7
    POP EBX                             ; 005736e8
    RET                                 ; 005736e9
    MOV ECX,0xbff00000                  ; 005736ea
        ;   Label: LAB_005736ea
    MOV dword ptr [ESP],EAX             ; 005736ef
    MOV dword ptr [ESP + 0x4],ECX       ; 005736f2
    JMP 0x005736dc                      ; 005736f6
        ;   XREF to: 005736dc (UNCONDITIONAL_JUMP)  ; LAB_005736dc
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 005736f8
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_005736f8
    XOR EDI,EDI                         ; 005736fd
    MOV EAX,0xbff00000                  ; 005736ff
    MOV dword ptr [ESP],EDI             ; 00573704
    MOV dword ptr [ESP + 0x4],EAX       ; 00573707
    MOV EAX,dword ptr [ESP]             ; 0057370b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057370e
    MOV ESP,EBP                         ; 00573712
    POP EBP                             ; 00573714
    POP EDI                             ; 00573715
    POP ESI                             ; 00573716
    POP EBX                             ; 00573717
    RET                                 ; 00573718

