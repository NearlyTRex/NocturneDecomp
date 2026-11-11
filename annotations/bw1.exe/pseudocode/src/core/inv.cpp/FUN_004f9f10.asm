; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f9f10(CInventory *param_1)
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined8       Stack[-0x50]:8  local_50
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
;
; XREF[4]:
;   core_doc.cpp_FUN_00469550 at 0046a4ac
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f1121
;   core_scat.cpp_CScat_process_FUN_00540df0 at 00541099
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 0058686e
;
; Referenced Globals:
;   TerminatedCString s_CBird_005e5fc8
;   TerminatedCString s_sps_short_wav_3_005e5fce
;   TerminatedCString s_sps_med_wav_3_005e5fe2
;   TerminatedCString s_sps_long_wav_3_005e5ff4
;   TerminatedCString s_sps_full_wav_3_005e6007
;   undefined4 DAT_005e67f8
;   undefined4 DAT_005e6800
;   undefined4 DAT_005e6808
;   undefined4 DAT_005e6810
;   CFieldNotes* g_CFieldNotesPtr = 01cc8004
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 DAT_007c3978
;   undefined4 g_CFieldNotesInstance.is_displayed
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9f10
        ;   Label: core_inv.cpp_FUN_004f9f10
    PUSH ESI                            ; 004f9f11
    PUSH EDI                            ; 004f9f12
    PUSH EBP                            ; 004f9f13
    MOV EBP,ESP                         ; 004f9f14
    SUB ESP,0x3c                        ; 004f9f16
    AND ESP,0xfffffff8                  ; 004f9f19
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f9f1c
    MOV EDX,dword ptr [EAX + 0x338]     ; 004f9f1f
    TEST EDX,EDX                        ; 004f9f25
    JZ 0x004f9f5d                       ; 004f9f27
        ;   XREF to: 004f9f5d (CONDITIONAL_JUMP)  ; LAB_004f9f5d
    MOV EAX,dword ptr [EDX + 0x568]     ; 004f9f29
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f9f2f
    CMP EAX,dword ptr [EDX + 0x468]     ; 004f9f32
    JZ 0x004f9f45                       ; 004f9f38
        ;   XREF to: 004f9f45 (CONDITIONAL_JUMP)  ; LAB_004f9f45
    PUSH 0x0                            ; 004f9f3a
    PUSH EDX                            ; 004f9f3c
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0 ; 004f9f3d
        ;   XREF to: 004fa6c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004f9f42
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f9f45
        ;   Label: LAB_004f9f45
    MOV EAX,dword ptr [EAX + 0x338]     ; 004f9f48
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f9f4e
    MOV EAX,dword ptr [EAX + 0x568]     ; 004f9f51
    MOV dword ptr [EDX + 0x468],EAX     ; 004f9f57
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f9f5d
        ;   Label: LAB_004f9f5d
    XOR ESI,ESI                         ; 004f9f60
    MOV EDI,dword ptr [EAX + 0x10]      ; 004f9f62
    MOV dword ptr [ESP + 0x34],ESI      ; 004f9f65
    TEST EDI,EDI                        ; 004f9f69
    JLE 0x004f9fc1                      ; 004f9f6b
        ;   XREF to: 004f9fc1 (CONDITIONAL_JUMP)  ; LAB_004f9fc1
    MOV ESI,EAX                         ; 004f9f6d
    MOV EDI,dword ptr [0x01d1c27c]      ; 004f9f6f | g_CLightGunClassInfo.name_hash
        ;   Label: LAB_004f9f6f
    PUSH EDI                            ; 004f9f75
    MOV EAX,dword ptr [ESI + 0x14]      ; 004f9f76
    PUSH EAX                            ; 004f9f79
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f9f7a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f9f7f
    MOV EDX,dword ptr [0x01d1c2b8]      ; 004f9f82 | g_CLightPisClassInfo.name_hash
    PUSH EDX                            ; 004f9f88
    MOV ECX,dword ptr [ESI + 0x14]      ; 004f9f89
    PUSH ECX                            ; 004f9f8c
    MOV EDI,EAX                         ; 004f9f8d
    MOV EBX,EAX                         ; 004f9f8f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f9f91
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f9f96
    MOV EDX,EAX                         ; 004f9f99
    TEST EDI,EDI                        ; 004f9f9b
    JNZ 0x004fa134                      ; 004f9f9d
        ;   XREF to: 004fa134 (CONDITIONAL_JUMP)  ; LAB_004fa134
    TEST EAX,EAX                        ; 004f9fa3
    JNZ 0x004fa134                      ; 004f9fa5
        ;   XREF to: 004fa134 (CONDITIONAL_JUMP)  ; LAB_004fa134
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f9fab
        ;   Label: LAB_004f9fab
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f9faf
    ADD ESI,0x4                         ; 004f9fb2
    INC EAX                             ; 004f9fb5
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9fb6
    MOV dword ptr [ESP + 0x34],EAX      ; 004f9fb9
    CMP EAX,ECX                         ; 004f9fbd
    JL 0x004f9f6f                       ; 004f9fbf
        ;   XREF to: 004f9f6f (CONDITIONAL_JUMP)  ; LAB_004f9f6f
    MOV EAX,[0x0061d95c]                ; 004f9fc1 | g_CGamePtr
        ;   Label: LAB_004f9fc1
    CMP dword ptr [EAX + 0x25c],0x0     ; 004f9fc6 | g_CGameInstance.goggles_active
    JZ 0x004fa198                       ; 004f9fcd
        ;   XREF to: 004fa198 (CONDITIONAL_JUMP)  ; LAB_004fa198
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f9fd3
        ;   Label: LAB_004f9fd3
    MOV dword ptr [EAX + 0x344],0x0     ; 004f9fd6
    MOV dword ptr [EAX + 0x34c],0x0     ; 004f9fe0
    MOV dword ptr [EAX + 0x350],0x0     ; 004f9fea
    MOV dword ptr [EAX + 0x340],0x0     ; 004f9ff4
    MOV EDX,dword ptr [0x0061d95c]      ; 004f9ffe | g_CGamePtr
        ;   Label: LAB_004f9ffe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa004
    FLD float ptr [EDX + 0x294]         ; 004fa007 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x340]       ; 004fa00d
    FST float ptr [EAX + 0x340]         ; 004fa013
    FLDZ                                ; 004fa019
    FCOMPP                              ; 004fa01b
    FNSTSW AX                           ; 004fa01d
    SAHF                                ; 004fa01f
    JC 0x004fa02f                       ; 004fa020
        ;   XREF to: 004fa02f (CONDITIONAL_JUMP)  ; LAB_004fa02f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa022
    MOV dword ptr [EAX + 0x340],0x0     ; 004fa025
    MOV EDX,dword ptr [0x0061d95c]      ; 004fa02f | g_CGamePtr
        ;   Label: LAB_004fa02f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa035
    FLD float ptr [EDX + 0x294]         ; 004fa038 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x344]       ; 004fa03e
    FST float ptr [EAX + 0x344]         ; 004fa044
    FLDZ                                ; 004fa04a
    FCOMPP                              ; 004fa04c
    FNSTSW AX                           ; 004fa04e
    SAHF                                ; 004fa050
    JC 0x004fa060                       ; 004fa051
        ;   XREF to: 004fa060 (CONDITIONAL_JUMP)  ; LAB_004fa060
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa053
    MOV dword ptr [EAX + 0x344],0x0     ; 004fa056
    MOV EDX,dword ptr [0x0061d95c]      ; 004fa060 | g_CGamePtr
        ;   Label: LAB_004fa060
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa066
    FLD float ptr [EDX + 0x294]         ; 004fa069 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x348]       ; 004fa06f
    FST float ptr [EAX + 0x348]         ; 004fa075
    FLDZ                                ; 004fa07b
    FCOMPP                              ; 004fa07d
    FNSTSW AX                           ; 004fa07f
    SAHF                                ; 004fa081
    JC 0x004fa091                       ; 004fa082
        ;   XREF to: 004fa091 (CONDITIONAL_JUMP)  ; LAB_004fa091
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa084
    MOV dword ptr [EAX + 0x348],0x0     ; 004fa087
    MOV EDX,dword ptr [0x0061d95c]      ; 004fa091 | g_CGamePtr
        ;   Label: LAB_004fa091
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa097
    FLD float ptr [EDX + 0x294]         ; 004fa09a | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x34c]       ; 004fa0a0
    FST float ptr [EAX + 0x34c]         ; 004fa0a6
    FLDZ                                ; 004fa0ac
    FCOMPP                              ; 004fa0ae
    FNSTSW AX                           ; 004fa0b0
    SAHF                                ; 004fa0b2
    JC 0x004fa0c9                       ; 004fa0b3
        ;   XREF to: 004fa0c9 (CONDITIONAL_JUMP)  ; LAB_004fa0c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa0b5
    MOV byte ptr [EAX + 0x354],0x0      ; 004fa0b8
    MOV dword ptr [EAX + 0x34c],0x0     ; 004fa0bf
    MOV EDX,dword ptr [0x0061d95c]      ; 004fa0c9 | g_CGamePtr
        ;   Label: LAB_004fa0c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa0cf
    FLD float ptr [EDX + 0x294]         ; 004fa0d2 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x350]       ; 004fa0d8
    FST float ptr [EAX + 0x350]         ; 004fa0de
    FLDZ                                ; 004fa0e4
    FCOMPP                              ; 004fa0e6
    FNSTSW AX                           ; 004fa0e8
    SAHF                                ; 004fa0ea
    JBE 0x004fa0fa                      ; 004fa0eb
        ;   XREF to: 004fa0fa (CONDITIONAL_JUMP)  ; LAB_004fa0fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa0ed
    MOV dword ptr [EAX + 0x350],0x0     ; 004fa0f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa0fa
        ;   Label: LAB_004fa0fa
    CMP dword ptr [EAX + 0xc],0x0       ; 004fa0fd
    JZ 0x004fa12d                       ; 004fa101
        ;   XREF to: 004fa12d (CONDITIONAL_JUMP)  ; LAB_004fa12d
    MOV EAX,[0x0061d95c]                ; 004fa103 | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 004fa108 | g_CGameInstance.delta_time_float
    FSUBR float ptr [0x01d06f70]        ; 004fa10e | DAT_01d06f70
    FLDZ                                ; 004fa114
    FXCH                                ; 004fa116
    FSTP float ptr [0x01d06f70]         ; 004fa118 | DAT_01d06f70
    FCOMP float ptr [0x01d06f70]        ; 004fa11e | DAT_01d06f70
    FNSTSW AX                           ; 004fa124
    SAHF                                ; 004fa126
    JNC 0x004fa1c7                      ; 004fa127
        ;   XREF to: 004fa1c7 (CONDITIONAL_JUMP)  ; LAB_004fa1c7
    MOV ESP,EBP                         ; 004fa12d
        ;   Label: LAB_004fa12d
    POP EBP                             ; 004fa12f
    POP EDI                             ; 004fa130
    POP ESI                             ; 004fa131
    POP EBX                             ; 004fa132
    RET                                 ; 004fa133
    TEST EBX,EBX                        ; 004fa134
        ;   Label: LAB_004fa134
    JZ 0x004fa168                       ; 004fa136
        ;   XREF to: 004fa168 (CONDITIONAL_JUMP)  ; LAB_004fa168
    CMP dword ptr [EBX + 0x2d4],0x2     ; 004fa138
    JZ 0x004f9fab                       ; 004fa13f
        ;   XREF to: 004f9fab (CONDITIONAL_JUMP)  ; LAB_004f9fab
    MOV EAX,[0x0061d95c]                ; 004fa145 | g_CGamePtr
    SUB ESP,0x4                         ; 004fa14a
    MOV EDX,dword ptr [EBX + 0x154]     ; 004fa14d
    MOV ECX,dword ptr [EAX + 0x294]     ; 004fa153 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],ECX             ; 004fa159
    PUSH EBX                            ; 004fa15c
    CALL dword ptr [EDX + 0xc]          ; 004fa15d
    ADD ESP,0x8                         ; 004fa160
    JMP 0x004f9fab                      ; 004fa163
        ;   XREF to: 004f9fab (UNCONDITIONAL_JUMP)  ; LAB_004f9fab
    CMP dword ptr [EDX + 0x2d4],0x2     ; 004fa168
        ;   Label: LAB_004fa168
    JZ 0x004f9fab                       ; 004fa16f
        ;   XREF to: 004f9fab (CONDITIONAL_JUMP)  ; LAB_004f9fab
    MOV EAX,[0x0061d95c]                ; 004fa175 | g_CGamePtr
    SUB ESP,0x4                         ; 004fa17a
    MOV EBX,dword ptr [EDX + 0x154]     ; 004fa17d
    MOV ECX,dword ptr [EAX + 0x294]     ; 004fa183 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],ECX             ; 004fa189
    PUSH EDX                            ; 004fa18c
    CALL dword ptr [EBX + 0xc]          ; 004fa18d
    ADD ESP,0x8                         ; 004fa190
    JMP 0x004f9fab                      ; 004fa193
        ;   XREF to: 004f9fab (UNCONDITIONAL_JUMP)  ; LAB_004f9fab
    MOV EDX,dword ptr [0x0061d418]      ; 004fa198 | g_CFieldNotesPtr
        ;   Label: LAB_004fa198
    CMP dword ptr [EDX + 0x40],0x0      ; 004fa19e | g_CFieldNotesInstance.is_displayed
    JNZ 0x004f9fd3                      ; 004fa1a2
        ;   XREF to: 004f9fd3 (CONDITIONAL_JUMP)  ; LAB_004f9fd3
    CMP dword ptr [0x007c3978],0x0      ; 004fa1a8 | DAT_007c3978
    JNZ 0x004f9fd3                      ; 004fa1af
        ;   XREF to: 004f9fd3 (CONDITIONAL_JUMP)  ; LAB_004f9fd3
    CMP dword ptr [EAX + 0x244],0x0     ; 004fa1b5 | g_CGameInstance.letterbox_mode
    JNZ 0x004f9fd3                      ; 004fa1bc
        ;   XREF to: 004f9fd3 (CONDITIONAL_JUMP)  ; LAB_004f9fd3
    JMP 0x004f9ffe                      ; 004fa1c2
        ;   XREF to: 004f9ffe (UNCONDITIONAL_JUMP)  ; LAB_004f9ffe
    PUSH 0x3ecccccd                     ; 004fa1c7
        ;   Label: LAB_004fa1c7
    PUSH 0x3dcccccd                     ; 004fa1cc
    MOV EBX,0xffffffff                  ; 004fa1d1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004fa1d6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    XOR EDI,EDI                         ; 004fa1db
    XOR ESI,ESI                         ; 004fa1dd
    MOV dword ptr [ESP + 0x40],EAX      ; 004fa1df
    MOV dword ptr [0x01d1bc48],EBX      ; 004fa1e3 | DAT_01d1bc48
    MOV EAX,dword ptr [ESP + 0x40]      ; 004fa1e9
    MOV [0x01d06f70],EAX                ; 004fa1ed | DAT_01d06f70
    ADD ESP,0x8                         ; 004fa1f2
    MOV EAX,[0x00622c18]                ; 004fa1f5 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004fa1f5
    CMP EDI,dword ptr [EAX + 0x14f0a8]  ; 004fa1fa | g_CDemonSetInstance.character_count
    JGE 0x004fa12d                      ; 004fa200
        ;   XREF to: 004fa12d (CONDITIONAL_JUMP)  ; LAB_004fa12d
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f0ac] ; 004fa206
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004fa20d
    JNZ 0x004fa21c                      ; 004fa214
        ;   XREF to: 004fa21c (CONDITIONAL_JUMP)  ; LAB_004fa21c
    INC EDI                             ; 004fa216
        ;   Label: LAB_004fa216
    ADD ESI,0x4                         ; 004fa217
    JMP 0x004fa1f5                      ; 004fa21a
        ;   XREF to: 004fa1f5 (UNCONDITIONAL_JUMP)  ; LAB_004fa1f5
    PUSH 0x5e5fc8                       ; 004fa21c | = "CBird"
        ;   Label: LAB_004fa21c
    PUSH EBX                            ; 004fa221
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fa222
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa227
    TEST EAX,EAX                        ; 004fa22a
    JNZ 0x004fa216                      ; 004fa22c
        ;   XREF to: 004fa216 (CONDITIONAL_JUMP)  ; LAB_004fa216
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004fa22e
    PUSH EAX                            ; 004fa234
    MOV EDX,dword ptr [0x006236b8]      ; 004fa235 | DAT_006236b8
    PUSH EDX                            ; 004fa23b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004fa23c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004fa241
    TEST EAX,EAX                        ; 004fa244
    JNZ 0x004fa216                      ; 004fa246
        ;   XREF to: 004fa216 (CONDITIONAL_JUMP)  ; LAB_004fa216
    MOV EAX,[0x01d06ab4]                ; 004fa248 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004fa24d
    LEA EDX,[EBX + 0x20]                ; 004fa254
    FLD float ptr [EAX + 0x20]          ; 004fa257
    FSUB float ptr [EDX]                ; 004fa25a
    FMUL ST0                            ; 004fa25c
    FLD float ptr [EAX + 0x24]          ; 004fa25e
    FSUB float ptr [EDX + 0x4]          ; 004fa261
    FMUL ST0                            ; 004fa264
    FLD float ptr [EAX + 0x28]          ; 004fa266
    FXCH                                ; 004fa269
    FADDP ST2,ST0                       ; 004fa26b
    FSUB float ptr [EDX + 0x8]          ; 004fa26d
    FMUL ST0                            ; 004fa270
    FADDP                               ; 004fa272
    FST double ptr [ESP]                ; 004fa274
    FCOMP double ptr [0x005e67f8]       ; 004fa277 | DAT_005e67f8
    FNSTSW AX                           ; 004fa27d
    SAHF                                ; 004fa27f
    JA 0x004fa216                       ; 004fa280
        ;   XREF to: 004fa216 (CONDITIONAL_JUMP)  ; LAB_004fa216
    FLD double ptr [ESP]                ; 004fa282
    FCOMP double ptr [0x005e6800]       ; 004fa285 | DAT_005e6800
    FNSTSW AX                           ; 004fa28b
    SAHF                                ; 004fa28d
    JBE 0x004fa2ff                      ; 004fa28e
        ;   XREF to: 004fa2ff (CONDITIONAL_JUMP)  ; LAB_004fa2ff
    MOV EDX,0x5e5fce                    ; 004fa290 | = "sps_short?.wav @ .3"
    MOV EAX,0x3                         ; 004fa295
    MOV dword ptr [ESP + 0x24],EBX      ; 004fa29a
    MOV dword ptr [ESP + 0x18],EDX      ; 004fa29e | = "sps_short?.wav @ .3"
    MOV [0x01d1bc48],EAX                ; 004fa2a2 | DAT_01d1bc48
    XOR EBX,EBX                         ; 004fa2a7
    MOV ECX,dword ptr [EBX + 0x1d1bc4c] ; 004fa2a9
        ;   Label: LAB_004fa2a9
    PUSH ECX                            ; 004fa2af
    MOV EAX,[0x006236b8]                ; 004fa2b0 | DAT_006236b8
    PUSH EAX                            ; 004fa2b5
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004fa2b6
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004fa2bb
    TEST EAX,EAX                        ; 004fa2be
    JZ 0x004fa2d1                       ; 004fa2c0
        ;   XREF to: 004fa2d1 (CONDITIONAL_JUMP)  ; LAB_004fa2d1
    ADD EBX,0x4                         ; 004fa2c2
    CMP EBX,0x10                        ; 004fa2c5
    JL 0x004fa2a9                       ; 004fa2c8
        ;   XREF to: 004fa2a9 (CONDITIONAL_JUMP)  ; LAB_004fa2a9
    MOV ESP,EBP                         ; 004fa2ca
    POP EBP                             ; 004fa2cc
    POP EDI                             ; 004fa2cd
    POP ESI                             ; 004fa2ce
    POP EBX                             ; 004fa2cf
    RET                                 ; 004fa2d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fa2d1
        ;   Label: LAB_004fa2d1
    PUSH EDX                            ; 004fa2d5 | = "sps_short?.wav @ .3"
    PUSH EAX                            ; 004fa2d6
    MOV ECX,dword ptr [0x006236b8]      ; 004fa2d7 | DAT_006236b8
    PUSH ECX                            ; 004fa2dd
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004fa2de
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004fa2e3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004fa2e6
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004fa2ea
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004fa2f0
    INC EDI                             ; 004fa2f6
    ADD ESI,0x4                         ; 004fa2f7
    JMP 0x004fa1f5                      ; 004fa2fa
        ;   XREF to: 004fa1f5 (UNCONDITIONAL_JUMP)  ; LAB_004fa1f5
    FLD double ptr [ESP]                ; 004fa2ff
        ;   Label: LAB_004fa2ff
    FCOMP double ptr [0x005e6808]       ; 004fa302 | DAT_005e6808
    FNSTSW AX                           ; 004fa308
    SAHF                                ; 004fa30a
    JBE 0x004fa37f                      ; 004fa30b
        ;   XREF to: 004fa37f (CONDITIONAL_JUMP)  ; LAB_004fa37f
    MOV ECX,0x2                         ; 004fa30d
    MOV dword ptr [ESP + 0x28],EBX      ; 004fa312
    MOV EBX,0x5e5fe2                    ; 004fa316 | = "sps_med?.wav @ .3"
    MOV dword ptr [0x01d1bc48],ECX      ; 004fa31b | DAT_01d1bc48
    MOV dword ptr [ESP + 0x1c],EBX      ; 004fa321 | = "sps_med?.wav @ .3"
    XOR EBX,EBX                         ; 004fa325
    MOV EDX,dword ptr [EBX + 0x1d1bc4c] ; 004fa327
        ;   Label: LAB_004fa327
    PUSH EDX                            ; 004fa32d
    MOV ECX,dword ptr [0x006236b8]      ; 004fa32e | DAT_006236b8
    PUSH ECX                            ; 004fa334
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004fa335
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004fa33a
    TEST EAX,EAX                        ; 004fa33d
    JZ 0x004fa350                       ; 004fa33f
        ;   XREF to: 004fa350 (CONDITIONAL_JUMP)  ; LAB_004fa350
    ADD EBX,0x4                         ; 004fa341
    CMP EBX,0x10                        ; 004fa344
    JL 0x004fa327                       ; 004fa347
        ;   XREF to: 004fa327 (CONDITIONAL_JUMP)  ; LAB_004fa327
    MOV ESP,EBP                         ; 004fa349
    POP EBP                             ; 004fa34b
    POP EDI                             ; 004fa34c
    POP ESI                             ; 004fa34d
    POP EBX                             ; 004fa34e
    RET                                 ; 004fa34f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fa350
        ;   Label: LAB_004fa350
    PUSH EAX                            ; 004fa354 | = "sps_med?.wav @ .3"
    PUSH 0x0                            ; 004fa355
    MOV EDX,dword ptr [0x006236b8]      ; 004fa357 | DAT_006236b8
    PUSH EDX                            ; 004fa35d
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004fa35e
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004fa363
    MOV EDX,dword ptr [ESP + 0x28]      ; 004fa366
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004fa36a
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004fa370
    INC EDI                             ; 004fa376
    ADD ESI,0x4                         ; 004fa377
    JMP 0x004fa1f5                      ; 004fa37a
        ;   XREF to: 004fa1f5 (UNCONDITIONAL_JUMP)  ; LAB_004fa1f5
    FLD double ptr [ESP]                ; 004fa37f
        ;   Label: LAB_004fa37f
    FCOMP double ptr [0x005e6810]       ; 004fa382 | DAT_005e6810
    FNSTSW AX                           ; 004fa388
    SAHF                                ; 004fa38a
    JBE 0x004fa3fc                      ; 004fa38b
        ;   XREF to: 004fa3fc (CONDITIONAL_JUMP)  ; LAB_004fa3fc
    MOV EDX,0x5e5ff4                    ; 004fa38d | = "sps_long?.wav @ .3"
    MOV EAX,0x1                         ; 004fa392
    MOV dword ptr [ESP + 0x30],EBX      ; 004fa397
    MOV dword ptr [ESP + 0x20],EDX      ; 004fa39b | = "sps_long?.wav @ .3"
    MOV [0x01d1bc48],EAX                ; 004fa39f | DAT_01d1bc48
    XOR EBX,EBX                         ; 004fa3a4
    MOV EAX,dword ptr [EBX + 0x1d1bc4c] ; 004fa3a6
        ;   Label: LAB_004fa3a6
    PUSH EAX                            ; 004fa3ac
    MOV EDX,dword ptr [0x006236b8]      ; 004fa3ad | DAT_006236b8
    PUSH EDX                            ; 004fa3b3
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004fa3b4
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004fa3b9
    TEST EAX,EAX                        ; 004fa3bc
    JZ 0x004fa3cf                       ; 004fa3be
        ;   XREF to: 004fa3cf (CONDITIONAL_JUMP)  ; LAB_004fa3cf
    ADD EBX,0x4                         ; 004fa3c0
    CMP EBX,0x10                        ; 004fa3c3
    JL 0x004fa3a6                       ; 004fa3c6
        ;   XREF to: 004fa3a6 (CONDITIONAL_JUMP)  ; LAB_004fa3a6
    MOV ESP,EBP                         ; 004fa3c8
    POP EBP                             ; 004fa3ca
    POP EDI                             ; 004fa3cb
    POP ESI                             ; 004fa3cc
    POP EBX                             ; 004fa3cd
    RET                                 ; 004fa3ce
    MOV ECX,dword ptr [ESP + 0x20]      ; 004fa3cf
        ;   Label: LAB_004fa3cf
    PUSH ECX                            ; 004fa3d3 | = "sps_long?.wav @ .3"
    PUSH EAX                            ; 004fa3d4
    MOV EAX,[0x006236b8]                ; 004fa3d5 | DAT_006236b8
    PUSH EAX                            ; 004fa3da
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004fa3db
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004fa3e0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004fa3e3
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004fa3e7
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004fa3ed
    INC EDI                             ; 004fa3f3
    ADD ESI,0x4                         ; 004fa3f4
    JMP 0x004fa1f5                      ; 004fa3f7
        ;   XREF to: 004fa1f5 (UNCONDITIONAL_JUMP)  ; LAB_004fa1f5
    MOV dword ptr [ESP + 0x2c],EBX      ; 004fa3fc
        ;   Label: LAB_004fa3fc
    XOR ECX,ECX                         ; 004fa400
    MOV EBX,0x5e6007                    ; 004fa402 | = "sps_full?.wav @ .3"
    MOV dword ptr [0x01d1bc48],ECX      ; 004fa407 | DAT_01d1bc48
    MOV dword ptr [ESP + 0x14],EBX      ; 004fa40d | = "sps_full?.wav @ .3"
    XOR EBX,EBX                         ; 004fa411
    MOV ECX,dword ptr [EBX + 0x1d1bc4c] ; 004fa413
        ;   Label: LAB_004fa413
    PUSH ECX                            ; 004fa419
    MOV EAX,[0x006236b8]                ; 004fa41a | DAT_006236b8
    PUSH EAX                            ; 004fa41f
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004fa420
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004fa425
    TEST EAX,EAX                        ; 004fa428
    JZ 0x004fa43b                       ; 004fa42a
        ;   XREF to: 004fa43b (CONDITIONAL_JUMP)  ; LAB_004fa43b
    ADD EBX,0x4                         ; 004fa42c
    CMP EBX,0x10                        ; 004fa42f
    JL 0x004fa413                       ; 004fa432
        ;   XREF to: 004fa413 (CONDITIONAL_JUMP)  ; LAB_004fa413
    MOV ESP,EBP                         ; 004fa434
    POP EBP                             ; 004fa436
    POP EDI                             ; 004fa437
    POP ESI                             ; 004fa438
    POP EBX                             ; 004fa439
    RET                                 ; 004fa43a
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fa43b
        ;   Label: LAB_004fa43b
    PUSH EDX                            ; 004fa43f | = "sps_full?.wav @ .3"
    PUSH EAX                            ; 004fa440
    MOV ECX,dword ptr [0x006236b8]      ; 004fa441 | DAT_006236b8
    PUSH ECX                            ; 004fa447
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004fa448
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004fa44d
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fa450
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004fa454
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004fa45a
    INC EDI                             ; 004fa460
    ADD ESI,0x4                         ; 004fa461
    JMP 0x004fa1f5                      ; 004fa464
        ;   XREF to: 004fa1f5 (UNCONDITIONAL_JUMP)  ; LAB_004fa1f5

