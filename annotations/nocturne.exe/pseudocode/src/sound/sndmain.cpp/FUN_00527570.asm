; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00527570(char *param_1)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_sfx_slot_d_s_pos_7_1f_7_00593712
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[0].sample
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].options.trigger_time
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].options.trigger_time+4
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].playback_state
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].sample
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527570
        ;   Label: sound_sndmain.cpp_FUN_00527570
    PUSH ESI                            ; 00527571
    PUSH EDI                            ; 00527572
    PUSH EBP                            ; 00527573
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00527574
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    MOV EDI,dword ptr [ESP + 0x14]      ; 00527579
    MOV EBX,0x2dbd374                   ; 0052757d
    XOR ESI,ESI                         ; 00527582
    CMP dword ptr [EBX + 0x74],0x0      ; 00527584 | g_CSfxSlot_ARRAY_02dbd374[0].sample | g_CSfxSlot_ARRAY_02dbd374[1].sample
        ;   Label: LAB_00527584
    JNZ 0x005275a3                      ; 00527588
        ;   XREF to: 005275a3 (CONDITIONAL_JUMP)  ; LAB_005275a3
    INC ESI                             ; 0052758a
        ;   Label: LAB_0052758a
    ADD EBX,0x120                       ; 0052758b
    CMP ESI,0x40                        ; 00527591
    JL 0x00527584                       ; 00527594
        ;   XREF to: 00527584 (CONDITIONAL_JUMP)  ; LAB_00527584
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527596
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV byte ptr [EDI],0x0              ; 0052759b
    POP EBP                             ; 0052759e
    POP EDI                             ; 0052759f
    POP ESI                             ; 005275a0
    POP EBX                             ; 005275a1
    RET                                 ; 005275a2
    CMP dword ptr [EBX + 0x70],0x0      ; 005275a3 | g_CSfxSlot_ARRAY_02dbd374[1].playback_state
        ;   Label: LAB_005275a3
    JZ 0x0052758a                       ; 005275a7
        ;   XREF to: 0052758a (CONDITIONAL_JUMP)  ; LAB_0052758a
    PUSH EBX                            ; 005275a9 | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0 ; 005275aa
        ;   XREF to: 005257e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005275af
    MOV EAX,dword ptr [EBX + 0x74]      ; 005275b2 | g_CSfxSlot_ARRAY_02dbd374[1].sample
    SUB ESP,0x8                         ; 005275b5
    FILD dword ptr [EAX + 0x110]        ; 005275b8
    FSTP double ptr [ESP]               ; 005275be
    MOV EBP,dword ptr [EBX + 0x64]      ; 005275c1 | g_CSfxSlot_ARRAY_02dbd374[1].options.trigger_time+4
    PUSH EBP                            ; 005275c4
    MOV EDX,dword ptr [EBX + 0x60]      ; 005275c5 | g_CSfxSlot_ARRAY_02dbd374[1].options.trigger_time
    PUSH EDX                            ; 005275c8
    PUSH EAX                            ; 005275c9
    PUSH ESI                            ; 005275ca
    PUSH 0x593712                       ; 005275cb | = "sfx slot %d: %s, pos %7.1f/%7.1f\n"
    PUSH EDI                            ; 005275d0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005275d1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x20                        ; 005275d6
    ADD EDI,EAX                         ; 005275d9
    JMP 0x0052758a                      ; 005275db
        ;   XREF to: 0052758a (UNCONDITIONAL_JUMP)  ; LAB_0052758a

