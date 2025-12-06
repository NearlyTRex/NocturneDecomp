; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_WriteScriptFile_FUN_00560b50()
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0e68
;
; Referenced Globals:
;   TerminatedCString s_CScript_version_00643501
;   TerminatedCString s_d_00643515
;   TerminatedCString s_gGame_letterboxMode_00643519
;   TerminatedCString s_d_00643532
;   TerminatedCString s_gGame_allowDamageFlag_00643536
;   TerminatedCString s_d_00643551
;   TerminatedCString s_gGame_allowEnemyAttackFl_00643555
;   TerminatedCString s_d_00643575
;   TerminatedCString s_letterBoxBlackT_00643579
;   TerminatedCString s_g_0064358d
;   TerminatedCString s_nextCmd_00643591
;   TerminatedCString s_d_0064359d
;   TerminatedCString s_currentMessage_006435a1
;   TerminatedCString s_s_006435b4
;   TerminatedCString s_cmdTimer_006435ba
;   ... and 18 more
;
; Called Functions:
;   core_script.cpp_CalculateCRC_FUN_00560d80
;   core_script.cpp_FUN_005607e0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560b50
        ;   Label: core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
    PUSH ESI                            ; 00560b51
    PUSH EDI                            ; 00560b52
    PUSH EBP                            ; 00560b53
    MOV EBP,dword ptr [ESP + 0x14]      ; 00560b54
    MOV EDI,dword ptr [ESP + 0x18]      ; 00560b58
    PUSH 0x643501                       ; 00560b5c | = "// CScript version\n" | s_CScript_version_00643501 = // CScript version

    PUSH EDI                            ; 00560b61
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560b62 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560b67
    PUSH 0x6                            ; 00560b6a
    PUSH 0x643515                       ; 00560b6c | = "%d\n" | s_d_00643515 = %d

    PUSH EDI                            ; 00560b71
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560b72 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560b77
    PUSH 0x643519                       ; 00560b7a | = "// gGame->letterboxMode\n" | s_gGame_letterboxMode_00643519 = // gGame->letterboxMode

    PUSH EDI                            ; 00560b7f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560b80 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 00560b85 | CGame g_CGameInstance | CGame * g_CGamePtr
    ADD ESP,0x8                         ; 00560b8a
    MOV EDX,dword ptr [EAX + 0x228]     ; 00560b8d | DAT_02d81cc4
    PUSH EDX                            ; 00560b93
    PUSH 0x643532                       ; 00560b94 | = "%d\n" | s_d_00643532 = %d

    PUSH EDI                            ; 00560b99
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560b9a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560b9f
    PUSH 0x643536                       ; 00560ba2 | = "// gGame->allowDamageFlag\n" | s_gGame_allowDamageFlag_00643536 = // gGame->allowDamageFlag

    PUSH EDI                            ; 00560ba7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560ba8 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 00560bad | CGame g_CGameInstance | CGame * g_CGamePtr
    ADD ESP,0x8                         ; 00560bb2
    MOV ECX,dword ptr [EAX + 0x22c]     ; 00560bb5 | DAT_02d81cc8
    PUSH ECX                            ; 00560bbb
    PUSH 0x643551                       ; 00560bbc | = "%d\n" | s_d_00643551 = %d

    PUSH EDI                            ; 00560bc1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560bc2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560bc7
    PUSH 0x643555                       ; 00560bca | = "// gGame->allowEnemyAttackFlag\n" | s_gGame_allowEnemyAttackFl_00643555 = // gGame->allowEnemyAttackFlag

    PUSH EDI                            ; 00560bcf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560bd0 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 00560bd5 | CGame g_CGameInstance | CGame * g_CGamePtr
    ADD ESP,0x8                         ; 00560bda
    MOV EBX,dword ptr [EAX + 0x230]     ; 00560bdd | DAT_02d81ccc
    PUSH EBX                            ; 00560be3
    PUSH 0x643575                       ; 00560be4 | = "%d\n" | s_d_00643575 = %d

    PUSH EDI                            ; 00560be9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560bea | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560bef
    PUSH 0x643579                       ; 00560bf2 | = "// letterBoxBlackT\n" | s_letterBoxBlackT_00643579 = // letterBoxBlackT

    PUSH EDI                            ; 00560bf7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560bf8 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560bfd
    SUB ESP,0x8                         ; 00560c00
    FLD float ptr [0x0310f4a0]          ; 00560c03 | DAT_0310f4a0
    FSTP double ptr [ESP]               ; 00560c09
    PUSH 0x64358d                       ; 00560c0c | = "%g\n" | s_g_0064358d = %g

    PUSH EDI                            ; 00560c11
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c12 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00560c17
    PUSH 0x643591                       ; 00560c1a | = "// nextCmd\n" | s_nextCmd_00643591 = // nextCmd

    PUSH EDI                            ; 00560c1f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c20 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560c25
    MOV ESI,dword ptr [EBP + 0x48]      ; 00560c28
    PUSH ESI                            ; 00560c2b
    PUSH 0x64359d                       ; 00560c2c | = "%d\n" | s_d_0064359d = %d

    PUSH EDI                            ; 00560c31
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c32 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560c37
    PUSH 0x6435a1                       ; 00560c3a | = "// currentMessage\n" | s_currentMessage_006435a1 = // currentMessage

    PUSH EDI                            ; 00560c3f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c40 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560c45
    LEA EAX,[EBP + 0x54]                ; 00560c48
    PUSH EAX                            ; 00560c4b
    PUSH 0x6435b4                       ; 00560c4c | = "\"%s\"\n" | s_s_006435b4 = "%s"

    PUSH EDI                            ; 00560c51
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c52 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560c57
    PUSH 0x6435ba                       ; 00560c5a | = "// cmdTimer\n" | s_cmdTimer_006435ba = // cmdTimer

    PUSH EDI                            ; 00560c5f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c60 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560c65
    SUB ESP,0x8                         ; 00560c68
    FLD float ptr [EBP + 0x4c]          ; 00560c6b
    FSTP double ptr [ESP]               ; 00560c6e
    PUSH 0x6435c7                       ; 00560c71 | = "%g\n" | s_g_006435c7 = %g

    PUSH EDI                            ; 00560c76
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c77 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00560c7c
    PUSH 0x6435cb                       ; 00560c7f | = "// dialogWavTime\n" | s_dialogWavTime_006435cb = // dialogWavTime

    PUSH EDI                            ; 00560c84
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c85 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560c8a
    SUB ESP,0x8                         ; 00560c8d
    FLD float ptr [EBP + 0x50]          ; 00560c90
    FSTP double ptr [ESP]               ; 00560c93
    PUSH 0x6435dd                       ; 00560c96 | = "%g\n" | s_g_006435dd = %g

    PUSH EDI                            ; 00560c9b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560c9c | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00560ca1
    PUSH 0x6435e1                       ; 00560ca4 | = "// whoIsSpeaking\n" | s_whoIsSpeaking_006435e1 = // whoIsSpeaking

    PUSH EDI                            ; 00560ca9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560caa | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560caf
    LEA EAX,[EBP + 0x4]                 ; 00560cb2
    PUSH EAX                            ; 00560cb5
    PUSH EDI                            ; 00560cb6
    CALL core_script.cpp_FUN_005607e0   ; 00560cb7 | undefined core_script.cpp_FUN_005607e0()
        ;   XREF to: 005607e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560cbc
    PUSH 0x6435f3                       ; 00560cbf | = "// focusActor\n" | s_focusActor_006435f3 = // focusActor

    PUSH EDI                            ; 00560cc4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560cc5 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560cca
    LEA EAX,[EBP + 0xc]                 ; 00560ccd
    PUSH EAX                            ; 00560cd0
    PUSH EDI                            ; 00560cd1
    CALL core_script.cpp_FUN_005607e0   ; 00560cd2 | undefined core_script.cpp_FUN_005607e0()
        ;   XREF to: 005607e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560cd7
    PUSH 0x643602                       ; 00560cda | = "// focusActorLocked\n" | s_focusActorLocked_00643602 = // focusActorLocked

    PUSH EDI                            ; 00560cdf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560ce0 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560ce5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00560ce8
    PUSH EAX                            ; 00560ceb
    PUSH 0x643617                       ; 00560cec | = "%d\n" | s_d_00643617 = %d

    PUSH EDI                            ; 00560cf1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560cf2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560cf7
    PUSH 0x64361b                       ; 00560cfa | = "// callStack count, list\n" | s_callStack_count_list_0064361b = // callStack count, list

    PUSH EDI                            ; 00560cff
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560d00 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560d05
    MOV EDX,dword ptr [EBP + 0x45c]     ; 00560d08
    PUSH EDX                            ; 00560d0e
    PUSH 0x643635                       ; 00560d0f | = "%d\n" | s_d_00643635 = %d

    PUSH EDI                            ; 00560d14
    XOR ESI,ESI                         ; 00560d15
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560d17 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + 0x45c]     ; 00560d1c
    ADD ESP,0xc                         ; 00560d22
    TEST ECX,ECX                        ; 00560d25
    JLE 0x00560d50                      ; 00560d27 | LAB_00560d50
        ;   XREF to: 00560d50 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 00560d29
    MOV EAX,dword ptr [EBX + 0x460]     ; 00560d2b
        ;   Label: LAB_00560d2b
    PUSH EAX                            ; 00560d31
    PUSH 0x643639                       ; 00560d32 | = "%d\n" | s_d_00643639 = %d

    PUSH EDI                            ; 00560d37
    ADD EBX,0x4                         ; 00560d38
    INC ESI                             ; 00560d3b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560d3c | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP + 0x45c]     ; 00560d41
    ADD ESP,0xc                         ; 00560d47
    CMP ESI,EDX                         ; 00560d4a
    JL 0x00560d2b                       ; 00560d4c | LAB_00560d2b
        ;   XREF to: 00560d2b (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 00560d4e
    PUSH 0x64363d                       ; 00560d50 | = "// CRC\n" | s_CRC_0064363d = // CRC

        ;   Label: LAB_00560d50
    PUSH EDI                            ; 00560d55
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560d56 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560d5b
    PUSH EBP                            ; 00560d5e
    CALL core_script.cpp_CalculateCRC_FUN_00560d80 ; 00560d5f | undefined core_script.cpp_CalculateCRC_FUN_00560d80()
        ;   XREF to: 00560d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00560d64
    PUSH EAX                            ; 00560d67
    PUSH 0x643645                       ; 00560d68 | = "%u\n" | s_u_00643645 = %u

    PUSH EDI                            ; 00560d6d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560d6e | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00560d73
    POP EBP                             ; 00560d76
    POP EDI                             ; 00560d77
    POP ESI                             ; 00560d78
    POP EBX                             ; 00560d79
    RET                                 ; 00560d7a

