; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_0058fcb0(CStranger *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005f6f61
;   TerminatedCString s_Using_auto_health_005f6f67
;   TerminatedCString s_hit_points_3_2f_005f6f7a
;   TerminatedCString s_stranger_die_wav_005f6f8d
;   TerminatedCString s_stranger_hit_wav_005f6fa0
;   undefined4 DAT_005f6fb5
;   undefined4 DAT_00606078
;   CConsole* g_CConsolePtr = 007db5f0
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   CConsole g_CConsoleInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.auto_use_health
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
;   core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058fcb0
        ;   Label: core_stranger.cpp_CStranger_processDamage_FUN_0058fcb0
    PUSH ESI                            ; 0058fcb1
    PUSH EDI                            ; 0058fcb2
    PUSH EBP                            ; 0058fcb3
    MOV EBP,ESP                         ; 0058fcb4
    SUB ESP,0x4                         ; 0058fcb6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058fcb9
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058fcbc
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 0058fcbf
    TEST EDX,EDX                        ; 0058fcc5
    JNZ 0x0058ff13                      ; 0058fcc7
        ;   XREF to: 0058ff13 (CONDITIONAL_JUMP)  ; LAB_0058ff13
    MOV EAX,[0x0061d95c]                ; 0058fccd | g_CGamePtr
    CMP dword ptr [EAX + 0x1ec],0x0     ; 0058fcd2 | g_CGameInstance.god_mode_enabled
    JNZ 0x0058ff1a                      ; 0058fcd9
        ;   XREF to: 0058ff1a (CONDITIONAL_JUMP)  ; LAB_0058ff1a
    MOV EAX,[0x0061d95c]                ; 0058fcdf | g_CGamePtr
        ;   Label: LAB_0058fcdf
    MOV EDI,dword ptr [EAX + 0x248]     ; 0058fce4 | g_CGameInstance.allow_damage_flag
    TEST EDI,EDI                        ; 0058fcea
    JNZ 0x0058fcf1                      ; 0058fcec
        ;   XREF to: 0058fcf1 (CONDITIONAL_JUMP)  ; LAB_0058fcf1
    MOV dword ptr [ESI + 0x4],EDI       ; 0058fcee
    PUSH EBX                            ; 0058fcf1
        ;   Label: LAB_0058fcf1
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80 ; 0058fcf2
        ;   XREF to: 004ebe80 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80(CHero * this_ptr)
    FLD float ptr [EBX + 0xc1d0]        ; 0058fcf7
    FLDZ                                ; 0058fcfd
    ADD ESP,0x4                         ; 0058fcff
    FCOMPP                              ; 0058fd02
    FNSTSW AX                           ; 0058fd04
    SAHF                                ; 0058fd06
    JNC 0x0058fd13                      ; 0058fd07
        ;   XREF to: 0058fd13 (CONDITIONAL_JUMP)  ; LAB_0058fd13
    CMP dword ptr [ESI + 0x30],0xb      ; 0058fd09
    JG 0x0058ff22                       ; 0058fd0d
        ;   XREF to: 0058ff22 (CONDITIONAL_JUMP)  ; LAB_0058ff22
    FLD float ptr [0x00606078]          ; 0058fd13 | DAT_00606078
        ;   Label: LAB_0058fd13
    PUSH 0x5f6f61                       ; 0058fd19 | = "CBugs"
    FSTP float ptr [EBX + 0xc1d0]       ; 0058fd1e
    MOV EDX,dword ptr [ESI + 0x38]      ; 0058fd24
    PUSH EDX                            ; 0058fd27
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0058fd28
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0058fd2d
    TEST EAX,EAX                        ; 0058fd30
    JZ 0x0058fd3e                       ; 0058fd32
        ;   XREF to: 0058fd3e (CONDITIONAL_JUMP)  ; LAB_0058fd3e
    MOV dword ptr [EBX + 0xc1d0],0x3e19999a ; 0058fd34
    FLD float ptr [ESI + 0x4]           ; 0058fd3e
        ;   Label: LAB_0058fd3e
    FSUBR float ptr [EBX + 0x2538]      ; 0058fd41
    MOV EAX,[0x0061d95c]                ; 0058fd47 | g_CGamePtr
    FSTP float ptr [EBX + 0x2538]       ; 0058fd4c
    CMP dword ptr [EAX + 0xdc],0x0      ; 0058fd52 | g_CGameInstance.auto_use_health
    JZ 0x0058fdbc                       ; 0058fd59
        ;   XREF to: 0058fdbc (CONDITIONAL_JUMP)  ; LAB_0058fdbc
    CMP dword ptr [ESI + 0x30],0xb      ; 0058fd5b
    JLE 0x0058fdbc                      ; 0058fd5f
        ;   XREF to: 0058fdbc (CONDITIONAL_JUMP)  ; LAB_0058fdbc
    FLD float ptr [EBX + 0x2538]        ; 0058fd61
    FLDZ                                ; 0058fd67
    FCOMPP                              ; 0058fd69
    FNSTSW AX                           ; 0058fd6b
    SAHF                                ; 0058fd6d
    JC 0x0058fdbc                       ; 0058fd6e
        ;   XREF to: 0058fdbc (CONDITIONAL_JUMP)  ; LAB_0058fdbc
    PUSH 0x5f6f67                       ; 0058fd70 | = "Using auto health\n"
    MOV EAX,[0x00611100]                ; 0058fd75 | g_CConsolePtr
    PUSH EAX                            ; 0058fd7a | g_CConsoleInstance
    MOV dword ptr [EBX + 0x2538],0x0    ; 0058fd7b
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0058fd85
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0058fd8a
    LEA EAX,[EBX + 0x1fae8]             ; 0058fd8d
    PUSH EAX                            ; 0058fd93
    CALL core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0 ; 0058fd94
        ;   XREF to: 004fc3e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0058fd99
    SUB ESP,0x8                         ; 0058fd9c
    FLD float ptr [EBX + 0x2538]        ; 0058fd9f
    FSTP double ptr [ESP]               ; 0058fda5
    PUSH 0x5f6f7a                       ; 0058fda8 | = "hit points: %3.2f\n"
    MOV EDX,dword ptr [0x00611100]      ; 0058fdad | g_CConsolePtr
    PUSH EDX                            ; 0058fdb3 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0058fdb4
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0058fdb9
    FLD float ptr [EBX + 0x2538]        ; 0058fdbc
        ;   Label: LAB_0058fdbc
    FLDZ                                ; 0058fdc2
    LEA EDI,[EBX + 0x158]               ; 0058fdc4
    FCOMPP                              ; 0058fdca
    FNSTSW AX                           ; 0058fdcc
    SAHF                                ; 0058fdce
    JC 0x0058ff86                       ; 0058fdcf
        ;   XREF to: 0058ff86 (CONDITIONAL_JUMP)  ; LAB_0058ff86
    PUSH EBX                            ; 0058fdd5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058fdd6
    MOV dword ptr [EBX + 0x2538],0x0    ; 0058fddc
    CALL dword ptr [EAX + 0xf0]         ; 0058fde6
    ADD ESP,0x4                         ; 0058fdec
    PUSH EDI                            ; 0058fdef
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0058fdf0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058fdf5
    ADD ESP,0x4                         ; 0058fdf8
    CMP EAX,0x36                        ; 0058fdfb
    JZ 0x0058fe95                       ; 0058fdfe
        ;   XREF to: 0058fe95 (CONDITIONAL_JUMP)  ; LAB_0058fe95
    PUSH EDI                            ; 0058fe04
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0058fe05
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058fe0a
    ADD ESP,0x4                         ; 0058fe0d
    CMP EAX,0x35                        ; 0058fe10
    JZ 0x0058fe95                       ; 0058fe13
        ;   XREF to: 0058fe95 (CONDITIONAL_JUMP)  ; LAB_0058fe95
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 0058fe19
    JZ 0x0058ff30                       ; 0058fe20
        ;   XREF to: 0058ff30 (CONDITIONAL_JUMP)  ; LAB_0058ff30
    PUSH 0x1                            ; 0058fe26
        ;   Label: LAB_0058fe26
    PUSH 0x1a                           ; 0058fe28
    LEA EAX,[EBX + 0x158]               ; 0058fe2a
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 0058fe30
    PUSH EAX                            ; 0058fe3a
    MOV dword ptr [EBX + 0x20000],0x0   ; 0058fe3b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058fe45
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0058fe45
    ADD ESP,0xc                         ; 0058fe4a
    MOV EDI,dword ptr [EBX + 0x2023c]   ; 0058fe4d
    PUSH EDI                            ; 0058fe53
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0058fe54
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV EAX,dword ptr [ESI + 0x30]      ; 0058fe59
    ADD ESP,0x4                         ; 0058fe5c
    CMP EAX,0x1                         ; 0058fe5f
    JZ 0x0058fe7c                       ; 0058fe62
        ;   XREF to: 0058fe7c (CONDITIONAL_JUMP)  ; LAB_0058fe7c
    PUSH 0x5f6f8d                       ; 0058fe64 | = "stranger_die??.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058fe69
    PUSH EBX                            ; 0058fe6f
    CALL dword ptr [EAX + 0x2c]         ; 0058fe70
    ADD ESP,0x8                         ; 0058fe73
    MOV dword ptr [EBX + 0x2023c],EAX   ; 0058fe76
    PUSH 0x0                            ; 0058fe7c
        ;   Label: LAB_0058fe7c
    PUSH 0x42480000                     ; 0058fe7e
    PUSH 0x32                           ; 0058fe83
    PUSH EBX                            ; 0058fe85
    MOV EDX,dword ptr [0x0061dca4]      ; 0058fe86 | g_CGorePtr
    PUSH EDX                            ; 0058fe8c
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 ; 0058fe8d
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 0058fe92
    MOV ECX,dword ptr [EBX + 0x20004]   ; 0058fe95
        ;   Label: LAB_0058fe95
    CMP ECX,dword ptr [EBX + 0x25b0]    ; 0058fe9b
    JNZ 0x0058fead                      ; 0058fea1
        ;   XREF to: 0058fead (CONDITIONAL_JUMP)  ; LAB_0058fead
    MOV dword ptr [EBX + 0x20004],0x0   ; 0058fea3
    PUSH 0x0                            ; 0058fead
        ;   Label: LAB_0058fead
    PUSH 0x0                            ; 0058feaf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058feb1
    PUSH EBX                            ; 0058feb7
    CALL dword ptr [EAX + 0x128]        ; 0058feb8
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058febe
    MOV EDI,dword ptr [EBX + 0x20004]   ; 0058fec4
    ADD ESP,0xc                         ; 0058feca
    CMP EAX,EDI                         ; 0058fecd
    JNZ 0x0058fedb                      ; 0058fecf
        ;   XREF to: 0058fedb (CONDITIONAL_JUMP)  ; LAB_0058fedb
    MOV dword ptr [EBX + 0x20004],0x0   ; 0058fed1
    PUSH 0x0                            ; 0058fedb
        ;   Label: LAB_0058fedb
    PUSH 0x1                            ; 0058fedd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058fedf
    PUSH EBX                            ; 0058fee5
    CALL dword ptr [EAX + 0x128]        ; 0058fee6
    ADD ESP,0xc                         ; 0058feec
    FLD float ptr [ESI + 0x4]           ; 0058feef
        ;   Label: LAB_0058feef
    FLDZ                                ; 0058fef2
    FCOMPP                              ; 0058fef4
    FNSTSW AX                           ; 0058fef6
    SAHF                                ; 0058fef8
    JNC 0x0058ff09                      ; 0058fef9
        ;   XREF to: 0058ff09 (CONDITIONAL_JUMP)  ; LAB_0058ff09
    MOV EAX,[0x0061d95c]                ; 0058fefb | g_CGamePtr
    PUSH EAX                            ; 0058ff00 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320 ; 0058ff01
        ;   XREF to: 004d6320 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(CGame * this_ptr)
    ADD ESP,0x4                         ; 0058ff06
    PUSH ESI                            ; 0058ff09
        ;   Label: LAB_0058ff09
    PUSH EBX                            ; 0058ff0a
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 0058ff0b
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0058ff10
    MOV ESP,EBP                         ; 0058ff13
        ;   Label: LAB_0058ff13
    POP EBP                             ; 0058ff15
    POP EDI                             ; 0058ff16
    POP ESI                             ; 0058ff17
    POP EBX                             ; 0058ff18
    RET                                 ; 0058ff19
    MOV dword ptr [ESI + 0x4],EDX       ; 0058ff1a
        ;   Label: LAB_0058ff1a
    JMP 0x0058fcdf                      ; 0058ff1d
        ;   XREF to: 0058fcdf (UNCONDITIONAL_JUMP)  ; LAB_0058fcdf
    MOV dword ptr [ESI + 0x4],0x0       ; 0058ff22
        ;   Label: LAB_0058ff22
    MOV ESP,EBP                         ; 0058ff29
    POP EBP                             ; 0058ff2b
    POP EDI                             ; 0058ff2c
    POP ESI                             ; 0058ff2d
    POP EBX                             ; 0058ff2e
    RET                                 ; 0058ff2f
    CMP dword ptr [EBX + 0x20000],0x0   ; 0058ff30
        ;   Label: LAB_0058ff30
    JNZ 0x0058fe26                      ; 0058ff37
        ;   XREF to: 0058fe26 (CONDITIONAL_JUMP)  ; LAB_0058fe26
    MOV ECX,dword ptr [ESI + 0x30]      ; 0058ff3d
    CMP ECX,0x1                         ; 0058ff40
    JNZ 0x0058ff4e                      ; 0058ff43
        ;   XREF to: 0058ff4e (CONDITIONAL_JUMP)  ; LAB_0058ff4e
    PUSH ECX                            ; 0058ff45
    PUSH 0x34                           ; 0058ff46
    PUSH EDI                            ; 0058ff48
    JMP 0x0058fe45                      ; 0058ff49
        ;   XREF to: 0058fe45 (UNCONDITIONAL_JUMP)  ; LAB_0058fe45
    PUSH 0x1                            ; 0058ff4e
        ;   Label: LAB_0058ff4e
    PUSH 0x42c80000                     ; 0058ff50
    PUSH 0x0                            ; 0058ff55
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0058ff57
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 0058ff5c
    ADD ESP,0x8                         ; 0058ff5f
    FLD float ptr [EBP + -0x4]          ; 0058ff62
    FCOMP float ptr [0x005f6fb5]        ; 0058ff65 | DAT_005f6fb5
    FNSTSW AX                           ; 0058ff6b
    SAHF                                ; 0058ff6d
    SETBE AL                            ; 0058ff6e
    AND EAX,0xff                        ; 0058ff71
    ADD EAX,0x32                        ; 0058ff76
    PUSH EAX                            ; 0058ff79
    LEA EAX,[EBX + 0x158]               ; 0058ff7a
    PUSH EAX                            ; 0058ff80
    JMP 0x0058fe45                      ; 0058ff81
        ;   XREF to: 0058fe45 (UNCONDITIONAL_JUMP)  ; LAB_0058fe45
    FLD float ptr [ESI + 0x4]           ; 0058ff86
        ;   Label: LAB_0058ff86
    FLDZ                                ; 0058ff89
    FCOMPP                              ; 0058ff8b
    FNSTSW AX                           ; 0058ff8d
    SAHF                                ; 0058ff8f
    JNC 0x0058feef                      ; 0058ff90
        ;   XREF to: 0058feef (CONDITIONAL_JUMP)  ; LAB_0058feef
    CMP dword ptr [ESI + 0x30],0x69     ; 0058ff96
    JZ 0x0058ffeb                       ; 0058ff9a
        ;   XREF to: 0058ffeb (CONDITIONAL_JUMP)  ; LAB_0058ffeb
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 0058ff9c
    JNZ 0x0058ffeb                      ; 0058ffa3
        ;   XREF to: 0058ffeb (CONDITIONAL_JUMP)  ; LAB_0058ffeb
    CMP dword ptr [EBX + 0x20000],0x0   ; 0058ffa5
    JNZ 0x0058ffeb                      ; 0058ffac
        ;   XREF to: 0058ffeb (CONDITIONAL_JUMP)  ; LAB_0058ffeb
    CMP dword ptr [EBX + 0x1ff5c],0x0   ; 0058ffae
    JNZ 0x0058ffeb                      ; 0058ffb5
        ;   XREF to: 0058ffeb (CONDITIONAL_JUMP)  ; LAB_0058ffeb
    MOV EAX,[0x02c8ad44]                ; 0058ffb7 | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 0058ffbc
    MOV EDX,dword ptr [ESI + 0x34]      ; 0058ffbd
    PUSH EDX                            ; 0058ffc0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058ffc1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058ffc6
    TEST EAX,EAX                        ; 0058ffc9
    JZ 0x0058ffde                       ; 0058ffcb
        ;   XREF to: 0058ffde (CONDITIONAL_JUMP)  ; LAB_0058ffde
    PUSH 0x3eaa7efa                     ; 0058ffcd
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0058ffd2
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0058ffd7
    TEST EAX,EAX                        ; 0058ffda
    JZ 0x0058ffeb                       ; 0058ffdc
        ;   XREF to: 0058ffeb (CONDITIONAL_JUMP)  ; LAB_0058ffeb
    PUSH 0x1                            ; 0058ffde
        ;   Label: LAB_0058ffde
    PUSH 0x31                           ; 0058ffe0
    PUSH EDI                            ; 0058ffe2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058ffe3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058ffe8
    MOV ECX,dword ptr [EBX + 0x2023c]   ; 0058ffeb
        ;   Label: LAB_0058ffeb
    PUSH ECX                            ; 0058fff1
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0058fff2
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0058fff7
    TEST EAX,EAX                        ; 0058fffa
    JNZ 0x0058feef                      ; 0058fffc
        ;   XREF to: 0058feef (CONDITIONAL_JUMP)  ; LAB_0058feef
    PUSH 0x5f6fa0                       ; 00590002 | = "stranger_hit??.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590007
    PUSH EBX                            ; 0059000d
    CALL dword ptr [EAX + 0x2c]         ; 0059000e
    ADD ESP,0x8                         ; 00590011
    MOV dword ptr [EBX + 0x2023c],EAX   ; 00590014
    JMP 0x0058feef                      ; 0059001a
        ;   XREF to: 0058feef (UNCONDITIONAL_JUMP)  ; LAB_0058feef

