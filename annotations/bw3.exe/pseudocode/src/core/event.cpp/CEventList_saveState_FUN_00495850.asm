; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_saveState_FUN_00495850(CEventList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bdb98
;
; Referenced Globals:
;   TerminatedCString s_CEventList_version_005c01eb
;   undefined4 DAT_005c0202
;   TerminatedCString s_eventCount_list_005c0206
;   undefined4 DAT_005c021b
;   undefined4 DAT_005c021f
;   TerminatedCString s_currentEventCount_list_005c0223
;   undefined4 DAT_005c023f
;   undefined4 DAT_005c0243
;   TerminatedCString s_persistentEventCount_lis_005c0247
;   undefined4 DAT_005c0266
;   undefined4 DAT_005c026a
;   TerminatedCString s_timerCount_list_duration_005c026e
;   undefined4 DAT_005c0293
;   TerminatedCString s_f_s_005c0297
;   TerminatedCString s_counterCount_list_value_005c029f
;   ... and 8 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495850
        ;   Label: core_event.cpp_CEventList_saveState_FUN_00495850
    PUSH ESI                            ; 00495851
    PUSH EDI                            ; 00495852
    PUSH EBP                            ; 00495853
    SUB ESP,0xc                         ; 00495854
    MOV EBX,dword ptr [ESP + 0x20]      ; 00495857
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049585b
    PUSH 0x5c01eb                       ; 0049585f | = "// CEventList version\n"
    PUSH ESI                            ; 00495864
    CALL crt_unknown.c_FUN_005a3140     ; 00495865
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0049586a
    PUSH 0x5                            ; 0049586d
    PUSH 0x5c0202                       ; 0049586f | DAT_005c0202
    PUSH ESI                            ; 00495874
    CALL crt_unknown.c_FUN_005a3140     ; 00495875
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0049587a
    PUSH 0x5c0206                       ; 0049587d | = "// eventCount, list\n"
    PUSH ESI                            ; 00495882
    CALL crt_unknown.c_FUN_005a3140     ; 00495883
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00495888
    MOV EDX,dword ptr [EBX]             ; 0049588b
    PUSH EDX                            ; 0049588d
    PUSH 0x5c021b                       ; 0049588e | DAT_005c021b
    PUSH ESI                            ; 00495893
    XOR EBP,EBP                         ; 00495894
    CALL crt_unknown.c_FUN_005a3140     ; 00495896
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX]             ; 0049589b
    ADD ESP,0xc                         ; 0049589d
    TEST ECX,ECX                        ; 004958a0
    JLE 0x004958c0                      ; 004958a2
        ;   XREF to: 004958c0 (CONDITIONAL_JUMP)  ; LAB_004958c0
    LEA EDI,[EBX + 0x4]                 ; 004958a4
    PUSH EDI                            ; 004958a7
        ;   Label: LAB_004958a7
    PUSH 0x5c021f                       ; 004958a8 | DAT_005c021f
    PUSH ESI                            ; 004958ad
    INC EBP                             ; 004958ae
    ADD EDI,0x20                        ; 004958af
    CALL crt_unknown.c_FUN_005a3140     ; 004958b2
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX]             ; 004958b7
    ADD ESP,0xc                         ; 004958b9
    CMP EBP,EAX                         ; 004958bc
    JL 0x004958a7                       ; 004958be
        ;   XREF to: 004958a7 (CONDITIONAL_JUMP)  ; LAB_004958a7
    PUSH 0x5c0223                       ; 004958c0 | = "// currentEventCount, list\n"
        ;   Label: LAB_004958c0
    PUSH ESI                            ; 004958c5
    CALL crt_unknown.c_FUN_005a3140     ; 004958c6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004958cb
    MOV EDX,dword ptr [EBX + 0xc84]     ; 004958ce
    PUSH EDX                            ; 004958d4
    PUSH 0x5c023f                       ; 004958d5 | DAT_005c023f
    PUSH ESI                            ; 004958da
    XOR EDI,EDI                         ; 004958db
    CALL crt_unknown.c_FUN_005a3140     ; 004958dd
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004958e2
    ADD ESP,0xc                         ; 004958e8
    TEST ECX,ECX                        ; 004958eb
    JLE 0x00495920                      ; 004958ed
        ;   XREF to: 00495920 (CONDITIONAL_JUMP)  ; LAB_00495920
    LEA EBP,[EBX + 0xc88]               ; 004958ef
    PUSH EBP                            ; 004958f5
        ;   Label: LAB_004958f5
    PUSH 0x5c0243                       ; 004958f6 | DAT_005c0243
    PUSH ESI                            ; 004958fb
    INC EDI                             ; 004958fc
    ADD EBP,0x20                        ; 004958fd
    CALL crt_unknown.c_FUN_005a3140     ; 00495900
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 00495905
    ADD ESP,0xc                         ; 0049590b
    CMP EDI,EAX                         ; 0049590e
    JL 0x004958f5                       ; 00495910
        ;   XREF to: 004958f5 (CONDITIONAL_JUMP)  ; LAB_004958f5
    LEA EAX,[EAX]                       ; 00495912
    LEA EDX,[EDX]                       ; 00495918
    MOV EAX,EAX                         ; 0049591e
    PUSH 0x5c0247                       ; 00495920 | = "// persistentEventCount, list\n"
        ;   Label: LAB_00495920
    PUSH ESI                            ; 00495925
    CALL crt_unknown.c_FUN_005a3140     ; 00495926
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0049592b
    MOV EDX,dword ptr [EBX + 0x258c]    ; 0049592e
    PUSH EDX                            ; 00495934
    PUSH 0x5c0266                       ; 00495935 | DAT_005c0266
    PUSH ESI                            ; 0049593a
    XOR EBP,EBP                         ; 0049593b
    CALL crt_unknown.c_FUN_005a3140     ; 0049593d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 00495942
    ADD ESP,0xc                         ; 00495948
    TEST ECX,ECX                        ; 0049594b
    JLE 0x00495980                      ; 0049594d
        ;   XREF to: 00495980 (CONDITIONAL_JUMP)  ; LAB_00495980
    LEA EDI,[EBX + 0x2590]              ; 0049594f
    PUSH EDI                            ; 00495955
        ;   Label: LAB_00495955
    PUSH 0x5c026a                       ; 00495956 | DAT_005c026a
    PUSH ESI                            ; 0049595b
    INC EBP                             ; 0049595c
    ADD EDI,0x20                        ; 0049595d
    CALL crt_unknown.c_FUN_005a3140     ; 00495960
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x258c]    ; 00495965
    ADD ESP,0xc                         ; 0049596b
    CMP EBP,EAX                         ; 0049596e
    JL 0x00495955                       ; 00495970
        ;   XREF to: 00495955 (CONDITIONAL_JUMP)  ; LAB_00495955
    LEA EAX,[EAX]                       ; 00495972
    LEA EDX,[EDX]                       ; 00495978
    MOV EAX,EAX                         ; 0049597e
    PUSH 0x5c026e                       ; 00495980 | = "// timerCount, list(duration, name)\n"
        ;   Label: LAB_00495980
    PUSH ESI                            ; 00495985
    CALL crt_unknown.c_FUN_005a3140     ; 00495986
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0049598b
    MOV EDX,dword ptr [EBX + 0x3210]    ; 0049598e
    PUSH EDX                            ; 00495994
    PUSH 0x5c0293                       ; 00495995 | DAT_005c0293
    PUSH ESI                            ; 0049599a
    CALL crt_unknown.c_FUN_005a3140     ; 0049599b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004959a0
    XOR ECX,ECX                         ; 004959a3
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004959a5
    MOV dword ptr [ESP + 0x4],ECX       ; 004959ab
    TEST EDI,EDI                        ; 004959af
    JLE 0x004959f0                      ; 004959b1
        ;   XREF to: 004959f0 (CONDITIONAL_JUMP)  ; LAB_004959f0
    LEA EBP,[EBX + 0x3214]              ; 004959b3
    MOV EDI,EBX                         ; 004959b9
    PUSH EBP                            ; 004959bb
        ;   Label: LAB_004959bb
    SUB ESP,0x8                         ; 004959bc
    FLD float ptr [EDI + 0x3354]        ; 004959bf
    FSTP double ptr [ESP]               ; 004959c5
    PUSH 0x5c0297                       ; 004959c8 | = "%f, %s\n"
    PUSH ESI                            ; 004959cd
    CALL crt_unknown.c_FUN_005a3140     ; 004959ce
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 004959d3
    ADD EDI,0x4                         ; 004959d6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004959d9
    ADD EBP,0x20                        ; 004959dd
    INC EAX                             ; 004959e0
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004959e1
    MOV dword ptr [ESP + 0x4],EAX       ; 004959e7
    CMP EAX,EDX                         ; 004959eb
    JL 0x004959bb                       ; 004959ed
        ;   XREF to: 004959bb (CONDITIONAL_JUMP)  ; LAB_004959bb
    NOP                                 ; 004959ef
    PUSH 0x5c029f                       ; 004959f0 | = "// counterCount, list(value, name)\n"
        ;   Label: LAB_004959f0
    PUSH ESI                            ; 004959f5
    CALL crt_unknown.c_FUN_005a3140     ; 004959f6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004959fb
    MOV ECX,dword ptr [EBX + 0x337c]    ; 004959fe
    PUSH ECX                            ; 00495a04
    PUSH 0x5c02c3                       ; 00495a05 | DAT_005c02c3
    PUSH ESI                            ; 00495a0a
    XOR EDI,EDI                         ; 00495a0b
    CALL crt_unknown.c_FUN_005a3140     ; 00495a0d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00495a12
    MOV EBP,dword ptr [EBX + 0x337c]    ; 00495a15
    MOV dword ptr [ESP + 0x8],EDI       ; 00495a1b
    TEST EBP,EBP                        ; 00495a1f
    JLE 0x00495a60                      ; 00495a21
        ;   XREF to: 00495a60 (CONDITIONAL_JUMP)  ; LAB_00495a60
    LEA EDI,[EBX + 0x3380]              ; 00495a23
    MOV EBP,EBX                         ; 00495a29
    PUSH EDI                            ; 00495a2b
        ;   Label: LAB_00495a2b
    MOV EAX,dword ptr [EBP + 0x34c0]    ; 00495a2c
    PUSH EAX                            ; 00495a32
    PUSH 0x5c02c7                       ; 00495a33 | = "%d, %s\n"
    PUSH ESI                            ; 00495a38
    CALL crt_unknown.c_FUN_005a3140     ; 00495a39
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 00495a3e
    ADD EBP,0x4                         ; 00495a41
    MOV EDX,dword ptr [ESP + 0x8]       ; 00495a44
    ADD EDI,0x20                        ; 00495a48
    INC EDX                             ; 00495a4b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 00495a4c
    MOV dword ptr [ESP + 0x8],EDX       ; 00495a52
    CMP EDX,ECX                         ; 00495a56
    JL 0x00495a2b                       ; 00495a58
        ;   XREF to: 00495a2b (CONDITIONAL_JUMP)  ; LAB_00495a2b
    LEA EAX,[EAX]                       ; 00495a5a
    PUSH 0x5c02cf                       ; 00495a60 | = "// actorVarCount, list(varName, actor..."
        ;   Label: LAB_00495a60
    PUSH ESI                            ; 00495a65
    CALL crt_unknown.c_FUN_005a3140     ; 00495a66
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00495a6b
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 00495a6e
    PUSH EDI                            ; 00495a74
    PUSH 0x5c02fb                       ; 00495a75 | DAT_005c02fb
    PUSH ESI                            ; 00495a7a
    XOR EBP,EBP                         ; 00495a7b
    CALL crt_unknown.c_FUN_005a3140     ; 00495a7d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00495a82
    ADD ESP,0xc                         ; 00495a88
    TEST EAX,EAX                        ; 00495a8b
    JLE 0x00495ad0                      ; 00495a8d
        ;   XREF to: 00495ad0 (CONDITIONAL_JUMP)  ; LAB_00495ad0
    LEA EAX,[EBX + 0x37da]              ; 00495a8f
    LEA EDI,[EBX + 0x34ec]              ; 00495a95
    MOV dword ptr [ESP],EAX             ; 00495a9b
    MOV EDX,dword ptr [ESP]             ; 00495a9e
        ;   Label: LAB_00495a9e
    PUSH EDX                            ; 00495aa1
    PUSH EDI                            ; 00495aa2
    PUSH 0x5c02ff                       ; 00495aa3 | = "\"%s\", \"%s\"\n"
    PUSH ESI                            ; 00495aa8
    CALL crt_unknown.c_FUN_005a3140     ; 00495aa9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 00495aae
    INC EBP                             ; 00495ab1
    MOV ECX,dword ptr [ESP]             ; 00495ab2
    ADD EDI,0x1e                        ; 00495ab5
    ADD ECX,0x1e                        ; 00495ab8
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00495abb
    MOV dword ptr [ESP],ECX             ; 00495ac1
    CMP EBP,EAX                         ; 00495ac4
    JL 0x00495a9e                       ; 00495ac6
        ;   XREF to: 00495a9e (CONDITIONAL_JUMP)  ; LAB_00495a9e
    LEA EAX,[EAX]                       ; 00495ac8
    MOV EDX,EDX                         ; 00495ace
    PUSH 0x5c030b                       ; 00495ad0 | = "// gameFlagCount, list\n"
        ;   Label: LAB_00495ad0
    PUSH ESI                            ; 00495ad5
    CALL crt_unknown.c_FUN_005a3140     ; 00495ad6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 00495adb
    MOV EDX,dword ptr [EBX + 0x1908]    ; 00495ade
    PUSH EDX                            ; 00495ae4
    PUSH 0x5c0323                       ; 00495ae5 | DAT_005c0323
    PUSH ESI                            ; 00495aea
    XOR EBP,EBP                         ; 00495aeb
    CALL crt_unknown.c_FUN_005a3140     ; 00495aed
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0x1908]    ; 00495af2
    ADD ESP,0xc                         ; 00495af8
    TEST ECX,ECX                        ; 00495afb
    JLE 0x00495b30                      ; 00495afd
        ;   XREF to: 00495b30 (CONDITIONAL_JUMP)  ; LAB_00495b30
    LEA EDI,[EBX + 0x190c]              ; 00495aff
    PUSH EDI                            ; 00495b05
        ;   Label: LAB_00495b05
    PUSH 0x5c0327                       ; 00495b06 | DAT_005c0327
    PUSH ESI                            ; 00495b0b
    INC EBP                             ; 00495b0c
    ADD EDI,0x20                        ; 00495b0d
    CALL crt_unknown.c_FUN_005a3140     ; 00495b10
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 00495b15
    ADD ESP,0xc                         ; 00495b1b
    CMP EBP,EAX                         ; 00495b1e
    JL 0x00495b05                       ; 00495b20
        ;   XREF to: 00495b05 (CONDITIONAL_JUMP)  ; LAB_00495b05
    LEA EAX,[EAX]                       ; 00495b22
    LEA EDX,[EDX]                       ; 00495b28
    MOV EAX,EAX                         ; 00495b2e
    ADD ESP,0xc                         ; 00495b30
        ;   Label: LAB_00495b30
    POP EBP                             ; 00495b33
    POP EDI                             ; 00495b34
    POP ESI                             ; 00495b35
    POP EBX                             ; 00495b36
    RET                                 ; 00495b37

