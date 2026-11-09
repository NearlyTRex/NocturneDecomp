; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054dea4
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30 at 00550c60
;
; Referenced Globals:
;   TerminatedCString s_Error_polling_hw_playbac_005e88c9
;   undefined4 DAT_02648e80
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f930
        ;   Label: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930
    PUSH EDI                            ; 0054f931
    PUSH EBP                            ; 0054f932
    MOV EBP,ESP                         ; 0054f933
    SUB ESP,0x10                        ; 0054f935
    AND ESP,0xfffffff8                  ; 0054f938
    MOV EBX,dword ptr [EBP + 0x10]      ; 0054f93b
    CMP dword ptr [EBX + 0x60],0x0      ; 0054f93e
    JZ 0x0054f954                       ; 0054f942
        ;   XREF to: 0054f954 (CONDITIONAL_JUMP)  ; LAB_0054f954
    MOV ECX,dword ptr [0x02648e80]      ; 0054f944 | DAT_02648e80
    TEST ECX,ECX                        ; 0054f94a
    JZ 0x0054f954                       ; 0054f94c
        ;   XREF to: 0054f954 (CONDITIONAL_JUMP)  ; LAB_0054f954
    CMP dword ptr [EBX + 0x68],0x0      ; 0054f94e
    JNZ 0x0054f95c                      ; 0054f952
        ;   XREF to: 0054f95c (CONDITIONAL_JUMP)  ; LAB_0054f95c
    XOR EAX,EAX                         ; 0054f954
        ;   Label: LAB_0054f954
    MOV ESP,EBP                         ; 0054f956
    POP EBP                             ; 0054f958
    POP EDI                             ; 0054f959
    POP EBX                             ; 0054f95a
    RET                                 ; 0054f95b
    PUSH EBX                            ; 0054f95c
        ;   Label: LAB_0054f95c
    MOV EDX,dword ptr [ECX]             ; 0054f95d
    PUSH ECX                            ; 0054f95f
    CALL dword ptr [EDX + 0x48]         ; 0054f960
    MOV dword ptr [ESP + 0x10],EAX      ; 0054f963
    MOV dword ptr [ESP + 0x14],EDX      ; 0054f967
    FLD double ptr [ESP + 0x10]         ; 0054f96b
    ADD ESP,0x8                         ; 0054f96f
    FLDZ                                ; 0054f972
    FXCH                                ; 0054f974
    FSTP double ptr [ESP]               ; 0054f976
    FCOMP double ptr [ESP]              ; 0054f979
    FNSTSW AX                           ; 0054f97c
    SAHF                                ; 0054f97e
    JBE 0x0054f99a                      ; 0054f97f
        ;   XREF to: 0054f99a (CONDITIONAL_JUMP)  ; LAB_0054f99a
    MOV EDX,dword ptr [EBX + 0x68]      ; 0054f981
    PUSH EDX                            ; 0054f984
    PUSH 0x5e88c9                       ; 0054f985 | = "Error polling hw playback pos %s\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054f98a
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x8                         ; 0054f98f
    XOR EAX,EAX                         ; 0054f992
    MOV ESP,EBP                         ; 0054f994
    POP EBP                             ; 0054f996
    POP EDI                             ; 0054f997
    POP EBX                             ; 0054f998
    RET                                 ; 0054f999
    MOV EDI,dword ptr [ESP + 0x4]       ; 0054f99a
        ;   Label: LAB_0054f99a
    PUSH EDI                            ; 0054f99e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054f99f
    PUSH EAX                            ; 0054f9a3
    PUSH EBX                            ; 0054f9a4
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0 ; 0054f9a5
        ;   XREF to: 0054f9c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0(CSfxSlot * this_ptr, double hardware_playback_pos)
    MOV EAX,0x1                         ; 0054f9aa
    ADD ESP,0xc                         ; 0054f9af
    MOV ESP,EBP                         ; 0054f9b2
    POP EBP                             ; 0054f9b4
    POP EDI                             ; 0054f9b5
    POP EBX                             ; 0054f9b6
    RET                                 ; 0054f9b7

