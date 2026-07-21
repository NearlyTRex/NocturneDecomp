; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(undefined4 param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined8       Stack[-0xa90]:8  local_a90
; undefined4       Stack[-0xa88]:4  local_a88
; undefined        Stack[-0xa84]:1  local_a84
; undefined1       Stack[-0xa83]:1  local_a83
; undefined1       Stack[-0x985]:1  local_985
; undefined        Stack[-0x984]:1  local_984
; undefined        Stack[-0x983]:1  local_983
; undefined        Stack[-0x920]:1  local_920
; undefined        Stack[-0x8bc]:1  local_8bc
; undefined        Stack[-0x8bb]:1  local_8bb
; undefined        Stack[-0x858]:1  local_858
; undefined        Stack[-0x7f4]:1  local_7f4
; undefined        Stack[-0x7f3]:1  local_7f3
; undefined        Stack[-0x790]:1  local_790
; undefined        Stack[-0x78f]:1  local_78f
; undefined        Stack[-0x72c]:1  local_72c
; undefined        Stack[-0x72b]:1  local_72b
; undefined1       Stack[-0x6c9]:1  local_6c9
; undefined        Stack[-0x6c8]:1  local_6c8
; undefined        Stack[-0x6c7]:1  local_6c7
; undefined        Stack[-0x664]:1  local_664
; undefined        Stack[-0x600]:1  local_600
; undefined        Stack[-0x59c]:1  local_59c
; undefined        Stack[-0x59b]:1  local_59b
; undefined        Stack[-0x538]:1  local_538
; undefined        Stack[-0x4d4]:1  local_4d4
; undefined        Stack[-0x4d3]:1  local_4d3
; undefined        Stack[-0x470]:1  local_470
; undefined        Stack[-0x40c]:1  local_40c
; undefined        Stack[-0x40b]:1  local_40b
; undefined1       Stack[-0x3a9]:1  local_3a9
; undefined        Stack[-0x3a8]:1  local_3a8
; undefined        Stack[-0x3a7]:1  local_3a7
; undefined1       Stack[-0x345]:1  local_345
; undefined        Stack[-0x344]:1  local_344
; undefined        Stack[-0x343]:1  local_343
; undefined        Stack[-0x2e0]:1  local_2e0
; undefined        Stack[-0x2df]:1  local_2df
; undefined        Stack[-0x27c]:1  local_27c
; undefined1       Stack[-0x219]:1  local_219
; undefined        Stack[-0x218]:1  local_218
; undefined        Stack[-0x217]:1  local_217
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x150]:1  local_150
; undefined1       Stack[-0x14f]:1  local_14f
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220 at 00480233
;
; Referenced Globals:
;   void* switchdataD_0047e0ac = 0047e56c
;   undefined4 DAT_0057f3b3
;   undefined4 DAT_0057f3b5
;   undefined4 DAT_0057f3b8
;   undefined4 DAT_0057f3bb
;   undefined4 DAT_0057f3be
;   undefined4 DAT_0057f3c0
;   undefined4 DAT_0057f3c3
;   string s_Unexpected_end_of_string_00580286
;   undefined4 s_nexpected_end_of_string_00580286+1
;   undefined4 s_expected_end_of_string_00580286+2
;   undefined4 s_xpected_end_of_string_00580286+3
;   string s_Matching_')'_is_missing_0058029f
;   undefined4 s_atching_')'_is_missing_0058029f+1
;   undefined4 s_tching_')'_is_missing_0058029f+2
;   ... and 209 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220
;   core_event.cpp_CEventList_getCounterValue_FUN_004807e0
;   core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0
;   core_event.cpp_CEventList_resolveVariable_FUN_0047dba0
;   core_event.cpp_isValidIdentifierChar_FUN_00480f40
;   core_event.cpp_parseVectorLocation_FUN_0047a4c0
;   core_event.cpp_resolveActorByName_FUN_0047a390
;   core_game.cpp_CGame_fadeIn_FUN_004a3a50
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
;   core_inv.cpp_CInventory_findItemByName_FUN_004c0710
;   core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760
;   core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e0d0
        ;   Label: core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0
    PUSH ESI                            ; 0047e0d1
    PUSH EDI                            ; 0047e0d2
    PUSH EBP                            ; 0047e0d3
    MOV EBP,ESP                         ; 0047e0d4
    SUB ESP,0xa80                       ; 0047e0d6
    AND ESP,0xfffffff8                  ; 0047e0dc
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0047e0df
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047e0e2
    MOV EAX,ESI                         ; 0047e0e5
    MOV EDX,dword ptr [EAX]             ; 0047e0e7
        ;   Label: LAB_0047e0e7
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 0047e0e9
    INC DL                              ; 0047e0ec
    AND EDX,0xff                        ; 0047e0ee
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e0f4 | DAT_005c168c
    JNZ 0x0047e152                      ; 0047e0fb
        ;   XREF to: 0047e152 (CONDITIONAL_JUMP)  ; LAB_0047e152
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e0fd
    MOV EDX,dword ptr [ESI]             ; 0047e100
    ADD EAX,EDX                         ; 0047e102
    CMP byte ptr [EAX],0x2e             ; 0047e104
    JNZ 0x0047e10e                      ; 0047e107
        ;   XREF to: 0047e10e (CONDITIONAL_JUMP)  ; LAB_0047e10e
    LEA ECX,[EDX + 0x1]                 ; 0047e109
    MOV dword ptr [ESI],ECX             ; 0047e10c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e10e
        ;   Label: LAB_0047e10e
    MOV EBX,dword ptr [ESI]             ; 0047e111
    ADD EAX,EBX                         ; 0047e113
    MOV CL,byte ptr [EAX]               ; 0047e115
    TEST CL,CL                          ; 0047e117
    JZ 0x0047e156                       ; 0047e119
        ;   XREF to: 0047e156 (CONDITIONAL_JUMP)  ; LAB_0047e156
    CMP CL,0x28                         ; 0047e11b
    JZ 0x0047e181                       ; 0047e11e
        ;   XREF to: 0047e181 (CONDITIONAL_JUMP)  ; LAB_0047e181
    CMP CL,0x21                         ; 0047e120
    JNZ 0x0047e20c                      ; 0047e123
        ;   XREF to: 0047e20c (CONDITIONAL_JUMP)  ; LAB_0047e20c
    PUSH ESI                            ; 0047e129
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047e12a
    PUSH EDI                            ; 0047e12d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047e12e
    LEA EDX,[EBX + 0x1]                 ; 0047e131
    PUSH EAX                            ; 0047e134
    MOV dword ptr [ESI],EDX             ; 0047e135
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 ; 0047e137
        ;   XREF to: 0047e0d0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0()
    ADD ESP,0xc                         ; 0047e13c
    TEST EAX,EAX                        ; 0047e13f
    JL 0x0047e14b                       ; 0047e141
        ;   XREF to: 0047e14b (CONDITIONAL_JUMP)  ; LAB_0047e14b
    SETZ AL                             ; 0047e143
    AND EAX,0xff                        ; 0047e146
    MOV ESP,EBP                         ; 0047e14b
        ;   Label: LAB_0047e14b
    POP EBP                             ; 0047e14d
        ;   Label: LAB_0047e14d
    POP EDI                             ; 0047e14e
    POP ESI                             ; 0047e14f
    POP EBX                             ; 0047e150
    RET                                 ; 0047e151
    INC dword ptr [EAX]                 ; 0047e152
        ;   Label: LAB_0047e152
    JMP 0x0047e0e7                      ; 0047e154
        ;   XREF to: 0047e0e7 (UNCONDITIONAL_JUMP)  ; LAB_0047e0e7
    MOV ESI,0x580286                    ; 0047e156 | = "Unexpected end of string"
        ;   Label: LAB_0047e156
    MOV EDI,0x1c08b60                   ; 0047e15b
    PUSH EDI                            ; 0047e160 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e161 | = "Unexpected end of string" | s_expected_end_of_string_00580286+2
        ;   Label: LAB_0047e161
    MOV byte ptr [EDI],AL               ; 0047e163 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e165
    JZ 0x0047e179                       ; 0047e167
        ;   XREF to: 0047e179 (CONDITIONAL_JUMP)  ; LAB_0047e179
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e169 | s_nexpected_end_of_string_00580286+1 | s_xpected_end_of_string_00580286+3
    ADD ESI,0x2                         ; 0047e16c
    MOV byte ptr [EDI + 0x1],AL         ; 0047e16f | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e172
    CMP AL,0x0                          ; 0047e175
    JNZ 0x0047e161                      ; 0047e177
        ;   XREF to: 0047e161 (CONDITIONAL_JUMP)  ; LAB_0047e161
    POP EDI                             ; 0047e179
        ;   Label: LAB_0047e179
    MOV EAX,0xffffffff                  ; 0047e17a
    JMP 0x0047e14b                      ; 0047e17f
        ;   XREF to: 0047e14b (UNCONDITIONAL_JUMP)  ; LAB_0047e14b
    PUSH ESI                            ; 0047e181
        ;   Label: LAB_0047e181
    MOV ECX,dword ptr [EBP + 0x18]      ; 0047e182
    MOV EDI,dword ptr [ESI]             ; 0047e185
    PUSH ECX                            ; 0047e187
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047e188
    INC EDI                             ; 0047e18b
    PUSH EBX                            ; 0047e18c
    MOV dword ptr [ESI],EDI             ; 0047e18d
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220 ; 0047e18f
        ;   XREF to: 00480220 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220()
    ADD ESP,0xc                         ; 0047e194
    MOV dword ptr [ESP + 0xa6c],EAX     ; 0047e197
    TEST EAX,EAX                        ; 0047e19e
    JL 0x0047e14b                       ; 0047e1a0
        ;   XREF to: 0047e14b (CONDITIONAL_JUMP)  ; LAB_0047e14b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e1a2
    ADD EAX,dword ptr [ESI]             ; 0047e1a5
    CMP byte ptr [EAX],0x29             ; 0047e1a7
    JNZ 0x0047e1ce                      ; 0047e1aa
        ;   XREF to: 0047e1ce (CONDITIONAL_JUMP)  ; LAB_0047e1ce
    MOV ECX,dword ptr [ESI]             ; 0047e1ac
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047e1ae
    INC ECX                             ; 0047e1b1
    MOV EAX,ESI                         ; 0047e1b2
    MOV dword ptr [ESI],ECX             ; 0047e1b4
    MOV EDX,dword ptr [EAX]             ; 0047e1b6
        ;   Label: LAB_0047e1b6
    MOV BL,byte ptr [EDX + EDI*0x1]     ; 0047e1b8
    INC BL                              ; 0047e1bb
    XOR EDX,EDX                         ; 0047e1bd
    MOV DL,BL                           ; 0047e1bf
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e1c1 | DAT_005c168c
    JZ 0x0047e1fe                       ; 0047e1c8
        ;   XREF to: 0047e1fe (CONDITIONAL_JUMP)  ; LAB_0047e1fe
    INC dword ptr [EAX]                 ; 0047e1ca
    JMP 0x0047e1b6                      ; 0047e1cc
        ;   XREF to: 0047e1b6 (UNCONDITIONAL_JUMP)  ; LAB_0047e1b6
    MOV ESI,0x58029f                    ; 0047e1ce | = "Matching ')' is missing"
        ;   Label: LAB_0047e1ce
    MOV EDI,0x1c08b60                   ; 0047e1d3
    PUSH EDI                            ; 0047e1d8 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e1d9 | = "Matching ')' is missing" | s_tching_')'_is_missing_0058029f+2
        ;   Label: LAB_0047e1d9
    MOV byte ptr [EDI],AL               ; 0047e1db | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e1dd
    JZ 0x0047e1f1                       ; 0047e1df
        ;   XREF to: 0047e1f1 (CONDITIONAL_JUMP)  ; LAB_0047e1f1
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e1e1 | s_atching_')'_is_missing_0058029f+1 | s_ching_')'_is_missing_0058029f+3
    ADD ESI,0x2                         ; 0047e1e4
    MOV byte ptr [EDI + 0x1],AL         ; 0047e1e7 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e1ea
    CMP AL,0x0                          ; 0047e1ed
    JNZ 0x0047e1d9                      ; 0047e1ef
        ;   XREF to: 0047e1d9 (CONDITIONAL_JUMP)  ; LAB_0047e1d9
    POP EDI                             ; 0047e1f1
        ;   Label: LAB_0047e1f1
    MOV EAX,0xffffffff                  ; 0047e1f2
    MOV ESP,EBP                         ; 0047e1f7
    POP EBP                             ; 0047e1f9
    POP EDI                             ; 0047e1fa
    POP ESI                             ; 0047e1fb
    POP EBX                             ; 0047e1fc
    RET                                 ; 0047e1fd
    MOV EAX,dword ptr [ESP + 0xa6c]     ; 0047e1fe
        ;   Label: LAB_0047e1fe
    MOV ESP,EBP                         ; 0047e205
    POP EBP                             ; 0047e207
    POP EDI                             ; 0047e208
    POP ESI                             ; 0047e209
    POP EBX                             ; 0047e20a
    RET                                 ; 0047e20b
    MOV AL,CL                           ; 0047e20c
        ;   Label: LAB_0047e20c
    AND EAX,0xff                        ; 0047e20e
    PUSH EAX                            ; 0047e213
    CALL core_event.cpp_isValidIdentifierChar_FUN_00480f40 ; 0047e214
        ;   XREF to: 00480f40 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_isValidIdentifierChar_FUN_00480f40()
    ADD ESP,0x4                         ; 0047e219
    TEST EAX,EAX                        ; 0047e21c
    JZ 0x0047e27b                       ; 0047e21e
        ;   XREF to: 0047e27b (CONDITIONAL_JUMP)  ; LAB_0047e27b
    LEA EDI,[ESP + 0x940]               ; 0047e220
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e227
        ;   Label: LAB_0047e227
    ADD EAX,dword ptr [ESI]             ; 0047e22a
    MOV AL,byte ptr [EAX]               ; 0047e22c
    MOV byte ptr [EDI],AL               ; 0047e22e
    MOV ECX,dword ptr [ESI]             ; 0047e230
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e232
    INC ECX                             ; 0047e235
    ADD EAX,ECX                         ; 0047e236
    MOV dword ptr [ESI],ECX             ; 0047e238
    INC EDI                             ; 0047e23a
    MOV AL,byte ptr [EAX]               ; 0047e23b
    AND EAX,0xff                        ; 0047e23d
    PUSH EAX                            ; 0047e242
    CALL core_event.cpp_isValidIdentifierChar_FUN_00480f40 ; 0047e243
        ;   XREF to: 00480f40 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_isValidIdentifierChar_FUN_00480f40()
    ADD ESP,0x4                         ; 0047e248
    TEST EAX,EAX                        ; 0047e24b
    JNZ 0x0047e227                      ; 0047e24d
        ;   XREF to: 0047e227 (CONDITIONAL_JUMP)  ; LAB_0047e227
    MOV byte ptr [EDI],0x0              ; 0047e24f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e252
    ADD EAX,dword ptr [ESI]             ; 0047e255
    CMP byte ptr [EAX],0x28             ; 0047e257
    JZ 0x0047e2c6                       ; 0047e25a
        ;   XREF to: 0047e2c6 (CONDITIONAL_JUMP)  ; LAB_0047e2c6
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047e25c
    MOV EAX,ESI                         ; 0047e25f
    MOV EDX,dword ptr [EAX]             ; 0047e261
        ;   Label: LAB_0047e261
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 0047e263
    INC DL                              ; 0047e266
    AND EDX,0xff                        ; 0047e268
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e26e | DAT_005c168c
    JZ 0x0047e2ab                       ; 0047e275
        ;   XREF to: 0047e2ab (CONDITIONAL_JUMP)  ; LAB_0047e2ab
    INC dword ptr [EAX]                 ; 0047e277
    JMP 0x0047e261                      ; 0047e279
        ;   XREF to: 0047e261 (UNCONDITIONAL_JUMP)  ; LAB_0047e261
    MOV ESI,0x5802b7                    ; 0047e27b | = "Syntax error"
        ;   Label: LAB_0047e27b
    MOV EDI,0x1c08b60                   ; 0047e280
    PUSH EDI                            ; 0047e285 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e286 | = "Syntax error" | s_ntax_error_005802b7+2
        ;   Label: LAB_0047e286
    MOV byte ptr [EDI],AL               ; 0047e288 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e28a
    JZ 0x0047e29e                       ; 0047e28c
        ;   XREF to: 0047e29e (CONDITIONAL_JUMP)  ; LAB_0047e29e
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e28e | s_yntax_error_005802b7+1 | s_tax_error_005802b7+3
    ADD ESI,0x2                         ; 0047e291
    MOV byte ptr [EDI + 0x1],AL         ; 0047e294 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e297
    CMP AL,0x0                          ; 0047e29a
    JNZ 0x0047e286                      ; 0047e29c
        ;   XREF to: 0047e286 (CONDITIONAL_JUMP)  ; LAB_0047e286
    POP EDI                             ; 0047e29e
        ;   Label: LAB_0047e29e
    MOV EAX,0xffffffff                  ; 0047e29f
    MOV ESP,EBP                         ; 0047e2a4
    POP EBP                             ; 0047e2a6
    POP EDI                             ; 0047e2a7
    POP ESI                             ; 0047e2a8
    POP EBX                             ; 0047e2a9
    RET                                 ; 0047e2aa
    LEA EAX,[ESP + 0x940]               ; 0047e2ab
        ;   Label: LAB_0047e2ab
    PUSH EAX                            ; 0047e2b2
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047e2b3
    PUSH EBX                            ; 0047e2b6
    CALL core_event.cpp_CEventList_resolveVariable_FUN_0047dba0 ; 0047e2b7
        ;   XREF to: 0047dba0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_resolveVariable_FUN_0047dba0()
    ADD ESP,0x8                         ; 0047e2bc
    MOV ESP,EBP                         ; 0047e2bf
    POP EBP                             ; 0047e2c1
    POP EDI                             ; 0047e2c2
    POP ESI                             ; 0047e2c3
    POP EBX                             ; 0047e2c4
    RET                                 ; 0047e2c5
    MOV EAX,0xffffffff                  ; 0047e2c6
        ;   Label: LAB_0047e2c6
    PUSH 0x5802c4                       ; 0047e2cb | DAT_005802c4
    MOV dword ptr [ESP + 0x9b8],EAX     ; 0047e2d0
    LEA EAX,[ESP + 0x944]               ; 0047e2d7
    PUSH EAX                            ; 0047e2de
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047e2df
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047e2e4
    TEST EAX,EAX                        ; 0047e2e7
    JNZ 0x0047e71e                      ; 0047e2e9
        ;   XREF to: 0047e71e (CONDITIONAL_JUMP)  ; LAB_0047e71e
    LEA EAX,[ESP + 0x9d0]               ; 0047e2ef
    PUSH EAX                            ; 0047e2f6
    LEA EAX,[ESP + 0x750]               ; 0047e2f7
    PUSH EAX                            ; 0047e2fe
    LEA EAX,[ESP + 0x880]               ; 0047e2ff
    MOV EBX,0xffffffff                  ; 0047e306
    PUSH EAX                            ; 0047e30b
    LEA EAX,[ESP + 0x1e0]               ; 0047e30c
    MOV dword ptr [ESP + 0x9dc],EBX     ; 0047e313
    PUSH EAX                            ; 0047e31a
    MOV EAX,0x5802c8                    ; 0047e31b | = " ( %s %s %[^ )] )%n"
    MOV EDI,dword ptr [ESI]             ; 0047e320
    PUSH EAX                            ; 0047e322 | = " ( %s %s %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e323
    ADD EAX,EDI                         ; 0047e326
    PUSH EAX                            ; 0047e328
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047e329
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x18                        ; 0047e32e
    CMP dword ptr [ESP + 0x9d0],0x3     ; 0047e331
    JL 0x0047e3a2                       ; 0047e339
        ;   XREF to: 0047e3a2 (CONDITIONAL_JUMP)  ; LAB_0047e3a2
    LEA EBX,[ESP + 0x1d4]               ; 0047e33b
    MOV EDI,EBX                         ; 0047e342
    SUB ECX,ECX                         ; 0047e344
    DEC ECX                             ; 0047e346
    XOR EAX,EAX                         ; 0047e347
    SCASB.REPNE ES:EDI                  ; 0047e349
    NOT ECX                             ; 0047e34b
    DEC ECX                             ; 0047e34d
    MOV EDI,ECX                         ; 0047e34e
    TEST ECX,ECX                        ; 0047e350
    JLE 0x0047e36b                      ; 0047e352
        ;   XREF to: 0047e36b (CONDITIONAL_JUMP)  ; LAB_0047e36b
    LEA EAX,[ECX + EBX*0x1]             ; 0047e354
    MOV DL,byte ptr [EAX + -0x1]        ; 0047e357
        ;   Label: LAB_0047e357
    INC DL                              ; 0047e35a
    AND EDX,0xff                        ; 0047e35c
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e362 | DAT_005c168c
    JNZ 0x0047e3cf                      ; 0047e369
        ;   XREF to: 0047e3cf (CONDITIONAL_JUMP)  ; LAB_0047e3cf
    LEA EAX,[EBX + EDI*0x1]             ; 0047e36b
        ;   Label: LAB_0047e36b
    MOV byte ptr [EAX],0x0              ; 0047e36e
    LEA EAX,[EBX + 0x1]                 ; 0047e371
    MOV dword ptr [ESP + 0x9c0],EAX     ; 0047e374
    MOV AL,byte ptr [EBX]               ; 0047e37b
        ;   Label: LAB_0047e37b
    INC AL                              ; 0047e37d
    AND EAX,0xff                        ; 0047e37f
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047e384 | DAT_005c168c
    JZ 0x0047e3d7                       ; 0047e38b
        ;   XREF to: 0047e3d7 (CONDITIONAL_JUMP)  ; LAB_0047e3d7
    PUSH EDI                            ; 0047e38d
    MOV EAX,dword ptr [ESP + 0x9c4]     ; 0047e38e
    PUSH EAX                            ; 0047e395
    PUSH EBX                            ; 0047e396
    DEC EDI                             ; 0047e397
    CALL crt_string.c_memmove_FUN_00566170 ; 0047e398
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047e39d
    JMP 0x0047e37b                      ; 0047e3a0
        ;   XREF to: 0047e37b (UNCONDITIONAL_JUMP)  ; LAB_0047e37b
    MOV ESI,0x5802dc                    ; 0047e3a2 | = "Error parsing cmp parameters."
        ;   Label: LAB_0047e3a2
    MOV EDI,0x1c08b60                   ; 0047e3a7
    PUSH EDI                            ; 0047e3ac | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e3ad | = "Error parsing cmp parameters." | s_ror_parsing_cmp_parameters._005802dc+2
        ;   Label: LAB_0047e3ad
    MOV byte ptr [EDI],AL               ; 0047e3af | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e3b1
    JZ 0x0047e3c5                       ; 0047e3b3
        ;   XREF to: 0047e3c5 (CONDITIONAL_JUMP)  ; LAB_0047e3c5
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e3b5 | s_rror_parsing_cmp_parameters._005802dc+1 | s_or_parsing_cmp_parameters._005802dc+3
    ADD ESI,0x2                         ; 0047e3b8
    MOV byte ptr [EDI + 0x1],AL         ; 0047e3bb | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e3be
    CMP AL,0x0                          ; 0047e3c1
    JNZ 0x0047e3ad                      ; 0047e3c3
        ;   XREF to: 0047e3ad (CONDITIONAL_JUMP)  ; LAB_0047e3ad
    POP EDI                             ; 0047e3c5
        ;   Label: LAB_0047e3c5
    MOV EAX,EBX                         ; 0047e3c6
    MOV ESP,EBP                         ; 0047e3c8
    POP EBP                             ; 0047e3ca
    POP EDI                             ; 0047e3cb
    POP ESI                             ; 0047e3cc
    POP EBX                             ; 0047e3cd
    RET                                 ; 0047e3ce
    DEC EDI                             ; 0047e3cf
        ;   Label: LAB_0047e3cf
    DEC EAX                             ; 0047e3d0
    TEST EDI,EDI                        ; 0047e3d1
    JG 0x0047e357                       ; 0047e3d3
        ;   XREF to: 0047e357 (CONDITIONAL_JUMP)  ; LAB_0047e357
    JMP 0x0047e36b                      ; 0047e3d5
        ;   XREF to: 0047e36b (UNCONDITIONAL_JUMP)  ; LAB_0047e36b
    LEA EDI,[ESP + 0x74c]               ; 0047e3d7
        ;   Label: LAB_0047e3d7
    LEA EBX,[ESP + 0x74c]               ; 0047e3de
    SUB ECX,ECX                         ; 0047e3e5
    DEC ECX                             ; 0047e3e7
    XOR EAX,EAX                         ; 0047e3e8
    SCASB.REPNE ES:EDI                  ; 0047e3ea
    NOT ECX                             ; 0047e3ec
    DEC ECX                             ; 0047e3ee
    MOV EDI,ECX                         ; 0047e3ef
    TEST ECX,ECX                        ; 0047e3f1
    JLE 0x0047e412                      ; 0047e3f3
        ;   XREF to: 0047e412 (CONDITIONAL_JUMP)  ; LAB_0047e412
    LEA EAX,[ESP + 0x74c]               ; 0047e3f5
    ADD EAX,ECX                         ; 0047e3fc
    MOV DL,byte ptr [EAX + -0x1]        ; 0047e3fe
        ;   Label: LAB_0047e3fe
    INC DL                              ; 0047e401
    AND EDX,0xff                        ; 0047e403
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e409 | DAT_005c168c
    JNZ 0x0047e449                      ; 0047e410
        ;   XREF to: 0047e449 (CONDITIONAL_JUMP)  ; LAB_0047e449
    LEA EAX,[EBX + EDI*0x1]             ; 0047e412
        ;   Label: LAB_0047e412
    MOV byte ptr [EAX],0x0              ; 0047e415
    LEA EAX,[EBX + 0x1]                 ; 0047e418
    MOV dword ptr [ESP + 0x9c4],EAX     ; 0047e41b
    MOV AL,byte ptr [EBX]               ; 0047e422
        ;   Label: LAB_0047e422
    INC AL                              ; 0047e424
    AND EAX,0xff                        ; 0047e426
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047e42b | DAT_005c168c
    JZ 0x0047e451                       ; 0047e432
        ;   XREF to: 0047e451 (CONDITIONAL_JUMP)  ; LAB_0047e451
    PUSH EDI                            ; 0047e434
    MOV EDX,dword ptr [ESP + 0x9c8]     ; 0047e435
    PUSH EDX                            ; 0047e43c
    PUSH EBX                            ; 0047e43d
    DEC EDI                             ; 0047e43e
    CALL crt_string.c_memmove_FUN_00566170 ; 0047e43f
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047e444
    JMP 0x0047e422                      ; 0047e447
        ;   XREF to: 0047e422 (UNCONDITIONAL_JUMP)  ; LAB_0047e422
    DEC EDI                             ; 0047e449
        ;   Label: LAB_0047e449
    DEC EAX                             ; 0047e44a
    TEST EDI,EDI                        ; 0047e44b
    JG 0x0047e3fe                       ; 0047e44d
        ;   XREF to: 0047e3fe (CONDITIONAL_JUMP)  ; LAB_0047e3fe
    JMP 0x0047e412                      ; 0047e44f
        ;   XREF to: 0047e412 (UNCONDITIONAL_JUMP)  ; LAB_0047e412
    LEA EDI,[ESP + 0x878]               ; 0047e451
        ;   Label: LAB_0047e451
    LEA EBX,[ESP + 0x878]               ; 0047e458
    SUB ECX,ECX                         ; 0047e45f
    DEC ECX                             ; 0047e461
    XOR EAX,EAX                         ; 0047e462
    SCASB.REPNE ES:EDI                  ; 0047e464
    NOT ECX                             ; 0047e466
    DEC ECX                             ; 0047e468
    MOV EDI,ECX                         ; 0047e469
    TEST ECX,ECX                        ; 0047e46b
    JLE 0x0047e48c                      ; 0047e46d
        ;   XREF to: 0047e48c (CONDITIONAL_JUMP)  ; LAB_0047e48c
    LEA EAX,[ESP + 0x878]               ; 0047e46f
    ADD EAX,ECX                         ; 0047e476
    MOV DL,byte ptr [EAX + -0x1]        ; 0047e478
        ;   Label: LAB_0047e478
    INC DL                              ; 0047e47b
    AND EDX,0xff                        ; 0047e47d
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e483 | DAT_005c168c
    JNZ 0x0047e4c3                      ; 0047e48a
        ;   XREF to: 0047e4c3 (CONDITIONAL_JUMP)  ; LAB_0047e4c3
    LEA EAX,[EBX + EDI*0x1]             ; 0047e48c
        ;   Label: LAB_0047e48c
    MOV byte ptr [EAX],0x0              ; 0047e48f
    LEA EAX,[EBX + 0x1]                 ; 0047e492
    MOV dword ptr [ESP + 0x9c8],EAX     ; 0047e495
    MOV AL,byte ptr [EBX]               ; 0047e49c
        ;   Label: LAB_0047e49c
    INC AL                              ; 0047e49e
    AND EAX,0xff                        ; 0047e4a0
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047e4a5 | DAT_005c168c
    JZ 0x0047e4cb                       ; 0047e4ac
        ;   XREF to: 0047e4cb (CONDITIONAL_JUMP)  ; LAB_0047e4cb
    PUSH EDI                            ; 0047e4ae
    MOV EAX,dword ptr [ESP + 0x9cc]     ; 0047e4af
    PUSH EAX                            ; 0047e4b6
    PUSH EBX                            ; 0047e4b7
    DEC EDI                             ; 0047e4b8
    CALL crt_string.c_memmove_FUN_00566170 ; 0047e4b9
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047e4be
    JMP 0x0047e49c                      ; 0047e4c1
        ;   XREF to: 0047e49c (UNCONDITIONAL_JUMP)  ; LAB_0047e49c
    DEC EDI                             ; 0047e4c3
        ;   Label: LAB_0047e4c3
    DEC EAX                             ; 0047e4c4
    TEST EDI,EDI                        ; 0047e4c5
    JG 0x0047e478                       ; 0047e4c7
        ;   XREF to: 0047e478 (CONDITIONAL_JUMP)  ; LAB_0047e478
    JMP 0x0047e48c                      ; 0047e4c9
        ;   XREF to: 0047e48c (UNCONDITIONAL_JUMP)  ; LAB_0047e48c
    PUSH 0x57f3b3                       ; 0047e4cb | DAT_0057f3b3
        ;   Label: LAB_0047e4cb
    LEA EAX,[ESP + 0x87c]               ; 0047e4d0
    PUSH EAX                            ; 0047e4d7
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047e4d8
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0047e4dd
    TEST EAX,EAX                        ; 0047e4e0
    JNZ 0x0047e59d                      ; 0047e4e2
        ;   XREF to: 0047e59d (CONDITIONAL_JUMP)  ; LAB_0047e59d
    MOV EDI,EAX                         ; 0047e4e8
        ;   Label: LAB_0047e4e8
    CMP EAX,0x6                         ; 0047e4ea
    JZ 0x0047e656                       ; 0047e4ed
        ;   XREF to: 0047e656 (CONDITIONAL_JUMP)  ; LAB_0047e656
    MOV EAX,dword ptr [ESP + 0x9d0]     ; 0047e4f3
    MOV ECX,dword ptr [ESI]             ; 0047e4fa
    ADD ECX,EAX                         ; 0047e4fc
    LEA EAX,[ESP + 0x9cc]               ; 0047e4fe
    PUSH EAX                            ; 0047e505
    PUSH 0x57f3c3                       ; 0047e506 | DAT_0057f3c3
    LEA EAX,[ESP + 0x1dc]               ; 0047e50b
    PUSH EAX                            ; 0047e512
    MOV dword ptr [ESI],ECX             ; 0047e513
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047e515
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047e51a
    CMP EAX,0x1                         ; 0047e51d
    JNZ 0x0047e686                      ; 0047e520
        ;   XREF to: 0047e686 (CONDITIONAL_JUMP)  ; LAB_0047e686
    MOV EAX,dword ptr [ESP + 0x9cc]     ; 0047e526
    MOV EBX,EAX                         ; 0047e52d
        ;   Label: LAB_0047e52d
    LEA EAX,[ESP + 0xa1c]               ; 0047e52f
    PUSH EAX                            ; 0047e536
    PUSH 0x57f3c3                       ; 0047e537 | DAT_0057f3c3
    LEA EAX,[ESP + 0x754]               ; 0047e53c
    PUSH EAX                            ; 0047e543
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047e544
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047e549
    CMP EAX,0x1                         ; 0047e54c
    JNZ 0x0047e6a2                      ; 0047e54f
        ;   XREF to: 0047e6a2 (CONDITIONAL_JUMP)  ; LAB_0047e6a2
    MOV EAX,dword ptr [ESP + 0xa1c]     ; 0047e555
    CMP EDI,0x5                         ; 0047e55c
    JA 0x0047e6f6                       ; 0047e55f
        ;   XREF to: 0047e6f6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x47e0ac]  ; 0047e565 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP EBX,EAX                         ; 0047e56c
        ;   Label: caseD_0
    SETL AL                             ; 0047e56e
    AND EAX,0xff                        ; 0047e571
        ;   Label: LAB_0047e571
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047e576
        ;   Label: LAB_0047e576
    MOV EDX,dword ptr [EBP + 0x18]      ; 0047e57d
        ;   Label: LAB_0047e57d
    MOV EAX,dword ptr [ESI]             ; 0047e580
        ;   Label: LAB_0047e580
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0047e582
    INC AL                              ; 0047e585
    AND EAX,0xff                        ; 0047e587
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047e58c | DAT_005c168c
    JZ 0x00480208                       ; 0047e593
        ;   XREF to: 00480208 (CONDITIONAL_JUMP)  ; LAB_00480208
    INC dword ptr [ESI]                 ; 0047e599
    JMP 0x0047e580                      ; 0047e59b
        ;   XREF to: 0047e580 (UNCONDITIONAL_JUMP)  ; LAB_0047e580
    PUSH 0x57f3b5                       ; 0047e59d | DAT_0057f3b5
        ;   Label: LAB_0047e59d
    LEA EAX,[ESP + 0x87c]               ; 0047e5a2
    PUSH EAX                            ; 0047e5a9
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047e5aa
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0047e5af
    TEST EAX,EAX                        ; 0047e5b2
    JNZ 0x0047e5c0                      ; 0047e5b4
        ;   XREF to: 0047e5c0 (CONDITIONAL_JUMP)  ; LAB_0047e5c0
    MOV EAX,0x1                         ; 0047e5b6
    JMP 0x0047e4e8                      ; 0047e5bb
        ;   XREF to: 0047e4e8 (UNCONDITIONAL_JUMP)  ; LAB_0047e4e8
    PUSH 0x57f3b8                       ; 0047e5c0 | DAT_0057f3b8
        ;   Label: LAB_0047e5c0
    LEA EAX,[ESP + 0x87c]               ; 0047e5c5
    PUSH EAX                            ; 0047e5cc
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047e5cd
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0047e5d2
    TEST EAX,EAX                        ; 0047e5d5
    JNZ 0x0047e5e3                      ; 0047e5d7
        ;   XREF to: 0047e5e3 (CONDITIONAL_JUMP)  ; LAB_0047e5e3
    MOV EAX,0x2                         ; 0047e5d9
    JMP 0x0047e4e8                      ; 0047e5de
        ;   XREF to: 0047e4e8 (UNCONDITIONAL_JUMP)  ; LAB_0047e4e8
    PUSH 0x57f3bb                       ; 0047e5e3 | DAT_0057f3bb
        ;   Label: LAB_0047e5e3
    LEA EAX,[ESP + 0x87c]               ; 0047e5e8
    PUSH EAX                            ; 0047e5ef
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047e5f0
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0047e5f5
    TEST EAX,EAX                        ; 0047e5f8
    JNZ 0x0047e606                      ; 0047e5fa
        ;   XREF to: 0047e606 (CONDITIONAL_JUMP)  ; LAB_0047e606
    MOV EAX,0x3                         ; 0047e5fc
    JMP 0x0047e4e8                      ; 0047e601
        ;   XREF to: 0047e4e8 (UNCONDITIONAL_JUMP)  ; LAB_0047e4e8
    PUSH 0x57f3be                       ; 0047e606 | DAT_0057f3be
        ;   Label: LAB_0047e606
    LEA EAX,[ESP + 0x87c]               ; 0047e60b
    PUSH EAX                            ; 0047e612
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047e613
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0047e618
    TEST EAX,EAX                        ; 0047e61b
    JNZ 0x0047e629                      ; 0047e61d
        ;   XREF to: 0047e629 (CONDITIONAL_JUMP)  ; LAB_0047e629
    MOV EAX,0x5                         ; 0047e61f
    JMP 0x0047e4e8                      ; 0047e624
        ;   XREF to: 0047e4e8 (UNCONDITIONAL_JUMP)  ; LAB_0047e4e8
    PUSH 0x57f3c0                       ; 0047e629 | DAT_0057f3c0
        ;   Label: LAB_0047e629
    LEA EAX,[ESP + 0x87c]               ; 0047e62e
    PUSH EAX                            ; 0047e635
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047e636
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0047e63b
    TEST EAX,EAX                        ; 0047e63e
    JNZ 0x0047e64c                      ; 0047e640
        ;   XREF to: 0047e64c (CONDITIONAL_JUMP)  ; LAB_0047e64c
    MOV EAX,0x4                         ; 0047e642
    JMP 0x0047e4e8                      ; 0047e647
        ;   XREF to: 0047e4e8 (UNCONDITIONAL_JUMP)  ; LAB_0047e4e8
    MOV EAX,0x6                         ; 0047e64c
        ;   Label: LAB_0047e64c
    JMP 0x0047e4e8                      ; 0047e651
        ;   XREF to: 0047e4e8 (UNCONDITIONAL_JUMP)  ; LAB_0047e4e8
    MOV ESI,0x5802fa                    ; 0047e656 | = "Invalid relational operator in cmp st..."
        ;   Label: LAB_0047e656
    MOV EDI,0x1c08b60                   ; 0047e65b
    PUSH EDI                            ; 0047e660 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e661 | = "Invalid relational operator in cmp st..." | s_valid_relational_operator_in_cmp_005802fa+2
        ;   Label: LAB_0047e661
    MOV byte ptr [EDI],AL               ; 0047e663 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e665
    JZ 0x0047e679                       ; 0047e667
        ;   XREF to: 0047e679 (CONDITIONAL_JUMP)  ; LAB_0047e679
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e669 | s_nvalid_relational_operator_in_cm_005802fa+1 | s_alid_relational_operator_in_cmp_s_005802fa+3
    ADD ESI,0x2                         ; 0047e66c
    MOV byte ptr [EDI + 0x1],AL         ; 0047e66f | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e672
    CMP AL,0x0                          ; 0047e675
    JNZ 0x0047e661                      ; 0047e677
        ;   XREF to: 0047e661 (CONDITIONAL_JUMP)  ; LAB_0047e661
    POP EDI                             ; 0047e679
        ;   Label: LAB_0047e679
    MOV EAX,0xffffffff                  ; 0047e67a
    MOV ESP,EBP                         ; 0047e67f
    POP EBP                             ; 0047e681
    POP EDI                             ; 0047e682
    POP ESI                             ; 0047e683
    POP EBX                             ; 0047e684
    RET                                 ; 0047e685
    LEA EAX,[ESP + 0x1d4]               ; 0047e686
        ;   Label: LAB_0047e686
    PUSH EAX                            ; 0047e68d
    MOV EBX,dword ptr [0x005b7650]      ; 0047e68e | DAT_005b7650
    PUSH EBX                            ; 0047e694
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004807e0 ; 0047e695
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_getCounterValue_FUN_004807e0()
    ADD ESP,0x8                         ; 0047e69a
    JMP 0x0047e52d                      ; 0047e69d
        ;   XREF to: 0047e52d (UNCONDITIONAL_JUMP)  ; LAB_0047e52d
    LEA EAX,[ESP + 0x74c]               ; 0047e6a2
        ;   Label: LAB_0047e6a2
    PUSH EAX                            ; 0047e6a9
    MOV EAX,[0x005b7650]                ; 0047e6aa | DAT_005b7650
    PUSH EAX                            ; 0047e6af
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004807e0 ; 0047e6b0
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_getCounterValue_FUN_004807e0()
    ADD ESP,0x8                         ; 0047e6b5
    CMP EDI,0x5                         ; 0047e6b8
    JA 0x0047e6f6                       ; 0047e6bb
        ;   XREF to: 0047e6f6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x47e0ac]  ; 0047e6bd | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP EBX,EAX                         ; 0047e6c4
        ;   Label: caseD_1
    SETLE AL                            ; 0047e6c6
    JMP 0x0047e571                      ; 0047e6c9
        ;   XREF to: 0047e571 (UNCONDITIONAL_JUMP)  ; LAB_0047e571
    CMP EBX,EAX                         ; 0047e6ce
        ;   Label: caseD_2
    SETZ AL                             ; 0047e6d0
    JMP 0x0047e571                      ; 0047e6d3
        ;   XREF to: 0047e571 (UNCONDITIONAL_JUMP)  ; LAB_0047e571
    CMP EBX,EAX                         ; 0047e6d8
        ;   Label: caseD_3
    SETNZ AL                            ; 0047e6da
    JMP 0x0047e571                      ; 0047e6dd
        ;   XREF to: 0047e571 (UNCONDITIONAL_JUMP)  ; LAB_0047e571
    CMP EBX,EAX                         ; 0047e6e2
        ;   Label: caseD_5
    SETG AL                             ; 0047e6e4
    JMP 0x0047e571                      ; 0047e6e7
        ;   XREF to: 0047e571 (UNCONDITIONAL_JUMP)  ; LAB_0047e571
    CMP EBX,EAX                         ; 0047e6ec
        ;   Label: caseD_4
    SETGE AL                            ; 0047e6ee
    JMP 0x0047e571                      ; 0047e6f1
        ;   XREF to: 0047e571 (UNCONDITIONAL_JUMP)  ; LAB_0047e571
    MOV EDX,0x580327                    ; 0047e6f6 | = "..\\core\\event.cpp"
        ;   Label: default
    MOV ECX,0x765                       ; 0047e6fb
    PUSH 0x580339                       ; 0047e700 | = "Hell froze."
    MOV dword ptr [0x01cc4800],EDX      ; 0047e705 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0047e70b | DAT_01cc4804
    CALL FUN_004c8440                   ; 0047e711
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0047e716
    JMP 0x0047e57d                      ; 0047e719
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x580345                       ; 0047e71e | = "exists"
        ;   Label: LAB_0047e71e
    LEA EAX,[ESP + 0x944]               ; 0047e723
    PUSH EAX                            ; 0047e72a
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047e72b
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047e730
    TEST EAX,EAX                        ; 0047e733
    JNZ 0x0047e863                      ; 0047e735
        ;   XREF to: 0047e863 (CONDITIONAL_JUMP)  ; LAB_0047e863
    MOV dword ptr [ESP + 0xa24],0xffffffff ; 0047e73b
    LEA EAX,[ESP + 0xa24]               ; 0047e746
    PUSH EAX                            ; 0047e74d
    LEA EAX,[ESP + 0x7b4]               ; 0047e74e
    PUSH EAX                            ; 0047e755
    MOV EAX,0x58034c                    ; 0047e756 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 0047e75b
    PUSH EAX                            ; 0047e75d | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e75e
    ADD EAX,EDX                         ; 0047e761
    PUSH EAX                            ; 0047e763
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047e764
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047e769
    CMP dword ptr [ESP + 0xa24],0x3     ; 0047e76c
    JL 0x0047e7dd                       ; 0047e774
        ;   XREF to: 0047e7dd (CONDITIONAL_JUMP)  ; LAB_0047e7dd
    LEA EBX,[ESP + 0x7b0]               ; 0047e776
    MOV EDI,EBX                         ; 0047e77d
    SUB ECX,ECX                         ; 0047e77f
    DEC ECX                             ; 0047e781
    XOR EAX,EAX                         ; 0047e782
    SCASB.REPNE ES:EDI                  ; 0047e784
    NOT ECX                             ; 0047e786
    DEC ECX                             ; 0047e788
    MOV EDI,ECX                         ; 0047e789
    TEST ECX,ECX                        ; 0047e78b
    JLE 0x0047e7a6                      ; 0047e78d
        ;   XREF to: 0047e7a6 (CONDITIONAL_JUMP)  ; LAB_0047e7a6
    LEA EAX,[ECX + EBX*0x1]             ; 0047e78f
    MOV DL,byte ptr [EAX + -0x1]        ; 0047e792
        ;   Label: LAB_0047e792
    INC DL                              ; 0047e795
    AND EDX,0xff                        ; 0047e797
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e79d | DAT_005c168c
    JNZ 0x0047e80d                      ; 0047e7a4
        ;   XREF to: 0047e80d (CONDITIONAL_JUMP)  ; LAB_0047e80d
    LEA EAX,[EBX + EDI*0x1]             ; 0047e7a6
        ;   Label: LAB_0047e7a6
    MOV byte ptr [EAX],0x0              ; 0047e7a9
    LEA EAX,[EBX + 0x1]                 ; 0047e7ac
    MOV dword ptr [ESP + 0x9d4],EAX     ; 0047e7af
    MOV AL,byte ptr [EBX]               ; 0047e7b6
        ;   Label: LAB_0047e7b6
    INC AL                              ; 0047e7b8
    AND EAX,0xff                        ; 0047e7ba
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047e7bf | DAT_005c168c
    JZ 0x0047e819                       ; 0047e7c6
        ;   XREF to: 0047e819 (CONDITIONAL_JUMP)  ; LAB_0047e819
    PUSH EDI                            ; 0047e7c8
    MOV ECX,dword ptr [ESP + 0x9d8]     ; 0047e7c9
    PUSH ECX                            ; 0047e7d0
    PUSH EBX                            ; 0047e7d1
    DEC EDI                             ; 0047e7d2
    CALL crt_string.c_memmove_FUN_00566170 ; 0047e7d3
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047e7d8
    JMP 0x0047e7b6                      ; 0047e7db
        ;   XREF to: 0047e7b6 (UNCONDITIONAL_JUMP)  ; LAB_0047e7b6
    MOV ESI,0x58035a                    ; 0047e7dd | = "Error parsing exists parameters."
        ;   Label: LAB_0047e7dd
    MOV EDI,0x1c08b60                   ; 0047e7e2
    PUSH EDI                            ; 0047e7e7 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e7e8 | = "Error parsing exists parameters." | s_ror_parsing_exists_parameters._0058035a+2
        ;   Label: LAB_0047e7e8
    MOV byte ptr [EDI],AL               ; 0047e7ea | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e7ec
    JZ 0x0047e800                       ; 0047e7ee
        ;   XREF to: 0047e800 (CONDITIONAL_JUMP)  ; LAB_0047e800
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e7f0 | s_rror_parsing_exists_parameters._0058035a+1 | s_or_parsing_exists_parameters._0058035a+3
    ADD ESI,0x2                         ; 0047e7f3
    MOV byte ptr [EDI + 0x1],AL         ; 0047e7f6 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e7f9
    CMP AL,0x0                          ; 0047e7fc
    JNZ 0x0047e7e8                      ; 0047e7fe
        ;   XREF to: 0047e7e8 (CONDITIONAL_JUMP)  ; LAB_0047e7e8
    POP EDI                             ; 0047e800
        ;   Label: LAB_0047e800
    MOV EAX,0xffffffff                  ; 0047e801
    MOV ESP,EBP                         ; 0047e806
    POP EBP                             ; 0047e808
    POP EDI                             ; 0047e809
    POP ESI                             ; 0047e80a
    POP EBX                             ; 0047e80b
    RET                                 ; 0047e80c
    DEC EDI                             ; 0047e80d
        ;   Label: LAB_0047e80d
    DEC EAX                             ; 0047e80e
    TEST EDI,EDI                        ; 0047e80f
    JG 0x0047e792                       ; 0047e811
        ;   XREF to: 0047e792 (CONDITIONAL_JUMP)  ; LAB_0047e792
    JMP 0x0047e7a6                      ; 0047e817
        ;   XREF to: 0047e7a6 (UNCONDITIONAL_JUMP)  ; LAB_0047e7a6
    PUSH 0x763e48                       ; 0047e819 | DAT_00763e48
        ;   Label: LAB_0047e819
    MOV EBX,dword ptr [0x00763e80]      ; 0047e81e | DAT_00763e80
    PUSH EBX                            ; 0047e824
    LEA EAX,[ESP + 0x7b8]               ; 0047e825
    PUSH EAX                            ; 0047e82c
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047e82d
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047e832
    TEST EAX,EAX                        ; 0047e835
    JZ 0x0047e85f                       ; 0047e837
        ;   XREF to: 0047e85f (CONDITIONAL_JUMP)  ; LAB_0047e85f
    CMP EAX,dword ptr [0x0059cf1c]      ; 0047e839 | DAT_0059cf1c
    JZ 0x0047e85f                       ; 0047e83f
        ;   XREF to: 0047e85f (CONDITIONAL_JUMP)  ; LAB_0047e85f
    MOV EAX,0x1                         ; 0047e841
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047e846
        ;   Label: LAB_0047e846
    MOV EDX,dword ptr [ESI]             ; 0047e84d
    MOV EAX,dword ptr [ESP + 0xa24]     ; 0047e84f
    ADD EDX,EAX                         ; 0047e856
    MOV dword ptr [ESI],EDX             ; 0047e858
    JMP 0x0047e57d                      ; 0047e85a
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    XOR EAX,EAX                         ; 0047e85f
        ;   Label: LAB_0047e85f
    JMP 0x0047e846                      ; 0047e861
        ;   XREF to: 0047e846 (UNCONDITIONAL_JUMP)  ; LAB_0047e846
    PUSH 0x58037b                       ; 0047e863 | = "hasItem"
        ;   Label: LAB_0047e863
    LEA EAX,[ESP + 0x944]               ; 0047e868
    PUSH EAX                            ; 0047e86f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047e870
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047e875
    TEST EAX,EAX                        ; 0047e878
    JNZ 0x0047e9fb                      ; 0047e87a
        ;   XREF to: 0047e9fb (CONDITIONAL_JUMP)  ; LAB_0047e9fb
    MOV EAX,[0x005bdee0]                ; 0047e880 | DAT_005bdee0
    CMP dword ptr [EAX],0x0             ; 0047e885 | DAT_01cea280
    JNZ 0x0047e93d                      ; 0047e888
        ;   XREF to: 0047e93d (CONDITIONAL_JUMP)  ; LAB_0047e93d
    LEA EAX,[ESP + 0x9d8]               ; 0047e88e
    MOV ECX,0xffffffff                  ; 0047e895
    PUSH EAX                            ; 0047e89a
    LEA EAX,[ESP + 0x2a0]               ; 0047e89b
    MOV dword ptr [ESP + 0x9dc],ECX     ; 0047e8a2
    PUSH EAX                            ; 0047e8a9
    MOV EAX,0x5803af                    ; 0047e8aa | = " (%[^)])%n"
    MOV EBX,dword ptr [ESI]             ; 0047e8af
    PUSH EAX                            ; 0047e8b1 | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047e8b2
    ADD EAX,EBX                         ; 0047e8b5
    PUSH EAX                            ; 0047e8b7
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047e8b8
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047e8bd
    CMP dword ptr [ESP + 0x9d8],0x3     ; 0047e8c0
    JL 0x0047e96d                       ; 0047e8c8
        ;   XREF to: 0047e96d (CONDITIONAL_JUMP)  ; LAB_0047e96d
    LEA EBX,[ESP + 0x29c]               ; 0047e8ce
    MOV EDI,EBX                         ; 0047e8d5
    SUB ECX,ECX                         ; 0047e8d7
    DEC ECX                             ; 0047e8d9
    XOR EAX,EAX                         ; 0047e8da
    SCASB.REPNE ES:EDI                  ; 0047e8dc
    NOT ECX                             ; 0047e8de
    DEC ECX                             ; 0047e8e0
    MOV EDI,ECX                         ; 0047e8e1
    TEST ECX,ECX                        ; 0047e8e3
    JLE 0x0047e902                      ; 0047e8e5
        ;   XREF to: 0047e902 (CONDITIONAL_JUMP)  ; LAB_0047e902
    LEA EAX,[ECX + EBX*0x1]             ; 0047e8e7
    MOV DL,byte ptr [EAX + -0x1]        ; 0047e8ea
        ;   Label: LAB_0047e8ea
    INC DL                              ; 0047e8ed
    AND EDX,0xff                        ; 0047e8ef
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047e8f5 | DAT_005c168c
    JNZ 0x0047e99d                      ; 0047e8fc
        ;   XREF to: 0047e99d (CONDITIONAL_JUMP)  ; LAB_0047e99d
    LEA EAX,[EBX + EDI*0x1]             ; 0047e902
        ;   Label: LAB_0047e902
    MOV byte ptr [EAX],0x0              ; 0047e905
    LEA EAX,[EBX + 0x1]                 ; 0047e908
    MOV dword ptr [ESP + 0x9e0],EAX     ; 0047e90b
    MOV AL,byte ptr [EBX]               ; 0047e912
        ;   Label: LAB_0047e912
    INC AL                              ; 0047e914
    AND EAX,0xff                        ; 0047e916
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047e91b | DAT_005c168c
    JZ 0x0047e9ac                       ; 0047e922
        ;   XREF to: 0047e9ac (CONDITIONAL_JUMP)  ; LAB_0047e9ac
    PUSH EDI                            ; 0047e928
    MOV ECX,dword ptr [ESP + 0x9e4]     ; 0047e929
    PUSH ECX                            ; 0047e930
    PUSH EBX                            ; 0047e931
    DEC EDI                             ; 0047e932
    CALL crt_string.c_memmove_FUN_00566170 ; 0047e933
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047e938
    JMP 0x0047e912                      ; 0047e93b
        ;   XREF to: 0047e912 (UNCONDITIONAL_JUMP)  ; LAB_0047e912
    MOV ESI,0x580383                    ; 0047e93d | = "Can't use hasItem condition in multi-..."
        ;   Label: LAB_0047e93d
    MOV EDI,0x1c08b60                   ; 0047e942
    PUSH EDI                            ; 0047e947 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e948 | = "Can't use hasItem condition in multi-..." | s_n't_use_hasItem_condition_in_mul_00580383+2
        ;   Label: LAB_0047e948
    MOV byte ptr [EDI],AL               ; 0047e94a | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e94c
    JZ 0x0047e960                       ; 0047e94e
        ;   XREF to: 0047e960 (CONDITIONAL_JUMP)  ; LAB_0047e960
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e950 | s_an't_use_hasItem_condition_in_mu_00580383+1 | s_'t_use_hasItem_condition_in_mult_00580383+3
    ADD ESI,0x2                         ; 0047e953
    MOV byte ptr [EDI + 0x1],AL         ; 0047e956 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e959
    CMP AL,0x0                          ; 0047e95c
    JNZ 0x0047e948                      ; 0047e95e
        ;   XREF to: 0047e948 (CONDITIONAL_JUMP)  ; LAB_0047e948
    POP EDI                             ; 0047e960
        ;   Label: LAB_0047e960
    MOV EAX,0xffffffff                  ; 0047e961
    MOV ESP,EBP                         ; 0047e966
    POP EBP                             ; 0047e968
    POP EDI                             ; 0047e969
    POP ESI                             ; 0047e96a
    POP EBX                             ; 0047e96b
    RET                                 ; 0047e96c
    MOV ESI,0x5803ba                    ; 0047e96d | = "Error parsing hasItem parameters."
        ;   Label: LAB_0047e96d
    MOV EDI,0x1c08b60                   ; 0047e972
    PUSH EDI                            ; 0047e977 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047e978 | = "Error parsing hasItem parameters." | s_ror_parsing_hasItem_parameters._005803ba+2
        ;   Label: LAB_0047e978
    MOV byte ptr [EDI],AL               ; 0047e97a | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047e97c
    JZ 0x0047e990                       ; 0047e97e
        ;   XREF to: 0047e990 (CONDITIONAL_JUMP)  ; LAB_0047e990
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e980 | s_rror_parsing_hasItem_parameters._005803ba+1 | s_or_parsing_hasItem_parameters._005803ba+3
    ADD ESI,0x2                         ; 0047e983
    MOV byte ptr [EDI + 0x1],AL         ; 0047e986 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047e989
    CMP AL,0x0                          ; 0047e98c
    JNZ 0x0047e978                      ; 0047e98e
        ;   XREF to: 0047e978 (CONDITIONAL_JUMP)  ; LAB_0047e978
    POP EDI                             ; 0047e990
        ;   Label: LAB_0047e990
    MOV EAX,0xffffffff                  ; 0047e991
    MOV ESP,EBP                         ; 0047e996
    POP EBP                             ; 0047e998
    POP EDI                             ; 0047e999
    POP ESI                             ; 0047e99a
    POP EBX                             ; 0047e99b
    RET                                 ; 0047e99c
    DEC EDI                             ; 0047e99d
        ;   Label: LAB_0047e99d
    DEC EAX                             ; 0047e99e
    TEST EDI,EDI                        ; 0047e99f
    JG 0x0047e8ea                       ; 0047e9a1
        ;   XREF to: 0047e8ea (CONDITIONAL_JUMP)  ; LAB_0047e8ea
    JMP 0x0047e902                      ; 0047e9a7
        ;   XREF to: 0047e902 (UNCONDITIONAL_JUMP)  ; LAB_0047e902
    MOV EAX,[0x01cae0e8]                ; 0047e9ac | DAT_01cae0e8
        ;   Label: LAB_0047e9ac
    SHL EAX,0x2                         ; 0047e9b1
    XOR EBX,EBX                         ; 0047e9b4
    MOV EDI,dword ptr [EAX + 0x1cae0d8] ; 0047e9b6
    MOV dword ptr [ESP + 0x9b4],EBX     ; 0047e9bc
    TEST EDI,EDI                        ; 0047e9c3
    JZ 0x0047e9ed                       ; 0047e9c5
        ;   XREF to: 0047e9ed (CONDITIONAL_JUMP)  ; LAB_0047e9ed
    LEA EDX,[ESP + 0x29c]               ; 0047e9c7
    PUSH EDX                            ; 0047e9ce
    LEA EAX,[EDI + 0x1f5a0]             ; 0047e9cf
    PUSH EAX                            ; 0047e9d5
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004c0710 ; 0047e9d6
        ;   XREF to: 004c0710 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_findItemByName_FUN_004c0710()
    ADD ESP,0x8                         ; 0047e9db
    TEST EAX,EAX                        ; 0047e9de
    JZ 0x0047e9ed                       ; 0047e9e0
        ;   XREF to: 0047e9ed (CONDITIONAL_JUMP)  ; LAB_0047e9ed
    MOV dword ptr [ESP + 0x9b4],0x1     ; 0047e9e2
    MOV EAX,dword ptr [ESP + 0x9d8]     ; 0047e9ed
        ;   Label: LAB_0047e9ed
    ADD dword ptr [ESI],EAX             ; 0047e9f4
    JMP 0x0047e57d                      ; 0047e9f6
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x5803dc                       ; 0047e9fb | = "hasItemType"
        ;   Label: LAB_0047e9fb
    LEA EAX,[ESP + 0x944]               ; 0047ea00
    PUSH EAX                            ; 0047ea07
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047ea08
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047ea0d
    TEST EAX,EAX                        ; 0047ea10
    JNZ 0x0047ebe7                      ; 0047ea12
        ;   XREF to: 0047ebe7 (CONDITIONAL_JUMP)  ; LAB_0047ebe7
    LEA EAX,[ESP + 0x9e4]               ; 0047ea18
    PUSH EAX                            ; 0047ea1f
    LEA EAX,[ESP + 0x3cc]               ; 0047ea20
    MOV ECX,0xffffffff                  ; 0047ea27
    PUSH EAX                            ; 0047ea2c
    LEA EAX,[ESP + 0x36c]               ; 0047ea2d
    MOV dword ptr [ESP + 0x9ec],ECX     ; 0047ea34
    PUSH EAX                            ; 0047ea3b
    MOV EAX,0x5803e8                    ; 0047ea3c | = " (%[^,], %[^)] )%n"
    MOV EBX,dword ptr [ESI]             ; 0047ea41
    PUSH EAX                            ; 0047ea43 | = " (%[^,], %[^)] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047ea44
    ADD EAX,EBX                         ; 0047ea47
    PUSH EAX                            ; 0047ea49
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047ea4a
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x14                        ; 0047ea4f
    CMP dword ptr [ESP + 0x9e4],0x5     ; 0047ea52
    JL 0x0047eac3                       ; 0047ea5a
        ;   XREF to: 0047eac3 (CONDITIONAL_JUMP)  ; LAB_0047eac3
    LEA EBX,[ESP + 0x364]               ; 0047ea5c
    MOV EDI,EBX                         ; 0047ea63
    SUB ECX,ECX                         ; 0047ea65
    DEC ECX                             ; 0047ea67
    XOR EAX,EAX                         ; 0047ea68
    SCASB.REPNE ES:EDI                  ; 0047ea6a
    NOT ECX                             ; 0047ea6c
    DEC ECX                             ; 0047ea6e
    MOV EDI,ECX                         ; 0047ea6f
    TEST ECX,ECX                        ; 0047ea71
    JLE 0x0047ea8c                      ; 0047ea73
        ;   XREF to: 0047ea8c (CONDITIONAL_JUMP)  ; LAB_0047ea8c
    LEA EAX,[ECX + EBX*0x1]             ; 0047ea75
    MOV DL,byte ptr [EAX + -0x1]        ; 0047ea78
        ;   Label: LAB_0047ea78
    INC DL                              ; 0047ea7b
    AND EDX,0xff                        ; 0047ea7d
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047ea83 | DAT_005c168c
    JNZ 0x0047eaf3                      ; 0047ea8a
        ;   XREF to: 0047eaf3 (CONDITIONAL_JUMP)  ; LAB_0047eaf3
    LEA EAX,[EBX + EDI*0x1]             ; 0047ea8c
        ;   Label: LAB_0047ea8c
    MOV byte ptr [EAX],0x0              ; 0047ea8f
    LEA EAX,[EBX + 0x1]                 ; 0047ea92
    MOV dword ptr [ESP + 0xa40],EAX     ; 0047ea95
    MOV AL,byte ptr [EBX]               ; 0047ea9c
        ;   Label: LAB_0047ea9c
    INC AL                              ; 0047ea9e
    AND EAX,0xff                        ; 0047eaa0
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047eaa5 | DAT_005c168c
    JZ 0x0047eaff                       ; 0047eaac
        ;   XREF to: 0047eaff (CONDITIONAL_JUMP)  ; LAB_0047eaff
    PUSH EDI                            ; 0047eaae
    MOV EDX,dword ptr [ESP + 0xa44]     ; 0047eaaf
    PUSH EDX                            ; 0047eab6
    PUSH EBX                            ; 0047eab7
    DEC EDI                             ; 0047eab8
    CALL crt_string.c_memmove_FUN_00566170 ; 0047eab9
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047eabe
    JMP 0x0047ea9c                      ; 0047eac1
        ;   XREF to: 0047ea9c (UNCONDITIONAL_JUMP)  ; LAB_0047ea9c
    MOV ESI,0x5803fb                    ; 0047eac3 | = "Error parsing hasItemType parameters."
        ;   Label: LAB_0047eac3
    MOV EDI,0x1c08b60                   ; 0047eac8
    PUSH EDI                            ; 0047eacd | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047eace | = "Error parsing hasItemType parameters." | s_ror_parsing_hasItemType_paramete_005803fb+2
        ;   Label: LAB_0047eace
    MOV byte ptr [EDI],AL               ; 0047ead0 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ead2
    JZ 0x0047eae6                       ; 0047ead4
        ;   XREF to: 0047eae6 (CONDITIONAL_JUMP)  ; LAB_0047eae6
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ead6 | s_rror_parsing_hasItemType_paramet_005803fb+1 | s_or_parsing_hasItemType_parameter_005803fb+3
    ADD ESI,0x2                         ; 0047ead9
    MOV byte ptr [EDI + 0x1],AL         ; 0047eadc | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047eadf
    CMP AL,0x0                          ; 0047eae2
    JNZ 0x0047eace                      ; 0047eae4
        ;   XREF to: 0047eace (CONDITIONAL_JUMP)  ; LAB_0047eace
    POP EDI                             ; 0047eae6
        ;   Label: LAB_0047eae6
    MOV EAX,0xffffffff                  ; 0047eae7
        ;   Label: LAB_0047eae7
    MOV ESP,EBP                         ; 0047eaec
    POP EBP                             ; 0047eaee
    POP EDI                             ; 0047eaef
    POP ESI                             ; 0047eaf0
    POP EBX                             ; 0047eaf1
    RET                                 ; 0047eaf2
    DEC EDI                             ; 0047eaf3
        ;   Label: LAB_0047eaf3
    DEC EAX                             ; 0047eaf4
    TEST EDI,EDI                        ; 0047eaf5
    JG 0x0047ea78                       ; 0047eaf7
        ;   XREF to: 0047ea78 (CONDITIONAL_JUMP)  ; LAB_0047ea78
    JMP 0x0047ea8c                      ; 0047eafd
        ;   XREF to: 0047ea8c (UNCONDITIONAL_JUMP)  ; LAB_0047ea8c
    LEA EDI,[ESP + 0x3c8]               ; 0047eaff
        ;   Label: LAB_0047eaff
    LEA EBX,[ESP + 0x3c8]               ; 0047eb06
    SUB ECX,ECX                         ; 0047eb0d
    DEC ECX                             ; 0047eb0f
    XOR EAX,EAX                         ; 0047eb10
    SCASB.REPNE ES:EDI                  ; 0047eb12
    NOT ECX                             ; 0047eb14
    DEC ECX                             ; 0047eb16
    MOV EDI,ECX                         ; 0047eb17
    TEST ECX,ECX                        ; 0047eb19
    JLE 0x0047eb3a                      ; 0047eb1b
        ;   XREF to: 0047eb3a (CONDITIONAL_JUMP)  ; LAB_0047eb3a
    LEA EAX,[ESP + 0x3c8]               ; 0047eb1d
    ADD EAX,ECX                         ; 0047eb24
    MOV DL,byte ptr [EAX + -0x1]        ; 0047eb26
        ;   Label: LAB_0047eb26
    INC DL                              ; 0047eb29
    AND EDX,0xff                        ; 0047eb2b
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047eb31 | DAT_005c168c
    JNZ 0x0047eb71                      ; 0047eb38
        ;   XREF to: 0047eb71 (CONDITIONAL_JUMP)  ; LAB_0047eb71
    LEA EAX,[EBX + EDI*0x1]             ; 0047eb3a
        ;   Label: LAB_0047eb3a
    MOV byte ptr [EAX],0x0              ; 0047eb3d
    LEA EAX,[EBX + 0x1]                 ; 0047eb40
    MOV dword ptr [ESP + 0x9e8],EAX     ; 0047eb43
    MOV AL,byte ptr [EBX]               ; 0047eb4a
        ;   Label: LAB_0047eb4a
    INC AL                              ; 0047eb4c
    AND EAX,0xff                        ; 0047eb4e
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047eb53 | DAT_005c168c
    JZ 0x0047eb79                       ; 0047eb5a
        ;   XREF to: 0047eb79 (CONDITIONAL_JUMP)  ; LAB_0047eb79
    PUSH EDI                            ; 0047eb5c
    MOV ECX,dword ptr [ESP + 0x9ec]     ; 0047eb5d
    PUSH ECX                            ; 0047eb64
    PUSH EBX                            ; 0047eb65
    DEC EDI                             ; 0047eb66
    CALL crt_string.c_memmove_FUN_00566170 ; 0047eb67
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047eb6c
    JMP 0x0047eb4a                      ; 0047eb6f
        ;   XREF to: 0047eb4a (UNCONDITIONAL_JUMP)  ; LAB_0047eb4a
    DEC EDI                             ; 0047eb71
        ;   Label: LAB_0047eb71
    DEC EAX                             ; 0047eb72
    TEST EDI,EDI                        ; 0047eb73
    JG 0x0047eb26                       ; 0047eb75
        ;   XREF to: 0047eb26 (CONDITIONAL_JUMP)  ; LAB_0047eb26
    JMP 0x0047eb3a                      ; 0047eb77
        ;   XREF to: 0047eb3a (UNCONDITIONAL_JUMP)  ; LAB_0047eb3a
    PUSH 0x1cae0ec                      ; 0047eb79
        ;   Label: LAB_0047eb79
    MOV ECX,dword ptr [0x01cae124]      ; 0047eb7e | DAT_01cae124
    PUSH ECX                            ; 0047eb84
    LEA EAX,[ESP + 0x36c]               ; 0047eb85
    PUSH EAX                            ; 0047eb8c
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047eb8d
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047eb92
    TEST EAX,EAX                        ; 0047eb95
    JZ 0x0047eae7                       ; 0047eb97
        ;   XREF to: 0047eae7 (CONDITIONAL_JUMP)  ; LAB_0047eae7
    CMP EAX,dword ptr [0x0059cf1c]      ; 0047eb9d | DAT_0059cf1c
    JNZ 0x0047ebbc                      ; 0047eba3
        ;   XREF to: 0047ebbc (CONDITIONAL_JUMP)  ; LAB_0047ebbc
    XOR EDI,EDI                         ; 0047eba5
    MOV dword ptr [ESP + 0x9b4],EDI     ; 0047eba7
    MOV EAX,dword ptr [ESP + 0x9e4]     ; 0047ebae
    ADD dword ptr [ESI],EAX             ; 0047ebb5
    JMP 0x0047e57d                      ; 0047ebb7
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    LEA EDX,[ESP + 0x3c8]               ; 0047ebbc
        ;   Label: LAB_0047ebbc
    PUSH EDX                            ; 0047ebc3
    ADD EAX,0x1f5a0                     ; 0047ebc4
    PUSH EAX                            ; 0047ebc9
    CALL core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760 ; 0047ebca
        ;   XREF to: 004c0760 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760()
    ADD ESP,0x8                         ; 0047ebcf
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047ebd2
    MOV EAX,dword ptr [ESP + 0x9e4]     ; 0047ebd9
    ADD dword ptr [ESI],EAX             ; 0047ebe0
    JMP 0x0047e57d                      ; 0047ebe2
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x580421                       ; 0047ebe7 | = "hasKeyMask"
        ;   Label: LAB_0047ebe7
    LEA EAX,[ESP + 0x944]               ; 0047ebec
    PUSH EAX                            ; 0047ebf3
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047ebf4
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047ebf9
    TEST EAX,EAX                        ; 0047ebfc
    JNZ 0x0047ed78                      ; 0047ebfe
        ;   XREF to: 0047ed78 (CONDITIONAL_JUMP)  ; LAB_0047ed78
    MOV EAX,[0x005bdee0]                ; 0047ec04 | DAT_005bdee0
    CMP dword ptr [EAX],0x0             ; 0047ec09 | DAT_01cea280
    JNZ 0x0047ecb8                      ; 0047ec0c
        ;   XREF to: 0047ecb8 (CONDITIONAL_JUMP)  ; LAB_0047ecb8
    LEA EAX,[ESP + 0x9ec]               ; 0047ec12
    MOV ECX,0xffffffff                  ; 0047ec19
    PUSH EAX                            ; 0047ec1e
    LEA EAX,[ESP + 0x9f4]               ; 0047ec1f
    MOV dword ptr [ESP + 0x9f0],ECX     ; 0047ec26
    PUSH EAX                            ; 0047ec2d
    MOV EAX,0x58045b                    ; 0047ec2e | = " ( %d )%n"
    MOV EBX,dword ptr [ESI]             ; 0047ec33
    PUSH EAX                            ; 0047ec35 | = " ( %d )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047ec36
    ADD EAX,EBX                         ; 0047ec39
    PUSH EAX                            ; 0047ec3b
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047ec3c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047ec41
    CMP dword ptr [ESP + 0x9ec],0x3     ; 0047ec44
    JL 0x0047ece8                       ; 0047ec4c
        ;   XREF to: 0047ece8 (CONDITIONAL_JUMP)  ; LAB_0047ece8
    MOV EAX,dword ptr [ESP + 0x9f0]     ; 0047ec52
    TEST EAX,EAX                        ; 0047ec59
    JZ 0x0047ed18                       ; 0047ec5b
        ;   XREF to: 0047ed18 (CONDITIONAL_JUMP)  ; LAB_0047ed18
    MOV EDX,dword ptr [ESP + 0x9f0]     ; 0047ec61
    DEC EAX                             ; 0047ec68
    TEST EAX,EDX                        ; 0047ec69
    JNZ 0x0047ed48                      ; 0047ec6b
        ;   XREF to: 0047ed48 (CONDITIONAL_JUMP)  ; LAB_0047ed48
    MOV EAX,[0x01cae0e8]                ; 0047ec71 | DAT_01cae0e8
    XOR ECX,ECX                         ; 0047ec76
    MOV EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0047ec78
    MOV dword ptr [ESP + 0x9b4],ECX     ; 0047ec7f
    TEST EBX,EBX                        ; 0047ec86
    JZ 0x0047ecaa                       ; 0047ec88
        ;   XREF to: 0047ecaa (CONDITIONAL_JUMP)  ; LAB_0047ecaa
    PUSH ECX                            ; 0047ec8a
    PUSH EDX                            ; 0047ec8b
    LEA EAX,[EBX + 0x1f5a0]             ; 0047ec8c
    PUSH EAX                            ; 0047ec92
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0 ; 0047ec93
        ;   XREF to: 004c31b0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0()
    ADD ESP,0xc                         ; 0047ec98
    TEST EAX,EAX                        ; 0047ec9b
    JZ 0x0047ecaa                       ; 0047ec9d
        ;   XREF to: 0047ecaa (CONDITIONAL_JUMP)  ; LAB_0047ecaa
    MOV dword ptr [ESP + 0x9b4],0x1     ; 0047ec9f
    MOV EAX,dword ptr [ESP + 0x9ec]     ; 0047ecaa
        ;   Label: LAB_0047ecaa
    ADD dword ptr [ESI],EAX             ; 0047ecb1
    JMP 0x0047e57d                      ; 0047ecb3
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x58042c                    ; 0047ecb8 | = "Can't use hasKeyMask condition in mul..."
        ;   Label: LAB_0047ecb8
    MOV EDI,0x1c08b60                   ; 0047ecbd
    PUSH EDI                            ; 0047ecc2 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ecc3 | = "Can't use hasKeyMask condition in mul..." | s_n't_use_hasKeyMask_condition_in_m_0058042c+2
        ;   Label: LAB_0047ecc3
    MOV byte ptr [EDI],AL               ; 0047ecc5 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ecc7
    JZ 0x0047ecdb                       ; 0047ecc9
        ;   XREF to: 0047ecdb (CONDITIONAL_JUMP)  ; LAB_0047ecdb
    MOV AL,byte ptr [ESI + 0x1]         ; 0047eccb | s_an't_use_hasKeyMask_condition_in_0058042c+1 | s_'t_use_hasKeyMask_condition_in_m_0058042c+3
    ADD ESI,0x2                         ; 0047ecce
    MOV byte ptr [EDI + 0x1],AL         ; 0047ecd1 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047ecd4
    CMP AL,0x0                          ; 0047ecd7
    JNZ 0x0047ecc3                      ; 0047ecd9
        ;   XREF to: 0047ecc3 (CONDITIONAL_JUMP)  ; LAB_0047ecc3
    POP EDI                             ; 0047ecdb
        ;   Label: LAB_0047ecdb
    MOV EAX,0xffffffff                  ; 0047ecdc
    MOV ESP,EBP                         ; 0047ece1
    POP EBP                             ; 0047ece3
    POP EDI                             ; 0047ece4
    POP ESI                             ; 0047ece5
    POP EBX                             ; 0047ece6
    RET                                 ; 0047ece7
    MOV ESI,0x580465                    ; 0047ece8 | = "Error parsing hasKeyMask parameters."
        ;   Label: LAB_0047ece8
    MOV EDI,0x1c08b60                   ; 0047eced
    PUSH EDI                            ; 0047ecf2 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ecf3 | = "Error parsing hasKeyMask parameters." | s_ror_parsing_hasKeyMask_parameter_00580465+2
        ;   Label: LAB_0047ecf3
    MOV byte ptr [EDI],AL               ; 0047ecf5 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ecf7
    JZ 0x0047ed0b                       ; 0047ecf9
        ;   XREF to: 0047ed0b (CONDITIONAL_JUMP)  ; LAB_0047ed0b
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ecfb | s_rror_parsing_hasKeyMask_paramete_00580465+1 | s_or_parsing_hasKeyMask_parameters_00580465+3
    ADD ESI,0x2                         ; 0047ecfe
    MOV byte ptr [EDI + 0x1],AL         ; 0047ed01 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047ed04
    CMP AL,0x0                          ; 0047ed07
    JNZ 0x0047ecf3                      ; 0047ed09
        ;   XREF to: 0047ecf3 (CONDITIONAL_JUMP)  ; LAB_0047ecf3
    POP EDI                             ; 0047ed0b
        ;   Label: LAB_0047ed0b
    MOV EAX,0xffffffff                  ; 0047ed0c
    MOV ESP,EBP                         ; 0047ed11
    POP EBP                             ; 0047ed13
    POP EDI                             ; 0047ed14
    POP ESI                             ; 0047ed15
    POP EBX                             ; 0047ed16
    RET                                 ; 0047ed17
    MOV ESI,0x58048a                    ; 0047ed18 | = "hasKeyMask(0) always returns false!"
        ;   Label: LAB_0047ed18
    MOV EDI,0x1c08b60                   ; 0047ed1d
    PUSH EDI                            ; 0047ed22 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ed23 | = "hasKeyMask(0) always returns false!" | s_sKeyMask(0)_always_returns_false_0058048a+2
        ;   Label: LAB_0047ed23
    MOV byte ptr [EDI],AL               ; 0047ed25 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ed27
    JZ 0x0047ed3b                       ; 0047ed29
        ;   XREF to: 0047ed3b (CONDITIONAL_JUMP)  ; LAB_0047ed3b
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ed2b | s_asKeyMask(0)_always_returns_fals_0058048a+1 | s_KeyMask(0)_always_returns_false!_0058048a+3
    ADD ESI,0x2                         ; 0047ed2e
    MOV byte ptr [EDI + 0x1],AL         ; 0047ed31 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047ed34
    CMP AL,0x0                          ; 0047ed37
    JNZ 0x0047ed23                      ; 0047ed39
        ;   XREF to: 0047ed23 (CONDITIONAL_JUMP)  ; LAB_0047ed23
    POP EDI                             ; 0047ed3b
        ;   Label: LAB_0047ed3b
    MOV EAX,0xffffffff                  ; 0047ed3c
    MOV ESP,EBP                         ; 0047ed41
    POP EBP                             ; 0047ed43
    POP EDI                             ; 0047ed44
    POP ESI                             ; 0047ed45
    POP EBX                             ; 0047ed46
    RET                                 ; 0047ed47
    MOV ESI,0x5804ae                    ; 0047ed48 | = "mask value must be a power of 2.\n(To..."
        ;   Label: LAB_0047ed48
    MOV EDI,0x1c08b60                   ; 0047ed4d
    PUSH EDI                            ; 0047ed52 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ed53 | = "mask value must be a power of 2.\n(To..." | s_sk_value_must_be_a_power_of_2._(_005804ae+2
        ;   Label: LAB_0047ed53
    MOV byte ptr [EDI],AL               ; 0047ed55 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ed57
    JZ 0x0047ed6b                       ; 0047ed59
        ;   XREF to: 0047ed6b (CONDITIONAL_JUMP)  ; LAB_0047ed6b
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ed5b | s_ask_value_must_be_a_power_of_2._(_005804ae+1 | s_k_value_must_be_a_power_of_2._(T_005804ae+3
    ADD ESI,0x2                         ; 0047ed5e
    MOV byte ptr [EDI + 0x1],AL         ; 0047ed61 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047ed64
    CMP AL,0x0                          ; 0047ed67
    JNZ 0x0047ed53                      ; 0047ed69
        ;   XREF to: 0047ed53 (CONDITIONAL_JUMP)  ; LAB_0047ed53
    POP EDI                             ; 0047ed6b
        ;   Label: LAB_0047ed6b
    MOV EAX,0xffffffff                  ; 0047ed6c
    MOV ESP,EBP                         ; 0047ed71
    POP EBP                             ; 0047ed73
    POP EDI                             ; 0047ed74
    POP ESI                             ; 0047ed75
    POP EBX                             ; 0047ed76
    RET                                 ; 0047ed77
    PUSH 0x58050c                       ; 0047ed78 | = "isBroken"
        ;   Label: LAB_0047ed78
    LEA EAX,[ESP + 0x944]               ; 0047ed7d
    PUSH EAX                            ; 0047ed84
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047ed85
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047ed8a
    TEST EAX,EAX                        ; 0047ed8d
    JNZ 0x0047eed7                      ; 0047ed8f
        ;   XREF to: 0047eed7 (CONDITIONAL_JUMP)  ; LAB_0047eed7
    LEA EAX,[ESP + 0x9f4]               ; 0047ed95
    MOV ECX,0xffffffff                  ; 0047ed9c
    PUSH EAX                            ; 0047eda1
    LEA EAX,[ESP + 0x4f8]               ; 0047eda2
    MOV dword ptr [ESP + 0x9f8],ECX     ; 0047eda9
    PUSH EAX                            ; 0047edb0
    MOV EAX,0x580515                    ; 0047edb1 | = " (%[^)])%n"
    MOV EBX,dword ptr [ESI]             ; 0047edb6
    PUSH EAX                            ; 0047edb8 | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047edb9
    ADD EAX,EBX                         ; 0047edbc
    PUSH EAX                            ; 0047edbe
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047edbf
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047edc4
    CMP dword ptr [ESP + 0x9f4],0x3     ; 0047edc7
    JL 0x0047ee38                       ; 0047edcf
        ;   XREF to: 0047ee38 (CONDITIONAL_JUMP)  ; LAB_0047ee38
    LEA EBX,[ESP + 0x4f4]               ; 0047edd1
    MOV EDI,EBX                         ; 0047edd8
    SUB ECX,ECX                         ; 0047edda
    DEC ECX                             ; 0047eddc
    XOR EAX,EAX                         ; 0047eddd
    SCASB.REPNE ES:EDI                  ; 0047eddf
    NOT ECX                             ; 0047ede1
    DEC ECX                             ; 0047ede3
    MOV EDI,ECX                         ; 0047ede4
    TEST ECX,ECX                        ; 0047ede6
    JLE 0x0047ee01                      ; 0047ede8
        ;   XREF to: 0047ee01 (CONDITIONAL_JUMP)  ; LAB_0047ee01
    LEA EAX,[ECX + EBX*0x1]             ; 0047edea
    MOV DL,byte ptr [EAX + -0x1]        ; 0047eded
        ;   Label: LAB_0047eded
    INC DL                              ; 0047edf0
    AND EDX,0xff                        ; 0047edf2
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047edf8 | DAT_005c168c
    JNZ 0x0047ee68                      ; 0047edff
        ;   XREF to: 0047ee68 (CONDITIONAL_JUMP)  ; LAB_0047ee68
    LEA EAX,[EBX + EDI*0x1]             ; 0047ee01
        ;   Label: LAB_0047ee01
    MOV byte ptr [EAX],0x0              ; 0047ee04
    LEA EAX,[EBX + 0x1]                 ; 0047ee07
    MOV dword ptr [ESP + 0x9f8],EAX     ; 0047ee0a
    MOV AL,byte ptr [EBX]               ; 0047ee11
        ;   Label: LAB_0047ee11
    INC AL                              ; 0047ee13
    AND EAX,0xff                        ; 0047ee15
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047ee1a | DAT_005c168c
    JZ 0x0047ee74                       ; 0047ee21
        ;   XREF to: 0047ee74 (CONDITIONAL_JUMP)  ; LAB_0047ee74
    PUSH EDI                            ; 0047ee23
    MOV EAX,dword ptr [ESP + 0x9fc]     ; 0047ee24
    PUSH EAX                            ; 0047ee2b
    PUSH EBX                            ; 0047ee2c
    DEC EDI                             ; 0047ee2d
    CALL crt_string.c_memmove_FUN_00566170 ; 0047ee2e
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047ee33
    JMP 0x0047ee11                      ; 0047ee36
        ;   XREF to: 0047ee11 (UNCONDITIONAL_JUMP)  ; LAB_0047ee11
    MOV ESI,0x580520                    ; 0047ee38 | = "Error parsing isBroken parameters."
        ;   Label: LAB_0047ee38
    MOV EDI,0x1c08b60                   ; 0047ee3d
    PUSH EDI                            ; 0047ee42 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ee43 | = "Error parsing isBroken parameters." | s_ror_parsing_isBroken_parameters._00580520+2
        ;   Label: LAB_0047ee43
    MOV byte ptr [EDI],AL               ; 0047ee45 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ee47
    JZ 0x0047ee5b                       ; 0047ee49
        ;   XREF to: 0047ee5b (CONDITIONAL_JUMP)  ; LAB_0047ee5b
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ee4b | s_rror_parsing_isBroken_parameters_00580520+1 | s_or_parsing_isBroken_parameters._00580520+3
    ADD ESI,0x2                         ; 0047ee4e
    MOV byte ptr [EDI + 0x1],AL         ; 0047ee51 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047ee54
    CMP AL,0x0                          ; 0047ee57
    JNZ 0x0047ee43                      ; 0047ee59
        ;   XREF to: 0047ee43 (CONDITIONAL_JUMP)  ; LAB_0047ee43
    POP EDI                             ; 0047ee5b
        ;   Label: LAB_0047ee5b
    MOV EAX,0xffffffff                  ; 0047ee5c
        ;   Label: LAB_0047ee5c
    MOV ESP,EBP                         ; 0047ee61
    POP EBP                             ; 0047ee63
    POP EDI                             ; 0047ee64
    POP ESI                             ; 0047ee65
    POP EBX                             ; 0047ee66
    RET                                 ; 0047ee67
    DEC EDI                             ; 0047ee68
        ;   Label: LAB_0047ee68
    DEC EAX                             ; 0047ee69
    TEST EDI,EDI                        ; 0047ee6a
    JG 0x0047eded                       ; 0047ee6c
        ;   XREF to: 0047eded (CONDITIONAL_JUMP)  ; LAB_0047eded
    JMP 0x0047ee01                      ; 0047ee72
        ;   XREF to: 0047ee01 (UNCONDITIONAL_JUMP)  ; LAB_0047ee01
    PUSH 0x1c78c40                      ; 0047ee74
        ;   Label: LAB_0047ee74
    MOV EBX,dword ptr [0x01c78c78]      ; 0047ee79 | DAT_01c78c78
    PUSH EBX                            ; 0047ee7f
    LEA EAX,[ESP + 0x4fc]               ; 0047ee80
    PUSH EAX                            ; 0047ee87
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047ee88
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047ee8d
    TEST EAX,EAX                        ; 0047ee90
    JZ 0x0047ee5c                       ; 0047ee92
        ;   XREF to: 0047ee5c (CONDITIONAL_JUMP)  ; LAB_0047ee5c
    CMP EAX,dword ptr [0x0059cf1c]      ; 0047ee94 | DAT_0059cf1c
    JNZ 0x0047eeb3                      ; 0047ee9a
        ;   XREF to: 0047eeb3 (CONDITIONAL_JUMP)  ; LAB_0047eeb3
    XOR ECX,ECX                         ; 0047ee9c
    MOV dword ptr [ESP + 0x9b4],ECX     ; 0047ee9e
    MOV EAX,dword ptr [ESP + 0x9f4]     ; 0047eea5
    ADD dword ptr [ESI],EAX             ; 0047eeac
    JMP 0x0047e57d                      ; 0047eeae
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    CMP dword ptr [EAX + 0x178],0x0     ; 0047eeb3
        ;   Label: LAB_0047eeb3
    SETNZ AL                            ; 0047eeba
    AND EAX,0xff                        ; 0047eebd
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047eec2
    MOV EAX,dword ptr [ESP + 0x9f4]     ; 0047eec9
    ADD dword ptr [ESI],EAX             ; 0047eed0
    JMP 0x0047e57d                      ; 0047eed2
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x580543                       ; 0047eed7 | = "isCurrentCamera"
        ;   Label: LAB_0047eed7
    LEA EAX,[ESP + 0x944]               ; 0047eedc
    PUSH EAX                            ; 0047eee3
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047eee4
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047eee9
    TEST EAX,EAX                        ; 0047eeec
    JNZ 0x0047efc2                      ; 0047eeee
        ;   XREF to: 0047efc2 (CONDITIONAL_JUMP)  ; LAB_0047efc2
    MOV dword ptr [ESP + 0x9fc],0xffffffff ; 0047eef4
    LEA EAX,[ESP + 0x9fc]               ; 0047eeff
    PUSH EAX                            ; 0047ef06
    LEA EAX,[ESP + 0x23c]               ; 0047ef07
    PUSH EAX                            ; 0047ef0e
    MOV EAX,0x580553                    ; 0047ef0f | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 0047ef14
    PUSH EAX                            ; 0047ef16 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047ef17
    ADD EAX,EDX                         ; 0047ef1a
    PUSH EAX                            ; 0047ef1c
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047ef1d
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047ef22
    CMP dword ptr [ESP + 0x9fc],0x3     ; 0047ef25
    JL 0x0047ef92                       ; 0047ef2d
        ;   XREF to: 0047ef92 (CONDITIONAL_JUMP)  ; LAB_0047ef92
    MOV EDX,dword ptr [0x005be368]      ; 0047ef2f | DAT_005be368
    XOR EBX,EBX                         ; 0047ef35
    MOV EDX,dword ptr [EDX + 0x15aabc]  ; 0047ef37 | DAT_01fb1d40
    MOV dword ptr [ESP + 0x9b4],EBX     ; 0047ef3d
    TEST EDX,EDX                        ; 0047ef44
    JL 0x0047ef84                       ; 0047ef46
        ;   XREF to: 0047ef84 (CONDITIONAL_JUMP)  ; LAB_0047ef84
    LEA EAX,[ESP + 0x238]               ; 0047ef48
    PUSH EAX                            ; 0047ef4f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047ef50
    SUB EAX,EDX                         ; 0047ef57
    SHL EAX,0x2                         ; 0047ef59
    MOV ECX,dword ptr [0x005be368]      ; 0047ef5c | DAT_005be368
    ADD EAX,EDX                         ; 0047ef62
    ADD ECX,0x4                         ; 0047ef64
    SHL EAX,0x5                         ; 0047ef67
    ADD EAX,ECX                         ; 0047ef6a
    PUSH EAX                            ; 0047ef6c
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047ef6d
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047ef72
    TEST EAX,EAX                        ; 0047ef75
    JNZ 0x0047ef84                      ; 0047ef77
        ;   XREF to: 0047ef84 (CONDITIONAL_JUMP)  ; LAB_0047ef84
    MOV dword ptr [ESP + 0x9b4],0x1     ; 0047ef79
    MOV EAX,dword ptr [ESP + 0x9fc]     ; 0047ef84
        ;   Label: LAB_0047ef84
    ADD dword ptr [ESI],EAX             ; 0047ef8b
    JMP 0x0047e57d                      ; 0047ef8d
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x580561                    ; 0047ef92 | = "Error parsing icCurrentCamera paramet..."
        ;   Label: LAB_0047ef92
    MOV EDI,0x1c08b60                   ; 0047ef97
    PUSH EDI                            ; 0047ef9c | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ef9d | = "Error parsing icCurrentCamera paramet..." | s_ror_parsing_icCurrentCamera_para_00580561+2
        ;   Label: LAB_0047ef9d
    MOV byte ptr [EDI],AL               ; 0047ef9f | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047efa1
    JZ 0x0047efb5                       ; 0047efa3
        ;   XREF to: 0047efb5 (CONDITIONAL_JUMP)  ; LAB_0047efb5
    MOV AL,byte ptr [ESI + 0x1]         ; 0047efa5 | s_rror_parsing_icCurrentCamera_par_00580561+1 | s_or_parsing_icCurrentCamera_param_00580561+3
    ADD ESI,0x2                         ; 0047efa8
    MOV byte ptr [EDI + 0x1],AL         ; 0047efab | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047efae
    CMP AL,0x0                          ; 0047efb1
    JNZ 0x0047ef9d                      ; 0047efb3
        ;   XREF to: 0047ef9d (CONDITIONAL_JUMP)  ; LAB_0047ef9d
    POP EDI                             ; 0047efb5
        ;   Label: LAB_0047efb5
    MOV EAX,0xffffffff                  ; 0047efb6
    MOV ESP,EBP                         ; 0047efbb
    POP EBP                             ; 0047efbd
    POP EDI                             ; 0047efbe
    POP ESI                             ; 0047efbf
    POP EBX                             ; 0047efc0
    RET                                 ; 0047efc1
    PUSH 0x58058b                       ; 0047efc2 | = "isDead"
        ;   Label: LAB_0047efc2
    LEA EAX,[ESP + 0x944]               ; 0047efc7
    PUSH EAX                            ; 0047efce
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047efcf
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047efd4
    TEST EAX,EAX                        ; 0047efd7
    JNZ 0x0047f0b8                      ; 0047efd9
        ;   XREF to: 0047f0b8 (CONDITIONAL_JUMP)  ; LAB_0047f0b8
    LEA EAX,[ESP + 0xa00]               ; 0047efdf
    MOV EBX,0xffffffff                  ; 0047efe6
    PUSH EAX                            ; 0047efeb
    LEA EAX,[ESP + 0x494]               ; 0047efec
    MOV dword ptr [ESP + 0xa04],EBX     ; 0047eff3
    PUSH EAX                            ; 0047effa
    MOV EAX,0x580592                    ; 0047effb | = " ( %[^ )] )%n"
    MOV EDI,dword ptr [ESI]             ; 0047f000
    PUSH EAX                            ; 0047f002 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f003
    ADD EAX,EDI                         ; 0047f006
    PUSH EAX                            ; 0047f008
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f009
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047f00e
    CMP dword ptr [ESP + 0xa00],0x3     ; 0047f011
    JL 0x0047f05b                       ; 0047f019
        ;   XREF to: 0047f05b (CONDITIONAL_JUMP)  ; LAB_0047f05b
    MOV EAX,0x765a60                    ; 0047f01b | DAT_00765a60
    PUSH EAX                            ; 0047f020 | DAT_00765a60
    MOV EDX,dword ptr [0x00765a98]      ; 0047f021 | DAT_00765a98
    PUSH EDX                            ; 0047f027
    LEA EAX,[ESP + 0x498]               ; 0047f028
    PUSH EAX                            ; 0047f02f
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047f030
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047f035
    TEST EAX,EAX                        ; 0047f038
    JZ 0x0047f07f                       ; 0047f03a
        ;   XREF to: 0047f07f (CONDITIONAL_JUMP)  ; LAB_0047f07f
    CMP EAX,dword ptr [0x0059cf1c]      ; 0047f03c | DAT_0059cf1c
    JNZ 0x0047f088                      ; 0047f042
        ;   XREF to: 0047f088 (CONDITIONAL_JUMP)  ; LAB_0047f088
    XOR EBX,EBX                         ; 0047f044
    MOV dword ptr [ESP + 0x9b4],EBX     ; 0047f046
    MOV EAX,dword ptr [ESP + 0xa00]     ; 0047f04d
    ADD dword ptr [ESI],EAX             ; 0047f054
    JMP 0x0047e57d                      ; 0047f056
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x5805a0                    ; 0047f05b | = "Error parsing isDead parameters."
        ;   Label: LAB_0047f05b
    MOV EDI,0x1c08b60                   ; 0047f060
    PUSH EDI                            ; 0047f065 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f066 | = "Error parsing isDead parameters." | s_ror_parsing_isDead_parameters._005805a0+2
        ;   Label: LAB_0047f066
    MOV byte ptr [EDI],AL               ; 0047f068 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f06a
    JZ 0x0047f07e                       ; 0047f06c
        ;   XREF to: 0047f07e (CONDITIONAL_JUMP)  ; LAB_0047f07e
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f06e | s_rror_parsing_isDead_parameters._005805a0+1 | s_or_parsing_isDead_parameters._005805a0+3
    ADD ESI,0x2                         ; 0047f071
    MOV byte ptr [EDI + 0x1],AL         ; 0047f074 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f077
    CMP AL,0x0                          ; 0047f07a
    JNZ 0x0047f066                      ; 0047f07c
        ;   XREF to: 0047f066 (CONDITIONAL_JUMP)  ; LAB_0047f066
    POP EDI                             ; 0047f07e
        ;   Label: LAB_0047f07e
    MOV EAX,EBX                         ; 0047f07f
        ;   Label: LAB_0047f07f
    MOV ESP,EBP                         ; 0047f081
    POP EBP                             ; 0047f083
    POP EDI                             ; 0047f084
    POP ESI                             ; 0047f085
    POP EBX                             ; 0047f086
    RET                                 ; 0047f087
    PUSH EAX                            ; 0047f088
        ;   Label: LAB_0047f088
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0047f089
    CALL dword ptr [EDX + 0x104]        ; 0047f08f
    ADD ESP,0x4                         ; 0047f095
    CMP EAX,0x1                         ; 0047f098
    SETG AL                             ; 0047f09b
    AND EAX,0xff                        ; 0047f09e
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047f0a3
    MOV EAX,dword ptr [ESP + 0xa00]     ; 0047f0aa
    ADD dword ptr [ESI],EAX             ; 0047f0b1
    JMP 0x0047e57d                      ; 0047f0b3
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x5805c1                       ; 0047f0b8 | = "isFadeFinished"
        ;   Label: LAB_0047f0b8
    LEA EAX,[ESP + 0x944]               ; 0047f0bd
    PUSH EAX                            ; 0047f0c4
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047f0c5
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047f0ca
    TEST EAX,EAX                        ; 0047f0cd
    JNZ 0x0047f152                      ; 0047f0cf
        ;   XREF to: 0047f152 (CONDITIONAL_JUMP)  ; LAB_0047f152
    MOV EBX,0xffffffff                  ; 0047f0d5
    LEA EAX,[ESP + 0xa04]               ; 0047f0da
    MOV dword ptr [ESP + 0xa04],EBX     ; 0047f0e1
    PUSH EAX                            ; 0047f0e8
    MOV EAX,0x5805d0                    ; 0047f0e9 | = " ( )%n"
    MOV EDI,dword ptr [ESI]             ; 0047f0ee
    PUSH EAX                            ; 0047f0f0 | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f0f1
    ADD EAX,EDI                         ; 0047f0f4
    PUSH EAX                            ; 0047f0f6
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f0f7
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047f0fc
    MOV EAX,dword ptr [ESP + 0xa04]     ; 0047f0ff
    CMP EAX,0x2                         ; 0047f106
    JL 0x0047f125                       ; 0047f109
        ;   XREF to: 0047f125 (CONDITIONAL_JUMP)  ; LAB_0047f125
    MOV EDX,dword ptr [ESI]             ; 0047f10b
    MOV ECX,dword ptr [0x005b9354]      ; 0047f10d | DAT_005b9354
    ADD EDX,EAX                         ; 0047f113
    PUSH ECX                            ; 0047f115
    MOV dword ptr [ESI],EDX             ; 0047f116
    CALL core_game.cpp_CGame_fadeIn_FUN_004a3a50 ; 0047f118
        ;   XREF to: 004a3a50 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_fadeIn_FUN_004a3a50()
    ADD ESP,0x4                         ; 0047f11d
    JMP 0x0047e576                      ; 0047f120
        ;   XREF to: 0047e576 (UNCONDITIONAL_JUMP)  ; LAB_0047e576
    MOV ESI,0x5805d7                    ; 0047f125 | = "Error parsing isFadeFinished function."
        ;   Label: LAB_0047f125
    MOV EDI,0x1c08b60                   ; 0047f12a
    PUSH EDI                            ; 0047f12f | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f130 | = "Error parsing isFadeFinished function." | s_ror_parsing_isFadeFinished_funct_005805d7+2
        ;   Label: LAB_0047f130
    MOV byte ptr [EDI],AL               ; 0047f132 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f134
    JZ 0x0047f148                       ; 0047f136
        ;   XREF to: 0047f148 (CONDITIONAL_JUMP)  ; LAB_0047f148
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f138 | s_rror_parsing_isFadeFinished_func_005805d7+1 | s_or_parsing_isFadeFinished_functi_005805d7+3
    ADD ESI,0x2                         ; 0047f13b
    MOV byte ptr [EDI + 0x1],AL         ; 0047f13e | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f141
    CMP AL,0x0                          ; 0047f144
    JNZ 0x0047f130                      ; 0047f146
        ;   XREF to: 0047f130 (CONDITIONAL_JUMP)  ; LAB_0047f130
    POP EDI                             ; 0047f148
        ;   Label: LAB_0047f148
    MOV EAX,EBX                         ; 0047f149
    MOV ESP,EBP                         ; 0047f14b
    POP EBP                             ; 0047f14d
    POP EDI                             ; 0047f14e
    POP ESI                             ; 0047f14f
    POP EBX                             ; 0047f150
    RET                                 ; 0047f151
    PUSH 0x5805fe                       ; 0047f152 | = "isInRange"
        ;   Label: LAB_0047f152
    LEA EAX,[ESP + 0x944]               ; 0047f157
    PUSH EAX                            ; 0047f15e
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047f15f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047f164
    TEST EAX,EAX                        ; 0047f167
    JNZ 0x0047f36c                      ; 0047f169
        ;   XREF to: 0047f36c (CONDITIONAL_JUMP)  ; LAB_0047f36c
    MOV EDI,0xffffffff                  ; 0047f16f
    LEA EAX,[ESP + 0xa08]               ; 0047f174
    MOV dword ptr [ESP + 0xa08],EDI     ; 0047f17b
    PUSH EAX                            ; 0047f182
    MOV EAX,0x580608                    ; 0047f183 | = " ( %n"
    MOV EDX,dword ptr [ESI]             ; 0047f188
    PUSH EAX                            ; 0047f18a | = " ( %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f18b
    ADD EAX,EDX                         ; 0047f18e
    PUSH EAX                            ; 0047f190
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f191
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047f196
    MOV ECX,dword ptr [ESP + 0xa08]     ; 0047f199
    CMP ECX,0x1                         ; 0047f1a0
    JL 0x0047f1d2                       ; 0047f1a3
        ;   XREF to: 0047f1d2 (CONDITIONAL_JUMP)  ; LAB_0047f1d2
    LEA EAX,[ESP + 0x98c]               ; 0047f1a5
    PUSH EAX                            ; 0047f1ac
    MOV EBX,dword ptr [ESI]             ; 0047f1ad
    PUSH ESI                            ; 0047f1af
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047f1b0
    ADD EBX,ECX                         ; 0047f1b3
    PUSH EDI                            ; 0047f1b5
    MOV dword ptr [ESI],EBX             ; 0047f1b6
    CALL core_event.cpp_parseVectorLocation_FUN_0047a4c0 ; 0047f1b8
        ;   XREF to: 0047a4c0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_parseVectorLocation_FUN_0047a4c0()
    ADD ESP,0xc                         ; 0047f1bd
    MOV EDI,EAX                         ; 0047f1c0
    TEST EAX,EAX                        ; 0047f1c2
    JGE 0x0047f202                      ; 0047f1c4
        ;   XREF to: 0047f202 (CONDITIONAL_JUMP)  ; LAB_0047f202
    MOV EAX,0xffffffff                  ; 0047f1c6
    MOV ESP,EBP                         ; 0047f1cb
    POP EBP                             ; 0047f1cd
    POP EDI                             ; 0047f1ce
    POP ESI                             ; 0047f1cf
    POP EBX                             ; 0047f1d0
    RET                                 ; 0047f1d1
    MOV ESI,0x58060e                    ; 0047f1d2 | = "Error parsing isInRange parameters."
        ;   Label: LAB_0047f1d2
    MOV EDI,0x1c08b60                   ; 0047f1d7
    PUSH EDI                            ; 0047f1dc | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f1dd | = "Error parsing isInRange parameters." | s_ror_parsing_isInRange_parameters_0058060e+2
        ;   Label: LAB_0047f1dd
    MOV byte ptr [EDI],AL               ; 0047f1df | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f1e1
    JZ 0x0047f1f5                       ; 0047f1e3
        ;   XREF to: 0047f1f5 (CONDITIONAL_JUMP)  ; LAB_0047f1f5
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f1e5 | s_rror_parsing_isInRange_parameter_0058060e+1 | s_or_parsing_isInRange_parameters._0058060e+3
    ADD ESI,0x2                         ; 0047f1e8
    MOV byte ptr [EDI + 0x1],AL         ; 0047f1eb | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f1ee
    CMP AL,0x0                          ; 0047f1f1
    JNZ 0x0047f1dd                      ; 0047f1f3
        ;   XREF to: 0047f1dd (CONDITIONAL_JUMP)  ; LAB_0047f1dd
    POP EDI                             ; 0047f1f5
        ;   Label: LAB_0047f1f5
    MOV EAX,0xffffffff                  ; 0047f1f6
    MOV ESP,EBP                         ; 0047f1fb
    POP EBP                             ; 0047f1fd
    POP EDI                             ; 0047f1fe
    POP ESI                             ; 0047f1ff
    POP EBX                             ; 0047f200
    RET                                 ; 0047f201
    MOV dword ptr [ESP + 0xa08],0xffffffff ; 0047f202
        ;   Label: LAB_0047f202
    LEA EAX,[ESP + 0xa08]               ; 0047f20d
    PUSH EAX                            ; 0047f214
    MOV EAX,0x580632                    ; 0047f215 | = " , %n"
    MOV EDX,dword ptr [ESI]             ; 0047f21a
    PUSH EAX                            ; 0047f21c | = " , %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f21d
    ADD EAX,EDX                         ; 0047f220
    PUSH EAX                            ; 0047f222
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f223
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047f228
    MOV ECX,dword ptr [ESP + 0xa08]     ; 0047f22b
    CMP ECX,0x1                         ; 0047f232
    JL 0x0047f2fe                       ; 0047f235
        ;   XREF to: 0047f2fe (CONDITIONAL_JUMP)  ; LAB_0047f2fe
    LEA EAX,[ESP + 0x9a4]               ; 0047f23b
    PUSH EAX                            ; 0047f242
    MOV EBX,dword ptr [ESI]             ; 0047f243
    PUSH ESI                            ; 0047f245
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f246
    ADD EBX,ECX                         ; 0047f249
    PUSH EAX                            ; 0047f24b
    MOV dword ptr [ESI],EBX             ; 0047f24c
    CALL core_event.cpp_parseVectorLocation_FUN_0047a4c0 ; 0047f24e
        ;   XREF to: 0047a4c0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_parseVectorLocation_FUN_0047a4c0()
    ADD ESP,0xc                         ; 0047f253
    MOV EBX,EAX                         ; 0047f256
    TEST EAX,EAX                        ; 0047f258
    JL 0x0047f322                       ; 0047f25a
        ;   XREF to: 0047f322 (CONDITIONAL_JUMP)  ; LAB_0047f322
    LEA EAX,[ESP + 0xa08]               ; 0047f260
    MOV EDX,0xffffffff                  ; 0047f267
    PUSH EAX                            ; 0047f26c
    LEA EAX,[ESP + 0xa10]               ; 0047f26d
    MOV dword ptr [ESP + 0xa0c],EDX     ; 0047f274
    PUSH EAX                            ; 0047f27b
    MOV EAX,0x58065c                    ; 0047f27c | = " , %f )%n"
    MOV ECX,dword ptr [ESI]             ; 0047f281
    PUSH EAX                            ; 0047f283 | = " , %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f284
    ADD EAX,ECX                         ; 0047f287
    PUSH EAX                            ; 0047f289
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f28a
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047f28f
    MOV EAX,dword ptr [ESP + 0xa08]     ; 0047f292
    CMP EAX,0x3                         ; 0047f299
    JL 0x0047f32e                       ; 0047f29c
        ;   XREF to: 0047f32e (CONDITIONAL_JUMP)  ; LAB_0047f32e
    ADD dword ptr [ESI],EAX             ; 0047f2a2
    TEST EDI,EDI                        ; 0047f2a4
    JZ 0x0047f35e                       ; 0047f2a6
        ;   XREF to: 0047f35e (CONDITIONAL_JUMP)  ; LAB_0047f35e
    TEST EBX,EBX                        ; 0047f2ac
    JZ 0x0047f35e                       ; 0047f2ae
        ;   XREF to: 0047f35e (CONDITIONAL_JUMP)  ; LAB_0047f35e
    FLD float ptr [ESP + 0x98c]         ; 0047f2b4
    FSUB float ptr [ESP + 0x9a4]        ; 0047f2bb
    FMUL ST0                            ; 0047f2c2
    FLD float ptr [ESP + 0x990]         ; 0047f2c4
    FSUB float ptr [ESP + 0x9a8]        ; 0047f2cb
    FMUL ST0                            ; 0047f2d2
    FLD float ptr [ESP + 0x994]         ; 0047f2d4
    FXCH                                ; 0047f2db
    FADDP ST2,ST0                       ; 0047f2dd
    FSUB float ptr [ESP + 0x9ac]        ; 0047f2df
    FMUL ST0                            ; 0047f2e6
    FADDP                               ; 0047f2e8
    FSQRT                               ; 0047f2ea
    FCOMP float ptr [ESP + 0xa0c]       ; 0047f2ec
    FNSTSW AX                           ; 0047f2f3
    SAHF                                ; 0047f2f5
    SETBE AL                            ; 0047f2f6
    JMP 0x0047e571                      ; 0047f2f9
        ;   XREF to: 0047e571 (UNCONDITIONAL_JUMP)  ; LAB_0047e571
    MOV ESI,0x580638                    ; 0047f2fe | = "Error parsing isInRange parameters."
        ;   Label: LAB_0047f2fe
    MOV EDI,0x1c08b60                   ; 0047f303
    PUSH EDI                            ; 0047f308 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f309 | = "Error parsing isInRange parameters." | s_ror_parsing_isInRange_parameters_00580638+2
        ;   Label: LAB_0047f309
    MOV byte ptr [EDI],AL               ; 0047f30b | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f30d
    JZ 0x0047f321                       ; 0047f30f
        ;   XREF to: 0047f321 (CONDITIONAL_JUMP)  ; LAB_0047f321
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f311 | s_rror_parsing_isInRange_parameter_00580638+1 | s_or_parsing_isInRange_parameters._00580638+3
    ADD ESI,0x2                         ; 0047f314
    MOV byte ptr [EDI + 0x1],AL         ; 0047f317 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f31a
    CMP AL,0x0                          ; 0047f31d
    JNZ 0x0047f309                      ; 0047f31f
        ;   XREF to: 0047f309 (CONDITIONAL_JUMP)  ; LAB_0047f309
    POP EDI                             ; 0047f321
        ;   Label: LAB_0047f321
    MOV EAX,0xffffffff                  ; 0047f322
        ;   Label: LAB_0047f322
    MOV ESP,EBP                         ; 0047f327
    POP EBP                             ; 0047f329
    POP EDI                             ; 0047f32a
    POP ESI                             ; 0047f32b
    POP EBX                             ; 0047f32c
    RET                                 ; 0047f32d
    MOV ESI,0x580666                    ; 0047f32e | = "Error parsing isInRange parameters."
        ;   Label: LAB_0047f32e
    MOV EDI,0x1c08b60                   ; 0047f333
    PUSH EDI                            ; 0047f338 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f339 | = "Error parsing isInRange parameters." | s_ror_parsing_isInRange_parameters_00580666+2
        ;   Label: LAB_0047f339
    MOV byte ptr [EDI],AL               ; 0047f33b | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f33d
    JZ 0x0047f351                       ; 0047f33f
        ;   XREF to: 0047f351 (CONDITIONAL_JUMP)  ; LAB_0047f351
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f341 | s_rror_parsing_isInRange_parameter_00580666+1 | s_or_parsing_isInRange_parameters._00580666+3
    ADD ESI,0x2                         ; 0047f344
    MOV byte ptr [EDI + 0x1],AL         ; 0047f347 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f34a
    CMP AL,0x0                          ; 0047f34d
    JNZ 0x0047f339                      ; 0047f34f
        ;   XREF to: 0047f339 (CONDITIONAL_JUMP)  ; LAB_0047f339
    POP EDI                             ; 0047f351
        ;   Label: LAB_0047f351
    MOV EAX,0xffffffff                  ; 0047f352
    MOV ESP,EBP                         ; 0047f357
    POP EBP                             ; 0047f359
    POP EDI                             ; 0047f35a
    POP ESI                             ; 0047f35b
    POP EBX                             ; 0047f35c
    RET                                 ; 0047f35d
    XOR ECX,ECX                         ; 0047f35e
        ;   Label: LAB_0047f35e
    MOV dword ptr [ESP + 0x9b4],ECX     ; 0047f360
    JMP 0x0047e57d                      ; 0047f367
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x58068a                       ; 0047f36c | = "isOfType"
        ;   Label: LAB_0047f36c
    LEA EAX,[ESP + 0x944]               ; 0047f371
    PUSH EAX                            ; 0047f378
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047f379
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047f37e
    TEST EAX,EAX                        ; 0047f381
    JNZ 0x0047f553                      ; 0047f383
        ;   XREF to: 0047f553 (CONDITIONAL_JUMP)  ; LAB_0047f553
    LEA EAX,[ESP + 0xa20]               ; 0047f389
    PUSH EAX                            ; 0047f390
    LEA EAX,[ESP + 0x110]               ; 0047f391
    MOV EDX,0xffffffff                  ; 0047f398
    PUSH EAX                            ; 0047f39d
    LEA EAX,[ESP + 0x68c]               ; 0047f39e
    MOV dword ptr [ESP + 0xa28],EDX     ; 0047f3a5
    PUSH EAX                            ; 0047f3ac
    MOV EAX,0x580693                    ; 0047f3ad | = " ( %[^ ,] , %[^ )] )%n"
    MOV ECX,dword ptr [ESI]             ; 0047f3b2
    PUSH EAX                            ; 0047f3b4 | = " ( %[^ ,] , %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f3b5
    ADD EAX,ECX                         ; 0047f3b8
    PUSH EAX                            ; 0047f3ba
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f3bb
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x14                        ; 0047f3c0
    CMP dword ptr [ESP + 0xa20],0x3     ; 0047f3c3
    JL 0x0047f434                       ; 0047f3cb
        ;   XREF to: 0047f434 (CONDITIONAL_JUMP)  ; LAB_0047f434
    LEA EBX,[ESP + 0x684]               ; 0047f3cd
    MOV EDI,EBX                         ; 0047f3d4
    SUB ECX,ECX                         ; 0047f3d6
    DEC ECX                             ; 0047f3d8
    XOR EAX,EAX                         ; 0047f3d9
    SCASB.REPNE ES:EDI                  ; 0047f3db
    NOT ECX                             ; 0047f3dd
    DEC ECX                             ; 0047f3df
    MOV EDI,ECX                         ; 0047f3e0
    TEST ECX,ECX                        ; 0047f3e2
    JLE 0x0047f3fd                      ; 0047f3e4
        ;   XREF to: 0047f3fd (CONDITIONAL_JUMP)  ; LAB_0047f3fd
    LEA EAX,[ECX + EBX*0x1]             ; 0047f3e6
    MOV DL,byte ptr [EAX + -0x1]        ; 0047f3e9
        ;   Label: LAB_0047f3e9
    INC DL                              ; 0047f3ec
    AND EDX,0xff                        ; 0047f3ee
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047f3f4 | DAT_005c168c
    JNZ 0x0047f464                      ; 0047f3fb
        ;   XREF to: 0047f464 (CONDITIONAL_JUMP)  ; LAB_0047f464
    LEA EAX,[EBX + EDI*0x1]             ; 0047f3fd
        ;   Label: LAB_0047f3fd
    MOV byte ptr [EAX],0x0              ; 0047f400
    LEA EAX,[EBX + 0x1]                 ; 0047f403
    MOV dword ptr [ESP + 0xa28],EAX     ; 0047f406
    MOV AL,byte ptr [EBX]               ; 0047f40d
        ;   Label: LAB_0047f40d
    INC AL                              ; 0047f40f
    AND EAX,0xff                        ; 0047f411
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047f416 | DAT_005c168c
    JZ 0x0047f470                       ; 0047f41d
        ;   XREF to: 0047f470 (CONDITIONAL_JUMP)  ; LAB_0047f470
    PUSH EDI                            ; 0047f41f
    MOV EDX,dword ptr [ESP + 0xa2c]     ; 0047f420
    PUSH EDX                            ; 0047f427
    PUSH EBX                            ; 0047f428
    DEC EDI                             ; 0047f429
    CALL crt_string.c_memmove_FUN_00566170 ; 0047f42a
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047f42f
    JMP 0x0047f40d                      ; 0047f432
        ;   XREF to: 0047f40d (UNCONDITIONAL_JUMP)  ; LAB_0047f40d
    MOV ESI,0x5806aa                    ; 0047f434 | = "Error parsing isOfType parameters."
        ;   Label: LAB_0047f434
    MOV EDI,0x1c08b60                   ; 0047f439
    PUSH EDI                            ; 0047f43e | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f43f | = "Error parsing isOfType parameters." | s_ror_parsing_isOfType_parameters._005806aa+2
        ;   Label: LAB_0047f43f
    MOV byte ptr [EDI],AL               ; 0047f441 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f443
    JZ 0x0047f457                       ; 0047f445
        ;   XREF to: 0047f457 (CONDITIONAL_JUMP)  ; LAB_0047f457
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f447 | s_rror_parsing_isOfType_parameters_005806aa+1 | s_or_parsing_isOfType_parameters._005806aa+3
    ADD ESI,0x2                         ; 0047f44a
    MOV byte ptr [EDI + 0x1],AL         ; 0047f44d | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f450
    CMP AL,0x0                          ; 0047f453
    JNZ 0x0047f43f                      ; 0047f455
        ;   XREF to: 0047f43f (CONDITIONAL_JUMP)  ; LAB_0047f43f
    POP EDI                             ; 0047f457
        ;   Label: LAB_0047f457
    MOV EAX,0xffffffff                  ; 0047f458
        ;   Label: LAB_0047f458
    MOV ESP,EBP                         ; 0047f45d
    POP EBP                             ; 0047f45f
    POP EDI                             ; 0047f460
    POP ESI                             ; 0047f461
    POP EBX                             ; 0047f462
    RET                                 ; 0047f463
    DEC EDI                             ; 0047f464
        ;   Label: LAB_0047f464
    DEC EAX                             ; 0047f465
    TEST EDI,EDI                        ; 0047f466
    JG 0x0047f3e9                       ; 0047f468
        ;   XREF to: 0047f3e9 (CONDITIONAL_JUMP)  ; LAB_0047f3e9
    JMP 0x0047f3fd                      ; 0047f46e
        ;   XREF to: 0047f3fd (UNCONDITIONAL_JUMP)  ; LAB_0047f3fd
    LEA EDI,[ESP + 0x10c]               ; 0047f470
        ;   Label: LAB_0047f470
    LEA EBX,[ESP + 0x10c]               ; 0047f477
    SUB ECX,ECX                         ; 0047f47e
    DEC ECX                             ; 0047f480
    XOR EAX,EAX                         ; 0047f481
    SCASB.REPNE ES:EDI                  ; 0047f483
    NOT ECX                             ; 0047f485
    DEC ECX                             ; 0047f487
    MOV EDI,ECX                         ; 0047f488
    TEST ECX,ECX                        ; 0047f48a
    JLE 0x0047f4ab                      ; 0047f48c
        ;   XREF to: 0047f4ab (CONDITIONAL_JUMP)  ; LAB_0047f4ab
    LEA EAX,[ESP + 0x10c]               ; 0047f48e
    ADD EAX,ECX                         ; 0047f495
    MOV DL,byte ptr [EAX + -0x1]        ; 0047f497
        ;   Label: LAB_0047f497
    INC DL                              ; 0047f49a
    AND EDX,0xff                        ; 0047f49c
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047f4a2 | DAT_005c168c
    JNZ 0x0047f4e2                      ; 0047f4a9
        ;   XREF to: 0047f4e2 (CONDITIONAL_JUMP)  ; LAB_0047f4e2
    LEA EAX,[EBX + EDI*0x1]             ; 0047f4ab
        ;   Label: LAB_0047f4ab
    MOV byte ptr [EAX],0x0              ; 0047f4ae
    LEA EAX,[EBX + 0x1]                 ; 0047f4b1
    MOV dword ptr [ESP + 0xa2c],EAX     ; 0047f4b4
    MOV AL,byte ptr [EBX]               ; 0047f4bb
        ;   Label: LAB_0047f4bb
    INC AL                              ; 0047f4bd
    AND EAX,0xff                        ; 0047f4bf
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047f4c4 | DAT_005c168c
    JZ 0x0047f4ea                       ; 0047f4cb
        ;   XREF to: 0047f4ea (CONDITIONAL_JUMP)  ; LAB_0047f4ea
    PUSH EDI                            ; 0047f4cd
    MOV ECX,dword ptr [ESP + 0xa30]     ; 0047f4ce
    PUSH ECX                            ; 0047f4d5
    PUSH EBX                            ; 0047f4d6
    DEC EDI                             ; 0047f4d7
    CALL crt_string.c_memmove_FUN_00566170 ; 0047f4d8
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047f4dd
    JMP 0x0047f4bb                      ; 0047f4e0
        ;   XREF to: 0047f4bb (UNCONDITIONAL_JUMP)  ; LAB_0047f4bb
    DEC EDI                             ; 0047f4e2
        ;   Label: LAB_0047f4e2
    DEC EAX                             ; 0047f4e3
    TEST EDI,EDI                        ; 0047f4e4
    JG 0x0047f497                       ; 0047f4e6
        ;   XREF to: 0047f497 (CONDITIONAL_JUMP)  ; LAB_0047f497
    JMP 0x0047f4ab                      ; 0047f4e8
        ;   XREF to: 0047f4ab (UNCONDITIONAL_JUMP)  ; LAB_0047f4ab
    PUSH 0x763e48                       ; 0047f4ea | DAT_00763e48
        ;   Label: LAB_0047f4ea
    MOV ECX,dword ptr [0x00763e80]      ; 0047f4ef | DAT_00763e80
    PUSH ECX                            ; 0047f4f5
    LEA EAX,[ESP + 0x68c]               ; 0047f4f6
    PUSH EAX                            ; 0047f4fd
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047f4fe
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047f503
    TEST EAX,EAX                        ; 0047f506
    JZ 0x0047f458                       ; 0047f508
        ;   XREF to: 0047f458 (CONDITIONAL_JUMP)  ; LAB_0047f458
    CMP EAX,dword ptr [0x0059cf1c]      ; 0047f50e | DAT_0059cf1c
    JNZ 0x0047f52d                      ; 0047f514
        ;   XREF to: 0047f52d (CONDITIONAL_JUMP)  ; LAB_0047f52d
    XOR EDI,EDI                         ; 0047f516
    MOV dword ptr [ESP + 0x9b4],EDI     ; 0047f518
    MOV EAX,dword ptr [ESP + 0xa20]     ; 0047f51f
    ADD dword ptr [ESI],EAX             ; 0047f526
    JMP 0x0047e57d                      ; 0047f528
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    LEA EDX,[ESP + 0x10c]               ; 0047f52d
        ;   Label: LAB_0047f52d
    PUSH EDX                            ; 0047f534
    PUSH EAX                            ; 0047f535
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0047f536
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 0047f53b
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047f53e
    MOV EAX,dword ptr [ESP + 0xa20]     ; 0047f545
    ADD dword ptr [ESI],EAX             ; 0047f54c
    JMP 0x0047e57d                      ; 0047f54e
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x5806cd                       ; 0047f553 | = "isFacing"
        ;   Label: LAB_0047f553
    LEA EAX,[ESP + 0x944]               ; 0047f558
    PUSH EAX                            ; 0047f55f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047f560
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047f565
    TEST EAX,EAX                        ; 0047f568
    JNZ 0x0047f8c8                      ; 0047f56a
        ;   XREF to: 0047f8c8 (CONDITIONAL_JUMP)  ; LAB_0047f8c8
    LEA EAX,[ESP + 0xa30]               ; 0047f570
    PUSH EAX                            ; 0047f577
    LEA EAX,[ESP + 0x6ec]               ; 0047f578
    MOV EBX,0xffffffff                  ; 0047f57f
    PUSH EAX                            ; 0047f584
    LEA EAX,[ESP + 0x5c4]               ; 0047f585
    MOV dword ptr [ESP + 0xa38],EBX     ; 0047f58c
    PUSH EAX                            ; 0047f593
    MOV EAX,0x5806d6                    ; 0047f594 | = " (%[^,], %[^,)]%n"
    MOV EDI,dword ptr [ESI]             ; 0047f599
    PUSH EAX                            ; 0047f59b | = " (%[^,], %[^,)]%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f59c
    ADD EAX,EDI                         ; 0047f59f
    PUSH EAX                            ; 0047f5a1
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f5a2
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x14                        ; 0047f5a7
    CMP dword ptr [ESP + 0xa30],0x5     ; 0047f5aa
    JL 0x0047f61b                       ; 0047f5b2
        ;   XREF to: 0047f61b (CONDITIONAL_JUMP)  ; LAB_0047f61b
    LEA EBX,[ESP + 0x5bc]               ; 0047f5b4
    MOV EDI,EBX                         ; 0047f5bb
    SUB ECX,ECX                         ; 0047f5bd
    DEC ECX                             ; 0047f5bf
    XOR EAX,EAX                         ; 0047f5c0
    SCASB.REPNE ES:EDI                  ; 0047f5c2
    NOT ECX                             ; 0047f5c4
    DEC ECX                             ; 0047f5c6
    MOV EDI,ECX                         ; 0047f5c7
    TEST ECX,ECX                        ; 0047f5c9
    JLE 0x0047f5e4                      ; 0047f5cb
        ;   XREF to: 0047f5e4 (CONDITIONAL_JUMP)  ; LAB_0047f5e4
    LEA EAX,[ECX + EBX*0x1]             ; 0047f5cd
    MOV DL,byte ptr [EAX + -0x1]        ; 0047f5d0
        ;   Label: LAB_0047f5d0
    INC DL                              ; 0047f5d3
    AND EDX,0xff                        ; 0047f5d5
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047f5db | DAT_005c168c
    JNZ 0x0047f648                      ; 0047f5e2
        ;   XREF to: 0047f648 (CONDITIONAL_JUMP)  ; LAB_0047f648
    LEA EAX,[EBX + EDI*0x1]             ; 0047f5e4
        ;   Label: LAB_0047f5e4
    MOV byte ptr [EAX],0x0              ; 0047f5e7
    LEA EAX,[EBX + 0x1]                 ; 0047f5ea
    MOV dword ptr [ESP + 0xa34],EAX     ; 0047f5ed
    MOV AL,byte ptr [EBX]               ; 0047f5f4
        ;   Label: LAB_0047f5f4
    INC AL                              ; 0047f5f6
    AND EAX,0xff                        ; 0047f5f8
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047f5fd | DAT_005c168c
    JZ 0x0047f650                       ; 0047f604
        ;   XREF to: 0047f650 (CONDITIONAL_JUMP)  ; LAB_0047f650
    PUSH EDI                            ; 0047f606
    MOV EDX,dword ptr [ESP + 0xa38]     ; 0047f607
    PUSH EDX                            ; 0047f60e
    PUSH EBX                            ; 0047f60f
    DEC EDI                             ; 0047f610
    CALL crt_string.c_memmove_FUN_00566170 ; 0047f611
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047f616
    JMP 0x0047f5f4                      ; 0047f619
        ;   XREF to: 0047f5f4 (UNCONDITIONAL_JUMP)  ; LAB_0047f5f4
    MOV ESI,0x5806e8                    ; 0047f61b | = "Error parsing isFacing parameters."
        ;   Label: LAB_0047f61b
    MOV EDI,0x1c08b60                   ; 0047f620
    PUSH EDI                            ; 0047f625 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f626 | = "Error parsing isFacing parameters." | s_ror_parsing_isFacing_parameters._005806e8+2
        ;   Label: LAB_0047f626
    MOV byte ptr [EDI],AL               ; 0047f628 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f62a
    JZ 0x0047f63e                       ; 0047f62c
        ;   XREF to: 0047f63e (CONDITIONAL_JUMP)  ; LAB_0047f63e
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f62e | s_rror_parsing_isFacing_parameters_005806e8+1 | s_or_parsing_isFacing_parameters._005806e8+3
    ADD ESI,0x2                         ; 0047f631
    MOV byte ptr [EDI + 0x1],AL         ; 0047f634 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f637
    CMP AL,0x0                          ; 0047f63a
    JNZ 0x0047f626                      ; 0047f63c
        ;   XREF to: 0047f626 (CONDITIONAL_JUMP)  ; LAB_0047f626
    POP EDI                             ; 0047f63e
        ;   Label: LAB_0047f63e
    MOV EAX,EBX                         ; 0047f63f
    MOV ESP,EBP                         ; 0047f641
    POP EBP                             ; 0047f643
    POP EDI                             ; 0047f644
    POP ESI                             ; 0047f645
    POP EBX                             ; 0047f646
    RET                                 ; 0047f647
    DEC EDI                             ; 0047f648
        ;   Label: LAB_0047f648
    DEC EAX                             ; 0047f649
    TEST EDI,EDI                        ; 0047f64a
    JG 0x0047f5d0                       ; 0047f64c
        ;   XREF to: 0047f5d0 (CONDITIONAL_JUMP)  ; LAB_0047f5d0
    JMP 0x0047f5e4                      ; 0047f64e
        ;   XREF to: 0047f5e4 (UNCONDITIONAL_JUMP)  ; LAB_0047f5e4
    LEA EDI,[ESP + 0x6e8]               ; 0047f650
        ;   Label: LAB_0047f650
    LEA EBX,[ESP + 0x6e8]               ; 0047f657
    SUB ECX,ECX                         ; 0047f65e
    DEC ECX                             ; 0047f660
    XOR EAX,EAX                         ; 0047f661
    SCASB.REPNE ES:EDI                  ; 0047f663
    NOT ECX                             ; 0047f665
    DEC ECX                             ; 0047f667
    MOV EDI,ECX                         ; 0047f668
    TEST ECX,ECX                        ; 0047f66a
    JLE 0x0047f68b                      ; 0047f66c
        ;   XREF to: 0047f68b (CONDITIONAL_JUMP)  ; LAB_0047f68b
    LEA EAX,[ESP + 0x6e8]               ; 0047f66e
    ADD EAX,ECX                         ; 0047f675
    MOV DL,byte ptr [EAX + -0x1]        ; 0047f677
        ;   Label: LAB_0047f677
    INC DL                              ; 0047f67a
    AND EDX,0xff                        ; 0047f67c
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047f682 | DAT_005c168c
    JNZ 0x0047f6c2                      ; 0047f689
        ;   XREF to: 0047f6c2 (CONDITIONAL_JUMP)  ; LAB_0047f6c2
    LEA EAX,[EBX + EDI*0x1]             ; 0047f68b
        ;   Label: LAB_0047f68b
    MOV byte ptr [EAX],0x0              ; 0047f68e
    LEA EAX,[EBX + 0x1]                 ; 0047f691
    MOV dword ptr [ESP + 0xa38],EAX     ; 0047f694
    MOV AL,byte ptr [EBX]               ; 0047f69b
        ;   Label: LAB_0047f69b
    INC AL                              ; 0047f69d
    AND EAX,0xff                        ; 0047f69f
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047f6a4 | DAT_005c168c
    JZ 0x0047f6ca                       ; 0047f6ab
        ;   XREF to: 0047f6ca (CONDITIONAL_JUMP)  ; LAB_0047f6ca
    PUSH EDI                            ; 0047f6ad
    MOV EAX,dword ptr [ESP + 0xa3c]     ; 0047f6ae
    PUSH EAX                            ; 0047f6b5
    PUSH EBX                            ; 0047f6b6
    DEC EDI                             ; 0047f6b7
    CALL crt_string.c_memmove_FUN_00566170 ; 0047f6b8
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047f6bd
    JMP 0x0047f69b                      ; 0047f6c0
        ;   XREF to: 0047f69b (UNCONDITIONAL_JUMP)  ; LAB_0047f69b
    DEC EDI                             ; 0047f6c2
        ;   Label: LAB_0047f6c2
    DEC EAX                             ; 0047f6c3
    TEST EDI,EDI                        ; 0047f6c4
    JG 0x0047f677                       ; 0047f6c6
        ;   XREF to: 0047f677 (CONDITIONAL_JUMP)  ; LAB_0047f677
    JMP 0x0047f68b                      ; 0047f6c8
        ;   XREF to: 0047f68b (UNCONDITIONAL_JUMP)  ; LAB_0047f68b
    PUSH 0x763e48                       ; 0047f6ca | DAT_00763e48
        ;   Label: LAB_0047f6ca
    MOV ECX,dword ptr [0x00763e80]      ; 0047f6cf | DAT_00763e80
    PUSH ECX                            ; 0047f6d5
    LEA EAX,[ESP + 0x5c4]               ; 0047f6d6
    PUSH EAX                            ; 0047f6dd
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047f6de
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047f6e3
    MOV EDI,EAX                         ; 0047f6e6
    TEST EAX,EAX                        ; 0047f6e8
    JNZ 0x0047f6f8                      ; 0047f6ea
        ;   XREF to: 0047f6f8 (CONDITIONAL_JUMP)  ; LAB_0047f6f8
    MOV EAX,0xffffffff                  ; 0047f6ec
        ;   Label: LAB_0047f6ec
    MOV ESP,EBP                         ; 0047f6f1
    POP EBP                             ; 0047f6f3
    POP EDI                             ; 0047f6f4
    POP ESI                             ; 0047f6f5
    POP EBX                             ; 0047f6f6
    RET                                 ; 0047f6f7
    PUSH 0x763e48                       ; 0047f6f8 | DAT_00763e48
        ;   Label: LAB_0047f6f8
    MOV EBX,dword ptr [0x00763e80]      ; 0047f6fd | DAT_00763e80
    PUSH EBX                            ; 0047f703
    LEA EAX,[ESP + 0x6f0]               ; 0047f704
    PUSH EAX                            ; 0047f70b
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047f70c
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047f711
    MOV EBX,EAX                         ; 0047f714
    TEST EAX,EAX                        ; 0047f716
    JZ 0x0047f6ec                       ; 0047f718
        ;   XREF to: 0047f6ec (CONDITIONAL_JUMP)  ; LAB_0047f6ec
    MOV EAX,dword ptr [ESP + 0xa30]     ; 0047f71a
    MOV EDX,dword ptr [ESI]             ; 0047f721
    ADD EDX,EAX                         ; 0047f723
    MOV ECX,0x42340000                  ; 0047f725
    MOV dword ptr [ESI],EDX             ; 0047f72a
    MOV dword ptr [ESP + 0x8],ECX       ; 0047f72c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f730
    ADD EAX,dword ptr [ESI]             ; 0047f733
    CMP byte ptr [EAX],0x2c             ; 0047f735
    JZ 0x0047f76b                       ; 0047f738
        ;   XREF to: 0047f76b (CONDITIONAL_JUMP)  ; LAB_0047f76b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f73a
        ;   Label: LAB_0047f73a
    MOV ECX,dword ptr [ESI]             ; 0047f73d
    ADD EAX,ECX                         ; 0047f73f
    CMP byte ptr [EAX],0x29             ; 0047f741
    JNZ 0x0047f82d                      ; 0047f744
        ;   XREF to: 0047f82d (CONDITIONAL_JUMP)  ; LAB_0047f82d
    LEA EAX,[ECX + 0x1]                 ; 0047f74a
    MOV EDX,dword ptr [0x0059cf1c]      ; 0047f74d | DAT_0059cf1c
    MOV dword ptr [ESI],EAX             ; 0047f753
    CMP EDI,EDX                         ; 0047f755
    JNZ 0x0047f85d                      ; 0047f757
        ;   XREF to: 0047f85d (CONDITIONAL_JUMP)  ; LAB_0047f85d
    XOR EDI,EDI                         ; 0047f75d
        ;   Label: LAB_0047f75d
    MOV dword ptr [ESP + 0x9b4],EDI     ; 0047f75f
    JMP 0x0047e57d                      ; 0047f766
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    LEA EAX,[ESP + 0xa30]               ; 0047f76b
        ;   Label: LAB_0047f76b
    MOV ECX,0xffffffff                  ; 0047f772
    PUSH EAX                            ; 0047f777
    LEA EAX,[ESP + 0xc]                 ; 0047f778
    MOV dword ptr [ESP + 0xa34],ECX     ; 0047f77c
    PUSH EAX                            ; 0047f783
    MOV EDX,dword ptr [ESI]             ; 0047f784
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f786
    PUSH 0x58070b                       ; 0047f789 | = ",%f %n"
    ADD EAX,EDX                         ; 0047f78e
    PUSH EAX                            ; 0047f790
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f791
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047f796
    MOV ECX,dword ptr [ESP + 0xa30]     ; 0047f799
    CMP ECX,0x2                         ; 0047f7a0
    JL 0x0047f7cd                       ; 0047f7a3
        ;   XREF to: 0047f7cd (CONDITIONAL_JUMP)  ; LAB_0047f7cd
    FLD float ptr [ESP + 0x8]           ; 0047f7a5
    FLDZ                                ; 0047f7a9
    FXCH                                ; 0047f7ab
    FSTP double ptr [ESP]               ; 0047f7ad
    FCOMP double ptr [ESP]              ; 0047f7b0
    FNSTSW AX                           ; 0047f7b3
    SAHF                                ; 0047f7b5
    JA 0x0047f7fd                       ; 0047f7b6
        ;   XREF to: 0047f7fd (CONDITIONAL_JUMP)  ; LAB_0047f7fd
    FLD double ptr [ESP]                ; 0047f7b8
    FCOMP double ptr [0x005809e7]       ; 0047f7bb | DAT_005809e7
    FNSTSW AX                           ; 0047f7c1
    SAHF                                ; 0047f7c3
    JA 0x0047f7fd                       ; 0047f7c4
        ;   XREF to: 0047f7fd (CONDITIONAL_JUMP)  ; LAB_0047f7fd
    ADD dword ptr [ESI],ECX             ; 0047f7c6
    JMP 0x0047f73a                      ; 0047f7c8
        ;   XREF to: 0047f73a (UNCONDITIONAL_JUMP)  ; LAB_0047f73a
    MOV ESI,0x580712                    ; 0047f7cd | = "Error parsing isFacing parameters."
        ;   Label: LAB_0047f7cd
    MOV EDI,0x1c08b60                   ; 0047f7d2
    PUSH EDI                            ; 0047f7d7 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f7d8 | = "Error parsing isFacing parameters." | s_ror_parsing_isFacing_parameters._00580712+2
        ;   Label: LAB_0047f7d8
    MOV byte ptr [EDI],AL               ; 0047f7da | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f7dc
    JZ 0x0047f7f0                       ; 0047f7de
        ;   XREF to: 0047f7f0 (CONDITIONAL_JUMP)  ; LAB_0047f7f0
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f7e0 | s_rror_parsing_isFacing_parameters_00580712+1 | s_or_parsing_isFacing_parameters._00580712+3
    ADD ESI,0x2                         ; 0047f7e3
    MOV byte ptr [EDI + 0x1],AL         ; 0047f7e6 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f7e9
    CMP AL,0x0                          ; 0047f7ec
    JNZ 0x0047f7d8                      ; 0047f7ee
        ;   XREF to: 0047f7d8 (CONDITIONAL_JUMP)  ; LAB_0047f7d8
    POP EDI                             ; 0047f7f0
        ;   Label: LAB_0047f7f0
    MOV EAX,0xffffffff                  ; 0047f7f1
    MOV ESP,EBP                         ; 0047f7f6
    POP EBP                             ; 0047f7f8
    POP EDI                             ; 0047f7f9
    POP ESI                             ; 0047f7fa
    POP EBX                             ; 0047f7fb
    RET                                 ; 0047f7fc
    MOV ESI,0x580735                    ; 0047f7fd | = "isFacing() angle must be in range 0....."
        ;   Label: LAB_0047f7fd
    MOV EDI,0x1c08b60                   ; 0047f802
    PUSH EDI                            ; 0047f807 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f808 | = "isFacing() angle must be in range 0....." | s_Facing()_angle_must_be_in_range_0_00580735+2
        ;   Label: LAB_0047f808
    MOV byte ptr [EDI],AL               ; 0047f80a | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f80c
    JZ 0x0047f820                       ; 0047f80e
        ;   XREF to: 0047f820 (CONDITIONAL_JUMP)  ; LAB_0047f820
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f810 | s_sFacing()_angle_must_be_in_range_00580735+1 | s_acing()_angle_must_be_in_range_0_00580735+3
    ADD ESI,0x2                         ; 0047f813
    MOV byte ptr [EDI + 0x1],AL         ; 0047f816 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f819
    CMP AL,0x0                          ; 0047f81c
    JNZ 0x0047f808                      ; 0047f81e
        ;   XREF to: 0047f808 (CONDITIONAL_JUMP)  ; LAB_0047f808
    POP EDI                             ; 0047f820
        ;   Label: LAB_0047f820
    MOV EAX,0xffffffff                  ; 0047f821
    MOV ESP,EBP                         ; 0047f826
    POP EBP                             ; 0047f828
    POP EDI                             ; 0047f829
    POP ESI                             ; 0047f82a
    POP EBX                             ; 0047f82b
    RET                                 ; 0047f82c
    MOV ESI,0x58075f                    ; 0047f82d | = "Error parsing isFacing parameters."
        ;   Label: LAB_0047f82d
    MOV EDI,0x1c08b60                   ; 0047f832
    PUSH EDI                            ; 0047f837 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f838 | = "Error parsing isFacing parameters." | s_ror_parsing_isFacing_parameters._0058075f+2
        ;   Label: LAB_0047f838
    MOV byte ptr [EDI],AL               ; 0047f83a | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f83c
    JZ 0x0047f850                       ; 0047f83e
        ;   XREF to: 0047f850 (CONDITIONAL_JUMP)  ; LAB_0047f850
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f840 | s_rror_parsing_isFacing_parameters_0058075f+1 | s_or_parsing_isFacing_parameters._0058075f+3
    ADD ESI,0x2                         ; 0047f843
    MOV byte ptr [EDI + 0x1],AL         ; 0047f846 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f849
    CMP AL,0x0                          ; 0047f84c
    JNZ 0x0047f838                      ; 0047f84e
        ;   XREF to: 0047f838 (CONDITIONAL_JUMP)  ; LAB_0047f838
    POP EDI                             ; 0047f850
        ;   Label: LAB_0047f850
    MOV EAX,0xffffffff                  ; 0047f851
    MOV ESP,EBP                         ; 0047f856
    POP EBP                             ; 0047f858
    POP EDI                             ; 0047f859
    POP ESI                             ; 0047f85a
    POP EBX                             ; 0047f85b
    RET                                 ; 0047f85c
    CMP EBX,EDX                         ; 0047f85d
        ;   Label: LAB_0047f85d
    JZ 0x0047f75d                       ; 0047f85f
        ;   XREF to: 0047f75d (CONDITIONAL_JUMP)  ; LAB_0047f75d
    ADD EBX,0x20                        ; 0047f865
    PUSH EBX                            ; 0047f868
    LEA EAX,[ESP + 0x984]               ; 0047f869
    PUSH EAX                            ; 0047f870
    PUSH EDI                            ; 0047f871
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0047f872
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0047f877
    LEA EAX,[ESP + 0x980]               ; 0047f87a
    PUSH EAX                            ; 0047f881
    LEA EAX,[ESP + 0x99c]               ; 0047f882
    XOR EBX,EBX                         ; 0047f889
    PUSH EAX                            ; 0047f88b
    MOV dword ptr [ESP + 0x98c],EBX     ; 0047f88c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0047f893
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 0047f898
    FABS                                ; 0047f89b
    ADD ESP,0x8                         ; 0047f89d
    FLD float ptr [ESP + 0x8]           ; 0047f8a0
    FMUL double ptr [0x005809ef]        ; 0047f8a4 | DAT_005809ef
    FMUL double ptr [0x005809f7]        ; 0047f8aa | DAT_005809f7
    FCOMPP                              ; 0047f8b0
    FNSTSW AX                           ; 0047f8b2
    SAHF                                ; 0047f8b4
    JC 0x0047f8c1                       ; 0047f8b5
        ;   XREF to: 0047f8c1 (CONDITIONAL_JUMP)  ; LAB_0047f8c1
    MOV EAX,0x1                         ; 0047f8b7
    JMP 0x0047e576                      ; 0047f8bc
        ;   XREF to: 0047e576 (UNCONDITIONAL_JUMP)  ; LAB_0047e576
    XOR EAX,EAX                         ; 0047f8c1
        ;   Label: LAB_0047f8c1
    JMP 0x0047e576                      ; 0047f8c3
        ;   XREF to: 0047e576 (UNCONDITIONAL_JUMP)  ; LAB_0047e576
    PUSH 0x580782                       ; 0047f8c8 | = "isLightOn"
        ;   Label: LAB_0047f8c8
    LEA EAX,[ESP + 0x944]               ; 0047f8cd
    PUSH EAX                            ; 0047f8d4
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047f8d5
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047f8da
    TEST EAX,EAX                        ; 0047f8dd
    JNZ 0x0047f9fa                      ; 0047f8df
        ;   XREF to: 0047f9fa (CONDITIONAL_JUMP)  ; LAB_0047f9fa
    MOV dword ptr [ESP + 0xa3c],0xffffffff ; 0047f8e5
    LEA EAX,[ESP + 0xa3c]               ; 0047f8f0
    PUSH EAX                            ; 0047f8f7
    LEA EAX,[ESP + 0x174]               ; 0047f8f8
    PUSH EAX                            ; 0047f8ff
    MOV EAX,0x58078c                    ; 0047f900 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 0047f905
    PUSH EAX                            ; 0047f907 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047f908
    ADD EAX,EDX                         ; 0047f90b
    PUSH EAX                            ; 0047f90d
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047f90e
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047f913
    CMP dword ptr [ESP + 0xa3c],0x3     ; 0047f916
    JL 0x0047f980                       ; 0047f91e
        ;   XREF to: 0047f980 (CONDITIONAL_JUMP)  ; LAB_0047f980
    LEA EAX,[ESP + 0xa48]               ; 0047f920
    PUSH EAX                            ; 0047f927
    LEA EAX,[ESP + 0xa48]               ; 0047f928
    PUSH EAX                            ; 0047f92f
    LEA EAX,[ESP + 0x178]               ; 0047f930
    PUSH EAX                            ; 0047f937
    MOV EBX,dword ptr [0x005be368]      ; 0047f938 | DAT_005be368
    PUSH EBX                            ; 0047f93e | DAT_01e57284
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0 ; 0047f93f
        ;   XREF to: 0050e5d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0()
    ADD ESP,0x10                        ; 0047f944
    CMP dword ptr [ESP + 0xa44],0x0     ; 0047f947
    JZ 0x0047f9b0                       ; 0047f94f
        ;   XREF to: 0047f9b0 (CONDITIONAL_JUMP)  ; LAB_0047f9b0
    MOV EAX,dword ptr [ESP + 0xa48]     ; 0047f951
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0047f958
    SETNZ AL                            ; 0047f95f
    AND EAX,0xff                        ; 0047f962
    MOV ECX,dword ptr [ESI]             ; 0047f967
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047f969
    MOV EAX,dword ptr [ESP + 0xa3c]     ; 0047f970
    ADD ECX,EAX                         ; 0047f977
    MOV dword ptr [ESI],ECX             ; 0047f979
    JMP 0x0047e57d                      ; 0047f97b
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x58079a                    ; 0047f980 | = "Error parsing isLightOn parameters."
        ;   Label: LAB_0047f980
    MOV EDI,0x1c08b60                   ; 0047f985
    PUSH EDI                            ; 0047f98a | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f98b | = "Error parsing isLightOn parameters." | s_ror_parsing_isLightOn_parameters_0058079a+2
        ;   Label: LAB_0047f98b
    MOV byte ptr [EDI],AL               ; 0047f98d | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f98f
    JZ 0x0047f9a3                       ; 0047f991
        ;   XREF to: 0047f9a3 (CONDITIONAL_JUMP)  ; LAB_0047f9a3
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f993 | s_rror_parsing_isLightOn_parameter_0058079a+1 | s_or_parsing_isLightOn_parameters._0058079a+3
    ADD ESI,0x2                         ; 0047f996
    MOV byte ptr [EDI + 0x1],AL         ; 0047f999 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f99c
    CMP AL,0x0                          ; 0047f99f
    JNZ 0x0047f98b                      ; 0047f9a1
        ;   XREF to: 0047f98b (CONDITIONAL_JUMP)  ; LAB_0047f98b
    POP EDI                             ; 0047f9a3
        ;   Label: LAB_0047f9a3
    MOV EAX,0xffffffff                  ; 0047f9a4
    MOV ESP,EBP                         ; 0047f9a9
    POP EBP                             ; 0047f9ab
    POP EDI                             ; 0047f9ac
    POP ESI                             ; 0047f9ad
    POP EBX                             ; 0047f9ae
    RET                                 ; 0047f9af
    LEA EAX,[ESP + 0x170]               ; 0047f9b0
        ;   Label: LAB_0047f9b0
    PUSH EAX                            ; 0047f9b7
    MOV EAX,0x5807be                    ; 0047f9b8 | = "Spotlight %s doesn't exist."
    PUSH EAX                            ; 0047f9bd | = "Spotlight %s doesn't exist."
    LEA EAX,[ESP + 0x14]                ; 0047f9be
    PUSH EAX                            ; 0047f9c2
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047f9c3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0047f9c8
    LEA ESI,[ESP + 0xc]                 ; 0047f9cb
    MOV EDI,0x1c08b60                   ; 0047f9cf
    PUSH EDI                            ; 0047f9d4 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047f9d5
        ;   Label: LAB_0047f9d5
    MOV byte ptr [EDI],AL               ; 0047f9d7 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047f9d9
    JZ 0x0047f9ed                       ; 0047f9db
        ;   XREF to: 0047f9ed (CONDITIONAL_JUMP)  ; LAB_0047f9ed
    MOV AL,byte ptr [ESI + 0x1]         ; 0047f9dd
    ADD ESI,0x2                         ; 0047f9e0
    MOV byte ptr [EDI + 0x1],AL         ; 0047f9e3 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047f9e6
    CMP AL,0x0                          ; 0047f9e9
    JNZ 0x0047f9d5                      ; 0047f9eb
        ;   XREF to: 0047f9d5 (CONDITIONAL_JUMP)  ; LAB_0047f9d5
    POP EDI                             ; 0047f9ed
        ;   Label: LAB_0047f9ed
    MOV EAX,0xffffffff                  ; 0047f9ee
    MOV ESP,EBP                         ; 0047f9f3
    POP EBP                             ; 0047f9f5
    POP EDI                             ; 0047f9f6
    POP ESI                             ; 0047f9f7
    POP EBX                             ; 0047f9f8
    RET                                 ; 0047f9f9
    PUSH 0x5807da                       ; 0047f9fa | = "isNudityEnabled"
        ;   Label: LAB_0047f9fa
    LEA EAX,[ESP + 0x944]               ; 0047f9ff
    PUSH EAX                            ; 0047fa06
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047fa07
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047fa0c
    TEST EAX,EAX                        ; 0047fa0f
    JNZ 0x0047fa9f                      ; 0047fa11
        ;   XREF to: 0047fa9f (CONDITIONAL_JUMP)  ; LAB_0047fa9f
    MOV dword ptr [ESP + 0xa4c],0xffffffff ; 0047fa17
    LEA EAX,[ESP + 0xa4c]               ; 0047fa22
    PUSH EAX                            ; 0047fa29
    MOV EAX,0x5807ea                    ; 0047fa2a | = " ( )%n"
    MOV EDX,dword ptr [ESI]             ; 0047fa2f
    PUSH EAX                            ; 0047fa31 | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047fa32
    ADD EAX,EDX                         ; 0047fa35
    PUSH EAX                            ; 0047fa37
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047fa38
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047fa3d
    MOV ECX,dword ptr [ESP + 0xa4c]     ; 0047fa40
    CMP ECX,0x2                         ; 0047fa47
    JL 0x0047fa6f                       ; 0047fa4a
        ;   XREF to: 0047fa6f (CONDITIONAL_JUMP)  ; LAB_0047fa6f
    MOV EAX,[0x005b9354]                ; 0047fa4c | DAT_005b9354
    CMP dword ptr [EAX + 0x18],0x0      ; 0047fa51 | DAT_01c77604
    SETNZ AL                            ; 0047fa55
    MOV EDI,dword ptr [ESI]             ; 0047fa58
    AND EAX,0xff                        ; 0047fa5a
    ADD EDI,ECX                         ; 0047fa5f
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047fa61
    MOV dword ptr [ESI],EDI             ; 0047fa68
    JMP 0x0047e57d                      ; 0047fa6a
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x5807f1                    ; 0047fa6f | = "Error parsing isNudityEnabled()."
        ;   Label: LAB_0047fa6f
    MOV EDI,0x1c08b60                   ; 0047fa74
    PUSH EDI                            ; 0047fa79 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047fa7a | = "Error parsing isNudityEnabled()." | s_ror_parsing_isNudityEnabled()._005807f1+2
        ;   Label: LAB_0047fa7a
    MOV byte ptr [EDI],AL               ; 0047fa7c | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047fa7e
    JZ 0x0047fa92                       ; 0047fa80
        ;   XREF to: 0047fa92 (CONDITIONAL_JUMP)  ; LAB_0047fa92
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fa82 | s_rror_parsing_isNudityEnabled()._005807f1+1 | s_or_parsing_isNudityEnabled()._005807f1+3
    ADD ESI,0x2                         ; 0047fa85
    MOV byte ptr [EDI + 0x1],AL         ; 0047fa88 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047fa8b
    CMP AL,0x0                          ; 0047fa8e
    JNZ 0x0047fa7a                      ; 0047fa90
        ;   XREF to: 0047fa7a (CONDITIONAL_JUMP)  ; LAB_0047fa7a
    POP EDI                             ; 0047fa92
        ;   Label: LAB_0047fa92
    MOV EAX,0xffffffff                  ; 0047fa93
    MOV ESP,EBP                         ; 0047fa98
    POP EBP                             ; 0047fa9a
    POP EDI                             ; 0047fa9b
    POP ESI                             ; 0047fa9c
    POP EBX                             ; 0047fa9d
    RET                                 ; 0047fa9e
    PUSH 0x580812                       ; 0047fa9f | = "isSfxActive"
        ;   Label: LAB_0047fa9f
    LEA EAX,[ESP + 0x944]               ; 0047faa4
    PUSH EAX                            ; 0047faab
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047faac
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047fab1
    TEST EAX,EAX                        ; 0047fab4
    JNZ 0x0047fbd5                      ; 0047fab6
        ;   XREF to: 0047fbd5 (CONDITIONAL_JUMP)  ; LAB_0047fbd5
    LEA EAX,[ESP + 0xa50]               ; 0047fabc
    MOV ECX,0xffffffff                  ; 0047fac3
    PUSH EAX                            ; 0047fac8
    LEA EAX,[ESP + 0x304]               ; 0047fac9
    MOV dword ptr [ESP + 0xa54],ECX     ; 0047fad0
    PUSH EAX                            ; 0047fad7
    MOV EAX,0x58081e                    ; 0047fad8 | = " ( %[^ )] )%n"
    MOV EBX,dword ptr [ESI]             ; 0047fadd
    PUSH EAX                            ; 0047fadf | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047fae0
    ADD EAX,EBX                         ; 0047fae3
    PUSH EAX                            ; 0047fae5
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047fae6
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047faeb
    CMP dword ptr [ESP + 0xa50],0x3     ; 0047faee
    JL 0x0047fb5f                       ; 0047faf6
        ;   XREF to: 0047fb5f (CONDITIONAL_JUMP)  ; LAB_0047fb5f
    LEA EBX,[ESP + 0x300]               ; 0047faf8
    MOV EDI,EBX                         ; 0047faff
    SUB ECX,ECX                         ; 0047fb01
    DEC ECX                             ; 0047fb03
    XOR EAX,EAX                         ; 0047fb04
    SCASB.REPNE ES:EDI                  ; 0047fb06
    NOT ECX                             ; 0047fb08
    DEC ECX                             ; 0047fb0a
    MOV EDI,ECX                         ; 0047fb0b
    TEST ECX,ECX                        ; 0047fb0d
    JLE 0x0047fb28                      ; 0047fb0f
        ;   XREF to: 0047fb28 (CONDITIONAL_JUMP)  ; LAB_0047fb28
    LEA EAX,[ECX + EBX*0x1]             ; 0047fb11
    MOV DL,byte ptr [EAX + -0x1]        ; 0047fb14
        ;   Label: LAB_0047fb14
    INC DL                              ; 0047fb17
    AND EDX,0xff                        ; 0047fb19
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047fb1f | DAT_005c168c
    JNZ 0x0047fb8f                      ; 0047fb26
        ;   XREF to: 0047fb8f (CONDITIONAL_JUMP)  ; LAB_0047fb8f
    LEA EAX,[EBX + EDI*0x1]             ; 0047fb28
        ;   Label: LAB_0047fb28
    MOV byte ptr [EAX],0x0              ; 0047fb2b
    LEA EAX,[EBX + 0x1]                 ; 0047fb2e
    MOV dword ptr [ESP + 0xa54],EAX     ; 0047fb31
    MOV AL,byte ptr [EBX]               ; 0047fb38
        ;   Label: LAB_0047fb38
    INC AL                              ; 0047fb3a
    AND EAX,0xff                        ; 0047fb3c
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047fb41 | DAT_005c168c
    JZ 0x0047fb9b                       ; 0047fb48
        ;   XREF to: 0047fb9b (CONDITIONAL_JUMP)  ; LAB_0047fb9b
    PUSH EDI                            ; 0047fb4a
    MOV EAX,dword ptr [ESP + 0xa58]     ; 0047fb4b
    PUSH EAX                            ; 0047fb52
    PUSH EBX                            ; 0047fb53
    DEC EDI                             ; 0047fb54
    CALL crt_string.c_memmove_FUN_00566170 ; 0047fb55
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047fb5a
    JMP 0x0047fb38                      ; 0047fb5d
        ;   XREF to: 0047fb38 (UNCONDITIONAL_JUMP)  ; LAB_0047fb38
    MOV ESI,0x58082c                    ; 0047fb5f | = "Error parsing isSfxActive parameters."
        ;   Label: LAB_0047fb5f
    MOV EDI,0x1c08b60                   ; 0047fb64
    PUSH EDI                            ; 0047fb69 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047fb6a | = "Error parsing isSfxActive parameters." | s_ror_parsing_isSfxActive_paramete_0058082c+2
        ;   Label: LAB_0047fb6a
    MOV byte ptr [EDI],AL               ; 0047fb6c | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047fb6e
    JZ 0x0047fb82                       ; 0047fb70
        ;   XREF to: 0047fb82 (CONDITIONAL_JUMP)  ; LAB_0047fb82
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fb72 | s_rror_parsing_isSfxActive_paramet_0058082c+1 | s_or_parsing_isSfxActive_parameter_0058082c+3
    ADD ESI,0x2                         ; 0047fb75
    MOV byte ptr [EDI + 0x1],AL         ; 0047fb78 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047fb7b
    CMP AL,0x0                          ; 0047fb7e
    JNZ 0x0047fb6a                      ; 0047fb80
        ;   XREF to: 0047fb6a (CONDITIONAL_JUMP)  ; LAB_0047fb6a
    POP EDI                             ; 0047fb82
        ;   Label: LAB_0047fb82
    MOV EAX,0xffffffff                  ; 0047fb83
    MOV ESP,EBP                         ; 0047fb88
    POP EBP                             ; 0047fb8a
    POP EDI                             ; 0047fb8b
    POP ESI                             ; 0047fb8c
    POP EBX                             ; 0047fb8d
    RET                                 ; 0047fb8e
    DEC EDI                             ; 0047fb8f
        ;   Label: LAB_0047fb8f
    DEC EAX                             ; 0047fb90
    TEST EDI,EDI                        ; 0047fb91
    JG 0x0047fb14                       ; 0047fb93
        ;   XREF to: 0047fb14 (CONDITIONAL_JUMP)  ; LAB_0047fb14
    JMP 0x0047fb28                      ; 0047fb99
        ;   XREF to: 0047fb28 (UNCONDITIONAL_JUMP)  ; LAB_0047fb28
    XOR EAX,EAX                         ; 0047fb9b
        ;   Label: LAB_0047fb9b
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047fb9d
    LEA EAX,[ESP + 0x300]               ; 0047fba4
    PUSH EAX                            ; 0047fbab
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047fbac
    PUSH EDX                            ; 0047fbaf
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0 ; 0047fbb0
        ;   XREF to: 00480bf0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0()
    ADD ESP,0x8                         ; 0047fbb5
    TEST EAX,EAX                        ; 0047fbb8
    JZ 0x0047fbc7                       ; 0047fbba
        ;   XREF to: 0047fbc7 (CONDITIONAL_JUMP)  ; LAB_0047fbc7
    MOV dword ptr [ESP + 0x9b4],0x1     ; 0047fbbc
    MOV EAX,dword ptr [ESP + 0xa50]     ; 0047fbc7
        ;   Label: LAB_0047fbc7
    ADD dword ptr [ESI],EAX             ; 0047fbce
    JMP 0x0047e57d                      ; 0047fbd0
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x580852                       ; 0047fbd5 | = "isTalking"
        ;   Label: LAB_0047fbd5
    LEA EAX,[ESP + 0x944]               ; 0047fbda
    PUSH EAX                            ; 0047fbe1
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047fbe2
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047fbe7
    TEST EAX,EAX                        ; 0047fbea
    JNZ 0x0047fcc3                      ; 0047fbec
        ;   XREF to: 0047fcc3 (CONDITIONAL_JUMP)  ; LAB_0047fcc3
    LEA EAX,[ESP + 0xa58]               ; 0047fbf2
    MOV EDI,0xffffffff                  ; 0047fbf9
    PUSH EAX                            ; 0047fbfe
    LEA EAX,[ESP + 0x818]               ; 0047fbff
    MOV dword ptr [ESP + 0xa5c],EDI     ; 0047fc06
    PUSH EAX                            ; 0047fc0d
    MOV EAX,0x58085c                    ; 0047fc0e | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 0047fc13
    PUSH EAX                            ; 0047fc15 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047fc16
    ADD EAX,EDX                         ; 0047fc19
    PUSH EAX                            ; 0047fc1b
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047fc1c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047fc21
    CMP dword ptr [ESP + 0xa58],0x3     ; 0047fc24
    JL 0x0047fc70                       ; 0047fc2c
        ;   XREF to: 0047fc70 (CONDITIONAL_JUMP)  ; LAB_0047fc70
    MOV EAX,0x765a60                    ; 0047fc2e | DAT_00765a60
    PUSH EAX                            ; 0047fc33 | DAT_00765a60
    MOV EBX,dword ptr [0x00765a98]      ; 0047fc34 | DAT_00765a98
    PUSH EBX                            ; 0047fc3a
    LEA EAX,[ESP + 0x81c]               ; 0047fc3b
    PUSH EAX                            ; 0047fc42
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047fc43
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047fc48
    TEST EAX,EAX                        ; 0047fc4b
    JZ 0x0047fca0                       ; 0047fc4d
        ;   XREF to: 0047fca0 (CONDITIONAL_JUMP)  ; LAB_0047fca0
    MOV EDI,dword ptr [0x0059cf1c]      ; 0047fc4f | DAT_0059cf1c
    CMP EAX,EDI                         ; 0047fc55
    JNZ 0x0047fca9                      ; 0047fc57
        ;   XREF to: 0047fca9 (CONDITIONAL_JUMP)  ; LAB_0047fca9
    XOR EAX,EDI                         ; 0047fc59
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047fc5b
        ;   Label: LAB_0047fc5b
    MOV EAX,dword ptr [ESP + 0xa58]     ; 0047fc62
    ADD dword ptr [ESI],EAX             ; 0047fc69
    JMP 0x0047e57d                      ; 0047fc6b
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x58086a                    ; 0047fc70 | = "Error parsing isTalking parameters."
        ;   Label: LAB_0047fc70
    MOV EDI,0x1c08b60                   ; 0047fc75
    PUSH EDI                            ; 0047fc7a | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047fc7b | = "Error parsing isTalking parameters." | s_ror_parsing_isTalking_parameters_0058086a+2
        ;   Label: LAB_0047fc7b
    MOV byte ptr [EDI],AL               ; 0047fc7d | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047fc7f
    JZ 0x0047fc93                       ; 0047fc81
        ;   XREF to: 0047fc93 (CONDITIONAL_JUMP)  ; LAB_0047fc93
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fc83 | s_rror_parsing_isTalking_parameter_0058086a+1 | s_or_parsing_isTalking_parameters._0058086a+3
    ADD ESI,0x2                         ; 0047fc86
    MOV byte ptr [EDI + 0x1],AL         ; 0047fc89 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047fc8c
    CMP AL,0x0                          ; 0047fc8f
    JNZ 0x0047fc7b                      ; 0047fc91
        ;   XREF to: 0047fc7b (CONDITIONAL_JUMP)  ; LAB_0047fc7b
    POP EDI                             ; 0047fc93
        ;   Label: LAB_0047fc93
    MOV EAX,0xffffffff                  ; 0047fc94
    MOV ESP,EBP                         ; 0047fc99
    POP EBP                             ; 0047fc9b
    POP EDI                             ; 0047fc9c
    POP ESI                             ; 0047fc9d
    POP EBX                             ; 0047fc9e
    RET                                 ; 0047fc9f
    MOV EAX,EDI                         ; 0047fca0
        ;   Label: LAB_0047fca0
    MOV ESP,EBP                         ; 0047fca2
    POP EBP                             ; 0047fca4
    POP EDI                             ; 0047fca5
    POP ESI                             ; 0047fca6
    POP EBX                             ; 0047fca7
    RET                                 ; 0047fca8
    FLD float ptr [EAX + 0x2610]        ; 0047fca9
        ;   Label: LAB_0047fca9
    FLDZ                                ; 0047fcaf
    FCOMPP                              ; 0047fcb1
    FNSTSW AX                           ; 0047fcb3
    SAHF                                ; 0047fcb5
    JNC 0x0047fcbf                      ; 0047fcb6
        ;   XREF to: 0047fcbf (CONDITIONAL_JUMP)  ; LAB_0047fcbf
    MOV EAX,0x1                         ; 0047fcb8
    JMP 0x0047fc5b                      ; 0047fcbd
        ;   XREF to: 0047fc5b (UNCONDITIONAL_JUMP)  ; LAB_0047fc5b
    XOR EAX,EAX                         ; 0047fcbf
        ;   Label: LAB_0047fcbf
    JMP 0x0047fc5b                      ; 0047fcc1
        ;   XREF to: 0047fc5b (UNCONDITIONAL_JUMP)  ; LAB_0047fc5b
    PUSH 0x58088e                       ; 0047fcc3 | = "isVictim"
        ;   Label: LAB_0047fcc3
    LEA EAX,[ESP + 0x944]               ; 0047fcc8
    PUSH EAX                            ; 0047fccf
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047fcd0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047fcd5
    TEST EAX,EAX                        ; 0047fcd8
    JNZ 0x0047fe60                      ; 0047fcda
        ;   XREF to: 0047fe60 (CONDITIONAL_JUMP)  ; LAB_0047fe60
    LEA EAX,[ESP + 0x9b0]               ; 0047fce0
    MOV ECX,0xffffffff                  ; 0047fce7
    PUSH EAX                            ; 0047fcec
    LEA EAX,[ESP + 0x8e0]               ; 0047fced
    MOV dword ptr [ESP + 0x9b4],ECX     ; 0047fcf4
    PUSH EAX                            ; 0047fcfb
    MOV EAX,0x580897                    ; 0047fcfc | = " ( %[^ )] )%n"
    MOV EBX,dword ptr [ESI]             ; 0047fd01
    PUSH EAX                            ; 0047fd03 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047fd04
    ADD EAX,EBX                         ; 0047fd07
    PUSH EAX                            ; 0047fd09
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047fd0a
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047fd0f
    CMP dword ptr [ESP + 0x9b0],0x3     ; 0047fd12
    JL 0x0047fdbd                       ; 0047fd1a
        ;   XREF to: 0047fdbd (CONDITIONAL_JUMP)  ; LAB_0047fdbd
    MOV EAX,0x765a60                    ; 0047fd20 | DAT_00765a60
    PUSH EAX                            ; 0047fd25 | DAT_00765a60
    MOV EAX,[0x00765a98]                ; 0047fd26 | DAT_00765a98
    PUSH EAX                            ; 0047fd2b
    LEA EAX,[ESP + 0x8e4]               ; 0047fd2c
    PUSH EAX                            ; 0047fd33
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047fd34
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047fd39
    MOV dword ptr [ESP + 0x9dc],EAX     ; 0047fd3c
    TEST EAX,EAX                        ; 0047fd43
    JZ 0x0047fde1                       ; 0047fd45
        ;   XREF to: 0047fde1 (CONDITIONAL_JUMP)  ; LAB_0047fde1
    XOR ECX,ECX                         ; 0047fd4b
    MOV EBX,dword ptr [0x0059cf1c]      ; 0047fd4d | DAT_0059cf1c
    MOV dword ptr [ESP + 0x9b4],ECX     ; 0047fd53
    CMP EAX,EBX                         ; 0047fd5a
    JZ 0x0047fe52                       ; 0047fd5c
        ;   XREF to: 0047fe52 (CONDITIONAL_JUMP)  ; LAB_0047fe52
    ADD EAX,0x20                        ; 0047fd62
    MOV dword ptr [ESP + 0xa5c],EAX     ; 0047fd65
    LEA EAX,[ECX*0x4 + 0x0]             ; 0047fd6c
    XOR EDI,EDI                         ; 0047fd73
    MOV dword ptr [ESP + 0xa7c],EAX     ; 0047fd75
    MOV EAX,[0x005be368]                ; 0047fd7c | DAT_005be368
        ;   Label: LAB_0047fd7c
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 0047fd81 | DAT_01fa7e78
    JGE 0x0047fe52                      ; 0047fd87
        ;   XREF to: 0047fe52 (CONDITIONAL_JUMP)  ; LAB_0047fe52
    ADD EAX,dword ptr [ESP + 0xa7c]     ; 0047fd8d
    MOV EBX,dword ptr [EAX + 0x150bf8]  ; 0047fd94
    MOV EDX,dword ptr [ESP + 0x9dc]     ; 0047fd9a
    CMP EDX,dword ptr [EBX + 0xbca4]    ; 0047fda1
    JZ 0x0047fded                       ; 0047fda7
        ;   XREF to: 0047fded (CONDITIONAL_JUMP)  ; LAB_0047fded
    MOV EBX,dword ptr [ESP + 0xa7c]     ; 0047fda9
        ;   Label: LAB_0047fda9
    ADD EBX,0x4                         ; 0047fdb0
    INC EDI                             ; 0047fdb3
    MOV dword ptr [ESP + 0xa7c],EBX     ; 0047fdb4
    JMP 0x0047fd7c                      ; 0047fdbb
        ;   XREF to: 0047fd7c (UNCONDITIONAL_JUMP)  ; LAB_0047fd7c
    MOV ESI,0x5808a5                    ; 0047fdbd | = "Error parsing isVictim parameters."
        ;   Label: LAB_0047fdbd
    MOV EDI,0x1c08b60                   ; 0047fdc2
    PUSH EDI                            ; 0047fdc7 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047fdc8 | = "Error parsing isVictim parameters." | s_ror_parsing_isVictim_parameters._005808a5+2
        ;   Label: LAB_0047fdc8
    MOV byte ptr [EDI],AL               ; 0047fdca | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047fdcc
    JZ 0x0047fde0                       ; 0047fdce
        ;   XREF to: 0047fde0 (CONDITIONAL_JUMP)  ; LAB_0047fde0
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fdd0 | s_rror_parsing_isVictim_parameters_005808a5+1 | s_or_parsing_isVictim_parameters._005808a5+3
    ADD ESI,0x2                         ; 0047fdd3
    MOV byte ptr [EDI + 0x1],AL         ; 0047fdd6 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047fdd9
    CMP AL,0x0                          ; 0047fddc
    JNZ 0x0047fdc8                      ; 0047fdde
        ;   XREF to: 0047fdc8 (CONDITIONAL_JUMP)  ; LAB_0047fdc8
    POP EDI                             ; 0047fde0
        ;   Label: LAB_0047fde0
    MOV EAX,0xffffffff                  ; 0047fde1
        ;   Label: LAB_0047fde1
    MOV ESP,EBP                         ; 0047fde6
    POP EBP                             ; 0047fde8
    POP EDI                             ; 0047fde9
    POP ESI                             ; 0047fdea
    POP EBX                             ; 0047fdeb
    RET                                 ; 0047fdec
    PUSH EBX                            ; 0047fded
        ;   Label: LAB_0047fded
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0047fdee
    CALL dword ptr [EAX + 0x104]        ; 0047fdf4
    ADD ESP,0x4                         ; 0047fdfa
    TEST EAX,EAX                        ; 0047fdfd
    JG 0x0047fda9                       ; 0047fdff
        ;   XREF to: 0047fda9 (CONDITIONAL_JUMP)  ; LAB_0047fda9
    PUSH EBX                            ; 0047fe01
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0047fe02
    CALL dword ptr [EAX + 0x68]         ; 0047fe08
    ADD ESP,0x4                         ; 0047fe0b
    TEST EAX,EAX                        ; 0047fe0e
    JNZ 0x0047fda9                      ; 0047fe10
        ;   XREF to: 0047fda9 (CONDITIONAL_JUMP)  ; LAB_0047fda9
    MOV EAX,dword ptr [ESP + 0xa5c]     ; 0047fe12
    FLD float ptr [EBX + 0x20]          ; 0047fe19
    FSUB float ptr [EAX]                ; 0047fe1c
    FMUL ST0                            ; 0047fe1e
    FLD float ptr [EBX + 0x24]          ; 0047fe20
    FSUB float ptr [EAX + 0x4]          ; 0047fe23
    FMUL ST0                            ; 0047fe26
    FLD float ptr [EBX + 0x28]          ; 0047fe28
    FXCH                                ; 0047fe2b
    FADDP ST2,ST0                       ; 0047fe2d
    FSUB float ptr [EAX + 0x8]          ; 0047fe2f
    FMUL ST0                            ; 0047fe32
    FADDP                               ; 0047fe34
    FSQRT                               ; 0047fe36
    FCOMP double ptr [0x005809ff]       ; 0047fe38 | DAT_005809ff
    FNSTSW AX                           ; 0047fe3e
    SAHF                                ; 0047fe40
    JA 0x0047fda9                       ; 0047fe41
        ;   XREF to: 0047fda9 (CONDITIONAL_JUMP)  ; LAB_0047fda9
    MOV dword ptr [ESP + 0x9b4],0x1     ; 0047fe47
    MOV EAX,dword ptr [ESP + 0x9b0]     ; 0047fe52
        ;   Label: LAB_0047fe52
    ADD dword ptr [ESI],EAX             ; 0047fe59
    JMP 0x0047e57d                      ; 0047fe5b
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x5808c8                       ; 0047fe60 | = "isWeaponDrawn"
        ;   Label: LAB_0047fe60
    LEA EAX,[ESP + 0x944]               ; 0047fe65
    PUSH EAX                            ; 0047fe6c
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047fe6d
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047fe72
    TEST EAX,EAX                        ; 0047fe75
    JNZ 0x0047ff41                      ; 0047fe77
        ;   XREF to: 0047ff41 (CONDITIONAL_JUMP)  ; LAB_0047ff41
    LEA EAX,[ESP + 0x9b8]               ; 0047fe7d
    MOV EDI,0xffffffff                  ; 0047fe84
    PUSH EAX                            ; 0047fe89
    LEA EAX,[ESP + 0x624]               ; 0047fe8a
    MOV dword ptr [ESP + 0x9bc],EDI     ; 0047fe91
    PUSH EAX                            ; 0047fe98
    MOV EAX,0x5808d6                    ; 0047fe99 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 0047fe9e
    PUSH EAX                            ; 0047fea0 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047fea1
    ADD EAX,EDX                         ; 0047fea4
    PUSH EAX                            ; 0047fea6
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047fea7
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047feac
    CMP dword ptr [ESP + 0x9b8],0x3     ; 0047feaf
    JL 0x0047feff                       ; 0047feb7
        ;   XREF to: 0047feff (CONDITIONAL_JUMP)  ; LAB_0047feff
    MOV EAX,0x1cae0ec                   ; 0047feb9
    PUSH EAX                            ; 0047febe
    MOV EBX,dword ptr [0x01cae124]      ; 0047febf | DAT_01cae124
    PUSH EBX                            ; 0047fec5
    LEA EAX,[ESP + 0x628]               ; 0047fec6
    PUSH EAX                            ; 0047fecd
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047fece
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047fed3
    TEST EAX,EAX                        ; 0047fed6
    JZ 0x0047fca0                       ; 0047fed8
        ;   XREF to: 0047fca0 (CONDITIONAL_JUMP)  ; LAB_0047fca0
    MOV EDI,dword ptr [0x0059cf1c]      ; 0047fede | DAT_0059cf1c
    CMP EAX,EDI                         ; 0047fee4
    JNZ 0x0047ff2f                      ; 0047fee6
        ;   XREF to: 0047ff2f (CONDITIONAL_JUMP)  ; LAB_0047ff2f
    XOR EAX,EDI                         ; 0047fee8
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0047feea
        ;   Label: LAB_0047feea
    MOV EAX,dword ptr [ESP + 0x9b8]     ; 0047fef1
    ADD dword ptr [ESI],EAX             ; 0047fef8
    JMP 0x0047e57d                      ; 0047fefa
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x5808e4                    ; 0047feff | = "Error parsing isWeaponDrawn parameters."
        ;   Label: LAB_0047feff
    MOV EDI,0x1c08b60                   ; 0047ff04
    PUSH EDI                            ; 0047ff09 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ff0a | = "Error parsing isWeaponDrawn parameters." | s_ror_parsing_isWeaponDrawn_parame_005808e4+2
        ;   Label: LAB_0047ff0a
    MOV byte ptr [EDI],AL               ; 0047ff0c | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ff0e
    JZ 0x0047ff22                       ; 0047ff10
        ;   XREF to: 0047ff22 (CONDITIONAL_JUMP)  ; LAB_0047ff22
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ff12 | s_rror_parsing_isWeaponDrawn_param_005808e4+1 | s_or_parsing_isWeaponDrawn_paramet_005808e4+3
    ADD ESI,0x2                         ; 0047ff15
    MOV byte ptr [EDI + 0x1],AL         ; 0047ff18 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047ff1b
    CMP AL,0x0                          ; 0047ff1e
    JNZ 0x0047ff0a                      ; 0047ff20
        ;   XREF to: 0047ff0a (CONDITIONAL_JUMP)  ; LAB_0047ff0a
    POP EDI                             ; 0047ff22
        ;   Label: LAB_0047ff22
    MOV EAX,0xffffffff                  ; 0047ff23
    MOV ESP,EBP                         ; 0047ff28
    POP EBP                             ; 0047ff2a
    POP EDI                             ; 0047ff2b
    POP ESI                             ; 0047ff2c
    POP EBX                             ; 0047ff2d
    RET                                 ; 0047ff2e
    PUSH EAX                            ; 0047ff2f
        ;   Label: LAB_0047ff2f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0047ff30
    CALL dword ptr [EDX + 0x140]        ; 0047ff36
    ADD ESP,0x4                         ; 0047ff3c
    JMP 0x0047feea                      ; 0047ff3f
        ;   XREF to: 0047feea (UNCONDITIONAL_JUMP)  ; LAB_0047feea
    PUSH 0x58090c                       ; 0047ff41 | = "isWearingGasMask"
        ;   Label: LAB_0047ff41
    LEA EAX,[ESP + 0x944]               ; 0047ff46
    PUSH EAX                            ; 0047ff4d
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047ff4e
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047ff53
    TEST EAX,EAX                        ; 0047ff56
    JNZ 0x00480032                      ; 0047ff58
        ;   XREF to: 00480032 (CONDITIONAL_JUMP)  ; LAB_00480032
    LEA EAX,[ESP + 0xa70]               ; 0047ff5e
    MOV EDI,0xffffffff                  ; 0047ff65
    PUSH EAX                            ; 0047ff6a
    LEA EAX,[ESP + 0x55c]               ; 0047ff6b
    MOV dword ptr [ESP + 0xa74],EDI     ; 0047ff72
    PUSH EAX                            ; 0047ff79
    MOV EAX,0x58091d                    ; 0047ff7a | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 0047ff7f
    PUSH EAX                            ; 0047ff81 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047ff82
    ADD EAX,EDX                         ; 0047ff85
    PUSH EAX                            ; 0047ff87
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047ff88
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0047ff8d
    CMP dword ptr [ESP + 0xa70],0x3     ; 0047ff90
    JL 0x0047ffde                       ; 0047ff98
        ;   XREF to: 0047ffde (CONDITIONAL_JUMP)  ; LAB_0047ffde
    MOV EAX,0x1cae0ec                   ; 0047ff9a
    PUSH EAX                            ; 0047ff9f
    MOV EBX,dword ptr [0x01cae124]      ; 0047ffa0 | DAT_01cae124
    PUSH EBX                            ; 0047ffa6
    LEA EAX,[ESP + 0x560]               ; 0047ffa7
    PUSH EAX                            ; 0047ffae
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047ffaf
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 0047ffb4
    TEST EAX,EAX                        ; 0047ffb7
    JZ 0x0047fca0                       ; 0047ffb9
        ;   XREF to: 0047fca0 (CONDITIONAL_JUMP)  ; LAB_0047fca0
    CMP EAX,dword ptr [0x0059cf1c]      ; 0047ffbf | DAT_0059cf1c
    JNZ 0x0048000e                      ; 0047ffc5
        ;   XREF to: 0048000e (CONDITIONAL_JUMP)  ; LAB_0048000e
    XOR ECX,ECX                         ; 0047ffc7
    MOV dword ptr [ESP + 0x9b4],ECX     ; 0047ffc9
    MOV EAX,dword ptr [ESP + 0xa70]     ; 0047ffd0
    ADD dword ptr [ESI],EAX             ; 0047ffd7
    JMP 0x0047e57d                      ; 0047ffd9
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x58092b                    ; 0047ffde | = "Error parsing isWearingGasMask parame..."
        ;   Label: LAB_0047ffde
    MOV EDI,0x1c08b60                   ; 0047ffe3
    PUSH EDI                            ; 0047ffe8 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047ffe9 | = "Error parsing isWearingGasMask parame..." | s_ror_parsing_isWearingGasMask_par_0058092b+2
        ;   Label: LAB_0047ffe9
    MOV byte ptr [EDI],AL               ; 0047ffeb | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047ffed
    JZ 0x00480001                       ; 0047ffef
        ;   XREF to: 00480001 (CONDITIONAL_JUMP)  ; LAB_00480001
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fff1 | s_rror_parsing_isWearingGasMask_pa_0058092b+1 | s_or_parsing_isWearingGasMask_para_0058092b+3
    ADD ESI,0x2                         ; 0047fff4
    MOV byte ptr [EDI + 0x1],AL         ; 0047fff7 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047fffa
    CMP AL,0x0                          ; 0047fffd
    JNZ 0x0047ffe9                      ; 0047ffff
        ;   XREF to: 0047ffe9 (CONDITIONAL_JUMP)  ; LAB_0047ffe9
    POP EDI                             ; 00480001
        ;   Label: LAB_00480001
    MOV EAX,0xffffffff                  ; 00480002
    MOV ESP,EBP                         ; 00480007
    POP EBP                             ; 00480009
    POP EDI                             ; 0048000a
    POP ESI                             ; 0048000b
    POP EBX                             ; 0048000c
    RET                                 ; 0048000d
    CMP dword ptr [EAX + 0x1fa00],0x2   ; 0048000e
        ;   Label: LAB_0048000e
    SETZ AL                             ; 00480015
    AND EAX,0xff                        ; 00480018
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0048001d
    MOV EAX,dword ptr [ESP + 0xa70]     ; 00480024
    ADD dword ptr [ESI],EAX             ; 0048002b
    JMP 0x0047e57d                      ; 0048002d
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    PUSH 0x580956                       ; 00480032 | = "randBool"
        ;   Label: LAB_00480032
    LEA EAX,[ESP + 0x944]               ; 00480037
    PUSH EAX                            ; 0048003e
    CALL crt_string.c__stricmp_FUN_00564520 ; 0048003f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00480044
    TEST EAX,EAX                        ; 00480047
    JNZ 0x004800e2                      ; 00480049
        ;   XREF to: 004800e2 (CONDITIONAL_JUMP)  ; LAB_004800e2
    LEA EAX,[ESP + 0xa74]               ; 0048004f
    MOV EDI,0xffffffff                  ; 00480056
    PUSH EAX                            ; 0048005b
    LEA EAX,[ESP + 0x9c0]               ; 0048005c
    MOV dword ptr [ESP + 0xa78],EDI     ; 00480063
    PUSH EAX                            ; 0048006a
    MOV EDX,dword ptr [ESI]             ; 0048006b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048006d
    PUSH 0x58095f                       ; 00480070 | = " ( %f )%n"
    ADD EAX,EDX                         ; 00480075
    PUSH EAX                            ; 00480077
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00480078
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0048007d
    CMP dword ptr [ESP + 0xa74],0x3     ; 00480080
    JL 0x004800b2                       ; 00480088
        ;   XREF to: 004800b2 (CONDITIONAL_JUMP)  ; LAB_004800b2
    PUSH dword ptr [ESP + 0x9bc]        ; 0048008a
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00480091
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00480096
    MOV EBX,dword ptr [ESI]             ; 00480099
    MOV dword ptr [ESP + 0x9b4],EAX     ; 0048009b
    MOV EAX,dword ptr [ESP + 0xa74]     ; 004800a2
    ADD EBX,EAX                         ; 004800a9
    MOV dword ptr [ESI],EBX             ; 004800ab
    JMP 0x0047e57d                      ; 004800ad
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x580969                    ; 004800b2 | = "Error parsing randBool parameters."
        ;   Label: LAB_004800b2
    MOV EDI,0x1c08b60                   ; 004800b7
    PUSH EDI                            ; 004800bc | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 004800bd | = "Error parsing randBool parameters." | s_ror_parsing_randBool_parameters._00580969+2
        ;   Label: LAB_004800bd
    MOV byte ptr [EDI],AL               ; 004800bf | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 004800c1
    JZ 0x004800d5                       ; 004800c3
        ;   XREF to: 004800d5 (CONDITIONAL_JUMP)  ; LAB_004800d5
    MOV AL,byte ptr [ESI + 0x1]         ; 004800c5 | s_rror_parsing_randBool_parameters_00580969+1 | s_or_parsing_randBool_parameters._00580969+3
    ADD ESI,0x2                         ; 004800c8
    MOV byte ptr [EDI + 0x1],AL         ; 004800cb | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 004800ce
    CMP AL,0x0                          ; 004800d1
    JNZ 0x004800bd                      ; 004800d3
        ;   XREF to: 004800bd (CONDITIONAL_JUMP)  ; LAB_004800bd
    POP EDI                             ; 004800d5
        ;   Label: LAB_004800d5
    MOV EAX,0xffffffff                  ; 004800d6
    MOV ESP,EBP                         ; 004800db
    POP EBP                             ; 004800dd
    POP EDI                             ; 004800de
    POP ESI                             ; 004800df
    POP EBX                             ; 004800e0
    RET                                 ; 004800e1
    PUSH 0x58098c                       ; 004800e2 | = "reachedDest"
        ;   Label: LAB_004800e2
    LEA EAX,[ESP + 0x944]               ; 004800e7
    PUSH EAX                            ; 004800ee
    CALL crt_string.c__stricmp_FUN_00564520 ; 004800ef
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004800f4
    TEST EAX,EAX                        ; 004800f7
    JNZ 0x004801d8                      ; 004800f9
        ;   XREF to: 004801d8 (CONDITIONAL_JUMP)  ; LAB_004801d8
    LEA EAX,[ESP + 0xa78]               ; 004800ff
    MOV EDX,0xffffffff                  ; 00480106
    PUSH EAX                            ; 0048010b
    LEA EAX,[ESP + 0x430]               ; 0048010c
    MOV dword ptr [ESP + 0xa7c],EDX     ; 00480113
    PUSH EAX                            ; 0048011a
    MOV ECX,dword ptr [ESI]             ; 0048011b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048011d
    PUSH 0x580998                       ; 00480120 | = " ( %[^ )] )%n"
    ADD EAX,ECX                         ; 00480125
    PUSH EAX                            ; 00480127
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00480128
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0x10                        ; 0048012d
    CMP dword ptr [ESP + 0xa78],0x3     ; 00480130
    JL 0x00480179                       ; 00480138
        ;   XREF to: 00480179 (CONDITIONAL_JUMP)  ; LAB_00480179
    PUSH 0x765a60                       ; 0048013a | DAT_00765a60
    MOV EDI,dword ptr [0x00765a98]      ; 0048013f | DAT_00765a98
    PUSH EDI                            ; 00480145
    LEA EAX,[ESP + 0x434]               ; 00480146
    PUSH EAX                            ; 0048014d
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0048014e
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0047a390()
    ADD ESP,0xc                         ; 00480153
    TEST EAX,EAX                        ; 00480156
    JZ 0x0048019d                       ; 00480158
        ;   XREF to: 0048019d (CONDITIONAL_JUMP)  ; LAB_0048019d
    CMP EAX,dword ptr [0x0059cf1c]      ; 0048015a | DAT_0059cf1c
    JNZ 0x004801a9                      ; 00480160
        ;   XREF to: 004801a9 (CONDITIONAL_JUMP)  ; LAB_004801a9
    XOR ECX,ECX                         ; 00480162
    MOV dword ptr [ESP + 0x9b4],ECX     ; 00480164
    MOV EAX,dword ptr [ESP + 0xa78]     ; 0048016b
    ADD dword ptr [ESI],EAX             ; 00480172
    JMP 0x0047e57d                      ; 00480174
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x5809a6                    ; 00480179 | = "Error parsing reachedDest parameters."
        ;   Label: LAB_00480179
    MOV EDI,0x1c08b60                   ; 0048017e
    PUSH EDI                            ; 00480183 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 00480184 | = "Error parsing reachedDest parameters." | s_ror_parsing_reachedDest_paramete_005809a6+2
        ;   Label: LAB_00480184
    MOV byte ptr [EDI],AL               ; 00480186 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 00480188
    JZ 0x0048019c                       ; 0048018a
        ;   XREF to: 0048019c (CONDITIONAL_JUMP)  ; LAB_0048019c
    MOV AL,byte ptr [ESI + 0x1]         ; 0048018c | s_rror_parsing_reachedDest_paramet_005809a6+1 | s_or_parsing_reachedDest_parameter_005809a6+3
    ADD ESI,0x2                         ; 0048018f
    MOV byte ptr [EDI + 0x1],AL         ; 00480192 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 00480195
    CMP AL,0x0                          ; 00480198
    JNZ 0x00480184                      ; 0048019a
        ;   XREF to: 00480184 (CONDITIONAL_JUMP)  ; LAB_00480184
    POP EDI                             ; 0048019c
        ;   Label: LAB_0048019c
    MOV EAX,0xffffffff                  ; 0048019d
        ;   Label: LAB_0048019d
    MOV ESP,EBP                         ; 004801a2
    POP EBP                             ; 004801a4
    POP EDI                             ; 004801a5
    POP ESI                             ; 004801a6
    POP EBX                             ; 004801a7
    RET                                 ; 004801a8
    PUSH EAX                            ; 004801a9
        ;   Label: LAB_004801a9
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004801aa
    CALL dword ptr [EDX + 0x134]        ; 004801b0
    ADD ESP,0x4                         ; 004801b6
    TEST EAX,EAX                        ; 004801b9
    SETNZ AL                            ; 004801bb
    AND EAX,0xff                        ; 004801be
    MOV dword ptr [ESP + 0x9b4],EAX     ; 004801c3
    MOV EAX,dword ptr [ESP + 0xa78]     ; 004801ca
    ADD dword ptr [ESI],EAX             ; 004801d1
    JMP 0x0047e57d                      ; 004801d3
        ;   XREF to: 0047e57d (UNCONDITIONAL_JUMP)  ; LAB_0047e57d
    MOV ESI,0x5809cc                    ; 004801d8 | = "Invalid meta-function"
        ;   Label: LAB_004801d8
    MOV EDI,0x1c08b60                   ; 004801dd
    PUSH EDI                            ; 004801e2 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 004801e3 | = "Invalid meta-function" | s_valid_meta-function_005809cc+2
        ;   Label: LAB_004801e3
    MOV byte ptr [EDI],AL               ; 004801e5 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 004801e7
    JZ 0x004801fb                       ; 004801e9
        ;   XREF to: 004801fb (CONDITIONAL_JUMP)  ; LAB_004801fb
    MOV AL,byte ptr [ESI + 0x1]         ; 004801eb | s_nvalid_meta-function_005809cc+1 | s_alid_meta-function_005809cc+3
    ADD ESI,0x2                         ; 004801ee
    MOV byte ptr [EDI + 0x1],AL         ; 004801f1 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 004801f4
    CMP AL,0x0                          ; 004801f7
    JNZ 0x004801e3                      ; 004801f9
        ;   XREF to: 004801e3 (CONDITIONAL_JUMP)  ; LAB_004801e3
    POP EDI                             ; 004801fb
        ;   Label: LAB_004801fb
    MOV EAX,0xffffffff                  ; 004801fc
    MOV ESP,EBP                         ; 00480201
    POP EBP                             ; 00480203
    POP EDI                             ; 00480204
    POP ESI                             ; 00480205
    POP EBX                             ; 00480206
    RET                                 ; 00480207
    MOV EAX,dword ptr [ESP + 0x9b4]     ; 00480208
        ;   Label: LAB_00480208
    MOV ESP,EBP                         ; 0048020f
    POP EBP                             ; 00480211
    POP EDI                             ; 00480212
    POP ESI                             ; 00480213
    POP EBX                             ; 00480214
    RET                                 ; 00480215

