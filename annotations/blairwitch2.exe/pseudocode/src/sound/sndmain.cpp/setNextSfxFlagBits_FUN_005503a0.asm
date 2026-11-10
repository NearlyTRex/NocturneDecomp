; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)
;
; Parameters:
; uint             Stack[0x4]:4   flag_mask
;
; XREF[4]:
;   core_doc.cpp_FUN_00450c60 at 00453169
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 at 00491c30
;   core_sound.cpp_CSound_configure_FUN_0055ac50 at 0055ad51
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00565642
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005503a0 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005503a6
    SUB EAX,EDX                         ; 005503ad
    SHL EAX,0x5                         ; 005503af
    MOV EDX,dword ptr [ESP + 0x4]       ; 005503b2
    OR dword ptr [EAX + 0x264166c],EDX  ; 005503b6
    RET                                 ; 005503bc

