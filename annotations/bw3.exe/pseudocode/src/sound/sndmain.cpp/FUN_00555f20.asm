; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00555f20(uint flag_mask)
;
; Parameters:
; uint             Stack[0x4]:4   flag_mask
;
; XREF[3]:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0 at 00495420
;   core_game.cpp_FUN_004c4a60 at 004c4b3f
;   core_sound.cpp_FUN_005607d0 at 005608d1
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555f20 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_FUN_00555f20
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555f26
    SUB EAX,EDX                         ; 00555f2d
    SHL EAX,0x5                         ; 00555f2f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555f32
    OR dword ptr [EAX + 0x2ceb96c],EDX  ; 00555f36
    RET                                 ; 00555f3c

