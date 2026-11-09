; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(uint sfx_handle,uint output_format)
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
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90 at 00491ad3
;   core_tommygun.cpp_FUN_00576130 at 0057620f
;   core_turret.cpp_FUN_0057e760 at 0057ec0f
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930
;   sound_sndmain.cpp_FUN_0054d3a0
;   sound_sndmain.cpp_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550c30
        ;   Label: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30
    PUSH ESI                            ; 00550c31
    PUSH EDI                            ; 00550c32
    PUSH EBP                            ; 00550c33
    MOV EBP,ESP                         ; 00550c34
    SUB ESP,0x18                        ; 00550c36
    AND ESP,0xfffffff8                  ; 00550c39
    PUSH 0x1                            ; 00550c3c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00550c3e
    PUSH EDX                            ; 00550c41
    CALL sound_sndmain.cpp_FUN_0054d3a0 ; 00550c42
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550c47
    MOV EBX,EAX                         ; 00550c4a
    TEST EAX,EAX                        ; 00550c4c
    JZ 0x00550cba                       ; 00550c4e
        ;   XREF to: 00550cba (CONDITIONAL_JUMP)  ; LAB_00550cba
    CMP dword ptr [EAX + 0x60],0x0      ; 00550c50
    JZ 0x00550c6c                       ; 00550c54
        ;   XREF to: 00550c6c (CONDITIONAL_JUMP)  ; LAB_00550c6c
    CMP dword ptr [0x02648e80],0x0      ; 00550c56 | DAT_02648e80
    JZ 0x00550c6c                       ; 00550c5d
        ;   XREF to: 00550c6c (CONDITIONAL_JUMP)  ; LAB_00550c6c
    PUSH EAX                            ; 00550c5f
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930 ; 00550c60
        ;   XREF to: 0054f930 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00550c65
    TEST EAX,EAX                        ; 00550c68
    JZ 0x00550cc8                       ; 00550c6a
        ;   XREF to: 00550cc8 (CONDITIONAL_JUMP)  ; LAB_00550cc8
    MOV EDX,dword ptr [EBP + 0x18]      ; 00550c6c
        ;   Label: LAB_00550c6c
    PUSH EDX                            ; 00550c6f
    MOV ECX,dword ptr [EBX + 0x58]      ; 00550c70
    PUSH ECX                            ; 00550c73
    MOV ESI,dword ptr [EBX + 0x54]      ; 00550c74
    PUSH ESI                            ; 00550c77
    MOV EDI,dword ptr [EBX + 0x50]      ; 00550c78
    PUSH EDI                            ; 00550c7b
    MOV EAX,dword ptr [EBX + 0x68]      ; 00550c7c
    PUSH EAX                            ; 00550c7f
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0 ; 00550c80
        ;   XREF to: 0054fdc0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x24],EAX      ; 00550c85
    MOV dword ptr [ESP + 0x28],EDX      ; 00550c89
    FLD double ptr [ESP + 0x24]         ; 00550c8d
    ADD ESP,0x14                        ; 00550c91
    FSTP double ptr [ESP + 0x8]         ; 00550c94
    CALL sound_sndmain.cpp_FUN_00551440 ; 00550c98
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV EAX,dword ptr [ESP + 0x8]       ; 00550c9d
    MOV dword ptr [ESP],EAX             ; 00550ca1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00550ca4
    MOV dword ptr [ESP + 0x4],EAX       ; 00550ca8
    MOV EAX,dword ptr [ESP]             ; 00550cac
        ;   Label: LAB_00550cac
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550caf
    MOV ESP,EBP                         ; 00550cb3
    POP EBP                             ; 00550cb5
    POP EDI                             ; 00550cb6
    POP ESI                             ; 00550cb7
    POP EBX                             ; 00550cb8
    RET                                 ; 00550cb9
    MOV ECX,0xbff00000                  ; 00550cba
        ;   Label: LAB_00550cba
    MOV dword ptr [ESP],EAX             ; 00550cbf
    MOV dword ptr [ESP + 0x4],ECX       ; 00550cc2
    JMP 0x00550cac                      ; 00550cc6
        ;   XREF to: 00550cac (UNCONDITIONAL_JUMP)  ; LAB_00550cac
    CALL sound_sndmain.cpp_FUN_00551440 ; 00550cc8
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_00550cc8
    XOR EDI,EDI                         ; 00550ccd
    MOV EAX,0xbff00000                  ; 00550ccf
    MOV dword ptr [ESP],EDI             ; 00550cd4
    MOV dword ptr [ESP + 0x4],EAX       ; 00550cd7
    MOV EAX,dword ptr [ESP]             ; 00550cdb
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550cde
    MOV ESP,EBP                         ; 00550ce2
    POP EBP                             ; 00550ce4
    POP EDI                             ; 00550ce5
    POP ESI                             ; 00550ce6
    POP EBX                             ; 00550ce7
    RET                                 ; 00550ce8

