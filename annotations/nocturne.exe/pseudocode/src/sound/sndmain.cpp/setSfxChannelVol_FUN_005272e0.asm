; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(int channel_index,float volume)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
; float            Stack[0x8]:4   volume
;
; XREF[7]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1ceb
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e899
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052debd
;   core_sound.cpp_FUN_0052dff0 at 0052e27f
;   core_sound.cpp_syncChannel3WithChannel0_FUN_0052dd90 at 0052ddcd
;   sound_sndmain.cpp_FUN_00527d80 at 00527d89
;   sound_sndmain.cpp_FUN_005289f0 at 00528c50
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005935cf
;   TerminatedCString s_setSfxChannelVol_invalid_005935e4
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dbd3e4
;   undefined4 DAT_02dbd494
;   undefined4 DAT_02dbd500
;   undefined4 DAT_02dbd504
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005272e0
        ;   Label: sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
    PUSH ESI                            ; 005272e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005272e2
    TEST ESI,ESI                        ; 005272e6
    JL 0x005272ef                       ; 005272e8
        ;   XREF to: 005272ef (CONDITIONAL_JUMP)  ; LAB_005272ef
    CMP ESI,0x20                        ; 005272ea
    JL 0x00527313                       ; 005272ed
        ;   XREF to: 00527313 (CONDITIONAL_JUMP)  ; LAB_00527313
    PUSH ESI                            ; 005272ef
        ;   Label: LAB_005272ef
    MOV EDX,0x5935cf                    ; 005272f0 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf32                       ; 005272f5
    PUSH 0x5935e4                       ; 005272fa | = "setSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01cc4800],EDX      ; 005272ff | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00527305 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052730b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00527310
    MOV EDX,dword ptr [ESP + 0x10]      ; 00527313
        ;   Label: LAB_00527313
    MOV EBX,dword ptr [0x02dc8318]      ; 00527317 | DAT_02dc8318
    MOV dword ptr [ESI*0x4 + 0x2dc7958],EDX ; 0052731d
    TEST EBX,EBX                        ; 00527324
    JNZ 0x0052732b                      ; 00527326
        ;   XREF to: 0052732b (CONDITIONAL_JUMP)  ; LAB_0052732b
    POP ESI                             ; 00527328
        ;   Label: LAB_00527328
    POP EBX                             ; 00527329
    RET                                 ; 0052732a
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 0052732b
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
        ;   Label: LAB_0052732b
    TEST EAX,EAX                        ; 00527330
    JZ 0x00527328                       ; 00527332
        ;   XREF to: 00527328 (CONDITIONAL_JUMP)  ; LAB_00527328
    PUSH EDI                            ; 00527334
    MOV EBX,0x2dbd374                   ; 00527335
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 0052733a
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    LEA EDI,[EBX + 0x4800]              ; 0052733f
    CMP dword ptr [EBX + 0x70],0x0      ; 00527345 | DAT_02dbd3e4 | DAT_02dbd504
        ;   Label: LAB_00527345
    JNZ 0x0052735e                      ; 00527349
        ;   XREF to: 0052735e (CONDITIONAL_JUMP)  ; LAB_0052735e
    ADD EBX,0x120                       ; 0052734b
        ;   Label: LAB_0052734b
    CMP EBX,EDI                         ; 00527351
    JNZ 0x00527345                      ; 00527353
        ;   XREF to: 00527345 (CONDITIONAL_JUMP)  ; LAB_00527345
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527355
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    POP EDI                             ; 0052735a
    POP ESI                             ; 0052735b
    POP EBX                             ; 0052735c
    RET                                 ; 0052735d
    CMP dword ptr [EBX + 0x6c],0x0      ; 0052735e | DAT_02dbd500
        ;   Label: LAB_0052735e
    JZ 0x0052734b                       ; 00527362
        ;   XREF to: 0052734b (CONDITIONAL_JUMP)  ; LAB_0052734b
    CMP ESI,dword ptr [EBX]             ; 00527364 | DAT_02dbd494
    JNZ 0x0052734b                      ; 00527366
        ;   XREF to: 0052734b (CONDITIONAL_JUMP)  ; LAB_0052734b
    PUSH 0x8                            ; 00527368
    MOV EAX,[0x02dc8318]                ; 0052736a | DAT_02dc8318
    PUSH EBX                            ; 0052736f | DAT_02dbd494
    MOV EDX,dword ptr [EAX]             ; 00527370
    PUSH EAX                            ; 00527372
    CALL dword ptr [EDX + 0x40]         ; 00527373
    ADD ESP,0xc                         ; 00527376
    JMP 0x0052734b                      ; 00527379
        ;   XREF to: 0052734b (UNCONDITIONAL_JUMP)  ; LAB_0052734b

