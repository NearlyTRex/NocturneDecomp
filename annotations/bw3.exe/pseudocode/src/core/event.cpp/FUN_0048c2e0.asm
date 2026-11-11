; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_event_cpp_FUN_0048c2e0(CEventList *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x2e04]:8  local_2e04
; undefined        Stack[-0x2dfc]:1  local_2dfc
; undefined        Stack[-0x2dfb]:1  local_2dfb
; undefined1       Stack[-0x2cfd]:1  local_2cfd
; undefined        Stack[-0x2cfc]:1  local_2cfc
; undefined        Stack[-0x2cfb]:1  local_2cfb
; undefined1       Stack[-0x2bfd]:1  local_2bfd
; undefined        Stack[-0x2bfc]:1  local_2bfc
; undefined        Stack[-0x2bfb]:1  local_2bfb
; undefined1       Stack[-0x2afd]:1  local_2afd
; undefined        Stack[-0x2afc]:1  local_2afc
; undefined        Stack[-0x2afb]:1  local_2afb
; undefined1       Stack[-0x29fd]:1  local_29fd
; undefined        Stack[-0x29fc]:1  local_29fc
; undefined        Stack[-0x29fb]:1  local_29fb
; undefined1       Stack[-0x28fd]:1  local_28fd
; undefined        Stack[-0x28fc]:1  local_28fc
; undefined        Stack[-0x28fb]:1  local_28fb
; undefined1       Stack[-0x27fd]:1  local_27fd
; undefined        Stack[-0x27fc]:1  local_27fc
; undefined        Stack[-0x27fb]:1  local_27fb
; undefined1       Stack[-0x26fd]:1  local_26fd
; undefined        Stack[-0x26fc]:1  local_26fc
; undefined        Stack[-0x26fb]:1  local_26fb
; undefined1       Stack[-0x25fd]:1  local_25fd
; undefined        Stack[-0x25fc]:1  local_25fc
; undefined        Stack[-0x25fb]:1  local_25fb
; undefined1       Stack[-0x24fd]:1  local_24fd
; undefined        Stack[-0x24fc]:1  local_24fc
; undefined        Stack[-0x24fb]:1  local_24fb
; undefined        Stack[-0x23fc]:1  local_23fc
; undefined        Stack[-0x22fc]:1  local_22fc
; undefined1       Stack[-0x21fd]:1  local_21fd
; undefined        Stack[-0x21fc]:1  local_21fc
; undefined        Stack[-0x21fb]:1  local_21fb
; undefined1       Stack[-0x2135]:1  local_2135
; undefined        Stack[-0x2134]:1  local_2134
; undefined        Stack[-0x2133]:1  local_2133
; undefined1       Stack[-0x206d]:1  local_206d
; undefined        Stack[-0x206c]:1  local_206c
; undefined        Stack[-0x206b]:1  local_206b
; undefined1       Stack[-0x1fa5]:1  local_1fa5
; undefined        Stack[-0x1fa4]:1  local_1fa4
; undefined        Stack[-0x1fa3]:1  local_1fa3
; undefined1       Stack[-0x1edd]:1  local_1edd
; undefined        Stack[-0x1edc]:1  local_1edc
; undefined        Stack[-0x1edb]:1  local_1edb
; undefined1       Stack[-0x1e15]:1  local_1e15
; undefined        Stack[-0x1e14]:1  local_1e14
; undefined        Stack[-0x1e13]:1  local_1e13
; undefined1       Stack[-0x1d4d]:1  local_1d4d
; undefined        Stack[-0x1d4c]:1  local_1d4c
; undefined        Stack[-0x1d4b]:1  local_1d4b
; undefined        Stack[-0x1c84]:1  local_1c84
; undefined1       Stack[-0x1bbd]:1  local_1bbd
; undefined        Stack[-0x1bbc]:1  local_1bbc
; undefined        Stack[-0x1bbb]:1  local_1bbb
; undefined1       Stack[-0x1af5]:1  local_1af5
; undefined        Stack[-0x1af4]:1  local_1af4
; undefined        Stack[-0x1af3]:1  local_1af3
; undefined1       Stack[-0x1a2d]:1  local_1a2d
; undefined        Stack[-0x1a2c]:1  local_1a2c
; undefined        Stack[-0x1a2b]:1  local_1a2b
; undefined        Stack[-0x1964]:1  local_1964
; undefined1       Stack[-0x189d]:1  local_189d
; undefined        Stack[-0x189c]:1  local_189c
; undefined        Stack[-0x189b]:1  local_189b
; undefined1       Stack[-0x17d5]:1  local_17d5
; undefined        Stack[-0x17d4]:1  local_17d4
; undefined        Stack[-0x17d3]:1  local_17d3
; undefined1       Stack[-0x170d]:1  local_170d
; undefined        Stack[-0x170c]:1  local_170c
; undefined        Stack[-0x170b]:1  local_170b
; undefined1       Stack[-0x1645]:1  local_1645
; undefined        Stack[-0x1644]:1  local_1644
; undefined        Stack[-0x1643]:1  local_1643
; undefined1       Stack[-0x157d]:1  local_157d
; undefined        Stack[-0x157c]:1  local_157c
; undefined        Stack[-0x157b]:1  local_157b
; undefined1       Stack[-0x14b5]:1  local_14b5
; undefined        Stack[-0x14b4]:1  local_14b4
; undefined        Stack[-0x14b3]:1  local_14b3
; undefined1       Stack[-0x13ed]:1  local_13ed
; undefined        Stack[-0x13ec]:1  local_13ec
; undefined        Stack[-0x13eb]:1  local_13eb
; undefined1       Stack[-0x1325]:1  local_1325
; undefined        Stack[-0x1324]:1  local_1324
; undefined        Stack[-0x1323]:1  local_1323
; undefined1       Stack[-0x125d]:1  local_125d
; undefined        Stack[-0x125c]:1  local_125c
; undefined        Stack[-0x125b]:1  local_125b
; undefined1       Stack[-0x1195]:1  local_1195
; undefined        Stack[-0x1194]:1  local_1194
; undefined        Stack[-0x1193]:1  local_1193
; undefined1       Stack[-0x10cd]:1  local_10cd
; undefined        Stack[-0x10cc]:1  local_10cc
; undefined        Stack[-0x10cb]:1  local_10cb
; undefined1       Stack[-0x1005]:1  local_1005
; undefined        Stack[-0x1004]:1  local_1004
; undefined        Stack[-0x1003]:1  local_1003
; undefined1       Stack[-0xf3d]:1  local_f3d
; undefined        Stack[-0xf3c]:1  local_f3c
; undefined        Stack[-0xf3b]:1  local_f3b
; undefined1       Stack[-0xe75]:1  local_e75
; undefined        Stack[-0xe74]:1  local_e74
; undefined        Stack[-0xe73]:1  local_e73
; undefined1       Stack[-0xdad]:1  local_dad
; undefined        Stack[-0xdac]:1  local_dac
; undefined        Stack[-0xdab]:1  local_dab
; undefined1       Stack[-0xce5]:1  local_ce5
; undefined        Stack[-0xce4]:1  local_ce4
; undefined        Stack[-0xce3]:1  local_ce3
; undefined1       Stack[-0xc1d]:1  local_c1d
; undefined        Stack[-0xc1c]:1  local_c1c
; undefined        Stack[-0xc1b]:1  local_c1b
; undefined1       Stack[-0xb55]:1  local_b55
; undefined        Stack[-0xb54]:1  local_b54
; undefined        Stack[-0xb53]:1  local_b53
; undefined1       Stack[-0xa8d]:1  local_a8d
; undefined        Stack[-0xa8c]:1  local_a8c
; undefined        Stack[-0xa8b]:1  local_a8b
; undefined1       Stack[-0x9c5]:1  local_9c5
; undefined        Stack[-0x9c4]:1  local_9c4
; undefined        Stack[-0x9c3]:1  local_9c3
; undefined1       Stack[-0x8fd]:1  local_8fd
; undefined        Stack[-0x8fc]:1  local_8fc
; undefined        Stack[-0x8fb]:1  local_8fb
; undefined1       Stack[-0x835]:1  local_835
; undefined        Stack[-0x834]:1  local_834
; undefined        Stack[-0x833]:1  local_833
; undefined1       Stack[-0x76d]:1  local_76d
; undefined        Stack[-0x76c]:1  local_76c
; undefined        Stack[-0x76b]:1  local_76b
; undefined1       Stack[-0x6a5]:1  local_6a5
; undefined        Stack[-0x6a4]:1  local_6a4
; undefined        Stack[-0x6a3]:1  local_6a3
; undefined1       Stack[-0x5dd]:1  local_5dd
; undefined        Stack[-0x5dc]:1  local_5dc
; undefined        Stack[-0x5db]:1  local_5db
; undefined        Stack[-0x514]:1  local_514
; undefined        Stack[-0x44c]:1  local_44c
; undefined1       Stack[-0x3e9]:1  local_3e9
; undefined        Stack[-0x3e8]:1  local_3e8
; undefined        Stack[-0x3e7]:1  local_3e7
; undefined1       Stack[-0x385]:1  local_385
; undefined        Stack[-0x384]:1  local_384
; undefined        Stack[-0x383]:1  local_383
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x26c]:1  local_26c
; undefined        Stack[-0x24c]:1  local_24c
; undefined        Stack[-0x22c]:1  local_22c
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x1b0]:1  local_1b0
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x190]:1  local_190
; undefined        Stack[-0x18c]:1  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined8       Stack[-0x17c]:8  local_17c
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommandString_FUN_0048c170 at 0048c1ed
;
; Referenced Globals:
;   void* switchdataD_0048c238 = 0048cb1e
;   void* switchdataD_0048c258 = 0048d046
;   void* switchdataD_0048c278 = 0048dbe6
;   void* switchdataD_0048c298 = 0048de02
;   void* switchdataD_0048c2b8 = 00491032
;   undefined4 DAT_005bdf86
;   undefined4 DAT_005bdf8b
;   TerminatedCString s_Event_name_s_is_too_long_005bdf8c
;   undefined4 DAT_005bdfa6
;   TerminatedCString s_events_txt_005bdfa9
;   undefined4 DAT_005bdfb4
;   TerminatedCString s_core_event_cpp_005bdfb8
;   TerminatedCString s_Too_many_events_check_ev_005bdfca
;   TerminatedCString s_Event_name_s_is_not_vali_005bdfed
;   TerminatedCString s_activateGadget_005be008
;   ... and 279 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_charactr.cpp_FUN_004319d0
;   core_door.cpp_FUN_00463d30
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_event.cpp_CEventList_getCounterValue_FUN_00494d00
;   core_event.cpp_CEventList_getSfxHandle_FUN_00495110
;   core_event.cpp_CEventList_setCounter_FUN_00494bf0
;   core_event.cpp_CEventList_setSfxHandle_FUN_00495150
;   core_event.cpp_CEventList_setTimerEvent_FUN_00494a70
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00495280
;   core_event.cpp_CEventList_validateCondition_FUN_00491b00
;   core_event.cpp_extractParenArg_FUN_0048bc10
;   core_event.cpp_formatEventError_FUN_0048b7f0
;   core_event.cpp_FUN_004946f0
;   ... and 58 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c2e0
        ;   Label: core_event.cpp_FUN_0048c2e0
    PUSH ESI                            ; 0048c2e1
    PUSH EDI                            ; 0048c2e2
    PUSH EBP                            ; 0048c2e3
    MOV EBP,ESP                         ; 0048c2e4
    SUB ESP,0x2dec                      ; 0048c2e6
    SUB EBP,0xfa                        ; 0048c2ec
    MOV EBX,dword ptr [EBP + 0x112]     ; 0048c2f2
    XOR AH,AH                           ; 0048c2f8
    MOV byte ptr [0x01c734b0],AH        ; 0048c2fa | DAT_01c734b0
    TEST EBX,EBX                        ; 0048c300
    JZ 0x0048c309                       ; 0048c302
        ;   XREF to: 0048c309 (CONDITIONAL_JUMP)  ; LAB_0048c309
    CMP byte ptr [EBX],0x0              ; 0048c304
    JNZ 0x0048c319                      ; 0048c307
        ;   XREF to: 0048c319 (CONDITIONAL_JUMP)  ; LAB_0048c319
    MOV EAX,0x1                         ; 0048c309
        ;   Label: LAB_0048c309
    LEA ESP,[EBP + 0xfa]                ; 0048c30e
        ;   Label: LAB_0048c30e
    POP EBP                             ; 0048c314
    POP EDI                             ; 0048c315
    POP ESI                             ; 0048c316
    POP EBX                             ; 0048c317
    RET                                 ; 0048c318
    PUSH 0x5bdf86                       ; 0048c319 | DAT_005bdf86
        ;   Label: LAB_0048c319
    PUSH EBX                            ; 0048c31e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048c31f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048c324
    TEST EAX,EAX                        ; 0048c327
    JZ 0x0048c309                       ; 0048c329
        ;   XREF to: 0048c309 (CONDITIONAL_JUMP)  ; LAB_0048c309
    CMP byte ptr [EBX],0x2e             ; 0048c32b
    JNZ 0x0048c331                      ; 0048c32e
        ;   XREF to: 0048c331 (CONDITIONAL_JUMP)  ; LAB_0048c331
    INC EBX                             ; 0048c330
    CMP dword ptr [0x01c734ac],0x0      ; 0048c331 | DAT_01c734ac
        ;   Label: LAB_0048c331
    SETZ AL                             ; 0048c338
    MOV ECX,0x5bdf8b                    ; 0048c33b | DAT_005bdf8b
    MOV DL,0x28                         ; 0048c340
    AND EAX,0xff                        ; 0048c342
    MOV ESI,EBX                         ; 0048c347
    MOV dword ptr [EBP + -0x66],EAX     ; 0048c349
    MOV dword ptr [EBP + -0x62],ECX     ; 0048c34c | DAT_005bdf8b
    MOV AL,byte ptr [ESI]               ; 0048c34f
        ;   Label: LAB_0048c34f
    CMP AL,DL                           ; 0048c351
    JZ 0x0048c367                       ; 0048c353
        ;   XREF to: 0048c367 (CONDITIONAL_JUMP)  ; LAB_0048c367
    CMP AL,0x0                          ; 0048c355
    JZ 0x0048c365                       ; 0048c357
        ;   XREF to: 0048c365 (CONDITIONAL_JUMP)  ; LAB_0048c365
    INC ESI                             ; 0048c359
    MOV AL,byte ptr [ESI]               ; 0048c35a
    CMP AL,DL                           ; 0048c35c
    JZ 0x0048c367                       ; 0048c35e
        ;   XREF to: 0048c367 (CONDITIONAL_JUMP)  ; LAB_0048c367
    INC ESI                             ; 0048c360
    CMP AL,0x0                          ; 0048c361
    JNZ 0x0048c34f                      ; 0048c363
        ;   XREF to: 0048c34f (CONDITIONAL_JUMP)  ; LAB_0048c34f
    SUB ESI,ESI                         ; 0048c365
        ;   Label: LAB_0048c365
    TEST ESI,ESI                        ; 0048c367
        ;   Label: LAB_0048c367
    JNZ 0x0048c530                      ; 0048c369
        ;   XREF to: 0048c530 (CONDITIONAL_JUMP)  ; LAB_0048c530
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c36f
    CMP dword ptr [EAX],0x0             ; 0048c375
    JLE 0x0048c39f                      ; 0048c378
        ;   XREF to: 0048c39f (CONDITIONAL_JUMP)  ; LAB_0048c39f
    LEA EDI,[EAX + 0x4]                 ; 0048c37a
    PUSH EBX                            ; 0048c37d
        ;   Label: LAB_0048c37d
    PUSH EDI                            ; 0048c37e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048c37f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048c384
    TEST EAX,EAX                        ; 0048c387
    JZ 0x0048c309                       ; 0048c389
        ;   XREF to: 0048c309 (CONDITIONAL_JUMP)  ; LAB_0048c309
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c38f
    INC ESI                             ; 0048c395
    MOV EDX,dword ptr [EAX]             ; 0048c396
    ADD EDI,0x20                        ; 0048c398
    CMP ESI,EDX                         ; 0048c39b
    JL 0x0048c37d                       ; 0048c39d
        ;   XREF to: 0048c37d (CONDITIONAL_JUMP)  ; LAB_0048c37d
    MOV EDI,EBX                         ; 0048c39f
        ;   Label: LAB_0048c39f
    SUB ECX,ECX                         ; 0048c3a1
    DEC ECX                             ; 0048c3a3
    XOR EAX,EAX                         ; 0048c3a4
    SCASB.REPNE ES:EDI                  ; 0048c3a6
    NOT ECX                             ; 0048c3a8
    DEC ECX                             ; 0048c3aa
    CMP ECX,0x20                        ; 0048c3ab
    JNC 0x0048c441                      ; 0048c3ae
        ;   XREF to: 0048c441 (CONDITIONAL_JUMP)  ; LAB_0048c441
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c3b4
    CMP dword ptr [EAX],0x64            ; 0048c3ba
    JGE 0x0048c45a                      ; 0048c3bd
        ;   XREF to: 0048c45a (CONDITIONAL_JUMP)  ; LAB_0048c45a
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c3c3
        ;   Label: LAB_0048c3c3
    MOV ECX,dword ptr [EBP + 0x10e]     ; 0048c3c9
    MOV EAX,dword ptr [EAX]             ; 0048c3cf
    ADD ECX,0x4                         ; 0048c3d1
    SHL EAX,0x5                         ; 0048c3d4
    ADD ECX,EAX                         ; 0048c3d7
    MOV ESI,EBX                         ; 0048c3d9
    MOV EDI,ECX                         ; 0048c3db
    MOV dword ptr [EBP + -0x6a],ECX     ; 0048c3dd
    PUSH EDI                            ; 0048c3e0
    MOV AL,byte ptr [ESI]               ; 0048c3e1
        ;   Label: LAB_0048c3e1
    MOV byte ptr [EDI],AL               ; 0048c3e3
    CMP AL,0x0                          ; 0048c3e5
    JZ 0x0048c3f9                       ; 0048c3e7
        ;   XREF to: 0048c3f9 (CONDITIONAL_JUMP)  ; LAB_0048c3f9
    MOV AL,byte ptr [ESI + 0x1]         ; 0048c3e9
    ADD ESI,0x2                         ; 0048c3ec
    MOV byte ptr [EDI + 0x1],AL         ; 0048c3ef
    ADD EDI,0x2                         ; 0048c3f2
    CMP AL,0x0                          ; 0048c3f5
    JNZ 0x0048c3e1                      ; 0048c3f7
        ;   XREF to: 0048c3e1 (CONDITIONAL_JUMP)  ; LAB_0048c3e1
    POP EDI                             ; 0048c3f9
        ;   Label: LAB_0048c3f9
    XOR EAX,EAX                         ; 0048c3fa
    MOV ESI,ECX                         ; 0048c3fc
    MOV dword ptr [EBP + 0xe6],EAX      ; 0048c3fe
    MOV EDI,dword ptr [EBP + -0x6a]     ; 0048c404
        ;   Label: LAB_0048c404
    MOV EDX,dword ptr [EBP + 0xe6]      ; 0048c407
    SUB ECX,ECX                         ; 0048c40d
    DEC ECX                             ; 0048c40f
    XOR EAX,EAX                         ; 0048c410
    SCASB.REPNE ES:EDI                  ; 0048c412
    NOT ECX                             ; 0048c414
    DEC ECX                             ; 0048c416
    CMP ECX,EDX                         ; 0048c417
    JA 0x0048c4f7                       ; 0048c419
        ;   XREF to: 0048c4f7 (CONDITIONAL_JUMP)  ; LAB_0048c4f7
    CMP dword ptr [EBP + -0x66],0x0     ; 0048c41f
    JZ 0x0048c309                       ; 0048c423
        ;   XREF to: 0048c309 (CONDITIONAL_JUMP)  ; LAB_0048c309
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c429
    INC dword ptr [EAX]                 ; 0048c42f
    MOV EAX,0x1                         ; 0048c431
    LEA ESP,[EBP + 0xfa]                ; 0048c436
    POP EBP                             ; 0048c43c
    POP EDI                             ; 0048c43d
    POP ESI                             ; 0048c43e
    POP EBX                             ; 0048c43f
    RET                                 ; 0048c440
    PUSH EBX                            ; 0048c441
        ;   Label: LAB_0048c441
    PUSH 0x5bdf8c                       ; 0048c442 | = "Event name %s is too long"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048c447
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048c44c
    LEA ESP,[EBP + 0xfa]                ; 0048c44f
    POP EBP                             ; 0048c455
    POP EDI                             ; 0048c456
    POP ESI                             ; 0048c457
    POP EBX                             ; 0048c458
    RET                                 ; 0048c459
    PUSH 0x5bdfa6                       ; 0048c45a | DAT_005bdfa6
        ;   Label: LAB_0048c45a
    PUSH 0x5bdfa9                       ; 0048c45f | = "events.txt"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 0048c464
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 0048c469
    MOV dword ptr [EBP + -0x5e],EAX     ; 0048c46c
    TEST EAX,EAX                        ; 0048c46f
    JZ 0x0048c4bc                       ; 0048c471
        ;   XREF to: 0048c4bc (CONDITIONAL_JUMP)  ; LAB_0048c4bc
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c473
    MOV EDI,dword ptr [EAX]             ; 0048c479
    XOR ESI,ESI                         ; 0048c47b
    TEST EDI,EDI                        ; 0048c47d
    JLE 0x0048c4b0                      ; 0048c47f
        ;   XREF to: 0048c4b0 (CONDITIONAL_JUMP)  ; LAB_0048c4b0
    LEA EDI,[EAX + 0x4]                 ; 0048c481
    PUSH EDI                            ; 0048c484
        ;   Label: LAB_0048c484
    PUSH 0x5bdfb4                       ; 0048c485 | DAT_005bdfb4
    MOV EAX,dword ptr [EBP + -0x5e]     ; 0048c48a
    PUSH EAX                            ; 0048c48d
    CALL crt_unknown.c_FUN_005a3140     ; 0048c48e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBP + 0x10e]     ; 0048c493
    INC ESI                             ; 0048c499
    ADD EDI,0x20                        ; 0048c49a
    MOV EDX,dword ptr [EAX]             ; 0048c49d
    ADD ESP,0xc                         ; 0048c49f
    CMP ESI,EDX                         ; 0048c4a2
    JL 0x0048c484                       ; 0048c4a4
        ;   XREF to: 0048c484 (CONDITIONAL_JUMP)  ; LAB_0048c484
    LEA EAX,[EAX]                       ; 0048c4a6
    LEA EDX,[EDX]                       ; 0048c4ac
    MOV ECX,dword ptr [EBP + -0x5e]     ; 0048c4b0
        ;   Label: LAB_0048c4b0
    PUSH ECX                            ; 0048c4b3
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0048c4b4
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0048c4b9
    MOV ESI,0x5bdfb8                    ; 0048c4bc | = "..\\core\\event.cpp"
        ;   Label: LAB_0048c4bc
    MOV EDI,0x27d                       ; 0048c4c1
    PUSH 0x5bdfca                       ; 0048c4c6 | = "Too many events - check events.txt"
    MOV dword ptr [0x01d71de0],ESI      ; 0048c4cb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0048c4d1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0048c4d7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0048c4dc
    JMP 0x0048c3c3                      ; 0048c4df
        ;   XREF to: 0048c3c3 (UNCONDITIONAL_JUMP)  ; LAB_0048c3c3
    MOV EDI,dword ptr [EBP + 0xe6]      ; 0048c4e4
        ;   Label: LAB_0048c4e4
    INC EDI                             ; 0048c4ea
    INC ESI                             ; 0048c4eb
    MOV dword ptr [EBP + 0xe6],EDI      ; 0048c4ec
    JMP 0x0048c404                      ; 0048c4f2
        ;   XREF to: 0048c404 (UNCONDITIONAL_JUMP)  ; LAB_0048c404
    XOR EAX,EAX                         ; 0048c4f7
        ;   Label: LAB_0048c4f7
    MOV AL,byte ptr [ESI]               ; 0048c4f9
    PUSH EAX                            ; 0048c4fb
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 0048c4fc
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV byte ptr [ESI],AL               ; 0048c501
    XOR EAX,EAX                         ; 0048c503
    ADD ESP,0x4                         ; 0048c505
    MOV AL,byte ptr [ESI]               ; 0048c508
    PUSH EAX                            ; 0048c50a
    CALL core_event.cpp_isValidIdentifierChar_FUN_00495460 ; 0048c50b
        ;   XREF to: 00495460 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_00495460(int ch)
    ADD ESP,0x4                         ; 0048c510
    TEST EAX,EAX                        ; 0048c513
    JNZ 0x0048c4e4                      ; 0048c515
        ;   XREF to: 0048c4e4 (CONDITIONAL_JUMP)  ; LAB_0048c4e4
    PUSH EBX                            ; 0048c517
    PUSH 0x5bdfed                       ; 0048c518 | = "Event name %s is not valid"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048c51d
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048c522
    LEA ESP,[EBP + 0xfa]                ; 0048c525
    POP EBP                             ; 0048c52b
    POP EDI                             ; 0048c52c
    POP ESI                             ; 0048c52d
    POP EBX                             ; 0048c52e
    RET                                 ; 0048c52f
    PUSH 0xe                            ; 0048c530
        ;   Label: LAB_0048c530
    PUSH 0x5be008                       ; 0048c532 | = "activateGadget"
    PUSH EBX                            ; 0048c537
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048c538
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048c53d
    TEST EAX,EAX                        ; 0048c540
    JNZ 0x0048c84d                      ; 0048c542
        ;   XREF to: 0048c84d (CONDITIONAL_JUMP)  ; LAB_0048c84d
    MOV AL,byte ptr [EBX + 0xe]         ; 0048c548
    INC AL                              ; 0048c54b
    AND EAX,0xff                        ; 0048c54d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048c552 | DAT_006074b8
    JNZ 0x0048c84d                      ; 0048c559
        ;   XREF to: 0048c84d (CONDITIONAL_JUMP)  ; LAB_0048c84d
    LEA EAX,[EBX + 0xe]                 ; 0048c55f
    MOV BL,byte ptr [EAX]               ; 0048c562
        ;   Label: LAB_0048c562
    XOR ECX,ECX                         ; 0048c564
    INC BL                              ; 0048c566
    MOV CL,BL                           ; 0048c568
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048c56a | DAT_006074b8
    JZ 0x0048c576                       ; 0048c571
        ;   XREF to: 0048c576 (CONDITIONAL_JUMP)  ; LAB_0048c576
    INC EAX                             ; 0048c573
    JMP 0x0048c562                      ; 0048c574
        ;   XREF to: 0048c562 (UNCONDITIONAL_JUMP)  ; LAB_0048c562
    LEA ECX,[EBP + -0x5a]               ; 0048c576
        ;   Label: LAB_0048c576
    PUSH ECX                            ; 0048c579
    LEA ECX,[EBP + 0xffffd80e]          ; 0048c57a
    PUSH ECX                            ; 0048c580
    LEA ECX,[EBP + 0xffffda0e]          ; 0048c581
    PUSH ECX                            ; 0048c587
    PUSH 0x5be017                       ; 0048c588 | = "(%[^,], %[^,], %n"
    MOV EDX,0xffffffff                  ; 0048c58d
    PUSH EAX                            ; 0048c592
    MOV dword ptr [EBP + -0x62],EAX     ; 0048c593
    MOV dword ptr [EBP + -0x5a],EDX     ; 0048c596
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048c599
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x5a]     ; 0048c59e
    ADD ESP,0x14                        ; 0048c5a1
    CMP ECX,0x3                         ; 0048c5a4
    JL 0x0048c611                       ; 0048c5a7
        ;   XREF to: 0048c611 (CONDITIONAL_JUMP)  ; LAB_0048c611
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048c5a9
    ADD EBX,ECX                         ; 0048c5ac
    LEA EDI,[EBP + 0xffffda0e]          ; 0048c5ae
    MOV dword ptr [EBP + -0x62],EBX     ; 0048c5b4
    SUB ECX,ECX                         ; 0048c5b7
    DEC ECX                             ; 0048c5b9
    XOR EAX,EAX                         ; 0048c5ba
    SCASB.REPNE ES:EDI                  ; 0048c5bc
    NOT ECX                             ; 0048c5be
    DEC ECX                             ; 0048c5c0
    LEA EBX,[EBP + 0xffffda0e]          ; 0048c5c1
    MOV EDI,ECX                         ; 0048c5c7
    TEST ECX,ECX                        ; 0048c5c9
    JLE 0x0048c5e8                      ; 0048c5cb
        ;   XREF to: 0048c5e8 (CONDITIONAL_JUMP)  ; LAB_0048c5e8
    LEA EAX,[EBP + 0xffffda0e]          ; 0048c5cd
    ADD ECX,EAX                         ; 0048c5d3
    MOV AL,byte ptr [ECX + -0x1]        ; 0048c5d5
        ;   Label: LAB_0048c5d5
    INC AL                              ; 0048c5d8
    AND EAX,0xff                        ; 0048c5da
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c5df | DAT_006074b8
    JNZ 0x0048c629                      ; 0048c5e6
        ;   XREF to: 0048c629 (CONDITIONAL_JUMP)  ; LAB_0048c629
    LEA EAX,[EBX + EDI*0x1]             ; 0048c5e8
        ;   Label: LAB_0048c5e8
    LEA ESI,[EBX + 0x1]                 ; 0048c5eb
    MOV byte ptr [EAX],0x0              ; 0048c5ee
    MOV AL,byte ptr [EBX]               ; 0048c5f1
        ;   Label: LAB_0048c5f1
    INC AL                              ; 0048c5f3
    AND EAX,0xff                        ; 0048c5f5
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c5fa | DAT_006074b8
    JZ 0x0048c631                       ; 0048c601
        ;   XREF to: 0048c631 (CONDITIONAL_JUMP)  ; LAB_0048c631
    PUSH EDI                            ; 0048c603
    PUSH ESI                            ; 0048c604
    PUSH EBX                            ; 0048c605
    DEC EDI                             ; 0048c606
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048c607
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048c60c
    JMP 0x0048c5f1                      ; 0048c60f
        ;   XREF to: 0048c5f1 (UNCONDITIONAL_JUMP)  ; LAB_0048c5f1
    PUSH 0x5be029                       ; 0048c611 | = "Error parsing activateGadget command"
        ;   Label: LAB_0048c611
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048c616
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048c61b
    LEA ESP,[EBP + 0xfa]                ; 0048c61e
    POP EBP                             ; 0048c624
    POP EDI                             ; 0048c625
    POP ESI                             ; 0048c626
    POP EBX                             ; 0048c627
    RET                                 ; 0048c628
    DEC EDI                             ; 0048c629
        ;   Label: LAB_0048c629
    DEC ECX                             ; 0048c62a
    TEST EDI,EDI                        ; 0048c62b
    JG 0x0048c5d5                       ; 0048c62d
        ;   XREF to: 0048c5d5 (CONDITIONAL_JUMP)  ; LAB_0048c5d5
    JMP 0x0048c5e8                      ; 0048c62f
        ;   XREF to: 0048c5e8 (UNCONDITIONAL_JUMP)  ; LAB_0048c5e8
    LEA EDI,[EBP + 0xffffd80e]          ; 0048c631
        ;   Label: LAB_0048c631
    LEA ESI,[EBP + 0xffffd80e]          ; 0048c637
    SUB ECX,ECX                         ; 0048c63d
    DEC ECX                             ; 0048c63f
    XOR EAX,EAX                         ; 0048c640
    SCASB.REPNE ES:EDI                  ; 0048c642
    NOT ECX                             ; 0048c644
    DEC ECX                             ; 0048c646
    MOV EDI,ECX                         ; 0048c647
    TEST ECX,ECX                        ; 0048c649
    JLE 0x0048c668                      ; 0048c64b
        ;   XREF to: 0048c668 (CONDITIONAL_JUMP)  ; LAB_0048c668
    LEA EAX,[EBP + 0xffffd80e]          ; 0048c64d
    ADD ECX,EAX                         ; 0048c653
    MOV AL,byte ptr [ECX + -0x1]        ; 0048c655
        ;   Label: LAB_0048c655
    INC AL                              ; 0048c658
    AND EAX,0xff                        ; 0048c65a
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c65f | DAT_006074b8
    JNZ 0x0048c691                      ; 0048c666
        ;   XREF to: 0048c691 (CONDITIONAL_JUMP)  ; LAB_0048c691
    LEA EAX,[ESI + EDI*0x1]             ; 0048c668
        ;   Label: LAB_0048c668
    LEA EBX,[ESI + 0x1]                 ; 0048c66b
    MOV byte ptr [EAX],0x0              ; 0048c66e
    MOV AL,byte ptr [ESI]               ; 0048c671
        ;   Label: LAB_0048c671
    INC AL                              ; 0048c673
    AND EAX,0xff                        ; 0048c675
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c67a | DAT_006074b8
    JZ 0x0048c699                       ; 0048c681
        ;   XREF to: 0048c699 (CONDITIONAL_JUMP)  ; LAB_0048c699
    PUSH EDI                            ; 0048c683
    PUSH EBX                            ; 0048c684
    PUSH ESI                            ; 0048c685
    DEC EDI                             ; 0048c686
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048c687
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048c68c
    JMP 0x0048c671                      ; 0048c68f
        ;   XREF to: 0048c671 (UNCONDITIONAL_JUMP)  ; LAB_0048c671
    DEC EDI                             ; 0048c691
        ;   Label: LAB_0048c691
    DEC ECX                             ; 0048c692
    TEST EDI,EDI                        ; 0048c693
    JG 0x0048c655                       ; 0048c695
        ;   XREF to: 0048c655 (CONDITIONAL_JUMP)  ; LAB_0048c655
    JMP 0x0048c668                      ; 0048c697
        ;   XREF to: 0048c668 (UNCONDITIONAL_JUMP)  ; LAB_0048c668
    PUSH 0x0                            ; 0048c699
        ;   Label: LAB_0048c699
    PUSH 0x100                          ; 0048c69b
    LEA EAX,[EBP + 0xffffdc0e]          ; 0048c6a0
    PUSH EAX                            ; 0048c6a6
    LEA EAX,[EBP + -0x62]               ; 0048c6a7
    PUSH EAX                            ; 0048c6aa
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048c6ab
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048c6b0
    TEST EAX,EAX                        ; 0048c6b3
    JNZ 0x0048c717                      ; 0048c6b5
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    LEA EDI,[EBP + 0xffffdc0e]          ; 0048c6b7
    LEA EBX,[EBP + 0xffffdc0e]          ; 0048c6bd
    SUB ECX,ECX                         ; 0048c6c3
    DEC ECX                             ; 0048c6c5
    XOR EAX,EAX                         ; 0048c6c6
    SCASB.REPNE ES:EDI                  ; 0048c6c8
    NOT ECX                             ; 0048c6ca
    DEC ECX                             ; 0048c6cc
    MOV ESI,ECX                         ; 0048c6cd
    TEST ECX,ECX                        ; 0048c6cf
    JLE 0x0048c6ee                      ; 0048c6d1
        ;   XREF to: 0048c6ee (CONDITIONAL_JUMP)  ; LAB_0048c6ee
    LEA EAX,[EBP + 0xffffdc0e]          ; 0048c6d3
    ADD ECX,EAX                         ; 0048c6d9
    MOV AL,byte ptr [ECX + -0x1]        ; 0048c6db
        ;   Label: LAB_0048c6db
    INC AL                              ; 0048c6de
    AND EAX,0xff                        ; 0048c6e0
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c6e5 | DAT_006074b8
    JNZ 0x0048c745                      ; 0048c6ec
        ;   XREF to: 0048c745 (CONDITIONAL_JUMP)  ; LAB_0048c745
    LEA EAX,[EBX + ESI*0x1]             ; 0048c6ee
        ;   Label: LAB_0048c6ee
    LEA EDI,[EBX + 0x1]                 ; 0048c6f1
    MOV byte ptr [EAX],0x0              ; 0048c6f4
    MOV AL,byte ptr [EBX]               ; 0048c6f7
        ;   Label: LAB_0048c6f7
    INC AL                              ; 0048c6f9
    AND EAX,0xff                        ; 0048c6fb
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c700 | DAT_006074b8
    JZ 0x0048c74d                       ; 0048c707
        ;   XREF to: 0048c74d (CONDITIONAL_JUMP)  ; LAB_0048c74d
    PUSH ESI                            ; 0048c709
    PUSH EDI                            ; 0048c70a
    PUSH EBX                            ; 0048c70b
    DEC ESI                             ; 0048c70c
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048c70d
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048c712
    JMP 0x0048c6f7                      ; 0048c715
        ;   XREF to: 0048c6f7 (UNCONDITIONAL_JUMP)  ; LAB_0048c6f7
    MOV EDI,0x1c734b0                   ; 0048c717
        ;   Label: LAB_0048c717
    MOV ESI,EAX                         ; 0048c71c
    PUSH EDI                            ; 0048c71e | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 0048c71f
        ;   Label: LAB_0048c71f
    MOV byte ptr [EDI],AL               ; 0048c721 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0048c723
    JZ 0x0048c737                       ; 0048c725
        ;   XREF to: 0048c737 (CONDITIONAL_JUMP)  ; LAB_0048c737
    MOV AL,byte ptr [ESI + 0x1]         ; 0048c727
    ADD ESI,0x2                         ; 0048c72a
    MOV byte ptr [EDI + 0x1],AL         ; 0048c72d | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 0048c730
    CMP AL,0x0                          ; 0048c733
    JNZ 0x0048c71f                      ; 0048c735
        ;   XREF to: 0048c71f (CONDITIONAL_JUMP)  ; LAB_0048c71f
    POP EDI                             ; 0048c737
        ;   Label: LAB_0048c737
    XOR EAX,EAX                         ; 0048c738
    LEA ESP,[EBP + 0xfa]                ; 0048c73a
    POP EBP                             ; 0048c740
    POP EDI                             ; 0048c741
    POP ESI                             ; 0048c742
    POP EBX                             ; 0048c743
    RET                                 ; 0048c744
    DEC ESI                             ; 0048c745
        ;   Label: LAB_0048c745
    DEC ECX                             ; 0048c746
    TEST ESI,ESI                        ; 0048c747
    JG 0x0048c6db                       ; 0048c749
        ;   XREF to: 0048c6db (CONDITIONAL_JUMP)  ; LAB_0048c6db
    JMP 0x0048c6ee                      ; 0048c74b
        ;   XREF to: 0048c6ee (UNCONDITIONAL_JUMP)  ; LAB_0048c6ee
    PUSH 0x1d5ba38                      ; 0048c74d
        ;   Label: LAB_0048c74d
    MOV ESI,dword ptr [0x01d5ba70]      ; 0048c752 | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 0048c758
    LEA EAX,[EBP + 0xffffda0e]          ; 0048c759
    PUSH EAX                            ; 0048c75f
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048c760
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048c765
    MOV ESI,EAX                         ; 0048c768
    TEST EAX,EAX                        ; 0048c76a
    JZ 0x0048c30e                       ; 0048c76c
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    MOV EDI,dword ptr [0x005df604]      ; 0048c772 | DAT_005df604
    CMP EAX,EDI                         ; 0048c778
    JNZ 0x0048c781                      ; 0048c77a
        ;   XREF to: 0048c781 (CONDITIONAL_JUMP)  ; LAB_0048c781
    XOR EAX,EDI                         ; 0048c77c
    MOV dword ptr [EBP + -0x66],EAX     ; 0048c77e
    PUSH 0x5be04e                       ; 0048c781 | = "compass"
        ;   Label: LAB_0048c781
    LEA EAX,[EBP + 0xffffd80e]          ; 0048c786
    PUSH EAX                            ; 0048c78c
    XOR EBX,EBX                         ; 0048c78d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048c78f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048c794
    TEST EAX,EAX                        ; 0048c797
    JNZ 0x0048c7a1                      ; 0048c799
        ;   XREF to: 0048c7a1 (CONDITIONAL_JUMP)  ; LAB_0048c7a1
    LEA EBX,[ESI + 0x206f0]             ; 0048c79b
    PUSH 0x5be056                       ; 0048c7a1 | DAT_005be056
        ;   Label: LAB_0048c7a1
    LEA EAX,[EBP + 0xffffd80e]          ; 0048c7a6
    PUSH EAX                            ; 0048c7ac
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048c7ad
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048c7b2
    TEST EAX,EAX                        ; 0048c7b5
    JNZ 0x0048c7bf                      ; 0048c7b7
        ;   XREF to: 0048c7bf (CONDITIONAL_JUMP)  ; LAB_0048c7bf
    LEA EBX,[ESI + 0x206f4]             ; 0048c7b9
    TEST EBX,EBX                        ; 0048c7bf
        ;   Label: LAB_0048c7bf
    JZ 0x0048c7ed                       ; 0048c7c1
        ;   XREF to: 0048c7ed (CONDITIONAL_JUMP)  ; LAB_0048c7ed
    CMP dword ptr [0x01c734ac],0x0      ; 0048c7c3 | DAT_01c734ac
    JNZ 0x0048c80c                      ; 0048c7ca
        ;   XREF to: 0048c80c (CONDITIONAL_JUMP)  ; LAB_0048c80c
    CMP dword ptr [EBP + -0x66],0x0     ; 0048c7cc
    JNZ 0x0048c833                      ; 0048c7d0
        ;   XREF to: 0048c833 (CONDITIONAL_JUMP)  ; LAB_0048c833
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048c7d2
        ;   Label: caseD_2
    MOV BL,byte ptr [EAX]               ; 0048c7d5
        ;   Label: LAB_0048c7d5
    XOR ECX,ECX                         ; 0048c7d7
    INC BL                              ; 0048c7d9
    MOV CL,BL                           ; 0048c7db
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048c7dd | DAT_006074b8
    JZ 0x004919e3                       ; 0048c7e4
        ;   XREF to: 004919e3 (CONDITIONAL_JUMP)  ; LAB_004919e3
    INC EAX                             ; 0048c7ea
    JMP 0x0048c7d5                      ; 0048c7eb
        ;   XREF to: 0048c7d5 (UNCONDITIONAL_JUMP)  ; LAB_0048c7d5
    LEA EAX,[EBP + 0xffffd80e]          ; 0048c7ed
        ;   Label: LAB_0048c7ed
    PUSH EAX                            ; 0048c7f3
    PUSH 0x5be05a                       ; 0048c7f4 | = "Invalid gadget type: %s"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048c7f9
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048c7fe
    LEA ESP,[EBP + 0xfa]                ; 0048c801
    POP EBP                             ; 0048c807
    POP EDI                             ; 0048c808
    POP ESI                             ; 0048c809
    POP EBX                             ; 0048c80a
    RET                                 ; 0048c80b
    LEA EAX,[EBP + 0xffffdc0e]          ; 0048c80c
        ;   Label: LAB_0048c80c
    PUSH EAX                            ; 0048c812
    MOV EDI,dword ptr [EBP + 0x10e]     ; 0048c813
    PUSH EDI                            ; 0048c819
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0048c81a
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0048c81f
    TEST EAX,EAX                        ; 0048c822
    JZ 0x0048c7d2                       ; 0048c824
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 0048c826
    LEA ESP,[EBP + 0xfa]                ; 0048c828
    POP EBP                             ; 0048c82e
    POP EDI                             ; 0048c82f
    POP ESI                             ; 0048c830
    POP EBX                             ; 0048c831
    RET                                 ; 0048c832
    LEA EAX,[EBP + 0xffffdc0e]          ; 0048c833
        ;   Label: LAB_0048c833
    PUSH EAX                            ; 0048c839
    MOV ESI,dword ptr [EBP + 0x10e]     ; 0048c83a
    PUSH ESI                            ; 0048c840
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0048c841
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048c846
    MOV dword ptr [EBX],EAX             ; 0048c849
    JMP 0x0048c7d2                      ; 0048c84b
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xe                            ; 0048c84d
        ;   Label: LAB_0048c84d
    PUSH 0x5be072                       ; 0048c84f | = "activatePuzzle"
    PUSH EBX                            ; 0048c854
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048c855
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048c85a
    TEST EAX,EAX                        ; 0048c85d
    JNZ 0x0048c9e1                      ; 0048c85f
        ;   XREF to: 0048c9e1 (CONDITIONAL_JUMP)  ; LAB_0048c9e1
    MOV AL,byte ptr [EBX + 0xe]         ; 0048c865
    INC AL                              ; 0048c868
    AND EAX,0xff                        ; 0048c86a
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048c86f | DAT_006074b8
    JNZ 0x0048c9e1                      ; 0048c876
        ;   XREF to: 0048c9e1 (CONDITIONAL_JUMP)  ; LAB_0048c9e1
    LEA EAX,[EBX + 0xe]                 ; 0048c87c
    MOV BL,byte ptr [EAX]               ; 0048c87f
        ;   Label: LAB_0048c87f
    XOR ECX,ECX                         ; 0048c881
    INC BL                              ; 0048c883
    MOV CL,BL                           ; 0048c885
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048c887 | DAT_006074b8
    JZ 0x0048c893                       ; 0048c88e
        ;   XREF to: 0048c893 (CONDITIONAL_JUMP)  ; LAB_0048c893
    INC EAX                             ; 0048c890
    JMP 0x0048c87f                      ; 0048c891
        ;   XREF to: 0048c87f (UNCONDITIONAL_JUMP)  ; LAB_0048c87f
    LEA ECX,[EBP + -0x56]               ; 0048c893
        ;   Label: LAB_0048c893
    PUSH ECX                            ; 0048c896
    LEA ECX,[EBP + 0xffffdb0e]          ; 0048c897
    PUSH ECX                            ; 0048c89d
    PUSH 0x5be081                       ; 0048c89e | = "(%[^)])%n"
    MOV EDX,0xffffffff                  ; 0048c8a3
    PUSH EAX                            ; 0048c8a8
    MOV dword ptr [EBP + -0x62],EAX     ; 0048c8a9
    MOV dword ptr [EBP + -0x56],EDX     ; 0048c8ac
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048c8af
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x56]     ; 0048c8b4
    ADD ESP,0x10                        ; 0048c8b7
    CMP ECX,0x3                         ; 0048c8ba
    JL 0x0048c927                       ; 0048c8bd
        ;   XREF to: 0048c927 (CONDITIONAL_JUMP)  ; LAB_0048c927
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048c8bf
    LEA ESI,[EBP + 0xffffdb0e]          ; 0048c8c2
    ADD EBX,ECX                         ; 0048c8c8
    LEA EDI,[EBP + 0xffffdb0e]          ; 0048c8ca
    MOV dword ptr [EBP + -0x62],EBX     ; 0048c8d0
    SUB ECX,ECX                         ; 0048c8d3
    DEC ECX                             ; 0048c8d5
    XOR EAX,EAX                         ; 0048c8d6
    SCASB.REPNE ES:EDI                  ; 0048c8d8
    NOT ECX                             ; 0048c8da
    DEC ECX                             ; 0048c8dc
    MOV EBX,ECX                         ; 0048c8dd
    TEST ECX,ECX                        ; 0048c8df
    JLE 0x0048c8fe                      ; 0048c8e1
        ;   XREF to: 0048c8fe (CONDITIONAL_JUMP)  ; LAB_0048c8fe
    LEA EAX,[EBP + 0xffffdb0e]          ; 0048c8e3
    ADD ECX,EAX                         ; 0048c8e9
    MOV AL,byte ptr [ECX + -0x1]        ; 0048c8eb
        ;   Label: LAB_0048c8eb
    INC AL                              ; 0048c8ee
    AND EAX,0xff                        ; 0048c8f0
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c8f5 | DAT_006074b8
    JNZ 0x0048c93f                      ; 0048c8fc
        ;   XREF to: 0048c93f (CONDITIONAL_JUMP)  ; LAB_0048c93f
    LEA EAX,[ESI + EBX*0x1]             ; 0048c8fe
        ;   Label: LAB_0048c8fe
    LEA EDI,[ESI + 0x1]                 ; 0048c901
    MOV byte ptr [EAX],0x0              ; 0048c904
    MOV AL,byte ptr [ESI]               ; 0048c907
        ;   Label: LAB_0048c907
    INC AL                              ; 0048c909
    AND EAX,0xff                        ; 0048c90b
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c910 | DAT_006074b8
    JZ 0x0048c947                       ; 0048c917
        ;   XREF to: 0048c947 (CONDITIONAL_JUMP)  ; LAB_0048c947
    PUSH EBX                            ; 0048c919
    PUSH EDI                            ; 0048c91a
    PUSH ESI                            ; 0048c91b
    DEC EBX                             ; 0048c91c
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048c91d
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048c922
    JMP 0x0048c907                      ; 0048c925
        ;   XREF to: 0048c907 (UNCONDITIONAL_JUMP)  ; LAB_0048c907
    PUSH 0x5be08b                       ; 0048c927 | = "Error parsing activatePuzzle command"
        ;   Label: LAB_0048c927
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048c92c
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048c931
    LEA ESP,[EBP + 0xfa]                ; 0048c934
    POP EBP                             ; 0048c93a
    POP EDI                             ; 0048c93b
    POP ESI                             ; 0048c93c
    POP EBX                             ; 0048c93d
    RET                                 ; 0048c93e
    DEC EBX                             ; 0048c93f
        ;   Label: LAB_0048c93f
    DEC ECX                             ; 0048c940
    TEST EBX,EBX                        ; 0048c941
    JG 0x0048c8eb                       ; 0048c943
        ;   XREF to: 0048c8eb (CONDITIONAL_JUMP)  ; LAB_0048c8eb
    JMP 0x0048c8fe                      ; 0048c945
        ;   XREF to: 0048c8fe (UNCONDITIONAL_JUMP)  ; LAB_0048c8fe
    MOV EAX,[0x007dff88]                ; 0048c947 | DAT_007dff88
        ;   Label: LAB_0048c947
    XOR ESI,ESI                         ; 0048c94c
    XOR EDI,EDI                         ; 0048c94e
    TEST EAX,EAX                        ; 0048c950
    JLE 0x0048c97f                      ; 0048c952
        ;   XREF to: 0048c97f (CONDITIONAL_JUMP)  ; LAB_0048c97f
    XOR EBX,EBX                         ; 0048c954
    MOV EAX,dword ptr [EBX + 0x7dff8c]  ; 0048c956 | DAT_007dff8c | DAT_007dff90
        ;   Label: LAB_0048c956
    PUSH EAX                            ; 0048c95c
    MOV ECX,dword ptr [EAX]             ; 0048c95d
    CALL dword ptr [ECX + 0x4]          ; 0048c95f
    ADD ESP,0x4                         ; 0048c962
    PUSH EAX                            ; 0048c965
    LEA EAX,[EBP + 0xffffdb0e]          ; 0048c966
    PUSH EAX                            ; 0048c96c
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048c96d
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048c972
    TEST EAX,EAX                        ; 0048c975
    JNZ 0x0048c9b2                      ; 0048c977
        ;   XREF to: 0048c9b2 (CONDITIONAL_JUMP)  ; LAB_0048c9b2
    MOV EDI,dword ptr [EBX + 0x7dff8c]  ; 0048c979 | DAT_007dff8c
    TEST EDI,EDI                        ; 0048c97f
        ;   Label: LAB_0048c97f
    JZ 0x0048c9c2                       ; 0048c981
        ;   XREF to: 0048c9c2 (CONDITIONAL_JUMP)  ; LAB_0048c9c2
    CMP dword ptr [EBP + -0x66],0x0     ; 0048c983
    JZ 0x0048c7d2                       ; 0048c987
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EBX,dword ptr [0x007dffb4]      ; 0048c98d | DAT_007dffb4
    TEST EBX,EBX                        ; 0048c993
    JZ 0x0048c9a2                       ; 0048c995
        ;   XREF to: 0048c9a2 (CONDITIONAL_JUMP)  ; LAB_0048c9a2
    PUSH 0x0                            ; 0048c997
    PUSH EBX                            ; 0048c999
    CALL unkafter_alphabit.cpp_FUN_004119a0 ; 0048c99a
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_004119a0()
    ADD ESP,0x8                         ; 0048c99f
    PUSH 0x1                            ; 0048c9a2
        ;   Label: LAB_0048c9a2
    PUSH EDI                            ; 0048c9a4
    CALL unkafter_alphabit.cpp_FUN_004119a0 ; 0048c9a5
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_004119a0()
    ADD ESP,0x8                         ; 0048c9aa
    JMP 0x0048c7d2                      ; 0048c9ad
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EDX,dword ptr [0x007dff88]      ; 0048c9b2 | DAT_007dff88
        ;   Label: LAB_0048c9b2
    INC ESI                             ; 0048c9b8
    ADD EBX,0x4                         ; 0048c9b9
    CMP ESI,EDX                         ; 0048c9bc
    JL 0x0048c956                       ; 0048c9be
        ;   XREF to: 0048c956 (CONDITIONAL_JUMP)  ; LAB_0048c956
    JMP 0x0048c97f                      ; 0048c9c0
        ;   XREF to: 0048c97f (UNCONDITIONAL_JUMP)  ; LAB_0048c97f
    LEA EAX,[EBP + 0xffffdb0e]          ; 0048c9c2
        ;   Label: LAB_0048c9c2
    PUSH EAX                            ; 0048c9c8
    PUSH 0x5be0b0                       ; 0048c9c9 | = "No such puzzle '%s'"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048c9ce
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048c9d3
    LEA ESP,[EBP + 0xfa]                ; 0048c9d6
    POP EBP                             ; 0048c9dc
    POP EDI                             ; 0048c9dd
    POP ESI                             ; 0048c9de
    POP EBX                             ; 0048c9df
    RET                                 ; 0048c9e0
    PUSH 0x11                           ; 0048c9e1
        ;   Label: LAB_0048c9e1
    PUSH 0x5be0c4                       ; 0048c9e3 | = "addFieldNotesTask"
    PUSH EBX                            ; 0048c9e8
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048c9e9
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048c9ee
    TEST EAX,EAX                        ; 0048c9f1
    JNZ 0x0048cb60                      ; 0048c9f3
        ;   XREF to: 0048cb60 (CONDITIONAL_JUMP)  ; LAB_0048cb60
    MOV AL,byte ptr [EBX + 0x11]        ; 0048c9f9
    INC AL                              ; 0048c9fc
    AND EAX,0xff                        ; 0048c9fe
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048ca03 | DAT_006074b8
    JNZ 0x0048cb60                      ; 0048ca0a
        ;   XREF to: 0048cb60 (CONDITIONAL_JUMP)  ; LAB_0048cb60
    LEA EAX,[EBX + 0x11]                ; 0048ca10
    MOV BL,byte ptr [EAX]               ; 0048ca13
        ;   Label: LAB_0048ca13
    XOR ECX,ECX                         ; 0048ca15
    INC BL                              ; 0048ca17
    MOV CL,BL                           ; 0048ca19
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ca1b | DAT_006074b8
    JZ 0x0048ca27                       ; 0048ca22
        ;   XREF to: 0048ca27 (CONDITIONAL_JUMP)  ; LAB_0048ca27
    INC EAX                             ; 0048ca24
    JMP 0x0048ca13                      ; 0048ca25
        ;   XREF to: 0048ca13 (UNCONDITIONAL_JUMP)  ; LAB_0048ca13
    LEA ECX,[EBP + -0x52]               ; 0048ca27
        ;   Label: LAB_0048ca27
    PUSH ECX                            ; 0048ca2a
    LEA ECX,[EBP + 0xffffd50e]          ; 0048ca2b
    PUSH ECX                            ; 0048ca31
    PUSH 0x5be0d6                       ; 0048ca32 | = "(%[^)])%n"
    MOV EDI,0xffffffff                  ; 0048ca37
    PUSH EAX                            ; 0048ca3c
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ca3d
    MOV dword ptr [EBP + -0x52],EDI     ; 0048ca40
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ca43
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x52]     ; 0048ca48
    ADD ESP,0x10                        ; 0048ca4b
    CMP EAX,0x3                         ; 0048ca4e
    JL 0x0048cabb                       ; 0048ca51
        ;   XREF to: 0048cabb (CONDITIONAL_JUMP)  ; LAB_0048cabb
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048ca53
    LEA ESI,[EBP + 0xffffd50e]          ; 0048ca56
    ADD EDX,EAX                         ; 0048ca5c
    LEA EDI,[EBP + 0xffffd50e]          ; 0048ca5e
    MOV dword ptr [EBP + -0x62],EDX     ; 0048ca64
    SUB ECX,ECX                         ; 0048ca67
    DEC ECX                             ; 0048ca69
    XOR EAX,EAX                         ; 0048ca6a
    SCASB.REPNE ES:EDI                  ; 0048ca6c
    NOT ECX                             ; 0048ca6e
    DEC ECX                             ; 0048ca70
    MOV EBX,ECX                         ; 0048ca71
    TEST ECX,ECX                        ; 0048ca73
    JLE 0x0048ca92                      ; 0048ca75
        ;   XREF to: 0048ca92 (CONDITIONAL_JUMP)  ; LAB_0048ca92
    LEA EAX,[EBP + 0xffffd50e]          ; 0048ca77
    ADD ECX,EAX                         ; 0048ca7d
    MOV AL,byte ptr [ECX + -0x1]        ; 0048ca7f
        ;   Label: LAB_0048ca7f
    INC AL                              ; 0048ca82
    AND EAX,0xff                        ; 0048ca84
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048ca89 | DAT_006074b8
    JNZ 0x0048cad3                      ; 0048ca90
        ;   XREF to: 0048cad3 (CONDITIONAL_JUMP)  ; LAB_0048cad3
    LEA EAX,[ESI + EBX*0x1]             ; 0048ca92
        ;   Label: LAB_0048ca92
    LEA EDI,[ESI + 0x1]                 ; 0048ca95
    MOV byte ptr [EAX],0x0              ; 0048ca98
    MOV AL,byte ptr [ESI]               ; 0048ca9b
        ;   Label: LAB_0048ca9b
    INC AL                              ; 0048ca9d
    AND EAX,0xff                        ; 0048ca9f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048caa4 | DAT_006074b8
    JZ 0x0048cadb                       ; 0048caab
        ;   XREF to: 0048cadb (CONDITIONAL_JUMP)  ; LAB_0048cadb
    PUSH EBX                            ; 0048caad
    PUSH EDI                            ; 0048caae
    PUSH ESI                            ; 0048caaf
    DEC EBX                             ; 0048cab0
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048cab1
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048cab6
    JMP 0x0048ca9b                      ; 0048cab9
        ;   XREF to: 0048ca9b (UNCONDITIONAL_JUMP)  ; LAB_0048ca9b
    PUSH 0x5be0e0                       ; 0048cabb | = "Error parsing addFieldNotesTask command"
        ;   Label: LAB_0048cabb
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048cac0
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048cac5
    LEA ESP,[EBP + 0xfa]                ; 0048cac8
    POP EBP                             ; 0048cace
    POP EDI                             ; 0048cacf
    POP ESI                             ; 0048cad0
    POP EBX                             ; 0048cad1
    RET                                 ; 0048cad2
    DEC EBX                             ; 0048cad3
        ;   Label: LAB_0048cad3
    DEC ECX                             ; 0048cad4
    TEST EBX,EBX                        ; 0048cad5
    JG 0x0048ca7f                       ; 0048cad7
        ;   XREF to: 0048ca7f (CONDITIONAL_JUMP)  ; LAB_0048ca7f
    JMP 0x0048ca92                      ; 0048cad9
        ;   XREF to: 0048ca92 (UNCONDITIONAL_JUMP)  ; LAB_0048ca92
    CMP dword ptr [0x01c734ac],0x0      ; 0048cadb | DAT_01c734ac
        ;   Label: LAB_0048cadb
    JNZ 0x0048cb3d                      ; 0048cae2
        ;   XREF to: 0048cb3d (CONDITIONAL_JUMP)  ; LAB_0048cb3d
    LEA EAX,[EBP + 0xffffd50e]          ; 0048cae4
    PUSH EAX                            ; 0048caea
    MOV EBX,dword ptr [0x005fe4b0]      ; 0048caeb | g_CFieldNotesPtr
    PUSH EBX                            ; 0048caf1 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10 ; 0048caf2
        ;   XREF to: 004aba10 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 0048caf7
    JMP 0x0048c7d2                      ; 0048cafa
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffd50e]          ; 0048caff
        ;   Label: caseD_0
    PUSH EAX                            ; 0048cb05
    PUSH 0x5be108                       ; 0048cb06 | = "Field notes entry '%s' is not a task"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048cb0b
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048cb10
    LEA ESP,[EBP + 0xfa]                ; 0048cb13
    POP EBP                             ; 0048cb19
    POP EDI                             ; 0048cb1a
    POP ESI                             ; 0048cb1b
    POP EBX                             ; 0048cb1c
    RET                                 ; 0048cb1d
    LEA EAX,[EBP + 0xffffd50e]          ; 0048cb1e
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 0048cb24
    PUSH 0x5be12d                       ; 0048cb25 | = "Field notes entry '%s' not found"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048cb2a
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048cb2f
    LEA ESP,[EBP + 0xfa]                ; 0048cb32
    POP EBP                             ; 0048cb38
    POP EDI                             ; 0048cb39
    POP ESI                             ; 0048cb3a
    POP EBX                             ; 0048cb3b
    RET                                 ; 0048cb3c
    LEA EAX,[EBP + 0xffffd50e]          ; 0048cb3d
        ;   Label: LAB_0048cb3d
    PUSH EAX                            ; 0048cb43
    MOV ESI,dword ptr [0x005fe4b0]      ; 0048cb44 | g_CFieldNotesPtr
    PUSH ESI                            ; 0048cb4a | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004abb30 ; 0048cb4b
        ;   XREF to: 004abb30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abb30()
    INC EAX                             ; 0048cb50
    ADD ESP,0x8                         ; 0048cb51
    CMP EAX,0x7                         ; 0048cb54
    JA 0x0048caff                       ; 0048cb57
        ;   XREF to: 0048caff (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x48c238]  ; 0048cb59 | caseD_ffffffff | caseD_6 | switchdataD_0048c238
        ;   Label: switchD
    PUSH 0x12                           ; 0048cb60
        ;   Label: LAB_0048cb60
    PUSH 0x5be14e                       ; 0048cb62 | = "advanceLightFilter"
    PUSH EBX                            ; 0048cb67
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048cb68
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048cb6d
    TEST EAX,EAX                        ; 0048cb70
    JNZ 0x0048cc5e                      ; 0048cb72
        ;   XREF to: 0048cc5e (CONDITIONAL_JUMP)  ; LAB_0048cc5e
    MOV AL,byte ptr [EBX + 0x12]        ; 0048cb78
    INC AL                              ; 0048cb7b
    AND EAX,0xff                        ; 0048cb7d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048cb82 | DAT_006074b8
    JNZ 0x0048cc5e                      ; 0048cb89
        ;   XREF to: 0048cc5e (CONDITIONAL_JUMP)  ; LAB_0048cc5e
    LEA EAX,[EBX + 0x12]                ; 0048cb8f
    MOV BL,byte ptr [EAX]               ; 0048cb92
        ;   Label: LAB_0048cb92
    XOR ECX,ECX                         ; 0048cb94
    INC BL                              ; 0048cb96
    MOV CL,BL                           ; 0048cb98
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048cb9a | DAT_006074b8
    JZ 0x0048cba6                       ; 0048cba1
        ;   XREF to: 0048cba6 (CONDITIONAL_JUMP)  ; LAB_0048cba6
    INC EAX                             ; 0048cba3
    JMP 0x0048cb92                      ; 0048cba4
        ;   XREF to: 0048cb92 (UNCONDITIONAL_JUMP)  ; LAB_0048cb92
    PUSH 0x1                            ; 0048cba6
        ;   Label: LAB_0048cba6
    PUSH 0xc8                           ; 0048cba8
    MOV dword ptr [EBP + -0x62],EAX     ; 0048cbad
    LEA EAX,[EBP + 0xffffe486]          ; 0048cbb0
    PUSH EAX                            ; 0048cbb6
    LEA EAX,[EBP + -0x62]               ; 0048cbb7
    PUSH EAX                            ; 0048cbba
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048cbbb
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048cbc0
    TEST EAX,EAX                        ; 0048cbc3
    JNZ 0x0048c717                      ; 0048cbc5
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    LEA EAX,[EBP + -0x4a]               ; 0048cbcb
    PUSH EAX                            ; 0048cbce
    LEA EAX,[EBP + -0x4e]               ; 0048cbcf
    PUSH EAX                            ; 0048cbd2
    LEA EAX,[EBP + 0xffffe486]          ; 0048cbd3
    PUSH EAX                            ; 0048cbd9
    MOV EDI,dword ptr [0x00603b28]      ; 0048cbda | g_CDemonSetPtr
    PUSH EDI                            ; 0048cbe0 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0 ; 0048cbe1
        ;   XREF to: 0053b3b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0048cbe6
    ADD ESP,0x10                        ; 0048cbe9
    TEST EAX,EAX                        ; 0048cbec
    JZ 0x0048cc3f                       ; 0048cbee
        ;   XREF to: 0048cc3f (CONDITIONAL_JUMP)  ; LAB_0048cc3f
    CMP dword ptr [EBP + -0x66],0x0     ; 0048cbf0
    JZ 0x0048c7d2                       ; 0048cbf4
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBP + -0x4a],0x0     ; 0048cbfa
    JNZ 0x0048cc2a                      ; 0048cbfe
        ;   XREF to: 0048cc2a (CONDITIONAL_JUMP)  ; LAB_0048cc2a
    LEA EAX,[EBP + 0xffffe486]          ; 0048cc00
    PUSH EAX                            ; 0048cc06
    MOV EBX,0x5be17d                    ; 0048cc07 | = "..\\core\\event.cpp"
    MOV ESI,0x32e                       ; 0048cc0c
    PUSH 0x5be18f                       ; 0048cc11 | = "Can't find CDemonLight for light %s i..."
    MOV dword ptr [0x01d71de0],EBX      ; 0048cc16 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0048cc1c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0048cc22
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0048cc27
    MOV EDI,dword ptr [EBP + -0x4a]     ; 0048cc2a
        ;   Label: LAB_0048cc2a
    PUSH EDI                            ; 0048cc2d
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0048cc2e
    PUSH EAX                            ; 0048cc31
    CALL core_setutil.cpp_C3DSLight_advanceFilter_FUN_00542d20 ; 0048cc32
        ;   XREF to: 00542d20 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSLight_advanceFilter_FUN_00542d20()
    ADD ESP,0x8                         ; 0048cc37
    JMP 0x0048c7d2                      ; 0048cc3a
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffe486]          ; 0048cc3f
        ;   Label: LAB_0048cc3f
    PUSH EAX                            ; 0048cc45
    PUSH 0x5be161                       ; 0048cc46 | = "SpotLight %s doesn't exist."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048cc4b
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048cc50
    LEA ESP,[EBP + 0xfa]                ; 0048cc53
    POP EBP                             ; 0048cc59
    POP EDI                             ; 0048cc5a
    POP ESI                             ; 0048cc5b
    POP EBX                             ; 0048cc5c
    RET                                 ; 0048cc5d
    PUSH 0xe                            ; 0048cc5e
        ;   Label: LAB_0048cc5e
    PUSH 0x5be1d6                       ; 0048cc60 | = "beginCarryItem"
    PUSH EBX                            ; 0048cc65
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048cc66
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048cc6b
    TEST EAX,EAX                        ; 0048cc6e
    JNZ 0x0048cf09                      ; 0048cc70
        ;   XREF to: 0048cf09 (CONDITIONAL_JUMP)  ; LAB_0048cf09
    MOV AL,byte ptr [EBX + 0xe]         ; 0048cc76
    INC AL                              ; 0048cc79
    AND EAX,0xff                        ; 0048cc7b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048cc80 | DAT_006074b8
    JNZ 0x0048cf09                      ; 0048cc87
        ;   XREF to: 0048cf09 (CONDITIONAL_JUMP)  ; LAB_0048cf09
    LEA EAX,[EBX + 0xe]                 ; 0048cc8d
    MOV BL,byte ptr [EAX]               ; 0048cc90
        ;   Label: LAB_0048cc90
    XOR ECX,ECX                         ; 0048cc92
    INC BL                              ; 0048cc94
    MOV CL,BL                           ; 0048cc96
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048cc98 | DAT_006074b8
    JZ 0x0048cca4                       ; 0048cc9f
        ;   XREF to: 0048cca4 (CONDITIONAL_JUMP)  ; LAB_0048cca4
    INC EAX                             ; 0048cca1
    JMP 0x0048cc90                      ; 0048cca2
        ;   XREF to: 0048cc90 (UNCONDITIONAL_JUMP)  ; LAB_0048cc90
    LEA ECX,[EBP + -0x46]               ; 0048cca4
        ;   Label: LAB_0048cca4
    PUSH ECX                            ; 0048cca7
    LEA ECX,[EBP + 0xffffff56]          ; 0048cca8
    PUSH ECX                            ; 0048ccae
    LEA ECX,[EBP + 0xffffff5a]          ; 0048ccaf
    PUSH ECX                            ; 0048ccb5
    LEA ECX,[EBP + 0xffffff52]          ; 0048ccb6
    PUSH ECX                            ; 0048ccbc
    LEA ECX,[EBP + 0xffffff66]          ; 0048ccbd
    PUSH ECX                            ; 0048ccc3
    LEA ECX,[EBP + 0xffffff62]          ; 0048ccc4
    PUSH ECX                            ; 0048ccca
    LEA ECX,[EBP + 0xffffff5e]          ; 0048cccb
    PUSH ECX                            ; 0048ccd1
    LEA ECX,[EBP + 0xa6]                ; 0048ccd2
    PUSH ECX                            ; 0048ccd8
    LEA ECX,[EBP + 0xffffed1e]          ; 0048ccd9
    PUSH ECX                            ; 0048ccdf
    LEA ECX,[EBP + 0xfffffb2e]          ; 0048cce0
    PUSH ECX                            ; 0048cce6
    PUSH 0x5be1e5                       ; 0048cce7 | = "( %[^,], %[^,], %d, %f , %f , %f , %f..."
    MOV EDX,0xffffffff                  ; 0048ccec
    PUSH EAX                            ; 0048ccf1
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ccf2
    MOV dword ptr [EBP + -0x46],EDX     ; 0048ccf5
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ccf8
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x46]     ; 0048ccfd
    ADD ESP,0x30                        ; 0048cd00
    TEST ECX,ECX                        ; 0048cd03
    JL 0x0048cd6f                       ; 0048cd05
        ;   XREF to: 0048cd6f (CONDITIONAL_JUMP)  ; LAB_0048cd6f
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048cd07
    LEA ESI,[EBP + 0xffffed1e]          ; 0048cd0a
    ADD EBX,ECX                         ; 0048cd10
    LEA EDI,[EBP + 0xffffed1e]          ; 0048cd12
    MOV dword ptr [EBP + -0x62],EBX     ; 0048cd18
    SUB ECX,ECX                         ; 0048cd1b
    DEC ECX                             ; 0048cd1d
    XOR EAX,EAX                         ; 0048cd1e
    SCASB.REPNE ES:EDI                  ; 0048cd20
    NOT ECX                             ; 0048cd22
    DEC ECX                             ; 0048cd24
    MOV EBX,ECX                         ; 0048cd25
    TEST ECX,ECX                        ; 0048cd27
    JLE 0x0048cd46                      ; 0048cd29
        ;   XREF to: 0048cd46 (CONDITIONAL_JUMP)  ; LAB_0048cd46
    LEA EAX,[EBP + 0xffffed1e]          ; 0048cd2b
    ADD ECX,EAX                         ; 0048cd31
    MOV AL,byte ptr [ECX + -0x1]        ; 0048cd33
        ;   Label: LAB_0048cd33
    INC AL                              ; 0048cd36
    AND EAX,0xff                        ; 0048cd38
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048cd3d | DAT_006074b8
    JNZ 0x0048cd87                      ; 0048cd44
        ;   XREF to: 0048cd87 (CONDITIONAL_JUMP)  ; LAB_0048cd87
    LEA EAX,[ESI + EBX*0x1]             ; 0048cd46
        ;   Label: LAB_0048cd46
    LEA EDI,[ESI + 0x1]                 ; 0048cd49
    MOV byte ptr [EAX],0x0              ; 0048cd4c
    MOV AL,byte ptr [ESI]               ; 0048cd4f
        ;   Label: LAB_0048cd4f
    INC AL                              ; 0048cd51
    AND EAX,0xff                        ; 0048cd53
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048cd58 | DAT_006074b8
    JZ 0x0048cd8f                       ; 0048cd5f
        ;   XREF to: 0048cd8f (CONDITIONAL_JUMP)  ; LAB_0048cd8f
    PUSH EBX                            ; 0048cd61
    PUSH EDI                            ; 0048cd62
    PUSH ESI                            ; 0048cd63
    DEC EBX                             ; 0048cd64
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048cd65
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048cd6a
    JMP 0x0048cd4f                      ; 0048cd6d
        ;   XREF to: 0048cd4f (UNCONDITIONAL_JUMP)  ; LAB_0048cd4f
    PUSH 0x5be219                       ; 0048cd6f | = "Error parsing beginCarryItem() parms"
        ;   Label: LAB_0048cd6f
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048cd74
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048cd79
    LEA ESP,[EBP + 0xfa]                ; 0048cd7c
    POP EBP                             ; 0048cd82
    POP EDI                             ; 0048cd83
    POP ESI                             ; 0048cd84
    POP EBX                             ; 0048cd85
    RET                                 ; 0048cd86
    DEC EBX                             ; 0048cd87
        ;   Label: LAB_0048cd87
    DEC ECX                             ; 0048cd88
    TEST EBX,EBX                        ; 0048cd89
    JG 0x0048cd33                       ; 0048cd8b
        ;   XREF to: 0048cd33 (CONDITIONAL_JUMP)  ; LAB_0048cd33
    JMP 0x0048cd46                      ; 0048cd8d
        ;   XREF to: 0048cd46 (UNCONDITIONAL_JUMP)  ; LAB_0048cd46
    LEA EDI,[EBP + 0xfffffb2e]          ; 0048cd8f
        ;   Label: LAB_0048cd8f
    LEA ESI,[EBP + 0xfffffb2e]          ; 0048cd95
    SUB ECX,ECX                         ; 0048cd9b
    DEC ECX                             ; 0048cd9d
    XOR EAX,EAX                         ; 0048cd9e
    SCASB.REPNE ES:EDI                  ; 0048cda0
    NOT ECX                             ; 0048cda2
    DEC ECX                             ; 0048cda4
    MOV EBX,ECX                         ; 0048cda5
    TEST ECX,ECX                        ; 0048cda7
    JLE 0x0048cdc6                      ; 0048cda9
        ;   XREF to: 0048cdc6 (CONDITIONAL_JUMP)  ; LAB_0048cdc6
    LEA EAX,[EBP + 0xfffffb2e]          ; 0048cdab
    ADD ECX,EAX                         ; 0048cdb1
    MOV AL,byte ptr [ECX + -0x1]        ; 0048cdb3
        ;   Label: LAB_0048cdb3
    INC AL                              ; 0048cdb6
    AND EAX,0xff                        ; 0048cdb8
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048cdbd | DAT_006074b8
    JNZ 0x0048cdef                      ; 0048cdc4
        ;   XREF to: 0048cdef (CONDITIONAL_JUMP)  ; LAB_0048cdef
    LEA EAX,[ESI + EBX*0x1]             ; 0048cdc6
        ;   Label: LAB_0048cdc6
    LEA EDI,[ESI + 0x1]                 ; 0048cdc9
    MOV byte ptr [EAX],0x0              ; 0048cdcc
    MOV AL,byte ptr [ESI]               ; 0048cdcf
        ;   Label: LAB_0048cdcf
    INC AL                              ; 0048cdd1
    AND EAX,0xff                        ; 0048cdd3
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048cdd8 | DAT_006074b8
    JZ 0x0048cdf7                       ; 0048cddf
        ;   XREF to: 0048cdf7 (CONDITIONAL_JUMP)  ; LAB_0048cdf7
    PUSH EBX                            ; 0048cde1
    PUSH EDI                            ; 0048cde2
    PUSH ESI                            ; 0048cde3
    DEC EBX                             ; 0048cde4
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048cde5
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048cdea
    JMP 0x0048cdcf                      ; 0048cded
        ;   XREF to: 0048cdcf (UNCONDITIONAL_JUMP)  ; LAB_0048cdcf
    DEC EBX                             ; 0048cdef
        ;   Label: LAB_0048cdef
    DEC ECX                             ; 0048cdf0
    TEST EBX,EBX                        ; 0048cdf1
    JG 0x0048cdb3                       ; 0048cdf3
        ;   XREF to: 0048cdb3 (CONDITIONAL_JUMP)  ; LAB_0048cdb3
    JMP 0x0048cdc6                      ; 0048cdf5
        ;   XREF to: 0048cdc6 (UNCONDITIONAL_JUMP)  ; LAB_0048cdc6
    MOV ESI,dword ptr [EBP + 0xa6]      ; 0048cdf7
        ;   Label: LAB_0048cdf7
    TEST ESI,ESI                        ; 0048cdfd
    JL 0x0048ce6a                       ; 0048cdff
        ;   XREF to: 0048ce6a (CONDITIONAL_JUMP)  ; LAB_0048ce6a
    CMP ESI,0x2                         ; 0048ce01
    JGE 0x0048ce6a                      ; 0048ce04
        ;   XREF to: 0048ce6a (CONDITIONAL_JUMP)  ; LAB_0048ce6a
    PUSH 0x7e2cb4                       ; 0048ce06 | g_CCharacterClassInfo
    MOV EAX,[0x007e2cec]                ; 0048ce0b | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0048ce10
    LEA EAX,[EBP + 0xfffffb2e]          ; 0048ce11
    PUSH EAX                            ; 0048ce17
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048ce18
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV EBX,EAX                         ; 0048ce1d
    ADD ESP,0xc                         ; 0048ce1f
    MOV ESI,EAX                         ; 0048ce22
    TEST EAX,EAX                        ; 0048ce24
    JZ 0x0048c30e                       ; 0048ce26
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048ce2c | DAT_005df604
    JNZ 0x0048ce89                      ; 0048ce32
        ;   XREF to: 0048ce89 (CONDITIONAL_JUMP)  ; LAB_0048ce89
    XOR EDI,EDI                         ; 0048ce34
    MOV dword ptr [EBP + -0x66],EDI     ; 0048ce36
    PUSH 0x7df978                       ; 0048ce39 | g_CDemonActorClassInfo
        ;   Label: LAB_0048ce39
    MOV EAX,[0x007df9b0]                ; 0048ce3e | g_CDemonActorClassInfo.name_hash
    PUSH EAX                            ; 0048ce43
    LEA EAX,[EBP + 0xffffed1e]          ; 0048ce44
    PUSH EAX                            ; 0048ce4a
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048ce4b
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV EBX,EAX                         ; 0048ce50
    ADD ESP,0xc                         ; 0048ce52
    TEST EAX,EAX                        ; 0048ce55
    JZ 0x0048c30e                       ; 0048ce57
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048ce5d | DAT_005df604
    JNZ 0x0048cec3                      ; 0048ce63
        ;   XREF to: 0048cec3 (CONDITIONAL_JUMP)  ; LAB_0048cec3
    JMP 0x0048c7d2                      ; 0048ce65
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,dword ptr [EBP + 0xa6]      ; 0048ce6a
        ;   Label: LAB_0048ce6a
    PUSH ESI                            ; 0048ce70
    PUSH 0x5be23e                       ; 0048ce71 | = "Invalid hand index: %d"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ce76
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048ce7b
    LEA ESP,[EBP + 0xfa]                ; 0048ce7e
    POP EBP                             ; 0048ce84
    POP EDI                             ; 0048ce85
    POP ESI                             ; 0048ce86
    POP EBX                             ; 0048ce87
    RET                                 ; 0048ce88
    MOV EAX,dword ptr [EBP + 0xa6]      ; 0048ce89
        ;   Label: LAB_0048ce89
    SHL EAX,0x3                         ; 0048ce8f
    MOV ECX,EAX                         ; 0048ce92
    SHL EAX,0x4                         ; 0048ce94
    SUB EAX,ECX                         ; 0048ce97
    CMP dword ptr [EBX + EAX*0x1 + 0x25a8],0x0 ; 0048ce99
    JGE 0x0048ce39                      ; 0048cea1
        ;   XREF to: 0048ce39 (CONDITIONAL_JUMP)  ; LAB_0048ce39
    MOV ESI,dword ptr [EBP + 0xa6]      ; 0048cea3
    PUSH ESI                            ; 0048cea9
    PUSH EBX                            ; 0048ceaa
    PUSH 0x5be255                       ; 0048ceab | = "%s doesn't have hand %d"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ceb0
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0xc                         ; 0048ceb5
    LEA ESP,[EBP + 0xfa]                ; 0048ceb8
    POP EBP                             ; 0048cebe
    POP EDI                             ; 0048cebf
    POP ESI                             ; 0048cec0
    POP EBX                             ; 0048cec1
    RET                                 ; 0048cec2
    CMP dword ptr [EBP + -0x66],0x0     ; 0048cec3
        ;   Label: LAB_0048cec3
    JZ 0x0048c7d2                       ; 0048cec7
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffff52]          ; 0048cecd
    PUSH EAX                            ; 0048ced3
    LEA EAX,[EBP + 0xffffff5e]          ; 0048ced4
    PUSH EAX                            ; 0048ceda
    LEA EAX,[EBP + 0xfffffe4e]          ; 0048cedb
    PUSH EAX                            ; 0048cee1
    CALL core_xform.cpp_FUN_00583940    ; 0048cee2
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0048cee7
    LEA EAX,[EBP + 0xfffffe4e]          ; 0048ceea
    PUSH EAX                            ; 0048cef0
    PUSH 0x0                            ; 0048cef1
    PUSH EBX                            ; 0048cef3
    MOV EBX,dword ptr [EBP + 0xa6]      ; 0048cef4
    PUSH EBX                            ; 0048cefa
    PUSH ESI                            ; 0048cefb
    CALL core_charactr.cpp_FUN_004319d0 ; 0048cefc
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 0048cf01
    JMP 0x0048c7d2                      ; 0048cf04
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x16                           ; 0048cf09
        ;   Label: LAB_0048cf09
    PUSH 0x5be26d                       ; 0048cf0b | = "completeFieldNotesTask"
    PUSH EBX                            ; 0048cf10
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048cf11
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048cf16
    TEST EAX,EAX                        ; 0048cf19
    JNZ 0x0048d088                      ; 0048cf1b
        ;   XREF to: 0048d088 (CONDITIONAL_JUMP)  ; LAB_0048d088
    MOV AL,byte ptr [EBX + 0x16]        ; 0048cf21
    INC AL                              ; 0048cf24
    AND EAX,0xff                        ; 0048cf26
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048cf2b | DAT_006074b8
    JNZ 0x0048d088                      ; 0048cf32
        ;   XREF to: 0048d088 (CONDITIONAL_JUMP)  ; LAB_0048d088
    LEA EAX,[EBX + 0x16]                ; 0048cf38
    MOV BL,byte ptr [EAX]               ; 0048cf3b
        ;   Label: LAB_0048cf3b
    XOR ECX,ECX                         ; 0048cf3d
    INC BL                              ; 0048cf3f
    MOV CL,BL                           ; 0048cf41
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048cf43 | DAT_006074b8
    JZ 0x0048cf4f                       ; 0048cf4a
        ;   XREF to: 0048cf4f (CONDITIONAL_JUMP)  ; LAB_0048cf4f
    INC EAX                             ; 0048cf4c
    JMP 0x0048cf3b                      ; 0048cf4d
        ;   XREF to: 0048cf3b (UNCONDITIONAL_JUMP)  ; LAB_0048cf3b
    LEA ECX,[EBP + -0x42]               ; 0048cf4f
        ;   Label: LAB_0048cf4f
    PUSH ECX                            ; 0048cf52
    LEA ECX,[EBP + 0xffffd40e]          ; 0048cf53
    PUSH ECX                            ; 0048cf59
    PUSH 0x5be284                       ; 0048cf5a | = "(%[^)])%n"
    MOV EDI,0xffffffff                  ; 0048cf5f
    PUSH EAX                            ; 0048cf64
    MOV dword ptr [EBP + -0x62],EAX     ; 0048cf65
    MOV dword ptr [EBP + -0x42],EDI     ; 0048cf68
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048cf6b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x42]     ; 0048cf70
    ADD ESP,0x10                        ; 0048cf73
    CMP EAX,0x3                         ; 0048cf76
    JL 0x0048cfe3                       ; 0048cf79
        ;   XREF to: 0048cfe3 (CONDITIONAL_JUMP)  ; LAB_0048cfe3
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048cf7b
    LEA ESI,[EBP + 0xffffd40e]          ; 0048cf7e
    ADD EDX,EAX                         ; 0048cf84
    LEA EDI,[EBP + 0xffffd40e]          ; 0048cf86
    MOV dword ptr [EBP + -0x62],EDX     ; 0048cf8c
    SUB ECX,ECX                         ; 0048cf8f
    DEC ECX                             ; 0048cf91
    XOR EAX,EAX                         ; 0048cf92
    SCASB.REPNE ES:EDI                  ; 0048cf94
    NOT ECX                             ; 0048cf96
    DEC ECX                             ; 0048cf98
    MOV EBX,ECX                         ; 0048cf99
    TEST ECX,ECX                        ; 0048cf9b
    JLE 0x0048cfba                      ; 0048cf9d
        ;   XREF to: 0048cfba (CONDITIONAL_JUMP)  ; LAB_0048cfba
    LEA EAX,[EBP + 0xffffd40e]          ; 0048cf9f
    ADD ECX,EAX                         ; 0048cfa5
    MOV AL,byte ptr [ECX + -0x1]        ; 0048cfa7
        ;   Label: LAB_0048cfa7
    INC AL                              ; 0048cfaa
    AND EAX,0xff                        ; 0048cfac
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048cfb1 | DAT_006074b8
    JNZ 0x0048cffb                      ; 0048cfb8
        ;   XREF to: 0048cffb (CONDITIONAL_JUMP)  ; LAB_0048cffb
    LEA EAX,[ESI + EBX*0x1]             ; 0048cfba
        ;   Label: LAB_0048cfba
    LEA EDI,[ESI + 0x1]                 ; 0048cfbd
    MOV byte ptr [EAX],0x0              ; 0048cfc0
    MOV AL,byte ptr [ESI]               ; 0048cfc3
        ;   Label: LAB_0048cfc3
    INC AL                              ; 0048cfc5
    AND EAX,0xff                        ; 0048cfc7
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048cfcc | DAT_006074b8
    JZ 0x0048d003                       ; 0048cfd3
        ;   XREF to: 0048d003 (CONDITIONAL_JUMP)  ; LAB_0048d003
    PUSH EBX                            ; 0048cfd5
    PUSH EDI                            ; 0048cfd6
    PUSH ESI                            ; 0048cfd7
    DEC EBX                             ; 0048cfd8
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048cfd9
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048cfde
    JMP 0x0048cfc3                      ; 0048cfe1
        ;   XREF to: 0048cfc3 (UNCONDITIONAL_JUMP)  ; LAB_0048cfc3
    PUSH 0x5be28e                       ; 0048cfe3 | = "Error parsing completeFieldNotesTask ..."
        ;   Label: LAB_0048cfe3
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048cfe8
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048cfed
    LEA ESP,[EBP + 0xfa]                ; 0048cff0
    POP EBP                             ; 0048cff6
    POP EDI                             ; 0048cff7
    POP ESI                             ; 0048cff8
    POP EBX                             ; 0048cff9
    RET                                 ; 0048cffa
    DEC EBX                             ; 0048cffb
        ;   Label: LAB_0048cffb
    DEC ECX                             ; 0048cffc
    TEST EBX,EBX                        ; 0048cffd
    JG 0x0048cfa7                       ; 0048cfff
        ;   XREF to: 0048cfa7 (CONDITIONAL_JUMP)  ; LAB_0048cfa7
    JMP 0x0048cfba                      ; 0048d001
        ;   XREF to: 0048cfba (UNCONDITIONAL_JUMP)  ; LAB_0048cfba
    CMP dword ptr [0x01c734ac],0x0      ; 0048d003 | DAT_01c734ac
        ;   Label: LAB_0048d003
    JNZ 0x0048d065                      ; 0048d00a
        ;   XREF to: 0048d065 (CONDITIONAL_JUMP)  ; LAB_0048d065
    LEA EAX,[EBP + 0xffffd40e]          ; 0048d00c
    PUSH EAX                            ; 0048d012
    MOV EBX,dword ptr [0x005fe4b0]      ; 0048d013 | g_CFieldNotesPtr
    PUSH EBX                            ; 0048d019 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004abcb0 ; 0048d01a
        ;   XREF to: 004abcb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004abcb0(CFieldNotes * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 0048d01f
    JMP 0x0048c7d2                      ; 0048d022
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffd40e]          ; 0048d027
        ;   Label: caseD_0
    PUSH EAX                            ; 0048d02d
    PUSH 0x5be2bb                       ; 0048d02e | = "Field notes entry '%s' is not a task"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d033
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048d038
    LEA ESP,[EBP + 0xfa]                ; 0048d03b
    POP EBP                             ; 0048d041
    POP EDI                             ; 0048d042
    POP ESI                             ; 0048d043
    POP EBX                             ; 0048d044
    RET                                 ; 0048d045
    LEA EAX,[EBP + 0xffffd40e]          ; 0048d046
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 0048d04c
    PUSH 0x5be2e0                       ; 0048d04d | = "Field notes entry '%s' not found"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d052
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048d057
    LEA ESP,[EBP + 0xfa]                ; 0048d05a
    POP EBP                             ; 0048d060
    POP EDI                             ; 0048d061
    POP ESI                             ; 0048d062
    POP EBX                             ; 0048d063
    RET                                 ; 0048d064
    LEA EAX,[EBP + 0xffffd40e]          ; 0048d065
        ;   Label: LAB_0048d065
    PUSH EAX                            ; 0048d06b
    MOV ESI,dword ptr [0x005fe4b0]      ; 0048d06c | g_CFieldNotesPtr
    PUSH ESI                            ; 0048d072 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004abb30 ; 0048d073
        ;   XREF to: 004abb30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abb30()
    INC EAX                             ; 0048d078
    ADD ESP,0x8                         ; 0048d079
    CMP EAX,0x7                         ; 0048d07c
    JA 0x0048d046                       ; 0048d07f
        ;   XREF to: 0048d046 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x48c258]  ; 0048d081 | caseD_ffffffff | caseD_6 | switchdataD_0048c258
        ;   Label: switchD
    PUSH 0xf                            ; 0048d088
        ;   Label: LAB_0048d088
    PUSH 0x5be301                       ; 0048d08a | = "createExplosion"
    PUSH EBX                            ; 0048d08f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048d090
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048d095
    TEST EAX,EAX                        ; 0048d098
    JNZ 0x0048d341                      ; 0048d09a
        ;   XREF to: 0048d341 (CONDITIONAL_JUMP)  ; LAB_0048d341
    MOV AL,byte ptr [EBX + 0xf]         ; 0048d0a0
    INC AL                              ; 0048d0a3
    AND EAX,0xff                        ; 0048d0a5
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048d0aa | DAT_006074b8
    JNZ 0x0048d341                      ; 0048d0b1
        ;   XREF to: 0048d341 (CONDITIONAL_JUMP)  ; LAB_0048d341
    LEA EAX,[EBX + 0xf]                 ; 0048d0b7
    MOV BL,byte ptr [EAX]               ; 0048d0ba
        ;   Label: LAB_0048d0ba
    XOR ECX,ECX                         ; 0048d0bc
    INC BL                              ; 0048d0be
    MOV CL,BL                           ; 0048d0c0
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d0c2 | DAT_006074b8
    JZ 0x0048d0ce                       ; 0048d0c9
        ;   XREF to: 0048d0ce (CONDITIONAL_JUMP)  ; LAB_0048d0ce
    INC EAX                             ; 0048d0cb
    JMP 0x0048d0ba                      ; 0048d0cc
        ;   XREF to: 0048d0ba (UNCONDITIONAL_JUMP)  ; LAB_0048d0ba
    LEA ECX,[EBP + -0x3e]               ; 0048d0ce
        ;   Label: LAB_0048d0ce
    PUSH ECX                            ; 0048d0d1
    LEA ECX,[EBP + -0x3a]               ; 0048d0d2
    PUSH ECX                            ; 0048d0d5
    PUSH 0x5be311                       ; 0048d0d6 | = "( %f , %n"
    MOV EDI,0xffffffff                  ; 0048d0db
    PUSH EAX                            ; 0048d0e0
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d0e1
    MOV dword ptr [EBP + -0x3e],EDI     ; 0048d0e4
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d0e7
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0048d0ec
    ADD ESP,0x10                        ; 0048d0ef
    TEST EAX,EAX                        ; 0048d0f2
    JL 0x0048d157                       ; 0048d0f4
        ;   XREF to: 0048d157 (CONDITIONAL_JUMP)  ; LAB_0048d157
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048d0f6
    ADD EDX,EAX                         ; 0048d0f9
    LEA EAX,[EBP + -0x3e]               ; 0048d0fb
    PUSH EAX                            ; 0048d0fe
    LEA EAX,[EBP + 0xffffff42]          ; 0048d0ff
    PUSH EAX                            ; 0048d105
    LEA EAX,[EBP + 0xffffff3e]          ; 0048d106
    PUSH EAX                            ; 0048d10c
    LEA EAX,[EBP + 0xffffff3a]          ; 0048d10d
    PUSH EAX                            ; 0048d113
    PUSH 0x5be341                       ; 0048d114 | = "%f , %f , %f %n"
    PUSH EDX                            ; 0048d119
    MOV dword ptr [EBP + -0x3e],EDI     ; 0048d11a
    MOV dword ptr [EBP + -0x62],EDX     ; 0048d11d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d120
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ESI,dword ptr [EBP + -0x3e]     ; 0048d125
    ADD ESP,0x18                        ; 0048d128
    TEST ESI,ESI                        ; 0048d12b
    JL 0x0048d16f                       ; 0048d12d
        ;   XREF to: 0048d16f (CONDITIONAL_JUMP)  ; LAB_0048d16f
    MOV ESI,dword ptr [EBP + -0x3e]     ; 0048d12f
        ;   Label: LAB_0048d12f
    TEST ESI,ESI                        ; 0048d132
    JL 0x0048d25f                       ; 0048d134
        ;   XREF to: 0048d25f (CONDITIONAL_JUMP)  ; LAB_0048d25f
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048d13a
    ADD EAX,ESI                         ; 0048d13d
    MOV BL,byte ptr [EAX]               ; 0048d13f
        ;   Label: LAB_0048d13f
    XOR ECX,ECX                         ; 0048d141
    INC BL                              ; 0048d143
    MOV CL,BL                           ; 0048d145
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d147 | DAT_006074b8
    JZ 0x0048d277                       ; 0048d14e
        ;   XREF to: 0048d277 (CONDITIONAL_JUMP)  ; LAB_0048d277
    INC EAX                             ; 0048d154
    JMP 0x0048d13f                      ; 0048d155
        ;   XREF to: 0048d13f (UNCONDITIONAL_JUMP)  ; LAB_0048d13f
    PUSH 0x5be31b                       ; 0048d157 | = "Error parsing createExplosion() parms"
        ;   Label: LAB_0048d157
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d15c
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d161
    LEA ESP,[EBP + 0xfa]                ; 0048d164
    POP EBP                             ; 0048d16a
    POP EDI                             ; 0048d16b
    POP ESI                             ; 0048d16c
    POP EBX                             ; 0048d16d
    RET                                 ; 0048d16e
    LEA EAX,[EBP + -0x3e]               ; 0048d16f
        ;   Label: LAB_0048d16f
    PUSH EAX                            ; 0048d172
    LEA EAX,[EBP + 0xffffeeae]          ; 0048d173
    PUSH EAX                            ; 0048d179
    PUSH 0x5be351                       ; 0048d17a | = " %[^,)] %n"
    MOV EDI,dword ptr [EBP + -0x62]     ; 0048d17f
    PUSH EDI                            ; 0048d182
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d183
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0048d188
    ADD ESP,0x10                        ; 0048d18b
    TEST EAX,EAX                        ; 0048d18e
    JL 0x0048d12f                       ; 0048d190
        ;   XREF to: 0048d12f (CONDITIONAL_JUMP)  ; LAB_0048d12f
    LEA EDI,[EBP + 0xffffeeae]          ; 0048d192
    LEA ESI,[EBP + 0xffffeeae]          ; 0048d198
    SUB ECX,ECX                         ; 0048d19e
    DEC ECX                             ; 0048d1a0
    XOR EAX,EAX                         ; 0048d1a1
    SCASB.REPNE ES:EDI                  ; 0048d1a3
    NOT ECX                             ; 0048d1a5
    DEC ECX                             ; 0048d1a7
    MOV EBX,ECX                         ; 0048d1a8
    TEST ECX,ECX                        ; 0048d1aa
    JLE 0x0048d1c9                      ; 0048d1ac
        ;   XREF to: 0048d1c9 (CONDITIONAL_JUMP)  ; LAB_0048d1c9
    LEA EAX,[EBP + 0xffffeeae]          ; 0048d1ae
    ADD ECX,EAX                         ; 0048d1b4
    MOV AL,byte ptr [ECX + -0x1]        ; 0048d1b6
        ;   Label: LAB_0048d1b6
    INC AL                              ; 0048d1b9
    AND EAX,0xff                        ; 0048d1bb
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d1c0 | DAT_006074b8
    JNZ 0x0048d1f2                      ; 0048d1c7
        ;   XREF to: 0048d1f2 (CONDITIONAL_JUMP)  ; LAB_0048d1f2
    LEA EAX,[ESI + EBX*0x1]             ; 0048d1c9
        ;   Label: LAB_0048d1c9
    LEA EDI,[ESI + 0x1]                 ; 0048d1cc
    MOV byte ptr [EAX],0x0              ; 0048d1cf
    MOV AL,byte ptr [ESI]               ; 0048d1d2
        ;   Label: LAB_0048d1d2
    INC AL                              ; 0048d1d4
    AND EAX,0xff                        ; 0048d1d6
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d1db | DAT_006074b8
    JZ 0x0048d1fa                       ; 0048d1e2
        ;   XREF to: 0048d1fa (CONDITIONAL_JUMP)  ; LAB_0048d1fa
    PUSH EBX                            ; 0048d1e4
    PUSH EDI                            ; 0048d1e5
    PUSH ESI                            ; 0048d1e6
    DEC EBX                             ; 0048d1e7
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048d1e8
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048d1ed
    JMP 0x0048d1d2                      ; 0048d1f0
        ;   XREF to: 0048d1d2 (UNCONDITIONAL_JUMP)  ; LAB_0048d1d2
    DEC EBX                             ; 0048d1f2
        ;   Label: LAB_0048d1f2
    DEC ECX                             ; 0048d1f3
    TEST EBX,EBX                        ; 0048d1f4
    JG 0x0048d1b6                       ; 0048d1f6
        ;   XREF to: 0048d1b6 (CONDITIONAL_JUMP)  ; LAB_0048d1b6
    JMP 0x0048d1c9                      ; 0048d1f8
        ;   XREF to: 0048d1c9 (UNCONDITIONAL_JUMP)  ; LAB_0048d1c9
    PUSH 0x7df978                       ; 0048d1fa | g_CDemonActorClassInfo
        ;   Label: LAB_0048d1fa
    MOV EDX,dword ptr [0x007df9b0]      ; 0048d1ff | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 0048d205
    LEA EAX,[EBP + 0xffffeeae]          ; 0048d206
    PUSH EAX                            ; 0048d20c
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048d20d
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048d212
    TEST EAX,EAX                        ; 0048d215
    JZ 0x0048c30e                       ; 0048d217
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048d21d | DAT_005df604
    JNZ 0x0048d22f                      ; 0048d223
        ;   XREF to: 0048d22f (CONDITIONAL_JUMP)  ; LAB_0048d22f
    XOR EBX,EBX                         ; 0048d225
    MOV dword ptr [EBP + -0x66],EBX     ; 0048d227
    JMP 0x0048d12f                      ; 0048d22a
        ;   XREF to: 0048d12f (UNCONDITIONAL_JUMP)  ; LAB_0048d12f
    LEA ECX,[EAX + 0x20]                ; 0048d22f
        ;   Label: LAB_0048d22f
    LEA EAX,[EBP + 0xffffff3a]          ; 0048d232
    CMP EAX,ECX                         ; 0048d238
    JZ 0x0048d12f                       ; 0048d23a
        ;   XREF to: 0048d12f (CONDITIONAL_JUMP)  ; LAB_0048d12f
    MOV EAX,dword ptr [ECX]             ; 0048d240
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 0048d242
    MOV EAX,dword ptr [ECX + 0x4]       ; 0048d248
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 0048d24b
    MOV EAX,dword ptr [ECX + 0x8]       ; 0048d251
    MOV dword ptr [EBP + 0xffffff42],EAX ; 0048d254
    JMP 0x0048d12f                      ; 0048d25a
        ;   XREF to: 0048d12f (UNCONDITIONAL_JUMP)  ; LAB_0048d12f
    PUSH 0x5be35c                       ; 0048d25f | = "Error parsing createExplosion() parms"
        ;   Label: LAB_0048d25f
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d264
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d269
    LEA ESP,[EBP + 0xfa]                ; 0048d26c
    POP EBP                             ; 0048d272
    POP EDI                             ; 0048d273
    POP ESI                             ; 0048d274
    POP EBX                             ; 0048d275
    RET                                 ; 0048d276
    MOV EDX,0x40800000                  ; 0048d277
        ;   Label: LAB_0048d277
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d27c
    MOV dword ptr [EBP + -0x36],EDX     ; 0048d27f
    CMP byte ptr [EAX],0x2c             ; 0048d282
    JZ 0x0048d2cc                       ; 0048d285
        ;   XREF to: 0048d2cc (CONDITIONAL_JUMP)  ; LAB_0048d2cc
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048d287
        ;   Label: LAB_0048d287
    CMP byte ptr [EAX],0x29             ; 0048d28a
    JNZ 0x0048d329                      ; 0048d28d
        ;   XREF to: 0048d329 (CONDITIONAL_JUMP)  ; LAB_0048d329
    LEA EDI,[EAX + 0x1]                 ; 0048d293
    MOV EAX,dword ptr [EBP + -0x66]     ; 0048d296
    MOV dword ptr [EBP + -0x62],EDI     ; 0048d299
    TEST EAX,EAX                        ; 0048d29c
    JZ 0x0048c7d2                       ; 0048d29e
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x0                            ; 0048d2a4
    PUSH dword ptr [EBP + -0x36]        ; 0048d2a6
    PUSH 0x44bb8000                     ; 0048d2a9
    LEA EAX,[EBP + 0xffffff3a]          ; 0048d2ae
    PUSH dword ptr [EBP + -0x3a]        ; 0048d2b4
    PUSH EAX                            ; 0048d2b7
    MOV EDX,dword ptr [0x005fc5a0]      ; 0048d2b8 | DAT_005fc5a0
    PUSH EDX                            ; 0048d2be
    CALL core_fire.cpp_FUN_004a36e0     ; 0048d2bf
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a36e0()
    ADD ESP,0x18                        ; 0048d2c4
    JMP 0x0048c7d2                      ; 0048d2c7
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EBP + -0x3e],0xffffffff ; 0048d2cc
        ;   Label: LAB_0048d2cc
    LEA ECX,[EBP + -0x3e]               ; 0048d2d3
    PUSH ECX                            ; 0048d2d6
    LEA ECX,[EBP + -0x36]               ; 0048d2d7
    PUSH ECX                            ; 0048d2da
    PUSH 0x5be382                       ; 0048d2db | = ", %f %n"
    PUSH EAX                            ; 0048d2e0
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d2e1
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + -0x3e]     ; 0048d2e6
    ADD ESP,0x10                        ; 0048d2e9
    TEST EBX,EBX                        ; 0048d2ec
    JL 0x0048d309                       ; 0048d2ee
        ;   XREF to: 0048d309 (CONDITIONAL_JUMP)  ; LAB_0048d309
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048d2f0
    ADD EAX,EBX                         ; 0048d2f3
    MOV BL,byte ptr [EAX]               ; 0048d2f5
        ;   Label: LAB_0048d2f5
    XOR ECX,ECX                         ; 0048d2f7
    INC BL                              ; 0048d2f9
    MOV CL,BL                           ; 0048d2fb
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d2fd | DAT_006074b8
    JZ 0x0048d321                       ; 0048d304
        ;   XREF to: 0048d321 (CONDITIONAL_JUMP)  ; LAB_0048d321
    INC EAX                             ; 0048d306
    JMP 0x0048d2f5                      ; 0048d307
        ;   XREF to: 0048d2f5 (UNCONDITIONAL_JUMP)  ; LAB_0048d2f5
    PUSH 0x5be38a                       ; 0048d309 | = "Error parsing createExplosion() parms"
        ;   Label: LAB_0048d309
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d30e
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d313
    LEA ESP,[EBP + 0xfa]                ; 0048d316
    POP EBP                             ; 0048d31c
    POP EDI                             ; 0048d31d
    POP ESI                             ; 0048d31e
    POP EBX                             ; 0048d31f
    RET                                 ; 0048d320
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d321
        ;   Label: LAB_0048d321
    JMP 0x0048d287                      ; 0048d324
        ;   XREF to: 0048d287 (UNCONDITIONAL_JUMP)  ; LAB_0048d287
    PUSH 0x5be3b0                       ; 0048d329 | = "Error parsing createExplosion() parms..."
        ;   Label: LAB_0048d329
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d32e
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d333
    LEA ESP,[EBP + 0xfa]                ; 0048d336
    POP EBP                             ; 0048d33c
    POP EDI                             ; 0048d33d
    POP ESI                             ; 0048d33e
    POP EBX                             ; 0048d33f
    RET                                 ; 0048d340
    PUSH 0xb                            ; 0048d341
        ;   Label: LAB_0048d341
    PUSH 0x5be3ed                       ; 0048d343 | = "deleteActor"
    PUSH EBX                            ; 0048d348
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048d349
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048d34e
    TEST EAX,EAX                        ; 0048d351
    JNZ 0x0048d45e                      ; 0048d353
        ;   XREF to: 0048d45e (CONDITIONAL_JUMP)  ; LAB_0048d45e
    MOV AL,byte ptr [EBX + 0xb]         ; 0048d359
    INC AL                              ; 0048d35c
    AND EAX,0xff                        ; 0048d35e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048d363 | DAT_006074b8
    JNZ 0x0048d45e                      ; 0048d36a
        ;   XREF to: 0048d45e (CONDITIONAL_JUMP)  ; LAB_0048d45e
    LEA EAX,[EBX + 0xb]                 ; 0048d370
    MOV BL,byte ptr [EAX]               ; 0048d373
        ;   Label: LAB_0048d373
    XOR ECX,ECX                         ; 0048d375
    INC BL                              ; 0048d377
    MOV CL,BL                           ; 0048d379
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d37b | DAT_006074b8
    JZ 0x0048d387                       ; 0048d382
        ;   XREF to: 0048d387 (CONDITIONAL_JUMP)  ; LAB_0048d387
    INC EAX                             ; 0048d384
    JMP 0x0048d373                      ; 0048d385
        ;   XREF to: 0048d373 (UNCONDITIONAL_JUMP)  ; LAB_0048d373
    PUSH 0x1                            ; 0048d387
        ;   Label: LAB_0048d387
    PUSH 0xc8                           ; 0048d389
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d38e
    LEA EAX,[EBP + 0xffffe7a6]          ; 0048d391
    PUSH EAX                            ; 0048d397
    LEA EAX,[EBP + -0x62]               ; 0048d398
    PUSH EAX                            ; 0048d39b
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048d39c
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048d3a1
    TEST EAX,EAX                        ; 0048d3a4
    JNZ 0x0048c717                      ; 0048d3a6
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    PUSH 0x7df978                       ; 0048d3ac | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x007df9b0]      ; 0048d3b1 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0048d3b7
    LEA EAX,[EBP + 0xffffe7a6]          ; 0048d3b8
    PUSH EAX                            ; 0048d3be
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048d3bf
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048d3c4
    MOV EBX,EAX                         ; 0048d3c7
    TEST EAX,EAX                        ; 0048d3c9
    JNZ 0x0048d3dd                      ; 0048d3cb
        ;   XREF to: 0048d3dd (CONDITIONAL_JUMP)  ; LAB_0048d3dd
    CMP dword ptr [0x01c734ac],0x0      ; 0048d3cd | DAT_01c734ac
    JNZ 0x0048c30e                      ; 0048d3d4
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    MOV dword ptr [EBP + -0x66],EAX     ; 0048d3da
    CMP EBX,dword ptr [0x005df604]      ; 0048d3dd | DAT_005df604
        ;   Label: LAB_0048d3dd
    JZ 0x0048c7d2                       ; 0048d3e3
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBP + -0x66],0x0     ; 0048d3e9
    JZ 0x0048c7d2                       ; 0048d3ed
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [0x007e17b4]      ; 0048d3f3 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 0048d3f9
    PUSH EBX                            ; 0048d3fa
    MOV dword ptr [EBX + 0x70],0x2      ; 0048d3fb
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048d402
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048d407
    TEST EAX,EAX                        ; 0048d40a
    JZ 0x0048d424                       ; 0048d40c
        ;   XREF to: 0048d424 (CONDITIONAL_JUMP)  ; LAB_0048d424
    MOV ESI,dword ptr [EAX + 0x2fc]     ; 0048d40e
    PUSH ESI                            ; 0048d414
    MOV byte ptr [EAX + 0x2d4],0x0      ; 0048d415
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0048d41c
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0048d421
    MOV EDI,dword ptr [0x007e2acc]      ; 0048d424 | g_CChainClassInfo.name_hash
        ;   Label: LAB_0048d424
    PUSH EDI                            ; 0048d42a
    PUSH EBX                            ; 0048d42b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048d42c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048d431
    TEST EAX,EAX                        ; 0048d434
    JZ 0x0048c7d2                       ; 0048d436
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDX,dword ptr [EAX + 0x280]     ; 0048d43c
    MOV byte ptr [EAX + 0x1b4],0x0      ; 0048d442
    PUSH EDX                            ; 0048d449
    MOV byte ptr [EAX + 0x21c],0x0      ; 0048d44a
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0048d451
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0048d456
    JMP 0x0048c7d2                      ; 0048d459
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xd                            ; 0048d45e
        ;   Label: LAB_0048d45e
    PUSH 0x5be3f9                       ; 0048d460 | = "displayBitmap"
    PUSH EBX                            ; 0048d465
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048d466
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048d46b
    TEST EAX,EAX                        ; 0048d46e
    JNZ 0x0048d642                      ; 0048d470
        ;   XREF to: 0048d642 (CONDITIONAL_JUMP)  ; LAB_0048d642
    MOV AL,byte ptr [EBX + 0xd]         ; 0048d476
    INC AL                              ; 0048d479
    AND EAX,0xff                        ; 0048d47b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048d480 | DAT_006074b8
    JNZ 0x0048d642                      ; 0048d487
        ;   XREF to: 0048d642 (CONDITIONAL_JUMP)  ; LAB_0048d642
    LEA EAX,[EBX + 0xd]                 ; 0048d48d
    MOV BL,byte ptr [EAX]               ; 0048d490
        ;   Label: LAB_0048d490
    XOR ECX,ECX                         ; 0048d492
    INC BL                              ; 0048d494
    MOV CL,BL                           ; 0048d496
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d498 | DAT_006074b8
    JZ 0x0048d4a4                       ; 0048d49f
        ;   XREF to: 0048d4a4 (CONDITIONAL_JUMP)  ; LAB_0048d4a4
    INC EAX                             ; 0048d4a1
    JMP 0x0048d490                      ; 0048d4a2
        ;   XREF to: 0048d490 (UNCONDITIONAL_JUMP)  ; LAB_0048d490
    MOV dword ptr [EBP + -0x2a],0xffffffff ; 0048d4a4
        ;   Label: LAB_0048d4a4
    LEA ECX,[EBP + -0x2a]               ; 0048d4ab
    PUSH ECX                            ; 0048d4ae
    LEA ECX,[EBP + -0x2e]               ; 0048d4af
    PUSH ECX                            ; 0048d4b2
    LEA ECX,[EBP + -0x32]               ; 0048d4b3
    PUSH ECX                            ; 0048d4b6
    LEA ECX,[EBP + 0xffffde0e]          ; 0048d4b7
    PUSH ECX                            ; 0048d4bd
    PUSH 0x5be407                       ; 0048d4be | = "( %[^ ,] , %d , %d%n"
    PUSH EAX                            ; 0048d4c3
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d4c4
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d4c7
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + -0x2a]     ; 0048d4cc
    ADD ESP,0x18                        ; 0048d4cf
    TEST EBX,EBX                        ; 0048d4d2
    JL 0x0048d4ef                       ; 0048d4d4
        ;   XREF to: 0048d4ef (CONDITIONAL_JUMP)  ; LAB_0048d4ef
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048d4d6
    ADD EAX,EBX                         ; 0048d4d9
    MOV BL,byte ptr [EAX]               ; 0048d4db
        ;   Label: LAB_0048d4db
    XOR ECX,ECX                         ; 0048d4dd
    INC BL                              ; 0048d4df
    MOV CL,BL                           ; 0048d4e1
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d4e3 | DAT_006074b8
    JZ 0x0048d507                       ; 0048d4ea
        ;   XREF to: 0048d507 (CONDITIONAL_JUMP)  ; LAB_0048d507
    INC EAX                             ; 0048d4ec
    JMP 0x0048d4db                      ; 0048d4ed
        ;   XREF to: 0048d4db (UNCONDITIONAL_JUMP)  ; LAB_0048d4db
    PUSH 0x5be41c                       ; 0048d4ef | = "Error parsing displayBitmap() parms"
        ;   Label: LAB_0048d4ef
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d4f4
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d4f9
    LEA ESP,[EBP + 0xfa]                ; 0048d4fc
    POP EBP                             ; 0048d502
    POP EDI                             ; 0048d503
    POP ESI                             ; 0048d504
    POP EBX                             ; 0048d505
    RET                                 ; 0048d506
    XOR EDI,EDI                         ; 0048d507
        ;   Label: LAB_0048d507
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d509
    MOV dword ptr [EBP + -0x26],EDI     ; 0048d50c
    CMP byte ptr [EAX],0x2c             ; 0048d50f
    JZ 0x0048d531                       ; 0048d512
        ;   XREF to: 0048d531 (CONDITIONAL_JUMP)  ; LAB_0048d531
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048d514
        ;   Label: LAB_0048d514
    MOV BL,byte ptr [EAX]               ; 0048d517
        ;   Label: LAB_0048d517
    XOR ECX,ECX                         ; 0048d519
    INC BL                              ; 0048d51b
    MOV CL,BL                           ; 0048d51d
    MOV DL,byte ptr [ECX + 0x6074b8]    ; 0048d51f | DAT_006074b8
    LEA EBX,[EAX + 0x1]                 ; 0048d525
    TEST DL,0x2                         ; 0048d528
    JZ 0x0048d594                       ; 0048d52b
        ;   XREF to: 0048d594 (CONDITIONAL_JUMP)  ; LAB_0048d594
    MOV EAX,EBX                         ; 0048d52d
    JMP 0x0048d517                      ; 0048d52f
        ;   XREF to: 0048d517 (UNCONDITIONAL_JUMP)  ; LAB_0048d517
    LEA ECX,[EBP + -0x2a]               ; 0048d531
        ;   Label: LAB_0048d531
    PUSH ECX                            ; 0048d534
    LEA ECX,[EBP + -0x26]               ; 0048d535
    PUSH ECX                            ; 0048d538
    PUSH 0x5be440                       ; 0048d539 | = ", %f %n"
    MOV EDX,0xffffffff                  ; 0048d53e
    PUSH EAX                            ; 0048d543
    MOV dword ptr [EBP + -0x2a],EDX     ; 0048d544
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d547
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x2a]     ; 0048d54c
    ADD ESP,0x10                        ; 0048d54f
    CMP ECX,0x1                         ; 0048d552
    JL 0x0048d570                       ; 0048d555
        ;   XREF to: 0048d570 (CONDITIONAL_JUMP)  ; LAB_0048d570
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048d557
    ADD EAX,ECX                         ; 0048d55a
    MOV BL,byte ptr [EAX]               ; 0048d55c
        ;   Label: LAB_0048d55c
    XOR ECX,ECX                         ; 0048d55e
    INC BL                              ; 0048d560
    MOV CL,BL                           ; 0048d562
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d564 | DAT_006074b8
    JZ 0x0048d58f                       ; 0048d56b
        ;   XREF to: 0048d58f (CONDITIONAL_JUMP)  ; LAB_0048d58f
    INC EAX                             ; 0048d56d
    JMP 0x0048d55c                      ; 0048d56e
        ;   XREF to: 0048d55c (UNCONDITIONAL_JUMP)  ; LAB_0048d55c
    PUSH 0x5be448                       ; 0048d570 | = "Error parsing displayBitmap time argu..."
        ;   Label: LAB_0048d570
    PUSH 0x1c734b0                      ; 0048d575 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048d57a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048d57f
    XOR EAX,EAX                         ; 0048d582
    LEA ESP,[EBP + 0xfa]                ; 0048d584
    POP EBP                             ; 0048d58a
    POP EDI                             ; 0048d58b
    POP ESI                             ; 0048d58c
    POP EBX                             ; 0048d58d
    RET                                 ; 0048d58e
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d58f
        ;   Label: LAB_0048d58f
    JMP 0x0048d514                      ; 0048d592
        ;   XREF to: 0048d514 (UNCONDITIONAL_JUMP)  ; LAB_0048d514
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d594
        ;   Label: LAB_0048d594
    CMP byte ptr [EAX],0x29             ; 0048d597
    JNZ 0x0048d5f3                      ; 0048d59a
        ;   XREF to: 0048d5f3 (CONDITIONAL_JUMP)  ; LAB_0048d5f3
    LEA EAX,[EBP + 0xffffde0e]          ; 0048d59c
    PUSH EAX                            ; 0048d5a2
    PUSH 0x5be4a1                       ; 0048d5a3 | DAT_005be4a1
    MOV dword ptr [EBP + -0x62],EBX     ; 0048d5a8
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0048d5ab
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    MOV ECX,EAX                         ; 0048d5b0
    ADD ESP,0x8                         ; 0048d5b2
    TEST EAX,EAX                        ; 0048d5b5
    JL 0x0048d612                       ; 0048d5b7
        ;   XREF to: 0048d612 (CONDITIONAL_JUMP)  ; LAB_0048d612
    MOV EAX,dword ptr [EBP + -0x32]     ; 0048d5b9
    MOV ESI,dword ptr [EBP + -0x2e]     ; 0048d5bc
    IMUL EAX,ESI                        ; 0048d5bf
    CMP ECX,EAX                         ; 0048d5c2
    JNZ 0x0048d62a                      ; 0048d5c4
        ;   XREF to: 0048d62a (CONDITIONAL_JUMP)  ; LAB_0048d62a
    CMP dword ptr [EBP + -0x66],0x0     ; 0048d5c6
    JZ 0x0048c7d2                       ; 0048d5ca
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + -0x26]        ; 0048d5d0
    PUSH ESI                            ; 0048d5d3
    MOV EDX,dword ptr [EBP + -0x32]     ; 0048d5d4
    PUSH EDX                            ; 0048d5d7
    LEA EAX,[EBP + 0xffffde0e]          ; 0048d5d8
    PUSH EAX                            ; 0048d5de
    MOV ECX,dword ptr [0x005fe9dc]      ; 0048d5df | g_CGamePtr
    PUSH ECX                            ; 0048d5e5
    CALL core_game.cpp_FUN_004beb80     ; 0048d5e6
        ;   XREF to: 004beb80 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004beb80()
    ADD ESP,0x14                        ; 0048d5eb
    JMP 0x0048c7d2                      ; 0048d5ee
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5be472                       ; 0048d5f3 | = "Can't find matching ) in displayBitma..."
        ;   Label: LAB_0048d5f3
    PUSH 0x1c734b0                      ; 0048d5f8 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048d5fd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048d602
    XOR EAX,EAX                         ; 0048d605
    LEA ESP,[EBP + 0xfa]                ; 0048d607
    POP EBP                             ; 0048d60d
    POP EDI                             ; 0048d60e
    POP ESI                             ; 0048d60f
    POP EBX                             ; 0048d610
    RET                                 ; 0048d611
    PUSH 0x5be4a5                       ; 0048d612 | = "Bitmap doesn't exist"
        ;   Label: LAB_0048d612
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d617
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d61c
    LEA ESP,[EBP + 0xfa]                ; 0048d61f
    POP EBP                             ; 0048d625
    POP EDI                             ; 0048d626
    POP ESI                             ; 0048d627
    POP EBX                             ; 0048d628
    RET                                 ; 0048d629
    PUSH 0x5be4ba                       ; 0048d62a | = "Bitmap file size does not match speci..."
        ;   Label: LAB_0048d62a
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d62f
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d634
    LEA ESP,[EBP + 0xfa]                ; 0048d637
    POP EBP                             ; 0048d63d
    POP EDI                             ; 0048d63e
    POP ESI                             ; 0048d63f
    POP EBX                             ; 0048d640
    RET                                 ; 0048d641
    PUSH 0x11                           ; 0048d642
        ;   Label: LAB_0048d642
    PUSH 0x5be4ef                       ; 0048d644 | = "displayFieldNotes"
    PUSH EBX                            ; 0048d649
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048d64a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048d64f
    TEST EAX,EAX                        ; 0048d652
    JNZ 0x0048d793                      ; 0048d654
        ;   XREF to: 0048d793 (CONDITIONAL_JUMP)  ; LAB_0048d793
    MOV AL,byte ptr [EBX + 0x11]        ; 0048d65a
    INC AL                              ; 0048d65d
    AND EAX,0xff                        ; 0048d65f
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048d664 | DAT_006074b8
    JNZ 0x0048d793                      ; 0048d66b
        ;   XREF to: 0048d793 (CONDITIONAL_JUMP)  ; LAB_0048d793
    LEA EAX,[EBX + 0x11]                ; 0048d671
    MOV BL,byte ptr [EAX]               ; 0048d674
        ;   Label: LAB_0048d674
    XOR ECX,ECX                         ; 0048d676
    INC BL                              ; 0048d678
    MOV CL,BL                           ; 0048d67a
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d67c | DAT_006074b8
    JZ 0x0048d688                       ; 0048d683
        ;   XREF to: 0048d688 (CONDITIONAL_JUMP)  ; LAB_0048d688
    INC EAX                             ; 0048d685
    JMP 0x0048d674                      ; 0048d686
        ;   XREF to: 0048d674 (UNCONDITIONAL_JUMP)  ; LAB_0048d674
    LEA ECX,[EBP + -0x22]               ; 0048d688
        ;   Label: LAB_0048d688
    PUSH ECX                            ; 0048d68b
    LEA ECX,[EBP + 0xffffec56]          ; 0048d68c
    PUSH ECX                            ; 0048d692
    PUSH 0x5be501                       ; 0048d693 | = "(%[^)])%n"
    MOV EBX,0xffffffff                  ; 0048d698
    PUSH EAX                            ; 0048d69d
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d69e
    MOV dword ptr [EBP + -0x22],EBX     ; 0048d6a1
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d6a4
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ESI,dword ptr [EBP + -0x22]     ; 0048d6a9
    ADD ESP,0x10                        ; 0048d6ac
    CMP ESI,0x5                         ; 0048d6af
    JL 0x0048d717                       ; 0048d6b2
        ;   XREF to: 0048d717 (CONDITIONAL_JUMP)  ; LAB_0048d717
    ADD dword ptr [EBP + -0x62],ESI     ; 0048d6b4
    LEA EDI,[EBP + 0xffffec56]          ; 0048d6b7
    LEA ESI,[EBP + 0xffffec56]          ; 0048d6bd
    SUB ECX,ECX                         ; 0048d6c3
    DEC ECX                             ; 0048d6c5
    XOR EAX,EAX                         ; 0048d6c6
    SCASB.REPNE ES:EDI                  ; 0048d6c8
    NOT ECX                             ; 0048d6ca
    DEC ECX                             ; 0048d6cc
    MOV EBX,ECX                         ; 0048d6cd
    TEST ECX,ECX                        ; 0048d6cf
    JLE 0x0048d6ee                      ; 0048d6d1
        ;   XREF to: 0048d6ee (CONDITIONAL_JUMP)  ; LAB_0048d6ee
    LEA EAX,[EBP + 0xffffec56]          ; 0048d6d3
    ADD ECX,EAX                         ; 0048d6d9
    MOV AL,byte ptr [ECX + -0x1]        ; 0048d6db
        ;   Label: LAB_0048d6db
    INC AL                              ; 0048d6de
    AND EAX,0xff                        ; 0048d6e0
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d6e5 | DAT_006074b8
    JNZ 0x0048d736                      ; 0048d6ec
        ;   XREF to: 0048d736 (CONDITIONAL_JUMP)  ; LAB_0048d736
    LEA EAX,[ESI + EBX*0x1]             ; 0048d6ee
        ;   Label: LAB_0048d6ee
    LEA EDI,[ESI + 0x1]                 ; 0048d6f1
    MOV byte ptr [EAX],0x0              ; 0048d6f4
    MOV AL,byte ptr [ESI]               ; 0048d6f7
        ;   Label: LAB_0048d6f7
    INC AL                              ; 0048d6f9
    AND EAX,0xff                        ; 0048d6fb
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d700 | DAT_006074b8
    JZ 0x0048d73e                       ; 0048d707
        ;   XREF to: 0048d73e (CONDITIONAL_JUMP)  ; LAB_0048d73e
    PUSH EBX                            ; 0048d709
    PUSH EDI                            ; 0048d70a
    PUSH ESI                            ; 0048d70b
    DEC EBX                             ; 0048d70c
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048d70d
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048d712
    JMP 0x0048d6f7                      ; 0048d715
        ;   XREF to: 0048d6f7 (UNCONDITIONAL_JUMP)  ; LAB_0048d6f7
    PUSH 0x5be50b                       ; 0048d717 | = "Error parsing displayFieldNotes comma..."
        ;   Label: LAB_0048d717
    PUSH 0x1c734b0                      ; 0048d71c | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048d721
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048d726
    XOR EAX,EAX                         ; 0048d729
    LEA ESP,[EBP + 0xfa]                ; 0048d72b
    POP EBP                             ; 0048d731
    POP EDI                             ; 0048d732
    POP ESI                             ; 0048d733
    POP EBX                             ; 0048d734
    RET                                 ; 0048d735
    DEC EBX                             ; 0048d736
        ;   Label: LAB_0048d736
    DEC ECX                             ; 0048d737
    TEST EBX,EBX                        ; 0048d738
    JG 0x0048d6db                       ; 0048d73a
        ;   XREF to: 0048d6db (CONDITIONAL_JUMP)  ; LAB_0048d6db
    JMP 0x0048d6ee                      ; 0048d73c
        ;   XREF to: 0048d6ee (UNCONDITIONAL_JUMP)  ; LAB_0048d6ee
    CMP dword ptr [EBP + -0x66],0x0     ; 0048d73e
        ;   Label: LAB_0048d73e
    JZ 0x0048d768                       ; 0048d742
        ;   XREF to: 0048d768 (CONDITIONAL_JUMP)  ; LAB_0048d768
    LEA EAX,[EBP + 0xffffec56]          ; 0048d744
    PUSH EAX                            ; 0048d74a
    MOV ECX,dword ptr [0x005fba60]      ; 0048d74b | DAT_005fba60
    PUSH ECX                            ; 0048d751
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0048d752
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    MOV ECX,dword ptr [0x005fe4b0]      ; 0048d757 | g_CFieldNotesPtr
    ADD ESP,0x8                         ; 0048d75d
    MOV dword ptr [ECX + 0x40],EAX      ; 0048d760 | g_CFieldNotesInstance.is_displayed
    JMP 0x0048c7d2                      ; 0048d763
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffec56]          ; 0048d768
        ;   Label: LAB_0048d768
    PUSH EAX                            ; 0048d76e
    MOV EDX,dword ptr [EBP + 0x10e]     ; 0048d76f
    PUSH EDX                            ; 0048d775
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0048d776
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0048d77b
    TEST EAX,EAX                        ; 0048d77e
    JZ 0x0048c7d2                       ; 0048d780
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 0048d786
    LEA ESP,[EBP + 0xfa]                ; 0048d788
    POP EBP                             ; 0048d78e
    POP EDI                             ; 0048d78f
    POP ESI                             ; 0048d790
    POP EBX                             ; 0048d791
    RET                                 ; 0048d792
    PUSH 0x8                            ; 0048d793
        ;   Label: LAB_0048d793
    PUSH 0x5be539                       ; 0048d795 | = "dropItem"
    PUSH EBX                            ; 0048d79a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048d79b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048d7a0
    TEST EAX,EAX                        ; 0048d7a3
    JNZ 0x0048daa9                      ; 0048d7a5
        ;   XREF to: 0048daa9 (CONDITIONAL_JUMP)  ; LAB_0048daa9
    MOV AL,byte ptr [EBX + 0x8]         ; 0048d7ab
    INC AL                              ; 0048d7ae
    AND EAX,0xff                        ; 0048d7b0
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048d7b5 | DAT_006074b8
    JNZ 0x0048daa9                      ; 0048d7bc
        ;   XREF to: 0048daa9 (CONDITIONAL_JUMP)  ; LAB_0048daa9
    LEA EAX,[EBX + 0x8]                 ; 0048d7c2
    MOV BL,byte ptr [EAX]               ; 0048d7c5
        ;   Label: LAB_0048d7c5
    XOR ECX,ECX                         ; 0048d7c7
    INC BL                              ; 0048d7c9
    MOV CL,BL                           ; 0048d7cb
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048d7cd | DAT_006074b8
    JZ 0x0048d7d9                       ; 0048d7d4
        ;   XREF to: 0048d7d9 (CONDITIONAL_JUMP)  ; LAB_0048d7d9
    INC EAX                             ; 0048d7d6
    JMP 0x0048d7c5                      ; 0048d7d7
        ;   XREF to: 0048d7c5 (UNCONDITIONAL_JUMP)  ; LAB_0048d7c5
    LEA ECX,[EBP + -0x1e]               ; 0048d7d9
        ;   Label: LAB_0048d7d9
    PUSH ECX                            ; 0048d7dc
    LEA ECX,[EBP + 0xfffff1ce]          ; 0048d7dd
    PUSH ECX                            ; 0048d7e3
    PUSH 0x5be542                       ; 0048d7e4 | = "( %[^,],%n"
    MOV EBX,0xffffffff                  ; 0048d7e9
    PUSH EAX                            ; 0048d7ee
    MOV dword ptr [EBP + -0x62],EAX     ; 0048d7ef
    MOV dword ptr [EBP + -0x1e],EBX     ; 0048d7f2
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d7f5
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ESI,dword ptr [EBP + -0x1e]     ; 0048d7fa
    ADD ESP,0x10                        ; 0048d7fd
    TEST ESI,ESI                        ; 0048d800
    JL 0x0048d867                       ; 0048d802
        ;   XREF to: 0048d867 (CONDITIONAL_JUMP)  ; LAB_0048d867
    ADD dword ptr [EBP + -0x62],ESI     ; 0048d804
    LEA EDI,[EBP + 0xfffff1ce]          ; 0048d807
    LEA EBX,[EBP + 0xfffff1ce]          ; 0048d80d
    SUB ECX,ECX                         ; 0048d813
    DEC ECX                             ; 0048d815
    XOR EAX,EAX                         ; 0048d816
    SCASB.REPNE ES:EDI                  ; 0048d818
    NOT ECX                             ; 0048d81a
    DEC ECX                             ; 0048d81c
    MOV EDI,ECX                         ; 0048d81d
    TEST ECX,ECX                        ; 0048d81f
    JLE 0x0048d83e                      ; 0048d821
        ;   XREF to: 0048d83e (CONDITIONAL_JUMP)  ; LAB_0048d83e
    LEA EAX,[EBP + 0xfffff1ce]          ; 0048d823
    ADD ECX,EAX                         ; 0048d829
    MOV AL,byte ptr [ECX + -0x1]        ; 0048d82b
        ;   Label: LAB_0048d82b
    INC AL                              ; 0048d82e
    AND EAX,0xff                        ; 0048d830
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d835 | DAT_006074b8
    JNZ 0x0048d87f                      ; 0048d83c
        ;   XREF to: 0048d87f (CONDITIONAL_JUMP)  ; LAB_0048d87f
    LEA EAX,[EBX + EDI*0x1]             ; 0048d83e
        ;   Label: LAB_0048d83e
    LEA ESI,[EBX + 0x1]                 ; 0048d841
    MOV byte ptr [EAX],0x0              ; 0048d844
    MOV AL,byte ptr [EBX]               ; 0048d847
        ;   Label: LAB_0048d847
    INC AL                              ; 0048d849
    AND EAX,0xff                        ; 0048d84b
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d850 | DAT_006074b8
    JZ 0x0048d887                       ; 0048d857
        ;   XREF to: 0048d887 (CONDITIONAL_JUMP)  ; LAB_0048d887
    PUSH EDI                            ; 0048d859
    PUSH ESI                            ; 0048d85a
    PUSH EBX                            ; 0048d85b
    DEC EDI                             ; 0048d85c
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048d85d
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048d862
    JMP 0x0048d847                      ; 0048d865
        ;   XREF to: 0048d847 (UNCONDITIONAL_JUMP)  ; LAB_0048d847
    PUSH 0x5be54d                       ; 0048d867 | = "Error parsing dropItem() parms"
        ;   Label: LAB_0048d867
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d86c
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048d871
    LEA ESP,[EBP + 0xfa]                ; 0048d874
    POP EBP                             ; 0048d87a
    POP EDI                             ; 0048d87b
    POP ESI                             ; 0048d87c
    POP EBX                             ; 0048d87d
    RET                                 ; 0048d87e
    DEC EDI                             ; 0048d87f
        ;   Label: LAB_0048d87f
    DEC ECX                             ; 0048d880
    TEST EDI,EDI                        ; 0048d881
    JG 0x0048d82b                       ; 0048d883
        ;   XREF to: 0048d82b (CONDITIONAL_JUMP)  ; LAB_0048d82b
    JMP 0x0048d83e                      ; 0048d885
        ;   XREF to: 0048d83e (UNCONDITIONAL_JUMP)  ; LAB_0048d83e
    PUSH 0x7e2cb4                       ; 0048d887 | g_CCharacterClassInfo
        ;   Label: LAB_0048d887
    MOV EAX,[0x007e2cec]                ; 0048d88c | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0048d891
    LEA EAX,[EBP + 0xfffff1ce]          ; 0048d892
    PUSH EAX                            ; 0048d898
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048d899
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048d89e
    MOV dword ptr [EBP + -0x1a],EAX     ; 0048d8a1
    TEST EAX,EAX                        ; 0048d8a4
    JZ 0x0048c30e                       ; 0048d8a6
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048d8ac | DAT_005df604
    JNZ 0x0048d8b9                      ; 0048d8b2
        ;   XREF to: 0048d8b9 (CONDITIONAL_JUMP)  ; LAB_0048d8b9
    XOR ECX,ECX                         ; 0048d8b4
    MOV dword ptr [EBP + -0x66],ECX     ; 0048d8b6
    LEA EAX,[EBP + -0x1e]               ; 0048d8b9
        ;   Label: LAB_0048d8b9
    PUSH EAX                            ; 0048d8bc
    LEA EAX,[EBP + 0xf2]                ; 0048d8bd
    PUSH EAX                            ; 0048d8c3
    PUSH 0x5be56c                       ; 0048d8c4 | = "%d )%n"
    MOV EDI,dword ptr [EBP + -0x62]     ; 0048d8c9
    MOV EBX,0xffffffff                  ; 0048d8cc
    PUSH EDI                            ; 0048d8d1
    MOV dword ptr [EBP + -0x1e],EBX     ; 0048d8d2
    MOV dword ptr [EBP + 0xf2],EBX      ; 0048d8d5
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d8db
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0048d8e0
    ADD ESP,0x10                        ; 0048d8e3
    TEST EAX,EAX                        ; 0048d8e6
    JLE 0x0048d98c                      ; 0048d8e8
        ;   XREF to: 0048d98c (CONDITIONAL_JUMP)  ; LAB_0048d98c
    MOV EBX,dword ptr [EBP + 0xf2]      ; 0048d8ee
    TEST EBX,EBX                        ; 0048d8f4
    JL 0x0048d96d                       ; 0048d8f6
        ;   XREF to: 0048d96d (CONDITIONAL_JUMP)  ; LAB_0048d96d
    CMP EBX,0x2                         ; 0048d8f8
    JGE 0x0048d96d                      ; 0048d8fb
        ;   XREF to: 0048d96d (CONDITIONAL_JUMP)  ; LAB_0048d96d
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0048d8fd
        ;   Label: LAB_0048d8fd
    MOV ECX,dword ptr [EBP + -0x62]     ; 0048d900
    MOV EBX,dword ptr [0x005df604]      ; 0048d903 | DAT_005df604
    ADD ECX,EAX                         ; 0048d909
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0048d90b
    MOV dword ptr [EBP + -0x62],ECX     ; 0048d90e
    CMP EAX,EBX                         ; 0048d911
    JZ 0x0048d937                       ; 0048d913
        ;   XREF to: 0048d937 (CONDITIONAL_JUMP)  ; LAB_0048d937
    MOV EAX,dword ptr [EBP + 0xf2]      ; 0048d915
    SHL EAX,0x3                         ; 0048d91b
    MOV ECX,EAX                         ; 0048d91e
    SHL EAX,0x4                         ; 0048d920
    MOV ESI,dword ptr [EBP + -0x1a]     ; 0048d923
    SUB EAX,ECX                         ; 0048d926
    ADD EAX,ESI                         ; 0048d928
    CMP dword ptr [EAX + 0x25a8],0x0    ; 0048d92a
    JL 0x0048da86                       ; 0048d931
        ;   XREF to: 0048da86 (CONDITIONAL_JUMP)  ; LAB_0048da86
    CMP dword ptr [EBP + -0x66],0x0     ; 0048d937
        ;   Label: LAB_0048d937
    JZ 0x0048c7d2                       ; 0048d93b
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDX,dword ptr [EBP + 0xf2]      ; 0048d941
    TEST EDX,EDX                        ; 0048d947
    JL 0x0048c7d2                       ; 0048d949
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x0                            ; 0048d94f
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0048d951
    PUSH EDX                            ; 0048d954
    MOV EBX,dword ptr [EBP + -0x1a]     ; 0048d955
    MOV EAX,dword ptr [EAX + 0x154]     ; 0048d958
    PUSH EBX                            ; 0048d95e
    CALL dword ptr [EAX + 0x128]        ; 0048d95f
    ADD ESP,0xc                         ; 0048d965
    JMP 0x0048c7d2                      ; 0048d968
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EDI,dword ptr [EBP + 0xf2]      ; 0048d96d
        ;   Label: LAB_0048d96d
    PUSH EDI                            ; 0048d973
    PUSH 0x5be573                       ; 0048d974 | = "Invalid hand index: %d"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048d979
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048d97e
    LEA ESP,[EBP + 0xfa]                ; 0048d981
    POP EBP                             ; 0048d987
    POP EDI                             ; 0048d988
    POP ESI                             ; 0048d989
    POP EBX                             ; 0048d98a
    RET                                 ; 0048d98b
    LEA EAX,[EBP + -0x1e]               ; 0048d98c
        ;   Label: LAB_0048d98c
    PUSH EAX                            ; 0048d98f
    LEA EAX,[EBP + 0xfffff106]          ; 0048d990
    PUSH EAX                            ; 0048d996
    PUSH 0x5be58a                       ; 0048d997 | = "%[^)])%n"
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048d99c
    PUSH EDX                            ; 0048d99f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048d9a0
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x1e]     ; 0048d9a5
    ADD ESP,0x10                        ; 0048d9a8
    TEST ECX,ECX                        ; 0048d9ab
    JL 0x0048da0f                       ; 0048d9ad
        ;   XREF to: 0048da0f (CONDITIONAL_JUMP)  ; LAB_0048da0f
    LEA EDI,[EBP + 0xfffff106]          ; 0048d9af
    LEA EBX,[EBP + 0xfffff106]          ; 0048d9b5
    SUB ECX,ECX                         ; 0048d9bb
    DEC ECX                             ; 0048d9bd
    XOR EAX,EAX                         ; 0048d9be
    SCASB.REPNE ES:EDI                  ; 0048d9c0
    NOT ECX                             ; 0048d9c2
    DEC ECX                             ; 0048d9c4
    MOV EDI,ECX                         ; 0048d9c5
    TEST ECX,ECX                        ; 0048d9c7
    JLE 0x0048d9e6                      ; 0048d9c9
        ;   XREF to: 0048d9e6 (CONDITIONAL_JUMP)  ; LAB_0048d9e6
    LEA EAX,[EBP + 0xfffff106]          ; 0048d9cb
    ADD ECX,EAX                         ; 0048d9d1
    MOV AL,byte ptr [ECX + -0x1]        ; 0048d9d3
        ;   Label: LAB_0048d9d3
    INC AL                              ; 0048d9d6
    AND EAX,0xff                        ; 0048d9d8
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d9dd | DAT_006074b8
    JNZ 0x0048da27                      ; 0048d9e4
        ;   XREF to: 0048da27 (CONDITIONAL_JUMP)  ; LAB_0048da27
    LEA EAX,[EBX + EDI*0x1]             ; 0048d9e6
        ;   Label: LAB_0048d9e6
    LEA ESI,[EBX + 0x1]                 ; 0048d9e9
    MOV byte ptr [EAX],0x0              ; 0048d9ec
    MOV AL,byte ptr [EBX]               ; 0048d9ef
        ;   Label: LAB_0048d9ef
    INC AL                              ; 0048d9f1
    AND EAX,0xff                        ; 0048d9f3
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048d9f8 | DAT_006074b8
    JZ 0x0048da2f                       ; 0048d9ff
        ;   XREF to: 0048da2f (CONDITIONAL_JUMP)  ; LAB_0048da2f
    PUSH EDI                            ; 0048da01
    PUSH ESI                            ; 0048da02
    PUSH EBX                            ; 0048da03
    DEC EDI                             ; 0048da04
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048da05
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048da0a
    JMP 0x0048d9ef                      ; 0048da0d
        ;   XREF to: 0048d9ef (UNCONDITIONAL_JUMP)  ; LAB_0048d9ef
    PUSH 0x5be593                       ; 0048da0f | = "Error parsing dropItem() parms"
        ;   Label: LAB_0048da0f
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048da14
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048da19
    LEA ESP,[EBP + 0xfa]                ; 0048da1c
    POP EBP                             ; 0048da22
    POP EDI                             ; 0048da23
    POP ESI                             ; 0048da24
    POP EBX                             ; 0048da25
    RET                                 ; 0048da26
    DEC EDI                             ; 0048da27
        ;   Label: LAB_0048da27
    DEC ECX                             ; 0048da28
    TEST EDI,EDI                        ; 0048da29
    JG 0x0048d9d3                       ; 0048da2b
        ;   XREF to: 0048d9d3 (CONDITIONAL_JUMP)  ; LAB_0048d9d3
    JMP 0x0048d9e6                      ; 0048da2d
        ;   XREF to: 0048d9e6 (UNCONDITIONAL_JUMP)  ; LAB_0048d9e6
    MOV EAX,0xffffffff                  ; 0048da2f
        ;   Label: LAB_0048da2f
    MOV EDX,dword ptr [0x005df604]      ; 0048da34 | DAT_005df604
    MOV dword ptr [EBP + 0xf2],EAX      ; 0048da3a
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0048da40
    CMP EAX,EDX                         ; 0048da43
    JZ 0x0048d8fd                       ; 0048da45
        ;   XREF to: 0048d8fd (CONDITIONAL_JUMP)  ; LAB_0048d8fd
    MOV EBX,EAX                         ; 0048da4b
    XOR EDI,EDI                         ; 0048da4d
    MOV ECX,dword ptr [EBX + 0x25b0]    ; 0048da4f
        ;   Label: LAB_0048da4f
    TEST ECX,ECX                        ; 0048da55
    JNZ 0x0048da67                      ; 0048da57
        ;   XREF to: 0048da67 (CONDITIONAL_JUMP)  ; LAB_0048da67
    INC EDI                             ; 0048da59
        ;   Label: LAB_0048da59
    ADD EBX,0x78                        ; 0048da5a
    CMP EDI,0x2                         ; 0048da5d
    JL 0x0048da4f                       ; 0048da60
        ;   XREF to: 0048da4f (CONDITIONAL_JUMP)  ; LAB_0048da4f
    JMP 0x0048d8fd                      ; 0048da62
        ;   XREF to: 0048d8fd (UNCONDITIONAL_JUMP)  ; LAB_0048d8fd
    LEA EAX,[EBP + 0xfffff106]          ; 0048da67
        ;   Label: LAB_0048da67
    PUSH EAX                            ; 0048da6d
    PUSH ECX                            ; 0048da6e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048da6f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048da74
    TEST EAX,EAX                        ; 0048da77
    JNZ 0x0048da59                      ; 0048da79
        ;   XREF to: 0048da59 (CONDITIONAL_JUMP)  ; LAB_0048da59
    MOV dword ptr [EBP + 0xf2],EDI      ; 0048da7b
    JMP 0x0048d8fd                      ; 0048da81
        ;   XREF to: 0048d8fd (UNCONDITIONAL_JUMP)  ; LAB_0048d8fd
    MOV ESI,dword ptr [EBP + 0xf2]      ; 0048da86
        ;   Label: LAB_0048da86
    PUSH ESI                            ; 0048da8c
    MOV EDI,dword ptr [EBP + -0x1a]     ; 0048da8d
    PUSH EDI                            ; 0048da90
    PUSH 0x5be5b2                       ; 0048da91 | = "%s doesn't have hand %d"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048da96
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0xc                         ; 0048da9b
    LEA ESP,[EBP + 0xfa]                ; 0048da9e
    POP EBP                             ; 0048daa4
    POP EDI                             ; 0048daa5
    POP ESI                             ; 0048daa6
    POP EBX                             ; 0048daa7
    RET                                 ; 0048daa8
    PUSH 0x15                           ; 0048daa9
        ;   Label: LAB_0048daa9
    PUSH 0x5be5ca                       ; 0048daab | = "enableFieldNotesEntry"
    PUSH EBX                            ; 0048dab0
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048dab1
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048dab6
    TEST EAX,EAX                        ; 0048dab9
    JNZ 0x0048dc27                      ; 0048dabb
        ;   XREF to: 0048dc27 (CONDITIONAL_JUMP)  ; LAB_0048dc27
    MOV AL,byte ptr [EBX + 0x15]        ; 0048dac1
    INC AL                              ; 0048dac4
    AND EAX,0xff                        ; 0048dac6
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048dacb | DAT_006074b8
    JNZ 0x0048dc27                      ; 0048dad2
        ;   XREF to: 0048dc27 (CONDITIONAL_JUMP)  ; LAB_0048dc27
    LEA EAX,[EBX + 0x15]                ; 0048dad8
    MOV BL,byte ptr [EAX]               ; 0048dadb
        ;   Label: LAB_0048dadb
    XOR ECX,ECX                         ; 0048dadd
    INC BL                              ; 0048dadf
    MOV CL,BL                           ; 0048dae1
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048dae3 | DAT_006074b8
    JZ 0x0048daef                       ; 0048daea
        ;   XREF to: 0048daef (CONDITIONAL_JUMP)  ; LAB_0048daef
    INC EAX                             ; 0048daec
    JMP 0x0048dadb                      ; 0048daed
        ;   XREF to: 0048dadb (UNCONDITIONAL_JUMP)  ; LAB_0048dadb
    LEA ECX,[EBP + -0x16]               ; 0048daef
        ;   Label: LAB_0048daef
    PUSH ECX                            ; 0048daf2
    LEA ECX,[EBP + 0xffffd90e]          ; 0048daf3
    PUSH ECX                            ; 0048daf9
    PUSH 0x5be5e0                       ; 0048dafa | = "(%[^)])%n"
    MOV EDX,0xffffffff                  ; 0048daff
    PUSH EAX                            ; 0048db04
    MOV dword ptr [EBP + -0x62],EAX     ; 0048db05
    MOV dword ptr [EBP + -0x16],EDX     ; 0048db08
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048db0b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x16]     ; 0048db10
    ADD ESP,0x10                        ; 0048db13
    CMP ECX,0x3                         ; 0048db16
    JL 0x0048db83                       ; 0048db19
        ;   XREF to: 0048db83 (CONDITIONAL_JUMP)  ; LAB_0048db83
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048db1b
    LEA ESI,[EBP + 0xffffd90e]          ; 0048db1e
    ADD EBX,ECX                         ; 0048db24
    LEA EDI,[EBP + 0xffffd90e]          ; 0048db26
    MOV dword ptr [EBP + -0x62],EBX     ; 0048db2c
    SUB ECX,ECX                         ; 0048db2f
    DEC ECX                             ; 0048db31
    XOR EAX,EAX                         ; 0048db32
    SCASB.REPNE ES:EDI                  ; 0048db34
    NOT ECX                             ; 0048db36
    DEC ECX                             ; 0048db38
    MOV EBX,ECX                         ; 0048db39
    TEST ECX,ECX                        ; 0048db3b
    JLE 0x0048db5a                      ; 0048db3d
        ;   XREF to: 0048db5a (CONDITIONAL_JUMP)  ; LAB_0048db5a
    LEA EAX,[EBP + 0xffffd90e]          ; 0048db3f
    ADD ECX,EAX                         ; 0048db45
    MOV AL,byte ptr [ECX + -0x1]        ; 0048db47
        ;   Label: LAB_0048db47
    INC AL                              ; 0048db4a
    AND EAX,0xff                        ; 0048db4c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048db51 | DAT_006074b8
    JNZ 0x0048db9b                      ; 0048db58
        ;   XREF to: 0048db9b (CONDITIONAL_JUMP)  ; LAB_0048db9b
    LEA EAX,[ESI + EBX*0x1]             ; 0048db5a
        ;   Label: LAB_0048db5a
    LEA EDI,[ESI + 0x1]                 ; 0048db5d
    MOV byte ptr [EAX],0x0              ; 0048db60
    MOV AL,byte ptr [ESI]               ; 0048db63
        ;   Label: LAB_0048db63
    INC AL                              ; 0048db65
    AND EAX,0xff                        ; 0048db67
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048db6c | DAT_006074b8
    JZ 0x0048dba3                       ; 0048db73
        ;   XREF to: 0048dba3 (CONDITIONAL_JUMP)  ; LAB_0048dba3
    PUSH EBX                            ; 0048db75
    PUSH EDI                            ; 0048db76
    PUSH ESI                            ; 0048db77
    DEC EBX                             ; 0048db78
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048db79
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048db7e
    JMP 0x0048db63                      ; 0048db81
        ;   XREF to: 0048db63 (UNCONDITIONAL_JUMP)  ; LAB_0048db63
    PUSH 0x5be5ea                       ; 0048db83 | = "Error parsing enableFieldNotesEntry c..."
        ;   Label: LAB_0048db83
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048db88
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048db8d
    LEA ESP,[EBP + 0xfa]                ; 0048db90
    POP EBP                             ; 0048db96
    POP EDI                             ; 0048db97
    POP ESI                             ; 0048db98
    POP EBX                             ; 0048db99
    RET                                 ; 0048db9a
    DEC EBX                             ; 0048db9b
        ;   Label: LAB_0048db9b
    DEC ECX                             ; 0048db9c
    TEST EBX,EBX                        ; 0048db9d
    JG 0x0048db47                       ; 0048db9f
        ;   XREF to: 0048db47 (CONDITIONAL_JUMP)  ; LAB_0048db47
    JMP 0x0048db5a                      ; 0048dba1
        ;   XREF to: 0048db5a (UNCONDITIONAL_JUMP)  ; LAB_0048db5a
    CMP dword ptr [0x01c734ac],0x0      ; 0048dba3 | DAT_01c734ac
        ;   Label: LAB_0048dba3
    JNZ 0x0048dc05                      ; 0048dbaa
        ;   XREF to: 0048dc05 (CONDITIONAL_JUMP)  ; LAB_0048dc05
    LEA EAX,[EBP + 0xffffd90e]          ; 0048dbac
    PUSH EAX                            ; 0048dbb2
    MOV EDI,dword ptr [0x005fe4b0]      ; 0048dbb3 | g_CFieldNotesPtr
    PUSH EDI                            ; 0048dbb9 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10 ; 0048dbba
        ;   XREF to: 004aba10 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 0048dbbf
    JMP 0x0048c7d2                      ; 0048dbc2
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffd90e]          ; 0048dbc7
        ;   Label: caseD_2
    PUSH EAX                            ; 0048dbcd
    PUSH 0x5be616                       ; 0048dbce | = "Field notes entry '%s' is a task (use..."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048dbd3
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048dbd8
    LEA ESP,[EBP + 0xfa]                ; 0048dbdb
    POP EBP                             ; 0048dbe1
    POP EDI                             ; 0048dbe2
    POP ESI                             ; 0048dbe3
    POP EBX                             ; 0048dbe4
    RET                                 ; 0048dbe5
    LEA EAX,[EBP + 0xffffd90e]          ; 0048dbe6
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 0048dbec
    PUSH 0x5be658                       ; 0048dbed | = "Field notes entry '%s' not found"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048dbf2
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048dbf7
    LEA ESP,[EBP + 0xfa]                ; 0048dbfa
    POP EBP                             ; 0048dc00
    POP EDI                             ; 0048dc01
    POP ESI                             ; 0048dc02
    POP EBX                             ; 0048dc03
    RET                                 ; 0048dc04
    LEA EAX,[EBP + 0xffffd90e]          ; 0048dc05
        ;   Label: LAB_0048dc05
    PUSH EAX                            ; 0048dc0b
    MOV EAX,[0x005fe4b0]                ; 0048dc0c | g_CFieldNotesPtr
    PUSH EAX                            ; 0048dc11 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004abb30 ; 0048dc12
        ;   XREF to: 004abb30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abb30()
    INC EAX                             ; 0048dc17
    ADD ESP,0x8                         ; 0048dc18
    CMP EAX,0x7                         ; 0048dc1b
    JA 0x0048dbe6                       ; 0048dc1e
        ;   XREF to: 0048dbe6 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x48c278]  ; 0048dc20 | caseD_ffffffff | caseD_6 | caseD_4
        ;   Label: switchD
    PUSH 0x1a                           ; 0048dc27
        ;   Label: LAB_0048dc27
    PUSH 0x5be679                       ; 0048dc29 | = "enableFieldNotesAnnotation"
    PUSH EBX                            ; 0048dc2e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048dc2f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048dc34
    TEST EAX,EAX                        ; 0048dc37
    JNZ 0x0048de43                      ; 0048dc39
        ;   XREF to: 0048de43 (CONDITIONAL_JUMP)  ; LAB_0048de43
    MOV AL,byte ptr [EBX + 0x1a]        ; 0048dc3f
    INC AL                              ; 0048dc42
    AND EAX,0xff                        ; 0048dc44
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048dc49 | DAT_006074b8
    JNZ 0x0048de43                      ; 0048dc50
        ;   XREF to: 0048de43 (CONDITIONAL_JUMP)  ; LAB_0048de43
    LEA EAX,[EBX + 0x1a]                ; 0048dc56
    MOV BL,byte ptr [EAX]               ; 0048dc59
        ;   Label: LAB_0048dc59
    XOR ECX,ECX                         ; 0048dc5b
    INC BL                              ; 0048dc5d
    MOV CL,BL                           ; 0048dc5f
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048dc61 | DAT_006074b8
    JZ 0x0048dc6d                       ; 0048dc68
        ;   XREF to: 0048dc6d (CONDITIONAL_JUMP)  ; LAB_0048dc6d
    INC EAX                             ; 0048dc6a
    JMP 0x0048dc59                      ; 0048dc6b
        ;   XREF to: 0048dc59 (UNCONDITIONAL_JUMP)  ; LAB_0048dc59
    LEA ECX,[EBP + -0x12]               ; 0048dc6d
        ;   Label: LAB_0048dc6d
    PUSH ECX                            ; 0048dc70
    LEA ECX,[EBP + 0xffffd60e]          ; 0048dc71
    PUSH ECX                            ; 0048dc77
    LEA ECX,[EBP + 0xffffd70e]          ; 0048dc78
    PUSH ECX                            ; 0048dc7e
    PUSH 0x5be694                       ; 0048dc7f | = "(%[^,], %[^)])%n"
    MOV EDX,0xffffffff                  ; 0048dc84
    PUSH EAX                            ; 0048dc89
    MOV dword ptr [EBP + -0x62],EAX     ; 0048dc8a
    MOV dword ptr [EBP + -0x12],EDX     ; 0048dc8d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048dc90
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x12]     ; 0048dc95
    ADD ESP,0x14                        ; 0048dc98
    CMP ECX,0x4                         ; 0048dc9b
    JL 0x0048dd08                       ; 0048dc9e
        ;   XREF to: 0048dd08 (CONDITIONAL_JUMP)  ; LAB_0048dd08
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048dca0
    ADD EBX,ECX                         ; 0048dca3
    LEA EDI,[EBP + 0xffffd60e]          ; 0048dca5
    MOV dword ptr [EBP + -0x62],EBX     ; 0048dcab
    SUB ECX,ECX                         ; 0048dcae
    DEC ECX                             ; 0048dcb0
    XOR EAX,EAX                         ; 0048dcb1
    SCASB.REPNE ES:EDI                  ; 0048dcb3
    NOT ECX                             ; 0048dcb5
    DEC ECX                             ; 0048dcb7
    LEA EBX,[EBP + 0xffffd60e]          ; 0048dcb8
    MOV EDI,ECX                         ; 0048dcbe
    TEST ECX,ECX                        ; 0048dcc0
    JLE 0x0048dcdf                      ; 0048dcc2
        ;   XREF to: 0048dcdf (CONDITIONAL_JUMP)  ; LAB_0048dcdf
    LEA EAX,[EBP + 0xffffd60e]          ; 0048dcc4
    ADD ECX,EAX                         ; 0048dcca
    MOV AL,byte ptr [ECX + -0x1]        ; 0048dccc
        ;   Label: LAB_0048dccc
    INC AL                              ; 0048dccf
    AND EAX,0xff                        ; 0048dcd1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048dcd6 | DAT_006074b8
    JNZ 0x0048dd20                      ; 0048dcdd
        ;   XREF to: 0048dd20 (CONDITIONAL_JUMP)  ; LAB_0048dd20
    LEA EAX,[EBX + EDI*0x1]             ; 0048dcdf
        ;   Label: LAB_0048dcdf
    LEA ESI,[EBX + 0x1]                 ; 0048dce2
    MOV byte ptr [EAX],0x0              ; 0048dce5
    MOV AL,byte ptr [EBX]               ; 0048dce8
        ;   Label: LAB_0048dce8
    INC AL                              ; 0048dcea
    AND EAX,0xff                        ; 0048dcec
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048dcf1 | DAT_006074b8
    JZ 0x0048dd28                       ; 0048dcf8
        ;   XREF to: 0048dd28 (CONDITIONAL_JUMP)  ; LAB_0048dd28
    PUSH EDI                            ; 0048dcfa
    PUSH ESI                            ; 0048dcfb
    PUSH EBX                            ; 0048dcfc
    DEC EDI                             ; 0048dcfd
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048dcfe
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048dd03
    JMP 0x0048dce8                      ; 0048dd06
        ;   XREF to: 0048dce8 (UNCONDITIONAL_JUMP)  ; LAB_0048dce8
    PUSH 0x5be6a5                       ; 0048dd08 | = "Error parsing enableFieldNotesAnnotat..."
        ;   Label: LAB_0048dd08
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048dd0d
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048dd12
    LEA ESP,[EBP + 0xfa]                ; 0048dd15
    POP EBP                             ; 0048dd1b
    POP EDI                             ; 0048dd1c
    POP ESI                             ; 0048dd1d
    POP EBX                             ; 0048dd1e
    RET                                 ; 0048dd1f
    DEC EDI                             ; 0048dd20
        ;   Label: LAB_0048dd20
    DEC ECX                             ; 0048dd21
    TEST EDI,EDI                        ; 0048dd22
    JG 0x0048dccc                       ; 0048dd24
        ;   XREF to: 0048dccc (CONDITIONAL_JUMP)  ; LAB_0048dccc
    JMP 0x0048dcdf                      ; 0048dd26
        ;   XREF to: 0048dcdf (UNCONDITIONAL_JUMP)  ; LAB_0048dcdf
    LEA EDI,[EBP + 0xffffd70e]          ; 0048dd28
        ;   Label: LAB_0048dd28
    LEA EBX,[EBP + 0xffffd70e]          ; 0048dd2e
    SUB ECX,ECX                         ; 0048dd34
    DEC ECX                             ; 0048dd36
    XOR EAX,EAX                         ; 0048dd37
    SCASB.REPNE ES:EDI                  ; 0048dd39
    NOT ECX                             ; 0048dd3b
    DEC ECX                             ; 0048dd3d
    MOV EDI,ECX                         ; 0048dd3e
    TEST ECX,ECX                        ; 0048dd40
    JLE 0x0048dd5f                      ; 0048dd42
        ;   XREF to: 0048dd5f (CONDITIONAL_JUMP)  ; LAB_0048dd5f
    LEA EAX,[EBP + 0xffffd70e]          ; 0048dd44
    ADD ECX,EAX                         ; 0048dd4a
    MOV AL,byte ptr [ECX + -0x1]        ; 0048dd4c
        ;   Label: LAB_0048dd4c
    INC AL                              ; 0048dd4f
    AND EAX,0xff                        ; 0048dd51
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048dd56 | DAT_006074b8
    JNZ 0x0048dd88                      ; 0048dd5d
        ;   XREF to: 0048dd88 (CONDITIONAL_JUMP)  ; LAB_0048dd88
    LEA EAX,[EBX + EDI*0x1]             ; 0048dd5f
        ;   Label: LAB_0048dd5f
    LEA ESI,[EBX + 0x1]                 ; 0048dd62
    MOV byte ptr [EAX],0x0              ; 0048dd65
    MOV AL,byte ptr [EBX]               ; 0048dd68
        ;   Label: LAB_0048dd68
    INC AL                              ; 0048dd6a
    AND EAX,0xff                        ; 0048dd6c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048dd71 | DAT_006074b8
    JZ 0x0048dd90                       ; 0048dd78
        ;   XREF to: 0048dd90 (CONDITIONAL_JUMP)  ; LAB_0048dd90
    PUSH EDI                            ; 0048dd7a
    PUSH ESI                            ; 0048dd7b
    PUSH EBX                            ; 0048dd7c
    DEC EDI                             ; 0048dd7d
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048dd7e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048dd83
    JMP 0x0048dd68                      ; 0048dd86
        ;   XREF to: 0048dd68 (UNCONDITIONAL_JUMP)  ; LAB_0048dd68
    DEC EDI                             ; 0048dd88
        ;   Label: LAB_0048dd88
    DEC ECX                             ; 0048dd89
    TEST EDI,EDI                        ; 0048dd8a
    JG 0x0048dd4c                       ; 0048dd8c
        ;   XREF to: 0048dd4c (CONDITIONAL_JUMP)  ; LAB_0048dd4c
    JMP 0x0048dd5f                      ; 0048dd8e
        ;   XREF to: 0048dd5f (UNCONDITIONAL_JUMP)  ; LAB_0048dd5f
    CMP dword ptr [0x01c734ac],0x0      ; 0048dd90 | DAT_01c734ac
        ;   Label: LAB_0048dd90
    JNZ 0x0048de21                      ; 0048dd97
        ;   XREF to: 0048de21 (CONDITIONAL_JUMP)  ; LAB_0048de21
    LEA EAX,[EBP + 0xffffdd0e]          ; 0048dd9d
    PUSH EAX                            ; 0048dda3
    LEA EAX,[EBP + 0xffffd60e]          ; 0048dda4
    PUSH EAX                            ; 0048ddaa
    LEA EAX,[EBP + 0xffffd70e]          ; 0048ddab
    PUSH EAX                            ; 0048ddb1
    MOV EDI,dword ptr [0x005fe4b0]      ; 0048ddb2 | g_CFieldNotesPtr
    PUSH EDI                            ; 0048ddb8 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004ab8f0 ; 0048ddb9
        ;   XREF to: 004ab8f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ab8f0()
    ADD ESP,0x10                        ; 0048ddbe
    TEST EAX,EAX                        ; 0048ddc1
    JNZ 0x0048c7d2                      ; 0048ddc3
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffdd0e]          ; 0048ddc9
    PUSH EAX                            ; 0048ddcf
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ddd0
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048ddd5
    LEA ESP,[EBP + 0xfa]                ; 0048ddd8
    POP EBP                             ; 0048ddde
    POP EDI                             ; 0048dddf
    POP ESI                             ; 0048dde0
    POP EBX                             ; 0048dde1
    RET                                 ; 0048dde2
    LEA EAX,[EBP + 0xffffd60e]          ; 0048dde3
        ;   Label: caseD_2
    PUSH EAX                            ; 0048dde9
    PUSH 0x5be6d6                       ; 0048ddea | = "Field notes entry '%s' is a task (use..."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ddef
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048ddf4
    LEA ESP,[EBP + 0xfa]                ; 0048ddf7
    POP EBP                             ; 0048ddfd
    POP EDI                             ; 0048ddfe
    POP ESI                             ; 0048ddff
    POP EBX                             ; 0048de00
    RET                                 ; 0048de01
    LEA EAX,[EBP + 0xffffd60e]          ; 0048de02
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 0048de08
    PUSH 0x5be718                       ; 0048de09 | = "Field notes entry '%s' not found"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048de0e
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048de13
    LEA ESP,[EBP + 0xfa]                ; 0048de16
    POP EBP                             ; 0048de1c
    POP EDI                             ; 0048de1d
    POP ESI                             ; 0048de1e
    POP EBX                             ; 0048de1f
    RET                                 ; 0048de20
    LEA EAX,[EBP + 0xffffd60e]          ; 0048de21
        ;   Label: LAB_0048de21
    PUSH EAX                            ; 0048de27
    MOV EAX,[0x005fe4b0]                ; 0048de28 | g_CFieldNotesPtr
    PUSH EAX                            ; 0048de2d | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004abb30 ; 0048de2e
        ;   XREF to: 004abb30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abb30()
    INC EAX                             ; 0048de33
    ADD ESP,0x8                         ; 0048de34
    CMP EAX,0x7                         ; 0048de37
    JA 0x0048de02                       ; 0048de3a
        ;   XREF to: 0048de02 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x48c298]  ; 0048de3c | caseD_ffffffff | caseD_6 | caseD_4
        ;   Label: switchD
    PUSH 0x10                           ; 0048de43
        ;   Label: LAB_0048de43
    PUSH 0x5be739                       ; 0048de45 | = "fadeAmbientSound"
    PUSH EBX                            ; 0048de4a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048de4b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048de50
    TEST EAX,EAX                        ; 0048de53
    JNZ 0x0048df01                      ; 0048de55
        ;   XREF to: 0048df01 (CONDITIONAL_JUMP)  ; LAB_0048df01
    MOV AL,byte ptr [EBX + 0x10]        ; 0048de5b
    INC AL                              ; 0048de5e
    AND EAX,0xff                        ; 0048de60
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048de65 | DAT_006074b8
    JNZ 0x0048df01                      ; 0048de6c
        ;   XREF to: 0048df01 (CONDITIONAL_JUMP)  ; LAB_0048df01
    LEA EAX,[EBX + 0x10]                ; 0048de72
    MOV BL,byte ptr [EAX]               ; 0048de75
        ;   Label: LAB_0048de75
    XOR ECX,ECX                         ; 0048de77
    INC BL                              ; 0048de79
    MOV CL,BL                           ; 0048de7b
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048de7d | DAT_006074b8
    JZ 0x0048de89                       ; 0048de84
        ;   XREF to: 0048de89 (CONDITIONAL_JUMP)  ; LAB_0048de89
    INC EAX                             ; 0048de86
    JMP 0x0048de75                      ; 0048de87
        ;   XREF to: 0048de75 (UNCONDITIONAL_JUMP)  ; LAB_0048de75
    LEA ECX,[EBP + -0x6]                ; 0048de89
        ;   Label: LAB_0048de89
    PUSH ECX                            ; 0048de8c
    LEA ECX,[EBP + -0xa]                ; 0048de8d
    PUSH ECX                            ; 0048de90
    LEA ECX,[EBP + -0xe]                ; 0048de91
    PUSH ECX                            ; 0048de94
    PUSH 0x5be74a                       ; 0048de95 | = "(%f, %f )%n"
    MOV EDX,0xffffffff                  ; 0048de9a
    PUSH EAX                            ; 0048de9f
    MOV dword ptr [EBP + -0x62],EAX     ; 0048dea0
    MOV dword ptr [EBP + -0x6],EDX      ; 0048dea3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048dea6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x6]      ; 0048deab
    ADD ESP,0x14                        ; 0048deae
    TEST ECX,ECX                        ; 0048deb1
    JL 0x0048dee2                       ; 0048deb3
        ;   XREF to: 0048dee2 (CONDITIONAL_JUMP)  ; LAB_0048dee2
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048deb5
    ADD EBX,ECX                         ; 0048deb8
    MOV ESI,dword ptr [EBP + -0x66]     ; 0048deba
    MOV dword ptr [EBP + -0x62],EBX     ; 0048debd
    TEST ESI,ESI                        ; 0048dec0
    JZ 0x0048c7d2                       ; 0048dec2
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + -0xa]         ; 0048dec8
    MOV EDI,dword ptr [0x006045f8]      ; 0048decb | DAT_006045f8
    PUSH dword ptr [EBP + -0xe]         ; 0048ded1
    PUSH EDI                            ; 0048ded4
    CALL core_sound.cpp_CSound_setVolumeFade_FUN_00560d30 ; 0048ded5
        ;   XREF to: 00560d30 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setVolumeFade_FUN_00560d30(CSound * this_ptr, float target_volume, float fade_time)
    ADD ESP,0xc                         ; 0048deda
    JMP 0x0048c7d2                      ; 0048dedd
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5be756                       ; 0048dee2 | = "Error parsing fadeAmbientSound parms"
        ;   Label: LAB_0048dee2
    PUSH 0x1c734b0                      ; 0048dee7 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048deec
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048def1
    XOR EAX,EAX                         ; 0048def4
    LEA ESP,[EBP + 0xfa]                ; 0048def6
    POP EBP                             ; 0048defc
    POP EDI                             ; 0048defd
    POP ESI                             ; 0048defe
    POP EBX                             ; 0048deff
    RET                                 ; 0048df00
    PUSH 0x7                            ; 0048df01
        ;   Label: LAB_0048df01
    PUSH 0x5be77b                       ; 0048df03 | = "fadeSfx"
    PUSH EBX                            ; 0048df08
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048df09
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048df0e
    TEST EAX,EAX                        ; 0048df11
    JNZ 0x0048e05e                      ; 0048df13
        ;   XREF to: 0048e05e (CONDITIONAL_JUMP)  ; LAB_0048e05e
    MOV AL,byte ptr [EBX + 0x7]         ; 0048df19
    INC AL                              ; 0048df1c
    AND EAX,0xff                        ; 0048df1e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048df23 | DAT_006074b8
    JNZ 0x0048e05e                      ; 0048df2a
        ;   XREF to: 0048e05e (CONDITIONAL_JUMP)  ; LAB_0048e05e
    LEA EAX,[EBX + 0x7]                 ; 0048df30
    MOV BL,byte ptr [EAX]               ; 0048df33
        ;   Label: LAB_0048df33
    XOR ECX,ECX                         ; 0048df35
    INC BL                              ; 0048df37
    MOV CL,BL                           ; 0048df39
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048df3b | DAT_006074b8
    JZ 0x0048df47                       ; 0048df42
        ;   XREF to: 0048df47 (CONDITIONAL_JUMP)  ; LAB_0048df47
    INC EAX                             ; 0048df44
    JMP 0x0048df33                      ; 0048df45
        ;   XREF to: 0048df33 (UNCONDITIONAL_JUMP)  ; LAB_0048df33
    LEA ECX,[EBP + 0x6]                 ; 0048df47
        ;   Label: LAB_0048df47
    PUSH ECX                            ; 0048df4a
    LEA ECX,[EBP + 0x2]                 ; 0048df4b
    PUSH ECX                            ; 0048df4e
    LEA ECX,[EBP + -0x2]                ; 0048df4f
    PUSH ECX                            ; 0048df52
    LEA ECX,[EBP + 0xffffe6de]          ; 0048df53
    PUSH ECX                            ; 0048df59
    PUSH 0x5be783                       ; 0048df5a | = "(%[^,], %f, %f )%n"
    MOV EDX,0xffffffff                  ; 0048df5f
    PUSH EAX                            ; 0048df64
    MOV dword ptr [EBP + -0x62],EAX     ; 0048df65
    MOV dword ptr [EBP + 0x6],EDX       ; 0048df68
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048df6b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x6]       ; 0048df70
    ADD ESP,0x18                        ; 0048df73
    TEST ECX,ECX                        ; 0048df76
    JL 0x0048dfe2                       ; 0048df78
        ;   XREF to: 0048dfe2 (CONDITIONAL_JUMP)  ; LAB_0048dfe2
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048df7a
    LEA ESI,[EBP + 0xffffe6de]          ; 0048df7d
    ADD EBX,ECX                         ; 0048df83
    LEA EDI,[EBP + 0xffffe6de]          ; 0048df85
    MOV dword ptr [EBP + -0x62],EBX     ; 0048df8b
    SUB ECX,ECX                         ; 0048df8e
    DEC ECX                             ; 0048df90
    XOR EAX,EAX                         ; 0048df91
    SCASB.REPNE ES:EDI                  ; 0048df93
    NOT ECX                             ; 0048df95
    DEC ECX                             ; 0048df97
    MOV EBX,ECX                         ; 0048df98
    TEST ECX,ECX                        ; 0048df9a
    JLE 0x0048dfb9                      ; 0048df9c
        ;   XREF to: 0048dfb9 (CONDITIONAL_JUMP)  ; LAB_0048dfb9
    LEA EAX,[EBP + 0xffffe6de]          ; 0048df9e
    ADD ECX,EAX                         ; 0048dfa4
    MOV AL,byte ptr [ECX + -0x1]        ; 0048dfa6
        ;   Label: LAB_0048dfa6
    INC AL                              ; 0048dfa9
    AND EAX,0xff                        ; 0048dfab
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048dfb0 | DAT_006074b8
    JNZ 0x0048e001                      ; 0048dfb7
        ;   XREF to: 0048e001 (CONDITIONAL_JUMP)  ; LAB_0048e001
    LEA EAX,[ESI + EBX*0x1]             ; 0048dfb9
        ;   Label: LAB_0048dfb9
    LEA EDI,[ESI + 0x1]                 ; 0048dfbc
    MOV byte ptr [EAX],0x0              ; 0048dfbf
    MOV AL,byte ptr [ESI]               ; 0048dfc2
        ;   Label: LAB_0048dfc2
    INC AL                              ; 0048dfc4
    AND EAX,0xff                        ; 0048dfc6
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048dfcb | DAT_006074b8
    JZ 0x0048e009                       ; 0048dfd2
        ;   XREF to: 0048e009 (CONDITIONAL_JUMP)  ; LAB_0048e009
    PUSH EBX                            ; 0048dfd4
    PUSH EDI                            ; 0048dfd5
    PUSH ESI                            ; 0048dfd6
    DEC EBX                             ; 0048dfd7
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048dfd8
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048dfdd
    JMP 0x0048dfc2                      ; 0048dfe0
        ;   XREF to: 0048dfc2 (UNCONDITIONAL_JUMP)  ; LAB_0048dfc2
    PUSH 0x5be796                       ; 0048dfe2 | = "Error parsing fadeSfx parms"
        ;   Label: LAB_0048dfe2
    PUSH 0x1c734b0                      ; 0048dfe7 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048dfec
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048dff1
    XOR EAX,EAX                         ; 0048dff4
    LEA ESP,[EBP + 0xfa]                ; 0048dff6
    POP EBP                             ; 0048dffc
    POP EDI                             ; 0048dffd
    POP ESI                             ; 0048dffe
    POP EBX                             ; 0048dfff
    RET                                 ; 0048e000
    DEC EBX                             ; 0048e001
        ;   Label: LAB_0048e001
    DEC ECX                             ; 0048e002
    TEST EBX,EBX                        ; 0048e003
    JG 0x0048dfa6                       ; 0048e005
        ;   XREF to: 0048dfa6 (CONDITIONAL_JUMP)  ; LAB_0048dfa6
    JMP 0x0048dfb9                      ; 0048e007
        ;   XREF to: 0048dfb9 (UNCONDITIONAL_JUMP)  ; LAB_0048dfb9
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e009
        ;   Label: LAB_0048e009
    JZ 0x0048c7d2                       ; 0048e00d
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffe6de]          ; 0048e013
    PUSH EAX                            ; 0048e019
    MOV EDI,dword ptr [EBP + 0x10e]     ; 0048e01a
    PUSH EDI                            ; 0048e020
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_00495110 ; 0048e021
        ;   XREF to: 00495110 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_00495110(CEventList * this_ptr, char * name)
    FLD float ptr [EBP + 0x2]           ; 0048e026
    FLDZ                                ; 0048e029
    MOV ECX,EAX                         ; 0048e02b
    ADD ESP,0x8                         ; 0048e02d
    FCOMPP                              ; 0048e030
    FNSTSW AX                           ; 0048e032
    SAHF                                ; 0048e034
    JNC 0x0048e04d                      ; 0048e035
        ;   XREF to: 0048e04d (CONDITIONAL_JUMP)  ; LAB_0048e04d
    PUSH 0x0                            ; 0048e037
    PUSH dword ptr [EBP + 0x2]          ; 0048e039
    PUSH dword ptr [EBP + -0x2]         ; 0048e03c
    PUSH ECX                            ; 0048e03f
    CALL sound_sndmain.cpp_setSfxFade_FUN_00556c10 ; 0048e040
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_00556c10(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 0048e045
    JMP 0x0048c7d2                      ; 0048e048
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + -0x2]         ; 0048e04d
        ;   Label: LAB_0048e04d
    PUSH ECX                            ; 0048e050
    CALL sound_sndmain.cpp_FUN_00556ab0 ; 0048e051
        ;   XREF to: 00556ab0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ab0()
    ADD ESP,0x8                         ; 0048e056
    JMP 0x0048c7d2                      ; 0048e059
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x6                            ; 0048e05e
        ;   Label: LAB_0048e05e
    PUSH 0x5be7b2                       ; 0048e060 | = "flagOn"
    PUSH EBX                            ; 0048e065
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e066
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e06b
    TEST EAX,EAX                        ; 0048e06e
    JNZ 0x0048e0e9                      ; 0048e070
        ;   XREF to: 0048e0e9 (CONDITIONAL_JUMP)  ; LAB_0048e0e9
    MOV AL,byte ptr [EBX + 0x6]         ; 0048e076
    INC AL                              ; 0048e079
    AND EAX,0xff                        ; 0048e07b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e080 | DAT_006074b8
    JNZ 0x0048e0e9                      ; 0048e087
        ;   XREF to: 0048e0e9 (CONDITIONAL_JUMP)  ; LAB_0048e0e9
    LEA EAX,[EBX + 0x6]                 ; 0048e089
    MOV BL,byte ptr [EAX]               ; 0048e08c
        ;   Label: LAB_0048e08c
    XOR ECX,ECX                         ; 0048e08e
    INC BL                              ; 0048e090
    MOV CL,BL                           ; 0048e092
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e094 | DAT_006074b8
    JZ 0x0048e0a0                       ; 0048e09b
        ;   XREF to: 0048e0a0 (CONDITIONAL_JUMP)  ; LAB_0048e0a0
    INC EAX                             ; 0048e09d
    JMP 0x0048e08c                      ; 0048e09e
        ;   XREF to: 0048e08c (UNCONDITIONAL_JUMP)  ; LAB_0048e08c
    PUSH 0x1                            ; 0048e0a0
        ;   Label: LAB_0048e0a0
    PUSH 0x20                           ; 0048e0a2
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e0a4
    LEA EAX,[EBP + 0xfffffe7e]          ; 0048e0a7
    PUSH EAX                            ; 0048e0ad
    LEA EAX,[EBP + -0x62]               ; 0048e0ae
    PUSH EAX                            ; 0048e0b1
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048e0b2
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048e0b7
    TEST EAX,EAX                        ; 0048e0ba
    JNZ 0x0048c717                      ; 0048e0bc
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e0c2
    JZ 0x0048c7d2                       ; 0048e0c6
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0048e0cc
    LEA EAX,[EBP + 0xfffffe7e]          ; 0048e0ce
    PUSH EAX                            ; 0048e0d4
    MOV EDX,dword ptr [EBP + 0x10e]     ; 0048e0d5
    PUSH EDX                            ; 0048e0db
    CALL core_event.cpp_FUN_004946f0    ; 0048e0dc
        ;   XREF to: 004946f0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004946f0()
    ADD ESP,0xc                         ; 0048e0e1
    JMP 0x0048c7d2                      ; 0048e0e4
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x7                            ; 0048e0e9
        ;   Label: LAB_0048e0e9
    PUSH 0x5be7b9                       ; 0048e0eb | = "flagOff"
    PUSH EBX                            ; 0048e0f0
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e0f1
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e0f6
    TEST EAX,EAX                        ; 0048e0f9
    JNZ 0x0048e16f                      ; 0048e0fb
        ;   XREF to: 0048e16f (CONDITIONAL_JUMP)  ; LAB_0048e16f
    MOV AL,byte ptr [EBX + 0x7]         ; 0048e0fd
    INC AL                              ; 0048e100
    AND EAX,0xff                        ; 0048e102
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e107 | DAT_006074b8
    JNZ 0x0048e16f                      ; 0048e10e
        ;   XREF to: 0048e16f (CONDITIONAL_JUMP)  ; LAB_0048e16f
    LEA EAX,[EBX + 0x7]                 ; 0048e110
    MOV BL,byte ptr [EAX]               ; 0048e113
        ;   Label: LAB_0048e113
    XOR ECX,ECX                         ; 0048e115
    INC BL                              ; 0048e117
    MOV CL,BL                           ; 0048e119
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e11b | DAT_006074b8
    JZ 0x0048e127                       ; 0048e122
        ;   XREF to: 0048e127 (CONDITIONAL_JUMP)  ; LAB_0048e127
    INC EAX                             ; 0048e124
    JMP 0x0048e113                      ; 0048e125
        ;   XREF to: 0048e113 (UNCONDITIONAL_JUMP)  ; LAB_0048e113
    PUSH 0x1                            ; 0048e127
        ;   Label: LAB_0048e127
    PUSH 0x20                           ; 0048e129
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e12b
    LEA EAX,[EBP + 0xfffffe9e]          ; 0048e12e
    PUSH EAX                            ; 0048e134
    LEA EAX,[EBP + -0x62]               ; 0048e135
    PUSH EAX                            ; 0048e138
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048e139
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048e13e
    TEST EAX,EAX                        ; 0048e141
    JNZ 0x0048c717                      ; 0048e143
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e149
    JZ 0x0048c7d2                       ; 0048e14d
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 0048e153
    LEA EAX,[EBP + 0xfffffe9e]          ; 0048e154
    PUSH EAX                            ; 0048e15a
    MOV EBX,dword ptr [EBP + 0x10e]     ; 0048e15b
    PUSH EBX                            ; 0048e161
    CALL core_event.cpp_FUN_004946f0    ; 0048e162
        ;   XREF to: 004946f0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004946f0()
    ADD ESP,0xc                         ; 0048e167
    JMP 0x0048c7d2                      ; 0048e16a
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xa                            ; 0048e16f
        ;   Label: LAB_0048e16f
    PUSH 0x5be7c1                       ; 0048e171 | = "gameFlagOn"
    PUSH EBX                            ; 0048e176
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e177
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e17c
    TEST EAX,EAX                        ; 0048e17f
    JNZ 0x0048e1fa                      ; 0048e181
        ;   XREF to: 0048e1fa (CONDITIONAL_JUMP)  ; LAB_0048e1fa
    MOV AL,byte ptr [EBX + 0xa]         ; 0048e187
    INC AL                              ; 0048e18a
    AND EAX,0xff                        ; 0048e18c
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e191 | DAT_006074b8
    JNZ 0x0048e1fa                      ; 0048e198
        ;   XREF to: 0048e1fa (CONDITIONAL_JUMP)  ; LAB_0048e1fa
    LEA EAX,[EBX + 0xa]                 ; 0048e19a
    MOV BL,byte ptr [EAX]               ; 0048e19d
        ;   Label: LAB_0048e19d
    XOR ECX,ECX                         ; 0048e19f
    INC BL                              ; 0048e1a1
    MOV CL,BL                           ; 0048e1a3
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e1a5 | DAT_006074b8
    JZ 0x0048e1b1                       ; 0048e1ac
        ;   XREF to: 0048e1b1 (CONDITIONAL_JUMP)  ; LAB_0048e1b1
    INC EAX                             ; 0048e1ae
    JMP 0x0048e19d                      ; 0048e1af
        ;   XREF to: 0048e19d (UNCONDITIONAL_JUMP)  ; LAB_0048e19d
    PUSH 0x1                            ; 0048e1b1
        ;   Label: LAB_0048e1b1
    PUSH 0x20                           ; 0048e1b3
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e1b5
    LEA EAX,[EBP + 0xfffffede]          ; 0048e1b8
    PUSH EAX                            ; 0048e1be
    LEA EAX,[EBP + -0x62]               ; 0048e1bf
    PUSH EAX                            ; 0048e1c2
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048e1c3
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048e1c8
    TEST EAX,EAX                        ; 0048e1cb
    JNZ 0x0048c717                      ; 0048e1cd
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e1d3
    JZ 0x0048c7d2                       ; 0048e1d7
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0048e1dd
    LEA EAX,[EBP + 0xfffffede]          ; 0048e1df
    PUSH EAX                            ; 0048e1e5
    MOV EDI,dword ptr [EBP + 0x10e]     ; 0048e1e6
    PUSH EDI                            ; 0048e1ec
    CALL core_event.cpp_FUN_004948e0    ; 0048e1ed
        ;   XREF to: 004948e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004948e0()
    ADD ESP,0xc                         ; 0048e1f2
    JMP 0x0048c7d2                      ; 0048e1f5
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xb                            ; 0048e1fa
        ;   Label: LAB_0048e1fa
    PUSH 0x5be7cc                       ; 0048e1fc | = "gameFlagOff"
    PUSH EBX                            ; 0048e201
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e202
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e207
    TEST EAX,EAX                        ; 0048e20a
    JNZ 0x0048e285                      ; 0048e20c
        ;   XREF to: 0048e285 (CONDITIONAL_JUMP)  ; LAB_0048e285
    MOV AL,byte ptr [EBX + 0xb]         ; 0048e212
    INC AL                              ; 0048e215
    AND EAX,0xff                        ; 0048e217
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e21c | DAT_006074b8
    JNZ 0x0048e285                      ; 0048e223
        ;   XREF to: 0048e285 (CONDITIONAL_JUMP)  ; LAB_0048e285
    LEA EAX,[EBX + 0xb]                 ; 0048e225
    MOV BL,byte ptr [EAX]               ; 0048e228
        ;   Label: LAB_0048e228
    XOR ECX,ECX                         ; 0048e22a
    INC BL                              ; 0048e22c
    MOV CL,BL                           ; 0048e22e
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e230 | DAT_006074b8
    JZ 0x0048e23c                       ; 0048e237
        ;   XREF to: 0048e23c (CONDITIONAL_JUMP)  ; LAB_0048e23c
    INC EAX                             ; 0048e239
    JMP 0x0048e228                      ; 0048e23a
        ;   XREF to: 0048e228 (UNCONDITIONAL_JUMP)  ; LAB_0048e228
    PUSH 0x1                            ; 0048e23c
        ;   Label: LAB_0048e23c
    PUSH 0x20                           ; 0048e23e
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e240
    LEA EAX,[EBP + 0xfffffebe]          ; 0048e243
    PUSH EAX                            ; 0048e249
    LEA EAX,[EBP + -0x62]               ; 0048e24a
    PUSH EAX                            ; 0048e24d
    CALL core_event.cpp_extractParenArg_FUN_0048bc10 ; 0048e24e
        ;   XREF to: 0048bc10 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_extractParenArg_FUN_0048bc10()
    ADD ESP,0x10                        ; 0048e253
    TEST EAX,EAX                        ; 0048e256
    JNZ 0x0048c717                      ; 0048e258
        ;   XREF to: 0048c717 (CONDITIONAL_JUMP)  ; LAB_0048c717
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e25e
    JZ 0x0048c7d2                       ; 0048e262
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x0                            ; 0048e268
    LEA EAX,[EBP + 0xfffffebe]          ; 0048e26a
    PUSH EAX                            ; 0048e270
    MOV EDX,dword ptr [EBP + 0x10e]     ; 0048e271
    PUSH EDX                            ; 0048e277
    CALL core_event.cpp_FUN_004948e0    ; 0048e278
        ;   XREF to: 004948e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004948e0()
    ADD ESP,0xc                         ; 0048e27d
    JMP 0x0048c7d2                      ; 0048e280
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xd                            ; 0048e285
        ;   Label: LAB_0048e285
    PUSH 0x5be7d8                       ; 0048e287 | = "hurtCharacter"
    PUSH EBX                            ; 0048e28c
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e28d
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e292
    TEST EAX,EAX                        ; 0048e295
    JNZ 0x0048e494                      ; 0048e297
        ;   XREF to: 0048e494 (CONDITIONAL_JUMP)  ; LAB_0048e494
    MOV AL,byte ptr [EBX + 0xd]         ; 0048e29d
    INC AL                              ; 0048e2a0
    AND EAX,0xff                        ; 0048e2a2
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e2a7 | DAT_006074b8
    JNZ 0x0048e494                      ; 0048e2ae
        ;   XREF to: 0048e494 (CONDITIONAL_JUMP)  ; LAB_0048e494
    LEA EAX,[EBX + 0xd]                 ; 0048e2b4
    MOV BL,byte ptr [EAX]               ; 0048e2b7
        ;   Label: LAB_0048e2b7
    XOR ECX,ECX                         ; 0048e2b9
    INC BL                              ; 0048e2bb
    MOV CL,BL                           ; 0048e2bd
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e2bf | DAT_006074b8
    JZ 0x0048e2cb                       ; 0048e2c6
        ;   XREF to: 0048e2cb (CONDITIONAL_JUMP)  ; LAB_0048e2cb
    INC EAX                             ; 0048e2c8
    JMP 0x0048e2b7                      ; 0048e2c9
        ;   XREF to: 0048e2b7 (UNCONDITIONAL_JUMP)  ; LAB_0048e2b7
    MOV dword ptr [EBP + 0xa],0xffffffff ; 0048e2cb
        ;   Label: LAB_0048e2cb
    LEA ECX,[EBP + 0xa]                 ; 0048e2d2
    PUSH ECX                            ; 0048e2d5
    LEA ECX,[EBP + 0xe]                 ; 0048e2d6
    PUSH ECX                            ; 0048e2d9
    LEA ECX,[EBP + 0xfffffd22]          ; 0048e2da
    PUSH ECX                            ; 0048e2e0
    LEA ECX,[EBP + 0xfffff35e]          ; 0048e2e1
    PUSH ECX                            ; 0048e2e7
    PUSH 0x5be7e6                       ; 0048e2e8 | = " ( %[^,], %[^,],%f)%n"
    PUSH EAX                            ; 0048e2ed
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e2ee
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048e2f1
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0xa]       ; 0048e2f6
    ADD ESP,0x18                        ; 0048e2f9
    CMP EBX,0x2                         ; 0048e2fc
    JL 0x0048e361                       ; 0048e2ff
        ;   XREF to: 0048e361 (CONDITIONAL_JUMP)  ; LAB_0048e361
    LEA EDI,[EBP + 0xfffff35e]          ; 0048e301
    LEA EBX,[EBP + 0xfffff35e]          ; 0048e307
    SUB ECX,ECX                         ; 0048e30d
    DEC ECX                             ; 0048e30f
    XOR EAX,EAX                         ; 0048e310
    SCASB.REPNE ES:EDI                  ; 0048e312
    NOT ECX                             ; 0048e314
    DEC ECX                             ; 0048e316
    MOV EDI,ECX                         ; 0048e317
    TEST ECX,ECX                        ; 0048e319
    JLE 0x0048e338                      ; 0048e31b
        ;   XREF to: 0048e338 (CONDITIONAL_JUMP)  ; LAB_0048e338
    LEA EAX,[EBP + 0xfffff35e]          ; 0048e31d
    ADD ECX,EAX                         ; 0048e323
    MOV AL,byte ptr [ECX + -0x1]        ; 0048e325
        ;   Label: LAB_0048e325
    INC AL                              ; 0048e328
    AND EAX,0xff                        ; 0048e32a
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e32f | DAT_006074b8
    JNZ 0x0048e379                      ; 0048e336
        ;   XREF to: 0048e379 (CONDITIONAL_JUMP)  ; LAB_0048e379
    LEA EAX,[EBX + EDI*0x1]             ; 0048e338
        ;   Label: LAB_0048e338
    LEA ESI,[EBX + 0x1]                 ; 0048e33b
    MOV byte ptr [EAX],0x0              ; 0048e33e
    MOV AL,byte ptr [EBX]               ; 0048e341
        ;   Label: LAB_0048e341
    INC AL                              ; 0048e343
    AND EAX,0xff                        ; 0048e345
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e34a | DAT_006074b8
    JZ 0x0048e381                       ; 0048e351
        ;   XREF to: 0048e381 (CONDITIONAL_JUMP)  ; LAB_0048e381
    PUSH EDI                            ; 0048e353
    PUSH ESI                            ; 0048e354
    PUSH EBX                            ; 0048e355
    DEC EDI                             ; 0048e356
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048e357
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048e35c
    JMP 0x0048e341                      ; 0048e35f
        ;   XREF to: 0048e341 (UNCONDITIONAL_JUMP)  ; LAB_0048e341
    PUSH 0x5be7fc                       ; 0048e361 | = "Syntax error in killHero() parms"
        ;   Label: LAB_0048e361
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048e366
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048e36b
    LEA ESP,[EBP + 0xfa]                ; 0048e36e
    POP EBP                             ; 0048e374
    POP EDI                             ; 0048e375
    POP ESI                             ; 0048e376
    POP EBX                             ; 0048e377
    RET                                 ; 0048e378
    DEC EDI                             ; 0048e379
        ;   Label: LAB_0048e379
    DEC ECX                             ; 0048e37a
    TEST EDI,EDI                        ; 0048e37b
    JG 0x0048e325                       ; 0048e37d
        ;   XREF to: 0048e325 (CONDITIONAL_JUMP)  ; LAB_0048e325
    JMP 0x0048e338                      ; 0048e37f
        ;   XREF to: 0048e338 (UNCONDITIONAL_JUMP)  ; LAB_0048e338
    LEA EDI,[EBP + 0xfffffd22]          ; 0048e381
        ;   Label: LAB_0048e381
    LEA EBX,[EBP + 0xfffffd22]          ; 0048e387
    SUB ECX,ECX                         ; 0048e38d
    DEC ECX                             ; 0048e38f
    XOR EAX,EAX                         ; 0048e390
    SCASB.REPNE ES:EDI                  ; 0048e392
    NOT ECX                             ; 0048e394
    DEC ECX                             ; 0048e396
    MOV EDI,ECX                         ; 0048e397
    TEST ECX,ECX                        ; 0048e399
    JLE 0x0048e3b8                      ; 0048e39b
        ;   XREF to: 0048e3b8 (CONDITIONAL_JUMP)  ; LAB_0048e3b8
    LEA EAX,[EBP + 0xfffffd22]          ; 0048e39d
    ADD ECX,EAX                         ; 0048e3a3
    MOV AL,byte ptr [ECX + -0x1]        ; 0048e3a5
        ;   Label: LAB_0048e3a5
    INC AL                              ; 0048e3a8
    AND EAX,0xff                        ; 0048e3aa
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e3af | DAT_006074b8
    JNZ 0x0048e3e1                      ; 0048e3b6
        ;   XREF to: 0048e3e1 (CONDITIONAL_JUMP)  ; LAB_0048e3e1
    LEA EAX,[EBX + EDI*0x1]             ; 0048e3b8
        ;   Label: LAB_0048e3b8
    LEA ESI,[EBX + 0x1]                 ; 0048e3bb
    MOV byte ptr [EAX],0x0              ; 0048e3be
    MOV AL,byte ptr [EBX]               ; 0048e3c1
        ;   Label: LAB_0048e3c1
    INC AL                              ; 0048e3c3
    AND EAX,0xff                        ; 0048e3c5
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e3ca | DAT_006074b8
    JZ 0x0048e3e9                       ; 0048e3d1
        ;   XREF to: 0048e3e9 (CONDITIONAL_JUMP)  ; LAB_0048e3e9
    PUSH EDI                            ; 0048e3d3
    PUSH ESI                            ; 0048e3d4
    PUSH EBX                            ; 0048e3d5
    DEC EDI                             ; 0048e3d6
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048e3d7
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048e3dc
    JMP 0x0048e3c1                      ; 0048e3df
        ;   XREF to: 0048e3c1 (UNCONDITIONAL_JUMP)  ; LAB_0048e3c1
    DEC EDI                             ; 0048e3e1
        ;   Label: LAB_0048e3e1
    DEC ECX                             ; 0048e3e2
    TEST EDI,EDI                        ; 0048e3e3
    JG 0x0048e3a5                       ; 0048e3e5
        ;   XREF to: 0048e3a5 (CONDITIONAL_JUMP)  ; LAB_0048e3a5
    JMP 0x0048e3b8                      ; 0048e3e7
        ;   XREF to: 0048e3b8 (UNCONDITIONAL_JUMP)  ; LAB_0048e3b8
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048e3e9
        ;   Label: LAB_0048e3e9
    ADD EAX,dword ptr [EBP + 0xa]       ; 0048e3ec
    MOV BL,byte ptr [EAX]               ; 0048e3ef
        ;   Label: LAB_0048e3ef
    XOR ECX,ECX                         ; 0048e3f1
    INC BL                              ; 0048e3f3
    MOV CL,BL                           ; 0048e3f5
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e3f7 | DAT_006074b8
    JZ 0x0048e403                       ; 0048e3fe
        ;   XREF to: 0048e403 (CONDITIONAL_JUMP)  ; LAB_0048e403
    INC EAX                             ; 0048e400
    JMP 0x0048e3ef                      ; 0048e401
        ;   XREF to: 0048e3ef (UNCONDITIONAL_JUMP)  ; LAB_0048e3ef
    PUSH 0x7e2cb4                       ; 0048e403 | g_CCharacterClassInfo
        ;   Label: LAB_0048e403
    MOV EDI,dword ptr [0x007e2cec]      ; 0048e408 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0048e40e
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e40f
    LEA EAX,[EBP + 0xfffff35e]          ; 0048e412
    PUSH EAX                            ; 0048e418
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048e419
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048e41e
    MOV EBX,EAX                         ; 0048e421
    TEST EAX,EAX                        ; 0048e423
    JZ 0x0048c30e                       ; 0048e425
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048e42b | DAT_005df604
    JNZ 0x0048e438                      ; 0048e431
        ;   XREF to: 0048e438 (CONDITIONAL_JUMP)  ; LAB_0048e438
    XOR ECX,ECX                         ; 0048e433
    MOV dword ptr [EBP + -0x66],ECX     ; 0048e435
    LEA EAX,[EBP + 0x12]                ; 0048e438
        ;   Label: LAB_0048e438
    PUSH EAX                            ; 0048e43b
    LEA EAX,[EBP + 0xfffffd22]          ; 0048e43c
    PUSH EAX                            ; 0048e442
    CALL core_event.cpp_parseDamageType_FUN_0048bec0 ; 0048e443
        ;   XREF to: 0048bec0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseDamageType_FUN_0048bec0(char * type_name, int * out_type_id)
    ADD ESP,0x8                         ; 0048e448
    TEST EAX,EAX                        ; 0048e44b
    JZ 0x0048e475                       ; 0048e44d
        ;   XREF to: 0048e475 (CONDITIONAL_JUMP)  ; LAB_0048e475
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e44f
    JZ 0x0048c7d2                       ; 0048e453
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDI,dword ptr [EBP + 0x12]      ; 0048e459
    PUSH dword ptr [EBP + 0xe]          ; 0048e45c
    PUSH EDI                            ; 0048e45f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048e460
    PUSH EBX                            ; 0048e466
    CALL dword ptr [EAX + 0xd8]         ; 0048e467
    ADD ESP,0xc                         ; 0048e46d
    JMP 0x0048c7d2                      ; 0048e470
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffffd22]          ; 0048e475
        ;   Label: LAB_0048e475
    PUSH EAX                            ; 0048e47b
    PUSH 0x5be81d                       ; 0048e47c | = "Unknown damage type \"%s\" in hurtCha..."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048e481
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048e486
    LEA ESP,[EBP + 0xfa]                ; 0048e489
    POP EBP                             ; 0048e48f
    POP EDI                             ; 0048e490
    POP ESI                             ; 0048e491
    POP EBX                             ; 0048e492
    RET                                 ; 0048e493
    PUSH 0xa                            ; 0048e494
        ;   Label: LAB_0048e494
    PUSH 0x5be850                       ; 0048e496 | = "incCounter"
    PUSH EBX                            ; 0048e49b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e49c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e4a1
    TEST EAX,EAX                        ; 0048e4a4
    JNZ 0x0048e5cc                      ; 0048e4a6
        ;   XREF to: 0048e5cc (CONDITIONAL_JUMP)  ; LAB_0048e5cc
    MOV AL,byte ptr [EBX + 0xa]         ; 0048e4ac
    INC AL                              ; 0048e4af
    AND EAX,0xff                        ; 0048e4b1
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e4b6 | DAT_006074b8
    JNZ 0x0048e5cc                      ; 0048e4bd
        ;   XREF to: 0048e5cc (CONDITIONAL_JUMP)  ; LAB_0048e5cc
    LEA EAX,[EBX + 0xa]                 ; 0048e4c3
    MOV BL,byte ptr [EAX]               ; 0048e4c6
        ;   Label: LAB_0048e4c6
    XOR ECX,ECX                         ; 0048e4c8
    INC BL                              ; 0048e4ca
    MOV CL,BL                           ; 0048e4cc
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e4ce | DAT_006074b8
    JZ 0x0048e4da                       ; 0048e4d5
        ;   XREF to: 0048e4da (CONDITIONAL_JUMP)  ; LAB_0048e4da
    INC EAX                             ; 0048e4d7
    JMP 0x0048e4c6                      ; 0048e4d8
        ;   XREF to: 0048e4c6 (UNCONDITIONAL_JUMP)  ; LAB_0048e4c6
    LEA ECX,[EBP + 0x16]                ; 0048e4da
        ;   Label: LAB_0048e4da
    PUSH ECX                            ; 0048e4dd
    LEA ECX,[EBP + 0xfffff67e]          ; 0048e4de
    PUSH ECX                            ; 0048e4e4
    PUSH 0x5be85b                       ; 0048e4e5 | = "( %[^ )] )%n"
    MOV EDX,0xffffffff                  ; 0048e4ea
    PUSH EAX                            ; 0048e4ef
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e4f0
    MOV dword ptr [EBP + 0x16],EDX      ; 0048e4f3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048e4f6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x16]      ; 0048e4fb
    ADD ESP,0x10                        ; 0048e4fe
    CMP ECX,0x5                         ; 0048e501
    JL 0x0048e56e                       ; 0048e504
        ;   XREF to: 0048e56e (CONDITIONAL_JUMP)  ; LAB_0048e56e
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048e506
    LEA ESI,[EBP + 0xfffff67e]          ; 0048e509
    ADD EBX,ECX                         ; 0048e50f
    LEA EDI,[EBP + 0xfffff67e]          ; 0048e511
    MOV dword ptr [EBP + -0x62],EBX     ; 0048e517
    SUB ECX,ECX                         ; 0048e51a
    DEC ECX                             ; 0048e51c
    XOR EAX,EAX                         ; 0048e51d
    SCASB.REPNE ES:EDI                  ; 0048e51f
    NOT ECX                             ; 0048e521
    DEC ECX                             ; 0048e523
    MOV EBX,ECX                         ; 0048e524
    TEST ECX,ECX                        ; 0048e526
    JLE 0x0048e545                      ; 0048e528
        ;   XREF to: 0048e545 (CONDITIONAL_JUMP)  ; LAB_0048e545
    LEA EAX,[EBP + 0xfffff67e]          ; 0048e52a
    ADD ECX,EAX                         ; 0048e530
    MOV AL,byte ptr [ECX + -0x1]        ; 0048e532
        ;   Label: LAB_0048e532
    INC AL                              ; 0048e535
    AND EAX,0xff                        ; 0048e537
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e53c | DAT_006074b8
    JNZ 0x0048e58d                      ; 0048e543
        ;   XREF to: 0048e58d (CONDITIONAL_JUMP)  ; LAB_0048e58d
    LEA EAX,[ESI + EBX*0x1]             ; 0048e545
        ;   Label: LAB_0048e545
    LEA EDI,[ESI + 0x1]                 ; 0048e548
    MOV byte ptr [EAX],0x0              ; 0048e54b
    MOV AL,byte ptr [ESI]               ; 0048e54e
        ;   Label: LAB_0048e54e
    INC AL                              ; 0048e550
    AND EAX,0xff                        ; 0048e552
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e557 | DAT_006074b8
    JZ 0x0048e595                       ; 0048e55e
        ;   XREF to: 0048e595 (CONDITIONAL_JUMP)  ; LAB_0048e595
    PUSH EBX                            ; 0048e560
    PUSH EDI                            ; 0048e561
    PUSH ESI                            ; 0048e562
    DEC EBX                             ; 0048e563
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048e564
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048e569
    JMP 0x0048e54e                      ; 0048e56c
        ;   XREF to: 0048e54e (UNCONDITIONAL_JUMP)  ; LAB_0048e54e
    PUSH 0x5be868                       ; 0048e56e | = "Error parsing incCounter arguments"
        ;   Label: LAB_0048e56e
    PUSH 0x1c734b0                      ; 0048e573 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048e578
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048e57d
    XOR EAX,EAX                         ; 0048e580
    LEA ESP,[EBP + 0xfa]                ; 0048e582
    POP EBP                             ; 0048e588
    POP EDI                             ; 0048e589
    POP ESI                             ; 0048e58a
    POP EBX                             ; 0048e58b
    RET                                 ; 0048e58c
    DEC EBX                             ; 0048e58d
        ;   Label: LAB_0048e58d
    DEC ECX                             ; 0048e58e
    TEST EBX,EBX                        ; 0048e58f
    JG 0x0048e532                       ; 0048e591
        ;   XREF to: 0048e532 (CONDITIONAL_JUMP)  ; LAB_0048e532
    JMP 0x0048e545                      ; 0048e593
        ;   XREF to: 0048e545 (UNCONDITIONAL_JUMP)  ; LAB_0048e545
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e595
        ;   Label: LAB_0048e595
    JZ 0x0048c7d2                       ; 0048e599
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffff67e]          ; 0048e59f
    PUSH EAX                            ; 0048e5a5
    MOV EDI,dword ptr [EBP + 0x10e]     ; 0048e5a6
    PUSH EDI                            ; 0048e5ac
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00494d00 ; 0048e5ad
        ;   XREF to: 00494d00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00494d00(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0048e5b2
    INC EAX                             ; 0048e5b5
    PUSH EAX                            ; 0048e5b6
    LEA EAX,[EBP + 0xfffff67e]          ; 0048e5b7
    PUSH EAX                            ; 0048e5bd
    PUSH EDI                            ; 0048e5be
    CALL core_event.cpp_CEventList_setCounter_FUN_00494bf0 ; 0048e5bf
        ;   XREF to: 00494bf0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_00494bf0(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 0048e5c4
    JMP 0x0048c7d2                      ; 0048e5c7
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xa                            ; 0048e5cc
        ;   Label: LAB_0048e5cc
    PUSH 0x5be88b                       ; 0048e5ce | = "decCounter"
    PUSH EBX                            ; 0048e5d3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e5d4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e5d9
    TEST EAX,EAX                        ; 0048e5dc
    JNZ 0x0048e704                      ; 0048e5de
        ;   XREF to: 0048e704 (CONDITIONAL_JUMP)  ; LAB_0048e704
    MOV AL,byte ptr [EBX + 0xa]         ; 0048e5e4
    INC AL                              ; 0048e5e7
    AND EAX,0xff                        ; 0048e5e9
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e5ee | DAT_006074b8
    JNZ 0x0048e704                      ; 0048e5f5
        ;   XREF to: 0048e704 (CONDITIONAL_JUMP)  ; LAB_0048e704
    LEA EAX,[EBX + 0xa]                 ; 0048e5fb
    MOV BL,byte ptr [EAX]               ; 0048e5fe
        ;   Label: LAB_0048e5fe
    XOR ECX,ECX                         ; 0048e600
    INC BL                              ; 0048e602
    MOV CL,BL                           ; 0048e604
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e606 | DAT_006074b8
    JZ 0x0048e612                       ; 0048e60d
        ;   XREF to: 0048e612 (CONDITIONAL_JUMP)  ; LAB_0048e612
    INC EAX                             ; 0048e60f
    JMP 0x0048e5fe                      ; 0048e610
        ;   XREF to: 0048e5fe (UNCONDITIONAL_JUMP)  ; LAB_0048e5fe
    LEA ECX,[EBP + 0x1a]                ; 0048e612
        ;   Label: LAB_0048e612
    PUSH ECX                            ; 0048e615
    LEA ECX,[EBP + 0xfffffa66]          ; 0048e616
    PUSH ECX                            ; 0048e61c
    PUSH 0x5be896                       ; 0048e61d | = "( %[^ )] )%n"
    MOV EDX,0xffffffff                  ; 0048e622
    PUSH EAX                            ; 0048e627
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e628
    MOV dword ptr [EBP + 0x1a],EDX      ; 0048e62b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048e62e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x1a]      ; 0048e633
    ADD ESP,0x10                        ; 0048e636
    CMP ECX,0x5                         ; 0048e639
    JL 0x0048e6a6                       ; 0048e63c
        ;   XREF to: 0048e6a6 (CONDITIONAL_JUMP)  ; LAB_0048e6a6
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048e63e
    LEA ESI,[EBP + 0xfffffa66]          ; 0048e641
    ADD EBX,ECX                         ; 0048e647
    LEA EDI,[EBP + 0xfffffa66]          ; 0048e649
    MOV dword ptr [EBP + -0x62],EBX     ; 0048e64f
    SUB ECX,ECX                         ; 0048e652
    DEC ECX                             ; 0048e654
    XOR EAX,EAX                         ; 0048e655
    SCASB.REPNE ES:EDI                  ; 0048e657
    NOT ECX                             ; 0048e659
    DEC ECX                             ; 0048e65b
    MOV EBX,ECX                         ; 0048e65c
    TEST ECX,ECX                        ; 0048e65e
    JLE 0x0048e67d                      ; 0048e660
        ;   XREF to: 0048e67d (CONDITIONAL_JUMP)  ; LAB_0048e67d
    LEA EAX,[EBP + 0xfffffa66]          ; 0048e662
    ADD ECX,EAX                         ; 0048e668
    MOV AL,byte ptr [ECX + -0x1]        ; 0048e66a
        ;   Label: LAB_0048e66a
    INC AL                              ; 0048e66d
    AND EAX,0xff                        ; 0048e66f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e674 | DAT_006074b8
    JNZ 0x0048e6c5                      ; 0048e67b
        ;   XREF to: 0048e6c5 (CONDITIONAL_JUMP)  ; LAB_0048e6c5
    LEA EAX,[ESI + EBX*0x1]             ; 0048e67d
        ;   Label: LAB_0048e67d
    LEA EDI,[ESI + 0x1]                 ; 0048e680
    MOV byte ptr [EAX],0x0              ; 0048e683
    MOV AL,byte ptr [ESI]               ; 0048e686
        ;   Label: LAB_0048e686
    INC AL                              ; 0048e688
    AND EAX,0xff                        ; 0048e68a
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e68f | DAT_006074b8
    JZ 0x0048e6cd                       ; 0048e696
        ;   XREF to: 0048e6cd (CONDITIONAL_JUMP)  ; LAB_0048e6cd
    PUSH EBX                            ; 0048e698
    PUSH EDI                            ; 0048e699
    PUSH ESI                            ; 0048e69a
    DEC EBX                             ; 0048e69b
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048e69c
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048e6a1
    JMP 0x0048e686                      ; 0048e6a4
        ;   XREF to: 0048e686 (UNCONDITIONAL_JUMP)  ; LAB_0048e686
    PUSH 0x5be8a3                       ; 0048e6a6 | = "Error parsing decCounter arguments"
        ;   Label: LAB_0048e6a6
    PUSH 0x1c734b0                      ; 0048e6ab | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048e6b0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048e6b5
    XOR EAX,EAX                         ; 0048e6b8
    LEA ESP,[EBP + 0xfa]                ; 0048e6ba
    POP EBP                             ; 0048e6c0
    POP EDI                             ; 0048e6c1
    POP ESI                             ; 0048e6c2
    POP EBX                             ; 0048e6c3
    RET                                 ; 0048e6c4
    DEC EBX                             ; 0048e6c5
        ;   Label: LAB_0048e6c5
    DEC ECX                             ; 0048e6c6
    TEST EBX,EBX                        ; 0048e6c7
    JG 0x0048e66a                       ; 0048e6c9
        ;   XREF to: 0048e66a (CONDITIONAL_JUMP)  ; LAB_0048e66a
    JMP 0x0048e67d                      ; 0048e6cb
        ;   XREF to: 0048e67d (UNCONDITIONAL_JUMP)  ; LAB_0048e67d
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e6cd
        ;   Label: LAB_0048e6cd
    JZ 0x0048c7d2                       ; 0048e6d1
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffffa66]          ; 0048e6d7
    PUSH EAX                            ; 0048e6dd
    MOV EDI,dword ptr [EBP + 0x10e]     ; 0048e6de
    PUSH EDI                            ; 0048e6e4
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00494d00 ; 0048e6e5
        ;   XREF to: 00494d00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00494d00(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0048e6ea
    DEC EAX                             ; 0048e6ed
    PUSH EAX                            ; 0048e6ee
    LEA EAX,[EBP + 0xfffffa66]          ; 0048e6ef
    PUSH EAX                            ; 0048e6f5
    PUSH EDI                            ; 0048e6f6
    CALL core_event.cpp_CEventList_setCounter_FUN_00494bf0 ; 0048e6f7
        ;   XREF to: 00494bf0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_00494bf0(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 0048e6fc
    JMP 0x0048c7d2                      ; 0048e6ff
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xd                            ; 0048e704
        ;   Label: LAB_0048e704
    PUSH 0x5be8c6                       ; 0048e706 | = "killCharacter"
    PUSH EBX                            ; 0048e70b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e70c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e711
    TEST EAX,EAX                        ; 0048e714
    JNZ 0x0048e9df                      ; 0048e716
        ;   XREF to: 0048e9df (CONDITIONAL_JUMP)  ; LAB_0048e9df
    MOV AL,byte ptr [EBX + 0xd]         ; 0048e71c
    INC AL                              ; 0048e71f
    AND EAX,0xff                        ; 0048e721
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048e726 | DAT_006074b8
    JNZ 0x0048e9df                      ; 0048e72d
        ;   XREF to: 0048e9df (CONDITIONAL_JUMP)  ; LAB_0048e9df
    LEA EAX,[EBX + 0xd]                 ; 0048e733
    MOV BL,byte ptr [EAX]               ; 0048e736
        ;   Label: LAB_0048e736
    XOR ECX,ECX                         ; 0048e738
    INC BL                              ; 0048e73a
    MOV CL,BL                           ; 0048e73c
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e73e | DAT_006074b8
    JZ 0x0048e74a                       ; 0048e745
        ;   XREF to: 0048e74a (CONDITIONAL_JUMP)  ; LAB_0048e74a
    INC EAX                             ; 0048e747
    JMP 0x0048e736                      ; 0048e748
        ;   XREF to: 0048e736 (UNCONDITIONAL_JUMP)  ; LAB_0048e736
    LEA ECX,[EBP + 0xffffff76]          ; 0048e74a
        ;   Label: LAB_0048e74a
    MOV dword ptr [EBP + 0x22],ECX      ; 0048e750
    XOR ECX,ECX                         ; 0048e753
    MOV dword ptr [EBP + 0x26],ECX      ; 0048e755
    LEA ECX,[EBP + 0x1e]                ; 0048e758
    PUSH ECX                            ; 0048e75b
    LEA ECX,[EBP + 0x26]                ; 0048e75c
    PUSH ECX                            ; 0048e75f
    LEA ECX,[EBP + 0xffffff7e]          ; 0048e760
    PUSH ECX                            ; 0048e766
    LEA ECX,[EBP + 0xffffff7a]          ; 0048e767
    PUSH ECX                            ; 0048e76d
    LEA ECX,[EBP + 0xffffff76]          ; 0048e76e
    PUSH ECX                            ; 0048e774
    LEA ECX,[EBP + 0xfffffd86]          ; 0048e775
    PUSH ECX                            ; 0048e77b
    LEA ECX,[EBP + 0xffffe86e]          ; 0048e77c
    PUSH ECX                            ; 0048e782
    PUSH 0x5be8d4                       ; 0048e783 | = " ( %[^,], %[^,], %f , %f , %f , %f)%n"
    MOV EDX,0xffffffff                  ; 0048e788
    PUSH EAX                            ; 0048e78d
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e78e
    MOV dword ptr [EBP + 0x1e],EDX      ; 0048e791
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048e794
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    FLD float ptr [EBP + 0x26]          ; 0048e799
    FMUL float ptr [0x005bf4b4]         ; 0048e79c | DAT_005bf4b4
    MOV EBX,dword ptr [EBP + 0x1e]      ; 0048e7a2
    ADD ESP,0x24                        ; 0048e7a5
    FSTP float ptr [EBP + 0x26]         ; 0048e7a8
    TEST EBX,EBX                        ; 0048e7ab
    JL 0x0048e82f                       ; 0048e7ad
        ;   XREF to: 0048e82f (CONDITIONAL_JUMP)  ; LAB_0048e82f
    CMP dword ptr [EBP + 0x1e],0x0      ; 0048e7b3
        ;   Label: LAB_0048e7b3
    JL 0x0048e874                       ; 0048e7b7
        ;   XREF to: 0048e874 (CONDITIONAL_JUMP)  ; LAB_0048e874
    CMP dword ptr [EBP + 0x1e],0x0      ; 0048e7bd
        ;   Label: LAB_0048e7bd
    JL 0x0048e8a1                       ; 0048e7c1
        ;   XREF to: 0048e8a1 (CONDITIONAL_JUMP)  ; LAB_0048e8a1
    LEA EDI,[EBP + 0xffffe86e]          ; 0048e7c7
    LEA EBX,[EBP + 0xffffe86e]          ; 0048e7cd
    SUB ECX,ECX                         ; 0048e7d3
    DEC ECX                             ; 0048e7d5
    XOR EAX,EAX                         ; 0048e7d6
    SCASB.REPNE ES:EDI                  ; 0048e7d8
    NOT ECX                             ; 0048e7da
    DEC ECX                             ; 0048e7dc
    MOV EDI,ECX                         ; 0048e7dd
    TEST ECX,ECX                        ; 0048e7df
    JLE 0x0048e802                      ; 0048e7e1
        ;   XREF to: 0048e802 (CONDITIONAL_JUMP)  ; LAB_0048e802
    LEA EAX,[EBP + 0xffffe86e]          ; 0048e7e3
    ADD ECX,EAX                         ; 0048e7e9
    MOV AL,byte ptr [ECX + -0x1]        ; 0048e7eb
        ;   Label: LAB_0048e7eb
    INC AL                              ; 0048e7ee
    AND EAX,0xff                        ; 0048e7f0
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e7f5 | DAT_006074b8
    JNZ 0x0048e8b9                      ; 0048e7fc
        ;   XREF to: 0048e8b9 (CONDITIONAL_JUMP)  ; LAB_0048e8b9
    LEA EAX,[EBX + EDI*0x1]             ; 0048e802
        ;   Label: LAB_0048e802
    LEA ESI,[EBX + 0x1]                 ; 0048e805
    MOV byte ptr [EAX],0x0              ; 0048e808
    MOV AL,byte ptr [EBX]               ; 0048e80b
        ;   Label: LAB_0048e80b
    INC AL                              ; 0048e80d
    AND EAX,0xff                        ; 0048e80f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e814 | DAT_006074b8
    JZ 0x0048e8c8                       ; 0048e81b
        ;   XREF to: 0048e8c8 (CONDITIONAL_JUMP)  ; LAB_0048e8c8
    PUSH EDI                            ; 0048e821
    PUSH ESI                            ; 0048e822
    PUSH EBX                            ; 0048e823
    DEC EDI                             ; 0048e824
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048e825
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048e82a
    JMP 0x0048e80b                      ; 0048e82d
        ;   XREF to: 0048e80b (UNCONDITIONAL_JUMP)  ; LAB_0048e80b
    LEA EAX,[EBP + 0x1e]                ; 0048e82f
        ;   Label: LAB_0048e82f
    PUSH EAX                            ; 0048e832
    LEA EAX,[EBP + 0xffffff7e]          ; 0048e833
    PUSH EAX                            ; 0048e839
    LEA EAX,[EBP + 0xffffff7a]          ; 0048e83a
    PUSH EAX                            ; 0048e840
    LEA EAX,[EBP + 0xffffff76]          ; 0048e841
    PUSH EAX                            ; 0048e847
    LEA EAX,[EBP + 0xfffffd86]          ; 0048e848
    PUSH EAX                            ; 0048e84e
    LEA EAX,[EBP + 0xffffe86e]          ; 0048e84f
    PUSH EAX                            ; 0048e855
    PUSH 0x5be8fa                       ; 0048e856 | = " ( %[^,], %[^,], %f , %f , %f )%n"
    MOV EDI,dword ptr [EBP + -0x62]     ; 0048e85b
    MOV ESI,0xbf800000                  ; 0048e85e
    PUSH EDI                            ; 0048e863
    MOV dword ptr [EBP + 0x26],ESI      ; 0048e864
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048e867
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x20                        ; 0048e86c
    JMP 0x0048e7b3                      ; 0048e86f
        ;   XREF to: 0048e7b3 (UNCONDITIONAL_JUMP)  ; LAB_0048e7b3
    LEA EAX,[EBP + 0x1e]                ; 0048e874
        ;   Label: LAB_0048e874
    PUSH EAX                            ; 0048e877
    LEA EAX,[EBP + 0xfffffd86]          ; 0048e878
    PUSH EAX                            ; 0048e87e
    LEA EAX,[EBP + 0xffffe86e]          ; 0048e87f
    PUSH EAX                            ; 0048e885
    PUSH 0x5be91c                       ; 0048e886 | = " ( %[^,], %[^)])%n"
    MOV ECX,dword ptr [EBP + -0x62]     ; 0048e88b
    XOR EDX,EDX                         ; 0048e88e
    PUSH ECX                            ; 0048e890
    MOV dword ptr [EBP + 0x22],EDX      ; 0048e891
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048e894
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0048e899
    JMP 0x0048e7bd                      ; 0048e89c
        ;   XREF to: 0048e7bd (UNCONDITIONAL_JUMP)  ; LAB_0048e7bd
    PUSH 0x5be92f                       ; 0048e8a1 | = "Syntax error in killCharacter() parms"
        ;   Label: LAB_0048e8a1
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048e8a6
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048e8ab
    LEA ESP,[EBP + 0xfa]                ; 0048e8ae
    POP EBP                             ; 0048e8b4
    POP EDI                             ; 0048e8b5
    POP ESI                             ; 0048e8b6
    POP EBX                             ; 0048e8b7
    RET                                 ; 0048e8b8
    DEC EDI                             ; 0048e8b9
        ;   Label: LAB_0048e8b9
    DEC ECX                             ; 0048e8ba
    TEST EDI,EDI                        ; 0048e8bb
    JG 0x0048e7eb                       ; 0048e8bd
        ;   XREF to: 0048e7eb (CONDITIONAL_JUMP)  ; LAB_0048e7eb
    JMP 0x0048e802                      ; 0048e8c3
        ;   XREF to: 0048e802 (UNCONDITIONAL_JUMP)  ; LAB_0048e802
    LEA EDI,[EBP + 0xfffffd86]          ; 0048e8c8
        ;   Label: LAB_0048e8c8
    LEA EBX,[EBP + 0xfffffd86]          ; 0048e8ce
    SUB ECX,ECX                         ; 0048e8d4
    DEC ECX                             ; 0048e8d6
    XOR EAX,EAX                         ; 0048e8d7
    SCASB.REPNE ES:EDI                  ; 0048e8d9
    NOT ECX                             ; 0048e8db
    DEC ECX                             ; 0048e8dd
    MOV EDI,ECX                         ; 0048e8de
    TEST ECX,ECX                        ; 0048e8e0
    JLE 0x0048e8ff                      ; 0048e8e2
        ;   XREF to: 0048e8ff (CONDITIONAL_JUMP)  ; LAB_0048e8ff
    LEA EAX,[EBP + 0xfffffd86]          ; 0048e8e4
    ADD ECX,EAX                         ; 0048e8ea
    MOV AL,byte ptr [ECX + -0x1]        ; 0048e8ec
        ;   Label: LAB_0048e8ec
    INC AL                              ; 0048e8ef
    AND EAX,0xff                        ; 0048e8f1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e8f6 | DAT_006074b8
    JNZ 0x0048e928                      ; 0048e8fd
        ;   XREF to: 0048e928 (CONDITIONAL_JUMP)  ; LAB_0048e928
    LEA EAX,[EBX + EDI*0x1]             ; 0048e8ff
        ;   Label: LAB_0048e8ff
    LEA ESI,[EBX + 0x1]                 ; 0048e902
    MOV byte ptr [EAX],0x0              ; 0048e905
    MOV AL,byte ptr [EBX]               ; 0048e908
        ;   Label: LAB_0048e908
    INC AL                              ; 0048e90a
    AND EAX,0xff                        ; 0048e90c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048e911 | DAT_006074b8
    JZ 0x0048e930                       ; 0048e918
        ;   XREF to: 0048e930 (CONDITIONAL_JUMP)  ; LAB_0048e930
    PUSH EDI                            ; 0048e91a
    PUSH ESI                            ; 0048e91b
    PUSH EBX                            ; 0048e91c
    DEC EDI                             ; 0048e91d
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048e91e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048e923
    JMP 0x0048e908                      ; 0048e926
        ;   XREF to: 0048e908 (UNCONDITIONAL_JUMP)  ; LAB_0048e908
    DEC EDI                             ; 0048e928
        ;   Label: LAB_0048e928
    DEC ECX                             ; 0048e929
    TEST EDI,EDI                        ; 0048e92a
    JG 0x0048e8ec                       ; 0048e92c
        ;   XREF to: 0048e8ec (CONDITIONAL_JUMP)  ; LAB_0048e8ec
    JMP 0x0048e8ff                      ; 0048e92e
        ;   XREF to: 0048e8ff (UNCONDITIONAL_JUMP)  ; LAB_0048e8ff
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048e930
        ;   Label: LAB_0048e930
    ADD EAX,dword ptr [EBP + 0x1e]      ; 0048e933
    MOV BL,byte ptr [EAX]               ; 0048e936
        ;   Label: LAB_0048e936
    XOR ECX,ECX                         ; 0048e938
    INC BL                              ; 0048e93a
    MOV CL,BL                           ; 0048e93c
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048e93e | DAT_006074b8
    JZ 0x0048e94a                       ; 0048e945
        ;   XREF to: 0048e94a (CONDITIONAL_JUMP)  ; LAB_0048e94a
    INC EAX                             ; 0048e947
    JMP 0x0048e936                      ; 0048e948
        ;   XREF to: 0048e936 (UNCONDITIONAL_JUMP)  ; LAB_0048e936
    PUSH 0x7e2cb4                       ; 0048e94a | g_CCharacterClassInfo
        ;   Label: LAB_0048e94a
    MOV EDI,dword ptr [0x007e2cec]      ; 0048e94f | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0048e955
    MOV dword ptr [EBP + -0x62],EAX     ; 0048e956
    LEA EAX,[EBP + 0xffffe86e]          ; 0048e959
    PUSH EAX                            ; 0048e95f
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048e960
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048e965
    MOV EBX,EAX                         ; 0048e968
    TEST EAX,EAX                        ; 0048e96a
    JZ 0x0048c30e                       ; 0048e96c
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048e972 | DAT_005df604
    JNZ 0x0048e97f                      ; 0048e978
        ;   XREF to: 0048e97f (CONDITIONAL_JUMP)  ; LAB_0048e97f
    XOR ECX,ECX                         ; 0048e97a
    MOV dword ptr [EBP + -0x66],ECX     ; 0048e97c
    LEA EAX,[EBP + 0x2a]                ; 0048e97f
        ;   Label: LAB_0048e97f
    PUSH EAX                            ; 0048e982
    LEA EAX,[EBP + 0xfffffd86]          ; 0048e983
    PUSH EAX                            ; 0048e989
    CALL core_event.cpp_parseDeathType_FUN_0048bd30 ; 0048e98a
        ;   XREF to: 0048bd30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseDeathType_FUN_0048bd30(char * type_name, int * out_type_id)
    ADD ESP,0x8                         ; 0048e98f
    TEST EAX,EAX                        ; 0048e992
    JZ 0x0048e9c0                       ; 0048e994
        ;   XREF to: 0048e9c0 (CONDITIONAL_JUMP)  ; LAB_0048e9c0
    CMP dword ptr [EBP + -0x66],0x0     ; 0048e996
    JZ 0x0048c7d2                       ; 0048e99a
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDI,dword ptr [EBP + 0x22]      ; 0048e9a0
    PUSH dword ptr [EBP + 0x26]         ; 0048e9a3
    PUSH EDI                            ; 0048e9a6
    MOV EDX,dword ptr [EBP + 0x2a]      ; 0048e9a7
    PUSH EDX                            ; 0048e9aa
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048e9ab
    PUSH EBX                            ; 0048e9b1
    CALL dword ptr [EAX + 0xdc]         ; 0048e9b2
    ADD ESP,0x10                        ; 0048e9b8
    JMP 0x0048c7d2                      ; 0048e9bb
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffffd86]          ; 0048e9c0
        ;   Label: LAB_0048e9c0
    PUSH EAX                            ; 0048e9c6
    PUSH 0x5be955                       ; 0048e9c7 | = "Unknown death type \"%s\" in killChar..."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048e9cc
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048e9d1
    LEA ESP,[EBP + 0xfa]                ; 0048e9d4
    POP EBP                             ; 0048e9da
    POP EDI                             ; 0048e9db
    POP ESI                             ; 0048e9dc
    POP EBX                             ; 0048e9dd
    RET                                 ; 0048e9de
    PUSH 0xe                            ; 0048e9df
        ;   Label: LAB_0048e9df
    PUSH 0x5be987                       ; 0048e9e1 | = "killAllEnemies"
    PUSH EBX                            ; 0048e9e6
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048e9e7
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048e9ec
    TEST EAX,EAX                        ; 0048e9ef
    JNZ 0x0048eade                      ; 0048e9f1
        ;   XREF to: 0048eade (CONDITIONAL_JUMP)  ; LAB_0048eade
    MOV AL,byte ptr [EBX + 0xe]         ; 0048e9f7
    INC AL                              ; 0048e9fa
    AND EAX,0xff                        ; 0048e9fc
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048ea01 | DAT_006074b8
    JNZ 0x0048eade                      ; 0048ea08
        ;   XREF to: 0048eade (CONDITIONAL_JUMP)  ; LAB_0048eade
    LEA EAX,[EBX + 0xe]                 ; 0048ea0e
    MOV BL,byte ptr [EAX]               ; 0048ea11
        ;   Label: LAB_0048ea11
    XOR ECX,ECX                         ; 0048ea13
    INC BL                              ; 0048ea15
    MOV CL,BL                           ; 0048ea17
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ea19 | DAT_006074b8
    JZ 0x0048ea25                       ; 0048ea20
        ;   XREF to: 0048ea25 (CONDITIONAL_JUMP)  ; LAB_0048ea25
    INC EAX                             ; 0048ea22
    JMP 0x0048ea11                      ; 0048ea23
        ;   XREF to: 0048ea11 (UNCONDITIONAL_JUMP)  ; LAB_0048ea11
    MOV dword ptr [EBP + 0x2e],0xffffffff ; 0048ea25
        ;   Label: LAB_0048ea25
    LEA ECX,[EBP + 0x2e]                ; 0048ea2c
    PUSH ECX                            ; 0048ea2f
    PUSH 0x5be996                       ; 0048ea30 | = "( )%n"
    PUSH EAX                            ; 0048ea35
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ea36
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ea39
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x2e]      ; 0048ea3e
    ADD ESP,0xc                         ; 0048ea41
    CMP EBX,0x2                         ; 0048ea44
    JL 0x0048ea89                       ; 0048ea47
        ;   XREF to: 0048ea89 (CONDITIONAL_JUMP)  ; LAB_0048ea89
    MOV ESI,dword ptr [EBP + -0x62]     ; 0048ea49
    ADD ESI,EBX                         ; 0048ea4c
    XOR EDI,EDI                         ; 0048ea4e
    MOV dword ptr [EBP + -0x62],ESI     ; 0048ea50
    XOR ESI,ESI                         ; 0048ea53
    MOV EAX,[0x00603b28]                ; 0048ea55 | g_CDemonSetPtr
        ;   Label: LAB_0048ea55
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 0048ea5a | g_CDemonSetInstance.actor_count
    JGE 0x0048c7d2                      ; 0048ea60
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [0x01c5bc48]      ; 0048ea66 | g_CEnemyClassInfo.name_hash
    PUSH ECX                            ; 0048ea6c
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 0048ea6d | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 0048ea74
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048ea75
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 0048ea7a
    ADD ESP,0x8                         ; 0048ea7c
    TEST EAX,EAX                        ; 0048ea7f
    JNZ 0x0048eaa8                      ; 0048ea81
        ;   XREF to: 0048eaa8 (CONDITIONAL_JUMP)  ; LAB_0048eaa8
    INC EDI                             ; 0048ea83
        ;   Label: LAB_0048ea83
    ADD ESI,0x4                         ; 0048ea84
    JMP 0x0048ea55                      ; 0048ea87
        ;   XREF to: 0048ea55 (UNCONDITIONAL_JUMP)  ; LAB_0048ea55
    PUSH 0x5be99c                       ; 0048ea89 | = "Error parsing lightning command"
        ;   Label: LAB_0048ea89
    PUSH 0x1c734b0                      ; 0048ea8e | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048ea93
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048ea98
    XOR EAX,EAX                         ; 0048ea9b
    LEA ESP,[EBP + 0xfa]                ; 0048ea9d
    POP EBP                             ; 0048eaa3
    POP EDI                             ; 0048eaa4
    POP ESI                             ; 0048eaa5
    POP EBX                             ; 0048eaa6
    RET                                 ; 0048eaa7
    PUSH EBX                            ; 0048eaa8
        ;   Label: LAB_0048eaa8
    MOV EAX,dword ptr [EAX + 0x154]     ; 0048eaa9
    CALL dword ptr [EAX + 0x10c]        ; 0048eaaf
    ADD ESP,0x4                         ; 0048eab5
    TEST EAX,EAX                        ; 0048eab8
    JNZ 0x0048ea83                      ; 0048eaba
        ;   XREF to: 0048ea83 (CONDITIONAL_JUMP)  ; LAB_0048ea83
    PUSH 0xbf800000                     ; 0048eabc
    PUSH 0x0                            ; 0048eac1
    PUSH 0x0                            ; 0048eac3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048eac5
    PUSH EBX                            ; 0048eacb
    CALL dword ptr [EAX + 0xdc]         ; 0048eacc
    ADD ESP,0x10                        ; 0048ead2
    INC EDI                             ; 0048ead5
    ADD ESI,0x4                         ; 0048ead6
    JMP 0x0048ea55                      ; 0048ead9
        ;   XREF to: 0048ea55 (UNCONDITIONAL_JUMP)  ; LAB_0048ea55
    PUSH 0xb                            ; 0048eade
        ;   Label: LAB_0048eade
    PUSH 0x5be9bc                       ; 0048eae0 | = "restorePrye"
    PUSH EBX                            ; 0048eae5
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048eae6
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048eaeb
    TEST EAX,EAX                        ; 0048eaee
    JNZ 0x0048ebb6                      ; 0048eaf0
        ;   XREF to: 0048ebb6 (CONDITIONAL_JUMP)  ; LAB_0048ebb6
    MOV AL,byte ptr [EBX + 0xb]         ; 0048eaf6
    INC AL                              ; 0048eaf9
    AND EAX,0xff                        ; 0048eafb
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048eb00 | DAT_006074b8
    JNZ 0x0048ebb6                      ; 0048eb07
        ;   XREF to: 0048ebb6 (CONDITIONAL_JUMP)  ; LAB_0048ebb6
    LEA EAX,[EBX + 0xb]                 ; 0048eb0d
    MOV BL,byte ptr [EAX]               ; 0048eb10
        ;   Label: LAB_0048eb10
    XOR ECX,ECX                         ; 0048eb12
    INC BL                              ; 0048eb14
    MOV CL,BL                           ; 0048eb16
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048eb18 | DAT_006074b8
    JZ 0x0048eb24                       ; 0048eb1f
        ;   XREF to: 0048eb24 (CONDITIONAL_JUMP)  ; LAB_0048eb24
    INC EAX                             ; 0048eb21
    JMP 0x0048eb10                      ; 0048eb22
        ;   XREF to: 0048eb10 (UNCONDITIONAL_JUMP)  ; LAB_0048eb10
    LEA ECX,[EBP + 0x32]                ; 0048eb24
        ;   Label: LAB_0048eb24
    PUSH ECX                            ; 0048eb27
    PUSH 0x5be9c8                       ; 0048eb28 | = "( )%n"
    MOV ESI,0xffffffff                  ; 0048eb2d
    PUSH EAX                            ; 0048eb32
    MOV dword ptr [EBP + -0x62],EAX     ; 0048eb33
    MOV dword ptr [EBP + 0x32],ESI      ; 0048eb36
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048eb39
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x32]      ; 0048eb3e
    ADD ESP,0xc                         ; 0048eb41
    CMP EDI,0x2                         ; 0048eb44
    JL 0x0048eb97                       ; 0048eb47
        ;   XREF to: 0048eb97 (CONDITIONAL_JUMP)  ; LAB_0048eb97
    MOV ECX,dword ptr [0x01d5ba14]      ; 0048eb49 | DAT_01d5ba14
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048eb4f
    SHL ECX,0x2                         ; 0048eb52
    ADD EDX,EDI                         ; 0048eb55
    MOV EBX,dword ptr [ECX + 0x1d5ba04] ; 0048eb57
    MOV dword ptr [EBP + -0x62],EDX     ; 0048eb5d
    TEST EBX,EBX                        ; 0048eb60
    JZ 0x0048c7d2                       ; 0048eb62
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 0048eb68
    MOV EAX,dword ptr [ECX + 0x1d5ba04] ; 0048eb72
    MOV dword ptr [EAX + 0x20b80],0x64  ; 0048eb78
    MOV EAX,dword ptr [ECX + 0x1d5ba04] ; 0048eb82
    MOV dword ptr [EAX + 0x20b84],0x32  ; 0048eb88
    JMP 0x0048c7d2                      ; 0048eb92
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5be9ce                       ; 0048eb97 | = "Error parsing lightning command"
        ;   Label: LAB_0048eb97
    PUSH 0x1c734b0                      ; 0048eb9c | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048eba1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048eba6
    XOR EAX,EAX                         ; 0048eba9
    LEA ESP,[EBP + 0xfa]                ; 0048ebab
    POP EBP                             ; 0048ebb1
    POP EDI                             ; 0048ebb2
    POP ESI                             ; 0048ebb3
    POP EBX                             ; 0048ebb4
    RET                                 ; 0048ebb5
    PUSH 0x8                            ; 0048ebb6
        ;   Label: LAB_0048ebb6
    PUSH 0x5be9ee                       ; 0048ebb8 | = "killHero"
    PUSH EBX                            ; 0048ebbd
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048ebbe
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048ebc3
    TEST EAX,EAX                        ; 0048ebc6
    JNZ 0x0048ecf6                      ; 0048ebc8
        ;   XREF to: 0048ecf6 (CONDITIONAL_JUMP)  ; LAB_0048ecf6
    MOV AL,byte ptr [EBX + 0x8]         ; 0048ebce
    INC AL                              ; 0048ebd1
    AND EAX,0xff                        ; 0048ebd3
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048ebd8 | DAT_006074b8
    JNZ 0x0048ecf6                      ; 0048ebdf
        ;   XREF to: 0048ecf6 (CONDITIONAL_JUMP)  ; LAB_0048ecf6
    LEA EAX,[EBX + 0x8]                 ; 0048ebe5
    MOV BL,byte ptr [EAX]               ; 0048ebe8
        ;   Label: LAB_0048ebe8
    XOR ECX,ECX                         ; 0048ebea
    INC BL                              ; 0048ebec
    MOV CL,BL                           ; 0048ebee
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ebf0 | DAT_006074b8
    JZ 0x0048ebfc                       ; 0048ebf7
        ;   XREF to: 0048ebfc (CONDITIONAL_JUMP)  ; LAB_0048ebfc
    INC EAX                             ; 0048ebf9
    JMP 0x0048ebe8                      ; 0048ebfa
        ;   XREF to: 0048ebe8 (UNCONDITIONAL_JUMP)  ; LAB_0048ebe8
    MOV ECX,dword ptr [0x00603450]      ; 0048ebfc | g_CNetGamePtr
        ;   Label: LAB_0048ebfc
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ec02
    CMP dword ptr [ECX],0x0             ; 0048ec05 | g_CNetGameInstance
    JNZ 0x0048ec4d                      ; 0048ec08
        ;   XREF to: 0048ec4d (CONDITIONAL_JUMP)  ; LAB_0048ec4d
    LEA ECX,[EBP + 0x36]                ; 0048ec0a
    PUSH ECX                            ; 0048ec0d
    LEA ECX,[EBP + 0xfffffcbe]          ; 0048ec0e
    PUSH ECX                            ; 0048ec14
    PUSH 0x5bea22                       ; 0048ec15 | = " ( %[^)])%n"
    MOV EDI,0xffffffff                  ; 0048ec1a
    PUSH EAX                            ; 0048ec1f
    MOV dword ptr [EBP + 0x36],EDI      ; 0048ec20
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ec23
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x36]      ; 0048ec28
    ADD ESP,0x10                        ; 0048ec2b
    CMP EAX,0x2                         ; 0048ec2e
    JL 0x0048ec65                       ; 0048ec31
        ;   XREF to: 0048ec65 (CONDITIONAL_JUMP)  ; LAB_0048ec65
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048ec33
    ADD EAX,dword ptr [EBP + 0x36]      ; 0048ec36
    MOV BL,byte ptr [EAX]               ; 0048ec39
        ;   Label: LAB_0048ec39
    XOR ECX,ECX                         ; 0048ec3b
    INC BL                              ; 0048ec3d
    MOV CL,BL                           ; 0048ec3f
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ec41 | DAT_006074b8
    JZ 0x0048ec7d                       ; 0048ec48
        ;   XREF to: 0048ec7d (CONDITIONAL_JUMP)  ; LAB_0048ec7d
    INC EAX                             ; 0048ec4a
    JMP 0x0048ec39                      ; 0048ec4b
        ;   XREF to: 0048ec39 (UNCONDITIONAL_JUMP)  ; LAB_0048ec39
    PUSH 0x5be9f7                       ; 0048ec4d | = "Can't use killHero command in multi-p..."
        ;   Label: LAB_0048ec4d
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ec52
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048ec57
    LEA ESP,[EBP + 0xfa]                ; 0048ec5a
    POP EBP                             ; 0048ec60
    POP EDI                             ; 0048ec61
    POP ESI                             ; 0048ec62
    POP EBX                             ; 0048ec63
    RET                                 ; 0048ec64
    PUSH 0x5bea2e                       ; 0048ec65 | = "Syntax error in killHero() parms"
        ;   Label: LAB_0048ec65
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ec6a
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048ec6f
    LEA ESP,[EBP + 0xfa]                ; 0048ec72
    POP EBP                             ; 0048ec78
    POP EDI                             ; 0048ec79
    POP ESI                             ; 0048ec7a
    POP EBX                             ; 0048ec7b
    RET                                 ; 0048ec7c
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ec7d
        ;   Label: LAB_0048ec7d
    LEA EAX,[EBP + 0x3a]                ; 0048ec80
    PUSH EAX                            ; 0048ec83
    LEA EAX,[EBP + 0xfffffcbe]          ; 0048ec84
    PUSH EAX                            ; 0048ec8a
    CALL core_event.cpp_parseDeathType_FUN_0048bd30 ; 0048ec8b
        ;   XREF to: 0048bd30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseDeathType_FUN_0048bd30(char * type_name, int * out_type_id)
    ADD ESP,0x8                         ; 0048ec90
    TEST EAX,EAX                        ; 0048ec93
    JZ 0x0048ecd7                       ; 0048ec95
        ;   XREF to: 0048ecd7 (CONDITIONAL_JUMP)  ; LAB_0048ecd7
    CMP dword ptr [EBP + -0x66],0x0     ; 0048ec97
    JZ 0x0048c7d2                       ; 0048ec9b
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,[0x01d5ba14]                ; 0048eca1 | DAT_01d5ba14
    SHL EAX,0x2                         ; 0048eca6
    MOV EBX,dword ptr [EAX + 0x1d5ba04] ; 0048eca9
    TEST EBX,EBX                        ; 0048ecaf
    JZ 0x0048c7d2                       ; 0048ecb1
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xbf800000                     ; 0048ecb7
    PUSH 0x0                            ; 0048ecbc
    MOV ESI,dword ptr [EBP + 0x3a]      ; 0048ecbe
    PUSH ESI                            ; 0048ecc1
    MOV ECX,dword ptr [EBX + 0x154]     ; 0048ecc2
    PUSH EBX                            ; 0048ecc8
    CALL dword ptr [ECX + 0xdc]         ; 0048ecc9
    ADD ESP,0x10                        ; 0048eccf
    JMP 0x0048c7d2                      ; 0048ecd2
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffffcbe]          ; 0048ecd7
        ;   Label: LAB_0048ecd7
    PUSH EAX                            ; 0048ecdd
    PUSH 0x5bea4f                       ; 0048ecde | = "Unknown death type \"%s\" in killHero..."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048ece3
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0048ece8
    LEA ESP,[EBP + 0xfa]                ; 0048eceb
    POP EBP                             ; 0048ecf1
    POP EDI                             ; 0048ecf2
    POP ESI                             ; 0048ecf3
    POP EBX                             ; 0048ecf4
    RET                                 ; 0048ecf5
    PUSH 0x7                            ; 0048ecf6
        ;   Label: LAB_0048ecf6
    PUSH 0x5bea7c                       ; 0048ecf8 | = "killSfx"
    PUSH EBX                            ; 0048ecfd
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048ecfe
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048ed03
    TEST EAX,EAX                        ; 0048ed06
    JNZ 0x0048ef08                      ; 0048ed08
        ;   XREF to: 0048ef08 (CONDITIONAL_JUMP)  ; LAB_0048ef08
    MOV AL,byte ptr [EBX + 0x7]         ; 0048ed0e
    INC AL                              ; 0048ed11
    AND EAX,0xff                        ; 0048ed13
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048ed18 | DAT_006074b8
    JNZ 0x0048ef08                      ; 0048ed1f
        ;   XREF to: 0048ef08 (CONDITIONAL_JUMP)  ; LAB_0048ef08
    LEA EAX,[EBX + 0x7]                 ; 0048ed25
    MOV BL,byte ptr [EAX]               ; 0048ed28
        ;   Label: LAB_0048ed28
    XOR ECX,ECX                         ; 0048ed2a
    INC BL                              ; 0048ed2c
    MOV CL,BL                           ; 0048ed2e
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ed30 | DAT_006074b8
    JZ 0x0048ed3c                       ; 0048ed37
        ;   XREF to: 0048ed3c (CONDITIONAL_JUMP)  ; LAB_0048ed3c
    INC EAX                             ; 0048ed39
    JMP 0x0048ed28                      ; 0048ed3a
        ;   XREF to: 0048ed28 (UNCONDITIONAL_JUMP)  ; LAB_0048ed28
    LEA ECX,[EBP + 0x3e]                ; 0048ed3c
        ;   Label: LAB_0048ed3c
    PUSH ECX                            ; 0048ed3f
    LEA ECX,[EBP + 0xffffef76]          ; 0048ed40
    PUSH ECX                            ; 0048ed46
    PUSH 0x5bea84                       ; 0048ed47 | = "(%[^,)]%n"
    MOV EDI,0xffffffff                  ; 0048ed4c
    PUSH EAX                            ; 0048ed51
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ed52
    MOV dword ptr [EBP + 0x3e],EDI      ; 0048ed55
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ed58
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0048ed5d
    ADD ESP,0x10                        ; 0048ed60
    CMP EAX,0x3                         ; 0048ed63
    JL 0x0048edd0                       ; 0048ed66
        ;   XREF to: 0048edd0 (CONDITIONAL_JUMP)  ; LAB_0048edd0
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048ed68
    LEA ESI,[EBP + 0xffffef76]          ; 0048ed6b
    ADD EDX,EAX                         ; 0048ed71
    LEA EDI,[EBP + 0xffffef76]          ; 0048ed73
    MOV dword ptr [EBP + -0x62],EDX     ; 0048ed79
    SUB ECX,ECX                         ; 0048ed7c
    DEC ECX                             ; 0048ed7e
    XOR EAX,EAX                         ; 0048ed7f
    SCASB.REPNE ES:EDI                  ; 0048ed81
    NOT ECX                             ; 0048ed83
    DEC ECX                             ; 0048ed85
    MOV EBX,ECX                         ; 0048ed86
    TEST ECX,ECX                        ; 0048ed88
    JLE 0x0048eda7                      ; 0048ed8a
        ;   XREF to: 0048eda7 (CONDITIONAL_JUMP)  ; LAB_0048eda7
    LEA EAX,[EBP + 0xffffef76]          ; 0048ed8c
    ADD ECX,EAX                         ; 0048ed92
    MOV AL,byte ptr [ECX + -0x1]        ; 0048ed94
        ;   Label: LAB_0048ed94
    INC AL                              ; 0048ed97
    AND EAX,0xff                        ; 0048ed99
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048ed9e | DAT_006074b8
    JNZ 0x0048edef                      ; 0048eda5
        ;   XREF to: 0048edef (CONDITIONAL_JUMP)  ; LAB_0048edef
    LEA EAX,[ESI + EBX*0x1]             ; 0048eda7
        ;   Label: LAB_0048eda7
    LEA EDI,[ESI + 0x1]                 ; 0048edaa
    MOV byte ptr [EAX],0x0              ; 0048edad
    MOV AL,byte ptr [ESI]               ; 0048edb0
        ;   Label: LAB_0048edb0
    INC AL                              ; 0048edb2
    AND EAX,0xff                        ; 0048edb4
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048edb9 | DAT_006074b8
    JZ 0x0048edf7                       ; 0048edc0
        ;   XREF to: 0048edf7 (CONDITIONAL_JUMP)  ; LAB_0048edf7
    PUSH EBX                            ; 0048edc2
    PUSH EDI                            ; 0048edc3
    PUSH ESI                            ; 0048edc4
    DEC EBX                             ; 0048edc5
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048edc6
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048edcb
    JMP 0x0048edb0                      ; 0048edce
        ;   XREF to: 0048edb0 (UNCONDITIONAL_JUMP)  ; LAB_0048edb0
    PUSH 0x5bea8e                       ; 0048edd0 | = "Error parsing killSfx parms"
        ;   Label: LAB_0048edd0
    PUSH 0x1c734b0                      ; 0048edd5 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048edda
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048eddf
    XOR EAX,EAX                         ; 0048ede2
    LEA ESP,[EBP + 0xfa]                ; 0048ede4
    POP EBP                             ; 0048edea
    POP EDI                             ; 0048edeb
    POP ESI                             ; 0048edec
    POP EBX                             ; 0048eded
    RET                                 ; 0048edee
    DEC EBX                             ; 0048edef
        ;   Label: LAB_0048edef
    DEC ECX                             ; 0048edf0
    TEST EBX,EBX                        ; 0048edf1
    JG 0x0048ed94                       ; 0048edf3
        ;   XREF to: 0048ed94 (CONDITIONAL_JUMP)  ; LAB_0048ed94
    JMP 0x0048eda7                      ; 0048edf5
        ;   XREF to: 0048eda7 (UNCONDITIONAL_JUMP)  ; LAB_0048eda7
    XOR ECX,ECX                         ; 0048edf7
        ;   Label: LAB_0048edf7
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048edf9
    MOV dword ptr [EBP + 0x42],ECX      ; 0048edfc
    CMP byte ptr [EAX],0x2c             ; 0048edff
    JZ 0x0048ee21                       ; 0048ee02
        ;   XREF to: 0048ee21 (CONDITIONAL_JUMP)  ; LAB_0048ee21
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048ee04
        ;   Label: LAB_0048ee04
    MOV BL,byte ptr [EAX]               ; 0048ee07
        ;   Label: LAB_0048ee07
    XOR ECX,ECX                         ; 0048ee09
    INC BL                              ; 0048ee0b
    MOV CL,BL                           ; 0048ee0d
    MOV DL,byte ptr [ECX + 0x6074b8]    ; 0048ee0f | DAT_006074b8
    LEA EBX,[EAX + 0x1]                 ; 0048ee15
    TEST DL,0x2                         ; 0048ee18
    JZ 0x0048ee6e                       ; 0048ee1b
        ;   XREF to: 0048ee6e (CONDITIONAL_JUMP)  ; LAB_0048ee6e
    MOV EAX,EBX                         ; 0048ee1d
    JMP 0x0048ee07                      ; 0048ee1f
        ;   XREF to: 0048ee07 (UNCONDITIONAL_JUMP)  ; LAB_0048ee07
    LEA EAX,[EBP + 0x3e]                ; 0048ee21
        ;   Label: LAB_0048ee21
    PUSH EAX                            ; 0048ee24
    LEA EAX,[EBP + 0x42]                ; 0048ee25
    PUSH EAX                            ; 0048ee28
    PUSH 0x5beaaa                       ; 0048ee29 | = ",%f%n"
    MOV ESI,dword ptr [EBP + -0x62]     ; 0048ee2e
    MOV EBX,0xffffffff                  ; 0048ee31
    PUSH ESI                            ; 0048ee36
    MOV dword ptr [EBP + 0x3e],EBX      ; 0048ee37
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ee3a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x3e]      ; 0048ee3f
    ADD ESP,0x10                        ; 0048ee42
    CMP EDI,0x3                         ; 0048ee45
    JL 0x0048ee4f                       ; 0048ee48
        ;   XREF to: 0048ee4f (CONDITIONAL_JUMP)  ; LAB_0048ee4f
    ADD dword ptr [EBP + -0x62],EDI     ; 0048ee4a
    JMP 0x0048ee04                      ; 0048ee4d
        ;   XREF to: 0048ee04 (UNCONDITIONAL_JUMP)  ; LAB_0048ee04
    PUSH 0x5beab0                       ; 0048ee4f | = "Error parsing killSfx parms"
        ;   Label: LAB_0048ee4f
    PUSH 0x1c734b0                      ; 0048ee54 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048ee59
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048ee5e
    XOR EAX,EAX                         ; 0048ee61
    LEA ESP,[EBP + 0xfa]                ; 0048ee63
    POP EBP                             ; 0048ee69
    POP EDI                             ; 0048ee6a
    POP ESI                             ; 0048ee6b
    POP EBX                             ; 0048ee6c
    RET                                 ; 0048ee6d
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ee6e
        ;   Label: LAB_0048ee6e
    CMP byte ptr [EAX],0x29             ; 0048ee71
    JNZ 0x0048eecc                      ; 0048ee74
        ;   XREF to: 0048eecc (CONDITIONAL_JUMP)  ; LAB_0048eecc
    MOV ECX,dword ptr [EBP + -0x66]     ; 0048ee76
    MOV dword ptr [EBP + -0x62],EBX     ; 0048ee79
    TEST ECX,ECX                        ; 0048ee7c
    JZ 0x0048c7d2                       ; 0048ee7e
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffef76]          ; 0048ee84
    PUSH EAX                            ; 0048ee8a
    MOV EBX,dword ptr [EBP + 0x10e]     ; 0048ee8b
    PUSH EBX                            ; 0048ee91
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_00495110 ; 0048ee92
        ;   XREF to: 00495110 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_00495110(CEventList * this_ptr, char * name)
    FLD float ptr [EBP + 0x42]          ; 0048ee97
    FLDZ                                ; 0048ee9a
    MOV ECX,EAX                         ; 0048ee9c
    ADD ESP,0x8                         ; 0048ee9e
    FCOMPP                              ; 0048eea1
    FNSTSW AX                           ; 0048eea3
    SAHF                                ; 0048eea5
    JNC 0x0048eeeb                      ; 0048eea6
        ;   XREF to: 0048eeeb (CONDITIONAL_JUMP)  ; LAB_0048eeeb
    PUSH 0x1                            ; 0048eea8
    PUSH dword ptr [EBP + 0x42]         ; 0048eeaa
    PUSH 0x0                            ; 0048eead
    PUSH ECX                            ; 0048eeaf
    CALL sound_sndmain.cpp_setSfxFade_FUN_00556c10 ; 0048eeb0
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_00556c10(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 0048eeb5
    MOV ESI,dword ptr [EBP + 0x10e]     ; 0048eeb8
    PUSH ESI                            ; 0048eebe
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 ; 0048eebf
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00495280(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0048eec4
    JMP 0x0048c7d2                      ; 0048eec7
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5beacc                       ; 0048eecc | = "Can't find matching ) in killSfx command"
        ;   Label: LAB_0048eecc
    PUSH 0x1c734b0                      ; 0048eed1 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048eed6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048eedb
    XOR EAX,EAX                         ; 0048eede
    LEA ESP,[EBP + 0xfa]                ; 0048eee0
    POP EBP                             ; 0048eee6
    POP EDI                             ; 0048eee7
    POP ESI                             ; 0048eee8
    POP EBX                             ; 0048eee9
    RET                                 ; 0048eeea
    PUSH ECX                            ; 0048eeeb
        ;   Label: LAB_0048eeeb
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0048eeec
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0048eef1
    MOV ESI,dword ptr [EBP + 0x10e]     ; 0048eef4
    PUSH ESI                            ; 0048eefa
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 ; 0048eefb
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00495280(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0048ef00
    JMP 0x0048c7d2                      ; 0048ef03
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x9                            ; 0048ef08
        ;   Label: LAB_0048ef08
    PUSH 0x5beaf5                       ; 0048ef0a | = "lightning"
    PUSH EBX                            ; 0048ef0f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048ef10
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048ef15
    TEST EAX,EAX                        ; 0048ef18
    JNZ 0x0048efc0                      ; 0048ef1a
        ;   XREF to: 0048efc0 (CONDITIONAL_JUMP)  ; LAB_0048efc0
    MOV AL,byte ptr [EBX + 0x9]         ; 0048ef20
    INC AL                              ; 0048ef23
    AND EAX,0xff                        ; 0048ef25
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048ef2a | DAT_006074b8
    JNZ 0x0048efc0                      ; 0048ef31
        ;   XREF to: 0048efc0 (CONDITIONAL_JUMP)  ; LAB_0048efc0
    LEA EAX,[EBX + 0x9]                 ; 0048ef37
    MOV BL,byte ptr [EAX]               ; 0048ef3a
        ;   Label: LAB_0048ef3a
    XOR ECX,ECX                         ; 0048ef3c
    INC BL                              ; 0048ef3e
    MOV CL,BL                           ; 0048ef40
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ef42 | DAT_006074b8
    JZ 0x0048ef4e                       ; 0048ef49
        ;   XREF to: 0048ef4e (CONDITIONAL_JUMP)  ; LAB_0048ef4e
    INC EAX                             ; 0048ef4b
    JMP 0x0048ef3a                      ; 0048ef4c
        ;   XREF to: 0048ef3a (UNCONDITIONAL_JUMP)  ; LAB_0048ef3a
    LEA ECX,[EBP + 0x46]                ; 0048ef4e
        ;   Label: LAB_0048ef4e
    PUSH ECX                            ; 0048ef51
    PUSH 0x5beaff                       ; 0048ef52 | = "( )%n"
    MOV EDI,0xffffffff                  ; 0048ef57
    PUSH EAX                            ; 0048ef5c
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ef5d
    MOV dword ptr [EBP + 0x46],EDI      ; 0048ef60
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ef63
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x46]      ; 0048ef68
    ADD ESP,0xc                         ; 0048ef6b
    CMP EAX,0x2                         ; 0048ef6e
    JL 0x0048efa1                       ; 0048ef71
        ;   XREF to: 0048efa1 (CONDITIONAL_JUMP)  ; LAB_0048efa1
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048ef73
    ADD EDX,EAX                         ; 0048ef76
    MOV ECX,dword ptr [EBP + -0x66]     ; 0048ef78
    MOV dword ptr [EBP + -0x62],EDX     ; 0048ef7b
    TEST ECX,ECX                        ; 0048ef7e
    JZ 0x0048c7d2                       ; 0048ef80
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0048ef86
    MOV EBX,dword ptr [0x006071f0]      ; 0048ef88 | DAT_006071f0
    PUSH 0x3dcccccd                     ; 0048ef8e
    PUSH EBX                            ; 0048ef93
    CALL core_weather.cpp_FUN_0057c2e0  ; 0048ef94
        ;   XREF to: 0057c2e0 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057c2e0()
    ADD ESP,0xc                         ; 0048ef99
    JMP 0x0048c7d2                      ; 0048ef9c
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5beb05                       ; 0048efa1 | = "Error parsing lightning command"
        ;   Label: LAB_0048efa1
    PUSH 0x1c734b0                      ; 0048efa6 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048efab
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048efb0
    XOR EAX,EAX                         ; 0048efb3
    LEA ESP,[EBP + 0xfa]                ; 0048efb5
    POP EBP                             ; 0048efbb
    POP EDI                             ; 0048efbc
    POP ESI                             ; 0048efbd
    POP EBX                             ; 0048efbe
    RET                                 ; 0048efbf
    PUSH 0x7                            ; 0048efc0
        ;   Label: LAB_0048efc0
    PUSH 0x5beb25                       ; 0048efc2 | = "playSfx"
    PUSH EBX                            ; 0048efc7
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048efc8
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048efcd
    TEST EAX,EAX                        ; 0048efd0
    JNZ 0x0048f2f9                      ; 0048efd2
        ;   XREF to: 0048f2f9 (CONDITIONAL_JUMP)  ; LAB_0048f2f9
    MOV AL,byte ptr [EBX + 0x7]         ; 0048efd8
    INC AL                              ; 0048efdb
    AND EAX,0xff                        ; 0048efdd
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048efe2 | DAT_006074b8
    JNZ 0x0048f2f9                      ; 0048efe9
        ;   XREF to: 0048f2f9 (CONDITIONAL_JUMP)  ; LAB_0048f2f9
    LEA EAX,[EBX + 0x7]                 ; 0048efef
    MOV BL,byte ptr [EAX]               ; 0048eff2
        ;   Label: LAB_0048eff2
    XOR ECX,ECX                         ; 0048eff4
    INC BL                              ; 0048eff6
    MOV CL,BL                           ; 0048eff8
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048effa | DAT_006074b8
    JZ 0x0048f006                       ; 0048f001
        ;   XREF to: 0048f006 (CONDITIONAL_JUMP)  ; LAB_0048f006
    INC EAX                             ; 0048f003
    JMP 0x0048eff2                      ; 0048f004
        ;   XREF to: 0048eff2 (UNCONDITIONAL_JUMP)  ; LAB_0048eff2
    LEA ECX,[EBP + 0x4a]                ; 0048f006
        ;   Label: LAB_0048f006
    PUSH ECX                            ; 0048f009
    LEA ECX,[EBP + 0xffffe166]          ; 0048f00a
    PUSH ECX                            ; 0048f010
    PUSH 0x5beb2d                       ; 0048f011 | = "(%[^,)]%n"
    MOV ESI,0xffffffff                  ; 0048f016
    PUSH EAX                            ; 0048f01b
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f01c
    MOV dword ptr [EBP + 0x4a],ESI      ; 0048f01f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048f022
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x4a]      ; 0048f027
    ADD ESP,0x10                        ; 0048f02a
    CMP EDI,0x3                         ; 0048f02d
    JL 0x0048f09a                       ; 0048f030
        ;   XREF to: 0048f09a (CONDITIONAL_JUMP)  ; LAB_0048f09a
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048f032
    LEA ESI,[EBP + 0xffffe166]          ; 0048f035
    ADD EDX,EDI                         ; 0048f03b
    LEA EDI,[EBP + 0xffffe166]          ; 0048f03d
    MOV dword ptr [EBP + -0x62],EDX     ; 0048f043
    SUB ECX,ECX                         ; 0048f046
    DEC ECX                             ; 0048f048
    XOR EAX,EAX                         ; 0048f049
    SCASB.REPNE ES:EDI                  ; 0048f04b
    NOT ECX                             ; 0048f04d
    DEC ECX                             ; 0048f04f
    MOV EDI,ECX                         ; 0048f050
    TEST ECX,ECX                        ; 0048f052
    JLE 0x0048f071                      ; 0048f054
        ;   XREF to: 0048f071 (CONDITIONAL_JUMP)  ; LAB_0048f071
    LEA EAX,[EBP + 0xffffe166]          ; 0048f056
    ADD ECX,EAX                         ; 0048f05c
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f05e
        ;   Label: LAB_0048f05e
    INC AL                              ; 0048f061
    AND EAX,0xff                        ; 0048f063
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f068 | DAT_006074b8
    JNZ 0x0048f0b9                      ; 0048f06f
        ;   XREF to: 0048f0b9 (CONDITIONAL_JUMP)  ; LAB_0048f0b9
    LEA EAX,[ESI + EDI*0x1]             ; 0048f071
        ;   Label: LAB_0048f071
    LEA EBX,[ESI + 0x1]                 ; 0048f074
    MOV byte ptr [EAX],0x0              ; 0048f077
    MOV AL,byte ptr [ESI]               ; 0048f07a
        ;   Label: LAB_0048f07a
    INC AL                              ; 0048f07c
    AND EAX,0xff                        ; 0048f07e
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f083 | DAT_006074b8
    JZ 0x0048f0c1                       ; 0048f08a
        ;   XREF to: 0048f0c1 (CONDITIONAL_JUMP)  ; LAB_0048f0c1
    PUSH EDI                            ; 0048f08c
    PUSH EBX                            ; 0048f08d
    PUSH ESI                            ; 0048f08e
    DEC EDI                             ; 0048f08f
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f090
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f095
    JMP 0x0048f07a                      ; 0048f098
        ;   XREF to: 0048f07a (UNCONDITIONAL_JUMP)  ; LAB_0048f07a
    PUSH 0x5beb37                       ; 0048f09a | = "Error parsing playSfx parms"
        ;   Label: LAB_0048f09a
    PUSH 0x1c734b0                      ; 0048f09f | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f0a4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048f0a9
    XOR EAX,EAX                         ; 0048f0ac
    LEA ESP,[EBP + 0xfa]                ; 0048f0ae
    POP EBP                             ; 0048f0b4
    POP EDI                             ; 0048f0b5
    POP ESI                             ; 0048f0b6
    POP EBX                             ; 0048f0b7
    RET                                 ; 0048f0b8
    DEC EDI                             ; 0048f0b9
        ;   Label: LAB_0048f0b9
    DEC ECX                             ; 0048f0ba
    TEST EDI,EDI                        ; 0048f0bb
    JG 0x0048f05e                       ; 0048f0bd
        ;   XREF to: 0048f05e (CONDITIONAL_JUMP)  ; LAB_0048f05e
    JMP 0x0048f071                      ; 0048f0bf
        ;   XREF to: 0048f071 (UNCONDITIONAL_JUMP)  ; LAB_0048f071
    MOV ECX,0x32                        ; 0048f0c1
        ;   Label: LAB_0048f0c1
    LEA EDI,[EBP + 0xfffff426]          ; 0048f0c6
    MOV ESI,0x5fbaf8                    ; 0048f0cc | DAT_005fbaf8
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048f0d1
    MOVSD.REP ES:EDI,ESI                ; 0048f0d4 | DAT_005fbaf8 | DAT_005fbafc
    CMP byte ptr [EAX],0x2c             ; 0048f0d6
    JZ 0x0048f0fc                       ; 0048f0d9
        ;   XREF to: 0048f0fc (CONDITIONAL_JUMP)  ; LAB_0048f0fc
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048f0db
        ;   Label: LAB_0048f0db
    MOV BL,byte ptr [EAX]               ; 0048f0de
        ;   Label: LAB_0048f0de
    XOR ECX,ECX                         ; 0048f0e0
    INC BL                              ; 0048f0e2
    MOV CL,BL                           ; 0048f0e4
    MOV DL,byte ptr [ECX + 0x6074b8]    ; 0048f0e6 | DAT_006074b8
    LEA EBX,[EAX + 0x1]                 ; 0048f0ec
    TEST DL,0x2                         ; 0048f0ef
    JZ 0x0048f1f3                       ; 0048f0f2
        ;   XREF to: 0048f1f3 (CONDITIONAL_JUMP)  ; LAB_0048f1f3
    MOV EAX,EBX                         ; 0048f0f8
    JMP 0x0048f0de                      ; 0048f0fa
        ;   XREF to: 0048f0de (UNCONDITIONAL_JUMP)  ; LAB_0048f0de
    LEA EAX,[EBP + 0x4a]                ; 0048f0fc
        ;   Label: LAB_0048f0fc
    PUSH EAX                            ; 0048f0ff
    LEA EAX,[EBP + 0xfffff426]          ; 0048f100
    PUSH EAX                            ; 0048f106
    PUSH 0x5beb53                       ; 0048f107 | = ",%[^)]%n"
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048f10c
    MOV ECX,0xffffffff                  ; 0048f10f
    PUSH EBX                            ; 0048f114
    MOV dword ptr [EBP + 0x4a],ECX      ; 0048f115
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048f118
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x4a]      ; 0048f11d
    ADD ESP,0x10                        ; 0048f120
    CMP ESI,0x3                         ; 0048f123
    JL 0x0048f18b                       ; 0048f126
        ;   XREF to: 0048f18b (CONDITIONAL_JUMP)  ; LAB_0048f18b
    ADD dword ptr [EBP + -0x62],ESI     ; 0048f128
    LEA EDI,[EBP + 0xfffff426]          ; 0048f12b
    LEA ESI,[EBP + 0xfffff426]          ; 0048f131
    SUB ECX,ECX                         ; 0048f137
    DEC ECX                             ; 0048f139
    XOR EAX,EAX                         ; 0048f13a
    SCASB.REPNE ES:EDI                  ; 0048f13c
    NOT ECX                             ; 0048f13e
    DEC ECX                             ; 0048f140
    MOV EDI,ECX                         ; 0048f141
    TEST ECX,ECX                        ; 0048f143
    JLE 0x0048f162                      ; 0048f145
        ;   XREF to: 0048f162 (CONDITIONAL_JUMP)  ; LAB_0048f162
    LEA EAX,[EBP + 0xfffff426]          ; 0048f147
    ADD ECX,EAX                         ; 0048f14d
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f14f
        ;   Label: LAB_0048f14f
    INC AL                              ; 0048f152
    AND EAX,0xff                        ; 0048f154
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f159 | DAT_006074b8
    JNZ 0x0048f1aa                      ; 0048f160
        ;   XREF to: 0048f1aa (CONDITIONAL_JUMP)  ; LAB_0048f1aa
    LEA EAX,[ESI + EDI*0x1]             ; 0048f162
        ;   Label: LAB_0048f162
    LEA EBX,[ESI + 0x1]                 ; 0048f165
    MOV byte ptr [EAX],0x0              ; 0048f168
    MOV AL,byte ptr [ESI]               ; 0048f16b
        ;   Label: LAB_0048f16b
    INC AL                              ; 0048f16d
    AND EAX,0xff                        ; 0048f16f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f174 | DAT_006074b8
    JZ 0x0048f1b2                       ; 0048f17b
        ;   XREF to: 0048f1b2 (CONDITIONAL_JUMP)  ; LAB_0048f1b2
    PUSH EDI                            ; 0048f17d
    PUSH EBX                            ; 0048f17e
    PUSH ESI                            ; 0048f17f
    DEC EDI                             ; 0048f180
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f181
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f186
    JMP 0x0048f16b                      ; 0048f189
        ;   XREF to: 0048f16b (UNCONDITIONAL_JUMP)  ; LAB_0048f16b
    PUSH 0x5beb5c                       ; 0048f18b | = "Error parsing playSfx parms"
        ;   Label: LAB_0048f18b
    PUSH 0x1c734b0                      ; 0048f190 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f195
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048f19a
    XOR EAX,EAX                         ; 0048f19d
    LEA ESP,[EBP + 0xfa]                ; 0048f19f
    POP EBP                             ; 0048f1a5
    POP EDI                             ; 0048f1a6
    POP ESI                             ; 0048f1a7
    POP EBX                             ; 0048f1a8
    RET                                 ; 0048f1a9
    DEC EDI                             ; 0048f1aa
        ;   Label: LAB_0048f1aa
    DEC ECX                             ; 0048f1ab
    TEST EDI,EDI                        ; 0048f1ac
    JG 0x0048f14f                       ; 0048f1ae
        ;   XREF to: 0048f14f (CONDITIONAL_JUMP)  ; LAB_0048f14f
    JMP 0x0048f162                      ; 0048f1b0
        ;   XREF to: 0048f162 (UNCONDITIONAL_JUMP)  ; LAB_0048f162
    LEA EDI,[EBP + 0xfffff426]          ; 0048f1b2
        ;   Label: LAB_0048f1b2
    SUB ECX,ECX                         ; 0048f1b8
    DEC ECX                             ; 0048f1ba
    XOR EAX,EAX                         ; 0048f1bb
    SCASB.REPNE ES:EDI                  ; 0048f1bd
    NOT ECX                             ; 0048f1bf
    DEC ECX                             ; 0048f1c1
    CMP ECX,0x14                        ; 0048f1c2
    JC 0x0048f0db                       ; 0048f1c5
        ;   XREF to: 0048f0db (CONDITIONAL_JUMP)  ; LAB_0048f0db
    PUSH 0x13                           ; 0048f1cb
    LEA EAX,[EBP + 0xfffff426]          ; 0048f1cd
    PUSH EAX                            ; 0048f1d3
    PUSH 0x5beb78                       ; 0048f1d4 | = "handle name %s is too long, max %d chars"
    PUSH 0x1c734b0                      ; 0048f1d9 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f1de
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0048f1e3
    XOR EAX,EAX                         ; 0048f1e6
    LEA ESP,[EBP + 0xfa]                ; 0048f1e8
    POP EBP                             ; 0048f1ee
    POP EDI                             ; 0048f1ef
    POP ESI                             ; 0048f1f0
    POP EBX                             ; 0048f1f1
    RET                                 ; 0048f1f2
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f1f3
        ;   Label: LAB_0048f1f3
    CMP byte ptr [EAX],0x29             ; 0048f1f6
    JNZ 0x0048f293                      ; 0048f1f9
        ;   XREF to: 0048f293 (CONDITIONAL_JUMP)  ; LAB_0048f293
    MOV EAX,dword ptr [EBP + -0x66]     ; 0048f1ff
    MOV dword ptr [EBP + -0x62],EBX     ; 0048f202
    TEST EAX,EAX                        ; 0048f205
    JZ 0x0048c7d2                       ; 0048f207
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x2                            ; 0048f20d
    PUSH 0x5bebca                       ; 0048f20f | DAT_005bebca
    LEA EAX,[EBP + 0xffffe166]          ; 0048f214
    PUSH EAX                            ; 0048f21a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048f21b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048f220
    TEST EAX,EAX                        ; 0048f223
    JNZ 0x0048f2b2                      ; 0048f225
        ;   XREF to: 0048f2b2 (CONDITIONAL_JUMP)  ; LAB_0048f2b2
    PUSH 0x1                            ; 0048f22b
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 0048f22d
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 0048f232
    TEST EAX,EAX                        ; 0048f235
    JZ 0x0048c7d2                       ; 0048f237
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0048f23d
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x1                            ; 0048f242
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 0048f244
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 0048f249
    LEA EAX,[EBP + 0xffffe166]          ; 0048f24c
    PUSH EAX                            ; 0048f252
    MOV ESI,dword ptr [EBP + 0x10e]     ; 0048f253
    PUSH ESI                            ; 0048f259
    MOV EDI,dword ptr [0x006045f8]      ; 0048f25a | DAT_006045f8
    PUSH EDI                            ; 0048f260
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 0048f261
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0048f266
    MOV EBX,EAX                         ; 0048f269
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0048f26b
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    CMP byte ptr [EBP + 0xfffff426],0x0 ; 0048f270
    JZ 0x0048c7d2                       ; 0048f277
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 0048f27d
    LEA EAX,[EBP + 0xfffff426]          ; 0048f27e
    PUSH EAX                            ; 0048f284
    PUSH ESI                            ; 0048f285
    CALL core_event.cpp_CEventList_setSfxHandle_FUN_00495150 ; 0048f286
        ;   XREF to: 00495150 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setSfxHandle_FUN_00495150(CEventList * this_ptr, char * name, uint sfx_handle)
    ADD ESP,0xc                         ; 0048f28b
    JMP 0x0048c7d2                      ; 0048f28e
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5beba1                       ; 0048f293 | = "Can't find matching ) in playSfx command"
        ;   Label: LAB_0048f293
    PUSH 0x1c734b0                      ; 0048f298 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f29d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048f2a2
    XOR EAX,EAX                         ; 0048f2a5
    LEA ESP,[EBP + 0xfa]                ; 0048f2a7
    POP EBP                             ; 0048f2ad
    POP EDI                             ; 0048f2ae
    POP ESI                             ; 0048f2af
    POP EBX                             ; 0048f2b0
    RET                                 ; 0048f2b1
    LEA EAX,[EBP + 0xffffe166]          ; 0048f2b2
        ;   Label: LAB_0048f2b2
    PUSH EAX                            ; 0048f2b8
    MOV EDX,dword ptr [EBP + 0x10e]     ; 0048f2b9
    PUSH EDX                            ; 0048f2bf
    MOV ECX,dword ptr [0x006045f8]      ; 0048f2c0 | DAT_006045f8
    PUSH ECX                            ; 0048f2c6
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 0048f2c7
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    MOV BL,byte ptr [EBP + 0xfffff426]  ; 0048f2cc
    ADD ESP,0xc                         ; 0048f2d2
    TEST BL,BL                          ; 0048f2d5
    JZ 0x0048c7d2                       ; 0048f2d7
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 0048f2dd
    LEA EAX,[EBP + 0xfffff426]          ; 0048f2de
    PUSH EAX                            ; 0048f2e4
    MOV EBX,dword ptr [EBP + 0x10e]     ; 0048f2e5
    PUSH EBX                            ; 0048f2eb
    CALL core_event.cpp_CEventList_setSfxHandle_FUN_00495150 ; 0048f2ec
        ;   XREF to: 00495150 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setSfxHandle_FUN_00495150(CEventList * this_ptr, char * name, uint sfx_handle)
    ADD ESP,0xc                         ; 0048f2f1
    JMP 0x0048c7d2                      ; 0048f2f4
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x9                            ; 0048f2f9
        ;   Label: LAB_0048f2f9
    PUSH 0x5bebcd                       ; 0048f2fb | = "playMusic"
    PUSH EBX                            ; 0048f300
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048f301
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048f306
    TEST EAX,EAX                        ; 0048f309
    JNZ 0x0048f426                      ; 0048f30b
        ;   XREF to: 0048f426 (CONDITIONAL_JUMP)  ; LAB_0048f426
    MOV AL,byte ptr [EBX + 0x9]         ; 0048f311
    INC AL                              ; 0048f314
    AND EAX,0xff                        ; 0048f316
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048f31b | DAT_006074b8
    JNZ 0x0048f426                      ; 0048f322
        ;   XREF to: 0048f426 (CONDITIONAL_JUMP)  ; LAB_0048f426
    LEA EAX,[EBX + 0x9]                 ; 0048f328
    MOV BL,byte ptr [EAX]               ; 0048f32b
        ;   Label: LAB_0048f32b
    XOR ECX,ECX                         ; 0048f32d
    INC BL                              ; 0048f32f
    MOV CL,BL                           ; 0048f331
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048f333 | DAT_006074b8
    JZ 0x0048f33f                       ; 0048f33a
        ;   XREF to: 0048f33f (CONDITIONAL_JUMP)  ; LAB_0048f33f
    INC EAX                             ; 0048f33c
    JMP 0x0048f32b                      ; 0048f33d
        ;   XREF to: 0048f32b (UNCONDITIONAL_JUMP)  ; LAB_0048f32b
    LEA ECX,[EBP + 0x4e]                ; 0048f33f
        ;   Label: LAB_0048f33f
    PUSH ECX                            ; 0048f342
    LEA ECX,[EBP + 0xfffff5b6]          ; 0048f343
    PUSH ECX                            ; 0048f349
    PUSH 0x5bebd7                       ; 0048f34a | = " ( %[^)])%n"
    MOV EDX,0xffffffff                  ; 0048f34f
    PUSH EAX                            ; 0048f354
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f355
    MOV dword ptr [EBP + 0x4e],EDX      ; 0048f358
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048f35b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x4e]      ; 0048f360
    ADD ESP,0x10                        ; 0048f363
    CMP ECX,0x2                         ; 0048f366
    JL 0x0048f384                       ; 0048f369
        ;   XREF to: 0048f384 (CONDITIONAL_JUMP)  ; LAB_0048f384
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048f36b
    ADD EAX,ECX                         ; 0048f36e
    MOV BL,byte ptr [EAX]               ; 0048f370
        ;   Label: LAB_0048f370
    XOR ECX,ECX                         ; 0048f372
    INC BL                              ; 0048f374
    MOV CL,BL                           ; 0048f376
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048f378 | DAT_006074b8
    JZ 0x0048f39c                       ; 0048f37f
        ;   XREF to: 0048f39c (CONDITIONAL_JUMP)  ; LAB_0048f39c
    INC EAX                             ; 0048f381
    JMP 0x0048f370                      ; 0048f382
        ;   XREF to: 0048f370 (UNCONDITIONAL_JUMP)  ; LAB_0048f370
    PUSH 0x5bebe3                       ; 0048f384 | = "Syntax error in playMusic() parms"
        ;   Label: LAB_0048f384
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0048f389
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0048f38e
    LEA ESP,[EBP + 0xfa]                ; 0048f391
    POP EBP                             ; 0048f397
    POP EDI                             ; 0048f398
    POP ESI                             ; 0048f399
    POP EBX                             ; 0048f39a
    RET                                 ; 0048f39b
    LEA ESI,[EBP + 0xfffff5b6]          ; 0048f39c
        ;   Label: LAB_0048f39c
    LEA EDI,[EBP + 0xfffff5b6]          ; 0048f3a2
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f3a8
    SUB ECX,ECX                         ; 0048f3ab
    DEC ECX                             ; 0048f3ad
    XOR EAX,EAX                         ; 0048f3ae
    SCASB.REPNE ES:EDI                  ; 0048f3b0
    NOT ECX                             ; 0048f3b2
    DEC ECX                             ; 0048f3b4
    MOV EBX,ECX                         ; 0048f3b5
    TEST ECX,ECX                        ; 0048f3b7
    JLE 0x0048f3d6                      ; 0048f3b9
        ;   XREF to: 0048f3d6 (CONDITIONAL_JUMP)  ; LAB_0048f3d6
    LEA EAX,[EBP + 0xfffff5b6]          ; 0048f3bb
    ADD ECX,EAX                         ; 0048f3c1
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f3c3
        ;   Label: LAB_0048f3c3
    INC AL                              ; 0048f3c6
    AND EAX,0xff                        ; 0048f3c8
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f3cd | DAT_006074b8
    JNZ 0x0048f3ff                      ; 0048f3d4
        ;   XREF to: 0048f3ff (CONDITIONAL_JUMP)  ; LAB_0048f3ff
    LEA EAX,[ESI + EBX*0x1]             ; 0048f3d6
        ;   Label: LAB_0048f3d6
    LEA EDI,[ESI + 0x1]                 ; 0048f3d9
    MOV byte ptr [EAX],0x0              ; 0048f3dc
    MOV AL,byte ptr [ESI]               ; 0048f3df
        ;   Label: LAB_0048f3df
    INC AL                              ; 0048f3e1
    AND EAX,0xff                        ; 0048f3e3
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f3e8 | DAT_006074b8
    JZ 0x0048f407                       ; 0048f3ef
        ;   XREF to: 0048f407 (CONDITIONAL_JUMP)  ; LAB_0048f407
    PUSH EBX                            ; 0048f3f1
    PUSH EDI                            ; 0048f3f2
    PUSH ESI                            ; 0048f3f3
    DEC EBX                             ; 0048f3f4
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f3f5
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f3fa
    JMP 0x0048f3df                      ; 0048f3fd
        ;   XREF to: 0048f3df (UNCONDITIONAL_JUMP)  ; LAB_0048f3df
    DEC EBX                             ; 0048f3ff
        ;   Label: LAB_0048f3ff
    DEC ECX                             ; 0048f400
    TEST EBX,EBX                        ; 0048f401
    JG 0x0048f3c3                       ; 0048f403
        ;   XREF to: 0048f3c3 (CONDITIONAL_JUMP)  ; LAB_0048f3c3
    JMP 0x0048f3d6                      ; 0048f405
        ;   XREF to: 0048f3d6 (UNCONDITIONAL_JUMP)  ; LAB_0048f3d6
    PUSH 0x0                            ; 0048f407
        ;   Label: LAB_0048f407
    PUSH 0x0                            ; 0048f409
    LEA EAX,[EBP + 0xfffff5b6]          ; 0048f40b
    PUSH EAX                            ; 0048f411
    MOV ESI,dword ptr [0x005fe9dc]      ; 0048f412 | g_CGamePtr
    PUSH ESI                            ; 0048f418
    CALL core_game.cpp_FUN_004c4a60     ; 0048f419
        ;   XREF to: 004c4a60 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4a60()
    ADD ESP,0x10                        ; 0048f41e
    JMP 0x0048c7d2                      ; 0048f421
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x9                            ; 0048f426
        ;   Label: LAB_0048f426
    PUSH 0x5bec05                       ; 0048f428 | = "resetGore"
    PUSH EBX                            ; 0048f42d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048f42e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048f433
    TEST EAX,EAX                        ; 0048f436
    JNZ 0x0048f55b                      ; 0048f438
        ;   XREF to: 0048f55b (CONDITIONAL_JUMP)  ; LAB_0048f55b
    MOV AL,byte ptr [EBX + 0x9]         ; 0048f43e
    INC AL                              ; 0048f441
    AND EAX,0xff                        ; 0048f443
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048f448 | DAT_006074b8
    JNZ 0x0048f55b                      ; 0048f44f
        ;   XREF to: 0048f55b (CONDITIONAL_JUMP)  ; LAB_0048f55b
    LEA EAX,[EBX + 0x9]                 ; 0048f455
    MOV BL,byte ptr [EAX]               ; 0048f458
        ;   Label: LAB_0048f458
    XOR ECX,ECX                         ; 0048f45a
    INC BL                              ; 0048f45c
    MOV CL,BL                           ; 0048f45e
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048f460 | DAT_006074b8
    JZ 0x0048f46c                       ; 0048f467
        ;   XREF to: 0048f46c (CONDITIONAL_JUMP)  ; LAB_0048f46c
    INC EAX                             ; 0048f469
    JMP 0x0048f458                      ; 0048f46a
        ;   XREF to: 0048f458 (UNCONDITIONAL_JUMP)  ; LAB_0048f458
    LEA ECX,[EBP + 0x52]                ; 0048f46c
        ;   Label: LAB_0048f46c
    PUSH ECX                            ; 0048f46f
    PUSH 0x5bec0f                       ; 0048f470 | = "( )%n"
    MOV EDI,0xffffffff                  ; 0048f475
    PUSH EAX                            ; 0048f47a
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f47b
    MOV dword ptr [EBP + 0x52],EDI      ; 0048f47e
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048f481
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x52]      ; 0048f486
    ADD ESP,0xc                         ; 0048f489
    CMP EAX,0x2                         ; 0048f48c
    JL 0x0048f4fb                       ; 0048f48f
        ;   XREF to: 0048f4fb (CONDITIONAL_JUMP)  ; LAB_0048f4fb
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048f491
    ADD EDX,EAX                         ; 0048f494
    MOV ECX,dword ptr [EBP + -0x66]     ; 0048f496
    MOV dword ptr [EBP + -0x62],EDX     ; 0048f499
    TEST ECX,ECX                        ; 0048f49c
    JZ 0x0048c7d2                       ; 0048f49e
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EBX,dword ptr [0x005fed24]      ; 0048f4a4 | g_CGorePtr
    PUSH EBX                            ; 0048f4aa
    CALL core_gore.cpp_CGore_reset_FUN_004ce560 ; 0048f4ab
        ;   XREF to: 004ce560 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004ce560(CGore * this_ptr)
    ADD ESP,0x4                         ; 0048f4b0
    MOV ESI,dword ptr [0x005fc5a0]      ; 0048f4b3 | DAT_005fc5a0
    PUSH ESI                            ; 0048f4b9
    CALL core_fire.cpp_FUN_004a1480     ; 0048f4ba
        ;   XREF to: 004a1480 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a1480()
    MOV EAX,[0x00600530]                ; 0048f4bf | DAT_00600530
    XOR EDI,EDI                         ; 0048f4c4
    MOV EAX,dword ptr [EAX]             ; 0048f4c6 | DAT_01d81080
    ADD ESP,0x4                         ; 0048f4c8
    MOV dword ptr [EBP + 0x56],EAX      ; 0048f4cb
    MOV EAX,[0x00600530]                ; 0048f4ce | DAT_00600530
        ;   Label: LAB_0048f4ce
    CMP EDI,dword ptr [EAX + 0x4]       ; 0048f4d3 | DAT_01d81084
    JGE 0x0048f548                      ; 0048f4d6
        ;   XREF to: 0048f548 (CONDITIONAL_JUMP)  ; LAB_0048f548
    PUSH EAX                            ; 0048f4dc | DAT_01d81080
    MOV dword ptr [EAX],EDI             ; 0048f4dd | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0 ; 0048f4df
        ;   XREF to: 004f6bf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission * this_ptr)
    XOR ESI,ESI                         ; 0048f4e4
    XOR EBX,EBX                         ; 0048f4e6
    ADD ESP,0x4                         ; 0048f4e8
    MOV EAX,[0x00603b28]                ; 0048f4eb | g_CDemonSetPtr
        ;   Label: LAB_0048f4eb
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0048f4f0 | g_CDemonSetInstance.actor_count
    JL 0x0048f51a                       ; 0048f4f6
        ;   XREF to: 0048f51a (CONDITIONAL_JUMP)  ; LAB_0048f51a
    INC EDI                             ; 0048f4f8
    JMP 0x0048f4ce                      ; 0048f4f9
        ;   XREF to: 0048f4ce (UNCONDITIONAL_JUMP)  ; LAB_0048f4ce
    PUSH 0x5bec15                       ; 0048f4fb | = "Error parsing resetGore command"
        ;   Label: LAB_0048f4fb
    PUSH 0x1c734b0                      ; 0048f500 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f505
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048f50a
    XOR EAX,EAX                         ; 0048f50d
    LEA ESP,[EBP + 0xfa]                ; 0048f50f
    POP EBP                             ; 0048f515
    POP EDI                             ; 0048f516
    POP ESI                             ; 0048f517
    POP EBX                             ; 0048f518
    RET                                 ; 0048f519
    MOV EDX,dword ptr [0x007e161c]      ; 0048f51a | g_CBodyPartClassInfo.name_hash
        ;   Label: LAB_0048f51a
    PUSH EDX                            ; 0048f520
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 0048f521 | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 0048f528
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048f529
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048f52e
    TEST EAX,EAX                        ; 0048f531
    JZ 0x0048f542                       ; 0048f533
        ;   XREF to: 0048f542 (CONDITIONAL_JUMP)  ; LAB_0048f542
    CMP dword ptr [EAX + 0x70],0x1      ; 0048f535
    JNZ 0x0048f542                      ; 0048f539
        ;   XREF to: 0048f542 (CONDITIONAL_JUMP)  ; LAB_0048f542
    MOV dword ptr [EAX + 0x70],0x2      ; 0048f53b
    INC ESI                             ; 0048f542
        ;   Label: LAB_0048f542
    ADD EBX,0x4                         ; 0048f543
    JMP 0x0048f4eb                      ; 0048f546
        ;   XREF to: 0048f4eb (UNCONDITIONAL_JUMP)  ; LAB_0048f4eb
    MOV ECX,dword ptr [EBP + 0x56]      ; 0048f548
        ;   Label: LAB_0048f548
    PUSH EAX                            ; 0048f54b | DAT_01d81080
    MOV dword ptr [EAX],ECX             ; 0048f54c | DAT_01d81080
    CALL core_mission.cpp_FUN_004f6f80  ; 0048f54e
        ;   XREF to: 004f6f80 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f80()
    ADD ESP,0x4                         ; 0048f553
    JMP 0x0048c7d2                      ; 0048f556
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xc                            ; 0048f55b
        ;   Label: LAB_0048f55b
    PUSH 0x5bec35                       ; 0048f55d | = "setActorBool"
    PUSH EBX                            ; 0048f562
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048f563
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048f568
    TEST EAX,EAX                        ; 0048f56b
    JNZ 0x0048f839                      ; 0048f56d
        ;   XREF to: 0048f839 (CONDITIONAL_JUMP)  ; LAB_0048f839
    MOV AL,byte ptr [EBX + 0xc]         ; 0048f573
    INC AL                              ; 0048f576
    AND EAX,0xff                        ; 0048f578
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048f57d | DAT_006074b8
    JNZ 0x0048f839                      ; 0048f584
        ;   XREF to: 0048f839 (CONDITIONAL_JUMP)  ; LAB_0048f839
    LEA EAX,[EBX + 0xc]                 ; 0048f58a
    MOV BL,byte ptr [EAX]               ; 0048f58d
        ;   Label: LAB_0048f58d
    XOR ECX,ECX                         ; 0048f58f
    INC BL                              ; 0048f591
    MOV CL,BL                           ; 0048f593
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048f595 | DAT_006074b8
    JZ 0x0048f5a1                       ; 0048f59c
        ;   XREF to: 0048f5a1 (CONDITIONAL_JUMP)  ; LAB_0048f5a1
    INC EAX                             ; 0048f59e
    JMP 0x0048f58d                      ; 0048f59f
        ;   XREF to: 0048f58d (UNCONDITIONAL_JUMP)  ; LAB_0048f58d
    LEA ECX,[EBP + 0x5a]                ; 0048f5a1
        ;   Label: LAB_0048f5a1
    PUSH ECX                            ; 0048f5a4
    LEA ECX,[EBP + 0xfffff8d6]          ; 0048f5a5
    PUSH ECX                            ; 0048f5ab
    LEA ECX,[EBP + 0xffffdfd6]          ; 0048f5ac
    PUSH ECX                            ; 0048f5b2
    LEA ECX,[EBP + 0xfffff746]          ; 0048f5b3
    PUSH ECX                            ; 0048f5b9
    PUSH 0x5bec42                       ; 0048f5ba | = "(%[^,], %[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0048f5bf
    PUSH EAX                            ; 0048f5c4
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f5c5
    MOV dword ptr [EBP + 0x5a],EDI      ; 0048f5c8
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048f5cb
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0048f5d0
    ADD ESP,0x18                        ; 0048f5d3
    CMP EAX,0x3                         ; 0048f5d6
    JL 0x0048f643                       ; 0048f5d9
        ;   XREF to: 0048f643 (CONDITIONAL_JUMP)  ; LAB_0048f643
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048f5db
    LEA EBX,[EBP + 0xfffff746]          ; 0048f5de
    ADD EDX,EAX                         ; 0048f5e4
    LEA EDI,[EBP + 0xfffff746]          ; 0048f5e6
    MOV dword ptr [EBP + -0x62],EDX     ; 0048f5ec
    SUB ECX,ECX                         ; 0048f5ef
    DEC ECX                             ; 0048f5f1
    XOR EAX,EAX                         ; 0048f5f2
    SCASB.REPNE ES:EDI                  ; 0048f5f4
    NOT ECX                             ; 0048f5f6
    DEC ECX                             ; 0048f5f8
    MOV EDI,ECX                         ; 0048f5f9
    TEST ECX,ECX                        ; 0048f5fb
    JLE 0x0048f61a                      ; 0048f5fd
        ;   XREF to: 0048f61a (CONDITIONAL_JUMP)  ; LAB_0048f61a
    LEA EAX,[EBP + 0xfffff746]          ; 0048f5ff
    ADD ECX,EAX                         ; 0048f605
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f607
        ;   Label: LAB_0048f607
    INC AL                              ; 0048f60a
    AND EAX,0xff                        ; 0048f60c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f611 | DAT_006074b8
    JNZ 0x0048f662                      ; 0048f618
        ;   XREF to: 0048f662 (CONDITIONAL_JUMP)  ; LAB_0048f662
    LEA EAX,[EBX + EDI*0x1]             ; 0048f61a
        ;   Label: LAB_0048f61a
    LEA ESI,[EBX + 0x1]                 ; 0048f61d
    MOV byte ptr [EAX],0x0              ; 0048f620
    MOV AL,byte ptr [EBX]               ; 0048f623
        ;   Label: LAB_0048f623
    INC AL                              ; 0048f625
    AND EAX,0xff                        ; 0048f627
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f62c | DAT_006074b8
    JZ 0x0048f66a                       ; 0048f633
        ;   XREF to: 0048f66a (CONDITIONAL_JUMP)  ; LAB_0048f66a
    PUSH EDI                            ; 0048f635
    PUSH ESI                            ; 0048f636
    PUSH EBX                            ; 0048f637
    DEC EDI                             ; 0048f638
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f639
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f63e
    JMP 0x0048f623                      ; 0048f641
        ;   XREF to: 0048f623 (UNCONDITIONAL_JUMP)  ; LAB_0048f623
    PUSH 0x5bec5a                       ; 0048f643 | = "Error parsing setActorBool parms"
        ;   Label: LAB_0048f643
    PUSH 0x1c734b0                      ; 0048f648 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f64d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048f652
    XOR EAX,EAX                         ; 0048f655
    LEA ESP,[EBP + 0xfa]                ; 0048f657
    POP EBP                             ; 0048f65d
    POP EDI                             ; 0048f65e
    POP ESI                             ; 0048f65f
    POP EBX                             ; 0048f660
    RET                                 ; 0048f661
    DEC EDI                             ; 0048f662
        ;   Label: LAB_0048f662
    DEC ECX                             ; 0048f663
    TEST EDI,EDI                        ; 0048f664
    JG 0x0048f607                       ; 0048f666
        ;   XREF to: 0048f607 (CONDITIONAL_JUMP)  ; LAB_0048f607
    JMP 0x0048f61a                      ; 0048f668
        ;   XREF to: 0048f61a (UNCONDITIONAL_JUMP)  ; LAB_0048f61a
    LEA EDI,[EBP + 0xffffdfd6]          ; 0048f66a
        ;   Label: LAB_0048f66a
    LEA EBX,[EBP + 0xffffdfd6]          ; 0048f670
    SUB ECX,ECX                         ; 0048f676
    DEC ECX                             ; 0048f678
    XOR EAX,EAX                         ; 0048f679
    SCASB.REPNE ES:EDI                  ; 0048f67b
    NOT ECX                             ; 0048f67d
    DEC ECX                             ; 0048f67f
    MOV EDI,ECX                         ; 0048f680
    TEST ECX,ECX                        ; 0048f682
    JLE 0x0048f6a1                      ; 0048f684
        ;   XREF to: 0048f6a1 (CONDITIONAL_JUMP)  ; LAB_0048f6a1
    LEA EAX,[EBP + 0xffffdfd6]          ; 0048f686
    ADD ECX,EAX                         ; 0048f68c
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f68e
        ;   Label: LAB_0048f68e
    INC AL                              ; 0048f691
    AND EAX,0xff                        ; 0048f693
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f698 | DAT_006074b8
    JNZ 0x0048f6ca                      ; 0048f69f
        ;   XREF to: 0048f6ca (CONDITIONAL_JUMP)  ; LAB_0048f6ca
    LEA EAX,[EBX + EDI*0x1]             ; 0048f6a1
        ;   Label: LAB_0048f6a1
    LEA ESI,[EBX + 0x1]                 ; 0048f6a4
    MOV byte ptr [EAX],0x0              ; 0048f6a7
    MOV AL,byte ptr [EBX]               ; 0048f6aa
        ;   Label: LAB_0048f6aa
    INC AL                              ; 0048f6ac
    AND EAX,0xff                        ; 0048f6ae
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f6b3 | DAT_006074b8
    JZ 0x0048f6d2                       ; 0048f6ba
        ;   XREF to: 0048f6d2 (CONDITIONAL_JUMP)  ; LAB_0048f6d2
    PUSH EDI                            ; 0048f6bc
    PUSH ESI                            ; 0048f6bd
    PUSH EBX                            ; 0048f6be
    DEC EDI                             ; 0048f6bf
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f6c0
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f6c5
    JMP 0x0048f6aa                      ; 0048f6c8
        ;   XREF to: 0048f6aa (UNCONDITIONAL_JUMP)  ; LAB_0048f6aa
    DEC EDI                             ; 0048f6ca
        ;   Label: LAB_0048f6ca
    DEC ECX                             ; 0048f6cb
    TEST EDI,EDI                        ; 0048f6cc
    JG 0x0048f68e                       ; 0048f6ce
        ;   XREF to: 0048f68e (CONDITIONAL_JUMP)  ; LAB_0048f68e
    JMP 0x0048f6a1                      ; 0048f6d0
        ;   XREF to: 0048f6a1 (UNCONDITIONAL_JUMP)  ; LAB_0048f6a1
    LEA EDI,[EBP + 0xfffff8d6]          ; 0048f6d2
        ;   Label: LAB_0048f6d2
    LEA ESI,[EBP + 0xfffff8d6]          ; 0048f6d8
    SUB ECX,ECX                         ; 0048f6de
    DEC ECX                             ; 0048f6e0
    XOR EAX,EAX                         ; 0048f6e1
    SCASB.REPNE ES:EDI                  ; 0048f6e3
    NOT ECX                             ; 0048f6e5
    DEC ECX                             ; 0048f6e7
    MOV EBX,ECX                         ; 0048f6e8
    TEST ECX,ECX                        ; 0048f6ea
    JLE 0x0048f709                      ; 0048f6ec
        ;   XREF to: 0048f709 (CONDITIONAL_JUMP)  ; LAB_0048f709
    LEA EAX,[EBP + 0xfffff8d6]          ; 0048f6ee
    ADD ECX,EAX                         ; 0048f6f4
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f6f6
        ;   Label: LAB_0048f6f6
    INC AL                              ; 0048f6f9
    AND EAX,0xff                        ; 0048f6fb
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f700 | DAT_006074b8
    JNZ 0x0048f732                      ; 0048f707
        ;   XREF to: 0048f732 (CONDITIONAL_JUMP)  ; LAB_0048f732
    LEA EAX,[ESI + EBX*0x1]             ; 0048f709
        ;   Label: LAB_0048f709
    LEA EDI,[ESI + 0x1]                 ; 0048f70c
    MOV byte ptr [EAX],0x0              ; 0048f70f
    MOV AL,byte ptr [ESI]               ; 0048f712
        ;   Label: LAB_0048f712
    INC AL                              ; 0048f714
    AND EAX,0xff                        ; 0048f716
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f71b | DAT_006074b8
    JZ 0x0048f73a                       ; 0048f722
        ;   XREF to: 0048f73a (CONDITIONAL_JUMP)  ; LAB_0048f73a
    PUSH EBX                            ; 0048f724
    PUSH EDI                            ; 0048f725
    PUSH ESI                            ; 0048f726
    DEC EBX                             ; 0048f727
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f728
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f72d
    JMP 0x0048f712                      ; 0048f730
        ;   XREF to: 0048f712 (UNCONDITIONAL_JUMP)  ; LAB_0048f712
    DEC EBX                             ; 0048f732
        ;   Label: LAB_0048f732
    DEC ECX                             ; 0048f733
    TEST EBX,EBX                        ; 0048f734
    JG 0x0048f6f6                       ; 0048f736
        ;   XREF to: 0048f6f6 (CONDITIONAL_JUMP)  ; LAB_0048f6f6
    JMP 0x0048f709                      ; 0048f738
        ;   XREF to: 0048f709 (UNCONDITIONAL_JUMP)  ; LAB_0048f709
    MOV EBX,dword ptr [0x005fbaf4]      ; 0048f73a | DAT_005fbaf4
        ;   Label: LAB_0048f73a
    XOR ECX,ECX                         ; 0048f740
    XOR EDI,EDI                         ; 0048f742
    MOV dword ptr [EBP + 0x5e],ECX      ; 0048f744
    TEST EBX,EBX                        ; 0048f747
    JLE 0x0048f77b                      ; 0048f749
        ;   XREF to: 0048f77b (CONDITIONAL_JUMP)  ; LAB_0048f77b
    XOR EBX,EBX                         ; 0048f74b
    CMP dword ptr [EBX + 0x5fba64],0x0  ; 0048f74d | DAT_005fba64 | DAT_005fbaac
        ;   Label: LAB_0048f74d
    JNZ 0x0048f7d6                      ; 0048f754
        ;   XREF to: 0048f7d6 (CONDITIONAL_JUMP)  ; LAB_0048f7d6
    MOV ESI,0x5fba64                    ; 0048f75a | DAT_005fba64
    LEA EAX,[EBP + 0xffffdfd6]          ; 0048f75f
    ADD ESI,EBX                         ; 0048f765
    PUSH EAX                            ; 0048f767
    LEA EAX,[ESI + 0x4]                 ; 0048f768 | = "spectralFlag"
    PUSH EAX                            ; 0048f76b | = "spectralFlag" | s_invulnerableFlag_005fbab0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048f76c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f771
    TEST EAX,EAX                        ; 0048f774
    JNZ 0x0048f7d6                      ; 0048f776
        ;   XREF to: 0048f7d6 (CONDITIONAL_JUMP)  ; LAB_0048f7d6
    MOV dword ptr [EBP + 0x5e],ESI      ; 0048f778 | DAT_005fba64
    MOV EDX,dword ptr [EBP + 0x5e]      ; 0048f77b
        ;   Label: LAB_0048f77b
    TEST EDX,EDX                        ; 0048f77e
    JZ 0x0048f7ea                       ; 0048f780
        ;   XREF to: 0048f7ea (CONDITIONAL_JUMP)  ; LAB_0048f7ea
    LEA EAX,[EDX + 0x22]                ; 0048f782 | = "CCharacter"
    PUSH EAX                            ; 0048f785 | = "CCharacter"
    MOV ECX,dword ptr [EDX + 0x44]      ; 0048f786 | DAT_005fbaa8
    PUSH ECX                            ; 0048f789
    LEA EAX,[EBP + 0xfffff746]          ; 0048f78a
    PUSH EAX                            ; 0048f790
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048f791
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV EBX,EAX                         ; 0048f796
    ADD ESP,0xc                         ; 0048f798
    TEST EAX,EAX                        ; 0048f79b
    JZ 0x0048c30e                       ; 0048f79d
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048f7a3 | DAT_005df604
    JNZ 0x0048f810                      ; 0048f7a9
        ;   XREF to: 0048f810 (CONDITIONAL_JUMP)  ; LAB_0048f810
    LEA EAX,[EBP + 0xfffff8d6]          ; 0048f7ab
        ;   Label: LAB_0048f7ab
    PUSH EAX                            ; 0048f7b1
    MOV EDX,dword ptr [EBP + 0x10e]     ; 0048f7b2
    PUSH EDX                            ; 0048f7b8
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0048f7b9
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0048f7be
    TEST EAX,EAX                        ; 0048f7c1
    JZ 0x0048c7d2                       ; 0048f7c3
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 0048f7c9
    LEA ESP,[EBP + 0xfa]                ; 0048f7cb
    POP EBP                             ; 0048f7d1
    POP EDI                             ; 0048f7d2
    POP ESI                             ; 0048f7d3
    POP EBX                             ; 0048f7d4
    RET                                 ; 0048f7d5
    MOV ESI,dword ptr [0x005fbaf4]      ; 0048f7d6 | DAT_005fbaf4
        ;   Label: LAB_0048f7d6
    INC EDI                             ; 0048f7dc
    ADD EBX,0x48                        ; 0048f7dd
    CMP EDI,ESI                         ; 0048f7e0
    JL 0x0048f74d                       ; 0048f7e2
        ;   XREF to: 0048f74d (CONDITIONAL_JUMP)  ; LAB_0048f74d
    JMP 0x0048f77b                      ; 0048f7e8
        ;   XREF to: 0048f77b (UNCONDITIONAL_JUMP)  ; LAB_0048f77b
    LEA EAX,[EBP + 0xffffdfd6]          ; 0048f7ea
        ;   Label: LAB_0048f7ea
    PUSH EAX                            ; 0048f7f0
    PUSH 0x5bec7b                       ; 0048f7f1 | = "%s is not a valid boolean actor varia..."
    PUSH 0x1c734b0                      ; 0048f7f6 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f7fb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0048f800
    XOR EAX,EAX                         ; 0048f803
    LEA ESP,[EBP + 0xfa]                ; 0048f805
    POP EBP                             ; 0048f80b
    POP EDI                             ; 0048f80c
    POP ESI                             ; 0048f80d
    POP EBX                             ; 0048f80e
    RET                                 ; 0048f80f
    CMP dword ptr [EBP + -0x66],0x0     ; 0048f810
        ;   Label: LAB_0048f810
    JZ 0x0048f7ab                       ; 0048f814
        ;   XREF to: 0048f7ab (CONDITIONAL_JUMP)  ; LAB_0048f7ab
    LEA EAX,[EBP + 0xfffff8d6]          ; 0048f816
    PUSH EAX                            ; 0048f81c
    MOV EAX,[0x005fba60]                ; 0048f81d | DAT_005fba60
    PUSH EAX                            ; 0048f822
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0048f823
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0048f828
    MOV ECX,dword ptr [ECX + 0x40]      ; 0048f82b | DAT_005fbaa4
    ADD ESP,0x8                         ; 0048f82e
    MOV dword ptr [ECX + EBX*0x1],EAX   ; 0048f831
    JMP 0x0048c7d2                      ; 0048f834
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x10                           ; 0048f839
        ;   Label: LAB_0048f839
    PUSH 0x5beca9                       ; 0048f83b | = "setCameraAmbient"
    PUSH EBX                            ; 0048f840
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048f841
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048f846
    TEST EAX,EAX                        ; 0048f849
    JNZ 0x0048f9e8                      ; 0048f84b
        ;   XREF to: 0048f9e8 (CONDITIONAL_JUMP)  ; LAB_0048f9e8
    MOV AL,byte ptr [EBX + 0x10]        ; 0048f851
    INC AL                              ; 0048f854
    AND EAX,0xff                        ; 0048f856
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048f85b | DAT_006074b8
    JNZ 0x0048f9e8                      ; 0048f862
        ;   XREF to: 0048f9e8 (CONDITIONAL_JUMP)  ; LAB_0048f9e8
    LEA EAX,[EBX + 0x10]                ; 0048f868
    MOV BL,byte ptr [EAX]               ; 0048f86b
        ;   Label: LAB_0048f86b
    XOR ECX,ECX                         ; 0048f86d
    INC BL                              ; 0048f86f
    MOV CL,BL                           ; 0048f871
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048f873 | DAT_006074b8
    JZ 0x0048f87f                       ; 0048f87a
        ;   XREF to: 0048f87f (CONDITIONAL_JUMP)  ; LAB_0048f87f
    INC EAX                             ; 0048f87c
    JMP 0x0048f86b                      ; 0048f87d
        ;   XREF to: 0048f86b (UNCONDITIONAL_JUMP)  ; LAB_0048f86b
    MOV dword ptr [EBP + 0x66],0xffffffff ; 0048f87f
        ;   Label: LAB_0048f87f
    LEA ECX,[EBP + 0x66]                ; 0048f886
    PUSH ECX                            ; 0048f889
    LEA ECX,[EBP + 0x62]                ; 0048f88a
    PUSH ECX                            ; 0048f88d
    LEA ECX,[EBP + 0xffffe616]          ; 0048f88e
    PUSH ECX                            ; 0048f894
    PUSH 0x5becba                       ; 0048f895 | = "(%[^,], %f)%n"
    PUSH EAX                            ; 0048f89a
    MOV dword ptr [EBP + -0x62],EAX     ; 0048f89b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048f89e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x66]      ; 0048f8a3
    ADD ESP,0x14                        ; 0048f8a6
    CMP EBX,0x3                         ; 0048f8a9
    JL 0x0048f916                       ; 0048f8ac
        ;   XREF to: 0048f916 (CONDITIONAL_JUMP)  ; LAB_0048f916
    MOV ESI,dword ptr [EBP + -0x62]     ; 0048f8ae
    ADD ESI,EBX                         ; 0048f8b1
    LEA EDI,[EBP + 0xffffe616]          ; 0048f8b3
    MOV dword ptr [EBP + -0x62],ESI     ; 0048f8b9
    SUB ECX,ECX                         ; 0048f8bc
    DEC ECX                             ; 0048f8be
    XOR EAX,EAX                         ; 0048f8bf
    SCASB.REPNE ES:EDI                  ; 0048f8c1
    NOT ECX                             ; 0048f8c3
    DEC ECX                             ; 0048f8c5
    LEA ESI,[EBP + 0xffffe616]          ; 0048f8c6
    MOV EBX,ECX                         ; 0048f8cc
    TEST ECX,ECX                        ; 0048f8ce
    JLE 0x0048f8ed                      ; 0048f8d0
        ;   XREF to: 0048f8ed (CONDITIONAL_JUMP)  ; LAB_0048f8ed
    LEA EAX,[EBP + 0xffffe616]          ; 0048f8d2
    ADD ECX,EAX                         ; 0048f8d8
    MOV AL,byte ptr [ECX + -0x1]        ; 0048f8da
        ;   Label: LAB_0048f8da
    INC AL                              ; 0048f8dd
    AND EAX,0xff                        ; 0048f8df
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f8e4 | DAT_006074b8
    JNZ 0x0048f935                      ; 0048f8eb
        ;   XREF to: 0048f935 (CONDITIONAL_JUMP)  ; LAB_0048f935
    LEA EAX,[ESI + EBX*0x1]             ; 0048f8ed
        ;   Label: LAB_0048f8ed
    LEA EDI,[ESI + 0x1]                 ; 0048f8f0
    MOV byte ptr [EAX],0x0              ; 0048f8f3
    MOV AL,byte ptr [ESI]               ; 0048f8f6
        ;   Label: LAB_0048f8f6
    INC AL                              ; 0048f8f8
    AND EAX,0xff                        ; 0048f8fa
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048f8ff | DAT_006074b8
    JZ 0x0048f93d                       ; 0048f906
        ;   XREF to: 0048f93d (CONDITIONAL_JUMP)  ; LAB_0048f93d
    PUSH EBX                            ; 0048f908
    PUSH EDI                            ; 0048f909
    PUSH ESI                            ; 0048f90a
    DEC EBX                             ; 0048f90b
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048f90c
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f911
    JMP 0x0048f8f6                      ; 0048f914
        ;   XREF to: 0048f8f6 (UNCONDITIONAL_JUMP)  ; LAB_0048f8f6
    PUSH 0x5becc8                       ; 0048f916 | = "Error parsing setCameraAmbient parms"
        ;   Label: LAB_0048f916
    PUSH 0x1c734b0                      ; 0048f91b | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f920
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048f925
    XOR EAX,EAX                         ; 0048f928
    LEA ESP,[EBP + 0xfa]                ; 0048f92a
    POP EBP                             ; 0048f930
    POP EDI                             ; 0048f931
    POP ESI                             ; 0048f932
    POP EBX                             ; 0048f933
    RET                                 ; 0048f934
    DEC EBX                             ; 0048f935
        ;   Label: LAB_0048f935
    DEC ECX                             ; 0048f936
    TEST EBX,EBX                        ; 0048f937
    JG 0x0048f8da                       ; 0048f939
        ;   XREF to: 0048f8da (CONDITIONAL_JUMP)  ; LAB_0048f8da
    JMP 0x0048f8ed                      ; 0048f93b
        ;   XREF to: 0048f8ed (UNCONDITIONAL_JUMP)  ; LAB_0048f8ed
    LEA EAX,[EBP + 0xffffe616]          ; 0048f93d
        ;   Label: LAB_0048f93d
    PUSH EAX                            ; 0048f943
    MOV EDI,dword ptr [0x00603b28]      ; 0048f944 | g_CDemonSetPtr
    PUSH EDI                            ; 0048f94a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_00535360 ; 0048f94b
        ;   XREF to: 00535360 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet * this_ptr, char * name)
    MOV ECX,EAX                         ; 0048f950
    ADD ESP,0x8                         ; 0048f952
    TEST EAX,EAX                        ; 0048f955
    JL 0x0048f99a                       ; 0048f957
        ;   XREF to: 0048f99a (CONDITIONAL_JUMP)  ; LAB_0048f99a
    FLDZ                                ; 0048f959
    FCOMP float ptr [EBP + 0x62]        ; 0048f95b
    FNSTSW AX                           ; 0048f95e
    SAHF                                ; 0048f960
    JA 0x0048f9c0                       ; 0048f961
        ;   XREF to: 0048f9c0 (CONDITIONAL_JUMP)  ; LAB_0048f9c0
    CMP dword ptr [EBP + 0x62],0x42c80000 ; 0048f963
    JG 0x0048f9c0                       ; 0048f96a
        ;   XREF to: 0048f9c0 (CONDITIONAL_JUMP)  ; LAB_0048f9c0
    CMP dword ptr [EBP + -0x66],0x0     ; 0048f96c
    JZ 0x0048c7d2                       ; 0048f970
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBP + 0x62]          ; 0048f976
    FMUL double ptr [0x005bf4b8]        ; 0048f979 | DAT_005bf4b8
    SUB ESP,0x4                         ; 0048f97f
    FSTP float ptr [ESP]                ; 0048f982
    PUSH ECX                            ; 0048f985
    MOV ECX,dword ptr [0x00603b28]      ; 0048f986 | g_CDemonSetPtr
    PUSH ECX                            ; 0048f98c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280 ; 0048f98d
        ;   XREF to: 0053b280 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280(CDemonSet * this_ptr, int index, float value)
    ADD ESP,0xc                         ; 0048f992
    JMP 0x0048c7d2                      ; 0048f995
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffe616]          ; 0048f99a
        ;   Label: LAB_0048f99a
    PUSH EAX                            ; 0048f9a0
    PUSH 0x5beced                       ; 0048f9a1 | = "Camera \"%s\" does not exist."
    PUSH 0x1c734b0                      ; 0048f9a6 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f9ab
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0048f9b0
    XOR EAX,EAX                         ; 0048f9b3
    LEA ESP,[EBP + 0xfa]                ; 0048f9b5
    POP EBP                             ; 0048f9bb
    POP EDI                             ; 0048f9bc
    POP ESI                             ; 0048f9bd
    POP EBX                             ; 0048f9be
    RET                                 ; 0048f9bf
    SUB ESP,0x8                         ; 0048f9c0
        ;   Label: LAB_0048f9c0
    FLD float ptr [EBP + 0x62]          ; 0048f9c3
    FSTP double ptr [ESP]               ; 0048f9c6
    PUSH 0x5bed09                       ; 0048f9c9 | = "Ambient value %g is out of range (1....."
    PUSH 0x1c734b0                      ; 0048f9ce | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048f9d3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0048f9d8
    XOR EAX,EAX                         ; 0048f9db
    LEA ESP,[EBP + 0xfa]                ; 0048f9dd
    POP EBP                             ; 0048f9e3
    POP EDI                             ; 0048f9e4
    POP ESI                             ; 0048f9e5
    POP EBX                             ; 0048f9e6
    RET                                 ; 0048f9e7
    PUSH 0xa                            ; 0048f9e8
        ;   Label: LAB_0048f9e8
    PUSH 0x5bed33                       ; 0048f9ea | = "setCounter"
    PUSH EBX                            ; 0048f9ef
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048f9f0
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048f9f5
    TEST EAX,EAX                        ; 0048f9f8
    JNZ 0x0048fbb5                      ; 0048f9fa
        ;   XREF to: 0048fbb5 (CONDITIONAL_JUMP)  ; LAB_0048fbb5
    MOV AL,byte ptr [EBX + 0xa]         ; 0048fa00
    INC AL                              ; 0048fa03
    AND EAX,0xff                        ; 0048fa05
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048fa0a | DAT_006074b8
    JNZ 0x0048fbb5                      ; 0048fa11
        ;   XREF to: 0048fbb5 (CONDITIONAL_JUMP)  ; LAB_0048fbb5
    LEA EAX,[EBX + 0xa]                 ; 0048fa17
    MOV BL,byte ptr [EAX]               ; 0048fa1a
        ;   Label: LAB_0048fa1a
    XOR ECX,ECX                         ; 0048fa1c
    INC BL                              ; 0048fa1e
    MOV CL,BL                           ; 0048fa20
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048fa22 | DAT_006074b8
    JZ 0x0048fa2e                       ; 0048fa29
        ;   XREF to: 0048fa2e (CONDITIONAL_JUMP)  ; LAB_0048fa2e
    INC EAX                             ; 0048fa2b
    JMP 0x0048fa1a                      ; 0048fa2c
        ;   XREF to: 0048fa1a (UNCONDITIONAL_JUMP)  ; LAB_0048fa1a
    LEA ECX,[EBP + 0x6a]                ; 0048fa2e
        ;   Label: LAB_0048fa2e
    PUSH ECX                            ; 0048fa31
    LEA ECX,[EBP + 0xfffff296]          ; 0048fa32
    PUSH ECX                            ; 0048fa38
    PUSH 0x5bed3e                       ; 0048fa39 | = "( %[^,)]%n"
    MOV EBX,0xffffffff                  ; 0048fa3e
    PUSH EAX                            ; 0048fa43
    MOV dword ptr [EBP + -0x62],EAX     ; 0048fa44
    MOV dword ptr [EBP + 0x6a],EBX      ; 0048fa47
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048fa4a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0048fa4f
    ADD ESP,0x10                        ; 0048fa52
    CMP ESI,0x5                         ; 0048fa55
    JL 0x0048fabd                       ; 0048fa58
        ;   XREF to: 0048fabd (CONDITIONAL_JUMP)  ; LAB_0048fabd
    ADD dword ptr [EBP + -0x62],ESI     ; 0048fa5a
    LEA EDI,[EBP + 0xfffff296]          ; 0048fa5d
    LEA ESI,[EBP + 0xfffff296]          ; 0048fa63
    SUB ECX,ECX                         ; 0048fa69
    DEC ECX                             ; 0048fa6b
    XOR EAX,EAX                         ; 0048fa6c
    SCASB.REPNE ES:EDI                  ; 0048fa6e
    NOT ECX                             ; 0048fa70
    DEC ECX                             ; 0048fa72
    MOV EBX,ECX                         ; 0048fa73
    TEST ECX,ECX                        ; 0048fa75
    JLE 0x0048fa94                      ; 0048fa77
        ;   XREF to: 0048fa94 (CONDITIONAL_JUMP)  ; LAB_0048fa94
    LEA EAX,[EBP + 0xfffff296]          ; 0048fa79
    ADD ECX,EAX                         ; 0048fa7f
    MOV AL,byte ptr [ECX + -0x1]        ; 0048fa81
        ;   Label: LAB_0048fa81
    INC AL                              ; 0048fa84
    AND EAX,0xff                        ; 0048fa86
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048fa8b | DAT_006074b8
    JNZ 0x0048fadc                      ; 0048fa92
        ;   XREF to: 0048fadc (CONDITIONAL_JUMP)  ; LAB_0048fadc
    LEA EAX,[ESI + EBX*0x1]             ; 0048fa94
        ;   Label: LAB_0048fa94
    LEA EDI,[ESI + 0x1]                 ; 0048fa97
    MOV byte ptr [EAX],0x0              ; 0048fa9a
    MOV AL,byte ptr [ESI]               ; 0048fa9d
        ;   Label: LAB_0048fa9d
    INC AL                              ; 0048fa9f
    AND EAX,0xff                        ; 0048faa1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048faa6 | DAT_006074b8
    JZ 0x0048fae4                       ; 0048faad
        ;   XREF to: 0048fae4 (CONDITIONAL_JUMP)  ; LAB_0048fae4
    PUSH EBX                            ; 0048faaf
    PUSH EDI                            ; 0048fab0
    PUSH ESI                            ; 0048fab1
    DEC EBX                             ; 0048fab2
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048fab3
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048fab8
    JMP 0x0048fa9d                      ; 0048fabb
        ;   XREF to: 0048fa9d (UNCONDITIONAL_JUMP)  ; LAB_0048fa9d
    PUSH 0x5bed49                       ; 0048fabd | = "Error parsing setCounter arguments"
        ;   Label: LAB_0048fabd
    PUSH 0x1c734b0                      ; 0048fac2 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fac7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048facc
    XOR EAX,EAX                         ; 0048facf
    LEA ESP,[EBP + 0xfa]                ; 0048fad1
    POP EBP                             ; 0048fad7
    POP EDI                             ; 0048fad8
    POP ESI                             ; 0048fad9
    POP EBX                             ; 0048fada
    RET                                 ; 0048fadb
    DEC EBX                             ; 0048fadc
        ;   Label: LAB_0048fadc
    DEC ECX                             ; 0048fadd
    TEST EBX,EBX                        ; 0048fade
    JG 0x0048fa81                       ; 0048fae0
        ;   XREF to: 0048fa81 (CONDITIONAL_JUMP)  ; LAB_0048fa81
    JMP 0x0048fa94                      ; 0048fae2
        ;   XREF to: 0048fa94 (UNCONDITIONAL_JUMP)  ; LAB_0048fa94
    XOR EAX,EAX                         ; 0048fae4
        ;   Label: LAB_0048fae4
    MOV dword ptr [EBP + 0x6e],EAX      ; 0048fae6
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048fae9
    CMP byte ptr [EAX],0x2c             ; 0048faec
    JZ 0x0048fb2d                       ; 0048faef
        ;   XREF to: 0048fb2d (CONDITIONAL_JUMP)  ; LAB_0048fb2d
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048faf1
        ;   Label: LAB_0048faf1
    CMP byte ptr [EAX],0x29             ; 0048faf4
    JNZ 0x0048fb96                      ; 0048faf7
        ;   XREF to: 0048fb96 (CONDITIONAL_JUMP)  ; LAB_0048fb96
    LEA EDI,[EAX + 0x1]                 ; 0048fafd
    MOV EAX,dword ptr [EBP + -0x66]     ; 0048fb00
    MOV dword ptr [EBP + -0x62],EDI     ; 0048fb03
    TEST EAX,EAX                        ; 0048fb06
    JZ 0x0048c7d2                       ; 0048fb08
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0048fb0e
    PUSH EDX                            ; 0048fb11
    LEA EAX,[EBP + 0xfffff296]          ; 0048fb12
    PUSH EAX                            ; 0048fb18
    MOV ECX,dword ptr [EBP + 0x10e]     ; 0048fb19
    PUSH ECX                            ; 0048fb1f
    CALL core_event.cpp_CEventList_setCounter_FUN_00494bf0 ; 0048fb20
        ;   XREF to: 00494bf0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_00494bf0(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 0048fb25
    JMP 0x0048c7d2                      ; 0048fb28
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0x6a]                ; 0048fb2d
        ;   Label: LAB_0048fb2d
    PUSH EAX                            ; 0048fb30
    LEA EAX,[EBP + 0x6e]                ; 0048fb31
    PUSH EAX                            ; 0048fb34
    PUSH 0x5bed6c                       ; 0048fb35 | = ",%d%n"
    MOV ECX,dword ptr [EBP + -0x62]     ; 0048fb3a
    MOV EDX,0xffffffff                  ; 0048fb3d
    PUSH ECX                            ; 0048fb42
    MOV dword ptr [EBP + 0x6a],EDX      ; 0048fb43
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048fb46
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x6a]      ; 0048fb4b
    ADD ESP,0x10                        ; 0048fb4e
    CMP EBX,0x1                         ; 0048fb51
    JL 0x0048fb6f                       ; 0048fb54
        ;   XREF to: 0048fb6f (CONDITIONAL_JUMP)  ; LAB_0048fb6f
    MOV EAX,dword ptr [EBP + -0x62]     ; 0048fb56
    ADD EAX,EBX                         ; 0048fb59
    MOV BL,byte ptr [EAX]               ; 0048fb5b
        ;   Label: LAB_0048fb5b
    XOR ECX,ECX                         ; 0048fb5d
    INC BL                              ; 0048fb5f
    MOV CL,BL                           ; 0048fb61
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048fb63 | DAT_006074b8
    JZ 0x0048fb8e                       ; 0048fb6a
        ;   XREF to: 0048fb8e (CONDITIONAL_JUMP)  ; LAB_0048fb8e
    INC EAX                             ; 0048fb6c
    JMP 0x0048fb5b                      ; 0048fb6d
        ;   XREF to: 0048fb5b (UNCONDITIONAL_JUMP)  ; LAB_0048fb5b
    PUSH 0x5bed72                       ; 0048fb6f | = "Error parsing setCounter value argument"
        ;   Label: LAB_0048fb6f
    PUSH 0x1c734b0                      ; 0048fb74 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fb79
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048fb7e
    XOR EAX,EAX                         ; 0048fb81
    LEA ESP,[EBP + 0xfa]                ; 0048fb83
    POP EBP                             ; 0048fb89
    POP EDI                             ; 0048fb8a
    POP ESI                             ; 0048fb8b
    POP EBX                             ; 0048fb8c
    RET                                 ; 0048fb8d
    MOV dword ptr [EBP + -0x62],EAX     ; 0048fb8e
        ;   Label: LAB_0048fb8e
    JMP 0x0048faf1                      ; 0048fb91
        ;   XREF to: 0048faf1 (UNCONDITIONAL_JUMP)  ; LAB_0048faf1
    PUSH 0x5bed9a                       ; 0048fb96 | = "Error parsing setCounter arguments"
        ;   Label: LAB_0048fb96
    PUSH 0x1c734b0                      ; 0048fb9b | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fba0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048fba5
    XOR EAX,EAX                         ; 0048fba8
    LEA ESP,[EBP + 0xfa]                ; 0048fbaa
    POP EBP                             ; 0048fbb0
    POP EDI                             ; 0048fbb1
    POP ESI                             ; 0048fbb2
    POP EBX                             ; 0048fbb3
    RET                                 ; 0048fbb4
    PUSH 0xc                            ; 0048fbb5
        ;   Label: LAB_0048fbb5
    PUSH 0x5bedbd                       ; 0048fbb7 | = "setDoorState"
    PUSH EBX                            ; 0048fbbc
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048fbbd
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048fbc2
    TEST EAX,EAX                        ; 0048fbc5
    JNZ 0x0048fe03                      ; 0048fbc7
        ;   XREF to: 0048fe03 (CONDITIONAL_JUMP)  ; LAB_0048fe03
    MOV AL,byte ptr [EBX + 0xc]         ; 0048fbcd
    INC AL                              ; 0048fbd0
    AND EAX,0xff                        ; 0048fbd2
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048fbd7 | DAT_006074b8
    JNZ 0x0048fe03                      ; 0048fbde
        ;   XREF to: 0048fe03 (CONDITIONAL_JUMP)  ; LAB_0048fe03
    LEA EAX,[EBX + 0xc]                 ; 0048fbe4
    MOV BL,byte ptr [EAX]               ; 0048fbe7
        ;   Label: LAB_0048fbe7
    XOR ECX,ECX                         ; 0048fbe9
    INC BL                              ; 0048fbeb
    MOV CL,BL                           ; 0048fbed
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048fbef | DAT_006074b8
    JZ 0x0048fbfb                       ; 0048fbf6
        ;   XREF to: 0048fbfb (CONDITIONAL_JUMP)  ; LAB_0048fbfb
    INC EAX                             ; 0048fbf8
    JMP 0x0048fbe7                      ; 0048fbf9
        ;   XREF to: 0048fbe7 (UNCONDITIONAL_JUMP)  ; LAB_0048fbe7
    LEA ECX,[EBP + 0x72]                ; 0048fbfb
        ;   Label: LAB_0048fbfb
    PUSH ECX                            ; 0048fbfe
    LEA ECX,[EBP + 0xffffe22e]          ; 0048fbff
    PUSH ECX                            ; 0048fc05
    LEA ECX,[EBP + 0xfffff03e]          ; 0048fc06
    PUSH ECX                            ; 0048fc0c
    PUSH 0x5bedca                       ; 0048fc0d | = "(%[^,], %[^)])%n"
    MOV EBX,0xffffffff                  ; 0048fc12
    PUSH EAX                            ; 0048fc17
    MOV dword ptr [EBP + -0x62],EAX     ; 0048fc18
    MOV dword ptr [EBP + 0x72],EBX      ; 0048fc1b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048fc1e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x72]      ; 0048fc23
    ADD ESP,0x14                        ; 0048fc26
    CMP ESI,0x5                         ; 0048fc29
    JL 0x0048fc91                       ; 0048fc2c
        ;   XREF to: 0048fc91 (CONDITIONAL_JUMP)  ; LAB_0048fc91
    ADD dword ptr [EBP + -0x62],ESI     ; 0048fc2e
    LEA EDI,[EBP + 0xfffff03e]          ; 0048fc31
    LEA ESI,[EBP + 0xfffff03e]          ; 0048fc37
    SUB ECX,ECX                         ; 0048fc3d
    DEC ECX                             ; 0048fc3f
    XOR EAX,EAX                         ; 0048fc40
    SCASB.REPNE ES:EDI                  ; 0048fc42
    NOT ECX                             ; 0048fc44
    DEC ECX                             ; 0048fc46
    MOV EBX,ECX                         ; 0048fc47
    TEST ECX,ECX                        ; 0048fc49
    JLE 0x0048fc68                      ; 0048fc4b
        ;   XREF to: 0048fc68 (CONDITIONAL_JUMP)  ; LAB_0048fc68
    LEA EAX,[EBP + 0xfffff03e]          ; 0048fc4d
    ADD ECX,EAX                         ; 0048fc53
    MOV AL,byte ptr [ECX + -0x1]        ; 0048fc55
        ;   Label: LAB_0048fc55
    INC AL                              ; 0048fc58
    AND EAX,0xff                        ; 0048fc5a
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048fc5f | DAT_006074b8
    JNZ 0x0048fcb0                      ; 0048fc66
        ;   XREF to: 0048fcb0 (CONDITIONAL_JUMP)  ; LAB_0048fcb0
    LEA EAX,[ESI + EBX*0x1]             ; 0048fc68
        ;   Label: LAB_0048fc68
    LEA EDI,[ESI + 0x1]                 ; 0048fc6b
    MOV byte ptr [EAX],0x0              ; 0048fc6e
    MOV AL,byte ptr [ESI]               ; 0048fc71
        ;   Label: LAB_0048fc71
    INC AL                              ; 0048fc73
    AND EAX,0xff                        ; 0048fc75
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048fc7a | DAT_006074b8
    JZ 0x0048fcb8                       ; 0048fc81
        ;   XREF to: 0048fcb8 (CONDITIONAL_JUMP)  ; LAB_0048fcb8
    PUSH EBX                            ; 0048fc83
    PUSH EDI                            ; 0048fc84
    PUSH ESI                            ; 0048fc85
    DEC EBX                             ; 0048fc86
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048fc87
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048fc8c
    JMP 0x0048fc71                      ; 0048fc8f
        ;   XREF to: 0048fc71 (UNCONDITIONAL_JUMP)  ; LAB_0048fc71
    PUSH 0x5beddb                       ; 0048fc91 | = "Error parsing setDoorState command parms"
        ;   Label: LAB_0048fc91
    PUSH 0x1c734b0                      ; 0048fc96 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fc9b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048fca0
    XOR EAX,EAX                         ; 0048fca3
    LEA ESP,[EBP + 0xfa]                ; 0048fca5
    POP EBP                             ; 0048fcab
    POP EDI                             ; 0048fcac
    POP ESI                             ; 0048fcad
    POP EBX                             ; 0048fcae
    RET                                 ; 0048fcaf
    DEC EBX                             ; 0048fcb0
        ;   Label: LAB_0048fcb0
    DEC ECX                             ; 0048fcb1
    TEST EBX,EBX                        ; 0048fcb2
    JG 0x0048fc55                       ; 0048fcb4
        ;   XREF to: 0048fc55 (CONDITIONAL_JUMP)  ; LAB_0048fc55
    JMP 0x0048fc68                      ; 0048fcb6
        ;   XREF to: 0048fc68 (UNCONDITIONAL_JUMP)  ; LAB_0048fc68
    LEA EDI,[EBP + 0xffffe22e]          ; 0048fcb8
        ;   Label: LAB_0048fcb8
    LEA ESI,[EBP + 0xffffe22e]          ; 0048fcbe
    SUB ECX,ECX                         ; 0048fcc4
    DEC ECX                             ; 0048fcc6
    XOR EAX,EAX                         ; 0048fcc7
    SCASB.REPNE ES:EDI                  ; 0048fcc9
    NOT ECX                             ; 0048fccb
    DEC ECX                             ; 0048fccd
    MOV EBX,ECX                         ; 0048fcce
    TEST ECX,ECX                        ; 0048fcd0
    JLE 0x0048fcef                      ; 0048fcd2
        ;   XREF to: 0048fcef (CONDITIONAL_JUMP)  ; LAB_0048fcef
    LEA EAX,[EBP + 0xffffe22e]          ; 0048fcd4
    ADD ECX,EAX                         ; 0048fcda
    MOV AL,byte ptr [ECX + -0x1]        ; 0048fcdc
        ;   Label: LAB_0048fcdc
    INC AL                              ; 0048fcdf
    AND EAX,0xff                        ; 0048fce1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048fce6 | DAT_006074b8
    JNZ 0x0048fd18                      ; 0048fced
        ;   XREF to: 0048fd18 (CONDITIONAL_JUMP)  ; LAB_0048fd18
    LEA EAX,[ESI + EBX*0x1]             ; 0048fcef
        ;   Label: LAB_0048fcef
    LEA EDI,[ESI + 0x1]                 ; 0048fcf2
    MOV byte ptr [EAX],0x0              ; 0048fcf5
    MOV AL,byte ptr [ESI]               ; 0048fcf8
        ;   Label: LAB_0048fcf8
    INC AL                              ; 0048fcfa
    AND EAX,0xff                        ; 0048fcfc
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048fd01 | DAT_006074b8
    JZ 0x0048fd20                       ; 0048fd08
        ;   XREF to: 0048fd20 (CONDITIONAL_JUMP)  ; LAB_0048fd20
    PUSH EBX                            ; 0048fd0a
    PUSH EDI                            ; 0048fd0b
    PUSH ESI                            ; 0048fd0c
    DEC EBX                             ; 0048fd0d
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048fd0e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048fd13
    JMP 0x0048fcf8                      ; 0048fd16
        ;   XREF to: 0048fcf8 (UNCONDITIONAL_JUMP)  ; LAB_0048fcf8
    DEC EBX                             ; 0048fd18
        ;   Label: LAB_0048fd18
    DEC ECX                             ; 0048fd19
    TEST EBX,EBX                        ; 0048fd1a
    JG 0x0048fcdc                       ; 0048fd1c
        ;   XREF to: 0048fcdc (CONDITIONAL_JUMP)  ; LAB_0048fcdc
    JMP 0x0048fcef                      ; 0048fd1e
        ;   XREF to: 0048fcef (UNCONDITIONAL_JUMP)  ; LAB_0048fcef
    PUSH 0x1b85140                      ; 0048fd20
        ;   Label: LAB_0048fd20
    MOV EAX,[0x01b85178]                ; 0048fd25 | g_CDoorClassInfo.name_hash
    PUSH EAX                            ; 0048fd2a
    LEA EAX,[EBP + 0xfffff03e]          ; 0048fd2b
    PUSH EAX                            ; 0048fd31
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048fd32
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0048fd37
    MOV EBX,EAX                         ; 0048fd3a
    TEST EAX,EAX                        ; 0048fd3c
    JZ 0x0048c30e                       ; 0048fd3e
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 0048fd44 | DAT_005df604
    JNZ 0x0048fd51                      ; 0048fd4a
        ;   XREF to: 0048fd51 (CONDITIONAL_JUMP)  ; LAB_0048fd51
    XOR ECX,ECX                         ; 0048fd4c
    MOV dword ptr [EBP + -0x66],ECX     ; 0048fd4e
    PUSH 0x5bee04                       ; 0048fd51 | DAT_005bee04
        ;   Label: LAB_0048fd51
    LEA EAX,[EBP + 0xffffe22e]          ; 0048fd56
    PUSH EAX                            ; 0048fd5c
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048fd5d
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fd62
    TEST EAX,EAX                        ; 0048fd65
    JNZ 0x0048fd87                      ; 0048fd67
        ;   XREF to: 0048fd87 (CONDITIONAL_JUMP)  ; LAB_0048fd87
    MOV EAX,0x2                         ; 0048fd69
    CMP dword ptr [EBP + -0x66],0x0     ; 0048fd6e
        ;   Label: LAB_0048fd6e
    JZ 0x0048c7d2                       ; 0048fd72
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 0048fd78
    PUSH EBX                            ; 0048fd79
    CALL core_door.cpp_FUN_00463d30     ; 0048fd7a
        ;   XREF to: 00463d30 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00463d30()
    ADD ESP,0x8                         ; 0048fd7f
    JMP 0x0048c7d2                      ; 0048fd82
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5bee09                       ; 0048fd87 | = "closed"
        ;   Label: LAB_0048fd87
    LEA EAX,[EBP + 0xffffe22e]          ; 0048fd8c
    PUSH EAX                            ; 0048fd92
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048fd93
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fd98
    TEST EAX,EAX                        ; 0048fd9b
    JZ 0x0048fd6e                       ; 0048fd9d
        ;   XREF to: 0048fd6e (CONDITIONAL_JUMP)  ; LAB_0048fd6e
    PUSH 0x5bee10                       ; 0048fd9f | = "opening"
    LEA EAX,[EBP + 0xffffe22e]          ; 0048fda4
    PUSH EAX                            ; 0048fdaa
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048fdab
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fdb0
    TEST EAX,EAX                        ; 0048fdb3
    JNZ 0x0048fdbe                      ; 0048fdb5
        ;   XREF to: 0048fdbe (CONDITIONAL_JUMP)  ; LAB_0048fdbe
    MOV EAX,0x1                         ; 0048fdb7
    JMP 0x0048fd6e                      ; 0048fdbc
        ;   XREF to: 0048fd6e (UNCONDITIONAL_JUMP)  ; LAB_0048fd6e
    PUSH 0x5bee18                       ; 0048fdbe | = "closing"
        ;   Label: LAB_0048fdbe
    LEA EAX,[EBP + 0xffffe22e]          ; 0048fdc3
    PUSH EAX                            ; 0048fdc9
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048fdca
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fdcf
    TEST EAX,EAX                        ; 0048fdd2
    JNZ 0x0048fddd                      ; 0048fdd4
        ;   XREF to: 0048fddd (CONDITIONAL_JUMP)  ; LAB_0048fddd
    MOV EAX,0x3                         ; 0048fdd6
    JMP 0x0048fd6e                      ; 0048fddb
        ;   XREF to: 0048fd6e (UNCONDITIONAL_JUMP)  ; LAB_0048fd6e
    LEA EAX,[EBP + 0xffffe22e]          ; 0048fddd
        ;   Label: LAB_0048fddd
    PUSH EAX                            ; 0048fde3
    PUSH 0x5bee20                       ; 0048fde4 | = "Invalid door state '%s'"
    PUSH 0x1c734b0                      ; 0048fde9 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fdee
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0048fdf3
    XOR EAX,EAX                         ; 0048fdf6
    LEA ESP,[EBP + 0xfa]                ; 0048fdf8
    POP EBP                             ; 0048fdfe
    POP EDI                             ; 0048fdff
    POP ESI                             ; 0048fe00
    POP EBX                             ; 0048fe01
    RET                                 ; 0048fe02
    PUSH 0xf                            ; 0048fe03
        ;   Label: LAB_0048fe03
    PUSH 0x5bee38                       ; 0048fe05 | = "setGroupAmbient"
    PUSH EBX                            ; 0048fe0a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048fe0b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048fe10
    TEST EAX,EAX                        ; 0048fe13
    JNZ 0x0048ff09                      ; 0048fe15
        ;   XREF to: 0048ff09 (CONDITIONAL_JUMP)  ; LAB_0048ff09
    MOV AL,byte ptr [EBX + 0xf]         ; 0048fe1b
    INC AL                              ; 0048fe1e
    AND EAX,0xff                        ; 0048fe20
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048fe25 | DAT_006074b8
    JNZ 0x0048ff09                      ; 0048fe2c
        ;   XREF to: 0048ff09 (CONDITIONAL_JUMP)  ; LAB_0048ff09
    LEA EAX,[EBX + 0xf]                 ; 0048fe32
    MOV BL,byte ptr [EAX]               ; 0048fe35
        ;   Label: LAB_0048fe35
    XOR ECX,ECX                         ; 0048fe37
    INC BL                              ; 0048fe39
    MOV CL,BL                           ; 0048fe3b
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048fe3d | DAT_006074b8
    JZ 0x0048fe49                       ; 0048fe44
        ;   XREF to: 0048fe49 (CONDITIONAL_JUMP)  ; LAB_0048fe49
    INC EAX                             ; 0048fe46
    JMP 0x0048fe35                      ; 0048fe47
        ;   XREF to: 0048fe35 (UNCONDITIONAL_JUMP)  ; LAB_0048fe35
    LEA ECX,[EBP + 0x7e]                ; 0048fe49
        ;   Label: LAB_0048fe49
    PUSH ECX                            ; 0048fe4c
    LEA ECX,[EBP + 0x7a]                ; 0048fe4d
    PUSH ECX                            ; 0048fe50
    LEA ECX,[EBP + 0x76]                ; 0048fe51
    PUSH ECX                            ; 0048fe54
    PUSH 0x5bee48                       ; 0048fe55 | = "(%d, %f)%n"
    MOV EDI,0xffffffff                  ; 0048fe5a
    PUSH EAX                            ; 0048fe5f
    MOV dword ptr [EBP + -0x62],EAX     ; 0048fe60
    MOV dword ptr [EBP + 0x7e],EDI      ; 0048fe63
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048fe66
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x7e]      ; 0048fe6b
    ADD ESP,0x14                        ; 0048fe6e
    CMP EAX,0x3                         ; 0048fe71
    JL 0x0048fec2                       ; 0048fe74
        ;   XREF to: 0048fec2 (CONDITIONAL_JUMP)  ; LAB_0048fec2
    MOV EDX,dword ptr [EBP + -0x62]     ; 0048fe76
    ADD EDX,EAX                         ; 0048fe79
    FLDZ                                ; 0048fe7b
    MOV dword ptr [EBP + -0x62],EDX     ; 0048fe7d
    FCOMP float ptr [EBP + 0x7a]        ; 0048fe80
    FNSTSW AX                           ; 0048fe83
    SAHF                                ; 0048fe85
    JA 0x0048fee1                       ; 0048fe86
        ;   XREF to: 0048fee1 (CONDITIONAL_JUMP)  ; LAB_0048fee1
    CMP dword ptr [EBP + 0x7a],0x42c80000 ; 0048fe88
    JG 0x0048fee1                       ; 0048fe8f
        ;   XREF to: 0048fee1 (CONDITIONAL_JUMP)  ; LAB_0048fee1
    CMP dword ptr [EBP + -0x66],0x0     ; 0048fe91
    JZ 0x0048c7d2                       ; 0048fe95
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBP + 0x7a]          ; 0048fe9b
    FMUL double ptr [0x005bf4b8]        ; 0048fe9e | DAT_005bf4b8
    SUB ESP,0x4                         ; 0048fea4
    FSTP float ptr [ESP]                ; 0048fea7
    MOV ESI,dword ptr [EBP + 0x76]      ; 0048feaa
    PUSH ESI                            ; 0048fead
    MOV EDI,dword ptr [0x00603b28]      ; 0048feae | g_CDemonSetPtr
    PUSH EDI                            ; 0048feb4 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300 ; 0048feb5
        ;   XREF to: 0053b300 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300(CDemonSet * this_ptr, int group_id, float value)
    ADD ESP,0xc                         ; 0048feba
    JMP 0x0048c7d2                      ; 0048febd
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5bee53                       ; 0048fec2 | = "Error parsing setGroupAmbient parms"
        ;   Label: LAB_0048fec2
    PUSH 0x1c734b0                      ; 0048fec7 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fecc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0048fed1
    XOR EAX,EAX                         ; 0048fed4
    LEA ESP,[EBP + 0xfa]                ; 0048fed6
    POP EBP                             ; 0048fedc
    POP EDI                             ; 0048fedd
    POP ESI                             ; 0048fede
    POP EBX                             ; 0048fedf
    RET                                 ; 0048fee0
    SUB ESP,0x8                         ; 0048fee1
        ;   Label: LAB_0048fee1
    FLD float ptr [EBP + 0x7a]          ; 0048fee4
    FSTP double ptr [ESP]               ; 0048fee7
    PUSH 0x5bee77                       ; 0048feea | = "Ambient value %g is out of range (1....."
    PUSH 0x1c734b0                      ; 0048feef | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048fef4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0048fef9
    XOR EAX,EAX                         ; 0048fefc
    LEA ESP,[EBP + 0xfa]                ; 0048fefe
    POP EBP                             ; 0048ff04
    POP EDI                             ; 0048ff05
    POP ESI                             ; 0048ff06
    POP EBX                             ; 0048ff07
    RET                                 ; 0048ff08
    PUSH 0x13                           ; 0048ff09
        ;   Label: LAB_0048ff09
    PUSH 0x5beea1                       ; 0048ff0b | = "setLightFilterFrame"
    PUSH EBX                            ; 0048ff10
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048ff11
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0048ff16
    TEST EAX,EAX                        ; 0048ff19
    JNZ 0x004900a4                      ; 0048ff1b
        ;   XREF to: 004900a4 (CONDITIONAL_JUMP)  ; LAB_004900a4
    MOV AL,byte ptr [EBX + 0x13]        ; 0048ff21
    INC AL                              ; 0048ff24
    AND EAX,0xff                        ; 0048ff26
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048ff2b | DAT_006074b8
    JNZ 0x004900a4                      ; 0048ff32
        ;   XREF to: 004900a4 (CONDITIONAL_JUMP)  ; LAB_004900a4
    LEA EAX,[EBX + 0x13]                ; 0048ff38
    MOV BL,byte ptr [EAX]               ; 0048ff3b
        ;   Label: LAB_0048ff3b
    XOR ECX,ECX                         ; 0048ff3d
    INC BL                              ; 0048ff3f
    MOV CL,BL                           ; 0048ff41
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048ff43 | DAT_006074b8
    JZ 0x0048ff4f                       ; 0048ff4a
        ;   XREF to: 0048ff4f (CONDITIONAL_JUMP)  ; LAB_0048ff4f
    INC EAX                             ; 0048ff4c
    JMP 0x0048ff3b                      ; 0048ff4d
        ;   XREF to: 0048ff3b (UNCONDITIONAL_JUMP)  ; LAB_0048ff3b
    LEA ECX,[EBP + 0x82]                ; 0048ff4f
        ;   Label: LAB_0048ff4f
    PUSH ECX                            ; 0048ff55
    LEA ECX,[EBP + 0x86]                ; 0048ff56
    PUSH ECX                            ; 0048ff5c
    LEA ECX,[EBP + 0xfffffbf6]          ; 0048ff5d
    PUSH ECX                            ; 0048ff63
    PUSH 0x5beeb5                       ; 0048ff64 | = "( %[^ ,] , %d )%n"
    MOV EDX,0xffffffff                  ; 0048ff69
    PUSH EAX                            ; 0048ff6e
    MOV dword ptr [EBP + -0x62],EAX     ; 0048ff6f
    MOV dword ptr [EBP + 0x82],EDX      ; 0048ff72
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048ff78
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x82]      ; 0048ff7d
    ADD ESP,0x14                        ; 0048ff83
    TEST ECX,ECX                        ; 0048ff86
    JL 0x00490041                       ; 0048ff88
        ;   XREF to: 00490041 (CONDITIONAL_JUMP)  ; LAB_00490041
    LEA EAX,[EBP + 0x8e]                ; 0048ff8e
    PUSH EAX                            ; 0048ff94
    LEA EAX,[EBP + 0x8a]                ; 0048ff95
    PUSH EAX                            ; 0048ff9b
    LEA EAX,[EBP + 0xfffffbf6]          ; 0048ff9c
    MOV EBX,dword ptr [EBP + -0x62]     ; 0048ffa2
    PUSH EAX                            ; 0048ffa5
    MOV ESI,dword ptr [0x00603b28]      ; 0048ffa6 | g_CDemonSetPtr
    ADD EBX,ECX                         ; 0048ffac
    PUSH ESI                            ; 0048ffae | g_CDemonSetInstance
    MOV dword ptr [EBP + -0x62],EBX     ; 0048ffaf
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0 ; 0048ffb2
        ;   XREF to: 0053b3b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    MOV EDI,dword ptr [EBP + 0x8a]      ; 0048ffb7
    ADD ESP,0x10                        ; 0048ffbd
    TEST EDI,EDI                        ; 0048ffc0
    JZ 0x00490059                       ; 0048ffc2
        ;   XREF to: 00490059 (CONDITIONAL_JUMP)  ; LAB_00490059
    MOV EAX,dword ptr [EBP + 0x86]      ; 0048ffc8
    TEST EAX,EAX                        ; 0048ffce
    JL 0x00490078                       ; 0048ffd0
        ;   XREF to: 00490078 (CONDITIONAL_JUMP)  ; LAB_00490078
    CMP EAX,dword ptr [EDI + 0x11ec]    ; 0048ffd6
    JGE 0x00490078                      ; 0048ffdc
        ;   XREF to: 00490078 (CONDITIONAL_JUMP)  ; LAB_00490078
    CMP dword ptr [EBP + -0x66],0x0     ; 0048ffe2
    JZ 0x0048c7d2                       ; 0048ffe6
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBP + 0x8e],0x0      ; 0048ffec
    JNZ 0x0049001f                      ; 0048fff3
        ;   XREF to: 0049001f (CONDITIONAL_JUMP)  ; LAB_0049001f
    LEA EAX,[EBP + 0xfffffbf6]          ; 0048fff5
    PUSH EAX                            ; 0048fffb
    MOV ESI,0x5bef33                    ; 0048fffc | = "..\\core\\event.cpp"
    MOV EDI,0x78f                       ; 00490001
    PUSH 0x5bef45                       ; 00490006 | = "Can't find CDemonLight for light %s i..."
    MOV dword ptr [0x01d71de0],ESI      ; 0049000b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00490011 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00490017
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0049001c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0049001f
        ;   Label: LAB_0049001f
    PUSH EAX                            ; 00490025
    MOV EDX,dword ptr [EBP + 0x86]      ; 00490026
    PUSH EDX                            ; 0049002c
    MOV ECX,dword ptr [EBP + 0x8a]      ; 0049002d
    PUSH ECX                            ; 00490033
    CALL core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00542db0 ; 00490034
        ;   XREF to: 00542db0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00542db0()
    ADD ESP,0xc                         ; 00490039
    JMP 0x0048c7d2                      ; 0049003c
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5beec7                       ; 00490041 | = "Error parsing setLightFilterFrame parms"
        ;   Label: LAB_00490041
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490046
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0049004b
    LEA ESP,[EBP + 0xfa]                ; 0049004e
    POP EBP                             ; 00490054
    POP EDI                             ; 00490055
    POP ESI                             ; 00490056
    POP EBX                             ; 00490057
    RET                                 ; 00490058
    LEA EAX,[EBP + 0xfffffbf6]          ; 00490059
        ;   Label: LAB_00490059
    PUSH EAX                            ; 0049005f
    PUSH 0x5beeef                       ; 00490060 | = "SpotLight %s doesn't exist."
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490065
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0049006a
    LEA ESP,[EBP + 0xfa]                ; 0049006d
    POP EBP                             ; 00490073
    POP EDI                             ; 00490074
    POP ESI                             ; 00490075
    POP EBX                             ; 00490076
    RET                                 ; 00490077
    MOV EAX,dword ptr [EBP + 0x8a]      ; 00490078
        ;   Label: LAB_00490078
    MOV EBX,dword ptr [EAX + 0x11ec]    ; 0049007e
    PUSH EBX                            ; 00490084
    LEA EAX,[EBP + 0xfffffbf6]          ; 00490085
    PUSH EAX                            ; 0049008b
    PUSH 0x5bef0b                       ; 0049008c | = "Invalid filter frame, %s has %d filters"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490091
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0xc                         ; 00490096
    LEA ESP,[EBP + 0xfa]                ; 00490099
    POP EBP                             ; 0049009f
    POP EDI                             ; 004900a0
    POP ESI                             ; 004900a1
    POP EBX                             ; 004900a2
    RET                                 ; 004900a3
    PUSH 0xd                            ; 004900a4
        ;   Label: LAB_004900a4
    PUSH 0x5bef8d                       ; 004900a6 | = "setLeverState"
    PUSH EBX                            ; 004900ab
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004900ac
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004900b1
    TEST EAX,EAX                        ; 004900b4
    JNZ 0x004902c2                      ; 004900b6
        ;   XREF to: 004902c2 (CONDITIONAL_JUMP)  ; LAB_004902c2
    MOV AL,byte ptr [EBX + 0xd]         ; 004900bc
    INC AL                              ; 004900bf
    AND EAX,0xff                        ; 004900c1
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 004900c6 | DAT_006074b8
    JNZ 0x004902c2                      ; 004900cd
        ;   XREF to: 004902c2 (CONDITIONAL_JUMP)  ; LAB_004902c2
    LEA EAX,[EBX + 0xd]                 ; 004900d3
    MOV BL,byte ptr [EAX]               ; 004900d6
        ;   Label: LAB_004900d6
    XOR ECX,ECX                         ; 004900d8
    INC BL                              ; 004900da
    MOV CL,BL                           ; 004900dc
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 004900de | DAT_006074b8
    JZ 0x004900ea                       ; 004900e5
        ;   XREF to: 004900ea (CONDITIONAL_JUMP)  ; LAB_004900ea
    INC EAX                             ; 004900e7
    JMP 0x004900d6                      ; 004900e8
        ;   XREF to: 004900d6 (UNCONDITIONAL_JUMP)  ; LAB_004900d6
    LEA ECX,[EBP + 0x92]                ; 004900ea
        ;   Label: LAB_004900ea
    PUSH ECX                            ; 004900f0
    LEA ECX,[EBP + 0xffffe2f6]          ; 004900f1
    PUSH ECX                            ; 004900f7
    LEA ECX,[EBP + 0xffffe9fe]          ; 004900f8
    PUSH ECX                            ; 004900fe
    PUSH 0x5bef9b                       ; 004900ff | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00490104
    PUSH EAX                            ; 00490109
    MOV dword ptr [EBP + -0x62],EAX     ; 0049010a
    MOV dword ptr [EBP + 0x92],ESI      ; 0049010d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490113
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x92]      ; 00490118
    ADD ESP,0x14                        ; 0049011e
    CMP EDI,0x5                         ; 00490121
    JL 0x0049018e                       ; 00490124
        ;   XREF to: 0049018e (CONDITIONAL_JUMP)  ; LAB_0049018e
    MOV EDX,dword ptr [EBP + -0x62]     ; 00490126
    LEA ESI,[EBP + 0xffffe9fe]          ; 00490129
    ADD EDX,EDI                         ; 0049012f
    LEA EDI,[EBP + 0xffffe9fe]          ; 00490131
    MOV dword ptr [EBP + -0x62],EDX     ; 00490137
    SUB ECX,ECX                         ; 0049013a
    DEC ECX                             ; 0049013c
    XOR EAX,EAX                         ; 0049013d
    SCASB.REPNE ES:EDI                  ; 0049013f
    NOT ECX                             ; 00490141
    DEC ECX                             ; 00490143
    MOV EBX,ECX                         ; 00490144
    TEST ECX,ECX                        ; 00490146
    JLE 0x00490165                      ; 00490148
        ;   XREF to: 00490165 (CONDITIONAL_JUMP)  ; LAB_00490165
    LEA EAX,[EBP + 0xffffe9fe]          ; 0049014a
    ADD ECX,EAX                         ; 00490150
    MOV AL,byte ptr [ECX + -0x1]        ; 00490152
        ;   Label: LAB_00490152
    INC AL                              ; 00490155
    AND EAX,0xff                        ; 00490157
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049015c | DAT_006074b8
    JNZ 0x004901ad                      ; 00490163
        ;   XREF to: 004901ad (CONDITIONAL_JUMP)  ; LAB_004901ad
    LEA EAX,[ESI + EBX*0x1]             ; 00490165
        ;   Label: LAB_00490165
    LEA EDI,[ESI + 0x1]                 ; 00490168
    MOV byte ptr [EAX],0x0              ; 0049016b
    MOV AL,byte ptr [ESI]               ; 0049016e
        ;   Label: LAB_0049016e
    INC AL                              ; 00490170
    AND EAX,0xff                        ; 00490172
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490177 | DAT_006074b8
    JZ 0x004901b5                       ; 0049017e
        ;   XREF to: 004901b5 (CONDITIONAL_JUMP)  ; LAB_004901b5
    PUSH EBX                            ; 00490180
    PUSH EDI                            ; 00490181
    PUSH ESI                            ; 00490182
    DEC EBX                             ; 00490183
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00490184
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490189
    JMP 0x0049016e                      ; 0049018c
        ;   XREF to: 0049016e (UNCONDITIONAL_JUMP)  ; LAB_0049016e
    PUSH 0x5befac                       ; 0049018e | = "Error parsing setLeverState command p..."
        ;   Label: LAB_0049018e
    PUSH 0x1c734b0                      ; 00490193 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490198
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0049019d
    XOR EAX,EAX                         ; 004901a0
    LEA ESP,[EBP + 0xfa]                ; 004901a2
    POP EBP                             ; 004901a8
    POP EDI                             ; 004901a9
    POP ESI                             ; 004901aa
    POP EBX                             ; 004901ab
    RET                                 ; 004901ac
    DEC EBX                             ; 004901ad
        ;   Label: LAB_004901ad
    DEC ECX                             ; 004901ae
    TEST EBX,EBX                        ; 004901af
    JG 0x00490152                       ; 004901b1
        ;   XREF to: 00490152 (CONDITIONAL_JUMP)  ; LAB_00490152
    JMP 0x00490165                      ; 004901b3
        ;   XREF to: 00490165 (UNCONDITIONAL_JUMP)  ; LAB_00490165
    LEA EDI,[EBP + 0xffffe2f6]          ; 004901b5
        ;   Label: LAB_004901b5
    LEA ESI,[EBP + 0xffffe2f6]          ; 004901bb
    SUB ECX,ECX                         ; 004901c1
    DEC ECX                             ; 004901c3
    XOR EAX,EAX                         ; 004901c4
    SCASB.REPNE ES:EDI                  ; 004901c6
    NOT ECX                             ; 004901c8
    DEC ECX                             ; 004901ca
    MOV EBX,ECX                         ; 004901cb
    TEST ECX,ECX                        ; 004901cd
    JLE 0x004901ec                      ; 004901cf
        ;   XREF to: 004901ec (CONDITIONAL_JUMP)  ; LAB_004901ec
    LEA EAX,[EBP + 0xffffe2f6]          ; 004901d1
    ADD ECX,EAX                         ; 004901d7
    MOV AL,byte ptr [ECX + -0x1]        ; 004901d9
        ;   Label: LAB_004901d9
    INC AL                              ; 004901dc
    AND EAX,0xff                        ; 004901de
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004901e3 | DAT_006074b8
    JNZ 0x00490215                      ; 004901ea
        ;   XREF to: 00490215 (CONDITIONAL_JUMP)  ; LAB_00490215
    LEA EAX,[ESI + EBX*0x1]             ; 004901ec
        ;   Label: LAB_004901ec
    LEA EDI,[ESI + 0x1]                 ; 004901ef
    MOV byte ptr [EAX],0x0              ; 004901f2
    MOV AL,byte ptr [ESI]               ; 004901f5
        ;   Label: LAB_004901f5
    INC AL                              ; 004901f7
    AND EAX,0xff                        ; 004901f9
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004901fe | DAT_006074b8
    JZ 0x0049021d                       ; 00490205
        ;   XREF to: 0049021d (CONDITIONAL_JUMP)  ; LAB_0049021d
    PUSH EBX                            ; 00490207
    PUSH EDI                            ; 00490208
    PUSH ESI                            ; 00490209
    DEC EBX                             ; 0049020a
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0049020b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490210
    JMP 0x004901f5                      ; 00490213
        ;   XREF to: 004901f5 (UNCONDITIONAL_JUMP)  ; LAB_004901f5
    DEC EBX                             ; 00490215
        ;   Label: LAB_00490215
    DEC ECX                             ; 00490216
    TEST EBX,EBX                        ; 00490217
    JG 0x004901d9                       ; 00490219
        ;   XREF to: 004901d9 (CONDITIONAL_JUMP)  ; LAB_004901d9
    JMP 0x004901ec                      ; 0049021b
        ;   XREF to: 004901ec (UNCONDITIONAL_JUMP)  ; LAB_004901ec
    PUSH 0x1d70bfc                      ; 0049021d
        ;   Label: LAB_0049021d
    MOV ECX,dword ptr [0x01d70c34]      ; 00490222 | g_CLeverClassInfo.name_hash
    PUSH ECX                            ; 00490228
    LEA EAX,[EBP + 0xffffe9fe]          ; 00490229
    PUSH EAX                            ; 0049022f
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00490230
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 00490235
    MOV EBX,EAX                         ; 00490238
    TEST EAX,EAX                        ; 0049023a
    JZ 0x0048c30e                       ; 0049023c
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 00490242 | DAT_005df604
    JNZ 0x00490275                      ; 00490248
        ;   XREF to: 00490275 (CONDITIONAL_JUMP)  ; LAB_00490275
    LEA EAX,[EBP + 0xffffe2f6]          ; 0049024a
        ;   Label: LAB_0049024a
    PUSH EAX                            ; 00490250
    MOV EAX,dword ptr [EBP + 0x10e]     ; 00490251
    PUSH EAX                            ; 00490257
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 00490258
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0049025d
    TEST EAX,EAX                        ; 00490260
    JZ 0x0048c7d2                       ; 00490262
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 00490268
    LEA ESP,[EBP + 0xfa]                ; 0049026a
    POP EBP                             ; 00490270
    POP EDI                             ; 00490271
    POP ESI                             ; 00490272
    POP EBX                             ; 00490273
    RET                                 ; 00490274
    CMP dword ptr [EBP + -0x66],0x0     ; 00490275
        ;   Label: LAB_00490275
    JZ 0x0049024a                       ; 00490279
        ;   XREF to: 0049024a (CONDITIONAL_JUMP)  ; LAB_0049024a
    PUSH 0x1                            ; 0049027b
    LEA EAX,[EBP + 0xffffe2f6]          ; 0049027d
    PUSH EAX                            ; 00490283
    MOV EAX,[0x005fba60]                ; 00490284 | DAT_005fba60
    PUSH EAX                            ; 00490289
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0049028a
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0049028f
    TEST EAX,EAX                        ; 00490292
    JZ 0x004902ba                       ; 00490294
        ;   XREF to: 004902ba (CONDITIONAL_JUMP)  ; LAB_004902ba
    XOR ESI,ESI                         ; 00490296
    MOV EDI,0x3ff00000                  ; 00490298
    MOV dword ptr [EBP + -0x72],ESI     ; 0049029d
    MOV dword ptr [EBP + -0x6e],EDI     ; 004902a0
    SUB ESP,0x4                         ; 004902a3
        ;   Label: LAB_004902a3
    FLD double ptr [EBP + -0x72]        ; 004902a6
    FSTP float ptr [ESP]                ; 004902a9
    PUSH EBX                            ; 004902ac
    CALL core_lever.cpp_FUN_004e04b0    ; 004902ad
        ;   XREF to: 004e04b0 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_FUN_004e04b0()
    ADD ESP,0xc                         ; 004902b2
    JMP 0x0048c7d2                      ; 004902b5
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EBP + -0x72],EAX     ; 004902ba
        ;   Label: LAB_004902ba
    MOV dword ptr [EBP + -0x6e],EAX     ; 004902bd
    JMP 0x004902a3                      ; 004902c0
        ;   XREF to: 004902a3 (UNCONDITIONAL_JUMP)  ; LAB_004902a3
    PUSH 0xd                            ; 004902c2
        ;   Label: LAB_004902c2
    PUSH 0x5befd6                       ; 004902c4 | = "setModelState"
    PUSH EBX                            ; 004902c9
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004902ca
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004902cf
    TEST EAX,EAX                        ; 004902d2
    JNZ 0x004904d9                      ; 004902d4
        ;   XREF to: 004904d9 (CONDITIONAL_JUMP)  ; LAB_004904d9
    MOV AL,byte ptr [EBX + 0xd]         ; 004902da
    INC AL                              ; 004902dd
    AND EAX,0xff                        ; 004902df
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 004902e4 | DAT_006074b8
    JNZ 0x004904d9                      ; 004902eb
        ;   XREF to: 004904d9 (CONDITIONAL_JUMP)  ; LAB_004904d9
    LEA EAX,[EBX + 0xd]                 ; 004902f1
    MOV BL,byte ptr [EAX]               ; 004902f4
        ;   Label: LAB_004902f4
    XOR ECX,ECX                         ; 004902f6
    INC BL                              ; 004902f8
    MOV CL,BL                           ; 004902fa
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 004902fc | DAT_006074b8
    JZ 0x00490308                       ; 00490303
        ;   XREF to: 00490308 (CONDITIONAL_JUMP)  ; LAB_00490308
    INC EAX                             ; 00490305
    JMP 0x004902f4                      ; 00490306
        ;   XREF to: 004902f4 (UNCONDITIONAL_JUMP)  ; LAB_004902f4
    LEA ECX,[EBP + 0x96]                ; 00490308
        ;   Label: LAB_00490308
    PUSH ECX                            ; 0049030e
    LEA ECX,[EBP + 0xfffff4ee]          ; 0049030f
    PUSH ECX                            ; 00490315
    LEA ECX,[EBP + 0xffffede6]          ; 00490316
    PUSH ECX                            ; 0049031c
    PUSH 0x5befe4                       ; 0049031d | = "(%[^,], %[^)])%n"
    MOV EDX,0xffffffff                  ; 00490322
    PUSH EAX                            ; 00490327
    MOV dword ptr [EBP + -0x62],EAX     ; 00490328
    MOV dword ptr [EBP + 0x96],EDX      ; 0049032b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490331
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x96]      ; 00490336
    ADD ESP,0x14                        ; 0049033c
    CMP ECX,0x5                         ; 0049033f
    JL 0x004903ac                       ; 00490342
        ;   XREF to: 004903ac (CONDITIONAL_JUMP)  ; LAB_004903ac
    MOV EBX,dword ptr [EBP + -0x62]     ; 00490344
    ADD EBX,ECX                         ; 00490347
    LEA EDI,[EBP + 0xffffede6]          ; 00490349
    MOV dword ptr [EBP + -0x62],EBX     ; 0049034f
    SUB ECX,ECX                         ; 00490352
    DEC ECX                             ; 00490354
    XOR EAX,EAX                         ; 00490355
    SCASB.REPNE ES:EDI                  ; 00490357
    NOT ECX                             ; 00490359
    DEC ECX                             ; 0049035b
    LEA EBX,[EBP + 0xffffede6]          ; 0049035c
    MOV EDI,ECX                         ; 00490362
    TEST ECX,ECX                        ; 00490364
    JLE 0x00490383                      ; 00490366
        ;   XREF to: 00490383 (CONDITIONAL_JUMP)  ; LAB_00490383
    LEA EAX,[EBP + 0xffffede6]          ; 00490368
    ADD ECX,EAX                         ; 0049036e
    MOV AL,byte ptr [ECX + -0x1]        ; 00490370
        ;   Label: LAB_00490370
    INC AL                              ; 00490373
    AND EAX,0xff                        ; 00490375
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049037a | DAT_006074b8
    JNZ 0x004903cb                      ; 00490381
        ;   XREF to: 004903cb (CONDITIONAL_JUMP)  ; LAB_004903cb
    LEA EAX,[EBX + EDI*0x1]             ; 00490383
        ;   Label: LAB_00490383
    LEA ESI,[EBX + 0x1]                 ; 00490386
    MOV byte ptr [EAX],0x0              ; 00490389
    MOV AL,byte ptr [EBX]               ; 0049038c
        ;   Label: LAB_0049038c
    INC AL                              ; 0049038e
    AND EAX,0xff                        ; 00490390
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490395 | DAT_006074b8
    JZ 0x004903d3                       ; 0049039c
        ;   XREF to: 004903d3 (CONDITIONAL_JUMP)  ; LAB_004903d3
    PUSH EDI                            ; 0049039e
    PUSH ESI                            ; 0049039f
    PUSH EBX                            ; 004903a0
    DEC EDI                             ; 004903a1
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004903a2
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004903a7
    JMP 0x0049038c                      ; 004903aa
        ;   XREF to: 0049038c (UNCONDITIONAL_JUMP)  ; LAB_0049038c
    PUSH 0x5beff5                       ; 004903ac | = "Error parsing setModelState command p..."
        ;   Label: LAB_004903ac
    PUSH 0x1c734b0                      ; 004903b1 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004903b6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004903bb
    XOR EAX,EAX                         ; 004903be
    LEA ESP,[EBP + 0xfa]                ; 004903c0
    POP EBP                             ; 004903c6
    POP EDI                             ; 004903c7
    POP ESI                             ; 004903c8
    POP EBX                             ; 004903c9
    RET                                 ; 004903ca
    DEC EDI                             ; 004903cb
        ;   Label: LAB_004903cb
    DEC ECX                             ; 004903cc
    TEST EDI,EDI                        ; 004903cd
    JG 0x00490370                       ; 004903cf
        ;   XREF to: 00490370 (CONDITIONAL_JUMP)  ; LAB_00490370
    JMP 0x00490383                      ; 004903d1
        ;   XREF to: 00490383 (UNCONDITIONAL_JUMP)  ; LAB_00490383
    LEA EDI,[EBP + 0xfffff4ee]          ; 004903d3
        ;   Label: LAB_004903d3
    LEA EBX,[EBP + 0xfffff4ee]          ; 004903d9
    SUB ECX,ECX                         ; 004903df
    DEC ECX                             ; 004903e1
    XOR EAX,EAX                         ; 004903e2
    SCASB.REPNE ES:EDI                  ; 004903e4
    NOT ECX                             ; 004903e6
    DEC ECX                             ; 004903e8
    MOV EDI,ECX                         ; 004903e9
    TEST ECX,ECX                        ; 004903eb
    JLE 0x0049040a                      ; 004903ed
        ;   XREF to: 0049040a (CONDITIONAL_JUMP)  ; LAB_0049040a
    LEA EAX,[EBP + 0xfffff4ee]          ; 004903ef
    ADD ECX,EAX                         ; 004903f5
    MOV AL,byte ptr [ECX + -0x1]        ; 004903f7
        ;   Label: LAB_004903f7
    INC AL                              ; 004903fa
    AND EAX,0xff                        ; 004903fc
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490401 | DAT_006074b8
    JNZ 0x00490433                      ; 00490408
        ;   XREF to: 00490433 (CONDITIONAL_JUMP)  ; LAB_00490433
    LEA EAX,[EBX + EDI*0x1]             ; 0049040a
        ;   Label: LAB_0049040a
    LEA ESI,[EBX + 0x1]                 ; 0049040d
    MOV byte ptr [EAX],0x0              ; 00490410
    MOV AL,byte ptr [EBX]               ; 00490413
        ;   Label: LAB_00490413
    INC AL                              ; 00490415
    AND EAX,0xff                        ; 00490417
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049041c | DAT_006074b8
    JZ 0x0049043b                       ; 00490423
        ;   XREF to: 0049043b (CONDITIONAL_JUMP)  ; LAB_0049043b
    PUSH EDI                            ; 00490425
    PUSH ESI                            ; 00490426
    PUSH EBX                            ; 00490427
    DEC EDI                             ; 00490428
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00490429
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049042e
    JMP 0x00490413                      ; 00490431
        ;   XREF to: 00490413 (UNCONDITIONAL_JUMP)  ; LAB_00490413
    DEC EDI                             ; 00490433
        ;   Label: LAB_00490433
    DEC ECX                             ; 00490434
    TEST EDI,EDI                        ; 00490435
    JG 0x004903f7                       ; 00490437
        ;   XREF to: 004903f7 (CONDITIONAL_JUMP)  ; LAB_004903f7
    JMP 0x0049040a                      ; 00490439
        ;   XREF to: 0049040a (UNCONDITIONAL_JUMP)  ; LAB_0049040a
    PUSH 0x7e2cb4                       ; 0049043b | g_CCharacterClassInfo
        ;   Label: LAB_0049043b
    MOV ESI,dword ptr [0x007e2cec]      ; 00490440 | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 00490446
    LEA EAX,[EBP + 0xffffede6]          ; 00490447
    PUSH EAX                            ; 0049044d
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0049044e
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV EBX,EAX                         ; 00490453
    ADD ESP,0xc                         ; 00490455
    TEST EAX,EAX                        ; 00490458
    JZ 0x0048c30e                       ; 0049045a
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 00490460 | DAT_005df604
    JZ 0x0048c7d2                       ; 00490466
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x0                            ; 0049046c
    LEA EAX,[EBP + 0xfffff4ee]          ; 0049046e
    PUSH EAX                            ; 00490474
    LEA ESI,[EBX + 0x158]               ; 00490475
    PUSH ESI                            ; 0049047b
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0049047c
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00490481
    PUSH EAX                            ; 00490484
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 00490485
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0049048a
    TEST EAX,EAX                        ; 0049048d
    JL 0x004904ac                       ; 0049048f
        ;   XREF to: 004904ac (CONDITIONAL_JUMP)  ; LAB_004904ac
    CMP dword ptr [EBP + -0x66],0x0     ; 00490491
    JZ 0x0048c7d2                       ; 00490495
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0049049b
    PUSH EAX                            ; 0049049d
    PUSH ESI                            ; 0049049e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0049049f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004904a4
    JMP 0x0048c7d2                      ; 004904a7
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffff4ee]          ; 004904ac
        ;   Label: LAB_004904ac
    PUSH EAX                            ; 004904b2
    LEA EAX,[EBX + 0x24a8]              ; 004904b3
    PUSH EAX                            ; 004904b9
    PUSH 0x5bf01f                       ; 004904ba | = "Model %s does not have state %s"
    PUSH 0x1c734b0                      ; 004904bf | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004904c4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004904c9
    XOR EAX,EAX                         ; 004904cc
    LEA ESP,[EBP + 0xfa]                ; 004904ce
    POP EBP                             ; 004904d4
    POP EDI                             ; 004904d5
    POP ESI                             ; 004904d6
    POP EBX                             ; 004904d7
    RET                                 ; 004904d8
    PUSH 0xb                            ; 004904d9
        ;   Label: LAB_004904d9
    PUSH 0x5bf03f                       ; 004904db | = "setSunlight"
    PUSH EBX                            ; 004904e0
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004904e1
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004904e6
    TEST EAX,EAX                        ; 004904e9
    JNZ 0x00490616                      ; 004904eb
        ;   XREF to: 00490616 (CONDITIONAL_JUMP)  ; LAB_00490616
    MOV AL,byte ptr [EBX + 0xb]         ; 004904f1
    INC AL                              ; 004904f4
    AND EAX,0xff                        ; 004904f6
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 004904fb | DAT_006074b8
    JNZ 0x00490616                      ; 00490502
        ;   XREF to: 00490616 (CONDITIONAL_JUMP)  ; LAB_00490616
    LEA EAX,[EBX + 0xb]                 ; 00490508
    MOV BL,byte ptr [EAX]               ; 0049050b
        ;   Label: LAB_0049050b
    XOR ECX,ECX                         ; 0049050d
    INC BL                              ; 0049050f
    MOV CL,BL                           ; 00490511
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490513 | DAT_006074b8
    JZ 0x0049051f                       ; 0049051a
        ;   XREF to: 0049051f (CONDITIONAL_JUMP)  ; LAB_0049051f
    INC EAX                             ; 0049051c
    JMP 0x0049050b                      ; 0049051d
        ;   XREF to: 0049050b (UNCONDITIONAL_JUMP)  ; LAB_0049050b
    MOV dword ptr [EBP + 0x9e],0xffffffff ; 0049051f
        ;   Label: LAB_0049051f
    LEA ECX,[EBP + 0x9e]                ; 00490529
    PUSH ECX                            ; 0049052f
    LEA ECX,[EBP + 0x9a]                ; 00490530
    PUSH ECX                            ; 00490536
    LEA ECX,[EBP + -0x76]               ; 00490537
    PUSH ECX                            ; 0049053a
    LEA ECX,[EBP + -0x7a]               ; 0049053b
    PUSH ECX                            ; 0049053e
    LEA ECX,[EBP + -0x7e]               ; 0049053f
    PUSH ECX                            ; 00490542
    PUSH 0x5bf04b                       ; 00490543 | = "(%f , %f , %f , %f )%n"
    PUSH EAX                            ; 00490548
    MOV dword ptr [EBP + -0x62],EAX     ; 00490549
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049054c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x9e]      ; 00490551
    ADD ESP,0x1c                        ; 00490557
    CMP EBX,0x5                         ; 0049055a
    JL 0x004905ea                       ; 0049055d
        ;   XREF to: 004905ea (CONDITIONAL_JUMP)  ; LAB_004905ea
    FLD float ptr [EBP + -0x7a]         ; 00490563
    FMUL ST0                            ; 00490566
    FLD float ptr [EBP + -0x7e]         ; 00490568
    FMUL ST0                            ; 0049056b
    FADDP                               ; 0049056d
    FLD float ptr [EBP + -0x76]         ; 0049056f
    FMUL ST0                            ; 00490572
    FADDP                               ; 00490574
    FSQRT                               ; 00490576
    MOV ESI,dword ptr [EBP + -0x62]     ; 00490578
    ADD ESI,EBX                         ; 0049057b
    FLDZ                                ; 0049057d
    MOV dword ptr [EBP + -0x62],ESI     ; 0049057f
    FXCH                                ; 00490582
    FSTP float ptr [EBP + 0xa2]         ; 00490584
    FCOMP float ptr [EBP + 0xa2]        ; 0049058a
    FNSTSW AX                           ; 00490590
    SAHF                                ; 00490592
    JNC 0x00490609                      ; 00490593
        ;   XREF to: 00490609 (CONDITIONAL_JUMP)  ; LAB_00490609
    FLD1                                ; 00490595
    FLD float ptr [EBP + -0x7e]         ; 00490597
    FXCH                                ; 0049059a
    FDIV float ptr [EBP + 0xa2]         ; 0049059c
    FXCH                                ; 004905a2
    FMUL ST1                            ; 004905a4
    FLD float ptr [EBP + -0x7a]         ; 004905a6
    FMUL ST2                            ; 004905a9
    FLD float ptr [EBP + -0x76]         ; 004905ab
    FMULP ST3                           ; 004905ae
    FXCH                                ; 004905b0
    FSTP float ptr [EBP + -0x7e]        ; 004905b2
    FSTP float ptr [EBP + -0x7a]        ; 004905b5
    FSTP float ptr [EBP + -0x76]        ; 004905b8
    CMP dword ptr [EBP + -0x66],0x0     ; 004905bb
        ;   Label: LAB_004905bb
    JZ 0x0048c7d2                       ; 004905bf
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EBX,dword ptr [EBP + -0x76]     ; 004905c5
    PUSH dword ptr [EBP + 0x9a]         ; 004905c8
    PUSH EBX                            ; 004905ce
    MOV ESI,dword ptr [EBP + -0x7a]     ; 004905cf
    PUSH ESI                            ; 004905d2
    MOV EDI,dword ptr [EBP + -0x7e]     ; 004905d3
    PUSH EDI                            ; 004905d6
    MOV EAX,[0x00603b28]                ; 004905d7 | g_CDemonSetPtr
    PUSH EAX                            ; 004905dc | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0053b2c0      ; 004905dd
        ;   XREF to: 0053b2c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0053b2c0()
    ADD ESP,0x14                        ; 004905e2
    JMP 0x0048c7d2                      ; 004905e5
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5bf062                       ; 004905ea | = "Error parsing setSunlight command parms"
        ;   Label: LAB_004905ea
    PUSH 0x1c734b0                      ; 004905ef | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004905f4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004905f9
    XOR EAX,EAX                         ; 004905fc
    LEA ESP,[EBP + 0xfa]                ; 004905fe
    POP EBP                             ; 00490604
    POP EDI                             ; 00490605
    POP ESI                             ; 00490606
    POP EBX                             ; 00490607
    RET                                 ; 00490608
    XOR EDI,EDI                         ; 00490609
        ;   Label: LAB_00490609
    MOV dword ptr [EBP + -0x7a],EDI     ; 0049060b
    MOV dword ptr [EBP + -0x7e],EDI     ; 0049060e
    MOV dword ptr [EBP + -0x76],EDI     ; 00490611
    JMP 0x004905bb                      ; 00490614
        ;   XREF to: 004905bb (UNCONDITIONAL_JUMP)  ; LAB_004905bb
    PUSH 0x8                            ; 00490616
        ;   Label: LAB_00490616
    PUSH 0x5bf08a                       ; 00490618 | = "setTimer"
    PUSH EBX                            ; 0049061d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0049061e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00490623
    TEST EAX,EAX                        ; 00490626
    JNZ 0x004907bd                      ; 00490628
        ;   XREF to: 004907bd (CONDITIONAL_JUMP)  ; LAB_004907bd
    MOV AL,byte ptr [EBX + 0x8]         ; 0049062e
    INC AL                              ; 00490631
    AND EAX,0xff                        ; 00490633
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00490638 | DAT_006074b8
    JNZ 0x004907bd                      ; 0049063f
        ;   XREF to: 004907bd (CONDITIONAL_JUMP)  ; LAB_004907bd
    LEA EAX,[EBX + 0x8]                 ; 00490645
    MOV BL,byte ptr [EAX]               ; 00490648
        ;   Label: LAB_00490648
    XOR ECX,ECX                         ; 0049064a
    INC BL                              ; 0049064c
    MOV CL,BL                           ; 0049064e
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490650 | DAT_006074b8
    JZ 0x0049065c                       ; 00490657
        ;   XREF to: 0049065c (CONDITIONAL_JUMP)  ; LAB_0049065c
    INC EAX                             ; 00490659
    JMP 0x00490648                      ; 0049065a
        ;   XREF to: 00490648 (UNCONDITIONAL_JUMP)  ; LAB_00490648
    LEA ECX,[EBP + 0xb2]                ; 0049065c
        ;   Label: LAB_0049065c
    PUSH ECX                            ; 00490662
    LEA ECX,[EBP + 0xae]                ; 00490663
    PUSH ECX                            ; 00490669
    LEA ECX,[EBP + 0xfffff99e]          ; 0049066a
    PUSH ECX                            ; 00490670
    PUSH 0x5bf093                       ; 00490671 | = "(%[^,], %f)%n"
    MOV EDX,0xffffffff                  ; 00490676
    PUSH EAX                            ; 0049067b
    MOV dword ptr [EBP + -0x62],EAX     ; 0049067c
    MOV dword ptr [EBP + 0xb2],EDX      ; 0049067f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490685
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0xb2]      ; 0049068a
    ADD ESP,0x14                        ; 00490690
    CMP ECX,0x3                         ; 00490693
    JL 0x00490700                       ; 00490696
        ;   XREF to: 00490700 (CONDITIONAL_JUMP)  ; LAB_00490700
    MOV EBX,dword ptr [EBP + -0x62]     ; 00490698
    ADD EBX,ECX                         ; 0049069b
    LEA EDI,[EBP + 0xfffff99e]          ; 0049069d
    MOV dword ptr [EBP + -0x62],EBX     ; 004906a3
    SUB ECX,ECX                         ; 004906a6
    DEC ECX                             ; 004906a8
    XOR EAX,EAX                         ; 004906a9
    SCASB.REPNE ES:EDI                  ; 004906ab
    NOT ECX                             ; 004906ad
    DEC ECX                             ; 004906af
    LEA EBX,[EBP + 0xfffff99e]          ; 004906b0
    MOV EDI,ECX                         ; 004906b6
    TEST ECX,ECX                        ; 004906b8
    JLE 0x004906d7                      ; 004906ba
        ;   XREF to: 004906d7 (CONDITIONAL_JUMP)  ; LAB_004906d7
    LEA EAX,[EBP + 0xfffff99e]          ; 004906bc
    ADD ECX,EAX                         ; 004906c2
    MOV AL,byte ptr [ECX + -0x1]        ; 004906c4
        ;   Label: LAB_004906c4
    INC AL                              ; 004906c7
    AND EAX,0xff                        ; 004906c9
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004906ce | DAT_006074b8
    JNZ 0x0049071f                      ; 004906d5
        ;   XREF to: 0049071f (CONDITIONAL_JUMP)  ; LAB_0049071f
    LEA EAX,[EBX + EDI*0x1]             ; 004906d7
        ;   Label: LAB_004906d7
    LEA ESI,[EBX + 0x1]                 ; 004906da
    MOV byte ptr [EAX],0x0              ; 004906dd
    MOV AL,byte ptr [EBX]               ; 004906e0
        ;   Label: LAB_004906e0
    INC AL                              ; 004906e2
    AND EAX,0xff                        ; 004906e4
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004906e9 | DAT_006074b8
    JZ 0x00490727                       ; 004906f0
        ;   XREF to: 00490727 (CONDITIONAL_JUMP)  ; LAB_00490727
    PUSH EDI                            ; 004906f2
    PUSH ESI                            ; 004906f3
    PUSH EBX                            ; 004906f4
    DEC EDI                             ; 004906f5
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004906f6
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004906fb
    JMP 0x004906e0                      ; 004906fe
        ;   XREF to: 004906e0 (UNCONDITIONAL_JUMP)  ; LAB_004906e0
    PUSH 0x5bf0a1                       ; 00490700 | = "Error parsing setTimer command parms"
        ;   Label: LAB_00490700
    PUSH 0x1c734b0                      ; 00490705 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0049070a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0049070f
    XOR EAX,EAX                         ; 00490712
    LEA ESP,[EBP + 0xfa]                ; 00490714
    POP EBP                             ; 0049071a
    POP EDI                             ; 0049071b
    POP ESI                             ; 0049071c
    POP EBX                             ; 0049071d
    RET                                 ; 0049071e
    DEC EDI                             ; 0049071f
        ;   Label: LAB_0049071f
    DEC ECX                             ; 00490720
    TEST EDI,EDI                        ; 00490721
    JG 0x004906c4                       ; 00490723
        ;   XREF to: 004906c4 (CONDITIONAL_JUMP)  ; LAB_004906c4
    JMP 0x004906d7                      ; 00490725
        ;   XREF to: 004906d7 (UNCONDITIONAL_JUMP)  ; LAB_004906d7
    LEA EDI,[EBP + 0xfffff99e]          ; 00490727
        ;   Label: LAB_00490727
    SUB ECX,ECX                         ; 0049072d
    DEC ECX                             ; 0049072f
    XOR EAX,EAX                         ; 00490730
    SCASB.REPNE ES:EDI                  ; 00490732
    NOT ECX                             ; 00490734
    DEC ECX                             ; 00490736
    CMP ECX,0x20                        ; 00490737
    JNC 0x00490776                      ; 0049073a
        ;   XREF to: 00490776 (CONDITIONAL_JUMP)  ; LAB_00490776
    FLD float ptr [EBP + 0xae]          ; 0049073c
    FLDZ                                ; 00490742
    FCOMPP                              ; 00490744
    FNSTSW AX                           ; 00490746
    SAHF                                ; 00490748
    JA 0x0049079e                       ; 00490749
        ;   XREF to: 0049079e (CONDITIONAL_JUMP)  ; LAB_0049079e
    CMP dword ptr [EBP + -0x66],0x0     ; 0049074b
    JZ 0x0048c7d2                       ; 0049074f
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffff99e]          ; 00490755
    PUSH dword ptr [EBP + 0xae]         ; 0049075b
    PUSH EAX                            ; 00490761
    MOV EDI,dword ptr [EBP + 0x10e]     ; 00490762
    PUSH EDI                            ; 00490768
    CALL core_event.cpp_CEventList_setTimerEvent_FUN_00494a70 ; 00490769
        ;   XREF to: 00494a70 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setTimerEvent_FUN_00494a70(CEventList * this_ptr, char * name, float duration)
    ADD ESP,0xc                         ; 0049076e
    JMP 0x0048c7d2                      ; 00490771
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1f                           ; 00490776
        ;   Label: LAB_00490776
    LEA EAX,[EBP + 0xfffff99e]          ; 00490778
    PUSH EAX                            ; 0049077e
    PUSH 0x5bf0c6                       ; 0049077f | = "Timer name \"%s\" is too long, (max %..."
    PUSH 0x1c734b0                      ; 00490784 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490789
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049078e
    XOR EAX,EAX                         ; 00490791
    LEA ESP,[EBP + 0xfa]                ; 00490793
    POP EBP                             ; 00490799
    POP EDI                             ; 0049079a
    POP ESI                             ; 0049079b
    POP EBX                             ; 0049079c
    RET                                 ; 0049079d
    PUSH 0x5bf0f2                       ; 0049079e | = "Invalid timer duration"
        ;   Label: LAB_0049079e
    PUSH 0x1c734b0                      ; 004907a3 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004907a8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004907ad
    XOR EAX,EAX                         ; 004907b0
    LEA ESP,[EBP + 0xfa]                ; 004907b2
    POP EBP                             ; 004907b8
    POP EDI                             ; 004907b9
    POP ESI                             ; 004907ba
    POP EBX                             ; 004907bb
    RET                                 ; 004907bc
    PUSH 0xb                            ; 004907bd
        ;   Label: LAB_004907bd
    PUSH 0x5bf109                       ; 004907bf | = "setEndTimer"
    PUSH EBX                            ; 004907c4
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004907c5
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004907ca
    TEST EAX,EAX                        ; 004907cd
    JNZ 0x00490876                      ; 004907cf
        ;   XREF to: 00490876 (CONDITIONAL_JUMP)  ; LAB_00490876
    MOV AL,byte ptr [EBX + 0xb]         ; 004907d5
    INC AL                              ; 004907d8
    AND EAX,0xff                        ; 004907da
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 004907df | DAT_006074b8
    JNZ 0x00490876                      ; 004907e6
        ;   XREF to: 00490876 (CONDITIONAL_JUMP)  ; LAB_00490876
    LEA EAX,[EBX + 0xb]                 ; 004907ec
    MOV BL,byte ptr [EAX]               ; 004907ef
        ;   Label: LAB_004907ef
    XOR ECX,ECX                         ; 004907f1
    INC BL                              ; 004907f3
    MOV CL,BL                           ; 004907f5
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 004907f7 | DAT_006074b8
    JZ 0x00490803                       ; 004907fe
        ;   XREF to: 00490803 (CONDITIONAL_JUMP)  ; LAB_00490803
    INC EAX                             ; 00490800
    JMP 0x004907ef                      ; 00490801
        ;   XREF to: 004907ef (UNCONDITIONAL_JUMP)  ; LAB_004907ef
    LEA ECX,[EBP + 0xba]                ; 00490803
        ;   Label: LAB_00490803
    PUSH ECX                            ; 00490809
    LEA ECX,[EBP + 0xb6]                ; 0049080a
    PUSH ECX                            ; 00490810
    PUSH 0x5bf115                       ; 00490811 | = "(%f)%n"
    MOV EDX,0xffffffff                  ; 00490816
    PUSH EAX                            ; 0049081b
    MOV dword ptr [EBP + -0x62],EAX     ; 0049081c
    MOV dword ptr [EBP + 0xba],EDX      ; 0049081f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490825
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0xba]      ; 0049082a
    ADD ESP,0x10                        ; 00490830
    CMP ECX,0x2                         ; 00490833
    JL 0x00490857                       ; 00490836
        ;   XREF to: 00490857 (CONDITIONAL_JUMP)  ; LAB_00490857
    MOV EBX,dword ptr [EBP + -0x62]     ; 00490838
    ADD EBX,ECX                         ; 0049083b
    MOV ECX,dword ptr [0x005fe9dc]      ; 0049083d | g_CGamePtr
    MOV EAX,dword ptr [EBP + 0xb6]      ; 00490843
    MOV dword ptr [EBP + -0x62],EBX     ; 00490849
    MOV dword ptr [ECX + 0x294],EAX     ; 0049084c | g_CGameInstance.end_timer
    JMP 0x0048c7d2                      ; 00490852
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5bf11c                       ; 00490857 | = "Error parsing setEndTimer command parms"
        ;   Label: LAB_00490857
    PUSH 0x1c734b0                      ; 0049085c | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490861
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00490866
    XOR EAX,EAX                         ; 00490869
    LEA ESP,[EBP + 0xfa]                ; 0049086b
    POP EBP                             ; 00490871
    POP EDI                             ; 00490872
    POP ESI                             ; 00490873
    POP EBX                             ; 00490874
    RET                                 ; 00490875
    PUSH 0xa                            ; 00490876
        ;   Label: LAB_00490876
    PUSH 0x5bf144                       ; 00490878 | = "setWeather"
    PUSH EBX                            ; 0049087d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0049087e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00490883
    TEST EAX,EAX                        ; 00490886
    JNZ 0x00490a1b                      ; 00490888
        ;   XREF to: 00490a1b (CONDITIONAL_JUMP)  ; LAB_00490a1b
    MOV AL,byte ptr [EBX + 0xa]         ; 0049088e
    INC AL                              ; 00490891
    AND EAX,0xff                        ; 00490893
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00490898 | DAT_006074b8
    JNZ 0x00490a1b                      ; 0049089f
        ;   XREF to: 00490a1b (CONDITIONAL_JUMP)  ; LAB_00490a1b
    LEA EAX,[EBX + 0xa]                 ; 004908a5
    MOV BL,byte ptr [EAX]               ; 004908a8
        ;   Label: LAB_004908a8
    XOR ECX,ECX                         ; 004908aa
    INC BL                              ; 004908ac
    MOV CL,BL                           ; 004908ae
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 004908b0 | DAT_006074b8
    JZ 0x004908bc                       ; 004908b7
        ;   XREF to: 004908bc (CONDITIONAL_JUMP)  ; LAB_004908bc
    INC EAX                             ; 004908b9
    JMP 0x004908a8                      ; 004908ba
        ;   XREF to: 004908a8 (UNCONDITIONAL_JUMP)  ; LAB_004908a8
    LEA ECX,[EBP + 0xbe]                ; 004908bc
        ;   Label: LAB_004908bc
    PUSH ECX                            ; 004908c2
    LEA ECX,[EBP + 0xffffe54e]          ; 004908c3
    PUSH ECX                            ; 004908c9
    PUSH 0x5bf14f                       ; 004908ca | = "(%[^)])%n"
    MOV ESI,0xffffffff                  ; 004908cf
    PUSH EAX                            ; 004908d4
    MOV dword ptr [EBP + -0x62],EAX     ; 004908d5
    MOV dword ptr [EBP + 0xbe],ESI      ; 004908d8
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004908de
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0xbe]      ; 004908e3
    ADD ESP,0x10                        ; 004908e9
    CMP EDI,0x3                         ; 004908ec
    JL 0x00490959                       ; 004908ef
        ;   XREF to: 00490959 (CONDITIONAL_JUMP)  ; LAB_00490959
    MOV EDX,dword ptr [EBP + -0x62]     ; 004908f1
    LEA ESI,[EBP + 0xffffe54e]          ; 004908f4
    ADD EDX,EDI                         ; 004908fa
    LEA EDI,[EBP + 0xffffe54e]          ; 004908fc
    MOV dword ptr [EBP + -0x62],EDX     ; 00490902
    SUB ECX,ECX                         ; 00490905
    DEC ECX                             ; 00490907
    XOR EAX,EAX                         ; 00490908
    SCASB.REPNE ES:EDI                  ; 0049090a
    NOT ECX                             ; 0049090c
    DEC ECX                             ; 0049090e
    MOV EBX,ECX                         ; 0049090f
    TEST ECX,ECX                        ; 00490911
    JLE 0x00490930                      ; 00490913
        ;   XREF to: 00490930 (CONDITIONAL_JUMP)  ; LAB_00490930
    LEA EAX,[EBP + 0xffffe54e]          ; 00490915
    ADD ECX,EAX                         ; 0049091b
    MOV AL,byte ptr [ECX + -0x1]        ; 0049091d
        ;   Label: LAB_0049091d
    INC AL                              ; 00490920
    AND EAX,0xff                        ; 00490922
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490927 | DAT_006074b8
    JNZ 0x00490978                      ; 0049092e
        ;   XREF to: 00490978 (CONDITIONAL_JUMP)  ; LAB_00490978
    LEA EAX,[ESI + EBX*0x1]             ; 00490930
        ;   Label: LAB_00490930
    LEA EDI,[ESI + 0x1]                 ; 00490933
    MOV byte ptr [EAX],0x0              ; 00490936
    MOV AL,byte ptr [ESI]               ; 00490939
        ;   Label: LAB_00490939
    INC AL                              ; 0049093b
    AND EAX,0xff                        ; 0049093d
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490942 | DAT_006074b8
    JZ 0x00490980                       ; 00490949
        ;   XREF to: 00490980 (CONDITIONAL_JUMP)  ; LAB_00490980
    PUSH EBX                            ; 0049094b
    PUSH EDI                            ; 0049094c
    PUSH ESI                            ; 0049094d
    DEC EBX                             ; 0049094e
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0049094f
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490954
    JMP 0x00490939                      ; 00490957
        ;   XREF to: 00490939 (UNCONDITIONAL_JUMP)  ; LAB_00490939
    PUSH 0x5bf159                       ; 00490959 | = "Error parsing setWeather command parms"
        ;   Label: LAB_00490959
    PUSH 0x1c734b0                      ; 0049095e | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490963
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00490968
    XOR EAX,EAX                         ; 0049096b
    LEA ESP,[EBP + 0xfa]                ; 0049096d
    POP EBP                             ; 00490973
    POP EDI                             ; 00490974
    POP ESI                             ; 00490975
    POP EBX                             ; 00490976
    RET                                 ; 00490977
    DEC EBX                             ; 00490978
        ;   Label: LAB_00490978
    DEC ECX                             ; 00490979
    TEST EBX,EBX                        ; 0049097a
    JG 0x0049091d                       ; 0049097c
        ;   XREF to: 0049091d (CONDITIONAL_JUMP)  ; LAB_0049091d
    JMP 0x00490930                      ; 0049097e
        ;   XREF to: 00490930 (UNCONDITIONAL_JUMP)  ; LAB_00490930
    PUSH 0x5bf180                       ; 00490980 | DAT_005bf180
        ;   Label: LAB_00490980
    LEA EAX,[EBP + 0xffffe54e]          ; 00490985
    PUSH EAX                            ; 0049098b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0049098c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490991
    TEST EAX,EAX                        ; 00490994
    JNZ 0x004909b7                      ; 00490996
        ;   XREF to: 004909b7 (CONDITIONAL_JUMP)  ; LAB_004909b7
    CMP dword ptr [EBP + -0x66],0x0     ; 00490998
        ;   Label: LAB_00490998
    JZ 0x0048c7d2                       ; 0049099c
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 004909a2
    MOV EBX,dword ptr [0x006071f0]      ; 004909a3 | DAT_006071f0
    PUSH EBX                            ; 004909a9
    CALL core_weather.cpp_FUN_0057d050  ; 004909aa
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d050()
    ADD ESP,0x8                         ; 004909af
    JMP 0x0048c7d2                      ; 004909b2
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5bf185                       ; 004909b7 | DAT_005bf185
        ;   Label: LAB_004909b7
    LEA EAX,[EBP + 0xffffe54e]          ; 004909bc
    PUSH EAX                            ; 004909c2
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004909c3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004909c8
    TEST EAX,EAX                        ; 004909cb
    JNZ 0x004909d6                      ; 004909cd
        ;   XREF to: 004909d6 (CONDITIONAL_JUMP)  ; LAB_004909d6
    MOV EAX,0x1                         ; 004909cf
    JMP 0x00490998                      ; 004909d4
        ;   XREF to: 00490998 (UNCONDITIONAL_JUMP)  ; LAB_00490998
    PUSH 0x5bf18a                       ; 004909d6 | DAT_005bf18a
        ;   Label: LAB_004909d6
    LEA EAX,[EBP + 0xffffe54e]          ; 004909db
    PUSH EAX                            ; 004909e1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004909e2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004909e7
    TEST EAX,EAX                        ; 004909ea
    JNZ 0x004909f5                      ; 004909ec
        ;   XREF to: 004909f5 (CONDITIONAL_JUMP)  ; LAB_004909f5
    MOV EAX,0x2                         ; 004909ee
    JMP 0x00490998                      ; 004909f3
        ;   XREF to: 00490998 (UNCONDITIONAL_JUMP)  ; LAB_00490998
    LEA EAX,[EBP + 0xffffe54e]          ; 004909f5
        ;   Label: LAB_004909f5
    PUSH EAX                            ; 004909fb
    PUSH 0x5bf18f                       ; 004909fc | = "Invalid weather type: %s"
    PUSH 0x1c734b0                      ; 00490a01 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490a06
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00490a0b
    XOR EAX,EAX                         ; 00490a0e
    LEA ESP,[EBP + 0xfa]                ; 00490a10
    POP EBP                             ; 00490a16
    POP EDI                             ; 00490a17
    POP ESI                             ; 00490a18
    POP EBX                             ; 00490a19
    RET                                 ; 00490a1a
    PUSH 0xb                            ; 00490a1b
        ;   Label: LAB_00490a1b
    PUSH 0x5bf1a8                       ; 00490a1d | = "shakeScreen"
    PUSH EBX                            ; 00490a22
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00490a23
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00490a28
    TEST EAX,EAX                        ; 00490a2b
    JNZ 0x00490b09                      ; 00490a2d
        ;   XREF to: 00490b09 (CONDITIONAL_JUMP)  ; LAB_00490b09
    MOV AL,byte ptr [EBX + 0xb]         ; 00490a33
    INC AL                              ; 00490a36
    AND EAX,0xff                        ; 00490a38
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00490a3d | DAT_006074b8
    JNZ 0x00490b09                      ; 00490a44
        ;   XREF to: 00490b09 (CONDITIONAL_JUMP)  ; LAB_00490b09
    LEA EAX,[EBX + 0xb]                 ; 00490a4a
    MOV BL,byte ptr [EAX]               ; 00490a4d
        ;   Label: LAB_00490a4d
    XOR ECX,ECX                         ; 00490a4f
    INC BL                              ; 00490a51
    MOV CL,BL                           ; 00490a53
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490a55 | DAT_006074b8
    JZ 0x00490a61                       ; 00490a5c
        ;   XREF to: 00490a61 (CONDITIONAL_JUMP)  ; LAB_00490a61
    INC EAX                             ; 00490a5e
    JMP 0x00490a4d                      ; 00490a5f
        ;   XREF to: 00490a4d (UNCONDITIONAL_JUMP)  ; LAB_00490a4d
    LEA ECX,[EBP + 0xd2]                ; 00490a61
        ;   Label: LAB_00490a61
    PUSH ECX                            ; 00490a67
    LEA ECX,[EBP + 0xce]                ; 00490a68
    PUSH ECX                            ; 00490a6e
    LEA ECX,[EBP + 0xca]                ; 00490a6f
    PUSH ECX                            ; 00490a75
    LEA ECX,[EBP + 0xc6]                ; 00490a76
    PUSH ECX                            ; 00490a7c
    LEA ECX,[EBP + 0xc2]                ; 00490a7d
    PUSH ECX                            ; 00490a83
    PUSH 0x5bf1b4                       ; 00490a84 | = "( %f, %f, %f, %f )%n"
    MOV ESI,0xffffffff                  ; 00490a89
    PUSH EAX                            ; 00490a8e
    MOV dword ptr [EBP + -0x62],EAX     ; 00490a8f
    MOV dword ptr [EBP + 0xd2],ESI      ; 00490a92
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490a98
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0xd2]      ; 00490a9d
    ADD ESP,0x1c                        ; 00490aa3
    CMP EDI,0x5                         ; 00490aa6
    JL 0x00490aea                       ; 00490aa9
        ;   XREF to: 00490aea (CONDITIONAL_JUMP)  ; LAB_00490aea
    MOV EDX,dword ptr [EBP + -0x62]     ; 00490aab
    ADD EDX,EDI                         ; 00490aae
    MOV ECX,dword ptr [EBP + -0x66]     ; 00490ab0
    MOV dword ptr [EBP + -0x62],EDX     ; 00490ab3
    TEST ECX,ECX                        ; 00490ab6
    JZ 0x0048c7d2                       ; 00490ab8
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0xce]         ; 00490abe
    PUSH dword ptr [EBP + 0xca]         ; 00490ac4
    PUSH dword ptr [EBP + 0xc6]         ; 00490aca
    MOV EBX,dword ptr [0x00603b28]      ; 00490ad0 | g_CDemonSetPtr
    PUSH dword ptr [EBP + 0xc2]         ; 00490ad6
    PUSH EBX                            ; 00490adc | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 ; 00490add
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 00490ae2
    JMP 0x0048c7d2                      ; 00490ae5
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5bf1c9                       ; 00490aea | = "Error parsing shakeScreen command parms"
        ;   Label: LAB_00490aea
    PUSH 0x1c734b0                      ; 00490aef | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490af4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00490af9
    XOR EAX,EAX                         ; 00490afc
    LEA ESP,[EBP + 0xfa]                ; 00490afe
    POP EBP                             ; 00490b04
    POP EDI                             ; 00490b05
    POP ESI                             ; 00490b06
    POP EBX                             ; 00490b07
    RET                                 ; 00490b08
    PUSH 0x11                           ; 00490b09
        ;   Label: LAB_00490b09
    PUSH 0x5bf1f1                       ; 00490b0b | = "slamModelToMotion"
    PUSH EBX                            ; 00490b10
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00490b11
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00490b16
    TEST EAX,EAX                        ; 00490b19
    JNZ 0x00490d38                      ; 00490b1b
        ;   XREF to: 00490d38 (CONDITIONAL_JUMP)  ; LAB_00490d38
    MOV AL,byte ptr [EBX + 0x11]        ; 00490b21
    INC AL                              ; 00490b24
    AND EAX,0xff                        ; 00490b26
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00490b2b | DAT_006074b8
    JNZ 0x00490d38                      ; 00490b32
        ;   XREF to: 00490d38 (CONDITIONAL_JUMP)  ; LAB_00490d38
    LEA EAX,[EBX + 0x11]                ; 00490b38
    MOV BL,byte ptr [EAX]               ; 00490b3b
        ;   Label: LAB_00490b3b
    XOR ECX,ECX                         ; 00490b3d
    INC BL                              ; 00490b3f
    MOV CL,BL                           ; 00490b41
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490b43 | DAT_006074b8
    JZ 0x00490b4f                       ; 00490b4a
        ;   XREF to: 00490b4f (CONDITIONAL_JUMP)  ; LAB_00490b4f
    INC EAX                             ; 00490b4c
    JMP 0x00490b3b                      ; 00490b4d
        ;   XREF to: 00490b3b (UNCONDITIONAL_JUMP)  ; LAB_00490b3b
    LEA ECX,[EBP + 0xd6]                ; 00490b4f
        ;   Label: LAB_00490b4f
    PUSH ECX                            ; 00490b55
    LEA ECX,[EBP + 0xffffe09e]          ; 00490b56
    PUSH ECX                            ; 00490b5c
    LEA ECX,[EBP + 0xffffe3be]          ; 00490b5d
    PUSH ECX                            ; 00490b63
    PUSH 0x5bf203                       ; 00490b64 | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00490b69
    PUSH EAX                            ; 00490b6e
    MOV dword ptr [EBP + -0x62],EAX     ; 00490b6f
    MOV dword ptr [EBP + 0xd6],ESI      ; 00490b72
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490b78
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0xd6]      ; 00490b7d
    ADD ESP,0x14                        ; 00490b83
    CMP EDI,0x5                         ; 00490b86
    JL 0x00490bf3                       ; 00490b89
        ;   XREF to: 00490bf3 (CONDITIONAL_JUMP)  ; LAB_00490bf3
    MOV EDX,dword ptr [EBP + -0x62]     ; 00490b8b
    LEA ESI,[EBP + 0xffffe3be]          ; 00490b8e
    ADD EDX,EDI                         ; 00490b94
    LEA EDI,[EBP + 0xffffe3be]          ; 00490b96
    MOV dword ptr [EBP + -0x62],EDX     ; 00490b9c
    SUB ECX,ECX                         ; 00490b9f
    DEC ECX                             ; 00490ba1
    XOR EAX,EAX                         ; 00490ba2
    SCASB.REPNE ES:EDI                  ; 00490ba4
    NOT ECX                             ; 00490ba6
    DEC ECX                             ; 00490ba8
    MOV EBX,ECX                         ; 00490ba9
    TEST ECX,ECX                        ; 00490bab
    JLE 0x00490bca                      ; 00490bad
        ;   XREF to: 00490bca (CONDITIONAL_JUMP)  ; LAB_00490bca
    LEA EAX,[EBP + 0xffffe3be]          ; 00490baf
    ADD ECX,EAX                         ; 00490bb5
    MOV AL,byte ptr [ECX + -0x1]        ; 00490bb7
        ;   Label: LAB_00490bb7
    INC AL                              ; 00490bba
    AND EAX,0xff                        ; 00490bbc
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490bc1 | DAT_006074b8
    JNZ 0x00490c12                      ; 00490bc8
        ;   XREF to: 00490c12 (CONDITIONAL_JUMP)  ; LAB_00490c12
    LEA EAX,[ESI + EBX*0x1]             ; 00490bca
        ;   Label: LAB_00490bca
    LEA EDI,[ESI + 0x1]                 ; 00490bcd
    MOV byte ptr [EAX],0x0              ; 00490bd0
    MOV AL,byte ptr [ESI]               ; 00490bd3
        ;   Label: LAB_00490bd3
    INC AL                              ; 00490bd5
    AND EAX,0xff                        ; 00490bd7
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490bdc | DAT_006074b8
    JZ 0x00490c1a                       ; 00490be3
        ;   XREF to: 00490c1a (CONDITIONAL_JUMP)  ; LAB_00490c1a
    PUSH EBX                            ; 00490be5
    PUSH EDI                            ; 00490be6
    PUSH ESI                            ; 00490be7
    DEC EBX                             ; 00490be8
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00490be9
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490bee
    JMP 0x00490bd3                      ; 00490bf1
        ;   XREF to: 00490bd3 (UNCONDITIONAL_JUMP)  ; LAB_00490bd3
    PUSH 0x5bf214                       ; 00490bf3 | = "Error parsing slamModelToMotion comma..."
        ;   Label: LAB_00490bf3
    PUSH 0x1c734b0                      ; 00490bf8 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490bfd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00490c02
    XOR EAX,EAX                         ; 00490c05
    LEA ESP,[EBP + 0xfa]                ; 00490c07
    POP EBP                             ; 00490c0d
    POP EDI                             ; 00490c0e
    POP ESI                             ; 00490c0f
    POP EBX                             ; 00490c10
    RET                                 ; 00490c11
    DEC EBX                             ; 00490c12
        ;   Label: LAB_00490c12
    DEC ECX                             ; 00490c13
    TEST EBX,EBX                        ; 00490c14
    JG 0x00490bb7                       ; 00490c16
        ;   XREF to: 00490bb7 (CONDITIONAL_JUMP)  ; LAB_00490bb7
    JMP 0x00490bca                      ; 00490c18
        ;   XREF to: 00490bca (UNCONDITIONAL_JUMP)  ; LAB_00490bca
    LEA EDI,[EBP + 0xffffe09e]          ; 00490c1a
        ;   Label: LAB_00490c1a
    LEA ESI,[EBP + 0xffffe09e]          ; 00490c20
    SUB ECX,ECX                         ; 00490c26
    DEC ECX                             ; 00490c28
    XOR EAX,EAX                         ; 00490c29
    SCASB.REPNE ES:EDI                  ; 00490c2b
    NOT ECX                             ; 00490c2d
    DEC ECX                             ; 00490c2f
    MOV EBX,ECX                         ; 00490c30
    TEST ECX,ECX                        ; 00490c32
    JLE 0x00490c51                      ; 00490c34
        ;   XREF to: 00490c51 (CONDITIONAL_JUMP)  ; LAB_00490c51
    LEA EAX,[EBP + 0xffffe09e]          ; 00490c36
    ADD ECX,EAX                         ; 00490c3c
    MOV AL,byte ptr [ECX + -0x1]        ; 00490c3e
        ;   Label: LAB_00490c3e
    INC AL                              ; 00490c41
    AND EAX,0xff                        ; 00490c43
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490c48 | DAT_006074b8
    JNZ 0x00490c7a                      ; 00490c4f
        ;   XREF to: 00490c7a (CONDITIONAL_JUMP)  ; LAB_00490c7a
    LEA EAX,[ESI + EBX*0x1]             ; 00490c51
        ;   Label: LAB_00490c51
    LEA EDI,[ESI + 0x1]                 ; 00490c54
    MOV byte ptr [EAX],0x0              ; 00490c57
    MOV AL,byte ptr [ESI]               ; 00490c5a
        ;   Label: LAB_00490c5a
    INC AL                              ; 00490c5c
    AND EAX,0xff                        ; 00490c5e
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490c63 | DAT_006074b8
    JZ 0x00490c82                       ; 00490c6a
        ;   XREF to: 00490c82 (CONDITIONAL_JUMP)  ; LAB_00490c82
    PUSH EBX                            ; 00490c6c
    PUSH EDI                            ; 00490c6d
    PUSH ESI                            ; 00490c6e
    DEC EBX                             ; 00490c6f
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00490c70
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490c75
    JMP 0x00490c5a                      ; 00490c78
        ;   XREF to: 00490c5a (UNCONDITIONAL_JUMP)  ; LAB_00490c5a
    DEC EBX                             ; 00490c7a
        ;   Label: LAB_00490c7a
    DEC ECX                             ; 00490c7b
    TEST EBX,EBX                        ; 00490c7c
    JG 0x00490c3e                       ; 00490c7e
        ;   XREF to: 00490c3e (CONDITIONAL_JUMP)  ; LAB_00490c3e
    JMP 0x00490c51                      ; 00490c80
        ;   XREF to: 00490c51 (UNCONDITIONAL_JUMP)  ; LAB_00490c51
    PUSH 0x7e2cb4                       ; 00490c82 | g_CCharacterClassInfo
        ;   Label: LAB_00490c82
    MOV ECX,dword ptr [0x007e2cec]      ; 00490c87 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00490c8d
    LEA EAX,[EBP + 0xffffe3be]          ; 00490c8e
    PUSH EAX                            ; 00490c94
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00490c95
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV EBX,EAX                         ; 00490c9a
    ADD ESP,0xc                         ; 00490c9c
    TEST EAX,EAX                        ; 00490c9f
    JZ 0x0048c30e                       ; 00490ca1
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 00490ca7 | DAT_005df604
    JZ 0x0048c7d2                       ; 00490cad
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x0                            ; 00490cb3
    LEA EAX,[EBP + 0xffffe09e]          ; 00490cb5
    PUSH EAX                            ; 00490cbb
    LEA ESI,[EBX + 0x158]               ; 00490cbc
    PUSH ESI                            ; 00490cc2
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 00490cc3
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00490cc8
    PUSH EAX                            ; 00490ccb
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 00490ccc
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00490cd1
    TEST EAX,EAX                        ; 00490cd4
    JL 0x00490d0b                       ; 00490cd6
        ;   XREF to: 00490d0b (CONDITIONAL_JUMP)  ; LAB_00490d0b
    CMP dword ptr [EBP + -0x66],0x0     ; 00490cd8
    JZ 0x0048c7d2                       ; 00490cdc
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x0                            ; 00490ce2
    PUSH EAX                            ; 00490ce4
    PUSH ESI                            ; 00490ce5
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 00490ce6
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00490ceb
    PUSH 0x1                            ; 00490cee
    PUSH ESI                            ; 00490cf0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00490cf1
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00490cf6
    MOV EAX,dword ptr [EAX + 0x24]      ; 00490cf9
    PUSH EAX                            ; 00490cfc
    PUSH ESI                            ; 00490cfd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00490cfe
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00490d03
    JMP 0x0048c7d2                      ; 00490d06
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xffffe09e]          ; 00490d0b
        ;   Label: LAB_00490d0b
    PUSH EAX                            ; 00490d11
    LEA EAX,[EBX + 0x24a8]              ; 00490d12
    PUSH EAX                            ; 00490d18
    PUSH 0x5bf242                       ; 00490d19 | = "Model %s does not have motion %s"
    PUSH 0x1c734b0                      ; 00490d1e | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00490d23
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00490d28
    XOR EAX,EAX                         ; 00490d2b
    LEA ESP,[EBP + 0xfa]                ; 00490d2d
    POP EBP                             ; 00490d33
    POP EDI                             ; 00490d34
    POP ESI                             ; 00490d35
    POP EBX                             ; 00490d36
    RET                                 ; 00490d37
    PUSH 0xc                            ; 00490d38
        ;   Label: LAB_00490d38
    PUSH 0x5bf263                       ; 00490d3a | = "switchCamera"
    PUSH EBX                            ; 00490d3f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00490d40
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00490d45
    TEST EAX,EAX                        ; 00490d48
    JNZ 0x00490f04                      ; 00490d4a
        ;   XREF to: 00490f04 (CONDITIONAL_JUMP)  ; LAB_00490f04
    MOV AL,byte ptr [EBX + 0xc]         ; 00490d50
    INC AL                              ; 00490d53
    AND EAX,0xff                        ; 00490d55
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00490d5a | DAT_006074b8
    JNZ 0x00490f04                      ; 00490d61
        ;   XREF to: 00490f04 (CONDITIONAL_JUMP)  ; LAB_00490f04
    LEA EAX,[EBX + 0xc]                 ; 00490d67
    MOV BL,byte ptr [EAX]               ; 00490d6a
        ;   Label: LAB_00490d6a
    XOR ECX,ECX                         ; 00490d6c
    INC BL                              ; 00490d6e
    MOV CL,BL                           ; 00490d70
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490d72 | DAT_006074b8
    JZ 0x00490d7e                       ; 00490d79
        ;   XREF to: 00490d7e (CONDITIONAL_JUMP)  ; LAB_00490d7e
    INC EAX                             ; 00490d7b
    JMP 0x00490d6a                      ; 00490d7c
        ;   XREF to: 00490d6a (UNCONDITIONAL_JUMP)  ; LAB_00490d6a
    MOV ECX,0x19                        ; 00490d7e
        ;   Label: LAB_00490d7e
    LEA EDI,[EBP + 0xfffffdea]          ; 00490d83
    MOV ESI,0x5fbbc0                    ; 00490d89 | DAT_005fbbc0
    MOVSD.REP ES:EDI,ESI                ; 00490d8e | DAT_005fbbc0 | DAT_005fbbc4
    LEA ECX,[EBP + 0xda]                ; 00490d90
    PUSH ECX                            ; 00490d96
    LEA ECX,[EBP + 0xfffffdea]          ; 00490d97
    PUSH ECX                            ; 00490d9d
    PUSH 0x5bf270                       ; 00490d9e | = " ( %[^ ,)]%n"
    MOV EDX,0xffffffff                  ; 00490da3
    PUSH EAX                            ; 00490da8
    MOV dword ptr [EBP + -0x62],EAX     ; 00490da9
    MOV dword ptr [EBP + 0xda],EDX      ; 00490dac
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490db2
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0xda]      ; 00490db7
    ADD ESP,0x10                        ; 00490dbd
    CMP ECX,0x2                         ; 00490dc0
    JL 0x00490dde                       ; 00490dc3
        ;   XREF to: 00490dde (CONDITIONAL_JUMP)  ; LAB_00490dde
    MOV EAX,dword ptr [EBP + -0x62]     ; 00490dc5
    ADD EAX,ECX                         ; 00490dc8
    MOV BL,byte ptr [EAX]               ; 00490dca
        ;   Label: LAB_00490dca
    XOR ECX,ECX                         ; 00490dcc
    INC BL                              ; 00490dce
    MOV CL,BL                           ; 00490dd0
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490dd2 | DAT_006074b8
    JZ 0x00490df6                       ; 00490dd9
        ;   XREF to: 00490df6 (CONDITIONAL_JUMP)  ; LAB_00490df6
    INC EAX                             ; 00490ddb
    JMP 0x00490dca                      ; 00490ddc
        ;   XREF to: 00490dca (UNCONDITIONAL_JUMP)  ; LAB_00490dca
    PUSH 0x5bf27d                       ; 00490dde | = "Syntax error in switchCamera() parms"
        ;   Label: LAB_00490dde
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490de3
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 00490de8
    LEA ESP,[EBP + 0xfa]                ; 00490deb
    POP EBP                             ; 00490df1
    POP EDI                             ; 00490df2
    POP ESI                             ; 00490df3
    POP EBX                             ; 00490df4
    RET                                 ; 00490df5
    MOV dword ptr [EBP + -0x62],EAX     ; 00490df6
        ;   Label: LAB_00490df6
    LEA EAX,[EBP + 0xfffffdea]          ; 00490df9
    PUSH EAX                            ; 00490dff
    MOV ESI,dword ptr [0x00603b28]      ; 00490e00 | g_CDemonSetPtr
    PUSH ESI                            ; 00490e06 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_00535360 ; 00490e07
        ;   XREF to: 00535360 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 00490e0c
    MOV ESI,EAX                         ; 00490e0f
    TEST EAX,EAX                        ; 00490e11
    JL 0x00490e60                       ; 00490e13
        ;   XREF to: 00490e60 (CONDITIONAL_JUMP)  ; LAB_00490e60
    MOV EDI,0x40400000                  ; 00490e15
    MOV EAX,dword ptr [EBP + -0x62]     ; 00490e1a
    MOV dword ptr [EBP + 0xde],EDI      ; 00490e1d
    CMP byte ptr [EAX],0x2c             ; 00490e23
    JZ 0x00490e7f                       ; 00490e26
        ;   XREF to: 00490e7f (CONDITIONAL_JUMP)  ; LAB_00490e7f
    MOV EAX,dword ptr [EBP + -0x62]     ; 00490e28
        ;   Label: LAB_00490e28
    CMP byte ptr [EAX],0x29             ; 00490e2b
    JNZ 0x00490eec                      ; 00490e2e
        ;   XREF to: 00490eec (CONDITIONAL_JUMP)  ; LAB_00490eec
    LEA EDI,[EAX + 0x1]                 ; 00490e34
    MOV EAX,dword ptr [EBP + -0x66]     ; 00490e37
    MOV dword ptr [EBP + -0x62],EDI     ; 00490e3a
    TEST EAX,EAX                        ; 00490e3d
    JZ 0x0048c7d2                       ; 00490e3f
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0xde]         ; 00490e45
    PUSH ESI                            ; 00490e4b
    MOV EDX,dword ptr [0x00603b28]      ; 00490e4c | g_CDemonSetPtr
    PUSH EDX                            ; 00490e52 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00540ba0 ; 00490e53
        ;   XREF to: 00540ba0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00540ba0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 00490e58
    JMP 0x0048c7d2                      ; 00490e5b
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffffdea]          ; 00490e60
        ;   Label: LAB_00490e60
    PUSH EAX                            ; 00490e66
    PUSH 0x5bf2a2                       ; 00490e67 | = "Camera \"%s\" doesn't exist"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490e6c
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 00490e71
    LEA ESP,[EBP + 0xfa]                ; 00490e74
    POP EBP                             ; 00490e7a
    POP EDI                             ; 00490e7b
    POP ESI                             ; 00490e7c
    POP EBX                             ; 00490e7d
    RET                                 ; 00490e7e
    MOV dword ptr [EBP + 0xda],0xffffffff ; 00490e7f
        ;   Label: LAB_00490e7f
    LEA EAX,[EBP + 0xda]                ; 00490e89
    PUSH EAX                            ; 00490e8f
    LEA EAX,[EBP + 0xde]                ; 00490e90
    PUSH EAX                            ; 00490e96
    PUSH 0x5bf2bc                       ; 00490e97 | = ",%f%n"
    MOV EDX,dword ptr [EBP + -0x62]     ; 00490e9c
    PUSH EDX                            ; 00490e9f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490ea0
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0xda]      ; 00490ea5
    ADD ESP,0x10                        ; 00490eab
    CMP ECX,0x2                         ; 00490eae
    JL 0x00490ecc                       ; 00490eb1
        ;   XREF to: 00490ecc (CONDITIONAL_JUMP)  ; LAB_00490ecc
    MOV EAX,dword ptr [EBP + -0x62]     ; 00490eb3
    ADD EAX,ECX                         ; 00490eb6
    MOV BL,byte ptr [EAX]               ; 00490eb8
        ;   Label: LAB_00490eb8
    XOR ECX,ECX                         ; 00490eba
    INC BL                              ; 00490ebc
    MOV CL,BL                           ; 00490ebe
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490ec0 | DAT_006074b8
    JZ 0x00490ee4                       ; 00490ec7
        ;   XREF to: 00490ee4 (CONDITIONAL_JUMP)  ; LAB_00490ee4
    INC EAX                             ; 00490ec9
    JMP 0x00490eb8                      ; 00490eca
        ;   XREF to: 00490eb8 (UNCONDITIONAL_JUMP)  ; LAB_00490eb8
    PUSH 0x5bf2c2                       ; 00490ecc | = "Syntax error in switchCamera() parms"
        ;   Label: LAB_00490ecc
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490ed1
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 00490ed6
    LEA ESP,[EBP + 0xfa]                ; 00490ed9
    POP EBP                             ; 00490edf
    POP EDI                             ; 00490ee0
    POP ESI                             ; 00490ee1
    POP EBX                             ; 00490ee2
    RET                                 ; 00490ee3
    MOV dword ptr [EBP + -0x62],EAX     ; 00490ee4
        ;   Label: LAB_00490ee4
    JMP 0x00490e28                      ; 00490ee7
        ;   XREF to: 00490e28 (UNCONDITIONAL_JUMP)  ; LAB_00490e28
    PUSH 0x5bf2e7                       ; 00490eec | = "Missing ')' in switchCamera() statement"
        ;   Label: LAB_00490eec
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490ef1
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 00490ef6
    LEA ESP,[EBP + 0xfa]                ; 00490ef9
    POP EBP                             ; 00490eff
    POP EDI                             ; 00490f00
    POP ESI                             ; 00490f01
    POP EBX                             ; 00490f02
    RET                                 ; 00490f03
    PUSH 0x15                           ; 00490f04
        ;   Label: LAB_00490f04
    PUSH 0x5bf30f                       ; 00490f06 | = "turnToFieldNotesEntry"
    PUSH EBX                            ; 00490f0b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00490f0c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00490f11
    TEST EAX,EAX                        ; 00490f14
    JNZ 0x0049106b                      ; 00490f16
        ;   XREF to: 0049106b (CONDITIONAL_JUMP)  ; LAB_0049106b
    MOV AL,byte ptr [EBX + 0x15]        ; 00490f1c
    INC AL                              ; 00490f1f
    AND EAX,0xff                        ; 00490f21
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00490f26 | DAT_006074b8
    JNZ 0x0049106b                      ; 00490f2d
        ;   XREF to: 0049106b (CONDITIONAL_JUMP)  ; LAB_0049106b
    LEA EAX,[EBX + 0x15]                ; 00490f33
    MOV BL,byte ptr [EAX]               ; 00490f36
        ;   Label: LAB_00490f36
    XOR ECX,ECX                         ; 00490f38
    INC BL                              ; 00490f3a
    MOV CL,BL                           ; 00490f3c
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00490f3e | DAT_006074b8
    JZ 0x00490f4a                       ; 00490f45
        ;   XREF to: 00490f4a (CONDITIONAL_JUMP)  ; LAB_00490f4a
    INC EAX                             ; 00490f47
    JMP 0x00490f36                      ; 00490f48
        ;   XREF to: 00490f36 (UNCONDITIONAL_JUMP)  ; LAB_00490f36
    MOV dword ptr [EBP + 0xe2],0xffffffff ; 00490f4a
        ;   Label: LAB_00490f4a
    LEA ECX,[EBP + 0xe2]                ; 00490f54
    PUSH ECX                            ; 00490f5a
    LEA ECX,[EBP + 0xffffd30e]          ; 00490f5b
    PUSH ECX                            ; 00490f61
    PUSH 0x5bf325                       ; 00490f62 | = "(%[^)])%n"
    PUSH EAX                            ; 00490f67
    MOV dword ptr [EBP + -0x62],EAX     ; 00490f68
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00490f6b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0xe2]      ; 00490f70
    ADD ESP,0x10                        ; 00490f76
    CMP EBX,0x3                         ; 00490f79
    JL 0x00490fe6                       ; 00490f7c
        ;   XREF to: 00490fe6 (CONDITIONAL_JUMP)  ; LAB_00490fe6
    MOV ESI,dword ptr [EBP + -0x62]     ; 00490f7e
    ADD ESI,EBX                         ; 00490f81
    LEA EDI,[EBP + 0xffffd30e]          ; 00490f83
    MOV dword ptr [EBP + -0x62],ESI     ; 00490f89
    SUB ECX,ECX                         ; 00490f8c
    DEC ECX                             ; 00490f8e
    XOR EAX,EAX                         ; 00490f8f
    SCASB.REPNE ES:EDI                  ; 00490f91
    NOT ECX                             ; 00490f93
    DEC ECX                             ; 00490f95
    LEA ESI,[EBP + 0xffffd30e]          ; 00490f96
    MOV EBX,ECX                         ; 00490f9c
    TEST ECX,ECX                        ; 00490f9e
    JLE 0x00490fbd                      ; 00490fa0
        ;   XREF to: 00490fbd (CONDITIONAL_JUMP)  ; LAB_00490fbd
    LEA EAX,[EBP + 0xffffd30e]          ; 00490fa2
    ADD ECX,EAX                         ; 00490fa8
    MOV AL,byte ptr [ECX + -0x1]        ; 00490faa
        ;   Label: LAB_00490faa
    INC AL                              ; 00490fad
    AND EAX,0xff                        ; 00490faf
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490fb4 | DAT_006074b8
    JNZ 0x00490ffe                      ; 00490fbb
        ;   XREF to: 00490ffe (CONDITIONAL_JUMP)  ; LAB_00490ffe
    LEA EAX,[ESI + EBX*0x1]             ; 00490fbd
        ;   Label: LAB_00490fbd
    LEA EDI,[ESI + 0x1]                 ; 00490fc0
    MOV byte ptr [EAX],0x0              ; 00490fc3
    MOV AL,byte ptr [ESI]               ; 00490fc6
        ;   Label: LAB_00490fc6
    INC AL                              ; 00490fc8
    AND EAX,0xff                        ; 00490fca
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00490fcf | DAT_006074b8
    JZ 0x00491006                       ; 00490fd6
        ;   XREF to: 00491006 (CONDITIONAL_JUMP)  ; LAB_00491006
    PUSH EBX                            ; 00490fd8
    PUSH EDI                            ; 00490fd9
    PUSH ESI                            ; 00490fda
    DEC EBX                             ; 00490fdb
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00490fdc
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490fe1
    JMP 0x00490fc6                      ; 00490fe4
        ;   XREF to: 00490fc6 (UNCONDITIONAL_JUMP)  ; LAB_00490fc6
    PUSH 0x5bf32f                       ; 00490fe6 | = "Error parsing turnToFieldNotesEntry c..."
        ;   Label: LAB_00490fe6
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00490feb
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 00490ff0
    LEA ESP,[EBP + 0xfa]                ; 00490ff3
    POP EBP                             ; 00490ff9
    POP EDI                             ; 00490ffa
    POP ESI                             ; 00490ffb
    POP EBX                             ; 00490ffc
    RET                                 ; 00490ffd
    DEC EBX                             ; 00490ffe
        ;   Label: LAB_00490ffe
    DEC ECX                             ; 00490fff
    TEST EBX,EBX                        ; 00491000
    JG 0x00490faa                       ; 00491002
        ;   XREF to: 00490faa (CONDITIONAL_JUMP)  ; LAB_00490faa
    JMP 0x00490fbd                      ; 00491004
        ;   XREF to: 00490fbd (UNCONDITIONAL_JUMP)  ; LAB_00490fbd
    CMP dword ptr [0x01c734ac],0x0      ; 00491006 | DAT_01c734ac
        ;   Label: LAB_00491006
    JZ 0x00491051                       ; 0049100d
        ;   XREF to: 00491051 (CONDITIONAL_JUMP)  ; LAB_00491051
    LEA EAX,[EBP + 0xffffd30e]          ; 0049100f
    PUSH EAX                            ; 00491015
    MOV EDX,dword ptr [0x005fe4b0]      ; 00491016 | g_CFieldNotesPtr
    PUSH EDX                            ; 0049101c | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004abb30 ; 0049101d
        ;   XREF to: 004abb30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abb30()
    INC EAX                             ; 00491022
    ADD ESP,0x8                         ; 00491023
    CMP EAX,0x7                         ; 00491026
    JA 0x00491032                       ; 00491029
        ;   XREF to: 00491032 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x48c2b8]  ; 0049102b | caseD_ffffffff | caseD_6 | switchdataD_0048c2b8
        ;   Label: switchD
    LEA EAX,[EBP + 0xffffd30e]          ; 00491032
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 00491038
    PUSH 0x5bf35b                       ; 00491039 | = "Field notes entry '%s' not found"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0049103e
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 00491043
    LEA ESP,[EBP + 0xfa]                ; 00491046
    POP EBP                             ; 0049104c
    POP EDI                             ; 0049104d
    POP ESI                             ; 0049104e
    POP EBX                             ; 0049104f
    RET                                 ; 00491050
    LEA EAX,[EBP + 0xffffd30e]          ; 00491051
        ;   Label: LAB_00491051
    PUSH EAX                            ; 00491057
    MOV EAX,[0x005fe4b0]                ; 00491058 | g_CFieldNotesPtr
    PUSH EAX                            ; 0049105d | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004abb90 ; 0049105e
        ;   XREF to: 004abb90 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004abb90(CFieldNotes * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 00491063
    JMP 0x0048c7d2                      ; 00491066
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0xb                            ; 0049106b
        ;   Label: LAB_0049106b
    PUSH 0x5bf37c                       ; 0049106d | = "warpToMulti"
    PUSH EBX                            ; 00491072
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00491073
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00491078
    TEST EAX,EAX                        ; 0049107b
    JNZ 0x00491520                      ; 0049107d
        ;   XREF to: 00491520 (CONDITIONAL_JUMP)  ; LAB_00491520
    MOV AL,byte ptr [EBX + 0xb]         ; 00491083
    INC AL                              ; 00491086
    AND EAX,0xff                        ; 00491088
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0049108d | DAT_006074b8
    JNZ 0x00491520                      ; 00491094
        ;   XREF to: 00491520 (CONDITIONAL_JUMP)  ; LAB_00491520
    LEA EAX,[EBX + 0xb]                 ; 0049109a
    MOV BL,byte ptr [EAX]               ; 0049109d
        ;   Label: LAB_0049109d
    XOR ECX,ECX                         ; 0049109f
    INC BL                              ; 004910a1
    MOV CL,BL                           ; 004910a3
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 004910a5 | DAT_006074b8
    JZ 0x004910b1                       ; 004910ac
        ;   XREF to: 004910b1 (CONDITIONAL_JUMP)  ; LAB_004910b1
    INC EAX                             ; 004910ae
    JMP 0x0049109d                      ; 004910af
        ;   XREF to: 0049109d (UNCONDITIONAL_JUMP)  ; LAB_0049109d
    MOV dword ptr [EBP + 0xea],0xffffffff ; 004910b1
        ;   Label: LAB_004910b1
    LEA ECX,[EBP + 0xea]                ; 004910bb
    PUSH ECX                            ; 004910c1
    LEA ECX,[EBP + 0xfffff80e]          ; 004910c2
    PUSH ECX                            ; 004910c8
    LEA ECX,[EBP + 0xffffeb8e]          ; 004910c9
    PUSH ECX                            ; 004910cf
    LEA ECX,[EBP + 0xffffeac6]          ; 004910d0
    PUSH ECX                            ; 004910d6
    PUSH 0x5bf388                       ; 004910d7 | = "(%[^,], %[^,], %[^)])%n"
    PUSH EAX                            ; 004910dc
    MOV dword ptr [EBP + -0x62],EAX     ; 004910dd
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004910e0
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0xea]      ; 004910e5
    ADD ESP,0x18                        ; 004910eb
    CMP EBX,0x5                         ; 004910ee
    JL 0x00491153                       ; 004910f1
        ;   XREF to: 00491153 (CONDITIONAL_JUMP)  ; LAB_00491153
    LEA EDI,[EBP + 0xffffeac6]          ; 004910f3
    LEA ESI,[EBP + 0xffffeac6]          ; 004910f9
    SUB ECX,ECX                         ; 004910ff
    DEC ECX                             ; 00491101
    XOR EAX,EAX                         ; 00491102
    SCASB.REPNE ES:EDI                  ; 00491104
    NOT ECX                             ; 00491106
    DEC ECX                             ; 00491108
    MOV EBX,ECX                         ; 00491109
    TEST ECX,ECX                        ; 0049110b
    JLE 0x0049112a                      ; 0049110d
        ;   XREF to: 0049112a (CONDITIONAL_JUMP)  ; LAB_0049112a
    LEA EAX,[EBP + 0xffffeac6]          ; 0049110f
    ADD ECX,EAX                         ; 00491115
    MOV AL,byte ptr [ECX + -0x1]        ; 00491117
        ;   Label: LAB_00491117
    INC AL                              ; 0049111a
    AND EAX,0xff                        ; 0049111c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00491121 | DAT_006074b8
    JNZ 0x0049116b                      ; 00491128
        ;   XREF to: 0049116b (CONDITIONAL_JUMP)  ; LAB_0049116b
    LEA EAX,[ESI + EBX*0x1]             ; 0049112a
        ;   Label: LAB_0049112a
    LEA EDI,[ESI + 0x1]                 ; 0049112d
    MOV byte ptr [EAX],0x0              ; 00491130
    MOV AL,byte ptr [ESI]               ; 00491133
        ;   Label: LAB_00491133
    INC AL                              ; 00491135
    AND EAX,0xff                        ; 00491137
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049113c | DAT_006074b8
    JZ 0x00491173                       ; 00491143
        ;   XREF to: 00491173 (CONDITIONAL_JUMP)  ; LAB_00491173
    PUSH EBX                            ; 00491145
    PUSH EDI                            ; 00491146
    PUSH ESI                            ; 00491147
    DEC EBX                             ; 00491148
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00491149
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049114e
    JMP 0x00491133                      ; 00491151
        ;   XREF to: 00491133 (UNCONDITIONAL_JUMP)  ; LAB_00491133
    PUSH 0x5bf3a0                       ; 00491153 | = "Error parsing warpToMulti command parms"
        ;   Label: LAB_00491153
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00491158
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0049115d
    LEA ESP,[EBP + 0xfa]                ; 00491160
    POP EBP                             ; 00491166
    POP EDI                             ; 00491167
    POP ESI                             ; 00491168
    POP EBX                             ; 00491169
    RET                                 ; 0049116a
    DEC EBX                             ; 0049116b
        ;   Label: LAB_0049116b
    DEC ECX                             ; 0049116c
    TEST EBX,EBX                        ; 0049116d
    JG 0x00491117                       ; 0049116f
        ;   XREF to: 00491117 (CONDITIONAL_JUMP)  ; LAB_00491117
    JMP 0x0049112a                      ; 00491171
        ;   XREF to: 0049112a (UNCONDITIONAL_JUMP)  ; LAB_0049112a
    LEA EDI,[EBP + 0xffffeb8e]          ; 00491173
        ;   Label: LAB_00491173
    LEA ESI,[EBP + 0xffffeb8e]          ; 00491179
    SUB ECX,ECX                         ; 0049117f
    DEC ECX                             ; 00491181
    XOR EAX,EAX                         ; 00491182
    SCASB.REPNE ES:EDI                  ; 00491184
    NOT ECX                             ; 00491186
    DEC ECX                             ; 00491188
    MOV EBX,ECX                         ; 00491189
    TEST ECX,ECX                        ; 0049118b
    JLE 0x004911aa                      ; 0049118d
        ;   XREF to: 004911aa (CONDITIONAL_JUMP)  ; LAB_004911aa
    LEA EAX,[EBP + 0xffffeb8e]          ; 0049118f
    ADD ECX,EAX                         ; 00491195
    MOV AL,byte ptr [ECX + -0x1]        ; 00491197
        ;   Label: LAB_00491197
    INC AL                              ; 0049119a
    AND EAX,0xff                        ; 0049119c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004911a1 | DAT_006074b8
    JNZ 0x004911d3                      ; 004911a8
        ;   XREF to: 004911d3 (CONDITIONAL_JUMP)  ; LAB_004911d3
    LEA EAX,[ESI + EBX*0x1]             ; 004911aa
        ;   Label: LAB_004911aa
    LEA EDI,[ESI + 0x1]                 ; 004911ad
    MOV byte ptr [EAX],0x0              ; 004911b0
    MOV AL,byte ptr [ESI]               ; 004911b3
        ;   Label: LAB_004911b3
    INC AL                              ; 004911b5
    AND EAX,0xff                        ; 004911b7
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004911bc | DAT_006074b8
    JZ 0x004911db                       ; 004911c3
        ;   XREF to: 004911db (CONDITIONAL_JUMP)  ; LAB_004911db
    PUSH EBX                            ; 004911c5
    PUSH EDI                            ; 004911c6
    PUSH ESI                            ; 004911c7
    DEC EBX                             ; 004911c8
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004911c9
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004911ce
    JMP 0x004911b3                      ; 004911d1
        ;   XREF to: 004911b3 (UNCONDITIONAL_JUMP)  ; LAB_004911b3
    DEC EBX                             ; 004911d3
        ;   Label: LAB_004911d3
    DEC ECX                             ; 004911d4
    TEST EBX,EBX                        ; 004911d5
    JG 0x00491197                       ; 004911d7
        ;   XREF to: 00491197 (CONDITIONAL_JUMP)  ; LAB_00491197
    JMP 0x004911aa                      ; 004911d9
        ;   XREF to: 004911aa (UNCONDITIONAL_JUMP)  ; LAB_004911aa
    LEA EDI,[EBP + 0xfffff80e]          ; 004911db
        ;   Label: LAB_004911db
    LEA ESI,[EBP + 0xfffff80e]          ; 004911e1
    SUB ECX,ECX                         ; 004911e7
    DEC ECX                             ; 004911e9
    XOR EAX,EAX                         ; 004911ea
    SCASB.REPNE ES:EDI                  ; 004911ec
    NOT ECX                             ; 004911ee
    DEC ECX                             ; 004911f0
    MOV EBX,ECX                         ; 004911f1
    TEST ECX,ECX                        ; 004911f3
    JLE 0x00491212                      ; 004911f5
        ;   XREF to: 00491212 (CONDITIONAL_JUMP)  ; LAB_00491212
    LEA EAX,[EBP + 0xfffff80e]          ; 004911f7
    ADD ECX,EAX                         ; 004911fd
    MOV AL,byte ptr [ECX + -0x1]        ; 004911ff
        ;   Label: LAB_004911ff
    INC AL                              ; 00491202
    AND EAX,0xff                        ; 00491204
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00491209 | DAT_006074b8
    JNZ 0x0049123b                      ; 00491210
        ;   XREF to: 0049123b (CONDITIONAL_JUMP)  ; LAB_0049123b
    LEA EAX,[ESI + EBX*0x1]             ; 00491212
        ;   Label: LAB_00491212
    LEA EDI,[ESI + 0x1]                 ; 00491215
    MOV byte ptr [EAX],0x0              ; 00491218
    MOV AL,byte ptr [ESI]               ; 0049121b
        ;   Label: LAB_0049121b
    INC AL                              ; 0049121d
    AND EAX,0xff                        ; 0049121f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00491224 | DAT_006074b8
    JZ 0x00491243                       ; 0049122b
        ;   XREF to: 00491243 (CONDITIONAL_JUMP)  ; LAB_00491243
    PUSH EBX                            ; 0049122d
    PUSH EDI                            ; 0049122e
    PUSH ESI                            ; 0049122f
    DEC EBX                             ; 00491230
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00491231
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00491236
    JMP 0x0049121b                      ; 00491239
        ;   XREF to: 0049121b (UNCONDITIONAL_JUMP)  ; LAB_0049121b
    DEC EBX                             ; 0049123b
        ;   Label: LAB_0049123b
    DEC ECX                             ; 0049123c
    TEST EBX,EBX                        ; 0049123d
    JG 0x004911ff                       ; 0049123f
        ;   XREF to: 004911ff (CONDITIONAL_JUMP)  ; LAB_004911ff
    JMP 0x00491212                      ; 00491241
        ;   XREF to: 00491212 (UNCONDITIONAL_JUMP)  ; LAB_00491212
    MOV EAX,dword ptr [EBP + -0x62]     ; 00491243
        ;   Label: LAB_00491243
    ADD EAX,dword ptr [EBP + 0xea]      ; 00491246
    MOV BL,byte ptr [EAX]               ; 0049124c
        ;   Label: LAB_0049124c
    XOR ECX,ECX                         ; 0049124e
    INC BL                              ; 00491250
    MOV CL,BL                           ; 00491252
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00491254 | DAT_006074b8
    JZ 0x00491260                       ; 0049125b
        ;   XREF to: 00491260 (CONDITIONAL_JUMP)  ; LAB_00491260
    INC EAX                             ; 0049125d
    JMP 0x0049124c                      ; 0049125e
        ;   XREF to: 0049124c (UNCONDITIONAL_JUMP)  ; LAB_0049124c
    PUSH 0x7df978                       ; 00491260 | g_CDemonActorClassInfo
        ;   Label: LAB_00491260
    MOV EDI,dword ptr [0x007df9b0]      ; 00491265 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0049126b
    MOV dword ptr [EBP + -0x62],EAX     ; 0049126c
    LEA EAX,[EBP + 0xffffeac6]          ; 0049126f
    PUSH EAX                            ; 00491275
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00491276
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 0049127b
    MOV EBX,EAX                         ; 0049127e
    TEST EAX,EAX                        ; 00491280
    JZ 0x0048c30e                       ; 00491282
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 00491288 | DAT_005df604
    JNZ 0x00491295                      ; 0049128e
        ;   XREF to: 00491295 (CONDITIONAL_JUMP)  ; LAB_00491295
    XOR ECX,ECX                         ; 00491290
    MOV dword ptr [EBP + -0x66],ECX     ; 00491292
    PUSH 0x7df978                       ; 00491295 | g_CDemonActorClassInfo
        ;   Label: LAB_00491295
    MOV ESI,dword ptr [0x007df9b0]      ; 0049129a | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 004912a0
    LEA EAX,[EBP + 0xfffff80e]          ; 004912a1
    PUSH EAX                            ; 004912a7
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 004912a8
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 004912ad
    MOV dword ptr [EBP + 0xee],EAX      ; 004912b0
    TEST EAX,EAX                        ; 004912b6
    JZ 0x0048c30e                       ; 004912b8
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    CMP EAX,dword ptr [0x005df604]      ; 004912be | DAT_005df604
    JNZ 0x0049149a                      ; 004912c4
        ;   XREF to: 0049149a (CONDITIONAL_JUMP)  ; LAB_0049149a
    XOR EDX,EDX                         ; 004912ca
    MOV dword ptr [EBP + -0x66],EDX     ; 004912cc
    PUSH 0x7df978                       ; 004912cf | g_CDemonActorClassInfo
        ;   Label: LAB_004912cf
    MOV ESI,dword ptr [0x007df9b0]      ; 004912d4 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 004912da
    LEA EAX,[EBP + 0xffffeb8e]          ; 004912db
    MOV ECX,0xffffffff                  ; 004912e1
    PUSH EAX                            ; 004912e6
    MOV dword ptr [EBP + 0xea],ECX      ; 004912e7
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 004912ed
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV ESI,EAX                         ; 004912f2
    ADD ESP,0xc                         ; 004912f4
    TEST EAX,EAX                        ; 004912f7
    JZ 0x0048c30e                       ; 004912f9
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    MOV EDI,dword ptr [0x005df604]      ; 004912ff | DAT_005df604
    CMP EAX,EDI                         ; 00491305
    JNZ 0x004914b2                      ; 00491307
        ;   XREF to: 004914b2 (CONDITIONAL_JUMP)  ; LAB_004914b2
    XOR EAX,EDI                         ; 0049130d
    MOV dword ptr [EBP + -0x66],EAX     ; 0049130f
    LEA EDI,[EBP + 0xffffeb8e]          ; 00491312
        ;   Label: LAB_00491312
    SUB ECX,ECX                         ; 00491318
    DEC ECX                             ; 0049131a
    XOR EAX,EAX                         ; 0049131b
    SCASB.REPNE ES:EDI                  ; 0049131d
    NOT ECX                             ; 0049131f
    DEC ECX                             ; 00491321
    MOV dword ptr [EBP + 0xea],ECX      ; 00491322
    TEST ECX,ECX                        ; 00491328
    JL 0x00491508                       ; 0049132a
        ;   XREF to: 00491508 (CONDITIONAL_JUMP)  ; LAB_00491508
    CMP byte ptr [ECX + EBP*0x1 + 0xffffeb8e],0x0 ; 00491330
    JNZ 0x00491508                      ; 00491338
        ;   XREF to: 00491508 (CONDITIONAL_JUMP)  ; LAB_00491508
    CMP dword ptr [EBP + -0x66],0x0     ; 0049133e
    JZ 0x0048c7d2                       ; 00491342
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [EBP + 0xffffff0a] ; 00491348
    CMP ECX,dword ptr [EBX + 0x2c]      ; 0049134e
    JZ 0x0049135f                       ; 00491351
        ;   XREF to: 0049135f (CONDITIONAL_JUMP)  ; LAB_0049135f
    PUSH EBX                            ; 00491353
    MOV EAX,dword ptr [EBX + 0x154]     ; 00491354
    CALL dword ptr [EAX]                ; 0049135a
    ADD ESP,0x4                         ; 0049135c
    MOV ESI,dword ptr [0x007e2cec]      ; 0049135f | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0049135f
    PUSH ESI                            ; 00491365
    PUSH EBX                            ; 00491366
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00491367
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 0049136c
    ADD ESP,0x8                         ; 0049136e
    TEST EAX,EAX                        ; 00491371
    JZ 0x00491395                       ; 00491373
        ;   XREF to: 00491395 (CONDITIONAL_JUMP)  ; LAB_00491395
    PUSH ESI                            ; 00491375
    MOV EAX,dword ptr [EAX + 0x154]     ; 00491376
    CALL dword ptr [EAX + 0xf0]         ; 0049137c
    ADD ESP,0x4                         ; 00491382
    MOV EAX,dword ptr [ESI + 0x154]     ; 00491385
    PUSH ESI                            ; 0049138b
    CALL dword ptr [EAX + 0xf8]         ; 0049138c
    ADD ESP,0x4                         ; 00491392
    MOV EDI,dword ptr [0x007e2cec]      ; 00491395 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00491395
    PUSH EDI                            ; 0049139b
    MOV EAX,dword ptr [EBP + 0xee]      ; 0049139c
    PUSH EAX                            ; 004913a2
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004913a3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 004913a8
    ADD ESP,0x8                         ; 004913aa
    TEST EAX,EAX                        ; 004913ad
    JZ 0x004913d1                       ; 004913af
        ;   XREF to: 004913d1 (CONDITIONAL_JUMP)  ; LAB_004913d1
    PUSH ESI                            ; 004913b1
    MOV EAX,dword ptr [EAX + 0x154]     ; 004913b2
    CALL dword ptr [EAX + 0xf0]         ; 004913b8
    ADD ESP,0x4                         ; 004913be
    MOV EAX,dword ptr [ESI + 0x154]     ; 004913c1
    PUSH ESI                            ; 004913c7
    CALL dword ptr [EAX + 0xf8]         ; 004913c8
    ADD ESP,0x4                         ; 004913ce
    LEA ECX,[EBX + 0x20]                ; 004913d1
        ;   Label: LAB_004913d1
    MOV EAX,dword ptr [ECX]             ; 004913d4
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 004913d6
    MOV EAX,dword ptr [ECX + 0x4]       ; 004913dc
    MOV dword ptr [EBP + 0xffffff12],EAX ; 004913df
    MOV EAX,dword ptr [ECX + 0x8]       ; 004913e5
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004913e8
    MOV EAX,dword ptr [ECX + 0xc]       ; 004913ee
    MOV dword ptr [EBP + 0xffffff1a],EAX ; 004913f1
    LEA ECX,[EBX + 0x30]                ; 004913f7
    LEA EAX,[EBP + 0xffffff6a]          ; 004913fa
    CMP EAX,ECX                         ; 00491400
    JZ 0x0049141e                       ; 00491402
        ;   XREF to: 0049141e (CONDITIONAL_JUMP)  ; LAB_0049141e
    MOV EAX,dword ptr [ECX]             ; 00491404
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 00491406
    MOV EAX,dword ptr [ECX + 0x4]       ; 0049140c
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 0049140f
    MOV EAX,dword ptr [ECX + 0x8]       ; 00491415
    MOV dword ptr [EBP + 0xffffff72],EAX ; 00491418
    MOV ECX,dword ptr [EBP + 0xee]      ; 0049141e
        ;   Label: LAB_0049141e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00491424
    MOV dword ptr [ECX + 0x2c],EAX      ; 00491427
    LEA EAX,[EBP + 0xffffff6a]          ; 0049142a
    PUSH EAX                            ; 00491430
    LEA EAX,[EBP + 0xffffff0e]          ; 00491431
    PUSH EAX                            ; 00491437
    MOV EDX,dword ptr [EBP + 0xee]      ; 00491438
    MOV ECX,dword ptr [ECX + 0x154]     ; 0049143e
    PUSH EDX                            ; 00491444
    CALL dword ptr [ECX + 0x68]         ; 00491445
    ADD ESP,0xc                         ; 00491448
    MOV ECX,dword ptr [EBP + 0xee]      ; 0049144b
    PUSH ECX                            ; 00491451
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00491452
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    MOV EAX,dword ptr [EBP + 0xffffff0a] ; 00491457
    ADD ESP,0x4                         ; 0049145d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00491460
    LEA EAX,[EBP + 0xffffff2e]          ; 00491463
    PUSH EAX                            ; 00491469
    LEA EAX,[EBP + 0xfffffefe]          ; 0049146a
    PUSH EAX                            ; 00491470
    MOV ECX,dword ptr [EBX + 0x154]     ; 00491471
    PUSH EBX                            ; 00491477
    CALL dword ptr [ECX + 0x68]         ; 00491478
    MOV EAX,[0x006039e0]                ; 0049147b | g_CScriptPtr
    MOV ESI,dword ptr [EAX + 0xc]       ; 00491480 | g_CScriptInstance.focus_actor
    ADD ESP,0xc                         ; 00491483
    CMP EBX,ESI                         ; 00491486
    JNZ 0x0048c7d2                      ; 00491488
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EAX + 0x10],0x1      ; 0049148e | g_CScriptInstance.focus_actor_changed
    JMP 0x0048c7d2                      ; 00491495
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBP + -0x66],0x0     ; 0049149a
        ;   Label: LAB_0049149a
    JZ 0x004912cf                       ; 0049149e
        ;   XREF to: 004912cf (CONDITIONAL_JUMP)  ; LAB_004912cf
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004914a4
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 004914a7
    JMP 0x004912cf                      ; 004914ad
        ;   XREF to: 004912cf (UNCONDITIONAL_JUMP)  ; LAB_004912cf
    LEA ECX,[EAX + 0x20]                ; 004914b2
        ;   Label: LAB_004914b2
    MOV EAX,dword ptr [ECX]             ; 004914b5
    MOV dword ptr [EBP + 0xfffffefe],EAX ; 004914b7
    MOV EAX,dword ptr [ECX + 0x4]       ; 004914bd
    MOV dword ptr [EBP + 0xffffff02],EAX ; 004914c0
    MOV EAX,dword ptr [ECX + 0x8]       ; 004914c6
    MOV dword ptr [EBP + 0xffffff06],EAX ; 004914c9
    MOV EAX,dword ptr [ECX + 0xc]       ; 004914cf
    ADD ESI,0x30                        ; 004914d2
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 004914d5
    LEA EAX,[EBP + 0xffffff2e]          ; 004914db
    CMP EAX,ESI                         ; 004914e1
    JZ 0x00491312                       ; 004914e3
        ;   XREF to: 00491312 (CONDITIONAL_JUMP)  ; LAB_00491312
    MOV EAX,dword ptr [ESI]             ; 004914e9
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 004914eb
    MOV EAX,dword ptr [ESI + 0x4]       ; 004914f1
    MOV dword ptr [EBP + 0xffffff32],EAX ; 004914f4
    MOV EAX,dword ptr [ESI + 0x8]       ; 004914fa
    MOV dword ptr [EBP + 0xffffff36],EAX ; 004914fd
    JMP 0x00491312                      ; 00491503
        ;   XREF to: 00491312 (UNCONDITIONAL_JUMP)  ; LAB_00491312
    PUSH 0x5bf3c8                       ; 00491508 | = "Error parsing warpTo command parms"
        ;   Label: LAB_00491508
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 0049150d
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 00491512
    LEA ESP,[EBP + 0xfa]                ; 00491515
    POP EBP                             ; 0049151b
    POP EDI                             ; 0049151c
    POP ESI                             ; 0049151d
    POP EBX                             ; 0049151e
    RET                                 ; 0049151f
    PUSH 0x6                            ; 00491520
        ;   Label: LAB_00491520
    PUSH 0x5bf3eb                       ; 00491522 | = "warpTo"
    PUSH EBX                            ; 00491527
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00491528
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0049152d
    TEST EAX,EAX                        ; 00491530
    JNZ 0x004919ca                      ; 00491532
        ;   XREF to: 004919ca (CONDITIONAL_JUMP)  ; LAB_004919ca
    MOV AL,byte ptr [EBX + 0x6]         ; 00491538
    INC AL                              ; 0049153b
    AND EAX,0xff                        ; 0049153d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00491542 | DAT_006074b8
    JNZ 0x004919ca                      ; 00491549
        ;   XREF to: 004919ca (CONDITIONAL_JUMP)  ; LAB_004919ca
    LEA EAX,[EBX + 0x6]                 ; 0049154f
    MOV BL,byte ptr [EAX]               ; 00491552
        ;   Label: LAB_00491552
    XOR ECX,ECX                         ; 00491554
    INC BL                              ; 00491556
    MOV CL,BL                           ; 00491558
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0049155a | DAT_006074b8
    JZ 0x00491566                       ; 00491561
        ;   XREF to: 00491566 (CONDITIONAL_JUMP)  ; LAB_00491566
    INC EAX                             ; 00491563
    JMP 0x00491552                      ; 00491564
        ;   XREF to: 00491552 (UNCONDITIONAL_JUMP)  ; LAB_00491552
    LEA ECX,[EBP + 0xf6]                ; 00491566
        ;   Label: LAB_00491566
    PUSH ECX                            ; 0049156c
    LEA ECX,[EBP + 0xffffe936]          ; 0049156d
    PUSH ECX                            ; 00491573
    LEA ECX,[EBP + 0xffffdf0e]          ; 00491574
    PUSH ECX                            ; 0049157a
    PUSH 0x5bf3f2                       ; 0049157b | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 00491580
    PUSH EAX                            ; 00491585
    MOV dword ptr [EBP + -0x62],EAX     ; 00491586
    MOV dword ptr [EBP + 0xf6],EDI      ; 00491589
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049158f
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0xf6]      ; 00491594
    ADD ESP,0x14                        ; 0049159a
    CMP EAX,0x5                         ; 0049159d
    JL 0x00491602                       ; 004915a0
        ;   XREF to: 00491602 (CONDITIONAL_JUMP)  ; LAB_00491602
    LEA EDI,[EBP + 0xffffdf0e]          ; 004915a2
    LEA ESI,[EBP + 0xffffdf0e]          ; 004915a8
    SUB ECX,ECX                         ; 004915ae
    DEC ECX                             ; 004915b0
    XOR EAX,EAX                         ; 004915b1
    SCASB.REPNE ES:EDI                  ; 004915b3
    NOT ECX                             ; 004915b5
    DEC ECX                             ; 004915b7
    MOV EBX,ECX                         ; 004915b8
    TEST ECX,ECX                        ; 004915ba
    JLE 0x004915d9                      ; 004915bc
        ;   XREF to: 004915d9 (CONDITIONAL_JUMP)  ; LAB_004915d9
    LEA EAX,[EBP + 0xffffdf0e]          ; 004915be
    ADD ECX,EAX                         ; 004915c4
    MOV AL,byte ptr [ECX + -0x1]        ; 004915c6
        ;   Label: LAB_004915c6
    INC AL                              ; 004915c9
    AND EAX,0xff                        ; 004915cb
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004915d0 | DAT_006074b8
    JNZ 0x0049161a                      ; 004915d7
        ;   XREF to: 0049161a (CONDITIONAL_JUMP)  ; LAB_0049161a
    LEA EAX,[ESI + EBX*0x1]             ; 004915d9
        ;   Label: LAB_004915d9
    LEA EDI,[ESI + 0x1]                 ; 004915dc
    MOV byte ptr [EAX],0x0              ; 004915df
    MOV AL,byte ptr [ESI]               ; 004915e2
        ;   Label: LAB_004915e2
    INC AL                              ; 004915e4
    AND EAX,0xff                        ; 004915e6
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004915eb | DAT_006074b8
    JZ 0x00491622                       ; 004915f2
        ;   XREF to: 00491622 (CONDITIONAL_JUMP)  ; LAB_00491622
    PUSH EBX                            ; 004915f4
    PUSH EDI                            ; 004915f5
    PUSH ESI                            ; 004915f6
    DEC EBX                             ; 004915f7
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004915f8
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004915fd
    JMP 0x004915e2                      ; 00491600
        ;   XREF to: 004915e2 (UNCONDITIONAL_JUMP)  ; LAB_004915e2
    PUSH 0x5bf403                       ; 00491602 | = "Error parsing warpTo command parms"
        ;   Label: LAB_00491602
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00491607
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0049160c
    LEA ESP,[EBP + 0xfa]                ; 0049160f
    POP EBP                             ; 00491615
    POP EDI                             ; 00491616
    POP ESI                             ; 00491617
    POP EBX                             ; 00491618
    RET                                 ; 00491619
    DEC EBX                             ; 0049161a
        ;   Label: LAB_0049161a
    DEC ECX                             ; 0049161b
    TEST EBX,EBX                        ; 0049161c
    JG 0x004915c6                       ; 0049161e
        ;   XREF to: 004915c6 (CONDITIONAL_JUMP)  ; LAB_004915c6
    JMP 0x004915d9                      ; 00491620
        ;   XREF to: 004915d9 (UNCONDITIONAL_JUMP)  ; LAB_004915d9
    LEA EDI,[EBP + 0xffffe936]          ; 00491622
        ;   Label: LAB_00491622
    LEA ESI,[EBP + 0xffffe936]          ; 00491628
    SUB ECX,ECX                         ; 0049162e
    DEC ECX                             ; 00491630
    XOR EAX,EAX                         ; 00491631
    SCASB.REPNE ES:EDI                  ; 00491633
    NOT ECX                             ; 00491635
    DEC ECX                             ; 00491637
    MOV EBX,ECX                         ; 00491638
    TEST ECX,ECX                        ; 0049163a
    JLE 0x00491659                      ; 0049163c
        ;   XREF to: 00491659 (CONDITIONAL_JUMP)  ; LAB_00491659
    LEA EAX,[EBP + 0xffffe936]          ; 0049163e
    ADD ECX,EAX                         ; 00491644
    MOV AL,byte ptr [ECX + -0x1]        ; 00491646
        ;   Label: LAB_00491646
    INC AL                              ; 00491649
    AND EAX,0xff                        ; 0049164b
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00491650 | DAT_006074b8
    JNZ 0x00491682                      ; 00491657
        ;   XREF to: 00491682 (CONDITIONAL_JUMP)  ; LAB_00491682
    LEA EAX,[ESI + EBX*0x1]             ; 00491659
        ;   Label: LAB_00491659
    LEA EDI,[ESI + 0x1]                 ; 0049165c
    MOV byte ptr [EAX],0x0              ; 0049165f
    MOV AL,byte ptr [ESI]               ; 00491662
        ;   Label: LAB_00491662
    INC AL                              ; 00491664
    AND EAX,0xff                        ; 00491666
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049166b | DAT_006074b8
    JZ 0x0049168a                       ; 00491672
        ;   XREF to: 0049168a (CONDITIONAL_JUMP)  ; LAB_0049168a
    PUSH EBX                            ; 00491674
    PUSH EDI                            ; 00491675
    PUSH ESI                            ; 00491676
    DEC EBX                             ; 00491677
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00491678
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049167d
    JMP 0x00491662                      ; 00491680
        ;   XREF to: 00491662 (UNCONDITIONAL_JUMP)  ; LAB_00491662
    DEC EBX                             ; 00491682
        ;   Label: LAB_00491682
    DEC ECX                             ; 00491683
    TEST EBX,EBX                        ; 00491684
    JG 0x00491646                       ; 00491686
        ;   XREF to: 00491646 (CONDITIONAL_JUMP)  ; LAB_00491646
    JMP 0x00491659                      ; 00491688
        ;   XREF to: 00491659 (UNCONDITIONAL_JUMP)  ; LAB_00491659
    MOV EAX,dword ptr [EBP + -0x62]     ; 0049168a
        ;   Label: LAB_0049168a
    ADD EAX,dword ptr [EBP + 0xf6]      ; 0049168d
    MOV BL,byte ptr [EAX]               ; 00491693
        ;   Label: LAB_00491693
    XOR ECX,ECX                         ; 00491695
    INC BL                              ; 00491697
    MOV CL,BL                           ; 00491699
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0049169b | DAT_006074b8
    JZ 0x004916a7                       ; 004916a2
        ;   XREF to: 004916a7 (CONDITIONAL_JUMP)  ; LAB_004916a7
    INC EAX                             ; 004916a4
    JMP 0x00491693                      ; 004916a5
        ;   XREF to: 00491693 (UNCONDITIONAL_JUMP)  ; LAB_00491693
    PUSH 0x7df978                       ; 004916a7 | g_CDemonActorClassInfo
        ;   Label: LAB_004916a7
    MOV ECX,dword ptr [0x007df9b0]      ; 004916ac | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 004916b2
    MOV dword ptr [EBP + -0x62],EAX     ; 004916b3
    LEA EAX,[EBP + 0xffffdf0e]          ; 004916b6
    PUSH EAX                            ; 004916bc
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 004916bd
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    ADD ESP,0xc                         ; 004916c2
    MOV EBX,EAX                         ; 004916c5
    TEST EAX,EAX                        ; 004916c7
    JZ 0x0048c30e                       ; 004916c9
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    MOV ESI,dword ptr [0x005df604]      ; 004916cf | DAT_005df604
    CMP EAX,ESI                         ; 004916d5
    JNZ 0x00491831                      ; 004916d7
        ;   XREF to: 00491831 (CONDITIONAL_JUMP)  ; LAB_00491831
    XOR EAX,ESI                         ; 004916dd
    MOV dword ptr [EBP + -0x66],EAX     ; 004916df
    LEA EAX,[EBP + 0xf6]                ; 004916e2
        ;   Label: LAB_004916e2
    PUSH EAX                            ; 004916e8
    LEA EAX,[EBP + 0xffffff4a]          ; 004916e9
    PUSH EAX                            ; 004916ef
    LEA EAX,[EBP + 0xffffff4e]          ; 004916f0
    PUSH EAX                            ; 004916f6
    LEA EAX,[EBP + 0xffffff46]          ; 004916f7
    PUSH EAX                            ; 004916fd
    LEA EAX,[EBP + 0xffffff26]          ; 004916fe
    PUSH EAX                            ; 00491704
    LEA EAX,[EBP + 0xffffff22]          ; 00491705
    PUSH EAX                            ; 0049170b
    LEA EAX,[EBP + 0xffffff1e]          ; 0049170c
    PUSH EAX                            ; 00491712
    PUSH 0x5bf426                       ; 00491713 | = "%f,%f,%f,%f,%f,%f%n"
    LEA EAX,[EBP + 0xffffe936]          ; 00491718
    MOV EDX,0xffffffff                  ; 0049171e
    PUSH EAX                            ; 00491723
    MOV dword ptr [EBP + 0xf6],EDX      ; 00491724
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049172a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0xf6]      ; 0049172f
    ADD ESP,0x24                        ; 00491735
    TEST ECX,ECX                        ; 00491738
    JL 0x00491849                       ; 0049173a
        ;   XREF to: 00491849 (CONDITIONAL_JUMP)  ; LAB_00491849
    CMP dword ptr [EBP + 0xf6],0x0      ; 00491740
        ;   Label: LAB_00491740
    JL 0x004918b2                       ; 00491747
        ;   XREF to: 004918b2 (CONDITIONAL_JUMP)  ; LAB_004918b2
    CMP dword ptr [EBP + 0xf6],0x0      ; 0049174d
        ;   Label: LAB_0049174d
    JL 0x00491914                       ; 00491754
        ;   XREF to: 00491914 (CONDITIONAL_JUMP)  ; LAB_00491914
    MOV EDX,dword ptr [EBP + 0xf6]      ; 0049175a
        ;   Label: LAB_0049175a
    TEST EDX,EDX                        ; 00491760
    JL 0x004919b2                       ; 00491762
        ;   XREF to: 004919b2 (CONDITIONAL_JUMP)  ; LAB_004919b2
    CMP byte ptr [EDX + EBP*0x1 + 0xffffe936],0x0 ; 00491768
    JNZ 0x004919b2                      ; 00491770
        ;   XREF to: 004919b2 (CONDITIONAL_JUMP)  ; LAB_004919b2
    CMP dword ptr [EBP + -0x66],0x0     ; 00491776
    JZ 0x0048c7d2                       ; 0049177a
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,dword ptr [EBP + 0xffffff2a] ; 00491780
    CMP ESI,dword ptr [EBX + 0x2c]      ; 00491786
    JZ 0x00491797                       ; 00491789
        ;   XREF to: 00491797 (CONDITIONAL_JUMP)  ; LAB_00491797
    PUSH EBX                            ; 0049178b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049178c
    CALL dword ptr [EAX]                ; 00491792
    ADD ESP,0x4                         ; 00491794
    MOV EDI,dword ptr [0x007e2cec]      ; 00491797 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00491797
    PUSH EDI                            ; 0049179d
    PUSH EBX                            ; 0049179e
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049179f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 004917a4
    ADD ESP,0x8                         ; 004917a6
    TEST EAX,EAX                        ; 004917a9
    JZ 0x004917cd                       ; 004917ab
        ;   XREF to: 004917cd (CONDITIONAL_JUMP)  ; LAB_004917cd
    PUSH ESI                            ; 004917ad
    MOV EAX,dword ptr [EAX + 0x154]     ; 004917ae
    CALL dword ptr [EAX + 0xf0]         ; 004917b4
    ADD ESP,0x4                         ; 004917ba
    MOV EAX,dword ptr [ESI + 0x154]     ; 004917bd
    PUSH ESI                            ; 004917c3
    CALL dword ptr [EAX + 0xf8]         ; 004917c4
    ADD ESP,0x4                         ; 004917ca
    MOV EAX,dword ptr [EBP + 0xffffff2a] ; 004917cd
        ;   Label: LAB_004917cd
    MOV dword ptr [EBX + 0x2c],EAX      ; 004917d3
    LEA EAX,[EBP + 0xffffff46]          ; 004917d6
    PUSH EAX                            ; 004917dc
    LEA EAX,[EBP + 0xffffff1e]          ; 004917dd
    PUSH EAX                            ; 004917e3
    MOV ECX,dword ptr [EBX + 0x154]     ; 004917e4
    PUSH EBX                            ; 004917ea
    CALL dword ptr [ECX + 0x68]         ; 004917eb
    MOV EAX,[0x01d5ba14]                ; 004917ee | DAT_01d5ba14
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004917f3
    ADD ESP,0xc                         ; 004917fa
    CMP EBX,EDX                         ; 004917fd
    JNZ 0x00491817                      ; 004917ff
        ;   XREF to: 00491817 (CONDITIONAL_JUMP)  ; LAB_00491817
    LEA EAX,[EBP + 0xffffff1e]          ; 00491801
    PUSH EAX                            ; 00491807
    MOV ECX,dword ptr [0x00600530]      ; 00491808 | DAT_00600530
    PUSH ECX                            ; 0049180e | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0 ; 0049180f
        ;   XREF to: 004f6ed0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission * this_ptr, CLocation * teleport_target)
    ADD ESP,0x8                         ; 00491814
    MOV EAX,[0x006039e0]                ; 00491817 | g_CScriptPtr
        ;   Label: LAB_00491817
    CMP EBX,dword ptr [EAX + 0xc]       ; 0049181c | g_CScriptInstance.focus_actor
    JNZ 0x0048c7d2                      ; 0049181f
        ;   XREF to: 0048c7d2 (CONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EAX + 0x10],0x1      ; 00491825 | g_CScriptInstance.focus_actor_changed
    JMP 0x0048c7d2                      ; 0049182c
        ;   XREF to: 0048c7d2 (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBP + -0x66],0x0     ; 00491831
        ;   Label: LAB_00491831
    JZ 0x004916e2                       ; 00491835
        ;   XREF to: 004916e2 (CONDITIONAL_JUMP)  ; LAB_004916e2
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0049183b
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 0049183e
    JMP 0x004916e2                      ; 00491844
        ;   XREF to: 004916e2 (UNCONDITIONAL_JUMP)  ; LAB_004916e2
    CMP dword ptr [EBP + -0x66],0x0     ; 00491849
        ;   Label: LAB_00491849
    JZ 0x00491876                       ; 0049184d
        ;   XREF to: 00491876 (CONDITIONAL_JUMP)  ; LAB_00491876
    LEA EAX,[EBP + 0xffffff46]          ; 0049184f
    LEA ECX,[EBX + 0x30]                ; 00491855
    CMP EAX,ECX                         ; 00491858
    JZ 0x00491876                       ; 0049185a
        ;   XREF to: 00491876 (CONDITIONAL_JUMP)  ; LAB_00491876
    MOV EAX,dword ptr [ECX]             ; 0049185c
    MOV dword ptr [EBP + 0xffffff46],EAX ; 0049185e
    MOV EAX,dword ptr [ECX + 0x4]       ; 00491864
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 00491867
    MOV EAX,dword ptr [ECX + 0x8]       ; 0049186d
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 00491870
    LEA EAX,[EBP + 0xf6]                ; 00491876
        ;   Label: LAB_00491876
    PUSH EAX                            ; 0049187c
    LEA EAX,[EBP + 0xffffff4a]          ; 0049187d
    PUSH EAX                            ; 00491883
    LEA EAX,[EBP + 0xffffff26]          ; 00491884
    PUSH EAX                            ; 0049188a
    LEA EAX,[EBP + 0xffffff22]          ; 0049188b
    PUSH EAX                            ; 00491891
    LEA EAX,[EBP + 0xffffff1e]          ; 00491892
    PUSH EAX                            ; 00491898
    PUSH 0x5bf43a                       ; 00491899 | = "%f,%f,%f,%f%n"
    LEA EAX,[EBP + 0xffffe936]          ; 0049189e
    PUSH EAX                            ; 004918a4
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004918a5
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x1c                        ; 004918aa
    JMP 0x00491740                      ; 004918ad
        ;   XREF to: 00491740 (UNCONDITIONAL_JUMP)  ; LAB_00491740
    CMP dword ptr [EBP + -0x66],0x0     ; 004918b2
        ;   Label: LAB_004918b2
    JZ 0x004918df                       ; 004918b6
        ;   XREF to: 004918df (CONDITIONAL_JUMP)  ; LAB_004918df
    LEA EAX,[EBP + 0xffffff46]          ; 004918b8
    LEA ECX,[EBX + 0x30]                ; 004918be
    CMP EAX,ECX                         ; 004918c1
    JZ 0x004918df                       ; 004918c3
        ;   XREF to: 004918df (CONDITIONAL_JUMP)  ; LAB_004918df
    MOV EAX,dword ptr [ECX]             ; 004918c5
    MOV dword ptr [EBP + 0xffffff46],EAX ; 004918c7
    MOV EAX,dword ptr [ECX + 0x4]       ; 004918cd
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 004918d0
    MOV EAX,dword ptr [ECX + 0x8]       ; 004918d6
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 004918d9
    LEA EAX,[EBP + 0xf6]                ; 004918df
        ;   Label: LAB_004918df
    PUSH EAX                            ; 004918e5
    LEA EAX,[EBP + 0xffffff26]          ; 004918e6
    PUSH EAX                            ; 004918ec
    LEA EAX,[EBP + 0xffffff22]          ; 004918ed
    PUSH EAX                            ; 004918f3
    LEA EAX,[EBP + 0xffffff1e]          ; 004918f4
    PUSH EAX                            ; 004918fa
    PUSH 0x5bf448                       ; 004918fb | = "%f,%f,%f%n"
    LEA EAX,[EBP + 0xffffe936]          ; 00491900
    PUSH EAX                            ; 00491906
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00491907
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 0049190c
    JMP 0x0049174d                      ; 0049190f
        ;   XREF to: 0049174d (UNCONDITIONAL_JUMP)  ; LAB_0049174d
    PUSH 0x7df978                       ; 00491914 | g_CDemonActorClassInfo
        ;   Label: LAB_00491914
    MOV ECX,dword ptr [0x007df9b0]      ; 00491919 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0049191f
    LEA EAX,[EBP + 0xffffe936]          ; 00491920
    PUSH EAX                            ; 00491926
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00491927
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV ESI,EAX                         ; 0049192c
    ADD ESP,0xc                         ; 0049192e
    TEST EAX,EAX                        ; 00491931
    JZ 0x0048c30e                       ; 00491933
        ;   XREF to: 0048c30e (CONDITIONAL_JUMP)  ; LAB_0048c30e
    MOV EDI,dword ptr [0x005df604]      ; 00491939 | DAT_005df604
    CMP EAX,EDI                         ; 0049193f
    JNZ 0x00491963                      ; 00491941
        ;   XREF to: 00491963 (CONDITIONAL_JUMP)  ; LAB_00491963
    XOR EAX,EDI                         ; 00491943
    MOV dword ptr [EBP + -0x66],EAX     ; 00491945
    LEA EDI,[EBP + 0xffffe936]          ; 00491948
        ;   Label: LAB_00491948
    SUB ECX,ECX                         ; 0049194e
    DEC ECX                             ; 00491950
    XOR EAX,EAX                         ; 00491951
    SCASB.REPNE ES:EDI                  ; 00491953
    NOT ECX                             ; 00491955
    DEC ECX                             ; 00491957
    MOV dword ptr [EBP + 0xf6],ECX      ; 00491958
    JMP 0x0049175a                      ; 0049195e
        ;   XREF to: 0049175a (UNCONDITIONAL_JUMP)  ; LAB_0049175a
    LEA ECX,[EAX + 0x20]                ; 00491963
        ;   Label: LAB_00491963
    MOV EAX,dword ptr [ECX]             ; 00491966
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 00491968
    MOV EAX,dword ptr [ECX + 0x4]       ; 0049196e
    MOV dword ptr [EBP + 0xffffff22],EAX ; 00491971
    MOV EAX,dword ptr [ECX + 0x8]       ; 00491977
    MOV dword ptr [EBP + 0xffffff26],EAX ; 0049197a
    MOV EAX,dword ptr [ECX + 0xc]       ; 00491980
    ADD ESI,0x30                        ; 00491983
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 00491986
    LEA EAX,[EBP + 0xffffff46]          ; 0049198c
    CMP EAX,ESI                         ; 00491992
    JZ 0x00491948                       ; 00491994
        ;   XREF to: 00491948 (CONDITIONAL_JUMP)  ; LAB_00491948
    MOV EAX,dword ptr [ESI]             ; 00491996
    MOV dword ptr [EBP + 0xffffff46],EAX ; 00491998
    MOV EAX,dword ptr [ESI + 0x4]       ; 0049199e
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 004919a1
    MOV EAX,dword ptr [ESI + 0x8]       ; 004919a7
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 004919aa
    JMP 0x00491948                      ; 004919b0
        ;   XREF to: 00491948 (UNCONDITIONAL_JUMP)  ; LAB_00491948
    PUSH 0x5bf453                       ; 004919b2 | = "Error parsing warpTo command parms"
        ;   Label: LAB_004919b2
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 004919b7
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 004919bc
    LEA ESP,[EBP + 0xfa]                ; 004919bf
    POP EBP                             ; 004919c5
    POP EDI                             ; 004919c6
    POP ESI                             ; 004919c7
    POP EBX                             ; 004919c8
    RET                                 ; 004919c9
    PUSH EBX                            ; 004919ca
        ;   Label: LAB_004919ca
    PUSH 0x5bf476                       ; 004919cb | = "Unknown meta-function starting at %s"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 004919d0
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 004919d5
    LEA ESP,[EBP + 0xfa]                ; 004919d8
    POP EBP                             ; 004919de
    POP EDI                             ; 004919df
    POP ESI                             ; 004919e0
    POP EBX                             ; 004919e1
    RET                                 ; 004919e2
    MOV dword ptr [EBP + -0x62],EAX     ; 004919e3
        ;   Label: LAB_004919e3
    CMP byte ptr [EAX],0x0              ; 004919e6
    JZ 0x0048c309                       ; 004919e9
        ;   XREF to: 0048c309 (CONDITIONAL_JUMP)  ; LAB_0048c309
    PUSH 0x5bf49b                       ; 004919ef | = "Extra characters found"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 004919f4
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 004919f9
    LEA ESP,[EBP + 0xfa]                ; 004919fc
    POP EBP                             ; 00491a02
    POP EDI                             ; 00491a03
    POP ESI                             ; 00491a04
    POP EBX                             ; 00491a05
    RET                                 ; 00491a06

