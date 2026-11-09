; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_FUN_0055f020(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)
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
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0 at 005609ea
;   core_sound.cpp_CSound_playSound_FUN_005609b0 at 005609c4
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0 at 00560ad9
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 at 00560a18
;   core_sound.cpp_FUN_00560a70 at 00560a9c
;
; Referenced Globals:
;   TerminatedCString s_d_d_n_005d519b
;   TerminatedCString s_core_sound_cpp_005d51a5
;   TerminatedCString s_Invalid_sfx_string_s_005d51b7
;   undefined4 DAT_005d51ce
;   undefined4 DAT_005d51d0
;   undefined1 DAT_005d51d2
;   undefined1 DAT_005d51d3
;   undefined1 DAT_005d51d4
;   undefined1 DAT_005d51d5
;   TerminatedCString s_Can_t_find_wav_s_005d51d7
;   TerminatedCString s_f_n_005d51eb
;   TerminatedCString s_core_sound_cpp_005d51f1
;   TerminatedCString s_Invalid_sfx_string_s_005d5203
;   TerminatedCString s_f_n_005d521a
;   TerminatedCString s_core_sound_cpp_005d5220
;   ... and 13 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_set.cpp_FUN_00539dd0
;   core_sound.cpp_FUN_0055ef30
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_FUN_005a28c0
;   engine_console.cpp_FUN_00441ff0
;   sound_sndmain.cpp_FUN_00555c90
;   sound_sndmain.cpp_FUN_00555cf0
;   sound_sndmain.cpp_FUN_00555df0
;   sound_sndmain.cpp_FUN_00555e10
;   sound_sndmain.cpp_FUN_00555e30
;   sound_sndmain.cpp_FUN_00555f00
;   sound_sndmain.cpp_FUN_00555fd0
;   sound_sndmain.cpp_FUN_00556050
;   sound_sndmain.cpp_FUN_00556240
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f020
        ;   Label: core_sound.cpp_FUN_0055f020
    PUSH ESI                            ; 0055f021
    PUSH EDI                            ; 0055f022
    PUSH EBP                            ; 0055f023
    MOV EBP,ESP                         ; 0055f024
    SUB ESP,0x168                       ; 0055f026
    AND ESP,0xfffffff8                  ; 0055f02c
    CALL sound_sndmain.cpp_FUN_00556750 ; 0055f02f
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556750()
    TEST EAX,EAX                        ; 0055f034
    JNZ 0x0055f26f                      ; 0055f036
        ;   XREF to: 0055f26f (CONDITIONAL_JUMP)  ; LAB_0055f26f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0055f03c
    TEST EDX,EDX                        ; 0055f03f
    JZ 0x0055f268                       ; 0055f041
        ;   XREF to: 0055f268 (CONDITIONAL_JUMP)  ; LAB_0055f268
    CMP byte ptr [EDX],0x0              ; 0055f047
    JZ 0x0055f268                       ; 0055f04a
        ;   XREF to: 0055f268 (CONDITIONAL_JUMP)  ; LAB_0055f268
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055f050
    LEA ESI,[ESP + 0x8]                 ; 0055f053
    MOV DH,byte ptr [EAX]               ; 0055f057
    MOV dword ptr [ESP + 0x164],EAX     ; 0055f059
    TEST DH,DH                          ; 0055f060
    JZ 0x0055f081                       ; 0055f062
        ;   XREF to: 0055f081 (CONDITIONAL_JUMP)  ; LAB_0055f081
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f064
        ;   Label: LAB_0055f064
    MOV AL,byte ptr [EAX]               ; 0055f06b
    INC AL                              ; 0055f06d
    AND EAX,0xff                        ; 0055f06f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0055f074 | DAT_006074b8
    JZ 0x0055f278                       ; 0055f07b
        ;   XREF to: 0055f278 (CONDITIONAL_JUMP)  ; LAB_0055f278
    MOV DL,0x2e                         ; 0055f081
        ;   Label: LAB_0055f081
    MOV byte ptr [ESI],0x0              ; 0055f083
    LEA ESI,[ESP + 0x8]                 ; 0055f086
    MOV AL,byte ptr [ESI]               ; 0055f08a
        ;   Label: LAB_0055f08a
    CMP AL,DL                           ; 0055f08c
    JZ 0x0055f0a2                       ; 0055f08e
        ;   XREF to: 0055f0a2 (CONDITIONAL_JUMP)  ; LAB_0055f0a2
    CMP AL,0x0                          ; 0055f090
    JZ 0x0055f0a0                       ; 0055f092
        ;   XREF to: 0055f0a0 (CONDITIONAL_JUMP)  ; LAB_0055f0a0
    INC ESI                             ; 0055f094
    MOV AL,byte ptr [ESI]               ; 0055f095
    CMP AL,DL                           ; 0055f097
    JZ 0x0055f0a2                       ; 0055f099
        ;   XREF to: 0055f0a2 (CONDITIONAL_JUMP)  ; LAB_0055f0a2
    INC ESI                             ; 0055f09b
    CMP AL,0x0                          ; 0055f09c
    JNZ 0x0055f08a                      ; 0055f09e
        ;   XREF to: 0055f08a (CONDITIONAL_JUMP)  ; LAB_0055f08a
    SUB ESI,ESI                         ; 0055f0a0
        ;   Label: LAB_0055f0a0
    TEST ESI,ESI                        ; 0055f0a2
        ;   Label: LAB_0055f0a2
    JNZ 0x0055f0d1                      ; 0055f0a4
        ;   XREF to: 0055f0d1 (CONDITIONAL_JUMP)  ; LAB_0055f0d1
    MOV ESI,0x5d51d2                    ; 0055f0a6 | DAT_005d51d2
    LEA EDI,[ESP + 0x8]                 ; 0055f0ab
    PUSH EDI                            ; 0055f0af
    SUB ECX,ECX                         ; 0055f0b0
    DEC ECX                             ; 0055f0b2
    MOV AL,0x0                          ; 0055f0b3
    SCASB.REPNE ES:EDI                  ; 0055f0b5
    DEC EDI                             ; 0055f0b7
    MOV AL,byte ptr [ESI]               ; 0055f0b8 | DAT_005d51d2 | DAT_005d51d4
        ;   Label: LAB_0055f0b8
    MOV byte ptr [EDI],AL               ; 0055f0ba
    CMP AL,0x0                          ; 0055f0bc
    JZ 0x0055f0d0                       ; 0055f0be
        ;   XREF to: 0055f0d0 (CONDITIONAL_JUMP)  ; LAB_0055f0d0
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f0c0 | DAT_005d51d3 | DAT_005d51d5
    ADD ESI,0x2                         ; 0055f0c3
    MOV byte ptr [EDI + 0x1],AL         ; 0055f0c6
    ADD EDI,0x2                         ; 0055f0c9
    CMP AL,0x0                          ; 0055f0cc
    JNZ 0x0055f0b8                      ; 0055f0ce
        ;   XREF to: 0055f0b8 (CONDITIONAL_JUMP)  ; LAB_0055f0b8
    POP EDI                             ; 0055f0d0
        ;   Label: LAB_0055f0d0
    MOV ECX,0x19                        ; 0055f0d1
        ;   Label: LAB_0055f0d1
    LEA EDI,[ESP + 0xd0]                ; 0055f0d6
    MOV ESI,0x6047b0                    ; 0055f0dd | DAT_006047b0
    MOVSD.REP ES:EDI,ESI                ; 0055f0e2 | DAT_006047b0 | DAT_006047b4
    MOV DL,0x21                         ; 0055f0e4
    LEA ESI,[ESP + 0x8]                 ; 0055f0e6
    MOV AL,byte ptr [ESI]               ; 0055f0ea
        ;   Label: LAB_0055f0ea
    CMP AL,DL                           ; 0055f0ec
    JZ 0x0055f102                       ; 0055f0ee
        ;   XREF to: 0055f102 (CONDITIONAL_JUMP)  ; LAB_0055f102
    CMP AL,0x0                          ; 0055f0f0
    JZ 0x0055f100                       ; 0055f0f2
        ;   XREF to: 0055f100 (CONDITIONAL_JUMP)  ; LAB_0055f100
    INC ESI                             ; 0055f0f4
    MOV AL,byte ptr [ESI]               ; 0055f0f5
    CMP AL,DL                           ; 0055f0f7
    JZ 0x0055f102                       ; 0055f0f9
        ;   XREF to: 0055f102 (CONDITIONAL_JUMP)  ; LAB_0055f102
    INC ESI                             ; 0055f0fb
    CMP AL,0x0                          ; 0055f0fc
    JNZ 0x0055f0ea                      ; 0055f0fe
        ;   XREF to: 0055f0ea (CONDITIONAL_JUMP)  ; LAB_0055f0ea
    SUB ESI,ESI                         ; 0055f100
        ;   Label: LAB_0055f100
    TEST ESI,ESI                        ; 0055f102
        ;   Label: LAB_0055f102
    JZ 0x0055f43d                       ; 0055f104
        ;   XREF to: 0055f43d (CONDITIONAL_JUMP)  ; LAB_0055f43d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055f10a
    MOV dword ptr [ESP + 0x134],EAX     ; 0055f10d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055f114
    MOV dword ptr [ESP + 0x138],EAX     ; 0055f117
    MOV EAX,dword ptr [EBP + 0x24]      ; 0055f11e
    MOV EBX,dword ptr [EBP + 0x28]      ; 0055f121
    MOV dword ptr [ESP + 0x13c],EAX     ; 0055f124
    TEST EBX,EBX                        ; 0055f12b
    JNZ 0x0055f379                      ; 0055f12d
        ;   XREF to: 0055f379 (CONDITIONAL_JUMP)  ; LAB_0055f379
    LEA EAX,[ESP + 0x134]               ; 0055f133
        ;   Label: LAB_0055f133
    PUSH EAX                            ; 0055f13a
    MOV ESI,dword ptr [0x00603b28]      ; 0055f13b | g_CDemonSetPtr
    PUSH ESI                            ; 0055f141 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00539dd0      ; 0055f142
        ;   XREF to: 00539dd0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00539dd0()
    ADD ESP,0x8                         ; 0055f147
    MOV dword ptr [ESP + 0x150],EAX     ; 0055f14a
    MOV dword ptr [ESP + 0x15c],EAX     ; 0055f151
    ADD EAX,0x5                         ; 0055f158
    MOV dword ptr [ESP + 0x160],EAX     ; 0055f15b
    MOV BH,0x21                         ; 0055f162
    MOV EDI,dword ptr [ESP + 0x15c]     ; 0055f164
        ;   Label: LAB_0055f164
    MOV EAX,dword ptr [ESP + 0x150]     ; 0055f16b
    XOR ESI,ESI                         ; 0055f172
    MOV dword ptr [ESP + 0x140],EAX     ; 0055f174
    TEST ESI,ESI                        ; 0055f17b
        ;   Label: LAB_0055f17b
    JNZ 0x0055f3da                      ; 0055f17d
        ;   XREF to: 0055f3da (CONDITIONAL_JUMP)  ; LAB_0055f3da
    MOV ECX,EDI                         ; 0055f183
    TEST ECX,ECX                        ; 0055f185
        ;   Label: LAB_0055f185
    JL 0x0055f192                       ; 0055f187
        ;   XREF to: 0055f192 (CONDITIONAL_JUMP)  ; LAB_0055f192
    CMP ECX,0x5                         ; 0055f189
    JLE 0x0055f3e6                      ; 0055f18c
        ;   XREF to: 0055f3e6 (CONDITIONAL_JUMP)  ; LAB_0055f3e6
    INC ESI                             ; 0055f192
        ;   Label: LAB_0055f192
    CMP ESI,0x2                         ; 0055f193
    JL 0x0055f17b                       ; 0055f196
        ;   XREF to: 0055f17b (CONDITIONAL_JUMP)  ; LAB_0055f17b
    CMP byte ptr [ESP + 0xd0],0x0       ; 0055f198
        ;   Label: LAB_0055f198
    JZ 0x0055f3a8                       ; 0055f1a0
        ;   XREF to: 0055f3a8 (CONDITIONAL_JUMP)  ; LAB_0055f3a8
    CMP byte ptr [ESP + 0xd0],0x0       ; 0055f1a6
        ;   Label: LAB_0055f1a6
    JZ 0x0055f45e                       ; 0055f1ae
        ;   XREF to: 0055f45e (CONDITIONAL_JUMP)  ; LAB_0055f45e
    MOV EDI,0x3f800000                  ; 0055f1b4
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f1b9
    MOV dword ptr [ESP + 0x4],EDI       ; 0055f1c0
    MOV dword ptr [ESP],EDI             ; 0055f1c4
    CMP byte ptr [EAX],0x0              ; 0055f1c7
    JZ 0x0055f205                       ; 0055f1ca
        ;   XREF to: 0055f205 (CONDITIONAL_JUMP)  ; LAB_0055f205
    MOV ESI,0xffffffff                  ; 0055f1cc
    MOV EBX,0x2                         ; 0055f1d1
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f1d6
        ;   Label: LAB_0055f1d6
    MOV AL,byte ptr [EAX]               ; 0055f1dd
    INC AL                              ; 0055f1df
    AND EAX,0xff                        ; 0055f1e1
    TEST byte ptr [EAX + 0x6074b8],BL   ; 0055f1e6 | DAT_006074b8
    JZ 0x0055f480                       ; 0055f1ec
        ;   XREF to: 0055f480 (CONDITIONAL_JUMP)  ; LAB_0055f480
    INC dword ptr [ESP + 0x164]         ; 0055f1f2
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f1f9
        ;   Label: LAB_0055f1f9
    CMP byte ptr [EAX],0x0              ; 0055f200
    JNZ 0x0055f1d6                      ; 0055f203
        ;   XREF to: 0055f1d6 (CONDITIONAL_JUMP)  ; LAB_0055f1d6
    MOV EBX,dword ptr [EBP + 0x28]      ; 0055f205
        ;   Label: LAB_0055f205
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 0055f208
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
    TEST EBX,EBX                        ; 0055f20d
    JZ 0x0055f5dd                       ; 0055f20f
        ;   XREF to: 0055f5dd (CONDITIONAL_JUMP)  ; LAB_0055f5dd
    PUSH EBX                            ; 0055f215
    CALL sound_sndmain.cpp_FUN_00555cf0 ; 0055f216
        ;   XREF to: 00555cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555cf0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0055f21b
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0055f21e
        ;   Label: LAB_0055f21e
    PUSH EDI                            ; 0055f221
    CALL sound_sndmain.cpp_FUN_00555f00 ; 0055f222
        ;   XREF to: 00555f00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555f00(uint flags)
    ADD ESP,0x4                         ; 0055f227
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055f22a
    PUSH EAX                            ; 0055f22d
    PUSH 0x0                            ; 0055f22e
    CALL sound_sndmain.cpp_FUN_00555e30 ; 0055f230
        ;   XREF to: 00555e30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555e30(int index, void * userdata)
    ADD ESP,0x8                         ; 0055f235
    PUSH dword ptr [ESP]                ; 0055f238
    CALL sound_sndmain.cpp_FUN_00555df0 ; 0055f23b
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
    ADD ESP,0x4                         ; 0055f240
    PUSH dword ptr [ESP + 0x4]          ; 0055f243
    CALL sound_sndmain.cpp_FUN_00555e10 ; 0055f247
        ;   XREF to: 00555e10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555e10(float base_frequency)
    ADD ESP,0x4                         ; 0055f24c
    LEA EAX,[ESP + 0xd0]                ; 0055f24f
    PUSH EAX                            ; 0055f256
    CALL sound_sndmain.cpp_FUN_00556240 ; 0055f257
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 0055f25c
    MOV ESI,EAX                         ; 0055f25f
    CALL sound_sndmain.cpp_FUN_00556050 ; 0055f261
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
    MOV EAX,ESI                         ; 0055f266
    MOV ESP,EBP                         ; 0055f268
        ;   Label: LAB_0055f268
    POP EBP                             ; 0055f26a
    POP EDI                             ; 0055f26b
    POP ESI                             ; 0055f26c
    POP EBX                             ; 0055f26d
    RET                                 ; 0055f26e
    XOR EAX,EAX                         ; 0055f26f
        ;   Label: LAB_0055f26f
    MOV ESP,EBP                         ; 0055f271
    POP EBP                             ; 0055f273
    POP EDI                             ; 0055f274
    POP ESI                             ; 0055f275
    POP EBX                             ; 0055f276
    RET                                 ; 0055f277
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f278
        ;   Label: LAB_0055f278
    MOV BH,byte ptr [EAX]               ; 0055f27f
    CMP BH,0x40                         ; 0055f281
    JZ 0x0055f081                       ; 0055f284
        ;   XREF to: 0055f081 (CONDITIONAL_JUMP)  ; LAB_0055f081
    CMP BH,0x2a                         ; 0055f28a
    JZ 0x0055f081                       ; 0055f28d
        ;   XREF to: 0055f081 (CONDITIONAL_JUMP)  ; LAB_0055f081
    CMP BH,0x5b                         ; 0055f293
    JNZ 0x0055f369                      ; 0055f296
        ;   XREF to: 0055f369 (CONDITIONAL_JUMP)  ; LAB_0055f369
    LEA EAX,[ESP + 0x144]               ; 0055f29c
    PUSH EAX                            ; 0055f2a3
    LEA EAX,[ESP + 0x150]               ; 0055f2a4
    PUSH EAX                            ; 0055f2ab
    LEA EAX,[ESP + 0x150]               ; 0055f2ac
    PUSH EAX                            ; 0055f2b3
    PUSH 0x5d519b                       ; 0055f2b4 | = "[%d,%d]%n"
    MOV EDI,dword ptr [ESP + 0x174]     ; 0055f2b9
    MOV EBX,0xffffffff                  ; 0055f2c0
    PUSH EDI                            ; 0055f2c5
    MOV dword ptr [ESP + 0x158],EBX     ; 0055f2c6
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0055f2cd
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0055f2d2
    CMP dword ptr [ESP + 0x144],0x5     ; 0055f2d5
    JGE 0x0055f353                      ; 0055f2dd
        ;   XREF to: 0055f353 (CONDITIONAL_JUMP)  ; LAB_0055f353
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055f2df
        ;   Label: LAB_0055f2df
    PUSH EDI                            ; 0055f2e2
    MOV ECX,0x5d51a5                    ; 0055f2e3 | = "..\\core\\sound.cpp"
    MOV EBX,0x137                       ; 0055f2e8
    PUSH 0x5d51b7                       ; 0055f2ed | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 0055f2f2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0055f2f8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055f2fe
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055f303
    PUSH 0x5d51ce                       ; 0055f306 | DAT_005d51ce
        ;   Label: LAB_0055f306
    PUSH ESI                            ; 0055f30b
    CALL crt_unknown.c_FUN_005a28c0     ; 0055f30c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0055f311
    ADD ESI,EAX                         ; 0055f314
    CMP dword ptr [ESP + 0x14c],0x9     ; 0055f316
    JLE 0x0055f330                      ; 0055f31e
        ;   XREF to: 0055f330 (CONDITIONAL_JUMP)  ; LAB_0055f330
    PUSH 0x5d51d0                       ; 0055f320 | DAT_005d51d0
    PUSH ESI                            ; 0055f325
    CALL crt_unknown.c_FUN_005a28c0     ; 0055f326
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0055f32b
    ADD ESI,EAX                         ; 0055f32e
    MOV EAX,dword ptr [ESP + 0x144]     ; 0055f330
        ;   Label: LAB_0055f330
    ADD dword ptr [ESP + 0x164],EAX     ; 0055f337
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f33e
        ;   Label: LAB_0055f33e
    CMP byte ptr [EAX],0x0              ; 0055f345
    JNZ 0x0055f064                      ; 0055f348
        ;   XREF to: 0055f064 (CONDITIONAL_JUMP)  ; LAB_0055f064
    JMP 0x0055f081                      ; 0055f34e
        ;   XREF to: 0055f081 (UNCONDITIONAL_JUMP)  ; LAB_0055f081
    MOV EAX,dword ptr [ESP + 0x148]     ; 0055f353
        ;   Label: LAB_0055f353
    CMP EAX,dword ptr [ESP + 0x14c]     ; 0055f35a
    JG 0x0055f2df                       ; 0055f361
        ;   XREF to: 0055f2df (CONDITIONAL_JUMP)  ; LAB_0055f2df
    JMP 0x0055f306                      ; 0055f367
        ;   XREF to: 0055f306 (UNCONDITIONAL_JUMP)  ; LAB_0055f306
    INC ESI                             ; 0055f369
        ;   Label: LAB_0055f369
    LEA ECX,[EAX + 0x1]                 ; 0055f36a
    MOV byte ptr [ESI + -0x1],BH        ; 0055f36d
    MOV dword ptr [ESP + 0x164],ECX     ; 0055f370
    JMP 0x0055f33e                      ; 0055f377
        ;   XREF to: 0055f33e (UNCONDITIONAL_JUMP)  ; LAB_0055f33e
    FLD float ptr [EBP + 0x1c]          ; 0055f379
        ;   Label: LAB_0055f379
    FADD float ptr [EBX]                ; 0055f37c
    FLD float ptr [EBP + 0x20]          ; 0055f37e
    FXCH                                ; 0055f381
    FSTP float ptr [ESP + 0x134]        ; 0055f383
    FADD float ptr [EBX + 0x4]          ; 0055f38a
    FLD float ptr [EBP + 0x24]          ; 0055f38d
    FXCH                                ; 0055f390
    FSTP float ptr [ESP + 0x138]        ; 0055f392
    FADD float ptr [EBX + 0x8]          ; 0055f399
    FSTP float ptr [ESP + 0x13c]        ; 0055f39c
    JMP 0x0055f133                      ; 0055f3a3
        ;   XREF to: 0055f133 (UNCONDITIONAL_JUMP)  ; LAB_0055f133
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0055f3a8
        ;   Label: LAB_0055f3a8
    MOV EDX,dword ptr [ESP + 0x150]     ; 0055f3af
    MOV ESI,dword ptr [ESP + 0x160]     ; 0055f3b6
    INC ECX                             ; 0055f3bd
    DEC EDX                             ; 0055f3be
    MOV dword ptr [ESP + 0x15c],ECX     ; 0055f3bf
    MOV dword ptr [ESP + 0x150],EDX     ; 0055f3c6
    CMP ECX,ESI                         ; 0055f3cd
    JL 0x0055f164                       ; 0055f3cf
        ;   XREF to: 0055f164 (CONDITIONAL_JUMP)  ; LAB_0055f164
    JMP 0x0055f1a6                      ; 0055f3d5
        ;   XREF to: 0055f1a6 (UNCONDITIONAL_JUMP)  ; LAB_0055f1a6
    MOV ECX,dword ptr [ESP + 0x140]     ; 0055f3da
        ;   Label: LAB_0055f3da
    JMP 0x0055f185                      ; 0055f3e1
        ;   XREF to: 0055f185 (UNCONDITIONAL_JUMP)  ; LAB_0055f185
    LEA EAX,[ESP + 0x8]                 ; 0055f3e6
        ;   Label: LAB_0055f3e6
    MOV BL,byte ptr [ESP + 0x8]         ; 0055f3ea
    LEA EDX,[ESP + 0x6c]                ; 0055f3ee
    TEST BL,BL                          ; 0055f3f2
    JZ 0x0055f40c                       ; 0055f3f4
        ;   XREF to: 0055f40c (CONDITIONAL_JUMP)  ; LAB_0055f40c
    MOV BL,byte ptr [EAX]               ; 0055f3f6
        ;   Label: LAB_0055f3f6
    CMP BH,BL                           ; 0055f3f8
    JNZ 0x0055f401                      ; 0055f3fa
        ;   XREF to: 0055f401 (CONDITIONAL_JUMP)  ; LAB_0055f401
    MOV BL,CL                           ; 0055f3fc
    ADD BL,0x30                         ; 0055f3fe
    MOV byte ptr [EDX],BL               ; 0055f401
        ;   Label: LAB_0055f401
    INC EDX                             ; 0055f403
    MOV BL,byte ptr [EAX + 0x1]         ; 0055f404
    INC EAX                             ; 0055f407
    TEST BL,BL                          ; 0055f408
    JNZ 0x0055f3f6                      ; 0055f40a
        ;   XREF to: 0055f3f6 (CONDITIONAL_JUMP)  ; LAB_0055f3f6
    LEA EAX,[ESP + 0x6c]                ; 0055f40c
        ;   Label: LAB_0055f40c
    PUSH EAX                            ; 0055f410
    LEA EAX,[ESP + 0xd4]                ; 0055f411
    PUSH EAX                            ; 0055f418
    MOV EAX,[0x006045f8]                ; 0055f419 | DAT_006045f8
    PUSH EAX                            ; 0055f41e
    MOV byte ptr [EDX],0x0              ; 0055f41f
    CALL core_sound.cpp_FUN_0055ef30    ; 0055f422
        ;   XREF to: 0055ef30 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ef30(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0055f427
    CMP byte ptr [ESP + 0xd0],0x0       ; 0055f42a
    JNZ 0x0055f198                      ; 0055f432
        ;   XREF to: 0055f198 (CONDITIONAL_JUMP)  ; LAB_0055f198
    JMP 0x0055f192                      ; 0055f438
        ;   XREF to: 0055f192 (UNCONDITIONAL_JUMP)  ; LAB_0055f192
    LEA EAX,[ESP + 0x8]                 ; 0055f43d
        ;   Label: LAB_0055f43d
    PUSH EAX                            ; 0055f441
    LEA EAX,[ESP + 0xd4]                ; 0055f442
    PUSH EAX                            ; 0055f449
    MOV ECX,dword ptr [0x006045f8]      ; 0055f44a | DAT_006045f8
    PUSH ECX                            ; 0055f450
    CALL core_sound.cpp_FUN_0055ef30    ; 0055f451
        ;   XREF to: 0055ef30 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ef30(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0055f456
    JMP 0x0055f1a6                      ; 0055f459
        ;   XREF to: 0055f1a6 (UNCONDITIONAL_JUMP)  ; LAB_0055f1a6
    LEA EAX,[ESP + 0x8]                 ; 0055f45e
        ;   Label: LAB_0055f45e
    PUSH EAX                            ; 0055f462
    PUSH 0x5d51d7                       ; 0055f463 | = "Can't find wav: %s\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0055f468 | g_CConsolePtr
    PUSH EDX                            ; 0055f46e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0055f46f
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0055f474
    XOR EAX,EAX                         ; 0055f477
    MOV ESP,EBP                         ; 0055f479
    POP EBP                             ; 0055f47b
    POP EDI                             ; 0055f47c
    POP ESI                             ; 0055f47d
    POP EBX                             ; 0055f47e
    RET                                 ; 0055f47f
    MOV EAX,dword ptr [ESP + 0x164]     ; 0055f480
        ;   Label: LAB_0055f480
    MOV CL,byte ptr [EAX]               ; 0055f487
    CMP CL,0x40                         ; 0055f489
    JNZ 0x0055f51d                      ; 0055f48c
        ;   XREF to: 0055f51d (CONDITIONAL_JUMP)  ; LAB_0055f51d
    LEA EAX,[ESP + 0x154]               ; 0055f492
    PUSH EAX                            ; 0055f499
    LEA EAX,[ESP + 0x4]                 ; 0055f49a
    PUSH EAX                            ; 0055f49e
    PUSH 0x5d51eb                       ; 0055f49f | = "@%f%n"
    MOV EDI,dword ptr [ESP + 0x170]     ; 0055f4a4
    PUSH EDI                            ; 0055f4ab
    MOV dword ptr [ESP + 0x164],ESI     ; 0055f4ac
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0055f4b3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f4b8
    CMP EBX,dword ptr [ESP + 0x154]     ; 0055f4bb
    JLE 0x0055f4fe                      ; 0055f4c2
        ;   XREF to: 0055f4fe (CONDITIONAL_JUMP)  ; LAB_0055f4fe
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055f4c4
        ;   Label: LAB_0055f4c4
    PUSH EDI                            ; 0055f4c7
    MOV EDX,0x5d51f1                    ; 0055f4c8 | = "..\\core\\sound.cpp"
    MOV ECX,0x1a4                       ; 0055f4cd
    PUSH 0x5d5203                       ; 0055f4d2 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0055f4d7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0055f4dd | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055f4e3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055f4e8
    MOV EAX,dword ptr [ESP + 0x154]     ; 0055f4eb
    ADD dword ptr [ESP + 0x164],EAX     ; 0055f4f2
    JMP 0x0055f1f9                      ; 0055f4f9
        ;   XREF to: 0055f1f9 (UNCONDITIONAL_JUMP)  ; LAB_0055f1f9
    FLD float ptr [ESP]                 ; 0055f4fe
        ;   Label: LAB_0055f4fe
    FLDZ                                ; 0055f501
    FCOMPP                              ; 0055f503
    FNSTSW AX                           ; 0055f505
    SAHF                                ; 0055f507
    JA 0x0055f4c4                       ; 0055f508
        ;   XREF to: 0055f4c4 (CONDITIONAL_JUMP)  ; LAB_0055f4c4
    MOV EAX,dword ptr [ESP + 0x154]     ; 0055f50a
    ADD dword ptr [ESP + 0x164],EAX     ; 0055f511
    JMP 0x0055f1f9                      ; 0055f518
        ;   XREF to: 0055f1f9 (UNCONDITIONAL_JUMP)  ; LAB_0055f1f9
    CMP CL,0x2a                         ; 0055f51d
        ;   Label: LAB_0055f51d
    JNZ 0x0055f5b1                      ; 0055f520
        ;   XREF to: 0055f5b1 (CONDITIONAL_JUMP)  ; LAB_0055f5b1
    LEA EAX,[ESP + 0x158]               ; 0055f526
    PUSH EAX                            ; 0055f52d
    LEA EAX,[ESP + 0x8]                 ; 0055f52e
    PUSH EAX                            ; 0055f532
    PUSH 0x5d521a                       ; 0055f533 | = "*%f%n"
    MOV EDX,dword ptr [ESP + 0x170]     ; 0055f538
    PUSH EDX                            ; 0055f53f
    MOV dword ptr [ESP + 0x168],ESI     ; 0055f540
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0055f547
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f54c
    CMP EBX,dword ptr [ESP + 0x158]     ; 0055f54f
    JLE 0x0055f591                      ; 0055f556
        ;   XREF to: 0055f591 (CONDITIONAL_JUMP)  ; LAB_0055f591
    MOV EDX,dword ptr [EBP + 0x18]      ; 0055f558
        ;   Label: LAB_0055f558
    PUSH EDX                            ; 0055f55b
    MOV EDI,0x5d5220                    ; 0055f55c | = "..\\core\\sound.cpp"
    MOV EAX,0x1aa                       ; 0055f561
    PUSH 0x5d5232                       ; 0055f566 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d71de0],EDI      ; 0055f56b | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0055f571 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055f576
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055f57b
    MOV EAX,dword ptr [ESP + 0x158]     ; 0055f57e
    ADD dword ptr [ESP + 0x164],EAX     ; 0055f585
    JMP 0x0055f1f9                      ; 0055f58c
        ;   XREF to: 0055f1f9 (UNCONDITIONAL_JUMP)  ; LAB_0055f1f9
    FLD float ptr [ESP + 0x4]           ; 0055f591
        ;   Label: LAB_0055f591
    FLDZ                                ; 0055f595
    FCOMPP                              ; 0055f597
    FNSTSW AX                           ; 0055f599
    SAHF                                ; 0055f59b
    JNC 0x0055f558                      ; 0055f59c
        ;   XREF to: 0055f558 (CONDITIONAL_JUMP)  ; LAB_0055f558
    MOV EAX,dword ptr [ESP + 0x158]     ; 0055f59e
    ADD dword ptr [ESP + 0x164],EAX     ; 0055f5a5
    JMP 0x0055f1f9                      ; 0055f5ac
        ;   XREF to: 0055f1f9 (UNCONDITIONAL_JUMP)  ; LAB_0055f1f9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055f5b1
        ;   Label: LAB_0055f5b1
    PUSH EAX                            ; 0055f5b4
    MOV ECX,0x5d5249                    ; 0055f5b5 | = "..\\core\\sound.cpp"
    MOV EDI,0x1ad                       ; 0055f5ba
    PUSH 0x5d525b                       ; 0055f5bf | = "Invalid sfx string: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 0055f5c4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0055f5ca | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055f5d0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055f5d5
    JMP 0x0055f1f9                      ; 0055f5d8
        ;   XREF to: 0055f1f9 (UNCONDITIONAL_JUMP)  ; LAB_0055f1f9
    FLD float ptr [EBP + 0x24]          ; 0055f5dd
        ;   Label: LAB_0055f5dd
    SUB ESP,0x8                         ; 0055f5e0
    FSTP double ptr [ESP]               ; 0055f5e3
    FLD float ptr [EBP + 0x20]          ; 0055f5e6
    SUB ESP,0x8                         ; 0055f5e9
    FSTP double ptr [ESP]               ; 0055f5ec
    FLD float ptr [EBP + 0x1c]          ; 0055f5ef
    SUB ESP,0x8                         ; 0055f5f2
    FSTP double ptr [ESP]               ; 0055f5f5
    CALL sound_sndmain.cpp_FUN_00555c90 ; 0055f5f8
        ;   XREF to: 00555c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555c90(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 0055f5fd
    JMP 0x0055f21e                      ; 0055f600
        ;   XREF to: 0055f21e (UNCONDITIONAL_JUMP)  ; LAB_0055f21e

