; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_00412760(CBatCreature *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_batman_die_wav_005cb935+1
;   TerminatedCString s_batman_hurt_wav_005cb945
;   undefined4 DAT_005cb956
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412500
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_FUN_00546a90
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412760
        ;   Label: core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760
    PUSH ESI                            ; 00412761
    PUSH EDI                            ; 00412762
    PUSH EBP                            ; 00412763
    SUB ESP,0x50                        ; 00412764
    MOV EBP,dword ptr [ESP + 0x64]      ; 00412767
    MOV EDX,dword ptr [EBP + 0x10b38]   ; 0041276b
    PUSH EDX                            ; 00412771
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00412772
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00412777
    MOV ECX,dword ptr [EBP + 0x10b30]   ; 0041277a
    PUSH ECX                            ; 00412780
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00412781
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00412786
    MOV EAX,dword ptr [ESP + 0x68]      ; 00412789
    CMP dword ptr [EAX + 0x28],0x7      ; 0041278d
    JZ 0x004128af                       ; 00412791
        ;   XREF to: 004128af (CONDITIONAL_JUMP)  ; LAB_004128af
    LEA EAX,[EAX]                       ; 00412797
    LEA EDX,[EDX]                       ; 0041279d
    MOV EAX,dword ptr [ESP + 0x68]      ; 004127a0
        ;   Label: LAB_004127a0
    CMP dword ptr [EAX + 0x30],0x6c     ; 004127a4
    JNZ 0x00412800                      ; 004127a8
        ;   XREF to: 00412800 (CONDITIONAL_JUMP)  ; LAB_00412800
    PUSH 0x0                            ; 004127aa
    LEA EAX,[EBP + 0x2b4]               ; 004127ac
    PUSH EAX                            ; 004127b2
    LEA ESI,[ESP + 0x14]                ; 004127b3
    LEA EDI,[ESP + 0x44]                ; 004127b7
    CALL core_skeleton.cpp_FUN_00546a90 ; 004127bb
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 004127c0
    LEA EAX,[ESP + 0x3c]                ; 004127c3
    LEA ESI,[ESP + 0xc]                 ; 004127c7
    PUSH EAX                            ; 004127cb
    MOVSD ES:EDI,ESI                    ; 004127cc
    MOVSD ES:EDI,ESI                    ; 004127cd
    MOVSD ES:EDI,ESI                    ; 004127ce
    PUSH EBP                            ; 004127cf
    LEA ESI,[ESP + 0x20]                ; 004127d0
    CALL core_actor.cpp_FUN_00408d70    ; 004127d4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004127d9
    PUSH 0x0                            ; 004127dc
    PUSH 0x41200000                     ; 004127de
    PUSH 0x0                            ; 004127e3
    PUSH 0x0                            ; 004127e5
    LEA EAX,[ESP + 0x40]                ; 004127e7
    PUSH EAX                            ; 004127eb
    LEA EDI,[ESP + 0x44]                ; 004127ec
    LEA ESI,[ESP + 0x2c]                ; 004127f0
    PUSH EBP                            ; 004127f4
    MOVSD ES:EDI,ESI                    ; 004127f5
    MOVSD ES:EDI,ESI                    ; 004127f6
    MOVSD ES:EDI,ESI                    ; 004127f7
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 004127f8
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004127fd
    MOV ECX,dword ptr [ESP + 0x68]      ; 00412800
        ;   Label: LAB_00412800
    PUSH ECX                            ; 00412804
    PUSH EBP                            ; 00412805
    CALL core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412500 ; 00412806
        ;   XREF to: 00412500 (UNCONDITIONAL_CALL)  ; void core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412500(CBatCreature * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041280b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0041280e
    FLD float ptr [EAX + 0x4]           ; 00412812
    FSUBR float ptr [EBP + 0x25a8]      ; 00412815
    LEA EBX,[EBP + 0x2b4]               ; 0041281b
    FST float ptr [EBP + 0x25a8]        ; 00412821
    FLDZ                                ; 00412827
    FCOMPP                              ; 00412829
    FNSTSW AX                           ; 0041282b
    SAHF                                ; 0041282d
    JNC 0x0041290f                      ; 0041282e
        ;   XREF to: 0041290f (CONDITIONAL_JUMP)  ; LAB_0041290f
    PUSH 0x2                            ; 00412834
    PUSH 0x0                            ; 00412836
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00412838
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041283d
    MOV ESI,EAX                         ; 00412840
    TEST EAX,EAX                        ; 00412842
    JNZ 0x00412853                      ; 00412844
        ;   XREF to: 00412853 (CONDITIONAL_JUMP)  ; LAB_00412853
    PUSH 0x1                            ; 00412846
    PUSH 0x4                            ; 00412848
    PUSH EBX                            ; 0041284a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041284b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412850
    CMP ESI,0x1                         ; 00412853
        ;   Label: LAB_00412853
    JNZ 0x0041286a                      ; 00412856
        ;   XREF to: 0041286a (CONDITIONAL_JUMP)  ; LAB_0041286a
    PUSH ESI                            ; 00412858
    PUSH 0x5                            ; 00412859
    LEA EAX,[EBP + 0x2b4]               ; 0041285b
    PUSH EAX                            ; 00412861
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412862
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412867
    CMP ESI,0x2                         ; 0041286a
        ;   Label: LAB_0041286a
    JNZ 0x00412882                      ; 0041286d
        ;   XREF to: 00412882 (CONDITIONAL_JUMP)  ; LAB_00412882
    PUSH 0x1                            ; 0041286f
    PUSH 0x6                            ; 00412871
    LEA EAX,[EBP + 0x2b4]               ; 00412873
    PUSH EAX                            ; 00412879
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041287a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041287f
    MOV EBX,dword ptr [EBP + 0x10b34]   ; 00412882
        ;   Label: LAB_00412882
    PUSH EBX                            ; 00412888
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00412889
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041288e
    TEST EAX,EAX                        ; 00412891
    JZ 0x00412970                       ; 00412893
        ;   XREF to: 00412970 (CONDITIONAL_JUMP)  ; LAB_00412970
    MOV EDI,dword ptr [ESP + 0x68]      ; 00412899
        ;   Label: LAB_00412899
    PUSH EDI                            ; 0041289d
    PUSH EBP                            ; 0041289e
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0041289f
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004128a4
    ADD ESP,0x50                        ; 004128a7
    POP EBP                             ; 004128aa
    POP EDI                             ; 004128ab
    POP ESI                             ; 004128ac
    POP EBX                             ; 004128ad
    RET                                 ; 004128ae
    FLD float ptr [EAX + 0x4]           ; 004128af
        ;   Label: LAB_004128af
    ADD EAX,0x1c                        ; 004128b2
    FLD ST0                             ; 004128b5
    FMUL double ptr [0x005cb956]        ; 004128b7 | DAT_005cb956
    PUSH EAX                            ; 004128bd
    LEA ESI,[ESP + 0x28]                ; 004128be
    LEA EDI,[ESP + 0x4]                 ; 004128c2
    PUSH EBP                            ; 004128c6
    FSTP ST1                            ; 004128c7
    FSTP float ptr [EAX + -0x18]        ; 004128c9
    CALL core_actor.cpp_FUN_00408d70    ; 004128cc
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x2c]                ; 004128d1
    ADD ESP,0x8                         ; 004128d5
    XOR EBX,EBX                         ; 004128d8
    MOVSD ES:EDI,ESI                    ; 004128da
    MOVSD ES:EDI,ESI                    ; 004128db
    MOVSD ES:EDI,ESI                    ; 004128dc
    XOR ESI,ESI                         ; 004128dd
    PUSH 0xffff                         ; 004128df
        ;   Label: LAB_004128df
    PUSH ESI                            ; 004128e4
    PUSH 0x4000                         ; 004128e5
    PUSH 0x4000                         ; 004128ea
    PUSH ESI                            ; 004128ef
    LEA EAX,[ESP + 0x14]                ; 004128f0
    PUSH EAX                            ; 004128f4
    MOV EDI,dword ptr [0x00614d30]      ; 004128f5 | DAT_00614d30
    PUSH EDI                            ; 004128fb
    INC EBX                             ; 004128fc
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 004128fd
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00412902
    CMP EBX,0x5                         ; 00412905
    JL 0x004128df                       ; 00412908
        ;   XREF to: 004128df (CONDITIONAL_JUMP)  ; LAB_004128df
    JMP 0x004127a0                      ; 0041290a
        ;   XREF to: 004127a0 (UNCONDITIONAL_JUMP)  ; LAB_004127a0
    PUSH EBX                            ; 0041290f
        ;   Label: LAB_0041290f
    MOV dword ptr [EBP + 0x25a8],0x0    ; 00412910
    CALL core_motion.cpp_FUN_005035c0   ; 0041291a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041291f
    ADD ESP,0x4                         ; 00412922
    CMP EAX,0x7                         ; 00412925
    JZ 0x00412899                       ; 00412928
        ;   XREF to: 00412899 (CONDITIONAL_JUMP)  ; LAB_00412899
    CMP EAX,0x8                         ; 0041292e
    JZ 0x00412899                       ; 00412931
        ;   XREF to: 00412899 (CONDITIONAL_JUMP)  ; LAB_00412899
    PUSH 0x1                            ; 00412937
    PUSH 0x7                            ; 00412939
    PUSH EBX                            ; 0041293b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041293c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412941
    MOV ESI,dword ptr [EBP + 0x10b34]   ; 00412944
    PUSH ESI                            ; 0041294a
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0041294b
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00412950
    PUSH 0x5cb936                       ; 00412953 | s_batman_die_wav_005cb935+1
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00412958
    PUSH EBP                            ; 0041295e
    CALL dword ptr [EAX + 0x34]         ; 0041295f
    ADD ESP,0x8                         ; 00412962
    MOV dword ptr [EBP + 0x10b34],EAX   ; 00412965
    JMP 0x00412899                      ; 0041296b
        ;   XREF to: 00412899 (UNCONDITIONAL_JUMP)  ; LAB_00412899
    PUSH 0x5cb945                       ; 00412970 | = "batman-hurt?.wav"
        ;   Label: LAB_00412970
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00412975
    PUSH EBP                            ; 0041297b
    CALL dword ptr [EAX + 0x34]         ; 0041297c
    ADD ESP,0x8                         ; 0041297f
    MOV dword ptr [EBP + 0x10b34],EAX   ; 00412982
    JMP 0x00412899                      ; 00412988
        ;   XREF to: 00412899 (UNCONDITIONAL_JUMP)  ; LAB_00412899

