; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_processDamage_FUN_004737b0(CDoc *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005da344
;   TerminatedCString s_CShadowsc_005da34a
;   TerminatedCString s_ScorpTailAttack_005da354
;   TerminatedCString s_HitByShadowScorp_005da364
;   TerminatedCString s_Using_auto_health_005da375
;   TerminatedCString s_hit_points_3_2f_005da388
;   TerminatedCString s_doc_die_wav_005da39b
;   TerminatedCString s_generic_doc_hit1_wav_005da3a9
;   undefined4 DAT_005da3c4
;   undefined4 DAT_005da3cc
;   undefined4 DAT_005feca8
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
;   core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   engine_console.cpp_FUN_00445430
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004737b0
        ;   Label: core_doc.cpp_CDoc_processDamage_FUN_004737b0
    PUSH ESI                            ; 004737b1
    PUSH EDI                            ; 004737b2
    PUSH EBP                            ; 004737b3
    MOV EBP,ESP                         ; 004737b4
    SUB ESP,0x28                        ; 004737b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004737b9
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 004737bc
    TEST EDX,EDX                        ; 004737c2
    JNZ 0x00473a90                      ; 004737c4
        ;   XREF to: 00473a90 (CONDITIONAL_JUMP)  ; LAB_00473a90
    MOV EAX,[0x0061d95c]                ; 004737ca | g_CGamePtr
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004737cf | g_CGameInstance.god_mode_enabled
    JNZ 0x00473a97                      ; 004737d6
        ;   XREF to: 00473a97 (CONDITIONAL_JUMP)  ; LAB_00473a97
    MOV EAX,[0x0061d95c]                ; 004737dc | g_CGamePtr
        ;   Label: LAB_004737dc
    MOV ESI,dword ptr [EAX + 0x248]     ; 004737e1 | g_CGameInstance.allow_damage_flag
    TEST ESI,ESI                        ; 004737e7
    JNZ 0x004737f1                      ; 004737e9
        ;   XREF to: 004737f1 (CONDITIONAL_JUMP)  ; LAB_004737f1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004737eb
    MOV dword ptr [EAX + 0x4],ESI       ; 004737ee
    PUSH EBX                            ; 004737f1
        ;   Label: LAB_004737f1
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80 ; 004737f2
        ;   XREF to: 004ebe80 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80(CHero * this_ptr)
    FLD float ptr [EBX + 0xc1d0]        ; 004737f7
    FLDZ                                ; 004737fd
    ADD ESP,0x4                         ; 004737ff
    FCOMPP                              ; 00473802
    FNSTSW AX                           ; 00473804
    SAHF                                ; 00473806
    JNC 0x00473816                      ; 00473807
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473809
    CMP dword ptr [EAX + 0x30],0xb      ; 0047380c
    JG 0x00473aa2                       ; 00473810
        ;   XREF to: 00473aa2 (CONDITIONAL_JUMP)  ; LAB_00473aa2
    FLD float ptr [0x005feca8]          ; 00473816 | DAT_005feca8
        ;   Label: LAB_00473816
    PUSH 0x5da344                       ; 0047381c | = "CBugs"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473821
    FSTP float ptr [EBX + 0xc1d0]       ; 00473824
    MOV EDX,dword ptr [EAX + 0x38]      ; 0047382a
    PUSH EDX                            ; 0047382d
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0047382e
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00473833
    TEST EAX,EAX                        ; 00473836
    JZ 0x00473844                       ; 00473838
        ;   XREF to: 00473844 (CONDITIONAL_JUMP)  ; LAB_00473844
    MOV dword ptr [EBX + 0xc1d0],0x3e19999a ; 0047383a
    MOV EAX,[0x0061d95c]                ; 00473844 | g_CGamePtr
        ;   Label: LAB_00473844
    CMP dword ptr [EAX + 0xd0],0x3      ; 00473849 | g_CGameInstance.game_control
    JNZ 0x00473865                      ; 00473850
        ;   XREF to: 00473865 (CONDITIONAL_JUMP)  ; LAB_00473865
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473852
    FLD float ptr [EAX + 0x4]           ; 00473855
    FLD ST0                             ; 00473858
    FMUL double ptr [0x005da3c4]        ; 0047385a | DAT_005da3c4
    FSTP ST1                            ; 00473860
    FSTP float ptr [EAX + 0x4]          ; 00473862
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473865
        ;   Label: LAB_00473865
    FLD float ptr [EAX + 0x4]           ; 00473868
    FSUBR float ptr [EBX + 0x2538]      ; 0047386b
    PUSH 0x5da34a                       ; 00473871 | = "CShadowsc"
    FSTP float ptr [EBX + 0x2538]       ; 00473876
    MOV ESI,dword ptr [EAX + 0x38]      ; 0047387c
    PUSH ESI                            ; 0047387f
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00473880
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00473885
    TEST EAX,EAX                        ; 00473888
    JZ 0x004738b7                       ; 0047388a
        ;   XREF to: 004738b7 (CONDITIONAL_JUMP)  ; LAB_004738b7
    PUSH 0x5da354                       ; 0047388c | = "ScorpTailAttack"
    MOV EDI,dword ptr [0x0061b4d0]      ; 00473891 | DAT_0061b4d0
    PUSH EDI                            ; 00473897
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00473898
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047389d
    TEST EAX,EAX                        ; 004738a0
    JZ 0x004738b7                       ; 004738a2
        ;   XREF to: 004738b7 (CONDITIONAL_JUMP)  ; LAB_004738b7
    PUSH 0x5da364                       ; 004738a4 | = "HitByShadowScorp"
    MOV EAX,[0x0061b4d0]                ; 004738a9 | DAT_0061b4d0
    PUSH EAX                            ; 004738ae
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004738af
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004738b4
    MOV EAX,[0x0061d95c]                ; 004738b7 | g_CGamePtr
        ;   Label: LAB_004738b7
    CMP dword ptr [EAX + 0xdc],0x0      ; 004738bc | g_CGameInstance.auto_use_health
    JZ 0x0047392a                       ; 004738c3
        ;   XREF to: 0047392a (CONDITIONAL_JUMP)  ; LAB_0047392a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004738c5
    CMP dword ptr [EAX + 0x30],0xb      ; 004738c8
    JLE 0x0047392a                      ; 004738cc
        ;   XREF to: 0047392a (CONDITIONAL_JUMP)  ; LAB_0047392a
    FLD float ptr [EBX + 0x2538]        ; 004738ce
    FLDZ                                ; 004738d4
    FCOMPP                              ; 004738d6
    FNSTSW AX                           ; 004738d8
    SAHF                                ; 004738da
    JC 0x0047392a                       ; 004738db
        ;   XREF to: 0047392a (CONDITIONAL_JUMP)  ; LAB_0047392a
    PUSH 0x5da375                       ; 004738dd | = "Using auto health\n"
    MOV ESI,dword ptr [0x00611100]      ; 004738e2 | g_CConsolePtr
    PUSH ESI                            ; 004738e8 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x2538],0x0    ; 004738e9
    CALL engine_console.cpp_FUN_00445430 ; 004738f3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 004738f8
    LEA EAX,[EBX + 0x1fae8]             ; 004738fb
    PUSH EAX                            ; 00473901
    CALL core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0 ; 00473902
        ;   XREF to: 004fc3e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00473907
    SUB ESP,0x8                         ; 0047390a
    FLD float ptr [EBX + 0x2538]        ; 0047390d
    FSTP double ptr [ESP]               ; 00473913
    PUSH 0x5da388                       ; 00473916 | = "hit points: %3.2f\n"
    MOV EDI,dword ptr [0x00611100]      ; 0047391b | g_CConsolePtr
    PUSH EDI                            ; 00473921 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00473922
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 00473927
    FLD float ptr [EBX + 0x2538]        ; 0047392a
        ;   Label: LAB_0047392a
    LEA EAX,[EBX + 0x158]               ; 00473930
    FLDZ                                ; 00473936
    MOV dword ptr [EBP + -0x8],EAX      ; 00473938
    FCOMPP                              ; 0047393b
    FNSTSW AX                           ; 0047393d
    SAHF                                ; 0047393f
    JC 0x00473b09                       ; 00473940
        ;   XREF to: 00473b09 (CONDITIONAL_JUMP)  ; LAB_00473b09
    PUSH EBX                            ; 00473946
    MOV EAX,dword ptr [EBX + 0x154]     ; 00473947
    MOV dword ptr [EBX + 0x2538],0x0    ; 0047394d
    CALL dword ptr [EAX + 0xf0]         ; 00473957
    ADD ESP,0x4                         ; 0047395d
    MOV ESI,dword ptr [EBP + -0x8]      ; 00473960
    PUSH ESI                            ; 00473963
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00473964
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00473969
    ADD ESP,0x4                         ; 0047396c
    CMP EAX,0x2e                        ; 0047396f
    JZ 0x00473a0c                       ; 00473972
        ;   XREF to: 00473a0c (CONDITIONAL_JUMP)  ; LAB_00473a0c
    PUSH ESI                            ; 00473978
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00473979
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047397e
    ADD ESP,0x4                         ; 00473981
    CMP EAX,0x2d                        ; 00473984
    JZ 0x00473a0c                       ; 00473987
        ;   XREF to: 00473a0c (CONDITIONAL_JUMP)  ; LAB_00473a0c
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 0047398d
    JZ 0x00473ab0                       ; 00473994
        ;   XREF to: 00473ab0 (CONDITIONAL_JUMP)  ; LAB_00473ab0
    PUSH 0x1                            ; 0047399a
        ;   Label: LAB_0047399a
    PUSH 0x12                           ; 0047399c
    LEA EAX,[EBX + 0x158]               ; 0047399e
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 004739a4
    PUSH EAX                            ; 004739ae
    MOV dword ptr [EBX + 0x20000],0x0   ; 004739af
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004739b9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004739b9
    ADD ESP,0xc                         ; 004739be
    MOV EDI,dword ptr [EBX + 0x200d4]   ; 004739c1
    PUSH EDI                            ; 004739c7
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004739c8
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV EAX,dword ptr [EBP + 0x18]      ; 004739cd
    MOV EDX,dword ptr [EAX + 0x30]      ; 004739d0
    ADD ESP,0x4                         ; 004739d3
    CMP EDX,0x1                         ; 004739d6
    JZ 0x004739f3                       ; 004739d9
        ;   XREF to: 004739f3 (CONDITIONAL_JUMP)  ; LAB_004739f3
    PUSH 0x5da39b                       ; 004739db | = "doc_die??.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004739e0
    PUSH EBX                            ; 004739e6
    CALL dword ptr [EAX + 0x2c]         ; 004739e7
    ADD ESP,0x8                         ; 004739ea
    MOV dword ptr [EBX + 0x200d4],EAX   ; 004739ed
    PUSH 0x0                            ; 004739f3
        ;   Label: LAB_004739f3
    PUSH 0x42480000                     ; 004739f5
    PUSH 0x32                           ; 004739fa
    PUSH EBX                            ; 004739fc
    MOV ECX,dword ptr [0x0061dca4]      ; 004739fd | g_CGorePtr
    PUSH ECX                            ; 00473a03
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 ; 00473a04
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 00473a09
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00473a0c
        ;   Label: LAB_00473a0c
    CMP ESI,dword ptr [EBX + 0x25b0]    ; 00473a12
    JNZ 0x00473a24                      ; 00473a18
        ;   XREF to: 00473a24 (CONDITIONAL_JUMP)  ; LAB_00473a24
    MOV dword ptr [EBX + 0x20004],0x0   ; 00473a1a
    PUSH 0x0                            ; 00473a24
        ;   Label: LAB_00473a24
    PUSH 0x0                            ; 00473a26
    MOV EAX,dword ptr [EBX + 0x154]     ; 00473a28
    PUSH EBX                            ; 00473a2e
    CALL dword ptr [EAX + 0x128]        ; 00473a2f
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00473a35
    MOV EDI,dword ptr [EBX + 0x20004]   ; 00473a3b
    ADD ESP,0xc                         ; 00473a41
    CMP EAX,EDI                         ; 00473a44
    JNZ 0x00473a52                      ; 00473a46
        ;   XREF to: 00473a52 (CONDITIONAL_JUMP)  ; LAB_00473a52
    MOV dword ptr [EBX + 0x20004],0x0   ; 00473a48
    PUSH 0x0                            ; 00473a52
        ;   Label: LAB_00473a52
    PUSH 0x1                            ; 00473a54
    MOV EAX,dword ptr [EBX + 0x154]     ; 00473a56
    PUSH EBX                            ; 00473a5c
    CALL dword ptr [EAX + 0x128]        ; 00473a5d
    ADD ESP,0xc                         ; 00473a63
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473a66
        ;   Label: LAB_00473a66
    FLD float ptr [EAX + 0x4]           ; 00473a69
    FLDZ                                ; 00473a6c
    FCOMPP                              ; 00473a6e
    FNSTSW AX                           ; 00473a70
    SAHF                                ; 00473a72
    JNC 0x00473a83                      ; 00473a73
        ;   XREF to: 00473a83 (CONDITIONAL_JUMP)  ; LAB_00473a83
    MOV EAX,[0x0061d95c]                ; 00473a75 | g_CGamePtr
    PUSH EAX                            ; 00473a7a | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320 ; 00473a7b
        ;   XREF to: 004d6320 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(CGame * this_ptr)
    ADD ESP,0x4                         ; 00473a80
    MOV EDX,dword ptr [EBP + 0x18]      ; 00473a83
        ;   Label: LAB_00473a83
    PUSH EDX                            ; 00473a86
    PUSH EBX                            ; 00473a87
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 00473a88
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00473a8d
    MOV ESP,EBP                         ; 00473a90
        ;   Label: LAB_00473a90
    POP EBP                             ; 00473a92
    POP EDI                             ; 00473a93
    POP ESI                             ; 00473a94
    POP EBX                             ; 00473a95
    RET                                 ; 00473a96
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473a97
        ;   Label: LAB_00473a97
    MOV dword ptr [EAX + 0x4],EDX       ; 00473a9a
    JMP 0x004737dc                      ; 00473a9d
        ;   XREF to: 004737dc (UNCONDITIONAL_JUMP)  ; LAB_004737dc
    MOV dword ptr [EAX + 0x4],0x0       ; 00473aa2
        ;   Label: LAB_00473aa2
    MOV ESP,EBP                         ; 00473aa9
    POP EBP                             ; 00473aab
    POP EDI                             ; 00473aac
    POP ESI                             ; 00473aad
    POP EBX                             ; 00473aae
    RET                                 ; 00473aaf
    CMP dword ptr [EBX + 0x20000],0x0   ; 00473ab0
        ;   Label: LAB_00473ab0
    JNZ 0x0047399a                      ; 00473ab7
        ;   XREF to: 0047399a (CONDITIONAL_JUMP)  ; LAB_0047399a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473abd
    MOV ECX,dword ptr [EAX + 0x30]      ; 00473ac0
    CMP ECX,0x1                         ; 00473ac3
    JNZ 0x00473ad1                      ; 00473ac6
        ;   XREF to: 00473ad1 (CONDITIONAL_JUMP)  ; LAB_00473ad1
    PUSH ECX                            ; 00473ac8
    PUSH 0x2c                           ; 00473ac9
    PUSH ESI                            ; 00473acb
    JMP 0x004739b9                      ; 00473acc
        ;   XREF to: 004739b9 (UNCONDITIONAL_JUMP)  ; LAB_004739b9
    PUSH 0x1                            ; 00473ad1
        ;   Label: LAB_00473ad1
    PUSH 0x42c80000                     ; 00473ad3
    PUSH 0x0                            ; 00473ad8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00473ada
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 00473adf
    ADD ESP,0x8                         ; 00473ae2
    FLD float ptr [EBP + -0x4]          ; 00473ae5
    FCOMP float ptr [0x005da3cc]        ; 00473ae8 | DAT_005da3cc
    FNSTSW AX                           ; 00473aee
    SAHF                                ; 00473af0
    SETBE AL                            ; 00473af1
    AND EAX,0xff                        ; 00473af4
    ADD EAX,0x2a                        ; 00473af9
    PUSH EAX                            ; 00473afc
    LEA EAX,[EBX + 0x158]               ; 00473afd
    PUSH EAX                            ; 00473b03
    JMP 0x004739b9                      ; 00473b04
        ;   XREF to: 004739b9 (UNCONDITIONAL_JUMP)  ; LAB_004739b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473b09
        ;   Label: LAB_00473b09
    FLD float ptr [EAX + 0x4]           ; 00473b0c
    FLDZ                                ; 00473b0f
    FCOMPP                              ; 00473b11
    FNSTSW AX                           ; 00473b13
    SAHF                                ; 00473b15
    JNC 0x00473a66                      ; 00473b16
        ;   XREF to: 00473a66 (CONDITIONAL_JUMP)  ; LAB_00473a66
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473b1c
    CMP dword ptr [EAX + 0x30],0x69     ; 00473b1f
    JZ 0x00473b7a                       ; 00473b23
        ;   XREF to: 00473b7a (CONDITIONAL_JUMP)  ; LAB_00473b7a
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 00473b25
    JNZ 0x00473b7a                      ; 00473b2c
        ;   XREF to: 00473b7a (CONDITIONAL_JUMP)  ; LAB_00473b7a
    CMP dword ptr [EBX + 0x20000],0x0   ; 00473b2e
    JNZ 0x00473b7a                      ; 00473b35
        ;   XREF to: 00473b7a (CONDITIONAL_JUMP)  ; LAB_00473b7a
    CMP dword ptr [EBX + 0x1ff5c],0x0   ; 00473b37
    JNZ 0x00473b7a                      ; 00473b3e
        ;   XREF to: 00473b7a (CONDITIONAL_JUMP)  ; LAB_00473b7a
    MOV EAX,[0x02c8ad44]                ; 00473b40 | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 00473b45
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473b46
    MOV EDX,dword ptr [EAX + 0x34]      ; 00473b49
    PUSH EDX                            ; 00473b4c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00473b4d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00473b52
    TEST EAX,EAX                        ; 00473b55
    JZ 0x00473bae                       ; 00473b57
        ;   XREF to: 00473bae (CONDITIONAL_JUMP)  ; LAB_00473bae
    PUSH 0x3eaa7efa                     ; 00473b59
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00473b5e
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00473b63
    TEST EAX,EAX                        ; 00473b66
    JZ 0x00473b7a                       ; 00473b68
        ;   XREF to: 00473b7a (CONDITIONAL_JUMP)  ; LAB_00473b7a
    PUSH 0x1                            ; 00473b6a
    PUSH 0x29                           ; 00473b6c
    MOV EDX,dword ptr [EBP + -0x8]      ; 00473b6e
    PUSH EDX                            ; 00473b71
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00473b72
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00473b72
    ADD ESP,0xc                         ; 00473b77
    MOV ECX,dword ptr [EBX + 0x200d4]   ; 00473b7a
        ;   Label: LAB_00473b7a
    PUSH ECX                            ; 00473b80
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00473b81
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00473b86
    TEST EAX,EAX                        ; 00473b89
    JNZ 0x00473a66                      ; 00473b8b
        ;   XREF to: 00473a66 (CONDITIONAL_JUMP)  ; LAB_00473a66
    PUSH 0x5da3a9                       ; 00473b91 | = "generic_doc_hit1?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00473b96
    PUSH EBX                            ; 00473b9c
    CALL dword ptr [EAX + 0x2c]         ; 00473b9d
    ADD ESP,0x8                         ; 00473ba0
    MOV dword ptr [EBX + 0x200d4],EAX   ; 00473ba3
    JMP 0x00473a66                      ; 00473ba9
        ;   XREF to: 00473a66 (UNCONDITIONAL_JUMP)  ; LAB_00473a66
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473bae
        ;   Label: LAB_00473bae
    CMP dword ptr [EAX + 0x30],0x6d     ; 00473bb1
    JNZ 0x00473bfa                      ; 00473bb5
        ;   XREF to: 00473bfa (CONDITIONAL_JUMP)  ; LAB_00473bfa
    MOV EAX,dword ptr [EAX + 0x38]      ; 00473bb7
    ADD EAX,0x20                        ; 00473bba
    PUSH EAX                            ; 00473bbd
    PUSH EBX                            ; 00473bbe
    LEA ESI,[EBP + -0x1c]               ; 00473bbf
    LEA EDI,[EBP + -0x28]               ; 00473bc2
    CALL core_actor.cpp_FUN_00408bb0    ; 00473bc5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + -0x1c]               ; 00473bca
    FLDZ                                ; 00473bcd
    MOVSD ES:EDI,ESI                    ; 00473bcf
    MOVSD ES:EDI,ESI                    ; 00473bd0
    MOVSD ES:EDI,ESI                    ; 00473bd1
    ADD ESP,0x8                         ; 00473bd2
    FCOMP float ptr [EBP + -0x20]       ; 00473bd5
    FNSTSW AX                           ; 00473bd8
    SAHF                                ; 00473bda
    JNC 0x00473bea                      ; 00473bdb
        ;   XREF to: 00473bea (CONDITIONAL_JUMP)  ; LAB_00473bea
    PUSH 0x1                            ; 00473bdd
    PUSH 0x82                           ; 00473bdf
    MOV EAX,dword ptr [EBP + -0x8]      ; 00473be4
    PUSH EAX                            ; 00473be7
    JMP 0x00473b72                      ; 00473be8
        ;   XREF to: 00473b72 (UNCONDITIONAL_JUMP)  ; LAB_00473b72
    PUSH 0x1                            ; 00473bea
        ;   Label: LAB_00473bea
    PUSH 0x83                           ; 00473bec
    MOV EDI,dword ptr [EBP + -0x8]      ; 00473bf1
    PUSH EDI                            ; 00473bf4
    JMP 0x00473b72                      ; 00473bf5
        ;   XREF to: 00473b72 (UNCONDITIONAL_JUMP)  ; LAB_00473b72
    PUSH 0x1                            ; 00473bfa
        ;   Label: LAB_00473bfa
    PUSH 0x29                           ; 00473bfc
    MOV ESI,dword ptr [EBP + -0x8]      ; 00473bfe
    PUSH ESI                            ; 00473c01
    JMP 0x00473b72                      ; 00473c02
        ;   XREF to: 00473b72 (UNCONDITIONAL_JUMP)  ; LAB_00473b72

