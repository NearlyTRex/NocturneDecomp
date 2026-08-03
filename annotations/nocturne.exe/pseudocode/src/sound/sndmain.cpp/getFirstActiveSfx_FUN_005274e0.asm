; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005274e0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d3c6
;
; Referenced Globals:
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[0].playback_state
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].playback_state
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005274e0
        ;   Label: sound_sndmain.cpp_getFirstActiveSfx_FUN_005274e0
    XOR EAX,EAX                         ; 005274e1
    XOR EDX,EDX                         ; 005274e3
    XOR ECX,ECX                         ; 005274e5
    CMP ECX,dword ptr [EAX + 0x2dbd3e8] ; 005274e7
        ;   Label: LAB_005274e7
    JZ 0x005274f9                       ; 005274ed
        ;   XREF to: 005274f9 (CONDITIONAL_JUMP)  ; LAB_005274f9
    MOV ESI,dword ptr [EAX + 0x2dbd3e4] ; 005274ef | g_CSfxSlot_ARRAY_02dbd374[0].playback_state | g_CSfxSlot_ARRAY_02dbd374[1].playback_state
    CMP ECX,ESI                         ; 005274f5
    JNZ 0x0052750a                      ; 005274f7
        ;   XREF to: 0052750a (CONDITIONAL_JUMP)  ; LAB_0052750a
    ADD EAX,0x120                       ; 005274f9
        ;   Label: LAB_005274f9
    INC EDX                             ; 005274fe
    CMP EAX,0x4800                      ; 005274ff
    JL 0x005274e7                       ; 00527504
        ;   XREF to: 005274e7 (CONDITIONAL_JUMP)  ; LAB_005274e7
    XOR EAX,EAX                         ; 00527506
    POP ESI                             ; 00527508
    RET                                 ; 00527509
    MOV EAX,ESI                         ; 0052750a
        ;   Label: LAB_0052750a
    SHL EAX,0x6                         ; 0052750c
    OR EAX,EDX                          ; 0052750f
    POP ESI                             ; 00527511
    RET                                 ; 00527512

