; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00572a10(uint flag_mask)
;
; Parameters:
; uint             Stack[0x4]:4   flag_mask
;
; XREF[4]:
;   core_doc.cpp_FUN_00469550 at 0046bcfa
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550 at 004aa5a0
;   core_sound.cpp_FUN_0057d6a0 at 0057d7a1
;   core_stranger.cpp_FUN_00585b00 at 0058811a
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572a10 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572a10
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572a16
    SUB EAX,EDX                         ; 00572a1d
    SHL EAX,0x5                         ; 00572a1f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572a22
    OR dword ptr [EAX + 0x2c78d3c],EDX  ; 00572a26
    RET                                 ; 00572a2c

