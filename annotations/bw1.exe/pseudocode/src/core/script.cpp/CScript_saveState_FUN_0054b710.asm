; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_saveState_FUN_0054b710(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_game.cpp_FUN_004d6420 at 004d65b8
;
; Referenced Globals:
;   TerminatedCString s_CScript_version_005f0171
;   undefined4 DAT_005f0185
;   TerminatedCString s_gGame_letterboxMode_005f0189
;   undefined4 DAT_005f01a2
;   TerminatedCString s_gGame_allowDamageFlag_005f01a6
;   undefined4 DAT_005f01c1
;   TerminatedCString s_gGame_allowEnemyAttackFl_005f01c5
;   undefined4 DAT_005f01e5
;   TerminatedCString s_letterBoxBlackT_005f01e9
;   undefined4 DAT_005f01fd
;   TerminatedCString s_nextCmd_005f0201
;   undefined4 DAT_005f020d
;   TerminatedCString s_currentMessage_005f0211
;   TerminatedCString s_s_005f0224
;   TerminatedCString s_cmdTimer_005f022a
;   ... and 17 more
;
; Called Functions:
;   core_script.cpp_CScript_computeChecksum_FUN_0054b940
;   core_script.cpp_writeActorReference_FUN_0054b3a0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b710
        ;   Label: core_script.cpp_CScript_saveState_FUN_0054b710
    PUSH ESI                            ; 0054b711
    PUSH EDI                            ; 0054b712
    PUSH EBP                            ; 0054b713
    MOV EBP,dword ptr [ESP + 0x14]      ; 0054b714
    MOV EDI,dword ptr [ESP + 0x18]      ; 0054b718
    PUSH 0x5f0171                       ; 0054b71c | = "// CScript version\n"
    PUSH EDI                            ; 0054b721
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b722
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b727
    PUSH 0x6                            ; 0054b72a
    PUSH 0x5f0185                       ; 0054b72c | DAT_005f0185
    PUSH EDI                            ; 0054b731
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b732
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b737
    PUSH 0x5f0189                       ; 0054b73a | = "// gGame->letterboxMode\n"
    PUSH EDI                            ; 0054b73f
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b740
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,[0x0061d95c]                ; 0054b745 | g_CGamePtr
    ADD ESP,0x8                         ; 0054b74a
    MOV EDX,dword ptr [EAX + 0x244]     ; 0054b74d | g_CGameInstance.field532_0x244
    PUSH EDX                            ; 0054b753
    PUSH 0x5f01a2                       ; 0054b754 | DAT_005f01a2
    PUSH EDI                            ; 0054b759
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b75a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b75f
    PUSH 0x5f01a6                       ; 0054b762 | = "// gGame->allowDamageFlag\n"
    PUSH EDI                            ; 0054b767
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b768
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,[0x0061d95c]                ; 0054b76d | g_CGamePtr
    ADD ESP,0x8                         ; 0054b772
    MOV ECX,dword ptr [EAX + 0x248]     ; 0054b775 | g_CGameInstance.field536_0x248
    PUSH ECX                            ; 0054b77b
    PUSH 0x5f01c1                       ; 0054b77c | DAT_005f01c1
    PUSH EDI                            ; 0054b781
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b782
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b787
    PUSH 0x5f01c5                       ; 0054b78a | = "// gGame->allowEnemyAttackFlag\n"
    PUSH EDI                            ; 0054b78f
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b790
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,[0x0061d95c]                ; 0054b795 | g_CGamePtr
    ADD ESP,0x8                         ; 0054b79a
    MOV EBX,dword ptr [EAX + 0x24c]     ; 0054b79d | g_CGameInstance.field540_0x24c
    PUSH EBX                            ; 0054b7a3
    PUSH 0x5f01e5                       ; 0054b7a4 | DAT_005f01e5
    PUSH EDI                            ; 0054b7a9
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b7aa
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b7af
    PUSH 0x5f01e9                       ; 0054b7b2 | = "// letterBoxBlackT\n"
    PUSH EDI                            ; 0054b7b7
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b7b8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b7bd
    SUB ESP,0x8                         ; 0054b7c0
    FLD float ptr [0x01e818b0]          ; 0054b7c3 | DAT_01e818b0
    FSTP double ptr [ESP]               ; 0054b7c9
    PUSH 0x5f01fd                       ; 0054b7cc | DAT_005f01fd
    PUSH EDI                            ; 0054b7d1
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b7d2
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0054b7d7
    PUSH 0x5f0201                       ; 0054b7da | = "// nextCmd\n"
    PUSH EDI                            ; 0054b7df
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b7e0
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b7e5
    MOV ESI,dword ptr [EBP + 0x44]      ; 0054b7e8
    PUSH ESI                            ; 0054b7eb
    PUSH 0x5f020d                       ; 0054b7ec | DAT_005f020d
    PUSH EDI                            ; 0054b7f1
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b7f2
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b7f7
    PUSH 0x5f0211                       ; 0054b7fa | = "// currentMessage\n"
    PUSH EDI                            ; 0054b7ff
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b800
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b805
    LEA EAX,[EBP + 0x50]                ; 0054b808
    PUSH EAX                            ; 0054b80b
    PUSH 0x5f0224                       ; 0054b80c | = "\"%s\"\n"
    PUSH EDI                            ; 0054b811
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b812
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b817
    PUSH 0x5f022a                       ; 0054b81a | = "// cmdTimer\n"
    PUSH EDI                            ; 0054b81f
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b820
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b825
    SUB ESP,0x8                         ; 0054b828
    FLD float ptr [EBP + 0x48]          ; 0054b82b
    FSTP double ptr [ESP]               ; 0054b82e
    PUSH 0x5f0237                       ; 0054b831 | DAT_005f0237
    PUSH EDI                            ; 0054b836
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b837
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0054b83c
    PUSH 0x5f023b                       ; 0054b83f | = "// dialogWavTime\n"
    PUSH EDI                            ; 0054b844
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b845
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b84a
    SUB ESP,0x8                         ; 0054b84d
    FLD float ptr [EBP + 0x4c]          ; 0054b850
    FSTP double ptr [ESP]               ; 0054b853
    PUSH 0x5f024d                       ; 0054b856 | DAT_005f024d
    PUSH EDI                            ; 0054b85b
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b85c
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0054b861
    PUSH 0x5f0251                       ; 0054b864 | = "// whoIsSpeaking\n"
    PUSH EDI                            ; 0054b869
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b86a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b86f
    LEA EAX,[EBP + 0x4]                 ; 0054b872
    PUSH EAX                            ; 0054b875
    PUSH EDI                            ; 0054b876
    CALL core_script.cpp_writeActorReference_FUN_0054b3a0 ; 0054b877
        ;   XREF to: 0054b3a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_writeActorReference_FUN_0054b3a0()
    ADD ESP,0x8                         ; 0054b87c
    PUSH 0x5f0263                       ; 0054b87f | = "// focusActor\n"
    PUSH EDI                            ; 0054b884
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b885
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b88a
    LEA EAX,[EBP + 0xc]                 ; 0054b88d
    PUSH EAX                            ; 0054b890
    PUSH EDI                            ; 0054b891
    CALL core_script.cpp_writeActorReference_FUN_0054b3a0 ; 0054b892
        ;   XREF to: 0054b3a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_writeActorReference_FUN_0054b3a0()
    ADD ESP,0x8                         ; 0054b897
    PUSH 0x5f0272                       ; 0054b89a | = "// focusActorLocked\n"
    PUSH EDI                            ; 0054b89f
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b8a0
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b8a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b8a8
    PUSH EAX                            ; 0054b8ab
    PUSH 0x5f0287                       ; 0054b8ac | DAT_005f0287
    PUSH EDI                            ; 0054b8b1
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b8b2
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b8b7
    PUSH 0x5f028b                       ; 0054b8ba | = "// callStack count, list\n"
    PUSH EDI                            ; 0054b8bf
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b8c0
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b8c5
    MOV EDX,dword ptr [EBP + 0x458]     ; 0054b8c8
    PUSH EDX                            ; 0054b8ce
    PUSH 0x5f02a5                       ; 0054b8cf | DAT_005f02a5
    PUSH EDI                            ; 0054b8d4
    XOR ESI,ESI                         ; 0054b8d5
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b8d7
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBP + 0x458]     ; 0054b8dc
    ADD ESP,0xc                         ; 0054b8e2
    TEST ECX,ECX                        ; 0054b8e5
    JLE 0x0054b910                      ; 0054b8e7
        ;   XREF to: 0054b910 (CONDITIONAL_JUMP)  ; LAB_0054b910
    MOV EBX,EBP                         ; 0054b8e9
    MOV EAX,dword ptr [EBX + 0x45c]     ; 0054b8eb
        ;   Label: LAB_0054b8eb
    PUSH EAX                            ; 0054b8f1
    PUSH 0x5f02a9                       ; 0054b8f2 | DAT_005f02a9
    PUSH EDI                            ; 0054b8f7
    ADD EBX,0x4                         ; 0054b8f8
    INC ESI                             ; 0054b8fb
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b8fc
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [EBP + 0x458]     ; 0054b901
    ADD ESP,0xc                         ; 0054b907
    CMP ESI,EDX                         ; 0054b90a
    JL 0x0054b8eb                       ; 0054b90c
        ;   XREF to: 0054b8eb (CONDITIONAL_JUMP)  ; LAB_0054b8eb
    MOV EAX,EAX                         ; 0054b90e
    PUSH 0x5f02ad                       ; 0054b910 | = "// CRC\n"
        ;   Label: LAB_0054b910
    PUSH EDI                            ; 0054b915
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b916
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0054b91b
    PUSH EBP                            ; 0054b91e
    CALL core_script.cpp_CScript_computeChecksum_FUN_0054b940 ; 0054b91f
        ;   XREF to: 0054b940 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_0054b940(CScript * this_ptr)
    ADD ESP,0x4                         ; 0054b924
    PUSH EAX                            ; 0054b927
    PUSH 0x5f02b5                       ; 0054b928 | DAT_005f02b5
    PUSH EDI                            ; 0054b92d
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b92e
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b933
    POP EBP                             ; 0054b936
    POP EDI                             ; 0054b937
    POP ESI                             ; 0054b938
    POP EBX                             ; 0054b939
    RET                                 ; 0054b93a

