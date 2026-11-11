; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_saveState_FUN_00530e00(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bdba8
;
; Referenced Globals:
;   TerminatedCString s_CScript_version_005cfe02
;   undefined4 DAT_005cfe16
;   TerminatedCString s_gGame_letterboxMode_005cfe1a
;   undefined4 DAT_005cfe33
;   TerminatedCString s_gGame_allowDamageFlag_005cfe37
;   undefined4 DAT_005cfe52
;   TerminatedCString s_gGame_allowEnemyAttackFl_005cfe56
;   undefined4 DAT_005cfe76
;   TerminatedCString s_letterBoxBlackT_005cfe7a
;   undefined4 DAT_005cfe8e
;   TerminatedCString s_nextCmd_005cfe92
;   undefined4 DAT_005cfe9e
;   TerminatedCString s_currentMessage_005cfea2
;   TerminatedCString s_s_005cfeb5
;   TerminatedCString s_cmdTimer_005cfebb
;   ... and 17 more
;
; Called Functions:
;   core_script.cpp_CScript_computeChecksum_FUN_00531030
;   core_script.cpp_writeActorReference_FUN_00530a90
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530e00
        ;   Label: core_script.cpp_CScript_saveState_FUN_00530e00
    PUSH ESI                            ; 00530e01
    PUSH EDI                            ; 00530e02
    PUSH EBP                            ; 00530e03
    MOV EBP,dword ptr [ESP + 0x14]      ; 00530e04
    MOV EDI,dword ptr [ESP + 0x18]      ; 00530e08
    PUSH 0x5cfe02                       ; 00530e0c | = "// CScript version\n"
    PUSH EDI                            ; 00530e11
    CALL crt_unknown.c_FUN_005a3140     ; 00530e12
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530e17
    PUSH 0x6                            ; 00530e1a
    PUSH 0x5cfe16                       ; 00530e1c | DAT_005cfe16
    PUSH EDI                            ; 00530e21
    CALL crt_unknown.c_FUN_005a3140     ; 00530e22
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530e27
    PUSH 0x5cfe1a                       ; 00530e2a | = "// gGame->letterboxMode\n"
    PUSH EDI                            ; 00530e2f
    CALL crt_unknown.c_FUN_005a3140     ; 00530e30
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,[0x005fe9dc]                ; 00530e35 | g_CGamePtr
    ADD ESP,0x8                         ; 00530e3a
    MOV EDX,dword ptr [EAX + 0x24c]     ; 00530e3d | g_CGameInstance.letterbox_mode
    PUSH EDX                            ; 00530e43
    PUSH 0x5cfe33                       ; 00530e44 | DAT_005cfe33
    PUSH EDI                            ; 00530e49
    CALL crt_unknown.c_FUN_005a3140     ; 00530e4a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530e4f
    PUSH 0x5cfe37                       ; 00530e52 | = "// gGame->allowDamageFlag\n"
    PUSH EDI                            ; 00530e57
    CALL crt_unknown.c_FUN_005a3140     ; 00530e58
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,[0x005fe9dc]                ; 00530e5d | g_CGamePtr
    ADD ESP,0x8                         ; 00530e62
    MOV ECX,dword ptr [EAX + 0x250]     ; 00530e65 | g_CGameInstance.allow_damage_flag
    PUSH ECX                            ; 00530e6b
    PUSH 0x5cfe52                       ; 00530e6c | DAT_005cfe52
    PUSH EDI                            ; 00530e71
    CALL crt_unknown.c_FUN_005a3140     ; 00530e72
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530e77
    PUSH 0x5cfe56                       ; 00530e7a | = "// gGame->allowEnemyAttackFlag\n"
    PUSH EDI                            ; 00530e7f
    CALL crt_unknown.c_FUN_005a3140     ; 00530e80
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,[0x005fe9dc]                ; 00530e85 | g_CGamePtr
    ADD ESP,0x8                         ; 00530e8a
    MOV EBX,dword ptr [EAX + 0x254]     ; 00530e8d | g_CGameInstance.allow_enemy_attack_flag
    PUSH EBX                            ; 00530e93
    PUSH 0x5cfe76                       ; 00530e94 | DAT_005cfe76
    PUSH EDI                            ; 00530e99
    CALL crt_unknown.c_FUN_005a3140     ; 00530e9a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530e9f
    PUSH 0x5cfe7a                       ; 00530ea2 | = "// letterBoxBlackT\n"
    PUSH EDI                            ; 00530ea7
    CALL crt_unknown.c_FUN_005a3140     ; 00530ea8
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530ead
    SUB ESP,0x8                         ; 00530eb0
    FLD float ptr [0x01ed7010]          ; 00530eb3 | DAT_01ed7010
    FSTP double ptr [ESP]               ; 00530eb9
    PUSH 0x5cfe8e                       ; 00530ebc | DAT_005cfe8e
    PUSH EDI                            ; 00530ec1
    CALL crt_unknown.c_FUN_005a3140     ; 00530ec2
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 00530ec7
    PUSH 0x5cfe92                       ; 00530eca | = "// nextCmd\n"
    PUSH EDI                            ; 00530ecf
    CALL crt_unknown.c_FUN_005a3140     ; 00530ed0
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530ed5
    MOV ESI,dword ptr [EBP + 0x44]      ; 00530ed8
    PUSH ESI                            ; 00530edb
    PUSH 0x5cfe9e                       ; 00530edc | DAT_005cfe9e
    PUSH EDI                            ; 00530ee1
    CALL crt_unknown.c_FUN_005a3140     ; 00530ee2
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530ee7
    PUSH 0x5cfea2                       ; 00530eea | = "// currentMessage\n"
    PUSH EDI                            ; 00530eef
    CALL crt_unknown.c_FUN_005a3140     ; 00530ef0
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530ef5
    LEA EAX,[EBP + 0x50]                ; 00530ef8
    PUSH EAX                            ; 00530efb
    PUSH 0x5cfeb5                       ; 00530efc | = "\"%s\"\n"
    PUSH EDI                            ; 00530f01
    CALL crt_unknown.c_FUN_005a3140     ; 00530f02
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530f07
    PUSH 0x5cfebb                       ; 00530f0a | = "// cmdTimer\n"
    PUSH EDI                            ; 00530f0f
    CALL crt_unknown.c_FUN_005a3140     ; 00530f10
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530f15
    SUB ESP,0x8                         ; 00530f18
    FLD float ptr [EBP + 0x48]          ; 00530f1b
    FSTP double ptr [ESP]               ; 00530f1e
    PUSH 0x5cfec8                       ; 00530f21 | DAT_005cfec8
    PUSH EDI                            ; 00530f26
    CALL crt_unknown.c_FUN_005a3140     ; 00530f27
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 00530f2c
    PUSH 0x5cfecc                       ; 00530f2f | = "// dialogWavTime\n"
    PUSH EDI                            ; 00530f34
    CALL crt_unknown.c_FUN_005a3140     ; 00530f35
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530f3a
    SUB ESP,0x8                         ; 00530f3d
    FLD float ptr [EBP + 0x4c]          ; 00530f40
    FSTP double ptr [ESP]               ; 00530f43
    PUSH 0x5cfede                       ; 00530f46 | DAT_005cfede
    PUSH EDI                            ; 00530f4b
    CALL crt_unknown.c_FUN_005a3140     ; 00530f4c
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 00530f51
    PUSH 0x5cfee2                       ; 00530f54 | = "// whoIsSpeaking\n"
    PUSH EDI                            ; 00530f59
    CALL crt_unknown.c_FUN_005a3140     ; 00530f5a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530f5f
    LEA EAX,[EBP + 0x4]                 ; 00530f62
    PUSH EAX                            ; 00530f65
    PUSH EDI                            ; 00530f66
    CALL core_script.cpp_writeActorReference_FUN_00530a90 ; 00530f67
        ;   XREF to: 00530a90 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_writeActorReference_FUN_00530a90()
    ADD ESP,0x8                         ; 00530f6c
    PUSH 0x5cfef4                       ; 00530f6f | = "// focusActor\n"
    PUSH EDI                            ; 00530f74
    CALL crt_unknown.c_FUN_005a3140     ; 00530f75
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530f7a
    LEA EAX,[EBP + 0xc]                 ; 00530f7d
    PUSH EAX                            ; 00530f80
    PUSH EDI                            ; 00530f81
    CALL core_script.cpp_writeActorReference_FUN_00530a90 ; 00530f82
        ;   XREF to: 00530a90 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_writeActorReference_FUN_00530a90()
    ADD ESP,0x8                         ; 00530f87
    PUSH 0x5cff03                       ; 00530f8a | = "// focusActorLocked\n"
    PUSH EDI                            ; 00530f8f
    CALL crt_unknown.c_FUN_005a3140     ; 00530f90
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530f95
    MOV EAX,dword ptr [EBP + 0x14]      ; 00530f98
    PUSH EAX                            ; 00530f9b
    PUSH 0x5cff18                       ; 00530f9c | DAT_005cff18
    PUSH EDI                            ; 00530fa1
    CALL crt_unknown.c_FUN_005a3140     ; 00530fa2
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530fa7
    PUSH 0x5cff1c                       ; 00530faa | = "// callStack count, list\n"
    PUSH EDI                            ; 00530faf
    CALL crt_unknown.c_FUN_005a3140     ; 00530fb0
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00530fb5
    MOV EDX,dword ptr [EBP + 0x458]     ; 00530fb8
    PUSH EDX                            ; 00530fbe
    PUSH 0x5cff36                       ; 00530fbf | DAT_005cff36
    PUSH EDI                            ; 00530fc4
    XOR ESI,ESI                         ; 00530fc5
    CALL crt_unknown.c_FUN_005a3140     ; 00530fc7
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBP + 0x458]     ; 00530fcc
    ADD ESP,0xc                         ; 00530fd2
    TEST ECX,ECX                        ; 00530fd5
    JLE 0x00531000                      ; 00530fd7
        ;   XREF to: 00531000 (CONDITIONAL_JUMP)  ; LAB_00531000
    MOV EBX,EBP                         ; 00530fd9
    MOV EAX,dword ptr [EBX + 0x45c]     ; 00530fdb
        ;   Label: LAB_00530fdb
    PUSH EAX                            ; 00530fe1
    PUSH 0x5cff3a                       ; 00530fe2 | DAT_005cff3a
    PUSH EDI                            ; 00530fe7
    ADD EBX,0x4                         ; 00530fe8
    INC ESI                             ; 00530feb
    CALL crt_unknown.c_FUN_005a3140     ; 00530fec
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBP + 0x458]     ; 00530ff1
    ADD ESP,0xc                         ; 00530ff7
    CMP ESI,EDX                         ; 00530ffa
    JL 0x00530fdb                       ; 00530ffc
        ;   XREF to: 00530fdb (CONDITIONAL_JUMP)  ; LAB_00530fdb
    MOV EAX,EAX                         ; 00530ffe
    PUSH 0x5cff3e                       ; 00531000 | = "// CRC\n"
        ;   Label: LAB_00531000
    PUSH EDI                            ; 00531005
    CALL crt_unknown.c_FUN_005a3140     ; 00531006
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0053100b
    PUSH EBP                            ; 0053100e
    CALL core_script.cpp_CScript_computeChecksum_FUN_00531030 ; 0053100f
        ;   XREF to: 00531030 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_00531030(CScript * this_ptr)
    ADD ESP,0x4                         ; 00531014
    PUSH EAX                            ; 00531017
    PUSH 0x5cff46                       ; 00531018 | DAT_005cff46
    PUSH EDI                            ; 0053101d
    CALL crt_unknown.c_FUN_005a3140     ; 0053101e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00531023
    POP EBP                             ; 00531026
    POP EDI                             ; 00531027
    POP ESI                             ; 00531028
    POP EBX                             ; 00531029
    RET                                 ; 0053102a

