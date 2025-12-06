; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da7fe
;
; Referenced Globals:
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[0].field7_0x74
;   undefined4 DAT_03f5db1c
;   undefined4 DAT_03f5dc40
;   undefined4 DAT_03f5dc44
;   int g_SfxLastSlot
;
; *****************************************************************************

section .text

    MOV EAX,0x3f5daa4                   ; 005a9ff0 | CSfxSlot[64] g_SfxSlots
        ;   Label: sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0
    XOR EDX,EDX                         ; 005a9ff5
    LEA ECX,[EAX + 0x4a00]              ; 005a9ff7 | int g_SfxLastSlot
    CMP dword ptr [EAX + 0x78],0x0      ; 005a9ffd | DAT_03f5db1c
        ;   Label: LAB_005a9ffd
    JZ 0x005aa00a                       ; 005aa001 | LAB_005aa00a
        ;   XREF to: 005aa00a (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x74],0x0      ; 005aa003 | g_SfxSlots[0].field7_0x74
    JZ 0x005aa00a                       ; 005aa007 | LAB_005aa00a
        ;   XREF to: 005aa00a (CONDITIONAL_JUMP)
    INC EDX                             ; 005aa009
    ADD EAX,0x128                       ; 005aa00a
        ;   Label: LAB_005aa00a
    CMP EAX,ECX                         ; 005aa00f
    JNZ 0x005a9ffd                      ; 005aa011 | LAB_005a9ffd
        ;   XREF to: 005a9ffd (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 005aa013
    RET                                 ; 005aa015

