; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00527410(int param_1,int param_2)
;
;
; XREF[6]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1cd1
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de96
;   core_sound.cpp_FUN_0052dd90 at 0052dda5
;   core_sound.cpp_FUN_0052dff0 at 0052e251
;   sound_sndmain.cpp_FUN_00527d80 at 00527d94
;   sound_sndmain.cpp_FUN_005289f0 at 00528bf3
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0059368b
;   TerminatedCString s_enableSfxChannel_invalid_005936a0
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dbd494
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527410
        ;   Label: sound_sndmain.cpp_enableSfxChannel_FUN_00527410
    PUSH ESI                            ; 00527411
    MOV ESI,dword ptr [ESP + 0xc]       ; 00527412
    MOV EBX,dword ptr [ESP + 0x10]      ; 00527416
    TEST ESI,ESI                        ; 0052741a
    JL 0x00527423                       ; 0052741c
        ;   XREF to: 00527423 (CONDITIONAL_JUMP)  ; LAB_00527423
    CMP ESI,0x20                        ; 0052741e
    JL 0x00527447                       ; 00527421
        ;   XREF to: 00527447 (CONDITIONAL_JUMP)  ; LAB_00527447
    PUSH ESI                            ; 00527423
        ;   Label: LAB_00527423
    MOV EDX,0x59368b                    ; 00527424 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf52                       ; 00527429
    PUSH 0x5936a0                       ; 0052742e | = "enableSfxChannel - invalid channel in..."
    MOV dword ptr [0x01cc4800],EDX      ; 00527433 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00527439 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052743f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00527444
    MOV dword ptr [ESI*0x4 + 0x2dc79d8],EBX ; 00527447
        ;   Label: LAB_00527447
    TEST EBX,EBX                        ; 0052744e
    JNZ 0x00527482                      ; 00527450
        ;   XREF to: 00527482 (CONDITIONAL_JUMP)  ; LAB_00527482
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00527452
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_lockSound_FUN_00528800()
    CMP ESI,dword ptr [EBX + 0x2dbd374] ; 00527457 | DAT_02dbd494
        ;   Label: LAB_00527457
    JNZ 0x0052746f                      ; 0052745d
        ;   XREF to: 0052746f (CONDITIONAL_JUMP)  ; LAB_0052746f
    MOV EAX,0x2dbd374                   ; 0052745f
    ADD EAX,EBX                         ; 00527464
    PUSH EAX                            ; 00527466
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00527467
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570()
    ADD ESP,0x4                         ; 0052746c
    ADD EBX,0x120                       ; 0052746f
        ;   Label: LAB_0052746f
    CMP EBX,0x4800                      ; 00527475
    JNZ 0x00527457                      ; 0052747b
        ;   XREF to: 00527457 (CONDITIONAL_JUMP)  ; LAB_00527457
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052747d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
    POP ESI                             ; 00527482
        ;   Label: LAB_00527482
    POP EBX                             ; 00527483
    RET                                 ; 00527484

