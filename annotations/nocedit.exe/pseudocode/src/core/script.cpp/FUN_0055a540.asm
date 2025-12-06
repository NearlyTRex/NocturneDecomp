; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_0055a540()
;
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_FUN_00524760 at 00524864
;   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 at 0055a350
;   core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0 at 0055a4c6
;
; Referenced Globals:
;   TerminatedCString s_wav_00641a75
;   undefined4 DAT_00641a76
;   undefined4 DAT_00641a77
;   undefined4 DAT_00641a78
;   TerminatedCString s_smill_wav_00641a7a
;   TerminatedCString s_s_0_85_00641a84
;   undefined4 DAT_00641a85
;   undefined4 DAT_00641a86
;   undefined4 DAT_00641a87
;   TerminatedCString s_town_wav_00641a8a
;   TerminatedCString s_s_0_85_00641a93
;   undefined4 DAT_00641a94
;   undefined4 DAT_00641a95
;   undefined4 DAT_00641a96
;   CGame* g_CGamePtr = 02d81a9c
;   ... and 11 more
;
; Called Functions:
;   core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0
;   crt_string.c_splitpath_FUN_005ff178
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a540
        ;   Label: core_script.cpp_FUN_0055a540
    PUSH ESI                            ; 0055a541
    PUSH EDI                            ; 0055a542
    SUB ESP,0x64                        ; 0055a543
    MOV EBX,dword ptr [ESP + 0x74]      ; 0055a546
    MOV dword ptr [EBX + 0x48],0x0      ; 0055a54a
    MOV byte ptr [EBX + 0x54],0x0       ; 0055a551
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 0055a555
    MOV dword ptr [EBX + 0x50],0xbf800000 ; 0055a55c
    MOV dword ptr [EBX],0x0             ; 0055a563
    MOV EAX,[0x02db87d0]                ; 0055a569 | int g_LocalHeroIndex
    MOV dword ptr [EBX + 0x4],0x0       ; 0055a56e
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0055a575 | CHero *[4] g_HeroActors
    MOV dword ptr [EBX + 0xc],EAX       ; 0055a57c
    MOV EAX,[0x0067b654]                ; 0055a57f | CGame * g_CGamePtr
    MOV dword ptr [EBX + 0x10],0x1      ; 0055a584
    MOV dword ptr [EAX + 0x22c],0x1     ; 0055a58b | DAT_02d81cc8
    XOR EDX,EDX                         ; 0055a595
    MOV dword ptr [EAX + 0x230],0x1     ; 0055a597 | DAT_02d81ccc
    PUSH EDX                            ; 0055a5a1
    MOV dword ptr [EAX + 0x228],EDX     ; 0055a5a2 | DAT_02d81cc4
    LEA EAX,[ESP + 0x4]                 ; 0055a5a8
    PUSH EAX                            ; 0055a5ac
    MOV dword ptr [0x0310f4a0],EDX      ; 0055a5ad | DAT_0310f4a0
    MOV dword ptr [EBX + 0x454],0xbf800000 ; 0055a5b3
    PUSH EDX                            ; 0055a5bd
    MOV dword ptr [EBX + 0x458],0xffffffff ; 0055a5be
    MOV EAX,[0x006810c8]                ; 0055a5c8 | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 0055a5cd
    ADD EAX,0x14d0f0                    ; 0055a5ce
    MOV dword ptr [EBX + 0x45c],EDX     ; 0055a5d3
    PUSH EAX                            ; 0055a5d9 | DAT_03261368
    MOV dword ptr [0x0310f4a8],EDX      ; 0055a5da | undefined4 DAT_0310f4a8
    MOV dword ptr [EBX + 0x14],EDX      ; 0055a5e0
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0055a5e3 | void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0055a5e8
    MOV ESI,0x641a75                    ; 0055a5eb | = ".wav" | s_wav_00641a75 = .wav
    MOV EDI,ESP                         ; 0055a5f0
    PUSH EDI                            ; 0055a5f2
    SUB ECX,ECX                         ; 0055a5f3
    DEC ECX                             ; 0055a5f5
    MOV AL,0x0                          ; 0055a5f6
    SCASB.REPNE ES:EDI                  ; 0055a5f8
    DEC EDI                             ; 0055a5fa
    MOV AL,byte ptr [ESI]               ; 0055a5fb | = ".wav" | s_wav_00641a75 = .wav
        ;   Label: LAB_0055a5fb
    MOV byte ptr [EDI],AL               ; 0055a5fd
    CMP AL,0x0                          ; 0055a5ff
    JZ 0x0055a613                       ; 0055a601 | LAB_0055a613
        ;   XREF to: 0055a613 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0055a603 | DAT_00641a76
    ADD ESI,0x2                         ; 0055a606
    MOV byte ptr [EDI + 0x1],AL         ; 0055a609
    ADD EDI,0x2                         ; 0055a60c
    CMP AL,0x0                          ; 0055a60f
    JNZ 0x0055a5fb                      ; 0055a611 | LAB_0055a5fb
        ;   XREF to: 0055a5fb (CONDITIONAL_JUMP)
    POP EDI                             ; 0055a613
        ;   Label: LAB_0055a613
    PUSH 0x641a7a                       ; 0055a614 | = "smill.wav" | s_smill_wav_00641a7a = smill.wav
    LEA EAX,[ESP + 0x4]                 ; 0055a619
    PUSH EAX                            ; 0055a61d
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055a61e | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055a623
    TEST EAX,EAX                        ; 0055a626
    JNZ 0x0055a653                      ; 0055a628 | LAB_0055a653
        ;   XREF to: 0055a653 (CONDITIONAL_JUMP)
    MOV ESI,0x641a84                    ; 0055a62a | = "@0.85" | s_s_0_85_00641a84 = @0.85
    MOV EDI,ESP                         ; 0055a62f
    PUSH EDI                            ; 0055a631
    SUB ECX,ECX                         ; 0055a632
    DEC ECX                             ; 0055a634
    MOV AL,0x0                          ; 0055a635
    SCASB.REPNE ES:EDI                  ; 0055a637
    DEC EDI                             ; 0055a639
    MOV AL,byte ptr [ESI]               ; 0055a63a | = "@0.85" | s_s_0_85_00641a84 = @0.85
        ;   Label: LAB_0055a63a
    MOV byte ptr [EDI],AL               ; 0055a63c
    CMP AL,0x0                          ; 0055a63e
    JZ 0x0055a652                       ; 0055a640 | LAB_0055a652
        ;   XREF to: 0055a652 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0055a642 | DAT_00641a85
    ADD ESI,0x2                         ; 0055a645
    MOV byte ptr [EDI + 0x1],AL         ; 0055a648
    ADD EDI,0x2                         ; 0055a64b
    CMP AL,0x0                          ; 0055a64e
    JNZ 0x0055a63a                      ; 0055a650 | LAB_0055a63a
        ;   XREF to: 0055a63a (CONDITIONAL_JUMP)
    POP EDI                             ; 0055a652
        ;   Label: LAB_0055a652
    PUSH 0x641a8a                       ; 0055a653 | = "town.wav" | s_town_wav_00641a8a = town.wav
        ;   Label: LAB_0055a653
    LEA EAX,[ESP + 0x4]                 ; 0055a658
    PUSH EAX                            ; 0055a65c
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055a65d | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055a662
    TEST EAX,EAX                        ; 0055a665
    JZ 0x0055a689                       ; 0055a667 | LAB_0055a689
        ;   XREF to: 0055a689 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0055a669
        ;   Label: LAB_0055a669
    PUSH EAX                            ; 0055a66b
    MOV ESI,dword ptr [0x00681ef8]      ; 0055a66c | CSound * g_CSoundPtr
    PUSH ESI                            ; 0055a672 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0 ; 0055a673 | void core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0(CSound * this_ptr, char * sound_name)
        ;   XREF to: 005b39b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055a678
    MOV dword ptr [EBX + 0x18],0x0      ; 0055a67b
    ADD ESP,0x64                        ; 0055a682
    POP EDI                             ; 0055a685
    POP ESI                             ; 0055a686
    POP EBX                             ; 0055a687
    RET                                 ; 0055a688
    MOV ESI,0x641a93                    ; 0055a689 | = "@0.85" | s_s_0_85_00641a93 = @0.85
        ;   Label: LAB_0055a689
    MOV EDI,ESP                         ; 0055a68e
    PUSH EDI                            ; 0055a690
    SUB ECX,ECX                         ; 0055a691
    DEC ECX                             ; 0055a693
    MOV AL,0x0                          ; 0055a694
    SCASB.REPNE ES:EDI                  ; 0055a696
    DEC EDI                             ; 0055a698
    MOV AL,byte ptr [ESI]               ; 0055a699 | = "@0.85" | s_s_0_85_00641a93 = @0.85
        ;   Label: LAB_0055a699
    MOV byte ptr [EDI],AL               ; 0055a69b
    CMP AL,0x0                          ; 0055a69d
    JZ 0x0055a6b1                       ; 0055a69f | LAB_0055a6b1
        ;   XREF to: 0055a6b1 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0055a6a1 | DAT_00641a94
    ADD ESI,0x2                         ; 0055a6a4
    MOV byte ptr [EDI + 0x1],AL         ; 0055a6a7
    ADD EDI,0x2                         ; 0055a6aa
    CMP AL,0x0                          ; 0055a6ad
    JNZ 0x0055a699                      ; 0055a6af | LAB_0055a699
        ;   XREF to: 0055a699 (CONDITIONAL_JUMP)
    POP EDI                             ; 0055a6b1
        ;   Label: LAB_0055a6b1
    JMP 0x0055a669                      ; 0055a6b2 | LAB_0055a669
        ;   XREF to: 0055a669 (UNCONDITIONAL_JUMP)

