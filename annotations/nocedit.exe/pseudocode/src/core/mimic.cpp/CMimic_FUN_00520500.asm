; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mimic_cpp_CMimic_FUN_00520500(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_0051f780 at 0051f8db
;
; Referenced Globals:
;   TerminatedCString s_s_attacking_hero_006387b3
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   undefined4 g_CGabriellaClassInfo.name_hash
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_cloth.cpp_CCloth_setup_FUN_00439710
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520500
        ;   Label: core_mimic.cpp_CMimic_FUN_00520500
    PUSH ESI                            ; 00520501
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520502
    LEA EAX,[EBX + 0x158]               ; 00520506
    PUSH EAX                            ; 0052050c
    LEA EAX,[EBX + 0x30]                ; 0052050d
    PUSH EAX                            ; 00520510
    LEA EAX,[EBX + 0x20]                ; 00520511
    PUSH EAX                            ; 00520514
    LEA ESI,[EBX + 0xbf84]              ; 00520515
    PUSH ESI                            ; 0052051b
    MOV dword ptr [EBX + 0x4bdf4],0x2   ; 0052051c
    CALL core_cloth.cpp_CCloth_setup_FUN_00439710 ; 00520526
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_00439710(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0052052b
    MOV EDX,dword ptr [0x02d7b8d0]      ; 0052052e | g_CGabriellaClassInfo.name_hash
    MOV EAX,[0x02db87d0]                ; 00520534 | g_LocalHeroIndex
    PUSH EDX                            ; 00520539
    MOV ECX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0052053a | g_HeroActors
    PUSH ECX                            ; 00520541
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00520542
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 00520547
    ADD ESP,0x8                         ; 00520549
    TEST EAX,EAX                        ; 0052054c
    JNZ 0x005205ab                      ; 0052054e
        ;   XREF to: 005205ab (CONDITIONAL_JUMP)  ; LAB_005205ab
    MOV EAX,[0x02db87d0]                ; 00520550 | g_LocalHeroIndex
        ;   Label: LAB_00520550
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00520555 | g_HeroActors
    SUB ESP,0x4                         ; 0052055c
    FLD float ptr [EAX + 0x160]         ; 0052055f
    ADD EAX,0x158                       ; 00520565
    FSTP float ptr [ESP]                ; 0052056a
    PUSH EAX                            ; 0052056d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052056e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00520573
    PUSH EAX                            ; 00520576
    LEA ESI,[EBX + 0x158]               ; 00520577
    PUSH ESI                            ; 0052057d
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 0052057e
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00520583
    PUSH 0x1                            ; 00520586
    PUSH 0x1                            ; 00520588
    PUSH ESI                            ; 0052058a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052058b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520590
    PUSH EBX                            ; 00520593
    PUSH 0x6387b3                       ; 00520594 | = "%s attacking hero\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 00520599 | g_ConsolePtr | g_CConsolePtr
    PUSH EBX                            ; 0052059f | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005205a0
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005205a5
    POP ESI                             ; 005205a8
    POP EBX                             ; 005205a9
    RET                                 ; 005205aa
    PUSH EDI                            ; 005205ab
        ;   Label: LAB_005205ab
    MOV ECX,dword ptr [ESI + 0x104]     ; 005205ac
    LEA EAX,[ECX*0x8 + 0x0]             ; 005205b2
    ADD EAX,ECX                         ; 005205b9
    SHL EAX,0x3                         ; 005205bb
    LEA EDI,[EBX + 0x1165c]             ; 005205be
    SUB EAX,ECX                         ; 005205c4
    LEA ESI,[EDX + 0x252ec]             ; 005205c6
    LEA ECX,[EAX*0x4 + 0x0]             ; 005205cc
    PUSH EDI                            ; 005205d3
    MOV EAX,ECX                         ; 005205d4
    SHR ECX,0x2                         ; 005205d6
    MOVSD.REP ES:EDI,ESI                ; 005205d9
    MOV CL,AL                           ; 005205db
    AND CL,0x3                          ; 005205dd
    MOVSB.REP ES:EDI,ESI                ; 005205e0
    POP EDI                             ; 005205e2
    POP EDI                             ; 005205e3
    JMP 0x00520550                      ; 005205e4
        ;   XREF to: 00520550 (UNCONDITIONAL_JUMP)  ; LAB_00520550

