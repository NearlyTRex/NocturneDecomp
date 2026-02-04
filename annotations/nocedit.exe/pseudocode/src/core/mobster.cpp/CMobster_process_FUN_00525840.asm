; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mobster_cpp_CMobster_process_FUN_00525840(CMobster *this_ptr,float delta_time)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x19c]:1  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined1       Stack[-0x160]:1  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined1       Stack[-0x100]:1  local_100
; undefined1       Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x4c]:1  local_4c
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
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_00525810 = 00526108
;   TerminatedCString s_mob_scream_wav_00639846
;   TerminatedCString s_s_confused_while_walking_00639856
;   double DOUBLE_00639886 = 3.14159265350000
;   double DOUBLE_0063988e = 0.5
;   double DOUBLE_00639896 = 0.523598775583333
;   double DOUBLE_0063989e = 2
;   double DOUBLE_006398a6 = 32
;   float FLOAT_00661778 = 3
;   float FLOAT_0066177c = 30
;   float FLOAT_00661788 = 20
;   CConsole* g_CConsolePtr = 0083b1a4
;   CEventList* g_CEventListPtr = 02d05310
;   CGore* g_CGorePtr = 02d83364
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042d090
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525840
        ;   Label: core_mobster.cpp_CMobster_process_FUN_00525840
    PUSH ESI                            ; 00525841
    PUSH EDI                            ; 00525842
    PUSH EBP                            ; 00525843
    MOV EBP,ESP                         ; 00525844
    SUB ESP,0x18c                       ; 00525846
    SUB EBP,0x7a                        ; 0052584c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0052584f
    PUSH dword ptr [EBP + 0x92]         ; 00525855
    PUSH EBX                            ; 0052585b
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 0052585c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00525861
    TEST EAX,EAX                        ; 00525864
    JNZ 0x00525893                      ; 00525866
        ;   XREF to: 00525893 (CONDITIONAL_JUMP)  ; LAB_00525893
    CMP dword ptr [EBX + 0xbee0],0x0    ; 00525868
    JNZ 0x00525879                      ; 0052586f
        ;   XREF to: 00525879 (CONDITIONAL_JUMP)  ; LAB_00525879
    LEA ESP,[EBP + 0x7a]                ; 00525871
        ;   Label: LAB_00525871
    POP EBP                             ; 00525874
    POP EDI                             ; 00525875
    POP ESI                             ; 00525876
    POP EBX                             ; 00525877
    RET                                 ; 00525878
    PUSH EBX                            ; 00525879
        ;   Label: LAB_00525879
    CALL core_mobster.cpp_CMobster_FUN_00525650 ; 0052587a
        ;   XREF to: 00525650 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_00525650(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0052587f
    PUSH dword ptr [EBP + 0x92]         ; 00525882
    PUSH EBX                            ; 00525888
    CALL core_charactr.cpp_CCharacter_FUN_0042d090 ; 00525889
        ;   XREF to: 0042d090 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 0052588e
    JMP 0x00525871                      ; 00525891
        ;   XREF to: 00525871 (UNCONDITIONAL_JUMP)  ; LAB_00525871
    MOV EAX,dword ptr [EBX + 0xbf88]    ; 00525893
        ;   Label: LAB_00525893
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00525899
    JZ 0x00525a05                       ; 005258a1
        ;   XREF to: 00525a05 (CONDITIONAL_JUMP)  ; LAB_00525a05
    CMP dword ptr [EBX + 0xb7d8],0x0    ; 005258a7
        ;   Label: LAB_005258a7
    JZ 0x005258ba                       ; 005258ae
        ;   XREF to: 005258ba (CONDITIONAL_JUMP)  ; LAB_005258ba
    MOV dword ptr [EBX + 0xb7dc],0x0    ; 005258b0
    CMP dword ptr [EBX + 0x2f10],0x0    ; 005258ba
        ;   Label: LAB_005258ba
    JLE 0x00525925                      ; 005258c1
        ;   XREF to: 00525925 (CONDITIONAL_JUMP)  ; LAB_00525925
    PUSH 0x0                            ; 005258c3
    PUSH 0x1                            ; 005258c5
    MOV EAX,dword ptr [EBX + 0x154]     ; 005258c7
    PUSH EBX                            ; 005258cd
    CALL dword ptr [EAX + 0x13c]        ; 005258ce
    ADD ESP,0xc                         ; 005258d4
    PUSH 0x0                            ; 005258d7
    PUSH 0x0                            ; 005258d9
    MOV EAX,dword ptr [EBX + 0x154]     ; 005258db
    PUSH EBX                            ; 005258e1
    CALL dword ptr [EAX + 0x13c]        ; 005258e2
    ADD ESP,0xc                         ; 005258e8
    MOV EAX,dword ptr [EBX + 0xbf54]    ; 005258eb
    PUSH EAX                            ; 005258f1
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005258f2
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005258f7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005258fa
    PUSH EBX                            ; 00525900
    CALL dword ptr [EAX + 0x120]        ; 00525901
    ADD ESP,0x4                         ; 00525907
    TEST EAX,EAX                        ; 0052590a
    JNZ 0x00525925                      ; 0052590c
        ;   XREF to: 00525925 (CONDITIONAL_JUMP)  ; LAB_00525925
    MOV EDX,dword ptr [EBX + 0xbf5c]    ; 0052590e
    PUSH EDX                            ; 00525914
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00525915
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0052591a
    TEST EAX,EAX                        ; 0052591d
    JZ 0x00525a47                       ; 0052591f
        ;   XREF to: 00525a47 (CONDITIONAL_JUMP)  ; LAB_00525a47
    FLD float ptr [EBX + 0xbf90]        ; 00525925
        ;   Label: LAB_00525925
    FSUB float ptr [EBP + 0x92]         ; 0052592b
    FST float ptr [EBX + 0xbf90]        ; 00525931
    FLDZ                                ; 00525937
    FCOMPP                              ; 00525939
    FNSTSW AX                           ; 0052593b
    SAHF                                ; 0052593d
    JBE 0x0052594a                      ; 0052593e
        ;   XREF to: 0052594a (CONDITIONAL_JUMP)  ; LAB_0052594a
    MOV dword ptr [EBX + 0xbf90],0x0    ; 00525940
    FLD float ptr [EBX + 0xbed4]        ; 0052594a
        ;   Label: LAB_0052594a
    FSUB float ptr [EBP + 0x92]         ; 00525950
    FST float ptr [EBX + 0xbed4]        ; 00525956
    FLDZ                                ; 0052595c
    FCOMPP                              ; 0052595e
    FNSTSW AX                           ; 00525960
    SAHF                                ; 00525962
    JBE 0x0052596f                      ; 00525963
        ;   XREF to: 0052596f (CONDITIONAL_JUMP)  ; LAB_0052596f
    MOV dword ptr [EBX + 0xbed4],0x0    ; 00525965
    MOV EAX,dword ptr [EBX + 0xbf6c]    ; 0052596f
        ;   Label: LAB_0052596f
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00525975
    TEST ESI,ESI                        ; 0052597c
    JZ 0x00525a7b                       ; 0052597e
        ;   XREF to: 00525a7b (CONDITIONAL_JUMP)  ; LAB_00525a7b
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 00525984
        ;   Label: LAB_00525984
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0052598a
    TEST EDI,EDI                        ; 00525991
    JZ 0x00525a93                       ; 00525993
        ;   XREF to: 00525a93 (CONDITIONAL_JUMP)  ; LAB_00525a93
    CMP dword ptr [EBX + 0xbee8],0x0    ; 00525999
        ;   Label: LAB_00525999
    JZ 0x00525aaa                       ; 005259a0
        ;   XREF to: 00525aaa (CONDITIONAL_JUMP)  ; LAB_00525aaa
    LEA EAX,[EBX + 0x23ac]              ; 005259a6
        ;   Label: LAB_005259a6
    MOV dword ptr [EAX + 0x8],0x0       ; 005259ac
    FLD float ptr [EBP + 0x92]          ; 005259b3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005259b9
    MOV dword ptr [EAX + 0x4],EDX       ; 005259bc
    MOV EDX,dword ptr [EAX + 0x4]       ; 005259bf
    MOV dword ptr [EAX],EDX             ; 005259c2
    FMUL float ptr [EBX + 0xbe24]       ; 005259c4
    LEA ESI,[EBX + 0x158]               ; 005259ca
    FSTP float ptr [EBP + 0x52]         ; 005259d0
    FLD float ptr [EBP + 0x52]          ; 005259d3
        ;   Label: LAB_005259d3
    FLDZ                                ; 005259d6
    FCOMPP                              ; 005259d8
    FNSTSW AX                           ; 005259da
    SAHF                                ; 005259dc
    JNC 0x00525b0b                      ; 005259dd
        ;   XREF to: 00525b0b (CONDITIONAL_JUMP)  ; LAB_00525b0b
    LEA EAX,[EBP + 0x52]                ; 005259e3
    PUSH EAX                            ; 005259e6
    PUSH ESI                            ; 005259e7
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005259e8
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005259ed
    CMP EAX,0x64                        ; 005259f0
    JZ 0x00525ad7                       ; 005259f3
        ;   XREF to: 00525ad7 (CONDITIONAL_JUMP)  ; LAB_00525ad7
    PUSH EAX                            ; 005259f9
    PUSH EBX                            ; 005259fa
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005259fb
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00525a00
    JMP 0x005259d3                      ; 00525a03
        ;   XREF to: 005259d3 (UNCONDITIONAL_JUMP)  ; LAB_005259d3
    LEA EAX,[EBP + 0xfffffeee]          ; 00525a05
        ;   Label: LAB_00525a05
    PUSH EAX                            ; 00525a0b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00525a0c
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV ECX,0x4479f99a                  ; 00525a11
    ADD ESP,0x4                         ; 00525a16
    LEA EAX,[EBP + 0xfffffeee]          ; 00525a19
    MOV dword ptr [EBP + 0xffffff22],EBX ; 00525a1f
    PUSH EAX                            ; 00525a25
    MOV dword ptr [EBP + 0xffffff26],EBX ; 00525a26
    MOV dword ptr [EBP + 0xfffffef2],ECX ; 00525a2c
    PUSH EBX                            ; 00525a32
    MOV EDX,dword ptr [EBX + 0x154]     ; 00525a33
    CALL dword ptr [EDX + 0x11c]        ; 00525a39
    ADD ESP,0x8                         ; 00525a3f
    JMP 0x005258a7                      ; 00525a42
        ;   XREF to: 005258a7 (UNCONDITIONAL_JUMP)  ; LAB_005258a7
    MOV ECX,dword ptr [EBX + 0xbf50]    ; 00525a47
        ;   Label: LAB_00525a47
    PUSH ECX                            ; 00525a4d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00525a4e
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00525a53
    TEST EAX,EAX                        ; 00525a56
    JNZ 0x00525925                      ; 00525a58
        ;   XREF to: 00525925 (CONDITIONAL_JUMP)  ; LAB_00525925
    PUSH 0x639846                       ; 00525a5e | = "mob-scream?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00525a63
    PUSH EBX                            ; 00525a69
    CALL dword ptr [EAX + 0x24]         ; 00525a6a
    ADD ESP,0x8                         ; 00525a6d
    MOV dword ptr [EBX + 0xbf5c],EAX    ; 00525a70
    JMP 0x00525925                      ; 00525a76
        ;   XREF to: 00525925 (UNCONDITIONAL_JUMP)  ; LAB_00525925
    PUSH ESI                            ; 00525a7b
        ;   Label: LAB_00525a7b
    PUSH 0x1                            ; 00525a7c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00525a7e
    PUSH EBX                            ; 00525a84
    CALL dword ptr [EAX + 0x13c]        ; 00525a85
    ADD ESP,0xc                         ; 00525a8b
    JMP 0x00525984                      ; 00525a8e
        ;   XREF to: 00525984 (UNCONDITIONAL_JUMP)  ; LAB_00525984
    PUSH EDI                            ; 00525a93
        ;   Label: LAB_00525a93
    PUSH EDI                            ; 00525a94
    MOV EAX,dword ptr [EBX + 0x154]     ; 00525a95
    PUSH EBX                            ; 00525a9b
    CALL dword ptr [EAX + 0x13c]        ; 00525a9c
    ADD ESP,0xc                         ; 00525aa2
    JMP 0x00525999                      ; 00525aa5
        ;   XREF to: 00525999 (UNCONDITIONAL_JUMP)  ; LAB_00525999
    LEA EAX,[EBX + 0xbeec]              ; 00525aaa
        ;   Label: LAB_00525aaa
    PUSH EAX                            ; 00525ab0
    MOV EDX,dword ptr [0x006793d0]      ; 00525ab1 | g_CEventListPtr
    PUSH EDX                            ; 00525ab7 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00525ab8
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00525abd
    TEST EAX,EAX                        ; 00525ac0
    JZ 0x005259a6                       ; 00525ac2
        ;   XREF to: 005259a6 (CONDITIONAL_JUMP)  ; LAB_005259a6
    MOV dword ptr [EBX + 0xbee8],0x1    ; 00525ac8
    JMP 0x005259a6                      ; 00525ad2
        ;   XREF to: 005259a6 (UNCONDITIONAL_JUMP)  ; LAB_005259a6
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 00525ad7
        ;   Label: LAB_00525ad7
    TEST EDX,EDX                        ; 00525add
    JZ 0x005259d3                       ; 00525adf
        ;   XREF to: 005259d3 (CONDITIONAL_JUMP)  ; LAB_005259d3
    MOV EAX,EDX                         ; 00525ae5
    PUSH 0x3e4ccccd                     ; 00525ae7
    PUSH EAX                            ; 00525aec
    MOV EDX,0x1                         ; 00525aed
    PUSH EDX                            ; 00525af2
    PUSH EBX                            ; 00525af3
    MOV dword ptr [EBX + 0xbec8],0x0    ; 00525af4
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 00525afe
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00525b03
    JMP 0x005259d3                      ; 00525b06
        ;   XREF to: 005259d3 (UNCONDITIONAL_JUMP)  ; LAB_005259d3
    FLD float ptr [EBX + 0xbe24]        ; 00525b0b
        ;   Label: LAB_00525b0b
    FLD float ptr [EBP + 0x92]          ; 00525b11
    FMUL double ptr [0x00639886]        ; 00525b17 | DOUBLE_00639886
    FMULP                               ; 00525b1d
    FLD float ptr [EBX + 0x23b4]        ; 00525b1f
    PUSH ESI                            ; 00525b25
    FSTP float ptr [EBX + 0x2434]       ; 00525b26
    FSTP float ptr [EBX + 0x2438]       ; 00525b2c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00525b32
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00525b37
    PUSH dword ptr [EBP + 0x92]         ; 00525b3a
    PUSH EBX                            ; 00525b40
    MOV EDI,dword ptr [EAX + 0x24]      ; 00525b41
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 00525b44
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00525b49
    TEST EAX,EAX                        ; 00525b4c
    JZ 0x00526776                       ; 00525b4e
        ;   XREF to: 00526776 (CONDITIONAL_JUMP)  ; LAB_00526776
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00525b54
    CMP EAX,0x2                         ; 00525b5a
    JNC 0x00525da1                      ; 00525b5d
        ;   XREF to: 00525da1 (CONDITIONAL_JUMP)  ; LAB_00525da1
    CMP EAX,0x1                         ; 00525b63
    JNZ 0x00525dac                      ; 00525b66
        ;   XREF to: 00525dac (CONDITIONAL_JUMP)  ; LAB_00525dac
    PUSH 0x1                            ; 00525b6c
        ;   Label: LAB_00525b6c
    PUSH 0x1                            ; 00525b6e
    LEA EAX,[EBX + 0x158]               ; 00525b70
        ;   Label: LAB_00525b70
    PUSH EAX                            ; 00525b76
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00525b77
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525b7c
        ;   Label: LAB_00525b7c
    LEA EAX,[EBX + 0x23ac]              ; 00525b7f
    MOV dword ptr [EAX + 0x8],0x0       ; 00525b85
    MOV EDX,dword ptr [EAX + 0x8]       ; 00525b8c
    MOV dword ptr [EAX + 0x4],EDX       ; 00525b8f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00525b92
    MOV dword ptr [EAX],EDX             ; 00525b95
    FLD float ptr [EBX + 0xbe38]        ; 00525b97
        ;   Label: caseD_7
    FLDZ                                ; 00525b9d
    FCOMPP                              ; 00525b9f
    FNSTSW AX                           ; 00525ba1
    SAHF                                ; 00525ba3
    JNC 0x00525bb8                      ; 00525ba4
        ;   XREF to: 00525bb8 (CONDITIONAL_JUMP)  ; LAB_00525bb8
    FLD float ptr [EBX + 0xbe38]        ; 00525ba6
    FSUB float ptr [EBP + 0x92]         ; 00525bac
    FSTP float ptr [EBX + 0xbe38]       ; 00525bb2
    CMP dword ptr [EBX + 0xbee0],0x0    ; 00525bb8
        ;   Label: LAB_00525bb8
    JNZ 0x00526786                      ; 00525bbf
        ;   XREF to: 00526786 (CONDITIONAL_JUMP)  ; LAB_00526786
    PUSH EBX                            ; 00525bc5
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 00525bc6
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00525bcb
    TEST EAX,EAX                        ; 00525bce
    JZ 0x00525cd1                       ; 00525bd0
        ;   XREF to: 00525cd1 (CONDITIONAL_JUMP)  ; LAB_00525cd1
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00525bd6
    TEST EDI,EDI                        ; 00525bdc
    JZ 0x00525c0a                       ; 00525bde
        ;   XREF to: 00525c0a (CONDITIONAL_JUMP)  ; LAB_00525c0a
    PUSH EDI                            ; 00525be0
    MOV EDX,dword ptr [EDI + 0x154]     ; 00525be1
    CALL dword ptr [EDX + 0x108]        ; 00525be7
    ADD ESP,0x4                         ; 00525bed
    CMP EAX,EBX                         ; 00525bf0
    JNZ 0x00525c0a                      ; 00525bf2
        ;   XREF to: 00525c0a (CONDITIONAL_JUMP)  ; LAB_00525c0a
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00525bf4
    PUSH EAX                            ; 00525bfa
    MOV EDX,dword ptr [0x006810c8]      ; 00525bfb | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 00525c01 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00525c02
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00525c07
    FLD float ptr [EBP + 0x92]          ; 00525c0a
        ;   Label: LAB_00525c0a
    FLD ST0                             ; 00525c10
    FMUL double ptr [0x006398a6]        ; 00525c12 | DOUBLE_006398a6
    FLD float ptr [EBX + 0x242c]        ; 00525c18
    FXCH                                ; 00525c1e
    FSUBR ST0,ST1                       ; 00525c20
    LEA ESI,[EBX + 0x2428]              ; 00525c22
    FSTP ST1                            ; 00525c28
    FSTP float ptr [EBX + 0x242c]       ; 00525c2a
    FLD float ptr [ESI]                 ; 00525c30
    FMUL ST1                            ; 00525c32
    FSTP float ptr [EBP + -0x22]        ; 00525c34
    FLD float ptr [ESI + 0x4]           ; 00525c37
    FMUL ST1                            ; 00525c3a
    LEA EAX,[EBX + 0x241c]              ; 00525c3c
    FSTP float ptr [EBP + -0x1e]        ; 00525c42
    FMUL float ptr [ESI + 0x8]          ; 00525c45
    LEA EDX,[EBX + 0x23ac]              ; 00525c48
    FLD float ptr [EBP + -0x22]         ; 00525c4e
    FXCH                                ; 00525c51
    FSTP float ptr [EBP + -0x1a]        ; 00525c53
    FADD float ptr [EAX]                ; 00525c56
    FLD float ptr [EBP + -0x1e]         ; 00525c58
    FXCH                                ; 00525c5b
    FSTP float ptr [EBP + 0xffffff66]   ; 00525c5d
    FADD float ptr [EAX + 0x4]          ; 00525c63
    FLD float ptr [EBP + -0x1a]         ; 00525c66
    FXCH                                ; 00525c69
    FSTP float ptr [EBP + 0xffffff6a]   ; 00525c6b
    FADD float ptr [EAX + 0x8]          ; 00525c71 | DAT_00002424
    FLD float ptr [EBP + 0xffffff66]    ; 00525c74
    FXCH                                ; 00525c7a
    FSTP float ptr [EBP + 0xffffff6e]   ; 00525c7c
    FADD float ptr [EDX]                ; 00525c82
    FLD float ptr [EBP + 0xffffff6a]    ; 00525c84
    FXCH                                ; 00525c8a
    FSTP float ptr [EBP + 0xe]          ; 00525c8c
    FADD float ptr [EDX + 0x4]          ; 00525c8f
    FLD float ptr [EBP + 0xffffff6e]    ; 00525c92
    FXCH                                ; 00525c98
    FSTP float ptr [EBP + 0x12]         ; 00525c9a
    FADD float ptr [EDX + 0x8]          ; 00525c9d
    FSTP float ptr [EBP + 0x16]         ; 00525ca0
    MOV dword ptr [EAX + 0x8],0x0       ; 00525ca3 | DAT_00002424
    MOV ECX,dword ptr [EAX + 0x8]       ; 00525caa | DAT_00002424
    MOV dword ptr [EAX + 0x4],ECX       ; 00525cad
    MOV ECX,dword ptr [EAX + 0x4]       ; 00525cb0
    MOV dword ptr [EAX],ECX             ; 00525cb3
    MOV dword ptr [EDX + 0x8],0x0       ; 00525cb5
    LEA EAX,[EBP + 0xe]                 ; 00525cbc
    FLD float ptr [EDX + 0x8]           ; 00525cbf
    PUSH EAX                            ; 00525cc2
    FST float ptr [EDX + 0x4]           ; 00525cc3
    PUSH EBX                            ; 00525cc6
    FSTP float ptr [EDX]                ; 00525cc7
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 00525cc9
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00525cce
    MOV ECX,dword ptr [0x03f95d78]      ; 00525cd1 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00525cd1
    PUSH ECX                            ; 00525cd7
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 00525cd8
    PUSH ESI                            ; 00525cde
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00525cdf
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00525ce4
    TEST EAX,EAX                        ; 00525ce7
    JZ 0x00525cfe                       ; 00525ce9
        ;   XREF to: 00525cfe (CONDITIONAL_JUMP)  ; LAB_00525cfe
    PUSH dword ptr [EBP + 0x92]         ; 00525ceb
    MOV EDX,dword ptr [EAX + 0x154]     ; 00525cf1
    PUSH EAX                            ; 00525cf7
    CALL dword ptr [EDX + 0x4]          ; 00525cf8
    ADD ESP,0x8                         ; 00525cfb
    MOV EDI,dword ptr [0x03f95d78]      ; 00525cfe | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00525cfe
    PUSH EDI                            ; 00525d04
    MOV EAX,dword ptr [EBX + 0x24b4]    ; 00525d05
    PUSH EAX                            ; 00525d0b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00525d0c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00525d11
    TEST EAX,EAX                        ; 00525d14
    JZ 0x00525d2b                       ; 00525d16
        ;   XREF to: 00525d2b (CONDITIONAL_JUMP)  ; LAB_00525d2b
    PUSH dword ptr [EBP + 0x92]         ; 00525d18
    MOV EDX,dword ptr [EAX + 0x154]     ; 00525d1e
    PUSH EAX                            ; 00525d24
    CALL dword ptr [EDX + 0x4]          ; 00525d25
    ADD ESP,0x8                         ; 00525d28
    PUSH EBX                            ; 00525d2b
        ;   Label: LAB_00525d2b
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00525d2c
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00525d31
    LEA EAX,[EBX + 0x158]               ; 00525d34
    PUSH EAX                            ; 00525d3a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00525d3b
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00525d40
    MOV EAX,dword ptr [EBX + 0x154]     ; 00525d43
    PUSH EBX                            ; 00525d49
    CALL dword ptr [EAX + 0x120]        ; 00525d4a
    ADD ESP,0x4                         ; 00525d50
    TEST EAX,EAX                        ; 00525d53
    JNZ 0x00525d66                      ; 00525d55
        ;   XREF to: 00525d66 (CONDITIONAL_JUMP)  ; LAB_00525d66
    PUSH dword ptr [EBP + 0x92]         ; 00525d57
    PUSH EBX                            ; 00525d5d
    CALL core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 ; 00525d5e
        ;   XREF to: 005267a0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0(CMobster * this_ptr)
    ADD ESP,0x8                         ; 00525d63
    PUSH dword ptr [EBP + 0x92]         ; 00525d66
        ;   Label: LAB_00525d66
    PUSH EBX                            ; 00525d6c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00525d6d
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00525d72
    LEA ESP,[EBP + 0x7a]                ; 00525d75
    POP EBP                             ; 00525d78
    POP EDI                             ; 00525d79
    POP ESI                             ; 00525d7a
    POP EBX                             ; 00525d7b
    RET                                 ; 00525d7c
    PUSH 0x1                            ; 00525d7d
        ;   Label: LAB_00525d7d
    PUSH 0x0                            ; 00525d7f
    PUSH ESI                            ; 00525d81
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00525d82
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525d87
    PUSH EBX                            ; 00525d8a
    PUSH 0x639856                       ; 00525d8b | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 00525d90 | g_CConsolePtr
    PUSH ECX                            ; 00525d96 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00525d97
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x00525b7c                      ; 00525d9c
        ;   XREF to: 00525b7c (UNCONDITIONAL_JUMP)  ; LAB_00525b7c
    JBE 0x00525b6c                      ; 00525da1
        ;   XREF to: 00525b6c (CONDITIONAL_JUMP)  ; LAB_00525b6c
        ;   Label: LAB_00525da1
    CMP EAX,0x3                         ; 00525da7
    JZ 0x00525d7d                       ; 00525daa
        ;   XREF to: 00525d7d (CONDITIONAL_JUMP)  ; LAB_00525d7d
    PUSH 0x1                            ; 00525dac
        ;   Label: LAB_00525dac
    PUSH 0x0                            ; 00525dae
    JMP 0x00525b70                      ; 00525db0
        ;   XREF to: 00525b70 (UNCONDITIONAL_JUMP)  ; LAB_00525b70
    LEA EAX,[EBP + 0xffffff2a]          ; 00525db5
        ;   Label: caseD_9
    PUSH EAX                            ; 00525dbb
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00525dbc
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00525dc1
    PUSH 0x41700000                     ; 00525dc4
    PUSH 0x40e00000                     ; 00525dc9
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00525dce
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00525dd3
    MOV dword ptr [EBP + 0xffffff5e],EBX ; 00525dd6
    MOV dword ptr [EBP + 0xffffff62],EBX ; 00525ddc
    MOV EAX,dword ptr [EBP + 0x76]      ; 00525de2
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 00525de5
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 00525deb
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00525df1
    ADD ESP,0x8                         ; 00525df8
    TEST ESI,ESI                        ; 00525dfb
    JZ 0x00525e54                       ; 00525dfd
        ;   XREF to: 00525e54 (CONDITIONAL_JUMP)  ; LAB_00525e54
    LEA EAX,[EBP + 0xffffff2a]          ; 00525dff
    MOV EDX,dword ptr [0x02f37ecc]      ; 00525e05 | INT_02f37ecc
    PUSH EAX                            ; 00525e0b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00525e0c
    SUB EAX,EDX                         ; 00525e13
    MOV EDX,EAX                         ; 00525e15
    SHL EDX,0x4                         ; 00525e17
    LEA EAX,[EBX + 0xfd8]               ; 00525e1a
    ADD EAX,EDX                         ; 00525e20
    PUSH 0x3ecccccd                     ; 00525e22
    PUSH EAX                            ; 00525e27
    PUSH 0x3f87558                      ; 00525e28 | g_ZeroVector
    LEA EAX,[EBP + 0xffffff72]          ; 00525e2d
    PUSH EAX                            ; 00525e33
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00525e34
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00525e39
    PUSH EAX                            ; 00525e3c
    LEA EAX,[EBP + -0x76]               ; 00525e3d
    PUSH EAX                            ; 00525e40
    PUSH EBX                            ; 00525e41
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00525e42
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00525e47
    PUSH EAX                            ; 00525e4a
    PUSH EBX                            ; 00525e4b
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00525e4c
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00525e51
    PUSH 0x41700000                     ; 00525e54
        ;   Label: LAB_00525e54
    PUSH 0x40e00000                     ; 00525e59
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00525e5e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00525e63
    MOV EAX,dword ptr [EBP + 0x76]      ; 00525e66
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 00525e69
    MOV EAX,dword ptr [EBX + 0xbf6c]    ; 00525e6f
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00525e75
    ADD ESP,0x8                         ; 00525e7c
    TEST EDI,EDI                        ; 00525e7f
    JZ 0x00525b97                       ; 00525e81
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + 0xffffff2a]          ; 00525e87
    MOV EDX,dword ptr [0x02f37ed0]      ; 00525e8d | INT_02f37ed0
    PUSH EAX                            ; 00525e93
    LEA EAX,[EDX*0x4 + 0x0]             ; 00525e94
    SUB EAX,EDX                         ; 00525e9b
    MOV EDX,EAX                         ; 00525e9d
    SHL EDX,0x4                         ; 00525e9f
    LEA EAX,[EBX + 0xfd8]               ; 00525ea2
    ADD EAX,EDX                         ; 00525ea8
    PUSH 0x3ecccccd                     ; 00525eaa
    PUSH EAX                            ; 00525eaf
    PUSH 0x3f87558                      ; 00525eb0 | g_ZeroVector
    LEA EAX,[EBP + -0xa]                ; 00525eb5
    PUSH EAX                            ; 00525eb8
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00525eb9
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00525ebe
    PUSH EAX                            ; 00525ec1
    LEA EAX,[EBP + -0x52]               ; 00525ec2
    PUSH EAX                            ; 00525ec5
    PUSH EBX                            ; 00525ec6
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00525ec7
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00525ecc
    PUSH EAX                            ; 00525ecf
    PUSH EBX                            ; 00525ed0
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00525ed1
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00525ed6
    JMP 0x00525b97                      ; 00525ed9
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbed4]        ; 00525ede
        ;   Label: caseD_b
    FLDZ                                ; 00525ee4
    FCOMPP                              ; 00525ee6
    FNSTSW AX                           ; 00525ee8
    SAHF                                ; 00525eea
    JC 0x00525b97                       ; 00525eeb
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 00525ef1
    CALL core_mobster.cpp_CMobster_FUN_005271c0 ; 00525ef2
        ;   XREF to: 005271c0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_005271c0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 00525ef7
    JMP 0x00525b97                      ; 00525efa
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00525eff
        ;   Label: caseD_6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00525f05
    PUSH EBX                            ; 00525f0b
    CALL dword ptr [EAX + 0x158]        ; 00525f0c
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 00525f12
    ADD ESP,0x8                         ; 00525f18
    TEST ESI,ESI                        ; 00525f1b
    JNZ 0x00525f97                      ; 00525f1d
        ;   XREF to: 00525f97 (CONDITIONAL_JUMP)  ; LAB_00525f97
    FLD float ptr [EBX + 0xbf8c]        ; 00525f1f
        ;   Label: LAB_00525f1f
    FCOMP double ptr [0x0063988e]       ; 00525f25 | DOUBLE_0063988e
    FNSTSW AX                           ; 00525f2b
    SAHF                                ; 00525f2d
    JNC 0x00526086                      ; 00525f2e
        ;   XREF to: 00526086 (CONDITIONAL_JUMP)  ; LAB_00526086
    CMP dword ptr [EBX + 0xbee8],0x0    ; 00525f34
        ;   Label: LAB_00525f34
    JZ 0x0052609e                       ; 00525f3b
        ;   XREF to: 0052609e (CONDITIONAL_JUMP)  ; LAB_0052609e
    PUSH 0x40a00000                     ; 00525f41
    PUSH 0x40800000                     ; 00525f46
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00525f4b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   Label: LAB_00525f4b
    MOV dword ptr [EBP + 0x76],EAX      ; 00525f50
    ADD ESP,0x8                         ; 00525f53
    MOV EAX,dword ptr [EBP + 0x76]      ; 00525f56
    MOV dword ptr [EBX + 0xbf90],EAX    ; 00525f59
    PUSH 0x1                            ; 00525f5f
    PUSH 0x0                            ; 00525f61
    LEA EAX,[EBX + 0x158]               ; 00525f63
    PUSH EAX                            ; 00525f69
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00525f6a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00525f6f
    PUSH 0x3e99999a                     ; 00525f72
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00525f77
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00525f7c
    TEST EAX,EAX                        ; 00525f7f
    JZ 0x00525b97                       ; 00525f81
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3                            ; 00525f87
    PUSH EBX                            ; 00525f89
    CALL core_mobster.cpp_CMobster_FUN_005279f0 ; 00525f8a
        ;   XREF to: 005279f0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_005279f0(CMobster * this_ptr)
    ADD ESP,0x8                         ; 00525f8f
    JMP 0x00525b97                      ; 00525f92
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [0x03f95d78]      ; 00525f97 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00525f97
    PUSH EDI                            ; 00525f9d
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 00525f9e
    PUSH EAX                            ; 00525fa4
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00525fa5
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00525faa
    ADD ESP,0x8                         ; 00525fac
    MOV EDI,EAX                         ; 00525faf
    TEST EAX,EAX                        ; 00525fb1
    JZ 0x00526004                       ; 00525fb3
        ;   XREF to: 00526004 (CONDITIONAL_JUMP)  ; LAB_00526004
    MOV EDX,dword ptr [0x006810c8]      ; 00525fb5 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 00525fbb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 00525fbc
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,dword ptr [ESI + 0x568]     ; 00525fc1
    ADD ESP,0x4                         ; 00525fc7
    MOV dword ptr [EBP + 0x56],EAX      ; 00525fca
    PUSH ESI                            ; 00525fcd
    MOV EAX,dword ptr [ESI + 0x154]     ; 00525fce
    MOV dword ptr [ESI + 0x568],0x64    ; 00525fd4
    CALL dword ptr [EAX + 0xfc]         ; 00525fde
    ADD ESP,0x4                         ; 00525fe4
    TEST EAX,EAX                        ; 00525fe7
    JZ 0x00525ffb                       ; 00525fe9
        ;   XREF to: 00525ffb (CONDITIONAL_JUMP)  ; LAB_00525ffb
    PUSH ESI                            ; 00525feb
    MOV EAX,dword ptr [ESI + 0x154]     ; 00525fec
    CALL dword ptr [EAX + 0xf8]         ; 00525ff2
    ADD ESP,0x4                         ; 00525ff8
    MOV EAX,dword ptr [EBP + 0x56]      ; 00525ffb
        ;   Label: LAB_00525ffb
    MOV dword ptr [EDI + 0x568],EAX     ; 00525ffe
    MOV ECX,dword ptr [0x03f95d78]      ; 00526004 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00526004
    PUSH ECX                            ; 0052600a
    MOV ESI,dword ptr [EBX + 0x24b4]    ; 0052600b
    PUSH ESI                            ; 00526011
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00526012
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00526017
    ADD ESP,0x8                         ; 00526019
    MOV dword ptr [EBP + 0x5e],EAX      ; 0052601c
    TEST EAX,EAX                        ; 0052601f
    JZ 0x00525f1f                       ; 00526021
        ;   XREF to: 00525f1f (CONDITIONAL_JUMP)  ; LAB_00525f1f
    MOV EDI,dword ptr [0x006810c8]      ; 00526027 | g_CDemonSetPtr
    PUSH EDI                            ; 0052602d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0052602e
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00526033
    MOV EAX,dword ptr [ESI + 0x154]     ; 00526036
    PUSH ESI                            ; 0052603c
    MOV EDI,dword ptr [ESI + 0x568]     ; 0052603d
    MOV dword ptr [ESI + 0x568],0x64    ; 00526043
    CALL dword ptr [EAX + 0xfc]         ; 0052604d
    ADD ESP,0x4                         ; 00526053
    TEST EAX,EAX                        ; 00526056
    JNZ 0x00526068                      ; 00526058
        ;   XREF to: 00526068 (CONDITIONAL_JUMP)  ; LAB_00526068
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0052605a
    MOV dword ptr [EAX + 0x568],EDI     ; 0052605d
    JMP 0x00525f1f                      ; 00526063
        ;   XREF to: 00525f1f (UNCONDITIONAL_JUMP)  ; LAB_00525f1f
    PUSH ESI                            ; 00526068
        ;   Label: LAB_00526068
    MOV EAX,dword ptr [ESI + 0x154]     ; 00526069
    CALL dword ptr [EAX + 0xf8]         ; 0052606f
    ADD ESP,0x4                         ; 00526075
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00526078
    MOV dword ptr [EAX + 0x568],EDI     ; 0052607b
    JMP 0x00525f1f                      ; 00526081
        ;   XREF to: 00525f1f (UNCONDITIONAL_JUMP)  ; LAB_00525f1f
    FLD float ptr [EBX + 0xbf90]        ; 00526086
        ;   Label: LAB_00526086
    FLDZ                                ; 0052608c
    FCOMPP                              ; 0052608e
    FNSTSW AX                           ; 00526090
    SAHF                                ; 00526092
    JNC 0x00525f34                      ; 00526093
        ;   XREF to: 00525f34 (CONDITIONAL_JUMP)  ; LAB_00525f34
    JMP 0x00525b97                      ; 00526099
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x40800000                     ; 0052609e
        ;   Label: LAB_0052609e
    PUSH 0x40000000                     ; 005260a3
    JMP 0x00525f4b                      ; 005260a8
        ;   XREF to: 00525f4b (UNCONDITIONAL_JUMP)  ; LAB_00525f4b
    MOV EAX,dword ptr [EBX + 0xbe28]    ; 005260ad
        ;   Label: caseD_5
    TEST EAX,EAX                        ; 005260b3
    JNZ 0x00525b97                      ; 005260b5
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 005260bb
    JNZ 0x00525b97                      ; 005260c2
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EAX                            ; 005260c8
    LEA EAX,[EBP + 0x3e]                ; 005260c9
    PUSH EAX                            ; 005260cc
    PUSH ESI                            ; 005260cd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005260ce
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005260d3
    PUSH EAX                            ; 005260d6
    LEA EAX,[EBP + -0x3a]               ; 005260d7
    PUSH EAX                            ; 005260da
    PUSH EBX                            ; 005260db
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005260dc
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005260e1
    PUSH 0x0                            ; 005260e4
    LEA EAX,[EBP + -0x3a]               ; 005260e6
    PUSH EAX                            ; 005260e9
    MOV ECX,dword ptr [0x0067b9a0]      ; 005260ea | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 005260f0 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004ede30     ; 005260f1
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ede30()
    ADD ESP,0xc                         ; 005260f6
    MOV dword ptr [EBX + 0xbe28],0x1    ; 005260f9
    JMP 0x00525b97                      ; 00526103
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xbee8],0x0    ; 00526108
        ;   Label: caseD_0
    JZ 0x00526146                       ; 0052610f
        ;   XREF to: 00526146 (CONDITIONAL_JUMP)  ; LAB_00526146
    MOV EAX,[0x02db87d0]                ; 00526111 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00526116 | g_HeroActors
    FLD float ptr [EBX + 0xbf8c]        ; 0052611d
    MOV dword ptr [EBX + 0xbe3c],EAX    ; 00526123
    FCOMP double ptr [0x0063988e]       ; 00526129 | DOUBLE_0063988e
    FNSTSW AX                           ; 0052612f
    SAHF                                ; 00526131
    JBE 0x00525b97                      ; 00526132
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 00526138
        ;   Label: LAB_00526138
    CALL core_mobster.cpp_CMobster_FUN_005271c0 ; 00526139
        ;   XREF to: 005271c0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_005271c0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0052613e
    JMP 0x00525b97                      ; 00526141
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00526146
        ;   Label: LAB_00526146
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052614c
    PUSH EBX                            ; 00526152
    CALL dword ptr [EAX + 0x158]        ; 00526153
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 00526159
    ADD ESP,0x8                         ; 0052615f
    TEST EDX,EDX                        ; 00526162
    JZ 0x00526201                       ; 00526164
        ;   XREF to: 00526201 (CONDITIONAL_JUMP)  ; LAB_00526201
    MOV ECX,dword ptr [EBX + 0xbedc]    ; 0052616a
    TEST ECX,ECX                        ; 00526170
    JZ 0x005261bc                       ; 00526172
        ;   XREF to: 005261bc (CONDITIONAL_JUMP)  ; LAB_005261bc
    CMP dword ptr [EBX + 0xbed8],0x0    ; 00526174
    JNZ 0x00526246                      ; 0052617b
        ;   XREF to: 00526246 (CONDITIONAL_JUMP)  ; LAB_00526246
    LEA EDX,[EBX + 0x20]                ; 00526181
    FLD float ptr [EDX]                 ; 00526184
    FSUB float ptr [ECX + 0x20]         ; 00526186
    FSTP float ptr [EBP + -0x46]        ; 00526189
    FLD float ptr [EDX + 0x4]           ; 0052618c
    FSUB float ptr [ECX + 0x24]         ; 0052618f
    FST float ptr [EBP + -0x42]         ; 00526192
    FMUL float ptr [EBP + -0x42]        ; 00526195
    FLD float ptr [EBP + -0x46]         ; 00526198
    FMUL ST0                            ; 0052619b
    FLD float ptr [EDX + 0x8]           ; 0052619d
    FSUB float ptr [ECX + 0x28]         ; 005261a0
    FXCH                                ; 005261a3
    FADDP ST2,ST0                       ; 005261a5
    FST float ptr [EBP + -0x3e]         ; 005261a7
    FMUL float ptr [EBP + -0x3e]        ; 005261aa
    FADDP                               ; 005261ad
    FSQRT                               ; 005261af
    FCOMP double ptr [0x0063989e]       ; 005261b1 | DOUBLE_0063989e
    FNSTSW AX                           ; 005261b7
    SAHF                                ; 005261b9
    JA 0x0052622a                       ; 005261ba
        ;   XREF to: 0052622a (CONDITIONAL_JUMP)  ; LAB_0052622a
    CMP dword ptr [EBX + 0xbee0],0x0    ; 005261bc
        ;   Label: LAB_005261bc
    JZ 0x00526255                       ; 005261c3
        ;   XREF to: 00526255 (CONDITIONAL_JUMP)  ; LAB_00526255
    FLD float ptr [EBX + 0xbf8c]        ; 005261c9
    FCOMP double ptr [0x0063988e]       ; 005261cf | DOUBLE_0063988e
    FNSTSW AX                           ; 005261d5
    SAHF                                ; 005261d7
    JBE 0x00525b97                      ; 005261d8
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e800000                     ; 005261de
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005261e3
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005261e8
    TEST EAX,EAX                        ; 005261eb
    JZ 0x00526138                       ; 005261ed
        ;   XREF to: 00526138 (CONDITIONAL_JUMP)  ; LAB_00526138
    PUSH EBX                            ; 005261f3
    CALL core_mobster.cpp_CMobster_FUN_00525720 ; 005261f4
        ;   XREF to: 00525720 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_00525720(CMobster * this_ptr)
    ADD ESP,0x4                         ; 005261f9
    JMP 0x00525b97                      ; 005261fc
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00526201
        ;   Label: LAB_00526201
    PUSH EBX                            ; 00526207
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00526208
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 0052620d
    TEST EAX,EAX                        ; 00526210
    JZ 0x00525b97                       ; 00526212
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00526218
    PUSH 0x1                            ; 0052621a
    PUSH ESI                            ; 0052621c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052621d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526222
    JMP 0x00525b97                      ; 00526225
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0052622a
        ;   Label: LAB_0052622a
    PUSH 0x8                            ; 0052622c
    PUSH ESI                            ; 0052622e
    MOV dword ptr [EBX + 0xbed8],0x1    ; 0052622f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526239
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052623e
    JMP 0x00525b97                      ; 00526241
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0xbed8],0x0    ; 00526246
        ;   Label: LAB_00526246
    JMP 0x005261bc                      ; 00526250
        ;   XREF to: 005261bc (UNCONDITIONAL_JUMP)  ; LAB_005261bc
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 00526255
        ;   Label: LAB_00526255
    LEA EAX,[EBX + 0x20]                ; 0052625b
    FLD float ptr [EDX + 0x20]          ; 0052625e
    FSUB float ptr [EAX]                ; 00526261
    FSTP float ptr [EBP + 0xffffff7e]   ; 00526263
    FLD float ptr [EDX + 0x24]          ; 00526269
    FSUB float ptr [EAX + 0x4]          ; 0052626c
    FST float ptr [EBP + -0x7e]         ; 0052626f
    FMUL float ptr [EBP + -0x7e]        ; 00526272
    FLD float ptr [EBP + 0xffffff7e]    ; 00526275
    FMUL ST0                            ; 0052627b
    FLD float ptr [EDX + 0x28]          ; 0052627d
    FSUB float ptr [EAX + 0x8]          ; 00526280
    FXCH                                ; 00526283
    FADDP ST2,ST0                       ; 00526285
    FST float ptr [EBP + -0x7a]         ; 00526287
    FMUL float ptr [EBP + -0x7a]        ; 0052628a
    FADDP                               ; 0052628d
    FSQRT                               ; 0052628f
    FLD float ptr [0x00661778]          ; 00526291 | FLOAT_00661778
    FLD1                                ; 00526297
    FADDP                               ; 00526299
    FXCH                                ; 0052629b
    FSTP float ptr [EBP + 0x72]         ; 0052629d
    MOV EAX,dword ptr [EBP + 0x72]      ; 005262a0
    FLD float ptr [EBP + 0x72]          ; 005262a3
    MOV dword ptr [EBP + 0x6a],EAX      ; 005262a6
    FCOMPP                              ; 005262a9
    FNSTSW AX                           ; 005262ab
    SAHF                                ; 005262ad
    JNC 0x00526316                      ; 005262ae
        ;   XREF to: 00526316 (CONDITIONAL_JUMP)  ; LAB_00526316
    LEA EAX,[EBP + 0xffffff7e]          ; 005262b0
    PUSH EAX                            ; 005262b6
    LEA EAX,[EBP + 0x1a]                ; 005262b7
    PUSH EAX                            ; 005262ba
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005262bb
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x1e]          ; 005262c0
    ADD ESP,0x8                         ; 005262c3
    FSUB float ptr [EBX + 0x34]         ; 005262c6
    SUB ESP,0x4                         ; 005262c9
    FSTP float ptr [ESP]                ; 005262cc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005262cf
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 005262d4
    FLD float ptr [EBP + 0x76]          ; 005262d7
    FABS                                ; 005262da
    ADD ESP,0x4                         ; 005262dc
    FCOMP double ptr [0x00639896]       ; 005262df | DOUBLE_00639896
    FNSTSW AX                           ; 005262e5
    SAHF                                ; 005262e7
    JNC 0x00526316                      ; 005262e8
        ;   XREF to: 00526316 (CONDITIONAL_JUMP)  ; LAB_00526316
    FLD float ptr [EBX + 0xbe38]        ; 005262ea
    FLDZ                                ; 005262f0
    FCOMPP                              ; 005262f2
    FNSTSW AX                           ; 005262f4
    SAHF                                ; 005262f6
    JC 0x00526316                       ; 005262f7
        ;   XREF to: 00526316 (CONDITIONAL_JUMP)  ; LAB_00526316
    PUSH 0x1                            ; 005262f9
    PUSH 0x9                            ; 005262fb
    LEA EAX,[EBX + 0x158]               ; 005262fd
    PUSH EAX                            ; 00526303
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526304
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526309
    MOV dword ptr [EBX + 0xbe38],0x40000000 ; 0052630c
    FLD float ptr [EBP + 0x6a]          ; 00526316
        ;   Label: LAB_00526316
    FCOMP float ptr [EBX + 0xbe34]      ; 00526319
    FNSTSW AX                           ; 0052631f
    SAHF                                ; 00526321
    JNC 0x00526345                      ; 00526322
        ;   XREF to: 00526345 (CONDITIONAL_JUMP)  ; LAB_00526345
    FLD float ptr [EBP + 0x6a]          ; 00526324
    LEA EDX,[EBX + 0x158]               ; 00526327
    FCOMP float ptr [0x00661788]        ; 0052632d | FLOAT_00661788
    FNSTSW AX                           ; 00526333
    SAHF                                ; 00526335
    JNC 0x0052635d                      ; 00526336
        ;   XREF to: 0052635d (CONDITIONAL_JUMP)  ; LAB_0052635d
    PUSH 0x1                            ; 00526338
    PUSH 0x1                            ; 0052633a
    PUSH EDX                            ; 0052633c
        ;   Label: LAB_0052633c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052633d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526342
    CMP dword ptr [EBX + 0xbecc],0x0    ; 00526345
        ;   Label: LAB_00526345
    JZ 0x00526363                       ; 0052634c
        ;   XREF to: 00526363 (CONDITIONAL_JUMP)  ; LAB_00526363
    MOV dword ptr [EBX + 0xbecc],0x1    ; 0052634e
        ;   Label: LAB_0052634e
    JMP 0x00525b97                      ; 00526358
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0052635d
        ;   Label: LAB_0052635d
    PUSH 0x8                            ; 0052635f
    JMP 0x0052633c                      ; 00526361
        ;   XREF to: 0052633c (UNCONDITIONAL_JUMP)  ; LAB_0052633c
    PUSH 0x3f333333                     ; 00526363
        ;   Label: LAB_00526363
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00526368
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0052636d
    TEST EAX,EAX                        ; 00526370
    JZ 0x0052634e                       ; 00526372
        ;   XREF to: 0052634e (CONDITIONAL_JUMP)  ; LAB_0052634e
    PUSH 0x1                            ; 00526374
    PUSH EBX                            ; 00526376
    CALL core_mobster.cpp_CMobster_FUN_005279f0 ; 00526377
        ;   XREF to: 005279f0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_005279f0(CMobster * this_ptr)
    ADD ESP,0x8                         ; 0052637c
    MOV dword ptr [EBX + 0xbecc],0x1    ; 0052637f
    JMP 0x00525b97                      ; 00526389
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0052638e
        ;   Label: caseD_8
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526394
    PUSH EBX                            ; 0052639a
    CALL dword ptr [EAX + 0x158]        ; 0052639b
    ADD ESP,0x8                         ; 005263a1
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005263a4
    LEA ESI,[EBX + 0x158]               ; 005263aa
    TEST EDX,EDX                        ; 005263b0
    JZ 0x0052644b                       ; 005263b2
        ;   XREF to: 0052644b (CONDITIONAL_JUMP)  ; LAB_0052644b
    CMP dword ptr [EBX + 0xbed8],0x0    ; 005263b8
    JZ 0x00526493                       ; 005263bf
        ;   XREF to: 00526493 (CONDITIONAL_JUMP)  ; LAB_00526493
    PUSH 0x3e32b8c2                     ; 005263c5
    LEA EAX,[EBX + 0x23ac]              ; 005263ca
    PUSH 0x3f000000                     ; 005263d0
    MOV dword ptr [EAX + 0x8],0x0       ; 005263d5
    XOR ECX,ECX                         ; 005263dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005263de
    MOV dword ptr [EAX + 0x4],EDX       ; 005263e1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005263e4
    MOV dword ptr [EAX],EDX             ; 005263e7
    MOV EAX,[0x00661778]                ; 005263e9 | FLOAT_00661778
    MOV dword ptr [EBP + 0x2],ECX       ; 005263ee
    MOV dword ptr [EBP + 0xa],EAX       ; 005263f1
    LEA EAX,[EBP + 0x2]                 ; 005263f4
    MOV dword ptr [EBP + 0x6],ECX       ; 005263f7
    PUSH EAX                            ; 005263fa
    MOV EAX,dword ptr [EBX + 0xbedc]    ; 005263fb
    PUSH EAX                            ; 00526401
    MOV EDX,dword ptr [EAX + 0x154]     ; 00526402
    CALL dword ptr [EDX + 0xbc]         ; 00526408
    ADD ESP,0x4                         ; 0052640e
    PUSH EAX                            ; 00526411
    MOV EAX,dword ptr [EBX + 0xbedc]    ; 00526412
    ADD EAX,0x20                        ; 00526418
    PUSH EAX                            ; 0052641b
    PUSH EBX                            ; 0052641c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0052641d
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 00526422
    TEST EAX,EAX                        ; 00526425
    JG 0x00526481                       ; 00526427
        ;   XREF to: 00526481 (CONDITIONAL_JUMP)  ; LAB_00526481
    JGE 0x00525b97                      ; 00526429
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0052642f
    PUSH 0x0                            ; 00526431
    PUSH ESI                            ; 00526433
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526434
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526439
    MOV dword ptr [EBX + 0xbedc],0x0    ; 0052643c
    JMP 0x00525b97                      ; 00526446
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0052644b
        ;   Label: LAB_0052644b
    PUSH EBX                            ; 00526451
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00526452
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00526457
    TEST EAX,EAX                        ; 0052645a
    JZ 0x00526470                       ; 0052645c
        ;   XREF to: 00526470 (CONDITIONAL_JUMP)  ; LAB_00526470
    PUSH 0x1                            ; 0052645e
    PUSH 0x1                            ; 00526460
    PUSH ESI                            ; 00526462
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526463
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526468
    JMP 0x00525b97                      ; 0052646b
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00526470
        ;   Label: LAB_00526470
    PUSH EAX                            ; 00526472
    PUSH ESI                            ; 00526473
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526474
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526479
    JMP 0x00525b97                      ; 0052647c
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00526481
        ;   Label: LAB_00526481
    PUSH 0x0                            ; 00526483
    PUSH ESI                            ; 00526485
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526486
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052648b
    JMP 0x00525b97                      ; 0052648e
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00526493
        ;   Label: LAB_00526493
    PUSH EBX                            ; 00526499
    CALL core_mobster.cpp_CMobster_FUN_00526d90 ; 0052649a
        ;   XREF to: 00526d90 (UNCONDITIONAL_CALL)  ; int core_mobster.cpp_CMobster_FUN_00526d90(CMobster * this_ptr)
    ADD ESP,0x8                         ; 0052649f
    TEST EAX,EAX                        ; 005264a2
    JNZ 0x00525b97                      ; 005264a4
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [0x00661778]          ; 005264aa | FLOAT_00661778
    FLD1                                ; 005264b0
    FADDP                               ; 005264b2
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 005264b4
    FSTP float ptr [EBP + 0x66]         ; 005264ba
    TEST ESI,ESI                        ; 005264bd
    JZ 0x005264c9                       ; 005264bf
        ;   XREF to: 005264c9 (CONDITIONAL_JUMP)  ; LAB_005264c9
    MOV EAX,[0x0066177c]                ; 005264c1 | FLOAT_0066177c
    MOV dword ptr [EBP + 0x66],EAX      ; 005264c6
    PUSH 0x3e32b8c2                     ; 005264c9
        ;   Label: LAB_005264c9
    LEA EAX,[EBX + 0x23ac]              ; 005264ce
    PUSH 0x3f000000                     ; 005264d4
    MOV dword ptr [EAX + 0x8],0x0       ; 005264d9
    XOR EDI,EDI                         ; 005264e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005264e2
    MOV dword ptr [EAX + 0x4],EDX       ; 005264e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 005264e8
    MOV dword ptr [EAX],EDX             ; 005264eb
    MOV EAX,[0x00661778]                ; 005264ed | FLOAT_00661778
    MOV dword ptr [EBP + -0x16],EDI     ; 005264f2
    MOV dword ptr [EBP + 0x62],EAX      ; 005264f5
    MOV dword ptr [EBP + -0xe],EAX      ; 005264f8
    LEA EAX,[EBP + -0x16]               ; 005264fb
    MOV dword ptr [EBP + -0x12],EDI     ; 005264fe
    PUSH EAX                            ; 00526501
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00526502
    PUSH EAX                            ; 00526508
    MOV EDX,dword ptr [EAX + 0x154]     ; 00526509
    CALL dword ptr [EDX + 0xbc]         ; 0052650f
    ADD ESP,0x4                         ; 00526515
    PUSH EAX                            ; 00526518
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00526519
    ADD EAX,0x20                        ; 0052651f
    PUSH EAX                            ; 00526522
    PUSH EBX                            ; 00526523
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00526524
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 00526529
    TEST EAX,EAX                        ; 0052652c
    JL 0x00525b97                       ; 0052652e
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    LEA EDX,[EBX + 0x20]                ; 00526534
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00526537
    FLD float ptr [EDX]                 ; 0052653d
    FSUB float ptr [EAX + 0x20]         ; 0052653f
    FSTP float ptr [EBP + 0x26]         ; 00526542
    FLD float ptr [EDX + 0x4]           ; 00526545
    FSUB float ptr [EAX + 0x24]         ; 00526548
    FLD float ptr [EBP + 0x26]          ; 0052654b
    FXCH                                ; 0052654e
    FSTP float ptr [EBP + 0x2a]         ; 00526550
    FLD float ptr [EDX + 0x8]           ; 00526553
    FSUB float ptr [EAX + 0x28]         ; 00526556
    FXCH                                ; 00526559
    FMUL float ptr [EBP + 0x26]         ; 0052655b
    FXCH                                ; 0052655e
    FST float ptr [EBP + 0x2e]          ; 00526560
    FMUL float ptr [EBP + 0x2e]         ; 00526563
    FADDP                               ; 00526566
    FSQRT                               ; 00526568
    MOV dword ptr [EBP + 0x2a],EDI      ; 0052656a
    FSTP float ptr [EBP + 0x6e]         ; 0052656d
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00526570
    FLD float ptr [EBP + 0x6e]          ; 00526573
    MOV dword ptr [EBP + 0x5a],EAX      ; 00526576
    FCOMP float ptr [EBP + 0x66]        ; 00526579
    FNSTSW AX                           ; 0052657c
    SAHF                                ; 0052657e
    JA 0x00526648                       ; 0052657f
        ;   XREF to: 00526648 (CONDITIONAL_JUMP)  ; LAB_00526648
    FLD float ptr [EBX + 0xbe38]        ; 00526585
    FLDZ                                ; 0052658b
    FCOMPP                              ; 0052658d
    FNSTSW AX                           ; 0052658f
    SAHF                                ; 00526591
    JC 0x00526648                       ; 00526592
        ;   XREF to: 00526648 (CONDITIONAL_JUMP)  ; LAB_00526648
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 00526598
    LEA ESI,[EBX + 0x158]               ; 0052659e
    TEST EDI,EDI                        ; 005265a4
    JZ 0x00526709                       ; 005265a6
        ;   XREF to: 00526709 (CONDITIONAL_JUMP)  ; LAB_00526709
    FLD float ptr [EBP + 0x62]          ; 005265ac
    FLD1                                ; 005265af
    FADDP                               ; 005265b1
    FLD float ptr [EBP + 0x6e]          ; 005265b3
    FCOMPP                              ; 005265b6
    FNSTSW AX                           ; 005265b8
    SAHF                                ; 005265ba
    JNC 0x00526672                      ; 005265bb
        ;   XREF to: 00526672 (CONDITIONAL_JUMP)  ; LAB_00526672
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005265c1
    FLD float ptr [EAX + 0x20]          ; 005265c7
    FSUB float ptr [EDX]                ; 005265ca
    FSTP float ptr [EBP + -0x5e]        ; 005265cc
    FLD float ptr [EAX + 0x24]          ; 005265cf
    FSUB float ptr [EDX + 0x4]          ; 005265d2
    FSTP float ptr [EBP + -0x5a]        ; 005265d5
    FLD float ptr [EAX + 0x28]          ; 005265d8
    LEA EAX,[EBP + -0x5e]               ; 005265db
    PUSH EAX                            ; 005265de
    LEA EAX,[EBP + 0x32]                ; 005265df
    FSUB float ptr [EDX + 0x8]          ; 005265e2
    PUSH EAX                            ; 005265e5
    FSTP float ptr [EBP + -0x56]        ; 005265e6
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005265e9
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x36]          ; 005265ee
    ADD ESP,0x8                         ; 005265f1
    FSUB float ptr [EBX + 0x34]         ; 005265f4
    SUB ESP,0x4                         ; 005265f7
    FSTP float ptr [ESP]                ; 005265fa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005265fd
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00526602
    FLD float ptr [EBP + 0x76]          ; 00526605
    FABS                                ; 00526608
    ADD ESP,0x4                         ; 0052660a
    FCOMP double ptr [0x00639896]       ; 0052660d | DOUBLE_00639896
    FNSTSW AX                           ; 00526613
    SAHF                                ; 00526615
    JNC 0x0052663e                      ; 00526616
        ;   XREF to: 0052663e (CONDITIONAL_JUMP)  ; LAB_0052663e
    FLD float ptr [EBX + 0xbe38]        ; 00526618
    FLDZ                                ; 0052661e
    FCOMPP                              ; 00526620
    FNSTSW AX                           ; 00526622
    SAHF                                ; 00526624
    JC 0x0052663e                       ; 00526625
        ;   XREF to: 0052663e (CONDITIONAL_JUMP)  ; LAB_0052663e
    PUSH 0x1                            ; 00526627
    PUSH 0x9                            ; 00526629
    PUSH ESI                            ; 0052662b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052662c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526631
    MOV dword ptr [EBX + 0xbe38],0x40000000 ; 00526634
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0052663e
        ;   Label: LAB_0052663e
    FLD float ptr [EBP + 0x5a]          ; 00526648
        ;   Label: LAB_00526648
    FCOMP float ptr [EBX + 0xbe34]      ; 0052664b
    FNSTSW AX                           ; 00526651
    SAHF                                ; 00526653
    JBE 0x00525b97                      ; 00526654
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0052665a
    PUSH 0x0                            ; 0052665c
    LEA EAX,[EBX + 0x158]               ; 0052665e
    PUSH EAX                            ; 00526664
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526665
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052666a
    JMP 0x00525b97                      ; 0052666d
        ;   XREF to: 00525b97 (UNCONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbf8c]        ; 00526672
        ;   Label: LAB_00526672
    FCOMP double ptr [0x0063988e]       ; 00526678 | DOUBLE_0063988e
    FNSTSW AX                           ; 0052667e
    SAHF                                ; 00526680
    JBE 0x0052663e                      ; 00526681
        ;   XREF to: 0052663e (CONDITIONAL_JUMP)  ; LAB_0052663e
    FLD float ptr [EBX + 0xbf90]        ; 00526683
    FLDZ                                ; 00526689
    FCOMPP                              ; 0052668b
    FNSTSW AX                           ; 0052668d
    SAHF                                ; 0052668f
    JC 0x0052663e                       ; 00526690
        ;   XREF to: 0052663e (CONDITIONAL_JUMP)  ; LAB_0052663e
    PUSH 0x3e99999a                     ; 00526692
    MOV dword ptr [EBX + 0xbed4],0x0    ; 00526697
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005266a1
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005266a6
    TEST EAX,EAX                        ; 005266a9
    JZ 0x005266b8                       ; 005266ab
        ;   XREF to: 005266b8 (CONDITIONAL_JUMP)  ; LAB_005266b8
    PUSH 0x2                            ; 005266ad
    PUSH EBX                            ; 005266af
    CALL core_mobster.cpp_CMobster_FUN_005279f0 ; 005266b0
        ;   XREF to: 005279f0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_005279f0(CMobster * this_ptr)
    ADD ESP,0x8                         ; 005266b5
    FLD float ptr [EBX + 0xbed4]        ; 005266b8
        ;   Label: LAB_005266b8
    FLDZ                                ; 005266be
    FCOMPP                              ; 005266c0
    FNSTSW AX                           ; 005266c2
    SAHF                                ; 005266c4
    JNC 0x005266fb                      ; 005266c5
        ;   XREF to: 005266fb (CONDITIONAL_JUMP)  ; LAB_005266fb
    MOV EDX,dword ptr [EBX + 0x24b4]    ; 005266c7
    LEA EAX,[EBX + 0x158]               ; 005266cd
    TEST EDX,EDX                        ; 005266d3
    JZ 0x005266e9                       ; 005266d5
        ;   XREF to: 005266e9 (CONDITIONAL_JUMP)  ; LAB_005266e9
    PUSH 0x1                            ; 005266d7
    PUSH 0xb                            ; 005266d9
    PUSH EAX                            ; 005266db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005266dc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005266e1
    JMP 0x0052663e                      ; 005266e4
        ;   XREF to: 0052663e (UNCONDITIONAL_JUMP)  ; LAB_0052663e
    PUSH 0x1                            ; 005266e9
        ;   Label: LAB_005266e9
    PUSH 0xa                            ; 005266eb
    PUSH EAX                            ; 005266ed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005266ee
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005266f3
    JMP 0x0052663e                      ; 005266f6
        ;   XREF to: 0052663e (UNCONDITIONAL_JUMP)  ; LAB_0052663e
    PUSH EBX                            ; 005266fb
        ;   Label: LAB_005266fb
    CALL core_mobster.cpp_CMobster_FUN_005271c0 ; 005266fc
        ;   XREF to: 005271c0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_005271c0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 00526701
    JMP 0x0052663e                      ; 00526704
        ;   XREF to: 0052663e (UNCONDITIONAL_JUMP)  ; LAB_0052663e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00526709
        ;   Label: LAB_00526709
    FLD float ptr [EAX + 0x20]          ; 0052670f
    FSUB float ptr [EDX]                ; 00526712
    FSTP float ptr [EBP + -0x2e]        ; 00526714
    FLD float ptr [EAX + 0x24]          ; 00526717
    FSUB float ptr [EDX + 0x4]          ; 0052671a
    FSTP float ptr [EBP + -0x2a]        ; 0052671d
    FLD float ptr [EAX + 0x28]          ; 00526720
    LEA EAX,[EBP + -0x2e]               ; 00526723
    PUSH EAX                            ; 00526726
    LEA EAX,[EBP + -0x6a]               ; 00526727
    FSUB float ptr [EDX + 0x8]          ; 0052672a
    PUSH EAX                            ; 0052672d
    FSTP float ptr [EBP + -0x26]        ; 0052672e
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00526731
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x66]         ; 00526736
    ADD ESP,0x8                         ; 00526739
    FSUB float ptr [EBX + 0x34]         ; 0052673c
    SUB ESP,0x4                         ; 0052673f
    FSTP float ptr [ESP]                ; 00526742
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00526745
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0052674a
    FLD float ptr [EBP + 0x76]          ; 0052674d
    FABS                                ; 00526750
    ADD ESP,0x4                         ; 00526752
    FCOMP double ptr [0x00639896]       ; 00526755 | DOUBLE_00639896
    FNSTSW AX                           ; 0052675b
    SAHF                                ; 0052675d
    JNC 0x0052663e                      ; 0052675e
        ;   XREF to: 0052663e (CONDITIONAL_JUMP)  ; LAB_0052663e
    PUSH 0x1                            ; 00526764
    PUSH 0x9                            ; 00526766
    PUSH ESI                            ; 00526768
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00526769
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052676e
    JMP 0x0052663e                      ; 00526771
        ;   XREF to: 0052663e (UNCONDITIONAL_JUMP)  ; LAB_0052663e
    CMP EDI,0xb                         ; 00526776
        ;   Label: LAB_00526776
    JA 0x00525b97                       ; 00526779
        ;   XREF to: 00525b97 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x525810]  ; 0052677f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EBX                            ; 00526786
        ;   Label: LAB_00526786
    CALL core_mobster.cpp_CMobster_FUN_00525650 ; 00526787
        ;   XREF to: 00525650 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_00525650(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0052678c
    JMP 0x00525cd1                      ; 0052678f
        ;   XREF to: 00525cd1 (UNCONDITIONAL_JUMP)  ; LAB_00525cd1

