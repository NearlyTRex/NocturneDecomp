; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004cab10(CGabriella *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_gb_die_1_6_wav_005e120c
;   TerminatedCString s_gb_hit_1_6_wav_005e121c
;   undefined4 DAT_005e122c
;   undefined4 DAT_00600d64
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.hero_number
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cab10
        ;   Label: core_gabriela.cpp_CGabriella_processDamage_FUN_004cab10
    PUSH ESI                            ; 004cab11
    PUSH EDI                            ; 004cab12
    PUSH EBP                            ; 004cab13
    MOV EBP,ESP                         ; 004cab14
    SUB ESP,0x4                         ; 004cab16
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cab19
    MOV ESI,dword ptr [EBP + 0x18]      ; 004cab1c
    TEST dword ptr [EBX + 0xc1d0],0x7fffffff ; 004cab1f
    JNZ 0x004cac77                      ; 004cab29
        ;   XREF to: 004cac77 (CONDITIONAL_JUMP)  ; LAB_004cac77
    MOV EAX,[0x0061d95c]                ; 004cab2f | g_CGamePtr
        ;   Label: LAB_004cab2f
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004cab34 | g_CGameInstance.god_mode_enabled
    JZ 0x004cab44                       ; 004cab3b
        ;   XREF to: 004cab44 (CONDITIONAL_JUMP)  ; LAB_004cab44
    MOV dword ptr [ESI + 0x4],0x0       ; 004cab3d
    MOV EAX,[0x0061d95c]                ; 004cab44 | g_CGamePtr
        ;   Label: LAB_004cab44
    MOV EDI,dword ptr [EAX + 0x248]     ; 004cab49 | g_CGameInstance.allow_damage_flag
    TEST EDI,EDI                        ; 004cab4f
    JZ 0x004cac83                       ; 004cab51
        ;   XREF to: 004cac83 (CONDITIONAL_JUMP)  ; LAB_004cac83
    MOV EAX,[0x00600d64]                ; 004cab57 | DAT_00600d64
        ;   Label: LAB_004cab57
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 004cab5c
    FLD float ptr [ESI + 0x4]           ; 004cab62
    FSUBR float ptr [EBX + 0x2538]      ; 004cab65
    LEA EDI,[EBX + 0x158]               ; 004cab6b
    FST float ptr [EBX + 0x2538]        ; 004cab71
    FLDZ                                ; 004cab77
    FCOMPP                              ; 004cab79
    FNSTSW AX                           ; 004cab7b
    SAHF                                ; 004cab7d
    JC 0x004cac8b                       ; 004cab7e
        ;   XREF to: 004cac8b (CONDITIONAL_JUMP)  ; LAB_004cac8b
    PUSH EDI                            ; 004cab84
    MOV dword ptr [EBX + 0x2538],0x0    ; 004cab85
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004cab8f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004cab94
    ADD ESP,0x4                         ; 004cab97
    CMP EAX,0xc                         ; 004cab9a
    JZ 0x004cac56                       ; 004cab9d
        ;   XREF to: 004cac56 (CONDITIONAL_JUMP)  ; LAB_004cac56
    PUSH EDI                            ; 004caba3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004caba4
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004caba9
    ADD ESP,0x4                         ; 004cabac
    CMP EAX,0xb                         ; 004cabaf
    JZ 0x004cac56                       ; 004cabb2
        ;   XREF to: 004cac56 (CONDITIONAL_JUMP)  ; LAB_004cac56
    PUSH 0x1                            ; 004cabb8
    PUSH 0x42c80000                     ; 004cabba
    PUSH 0x0                            ; 004cabbf
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004cabc1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004cabcb
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004cabd0
    ADD ESP,0x8                         ; 004cabd3
    FLD float ptr [EBP + -0x4]          ; 004cabd6
    FCOMP float ptr [0x005e122c]        ; 004cabd9 | DAT_005e122c
    FNSTSW AX                           ; 004cabdf
    SAHF                                ; 004cabe1
    SETBE AL                            ; 004cabe2
    AND EAX,0xff                        ; 004cabe5
    ADD EAX,0x9                         ; 004cabea
    PUSH EAX                            ; 004cabed
    LEA EAX,[EBX + 0x158]               ; 004cabee
    PUSH EAX                            ; 004cabf4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004cabf5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,[0x0061d95c]                ; 004cabfa | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xd4]      ; 004cabff | g_CGameInstance.hero_number
    ADD ESP,0xc                         ; 004cac05
    CMP ECX,0x2                         ; 004cac08
    JZ 0x004cac3d                       ; 004cac0b
        ;   XREF to: 004cac3d (CONDITIONAL_JUMP)  ; LAB_004cac3d
    PUSH 0x3ecccccd                     ; 004cac0d
    PUSH 0x3e800000                     ; 004cac12
    MOV EDI,dword ptr [EBX + 0x154]     ; 004cac17
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004cac1d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 004cac22
    MOV dword ptr [EBP + -0x4],EAX      ; 004cac25
    SUB ESP,0x4                         ; 004cac28
    MOV EAX,dword ptr [EBP + -0x4]      ; 004cac2b
    MOV dword ptr [ESP],EAX             ; 004cac2e
    PUSH 0x5e120c                       ; 004cac31 | = "gb-die[1,6].wav"
    PUSH EBX                            ; 004cac36
    CALL dword ptr [EDI + 0x34]         ; 004cac37
    ADD ESP,0xc                         ; 004cac3a
    PUSH 0x0                            ; 004cac3d
        ;   Label: LAB_004cac3d
    PUSH 0x42480000                     ; 004cac3f
    PUSH 0x32                           ; 004cac44
    PUSH EBX                            ; 004cac46
    MOV EDI,dword ptr [0x0061dca4]      ; 004cac47 | g_CGorePtr
    PUSH EDI                            ; 004cac4d
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 ; 004cac4e
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 004cac53
    FLD float ptr [ESI + 0x4]           ; 004cac56
        ;   Label: LAB_004cac56
    FLDZ                                ; 004cac59
    FCOMPP                              ; 004cac5b
    FNSTSW AX                           ; 004cac5d
    SAHF                                ; 004cac5f
    JC 0x004cacf2                       ; 004cac60
        ;   XREF to: 004cacf2 (CONDITIONAL_JUMP)  ; LAB_004cacf2
    PUSH ESI                            ; 004cac66
    PUSH EBX                            ; 004cac67
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 004cac68
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004cac6d
    MOV ESP,EBP                         ; 004cac70
    POP EBP                             ; 004cac72
    POP EDI                             ; 004cac73
    POP ESI                             ; 004cac74
    POP EBX                             ; 004cac75
    RET                                 ; 004cac76
    MOV dword ptr [ESI + 0x4],0x0       ; 004cac77
        ;   Label: LAB_004cac77
    JMP 0x004cab2f                      ; 004cac7e
        ;   XREF to: 004cab2f (UNCONDITIONAL_JUMP)  ; LAB_004cab2f
    MOV dword ptr [ESI + 0x4],EDI       ; 004cac83
        ;   Label: LAB_004cac83
    JMP 0x004cab57                      ; 004cac86
        ;   XREF to: 004cab57 (UNCONDITIONAL_JUMP)  ; LAB_004cab57
    FLD float ptr [ESI + 0x4]           ; 004cac8b
        ;   Label: LAB_004cac8b
    FLDZ                                ; 004cac8e
    FCOMPP                              ; 004cac90
    FNSTSW AX                           ; 004cac92
    SAHF                                ; 004cac94
    JNC 0x004cac56                      ; 004cac95
        ;   XREF to: 004cac56 (CONDITIONAL_JUMP)  ; LAB_004cac56
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 004cac97
    JZ 0x004cace3                       ; 004cac9e
        ;   XREF to: 004cace3 (CONDITIONAL_JUMP)  ; LAB_004cace3
    MOV EAX,[0x0061d95c]                ; 004caca0 | g_CGamePtr
        ;   Label: LAB_004caca0
    CMP dword ptr [EAX + 0xd4],0x2      ; 004caca5 | g_CGameInstance.hero_number
    JZ 0x004cac56                       ; 004cacac
        ;   XREF to: 004cac56 (CONDITIONAL_JUMP)  ; LAB_004cac56
    PUSH 0x3ecccccd                     ; 004cacae
    PUSH 0x3e800000                     ; 004cacb3
    MOV EDI,dword ptr [EBX + 0x154]     ; 004cacb8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004cacbe
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 004cacc3
    MOV dword ptr [EBP + -0x4],EAX      ; 004cacc6
    SUB ESP,0x4                         ; 004cacc9
    MOV EAX,dword ptr [EBP + -0x4]      ; 004caccc
    MOV dword ptr [ESP],EAX             ; 004caccf
    PUSH 0x5e121c                       ; 004cacd2 | = "gb-hit[1,6].wav"
    PUSH EBX                            ; 004cacd7
    CALL dword ptr [EDI + 0x34]         ; 004cacd8
    ADD ESP,0xc                         ; 004cacdb
    JMP 0x004cac56                      ; 004cacde
        ;   XREF to: 004cac56 (UNCONDITIONAL_JUMP)  ; LAB_004cac56
    PUSH 0x1                            ; 004cace3
        ;   Label: LAB_004cace3
    PUSH 0x8                            ; 004cace5
    PUSH EDI                            ; 004cace7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004cace8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004caced
    JMP 0x004caca0                      ; 004cacf0
        ;   XREF to: 004caca0 (UNCONDITIONAL_JUMP)  ; LAB_004caca0
    MOV EAX,[0x0061d95c]                ; 004cacf2 | g_CGamePtr
        ;   Label: LAB_004cacf2
    PUSH EAX                            ; 004cacf7 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320 ; 004cacf8
        ;   XREF to: 004d6320 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cacfd
    PUSH ESI                            ; 004cad00
    PUSH EBX                            ; 004cad01
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 004cad02
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004cad07
    MOV ESP,EBP                         ; 004cad0a
    POP EBP                             ; 004cad0c
    POP EDI                             ; 004cad0d
    POP ESI                             ; 004cad0e
    POP EBX                             ; 004cad0f
    RET                                 ; 004cad10

