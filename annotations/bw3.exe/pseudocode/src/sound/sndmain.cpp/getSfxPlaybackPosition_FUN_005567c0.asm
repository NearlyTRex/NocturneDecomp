; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005567c0(uint sfx_handle,uint output_format)
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
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 at 004952c3
;   core_game.cpp_FUN_004c4cc0 at 004c4cda
;   core_tommygun.cpp_CTommyGun_process_FUN_0056bd40 at 0056be1f
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005567c0
        ;   Label: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0
    PUSH ESI                            ; 005567c1
    PUSH EDI                            ; 005567c2
    PUSH EBP                            ; 005567c3
    MOV EBP,ESP                         ; 005567c4
    SUB ESP,0x18                        ; 005567c6
    AND ESP,0xfffffff8                  ; 005567c9
    PUSH 0x1                            ; 005567cc
    MOV EDX,dword ptr [EBP + 0x14]      ; 005567ce
    PUSH EDX                            ; 005567d1
    CALL sound_sndmain.cpp_FUN_00552f10 ; 005567d2
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005567d7
    MOV EBX,EAX                         ; 005567da
    TEST EAX,EAX                        ; 005567dc
    JZ 0x0055684a                       ; 005567de
        ;   XREF to: 0055684a (CONDITIONAL_JUMP)  ; LAB_0055684a
    CMP dword ptr [EAX + 0x60],0x0      ; 005567e0
    JZ 0x005567fc                       ; 005567e4
        ;   XREF to: 005567fc (CONDITIONAL_JUMP)  ; LAB_005567fc
    CMP dword ptr [0x02cf3280],0x0      ; 005567e6 | DAT_02cf3280
    JZ 0x005567fc                       ; 005567ed
        ;   XREF to: 005567fc (CONDITIONAL_JUMP)  ; LAB_005567fc
    PUSH EAX                            ; 005567ef
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0 ; 005567f0
        ;   XREF to: 005554a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005567f5
    TEST EAX,EAX                        ; 005567f8
    JZ 0x00556858                       ; 005567fa
        ;   XREF to: 00556858 (CONDITIONAL_JUMP)  ; LAB_00556858
    MOV EDX,dword ptr [EBP + 0x18]      ; 005567fc
        ;   Label: LAB_005567fc
    PUSH EDX                            ; 005567ff
    MOV ECX,dword ptr [EBX + 0x58]      ; 00556800
    PUSH ECX                            ; 00556803
    MOV ESI,dword ptr [EBX + 0x54]      ; 00556804
    PUSH ESI                            ; 00556807
    MOV EDI,dword ptr [EBX + 0x50]      ; 00556808
    PUSH EDI                            ; 0055680b
    MOV EAX,dword ptr [EBX + 0x68]      ; 0055680c
    PUSH EAX                            ; 0055680f
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930 ; 00556810
        ;   XREF to: 00555930 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x24],EAX      ; 00556815
    MOV dword ptr [ESP + 0x28],EDX      ; 00556819
    FLD double ptr [ESP + 0x24]         ; 0055681d
    ADD ESP,0x14                        ; 00556821
    FSTP double ptr [ESP + 0x8]         ; 00556824
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556828
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055682d
    MOV dword ptr [ESP],EAX             ; 00556831
    MOV EAX,dword ptr [ESP + 0xc]       ; 00556834
    MOV dword ptr [ESP + 0x4],EAX       ; 00556838
    MOV EAX,dword ptr [ESP]             ; 0055683c
        ;   Label: LAB_0055683c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055683f
    MOV ESP,EBP                         ; 00556843
    POP EBP                             ; 00556845
    POP EDI                             ; 00556846
    POP ESI                             ; 00556847
    POP EBX                             ; 00556848
    RET                                 ; 00556849
    MOV ECX,0xbff00000                  ; 0055684a
        ;   Label: LAB_0055684a
    MOV dword ptr [ESP],EAX             ; 0055684f
    MOV dword ptr [ESP + 0x4],ECX       ; 00556852
    JMP 0x0055683c                      ; 00556856
        ;   XREF to: 0055683c (UNCONDITIONAL_JUMP)  ; LAB_0055683c
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556858
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_00556858
    XOR EDI,EDI                         ; 0055685d
    MOV EAX,0xbff00000                  ; 0055685f
    MOV dword ptr [ESP],EDI             ; 00556864
    MOV dword ptr [ESP + 0x4],EAX       ; 00556867
    MOV EAX,dword ptr [ESP]             ; 0055686b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055686e
    MOV ESP,EBP                         ; 00556872
    POP EBP                             ; 00556874
    POP EDI                             ; 00556875
    POP ESI                             ; 00556876
    POP EBX                             ; 00556877
    RET                                 ; 00556878

