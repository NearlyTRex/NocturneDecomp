; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveRules_FUN_0040d110(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_door.cpp_CDoor_archive_FUN_00455ee0 at 004560a7
;   core_lever.cpp_CLever_archive_FUN_004c66f0 at 004c6855
;
; Referenced Globals:
;   string s_Rule_list_opening_brace_00577e70
;   TerminatedCString s_d_00577e88
;   string s_rule_count_00577e8b
;   TerminatedCString s_ruleCount_00577e96
;   TerminatedCString s_anon_00577ea0
;   TerminatedCString s_rule_00577eb5
;   TerminatedCString s_Rule_list_closing_brace_00577eba
;   string s_%s{_//_%s_00577ed2
;   TerminatedCString s_s_d_ruleCount_00577edd
;   TerminatedCString s_s_s_s_00577ef0
;   TerminatedCString s_s_00577f00
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040bff0
;   core_actor.cpp_archiveDescription_FUN_0040c3a0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d110
        ;   Label: core_actor.cpp_archiveRules_FUN_0040d110
    PUSH ESI                            ; 0040d111
    PUSH EDI                            ; 0040d112
    PUSH EBP                            ; 0040d113
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040d114
    CMP dword ptr [0x00763e88],0x1      ; 0040d118 | DAT_00763e88
    JNZ 0x0040d215                      ; 0040d11f
        ;   XREF to: 0040d215 (CONDITIONAL_JUMP)  ; LAB_0040d215
    MOV ESI,dword ptr [0x00763e84]      ; 0040d125 | DAT_00763e84
        ;   Label: LAB_0040d125
    PUSH ESI                            ; 0040d12b
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040d12c
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040d131
    MOV ESI,EAX                         ; 0040d134
    TEST EAX,EAX                        ; 0040d136
    JL 0x0040d1ea                       ; 0040d138
        ;   XREF to: 0040d1ea (CONDITIONAL_JUMP)  ; LAB_0040d1ea
    CMP ESI,0xa                         ; 0040d13e
        ;   Label: LAB_0040d13e
    JNZ 0x0040d125                      ; 0040d141
        ;   XREF to: 0040d125 (CONDITIONAL_JUMP)  ; LAB_0040d125
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040d143
    PUSH EDI                            ; 0040d147
    PUSH 0x577e88                       ; 0040d148 | = "%d"
    MOV EBP,dword ptr [0x00763e84]      ; 0040d14d | DAT_00763e84
    PUSH EBP                            ; 0040d153
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040d154
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0040d159
    CMP EAX,0x1                         ; 0040d15c
    JZ 0x0040d16f                       ; 0040d15f
        ;   XREF to: 0040d16f (CONDITIONAL_JUMP)  ; LAB_0040d16f
    PUSH EBX                            ; 0040d161
    PUSH 0x577e8b                       ; 0040d162 | = "rule count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d167
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d16c
    PUSH EBX                            ; 0040d16f
        ;   Label: LAB_0040d16f
    PUSH 0x577e96                       ; 0040d170 | = "ruleCount"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040d175
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDescription_FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040d17a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d17d
    MOV EDX,dword ptr [EAX]             ; 0040d181
    XOR EDI,EDI                         ; 0040d183
    TEST EDX,EDX                        ; 0040d185
    JLE 0x0040d1cb                      ; 0040d187
        ;   XREF to: 0040d1cb (CONDITIONAL_JUMP)  ; LAB_0040d1cb
    LEA EBP,[EAX + 0x1f8]               ; 0040d189
    LEA ESI,[EAX + 0x4]                 ; 0040d18f
    PUSH EBP                            ; 0040d192
        ;   Label: LAB_0040d192
    PUSH ESI                            ; 0040d193
    PUSH 0x577ea0                       ; 0040d194 | = " \"%[^\"]\" => \"%[^\"]\"\n"
    MOV EAX,[0x00763e84]                ; 0040d199 | DAT_00763e84
    PUSH EAX                            ; 0040d19e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040d19f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 0040d1a4
    CMP EAX,0x2                         ; 0040d1a7
    JZ 0x0040d1ba                       ; 0040d1aa
        ;   XREF to: 0040d1ba (CONDITIONAL_JUMP)  ; LAB_0040d1ba
    PUSH EBX                            ; 0040d1ac
    PUSH 0x577eb5                       ; 0040d1ad | = "rule"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d1b2
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d1b7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d1ba
        ;   Label: LAB_0040d1ba
    ADD ESI,0x64                        ; 0040d1be
    INC EDI                             ; 0040d1c1
    MOV ECX,dword ptr [EAX]             ; 0040d1c2
    ADD EBP,0x64                        ; 0040d1c4
    CMP EDI,ECX                         ; 0040d1c7
    JL 0x0040d192                       ; 0040d1c9
        ;   XREF to: 0040d192 (CONDITIONAL_JUMP)  ; LAB_0040d192
    MOV EDX,dword ptr [0x00763e84]      ; 0040d1cb | DAT_00763e84
        ;   Label: LAB_0040d1cb
    PUSH EDX                            ; 0040d1d1
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040d1d2
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040d1d7
    MOV ESI,EAX                         ; 0040d1da
    TEST EAX,EAX                        ; 0040d1dc
    JL 0x0040d1fd                       ; 0040d1de
        ;   XREF to: 0040d1fd (CONDITIONAL_JUMP)  ; LAB_0040d1fd
    CMP ESI,0xa                         ; 0040d1e0
    JNZ 0x0040d1cb                      ; 0040d1e3
        ;   XREF to: 0040d1cb (CONDITIONAL_JUMP)  ; LAB_0040d1cb
    POP EBP                             ; 0040d1e5
    POP EDI                             ; 0040d1e6
    POP ESI                             ; 0040d1e7
    POP EBX                             ; 0040d1e8
    RET                                 ; 0040d1e9
    PUSH EBX                            ; 0040d1ea
        ;   Label: LAB_0040d1ea
    PUSH 0x577e70                       ; 0040d1eb | = "Rule list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d1f0
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d1f5
    JMP 0x0040d13e                      ; 0040d1f8
        ;   XREF to: 0040d13e (UNCONDITIONAL_JUMP)  ; LAB_0040d13e
    PUSH EBX                            ; 0040d1fd
        ;   Label: LAB_0040d1fd
    PUSH 0x577eba                       ; 0040d1fe | = "Rule list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d203
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d208
    CMP ESI,0xa                         ; 0040d20b
    JNZ 0x0040d1cb                      ; 0040d20e
        ;   XREF to: 0040d1cb (CONDITIONAL_JUMP)  ; LAB_0040d1cb
    POP EBP                             ; 0040d210
    POP EDI                             ; 0040d211
    POP ESI                             ; 0040d212
    POP EBX                             ; 0040d213
    RET                                 ; 0040d214
    PUSH EBX                            ; 0040d215
        ;   Label: LAB_0040d215
    PUSH 0x5acc90                       ; 0040d216 | DAT_005acc90
    PUSH 0x577ed2                       ; 0040d21b | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040d220 | DAT_00763e84
    PUSH ECX                            ; 0040d226
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d227
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0040d22c
    PUSH 0x1                            ; 0040d22f
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040d231
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 0040d236
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d239
    MOV EBX,dword ptr [EAX]             ; 0040d23d
    PUSH EBX                            ; 0040d23f
    PUSH 0x5acc90                       ; 0040d240 | DAT_005acc90
    PUSH 0x577edd                       ; 0040d245 | = "%s%d // ruleCount\n"
    MOV ESI,dword ptr [0x00763e84]      ; 0040d24a | DAT_00763e84
    PUSH ESI                            ; 0040d250
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d251
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0040d256
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d259
    MOV EBP,dword ptr [EAX]             ; 0040d25d
    XOR EDI,EDI                         ; 0040d25f
    TEST EBP,EBP                        ; 0040d261
    JLE 0x0040d2a0                      ; 0040d263
        ;   XREF to: 0040d2a0 (CONDITIONAL_JUMP)  ; LAB_0040d2a0
    LEA EBX,[EAX + 0x1f8]               ; 0040d265
    LEA ESI,[EAX + 0x4]                 ; 0040d26b
    PUSH EBX                            ; 0040d26e
        ;   Label: LAB_0040d26e
    PUSH ESI                            ; 0040d26f
    PUSH 0x5acc90                       ; 0040d270 | DAT_005acc90
    PUSH 0x577ef0                       ; 0040d275 | = "%s\"%s\" => \"%s\"\n"
    MOV EAX,[0x00763e84]                ; 0040d27a | DAT_00763e84
    PUSH EAX                            ; 0040d27f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d280
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 0040d285
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d288
    INC EDI                             ; 0040d28c
    ADD EBX,0x64                        ; 0040d28d
    MOV EDX,dword ptr [EAX]             ; 0040d290
    ADD ESI,0x64                        ; 0040d292
    CMP EDI,EDX                         ; 0040d295
    JL 0x0040d26e                       ; 0040d297
        ;   XREF to: 0040d26e (CONDITIONAL_JUMP)  ; LAB_0040d26e
    LEA EAX,[EAX]                       ; 0040d299
    NOP                                 ; 0040d29f
    PUSH -0x1                           ; 0040d2a0
        ;   Label: LAB_0040d2a0
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040d2a2
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 0040d2a7
    PUSH 0x5acc90                       ; 0040d2aa | DAT_005acc90
    PUSH 0x577f00                       ; 0040d2af | = "%s}\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040d2b4 | DAT_00763e84
    PUSH ECX                            ; 0040d2ba
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d2bb
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0040d2c0
    POP EBP                             ; 0040d2c3
    POP EDI                             ; 0040d2c4
    POP ESI                             ; 0040d2c5
    POP EBX                             ; 0040d2c6
    RET                                 ; 0040d2c7

