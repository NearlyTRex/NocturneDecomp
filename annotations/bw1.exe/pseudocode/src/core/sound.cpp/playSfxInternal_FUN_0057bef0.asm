; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_playSfxInternal_FUN_0057bef0(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)
;
; Parameters:
; void *           Stack[0x4]:4   user_data
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   x
; float            Stack[0x10]:4   y
; float            Stack[0x14]:4   z
; CVector3f *      Stack[0x18]:4   position_tracker
; uint             Stack[0x1c]:4   flags
; Local Variables:
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined1       Stack[-0x16f]:1  local_16f
; undefined        Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined        Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940 at 0057d96c
;   core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 at 0057d8ba
;   core_sound.cpp_CSound_playSound_FUN_0057d880 at 0057d894
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980 at 0057d9a9
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 at 0057d8e8
;
; Referenced Globals:
;   TerminatedCString s_d_d_n_005f5942
;   TerminatedCString s_core_sound_cpp_005f594c
;   TerminatedCString s_Invalid_sfx_string_s_005f595e
;   undefined4 DAT_005f5975
;   undefined4 DAT_005f5977
;   undefined1 DAT_005f5979
;   undefined1 DAT_005f597a
;   undefined1 DAT_005f597b
;   undefined1 DAT_005f597c
;   TerminatedCString s_Can_t_find_wav_s_005f597e
;   TerminatedCString s_f_n_005f5992
;   TerminatedCString s_core_sound_cpp_005f5998
;   TerminatedCString s_Invalid_sfx_string_s_005f59aa
;   TerminatedCString s_f_n_005f59c1
;   TerminatedCString s_core_sound_cpp_005f59c7
;   ... and 13 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_set.cpp_FUN_00554440
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   sound_sndmain.cpp_FUN_00572780
;   sound_sndmain.cpp_FUN_005727e0
;   sound_sndmain.cpp_FUN_005728e0
;   sound_sndmain.cpp_FUN_00572900
;   sound_sndmain.cpp_FUN_005729f0
;   sound_sndmain.cpp_isSoundMuted_FUN_005735f0
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;   sound_sndmain.cpp_setNextSfxUserData_FUN_00572920
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057bef0
        ;   Label: core_sound.cpp_playSfxInternal_FUN_0057bef0
    PUSH ESI                            ; 0057bef1
    PUSH EDI                            ; 0057bef2
    PUSH EBP                            ; 0057bef3
    MOV EBP,ESP                         ; 0057bef4
    SUB ESP,0x168                       ; 0057bef6
    AND ESP,0xfffffff8                  ; 0057befc
    CALL sound_sndmain.cpp_isSoundMuted_FUN_005735f0 ; 0057beff
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_005735f0()
    TEST EAX,EAX                        ; 0057bf04
    JNZ 0x0057c13f                      ; 0057bf06
        ;   XREF to: 0057c13f (CONDITIONAL_JUMP)  ; LAB_0057c13f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057bf0c
    TEST EDX,EDX                        ; 0057bf0f
    JZ 0x0057c138                       ; 0057bf11
        ;   XREF to: 0057c138 (CONDITIONAL_JUMP)  ; LAB_0057c138
    CMP byte ptr [EDX],0x0              ; 0057bf17
    JZ 0x0057c138                       ; 0057bf1a
        ;   XREF to: 0057c138 (CONDITIONAL_JUMP)  ; LAB_0057c138
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057bf20
    LEA ESI,[ESP + 0x8]                 ; 0057bf23
    MOV DH,byte ptr [EAX]               ; 0057bf27
    MOV dword ptr [ESP + 0x164],EAX     ; 0057bf29
    TEST DH,DH                          ; 0057bf30
    JZ 0x0057bf51                       ; 0057bf32
        ;   XREF to: 0057bf51 (CONDITIONAL_JUMP)  ; LAB_0057bf51
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057bf34
        ;   Label: LAB_0057bf34
    MOV AL,byte ptr [EAX]               ; 0057bf3b
    INC AL                              ; 0057bf3d
    AND EAX,0xff                        ; 0057bf3f
    TEST byte ptr [EAX + 0x626114],0x2  ; 0057bf44 | DAT_00626114
    JZ 0x0057c148                       ; 0057bf4b
        ;   XREF to: 0057c148 (CONDITIONAL_JUMP)  ; LAB_0057c148
    MOV DL,0x2e                         ; 0057bf51
        ;   Label: LAB_0057bf51
    MOV byte ptr [ESI],0x0              ; 0057bf53
    LEA ESI,[ESP + 0x8]                 ; 0057bf56
    MOV AL,byte ptr [ESI]               ; 0057bf5a
        ;   Label: LAB_0057bf5a
    CMP AL,DL                           ; 0057bf5c
    JZ 0x0057bf72                       ; 0057bf5e
        ;   XREF to: 0057bf72 (CONDITIONAL_JUMP)  ; LAB_0057bf72
    CMP AL,0x0                          ; 0057bf60
    JZ 0x0057bf70                       ; 0057bf62
        ;   XREF to: 0057bf70 (CONDITIONAL_JUMP)  ; LAB_0057bf70
    INC ESI                             ; 0057bf64
    MOV AL,byte ptr [ESI]               ; 0057bf65
    CMP AL,DL                           ; 0057bf67
    JZ 0x0057bf72                       ; 0057bf69
        ;   XREF to: 0057bf72 (CONDITIONAL_JUMP)  ; LAB_0057bf72
    INC ESI                             ; 0057bf6b
    CMP AL,0x0                          ; 0057bf6c
    JNZ 0x0057bf5a                      ; 0057bf6e
        ;   XREF to: 0057bf5a (CONDITIONAL_JUMP)  ; LAB_0057bf5a
    SUB ESI,ESI                         ; 0057bf70
        ;   Label: LAB_0057bf70
    TEST ESI,ESI                        ; 0057bf72
        ;   Label: LAB_0057bf72
    JNZ 0x0057bfa1                      ; 0057bf74
        ;   XREF to: 0057bfa1 (CONDITIONAL_JUMP)  ; LAB_0057bfa1
    MOV ESI,0x5f5979                    ; 0057bf76 | DAT_005f5979
    LEA EDI,[ESP + 0x8]                 ; 0057bf7b
    PUSH EDI                            ; 0057bf7f
    SUB ECX,ECX                         ; 0057bf80
    DEC ECX                             ; 0057bf82
    MOV AL,0x0                          ; 0057bf83
    SCASB.REPNE ES:EDI                  ; 0057bf85
    DEC EDI                             ; 0057bf87
    MOV AL,byte ptr [ESI]               ; 0057bf88 | DAT_005f5979 | DAT_005f597b
        ;   Label: LAB_0057bf88
    MOV byte ptr [EDI],AL               ; 0057bf8a
    CMP AL,0x0                          ; 0057bf8c
    JZ 0x0057bfa0                       ; 0057bf8e
        ;   XREF to: 0057bfa0 (CONDITIONAL_JUMP)  ; LAB_0057bfa0
    MOV AL,byte ptr [ESI + 0x1]         ; 0057bf90 | DAT_005f597a | DAT_005f597c
    ADD ESI,0x2                         ; 0057bf93
    MOV byte ptr [EDI + 0x1],AL         ; 0057bf96
    ADD EDI,0x2                         ; 0057bf99
    CMP AL,0x0                          ; 0057bf9c
    JNZ 0x0057bf88                      ; 0057bf9e
        ;   XREF to: 0057bf88 (CONDITIONAL_JUMP)  ; LAB_0057bf88
    POP EDI                             ; 0057bfa0
        ;   Label: LAB_0057bfa0
    MOV ECX,0x19                        ; 0057bfa1
        ;   Label: LAB_0057bfa1
    LEA EDI,[ESP + 0xd0]                ; 0057bfa6
    MOV ESI,0x623870                    ; 0057bfad | DAT_00623870
    MOVSD.REP ES:EDI,ESI                ; 0057bfb2 | DAT_00623870 | DAT_00623874
    MOV DL,0x21                         ; 0057bfb4
    LEA ESI,[ESP + 0x8]                 ; 0057bfb6
    MOV AL,byte ptr [ESI]               ; 0057bfba
        ;   Label: LAB_0057bfba
    CMP AL,DL                           ; 0057bfbc
    JZ 0x0057bfd2                       ; 0057bfbe
        ;   XREF to: 0057bfd2 (CONDITIONAL_JUMP)  ; LAB_0057bfd2
    CMP AL,0x0                          ; 0057bfc0
    JZ 0x0057bfd0                       ; 0057bfc2
        ;   XREF to: 0057bfd0 (CONDITIONAL_JUMP)  ; LAB_0057bfd0
    INC ESI                             ; 0057bfc4
    MOV AL,byte ptr [ESI]               ; 0057bfc5
    CMP AL,DL                           ; 0057bfc7
    JZ 0x0057bfd2                       ; 0057bfc9
        ;   XREF to: 0057bfd2 (CONDITIONAL_JUMP)  ; LAB_0057bfd2
    INC ESI                             ; 0057bfcb
    CMP AL,0x0                          ; 0057bfcc
    JNZ 0x0057bfba                      ; 0057bfce
        ;   XREF to: 0057bfba (CONDITIONAL_JUMP)  ; LAB_0057bfba
    SUB ESI,ESI                         ; 0057bfd0
        ;   Label: LAB_0057bfd0
    TEST ESI,ESI                        ; 0057bfd2
        ;   Label: LAB_0057bfd2
    JZ 0x0057c30d                       ; 0057bfd4
        ;   XREF to: 0057c30d (CONDITIONAL_JUMP)  ; LAB_0057c30d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057bfda
    MOV dword ptr [ESP + 0x134],EAX     ; 0057bfdd
    MOV EAX,dword ptr [EBP + 0x20]      ; 0057bfe4
    MOV dword ptr [ESP + 0x138],EAX     ; 0057bfe7
    MOV EAX,dword ptr [EBP + 0x24]      ; 0057bfee
    MOV EBX,dword ptr [EBP + 0x28]      ; 0057bff1
    MOV dword ptr [ESP + 0x13c],EAX     ; 0057bff4
    TEST EBX,EBX                        ; 0057bffb
    JNZ 0x0057c249                      ; 0057bffd
        ;   XREF to: 0057c249 (CONDITIONAL_JUMP)  ; LAB_0057c249
    LEA EAX,[ESP + 0x134]               ; 0057c003
        ;   Label: LAB_0057c003
    PUSH EAX                            ; 0057c00a
    MOV ESI,dword ptr [0x00622c18]      ; 0057c00b | g_CDemonSetPtr
    PUSH ESI                            ; 0057c011 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00554440      ; 0057c012
        ;   XREF to: 00554440 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00554440()
    ADD ESP,0x8                         ; 0057c017
    MOV dword ptr [ESP + 0x150],EAX     ; 0057c01a
    MOV dword ptr [ESP + 0x15c],EAX     ; 0057c021
    ADD EAX,0x5                         ; 0057c028
    MOV dword ptr [ESP + 0x160],EAX     ; 0057c02b
    MOV BH,0x21                         ; 0057c032
    MOV EDI,dword ptr [ESP + 0x15c]     ; 0057c034
        ;   Label: LAB_0057c034
    MOV EAX,dword ptr [ESP + 0x150]     ; 0057c03b
    XOR ESI,ESI                         ; 0057c042
    MOV dword ptr [ESP + 0x140],EAX     ; 0057c044
    TEST ESI,ESI                        ; 0057c04b
        ;   Label: LAB_0057c04b
    JNZ 0x0057c2aa                      ; 0057c04d
        ;   XREF to: 0057c2aa (CONDITIONAL_JUMP)  ; LAB_0057c2aa
    MOV ECX,EDI                         ; 0057c053
    TEST ECX,ECX                        ; 0057c055
        ;   Label: LAB_0057c055
    JL 0x0057c062                       ; 0057c057
        ;   XREF to: 0057c062 (CONDITIONAL_JUMP)  ; LAB_0057c062
    CMP ECX,0x5                         ; 0057c059
    JLE 0x0057c2b6                      ; 0057c05c
        ;   XREF to: 0057c2b6 (CONDITIONAL_JUMP)  ; LAB_0057c2b6
    INC ESI                             ; 0057c062
        ;   Label: LAB_0057c062
    CMP ESI,0x2                         ; 0057c063
    JL 0x0057c04b                       ; 0057c066
        ;   XREF to: 0057c04b (CONDITIONAL_JUMP)  ; LAB_0057c04b
    CMP byte ptr [ESP + 0xd0],0x0       ; 0057c068
        ;   Label: LAB_0057c068
    JZ 0x0057c278                       ; 0057c070
        ;   XREF to: 0057c278 (CONDITIONAL_JUMP)  ; LAB_0057c278
    CMP byte ptr [ESP + 0xd0],0x0       ; 0057c076
        ;   Label: LAB_0057c076
    JZ 0x0057c32e                       ; 0057c07e
        ;   XREF to: 0057c32e (CONDITIONAL_JUMP)  ; LAB_0057c32e
    MOV EDI,0x3f800000                  ; 0057c084
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057c089
    MOV dword ptr [ESP + 0x4],EDI       ; 0057c090
    MOV dword ptr [ESP],EDI             ; 0057c094
    CMP byte ptr [EAX],0x0              ; 0057c097
    JZ 0x0057c0d5                       ; 0057c09a
        ;   XREF to: 0057c0d5 (CONDITIONAL_JUMP)  ; LAB_0057c0d5
    MOV ESI,0xffffffff                  ; 0057c09c
    MOV EBX,0x2                         ; 0057c0a1
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057c0a6
        ;   Label: LAB_0057c0a6
    MOV AL,byte ptr [EAX]               ; 0057c0ad
    INC AL                              ; 0057c0af
    AND EAX,0xff                        ; 0057c0b1
    TEST byte ptr [EAX + 0x626114],BL   ; 0057c0b6 | DAT_00626114
    JZ 0x0057c350                       ; 0057c0bc
        ;   XREF to: 0057c350 (CONDITIONAL_JUMP)  ; LAB_0057c350
    INC dword ptr [ESP + 0x164]         ; 0057c0c2
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057c0c9
        ;   Label: LAB_0057c0c9
    CMP byte ptr [EAX],0x0              ; 0057c0d0
    JNZ 0x0057c0a6                      ; 0057c0d3
        ;   XREF to: 0057c0a6 (CONDITIONAL_JUMP)  ; LAB_0057c0a6
    MOV EBX,dword ptr [EBP + 0x28]      ; 0057c0d5
        ;   Label: LAB_0057c0d5
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0057c0d8
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    TEST EBX,EBX                        ; 0057c0dd
    JZ 0x0057c4ad                       ; 0057c0df
        ;   XREF to: 0057c4ad (CONDITIONAL_JUMP)  ; LAB_0057c4ad
    PUSH EBX                            ; 0057c0e5
    CALL sound_sndmain.cpp_FUN_005727e0 ; 0057c0e6
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0057c0eb
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0057c0ee
        ;   Label: LAB_0057c0ee
    PUSH EDI                            ; 0057c0f1
    CALL sound_sndmain.cpp_FUN_005729f0 ; 0057c0f2
        ;   XREF to: 005729f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005729f0(uint flags)
    ADD ESP,0x4                         ; 0057c0f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c0fa
    PUSH EAX                            ; 0057c0fd
    PUSH 0x0                            ; 0057c0fe
    CALL sound_sndmain.cpp_setNextSfxUserData_FUN_00572920 ; 0057c100
        ;   XREF to: 00572920 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxUserData_FUN_00572920(int index, void * userdata)
    ADD ESP,0x8                         ; 0057c105
    PUSH dword ptr [ESP]                ; 0057c108
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0057c10b
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0057c110
    PUSH dword ptr [ESP + 0x4]          ; 0057c113
    CALL sound_sndmain.cpp_FUN_00572900 ; 0057c117
        ;   XREF to: 00572900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572900(float base_frequency)
    ADD ESP,0x4                         ; 0057c11c
    LEA EAX,[ESP + 0xd0]                ; 0057c11f
    PUSH EAX                            ; 0057c126
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057c127
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057c12c
    MOV ESI,EAX                         ; 0057c12f
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0057c131
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EAX,ESI                         ; 0057c136
    MOV ESP,EBP                         ; 0057c138
        ;   Label: LAB_0057c138
    POP EBP                             ; 0057c13a
    POP EDI                             ; 0057c13b
    POP ESI                             ; 0057c13c
    POP EBX                             ; 0057c13d
    RET                                 ; 0057c13e
    XOR EAX,EAX                         ; 0057c13f
        ;   Label: LAB_0057c13f
    MOV ESP,EBP                         ; 0057c141
    POP EBP                             ; 0057c143
    POP EDI                             ; 0057c144
    POP ESI                             ; 0057c145
    POP EBX                             ; 0057c146
    RET                                 ; 0057c147
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057c148
        ;   Label: LAB_0057c148
    MOV BH,byte ptr [EAX]               ; 0057c14f
    CMP BH,0x40                         ; 0057c151
    JZ 0x0057bf51                       ; 0057c154
        ;   XREF to: 0057bf51 (CONDITIONAL_JUMP)  ; LAB_0057bf51
    CMP BH,0x2a                         ; 0057c15a
    JZ 0x0057bf51                       ; 0057c15d
        ;   XREF to: 0057bf51 (CONDITIONAL_JUMP)  ; LAB_0057bf51
    CMP BH,0x5b                         ; 0057c163
    JNZ 0x0057c239                      ; 0057c166
        ;   XREF to: 0057c239 (CONDITIONAL_JUMP)  ; LAB_0057c239
    LEA EAX,[ESP + 0x144]               ; 0057c16c
    PUSH EAX                            ; 0057c173
    LEA EAX,[ESP + 0x150]               ; 0057c174
    PUSH EAX                            ; 0057c17b
    LEA EAX,[ESP + 0x150]               ; 0057c17c
    PUSH EAX                            ; 0057c183
    PUSH 0x5f5942                       ; 0057c184 | = "[%d,%d]%n"
    MOV EDI,dword ptr [ESP + 0x174]     ; 0057c189
    MOV EBX,0xffffffff                  ; 0057c190
    PUSH EDI                            ; 0057c195
    MOV dword ptr [ESP + 0x158],EBX     ; 0057c196
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0057c19d
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0057c1a2
    CMP dword ptr [ESP + 0x144],0x5     ; 0057c1a5
    JGE 0x0057c223                      ; 0057c1ad
        ;   XREF to: 0057c223 (CONDITIONAL_JUMP)  ; LAB_0057c223
    MOV EDI,dword ptr [EBP + 0x18]      ; 0057c1af
        ;   Label: LAB_0057c1af
    PUSH EDI                            ; 0057c1b2
    MOV ECX,0x5f594c                    ; 0057c1b3 | = "..\\core\\sound.cpp"
    MOV EBX,0x137                       ; 0057c1b8
    PUSH 0x5f595e                       ; 0057c1bd | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0057c1c2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0057c1c8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057c1ce
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0057c1d3
    PUSH 0x5f5975                       ; 0057c1d6 | DAT_005f5975
        ;   Label: LAB_0057c1d6
    PUSH ESI                            ; 0057c1db
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057c1dc
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057c1e1
    ADD ESI,EAX                         ; 0057c1e4
    CMP dword ptr [ESP + 0x14c],0x9     ; 0057c1e6
    JLE 0x0057c200                      ; 0057c1ee
        ;   XREF to: 0057c200 (CONDITIONAL_JUMP)  ; LAB_0057c200
    PUSH 0x5f5977                       ; 0057c1f0 | DAT_005f5977
    PUSH ESI                            ; 0057c1f5
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057c1f6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057c1fb
    ADD ESI,EAX                         ; 0057c1fe
    MOV EAX,dword ptr [ESP + 0x144]     ; 0057c200
        ;   Label: LAB_0057c200
    ADD dword ptr [ESP + 0x164],EAX     ; 0057c207
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057c20e
        ;   Label: LAB_0057c20e
    CMP byte ptr [EAX],0x0              ; 0057c215
    JNZ 0x0057bf34                      ; 0057c218
        ;   XREF to: 0057bf34 (CONDITIONAL_JUMP)  ; LAB_0057bf34
    JMP 0x0057bf51                      ; 0057c21e
        ;   XREF to: 0057bf51 (UNCONDITIONAL_JUMP)  ; LAB_0057bf51
    MOV EAX,dword ptr [ESP + 0x148]     ; 0057c223
        ;   Label: LAB_0057c223
    CMP EAX,dword ptr [ESP + 0x14c]     ; 0057c22a
    JG 0x0057c1af                       ; 0057c231
        ;   XREF to: 0057c1af (CONDITIONAL_JUMP)  ; LAB_0057c1af
    JMP 0x0057c1d6                      ; 0057c237
        ;   XREF to: 0057c1d6 (UNCONDITIONAL_JUMP)  ; LAB_0057c1d6
    INC ESI                             ; 0057c239
        ;   Label: LAB_0057c239
    LEA ECX,[EAX + 0x1]                 ; 0057c23a
    MOV byte ptr [ESI + -0x1],BH        ; 0057c23d
    MOV dword ptr [ESP + 0x164],ECX     ; 0057c240
    JMP 0x0057c20e                      ; 0057c247
        ;   XREF to: 0057c20e (UNCONDITIONAL_JUMP)  ; LAB_0057c20e
    FLD float ptr [EBP + 0x1c]          ; 0057c249
        ;   Label: LAB_0057c249
    FADD float ptr [EBX]                ; 0057c24c
    FLD float ptr [EBP + 0x20]          ; 0057c24e
    FXCH                                ; 0057c251
    FSTP float ptr [ESP + 0x134]        ; 0057c253
    FADD float ptr [EBX + 0x4]          ; 0057c25a
    FLD float ptr [EBP + 0x24]          ; 0057c25d
    FXCH                                ; 0057c260
    FSTP float ptr [ESP + 0x138]        ; 0057c262
    FADD float ptr [EBX + 0x8]          ; 0057c269
    FSTP float ptr [ESP + 0x13c]        ; 0057c26c
    JMP 0x0057c003                      ; 0057c273
        ;   XREF to: 0057c003 (UNCONDITIONAL_JUMP)  ; LAB_0057c003
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0057c278
        ;   Label: LAB_0057c278
    MOV EDX,dword ptr [ESP + 0x150]     ; 0057c27f
    MOV ESI,dword ptr [ESP + 0x160]     ; 0057c286
    INC ECX                             ; 0057c28d
    DEC EDX                             ; 0057c28e
    MOV dword ptr [ESP + 0x15c],ECX     ; 0057c28f
    MOV dword ptr [ESP + 0x150],EDX     ; 0057c296
    CMP ECX,ESI                         ; 0057c29d
    JL 0x0057c034                       ; 0057c29f
        ;   XREF to: 0057c034 (CONDITIONAL_JUMP)  ; LAB_0057c034
    JMP 0x0057c076                      ; 0057c2a5
        ;   XREF to: 0057c076 (UNCONDITIONAL_JUMP)  ; LAB_0057c076
    MOV ECX,dword ptr [ESP + 0x140]     ; 0057c2aa
        ;   Label: LAB_0057c2aa
    JMP 0x0057c055                      ; 0057c2b1
        ;   XREF to: 0057c055 (UNCONDITIONAL_JUMP)  ; LAB_0057c055
    LEA EAX,[ESP + 0x8]                 ; 0057c2b6
        ;   Label: LAB_0057c2b6
    MOV BL,byte ptr [ESP + 0x8]         ; 0057c2ba
    LEA EDX,[ESP + 0x6c]                ; 0057c2be
    TEST BL,BL                          ; 0057c2c2
    JZ 0x0057c2dc                       ; 0057c2c4
        ;   XREF to: 0057c2dc (CONDITIONAL_JUMP)  ; LAB_0057c2dc
    MOV BL,byte ptr [EAX]               ; 0057c2c6
        ;   Label: LAB_0057c2c6
    CMP BH,BL                           ; 0057c2c8
    JNZ 0x0057c2d1                      ; 0057c2ca
        ;   XREF to: 0057c2d1 (CONDITIONAL_JUMP)  ; LAB_0057c2d1
    MOV BL,CL                           ; 0057c2cc
    ADD BL,0x30                         ; 0057c2ce
    MOV byte ptr [EDX],BL               ; 0057c2d1
        ;   Label: LAB_0057c2d1
    INC EDX                             ; 0057c2d3
    MOV BL,byte ptr [EAX + 0x1]         ; 0057c2d4
    INC EAX                             ; 0057c2d7
    TEST BL,BL                          ; 0057c2d8
    JNZ 0x0057c2c6                      ; 0057c2da
        ;   XREF to: 0057c2c6 (CONDITIONAL_JUMP)  ; LAB_0057c2c6
    LEA EAX,[ESP + 0x6c]                ; 0057c2dc
        ;   Label: LAB_0057c2dc
    PUSH EAX                            ; 0057c2e0
    LEA EAX,[ESP + 0xd4]                ; 0057c2e1
    PUSH EAX                            ; 0057c2e8
    MOV EAX,[0x006236b8]                ; 0057c2e9 | DAT_006236b8
    PUSH EAX                            ; 0057c2ee
    MOV byte ptr [EDX],0x0              ; 0057c2ef
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00 ; 0057c2f2
        ;   XREF to: 0057be00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0057c2f7
    CMP byte ptr [ESP + 0xd0],0x0       ; 0057c2fa
    JNZ 0x0057c068                      ; 0057c302
        ;   XREF to: 0057c068 (CONDITIONAL_JUMP)  ; LAB_0057c068
    JMP 0x0057c062                      ; 0057c308
        ;   XREF to: 0057c062 (UNCONDITIONAL_JUMP)  ; LAB_0057c062
    LEA EAX,[ESP + 0x8]                 ; 0057c30d
        ;   Label: LAB_0057c30d
    PUSH EAX                            ; 0057c311
    LEA EAX,[ESP + 0xd4]                ; 0057c312
    PUSH EAX                            ; 0057c319
    MOV ECX,dword ptr [0x006236b8]      ; 0057c31a | DAT_006236b8
    PUSH ECX                            ; 0057c320
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00 ; 0057c321
        ;   XREF to: 0057be00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0057c326
    JMP 0x0057c076                      ; 0057c329
        ;   XREF to: 0057c076 (UNCONDITIONAL_JUMP)  ; LAB_0057c076
    LEA EAX,[ESP + 0x8]                 ; 0057c32e
        ;   Label: LAB_0057c32e
    PUSH EAX                            ; 0057c332
    PUSH 0x5f597e                       ; 0057c333 | = "Can't find wav: %s\n"
    MOV EDX,dword ptr [0x00611100]      ; 0057c338 | g_CConsolePtr
    PUSH EDX                            ; 0057c33e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0057c33f
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0057c344
    XOR EAX,EAX                         ; 0057c347
    MOV ESP,EBP                         ; 0057c349
    POP EBP                             ; 0057c34b
    POP EDI                             ; 0057c34c
    POP ESI                             ; 0057c34d
    POP EBX                             ; 0057c34e
    RET                                 ; 0057c34f
    MOV EAX,dword ptr [ESP + 0x164]     ; 0057c350
        ;   Label: LAB_0057c350
    MOV CL,byte ptr [EAX]               ; 0057c357
    CMP CL,0x40                         ; 0057c359
    JNZ 0x0057c3ed                      ; 0057c35c
        ;   XREF to: 0057c3ed (CONDITIONAL_JUMP)  ; LAB_0057c3ed
    LEA EAX,[ESP + 0x154]               ; 0057c362
    PUSH EAX                            ; 0057c369
    LEA EAX,[ESP + 0x4]                 ; 0057c36a
    PUSH EAX                            ; 0057c36e
    PUSH 0x5f5992                       ; 0057c36f | = "@%f%n"
    MOV EDI,dword ptr [ESP + 0x170]     ; 0057c374
    PUSH EDI                            ; 0057c37b
    MOV dword ptr [ESP + 0x164],ESI     ; 0057c37c
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0057c383
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0057c388
    CMP EBX,dword ptr [ESP + 0x154]     ; 0057c38b
    JLE 0x0057c3ce                      ; 0057c392
        ;   XREF to: 0057c3ce (CONDITIONAL_JUMP)  ; LAB_0057c3ce
    MOV EDI,dword ptr [EBP + 0x18]      ; 0057c394
        ;   Label: LAB_0057c394
    PUSH EDI                            ; 0057c397
    MOV EDX,0x5f5998                    ; 0057c398 | = "..\\core\\sound.cpp"
    MOV ECX,0x1a4                       ; 0057c39d
    PUSH 0x5f59aa                       ; 0057c3a2 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0057c3a7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0057c3ad | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057c3b3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0057c3b8
    MOV EAX,dword ptr [ESP + 0x154]     ; 0057c3bb
    ADD dword ptr [ESP + 0x164],EAX     ; 0057c3c2
    JMP 0x0057c0c9                      ; 0057c3c9
        ;   XREF to: 0057c0c9 (UNCONDITIONAL_JUMP)  ; LAB_0057c0c9
    FLD float ptr [ESP]                 ; 0057c3ce
        ;   Label: LAB_0057c3ce
    FLDZ                                ; 0057c3d1
    FCOMPP                              ; 0057c3d3
    FNSTSW AX                           ; 0057c3d5
    SAHF                                ; 0057c3d7
    JA 0x0057c394                       ; 0057c3d8
        ;   XREF to: 0057c394 (CONDITIONAL_JUMP)  ; LAB_0057c394
    MOV EAX,dword ptr [ESP + 0x154]     ; 0057c3da
    ADD dword ptr [ESP + 0x164],EAX     ; 0057c3e1
    JMP 0x0057c0c9                      ; 0057c3e8
        ;   XREF to: 0057c0c9 (UNCONDITIONAL_JUMP)  ; LAB_0057c0c9
    CMP CL,0x2a                         ; 0057c3ed
        ;   Label: LAB_0057c3ed
    JNZ 0x0057c481                      ; 0057c3f0
        ;   XREF to: 0057c481 (CONDITIONAL_JUMP)  ; LAB_0057c481
    LEA EAX,[ESP + 0x158]               ; 0057c3f6
    PUSH EAX                            ; 0057c3fd
    LEA EAX,[ESP + 0x8]                 ; 0057c3fe
    PUSH EAX                            ; 0057c402
    PUSH 0x5f59c1                       ; 0057c403 | = "*%f%n"
    MOV EDX,dword ptr [ESP + 0x170]     ; 0057c408
    PUSH EDX                            ; 0057c40f
    MOV dword ptr [ESP + 0x168],ESI     ; 0057c410
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0057c417
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0057c41c
    CMP EBX,dword ptr [ESP + 0x158]     ; 0057c41f
    JLE 0x0057c461                      ; 0057c426
        ;   XREF to: 0057c461 (CONDITIONAL_JUMP)  ; LAB_0057c461
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057c428
        ;   Label: LAB_0057c428
    PUSH EDX                            ; 0057c42b
    MOV EDI,0x5f59c7                    ; 0057c42c | = "..\\core\\sound.cpp"
    MOV EAX,0x1aa                       ; 0057c431
    PUSH 0x5f59d9                       ; 0057c436 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d1d400],EDI      ; 0057c43b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0057c441 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057c446
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0057c44b
    MOV EAX,dword ptr [ESP + 0x158]     ; 0057c44e
    ADD dword ptr [ESP + 0x164],EAX     ; 0057c455
    JMP 0x0057c0c9                      ; 0057c45c
        ;   XREF to: 0057c0c9 (UNCONDITIONAL_JUMP)  ; LAB_0057c0c9
    FLD float ptr [ESP + 0x4]           ; 0057c461
        ;   Label: LAB_0057c461
    FLDZ                                ; 0057c465
    FCOMPP                              ; 0057c467
    FNSTSW AX                           ; 0057c469
    SAHF                                ; 0057c46b
    JNC 0x0057c428                      ; 0057c46c
        ;   XREF to: 0057c428 (CONDITIONAL_JUMP)  ; LAB_0057c428
    MOV EAX,dword ptr [ESP + 0x158]     ; 0057c46e
    ADD dword ptr [ESP + 0x164],EAX     ; 0057c475
    JMP 0x0057c0c9                      ; 0057c47c
        ;   XREF to: 0057c0c9 (UNCONDITIONAL_JUMP)  ; LAB_0057c0c9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057c481
        ;   Label: LAB_0057c481
    PUSH EAX                            ; 0057c484
    MOV ECX,0x5f59f0                    ; 0057c485 | = "..\\core\\sound.cpp"
    MOV EDI,0x1ad                       ; 0057c48a
    PUSH 0x5f5a02                       ; 0057c48f | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0057c494 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0057c49a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057c4a0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0057c4a5
    JMP 0x0057c0c9                      ; 0057c4a8
        ;   XREF to: 0057c0c9 (UNCONDITIONAL_JUMP)  ; LAB_0057c0c9
    FLD float ptr [EBP + 0x24]          ; 0057c4ad
        ;   Label: LAB_0057c4ad
    SUB ESP,0x8                         ; 0057c4b0
    FSTP double ptr [ESP]               ; 0057c4b3
    FLD float ptr [EBP + 0x20]          ; 0057c4b6
    SUB ESP,0x8                         ; 0057c4b9
    FSTP double ptr [ESP]               ; 0057c4bc
    FLD float ptr [EBP + 0x1c]          ; 0057c4bf
    SUB ESP,0x8                         ; 0057c4c2
    FSTP double ptr [ESP]               ; 0057c4c5
    CALL sound_sndmain.cpp_FUN_00572780 ; 0057c4c8
        ;   XREF to: 00572780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572780(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 0057c4cd
    JMP 0x0057c0ee                      ; 0057c4d0
        ;   XREF to: 0057c0ee (UNCONDITIONAL_JUMP)  ; LAB_0057c0ee

