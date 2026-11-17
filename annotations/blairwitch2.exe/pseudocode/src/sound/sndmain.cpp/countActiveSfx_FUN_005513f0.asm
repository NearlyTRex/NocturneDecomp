; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005513f0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004b5190 at 004b5933
;
; Referenced Globals:
;   undefined4 g_CSfxSlot_ARRAY_0263cf1c[0].playback_state
;   undefined4 g_CSfxSlot_ARRAY_0263cf1c[0].sample
;   undefined4 g_CSfxSlot_ARRAY_0263cf1c[1].playback_state
;   undefined4 g_CSfxSlot_ARRAY_0263cf1c[1].sample
;
; *****************************************************************************

section .text

    MOV EAX,0x263cf1c                   ; 005513f0
        ;   Label: sound_sndmain.cpp_countActiveSfx_FUN_005513f0
    XOR EDX,EDX                         ; 005513f5
    LEA ECX,[EAX + 0x4700]              ; 005513f7
    CMP dword ptr [EAX + 0x68],0x0      ; 005513fd | g_CSfxSlot_ARRAY_0263cf1c[0].sample | g_CSfxSlot_ARRAY_0263cf1c[1].sample
        ;   Label: LAB_005513fd
    JZ 0x0055140a                       ; 00551401
        ;   XREF to: 0055140a (CONDITIONAL_JUMP)  ; LAB_0055140a
    CMP dword ptr [EAX + 0x64],0x0      ; 00551403 | g_CSfxSlot_ARRAY_0263cf1c[0].playback_state | g_CSfxSlot_ARRAY_0263cf1c[1].playback_state
    JZ 0x0055140a                       ; 00551407
        ;   XREF to: 0055140a (CONDITIONAL_JUMP)  ; LAB_0055140a
    INC EDX                             ; 00551409
    ADD EAX,0x11c                       ; 0055140a
        ;   Label: LAB_0055140a
    CMP EAX,ECX                         ; 0055140f
    JNZ 0x005513fd                      ; 00551411
        ;   XREF to: 005513fd (CONDITIONAL_JUMP)  ; LAB_005513fd
    MOV EAX,EDX                         ; 00551413
    RET                                 ; 00551415

