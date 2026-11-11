; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList *this_ptr,char *expression,int *parse_position)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; int *            Stack[0xc]:4   parse_position
; Local Variables:
; undefined8       Stack[-0x10c0]:8  local_10c0
; undefined4       Stack[-0x10b8]:4  local_10b8
; undefined        Stack[-0x10b4]:1  local_10b4
; undefined        Stack[-0xfb4]:1  local_fb4
; undefined        Stack[-0xeb4]:1  local_eb4
; undefined1       Stack[-0xeb3]:1  local_eb3
; undefined        Stack[-0xdb4]:1  local_db4
; undefined1       Stack[-0xdb3]:1  local_db3
; undefined        Stack[-0xcb4]:1  local_cb4
; undefined1       Stack[-0xbb5]:1  local_bb5
; undefined        Stack[-0xbb4]:1  local_bb4
; undefined        Stack[-0xbb3]:1  local_bb3
; undefined        Stack[-0xaec]:1  local_aec
; undefined        Stack[-0xaeb]:1  local_aeb
; undefined1       Stack[-0xa25]:1  local_a25
; undefined        Stack[-0xa24]:1  local_a24
; undefined        Stack[-0xa23]:1  local_a23
; undefined        Stack[-0x9c0]:1  local_9c0
; undefined        Stack[-0x9bf]:1  local_9bf
; undefined        Stack[-0x95c]:1  local_95c
; undefined1       Stack[-0x8f9]:1  local_8f9
; undefined        Stack[-0x8f8]:1  local_8f8
; undefined        Stack[-0x8f7]:1  local_8f7
; undefined1       Stack[-0x895]:1  local_895
; undefined        Stack[-0x894]:1  local_894
; undefined        Stack[-0x893]:1  local_893
; undefined        Stack[-0x830]:1  local_830
; undefined        Stack[-0x7cc]:1  local_7cc
; undefined        Stack[-0x768]:1  local_768
; undefined        Stack[-0x704]:1  local_704
; undefined        Stack[-0x703]:1  local_703
; undefined        Stack[-0x6a0]:1  local_6a0
; undefined        Stack[-0x69f]:1  local_69f
; undefined        Stack[-0x63c]:1  local_63c
; undefined        Stack[-0x63b]:1  local_63b
; undefined1       Stack[-0x5d9]:1  local_5d9
; undefined        Stack[-0x5d8]:1  local_5d8
; undefined        Stack[-0x5d7]:1  local_5d7
; undefined        Stack[-0x574]:1  local_574
; undefined        Stack[-0x510]:1  local_510
; undefined        Stack[-0x4ac]:1  local_4ac
; undefined        Stack[-0x448]:1  local_448
; undefined        Stack[-0x3e4]:1  local_3e4
; undefined        Stack[-0x380]:1  local_380
; undefined        Stack[-0x37f]:1  local_37f
; undefined1       Stack[-0x31d]:1  local_31d
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x31b]:1  local_31b
; undefined        Stack[-0x2b8]:1  local_2b8
; undefined        Stack[-0x2b7]:1  local_2b7
; undefined        Stack[-0x254]:1  local_254
; undefined        Stack[-0x253]:1  local_253
; undefined        Stack[-0x1f0]:1  local_1f0
; undefined        Stack[-0x1ef]:1  local_1ef
; undefined        Stack[-0x18c]:1  local_18c
; undefined1       Stack[-0x18b]:1  local_18b
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
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
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0 at 004a97c3
;
; Referenced Globals:
;   void* switchdataD_004a70ac = 004a756b
;   undefined4 DAT_005dcbc4
;   undefined4 DAT_005dcbc6
;   undefined4 DAT_005dcbc9
;   undefined4 DAT_005dcbcc
;   undefined4 DAT_005dcbcf
;   undefined4 DAT_005dcbd1
;   undefined4 DAT_005dcbd4
;   TerminatedCString s_Unexpected_end_of_string_005de1e3
;   undefined4 s_nexpected_end_of_string_005de1e3+1
;   undefined4 s_expected_end_of_string_005de1e3+2
;   undefined4 s_xpected_end_of_string_005de1e3+3
;   TerminatedCString s_Matching_is_missing_005de1fc
;   undefined4 s_Matching_is_missing_005de1fc+1
;   undefined4 s_Matching_is_missing_005de1fc+2
;   ... and 249 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0
;   core_event.cpp_CEventList_getCounterValue_FUN_004a9e80
;   core_event.cpp_CEventList_getSfxHandle_FUN_004aa290
;   core_event.cpp_CEventList_resolveVariable_FUN_004a6ba0
;   core_event.cpp_formatEventError_FUN_004a1210
;   core_event.cpp_isValidIdentifierChar_FUN_004aa5e0
;   core_event.cpp_parseVectorLocation_FUN_004a14a0
;   core_event.cpp_resolveActorByName_FUN_004a1370
;   core_game.cpp_CGame_fadeIn_FUN_004d62e0
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240
;   core_inv.cpp_FUN_004f8c40
;   core_inv.cpp_FUN_004f8ce0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a70d0
        ;   Label: core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0
    PUSH ESI                            ; 004a70d1
    PUSH EDI                            ; 004a70d2
    PUSH EBP                            ; 004a70d3
    MOV EBP,ESP                         ; 004a70d4
    SUB ESP,0x10ac                      ; 004a70d6
    AND ESP,0xfffffff8                  ; 004a70dc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a70df
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a70e2
    MOV EAX,EBX                         ; 004a70e5
    MOV EDX,dword ptr [EAX]             ; 004a70e7
        ;   Label: LAB_004a70e7
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 004a70e9
    INC DL                              ; 004a70ec
    AND EDX,0xff                        ; 004a70ee
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a70f4 | DAT_00626114
    JNZ 0x004a7152                      ; 004a70fb
        ;   XREF to: 004a7152 (CONDITIONAL_JUMP)  ; LAB_004a7152
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a70fd
    MOV EDX,dword ptr [EBX]             ; 004a7100
    ADD EAX,EDX                         ; 004a7102
    CMP byte ptr [EAX],0x2e             ; 004a7104
    JNZ 0x004a710e                      ; 004a7107
        ;   XREF to: 004a710e (CONDITIONAL_JUMP)  ; LAB_004a710e
    LEA ECX,[EDX + 0x1]                 ; 004a7109
    MOV dword ptr [EBX],ECX             ; 004a710c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a710e
        ;   Label: LAB_004a710e
    MOV ESI,dword ptr [EBX]             ; 004a7111
    ADD EAX,ESI                         ; 004a7113
    MOV DL,byte ptr [EAX]               ; 004a7115
    TEST DL,DL                          ; 004a7117
    JZ 0x004a7156                       ; 004a7119
        ;   XREF to: 004a7156 (CONDITIONAL_JUMP)  ; LAB_004a7156
    CMP DL,0x28                         ; 004a711b
    JZ 0x004a7181                       ; 004a711e
        ;   XREF to: 004a7181 (CONDITIONAL_JUMP)  ; LAB_004a7181
    CMP DL,0x21                         ; 004a7120
    JNZ 0x004a7206                      ; 004a7123
        ;   XREF to: 004a7206 (CONDITIONAL_JUMP)  ; LAB_004a7206
    PUSH EBX                            ; 004a7129
    MOV EDI,dword ptr [EBP + 0x18]      ; 004a712a
    PUSH EDI                            ; 004a712d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a712e
    LEA EDX,[ESI + 0x1]                 ; 004a7131
    PUSH EAX                            ; 004a7134
    MOV dword ptr [EBX],EDX             ; 004a7135
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 ; 004a7137
        ;   XREF to: 004a70d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004a713c
    TEST EAX,EAX                        ; 004a713f
    JL 0x004a714b                       ; 004a7141
        ;   XREF to: 004a714b (CONDITIONAL_JUMP)  ; LAB_004a714b
    SETZ AL                             ; 004a7143
    AND EAX,0xff                        ; 004a7146
    MOV ESP,EBP                         ; 004a714b
        ;   Label: LAB_004a714b
    POP EBP                             ; 004a714d
        ;   Label: LAB_004a714d
    POP EDI                             ; 004a714e
    POP ESI                             ; 004a714f
    POP EBX                             ; 004a7150
    RET                                 ; 004a7151
    INC dword ptr [EAX]                 ; 004a7152
        ;   Label: LAB_004a7152
    JMP 0x004a70e7                      ; 004a7154
        ;   XREF to: 004a70e7 (UNCONDITIONAL_JUMP)  ; LAB_004a70e7
    MOV ESI,0x5de1e3                    ; 004a7156 | = "Unexpected end of string"
        ;   Label: LAB_004a7156
    MOV EDI,0x1c56ed0                   ; 004a715b
    PUSH EDI                            ; 004a7160 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7161 | = "Unexpected end of string" | s_expected_end_of_string_005de1e3+2
        ;   Label: LAB_004a7161
    MOV byte ptr [EDI],AL               ; 004a7163 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7165
    JZ 0x004a7179                       ; 004a7167
        ;   XREF to: 004a7179 (CONDITIONAL_JUMP)  ; LAB_004a7179
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7169 | s_nexpected_end_of_string_005de1e3+1 | s_xpected_end_of_string_005de1e3+3
    ADD ESI,0x2                         ; 004a716c
    MOV byte ptr [EDI + 0x1],AL         ; 004a716f | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7172
    CMP AL,0x0                          ; 004a7175
    JNZ 0x004a7161                      ; 004a7177
        ;   XREF to: 004a7161 (CONDITIONAL_JUMP)  ; LAB_004a7161
    POP EDI                             ; 004a7179
        ;   Label: LAB_004a7179
    MOV EAX,0xffffffff                  ; 004a717a
    JMP 0x004a714b                      ; 004a717f
        ;   XREF to: 004a714b (UNCONDITIONAL_JUMP)  ; LAB_004a714b
    PUSH EBX                            ; 004a7181
        ;   Label: LAB_004a7181
    MOV ECX,dword ptr [EBP + 0x18]      ; 004a7182
    MOV EDI,dword ptr [EBX]             ; 004a7185
    PUSH ECX                            ; 004a7187
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a7188
    INC EDI                             ; 004a718b
    PUSH ESI                            ; 004a718c
    MOV dword ptr [EBX],EDI             ; 004a718d
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0 ; 004a718f
        ;   XREF to: 004a97b0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004a7194
    MOV ESI,EAX                         ; 004a7197
    TEST EAX,EAX                        ; 004a7199
    JL 0x004a714b                       ; 004a719b
        ;   XREF to: 004a714b (CONDITIONAL_JUMP)  ; LAB_004a714b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a719d
    MOV EDX,dword ptr [EBX]             ; 004a71a0
    ADD EAX,EDX                         ; 004a71a2
    CMP byte ptr [EAX],0x29             ; 004a71a4
    JNZ 0x004a71cd                      ; 004a71a7
        ;   XREF to: 004a71cd (CONDITIONAL_JUMP)  ; LAB_004a71cd
    MOV EDI,dword ptr [EBP + 0x18]      ; 004a71a9
    LEA ECX,[EDX + 0x1]                 ; 004a71ac
    MOV EAX,EBX                         ; 004a71af
    MOV dword ptr [EBX],ECX             ; 004a71b1
    MOV EDX,dword ptr [EAX]             ; 004a71b3
        ;   Label: LAB_004a71b3
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 004a71b5
    INC DL                              ; 004a71b8
    AND EDX,0xff                        ; 004a71ba
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a71c0 | DAT_00626114
    JZ 0x004a71fd                       ; 004a71c7
        ;   XREF to: 004a71fd (CONDITIONAL_JUMP)  ; LAB_004a71fd
    INC dword ptr [EAX]                 ; 004a71c9
    JMP 0x004a71b3                      ; 004a71cb
        ;   XREF to: 004a71b3 (UNCONDITIONAL_JUMP)  ; LAB_004a71b3
    MOV ESI,0x5de1fc                    ; 004a71cd | = "Matching ')' is missing"
        ;   Label: LAB_004a71cd
    MOV EDI,0x1c56ed0                   ; 004a71d2
    PUSH EDI                            ; 004a71d7 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a71d8 | = "Matching ')' is missing" | s_Matching_is_missing_005de1fc+2
        ;   Label: LAB_004a71d8
    MOV byte ptr [EDI],AL               ; 004a71da | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a71dc
    JZ 0x004a71f0                       ; 004a71de
        ;   XREF to: 004a71f0 (CONDITIONAL_JUMP)  ; LAB_004a71f0
    MOV AL,byte ptr [ESI + 0x1]         ; 004a71e0 | s_Matching_is_missing_005de1fc+1 | s_Matching_is_missing_005de1fc+3
    ADD ESI,0x2                         ; 004a71e3
    MOV byte ptr [EDI + 0x1],AL         ; 004a71e6 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a71e9
    CMP AL,0x0                          ; 004a71ec
    JNZ 0x004a71d8                      ; 004a71ee
        ;   XREF to: 004a71d8 (CONDITIONAL_JUMP)  ; LAB_004a71d8
    POP EDI                             ; 004a71f0
        ;   Label: LAB_004a71f0
    MOV EAX,0xffffffff                  ; 004a71f1
    MOV ESP,EBP                         ; 004a71f6
    POP EBP                             ; 004a71f8
    POP EDI                             ; 004a71f9
    POP ESI                             ; 004a71fa
    POP EBX                             ; 004a71fb
    RET                                 ; 004a71fc
    MOV EAX,ESI                         ; 004a71fd
        ;   Label: LAB_004a71fd
    MOV ESP,EBP                         ; 004a71ff
    POP EBP                             ; 004a7201
    POP EDI                             ; 004a7202
    POP ESI                             ; 004a7203
    POP EBX                             ; 004a7204
    RET                                 ; 004a7205
    MOV AL,DL                           ; 004a7206
        ;   Label: LAB_004a7206
    AND EAX,0xff                        ; 004a7208
    PUSH EAX                            ; 004a720d
    CALL core_event.cpp_isValidIdentifierChar_FUN_004aa5e0 ; 004a720e
        ;   XREF to: 004aa5e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_004aa5e0(int ch)
    ADD ESP,0x4                         ; 004a7213
    TEST EAX,EAX                        ; 004a7216
    JZ 0x004a7275                       ; 004a7218
        ;   XREF to: 004a7275 (CONDITIONAL_JUMP)  ; LAB_004a7275
    LEA ESI,[ESP + 0xf34]               ; 004a721a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7221
        ;   Label: LAB_004a7221
    ADD EAX,dword ptr [EBX]             ; 004a7224
    MOV AL,byte ptr [EAX]               ; 004a7226
    MOV byte ptr [ESI],AL               ; 004a7228
    MOV ECX,dword ptr [EBX]             ; 004a722a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a722c
    INC ECX                             ; 004a722f
    ADD EAX,ECX                         ; 004a7230
    MOV dword ptr [EBX],ECX             ; 004a7232
    INC ESI                             ; 004a7234
    MOV AL,byte ptr [EAX]               ; 004a7235
    AND EAX,0xff                        ; 004a7237
    PUSH EAX                            ; 004a723c
    CALL core_event.cpp_isValidIdentifierChar_FUN_004aa5e0 ; 004a723d
        ;   XREF to: 004aa5e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_004aa5e0(int ch)
    ADD ESP,0x4                         ; 004a7242
    TEST EAX,EAX                        ; 004a7245
    JNZ 0x004a7221                      ; 004a7247
        ;   XREF to: 004a7221 (CONDITIONAL_JUMP)  ; LAB_004a7221
    MOV byte ptr [ESI],0x0              ; 004a7249
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a724c
    ADD EAX,dword ptr [EBX]             ; 004a724f
    CMP byte ptr [EAX],0x28             ; 004a7251
    JZ 0x004a72c0                       ; 004a7254
        ;   XREF to: 004a72c0 (CONDITIONAL_JUMP)  ; LAB_004a72c0
    MOV EDI,dword ptr [EBP + 0x18]      ; 004a7256
    MOV EAX,EBX                         ; 004a7259
    MOV EDX,dword ptr [EAX]             ; 004a725b
        ;   Label: LAB_004a725b
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 004a725d
    INC DL                              ; 004a7260
    AND EDX,0xff                        ; 004a7262
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a7268 | DAT_00626114
    JZ 0x004a72a5                       ; 004a726f
        ;   XREF to: 004a72a5 (CONDITIONAL_JUMP)  ; LAB_004a72a5
    INC dword ptr [EAX]                 ; 004a7271
    JMP 0x004a725b                      ; 004a7273
        ;   XREF to: 004a725b (UNCONDITIONAL_JUMP)  ; LAB_004a725b
    MOV ESI,0x5de214                    ; 004a7275 | = "Syntax error"
        ;   Label: LAB_004a7275
    MOV EDI,0x1c56ed0                   ; 004a727a
    PUSH EDI                            ; 004a727f | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7280 | = "Syntax error" | s_ntax_error_005de214+2
        ;   Label: LAB_004a7280
    MOV byte ptr [EDI],AL               ; 004a7282 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7284
    JZ 0x004a7298                       ; 004a7286
        ;   XREF to: 004a7298 (CONDITIONAL_JUMP)  ; LAB_004a7298
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7288 | s_yntax_error_005de214+1 | s_tax_error_005de214+3
    ADD ESI,0x2                         ; 004a728b
    MOV byte ptr [EDI + 0x1],AL         ; 004a728e | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7291
    CMP AL,0x0                          ; 004a7294
    JNZ 0x004a7280                      ; 004a7296
        ;   XREF to: 004a7280 (CONDITIONAL_JUMP)  ; LAB_004a7280
    POP EDI                             ; 004a7298
        ;   Label: LAB_004a7298
    MOV EAX,0xffffffff                  ; 004a7299
    MOV ESP,EBP                         ; 004a729e
    POP EBP                             ; 004a72a0
    POP EDI                             ; 004a72a1
    POP ESI                             ; 004a72a2
    POP EBX                             ; 004a72a3
    RET                                 ; 004a72a4
    LEA EAX,[ESP + 0xf34]               ; 004a72a5
        ;   Label: LAB_004a72a5
    PUSH EAX                            ; 004a72ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a72ad
    PUSH EBX                            ; 004a72b0
    CALL core_event.cpp_CEventList_resolveVariable_FUN_004a6ba0 ; 004a72b1
        ;   XREF to: 004a6ba0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_resolveVariable_FUN_004a6ba0(CEventList * this_ptr, char * identifier)
    ADD ESP,0x8                         ; 004a72b6
    MOV ESP,EBP                         ; 004a72b9
    POP EBP                             ; 004a72bb
    POP EDI                             ; 004a72bc
    POP ESI                             ; 004a72bd
    POP EBX                             ; 004a72be
    RET                                 ; 004a72bf
    PUSH 0x5de221                       ; 004a72c0 | DAT_005de221
        ;   Label: LAB_004a72c0
    LEA EAX,[ESP + 0xf38]               ; 004a72c5
    MOV ECX,0xffffffff                  ; 004a72cc
    PUSH EAX                            ; 004a72d1
    MOV dword ptr [ESP + 0xfc4],ECX     ; 004a72d2
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a72d9
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a72de
    TEST EAX,EAX                        ; 004a72e1
    JNZ 0x004a771f                      ; 004a72e3
        ;   XREF to: 004a771f (CONDITIONAL_JUMP)  ; LAB_004a771f
    LEA EAX,[ESP + 0xfc0]               ; 004a72e9
    PUSH EAX                            ; 004a72f0
    LEA EAX,[ESP + 0xaec]               ; 004a72f1
    PUSH EAX                            ; 004a72f8
    LEA EAX,[ESP + 0x7d0]               ; 004a72f9
    MOV ESI,0xffffffff                  ; 004a7300
    PUSH EAX                            ; 004a7305
    LEA EAX,[ESP + 0xedc]               ; 004a7306
    MOV dword ptr [ESP + 0xfcc],ESI     ; 004a730d
    PUSH EAX                            ; 004a7314
    MOV EAX,0x5de225                    ; 004a7315 | = " ( %s %s %[^ )] )%n"
    MOV EDI,dword ptr [EBX]             ; 004a731a
    PUSH EAX                            ; 004a731c | = " ( %s %s %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a731d
    ADD EAX,EDI                         ; 004a7320
    PUSH EAX                            ; 004a7322
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7323
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 004a7328
    CMP dword ptr [ESP + 0xfc0],0x3     ; 004a732b
    JL 0x004a739c                       ; 004a7333
        ;   XREF to: 004a739c (CONDITIONAL_JUMP)  ; LAB_004a739c
    LEA ESI,[ESP + 0xed0]               ; 004a7335
    MOV EDI,ESI                         ; 004a733c
    SUB ECX,ECX                         ; 004a733e
    DEC ECX                             ; 004a7340
    XOR EAX,EAX                         ; 004a7341
    SCASB.REPNE ES:EDI                  ; 004a7343
    NOT ECX                             ; 004a7345
    DEC ECX                             ; 004a7347
    MOV EDI,ECX                         ; 004a7348
    TEST ECX,ECX                        ; 004a734a
    JLE 0x004a7365                      ; 004a734c
        ;   XREF to: 004a7365 (CONDITIONAL_JUMP)  ; LAB_004a7365
    LEA EAX,[ECX + ESI*0x1]             ; 004a734e
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7351
        ;   Label: LAB_004a7351
    INC DL                              ; 004a7354
    AND EDX,0xff                        ; 004a7356
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a735c | DAT_00626114
    JNZ 0x004a73cc                      ; 004a7363
        ;   XREF to: 004a73cc (CONDITIONAL_JUMP)  ; LAB_004a73cc
    LEA EAX,[ESI + EDI*0x1]             ; 004a7365
        ;   Label: LAB_004a7365
    MOV byte ptr [EAX],0x0              ; 004a7368
    LEA EAX,[ESI + 0x1]                 ; 004a736b
    MOV dword ptr [ESP + 0xfc8],EAX     ; 004a736e
    MOV AL,byte ptr [ESI]               ; 004a7375
        ;   Label: LAB_004a7375
    INC AL                              ; 004a7377
    AND EAX,0xff                        ; 004a7379
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a737e | DAT_00626114
    JZ 0x004a73d8                       ; 004a7385
        ;   XREF to: 004a73d8 (CONDITIONAL_JUMP)  ; LAB_004a73d8
    PUSH EDI                            ; 004a7387
    MOV EAX,dword ptr [ESP + 0xfcc]     ; 004a7388
    PUSH EAX                            ; 004a738f
    PUSH ESI                            ; 004a7390
    DEC EDI                             ; 004a7391
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a7392
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a7397
    JMP 0x004a7375                      ; 004a739a
        ;   XREF to: 004a7375 (UNCONDITIONAL_JUMP)  ; LAB_004a7375
    MOV ESI,0x5de239                    ; 004a739c | = "Error parsing cmp parameters."
        ;   Label: LAB_004a739c
    MOV EDI,0x1c56ed0                   ; 004a73a1
    PUSH EDI                            ; 004a73a6 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a73a7 | = "Error parsing cmp parameters." | s_Error_parsing_cmp_parame_005de239+2
        ;   Label: LAB_004a73a7
    MOV byte ptr [EDI],AL               ; 004a73a9 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a73ab
    JZ 0x004a73bf                       ; 004a73ad
        ;   XREF to: 004a73bf (CONDITIONAL_JUMP)  ; LAB_004a73bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004a73af | s_Error_parsing_cmp_parame_005de239+1 | s_Error_parsing_cmp_parame_005de239+3
    ADD ESI,0x2                         ; 004a73b2
    MOV byte ptr [EDI + 0x1],AL         ; 004a73b5 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a73b8
    CMP AL,0x0                          ; 004a73bb
    JNZ 0x004a73a7                      ; 004a73bd
        ;   XREF to: 004a73a7 (CONDITIONAL_JUMP)  ; LAB_004a73a7
    POP EDI                             ; 004a73bf
        ;   Label: LAB_004a73bf
    MOV EAX,0xffffffff                  ; 004a73c0
    MOV ESP,EBP                         ; 004a73c5
    POP EBP                             ; 004a73c7
    POP EDI                             ; 004a73c8
    POP ESI                             ; 004a73c9
    POP EBX                             ; 004a73ca
    RET                                 ; 004a73cb
    DEC EDI                             ; 004a73cc
        ;   Label: LAB_004a73cc
    DEC EAX                             ; 004a73cd
    TEST EDI,EDI                        ; 004a73ce
    JG 0x004a7351                       ; 004a73d0
        ;   XREF to: 004a7351 (CONDITIONAL_JUMP)  ; LAB_004a7351
    JMP 0x004a7365                      ; 004a73d6
        ;   XREF to: 004a7365 (UNCONDITIONAL_JUMP)  ; LAB_004a7365
    LEA EDI,[ESP + 0xae8]               ; 004a73d8
        ;   Label: LAB_004a73d8
    LEA ESI,[ESP + 0xae8]               ; 004a73df
    SUB ECX,ECX                         ; 004a73e6
    DEC ECX                             ; 004a73e8
    XOR EAX,EAX                         ; 004a73e9
    SCASB.REPNE ES:EDI                  ; 004a73eb
    NOT ECX                             ; 004a73ed
    DEC ECX                             ; 004a73ef
    MOV EDI,ECX                         ; 004a73f0
    TEST ECX,ECX                        ; 004a73f2
    JLE 0x004a7413                      ; 004a73f4
        ;   XREF to: 004a7413 (CONDITIONAL_JUMP)  ; LAB_004a7413
    LEA EAX,[ESP + 0xae8]               ; 004a73f6
    ADD EAX,ECX                         ; 004a73fd
    MOV DL,byte ptr [EAX + -0x1]        ; 004a73ff
        ;   Label: LAB_004a73ff
    INC DL                              ; 004a7402
    AND EDX,0xff                        ; 004a7404
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a740a | DAT_00626114
    JNZ 0x004a744a                      ; 004a7411
        ;   XREF to: 004a744a (CONDITIONAL_JUMP)  ; LAB_004a744a
    LEA EAX,[ESI + EDI*0x1]             ; 004a7413
        ;   Label: LAB_004a7413
    MOV byte ptr [EAX],0x0              ; 004a7416
    LEA EAX,[ESI + 0x1]                 ; 004a7419
    MOV dword ptr [ESP + 0xfcc],EAX     ; 004a741c
    MOV AL,byte ptr [ESI]               ; 004a7423
        ;   Label: LAB_004a7423
    INC AL                              ; 004a7425
    AND EAX,0xff                        ; 004a7427
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a742c | DAT_00626114
    JZ 0x004a7452                       ; 004a7433
        ;   XREF to: 004a7452 (CONDITIONAL_JUMP)  ; LAB_004a7452
    PUSH EDI                            ; 004a7435
    MOV EDX,dword ptr [ESP + 0xfd0]     ; 004a7436
    PUSH EDX                            ; 004a743d
    PUSH ESI                            ; 004a743e
    DEC EDI                             ; 004a743f
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a7440
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a7445
    JMP 0x004a7423                      ; 004a7448
        ;   XREF to: 004a7423 (UNCONDITIONAL_JUMP)  ; LAB_004a7423
    DEC EDI                             ; 004a744a
        ;   Label: LAB_004a744a
    DEC EAX                             ; 004a744b
    TEST EDI,EDI                        ; 004a744c
    JG 0x004a73ff                       ; 004a744e
        ;   XREF to: 004a73ff (CONDITIONAL_JUMP)  ; LAB_004a73ff
    JMP 0x004a7413                      ; 004a7450
        ;   XREF to: 004a7413 (UNCONDITIONAL_JUMP)  ; LAB_004a7413
    LEA EDI,[ESP + 0x7c8]               ; 004a7452
        ;   Label: LAB_004a7452
    LEA ESI,[ESP + 0x7c8]               ; 004a7459
    SUB ECX,ECX                         ; 004a7460
    DEC ECX                             ; 004a7462
    XOR EAX,EAX                         ; 004a7463
    SCASB.REPNE ES:EDI                  ; 004a7465
    NOT ECX                             ; 004a7467
    DEC ECX                             ; 004a7469
    MOV EDI,ECX                         ; 004a746a
    TEST ECX,ECX                        ; 004a746c
    JLE 0x004a748d                      ; 004a746e
        ;   XREF to: 004a748d (CONDITIONAL_JUMP)  ; LAB_004a748d
    LEA EAX,[ESP + 0x7c8]               ; 004a7470
    ADD EAX,ECX                         ; 004a7477
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7479
        ;   Label: LAB_004a7479
    INC DL                              ; 004a747c
    AND EDX,0xff                        ; 004a747e
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a7484 | DAT_00626114
    JNZ 0x004a74c4                      ; 004a748b
        ;   XREF to: 004a74c4 (CONDITIONAL_JUMP)  ; LAB_004a74c4
    LEA EAX,[ESI + EDI*0x1]             ; 004a748d
        ;   Label: LAB_004a748d
    MOV byte ptr [EAX],0x0              ; 004a7490
    LEA EAX,[ESI + 0x1]                 ; 004a7493
    MOV dword ptr [ESP + 0xfd4],EAX     ; 004a7496
    MOV AL,byte ptr [ESI]               ; 004a749d
        ;   Label: LAB_004a749d
    INC AL                              ; 004a749f
    AND EAX,0xff                        ; 004a74a1
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a74a6 | DAT_00626114
    JZ 0x004a74cc                       ; 004a74ad
        ;   XREF to: 004a74cc (CONDITIONAL_JUMP)  ; LAB_004a74cc
    PUSH EDI                            ; 004a74af
    MOV EAX,dword ptr [ESP + 0xfd8]     ; 004a74b0
    PUSH EAX                            ; 004a74b7
    PUSH ESI                            ; 004a74b8
    DEC EDI                             ; 004a74b9
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a74ba
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a74bf
    JMP 0x004a749d                      ; 004a74c2
        ;   XREF to: 004a749d (UNCONDITIONAL_JUMP)  ; LAB_004a749d
    DEC EDI                             ; 004a74c4
        ;   Label: LAB_004a74c4
    DEC EAX                             ; 004a74c5
    TEST EDI,EDI                        ; 004a74c6
    JG 0x004a7479                       ; 004a74c8
        ;   XREF to: 004a7479 (CONDITIONAL_JUMP)  ; LAB_004a7479
    JMP 0x004a748d                      ; 004a74ca
        ;   XREF to: 004a748d (UNCONDITIONAL_JUMP)  ; LAB_004a748d
    PUSH 0x5dcbc4                       ; 004a74cc | DAT_005dcbc4
        ;   Label: LAB_004a74cc
    LEA EAX,[ESP + 0x7cc]               ; 004a74d1
    PUSH EAX                            ; 004a74d8
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a74d9
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a74de
    TEST EAX,EAX                        ; 004a74e1
    JNZ 0x004a759c                      ; 004a74e3
        ;   XREF to: 004a759c (CONDITIONAL_JUMP)  ; LAB_004a759c
    MOV EDI,EAX                         ; 004a74e9
        ;   Label: LAB_004a74e9
    CMP EAX,0x6                         ; 004a74eb
    JZ 0x004a7655                       ; 004a74ee
        ;   XREF to: 004a7655 (CONDITIONAL_JUMP)  ; LAB_004a7655
    MOV EAX,dword ptr [ESP + 0xfc0]     ; 004a74f4
    MOV ECX,dword ptr [EBX]             ; 004a74fb
    ADD ECX,EAX                         ; 004a74fd
    LEA EAX,[ESP + 0xfd8]               ; 004a74ff
    PUSH EAX                            ; 004a7506
    PUSH 0x5dcbd4                       ; 004a7507 | DAT_005dcbd4
    LEA EAX,[ESP + 0xed8]               ; 004a750c
    PUSH EAX                            ; 004a7513
    MOV dword ptr [EBX],ECX             ; 004a7514
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7516
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a751b
    CMP EAX,0x1                         ; 004a751e
    JNZ 0x004a7685                      ; 004a7521
        ;   XREF to: 004a7685 (CONDITIONAL_JUMP)  ; LAB_004a7685
    MOV ESI,dword ptr [ESP + 0xfd8]     ; 004a7527
    LEA EAX,[ESP + 0x102c]              ; 004a752e
        ;   Label: LAB_004a752e
    PUSH EAX                            ; 004a7535
    PUSH 0x5dcbd4                       ; 004a7536 | DAT_005dcbd4
    LEA EAX,[ESP + 0xaf0]               ; 004a753b
    PUSH EAX                            ; 004a7542
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7543
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a7548
    CMP EAX,0x1                         ; 004a754b
    JNZ 0x004a76a3                      ; 004a754e
        ;   XREF to: 004a76a3 (CONDITIONAL_JUMP)  ; LAB_004a76a3
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004a7554
    CMP EDI,0x5                         ; 004a755b
    JA 0x004a76f7                       ; 004a755e
        ;   XREF to: 004a76f7 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4a70ac]  ; 004a7564 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP ESI,EAX                         ; 004a756b
        ;   Label: caseD_0
    SETL AL                             ; 004a756d
    AND EAX,0xff                        ; 004a7570
        ;   Label: LAB_004a7570
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a7575
        ;   Label: LAB_004a7575
    MOV EDX,dword ptr [EBP + 0x18]      ; 004a757c
        ;   Label: LAB_004a757c
    MOV EAX,dword ptr [EBX]             ; 004a757f
        ;   Label: LAB_004a757f
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 004a7581
    INC AL                              ; 004a7584
    AND EAX,0xff                        ; 004a7586
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a758b | DAT_00626114
    JZ 0x004a97a1                       ; 004a7592
        ;   XREF to: 004a97a1 (CONDITIONAL_JUMP)  ; LAB_004a97a1
    INC dword ptr [EBX]                 ; 004a7598
    JMP 0x004a757f                      ; 004a759a
        ;   XREF to: 004a757f (UNCONDITIONAL_JUMP)  ; LAB_004a757f
    PUSH 0x5dcbc6                       ; 004a759c | DAT_005dcbc6
        ;   Label: LAB_004a759c
    LEA EAX,[ESP + 0x7cc]               ; 004a75a1
    PUSH EAX                            ; 004a75a8
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a75a9
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a75ae
    TEST EAX,EAX                        ; 004a75b1
    JNZ 0x004a75bf                      ; 004a75b3
        ;   XREF to: 004a75bf (CONDITIONAL_JUMP)  ; LAB_004a75bf
    MOV EAX,0x1                         ; 004a75b5
    JMP 0x004a74e9                      ; 004a75ba
        ;   XREF to: 004a74e9 (UNCONDITIONAL_JUMP)  ; LAB_004a74e9
    PUSH 0x5dcbc9                       ; 004a75bf | DAT_005dcbc9
        ;   Label: LAB_004a75bf
    LEA EAX,[ESP + 0x7cc]               ; 004a75c4
    PUSH EAX                            ; 004a75cb
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a75cc
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a75d1
    TEST EAX,EAX                        ; 004a75d4
    JNZ 0x004a75e2                      ; 004a75d6
        ;   XREF to: 004a75e2 (CONDITIONAL_JUMP)  ; LAB_004a75e2
    MOV EAX,0x2                         ; 004a75d8
    JMP 0x004a74e9                      ; 004a75dd
        ;   XREF to: 004a74e9 (UNCONDITIONAL_JUMP)  ; LAB_004a74e9
    PUSH 0x5dcbcc                       ; 004a75e2 | DAT_005dcbcc
        ;   Label: LAB_004a75e2
    LEA EAX,[ESP + 0x7cc]               ; 004a75e7
    PUSH EAX                            ; 004a75ee
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a75ef
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a75f4
    TEST EAX,EAX                        ; 004a75f7
    JNZ 0x004a7605                      ; 004a75f9
        ;   XREF to: 004a7605 (CONDITIONAL_JUMP)  ; LAB_004a7605
    MOV EAX,0x3                         ; 004a75fb
    JMP 0x004a74e9                      ; 004a7600
        ;   XREF to: 004a74e9 (UNCONDITIONAL_JUMP)  ; LAB_004a74e9
    PUSH 0x5dcbcf                       ; 004a7605 | DAT_005dcbcf
        ;   Label: LAB_004a7605
    LEA EAX,[ESP + 0x7cc]               ; 004a760a
    PUSH EAX                            ; 004a7611
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a7612
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7617
    TEST EAX,EAX                        ; 004a761a
    JNZ 0x004a7628                      ; 004a761c
        ;   XREF to: 004a7628 (CONDITIONAL_JUMP)  ; LAB_004a7628
    MOV EAX,0x5                         ; 004a761e
    JMP 0x004a74e9                      ; 004a7623
        ;   XREF to: 004a74e9 (UNCONDITIONAL_JUMP)  ; LAB_004a74e9
    PUSH 0x5dcbd1                       ; 004a7628 | DAT_005dcbd1
        ;   Label: LAB_004a7628
    LEA EAX,[ESP + 0x7cc]               ; 004a762d
    PUSH EAX                            ; 004a7634
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a7635
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a763a
    TEST EAX,EAX                        ; 004a763d
    JNZ 0x004a764b                      ; 004a763f
        ;   XREF to: 004a764b (CONDITIONAL_JUMP)  ; LAB_004a764b
    MOV EAX,0x4                         ; 004a7641
    JMP 0x004a74e9                      ; 004a7646
        ;   XREF to: 004a74e9 (UNCONDITIONAL_JUMP)  ; LAB_004a74e9
    MOV EAX,0x6                         ; 004a764b
        ;   Label: LAB_004a764b
    JMP 0x004a74e9                      ; 004a7650
        ;   XREF to: 004a74e9 (UNCONDITIONAL_JUMP)  ; LAB_004a74e9
    MOV ESI,0x5de257                    ; 004a7655 | = "Invalid relational operator in cmp st..."
        ;   Label: LAB_004a7655
    MOV EDI,0x1c56ed0                   ; 004a765a
    PUSH EDI                            ; 004a765f | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7660 | = "Invalid relational operator in cmp st..." | s_Invalid_relational_opera_005de257+2
        ;   Label: LAB_004a7660
    MOV byte ptr [EDI],AL               ; 004a7662 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7664
    JZ 0x004a7678                       ; 004a7666
        ;   XREF to: 004a7678 (CONDITIONAL_JUMP)  ; LAB_004a7678
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7668 | s_Invalid_relational_opera_005de257+1 | s_Invalid_relational_opera_005de257+3
    ADD ESI,0x2                         ; 004a766b
    MOV byte ptr [EDI + 0x1],AL         ; 004a766e | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7671
    CMP AL,0x0                          ; 004a7674
    JNZ 0x004a7660                      ; 004a7676
        ;   XREF to: 004a7660 (CONDITIONAL_JUMP)  ; LAB_004a7660
    POP EDI                             ; 004a7678
        ;   Label: LAB_004a7678
    MOV EAX,0xffffffff                  ; 004a7679
    MOV ESP,EBP                         ; 004a767e
    POP EBP                             ; 004a7680
    POP EDI                             ; 004a7681
    POP ESI                             ; 004a7682
    POP EBX                             ; 004a7683
    RET                                 ; 004a7684
    LEA EAX,[ESP + 0xed0]               ; 004a7685
        ;   Label: LAB_004a7685
    PUSH EAX                            ; 004a768c
    MOV ESI,dword ptr [0x0061b4d0]      ; 004a768d | DAT_0061b4d0
    PUSH ESI                            ; 004a7693
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004a9e80 ; 004a7694
        ;   XREF to: 004a9e80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 004a7699
    MOV ESI,EAX                         ; 004a769c
    JMP 0x004a752e                      ; 004a769e
        ;   XREF to: 004a752e (UNCONDITIONAL_JUMP)  ; LAB_004a752e
    LEA EAX,[ESP + 0xae8]               ; 004a76a3
        ;   Label: LAB_004a76a3
    PUSH EAX                            ; 004a76aa
    MOV EAX,[0x0061b4d0]                ; 004a76ab | DAT_0061b4d0
    PUSH EAX                            ; 004a76b0
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004a9e80 ; 004a76b1
        ;   XREF to: 004a9e80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 004a76b6
    CMP EDI,0x5                         ; 004a76b9
    JA 0x004a76f7                       ; 004a76bc
        ;   XREF to: 004a76f7 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4a70ac]  ; 004a76be | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP ESI,EAX                         ; 004a76c5
        ;   Label: caseD_1
    SETLE AL                            ; 004a76c7
    JMP 0x004a7570                      ; 004a76ca
        ;   XREF to: 004a7570 (UNCONDITIONAL_JUMP)  ; LAB_004a7570
    CMP ESI,EAX                         ; 004a76cf
        ;   Label: caseD_2
    SETZ AL                             ; 004a76d1
    JMP 0x004a7570                      ; 004a76d4
        ;   XREF to: 004a7570 (UNCONDITIONAL_JUMP)  ; LAB_004a7570
    CMP ESI,EAX                         ; 004a76d9
        ;   Label: caseD_3
    SETNZ AL                            ; 004a76db
    JMP 0x004a7570                      ; 004a76de
        ;   XREF to: 004a7570 (UNCONDITIONAL_JUMP)  ; LAB_004a7570
    CMP ESI,EAX                         ; 004a76e3
        ;   Label: caseD_5
    SETG AL                             ; 004a76e5
    JMP 0x004a7570                      ; 004a76e8
        ;   XREF to: 004a7570 (UNCONDITIONAL_JUMP)  ; LAB_004a7570
    CMP ESI,EAX                         ; 004a76ed
        ;   Label: caseD_4
    SETGE AL                            ; 004a76ef
    JMP 0x004a7570                      ; 004a76f2
        ;   XREF to: 004a7570 (UNCONDITIONAL_JUMP)  ; LAB_004a7570
    MOV EDX,0x5de284                    ; 004a76f7 | = "..\\core\\event.cpp"
        ;   Label: default
    MOV ECX,0xa27                       ; 004a76fc
    PUSH 0x5de296                       ; 004a7701 | = "Hell froze."
    MOV dword ptr [0x01d1d400],EDX      ; 004a7706 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004a770c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a7712
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004a7717
    JMP 0x004a757c                      ; 004a771a
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de2a2                       ; 004a771f | = "exists"
        ;   Label: LAB_004a771f
    LEA EAX,[ESP + 0xf38]               ; 004a7724
    PUSH EAX                            ; 004a772b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a772c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7731
    TEST EAX,EAX                        ; 004a7734
    JNZ 0x004a7865                      ; 004a7736
        ;   XREF to: 004a7865 (CONDITIONAL_JUMP)  ; LAB_004a7865
    LEA EAX,[ESP + 0xfdc]               ; 004a773c
    MOV EDI,0xffffffff                  ; 004a7743
    PUSH EAX                            ; 004a7748
    LEA EAX,[ESP + 0xe70]               ; 004a7749
    MOV dword ptr [ESP + 0xfe0],EDI     ; 004a7750
    PUSH EAX                            ; 004a7757
    MOV EAX,0x5de2a9                    ; 004a7758 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004a775d
    PUSH EAX                            ; 004a775f | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7760
    ADD EAX,EDX                         ; 004a7763
    PUSH EAX                            ; 004a7765
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7766
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a776b
    CMP dword ptr [ESP + 0xfdc],0x3     ; 004a776e
    JL 0x004a77df                       ; 004a7776
        ;   XREF to: 004a77df (CONDITIONAL_JUMP)  ; LAB_004a77df
    LEA ESI,[ESP + 0xe6c]               ; 004a7778
    MOV EDI,ESI                         ; 004a777f
    SUB ECX,ECX                         ; 004a7781
    DEC ECX                             ; 004a7783
    XOR EAX,EAX                         ; 004a7784
    SCASB.REPNE ES:EDI                  ; 004a7786
    NOT ECX                             ; 004a7788
    DEC ECX                             ; 004a778a
    MOV EDI,ECX                         ; 004a778b
    TEST ECX,ECX                        ; 004a778d
    JLE 0x004a77a8                      ; 004a778f
        ;   XREF to: 004a77a8 (CONDITIONAL_JUMP)  ; LAB_004a77a8
    LEA EAX,[ECX + ESI*0x1]             ; 004a7791
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7794
        ;   Label: LAB_004a7794
    INC DL                              ; 004a7797
    AND EDX,0xff                        ; 004a7799
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a779f | DAT_00626114
    JNZ 0x004a780f                      ; 004a77a6
        ;   XREF to: 004a780f (CONDITIONAL_JUMP)  ; LAB_004a780f
    LEA EAX,[ESI + EDI*0x1]             ; 004a77a8
        ;   Label: LAB_004a77a8
    MOV byte ptr [EAX],0x0              ; 004a77ab
    LEA EAX,[ESI + 0x1]                 ; 004a77ae
    MOV dword ptr [ESP + 0xfe0],EAX     ; 004a77b1
    MOV AL,byte ptr [ESI]               ; 004a77b8
        ;   Label: LAB_004a77b8
    INC AL                              ; 004a77ba
    AND EAX,0xff                        ; 004a77bc
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a77c1 | DAT_00626114
    JZ 0x004a781b                       ; 004a77c8
        ;   XREF to: 004a781b (CONDITIONAL_JUMP)  ; LAB_004a781b
    PUSH EDI                            ; 004a77ca
    MOV ECX,dword ptr [ESP + 0xfe4]     ; 004a77cb
    PUSH ECX                            ; 004a77d2
    PUSH ESI                            ; 004a77d3
    DEC EDI                             ; 004a77d4
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a77d5
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a77da
    JMP 0x004a77b8                      ; 004a77dd
        ;   XREF to: 004a77b8 (UNCONDITIONAL_JUMP)  ; LAB_004a77b8
    MOV ESI,0x5de2b7                    ; 004a77df | = "Error parsing exists parameters."
        ;   Label: LAB_004a77df
    MOV EDI,0x1c56ed0                   ; 004a77e4
    PUSH EDI                            ; 004a77e9 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a77ea | = "Error parsing exists parameters." | s_Error_parsing_exists_par_005de2b7+2
        ;   Label: LAB_004a77ea
    MOV byte ptr [EDI],AL               ; 004a77ec | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a77ee
    JZ 0x004a7802                       ; 004a77f0
        ;   XREF to: 004a7802 (CONDITIONAL_JUMP)  ; LAB_004a7802
    MOV AL,byte ptr [ESI + 0x1]         ; 004a77f2 | s_Error_parsing_exists_par_005de2b7+1 | s_Error_parsing_exists_par_005de2b7+3
    ADD ESI,0x2                         ; 004a77f5
    MOV byte ptr [EDI + 0x1],AL         ; 004a77f8 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a77fb
    CMP AL,0x0                          ; 004a77fe
    JNZ 0x004a77ea                      ; 004a7800
        ;   XREF to: 004a77ea (CONDITIONAL_JUMP)  ; LAB_004a77ea
    POP EDI                             ; 004a7802
        ;   Label: LAB_004a7802
    MOV EAX,0xffffffff                  ; 004a7803
    MOV ESP,EBP                         ; 004a7808
    POP EBP                             ; 004a780a
    POP EDI                             ; 004a780b
    POP ESI                             ; 004a780c
    POP EBX                             ; 004a780d
    RET                                 ; 004a780e
    DEC EDI                             ; 004a780f
        ;   Label: LAB_004a780f
    DEC EAX                             ; 004a7810
    TEST EDI,EDI                        ; 004a7811
    JG 0x004a7794                       ; 004a7813
        ;   XREF to: 004a7794 (CONDITIONAL_JUMP)  ; LAB_004a7794
    JMP 0x004a77a8                      ; 004a7819
        ;   XREF to: 004a77a8 (UNCONDITIONAL_JUMP)  ; LAB_004a77a8
    PUSH 0x7c2ff8                       ; 004a781b | g_CDemonActorClassInfo
        ;   Label: LAB_004a781b
    MOV ESI,dword ptr [0x007c3030]      ; 004a7820 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 004a7826
    LEA EAX,[ESP + 0xe74]               ; 004a7827
    PUSH EAX                            ; 004a782e
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a782f
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a7834
    TEST EAX,EAX                        ; 004a7837
    JZ 0x004a7861                       ; 004a7839
        ;   XREF to: 004a7861 (CONDITIONAL_JUMP)  ; LAB_004a7861
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a783b | DAT_005ffcb8
    JZ 0x004a7861                       ; 004a7841
        ;   XREF to: 004a7861 (CONDITIONAL_JUMP)  ; LAB_004a7861
    MOV EAX,0x1                         ; 004a7843
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a7848
        ;   Label: LAB_004a7848
    MOV EDX,dword ptr [EBX]             ; 004a784f
    MOV EAX,dword ptr [ESP + 0xfdc]     ; 004a7851
    ADD EDX,EAX                         ; 004a7858
    MOV dword ptr [EBX],EDX             ; 004a785a
    JMP 0x004a757c                      ; 004a785c
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    XOR EAX,EAX                         ; 004a7861
        ;   Label: LAB_004a7861
    JMP 0x004a7848                      ; 004a7863
        ;   XREF to: 004a7848 (UNCONDITIONAL_JUMP)  ; LAB_004a7848
    PUSH 0x5de2d8                       ; 004a7865 | = "fieldNotesDisplayed"
        ;   Label: LAB_004a7865
    LEA EAX,[ESP + 0xf38]               ; 004a786a
    PUSH EAX                            ; 004a7871
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a7872
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7877
    TEST EAX,EAX                        ; 004a787a
    JNZ 0x004a7901                      ; 004a787c
        ;   XREF to: 004a7901 (CONDITIONAL_JUMP)  ; LAB_004a7901
    MOV dword ptr [ESP + 0xfe4],0xffffffff ; 004a7882
    LEA EAX,[ESP + 0xfe4]               ; 004a788d
    PUSH EAX                            ; 004a7894
    MOV EAX,0x5de2ec                    ; 004a7895 | = " ( )%n"
    MOV EDX,dword ptr [EBX]             ; 004a789a
    PUSH EAX                            ; 004a789c | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a789d
    ADD EAX,EDX                         ; 004a78a0
    PUSH EAX                            ; 004a78a2
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a78a3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a78a8
    MOV ECX,dword ptr [ESP + 0xfe4]     ; 004a78ab
    CMP ECX,0x2                         ; 004a78b2
    JL 0x004a78d1                       ; 004a78b5
        ;   XREF to: 004a78d1 (CONDITIONAL_JUMP)  ; LAB_004a78d1
    MOV EAX,[0x0061d418]                ; 004a78b7 | g_CFieldNotesPtr
    MOV ESI,dword ptr [EBX]             ; 004a78bc
    MOV EAX,dword ptr [EAX + 0x40]      ; 004a78be | g_CFieldNotesInstance.is_displayed
    ADD ESI,ECX                         ; 004a78c1
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a78c3
    MOV dword ptr [EBX],ESI             ; 004a78ca
    JMP 0x004a757c                      ; 004a78cc
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de2f3                    ; 004a78d1 | = "Error parsing fieldNotesDisplayed con..."
        ;   Label: LAB_004a78d1
    MOV EDI,0x1c56ed0                   ; 004a78d6
    PUSH EDI                            ; 004a78db | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a78dc | = "Error parsing fieldNotesDisplayed con..." | s_Error_parsing_fieldNotes_005de2f3+2
        ;   Label: LAB_004a78dc
    MOV byte ptr [EDI],AL               ; 004a78de | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a78e0
    JZ 0x004a78f4                       ; 004a78e2
        ;   XREF to: 004a78f4 (CONDITIONAL_JUMP)  ; LAB_004a78f4
    MOV AL,byte ptr [ESI + 0x1]         ; 004a78e4 | s_Error_parsing_fieldNotes_005de2f3+1 | s_Error_parsing_fieldNotes_005de2f3+3
    ADD ESI,0x2                         ; 004a78e7
    MOV byte ptr [EDI + 0x1],AL         ; 004a78ea | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a78ed
    CMP AL,0x0                          ; 004a78f0
    JNZ 0x004a78dc                      ; 004a78f2
        ;   XREF to: 004a78dc (CONDITIONAL_JUMP)  ; LAB_004a78dc
    POP EDI                             ; 004a78f4
        ;   Label: LAB_004a78f4
    MOV EAX,0xffffffff                  ; 004a78f5
    MOV ESP,EBP                         ; 004a78fa
    POP EBP                             ; 004a78fc
    POP EDI                             ; 004a78fd
    POP ESI                             ; 004a78fe
    POP EBX                             ; 004a78ff
    RET                                 ; 004a7900
    PUSH 0x5de320                       ; 004a7901 | = "hasItem"
        ;   Label: LAB_004a7901
    LEA EAX,[ESP + 0xf38]               ; 004a7906
    PUSH EAX                            ; 004a790d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a790e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7913
    TEST EAX,EAX                        ; 004a7916
    JNZ 0x004a7a99                      ; 004a7918
        ;   XREF to: 004a7a99 (CONDITIONAL_JUMP)  ; LAB_004a7a99
    MOV EAX,[0x00622580]                ; 004a791e | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 004a7923 | g_CNetGameInstance
    JNZ 0x004a79db                      ; 004a7926
        ;   XREF to: 004a79db (CONDITIONAL_JUMP)  ; LAB_004a79db
    LEA EAX,[ESP + 0xfe8]               ; 004a792c
    MOV ECX,0xffffffff                  ; 004a7933
    PUSH EAX                            ; 004a7938
    LEA EAX,[ESP + 0xa24]               ; 004a7939
    MOV dword ptr [ESP + 0xfec],ECX     ; 004a7940
    PUSH EAX                            ; 004a7947
    MOV EAX,0x5de354                    ; 004a7948 | = " (%[^)])%n"
    MOV ESI,dword ptr [EBX]             ; 004a794d
    PUSH EAX                            ; 004a794f | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7950
    ADD EAX,ESI                         ; 004a7953
    PUSH EAX                            ; 004a7955
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7956
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a795b
    CMP dword ptr [ESP + 0xfe8],0x3     ; 004a795e
    JL 0x004a7a0b                       ; 004a7966
        ;   XREF to: 004a7a0b (CONDITIONAL_JUMP)  ; LAB_004a7a0b
    LEA ESI,[ESP + 0xa20]               ; 004a796c
    MOV EDI,ESI                         ; 004a7973
    SUB ECX,ECX                         ; 004a7975
    DEC ECX                             ; 004a7977
    XOR EAX,EAX                         ; 004a7978
    SCASB.REPNE ES:EDI                  ; 004a797a
    NOT ECX                             ; 004a797c
    DEC ECX                             ; 004a797e
    MOV EDI,ECX                         ; 004a797f
    TEST ECX,ECX                        ; 004a7981
    JLE 0x004a79a0                      ; 004a7983
        ;   XREF to: 004a79a0 (CONDITIONAL_JUMP)  ; LAB_004a79a0
    LEA EAX,[ECX + ESI*0x1]             ; 004a7985
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7988
        ;   Label: LAB_004a7988
    INC DL                              ; 004a798b
    AND EDX,0xff                        ; 004a798d
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a7993 | DAT_00626114
    JNZ 0x004a7a3b                      ; 004a799a
        ;   XREF to: 004a7a3b (CONDITIONAL_JUMP)  ; LAB_004a7a3b
    LEA EAX,[ESI + EDI*0x1]             ; 004a79a0
        ;   Label: LAB_004a79a0
    MOV byte ptr [EAX],0x0              ; 004a79a3
    LEA EAX,[ESI + 0x1]                 ; 004a79a6
    MOV dword ptr [ESP + 0x1044],EAX    ; 004a79a9
    MOV AL,byte ptr [ESI]               ; 004a79b0
        ;   Label: LAB_004a79b0
    INC AL                              ; 004a79b2
    AND EAX,0xff                        ; 004a79b4
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a79b9 | DAT_00626114
    JZ 0x004a7a4a                       ; 004a79c0
        ;   XREF to: 004a7a4a (CONDITIONAL_JUMP)  ; LAB_004a7a4a
    PUSH EDI                            ; 004a79c6
    MOV ECX,dword ptr [ESP + 0x1048]    ; 004a79c7
    PUSH ECX                            ; 004a79ce
    PUSH ESI                            ; 004a79cf
    DEC EDI                             ; 004a79d0
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a79d1
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a79d6
    JMP 0x004a79b0                      ; 004a79d9
        ;   XREF to: 004a79b0 (UNCONDITIONAL_JUMP)  ; LAB_004a79b0
    MOV ESI,0x5de328                    ; 004a79db | = "Can't use hasItem condition in multi-..."
        ;   Label: LAB_004a79db
    MOV EDI,0x1c56ed0                   ; 004a79e0
    PUSH EDI                            ; 004a79e5 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a79e6 | = "Can't use hasItem condition in multi-..." | s_Can_t_use_hasItem_condit_005de328+2
        ;   Label: LAB_004a79e6
    MOV byte ptr [EDI],AL               ; 004a79e8 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a79ea
    JZ 0x004a79fe                       ; 004a79ec
        ;   XREF to: 004a79fe (CONDITIONAL_JUMP)  ; LAB_004a79fe
    MOV AL,byte ptr [ESI + 0x1]         ; 004a79ee | s_Can_t_use_hasItem_condit_005de328+1 | s_Can_t_use_hasItem_condit_005de328+3
    ADD ESI,0x2                         ; 004a79f1
    MOV byte ptr [EDI + 0x1],AL         ; 004a79f4 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a79f7
    CMP AL,0x0                          ; 004a79fa
    JNZ 0x004a79e6                      ; 004a79fc
        ;   XREF to: 004a79e6 (CONDITIONAL_JUMP)  ; LAB_004a79e6
    POP EDI                             ; 004a79fe
        ;   Label: LAB_004a79fe
    MOV EAX,0xffffffff                  ; 004a79ff
    MOV ESP,EBP                         ; 004a7a04
    POP EBP                             ; 004a7a06
    POP EDI                             ; 004a7a07
    POP ESI                             ; 004a7a08
    POP EBX                             ; 004a7a09
    RET                                 ; 004a7a0a
    MOV ESI,0x5de35f                    ; 004a7a0b | = "Error parsing hasItem parameters."
        ;   Label: LAB_004a7a0b
    MOV EDI,0x1c56ed0                   ; 004a7a10
    PUSH EDI                            ; 004a7a15 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7a16 | = "Error parsing hasItem parameters." | s_Error_parsing_hasItem_pa_005de35f+2
        ;   Label: LAB_004a7a16
    MOV byte ptr [EDI],AL               ; 004a7a18 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7a1a
    JZ 0x004a7a2e                       ; 004a7a1c
        ;   XREF to: 004a7a2e (CONDITIONAL_JUMP)  ; LAB_004a7a2e
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7a1e | s_Error_parsing_hasItem_pa_005de35f+1 | s_Error_parsing_hasItem_pa_005de35f+3
    ADD ESI,0x2                         ; 004a7a21
    MOV byte ptr [EDI + 0x1],AL         ; 004a7a24 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7a27
    CMP AL,0x0                          ; 004a7a2a
    JNZ 0x004a7a16                      ; 004a7a2c
        ;   XREF to: 004a7a16 (CONDITIONAL_JUMP)  ; LAB_004a7a16
    POP EDI                             ; 004a7a2e
        ;   Label: LAB_004a7a2e
    MOV EAX,0xffffffff                  ; 004a7a2f
    MOV ESP,EBP                         ; 004a7a34
    POP EBP                             ; 004a7a36
    POP EDI                             ; 004a7a37
    POP ESI                             ; 004a7a38
    POP EBX                             ; 004a7a39
    RET                                 ; 004a7a3a
    DEC EDI                             ; 004a7a3b
        ;   Label: LAB_004a7a3b
    DEC EAX                             ; 004a7a3c
    TEST EDI,EDI                        ; 004a7a3d
    JG 0x004a7988                       ; 004a7a3f
        ;   XREF to: 004a7988 (CONDITIONAL_JUMP)  ; LAB_004a7988
    JMP 0x004a79a0                      ; 004a7a45
        ;   XREF to: 004a79a0 (UNCONDITIONAL_JUMP)  ; LAB_004a79a0
    MOV EAX,[0x01d06ab4]                ; 004a7a4a | DAT_01d06ab4
        ;   Label: LAB_004a7a4a
    SHL EAX,0x2                         ; 004a7a4f
    XOR ESI,ESI                         ; 004a7a52
    MOV EDI,dword ptr [EAX + 0x1d06aa4] ; 004a7a54
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004a7a5a
    TEST EDI,EDI                        ; 004a7a61
    JZ 0x004a7a8b                       ; 004a7a63
        ;   XREF to: 004a7a8b (CONDITIONAL_JUMP)  ; LAB_004a7a8b
    LEA EDX,[ESP + 0xa20]               ; 004a7a65
    PUSH EDX                            ; 004a7a6c
    LEA EAX,[EDI + 0x1fae8]             ; 004a7a6d
    PUSH EAX                            ; 004a7a73
    CALL core_inv.cpp_FUN_004f8c40      ; 004a7a74
        ;   XREF to: 004f8c40 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004f8c40(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004a7a79
    TEST EAX,EAX                        ; 004a7a7c
    JZ 0x004a7a8b                       ; 004a7a7e
        ;   XREF to: 004a7a8b (CONDITIONAL_JUMP)  ; LAB_004a7a8b
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a7a80
    MOV EAX,dword ptr [ESP + 0xfe8]     ; 004a7a8b
        ;   Label: LAB_004a7a8b
    ADD dword ptr [EBX],EAX             ; 004a7a92
    JMP 0x004a757c                      ; 004a7a94
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de381                       ; 004a7a99 | = "hasItemType"
        ;   Label: LAB_004a7a99
    LEA EAX,[ESP + 0xf38]               ; 004a7a9e
    PUSH EAX                            ; 004a7aa5
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a7aa6
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7aab
    TEST EAX,EAX                        ; 004a7aae
    JNZ 0x004a7c85                      ; 004a7ab0
        ;   XREF to: 004a7c85 (CONDITIONAL_JUMP)  ; LAB_004a7c85
    LEA EAX,[ESP + 0x1048]              ; 004a7ab6
    PUSH EAX                            ; 004a7abd
    LEA EAX,[ESP + 0x6a0]               ; 004a7abe
    MOV ECX,0xffffffff                  ; 004a7ac5
    PUSH EAX                            ; 004a7aca
    LEA EAX,[ESP + 0xa8c]               ; 004a7acb
    MOV dword ptr [ESP + 0x1050],ECX    ; 004a7ad2
    PUSH EAX                            ; 004a7ad9
    MOV EAX,0x5de38d                    ; 004a7ada | = " (%[^,], %[^)] )%n"
    MOV ESI,dword ptr [EBX]             ; 004a7adf
    PUSH EAX                            ; 004a7ae1 | = " (%[^,], %[^)] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7ae2
    ADD EAX,ESI                         ; 004a7ae5
    PUSH EAX                            ; 004a7ae7
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7ae8
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 004a7aed
    CMP dword ptr [ESP + 0x1048],0x5    ; 004a7af0
    JL 0x004a7b61                       ; 004a7af8
        ;   XREF to: 004a7b61 (CONDITIONAL_JUMP)  ; LAB_004a7b61
    LEA ESI,[ESP + 0xa84]               ; 004a7afa
    MOV EDI,ESI                         ; 004a7b01
    SUB ECX,ECX                         ; 004a7b03
    DEC ECX                             ; 004a7b05
    XOR EAX,EAX                         ; 004a7b06
    SCASB.REPNE ES:EDI                  ; 004a7b08
    NOT ECX                             ; 004a7b0a
    DEC ECX                             ; 004a7b0c
    MOV EDI,ECX                         ; 004a7b0d
    TEST ECX,ECX                        ; 004a7b0f
    JLE 0x004a7b2a                      ; 004a7b11
        ;   XREF to: 004a7b2a (CONDITIONAL_JUMP)  ; LAB_004a7b2a
    LEA EAX,[ECX + ESI*0x1]             ; 004a7b13
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7b16
        ;   Label: LAB_004a7b16
    INC DL                              ; 004a7b19
    AND EDX,0xff                        ; 004a7b1b
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a7b21 | DAT_00626114
    JNZ 0x004a7b91                      ; 004a7b28
        ;   XREF to: 004a7b91 (CONDITIONAL_JUMP)  ; LAB_004a7b91
    LEA EAX,[ESI + EDI*0x1]             ; 004a7b2a
        ;   Label: LAB_004a7b2a
    MOV byte ptr [EAX],0x0              ; 004a7b2d
    LEA EAX,[ESI + 0x1]                 ; 004a7b30
    MOV dword ptr [ESP + 0xfec],EAX     ; 004a7b33
    MOV AL,byte ptr [ESI]               ; 004a7b3a
        ;   Label: LAB_004a7b3a
    INC AL                              ; 004a7b3c
    AND EAX,0xff                        ; 004a7b3e
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a7b43 | DAT_00626114
    JZ 0x004a7b9d                       ; 004a7b4a
        ;   XREF to: 004a7b9d (CONDITIONAL_JUMP)  ; LAB_004a7b9d
    PUSH EDI                            ; 004a7b4c
    MOV EDX,dword ptr [ESP + 0xff0]     ; 004a7b4d
    PUSH EDX                            ; 004a7b54
    PUSH ESI                            ; 004a7b55
    DEC EDI                             ; 004a7b56
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a7b57
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a7b5c
    JMP 0x004a7b3a                      ; 004a7b5f
        ;   XREF to: 004a7b3a (UNCONDITIONAL_JUMP)  ; LAB_004a7b3a
    MOV ESI,0x5de3a0                    ; 004a7b61 | = "Error parsing hasItemType parameters."
        ;   Label: LAB_004a7b61
    MOV EDI,0x1c56ed0                   ; 004a7b66
    PUSH EDI                            ; 004a7b6b | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7b6c | = "Error parsing hasItemType parameters." | s_Error_parsing_hasItemTyp_005de3a0+2
        ;   Label: LAB_004a7b6c
    MOV byte ptr [EDI],AL               ; 004a7b6e | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7b70
    JZ 0x004a7b84                       ; 004a7b72
        ;   XREF to: 004a7b84 (CONDITIONAL_JUMP)  ; LAB_004a7b84
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7b74 | s_Error_parsing_hasItemTyp_005de3a0+1 | s_Error_parsing_hasItemTyp_005de3a0+3
    ADD ESI,0x2                         ; 004a7b77
    MOV byte ptr [EDI + 0x1],AL         ; 004a7b7a | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7b7d
    CMP AL,0x0                          ; 004a7b80
    JNZ 0x004a7b6c                      ; 004a7b82
        ;   XREF to: 004a7b6c (CONDITIONAL_JUMP)  ; LAB_004a7b6c
    POP EDI                             ; 004a7b84
        ;   Label: LAB_004a7b84
    MOV EAX,0xffffffff                  ; 004a7b85
        ;   Label: LAB_004a7b85
    MOV ESP,EBP                         ; 004a7b8a
    POP EBP                             ; 004a7b8c
    POP EDI                             ; 004a7b8d
    POP ESI                             ; 004a7b8e
    POP EBX                             ; 004a7b8f
    RET                                 ; 004a7b90
    DEC EDI                             ; 004a7b91
        ;   Label: LAB_004a7b91
    DEC EAX                             ; 004a7b92
    TEST EDI,EDI                        ; 004a7b93
    JG 0x004a7b16                       ; 004a7b95
        ;   XREF to: 004a7b16 (CONDITIONAL_JUMP)  ; LAB_004a7b16
    JMP 0x004a7b2a                      ; 004a7b9b
        ;   XREF to: 004a7b2a (UNCONDITIONAL_JUMP)  ; LAB_004a7b2a
    LEA EDI,[ESP + 0x69c]               ; 004a7b9d
        ;   Label: LAB_004a7b9d
    LEA ESI,[ESP + 0x69c]               ; 004a7ba4
    SUB ECX,ECX                         ; 004a7bab
    DEC ECX                             ; 004a7bad
    XOR EAX,EAX                         ; 004a7bae
    SCASB.REPNE ES:EDI                  ; 004a7bb0
    NOT ECX                             ; 004a7bb2
    DEC ECX                             ; 004a7bb4
    MOV EDI,ECX                         ; 004a7bb5
    TEST ECX,ECX                        ; 004a7bb7
    JLE 0x004a7bd8                      ; 004a7bb9
        ;   XREF to: 004a7bd8 (CONDITIONAL_JUMP)  ; LAB_004a7bd8
    LEA EAX,[ESP + 0x69c]               ; 004a7bbb
    ADD EAX,ECX                         ; 004a7bc2
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7bc4
        ;   Label: LAB_004a7bc4
    INC DL                              ; 004a7bc7
    AND EDX,0xff                        ; 004a7bc9
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a7bcf | DAT_00626114
    JNZ 0x004a7c0f                      ; 004a7bd6
        ;   XREF to: 004a7c0f (CONDITIONAL_JUMP)  ; LAB_004a7c0f
    LEA EAX,[ESI + EDI*0x1]             ; 004a7bd8
        ;   Label: LAB_004a7bd8
    MOV byte ptr [EAX],0x0              ; 004a7bdb
    LEA EAX,[ESI + 0x1]                 ; 004a7bde
    MOV dword ptr [ESP + 0xff0],EAX     ; 004a7be1
    MOV AL,byte ptr [ESI]               ; 004a7be8
        ;   Label: LAB_004a7be8
    INC AL                              ; 004a7bea
    AND EAX,0xff                        ; 004a7bec
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a7bf1 | DAT_00626114
    JZ 0x004a7c17                       ; 004a7bf8
        ;   XREF to: 004a7c17 (CONDITIONAL_JUMP)  ; LAB_004a7c17
    PUSH EDI                            ; 004a7bfa
    MOV ECX,dword ptr [ESP + 0xff4]     ; 004a7bfb
    PUSH ECX                            ; 004a7c02
    PUSH ESI                            ; 004a7c03
    DEC EDI                             ; 004a7c04
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a7c05
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a7c0a
    JMP 0x004a7be8                      ; 004a7c0d
        ;   XREF to: 004a7be8 (UNCONDITIONAL_JUMP)  ; LAB_004a7be8
    DEC EDI                             ; 004a7c0f
        ;   Label: LAB_004a7c0f
    DEC EAX                             ; 004a7c10
    TEST EDI,EDI                        ; 004a7c11
    JG 0x004a7bc4                       ; 004a7c13
        ;   XREF to: 004a7bc4 (CONDITIONAL_JUMP)  ; LAB_004a7bc4
    JMP 0x004a7bd8                      ; 004a7c15
        ;   XREF to: 004a7bd8 (UNCONDITIONAL_JUMP)  ; LAB_004a7bd8
    PUSH 0x1d06ad8                      ; 004a7c17
        ;   Label: LAB_004a7c17
    MOV ECX,dword ptr [0x01d06b10]      ; 004a7c1c | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 004a7c22
    LEA EAX,[ESP + 0xa8c]               ; 004a7c23
    PUSH EAX                            ; 004a7c2a
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a7c2b
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a7c30
    TEST EAX,EAX                        ; 004a7c33
    JZ 0x004a7b85                       ; 004a7c35
        ;   XREF to: 004a7b85 (CONDITIONAL_JUMP)  ; LAB_004a7b85
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a7c3b | DAT_005ffcb8
    JNZ 0x004a7c5a                      ; 004a7c41
        ;   XREF to: 004a7c5a (CONDITIONAL_JUMP)  ; LAB_004a7c5a
    XOR EDI,EDI                         ; 004a7c43
    MOV dword ptr [ESP + 0xfbc],EDI     ; 004a7c45
    MOV EAX,dword ptr [ESP + 0x1048]    ; 004a7c4c
    ADD dword ptr [EBX],EAX             ; 004a7c53
    JMP 0x004a757c                      ; 004a7c55
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    LEA EDX,[ESP + 0x69c]               ; 004a7c5a
        ;   Label: LAB_004a7c5a
    PUSH EDX                            ; 004a7c61
    ADD EAX,0x1fae8                     ; 004a7c62
    PUSH EAX                            ; 004a7c67
    CALL core_inv.cpp_FUN_004f8ce0      ; 004a7c68
        ;   XREF to: 004f8ce0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f8ce0()
    ADD ESP,0x8                         ; 004a7c6d
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a7c70
    MOV EAX,dword ptr [ESP + 0x1048]    ; 004a7c77
    ADD dword ptr [EBX],EAX             ; 004a7c7e
    JMP 0x004a757c                      ; 004a7c80
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de3c6                       ; 004a7c85 | = "hasKeyMask"
        ;   Label: LAB_004a7c85
    LEA EAX,[ESP + 0xf38]               ; 004a7c8a
    PUSH EAX                            ; 004a7c91
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a7c92
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7c97
    TEST EAX,EAX                        ; 004a7c9a
    JNZ 0x004a7e16                      ; 004a7c9c
        ;   XREF to: 004a7e16 (CONDITIONAL_JUMP)  ; LAB_004a7e16
    MOV EAX,[0x00622580]                ; 004a7ca2 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 004a7ca7 | g_CNetGameInstance
    JNZ 0x004a7d56                      ; 004a7caa
        ;   XREF to: 004a7d56 (CONDITIONAL_JUMP)  ; LAB_004a7d56
    LEA EAX,[ESP + 0xff4]               ; 004a7cb0
    MOV ECX,0xffffffff                  ; 004a7cb7
    PUSH EAX                            ; 004a7cbc
    LEA EAX,[ESP + 0xffc]               ; 004a7cbd
    MOV dword ptr [ESP + 0xff8],ECX     ; 004a7cc4
    PUSH EAX                            ; 004a7ccb
    MOV EAX,0x5de400                    ; 004a7ccc | = " ( %d )%n"
    MOV ESI,dword ptr [EBX]             ; 004a7cd1
    PUSH EAX                            ; 004a7cd3 | = " ( %d )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7cd4
    ADD EAX,ESI                         ; 004a7cd7
    PUSH EAX                            ; 004a7cd9
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7cda
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a7cdf
    CMP dword ptr [ESP + 0xff4],0x3     ; 004a7ce2
    JL 0x004a7d86                       ; 004a7cea
        ;   XREF to: 004a7d86 (CONDITIONAL_JUMP)  ; LAB_004a7d86
    MOV EAX,dword ptr [ESP + 0xff8]     ; 004a7cf0
    TEST EAX,EAX                        ; 004a7cf7
    JZ 0x004a7db6                       ; 004a7cf9
        ;   XREF to: 004a7db6 (CONDITIONAL_JUMP)  ; LAB_004a7db6
    MOV EDX,dword ptr [ESP + 0xff8]     ; 004a7cff
    DEC EAX                             ; 004a7d06
    TEST EAX,EDX                        ; 004a7d07
    JNZ 0x004a7de6                      ; 004a7d09
        ;   XREF to: 004a7de6 (CONDITIONAL_JUMP)  ; LAB_004a7de6
    MOV EAX,[0x01d06ab4]                ; 004a7d0f | DAT_01d06ab4
    XOR ECX,ECX                         ; 004a7d14
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004a7d16
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004a7d1d
    TEST ESI,ESI                        ; 004a7d24
    JZ 0x004a7d48                       ; 004a7d26
        ;   XREF to: 004a7d48 (CONDITIONAL_JUMP)  ; LAB_004a7d48
    PUSH ECX                            ; 004a7d28
    PUSH EDX                            ; 004a7d29
    LEA EAX,[ESI + 0x1fae8]             ; 004a7d2a
    PUSH EAX                            ; 004a7d30
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240 ; 004a7d31
        ;   XREF to: 004fc240 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240(CInventory * this_ptr, uint key_mask, int show_message)
    ADD ESP,0xc                         ; 004a7d36
    TEST EAX,EAX                        ; 004a7d39
    JZ 0x004a7d48                       ; 004a7d3b
        ;   XREF to: 004a7d48 (CONDITIONAL_JUMP)  ; LAB_004a7d48
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a7d3d
    MOV EAX,dword ptr [ESP + 0xff4]     ; 004a7d48
        ;   Label: LAB_004a7d48
    ADD dword ptr [EBX],EAX             ; 004a7d4f
    JMP 0x004a757c                      ; 004a7d51
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de3d1                    ; 004a7d56 | = "Can't use hasKeyMask condition in mul..."
        ;   Label: LAB_004a7d56
    MOV EDI,0x1c56ed0                   ; 004a7d5b
    PUSH EDI                            ; 004a7d60 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7d61 | = "Can't use hasKeyMask condition in mul..." | s_Can_t_use_hasKeyMask_con_005de3d1+2
        ;   Label: LAB_004a7d61
    MOV byte ptr [EDI],AL               ; 004a7d63 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7d65
    JZ 0x004a7d79                       ; 004a7d67
        ;   XREF to: 004a7d79 (CONDITIONAL_JUMP)  ; LAB_004a7d79
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7d69 | s_Can_t_use_hasKeyMask_con_005de3d1+1 | s_Can_t_use_hasKeyMask_con_005de3d1+3
    ADD ESI,0x2                         ; 004a7d6c
    MOV byte ptr [EDI + 0x1],AL         ; 004a7d6f | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7d72
    CMP AL,0x0                          ; 004a7d75
    JNZ 0x004a7d61                      ; 004a7d77
        ;   XREF to: 004a7d61 (CONDITIONAL_JUMP)  ; LAB_004a7d61
    POP EDI                             ; 004a7d79
        ;   Label: LAB_004a7d79
    MOV EAX,0xffffffff                  ; 004a7d7a
    MOV ESP,EBP                         ; 004a7d7f
    POP EBP                             ; 004a7d81
    POP EDI                             ; 004a7d82
    POP ESI                             ; 004a7d83
    POP EBX                             ; 004a7d84
    RET                                 ; 004a7d85
    MOV ESI,0x5de40a                    ; 004a7d86 | = "Error parsing hasKeyMask parameters."
        ;   Label: LAB_004a7d86
    MOV EDI,0x1c56ed0                   ; 004a7d8b
    PUSH EDI                            ; 004a7d90 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7d91 | = "Error parsing hasKeyMask parameters." | s_Error_parsing_hasKeyMask_005de40a+2
        ;   Label: LAB_004a7d91
    MOV byte ptr [EDI],AL               ; 004a7d93 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7d95
    JZ 0x004a7da9                       ; 004a7d97
        ;   XREF to: 004a7da9 (CONDITIONAL_JUMP)  ; LAB_004a7da9
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7d99 | s_Error_parsing_hasKeyMask_005de40a+1 | s_Error_parsing_hasKeyMask_005de40a+3
    ADD ESI,0x2                         ; 004a7d9c
    MOV byte ptr [EDI + 0x1],AL         ; 004a7d9f | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7da2
    CMP AL,0x0                          ; 004a7da5
    JNZ 0x004a7d91                      ; 004a7da7
        ;   XREF to: 004a7d91 (CONDITIONAL_JUMP)  ; LAB_004a7d91
    POP EDI                             ; 004a7da9
        ;   Label: LAB_004a7da9
    MOV EAX,0xffffffff                  ; 004a7daa
    MOV ESP,EBP                         ; 004a7daf
    POP EBP                             ; 004a7db1
    POP EDI                             ; 004a7db2
    POP ESI                             ; 004a7db3
    POP EBX                             ; 004a7db4
    RET                                 ; 004a7db5
    MOV ESI,0x5de42f                    ; 004a7db6 | = "hasKeyMask(0) always returns false!"
        ;   Label: LAB_004a7db6
    MOV EDI,0x1c56ed0                   ; 004a7dbb
    PUSH EDI                            ; 004a7dc0 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7dc1 | = "hasKeyMask(0) always returns false!" | s_hasKeyMask_0_always_retu_005de42f+2
        ;   Label: LAB_004a7dc1
    MOV byte ptr [EDI],AL               ; 004a7dc3 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7dc5
    JZ 0x004a7dd9                       ; 004a7dc7
        ;   XREF to: 004a7dd9 (CONDITIONAL_JUMP)  ; LAB_004a7dd9
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7dc9 | s_hasKeyMask_0_always_retu_005de42f+1 | s_hasKeyMask_0_always_retu_005de42f+3
    ADD ESI,0x2                         ; 004a7dcc
    MOV byte ptr [EDI + 0x1],AL         ; 004a7dcf | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7dd2
    CMP AL,0x0                          ; 004a7dd5
    JNZ 0x004a7dc1                      ; 004a7dd7
        ;   XREF to: 004a7dc1 (CONDITIONAL_JUMP)  ; LAB_004a7dc1
    POP EDI                             ; 004a7dd9
        ;   Label: LAB_004a7dd9
    MOV EAX,0xffffffff                  ; 004a7dda
    MOV ESP,EBP                         ; 004a7ddf
    POP EBP                             ; 004a7de1
    POP EDI                             ; 004a7de2
    POP ESI                             ; 004a7de3
    POP EBX                             ; 004a7de4
    RET                                 ; 004a7de5
    MOV ESI,0x5de453                    ; 004a7de6 | = "mask value must be a power of 2.\n(To..."
        ;   Label: LAB_004a7de6
    MOV EDI,0x1c56ed0                   ; 004a7deb
    PUSH EDI                            ; 004a7df0 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7df1 | = "mask value must be a power of 2.\n(To..." | s_mask_value_must_be_a_pow_005de453+2
        ;   Label: LAB_004a7df1
    MOV byte ptr [EDI],AL               ; 004a7df3 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7df5
    JZ 0x004a7e09                       ; 004a7df7
        ;   XREF to: 004a7e09 (CONDITIONAL_JUMP)  ; LAB_004a7e09
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7df9 | s_mask_value_must_be_a_pow_005de453+1 | s_mask_value_must_be_a_pow_005de453+3
    ADD ESI,0x2                         ; 004a7dfc
    MOV byte ptr [EDI + 0x1],AL         ; 004a7dff | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7e02
    CMP AL,0x0                          ; 004a7e05
    JNZ 0x004a7df1                      ; 004a7e07
        ;   XREF to: 004a7df1 (CONDITIONAL_JUMP)  ; LAB_004a7df1
    POP EDI                             ; 004a7e09
        ;   Label: LAB_004a7e09
    MOV EAX,0xffffffff                  ; 004a7e0a
    MOV ESP,EBP                         ; 004a7e0f
    POP EBP                             ; 004a7e11
    POP EDI                             ; 004a7e12
    POP ESI                             ; 004a7e13
    POP EBX                             ; 004a7e14
    RET                                 ; 004a7e15
    PUSH 0x5de4b1                       ; 004a7e16 | = "isBroken"
        ;   Label: LAB_004a7e16
    LEA EAX,[ESP + 0xf38]               ; 004a7e1b
    PUSH EAX                            ; 004a7e22
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a7e23
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7e28
    TEST EAX,EAX                        ; 004a7e2b
    JNZ 0x004a7f75                      ; 004a7e2d
        ;   XREF to: 004a7f75 (CONDITIONAL_JUMP)  ; LAB_004a7f75
    LEA EAX,[ESP + 0xffc]               ; 004a7e33
    MOV ESI,0xffffffff                  ; 004a7e3a
    PUSH EAX                            ; 004a7e3f
    LEA EAX,[ESP + 0x704]               ; 004a7e40
    MOV dword ptr [ESP + 0x1000],ESI    ; 004a7e47
    PUSH EAX                            ; 004a7e4e
    MOV EAX,0x5de4ba                    ; 004a7e4f | = " (%[^)])%n"
    MOV EDI,dword ptr [EBX]             ; 004a7e54
    PUSH EAX                            ; 004a7e56 | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7e57
    ADD EAX,EDI                         ; 004a7e5a
    PUSH EAX                            ; 004a7e5c
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7e5d
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a7e62
    CMP dword ptr [ESP + 0xffc],0x3     ; 004a7e65
    JL 0x004a7ed6                       ; 004a7e6d
        ;   XREF to: 004a7ed6 (CONDITIONAL_JUMP)  ; LAB_004a7ed6
    LEA ESI,[ESP + 0x700]               ; 004a7e6f
    MOV EDI,ESI                         ; 004a7e76
    SUB ECX,ECX                         ; 004a7e78
    DEC ECX                             ; 004a7e7a
    XOR EAX,EAX                         ; 004a7e7b
    SCASB.REPNE ES:EDI                  ; 004a7e7d
    NOT ECX                             ; 004a7e7f
    DEC ECX                             ; 004a7e81
    MOV EDI,ECX                         ; 004a7e82
    TEST ECX,ECX                        ; 004a7e84
    JLE 0x004a7e9f                      ; 004a7e86
        ;   XREF to: 004a7e9f (CONDITIONAL_JUMP)  ; LAB_004a7e9f
    LEA EAX,[ECX + ESI*0x1]             ; 004a7e88
    MOV DL,byte ptr [EAX + -0x1]        ; 004a7e8b
        ;   Label: LAB_004a7e8b
    INC DL                              ; 004a7e8e
    AND EDX,0xff                        ; 004a7e90
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a7e96 | DAT_00626114
    JNZ 0x004a7f06                      ; 004a7e9d
        ;   XREF to: 004a7f06 (CONDITIONAL_JUMP)  ; LAB_004a7f06
    LEA EAX,[ESI + EDI*0x1]             ; 004a7e9f
        ;   Label: LAB_004a7e9f
    MOV byte ptr [EAX],0x0              ; 004a7ea2
    LEA EAX,[ESI + 0x1]                 ; 004a7ea5
    MOV dword ptr [ESP + 0x1000],EAX    ; 004a7ea8
    MOV AL,byte ptr [ESI]               ; 004a7eaf
        ;   Label: LAB_004a7eaf
    INC AL                              ; 004a7eb1
    AND EAX,0xff                        ; 004a7eb3
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a7eb8 | DAT_00626114
    JZ 0x004a7f12                       ; 004a7ebf
        ;   XREF to: 004a7f12 (CONDITIONAL_JUMP)  ; LAB_004a7f12
    PUSH EDI                            ; 004a7ec1
    MOV EAX,dword ptr [ESP + 0x1004]    ; 004a7ec2
    PUSH EAX                            ; 004a7ec9
    PUSH ESI                            ; 004a7eca
    DEC EDI                             ; 004a7ecb
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a7ecc
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a7ed1
    JMP 0x004a7eaf                      ; 004a7ed4
        ;   XREF to: 004a7eaf (UNCONDITIONAL_JUMP)  ; LAB_004a7eaf
    MOV ESI,0x5de4c5                    ; 004a7ed6 | = "Error parsing isBroken parameters."
        ;   Label: LAB_004a7ed6
    MOV EDI,0x1c56ed0                   ; 004a7edb
    PUSH EDI                            ; 004a7ee0 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a7ee1 | = "Error parsing isBroken parameters." | s_Error_parsing_isBroken_p_005de4c5+2
        ;   Label: LAB_004a7ee1
    MOV byte ptr [EDI],AL               ; 004a7ee3 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a7ee5
    JZ 0x004a7ef9                       ; 004a7ee7
        ;   XREF to: 004a7ef9 (CONDITIONAL_JUMP)  ; LAB_004a7ef9
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7ee9 | s_Error_parsing_isBroken_p_005de4c5+1 | s_Error_parsing_isBroken_p_005de4c5+3
    ADD ESI,0x2                         ; 004a7eec
    MOV byte ptr [EDI + 0x1],AL         ; 004a7eef | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a7ef2
    CMP AL,0x0                          ; 004a7ef5
    JNZ 0x004a7ee1                      ; 004a7ef7
        ;   XREF to: 004a7ee1 (CONDITIONAL_JUMP)  ; LAB_004a7ee1
    POP EDI                             ; 004a7ef9
        ;   Label: LAB_004a7ef9
    MOV EAX,0xffffffff                  ; 004a7efa
        ;   Label: LAB_004a7efa
    MOV ESP,EBP                         ; 004a7eff
    POP EBP                             ; 004a7f01
    POP EDI                             ; 004a7f02
    POP ESI                             ; 004a7f03
    POP EBX                             ; 004a7f04
    RET                                 ; 004a7f05
    DEC EDI                             ; 004a7f06
        ;   Label: LAB_004a7f06
    DEC EAX                             ; 004a7f07
    TEST EDI,EDI                        ; 004a7f08
    JG 0x004a7e8b                       ; 004a7f0a
        ;   XREF to: 004a7e8b (CONDITIONAL_JUMP)  ; LAB_004a7e8b
    JMP 0x004a7e9f                      ; 004a7f10
        ;   XREF to: 004a7e9f (UNCONDITIONAL_JUMP)  ; LAB_004a7e9f
    PUSH 0x1cd0dc4                      ; 004a7f12
        ;   Label: LAB_004a7f12
    MOV ESI,dword ptr [0x01cd0dfc]      ; 004a7f17 | g_CGlassClassInfo.name_hash
    PUSH ESI                            ; 004a7f1d
    LEA EAX,[ESP + 0x708]               ; 004a7f1e
    PUSH EAX                            ; 004a7f25
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a7f26
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a7f2b
    TEST EAX,EAX                        ; 004a7f2e
    JZ 0x004a7efa                       ; 004a7f30
        ;   XREF to: 004a7efa (CONDITIONAL_JUMP)  ; LAB_004a7efa
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a7f32 | DAT_005ffcb8
    JNZ 0x004a7f51                      ; 004a7f38
        ;   XREF to: 004a7f51 (CONDITIONAL_JUMP)  ; LAB_004a7f51
    XOR ECX,ECX                         ; 004a7f3a
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004a7f3c
    MOV EAX,dword ptr [ESP + 0xffc]     ; 004a7f43
    ADD dword ptr [EBX],EAX             ; 004a7f4a
    JMP 0x004a757c                      ; 004a7f4c
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    CMP dword ptr [EAX + 0x180],0x0     ; 004a7f51
        ;   Label: LAB_004a7f51
    SETNZ AL                            ; 004a7f58
    AND EAX,0xff                        ; 004a7f5b
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a7f60
    MOV EAX,dword ptr [ESP + 0xffc]     ; 004a7f67
    ADD dword ptr [EBX],EAX             ; 004a7f6e
    JMP 0x004a757c                      ; 004a7f70
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de4e8                       ; 004a7f75 | = "isCurrentCamera"
        ;   Label: LAB_004a7f75
    LEA EAX,[ESP + 0xf38]               ; 004a7f7a
    PUSH EAX                            ; 004a7f81
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a7f82
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a7f87
    TEST EAX,EAX                        ; 004a7f8a
    JNZ 0x004a8055                      ; 004a7f8c
        ;   XREF to: 004a8055 (CONDITIONAL_JUMP)  ; LAB_004a8055
    LEA EAX,[ESP + 0x1004]              ; 004a7f92
    MOV ECX,0xffffffff                  ; 004a7f99
    PUSH EAX                            ; 004a7f9e
    LEA EAX,[ESP + 0xbb4]               ; 004a7f9f
    MOV dword ptr [ESP + 0x1008],ECX    ; 004a7fa6
    PUSH EAX                            ; 004a7fad
    MOV EAX,0x5de4f8                    ; 004a7fae | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 004a7fb3
    PUSH EAX                            ; 004a7fb5 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a7fb6
    ADD EAX,ESI                         ; 004a7fb9
    PUSH EAX                            ; 004a7fbb
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a7fbc
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a7fc1
    CMP dword ptr [ESP + 0x1004],0x3    ; 004a7fc4
    JL 0x004a8025                       ; 004a7fcc
        ;   XREF to: 004a8025 (CONDITIONAL_JUMP)  ; LAB_004a8025
    XOR EAX,EAX                         ; 004a7fce
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a7fd0
    MOV EAX,[0x00622c18]                ; 004a7fd7 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004a7fdc | g_CDemonSetInstance.selected_camera_index
    TEST EAX,EAX                        ; 004a7fe2
    JL 0x004a8017                       ; 004a7fe4
        ;   XREF to: 004a8017 (CONDITIONAL_JUMP)  ; LAB_004a8017
    IMUL EAX,EAX,0x1a4                  ; 004a7fe6
    LEA EDX,[ESP + 0xbb0]               ; 004a7fec
    PUSH EDX                            ; 004a7ff3
    MOV EDX,dword ptr [0x00622c18]      ; 004a7ff4 | g_CDemonSetPtr
    ADD EDX,0x4                         ; 004a7ffa
    ADD EAX,EDX                         ; 004a7ffd
    PUSH EAX                            ; 004a7fff
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8000
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8005
    TEST EAX,EAX                        ; 004a8008
    JNZ 0x004a8017                      ; 004a800a
        ;   XREF to: 004a8017 (CONDITIONAL_JUMP)  ; LAB_004a8017
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a800c
    MOV EAX,dword ptr [ESP + 0x1004]    ; 004a8017
        ;   Label: LAB_004a8017
    ADD dword ptr [EBX],EAX             ; 004a801e
    JMP 0x004a757c                      ; 004a8020
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de506                    ; 004a8025 | = "Error parsing isCurrentCamera paramet..."
        ;   Label: LAB_004a8025
    MOV EDI,0x1c56ed0                   ; 004a802a
    PUSH EDI                            ; 004a802f | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8030 | = "Error parsing isCurrentCamera paramet..." | s_Error_parsing_isCurrentC_005de506+2
        ;   Label: LAB_004a8030
    MOV byte ptr [EDI],AL               ; 004a8032 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8034
    JZ 0x004a8048                       ; 004a8036
        ;   XREF to: 004a8048 (CONDITIONAL_JUMP)  ; LAB_004a8048
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8038 | s_Error_parsing_isCurrentC_005de506+1 | s_Error_parsing_isCurrentC_005de506+3
    ADD ESI,0x2                         ; 004a803b
    MOV byte ptr [EDI + 0x1],AL         ; 004a803e | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8041
    CMP AL,0x0                          ; 004a8044
    JNZ 0x004a8030                      ; 004a8046
        ;   XREF to: 004a8030 (CONDITIONAL_JUMP)  ; LAB_004a8030
    POP EDI                             ; 004a8048
        ;   Label: LAB_004a8048
    MOV EAX,0xffffffff                  ; 004a8049
    MOV ESP,EBP                         ; 004a804e
    POP EBP                             ; 004a8050
    POP EDI                             ; 004a8051
    POP ESI                             ; 004a8052
    POP EBX                             ; 004a8053
    RET                                 ; 004a8054
    PUSH 0x5de530                       ; 004a8055 | = "isCurrentSet"
        ;   Label: LAB_004a8055
    LEA EAX,[ESP + 0xf38]               ; 004a805a
    PUSH EAX                            ; 004a8061
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8062
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8067
    TEST EAX,EAX                        ; 004a806a
    JNZ 0x004a8168                      ; 004a806c
        ;   XREF to: 004a8168 (CONDITIONAL_JUMP)  ; LAB_004a8168
    MOV dword ptr [ESP + 0x1008],0xffffffff ; 004a8072
    LEA EAX,[ESP + 0x1008]              ; 004a807d
    PUSH EAX                            ; 004a8084
    LEA EAX,[ESP + 0x8f8]               ; 004a8085
    PUSH EAX                            ; 004a808c
    MOV EAX,0x5de53d                    ; 004a808d | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004a8092
    PUSH EAX                            ; 004a8094 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8095
    ADD EAX,EDX                         ; 004a8098
    PUSH EAX                            ; 004a809a
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a809b
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a80a0
    CMP dword ptr [ESP + 0x1008],0x3    ; 004a80a3
    JL 0x004a8138                       ; 004a80ab
        ;   XREF to: 004a8138 (CONDITIONAL_JUMP)  ; LAB_004a8138
    MOV EAX,[0x0061f650]                ; 004a80b1 | DAT_0061f650
    XOR ESI,ESI                         ; 004a80b6
    MOV EDI,dword ptr [EAX]             ; 004a80b8 | DAT_01d2c900
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004a80ba
    TEST EDI,EDI                        ; 004a80c1
    JL 0x004a812a                       ; 004a80c3
        ;   XREF to: 004a812a (CONDITIONAL_JUMP)  ; LAB_004a812a
    PUSH ESI                            ; 004a80c5
    LEA EAX,[ESP + 0x410]               ; 004a80c6
    PUSH EAX                            ; 004a80cd
    PUSH ESI                            ; 004a80ce
    PUSH ESI                            ; 004a80cf
    LEA EAX,[ESP + 0x904]               ; 004a80d0
    PUSH EAX                            ; 004a80d7
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004a80d8
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a80dd
    PUSH ESI                            ; 004a80e0
    LEA EAX,[ESP + 0x110]               ; 004a80e1
    PUSH EAX                            ; 004a80e8
    MOV EAX,[0x0061f650]                ; 004a80e9 | DAT_0061f650
    PUSH ESI                            ; 004a80ee
    MOV EDX,dword ptr [EAX]             ; 004a80ef | DAT_01d2c900
    ADD EAX,0x8                         ; 004a80f1
    SHL EDX,0x8                         ; 004a80f4
    PUSH ESI                            ; 004a80f7
    ADD EAX,EDX                         ; 004a80f8
    PUSH EAX                            ; 004a80fa
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004a80fb
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a8100
    LEA EAX,[ESP + 0x10c]               ; 004a8103
    PUSH EAX                            ; 004a810a
    LEA EAX,[ESP + 0x410]               ; 004a810b
    PUSH EAX                            ; 004a8112
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8113
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8118
    TEST EAX,EAX                        ; 004a811b
    JNZ 0x004a812a                      ; 004a811d
        ;   XREF to: 004a812a (CONDITIONAL_JUMP)  ; LAB_004a812a
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a811f
    MOV EAX,dword ptr [ESP + 0x1008]    ; 004a812a
        ;   Label: LAB_004a812a
    ADD dword ptr [EBX],EAX             ; 004a8131
    JMP 0x004a757c                      ; 004a8133
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de54b                    ; 004a8138 | = "Error parsing isCurrentSet parameters."
        ;   Label: LAB_004a8138
    MOV EDI,0x1c56ed0                   ; 004a813d
    PUSH EDI                            ; 004a8142 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8143 | = "Error parsing isCurrentSet parameters." | s_Error_parsing_isCurrentS_005de54b+2
        ;   Label: LAB_004a8143
    MOV byte ptr [EDI],AL               ; 004a8145 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8147
    JZ 0x004a815b                       ; 004a8149
        ;   XREF to: 004a815b (CONDITIONAL_JUMP)  ; LAB_004a815b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a814b | s_Error_parsing_isCurrentS_005de54b+1 | s_Error_parsing_isCurrentS_005de54b+3
    ADD ESI,0x2                         ; 004a814e
    MOV byte ptr [EDI + 0x1],AL         ; 004a8151 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8154
    CMP AL,0x0                          ; 004a8157
    JNZ 0x004a8143                      ; 004a8159
        ;   XREF to: 004a8143 (CONDITIONAL_JUMP)  ; LAB_004a8143
    POP EDI                             ; 004a815b
        ;   Label: LAB_004a815b
    MOV EAX,0xffffffff                  ; 004a815c
    MOV ESP,EBP                         ; 004a8161
    POP EBP                             ; 004a8163
    POP EDI                             ; 004a8164
    POP ESI                             ; 004a8165
    POP EBX                             ; 004a8166
    RET                                 ; 004a8167
    PUSH 0x5de572                       ; 004a8168 | = "isDead"
        ;   Label: LAB_004a8168
    LEA EAX,[ESP + 0xf38]               ; 004a816d
    PUSH EAX                            ; 004a8174
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8175
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a817a
    TEST EAX,EAX                        ; 004a817d
    JNZ 0x004a8265                      ; 004a817f
        ;   XREF to: 004a8265 (CONDITIONAL_JUMP)  ; LAB_004a8265
    LEA EAX,[ESP + 0x100c]              ; 004a8185
    MOV ESI,0xffffffff                  ; 004a818c
    PUSH EAX                            ; 004a8191
    LEA EAX,[ESP + 0x894]               ; 004a8192
    MOV dword ptr [ESP + 0x1010],ESI    ; 004a8199
    PUSH EAX                            ; 004a81a0
    MOV EAX,0x5de579                    ; 004a81a1 | = " ( %[^ )] )%n"
    MOV EDI,dword ptr [EBX]             ; 004a81a6
    PUSH EAX                            ; 004a81a8 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a81a9
    ADD EAX,EDI                         ; 004a81ac
    PUSH EAX                            ; 004a81ae
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a81af
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a81b4
    CMP dword ptr [ESP + 0x100c],0x3    ; 004a81b7
    JL 0x004a8205                       ; 004a81bf
        ;   XREF to: 004a8205 (CONDITIONAL_JUMP)  ; LAB_004a8205
    MOV EAX,0x7c6344                    ; 004a81c1 | g_CCharacterClassInfo
    PUSH EAX                            ; 004a81c6 | g_CCharacterClassInfo
    MOV EDX,dword ptr [0x007c637c]      ; 004a81c7 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004a81cd
    LEA EAX,[ESP + 0x898]               ; 004a81ce
    PUSH EAX                            ; 004a81d5
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a81d6
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a81db
    TEST EAX,EAX                        ; 004a81de
    JZ 0x004a71fd                       ; 004a81e0
        ;   XREF to: 004a71fd (CONDITIONAL_JUMP)  ; LAB_004a71fd
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a81e6 | DAT_005ffcb8
    JNZ 0x004a8235                      ; 004a81ec
        ;   XREF to: 004a8235 (CONDITIONAL_JUMP)  ; LAB_004a8235
    XOR ESI,ESI                         ; 004a81ee
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004a81f0
    MOV EAX,dword ptr [ESP + 0x100c]    ; 004a81f7
    ADD dword ptr [EBX],EAX             ; 004a81fe
    JMP 0x004a757c                      ; 004a8200
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de587                    ; 004a8205 | = "Error parsing isDead parameters."
        ;   Label: LAB_004a8205
    MOV EDI,0x1c56ed0                   ; 004a820a
    PUSH EDI                            ; 004a820f | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8210 | = "Error parsing isDead parameters." | s_Error_parsing_isDead_par_005de587+2
        ;   Label: LAB_004a8210
    MOV byte ptr [EDI],AL               ; 004a8212 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8214
    JZ 0x004a8228                       ; 004a8216
        ;   XREF to: 004a8228 (CONDITIONAL_JUMP)  ; LAB_004a8228
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8218 | s_Error_parsing_isDead_par_005de587+1 | s_Error_parsing_isDead_par_005de587+3
    ADD ESI,0x2                         ; 004a821b
    MOV byte ptr [EDI + 0x1],AL         ; 004a821e | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8221
    CMP AL,0x0                          ; 004a8224
    JNZ 0x004a8210                      ; 004a8226
        ;   XREF to: 004a8210 (CONDITIONAL_JUMP)  ; LAB_004a8210
    POP EDI                             ; 004a8228
        ;   Label: LAB_004a8228
    MOV EAX,0xffffffff                  ; 004a8229
    MOV ESP,EBP                         ; 004a822e
    POP EBP                             ; 004a8230
    POP EDI                             ; 004a8231
    POP ESI                             ; 004a8232
    POP EBX                             ; 004a8233
    RET                                 ; 004a8234
    PUSH EAX                            ; 004a8235
        ;   Label: LAB_004a8235
    MOV EDX,dword ptr [EAX + 0x154]     ; 004a8236
    CALL dword ptr [EDX + 0x10c]        ; 004a823c
    ADD ESP,0x4                         ; 004a8242
    CMP EAX,0x1                         ; 004a8245
    SETG AL                             ; 004a8248
    AND EAX,0xff                        ; 004a824b
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a8250
    MOV EAX,dword ptr [ESP + 0x100c]    ; 004a8257
    ADD dword ptr [EBX],EAX             ; 004a825e
    JMP 0x004a757c                      ; 004a8260
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de5a8                       ; 004a8265 | = "isFadeFinished"
        ;   Label: LAB_004a8265
    LEA EAX,[ESP + 0xf38]               ; 004a826a
    PUSH EAX                            ; 004a8271
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8272
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8277
    TEST EAX,EAX                        ; 004a827a
    JNZ 0x004a8302                      ; 004a827c
        ;   XREF to: 004a8302 (CONDITIONAL_JUMP)  ; LAB_004a8302
    MOV ESI,0xffffffff                  ; 004a8282
    LEA EAX,[ESP + 0x1010]              ; 004a8287
    MOV dword ptr [ESP + 0x1010],ESI    ; 004a828e
    PUSH EAX                            ; 004a8295
    MOV EAX,0x5de5b7                    ; 004a8296 | = " ( )%n"
    MOV EDI,dword ptr [EBX]             ; 004a829b
    PUSH EAX                            ; 004a829d | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a829e
    ADD EAX,EDI                         ; 004a82a1
    PUSH EAX                            ; 004a82a3
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a82a4
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a82a9
    MOV EAX,dword ptr [ESP + 0x1010]    ; 004a82ac
    CMP EAX,0x2                         ; 004a82b3
    JL 0x004a82d2                       ; 004a82b6
        ;   XREF to: 004a82d2 (CONDITIONAL_JUMP)  ; LAB_004a82d2
    MOV EDX,dword ptr [EBX]             ; 004a82b8
    MOV ECX,dword ptr [0x0061d95c]      ; 004a82ba | g_CGamePtr
    ADD EDX,EAX                         ; 004a82c0
    PUSH ECX                            ; 004a82c2 | g_CGameInstance
    MOV dword ptr [EBX],EDX             ; 004a82c3
    CALL core_game.cpp_CGame_fadeIn_FUN_004d62e0 ; 004a82c5
        ;   XREF to: 004d62e0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004d62e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004a82ca
    JMP 0x004a7575                      ; 004a82cd
        ;   XREF to: 004a7575 (UNCONDITIONAL_JUMP)  ; LAB_004a7575
    MOV ESI,0x5de5be                    ; 004a82d2 | = "Error parsing isFadeFinished function."
        ;   Label: LAB_004a82d2
    MOV EDI,0x1c56ed0                   ; 004a82d7
    PUSH EDI                            ; 004a82dc | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a82dd | = "Error parsing isFadeFinished function." | s_Error_parsing_isFadeFini_005de5be+2
        ;   Label: LAB_004a82dd
    MOV byte ptr [EDI],AL               ; 004a82df | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a82e1
    JZ 0x004a82f5                       ; 004a82e3
        ;   XREF to: 004a82f5 (CONDITIONAL_JUMP)  ; LAB_004a82f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004a82e5 | s_Error_parsing_isFadeFini_005de5be+1 | s_Error_parsing_isFadeFini_005de5be+3
    ADD ESI,0x2                         ; 004a82e8
    MOV byte ptr [EDI + 0x1],AL         ; 004a82eb | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a82ee
    CMP AL,0x0                          ; 004a82f1
    JNZ 0x004a82dd                      ; 004a82f3
        ;   XREF to: 004a82dd (CONDITIONAL_JUMP)  ; LAB_004a82dd
    POP EDI                             ; 004a82f5
        ;   Label: LAB_004a82f5
    MOV EAX,0xffffffff                  ; 004a82f6
    MOV ESP,EBP                         ; 004a82fb
    POP EBP                             ; 004a82fd
    POP EDI                             ; 004a82fe
    POP ESI                             ; 004a82ff
    POP EBX                             ; 004a8300
    RET                                 ; 004a8301
    PUSH 0x5de5e5                       ; 004a8302 | = "isInRange"
        ;   Label: LAB_004a8302
    LEA EAX,[ESP + 0xf38]               ; 004a8307
    PUSH EAX                            ; 004a830e
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a830f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8314
    TEST EAX,EAX                        ; 004a8317
    JNZ 0x004a851c                      ; 004a8319
        ;   XREF to: 004a851c (CONDITIONAL_JUMP)  ; LAB_004a851c
    MOV EDI,0xffffffff                  ; 004a831f
    LEA EAX,[ESP + 0x1014]              ; 004a8324
    MOV dword ptr [ESP + 0x1014],EDI    ; 004a832b
    PUSH EAX                            ; 004a8332
    MOV EAX,0x5de5ef                    ; 004a8333 | = " ( %n"
    MOV EDX,dword ptr [EBX]             ; 004a8338
    PUSH EAX                            ; 004a833a | = " ( %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a833b
    ADD EAX,EDX                         ; 004a833e
    PUSH EAX                            ; 004a8340
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8341
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a8346
    MOV ECX,dword ptr [ESP + 0x1014]    ; 004a8349
    CMP ECX,0x1                         ; 004a8350
    JL 0x004a8382                       ; 004a8353
        ;   XREF to: 004a8382 (CONDITIONAL_JUMP)  ; LAB_004a8382
    LEA EAX,[ESP + 0xf80]               ; 004a8355
    PUSH EAX                            ; 004a835c
    MOV ESI,dword ptr [EBX]             ; 004a835d
    PUSH EBX                            ; 004a835f
    MOV EDI,dword ptr [EBP + 0x18]      ; 004a8360
    ADD ESI,ECX                         ; 004a8363
    PUSH EDI                            ; 004a8365
    MOV dword ptr [EBX],ESI             ; 004a8366
    CALL core_event.cpp_parseVectorLocation_FUN_004a14a0 ; 004a8368
        ;   XREF to: 004a14a0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_parseVectorLocation_FUN_004a14a0()
    ADD ESP,0xc                         ; 004a836d
    MOV EDI,EAX                         ; 004a8370
    TEST EAX,EAX                        ; 004a8372
    JGE 0x004a83b2                      ; 004a8374
        ;   XREF to: 004a83b2 (CONDITIONAL_JUMP)  ; LAB_004a83b2
    MOV EAX,0xffffffff                  ; 004a8376
    MOV ESP,EBP                         ; 004a837b
    POP EBP                             ; 004a837d
    POP EDI                             ; 004a837e
    POP ESI                             ; 004a837f
    POP EBX                             ; 004a8380
    RET                                 ; 004a8381
    MOV ESI,0x5de5f5                    ; 004a8382 | = "Error parsing isInRange parameters."
        ;   Label: LAB_004a8382
    MOV EDI,0x1c56ed0                   ; 004a8387
    PUSH EDI                            ; 004a838c | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a838d | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005de5f5+2
        ;   Label: LAB_004a838d
    MOV byte ptr [EDI],AL               ; 004a838f | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8391
    JZ 0x004a83a5                       ; 004a8393
        ;   XREF to: 004a83a5 (CONDITIONAL_JUMP)  ; LAB_004a83a5
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8395 | s_Error_parsing_isInRange_005de5f5+1 | s_Error_parsing_isInRange_005de5f5+3
    ADD ESI,0x2                         ; 004a8398
    MOV byte ptr [EDI + 0x1],AL         ; 004a839b | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a839e
    CMP AL,0x0                          ; 004a83a1
    JNZ 0x004a838d                      ; 004a83a3
        ;   XREF to: 004a838d (CONDITIONAL_JUMP)  ; LAB_004a838d
    POP EDI                             ; 004a83a5
        ;   Label: LAB_004a83a5
    MOV EAX,0xffffffff                  ; 004a83a6
    MOV ESP,EBP                         ; 004a83ab
    POP EBP                             ; 004a83ad
    POP EDI                             ; 004a83ae
    POP ESI                             ; 004a83af
    POP EBX                             ; 004a83b0
    RET                                 ; 004a83b1
    MOV dword ptr [ESP + 0x1014],0xffffffff ; 004a83b2
        ;   Label: LAB_004a83b2
    LEA EAX,[ESP + 0x1014]              ; 004a83bd
    PUSH EAX                            ; 004a83c4
    MOV EAX,0x5de619                    ; 004a83c5 | = " , %n"
    MOV EDX,dword ptr [EBX]             ; 004a83ca
    PUSH EAX                            ; 004a83cc | = " , %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a83cd
    ADD EAX,EDX                         ; 004a83d0
    PUSH EAX                            ; 004a83d2
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a83d3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a83d8
    MOV ECX,dword ptr [ESP + 0x1014]    ; 004a83db
    CMP ECX,0x1                         ; 004a83e2
    JL 0x004a84ae                       ; 004a83e5
        ;   XREF to: 004a84ae (CONDITIONAL_JUMP)  ; LAB_004a84ae
    LEA EAX,[ESP + 0xf98]               ; 004a83eb
    PUSH EAX                            ; 004a83f2
    MOV ESI,dword ptr [EBX]             ; 004a83f3
    PUSH EBX                            ; 004a83f5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a83f6
    ADD ESI,ECX                         ; 004a83f9
    PUSH EAX                            ; 004a83fb
    MOV dword ptr [EBX],ESI             ; 004a83fc
    CALL core_event.cpp_parseVectorLocation_FUN_004a14a0 ; 004a83fe
        ;   XREF to: 004a14a0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_parseVectorLocation_FUN_004a14a0()
    ADD ESP,0xc                         ; 004a8403
    MOV ESI,EAX                         ; 004a8406
    TEST EAX,EAX                        ; 004a8408
    JL 0x004a84d2                       ; 004a840a
        ;   XREF to: 004a84d2 (CONDITIONAL_JUMP)  ; LAB_004a84d2
    LEA EAX,[ESP + 0x1014]              ; 004a8410
    MOV EDX,0xffffffff                  ; 004a8417
    PUSH EAX                            ; 004a841c
    LEA EAX,[ESP + 0x101c]              ; 004a841d
    MOV dword ptr [ESP + 0x1018],EDX    ; 004a8424
    PUSH EAX                            ; 004a842b
    MOV EAX,0x5de643                    ; 004a842c | = " , %f )%n"
    MOV ECX,dword ptr [EBX]             ; 004a8431
    PUSH EAX                            ; 004a8433 | = " , %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8434
    ADD EAX,ECX                         ; 004a8437
    PUSH EAX                            ; 004a8439
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a843a
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a843f
    MOV EAX,dword ptr [ESP + 0x1014]    ; 004a8442
    CMP EAX,0x3                         ; 004a8449
    JL 0x004a84de                       ; 004a844c
        ;   XREF to: 004a84de (CONDITIONAL_JUMP)  ; LAB_004a84de
    ADD dword ptr [EBX],EAX             ; 004a8452
    TEST EDI,EDI                        ; 004a8454
    JZ 0x004a850e                       ; 004a8456
        ;   XREF to: 004a850e (CONDITIONAL_JUMP)  ; LAB_004a850e
    TEST ESI,ESI                        ; 004a845c
    JZ 0x004a850e                       ; 004a845e
        ;   XREF to: 004a850e (CONDITIONAL_JUMP)  ; LAB_004a850e
    FLD float ptr [ESP + 0xf80]         ; 004a8464
    FSUB float ptr [ESP + 0xf98]        ; 004a846b
    FMUL ST0                            ; 004a8472
    FLD float ptr [ESP + 0xf84]         ; 004a8474
    FSUB float ptr [ESP + 0xf9c]        ; 004a847b
    FMUL ST0                            ; 004a8482
    FLD float ptr [ESP + 0xf88]         ; 004a8484
    FXCH                                ; 004a848b
    FADDP ST2,ST0                       ; 004a848d
    FSUB float ptr [ESP + 0xfa0]        ; 004a848f
    FMUL ST0                            ; 004a8496
    FADDP                               ; 004a8498
    FSQRT                               ; 004a849a
    FCOMP float ptr [ESP + 0x1018]      ; 004a849c
    FNSTSW AX                           ; 004a84a3
    SAHF                                ; 004a84a5
    SETBE AL                            ; 004a84a6
    JMP 0x004a7570                      ; 004a84a9
        ;   XREF to: 004a7570 (UNCONDITIONAL_JUMP)  ; LAB_004a7570
    MOV ESI,0x5de61f                    ; 004a84ae | = "Error parsing isInRange parameters."
        ;   Label: LAB_004a84ae
    MOV EDI,0x1c56ed0                   ; 004a84b3
    PUSH EDI                            ; 004a84b8 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a84b9 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005de61f+2
        ;   Label: LAB_004a84b9
    MOV byte ptr [EDI],AL               ; 004a84bb | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a84bd
    JZ 0x004a84d1                       ; 004a84bf
        ;   XREF to: 004a84d1 (CONDITIONAL_JUMP)  ; LAB_004a84d1
    MOV AL,byte ptr [ESI + 0x1]         ; 004a84c1 | s_Error_parsing_isInRange_005de61f+1 | s_Error_parsing_isInRange_005de61f+3
    ADD ESI,0x2                         ; 004a84c4
    MOV byte ptr [EDI + 0x1],AL         ; 004a84c7 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a84ca
    CMP AL,0x0                          ; 004a84cd
    JNZ 0x004a84b9                      ; 004a84cf
        ;   XREF to: 004a84b9 (CONDITIONAL_JUMP)  ; LAB_004a84b9
    POP EDI                             ; 004a84d1
        ;   Label: LAB_004a84d1
    MOV EAX,0xffffffff                  ; 004a84d2
        ;   Label: LAB_004a84d2
    MOV ESP,EBP                         ; 004a84d7
    POP EBP                             ; 004a84d9
    POP EDI                             ; 004a84da
    POP ESI                             ; 004a84db
    POP EBX                             ; 004a84dc
    RET                                 ; 004a84dd
    MOV ESI,0x5de64d                    ; 004a84de | = "Error parsing isInRange parameters."
        ;   Label: LAB_004a84de
    MOV EDI,0x1c56ed0                   ; 004a84e3
    PUSH EDI                            ; 004a84e8 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a84e9 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005de64d+2
        ;   Label: LAB_004a84e9
    MOV byte ptr [EDI],AL               ; 004a84eb | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a84ed
    JZ 0x004a8501                       ; 004a84ef
        ;   XREF to: 004a8501 (CONDITIONAL_JUMP)  ; LAB_004a8501
    MOV AL,byte ptr [ESI + 0x1]         ; 004a84f1 | s_Error_parsing_isInRange_005de64d+1 | s_Error_parsing_isInRange_005de64d+3
    ADD ESI,0x2                         ; 004a84f4
    MOV byte ptr [EDI + 0x1],AL         ; 004a84f7 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a84fa
    CMP AL,0x0                          ; 004a84fd
    JNZ 0x004a84e9                      ; 004a84ff
        ;   XREF to: 004a84e9 (CONDITIONAL_JUMP)  ; LAB_004a84e9
    POP EDI                             ; 004a8501
        ;   Label: LAB_004a8501
    MOV EAX,0xffffffff                  ; 004a8502
    MOV ESP,EBP                         ; 004a8507
    POP EBP                             ; 004a8509
    POP EDI                             ; 004a850a
    POP ESI                             ; 004a850b
    POP EBX                             ; 004a850c
    RET                                 ; 004a850d
    XOR ECX,ECX                         ; 004a850e
        ;   Label: LAB_004a850e
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004a8510
    JMP 0x004a757c                      ; 004a8517
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de671                       ; 004a851c | = "isOfType"
        ;   Label: LAB_004a851c
    LEA EAX,[ESP + 0xf38]               ; 004a8521
    PUSH EAX                            ; 004a8528
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8529
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a852e
    TEST EAX,EAX                        ; 004a8531
    JNZ 0x004a8703                      ; 004a8533
        ;   XREF to: 004a8703 (CONDITIONAL_JUMP)  ; LAB_004a8703
    LEA EAX,[ESP + 0x1028]              ; 004a8539
    PUSH EAX                            ; 004a8540
    LEA EAX,[ESP + 0x830]               ; 004a8541
    MOV EDX,0xffffffff                  ; 004a8548
    PUSH EAX                            ; 004a854d
    LEA EAX,[ESP + 0xd48]               ; 004a854e
    MOV dword ptr [ESP + 0x1030],EDX    ; 004a8555
    PUSH EAX                            ; 004a855c
    MOV EAX,0x5de67a                    ; 004a855d | = " ( %[^ ,] , %[^ )] )%n"
    MOV ECX,dword ptr [EBX]             ; 004a8562
    PUSH EAX                            ; 004a8564 | = " ( %[^ ,] , %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8565
    ADD EAX,ECX                         ; 004a8568
    PUSH EAX                            ; 004a856a
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a856b
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 004a8570
    CMP dword ptr [ESP + 0x1028],0x3    ; 004a8573
    JL 0x004a85e4                       ; 004a857b
        ;   XREF to: 004a85e4 (CONDITIONAL_JUMP)  ; LAB_004a85e4
    LEA ESI,[ESP + 0xd40]               ; 004a857d
    MOV EDI,ESI                         ; 004a8584
    SUB ECX,ECX                         ; 004a8586
    DEC ECX                             ; 004a8588
    XOR EAX,EAX                         ; 004a8589
    SCASB.REPNE ES:EDI                  ; 004a858b
    NOT ECX                             ; 004a858d
    DEC ECX                             ; 004a858f
    MOV EDI,ECX                         ; 004a8590
    TEST ECX,ECX                        ; 004a8592
    JLE 0x004a85ad                      ; 004a8594
        ;   XREF to: 004a85ad (CONDITIONAL_JUMP)  ; LAB_004a85ad
    LEA EAX,[ECX + ESI*0x1]             ; 004a8596
    MOV DL,byte ptr [EAX + -0x1]        ; 004a8599
        ;   Label: LAB_004a8599
    INC DL                              ; 004a859c
    AND EDX,0xff                        ; 004a859e
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a85a4 | DAT_00626114
    JNZ 0x004a8614                      ; 004a85ab
        ;   XREF to: 004a8614 (CONDITIONAL_JUMP)  ; LAB_004a8614
    LEA EAX,[ESI + EDI*0x1]             ; 004a85ad
        ;   Label: LAB_004a85ad
    MOV byte ptr [EAX],0x0              ; 004a85b0
    LEA EAX,[ESI + 0x1]                 ; 004a85b3
    MOV dword ptr [ESP + 0x1030],EAX    ; 004a85b6
    MOV AL,byte ptr [ESI]               ; 004a85bd
        ;   Label: LAB_004a85bd
    INC AL                              ; 004a85bf
    AND EAX,0xff                        ; 004a85c1
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a85c6 | DAT_00626114
    JZ 0x004a8620                       ; 004a85cd
        ;   XREF to: 004a8620 (CONDITIONAL_JUMP)  ; LAB_004a8620
    PUSH EDI                            ; 004a85cf
    MOV EDX,dword ptr [ESP + 0x1034]    ; 004a85d0
    PUSH EDX                            ; 004a85d7
    PUSH ESI                            ; 004a85d8
    DEC EDI                             ; 004a85d9
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a85da
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a85df
    JMP 0x004a85bd                      ; 004a85e2
        ;   XREF to: 004a85bd (UNCONDITIONAL_JUMP)  ; LAB_004a85bd
    MOV ESI,0x5de691                    ; 004a85e4 | = "Error parsing isOfType parameters."
        ;   Label: LAB_004a85e4
    MOV EDI,0x1c56ed0                   ; 004a85e9
    PUSH EDI                            ; 004a85ee | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a85ef | = "Error parsing isOfType parameters." | s_Error_parsing_isOfType_p_005de691+2
        ;   Label: LAB_004a85ef
    MOV byte ptr [EDI],AL               ; 004a85f1 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a85f3
    JZ 0x004a8607                       ; 004a85f5
        ;   XREF to: 004a8607 (CONDITIONAL_JUMP)  ; LAB_004a8607
    MOV AL,byte ptr [ESI + 0x1]         ; 004a85f7 | s_Error_parsing_isOfType_p_005de691+1 | s_Error_parsing_isOfType_p_005de691+3
    ADD ESI,0x2                         ; 004a85fa
    MOV byte ptr [EDI + 0x1],AL         ; 004a85fd | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8600
    CMP AL,0x0                          ; 004a8603
    JNZ 0x004a85ef                      ; 004a8605
        ;   XREF to: 004a85ef (CONDITIONAL_JUMP)  ; LAB_004a85ef
    POP EDI                             ; 004a8607
        ;   Label: LAB_004a8607
    MOV EAX,0xffffffff                  ; 004a8608
        ;   Label: LAB_004a8608
    MOV ESP,EBP                         ; 004a860d
    POP EBP                             ; 004a860f
    POP EDI                             ; 004a8610
    POP ESI                             ; 004a8611
    POP EBX                             ; 004a8612
    RET                                 ; 004a8613
    DEC EDI                             ; 004a8614
        ;   Label: LAB_004a8614
    DEC EAX                             ; 004a8615
    TEST EDI,EDI                        ; 004a8616
    JG 0x004a8599                       ; 004a8618
        ;   XREF to: 004a8599 (CONDITIONAL_JUMP)  ; LAB_004a8599
    JMP 0x004a85ad                      ; 004a861e
        ;   XREF to: 004a85ad (UNCONDITIONAL_JUMP)  ; LAB_004a85ad
    LEA EDI,[ESP + 0x82c]               ; 004a8620
        ;   Label: LAB_004a8620
    LEA ESI,[ESP + 0x82c]               ; 004a8627
    SUB ECX,ECX                         ; 004a862e
    DEC ECX                             ; 004a8630
    XOR EAX,EAX                         ; 004a8631
    SCASB.REPNE ES:EDI                  ; 004a8633
    NOT ECX                             ; 004a8635
    DEC ECX                             ; 004a8637
    MOV EDI,ECX                         ; 004a8638
    TEST ECX,ECX                        ; 004a863a
    JLE 0x004a865b                      ; 004a863c
        ;   XREF to: 004a865b (CONDITIONAL_JUMP)  ; LAB_004a865b
    LEA EAX,[ESP + 0x82c]               ; 004a863e
    ADD EAX,ECX                         ; 004a8645
    MOV DL,byte ptr [EAX + -0x1]        ; 004a8647
        ;   Label: LAB_004a8647
    INC DL                              ; 004a864a
    AND EDX,0xff                        ; 004a864c
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a8652 | DAT_00626114
    JNZ 0x004a8692                      ; 004a8659
        ;   XREF to: 004a8692 (CONDITIONAL_JUMP)  ; LAB_004a8692
    LEA EAX,[ESI + EDI*0x1]             ; 004a865b
        ;   Label: LAB_004a865b
    MOV byte ptr [EAX],0x0              ; 004a865e
    LEA EAX,[ESI + 0x1]                 ; 004a8661
    MOV dword ptr [ESP + 0x1034],EAX    ; 004a8664
    MOV AL,byte ptr [ESI]               ; 004a866b
        ;   Label: LAB_004a866b
    INC AL                              ; 004a866d
    AND EAX,0xff                        ; 004a866f
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a8674 | DAT_00626114
    JZ 0x004a869a                       ; 004a867b
        ;   XREF to: 004a869a (CONDITIONAL_JUMP)  ; LAB_004a869a
    PUSH EDI                            ; 004a867d
    MOV ECX,dword ptr [ESP + 0x1038]    ; 004a867e
    PUSH ECX                            ; 004a8685
    PUSH ESI                            ; 004a8686
    DEC EDI                             ; 004a8687
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a8688
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a868d
    JMP 0x004a866b                      ; 004a8690
        ;   XREF to: 004a866b (UNCONDITIONAL_JUMP)  ; LAB_004a866b
    DEC EDI                             ; 004a8692
        ;   Label: LAB_004a8692
    DEC EAX                             ; 004a8693
    TEST EDI,EDI                        ; 004a8694
    JG 0x004a8647                       ; 004a8696
        ;   XREF to: 004a8647 (CONDITIONAL_JUMP)  ; LAB_004a8647
    JMP 0x004a865b                      ; 004a8698
        ;   XREF to: 004a865b (UNCONDITIONAL_JUMP)  ; LAB_004a865b
    PUSH 0x7c2ff8                       ; 004a869a | g_CDemonActorClassInfo
        ;   Label: LAB_004a869a
    MOV ECX,dword ptr [0x007c3030]      ; 004a869f | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 004a86a5
    LEA EAX,[ESP + 0xd48]               ; 004a86a6
    PUSH EAX                            ; 004a86ad
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a86ae
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a86b3
    TEST EAX,EAX                        ; 004a86b6
    JZ 0x004a8608                       ; 004a86b8
        ;   XREF to: 004a8608 (CONDITIONAL_JUMP)  ; LAB_004a8608
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a86be | DAT_005ffcb8
    JNZ 0x004a86dd                      ; 004a86c4
        ;   XREF to: 004a86dd (CONDITIONAL_JUMP)  ; LAB_004a86dd
    XOR EDI,EDI                         ; 004a86c6
    MOV dword ptr [ESP + 0xfbc],EDI     ; 004a86c8
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004a86cf
    ADD dword ptr [EBX],EAX             ; 004a86d6
    JMP 0x004a757c                      ; 004a86d8
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    LEA EDX,[ESP + 0x82c]               ; 004a86dd
        ;   Label: LAB_004a86dd
    PUSH EDX                            ; 004a86e4
    PUSH EAX                            ; 004a86e5
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004a86e6
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004a86eb
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a86ee
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004a86f5
    ADD dword ptr [EBX],EAX             ; 004a86fc
    JMP 0x004a757c                      ; 004a86fe
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de6b4                       ; 004a8703 | = "isFacing"
        ;   Label: LAB_004a8703
    LEA EAX,[ESP + 0xf38]               ; 004a8708
    PUSH EAX                            ; 004a870f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8710
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8715
    TEST EAX,EAX                        ; 004a8718
    JNZ 0x004a8aaf                      ; 004a871a
        ;   XREF to: 004a8aaf (CONDITIONAL_JUMP)  ; LAB_004a8aaf
    LEA EAX,[ESP + 0x1038]              ; 004a8720
    PUSH EAX                            ; 004a8727
    LEA EAX,[ESP + 0xda8]               ; 004a8728
    MOV ESI,0xffffffff                  ; 004a872f
    PUSH EAX                            ; 004a8734
    LEA EAX,[ESP + 0xe10]               ; 004a8735
    MOV dword ptr [ESP + 0x1040],ESI    ; 004a873c
    PUSH EAX                            ; 004a8743
    MOV EAX,0x5de6bd                    ; 004a8744 | = " (%[^,], %[^,)]%n"
    MOV EDI,dword ptr [EBX]             ; 004a8749
    PUSH EAX                            ; 004a874b | = " (%[^,], %[^,)]%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a874c
    ADD EAX,EDI                         ; 004a874f
    PUSH EAX                            ; 004a8751
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8752
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 004a8757
    CMP dword ptr [ESP + 0x1038],0x5    ; 004a875a
    JL 0x004a87cb                       ; 004a8762
        ;   XREF to: 004a87cb (CONDITIONAL_JUMP)  ; LAB_004a87cb
    LEA ESI,[ESP + 0xe08]               ; 004a8764
    MOV EDI,ESI                         ; 004a876b
    SUB ECX,ECX                         ; 004a876d
    DEC ECX                             ; 004a876f
    XOR EAX,EAX                         ; 004a8770
    SCASB.REPNE ES:EDI                  ; 004a8772
    NOT ECX                             ; 004a8774
    DEC ECX                             ; 004a8776
    MOV EDI,ECX                         ; 004a8777
    TEST ECX,ECX                        ; 004a8779
    JLE 0x004a8794                      ; 004a877b
        ;   XREF to: 004a8794 (CONDITIONAL_JUMP)  ; LAB_004a8794
    LEA EAX,[ECX + ESI*0x1]             ; 004a877d
    MOV DL,byte ptr [EAX + -0x1]        ; 004a8780
        ;   Label: LAB_004a8780
    INC DL                              ; 004a8783
    AND EDX,0xff                        ; 004a8785
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a878b | DAT_00626114
    JNZ 0x004a87fb                      ; 004a8792
        ;   XREF to: 004a87fb (CONDITIONAL_JUMP)  ; LAB_004a87fb
    LEA EAX,[ESI + EDI*0x1]             ; 004a8794
        ;   Label: LAB_004a8794
    MOV byte ptr [EAX],0x0              ; 004a8797
    LEA EAX,[ESI + 0x1]                 ; 004a879a
    MOV dword ptr [ESP + 0x103c],EAX    ; 004a879d
    MOV AL,byte ptr [ESI]               ; 004a87a4
        ;   Label: LAB_004a87a4
    INC AL                              ; 004a87a6
    AND EAX,0xff                        ; 004a87a8
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a87ad | DAT_00626114
    JZ 0x004a8807                       ; 004a87b4
        ;   XREF to: 004a8807 (CONDITIONAL_JUMP)  ; LAB_004a8807
    PUSH EDI                            ; 004a87b6
    MOV EDX,dword ptr [ESP + 0x1040]    ; 004a87b7
    PUSH EDX                            ; 004a87be
    PUSH ESI                            ; 004a87bf
    DEC EDI                             ; 004a87c0
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a87c1
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a87c6
    JMP 0x004a87a4                      ; 004a87c9
        ;   XREF to: 004a87a4 (UNCONDITIONAL_JUMP)  ; LAB_004a87a4
    MOV ESI,0x5de6cf                    ; 004a87cb | = "Error parsing isFacing parameters."
        ;   Label: LAB_004a87cb
    MOV EDI,0x1c56ed0                   ; 004a87d0
    PUSH EDI                            ; 004a87d5 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a87d6 | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005de6cf+2
        ;   Label: LAB_004a87d6
    MOV byte ptr [EDI],AL               ; 004a87d8 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a87da
    JZ 0x004a87ee                       ; 004a87dc
        ;   XREF to: 004a87ee (CONDITIONAL_JUMP)  ; LAB_004a87ee
    MOV AL,byte ptr [ESI + 0x1]         ; 004a87de | s_Error_parsing_isFacing_p_005de6cf+1 | s_Error_parsing_isFacing_p_005de6cf+3
    ADD ESI,0x2                         ; 004a87e1
    MOV byte ptr [EDI + 0x1],AL         ; 004a87e4 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a87e7
    CMP AL,0x0                          ; 004a87ea
    JNZ 0x004a87d6                      ; 004a87ec
        ;   XREF to: 004a87d6 (CONDITIONAL_JUMP)  ; LAB_004a87d6
    POP EDI                             ; 004a87ee
        ;   Label: LAB_004a87ee
    MOV EAX,0xffffffff                  ; 004a87ef
    MOV ESP,EBP                         ; 004a87f4
    POP EBP                             ; 004a87f6
    POP EDI                             ; 004a87f7
    POP ESI                             ; 004a87f8
    POP EBX                             ; 004a87f9
    RET                                 ; 004a87fa
    DEC EDI                             ; 004a87fb
        ;   Label: LAB_004a87fb
    DEC EAX                             ; 004a87fc
    TEST EDI,EDI                        ; 004a87fd
    JG 0x004a8780                       ; 004a87ff
        ;   XREF to: 004a8780 (CONDITIONAL_JUMP)  ; LAB_004a8780
    JMP 0x004a8794                      ; 004a8805
        ;   XREF to: 004a8794 (UNCONDITIONAL_JUMP)  ; LAB_004a8794
    LEA EAX,[ESP + 0xda4]               ; 004a8807
        ;   Label: LAB_004a8807
    LEA EDI,[ESP + 0xda4]               ; 004a880e
    MOV dword ptr [ESP + 0x1040],EAX    ; 004a8815
    SUB ECX,ECX                         ; 004a881c
    DEC ECX                             ; 004a881e
    XOR EAX,EAX                         ; 004a881f
    SCASB.REPNE ES:EDI                  ; 004a8821
    NOT ECX                             ; 004a8823
    DEC ECX                             ; 004a8825
    MOV ESI,ECX                         ; 004a8826
    TEST ECX,ECX                        ; 004a8828
    JLE 0x004a8849                      ; 004a882a
        ;   XREF to: 004a8849 (CONDITIONAL_JUMP)  ; LAB_004a8849
    LEA EAX,[ESP + 0xda4]               ; 004a882c
    ADD EAX,ECX                         ; 004a8833
    MOV DL,byte ptr [EAX + -0x1]        ; 004a8835
        ;   Label: LAB_004a8835
    INC DL                              ; 004a8838
    AND EDX,0xff                        ; 004a883a
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a8840 | DAT_00626114
    JNZ 0x004a8885                      ; 004a8847
        ;   XREF to: 004a8885 (CONDITIONAL_JUMP)  ; LAB_004a8885
    MOV EAX,dword ptr [ESP + 0x1040]    ; 004a8849
        ;   Label: LAB_004a8849
    LEA EDI,[EAX + 0x1]                 ; 004a8850
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 004a8853
    MOV EAX,dword ptr [ESP + 0x1040]    ; 004a8857
        ;   Label: LAB_004a8857
    MOV AL,byte ptr [EAX]               ; 004a885e
    INC AL                              ; 004a8860
    AND EAX,0xff                        ; 004a8862
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a8867 | DAT_00626114
    JZ 0x004a888d                       ; 004a886e
        ;   XREF to: 004a888d (CONDITIONAL_JUMP)  ; LAB_004a888d
    PUSH ESI                            ; 004a8870
    PUSH EDI                            ; 004a8871
    MOV EAX,dword ptr [ESP + 0x1048]    ; 004a8872
    PUSH EAX                            ; 004a8879
    DEC ESI                             ; 004a887a
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a887b
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a8880
    JMP 0x004a8857                      ; 004a8883
        ;   XREF to: 004a8857 (UNCONDITIONAL_JUMP)  ; LAB_004a8857
    DEC ESI                             ; 004a8885
        ;   Label: LAB_004a8885
    DEC EAX                             ; 004a8886
    TEST ESI,ESI                        ; 004a8887
    JG 0x004a8835                       ; 004a8889
        ;   XREF to: 004a8835 (CONDITIONAL_JUMP)  ; LAB_004a8835
    JMP 0x004a8849                      ; 004a888b
        ;   XREF to: 004a8849 (UNCONDITIONAL_JUMP)  ; LAB_004a8849
    PUSH 0x7c2ff8                       ; 004a888d | g_CDemonActorClassInfo
        ;   Label: LAB_004a888d
    MOV ECX,dword ptr [0x007c3030]      ; 004a8892 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 004a8898
    LEA EAX,[ESP + 0xe10]               ; 004a8899
    PUSH EAX                            ; 004a88a0
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a88a1
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a88a6
    MOV EDI,EAX                         ; 004a88a9
    TEST EAX,EAX                        ; 004a88ab
    JNZ 0x004a88bb                      ; 004a88ad
        ;   XREF to: 004a88bb (CONDITIONAL_JUMP)  ; LAB_004a88bb
    MOV EAX,0xffffffff                  ; 004a88af
        ;   Label: LAB_004a88af
    MOV ESP,EBP                         ; 004a88b4
    POP EBP                             ; 004a88b6
    POP EDI                             ; 004a88b7
    POP ESI                             ; 004a88b8
    POP EBX                             ; 004a88b9
    RET                                 ; 004a88ba
    PUSH 0x7c2ff8                       ; 004a88bb | g_CDemonActorClassInfo
        ;   Label: LAB_004a88bb
    MOV ESI,dword ptr [0x007c3030]      ; 004a88c0 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 004a88c6
    LEA EAX,[ESP + 0xdac]               ; 004a88c7
    PUSH EAX                            ; 004a88ce
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a88cf
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a88d4
    MOV ESI,EAX                         ; 004a88d7
    TEST EAX,EAX                        ; 004a88d9
    JZ 0x004a88af                       ; 004a88db
        ;   XREF to: 004a88af (CONDITIONAL_JUMP)  ; LAB_004a88af
    MOV EAX,dword ptr [ESP + 0x1038]    ; 004a88dd
    MOV EDX,dword ptr [EBX]             ; 004a88e4
    ADD EDX,EAX                         ; 004a88e6
    MOV ECX,0x42340000                  ; 004a88e8
    MOV dword ptr [EBX],EDX             ; 004a88ed
    MOV dword ptr [ESP + 0x8],ECX       ; 004a88ef
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a88f3
    ADD EAX,dword ptr [EBX]             ; 004a88f6
    CMP byte ptr [EAX],0x2c             ; 004a88f8
    JZ 0x004a892e                       ; 004a88fb
        ;   XREF to: 004a892e (CONDITIONAL_JUMP)  ; LAB_004a892e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a88fd
        ;   Label: LAB_004a88fd
    MOV ECX,dword ptr [EBX]             ; 004a8900
    ADD EAX,ECX                         ; 004a8902
    CMP byte ptr [EAX],0x29             ; 004a8904
    JNZ 0x004a89f0                      ; 004a8907
        ;   XREF to: 004a89f0 (CONDITIONAL_JUMP)  ; LAB_004a89f0
    LEA EAX,[ECX + 0x1]                 ; 004a890d
    MOV EDX,dword ptr [0x005ffcb8]      ; 004a8910 | DAT_005ffcb8
    MOV dword ptr [EBX],EAX             ; 004a8916
    CMP EDI,EDX                         ; 004a8918
    JNZ 0x004a8a20                      ; 004a891a
        ;   XREF to: 004a8a20 (CONDITIONAL_JUMP)  ; LAB_004a8a20
    XOR EDI,EDI                         ; 004a8920
        ;   Label: LAB_004a8920
    MOV dword ptr [ESP + 0xfbc],EDI     ; 004a8922
    JMP 0x004a757c                      ; 004a8929
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    LEA EAX,[ESP + 0x1038]              ; 004a892e
        ;   Label: LAB_004a892e
    MOV ECX,0xffffffff                  ; 004a8935
    PUSH EAX                            ; 004a893a
    LEA EAX,[ESP + 0xc]                 ; 004a893b
    MOV dword ptr [ESP + 0x103c],ECX    ; 004a893f
    PUSH EAX                            ; 004a8946
    MOV EDX,dword ptr [EBX]             ; 004a8947
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8949
    PUSH 0x5de6f2                       ; 004a894c | = ",%f %n"
    ADD EAX,EDX                         ; 004a8951
    PUSH EAX                            ; 004a8953
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8954
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a8959
    MOV ECX,dword ptr [ESP + 0x1038]    ; 004a895c
    CMP ECX,0x2                         ; 004a8963
    JL 0x004a8990                       ; 004a8966
        ;   XREF to: 004a8990 (CONDITIONAL_JUMP)  ; LAB_004a8990
    FLD float ptr [ESP + 0x8]           ; 004a8968
    FLDZ                                ; 004a896c
    FXCH                                ; 004a896e
    FSTP double ptr [ESP]               ; 004a8970
    FCOMP double ptr [ESP]              ; 004a8973
    FNSTSW AX                           ; 004a8976
    SAHF                                ; 004a8978
    JA 0x004a89c0                       ; 004a8979
        ;   XREF to: 004a89c0 (CONDITIONAL_JUMP)  ; LAB_004a89c0
    FLD double ptr [ESP]                ; 004a897b
    FCOMP double ptr [0x005dea94]       ; 004a897e | DAT_005dea94
    FNSTSW AX                           ; 004a8984
    SAHF                                ; 004a8986
    JA 0x004a89c0                       ; 004a8987
        ;   XREF to: 004a89c0 (CONDITIONAL_JUMP)  ; LAB_004a89c0
    ADD dword ptr [EBX],ECX             ; 004a8989
    JMP 0x004a88fd                      ; 004a898b
        ;   XREF to: 004a88fd (UNCONDITIONAL_JUMP)  ; LAB_004a88fd
    MOV ESI,0x5de6f9                    ; 004a8990 | = "Error parsing isFacing parameters."
        ;   Label: LAB_004a8990
    MOV EDI,0x1c56ed0                   ; 004a8995
    PUSH EDI                            ; 004a899a | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a899b | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005de6f9+2
        ;   Label: LAB_004a899b
    MOV byte ptr [EDI],AL               ; 004a899d | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a899f
    JZ 0x004a89b3                       ; 004a89a1
        ;   XREF to: 004a89b3 (CONDITIONAL_JUMP)  ; LAB_004a89b3
    MOV AL,byte ptr [ESI + 0x1]         ; 004a89a3 | s_Error_parsing_isFacing_p_005de6f9+1 | s_Error_parsing_isFacing_p_005de6f9+3
    ADD ESI,0x2                         ; 004a89a6
    MOV byte ptr [EDI + 0x1],AL         ; 004a89a9 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a89ac
    CMP AL,0x0                          ; 004a89af
    JNZ 0x004a899b                      ; 004a89b1
        ;   XREF to: 004a899b (CONDITIONAL_JUMP)  ; LAB_004a899b
    POP EDI                             ; 004a89b3
        ;   Label: LAB_004a89b3
    MOV EAX,0xffffffff                  ; 004a89b4
    MOV ESP,EBP                         ; 004a89b9
    POP EBP                             ; 004a89bb
    POP EDI                             ; 004a89bc
    POP ESI                             ; 004a89bd
    POP EBX                             ; 004a89be
    RET                                 ; 004a89bf
    MOV ESI,0x5de71c                    ; 004a89c0 | = "isFacing() angle must be in range 0....."
        ;   Label: LAB_004a89c0
    MOV EDI,0x1c56ed0                   ; 004a89c5
    PUSH EDI                            ; 004a89ca | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a89cb | = "isFacing() angle must be in range 0....." | s_isFacing_angle_must_be_i_005de71c+2
        ;   Label: LAB_004a89cb
    MOV byte ptr [EDI],AL               ; 004a89cd | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a89cf
    JZ 0x004a89e3                       ; 004a89d1
        ;   XREF to: 004a89e3 (CONDITIONAL_JUMP)  ; LAB_004a89e3
    MOV AL,byte ptr [ESI + 0x1]         ; 004a89d3 | s_isFacing_angle_must_be_i_005de71c+1 | s_isFacing_angle_must_be_i_005de71c+3
    ADD ESI,0x2                         ; 004a89d6
    MOV byte ptr [EDI + 0x1],AL         ; 004a89d9 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a89dc
    CMP AL,0x0                          ; 004a89df
    JNZ 0x004a89cb                      ; 004a89e1
        ;   XREF to: 004a89cb (CONDITIONAL_JUMP)  ; LAB_004a89cb
    POP EDI                             ; 004a89e3
        ;   Label: LAB_004a89e3
    MOV EAX,0xffffffff                  ; 004a89e4
    MOV ESP,EBP                         ; 004a89e9
    POP EBP                             ; 004a89eb
    POP EDI                             ; 004a89ec
    POP ESI                             ; 004a89ed
    POP EBX                             ; 004a89ee
    RET                                 ; 004a89ef
    MOV ESI,0x5de746                    ; 004a89f0 | = "Error parsing isFacing parameters."
        ;   Label: LAB_004a89f0
    MOV EDI,0x1c56ed0                   ; 004a89f5
    PUSH EDI                            ; 004a89fa | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a89fb | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005de746+2
        ;   Label: LAB_004a89fb
    MOV byte ptr [EDI],AL               ; 004a89fd | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a89ff
    JZ 0x004a8a13                       ; 004a8a01
        ;   XREF to: 004a8a13 (CONDITIONAL_JUMP)  ; LAB_004a8a13
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8a03 | s_Error_parsing_isFacing_p_005de746+1 | s_Error_parsing_isFacing_p_005de746+3
    ADD ESI,0x2                         ; 004a8a06
    MOV byte ptr [EDI + 0x1],AL         ; 004a8a09 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8a0c
    CMP AL,0x0                          ; 004a8a0f
    JNZ 0x004a89fb                      ; 004a8a11
        ;   XREF to: 004a89fb (CONDITIONAL_JUMP)  ; LAB_004a89fb
    POP EDI                             ; 004a8a13
        ;   Label: LAB_004a8a13
    MOV EAX,0xffffffff                  ; 004a8a14
    MOV ESP,EBP                         ; 004a8a19
    POP EBP                             ; 004a8a1b
    POP EDI                             ; 004a8a1c
    POP ESI                             ; 004a8a1d
    POP EBX                             ; 004a8a1e
    RET                                 ; 004a8a1f
    CMP ESI,EDX                         ; 004a8a20
        ;   Label: LAB_004a8a20
    JZ 0x004a8920                       ; 004a8a22
        ;   XREF to: 004a8920 (CONDITIONAL_JUMP)  ; LAB_004a8920
    ADD ESI,0x20                        ; 004a8a28
    PUSH ESI                            ; 004a8a2b
    PUSH EDI                            ; 004a8a2c
    LEA ESI,[ESP + 0xfac]               ; 004a8a2d
    CALL core_actor.cpp_FUN_00408bb0    ; 004a8a34
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA EDI,[ESP + 0xf94]               ; 004a8a39
    LEA ESI,[ESP + 0xfac]               ; 004a8a40
    ADD ESP,0x8                         ; 004a8a47
    MOVSD ES:EDI,ESI                    ; 004a8a4a
    MOVSD ES:EDI,ESI                    ; 004a8a4b
    MOVSD ES:EDI,ESI                    ; 004a8a4c
    LEA EAX,[ESP + 0xf8c]               ; 004a8a4d
    XOR ESI,ESI                         ; 004a8a54
    PUSH EAX                            ; 004a8a56
    MOV dword ptr [ESP + 0xf94],ESI     ; 004a8a57
    LEA ESI,[ESP + 0xfb4]               ; 004a8a5e
    LEA EDI,[ESP + 0xf78]               ; 004a8a65
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004a8a6c
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xfb4]               ; 004a8a71
    ADD ESP,0x4                         ; 004a8a78
    MOVSD ES:EDI,ESI                    ; 004a8a7b
    MOVSD ES:EDI,ESI                    ; 004a8a7c
    MOVSD ES:EDI,ESI                    ; 004a8a7d
    FLD float ptr [ESP + 0xf78]         ; 004a8a7e
    FABS                                ; 004a8a85
    FLD float ptr [ESP + 0x8]           ; 004a8a87
    FMUL float ptr [0x005dea9c]         ; 004a8a8b | DAT_005dea9c
    FMUL double ptr [0x005deaa4]        ; 004a8a91 | DAT_005deaa4
    FCOMPP                              ; 004a8a97
    FNSTSW AX                           ; 004a8a99
    SAHF                                ; 004a8a9b
    JC 0x004a8aa8                       ; 004a8a9c
        ;   XREF to: 004a8aa8 (CONDITIONAL_JUMP)  ; LAB_004a8aa8
    MOV EAX,0x1                         ; 004a8a9e
    JMP 0x004a7575                      ; 004a8aa3
        ;   XREF to: 004a7575 (UNCONDITIONAL_JUMP)  ; LAB_004a7575
    XOR EAX,EAX                         ; 004a8aa8
        ;   Label: LAB_004a8aa8
    JMP 0x004a7575                      ; 004a8aaa
        ;   XREF to: 004a7575 (UNCONDITIONAL_JUMP)  ; LAB_004a7575
    PUSH 0x5de769                       ; 004a8aaf | = "isLightOn"
        ;   Label: LAB_004a8aaf
    LEA EAX,[ESP + 0xf38]               ; 004a8ab4
    PUSH EAX                            ; 004a8abb
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8abc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8ac1
    TEST EAX,EAX                        ; 004a8ac4
    JNZ 0x004a8be7                      ; 004a8ac6
        ;   XREF to: 004a8be7 (CONDITIONAL_JUMP)  ; LAB_004a8be7
    MOV dword ptr [ESP + 0x104c],0xffffffff ; 004a8acc
    LEA EAX,[ESP + 0x104c]              ; 004a8ad7
    PUSH EAX                            ; 004a8ade
    LEA EAX,[ESP + 0xc18]               ; 004a8adf
    PUSH EAX                            ; 004a8ae6
    MOV EAX,0x5de773                    ; 004a8ae7 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004a8aec
    PUSH EAX                            ; 004a8aee | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8aef
    ADD EAX,EDX                         ; 004a8af2
    PUSH EAX                            ; 004a8af4
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8af5
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a8afa
    CMP dword ptr [ESP + 0x104c],0x3    ; 004a8afd
    JL 0x004a8b67                       ; 004a8b05
        ;   XREF to: 004a8b67 (CONDITIONAL_JUMP)  ; LAB_004a8b67
    LEA EAX,[ESP + 0x1054]              ; 004a8b07
    PUSH EAX                            ; 004a8b0e
    LEA EAX,[ESP + 0x1054]              ; 004a8b0f
    PUSH EAX                            ; 004a8b16
    LEA EAX,[ESP + 0xc1c]               ; 004a8b17
    PUSH EAX                            ; 004a8b1e
    MOV ESI,dword ptr [0x00622c18]      ; 004a8b1f | g_CDemonSetPtr
    PUSH ESI                            ; 004a8b25 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00555a20 ; 004a8b26
        ;   XREF to: 00555a20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00555a20(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 004a8b2b
    CMP dword ptr [ESP + 0x1050],0x0    ; 004a8b2e
    JZ 0x004a8b97                       ; 004a8b36
        ;   XREF to: 004a8b97 (CONDITIONAL_JUMP)  ; LAB_004a8b97
    MOV EAX,dword ptr [ESP + 0x1054]    ; 004a8b38
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 004a8b3f
    SETNZ AL                            ; 004a8b46
    AND EAX,0xff                        ; 004a8b49
    MOV ECX,dword ptr [EBX]             ; 004a8b4e
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a8b50
    MOV EAX,dword ptr [ESP + 0x104c]    ; 004a8b57
    ADD ECX,EAX                         ; 004a8b5e
    MOV dword ptr [EBX],ECX             ; 004a8b60
    JMP 0x004a757c                      ; 004a8b62
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de781                    ; 004a8b67 | = "Error parsing isLightOn parameters."
        ;   Label: LAB_004a8b67
    MOV EDI,0x1c56ed0                   ; 004a8b6c
    PUSH EDI                            ; 004a8b71 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8b72 | = "Error parsing isLightOn parameters." | s_Error_parsing_isLightOn_005de781+2
        ;   Label: LAB_004a8b72
    MOV byte ptr [EDI],AL               ; 004a8b74 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8b76
    JZ 0x004a8b8a                       ; 004a8b78
        ;   XREF to: 004a8b8a (CONDITIONAL_JUMP)  ; LAB_004a8b8a
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8b7a | s_Error_parsing_isLightOn_005de781+1 | s_Error_parsing_isLightOn_005de781+3
    ADD ESI,0x2                         ; 004a8b7d
    MOV byte ptr [EDI + 0x1],AL         ; 004a8b80 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8b83
    CMP AL,0x0                          ; 004a8b86
    JNZ 0x004a8b72                      ; 004a8b88
        ;   XREF to: 004a8b72 (CONDITIONAL_JUMP)  ; LAB_004a8b72
    POP EDI                             ; 004a8b8a
        ;   Label: LAB_004a8b8a
    MOV EAX,0xffffffff                  ; 004a8b8b
    MOV ESP,EBP                         ; 004a8b90
    POP EBP                             ; 004a8b92
    POP EDI                             ; 004a8b93
    POP ESI                             ; 004a8b94
    POP EBX                             ; 004a8b95
    RET                                 ; 004a8b96
    LEA EAX,[ESP + 0xc14]               ; 004a8b97
        ;   Label: LAB_004a8b97
    PUSH EAX                            ; 004a8b9e
    MOV EAX,0x5de7a5                    ; 004a8b9f | = "Spotlight %s doesn't exist."
    PUSH EAX                            ; 004a8ba4 | = "Spotlight %s doesn't exist."
    LEA EAX,[ESP + 0x214]               ; 004a8ba5
    PUSH EAX                            ; 004a8bac
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004a8bad
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a8bb2
    LEA ESI,[ESP + 0x20c]               ; 004a8bb5
    MOV EDI,0x1c56ed0                   ; 004a8bbc
    PUSH EDI                            ; 004a8bc1 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8bc2
        ;   Label: LAB_004a8bc2
    MOV byte ptr [EDI],AL               ; 004a8bc4 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8bc6
    JZ 0x004a8bda                       ; 004a8bc8
        ;   XREF to: 004a8bda (CONDITIONAL_JUMP)  ; LAB_004a8bda
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8bca
    ADD ESI,0x2                         ; 004a8bcd
    MOV byte ptr [EDI + 0x1],AL         ; 004a8bd0 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8bd3
    CMP AL,0x0                          ; 004a8bd6
    JNZ 0x004a8bc2                      ; 004a8bd8
        ;   XREF to: 004a8bc2 (CONDITIONAL_JUMP)  ; LAB_004a8bc2
    POP EDI                             ; 004a8bda
        ;   Label: LAB_004a8bda
    MOV EAX,0xffffffff                  ; 004a8bdb
    MOV ESP,EBP                         ; 004a8be0
    POP EBP                             ; 004a8be2
    POP EDI                             ; 004a8be3
    POP ESI                             ; 004a8be4
    POP EBX                             ; 004a8be5
    RET                                 ; 004a8be6
    PUSH 0x5de7c1                       ; 004a8be7 | = "isNudityEnabled"
        ;   Label: LAB_004a8be7
    LEA EAX,[ESP + 0xf38]               ; 004a8bec
    PUSH EAX                            ; 004a8bf3
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8bf4
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8bf9
    TEST EAX,EAX                        ; 004a8bfc
    JNZ 0x004a8c8c                      ; 004a8bfe
        ;   XREF to: 004a8c8c (CONDITIONAL_JUMP)  ; LAB_004a8c8c
    MOV dword ptr [ESP + 0x1058],0xffffffff ; 004a8c04
    LEA EAX,[ESP + 0x1058]              ; 004a8c0f
    PUSH EAX                            ; 004a8c16
    MOV EAX,0x5de7d1                    ; 004a8c17 | = " ( )%n"
    MOV EDX,dword ptr [EBX]             ; 004a8c1c
    PUSH EAX                            ; 004a8c1e | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8c1f
    ADD EAX,EDX                         ; 004a8c22
    PUSH EAX                            ; 004a8c24
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8c25
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a8c2a
    MOV ECX,dword ptr [ESP + 0x1058]    ; 004a8c2d
    CMP ECX,0x2                         ; 004a8c34
    JL 0x004a8c5c                       ; 004a8c37
        ;   XREF to: 004a8c5c (CONDITIONAL_JUMP)  ; LAB_004a8c5c
    MOV EAX,[0x0061d95c]                ; 004a8c39 | g_CGamePtr
    CMP dword ptr [EAX + 0x18],0x0      ; 004a8c3e | g_CGameInstance.nudity_flag
    SETNZ AL                            ; 004a8c42
    MOV EDI,dword ptr [EBX]             ; 004a8c45
    AND EAX,0xff                        ; 004a8c47
    ADD EDI,ECX                         ; 004a8c4c
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a8c4e
    MOV dword ptr [EBX],EDI             ; 004a8c55
    JMP 0x004a757c                      ; 004a8c57
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de7d8                    ; 004a8c5c | = "Error parsing isNudityEnabled()."
        ;   Label: LAB_004a8c5c
    MOV EDI,0x1c56ed0                   ; 004a8c61
    PUSH EDI                            ; 004a8c66 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8c67 | = "Error parsing isNudityEnabled()." | s_Error_parsing_isNudityEn_005de7d8+2
        ;   Label: LAB_004a8c67
    MOV byte ptr [EDI],AL               ; 004a8c69 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8c6b
    JZ 0x004a8c7f                       ; 004a8c6d
        ;   XREF to: 004a8c7f (CONDITIONAL_JUMP)  ; LAB_004a8c7f
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8c6f | s_Error_parsing_isNudityEn_005de7d8+1 | s_Error_parsing_isNudityEn_005de7d8+3
    ADD ESI,0x2                         ; 004a8c72
    MOV byte ptr [EDI + 0x1],AL         ; 004a8c75 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8c78
    CMP AL,0x0                          ; 004a8c7b
    JNZ 0x004a8c67                      ; 004a8c7d
        ;   XREF to: 004a8c67 (CONDITIONAL_JUMP)  ; LAB_004a8c67
    POP EDI                             ; 004a8c7f
        ;   Label: LAB_004a8c7f
    MOV EAX,0xffffffff                  ; 004a8c80
    MOV ESP,EBP                         ; 004a8c85
    POP EBP                             ; 004a8c87
    POP EDI                             ; 004a8c88
    POP ESI                             ; 004a8c89
    POP EBX                             ; 004a8c8a
    RET                                 ; 004a8c8b
    PUSH 0x5de7f9                       ; 004a8c8c | = "isSfxActive"
        ;   Label: LAB_004a8c8c
    LEA EAX,[ESP + 0xf38]               ; 004a8c91
    PUSH EAX                            ; 004a8c98
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8c99
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8c9e
    TEST EAX,EAX                        ; 004a8ca1
    JNZ 0x004a8dc2                      ; 004a8ca3
        ;   XREF to: 004a8dc2 (CONDITIONAL_JUMP)  ; LAB_004a8dc2
    LEA EAX,[ESP + 0x105c]              ; 004a8ca9
    MOV ECX,0xffffffff                  ; 004a8cb0
    PUSH EAX                            ; 004a8cb5
    LEA EAX,[ESP + 0x9c0]               ; 004a8cb6
    MOV dword ptr [ESP + 0x1060],ECX    ; 004a8cbd
    PUSH EAX                            ; 004a8cc4
    MOV EAX,0x5de805                    ; 004a8cc5 | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 004a8cca
    PUSH EAX                            ; 004a8ccc | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8ccd
    ADD EAX,ESI                         ; 004a8cd0
    PUSH EAX                            ; 004a8cd2
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8cd3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a8cd8
    CMP dword ptr [ESP + 0x105c],0x3    ; 004a8cdb
    JL 0x004a8d4c                       ; 004a8ce3
        ;   XREF to: 004a8d4c (CONDITIONAL_JUMP)  ; LAB_004a8d4c
    LEA ESI,[ESP + 0x9bc]               ; 004a8ce5
    MOV EDI,ESI                         ; 004a8cec
    SUB ECX,ECX                         ; 004a8cee
    DEC ECX                             ; 004a8cf0
    XOR EAX,EAX                         ; 004a8cf1
    SCASB.REPNE ES:EDI                  ; 004a8cf3
    NOT ECX                             ; 004a8cf5
    DEC ECX                             ; 004a8cf7
    MOV EDI,ECX                         ; 004a8cf8
    TEST ECX,ECX                        ; 004a8cfa
    JLE 0x004a8d15                      ; 004a8cfc
        ;   XREF to: 004a8d15 (CONDITIONAL_JUMP)  ; LAB_004a8d15
    LEA EAX,[ECX + ESI*0x1]             ; 004a8cfe
    MOV DL,byte ptr [EAX + -0x1]        ; 004a8d01
        ;   Label: LAB_004a8d01
    INC DL                              ; 004a8d04
    AND EDX,0xff                        ; 004a8d06
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a8d0c | DAT_00626114
    JNZ 0x004a8d7c                      ; 004a8d13
        ;   XREF to: 004a8d7c (CONDITIONAL_JUMP)  ; LAB_004a8d7c
    LEA EAX,[ESI + EDI*0x1]             ; 004a8d15
        ;   Label: LAB_004a8d15
    MOV byte ptr [EAX],0x0              ; 004a8d18
    LEA EAX,[ESI + 0x1]                 ; 004a8d1b
    MOV dword ptr [ESP + 0x1060],EAX    ; 004a8d1e
    MOV AL,byte ptr [ESI]               ; 004a8d25
        ;   Label: LAB_004a8d25
    INC AL                              ; 004a8d27
    AND EAX,0xff                        ; 004a8d29
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a8d2e | DAT_00626114
    JZ 0x004a8d88                       ; 004a8d35
        ;   XREF to: 004a8d88 (CONDITIONAL_JUMP)  ; LAB_004a8d88
    PUSH EDI                            ; 004a8d37
    MOV EAX,dword ptr [ESP + 0x1064]    ; 004a8d38
    PUSH EAX                            ; 004a8d3f
    PUSH ESI                            ; 004a8d40
    DEC EDI                             ; 004a8d41
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a8d42
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a8d47
    JMP 0x004a8d25                      ; 004a8d4a
        ;   XREF to: 004a8d25 (UNCONDITIONAL_JUMP)  ; LAB_004a8d25
    MOV ESI,0x5de813                    ; 004a8d4c | = "Error parsing isSfxActive parameters."
        ;   Label: LAB_004a8d4c
    MOV EDI,0x1c56ed0                   ; 004a8d51
    PUSH EDI                            ; 004a8d56 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8d57 | = "Error parsing isSfxActive parameters." | s_Error_parsing_isSfxActiv_005de813+2
        ;   Label: LAB_004a8d57
    MOV byte ptr [EDI],AL               ; 004a8d59 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8d5b
    JZ 0x004a8d6f                       ; 004a8d5d
        ;   XREF to: 004a8d6f (CONDITIONAL_JUMP)  ; LAB_004a8d6f
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8d5f | s_Error_parsing_isSfxActiv_005de813+1 | s_Error_parsing_isSfxActiv_005de813+3
    ADD ESI,0x2                         ; 004a8d62
    MOV byte ptr [EDI + 0x1],AL         ; 004a8d65 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8d68
    CMP AL,0x0                          ; 004a8d6b
    JNZ 0x004a8d57                      ; 004a8d6d
        ;   XREF to: 004a8d57 (CONDITIONAL_JUMP)  ; LAB_004a8d57
    POP EDI                             ; 004a8d6f
        ;   Label: LAB_004a8d6f
    MOV EAX,0xffffffff                  ; 004a8d70
    MOV ESP,EBP                         ; 004a8d75
    POP EBP                             ; 004a8d77
    POP EDI                             ; 004a8d78
    POP ESI                             ; 004a8d79
    POP EBX                             ; 004a8d7a
    RET                                 ; 004a8d7b
    DEC EDI                             ; 004a8d7c
        ;   Label: LAB_004a8d7c
    DEC EAX                             ; 004a8d7d
    TEST EDI,EDI                        ; 004a8d7e
    JG 0x004a8d01                       ; 004a8d80
        ;   XREF to: 004a8d01 (CONDITIONAL_JUMP)  ; LAB_004a8d01
    JMP 0x004a8d15                      ; 004a8d86
        ;   XREF to: 004a8d15 (UNCONDITIONAL_JUMP)  ; LAB_004a8d15
    XOR EAX,EAX                         ; 004a8d88
        ;   Label: LAB_004a8d88
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a8d8a
    LEA EAX,[ESP + 0x9bc]               ; 004a8d91
    PUSH EAX                            ; 004a8d98
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a8d99
    PUSH EDX                            ; 004a8d9c
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_004aa290 ; 004a8d9d
        ;   XREF to: 004aa290 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_004aa290(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a8da2
    TEST EAX,EAX                        ; 004a8da5
    JZ 0x004a8db4                       ; 004a8da7
        ;   XREF to: 004a8db4 (CONDITIONAL_JUMP)  ; LAB_004a8db4
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a8da9
    MOV EAX,dword ptr [ESP + 0x105c]    ; 004a8db4
        ;   Label: LAB_004a8db4
    ADD dword ptr [EBX],EAX             ; 004a8dbb
    JMP 0x004a757c                      ; 004a8dbd
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de839                       ; 004a8dc2 | = "isTalking"
        ;   Label: LAB_004a8dc2
    LEA EAX,[ESP + 0xf38]               ; 004a8dc7
    PUSH EAX                            ; 004a8dce
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8dcf
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8dd4
    TEST EAX,EAX                        ; 004a8dd7
    JNZ 0x004a8eb0                      ; 004a8dd9
        ;   XREF to: 004a8eb0 (CONDITIONAL_JUMP)  ; LAB_004a8eb0
    LEA EAX,[ESP + 0x1064]              ; 004a8ddf
    MOV EDI,0xffffffff                  ; 004a8de6
    PUSH EAX                            ; 004a8deb
    LEA EAX,[ESP + 0xb50]               ; 004a8dec
    MOV dword ptr [ESP + 0x1068],EDI    ; 004a8df3
    PUSH EAX                            ; 004a8dfa
    MOV EAX,0x5de843                    ; 004a8dfb | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004a8e00
    PUSH EAX                            ; 004a8e02 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8e03
    ADD EAX,EDX                         ; 004a8e06
    PUSH EAX                            ; 004a8e08
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8e09
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a8e0e
    CMP dword ptr [ESP + 0x1064],0x3    ; 004a8e11
    JL 0x004a8e5d                       ; 004a8e19
        ;   XREF to: 004a8e5d (CONDITIONAL_JUMP)  ; LAB_004a8e5d
    MOV EAX,0x7c6344                    ; 004a8e1b | g_CCharacterClassInfo
    PUSH EAX                            ; 004a8e20 | g_CCharacterClassInfo
    MOV ESI,dword ptr [0x007c637c]      ; 004a8e21 | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 004a8e27
    LEA EAX,[ESP + 0xb54]               ; 004a8e28
    PUSH EAX                            ; 004a8e2f
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a8e30
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a8e35
    TEST EAX,EAX                        ; 004a8e38
    JZ 0x004a8e8d                       ; 004a8e3a
        ;   XREF to: 004a8e8d (CONDITIONAL_JUMP)  ; LAB_004a8e8d
    MOV EDI,dword ptr [0x005ffcb8]      ; 004a8e3c | DAT_005ffcb8
    CMP EAX,EDI                         ; 004a8e42
    JNZ 0x004a8e96                      ; 004a8e44
        ;   XREF to: 004a8e96 (CONDITIONAL_JUMP)  ; LAB_004a8e96
    XOR EAX,EDI                         ; 004a8e46
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a8e48
        ;   Label: LAB_004a8e48
    MOV EAX,dword ptr [ESP + 0x1064]    ; 004a8e4f
    ADD dword ptr [EBX],EAX             ; 004a8e56
    JMP 0x004a757c                      ; 004a8e58
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de851                    ; 004a8e5d | = "Error parsing isTalking parameters."
        ;   Label: LAB_004a8e5d
    MOV EDI,0x1c56ed0                   ; 004a8e62
    PUSH EDI                            ; 004a8e67 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8e68 | = "Error parsing isTalking parameters." | s_Error_parsing_isTalking_005de851+2
        ;   Label: LAB_004a8e68
    MOV byte ptr [EDI],AL               ; 004a8e6a | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8e6c
    JZ 0x004a8e80                       ; 004a8e6e
        ;   XREF to: 004a8e80 (CONDITIONAL_JUMP)  ; LAB_004a8e80
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8e70 | s_Error_parsing_isTalking_005de851+1 | s_Error_parsing_isTalking_005de851+3
    ADD ESI,0x2                         ; 004a8e73
    MOV byte ptr [EDI + 0x1],AL         ; 004a8e76 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8e79
    CMP AL,0x0                          ; 004a8e7c
    JNZ 0x004a8e68                      ; 004a8e7e
        ;   XREF to: 004a8e68 (CONDITIONAL_JUMP)  ; LAB_004a8e68
    POP EDI                             ; 004a8e80
        ;   Label: LAB_004a8e80
    MOV EAX,0xffffffff                  ; 004a8e81
    MOV ESP,EBP                         ; 004a8e86
    POP EBP                             ; 004a8e88
    POP EDI                             ; 004a8e89
    POP ESI                             ; 004a8e8a
    POP EBX                             ; 004a8e8b
    RET                                 ; 004a8e8c
    MOV EAX,EDI                         ; 004a8e8d
        ;   Label: LAB_004a8e8d
    MOV ESP,EBP                         ; 004a8e8f
    POP EBP                             ; 004a8e91
    POP EDI                             ; 004a8e92
    POP ESI                             ; 004a8e93
    POP EBX                             ; 004a8e94
    RET                                 ; 004a8e95
    FLD float ptr [EAX + 0x27b4]        ; 004a8e96
        ;   Label: LAB_004a8e96
    FLDZ                                ; 004a8e9c
    FCOMPP                              ; 004a8e9e
    FNSTSW AX                           ; 004a8ea0
    SAHF                                ; 004a8ea2
    JNC 0x004a8eac                      ; 004a8ea3
        ;   XREF to: 004a8eac (CONDITIONAL_JUMP)  ; LAB_004a8eac
    MOV EAX,0x1                         ; 004a8ea5
    JMP 0x004a8e48                      ; 004a8eaa
        ;   XREF to: 004a8e48 (UNCONDITIONAL_JUMP)  ; LAB_004a8e48
    XOR EAX,EAX                         ; 004a8eac
        ;   Label: LAB_004a8eac
    JMP 0x004a8e48                      ; 004a8eae
        ;   XREF to: 004a8e48 (UNCONDITIONAL_JUMP)  ; LAB_004a8e48
    PUSH 0x5de875                       ; 004a8eb0 | = "isVictim"
        ;   Label: LAB_004a8eb0
    LEA EAX,[ESP + 0xf38]               ; 004a8eb5
    PUSH EAX                            ; 004a8ebc
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a8ebd
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8ec2
    TEST EAX,EAX                        ; 004a8ec5
    JNZ 0x004a904d                      ; 004a8ec7
        ;   XREF to: 004a904d (CONDITIONAL_JUMP)  ; LAB_004a904d
    LEA EAX,[ESP + 0x1068]              ; 004a8ecd
    MOV ECX,0xffffffff                  ; 004a8ed4
    PUSH EAX                            ; 004a8ed9
    LEA EAX,[ESP + 0x768]               ; 004a8eda
    MOV dword ptr [ESP + 0x106c],ECX    ; 004a8ee1
    PUSH EAX                            ; 004a8ee8
    MOV EAX,0x5de87e                    ; 004a8ee9 | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 004a8eee
    PUSH EAX                            ; 004a8ef0 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a8ef1
    ADD EAX,ESI                         ; 004a8ef4
    PUSH EAX                            ; 004a8ef6
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a8ef7
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a8efc
    CMP dword ptr [ESP + 0x1068],0x3    ; 004a8eff
    JL 0x004a8faa                       ; 004a8f07
        ;   XREF to: 004a8faa (CONDITIONAL_JUMP)  ; LAB_004a8faa
    MOV EAX,0x7c6344                    ; 004a8f0d | g_CCharacterClassInfo
    PUSH EAX                            ; 004a8f12 | g_CCharacterClassInfo
    MOV EAX,[0x007c637c]                ; 004a8f13 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 004a8f18
    LEA EAX,[ESP + 0x76c]               ; 004a8f19
    PUSH EAX                            ; 004a8f20
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a8f21
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a8f26
    MOV dword ptr [ESP + 0x106c],EAX    ; 004a8f29
    TEST EAX,EAX                        ; 004a8f30
    JZ 0x004a8fce                       ; 004a8f32
        ;   XREF to: 004a8fce (CONDITIONAL_JUMP)  ; LAB_004a8fce
    XOR ECX,ECX                         ; 004a8f38
    MOV ESI,dword ptr [0x005ffcb8]      ; 004a8f3a | DAT_005ffcb8
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004a8f40
    CMP EAX,ESI                         ; 004a8f47
    JZ 0x004a903f                       ; 004a8f49
        ;   XREF to: 004a903f (CONDITIONAL_JUMP)  ; LAB_004a903f
    ADD EAX,0x20                        ; 004a8f4f
    MOV dword ptr [ESP + 0x1070],EAX    ; 004a8f52
    LEA EAX,[ECX*0x4 + 0x0]             ; 004a8f59
    XOR EDI,EDI                         ; 004a8f60
    MOV dword ptr [ESP + 0x10a8],EAX    ; 004a8f62
    MOV EAX,[0x00622c18]                ; 004a8f69 | g_CDemonSetPtr
        ;   Label: LAB_004a8f69
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 004a8f6e | g_CDemonSetInstance.enemy_count
    JGE 0x004a903f                      ; 004a8f74
        ;   XREF to: 004a903f (CONDITIONAL_JUMP)  ; LAB_004a903f
    ADD EAX,dword ptr [ESP + 0x10a8]    ; 004a8f7a
    MOV ESI,dword ptr [EAX + 0x150ff0]  ; 004a8f81
    MOV EDX,dword ptr [ESP + 0x106c]    ; 004a8f87
    CMP EDX,dword ptr [ESI + 0xc1e8]    ; 004a8f8e
    JZ 0x004a8fda                       ; 004a8f94
        ;   XREF to: 004a8fda (CONDITIONAL_JUMP)  ; LAB_004a8fda
    MOV ESI,dword ptr [ESP + 0x10a8]    ; 004a8f96
        ;   Label: LAB_004a8f96
    ADD ESI,0x4                         ; 004a8f9d
    INC EDI                             ; 004a8fa0
    MOV dword ptr [ESP + 0x10a8],ESI    ; 004a8fa1
    JMP 0x004a8f69                      ; 004a8fa8
        ;   XREF to: 004a8f69 (UNCONDITIONAL_JUMP)  ; LAB_004a8f69
    MOV ESI,0x5de88c                    ; 004a8faa | = "Error parsing isVictim parameters."
        ;   Label: LAB_004a8faa
    MOV EDI,0x1c56ed0                   ; 004a8faf
    PUSH EDI                            ; 004a8fb4 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a8fb5 | = "Error parsing isVictim parameters." | s_Error_parsing_isVictim_p_005de88c+2
        ;   Label: LAB_004a8fb5
    MOV byte ptr [EDI],AL               ; 004a8fb7 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a8fb9
    JZ 0x004a8fcd                       ; 004a8fbb
        ;   XREF to: 004a8fcd (CONDITIONAL_JUMP)  ; LAB_004a8fcd
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8fbd | s_Error_parsing_isVictim_p_005de88c+1 | s_Error_parsing_isVictim_p_005de88c+3
    ADD ESI,0x2                         ; 004a8fc0
    MOV byte ptr [EDI + 0x1],AL         ; 004a8fc3 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a8fc6
    CMP AL,0x0                          ; 004a8fc9
    JNZ 0x004a8fb5                      ; 004a8fcb
        ;   XREF to: 004a8fb5 (CONDITIONAL_JUMP)  ; LAB_004a8fb5
    POP EDI                             ; 004a8fcd
        ;   Label: LAB_004a8fcd
    MOV EAX,0xffffffff                  ; 004a8fce
        ;   Label: LAB_004a8fce
    MOV ESP,EBP                         ; 004a8fd3
    POP EBP                             ; 004a8fd5
    POP EDI                             ; 004a8fd6
    POP ESI                             ; 004a8fd7
    POP EBX                             ; 004a8fd8
    RET                                 ; 004a8fd9
    PUSH ESI                            ; 004a8fda
        ;   Label: LAB_004a8fda
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a8fdb
    CALL dword ptr [EAX + 0x10c]        ; 004a8fe1
    ADD ESP,0x4                         ; 004a8fe7
    TEST EAX,EAX                        ; 004a8fea
    JG 0x004a8f96                       ; 004a8fec
        ;   XREF to: 004a8f96 (CONDITIONAL_JUMP)  ; LAB_004a8f96
    PUSH ESI                            ; 004a8fee
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a8fef
    CALL dword ptr [EAX + 0x70]         ; 004a8ff5
    ADD ESP,0x4                         ; 004a8ff8
    TEST EAX,EAX                        ; 004a8ffb
    JNZ 0x004a8f96                      ; 004a8ffd
        ;   XREF to: 004a8f96 (CONDITIONAL_JUMP)  ; LAB_004a8f96
    MOV EAX,dword ptr [ESP + 0x1070]    ; 004a8fff
    FLD float ptr [ESI + 0x20]          ; 004a9006
    FSUB float ptr [EAX]                ; 004a9009
    FMUL ST0                            ; 004a900b
    FLD float ptr [ESI + 0x24]          ; 004a900d
    FSUB float ptr [EAX + 0x4]          ; 004a9010
    FMUL ST0                            ; 004a9013
    FLD float ptr [ESI + 0x28]          ; 004a9015
    FXCH                                ; 004a9018
    FADDP ST2,ST0                       ; 004a901a
    FSUB float ptr [EAX + 0x8]          ; 004a901c
    FMUL ST0                            ; 004a901f
    FADDP                               ; 004a9021
    FSQRT                               ; 004a9023
    FCOMP double ptr [0x005deaac]       ; 004a9025 | DAT_005deaac
    FNSTSW AX                           ; 004a902b
    SAHF                                ; 004a902d
    JA 0x004a8f96                       ; 004a902e
        ;   XREF to: 004a8f96 (CONDITIONAL_JUMP)  ; LAB_004a8f96
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a9034
    MOV EAX,dword ptr [ESP + 0x1068]    ; 004a903f
        ;   Label: LAB_004a903f
    ADD dword ptr [EBX],EAX             ; 004a9046
    JMP 0x004a757c                      ; 004a9048
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de8af                       ; 004a904d | = "isWeaponDrawn"
        ;   Label: LAB_004a904d
    LEA EAX,[ESP + 0xf38]               ; 004a9052
    PUSH EAX                            ; 004a9059
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a905a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a905f
    TEST EAX,EAX                        ; 004a9062
    JNZ 0x004a9129                      ; 004a9064
        ;   XREF to: 004a9129 (CONDITIONAL_JUMP)  ; LAB_004a9129
    MOV dword ptr [ESP + 0x1080],0xffffffff ; 004a906a
    LEA EAX,[ESP + 0x1080]              ; 004a9075
    PUSH EAX                            ; 004a907c
    LEA EAX,[ESP + 0x95c]               ; 004a907d
    PUSH EAX                            ; 004a9084
    MOV EAX,0x5de8bd                    ; 004a9085 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004a908a
    PUSH EAX                            ; 004a908c | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a908d
    ADD EAX,EDX                         ; 004a9090
    PUSH EAX                            ; 004a9092
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a9093
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a9098
    CMP dword ptr [ESP + 0x1080],0x3    ; 004a909b
    JL 0x004a90e7                       ; 004a90a3
        ;   XREF to: 004a90e7 (CONDITIONAL_JUMP)  ; LAB_004a90e7
    MOV EAX,0x1d06ad8                   ; 004a90a5
    PUSH EAX                            ; 004a90aa
    MOV ESI,dword ptr [0x01d06b10]      ; 004a90ab | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004a90b1
    LEA EAX,[ESP + 0x960]               ; 004a90b2
    PUSH EAX                            ; 004a90b9
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a90ba
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a90bf
    TEST EAX,EAX                        ; 004a90c2
    JZ 0x004a910b                       ; 004a90c4
        ;   XREF to: 004a910b (CONDITIONAL_JUMP)  ; LAB_004a910b
    MOV EDI,dword ptr [0x005ffcb8]      ; 004a90c6 | DAT_005ffcb8
    CMP EAX,EDI                         ; 004a90cc
    JNZ 0x004a9117                      ; 004a90ce
        ;   XREF to: 004a9117 (CONDITIONAL_JUMP)  ; LAB_004a9117
    XOR EAX,EDI                         ; 004a90d0
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a90d2
        ;   Label: LAB_004a90d2
    MOV EAX,dword ptr [ESP + 0x1080]    ; 004a90d9
    ADD dword ptr [EBX],EAX             ; 004a90e0
    JMP 0x004a757c                      ; 004a90e2
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de8cb                    ; 004a90e7 | = "Error parsing isWeaponDrawn parameters."
        ;   Label: LAB_004a90e7
    MOV EDI,0x1c56ed0                   ; 004a90ec
    PUSH EDI                            ; 004a90f1 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a90f2 | = "Error parsing isWeaponDrawn parameters." | s_Error_parsing_isWeaponDr_005de8cb+2
        ;   Label: LAB_004a90f2
    MOV byte ptr [EDI],AL               ; 004a90f4 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a90f6
    JZ 0x004a910a                       ; 004a90f8
        ;   XREF to: 004a910a (CONDITIONAL_JUMP)  ; LAB_004a910a
    MOV AL,byte ptr [ESI + 0x1]         ; 004a90fa | s_Error_parsing_isWeaponDr_005de8cb+1 | s_Error_parsing_isWeaponDr_005de8cb+3
    ADD ESI,0x2                         ; 004a90fd
    MOV byte ptr [EDI + 0x1],AL         ; 004a9100 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a9103
    CMP AL,0x0                          ; 004a9106
    JNZ 0x004a90f2                      ; 004a9108
        ;   XREF to: 004a90f2 (CONDITIONAL_JUMP)  ; LAB_004a90f2
    POP EDI                             ; 004a910a
        ;   Label: LAB_004a910a
    MOV EAX,0xffffffff                  ; 004a910b
        ;   Label: LAB_004a910b
    MOV ESP,EBP                         ; 004a9110
    POP EBP                             ; 004a9112
    POP EDI                             ; 004a9113
    POP ESI                             ; 004a9114
    POP EBX                             ; 004a9115
    RET                                 ; 004a9116
    PUSH EAX                            ; 004a9117
        ;   Label: LAB_004a9117
    MOV EDX,dword ptr [EAX + 0x154]     ; 004a9118
    CALL dword ptr [EDX + 0x148]        ; 004a911e
    ADD ESP,0x4                         ; 004a9124
    JMP 0x004a90d2                      ; 004a9127
        ;   XREF to: 004a90d2 (UNCONDITIONAL_JUMP)  ; LAB_004a90d2
    PUSH 0x5de8f3                       ; 004a9129 | = "isWearingGasMask"
        ;   Label: LAB_004a9129
    LEA EAX,[ESP + 0xf38]               ; 004a912e
    PUSH EAX                            ; 004a9135
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a9136
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a913b
    TEST EAX,EAX                        ; 004a913e
    JNZ 0x004a9216                      ; 004a9140
        ;   XREF to: 004a9216 (CONDITIONAL_JUMP)  ; LAB_004a9216
    LEA EAX,[ESP + 0x1084]              ; 004a9146
    MOV EDX,0xffffffff                  ; 004a914d
    PUSH EAX                            ; 004a9152
    LEA EAX,[ESP + 0xce0]               ; 004a9153
    MOV dword ptr [ESP + 0x1088],EDX    ; 004a915a
    PUSH EAX                            ; 004a9161
    MOV EAX,0x5de904                    ; 004a9162 | = " ( %[^ )] )%n"
    MOV ECX,dword ptr [EBX]             ; 004a9167
    PUSH EAX                            ; 004a9169 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a916a
    ADD EAX,ECX                         ; 004a916d
    PUSH EAX                            ; 004a916f
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a9170
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a9175
    CMP dword ptr [ESP + 0x1084],0x3    ; 004a9178
    JL 0x004a91c2                       ; 004a9180
        ;   XREF to: 004a91c2 (CONDITIONAL_JUMP)  ; LAB_004a91c2
    MOV EAX,0x1d06ad8                   ; 004a9182
    PUSH EAX                            ; 004a9187
    MOV EDI,dword ptr [0x01d06b10]      ; 004a9188 | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 004a918e
    LEA EAX,[ESP + 0xce4]               ; 004a918f
    PUSH EAX                            ; 004a9196
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a9197
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a919c
    TEST EAX,EAX                        ; 004a919f
    JZ 0x004a91e6                       ; 004a91a1
        ;   XREF to: 004a91e6 (CONDITIONAL_JUMP)  ; LAB_004a91e6
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a91a3 | DAT_005ffcb8
    JNZ 0x004a91f2                      ; 004a91a9
        ;   XREF to: 004a91f2 (CONDITIONAL_JUMP)  ; LAB_004a91f2
    XOR ESI,ESI                         ; 004a91ab
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004a91ad
    MOV EAX,dword ptr [ESP + 0x1084]    ; 004a91b4
    ADD dword ptr [EBX],EAX             ; 004a91bb
    JMP 0x004a757c                      ; 004a91bd
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de912                    ; 004a91c2 | = "Error parsing isWearingGasMask parame..."
        ;   Label: LAB_004a91c2
    MOV EDI,0x1c56ed0                   ; 004a91c7
    PUSH EDI                            ; 004a91cc | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a91cd | = "Error parsing isWearingGasMask parame..." | s_Error_parsing_isWearingG_005de912+2
        ;   Label: LAB_004a91cd
    MOV byte ptr [EDI],AL               ; 004a91cf | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a91d1
    JZ 0x004a91e5                       ; 004a91d3
        ;   XREF to: 004a91e5 (CONDITIONAL_JUMP)  ; LAB_004a91e5
    MOV AL,byte ptr [ESI + 0x1]         ; 004a91d5 | s_Error_parsing_isWearingG_005de912+1 | s_Error_parsing_isWearingG_005de912+3
    ADD ESI,0x2                         ; 004a91d8
    MOV byte ptr [EDI + 0x1],AL         ; 004a91db | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a91de
    CMP AL,0x0                          ; 004a91e1
    JNZ 0x004a91cd                      ; 004a91e3
        ;   XREF to: 004a91cd (CONDITIONAL_JUMP)  ; LAB_004a91cd
    POP EDI                             ; 004a91e5
        ;   Label: LAB_004a91e5
    MOV EAX,0xffffffff                  ; 004a91e6
        ;   Label: LAB_004a91e6
    MOV ESP,EBP                         ; 004a91eb
    POP EBP                             ; 004a91ed
    POP EDI                             ; 004a91ee
    POP ESI                             ; 004a91ef
    POP EBX                             ; 004a91f0
    RET                                 ; 004a91f1
    CMP dword ptr [EAX + 0x1ff54],0x2   ; 004a91f2
        ;   Label: LAB_004a91f2
    SETZ AL                             ; 004a91f9
    AND EAX,0xff                        ; 004a91fc
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a9201
    MOV EAX,dword ptr [ESP + 0x1084]    ; 004a9208
    ADD dword ptr [EBX],EAX             ; 004a920f
    JMP 0x004a757c                      ; 004a9211
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5de93d                       ; 004a9216 | = "isPuzzleActive"
        ;   Label: LAB_004a9216
    LEA EAX,[ESP + 0xf38]               ; 004a921b
    PUSH EAX                            ; 004a9222
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a9223
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a9228
    TEST EAX,EAX                        ; 004a922b
    JNZ 0x004a932c                      ; 004a922d
        ;   XREF to: 004a932c (CONDITIONAL_JUMP)  ; LAB_004a932c
    LEA EAX,[ESP + 0x1088]              ; 004a9233
    MOV EDI,0xffffffff                  ; 004a923a
    PUSH EAX                            ; 004a923f
    LEA EAX,[ESP + 0x10]                ; 004a9240
    MOV dword ptr [ESP + 0x108c],EDI    ; 004a9244
    PUSH EAX                            ; 004a924b
    MOV EAX,0x5de94c                    ; 004a924c | = "(%[^)])%n"
    MOV EDX,dword ptr [EBX]             ; 004a9251
    PUSH EAX                            ; 004a9253 | = "(%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a9254
    ADD EAX,EDX                         ; 004a9257
    PUSH EAX                            ; 004a9259
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a925a
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a925f
    CMP dword ptr [ESP + 0x1088],0x3    ; 004a9262
    JL 0x004a92eb                       ; 004a926a
        ;   XREF to: 004a92eb (CONDITIONAL_JUMP)  ; LAB_004a92eb
    MOV EAX,[0x007c394c]                ; 004a9270 | DAT_007c394c
    XOR ESI,ESI                         ; 004a9275
    XOR EDI,EDI                         ; 004a9277
    MOV dword ptr [ESP + 0x108c],ESI    ; 004a9279
    CMP ESI,EAX                         ; 004a9280
    JGE 0x004a92b5                      ; 004a9282
        ;   XREF to: 004a92b5 (CONDITIONAL_JUMP)  ; LAB_004a92b5
    SHL ESI,0x2                         ; 004a9284
    MOV EAX,dword ptr [ESI + 0x7c3950]  ; 004a9287 | DAT_007c3950 | DAT_007c3954
        ;   Label: LAB_004a9287
    PUSH EAX                            ; 004a928d
    MOV EDX,dword ptr [EAX]             ; 004a928e
    CALL dword ptr [EDX + 0x4]          ; 004a9290
    ADD ESP,0x4                         ; 004a9293
    PUSH EAX                            ; 004a9296
    LEA EAX,[ESP + 0x10]                ; 004a9297
    PUSH EAX                            ; 004a929b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a929c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a92a1
    TEST EAX,EAX                        ; 004a92a4
    JNZ 0x004a9300                      ; 004a92a6
        ;   XREF to: 004a9300 (CONDITIONAL_JUMP)  ; LAB_004a9300
    MOV EAX,dword ptr [ESI + 0x7c3950]  ; 004a92a8 | DAT_007c3950
    MOV dword ptr [ESP + 0x108c],EAX    ; 004a92ae
    CMP dword ptr [ESP + 0x108c],0x0    ; 004a92b5
        ;   Label: LAB_004a92b5
    JZ 0x004a9313                       ; 004a92bd
        ;   XREF to: 004a9313 (CONDITIONAL_JUMP)  ; LAB_004a9313
    XOR ECX,ECX                         ; 004a92bf
    MOV ESI,dword ptr [0x007c3978]      ; 004a92c1 | DAT_007c3978
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004a92c7
    TEST ESI,ESI                        ; 004a92ce
    JZ 0x004a92dd                       ; 004a92d0
        ;   XREF to: 004a92dd (CONDITIONAL_JUMP)  ; LAB_004a92dd
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004a92d2
    MOV EAX,dword ptr [ESP + 0x1088]    ; 004a92dd
        ;   Label: LAB_004a92dd
    ADD dword ptr [EBX],EAX             ; 004a92e4
    JMP 0x004a757c                      ; 004a92e6
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV EAX,0x5de956                    ; 004a92eb | = "Error parsing activatePuzzle command"
        ;   Label: LAB_004a92eb
    PUSH EAX                            ; 004a92f0 | = "Error parsing activatePuzzle command"
    CALL core_event.cpp_formatEventError_FUN_004a1210 ; 004a92f1
        ;   XREF to: 004a1210 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004a1210(char * format)
    ADD ESP,0x4                         ; 004a92f6
    MOV ESP,EBP                         ; 004a92f9
    POP EBP                             ; 004a92fb
    POP EDI                             ; 004a92fc
    POP ESI                             ; 004a92fd
    POP EBX                             ; 004a92fe
    RET                                 ; 004a92ff
    MOV EAX,[0x007c394c]                ; 004a9300 | DAT_007c394c
        ;   Label: LAB_004a9300
    INC EDI                             ; 004a9305
    ADD ESI,0x4                         ; 004a9306
    CMP EDI,EAX                         ; 004a9309
    JL 0x004a9287                       ; 004a930b
        ;   XREF to: 004a9287 (CONDITIONAL_JUMP)  ; LAB_004a9287
    JMP 0x004a92b5                      ; 004a9311
        ;   XREF to: 004a92b5 (UNCONDITIONAL_JUMP)  ; LAB_004a92b5
    LEA EAX,[ESP + 0xc]                 ; 004a9313
        ;   Label: LAB_004a9313
    PUSH EAX                            ; 004a9317
    PUSH 0x5de97b                       ; 004a9318 | = "No such puzzle '%s'"
    CALL core_event.cpp_formatEventError_FUN_004a1210 ; 004a931d
        ;   XREF to: 004a1210 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004a1210(char * format)
    ADD ESP,0x8                         ; 004a9322
    MOV ESP,EBP                         ; 004a9325
    POP EBP                             ; 004a9327
    POP EDI                             ; 004a9328
    POP ESI                             ; 004a9329
    POP EBX                             ; 004a932a
    RET                                 ; 004a932b
    PUSH 0x5de98f                       ; 004a932c | = "randBool"
        ;   Label: LAB_004a932c
    LEA EAX,[ESP + 0xf38]               ; 004a9331
    PUSH EAX                            ; 004a9338
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a9339
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a933e
    TEST EAX,EAX                        ; 004a9341
    JNZ 0x004a93dd                      ; 004a9343
        ;   XREF to: 004a93dd (CONDITIONAL_JUMP)  ; LAB_004a93dd
    LEA EAX,[ESP + 0x1090]              ; 004a9349
    MOV EDI,0xffffffff                  ; 004a9350
    PUSH EAX                            ; 004a9355
    LEA EAX,[ESP + 0x1098]              ; 004a9356
    MOV dword ptr [ESP + 0x1094],EDI    ; 004a935d
    PUSH EAX                            ; 004a9364
    MOV EAX,0x5de998                    ; 004a9365 | = " ( %f )%n"
    MOV EDX,dword ptr [EBX]             ; 004a936a
    PUSH EAX                            ; 004a936c | = " ( %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a936d
    ADD EAX,EDX                         ; 004a9370
    PUSH EAX                            ; 004a9372
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a9373
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a9378
    CMP dword ptr [ESP + 0x1090],0x3    ; 004a937b
    JL 0x004a93ad                       ; 004a9383
        ;   XREF to: 004a93ad (CONDITIONAL_JUMP)  ; LAB_004a93ad
    PUSH dword ptr [ESP + 0x1094]       ; 004a9385
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004a938c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004a9391
    MOV ESI,dword ptr [EBX]             ; 004a9394
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a9396
    MOV EAX,dword ptr [ESP + 0x1090]    ; 004a939d
    ADD ESI,EAX                         ; 004a93a4
    MOV dword ptr [EBX],ESI             ; 004a93a6
    JMP 0x004a757c                      ; 004a93a8
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de9a2                    ; 004a93ad | = "Error parsing randBool parameters."
        ;   Label: LAB_004a93ad
    MOV EDI,0x1c56ed0                   ; 004a93b2
    PUSH EDI                            ; 004a93b7 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a93b8 | = "Error parsing randBool parameters." | s_Error_parsing_randBool_p_005de9a2+2
        ;   Label: LAB_004a93b8
    MOV byte ptr [EDI],AL               ; 004a93ba | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a93bc
    JZ 0x004a93d0                       ; 004a93be
        ;   XREF to: 004a93d0 (CONDITIONAL_JUMP)  ; LAB_004a93d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004a93c0 | s_Error_parsing_randBool_p_005de9a2+1 | s_Error_parsing_randBool_p_005de9a2+3
    ADD ESI,0x2                         ; 004a93c3
    MOV byte ptr [EDI + 0x1],AL         ; 004a93c6 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a93c9
    CMP AL,0x0                          ; 004a93cc
    JNZ 0x004a93b8                      ; 004a93ce
        ;   XREF to: 004a93b8 (CONDITIONAL_JUMP)  ; LAB_004a93b8
    POP EDI                             ; 004a93d0
        ;   Label: LAB_004a93d0
    MOV EAX,0xffffffff                  ; 004a93d1
    MOV ESP,EBP                         ; 004a93d6
    POP EBP                             ; 004a93d8
    POP EDI                             ; 004a93d9
    POP ESI                             ; 004a93da
    POP EBX                             ; 004a93db
    RET                                 ; 004a93dc
    PUSH 0x5de9c5                       ; 004a93dd | = "reachedDest"
        ;   Label: LAB_004a93dd
    LEA EAX,[ESP + 0xf38]               ; 004a93e2
    PUSH EAX                            ; 004a93e9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a93ea
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a93ef
    TEST EAX,EAX                        ; 004a93f2
    JNZ 0x004a94d4                      ; 004a93f4
        ;   XREF to: 004a94d4 (CONDITIONAL_JUMP)  ; LAB_004a94d4
    LEA EAX,[ESP + 0x1098]              ; 004a93fa
    MOV EDX,0xffffffff                  ; 004a9401
    PUSH EAX                            ; 004a9406
    LEA EAX,[ESP + 0xc7c]               ; 004a9407
    MOV dword ptr [ESP + 0x109c],EDX    ; 004a940e
    PUSH EAX                            ; 004a9415
    MOV ECX,dword ptr [EBX]             ; 004a9416
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a9418
    PUSH 0x5de9d1                       ; 004a941b | = " ( %[^ )] )%n"
    ADD EAX,ECX                         ; 004a9420
    PUSH EAX                            ; 004a9422
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a9423
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a9428
    CMP dword ptr [ESP + 0x1098],0x3    ; 004a942b
    JL 0x004a9475                       ; 004a9433
        ;   XREF to: 004a9475 (CONDITIONAL_JUMP)  ; LAB_004a9475
    MOV EAX,0x7c6344                    ; 004a9435 | g_CCharacterClassInfo
    PUSH EAX                            ; 004a943a | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007c637c]      ; 004a943b | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 004a9441
    LEA EAX,[ESP + 0xc80]               ; 004a9442
    PUSH EAX                            ; 004a9449
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a944a
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a944f
    TEST EAX,EAX                        ; 004a9452
    JZ 0x004a9499                       ; 004a9454
        ;   XREF to: 004a9499 (CONDITIONAL_JUMP)  ; LAB_004a9499
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a9456 | DAT_005ffcb8
    JNZ 0x004a94a5                      ; 004a945c
        ;   XREF to: 004a94a5 (CONDITIONAL_JUMP)  ; LAB_004a94a5
    XOR ECX,ECX                         ; 004a945e
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004a9460
    MOV EAX,dword ptr [ESP + 0x1098]    ; 004a9467
    ADD dword ptr [EBX],EAX             ; 004a946e
    JMP 0x004a757c                      ; 004a9470
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV ESI,0x5de9df                    ; 004a9475 | = "Error parsing reachedDest parameters."
        ;   Label: LAB_004a9475
    MOV EDI,0x1c56ed0                   ; 004a947a
    PUSH EDI                            ; 004a947f | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a9480 | = "Error parsing reachedDest parameters." | s_Error_parsing_reachedDes_005de9df+2
        ;   Label: LAB_004a9480
    MOV byte ptr [EDI],AL               ; 004a9482 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a9484
    JZ 0x004a9498                       ; 004a9486
        ;   XREF to: 004a9498 (CONDITIONAL_JUMP)  ; LAB_004a9498
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9488 | s_Error_parsing_reachedDes_005de9df+1 | s_Error_parsing_reachedDes_005de9df+3
    ADD ESI,0x2                         ; 004a948b
    MOV byte ptr [EDI + 0x1],AL         ; 004a948e | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a9491
    CMP AL,0x0                          ; 004a9494
    JNZ 0x004a9480                      ; 004a9496
        ;   XREF to: 004a9480 (CONDITIONAL_JUMP)  ; LAB_004a9480
    POP EDI                             ; 004a9498
        ;   Label: LAB_004a9498
    MOV EAX,0xffffffff                  ; 004a9499
        ;   Label: LAB_004a9499
    MOV ESP,EBP                         ; 004a949e
    POP EBP                             ; 004a94a0
    POP EDI                             ; 004a94a1
    POP ESI                             ; 004a94a2
    POP EBX                             ; 004a94a3
    RET                                 ; 004a94a4
    PUSH EAX                            ; 004a94a5
        ;   Label: LAB_004a94a5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004a94a6
    CALL dword ptr [EDX + 0x13c]        ; 004a94ac
    ADD ESP,0x4                         ; 004a94b2
    TEST EAX,EAX                        ; 004a94b5
    SETNZ AL                            ; 004a94b7
    AND EAX,0xff                        ; 004a94ba
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004a94bf
    MOV EAX,dword ptr [ESP + 0x1098]    ; 004a94c6
    ADD dword ptr [EBX],EAX             ; 004a94cd
    JMP 0x004a757c                      ; 004a94cf
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    PUSH 0x5dea05                       ; 004a94d4 | = "testActorBool"
        ;   Label: LAB_004a94d4
    LEA EAX,[ESP + 0xf38]               ; 004a94d9
    PUSH EAX                            ; 004a94e0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a94e1
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a94e6
    TEST EAX,EAX                        ; 004a94e9
    JNZ 0x004a9771                      ; 004a94eb
        ;   XREF to: 004a9771 (CONDITIONAL_JUMP)  ; LAB_004a9771
    LEA EAX,[ESP + 0x109c]              ; 004a94f1
    PUSH EAX                            ; 004a94f8
    LEA EAX,[ESP + 0x510]               ; 004a94f9
    MOV ESI,0xffffffff                  ; 004a9500
    PUSH EAX                            ; 004a9505
    LEA EAX,[ESP + 0x5dc]               ; 004a9506
    MOV dword ptr [ESP + 0x10a4],ESI    ; 004a950d
    PUSH EAX                            ; 004a9514
    MOV EDI,dword ptr [EBX]             ; 004a9515
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a9517
    PUSH 0x5dea13                       ; 004a951a | = "(%[^,], %[^)])%n"
    ADD EAX,EDI                         ; 004a951f
    PUSH EAX                            ; 004a9521
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a9522
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 004a9527
    CMP dword ptr [ESP + 0x109c],0x3    ; 004a952a
    JL 0x004a95ad                       ; 004a9532
        ;   XREF to: 004a95ad (CONDITIONAL_JUMP)  ; LAB_004a95ad
    LEA EDI,[ESP + 0x5d4]               ; 004a9538
    LEA ESI,[ESP + 0x5d4]               ; 004a953f
    SUB ECX,ECX                         ; 004a9546
    DEC ECX                             ; 004a9548
    XOR EAX,EAX                         ; 004a9549
    SCASB.REPNE ES:EDI                  ; 004a954b
    NOT ECX                             ; 004a954d
    DEC ECX                             ; 004a954f
    MOV EAX,ECX                         ; 004a9550
    MOV EDI,ECX                         ; 004a9552
    TEST ECX,ECX                        ; 004a9554
    JLE 0x004a9576                      ; 004a9556
        ;   XREF to: 004a9576 (CONDITIONAL_JUMP)  ; LAB_004a9576
    LEA EDX,[ESP + 0x5d4]               ; 004a9558
    LEA EAX,[ECX + EDX*0x1]             ; 004a955f
    MOV DL,byte ptr [EAX + -0x1]        ; 004a9562
        ;   Label: LAB_004a9562
    INC DL                              ; 004a9565
    AND EDX,0xff                        ; 004a9567
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a956d | DAT_00626114
    JNZ 0x004a95dd                      ; 004a9574
        ;   XREF to: 004a95dd (CONDITIONAL_JUMP)  ; LAB_004a95dd
    LEA EAX,[ESI + EDI*0x1]             ; 004a9576
        ;   Label: LAB_004a9576
    MOV byte ptr [EAX],0x0              ; 004a9579
    LEA EAX,[ESI + 0x1]                 ; 004a957c
    MOV dword ptr [ESP + 0x10a0],EAX    ; 004a957f
    MOV AL,byte ptr [ESI]               ; 004a9586
        ;   Label: LAB_004a9586
    INC AL                              ; 004a9588
    AND EAX,0xff                        ; 004a958a
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a958f | DAT_00626114
    JZ 0x004a95e9                       ; 004a9596
        ;   XREF to: 004a95e9 (CONDITIONAL_JUMP)  ; LAB_004a95e9
    PUSH EDI                            ; 004a9598
    MOV EDX,dword ptr [ESP + 0x10a4]    ; 004a9599
    PUSH EDX                            ; 004a95a0
    PUSH ESI                            ; 004a95a1
    DEC EDI                             ; 004a95a2
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a95a3
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a95a8
    JMP 0x004a9586                      ; 004a95ab
        ;   XREF to: 004a9586 (UNCONDITIONAL_JUMP)  ; LAB_004a9586
    MOV ESI,0x5dea24                    ; 004a95ad | = "Error parsing testActorBool parameters."
        ;   Label: LAB_004a95ad
    MOV EDI,0x1c56ed0                   ; 004a95b2
    PUSH EDI                            ; 004a95b7 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a95b8 | = "Error parsing testActorBool parameters." | s_Error_parsing_testActorB_005dea24+2
        ;   Label: LAB_004a95b8
    MOV byte ptr [EDI],AL               ; 004a95ba | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a95bc
    JZ 0x004a95d0                       ; 004a95be
        ;   XREF to: 004a95d0 (CONDITIONAL_JUMP)  ; LAB_004a95d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004a95c0 | s_Error_parsing_testActorB_005dea24+1 | s_Error_parsing_testActorB_005dea24+3
    ADD ESI,0x2                         ; 004a95c3
    MOV byte ptr [EDI + 0x1],AL         ; 004a95c6 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a95c9
    CMP AL,0x0                          ; 004a95cc
    JNZ 0x004a95b8                      ; 004a95ce
        ;   XREF to: 004a95b8 (CONDITIONAL_JUMP)  ; LAB_004a95b8
    POP EDI                             ; 004a95d0
        ;   Label: LAB_004a95d0
    MOV EAX,0xffffffff                  ; 004a95d1
    MOV ESP,EBP                         ; 004a95d6
    POP EBP                             ; 004a95d8
    POP EDI                             ; 004a95d9
    POP ESI                             ; 004a95da
    POP EBX                             ; 004a95db
    RET                                 ; 004a95dc
    DEC EDI                             ; 004a95dd
        ;   Label: LAB_004a95dd
    DEC EAX                             ; 004a95de
    TEST EDI,EDI                        ; 004a95df
    JG 0x004a9562                       ; 004a95e1
        ;   XREF to: 004a9562 (CONDITIONAL_JUMP)  ; LAB_004a9562
    JMP 0x004a9576                      ; 004a95e7
        ;   XREF to: 004a9576 (UNCONDITIONAL_JUMP)  ; LAB_004a9576
    LEA EAX,[ESP + 0x50c]               ; 004a95e9
        ;   Label: LAB_004a95e9
    LEA EDI,[ESP + 0x50c]               ; 004a95f0
    MOV dword ptr [ESP + 0x10a4],EAX    ; 004a95f7
    SUB ECX,ECX                         ; 004a95fe
    DEC ECX                             ; 004a9600
    XOR EAX,EAX                         ; 004a9601
    SCASB.REPNE ES:EDI                  ; 004a9603
    NOT ECX                             ; 004a9605
    DEC ECX                             ; 004a9607
    MOV ESI,ECX                         ; 004a9608
    TEST ECX,ECX                        ; 004a960a
    JLE 0x004a962b                      ; 004a960c
        ;   XREF to: 004a962b (CONDITIONAL_JUMP)  ; LAB_004a962b
    LEA EAX,[ESP + 0x50c]               ; 004a960e
    ADD EAX,ECX                         ; 004a9615
    MOV DL,byte ptr [EAX + -0x1]        ; 004a9617
        ;   Label: LAB_004a9617
    INC DL                              ; 004a961a
    AND EDX,0xff                        ; 004a961c
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a9622 | DAT_00626114
    JNZ 0x004a9667                      ; 004a9629
        ;   XREF to: 004a9667 (CONDITIONAL_JUMP)  ; LAB_004a9667
    MOV EAX,dword ptr [ESP + 0x10a4]    ; 004a962b
        ;   Label: LAB_004a962b
    LEA EDI,[EAX + 0x1]                 ; 004a9632
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 004a9635
    MOV EAX,dword ptr [ESP + 0x10a4]    ; 004a9639
        ;   Label: LAB_004a9639
    MOV AL,byte ptr [EAX]               ; 004a9640
    INC AL                              ; 004a9642
    AND EAX,0xff                        ; 004a9644
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a9649 | DAT_00626114
    JZ 0x004a966f                       ; 004a9650
        ;   XREF to: 004a966f (CONDITIONAL_JUMP)  ; LAB_004a966f
    PUSH ESI                            ; 004a9652
    PUSH EDI                            ; 004a9653
    MOV EAX,dword ptr [ESP + 0x10ac]    ; 004a9654
    PUSH EAX                            ; 004a965b
    DEC ESI                             ; 004a965c
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a965d
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a9662
    JMP 0x004a9639                      ; 004a9665
        ;   XREF to: 004a9639 (UNCONDITIONAL_JUMP)  ; LAB_004a9639
    DEC ESI                             ; 004a9667
        ;   Label: LAB_004a9667
    DEC EAX                             ; 004a9668
    TEST ESI,ESI                        ; 004a9669
    JG 0x004a9617                       ; 004a966b
        ;   XREF to: 004a9617 (CONDITIONAL_JUMP)  ; LAB_004a9617
    JMP 0x004a962b                      ; 004a966d
        ;   XREF to: 004a962b (UNCONDITIONAL_JUMP)  ; LAB_004a962b
    MOV ESI,dword ptr [0x0061b564]      ; 004a966f | DAT_0061b564
        ;   Label: LAB_004a966f
    XOR ECX,ECX                         ; 004a9675
    XOR EDI,EDI                         ; 004a9677
    MOV dword ptr [ESP + 0xfc4],ECX     ; 004a9679
    TEST ESI,ESI                        ; 004a9680
    JLE 0x004a96c7                      ; 004a9682
        ;   XREF to: 004a96c7 (CONDITIONAL_JUMP)  ; LAB_004a96c7
    XOR ESI,ESI                         ; 004a9684
    CMP dword ptr [ESI + 0x61b4d4],0x0  ; 004a9686 | DAT_0061b4d4 | DAT_0061b51c
        ;   Label: LAB_004a9686
    JNZ 0x004a9704                      ; 004a968d
        ;   XREF to: 004a9704 (CONDITIONAL_JUMP)  ; LAB_004a9704
    LEA EAX,[ESP + 0x50c]               ; 004a9693
    PUSH EAX                            ; 004a969a
    MOV EAX,0x61b4d4                    ; 004a969b | DAT_0061b4d4
    ADD EAX,ESI                         ; 004a96a0
    MOV dword ptr [ESP + 0x1024],EAX    ; 004a96a2 | DAT_0061b4d4 | DAT_0061b51c
    ADD EAX,0x4                         ; 004a96a9
    PUSH EAX                            ; 004a96ac | = "spectralFlag" | s_invulnerableFlag_0061b520
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a96ad
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a96b2
    TEST EAX,EAX                        ; 004a96b5
    JNZ 0x004a9704                      ; 004a96b7
        ;   XREF to: 004a9704 (CONDITIONAL_JUMP)  ; LAB_004a9704
    MOV EAX,dword ptr [ESP + 0x1020]    ; 004a96b9
    MOV dword ptr [ESP + 0xfc4],EAX     ; 004a96c0 | DAT_0061b4d4
    MOV ESI,dword ptr [ESP + 0xfc4]     ; 004a96c7
        ;   Label: LAB_004a96c7
    TEST ESI,ESI                        ; 004a96ce
    JZ 0x004a9718                       ; 004a96d0
        ;   XREF to: 004a9718 (CONDITIONAL_JUMP)  ; LAB_004a9718
    LEA EAX,[ESI + 0x22]                ; 004a96d2 | = "CCharacter"
    PUSH EAX                            ; 004a96d5 | = "CCharacter"
    MOV EDI,dword ptr [ESI + 0x44]      ; 004a96d6 | DAT_0061b518
    PUSH EDI                            ; 004a96d9
    LEA EAX,[ESP + 0x5dc]               ; 004a96da
    PUSH EAX                            ; 004a96e1
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a96e2
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    ADD ESP,0xc                         ; 004a96e7
    TEST EAX,EAX                        ; 004a96ea
    JZ 0x004a975b                       ; 004a96ec
        ;   XREF to: 004a975b (CONDITIONAL_JUMP)  ; LAB_004a975b
    CMP EAX,dword ptr [0x005ffcb8]      ; 004a96ee | DAT_005ffcb8
    JNZ 0x004a9767                      ; 004a96f4
        ;   XREF to: 004a9767 (CONDITIONAL_JUMP)  ; LAB_004a9767
    XOR ESI,ESI                         ; 004a96f6
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004a96f8
    JMP 0x004a757c                      ; 004a96ff
        ;   XREF to: 004a757c (UNCONDITIONAL_JUMP)  ; LAB_004a757c
    MOV EDX,dword ptr [0x0061b564]      ; 004a9704 | DAT_0061b564
        ;   Label: LAB_004a9704
    INC EDI                             ; 004a970a
    ADD ESI,0x48                        ; 004a970b
    CMP EDI,EDX                         ; 004a970e
    JL 0x004a9686                       ; 004a9710
        ;   XREF to: 004a9686 (CONDITIONAL_JUMP)  ; LAB_004a9686
    JMP 0x004a96c7                      ; 004a9716
        ;   XREF to: 004a96c7 (UNCONDITIONAL_JUMP)  ; LAB_004a96c7
    LEA EAX,[ESP + 0x50c]               ; 004a9718
        ;   Label: LAB_004a9718
    PUSH EAX                            ; 004a971f
    PUSH 0x5dea4c                       ; 004a9720 | = "%s is not a valid boolean actor varia..."
    LEA EAX,[ESP + 0x314]               ; 004a9725
    PUSH EAX                            ; 004a972c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004a972d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a9732
    LEA ESI,[ESP + 0x30c]               ; 004a9735
    MOV EDI,0x1c56ed0                   ; 004a973c
    PUSH EDI                            ; 004a9741 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a9742
        ;   Label: LAB_004a9742
    MOV byte ptr [EDI],AL               ; 004a9744 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a9746
    JZ 0x004a975a                       ; 004a9748
        ;   XREF to: 004a975a (CONDITIONAL_JUMP)  ; LAB_004a975a
    MOV AL,byte ptr [ESI + 0x1]         ; 004a974a
    ADD ESI,0x2                         ; 004a974d
    MOV byte ptr [EDI + 0x1],AL         ; 004a9750 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a9753
    CMP AL,0x0                          ; 004a9756
    JNZ 0x004a9742                      ; 004a9758
        ;   XREF to: 004a9742 (CONDITIONAL_JUMP)  ; LAB_004a9742
    POP EDI                             ; 004a975a
        ;   Label: LAB_004a975a
    MOV EAX,0xffffffff                  ; 004a975b
        ;   Label: LAB_004a975b
    MOV ESP,EBP                         ; 004a9760
    POP EBP                             ; 004a9762
    POP EDI                             ; 004a9763
    POP ESI                             ; 004a9764
    POP EBX                             ; 004a9765
    RET                                 ; 004a9766
    ADD EAX,dword ptr [ESI + 0x40]      ; 004a9767 | DAT_0061b514
        ;   Label: LAB_004a9767
    MOV EAX,dword ptr [EAX]             ; 004a976a
    JMP 0x004a7575                      ; 004a976c
        ;   XREF to: 004a7575 (UNCONDITIONAL_JUMP)  ; LAB_004a7575
    MOV ESI,0x5dea7a                    ; 004a9771 | = "Invalid meta-function"
        ;   Label: LAB_004a9771
    MOV EDI,0x1c56ed0                   ; 004a9776
    PUSH EDI                            ; 004a977b | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a977c | = "Invalid meta-function" | s_Invalid_meta_function_005dea7a+2
        ;   Label: LAB_004a977c
    MOV byte ptr [EDI],AL               ; 004a977e | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a9780
    JZ 0x004a9794                       ; 004a9782
        ;   XREF to: 004a9794 (CONDITIONAL_JUMP)  ; LAB_004a9794
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9784 | s_Invalid_meta_function_005dea7a+1 | s_Invalid_meta_function_005dea7a+3
    ADD ESI,0x2                         ; 004a9787
    MOV byte ptr [EDI + 0x1],AL         ; 004a978a | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a978d
    CMP AL,0x0                          ; 004a9790
    JNZ 0x004a977c                      ; 004a9792
        ;   XREF to: 004a977c (CONDITIONAL_JUMP)  ; LAB_004a977c
    POP EDI                             ; 004a9794
        ;   Label: LAB_004a9794
    MOV EAX,0xffffffff                  ; 004a9795
    MOV ESP,EBP                         ; 004a979a
    POP EBP                             ; 004a979c
    POP EDI                             ; 004a979d
    POP ESI                             ; 004a979e
    POP EBX                             ; 004a979f
    RET                                 ; 004a97a0
    MOV EAX,dword ptr [ESP + 0xfbc]     ; 004a97a1
        ;   Label: LAB_004a97a1
    MOV ESP,EBP                         ; 004a97a8
    POP EBP                             ; 004a97aa
    POP EDI                             ; 004a97ab
    POP ESI                             ; 004a97ac
    POP EBX                             ; 004a97ad
    RET                                 ; 004a97ae

