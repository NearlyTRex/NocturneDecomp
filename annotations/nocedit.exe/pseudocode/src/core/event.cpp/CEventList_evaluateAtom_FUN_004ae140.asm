; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList *this_ptr,char *expression,int *parse_position)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; int *            Stack[0xc]:4   parse_position
; Local Variables:
; undefined8       Stack[-0xa90]:8  local_a90
; float            Stack[-0xa88]:4  local_a88
; char[255]        Stack[-0xa84]:255  local_a84
; char[100]        Stack[-0x985]:100  local_985
; char[101]        Stack[-0x921]:101  acStack_921
; char[99]         Stack[-0x8bc]:99  local_8bc
; char[101]        Stack[-0x859]:101  acStack_859
; char[99]         Stack[-0x7f4]:99  local_7f4
; char[100]        Stack[-0x791]:100  acStack_791
; char[101]        Stack[-0x72d]:101  local_72d
; char[99]         Stack[-0x6c8]:99  local_6c8
; char[101]        Stack[-0x665]:101  local_665
; char[99]         Stack[-0x600]:99  local_600
; char[101]        Stack[-0x59d]:101  acStack_59d
; char[99]         Stack[-0x538]:99  local_538
; char[100]        Stack[-0x4d5]:100  local_4d5
; char[101]        Stack[-0x471]:101  acStack_471
; char[99]         Stack[-0x40c]:99  local_40c
; char[100]        Stack[-0x3a9]:100  local_3a9
; char[101]        Stack[-0x345]:101  acStack_345
; char[99]         Stack[-0x2e0]:99  local_2e0
; char[101]        Stack[-0x27d]:101  acStack_27d
; char[99]         Stack[-0x218]:99  local_218
; char[101]        Stack[-0x1b5]:101  acStack_1b5
; char[64]         Stack[-0x150]:64  local_150
; CVector3f        Stack[-0x110]:12  local_110
; CVector3f        Stack[-0x104]:12  local_104
; CVector3f        Stack[-0xf8]:12  local_f8
; CVector3f        Stack[-0xec]:12  local_ec
; uint             Stack[-0xe0]:4  local_e0
; int              Stack[-0xdc]:4  local_dc
; int              Stack[-0xd8]:4  local_d8
; char *           Stack[-0xd4]:4  local_d4
; char *           Stack[-0xd0]:4  local_d0
; int              Stack[-0xcc]:4  local_cc
; char *           Stack[-0xc8]:4  local_c8
; int              Stack[-0xc4]:4  local_c4
; int              Stack[-0xc0]:4  local_c0
; char *           Stack[-0xbc]:4  local_bc
; int              Stack[-0xb8]:4  local_b8
; CDemonActor *    Stack[-0xb4]:4  local_b4
; char *           Stack[-0xb0]:4  local_b0
; int              Stack[-0xac]:4  local_ac
; char *           Stack[-0xa8]:4  local_a8
; int              Stack[-0xa4]:4  local_a4
; uint             Stack[-0xa0]:4  local_a0
; int              Stack[-0x9c]:4  local_9c
; char *           Stack[-0x98]:4  local_98
; int              Stack[-0x94]:4  local_94
; int              Stack[-0x90]:4  local_90
; int              Stack[-0x8c]:4  local_8c
; int              Stack[-0x88]:4  local_88
; float[4]         Stack[-0x84]:16  local_84
; int              Stack[-0x74]:4  local_74
; int              Stack[-0x70]:4  local_70
; int              Stack[-0x6c]:4  local_6c
; char *           Stack[-0x68]:4  local_68
; char *           Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; char *           Stack[-0x5c]:4  local_5c
; char *           Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; char *           Stack[-0x50]:4  local_50
; C3DSLight *      Stack[-0x4c]:4  local_4c
; CDemonLight *    Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; char *           Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; CLocation *      Stack[-0x30]:4  local_30
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float[2]         Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270 at 004b0283
;
; Referenced Globals:
;   void* switchdataD_004ae11c = 004ae5d3
;   TerminatedCString s_anon_00624439
;   TerminatedCString s_anon_0062443b
;   TerminatedCString s_anon_0062443e
;   TerminatedCString s_anon_00624441
;   TerminatedCString s_anon_00624444
;   TerminatedCString s_anon_00624446
;   TerminatedCString s_d_00624449
;   TerminatedCString s_Unexpected_end_of_string_00625308
;   undefined4 s_nexpected_end_of_string_00625309
;   undefined4 s_expected_end_of_string_0062530a
;   undefined4 s_xpected_end_of_string_0062530b
;   TerminatedCString s_Matching_is_missing_00625321
;   undefined4 s_atching_')'_is_missing_00625322
;   undefined4 s_tching_')'_is_missing_00625323
;   ... and 216 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270
;   core_event.cpp_CEventList_getCounterValue_FUN_004b0830
;   core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40
;   core_event.cpp_CEventList_resolveVariable_FUN_004adc10
;   core_event.cpp_isValidIdentifierChar_FUN_004b0f90
;   core_event.cpp_parseVectorLocation_FUN_004aa530
;   core_event.cpp_resolveActorByName_FUN_004aa400
;   core_game.cpp_CGame_fadeIn_FUN_004e0b90
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
;   core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
;   core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae140
        ;   Label: core_event.cpp_CEventList_evaluateAtom_FUN_004ae140
    PUSH ESI                            ; 004ae141
    PUSH EDI                            ; 004ae142
    PUSH EBP                            ; 004ae143
    MOV EBP,ESP                         ; 004ae144
    SUB ESP,0xa7c                       ; 004ae146
    AND ESP,0xfffffff8                  ; 004ae14c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004ae14f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ae152
    MOV EDI,ESI                         ; 004ae155
    MOV EAX,dword ptr [EDI]             ; 004ae157
        ;   Label: LAB_004ae157
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 004ae159
    INC AL                              ; 004ae15c
    AND EAX,0xff                        ; 004ae15e
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae163 | g_CharacterClassificationTable
    JNZ 0x004ae1c1                      ; 004ae16a
        ;   XREF to: 004ae1c1 (CONDITIONAL_JUMP)  ; LAB_004ae1c1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae16c
    MOV EDX,dword ptr [ESI]             ; 004ae16f
    ADD EAX,EDX                         ; 004ae171
    CMP byte ptr [EAX],0x2e             ; 004ae173
    JNZ 0x004ae17d                      ; 004ae176
        ;   XREF to: 004ae17d (CONDITIONAL_JUMP)  ; LAB_004ae17d
    LEA ECX,[EDX + 0x1]                 ; 004ae178
    MOV dword ptr [ESI],ECX             ; 004ae17b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae17d
        ;   Label: LAB_004ae17d
    MOV EBX,dword ptr [ESI]             ; 004ae180
    ADD EAX,EBX                         ; 004ae182
    MOV CL,byte ptr [EAX]               ; 004ae184
    TEST CL,CL                          ; 004ae186
    JZ 0x004ae1c5                       ; 004ae188
        ;   XREF to: 004ae1c5 (CONDITIONAL_JUMP)  ; LAB_004ae1c5
    CMP CL,0x28                         ; 004ae18a
    JZ 0x004ae1f0                       ; 004ae18d
        ;   XREF to: 004ae1f0 (CONDITIONAL_JUMP)  ; LAB_004ae1f0
    CMP CL,0x21                         ; 004ae18f
    JNZ 0x004ae273                      ; 004ae192
        ;   XREF to: 004ae273 (CONDITIONAL_JUMP)  ; LAB_004ae273
    PUSH ESI                            ; 004ae198
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ae199
    PUSH EDI                            ; 004ae19c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae19d
    LEA EDX,[EBX + 0x1]                 ; 004ae1a0
    PUSH EAX                            ; 004ae1a3
    MOV dword ptr [ESI],EDX             ; 004ae1a4
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 ; 004ae1a6
        ;   XREF to: 004ae140 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004ae1ab
    TEST EAX,EAX                        ; 004ae1ae
    JL 0x004ae1ba                       ; 004ae1b0
        ;   XREF to: 004ae1ba (CONDITIONAL_JUMP)  ; LAB_004ae1ba
    SETZ AL                             ; 004ae1b2
    AND EAX,0xff                        ; 004ae1b5
    MOV ESP,EBP                         ; 004ae1ba
        ;   Label: LAB_004ae1ba
    POP EBP                             ; 004ae1bc
        ;   Label: LAB_004ae1bc
    POP EDI                             ; 004ae1bd
    POP ESI                             ; 004ae1be
    POP EBX                             ; 004ae1bf
    RET                                 ; 004ae1c0
    INC dword ptr [EDI]                 ; 004ae1c1
        ;   Label: LAB_004ae1c1
    JMP 0x004ae157                      ; 004ae1c3
        ;   XREF to: 004ae157 (UNCONDITIONAL_JUMP)  ; LAB_004ae157
    MOV ESI,0x625308                    ; 004ae1c5 | = "Unexpected end of string"
        ;   Label: LAB_004ae1c5
    MOV EDI,0x2d0a460                   ; 004ae1ca | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae1cf | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae1d0 | = "Unexpected end of string" | s_expected_end_of_string_0062530a
        ;   Label: LAB_004ae1d0
    MOV byte ptr [EDI],AL               ; 004ae1d2 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae1d4
    JZ 0x004ae1e8                       ; 004ae1d6
        ;   XREF to: 004ae1e8 (CONDITIONAL_JUMP)  ; LAB_004ae1e8
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae1d8 | s_nexpected_end_of_string_00625309 | s_xpected_end_of_string_0062530b
    ADD ESI,0x2                         ; 004ae1db
    MOV byte ptr [EDI + 0x1],AL         ; 004ae1de | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae1e1
    CMP AL,0x0                          ; 004ae1e4
    JNZ 0x004ae1d0                      ; 004ae1e6
        ;   XREF to: 004ae1d0 (CONDITIONAL_JUMP)  ; LAB_004ae1d0
    POP EDI                             ; 004ae1e8
        ;   Label: LAB_004ae1e8
    MOV EAX,0xffffffff                  ; 004ae1e9
    JMP 0x004ae1ba                      ; 004ae1ee
        ;   XREF to: 004ae1ba (UNCONDITIONAL_JUMP)  ; LAB_004ae1ba
    PUSH ESI                            ; 004ae1f0
        ;   Label: LAB_004ae1f0
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ae1f1
    MOV EDI,dword ptr [ESI]             ; 004ae1f4
    PUSH ECX                            ; 004ae1f6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ae1f7
    INC EDI                             ; 004ae1fa
    PUSH EBX                            ; 004ae1fb
    MOV dword ptr [ESI],EDI             ; 004ae1fc
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270 ; 004ae1fe
        ;   XREF to: 004b0270 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004ae203
    MOV EBX,EAX                         ; 004ae206
    TEST EAX,EAX                        ; 004ae208
    JL 0x004ae1ba                       ; 004ae20a
        ;   XREF to: 004ae1ba (CONDITIONAL_JUMP)  ; LAB_004ae1ba
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae20c
    ADD EAX,dword ptr [ESI]             ; 004ae20f
    CMP byte ptr [EAX],0x29             ; 004ae211
    JNZ 0x004ae23a                      ; 004ae214
        ;   XREF to: 004ae23a (CONDITIONAL_JUMP)  ; LAB_004ae23a
    MOV ECX,dword ptr [ESI]             ; 004ae216
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ae218
    INC ECX                             ; 004ae21b
    MOV EAX,ESI                         ; 004ae21c
    MOV dword ptr [ESI],ECX             ; 004ae21e
    MOV EDX,dword ptr [EAX]             ; 004ae220
        ;   Label: LAB_004ae220
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 004ae222
    INC DL                              ; 004ae225
    AND EDX,0xff                        ; 004ae227
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae22d | g_CharacterClassificationTable
    JZ 0x004ae26a                       ; 004ae234
        ;   XREF to: 004ae26a (CONDITIONAL_JUMP)  ; LAB_004ae26a
    INC dword ptr [EAX]                 ; 004ae236
    JMP 0x004ae220                      ; 004ae238
        ;   XREF to: 004ae220 (UNCONDITIONAL_JUMP)  ; LAB_004ae220
    MOV ESI,0x625321                    ; 004ae23a | = "Matching ')' is missing"
        ;   Label: LAB_004ae23a
    MOV EDI,0x2d0a460                   ; 004ae23f | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae244 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae245 | = "Matching ')' is missing" | s_tching_')'_is_missing_00625323
        ;   Label: LAB_004ae245
    MOV byte ptr [EDI],AL               ; 004ae247 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae249
    JZ 0x004ae25d                       ; 004ae24b
        ;   XREF to: 004ae25d (CONDITIONAL_JUMP)  ; LAB_004ae25d
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae24d | s_atching_')'_is_missing_00625322 | s_ching_')'_is_missing_00625324
    ADD ESI,0x2                         ; 004ae250
    MOV byte ptr [EDI + 0x1],AL         ; 004ae253 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae256
    CMP AL,0x0                          ; 004ae259
    JNZ 0x004ae245                      ; 004ae25b
        ;   XREF to: 004ae245 (CONDITIONAL_JUMP)  ; LAB_004ae245
    POP EDI                             ; 004ae25d
        ;   Label: LAB_004ae25d
    MOV EAX,0xffffffff                  ; 004ae25e
    MOV ESP,EBP                         ; 004ae263
    POP EBP                             ; 004ae265
    POP EDI                             ; 004ae266
    POP ESI                             ; 004ae267
    POP EBX                             ; 004ae268
    RET                                 ; 004ae269
    MOV EAX,EBX                         ; 004ae26a
        ;   Label: LAB_004ae26a
    MOV ESP,EBP                         ; 004ae26c
    POP EBP                             ; 004ae26e
    POP EDI                             ; 004ae26f
    POP ESI                             ; 004ae270
    POP EBX                             ; 004ae271
    RET                                 ; 004ae272
    MOV AL,CL                           ; 004ae273
        ;   Label: LAB_004ae273
    AND EAX,0xff                        ; 004ae275
    PUSH EAX                            ; 004ae27a
    CALL core_event.cpp_isValidIdentifierChar_FUN_004b0f90 ; 004ae27b
        ;   XREF to: 004b0f90 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_004b0f90(int ch)
    ADD ESP,0x4                         ; 004ae280
    TEST EAX,EAX                        ; 004ae283
    JZ 0x004ae2e2                       ; 004ae285
        ;   XREF to: 004ae2e2 (CONDITIONAL_JUMP)  ; LAB_004ae2e2
    LEA EDI,[ESP + 0x940]               ; 004ae287
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae28e
        ;   Label: LAB_004ae28e
    ADD EAX,dword ptr [ESI]             ; 004ae291
    MOV AL,byte ptr [EAX]               ; 004ae293
    MOV byte ptr [EDI],AL               ; 004ae295
    MOV ECX,dword ptr [ESI]             ; 004ae297
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae299
    INC ECX                             ; 004ae29c
    ADD EAX,ECX                         ; 004ae29d
    MOV dword ptr [ESI],ECX             ; 004ae29f
    INC EDI                             ; 004ae2a1
    MOV AL,byte ptr [EAX]               ; 004ae2a2
    AND EAX,0xff                        ; 004ae2a4
    PUSH EAX                            ; 004ae2a9
    CALL core_event.cpp_isValidIdentifierChar_FUN_004b0f90 ; 004ae2aa
        ;   XREF to: 004b0f90 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_004b0f90(int ch)
    ADD ESP,0x4                         ; 004ae2af
    TEST EAX,EAX                        ; 004ae2b2
    JNZ 0x004ae28e                      ; 004ae2b4
        ;   XREF to: 004ae28e (CONDITIONAL_JUMP)  ; LAB_004ae28e
    MOV byte ptr [EDI],0x0              ; 004ae2b6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae2b9
    ADD EAX,dword ptr [ESI]             ; 004ae2bc
    CMP byte ptr [EAX],0x28             ; 004ae2be
    JZ 0x004ae32d                       ; 004ae2c1
        ;   XREF to: 004ae32d (CONDITIONAL_JUMP)  ; LAB_004ae32d
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ae2c3
    MOV EAX,ESI                         ; 004ae2c6
    MOV EDX,dword ptr [EAX]             ; 004ae2c8
        ;   Label: LAB_004ae2c8
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 004ae2ca
    INC DL                              ; 004ae2cd
    AND EDX,0xff                        ; 004ae2cf
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae2d5 | g_CharacterClassificationTable
    JZ 0x004ae312                       ; 004ae2dc
        ;   XREF to: 004ae312 (CONDITIONAL_JUMP)  ; LAB_004ae312
    INC dword ptr [EAX]                 ; 004ae2de
    JMP 0x004ae2c8                      ; 004ae2e0
        ;   XREF to: 004ae2c8 (UNCONDITIONAL_JUMP)  ; LAB_004ae2c8
    MOV ESI,0x625339                    ; 004ae2e2 | = "Syntax error"
        ;   Label: LAB_004ae2e2
    MOV EDI,0x2d0a460                   ; 004ae2e7 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae2ec | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae2ed | = "Syntax error" | s_ntax_error_0062533b
        ;   Label: LAB_004ae2ed
    MOV byte ptr [EDI],AL               ; 004ae2ef | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae2f1
    JZ 0x004ae305                       ; 004ae2f3
        ;   XREF to: 004ae305 (CONDITIONAL_JUMP)  ; LAB_004ae305
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae2f5 | s_yntax_error_0062533a | s_tax_error_0062533c
    ADD ESI,0x2                         ; 004ae2f8
    MOV byte ptr [EDI + 0x1],AL         ; 004ae2fb | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae2fe
    CMP AL,0x0                          ; 004ae301
    JNZ 0x004ae2ed                      ; 004ae303
        ;   XREF to: 004ae2ed (CONDITIONAL_JUMP)  ; LAB_004ae2ed
    POP EDI                             ; 004ae305
        ;   Label: LAB_004ae305
    MOV EAX,0xffffffff                  ; 004ae306
    MOV ESP,EBP                         ; 004ae30b
    POP EBP                             ; 004ae30d
    POP EDI                             ; 004ae30e
    POP ESI                             ; 004ae30f
    POP EBX                             ; 004ae310
    RET                                 ; 004ae311
    LEA EAX,[ESP + 0x940]               ; 004ae312
        ;   Label: LAB_004ae312
    PUSH EAX                            ; 004ae319
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ae31a
    PUSH EBX                            ; 004ae31d
    CALL core_event.cpp_CEventList_resolveVariable_FUN_004adc10 ; 004ae31e
        ;   XREF to: 004adc10 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_resolveVariable_FUN_004adc10(CEventList * this_ptr, char * identifier)
    ADD ESP,0x8                         ; 004ae323
    MOV ESP,EBP                         ; 004ae326
    POP EBP                             ; 004ae328
    POP EDI                             ; 004ae329
    POP ESI                             ; 004ae32a
    POP EBX                             ; 004ae32b
    RET                                 ; 004ae32c
    MOV EAX,0xffffffff                  ; 004ae32d
        ;   Label: LAB_004ae32d
    PUSH 0x625346                       ; 004ae332 | = "cmp"
    MOV dword ptr [ESP + 0x9b4],EAX     ; 004ae337
    LEA EAX,[ESP + 0x944]               ; 004ae33e
    PUSH EAX                            ; 004ae345
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ae346
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae34b
    TEST EAX,EAX                        ; 004ae34e
    JNZ 0x004ae785                      ; 004ae350
        ;   XREF to: 004ae785 (CONDITIONAL_JUMP)  ; LAB_004ae785
    LEA EAX,[ESP + 0x9b4]               ; 004ae356
    PUSH EAX                            ; 004ae35d
    LEA EAX,[ESP + 0x6ec]               ; 004ae35e
    PUSH EAX                            ; 004ae365
    LEA EAX,[ESP + 0x114]               ; 004ae366
    MOV EBX,0xffffffff                  ; 004ae36d
    PUSH EAX                            ; 004ae372
    LEA EAX,[ESP + 0x17c]               ; 004ae373
    MOV dword ptr [ESP + 0x9c0],EBX     ; 004ae37a
    PUSH EAX                            ; 004ae381
    MOV EAX,0x62534a                    ; 004ae382 | = " ( %s %s %[^ )] )%n"
    MOV EDI,dword ptr [ESI]             ; 004ae387
    PUSH EAX                            ; 004ae389 | = " ( %s %s %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae38a
    ADD EAX,EDI                         ; 004ae38d
    PUSH EAX                            ; 004ae38f
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ae390
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 004ae395
    CMP dword ptr [ESP + 0x9b4],0x3     ; 004ae398
    JL 0x004ae409                       ; 004ae3a0
        ;   XREF to: 004ae409 (CONDITIONAL_JUMP)  ; LAB_004ae409
    LEA EBX,[ESP + 0x170]               ; 004ae3a2
    MOV EDI,EBX                         ; 004ae3a9
    SUB ECX,ECX                         ; 004ae3ab
    DEC ECX                             ; 004ae3ad
    XOR EAX,EAX                         ; 004ae3ae
    SCASB.REPNE ES:EDI                  ; 004ae3b0
    NOT ECX                             ; 004ae3b2
    DEC ECX                             ; 004ae3b4
    MOV EDI,ECX                         ; 004ae3b5
    TEST ECX,ECX                        ; 004ae3b7
    JLE 0x004ae3d2                      ; 004ae3b9
        ;   XREF to: 004ae3d2 (CONDITIONAL_JUMP)  ; LAB_004ae3d2
    LEA EAX,[ECX + EBX*0x1]             ; 004ae3bb
    MOV DL,byte ptr [EAX + -0x1]        ; 004ae3be
        ;   Label: LAB_004ae3be
    INC DL                              ; 004ae3c1
    AND EDX,0xff                        ; 004ae3c3
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae3c9 | g_CharacterClassificationTable
    JNZ 0x004ae436                      ; 004ae3d0
        ;   XREF to: 004ae436 (CONDITIONAL_JUMP)  ; LAB_004ae436
    LEA EAX,[EBX + EDI*0x1]             ; 004ae3d2
        ;   Label: LAB_004ae3d2
    MOV byte ptr [EAX],0x0              ; 004ae3d5
    LEA EAX,[EBX + 0x1]                 ; 004ae3d8
    MOV dword ptr [ESP + 0x9bc],EAX     ; 004ae3db
    MOV AL,byte ptr [EBX]               ; 004ae3e2
        ;   Label: LAB_004ae3e2
    INC AL                              ; 004ae3e4
    AND EAX,0xff                        ; 004ae3e6
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae3eb | g_CharacterClassificationTable
    JZ 0x004ae43e                       ; 004ae3f2
        ;   XREF to: 004ae43e (CONDITIONAL_JUMP)  ; LAB_004ae43e
    PUSH EDI                            ; 004ae3f4
    MOV EAX,dword ptr [ESP + 0x9c0]     ; 004ae3f5
    PUSH EAX                            ; 004ae3fc
    PUSH EBX                            ; 004ae3fd
    DEC EDI                             ; 004ae3fe
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ae3ff
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ae404
    JMP 0x004ae3e2                      ; 004ae407
        ;   XREF to: 004ae3e2 (UNCONDITIONAL_JUMP)  ; LAB_004ae3e2
    MOV ESI,0x62535e                    ; 004ae409 | = "Error parsing cmp parameters."
        ;   Label: LAB_004ae409
    MOV EDI,0x2d0a460                   ; 004ae40e | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae413 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae414 | = "Error parsing cmp parameters." | s_ror_parsing_cmp_parameters._00625360
        ;   Label: LAB_004ae414
    MOV byte ptr [EDI],AL               ; 004ae416 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae418
    JZ 0x004ae42c                       ; 004ae41a
        ;   XREF to: 004ae42c (CONDITIONAL_JUMP)  ; LAB_004ae42c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae41c | s_rror_parsing_cmp_parameters._0062535f | s_or_parsing_cmp_parameters._00625361
    ADD ESI,0x2                         ; 004ae41f
    MOV byte ptr [EDI + 0x1],AL         ; 004ae422 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae425
    CMP AL,0x0                          ; 004ae428
    JNZ 0x004ae414                      ; 004ae42a
        ;   XREF to: 004ae414 (CONDITIONAL_JUMP)  ; LAB_004ae414
    POP EDI                             ; 004ae42c
        ;   Label: LAB_004ae42c
    MOV EAX,EBX                         ; 004ae42d
    MOV ESP,EBP                         ; 004ae42f
    POP EBP                             ; 004ae431
    POP EDI                             ; 004ae432
    POP ESI                             ; 004ae433
    POP EBX                             ; 004ae434
    RET                                 ; 004ae435
    DEC EDI                             ; 004ae436
        ;   Label: LAB_004ae436
    DEC EAX                             ; 004ae437
    TEST EDI,EDI                        ; 004ae438
    JG 0x004ae3be                       ; 004ae43a
        ;   XREF to: 004ae3be (CONDITIONAL_JUMP)  ; LAB_004ae3be
    JMP 0x004ae3d2                      ; 004ae43c
        ;   XREF to: 004ae3d2 (UNCONDITIONAL_JUMP)  ; LAB_004ae3d2
    LEA EDI,[ESP + 0x6e8]               ; 004ae43e
        ;   Label: LAB_004ae43e
    LEA EBX,[ESP + 0x6e8]               ; 004ae445
    SUB ECX,ECX                         ; 004ae44c
    DEC ECX                             ; 004ae44e
    XOR EAX,EAX                         ; 004ae44f
    SCASB.REPNE ES:EDI                  ; 004ae451
    NOT ECX                             ; 004ae453
    DEC ECX                             ; 004ae455
    MOV EDI,ECX                         ; 004ae456
    TEST ECX,ECX                        ; 004ae458
    JLE 0x004ae479                      ; 004ae45a
        ;   XREF to: 004ae479 (CONDITIONAL_JUMP)  ; LAB_004ae479
    LEA EAX,[ESP + 0x6e8]               ; 004ae45c
    ADD EAX,ECX                         ; 004ae463
    MOV DL,byte ptr [EAX + -0x1]        ; 004ae465
        ;   Label: LAB_004ae465
    INC DL                              ; 004ae468
    AND EDX,0xff                        ; 004ae46a
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae470 | g_CharacterClassificationTable
    JNZ 0x004ae4b0                      ; 004ae477
        ;   XREF to: 004ae4b0 (CONDITIONAL_JUMP)  ; LAB_004ae4b0
    LEA EAX,[EBX + EDI*0x1]             ; 004ae479
        ;   Label: LAB_004ae479
    MOV byte ptr [EAX],0x0              ; 004ae47c
    LEA EAX,[EBX + 0x1]                 ; 004ae47f
    MOV dword ptr [ESP + 0x9c0],EAX     ; 004ae482
    MOV AL,byte ptr [EBX]               ; 004ae489
        ;   Label: LAB_004ae489
    INC AL                              ; 004ae48b
    AND EAX,0xff                        ; 004ae48d
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae492 | g_CharacterClassificationTable
    JZ 0x004ae4b8                       ; 004ae499
        ;   XREF to: 004ae4b8 (CONDITIONAL_JUMP)  ; LAB_004ae4b8
    PUSH EDI                            ; 004ae49b
    MOV EDX,dword ptr [ESP + 0x9c4]     ; 004ae49c
    PUSH EDX                            ; 004ae4a3
    PUSH EBX                            ; 004ae4a4
    DEC EDI                             ; 004ae4a5
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ae4a6
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ae4ab
    JMP 0x004ae489                      ; 004ae4ae
        ;   XREF to: 004ae489 (UNCONDITIONAL_JUMP)  ; LAB_004ae489
    DEC EDI                             ; 004ae4b0
        ;   Label: LAB_004ae4b0
    DEC EAX                             ; 004ae4b1
    TEST EDI,EDI                        ; 004ae4b2
    JG 0x004ae465                       ; 004ae4b4
        ;   XREF to: 004ae465 (CONDITIONAL_JUMP)  ; LAB_004ae465
    JMP 0x004ae479                      ; 004ae4b6
        ;   XREF to: 004ae479 (UNCONDITIONAL_JUMP)  ; LAB_004ae479
    LEA EDI,[ESP + 0x10c]               ; 004ae4b8
        ;   Label: LAB_004ae4b8
    LEA EBX,[ESP + 0x10c]               ; 004ae4bf
    SUB ECX,ECX                         ; 004ae4c6
    DEC ECX                             ; 004ae4c8
    XOR EAX,EAX                         ; 004ae4c9
    SCASB.REPNE ES:EDI                  ; 004ae4cb
    NOT ECX                             ; 004ae4cd
    DEC ECX                             ; 004ae4cf
    MOV EDI,ECX                         ; 004ae4d0
    TEST ECX,ECX                        ; 004ae4d2
    JLE 0x004ae4f3                      ; 004ae4d4
        ;   XREF to: 004ae4f3 (CONDITIONAL_JUMP)  ; LAB_004ae4f3
    LEA EAX,[ESP + 0x10c]               ; 004ae4d6
    ADD EAX,ECX                         ; 004ae4dd
    MOV DL,byte ptr [EAX + -0x1]        ; 004ae4df
        ;   Label: LAB_004ae4df
    INC DL                              ; 004ae4e2
    AND EDX,0xff                        ; 004ae4e4
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae4ea | g_CharacterClassificationTable
    JNZ 0x004ae52a                      ; 004ae4f1
        ;   XREF to: 004ae52a (CONDITIONAL_JUMP)  ; LAB_004ae52a
    LEA EAX,[EBX + EDI*0x1]             ; 004ae4f3
        ;   Label: LAB_004ae4f3
    MOV byte ptr [EAX],0x0              ; 004ae4f6
    LEA EAX,[EBX + 0x1]                 ; 004ae4f9
    MOV dword ptr [ESP + 0x9c8],EAX     ; 004ae4fc
    MOV AL,byte ptr [EBX]               ; 004ae503
        ;   Label: LAB_004ae503
    INC AL                              ; 004ae505
    AND EAX,0xff                        ; 004ae507
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae50c | g_CharacterClassificationTable
    JZ 0x004ae532                       ; 004ae513
        ;   XREF to: 004ae532 (CONDITIONAL_JUMP)  ; LAB_004ae532
    PUSH EDI                            ; 004ae515
    MOV EAX,dword ptr [ESP + 0x9cc]     ; 004ae516
    PUSH EAX                            ; 004ae51d
    PUSH EBX                            ; 004ae51e
    DEC EDI                             ; 004ae51f
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ae520
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ae525
    JMP 0x004ae503                      ; 004ae528
        ;   XREF to: 004ae503 (UNCONDITIONAL_JUMP)  ; LAB_004ae503
    DEC EDI                             ; 004ae52a
        ;   Label: LAB_004ae52a
    DEC EAX                             ; 004ae52b
    TEST EDI,EDI                        ; 004ae52c
    JG 0x004ae4df                       ; 004ae52e
        ;   XREF to: 004ae4df (CONDITIONAL_JUMP)  ; LAB_004ae4df
    JMP 0x004ae4f3                      ; 004ae530
        ;   XREF to: 004ae4f3 (UNCONDITIONAL_JUMP)  ; LAB_004ae4f3
    PUSH 0x624439                       ; 004ae532 | = "<"
        ;   Label: LAB_004ae532
    LEA EAX,[ESP + 0x110]               ; 004ae537
    PUSH EAX                            ; 004ae53e
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004ae53f
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae544
    TEST EAX,EAX                        ; 004ae547
    JNZ 0x004ae604                      ; 004ae549
        ;   XREF to: 004ae604 (CONDITIONAL_JUMP)  ; LAB_004ae604
    MOV EDI,EAX                         ; 004ae54f
        ;   Label: LAB_004ae54f
    CMP EAX,0x6                         ; 004ae551
    JZ 0x004ae6bd                       ; 004ae554
        ;   XREF to: 004ae6bd (CONDITIONAL_JUMP)  ; LAB_004ae6bd
    MOV EAX,dword ptr [ESP + 0x9b4]     ; 004ae55a
    MOV ECX,dword ptr [ESI]             ; 004ae561
    ADD ECX,EAX                         ; 004ae563
    LEA EAX,[ESP + 0x9cc]               ; 004ae565
    PUSH EAX                            ; 004ae56c
    PUSH 0x624449                       ; 004ae56d | = "%d"
    LEA EAX,[ESP + 0x178]               ; 004ae572
    PUSH EAX                            ; 004ae579
    MOV dword ptr [ESI],ECX             ; 004ae57a
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ae57c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004ae581
    CMP EAX,0x1                         ; 004ae584
    JNZ 0x004ae6ed                      ; 004ae587
        ;   XREF to: 004ae6ed (CONDITIONAL_JUMP)  ; LAB_004ae6ed
    MOV EAX,dword ptr [ESP + 0x9cc]     ; 004ae58d
    MOV EBX,EAX                         ; 004ae594
        ;   Label: LAB_004ae594
    LEA EAX,[ESP + 0xa1c]               ; 004ae596
    PUSH EAX                            ; 004ae59d
    PUSH 0x624449                       ; 004ae59e | = "%d"
    LEA EAX,[ESP + 0x6f0]               ; 004ae5a3
    PUSH EAX                            ; 004ae5aa
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ae5ab
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004ae5b0
    CMP EAX,0x1                         ; 004ae5b3
    JNZ 0x004ae709                      ; 004ae5b6
        ;   XREF to: 004ae709 (CONDITIONAL_JUMP)  ; LAB_004ae709
    MOV EAX,dword ptr [ESP + 0xa1c]     ; 004ae5bc
    CMP EDI,0x5                         ; 004ae5c3
    JA 0x004ae75d                       ; 004ae5c6
        ;   XREF to: 004ae75d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4ae11c]  ; 004ae5cc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP EBX,EAX                         ; 004ae5d3
        ;   Label: caseD_0
    SETL AL                             ; 004ae5d5
    AND EAX,0xff                        ; 004ae5d8
        ;   Label: LAB_004ae5d8
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004ae5dd
        ;   Label: LAB_004ae5dd
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ae5e4
        ;   Label: LAB_004ae5e4
    MOV EAX,dword ptr [ESI]             ; 004ae5e7
        ;   Label: LAB_004ae5e7
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 004ae5e9
    INC AL                              ; 004ae5ec
    AND EAX,0xff                        ; 004ae5ee
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae5f3 | g_CharacterClassificationTable
    JZ 0x004b0261                       ; 004ae5fa
        ;   XREF to: 004b0261 (CONDITIONAL_JUMP)  ; LAB_004b0261
    INC dword ptr [ESI]                 ; 004ae600
    JMP 0x004ae5e7                      ; 004ae602
        ;   XREF to: 004ae5e7 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e7
    PUSH 0x62443b                       ; 004ae604 | = "<="
        ;   Label: LAB_004ae604
    LEA EAX,[ESP + 0x110]               ; 004ae609
    PUSH EAX                            ; 004ae610
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004ae611
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae616
    TEST EAX,EAX                        ; 004ae619
    JNZ 0x004ae627                      ; 004ae61b
        ;   XREF to: 004ae627 (CONDITIONAL_JUMP)  ; LAB_004ae627
    MOV EAX,0x1                         ; 004ae61d
    JMP 0x004ae54f                      ; 004ae622
        ;   XREF to: 004ae54f (UNCONDITIONAL_JUMP)  ; LAB_004ae54f
    PUSH 0x62443e                       ; 004ae627 | = "=="
        ;   Label: LAB_004ae627
    LEA EAX,[ESP + 0x110]               ; 004ae62c
    PUSH EAX                            ; 004ae633
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004ae634
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae639
    TEST EAX,EAX                        ; 004ae63c
    JNZ 0x004ae64a                      ; 004ae63e
        ;   XREF to: 004ae64a (CONDITIONAL_JUMP)  ; LAB_004ae64a
    MOV EAX,0x2                         ; 004ae640
    JMP 0x004ae54f                      ; 004ae645
        ;   XREF to: 004ae54f (UNCONDITIONAL_JUMP)  ; LAB_004ae54f
    PUSH 0x624441                       ; 004ae64a | = "!="
        ;   Label: LAB_004ae64a
    LEA EAX,[ESP + 0x110]               ; 004ae64f
    PUSH EAX                            ; 004ae656
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004ae657
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae65c
    TEST EAX,EAX                        ; 004ae65f
    JNZ 0x004ae66d                      ; 004ae661
        ;   XREF to: 004ae66d (CONDITIONAL_JUMP)  ; LAB_004ae66d
    MOV EAX,0x3                         ; 004ae663
    JMP 0x004ae54f                      ; 004ae668
        ;   XREF to: 004ae54f (UNCONDITIONAL_JUMP)  ; LAB_004ae54f
    PUSH 0x624444                       ; 004ae66d | = ">"
        ;   Label: LAB_004ae66d
    LEA EAX,[ESP + 0x110]               ; 004ae672
    PUSH EAX                            ; 004ae679
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004ae67a
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae67f
    TEST EAX,EAX                        ; 004ae682
    JNZ 0x004ae690                      ; 004ae684
        ;   XREF to: 004ae690 (CONDITIONAL_JUMP)  ; LAB_004ae690
    MOV EAX,0x5                         ; 004ae686
    JMP 0x004ae54f                      ; 004ae68b
        ;   XREF to: 004ae54f (UNCONDITIONAL_JUMP)  ; LAB_004ae54f
    PUSH 0x624446                       ; 004ae690 | = ">="
        ;   Label: LAB_004ae690
    LEA EAX,[ESP + 0x110]               ; 004ae695
    PUSH EAX                            ; 004ae69c
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004ae69d
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae6a2
    TEST EAX,EAX                        ; 004ae6a5
    JNZ 0x004ae6b3                      ; 004ae6a7
        ;   XREF to: 004ae6b3 (CONDITIONAL_JUMP)  ; LAB_004ae6b3
    MOV EAX,0x4                         ; 004ae6a9
    JMP 0x004ae54f                      ; 004ae6ae
        ;   XREF to: 004ae54f (UNCONDITIONAL_JUMP)  ; LAB_004ae54f
    MOV EAX,0x6                         ; 004ae6b3
        ;   Label: LAB_004ae6b3
    JMP 0x004ae54f                      ; 004ae6b8
        ;   XREF to: 004ae54f (UNCONDITIONAL_JUMP)  ; LAB_004ae54f
    MOV ESI,0x62537c                    ; 004ae6bd | = "Invalid relational operator in cmp st..."
        ;   Label: LAB_004ae6bd
    MOV EDI,0x2d0a460                   ; 004ae6c2 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae6c7 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae6c8 | = "Invalid relational operator in cmp st..." | s_valid_relational_operator_in_cmp_0062537e
        ;   Label: LAB_004ae6c8
    MOV byte ptr [EDI],AL               ; 004ae6ca | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae6cc
    JZ 0x004ae6e0                       ; 004ae6ce
        ;   XREF to: 004ae6e0 (CONDITIONAL_JUMP)  ; LAB_004ae6e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae6d0 | s_nvalid_relational_operator_in_cm_0062537d | s_alid_relational_operator_in_cmp_s_0062537f
    ADD ESI,0x2                         ; 004ae6d3
    MOV byte ptr [EDI + 0x1],AL         ; 004ae6d6 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae6d9
    CMP AL,0x0                          ; 004ae6dc
    JNZ 0x004ae6c8                      ; 004ae6de
        ;   XREF to: 004ae6c8 (CONDITIONAL_JUMP)  ; LAB_004ae6c8
    POP EDI                             ; 004ae6e0
        ;   Label: LAB_004ae6e0
    MOV EAX,0xffffffff                  ; 004ae6e1
    MOV ESP,EBP                         ; 004ae6e6
    POP EBP                             ; 004ae6e8
    POP EDI                             ; 004ae6e9
    POP ESI                             ; 004ae6ea
    POP EBX                             ; 004ae6eb
    RET                                 ; 004ae6ec
    LEA EAX,[ESP + 0x170]               ; 004ae6ed
        ;   Label: LAB_004ae6ed
    PUSH EAX                            ; 004ae6f4
    MOV EBX,dword ptr [0x006793d0]      ; 004ae6f5 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 004ae6fb | g_CEventListInstance
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004b0830 ; 004ae6fc
        ;   XREF to: 004b0830 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004b0830(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 004ae701
    JMP 0x004ae594                      ; 004ae704
        ;   XREF to: 004ae594 (UNCONDITIONAL_JUMP)  ; LAB_004ae594
    LEA EAX,[ESP + 0x6e8]               ; 004ae709
        ;   Label: LAB_004ae709
    PUSH EAX                            ; 004ae710
    MOV EAX,[0x006793d0]                ; 004ae711 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 004ae716 | g_CEventListInstance
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004b0830 ; 004ae717
        ;   XREF to: 004b0830 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004b0830(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 004ae71c
    CMP EDI,0x5                         ; 004ae71f
    JA 0x004ae75d                       ; 004ae722
        ;   XREF to: 004ae75d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4ae11c]  ; 004ae724 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP EBX,EAX                         ; 004ae72b
        ;   Label: caseD_1
    SETLE AL                            ; 004ae72d
    JMP 0x004ae5d8                      ; 004ae730
        ;   XREF to: 004ae5d8 (UNCONDITIONAL_JUMP)  ; LAB_004ae5d8
    CMP EBX,EAX                         ; 004ae735
        ;   Label: caseD_2
    SETZ AL                             ; 004ae737
    JMP 0x004ae5d8                      ; 004ae73a
        ;   XREF to: 004ae5d8 (UNCONDITIONAL_JUMP)  ; LAB_004ae5d8
    CMP EBX,EAX                         ; 004ae73f
        ;   Label: caseD_3
    SETNZ AL                            ; 004ae741
    JMP 0x004ae5d8                      ; 004ae744
        ;   XREF to: 004ae5d8 (UNCONDITIONAL_JUMP)  ; LAB_004ae5d8
    CMP EBX,EAX                         ; 004ae749
        ;   Label: caseD_5
    SETG AL                             ; 004ae74b
    JMP 0x004ae5d8                      ; 004ae74e
        ;   XREF to: 004ae5d8 (UNCONDITIONAL_JUMP)  ; LAB_004ae5d8
    CMP EBX,EAX                         ; 004ae753
        ;   Label: caseD_4
    SETGE AL                            ; 004ae755
    JMP 0x004ae5d8                      ; 004ae758
        ;   XREF to: 004ae5d8 (UNCONDITIONAL_JUMP)  ; LAB_004ae5d8
    MOV EDX,0x6253a9                    ; 004ae75d | = "..\\core\\event.cpp"
        ;   Label: default
    MOV ECX,0x765                       ; 004ae762
    PUSH 0x6253bb                       ; 004ae767 | = "Hell froze."
    MOV dword ptr [0x02f0ca48],EDX      ; 004ae76c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004ae772 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ae778
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ae77d
    JMP 0x004ae5e4                      ; 004ae780
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x6253c7                       ; 004ae785 | = "exists"
        ;   Label: LAB_004ae785
    LEA EAX,[ESP + 0x944]               ; 004ae78a
    PUSH EAX                            ; 004ae791
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ae792
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae797
    TEST EAX,EAX                        ; 004ae79a
    JNZ 0x004ae8ca                      ; 004ae79c
        ;   XREF to: 004ae8ca (CONDITIONAL_JUMP)  ; LAB_004ae8ca
    MOV dword ptr [ESP + 0xa24],0xffffffff ; 004ae7a2
    LEA EAX,[ESP + 0xa24]               ; 004ae7ad
    PUSH EAX                            ; 004ae7b4
    LEA EAX,[ESP + 0x750]               ; 004ae7b5
    PUSH EAX                            ; 004ae7bc
    MOV EAX,0x6253ce                    ; 004ae7bd | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 004ae7c2
    PUSH EAX                            ; 004ae7c4 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae7c5
    ADD EAX,EDX                         ; 004ae7c8
    PUSH EAX                            ; 004ae7ca
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ae7cb
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004ae7d0
    CMP dword ptr [ESP + 0xa24],0x3     ; 004ae7d3
    JL 0x004ae844                       ; 004ae7db
        ;   XREF to: 004ae844 (CONDITIONAL_JUMP)  ; LAB_004ae844
    LEA EBX,[ESP + 0x74c]               ; 004ae7dd
    MOV EDI,EBX                         ; 004ae7e4
    SUB ECX,ECX                         ; 004ae7e6
    DEC ECX                             ; 004ae7e8
    XOR EAX,EAX                         ; 004ae7e9
    SCASB.REPNE ES:EDI                  ; 004ae7eb
    NOT ECX                             ; 004ae7ed
    DEC ECX                             ; 004ae7ef
    MOV EDI,ECX                         ; 004ae7f0
    TEST ECX,ECX                        ; 004ae7f2
    JLE 0x004ae80d                      ; 004ae7f4
        ;   XREF to: 004ae80d (CONDITIONAL_JUMP)  ; LAB_004ae80d
    LEA EAX,[ECX + EBX*0x1]             ; 004ae7f6
    MOV DL,byte ptr [EAX + -0x1]        ; 004ae7f9
        ;   Label: LAB_004ae7f9
    INC DL                              ; 004ae7fc
    AND EDX,0xff                        ; 004ae7fe
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae804 | g_CharacterClassificationTable
    JNZ 0x004ae874                      ; 004ae80b
        ;   XREF to: 004ae874 (CONDITIONAL_JUMP)  ; LAB_004ae874
    LEA EAX,[EBX + EDI*0x1]             ; 004ae80d
        ;   Label: LAB_004ae80d
    MOV byte ptr [EAX],0x0              ; 004ae810
    LEA EAX,[EBX + 0x1]                 ; 004ae813
    MOV dword ptr [ESP + 0x9d4],EAX     ; 004ae816
    MOV AL,byte ptr [EBX]               ; 004ae81d
        ;   Label: LAB_004ae81d
    INC AL                              ; 004ae81f
    AND EAX,0xff                        ; 004ae821
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae826 | g_CharacterClassificationTable
    JZ 0x004ae880                       ; 004ae82d
        ;   XREF to: 004ae880 (CONDITIONAL_JUMP)  ; LAB_004ae880
    PUSH EDI                            ; 004ae82f
    MOV ECX,dword ptr [ESP + 0x9d8]     ; 004ae830
    PUSH ECX                            ; 004ae837
    PUSH EBX                            ; 004ae838
    DEC EDI                             ; 004ae839
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ae83a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ae83f
    JMP 0x004ae81d                      ; 004ae842
        ;   XREF to: 004ae81d (UNCONDITIONAL_JUMP)  ; LAB_004ae81d
    MOV ESI,0x6253dc                    ; 004ae844 | = "Error parsing exists parameters."
        ;   Label: LAB_004ae844
    MOV EDI,0x2d0a460                   ; 004ae849 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae84e | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae84f | = "Error parsing exists parameters." | s_ror_parsing_exists_parameters._006253de
        ;   Label: LAB_004ae84f
    MOV byte ptr [EDI],AL               ; 004ae851 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae853
    JZ 0x004ae867                       ; 004ae855
        ;   XREF to: 004ae867 (CONDITIONAL_JUMP)  ; LAB_004ae867
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae857 | s_rror_parsing_exists_parameters._006253dd | s_or_parsing_exists_parameters._006253df
    ADD ESI,0x2                         ; 004ae85a
    MOV byte ptr [EDI + 0x1],AL         ; 004ae85d | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae860
    CMP AL,0x0                          ; 004ae863
    JNZ 0x004ae84f                      ; 004ae865
        ;   XREF to: 004ae84f (CONDITIONAL_JUMP)  ; LAB_004ae84f
    POP EDI                             ; 004ae867
        ;   Label: LAB_004ae867
    MOV EAX,0xffffffff                  ; 004ae868
    MOV ESP,EBP                         ; 004ae86d
    POP EBP                             ; 004ae86f
    POP EDI                             ; 004ae870
    POP ESI                             ; 004ae871
    POP EBX                             ; 004ae872
    RET                                 ; 004ae873
    DEC EDI                             ; 004ae874
        ;   Label: LAB_004ae874
    DEC EAX                             ; 004ae875
    TEST EDI,EDI                        ; 004ae876
    JG 0x004ae7f9                       ; 004ae878
        ;   XREF to: 004ae7f9 (CONDITIONAL_JUMP)  ; LAB_004ae7f9
    JMP 0x004ae80d                      ; 004ae87e
        ;   XREF to: 004ae80d (UNCONDITIONAL_JUMP)  ; LAB_004ae80d
    PUSH 0x821ff8                       ; 004ae880 | g_CDemonActorClassInfo
        ;   Label: LAB_004ae880
    MOV EBX,dword ptr [0x00822030]      ; 004ae885 | g_CDemonActorClassInfo.name_hash
    PUSH EBX                            ; 004ae88b
    LEA EAX,[ESP + 0x754]               ; 004ae88c
    PUSH EAX                            ; 004ae893
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004ae894
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004ae899
    TEST EAX,EAX                        ; 004ae89c
    JZ 0x004ae8c6                       ; 004ae89e
        ;   XREF to: 004ae8c6 (CONDITIONAL_JUMP)  ; LAB_004ae8c6
    CMP EAX,dword ptr [0x0065d95c]      ; 004ae8a0 | g_ActorNameSentinel
    JZ 0x004ae8c6                       ; 004ae8a6
        ;   XREF to: 004ae8c6 (CONDITIONAL_JUMP)  ; LAB_004ae8c6
    MOV EAX,0x1                         ; 004ae8a8
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004ae8ad
        ;   Label: LAB_004ae8ad
    MOV EDX,dword ptr [ESI]             ; 004ae8b4
    MOV EAX,dword ptr [ESP + 0xa24]     ; 004ae8b6
    ADD EDX,EAX                         ; 004ae8bd
    MOV dword ptr [ESI],EDX             ; 004ae8bf
    JMP 0x004ae5e4                      ; 004ae8c1
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    XOR EAX,EAX                         ; 004ae8c6
        ;   Label: LAB_004ae8c6
    JMP 0x004ae8ad                      ; 004ae8c8
        ;   XREF to: 004ae8ad (UNCONDITIONAL_JUMP)  ; LAB_004ae8ad
    PUSH 0x6253fd                       ; 004ae8ca | = "hasItem"
        ;   Label: LAB_004ae8ca
    LEA EAX,[ESP + 0x944]               ; 004ae8cf
    PUSH EAX                            ; 004ae8d6
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ae8d7
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ae8dc
    TEST EAX,EAX                        ; 004ae8df
    JNZ 0x004aea62                      ; 004ae8e1
        ;   XREF to: 004aea62 (CONDITIONAL_JUMP)  ; LAB_004aea62
    MOV EAX,[0x00680a00]                ; 004ae8e7 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 004ae8ec | g_CNetGameInstance
    JNZ 0x004ae9a4                      ; 004ae8ef
        ;   XREF to: 004ae9a4 (CONDITIONAL_JUMP)  ; LAB_004ae9a4
    LEA EAX,[ESP + 0x9d8]               ; 004ae8f5
    MOV ECX,0xffffffff                  ; 004ae8fc
    PUSH EAX                            ; 004ae901
    LEA EAX,[ESP + 0x23c]               ; 004ae902
    MOV dword ptr [ESP + 0x9dc],ECX     ; 004ae909
    PUSH EAX                            ; 004ae910
    MOV EAX,0x625431                    ; 004ae911 | = " (%[^)])%n"
    MOV EBX,dword ptr [ESI]             ; 004ae916
    PUSH EAX                            ; 004ae918 | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ae919
    ADD EAX,EBX                         ; 004ae91c
    PUSH EAX                            ; 004ae91e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ae91f
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004ae924
    CMP dword ptr [ESP + 0x9d8],0x3     ; 004ae927
    JL 0x004ae9d4                       ; 004ae92f
        ;   XREF to: 004ae9d4 (CONDITIONAL_JUMP)  ; LAB_004ae9d4
    LEA EBX,[ESP + 0x238]               ; 004ae935
    MOV EDI,EBX                         ; 004ae93c
    SUB ECX,ECX                         ; 004ae93e
    DEC ECX                             ; 004ae940
    XOR EAX,EAX                         ; 004ae941
    SCASB.REPNE ES:EDI                  ; 004ae943
    NOT ECX                             ; 004ae945
    DEC ECX                             ; 004ae947
    MOV EDI,ECX                         ; 004ae948
    TEST ECX,ECX                        ; 004ae94a
    JLE 0x004ae969                      ; 004ae94c
        ;   XREF to: 004ae969 (CONDITIONAL_JUMP)  ; LAB_004ae969
    LEA EAX,[ECX + EBX*0x1]             ; 004ae94e
    MOV DL,byte ptr [EAX + -0x1]        ; 004ae951
        ;   Label: LAB_004ae951
    INC DL                              ; 004ae954
    AND EDX,0xff                        ; 004ae956
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004ae95c | g_CharacterClassificationTable
    JNZ 0x004aea04                      ; 004ae963
        ;   XREF to: 004aea04 (CONDITIONAL_JUMP)  ; LAB_004aea04
    LEA EAX,[EBX + EDI*0x1]             ; 004ae969
        ;   Label: LAB_004ae969
    MOV byte ptr [EAX],0x0              ; 004ae96c
    LEA EAX,[EBX + 0x1]                 ; 004ae96f
    MOV dword ptr [ESP + 0x9e0],EAX     ; 004ae972
    MOV AL,byte ptr [EBX]               ; 004ae979
        ;   Label: LAB_004ae979
    INC AL                              ; 004ae97b
    AND EAX,0xff                        ; 004ae97d
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ae982 | g_CharacterClassificationTable
    JZ 0x004aea13                       ; 004ae989
        ;   XREF to: 004aea13 (CONDITIONAL_JUMP)  ; LAB_004aea13
    PUSH EDI                            ; 004ae98f
    MOV ECX,dword ptr [ESP + 0x9e4]     ; 004ae990
    PUSH ECX                            ; 004ae997
    PUSH EBX                            ; 004ae998
    DEC EDI                             ; 004ae999
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ae99a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ae99f
    JMP 0x004ae979                      ; 004ae9a2
        ;   XREF to: 004ae979 (UNCONDITIONAL_JUMP)  ; LAB_004ae979
    MOV ESI,0x625405                    ; 004ae9a4 | = "Can't use hasItem condition in multi-..."
        ;   Label: LAB_004ae9a4
    MOV EDI,0x2d0a460                   ; 004ae9a9 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae9ae | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae9af | = "Can't use hasItem condition in multi-..." | s_n't_use_hasItem_condition_in_mul_00625407
        ;   Label: LAB_004ae9af
    MOV byte ptr [EDI],AL               ; 004ae9b1 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae9b3
    JZ 0x004ae9c7                       ; 004ae9b5
        ;   XREF to: 004ae9c7 (CONDITIONAL_JUMP)  ; LAB_004ae9c7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae9b7 | s_an't_use_hasItem_condition_in_mu_00625406 | s_'t_use_hasItem_condition_in_mult_00625408
    ADD ESI,0x2                         ; 004ae9ba
    MOV byte ptr [EDI + 0x1],AL         ; 004ae9bd | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae9c0
    CMP AL,0x0                          ; 004ae9c3
    JNZ 0x004ae9af                      ; 004ae9c5
        ;   XREF to: 004ae9af (CONDITIONAL_JUMP)  ; LAB_004ae9af
    POP EDI                             ; 004ae9c7
        ;   Label: LAB_004ae9c7
    MOV EAX,0xffffffff                  ; 004ae9c8
    MOV ESP,EBP                         ; 004ae9cd
    POP EBP                             ; 004ae9cf
    POP EDI                             ; 004ae9d0
    POP ESI                             ; 004ae9d1
    POP EBX                             ; 004ae9d2
    RET                                 ; 004ae9d3
    MOV ESI,0x62543c                    ; 004ae9d4 | = "Error parsing hasItem parameters."
        ;   Label: LAB_004ae9d4
    MOV EDI,0x2d0a460                   ; 004ae9d9 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004ae9de | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004ae9df | = "Error parsing hasItem parameters." | s_ror_parsing_hasItem_parameters._0062543e
        ;   Label: LAB_004ae9df
    MOV byte ptr [EDI],AL               ; 004ae9e1 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004ae9e3
    JZ 0x004ae9f7                       ; 004ae9e5
        ;   XREF to: 004ae9f7 (CONDITIONAL_JUMP)  ; LAB_004ae9f7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ae9e7 | s_rror_parsing_hasItem_parameters._0062543d | s_or_parsing_hasItem_parameters._0062543f
    ADD ESI,0x2                         ; 004ae9ea
    MOV byte ptr [EDI + 0x1],AL         ; 004ae9ed | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004ae9f0
    CMP AL,0x0                          ; 004ae9f3
    JNZ 0x004ae9df                      ; 004ae9f5
        ;   XREF to: 004ae9df (CONDITIONAL_JUMP)  ; LAB_004ae9df
    POP EDI                             ; 004ae9f7
        ;   Label: LAB_004ae9f7
    MOV EAX,0xffffffff                  ; 004ae9f8
    MOV ESP,EBP                         ; 004ae9fd
    POP EBP                             ; 004ae9ff
    POP EDI                             ; 004aea00
    POP ESI                             ; 004aea01
    POP EBX                             ; 004aea02
    RET                                 ; 004aea03
    DEC EDI                             ; 004aea04
        ;   Label: LAB_004aea04
    DEC EAX                             ; 004aea05
    TEST EDI,EDI                        ; 004aea06
    JG 0x004ae951                       ; 004aea08
        ;   XREF to: 004ae951 (CONDITIONAL_JUMP)  ; LAB_004ae951
    JMP 0x004ae969                      ; 004aea0e
        ;   XREF to: 004ae969 (UNCONDITIONAL_JUMP)  ; LAB_004ae969
    MOV EAX,[0x02db87d0]                ; 004aea13 | g_LocalHeroIndex
        ;   Label: LAB_004aea13
    SHL EAX,0x2                         ; 004aea18
    XOR EBX,EBX                         ; 004aea1b
    MOV EDI,dword ptr [EAX + 0x2db87c0] ; 004aea1d | g_HeroActors
    MOV dword ptr [ESP + 0x9b0],EBX     ; 004aea23
    TEST EDI,EDI                        ; 004aea2a
    JZ 0x004aea54                       ; 004aea2c
        ;   XREF to: 004aea54 (CONDITIONAL_JUMP)  ; LAB_004aea54
    LEA EDX,[ESP + 0x238]               ; 004aea2e
    PUSH EDX                            ; 004aea35
    LEA EAX,[EDI + 0x1f738]             ; 004aea36
    PUSH EAX                            ; 004aea3c
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0 ; 004aea3d
        ;   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004aea42
    TEST EAX,EAX                        ; 004aea45
    JZ 0x004aea54                       ; 004aea47
        ;   XREF to: 004aea54 (CONDITIONAL_JUMP)  ; LAB_004aea54
    MOV dword ptr [ESP + 0x9b0],0x1     ; 004aea49
    MOV EAX,dword ptr [ESP + 0x9d8]     ; 004aea54
        ;   Label: LAB_004aea54
    ADD dword ptr [ESI],EAX             ; 004aea5b
    JMP 0x004ae5e4                      ; 004aea5d
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x62545e                       ; 004aea62 | = "hasItemType"
        ;   Label: LAB_004aea62
    LEA EAX,[ESP + 0x944]               ; 004aea67
    PUSH EAX                            ; 004aea6e
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aea6f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aea74
    TEST EAX,EAX                        ; 004aea77
    JNZ 0x004aec4e                      ; 004aea79
        ;   XREF to: 004aec4e (CONDITIONAL_JUMP)  ; LAB_004aec4e
    LEA EAX,[ESP + 0x9e4]               ; 004aea7f
    PUSH EAX                            ; 004aea86
    LEA EAX,[ESP + 0x368]               ; 004aea87
    MOV ECX,0xffffffff                  ; 004aea8e
    PUSH EAX                            ; 004aea93
    LEA EAX,[ESP + 0x4fc]               ; 004aea94
    MOV dword ptr [ESP + 0x9ec],ECX     ; 004aea9b
    PUSH EAX                            ; 004aeaa2
    MOV EAX,0x62546a                    ; 004aeaa3 | = " (%[^,], %[^)] )%n"
    MOV EBX,dword ptr [ESI]             ; 004aeaa8
    PUSH EAX                            ; 004aeaaa | = " (%[^,], %[^)] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004aeaab
    ADD EAX,EBX                         ; 004aeaae
    PUSH EAX                            ; 004aeab0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aeab1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004aeab6
    CMP dword ptr [ESP + 0x9e4],0x5     ; 004aeab9
    JL 0x004aeb2a                       ; 004aeac1
        ;   XREF to: 004aeb2a (CONDITIONAL_JUMP)  ; LAB_004aeb2a
    LEA EBX,[ESP + 0x4f4]               ; 004aeac3
    MOV EDI,EBX                         ; 004aeaca
    SUB ECX,ECX                         ; 004aeacc
    DEC ECX                             ; 004aeace
    XOR EAX,EAX                         ; 004aeacf
    SCASB.REPNE ES:EDI                  ; 004aead1
    NOT ECX                             ; 004aead3
    DEC ECX                             ; 004aead5
    MOV EDI,ECX                         ; 004aead6
    TEST ECX,ECX                        ; 004aead8
    JLE 0x004aeaf3                      ; 004aeada
        ;   XREF to: 004aeaf3 (CONDITIONAL_JUMP)  ; LAB_004aeaf3
    LEA EAX,[ECX + EBX*0x1]             ; 004aeadc
    MOV DL,byte ptr [EAX + -0x1]        ; 004aeadf
        ;   Label: LAB_004aeadf
    INC DL                              ; 004aeae2
    AND EDX,0xff                        ; 004aeae4
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aeaea | g_CharacterClassificationTable
    JNZ 0x004aeb5a                      ; 004aeaf1
        ;   XREF to: 004aeb5a (CONDITIONAL_JUMP)  ; LAB_004aeb5a
    LEA EAX,[EBX + EDI*0x1]             ; 004aeaf3
        ;   Label: LAB_004aeaf3
    MOV byte ptr [EAX],0x0              ; 004aeaf6
    LEA EAX,[EBX + 0x1]                 ; 004aeaf9
    MOV dword ptr [ESP + 0xa40],EAX     ; 004aeafc
    MOV AL,byte ptr [EBX]               ; 004aeb03
        ;   Label: LAB_004aeb03
    INC AL                              ; 004aeb05
    AND EAX,0xff                        ; 004aeb07
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aeb0c | g_CharacterClassificationTable
    JZ 0x004aeb66                       ; 004aeb13
        ;   XREF to: 004aeb66 (CONDITIONAL_JUMP)  ; LAB_004aeb66
    PUSH EDI                            ; 004aeb15
    MOV EDX,dword ptr [ESP + 0xa44]     ; 004aeb16
    PUSH EDX                            ; 004aeb1d
    PUSH EBX                            ; 004aeb1e
    DEC EDI                             ; 004aeb1f
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aeb20
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aeb25
    JMP 0x004aeb03                      ; 004aeb28
        ;   XREF to: 004aeb03 (UNCONDITIONAL_JUMP)  ; LAB_004aeb03
    MOV ESI,0x62547d                    ; 004aeb2a | = "Error parsing hasItemType parameters."
        ;   Label: LAB_004aeb2a
    MOV EDI,0x2d0a460                   ; 004aeb2f | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aeb34 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aeb35 | = "Error parsing hasItemType parameters." | s_ror_parsing_hasItemType_paramete_0062547f
        ;   Label: LAB_004aeb35
    MOV byte ptr [EDI],AL               ; 004aeb37 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aeb39
    JZ 0x004aeb4d                       ; 004aeb3b
        ;   XREF to: 004aeb4d (CONDITIONAL_JUMP)  ; LAB_004aeb4d
    MOV AL,byte ptr [ESI + 0x1]         ; 004aeb3d | s_rror_parsing_hasItemType_paramet_0062547e | s_or_parsing_hasItemType_parameter_00625480
    ADD ESI,0x2                         ; 004aeb40
    MOV byte ptr [EDI + 0x1],AL         ; 004aeb43 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aeb46
    CMP AL,0x0                          ; 004aeb49
    JNZ 0x004aeb35                      ; 004aeb4b
        ;   XREF to: 004aeb35 (CONDITIONAL_JUMP)  ; LAB_004aeb35
    POP EDI                             ; 004aeb4d
        ;   Label: LAB_004aeb4d
    MOV EAX,0xffffffff                  ; 004aeb4e
        ;   Label: LAB_004aeb4e
    MOV ESP,EBP                         ; 004aeb53
    POP EBP                             ; 004aeb55
    POP EDI                             ; 004aeb56
    POP ESI                             ; 004aeb57
    POP EBX                             ; 004aeb58
    RET                                 ; 004aeb59
    DEC EDI                             ; 004aeb5a
        ;   Label: LAB_004aeb5a
    DEC EAX                             ; 004aeb5b
    TEST EDI,EDI                        ; 004aeb5c
    JG 0x004aeadf                       ; 004aeb5e
        ;   XREF to: 004aeadf (CONDITIONAL_JUMP)  ; LAB_004aeadf
    JMP 0x004aeaf3                      ; 004aeb64
        ;   XREF to: 004aeaf3 (UNCONDITIONAL_JUMP)  ; LAB_004aeaf3
    LEA EDI,[ESP + 0x364]               ; 004aeb66
        ;   Label: LAB_004aeb66
    LEA EBX,[ESP + 0x364]               ; 004aeb6d
    SUB ECX,ECX                         ; 004aeb74
    DEC ECX                             ; 004aeb76
    XOR EAX,EAX                         ; 004aeb77
    SCASB.REPNE ES:EDI                  ; 004aeb79
    NOT ECX                             ; 004aeb7b
    DEC ECX                             ; 004aeb7d
    MOV EDI,ECX                         ; 004aeb7e
    TEST ECX,ECX                        ; 004aeb80
    JLE 0x004aeba1                      ; 004aeb82
        ;   XREF to: 004aeba1 (CONDITIONAL_JUMP)  ; LAB_004aeba1
    LEA EAX,[ESP + 0x364]               ; 004aeb84
    ADD EAX,ECX                         ; 004aeb8b
    MOV DL,byte ptr [EAX + -0x1]        ; 004aeb8d
        ;   Label: LAB_004aeb8d
    INC DL                              ; 004aeb90
    AND EDX,0xff                        ; 004aeb92
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aeb98 | g_CharacterClassificationTable
    JNZ 0x004aebd8                      ; 004aeb9f
        ;   XREF to: 004aebd8 (CONDITIONAL_JUMP)  ; LAB_004aebd8
    LEA EAX,[EBX + EDI*0x1]             ; 004aeba1
        ;   Label: LAB_004aeba1
    MOV byte ptr [EAX],0x0              ; 004aeba4
    LEA EAX,[EBX + 0x1]                 ; 004aeba7
    MOV dword ptr [ESP + 0x9e8],EAX     ; 004aebaa
    MOV AL,byte ptr [EBX]               ; 004aebb1
        ;   Label: LAB_004aebb1
    INC AL                              ; 004aebb3
    AND EAX,0xff                        ; 004aebb5
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aebba | g_CharacterClassificationTable
    JZ 0x004aebe0                       ; 004aebc1
        ;   XREF to: 004aebe0 (CONDITIONAL_JUMP)  ; LAB_004aebe0
    PUSH EDI                            ; 004aebc3
    MOV ECX,dword ptr [ESP + 0x9ec]     ; 004aebc4
    PUSH ECX                            ; 004aebcb
    PUSH EBX                            ; 004aebcc
    DEC EDI                             ; 004aebcd
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aebce
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aebd3
    JMP 0x004aebb1                      ; 004aebd6
        ;   XREF to: 004aebb1 (UNCONDITIONAL_JUMP)  ; LAB_004aebb1
    DEC EDI                             ; 004aebd8
        ;   Label: LAB_004aebd8
    DEC EAX                             ; 004aebd9
    TEST EDI,EDI                        ; 004aebda
    JG 0x004aeb8d                       ; 004aebdc
        ;   XREF to: 004aeb8d (CONDITIONAL_JUMP)  ; LAB_004aeb8d
    JMP 0x004aeba1                      ; 004aebde
        ;   XREF to: 004aeba1 (UNCONDITIONAL_JUMP)  ; LAB_004aeba1
    PUSH 0x2db87d4                      ; 004aebe0 | g_CHeroClassInfo
        ;   Label: LAB_004aebe0
    MOV ECX,dword ptr [0x02db880c]      ; 004aebe5 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 004aebeb
    LEA EAX,[ESP + 0x4fc]               ; 004aebec
    PUSH EAX                            ; 004aebf3
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004aebf4
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004aebf9
    TEST EAX,EAX                        ; 004aebfc
    JZ 0x004aeb4e                       ; 004aebfe
        ;   XREF to: 004aeb4e (CONDITIONAL_JUMP)  ; LAB_004aeb4e
    CMP EAX,dword ptr [0x0065d95c]      ; 004aec04 | g_ActorNameSentinel
    JNZ 0x004aec23                      ; 004aec0a
        ;   XREF to: 004aec23 (CONDITIONAL_JUMP)  ; LAB_004aec23
    XOR EDI,EDI                         ; 004aec0c
    MOV dword ptr [ESP + 0x9b0],EDI     ; 004aec0e
    MOV EAX,dword ptr [ESP + 0x9e4]     ; 004aec15
    ADD dword ptr [ESI],EAX             ; 004aec1c
    JMP 0x004ae5e4                      ; 004aec1e
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    LEA EDX,[ESP + 0x364]               ; 004aec23
        ;   Label: LAB_004aec23
    PUSH EDX                            ; 004aec2a
    ADD EAX,0x1f738                     ; 004aec2b
    PUSH EAX                            ; 004aec30
    CALL core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0 ; 004aec31
        ;   XREF to: 004fea20 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 004aec36
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004aec39
    MOV EAX,dword ptr [ESP + 0x9e4]     ; 004aec40
    ADD dword ptr [ESI],EAX             ; 004aec47
    JMP 0x004ae5e4                      ; 004aec49
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x6254a3                       ; 004aec4e | = "hasKeyMask"
        ;   Label: LAB_004aec4e
    LEA EAX,[ESP + 0x944]               ; 004aec53
    PUSH EAX                            ; 004aec5a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aec5b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aec60
    TEST EAX,EAX                        ; 004aec63
    JNZ 0x004aeddf                      ; 004aec65
        ;   XREF to: 004aeddf (CONDITIONAL_JUMP)  ; LAB_004aeddf
    MOV EAX,[0x00680a00]                ; 004aec6b | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 004aec70 | g_CNetGameInstance
    JNZ 0x004aed1f                      ; 004aec73
        ;   XREF to: 004aed1f (CONDITIONAL_JUMP)  ; LAB_004aed1f
    LEA EAX,[ESP + 0x9ec]               ; 004aec79
    MOV ECX,0xffffffff                  ; 004aec80
    PUSH EAX                            ; 004aec85
    LEA EAX,[ESP + 0x9f4]               ; 004aec86
    MOV dword ptr [ESP + 0x9f0],ECX     ; 004aec8d
    PUSH EAX                            ; 004aec94
    MOV EAX,0x6254dd                    ; 004aec95 | = " ( %d )%n"
    MOV EBX,dword ptr [ESI]             ; 004aec9a
    PUSH EAX                            ; 004aec9c | = " ( %d )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004aec9d
    ADD EAX,EBX                         ; 004aeca0
    PUSH EAX                            ; 004aeca2
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aeca3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004aeca8
    CMP dword ptr [ESP + 0x9ec],0x3     ; 004aecab
    JL 0x004aed4f                       ; 004aecb3
        ;   XREF to: 004aed4f (CONDITIONAL_JUMP)  ; LAB_004aed4f
    MOV EAX,dword ptr [ESP + 0x9f0]     ; 004aecb9
    TEST EAX,EAX                        ; 004aecc0
    JZ 0x004aed7f                       ; 004aecc2
        ;   XREF to: 004aed7f (CONDITIONAL_JUMP)  ; LAB_004aed7f
    MOV EDX,dword ptr [ESP + 0x9f0]     ; 004aecc8
    DEC EAX                             ; 004aeccf
    TEST EAX,EDX                        ; 004aecd0
    JNZ 0x004aedaf                      ; 004aecd2
        ;   XREF to: 004aedaf (CONDITIONAL_JUMP)  ; LAB_004aedaf
    MOV EAX,[0x02db87d0]                ; 004aecd8 | g_LocalHeroIndex
    XOR ECX,ECX                         ; 004aecdd
    MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004aecdf | g_HeroActors
    MOV dword ptr [ESP + 0x9b0],ECX     ; 004aece6
    TEST EBX,EBX                        ; 004aeced
    JZ 0x004aed11                       ; 004aecef
        ;   XREF to: 004aed11 (CONDITIONAL_JUMP)  ; LAB_004aed11
    PUSH ECX                            ; 004aecf1
    PUSH EDX                            ; 004aecf2
    LEA EAX,[EBX + 0x1f738]             ; 004aecf3
    PUSH EAX                            ; 004aecf9
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0 ; 004aecfa
        ;   XREF to: 005013d0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message)
    ADD ESP,0xc                         ; 004aecff
    TEST EAX,EAX                        ; 004aed02
    JZ 0x004aed11                       ; 004aed04
        ;   XREF to: 004aed11 (CONDITIONAL_JUMP)  ; LAB_004aed11
    MOV dword ptr [ESP + 0x9b0],0x1     ; 004aed06
    MOV EAX,dword ptr [ESP + 0x9ec]     ; 004aed11
        ;   Label: LAB_004aed11
    ADD dword ptr [ESI],EAX             ; 004aed18
    JMP 0x004ae5e4                      ; 004aed1a
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x6254ae                    ; 004aed1f | = "Can't use hasKeyMask condition in mul..."
        ;   Label: LAB_004aed1f
    MOV EDI,0x2d0a460                   ; 004aed24 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aed29 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aed2a | = "Can't use hasKeyMask condition in mul..." | s_n't_use_hasKeyMask_condition_in_m_006254b0
        ;   Label: LAB_004aed2a
    MOV byte ptr [EDI],AL               ; 004aed2c | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aed2e
    JZ 0x004aed42                       ; 004aed30
        ;   XREF to: 004aed42 (CONDITIONAL_JUMP)  ; LAB_004aed42
    MOV AL,byte ptr [ESI + 0x1]         ; 004aed32 | s_an't_use_hasKeyMask_condition_in_006254af | s_'t_use_hasKeyMask_condition_in_m_006254b1
    ADD ESI,0x2                         ; 004aed35
    MOV byte ptr [EDI + 0x1],AL         ; 004aed38 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aed3b
    CMP AL,0x0                          ; 004aed3e
    JNZ 0x004aed2a                      ; 004aed40
        ;   XREF to: 004aed2a (CONDITIONAL_JUMP)  ; LAB_004aed2a
    POP EDI                             ; 004aed42
        ;   Label: LAB_004aed42
    MOV EAX,0xffffffff                  ; 004aed43
    MOV ESP,EBP                         ; 004aed48
    POP EBP                             ; 004aed4a
    POP EDI                             ; 004aed4b
    POP ESI                             ; 004aed4c
    POP EBX                             ; 004aed4d
    RET                                 ; 004aed4e
    MOV ESI,0x6254e7                    ; 004aed4f | = "Error parsing hasKeyMask parameters."
        ;   Label: LAB_004aed4f
    MOV EDI,0x2d0a460                   ; 004aed54 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aed59 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aed5a | = "Error parsing hasKeyMask parameters." | s_ror_parsing_hasKeyMask_parameter_006254e9
        ;   Label: LAB_004aed5a
    MOV byte ptr [EDI],AL               ; 004aed5c | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aed5e
    JZ 0x004aed72                       ; 004aed60
        ;   XREF to: 004aed72 (CONDITIONAL_JUMP)  ; LAB_004aed72
    MOV AL,byte ptr [ESI + 0x1]         ; 004aed62 | s_rror_parsing_hasKeyMask_paramete_006254e8 | s_or_parsing_hasKeyMask_parameters_006254ea
    ADD ESI,0x2                         ; 004aed65
    MOV byte ptr [EDI + 0x1],AL         ; 004aed68 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aed6b
    CMP AL,0x0                          ; 004aed6e
    JNZ 0x004aed5a                      ; 004aed70
        ;   XREF to: 004aed5a (CONDITIONAL_JUMP)  ; LAB_004aed5a
    POP EDI                             ; 004aed72
        ;   Label: LAB_004aed72
    MOV EAX,0xffffffff                  ; 004aed73
    MOV ESP,EBP                         ; 004aed78
    POP EBP                             ; 004aed7a
    POP EDI                             ; 004aed7b
    POP ESI                             ; 004aed7c
    POP EBX                             ; 004aed7d
    RET                                 ; 004aed7e
    MOV ESI,0x62550c                    ; 004aed7f | = "hasKeyMask(0) always returns false!"
        ;   Label: LAB_004aed7f
    MOV EDI,0x2d0a460                   ; 004aed84 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aed89 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aed8a | = "hasKeyMask(0) always returns false!" | s_sKeyMask(0)_always_returns_false_0062550e
        ;   Label: LAB_004aed8a
    MOV byte ptr [EDI],AL               ; 004aed8c | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aed8e
    JZ 0x004aeda2                       ; 004aed90
        ;   XREF to: 004aeda2 (CONDITIONAL_JUMP)  ; LAB_004aeda2
    MOV AL,byte ptr [ESI + 0x1]         ; 004aed92 | s_asKeyMask(0)_always_returns_fals_0062550d | s_KeyMask(0)_always_returns_false!_0062550f
    ADD ESI,0x2                         ; 004aed95
    MOV byte ptr [EDI + 0x1],AL         ; 004aed98 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aed9b
    CMP AL,0x0                          ; 004aed9e
    JNZ 0x004aed8a                      ; 004aeda0
        ;   XREF to: 004aed8a (CONDITIONAL_JUMP)  ; LAB_004aed8a
    POP EDI                             ; 004aeda2
        ;   Label: LAB_004aeda2
    MOV EAX,0xffffffff                  ; 004aeda3
    MOV ESP,EBP                         ; 004aeda8
    POP EBP                             ; 004aedaa
    POP EDI                             ; 004aedab
    POP ESI                             ; 004aedac
    POP EBX                             ; 004aedad
    RET                                 ; 004aedae
    MOV ESI,0x625530                    ; 004aedaf | = "mask value must be a power of 2.\n(To..."
        ;   Label: LAB_004aedaf
    MOV EDI,0x2d0a460                   ; 004aedb4 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aedb9 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aedba | = "mask value must be a power of 2.\n(To..." | s_sk_value_must_be_a_power_of_2._(_00625532
        ;   Label: LAB_004aedba
    MOV byte ptr [EDI],AL               ; 004aedbc | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aedbe
    JZ 0x004aedd2                       ; 004aedc0
        ;   XREF to: 004aedd2 (CONDITIONAL_JUMP)  ; LAB_004aedd2
    MOV AL,byte ptr [ESI + 0x1]         ; 004aedc2 | s_ask_value_must_be_a_power_of_2._(_00625531 | s_k_value_must_be_a_power_of_2._(T_00625533
    ADD ESI,0x2                         ; 004aedc5
    MOV byte ptr [EDI + 0x1],AL         ; 004aedc8 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aedcb
    CMP AL,0x0                          ; 004aedce
    JNZ 0x004aedba                      ; 004aedd0
        ;   XREF to: 004aedba (CONDITIONAL_JUMP)  ; LAB_004aedba
    POP EDI                             ; 004aedd2
        ;   Label: LAB_004aedd2
    MOV EAX,0xffffffff                  ; 004aedd3
    MOV ESP,EBP                         ; 004aedd8
    POP EBP                             ; 004aedda
    POP EDI                             ; 004aeddb
    POP ESI                             ; 004aeddc
    POP EBX                             ; 004aeddd
    RET                                 ; 004aedde
    PUSH 0x62558e                       ; 004aeddf | = "isBroken"
        ;   Label: LAB_004aeddf
    LEA EAX,[ESP + 0x944]               ; 004aede4
    PUSH EAX                            ; 004aedeb
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aedec
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aedf1
    TEST EAX,EAX                        ; 004aedf4
    JNZ 0x004aef3e                      ; 004aedf6
        ;   XREF to: 004aef3e (CONDITIONAL_JUMP)  ; LAB_004aef3e
    LEA EAX,[ESP + 0x9f4]               ; 004aedfc
    MOV ECX,0xffffffff                  ; 004aee03
    PUSH EAX                            ; 004aee08
    LEA EAX,[ESP + 0x818]               ; 004aee09
    MOV dword ptr [ESP + 0x9f8],ECX     ; 004aee10
    PUSH EAX                            ; 004aee17
    MOV EAX,0x625597                    ; 004aee18 | = " (%[^)])%n"
    MOV EBX,dword ptr [ESI]             ; 004aee1d
    PUSH EAX                            ; 004aee1f | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004aee20
    ADD EAX,EBX                         ; 004aee23
    PUSH EAX                            ; 004aee25
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aee26
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004aee2b
    CMP dword ptr [ESP + 0x9f4],0x3     ; 004aee2e
    JL 0x004aee9f                       ; 004aee36
        ;   XREF to: 004aee9f (CONDITIONAL_JUMP)  ; LAB_004aee9f
    LEA EBX,[ESP + 0x814]               ; 004aee38
    MOV EDI,EBX                         ; 004aee3f
    SUB ECX,ECX                         ; 004aee41
    DEC ECX                             ; 004aee43
    XOR EAX,EAX                         ; 004aee44
    SCASB.REPNE ES:EDI                  ; 004aee46
    NOT ECX                             ; 004aee48
    DEC ECX                             ; 004aee4a
    MOV EDI,ECX                         ; 004aee4b
    TEST ECX,ECX                        ; 004aee4d
    JLE 0x004aee68                      ; 004aee4f
        ;   XREF to: 004aee68 (CONDITIONAL_JUMP)  ; LAB_004aee68
    LEA EAX,[ECX + EBX*0x1]             ; 004aee51
    MOV DL,byte ptr [EAX + -0x1]        ; 004aee54
        ;   Label: LAB_004aee54
    INC DL                              ; 004aee57
    AND EDX,0xff                        ; 004aee59
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aee5f | g_CharacterClassificationTable
    JNZ 0x004aeecf                      ; 004aee66
        ;   XREF to: 004aeecf (CONDITIONAL_JUMP)  ; LAB_004aeecf
    LEA EAX,[EBX + EDI*0x1]             ; 004aee68
        ;   Label: LAB_004aee68
    MOV byte ptr [EAX],0x0              ; 004aee6b
    LEA EAX,[EBX + 0x1]                 ; 004aee6e
    MOV dword ptr [ESP + 0x9f8],EAX     ; 004aee71
    MOV AL,byte ptr [EBX]               ; 004aee78
        ;   Label: LAB_004aee78
    INC AL                              ; 004aee7a
    AND EAX,0xff                        ; 004aee7c
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aee81 | g_CharacterClassificationTable
    JZ 0x004aeedb                       ; 004aee88
        ;   XREF to: 004aeedb (CONDITIONAL_JUMP)  ; LAB_004aeedb
    PUSH EDI                            ; 004aee8a
    MOV EAX,dword ptr [ESP + 0x9fc]     ; 004aee8b
    PUSH EAX                            ; 004aee92
    PUSH EBX                            ; 004aee93
    DEC EDI                             ; 004aee94
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aee95
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aee9a
    JMP 0x004aee78                      ; 004aee9d
        ;   XREF to: 004aee78 (UNCONDITIONAL_JUMP)  ; LAB_004aee78
    MOV ESI,0x6255a2                    ; 004aee9f | = "Error parsing isBroken parameters."
        ;   Label: LAB_004aee9f
    MOV EDI,0x2d0a460                   ; 004aeea4 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aeea9 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aeeaa | = "Error parsing isBroken parameters." | s_ror_parsing_isBroken_parameters._006255a4
        ;   Label: LAB_004aeeaa
    MOV byte ptr [EDI],AL               ; 004aeeac | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aeeae
    JZ 0x004aeec2                       ; 004aeeb0
        ;   XREF to: 004aeec2 (CONDITIONAL_JUMP)  ; LAB_004aeec2
    MOV AL,byte ptr [ESI + 0x1]         ; 004aeeb2 | s_rror_parsing_isBroken_parameters_006255a3 | s_or_parsing_isBroken_parameters._006255a5
    ADD ESI,0x2                         ; 004aeeb5
    MOV byte ptr [EDI + 0x1],AL         ; 004aeeb8 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aeebb
    CMP AL,0x0                          ; 004aeebe
    JNZ 0x004aeeaa                      ; 004aeec0
        ;   XREF to: 004aeeaa (CONDITIONAL_JUMP)  ; LAB_004aeeaa
    POP EDI                             ; 004aeec2
        ;   Label: LAB_004aeec2
    MOV EAX,0xffffffff                  ; 004aeec3
        ;   Label: LAB_004aeec3
    MOV ESP,EBP                         ; 004aeec8
    POP EBP                             ; 004aeeca
    POP EDI                             ; 004aeecb
    POP ESI                             ; 004aeecc
    POP EBX                             ; 004aeecd
    RET                                 ; 004aeece
    DEC EDI                             ; 004aeecf
        ;   Label: LAB_004aeecf
    DEC EAX                             ; 004aeed0
    TEST EDI,EDI                        ; 004aeed1
    JG 0x004aee54                       ; 004aeed3
        ;   XREF to: 004aee54 (CONDITIONAL_JUMP)  ; LAB_004aee54
    JMP 0x004aee68                      ; 004aeed9
        ;   XREF to: 004aee68 (UNCONDITIONAL_JUMP)  ; LAB_004aee68
    PUSH 0x2d83328                      ; 004aeedb | g_CGlassClassInfo
        ;   Label: LAB_004aeedb
    MOV EBX,dword ptr [0x02d83360]      ; 004aeee0 | g_CGlassClassInfo.name_hash
    PUSH EBX                            ; 004aeee6
    LEA EAX,[ESP + 0x81c]               ; 004aeee7
    PUSH EAX                            ; 004aeeee
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004aeeef
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004aeef4
    TEST EAX,EAX                        ; 004aeef7
    JZ 0x004aeec3                       ; 004aeef9
        ;   XREF to: 004aeec3 (CONDITIONAL_JUMP)  ; LAB_004aeec3
    CMP EAX,dword ptr [0x0065d95c]      ; 004aeefb | g_ActorNameSentinel
    JNZ 0x004aef1a                      ; 004aef01
        ;   XREF to: 004aef1a (CONDITIONAL_JUMP)  ; LAB_004aef1a
    XOR ECX,ECX                         ; 004aef03
    MOV dword ptr [ESP + 0x9b0],ECX     ; 004aef05
    MOV EAX,dword ptr [ESP + 0x9f4]     ; 004aef0c
    ADD dword ptr [ESI],EAX             ; 004aef13
    JMP 0x004ae5e4                      ; 004aef15
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    CMP dword ptr [EAX + 0x180],0x0     ; 004aef1a
        ;   Label: LAB_004aef1a
    SETNZ AL                            ; 004aef21
    AND EAX,0xff                        ; 004aef24
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004aef29
    MOV EAX,dword ptr [ESP + 0x9f4]     ; 004aef30
    ADD dword ptr [ESI],EAX             ; 004aef37
    JMP 0x004ae5e4                      ; 004aef39
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x6255c5                       ; 004aef3e | = "isCurrentCamera"
        ;   Label: LAB_004aef3e
    LEA EAX,[ESP + 0x944]               ; 004aef43
    PUSH EAX                            ; 004aef4a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aef4b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aef50
    TEST EAX,EAX                        ; 004aef53
    JNZ 0x004af01d                      ; 004aef55
        ;   XREF to: 004af01d (CONDITIONAL_JUMP)  ; LAB_004af01d
    MOV dword ptr [ESP + 0x9fc],0xffffffff ; 004aef5b
    LEA EAX,[ESP + 0x9fc]               ; 004aef66
    PUSH EAX                            ; 004aef6d
    LEA EAX,[ESP + 0x1d8]               ; 004aef6e
    PUSH EAX                            ; 004aef75
    MOV EAX,0x6255d5                    ; 004aef76 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 004aef7b
    PUSH EAX                            ; 004aef7d | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004aef7e
    ADD EAX,EDX                         ; 004aef81
    PUSH EAX                            ; 004aef83
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aef84
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004aef89
    CMP dword ptr [ESP + 0x9fc],0x3     ; 004aef8c
    JL 0x004aefed                       ; 004aef94
        ;   XREF to: 004aefed (CONDITIONAL_JUMP)  ; LAB_004aefed
    MOV EAX,[0x006810c8]                ; 004aef96 | g_CDemonSetPtr
    XOR EBX,EBX                         ; 004aef9b
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 004aef9d | g_CDemonSetInstance.selected_camera_index
    MOV dword ptr [ESP + 0x9b0],EBX     ; 004aefa3
    TEST EAX,EAX                        ; 004aefaa
    JL 0x004aefdf                       ; 004aefac
        ;   XREF to: 004aefdf (CONDITIONAL_JUMP)  ; LAB_004aefdf
    IMUL EAX,EAX,0x1a4                  ; 004aefae
    LEA EDX,[ESP + 0x1d4]               ; 004aefb4
    PUSH EDX                            ; 004aefbb
    MOV EDX,dword ptr [0x006810c8]      ; 004aefbc | g_CDemonSetPtr
    ADD EDX,0x4                         ; 004aefc2
    ADD EAX,EDX                         ; 004aefc5
    PUSH EAX                            ; 004aefc7
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aefc8
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aefcd
    TEST EAX,EAX                        ; 004aefd0
    JNZ 0x004aefdf                      ; 004aefd2
        ;   XREF to: 004aefdf (CONDITIONAL_JUMP)  ; LAB_004aefdf
    MOV dword ptr [ESP + 0x9b0],0x1     ; 004aefd4
    MOV EAX,dword ptr [ESP + 0x9fc]     ; 004aefdf
        ;   Label: LAB_004aefdf
    ADD dword ptr [ESI],EAX             ; 004aefe6
    JMP 0x004ae5e4                      ; 004aefe8
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x6255e3                    ; 004aefed | = "Error parsing icCurrentCamera paramet..."
        ;   Label: LAB_004aefed
    MOV EDI,0x2d0a460                   ; 004aeff2 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aeff7 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aeff8 | = "Error parsing icCurrentCamera paramet..." | s_ror_parsing_icCurrentCamera_para_006255e5
        ;   Label: LAB_004aeff8
    MOV byte ptr [EDI],AL               ; 004aeffa | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aeffc
    JZ 0x004af010                       ; 004aeffe
        ;   XREF to: 004af010 (CONDITIONAL_JUMP)  ; LAB_004af010
    MOV AL,byte ptr [ESI + 0x1]         ; 004af000 | s_rror_parsing_icCurrentCamera_par_006255e4 | s_or_parsing_icCurrentCamera_param_006255e6
    ADD ESI,0x2                         ; 004af003
    MOV byte ptr [EDI + 0x1],AL         ; 004af006 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af009
    CMP AL,0x0                          ; 004af00c
    JNZ 0x004aeff8                      ; 004af00e
        ;   XREF to: 004aeff8 (CONDITIONAL_JUMP)  ; LAB_004aeff8
    POP EDI                             ; 004af010
        ;   Label: LAB_004af010
    MOV EAX,0xffffffff                  ; 004af011
    MOV ESP,EBP                         ; 004af016
    POP EBP                             ; 004af018
    POP EDI                             ; 004af019
    POP ESI                             ; 004af01a
    POP EBX                             ; 004af01b
    RET                                 ; 004af01c
    PUSH 0x62560d                       ; 004af01d | = "isDead"
        ;   Label: LAB_004af01d
    LEA EAX,[ESP + 0x944]               ; 004af022
    PUSH EAX                            ; 004af029
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004af02a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004af02f
    TEST EAX,EAX                        ; 004af032
    JNZ 0x004af113                      ; 004af034
        ;   XREF to: 004af113 (CONDITIONAL_JUMP)  ; LAB_004af113
    LEA EAX,[ESP + 0xa00]               ; 004af03a
    MOV EBX,0xffffffff                  ; 004af041
    PUSH EAX                            ; 004af046
    LEA EAX,[ESP + 0x3cc]               ; 004af047
    MOV dword ptr [ESP + 0xa04],EBX     ; 004af04e
    PUSH EAX                            ; 004af055
    MOV EAX,0x625614                    ; 004af056 | = " ( %[^ )] )%n"
    MOV EDI,dword ptr [ESI]             ; 004af05b
    PUSH EAX                            ; 004af05d | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af05e
    ADD EAX,EDI                         ; 004af061
    PUSH EAX                            ; 004af063
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af064
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004af069
    CMP dword ptr [ESP + 0xa00],0x3     ; 004af06c
    JL 0x004af0b6                       ; 004af074
        ;   XREF to: 004af0b6 (CONDITIONAL_JUMP)  ; LAB_004af0b6
    MOV EAX,0x823c14                    ; 004af076 | g_CCharacterClassInfo
    PUSH EAX                            ; 004af07b | g_CCharacterClassInfo
    MOV EDX,dword ptr [0x00823c4c]      ; 004af07c | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004af082
    LEA EAX,[ESP + 0x3d0]               ; 004af083
    PUSH EAX                            ; 004af08a
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004af08b
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004af090
    TEST EAX,EAX                        ; 004af093
    JZ 0x004af0da                       ; 004af095
        ;   XREF to: 004af0da (CONDITIONAL_JUMP)  ; LAB_004af0da
    CMP EAX,dword ptr [0x0065d95c]      ; 004af097 | g_ActorNameSentinel
    JNZ 0x004af0e3                      ; 004af09d
        ;   XREF to: 004af0e3 (CONDITIONAL_JUMP)  ; LAB_004af0e3
    XOR EBX,EBX                         ; 004af09f
    MOV dword ptr [ESP + 0x9b0],EBX     ; 004af0a1
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004af0a8
    ADD dword ptr [ESI],EAX             ; 004af0af
    JMP 0x004ae5e4                      ; 004af0b1
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x625622                    ; 004af0b6 | = "Error parsing isDead parameters."
        ;   Label: LAB_004af0b6
    MOV EDI,0x2d0a460                   ; 004af0bb | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af0c0 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af0c1 | = "Error parsing isDead parameters." | s_ror_parsing_isDead_parameters._00625624
        ;   Label: LAB_004af0c1
    MOV byte ptr [EDI],AL               ; 004af0c3 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af0c5
    JZ 0x004af0d9                       ; 004af0c7
        ;   XREF to: 004af0d9 (CONDITIONAL_JUMP)  ; LAB_004af0d9
    MOV AL,byte ptr [ESI + 0x1]         ; 004af0c9 | s_rror_parsing_isDead_parameters._00625623 | s_or_parsing_isDead_parameters._00625625
    ADD ESI,0x2                         ; 004af0cc
    MOV byte ptr [EDI + 0x1],AL         ; 004af0cf | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af0d2
    CMP AL,0x0                          ; 004af0d5
    JNZ 0x004af0c1                      ; 004af0d7
        ;   XREF to: 004af0c1 (CONDITIONAL_JUMP)  ; LAB_004af0c1
    POP EDI                             ; 004af0d9
        ;   Label: LAB_004af0d9
    MOV EAX,EBX                         ; 004af0da
        ;   Label: LAB_004af0da
    MOV ESP,EBP                         ; 004af0dc
    POP EBP                             ; 004af0de
    POP EDI                             ; 004af0df
    POP ESI                             ; 004af0e0
    POP EBX                             ; 004af0e1
    RET                                 ; 004af0e2
    PUSH EAX                            ; 004af0e3
        ;   Label: LAB_004af0e3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004af0e4
    CALL dword ptr [EDX + 0x120]        ; 004af0ea
    ADD ESP,0x4                         ; 004af0f0
    CMP EAX,0x1                         ; 004af0f3
    SETG AL                             ; 004af0f6
    AND EAX,0xff                        ; 004af0f9
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004af0fe
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004af105
    ADD dword ptr [ESI],EAX             ; 004af10c
    JMP 0x004ae5e4                      ; 004af10e
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x625643                       ; 004af113 | = "isFadeFinished"
        ;   Label: LAB_004af113
    LEA EAX,[ESP + 0x944]               ; 004af118
    PUSH EAX                            ; 004af11f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004af120
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004af125
    TEST EAX,EAX                        ; 004af128
    JNZ 0x004af1ad                      ; 004af12a
        ;   XREF to: 004af1ad (CONDITIONAL_JUMP)  ; LAB_004af1ad
    MOV EBX,0xffffffff                  ; 004af130
    LEA EAX,[ESP + 0xa04]               ; 004af135
    MOV dword ptr [ESP + 0xa04],EBX     ; 004af13c
    PUSH EAX                            ; 004af143
    MOV EAX,0x625652                    ; 004af144 | = " ( )%n"
    MOV EDI,dword ptr [ESI]             ; 004af149
    PUSH EAX                            ; 004af14b | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af14c
    ADD EAX,EDI                         ; 004af14f
    PUSH EAX                            ; 004af151
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af152
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004af157
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004af15a
    CMP EAX,0x2                         ; 004af161
    JL 0x004af180                       ; 004af164
        ;   XREF to: 004af180 (CONDITIONAL_JUMP)  ; LAB_004af180
    MOV EDX,dword ptr [ESI]             ; 004af166
    MOV ECX,dword ptr [0x0067b654]      ; 004af168 | g_CGameInstance | g_CGamePtr
    ADD EDX,EAX                         ; 004af16e
    PUSH ECX                            ; 004af170 | g_CGameInstance
    MOV dword ptr [ESI],EDX             ; 004af171
    CALL core_game.cpp_CGame_fadeIn_FUN_004e0b90 ; 004af173
        ;   XREF to: 004e0b90 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr)
    ADD ESP,0x4                         ; 004af178
    JMP 0x004ae5dd                      ; 004af17b
        ;   XREF to: 004ae5dd (UNCONDITIONAL_JUMP)  ; LAB_004ae5dd
    MOV ESI,0x625659                    ; 004af180 | = "Error parsing isFadeFinished function."
        ;   Label: LAB_004af180
    MOV EDI,0x2d0a460                   ; 004af185 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af18a | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af18b | = "Error parsing isFadeFinished function." | s_ror_parsing_isFadeFinished_funct_0062565b
        ;   Label: LAB_004af18b
    MOV byte ptr [EDI],AL               ; 004af18d | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af18f
    JZ 0x004af1a3                       ; 004af191
        ;   XREF to: 004af1a3 (CONDITIONAL_JUMP)  ; LAB_004af1a3
    MOV AL,byte ptr [ESI + 0x1]         ; 004af193 | s_rror_parsing_isFadeFinished_func_0062565a | s_or_parsing_isFadeFinished_functi_0062565c
    ADD ESI,0x2                         ; 004af196
    MOV byte ptr [EDI + 0x1],AL         ; 004af199 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af19c
    CMP AL,0x0                          ; 004af19f
    JNZ 0x004af18b                      ; 004af1a1
        ;   XREF to: 004af18b (CONDITIONAL_JUMP)  ; LAB_004af18b
    POP EDI                             ; 004af1a3
        ;   Label: LAB_004af1a3
    MOV EAX,EBX                         ; 004af1a4
    MOV ESP,EBP                         ; 004af1a6
    POP EBP                             ; 004af1a8
    POP EDI                             ; 004af1a9
    POP ESI                             ; 004af1aa
    POP EBX                             ; 004af1ab
    RET                                 ; 004af1ac
    PUSH 0x625680                       ; 004af1ad | = "isInRange"
        ;   Label: LAB_004af1ad
    LEA EAX,[ESP + 0x944]               ; 004af1b2
    PUSH EAX                            ; 004af1b9
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004af1ba
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004af1bf
    TEST EAX,EAX                        ; 004af1c2
    JNZ 0x004af3c5                      ; 004af1c4
        ;   XREF to: 004af3c5 (CONDITIONAL_JUMP)  ; LAB_004af3c5
    MOV EDI,0xffffffff                  ; 004af1ca
    LEA EAX,[ESP + 0xa08]               ; 004af1cf
    MOV dword ptr [ESP + 0xa08],EDI     ; 004af1d6
    PUSH EAX                            ; 004af1dd
    MOV EAX,0x62568a                    ; 004af1de | = " ( %n"
    MOV EDX,dword ptr [ESI]             ; 004af1e3
    PUSH EAX                            ; 004af1e5 | = " ( %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af1e6
    ADD EAX,EDX                         ; 004af1e9
    PUSH EAX                            ; 004af1eb
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af1ec
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004af1f1
    MOV ECX,dword ptr [ESP + 0xa08]     ; 004af1f4
    CMP ECX,0x1                         ; 004af1fb
    JL 0x004af22d                       ; 004af1fe
        ;   XREF to: 004af22d (CONDITIONAL_JUMP)  ; LAB_004af22d
    LEA EAX,[ESP + 0x98c]               ; 004af200
    PUSH EAX                            ; 004af207
    MOV EBX,dword ptr [ESI]             ; 004af208
    PUSH ESI                            ; 004af20a
    MOV EDI,dword ptr [EBP + 0x18]      ; 004af20b
    ADD EBX,ECX                         ; 004af20e
    PUSH EDI                            ; 004af210
    MOV dword ptr [ESI],EBX             ; 004af211
    CALL core_event.cpp_parseVectorLocation_FUN_004aa530 ; 004af213
        ;   XREF to: 004aa530 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseVectorLocation_FUN_004aa530(char * buffer, int * offset, CVector3f * out_position)
    ADD ESP,0xc                         ; 004af218
    MOV EBX,EAX                         ; 004af21b
    TEST EAX,EAX                        ; 004af21d
    JGE 0x004af25d                      ; 004af21f
        ;   XREF to: 004af25d (CONDITIONAL_JUMP)  ; LAB_004af25d
    MOV EAX,0xffffffff                  ; 004af221
    MOV ESP,EBP                         ; 004af226
    POP EBP                             ; 004af228
    POP EDI                             ; 004af229
    POP ESI                             ; 004af22a
    POP EBX                             ; 004af22b
    RET                                 ; 004af22c
    MOV ESI,0x625690                    ; 004af22d | = "Error parsing isInRange parameters."
        ;   Label: LAB_004af22d
    MOV EDI,0x2d0a460                   ; 004af232 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af237 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af238 | = "Error parsing isInRange parameters." | s_ror_parsing_isInRange_parameters_00625692
        ;   Label: LAB_004af238
    MOV byte ptr [EDI],AL               ; 004af23a | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af23c
    JZ 0x004af250                       ; 004af23e
        ;   XREF to: 004af250 (CONDITIONAL_JUMP)  ; LAB_004af250
    MOV AL,byte ptr [ESI + 0x1]         ; 004af240 | s_rror_parsing_isInRange_parameter_00625691 | s_or_parsing_isInRange_parameters._00625693
    ADD ESI,0x2                         ; 004af243
    MOV byte ptr [EDI + 0x1],AL         ; 004af246 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af249
    CMP AL,0x0                          ; 004af24c
    JNZ 0x004af238                      ; 004af24e
        ;   XREF to: 004af238 (CONDITIONAL_JUMP)  ; LAB_004af238
    POP EDI                             ; 004af250
        ;   Label: LAB_004af250
    MOV EAX,0xffffffff                  ; 004af251
    MOV ESP,EBP                         ; 004af256
    POP EBP                             ; 004af258
    POP EDI                             ; 004af259
    POP ESI                             ; 004af25a
    POP EBX                             ; 004af25b
    RET                                 ; 004af25c
    MOV dword ptr [ESP + 0xa08],0xffffffff ; 004af25d
        ;   Label: LAB_004af25d
    LEA EAX,[ESP + 0xa08]               ; 004af268
    PUSH EAX                            ; 004af26f
    MOV EAX,0x6256b4                    ; 004af270 | = " , %n"
    MOV EDX,dword ptr [ESI]             ; 004af275
    PUSH EAX                            ; 004af277 | = " , %n"
    LEA EAX,[EDI + EDX*0x1]             ; 004af278
    PUSH EAX                            ; 004af27b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af27c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004af281
    MOV ECX,dword ptr [ESP + 0xa08]     ; 004af284
    CMP ECX,0x1                         ; 004af28b
    JL 0x004af357                       ; 004af28e
        ;   XREF to: 004af357 (CONDITIONAL_JUMP)  ; LAB_004af357
    LEA EAX,[ESP + 0x9a4]               ; 004af294
    PUSH EAX                            ; 004af29b
    MOV EDI,dword ptr [ESI]             ; 004af29c
    PUSH ESI                            ; 004af29e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af29f
    ADD EDI,ECX                         ; 004af2a2
    PUSH EAX                            ; 004af2a4
    MOV dword ptr [ESI],EDI             ; 004af2a5
    CALL core_event.cpp_parseVectorLocation_FUN_004aa530 ; 004af2a7
        ;   XREF to: 004aa530 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseVectorLocation_FUN_004aa530(char * buffer, int * offset, CVector3f * out_position)
    ADD ESP,0xc                         ; 004af2ac
    MOV EDI,EAX                         ; 004af2af
    TEST EAX,EAX                        ; 004af2b1
    JL 0x004af37b                       ; 004af2b3
        ;   XREF to: 004af37b (CONDITIONAL_JUMP)  ; LAB_004af37b
    LEA EAX,[ESP + 0xa08]               ; 004af2b9
    MOV EDX,0xffffffff                  ; 004af2c0
    PUSH EAX                            ; 004af2c5
    LEA EAX,[ESP + 0xa10]               ; 004af2c6
    MOV dword ptr [ESP + 0xa0c],EDX     ; 004af2cd
    PUSH EAX                            ; 004af2d4
    MOV EAX,0x6256de                    ; 004af2d5 | = " , %f )%n"
    MOV ECX,dword ptr [ESI]             ; 004af2da
    PUSH EAX                            ; 004af2dc | = " , %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af2dd
    ADD EAX,ECX                         ; 004af2e0
    PUSH EAX                            ; 004af2e2
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af2e3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004af2e8
    MOV EAX,dword ptr [ESP + 0xa08]     ; 004af2eb
    CMP EAX,0x3                         ; 004af2f2
    JL 0x004af387                       ; 004af2f5
        ;   XREF to: 004af387 (CONDITIONAL_JUMP)  ; LAB_004af387
    ADD dword ptr [ESI],EAX             ; 004af2fb
    TEST EBX,EBX                        ; 004af2fd
    JZ 0x004af3b7                       ; 004af2ff
        ;   XREF to: 004af3b7 (CONDITIONAL_JUMP)  ; LAB_004af3b7
    TEST EDI,EDI                        ; 004af305
    JZ 0x004af3b7                       ; 004af307
        ;   XREF to: 004af3b7 (CONDITIONAL_JUMP)  ; LAB_004af3b7
    FLD float ptr [ESP + 0x98c]         ; 004af30d
    FSUB float ptr [ESP + 0x9a4]        ; 004af314
    FMUL ST0                            ; 004af31b
    FLD float ptr [ESP + 0x990]         ; 004af31d
    FSUB float ptr [ESP + 0x9a8]        ; 004af324
    FMUL ST0                            ; 004af32b
    FLD float ptr [ESP + 0x994]         ; 004af32d
    FXCH                                ; 004af334
    FADDP ST2,ST0                       ; 004af336
    FSUB float ptr [ESP + 0x9ac]        ; 004af338
    FMUL ST0                            ; 004af33f
    FADDP                               ; 004af341
    FSQRT                               ; 004af343
    FCOMP float ptr [ESP + 0xa0c]       ; 004af345
    FNSTSW AX                           ; 004af34c
    SAHF                                ; 004af34e
    SETBE AL                            ; 004af34f
    JMP 0x004ae5d8                      ; 004af352
        ;   XREF to: 004ae5d8 (UNCONDITIONAL_JUMP)  ; LAB_004ae5d8
    MOV ESI,0x6256ba                    ; 004af357 | = "Error parsing isInRange parameters."
        ;   Label: LAB_004af357
    MOV EDI,0x2d0a460                   ; 004af35c | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af361 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af362 | = "Error parsing isInRange parameters." | s_ror_parsing_isInRange_parameters_006256bc
        ;   Label: LAB_004af362
    MOV byte ptr [EDI],AL               ; 004af364 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af366
    JZ 0x004af37a                       ; 004af368
        ;   XREF to: 004af37a (CONDITIONAL_JUMP)  ; LAB_004af37a
    MOV AL,byte ptr [ESI + 0x1]         ; 004af36a | s_rror_parsing_isInRange_parameter_006256bb | s_or_parsing_isInRange_parameters._006256bd
    ADD ESI,0x2                         ; 004af36d
    MOV byte ptr [EDI + 0x1],AL         ; 004af370 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af373
    CMP AL,0x0                          ; 004af376
    JNZ 0x004af362                      ; 004af378
        ;   XREF to: 004af362 (CONDITIONAL_JUMP)  ; LAB_004af362
    POP EDI                             ; 004af37a
        ;   Label: LAB_004af37a
    MOV EAX,0xffffffff                  ; 004af37b
        ;   Label: LAB_004af37b
    MOV ESP,EBP                         ; 004af380
    POP EBP                             ; 004af382
    POP EDI                             ; 004af383
    POP ESI                             ; 004af384
    POP EBX                             ; 004af385
    RET                                 ; 004af386
    MOV ESI,0x6256e8                    ; 004af387 | = "Error parsing isInRange parameters."
        ;   Label: LAB_004af387
    MOV EDI,0x2d0a460                   ; 004af38c | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af391 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af392 | = "Error parsing isInRange parameters." | s_ror_parsing_isInRange_parameters_006256ea
        ;   Label: LAB_004af392
    MOV byte ptr [EDI],AL               ; 004af394 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af396
    JZ 0x004af3aa                       ; 004af398
        ;   XREF to: 004af3aa (CONDITIONAL_JUMP)  ; LAB_004af3aa
    MOV AL,byte ptr [ESI + 0x1]         ; 004af39a | s_rror_parsing_isInRange_parameter_006256e9 | s_or_parsing_isInRange_parameters._006256eb
    ADD ESI,0x2                         ; 004af39d
    MOV byte ptr [EDI + 0x1],AL         ; 004af3a0 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af3a3
    CMP AL,0x0                          ; 004af3a6
    JNZ 0x004af392                      ; 004af3a8
        ;   XREF to: 004af392 (CONDITIONAL_JUMP)  ; LAB_004af392
    POP EDI                             ; 004af3aa
        ;   Label: LAB_004af3aa
    MOV EAX,0xffffffff                  ; 004af3ab
    MOV ESP,EBP                         ; 004af3b0
    POP EBP                             ; 004af3b2
    POP EDI                             ; 004af3b3
    POP ESI                             ; 004af3b4
    POP EBX                             ; 004af3b5
    RET                                 ; 004af3b6
    XOR ECX,ECX                         ; 004af3b7
        ;   Label: LAB_004af3b7
    MOV dword ptr [ESP + 0x9b0],ECX     ; 004af3b9
    JMP 0x004ae5e4                      ; 004af3c0
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x62570c                       ; 004af3c5 | = "isOfType"
        ;   Label: LAB_004af3c5
    LEA EAX,[ESP + 0x944]               ; 004af3ca
    PUSH EAX                            ; 004af3d1
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004af3d2
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004af3d7
    TEST EAX,EAX                        ; 004af3da
    JNZ 0x004af5ac                      ; 004af3dc
        ;   XREF to: 004af5ac (CONDITIONAL_JUMP)  ; LAB_004af5ac
    LEA EAX,[ESP + 0xa20]               ; 004af3e2
    PUSH EAX                            ; 004af3e9
    LEA EAX,[ESP + 0x430]               ; 004af3ea
    MOV EDX,0xffffffff                  ; 004af3f1
    PUSH EAX                            ; 004af3f6
    LEA EAX,[ESP + 0x628]               ; 004af3f7
    MOV dword ptr [ESP + 0xa28],EDX     ; 004af3fe
    PUSH EAX                            ; 004af405
    MOV EAX,0x625715                    ; 004af406 | = " ( %[^ ,] , %[^ )] )%n"
    MOV ECX,dword ptr [ESI]             ; 004af40b
    PUSH EAX                            ; 004af40d | = " ( %[^ ,] , %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af40e
    ADD EAX,ECX                         ; 004af411
    PUSH EAX                            ; 004af413
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af414
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004af419
    CMP dword ptr [ESP + 0xa20],0x3     ; 004af41c
    JL 0x004af48d                       ; 004af424
        ;   XREF to: 004af48d (CONDITIONAL_JUMP)  ; LAB_004af48d
    LEA EBX,[ESP + 0x620]               ; 004af426
    MOV EDI,EBX                         ; 004af42d
    SUB ECX,ECX                         ; 004af42f
    DEC ECX                             ; 004af431
    XOR EAX,EAX                         ; 004af432
    SCASB.REPNE ES:EDI                  ; 004af434
    NOT ECX                             ; 004af436
    DEC ECX                             ; 004af438
    MOV EDI,ECX                         ; 004af439
    TEST ECX,ECX                        ; 004af43b
    JLE 0x004af456                      ; 004af43d
        ;   XREF to: 004af456 (CONDITIONAL_JUMP)  ; LAB_004af456
    LEA EAX,[ECX + EBX*0x1]             ; 004af43f
    MOV DL,byte ptr [EAX + -0x1]        ; 004af442
        ;   Label: LAB_004af442
    INC DL                              ; 004af445
    AND EDX,0xff                        ; 004af447
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004af44d | g_CharacterClassificationTable
    JNZ 0x004af4bd                      ; 004af454
        ;   XREF to: 004af4bd (CONDITIONAL_JUMP)  ; LAB_004af4bd
    LEA EAX,[EBX + EDI*0x1]             ; 004af456
        ;   Label: LAB_004af456
    MOV byte ptr [EAX],0x0              ; 004af459
    LEA EAX,[EBX + 0x1]                 ; 004af45c
    MOV dword ptr [ESP + 0xa28],EAX     ; 004af45f
    MOV AL,byte ptr [EBX]               ; 004af466
        ;   Label: LAB_004af466
    INC AL                              ; 004af468
    AND EAX,0xff                        ; 004af46a
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004af46f | g_CharacterClassificationTable
    JZ 0x004af4c9                       ; 004af476
        ;   XREF to: 004af4c9 (CONDITIONAL_JUMP)  ; LAB_004af4c9
    PUSH EDI                            ; 004af478
    MOV EDX,dword ptr [ESP + 0xa2c]     ; 004af479
    PUSH EDX                            ; 004af480
    PUSH EBX                            ; 004af481
    DEC EDI                             ; 004af482
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004af483
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004af488
    JMP 0x004af466                      ; 004af48b
        ;   XREF to: 004af466 (UNCONDITIONAL_JUMP)  ; LAB_004af466
    MOV ESI,0x62572c                    ; 004af48d | = "Error parsing isOfType parameters."
        ;   Label: LAB_004af48d
    MOV EDI,0x2d0a460                   ; 004af492 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af497 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af498 | = "Error parsing isOfType parameters." | s_ror_parsing_isOfType_parameters._0062572e
        ;   Label: LAB_004af498
    MOV byte ptr [EDI],AL               ; 004af49a | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af49c
    JZ 0x004af4b0                       ; 004af49e
        ;   XREF to: 004af4b0 (CONDITIONAL_JUMP)  ; LAB_004af4b0
    MOV AL,byte ptr [ESI + 0x1]         ; 004af4a0 | s_rror_parsing_isOfType_parameters_0062572d | s_or_parsing_isOfType_parameters._0062572f
    ADD ESI,0x2                         ; 004af4a3
    MOV byte ptr [EDI + 0x1],AL         ; 004af4a6 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af4a9
    CMP AL,0x0                          ; 004af4ac
    JNZ 0x004af498                      ; 004af4ae
        ;   XREF to: 004af498 (CONDITIONAL_JUMP)  ; LAB_004af498
    POP EDI                             ; 004af4b0
        ;   Label: LAB_004af4b0
    MOV EAX,0xffffffff                  ; 004af4b1
        ;   Label: LAB_004af4b1
    MOV ESP,EBP                         ; 004af4b6
    POP EBP                             ; 004af4b8
    POP EDI                             ; 004af4b9
    POP ESI                             ; 004af4ba
    POP EBX                             ; 004af4bb
    RET                                 ; 004af4bc
    DEC EDI                             ; 004af4bd
        ;   Label: LAB_004af4bd
    DEC EAX                             ; 004af4be
    TEST EDI,EDI                        ; 004af4bf
    JG 0x004af442                       ; 004af4c1
        ;   XREF to: 004af442 (CONDITIONAL_JUMP)  ; LAB_004af442
    JMP 0x004af456                      ; 004af4c7
        ;   XREF to: 004af456 (UNCONDITIONAL_JUMP)  ; LAB_004af456
    LEA EDI,[ESP + 0x42c]               ; 004af4c9
        ;   Label: LAB_004af4c9
    LEA EBX,[ESP + 0x42c]               ; 004af4d0
    SUB ECX,ECX                         ; 004af4d7
    DEC ECX                             ; 004af4d9
    XOR EAX,EAX                         ; 004af4da
    SCASB.REPNE ES:EDI                  ; 004af4dc
    NOT ECX                             ; 004af4de
    DEC ECX                             ; 004af4e0
    MOV EDI,ECX                         ; 004af4e1
    TEST ECX,ECX                        ; 004af4e3
    JLE 0x004af504                      ; 004af4e5
        ;   XREF to: 004af504 (CONDITIONAL_JUMP)  ; LAB_004af504
    LEA EAX,[ESP + 0x42c]               ; 004af4e7
    ADD EAX,ECX                         ; 004af4ee
    MOV DL,byte ptr [EAX + -0x1]        ; 004af4f0
        ;   Label: LAB_004af4f0
    INC DL                              ; 004af4f3
    AND EDX,0xff                        ; 004af4f5
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004af4fb | g_CharacterClassificationTable
    JNZ 0x004af53b                      ; 004af502
        ;   XREF to: 004af53b (CONDITIONAL_JUMP)  ; LAB_004af53b
    LEA EAX,[EBX + EDI*0x1]             ; 004af504
        ;   Label: LAB_004af504
    MOV byte ptr [EAX],0x0              ; 004af507
    LEA EAX,[EBX + 0x1]                 ; 004af50a
    MOV dword ptr [ESP + 0xa2c],EAX     ; 004af50d
    MOV AL,byte ptr [EBX]               ; 004af514
        ;   Label: LAB_004af514
    INC AL                              ; 004af516
    AND EAX,0xff                        ; 004af518
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004af51d | g_CharacterClassificationTable
    JZ 0x004af543                       ; 004af524
        ;   XREF to: 004af543 (CONDITIONAL_JUMP)  ; LAB_004af543
    PUSH EDI                            ; 004af526
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004af527
    PUSH ECX                            ; 004af52e
    PUSH EBX                            ; 004af52f
    DEC EDI                             ; 004af530
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004af531
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004af536
    JMP 0x004af514                      ; 004af539
        ;   XREF to: 004af514 (UNCONDITIONAL_JUMP)  ; LAB_004af514
    DEC EDI                             ; 004af53b
        ;   Label: LAB_004af53b
    DEC EAX                             ; 004af53c
    TEST EDI,EDI                        ; 004af53d
    JG 0x004af4f0                       ; 004af53f
        ;   XREF to: 004af4f0 (CONDITIONAL_JUMP)  ; LAB_004af4f0
    JMP 0x004af504                      ; 004af541
        ;   XREF to: 004af504 (UNCONDITIONAL_JUMP)  ; LAB_004af504
    PUSH 0x821ff8                       ; 004af543 | g_CDemonActorClassInfo
        ;   Label: LAB_004af543
    MOV ECX,dword ptr [0x00822030]      ; 004af548 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 004af54e
    LEA EAX,[ESP + 0x628]               ; 004af54f
    PUSH EAX                            ; 004af556
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004af557
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004af55c
    TEST EAX,EAX                        ; 004af55f
    JZ 0x004af4b1                       ; 004af561
        ;   XREF to: 004af4b1 (CONDITIONAL_JUMP)  ; LAB_004af4b1
    CMP EAX,dword ptr [0x0065d95c]      ; 004af567 | g_ActorNameSentinel
    JNZ 0x004af586                      ; 004af56d
        ;   XREF to: 004af586 (CONDITIONAL_JUMP)  ; LAB_004af586
    XOR EDI,EDI                         ; 004af56f
    MOV dword ptr [ESP + 0x9b0],EDI     ; 004af571
    MOV EAX,dword ptr [ESP + 0xa20]     ; 004af578
    ADD dword ptr [ESI],EAX             ; 004af57f
    JMP 0x004ae5e4                      ; 004af581
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    LEA EDX,[ESP + 0x42c]               ; 004af586
        ;   Label: LAB_004af586
    PUSH EDX                            ; 004af58d
    PUSH EAX                            ; 004af58e
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004af58f
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004af594
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004af597
    MOV EAX,dword ptr [ESP + 0xa20]     ; 004af59e
    ADD dword ptr [ESI],EAX             ; 004af5a5
    JMP 0x004ae5e4                      ; 004af5a7
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x62574f                       ; 004af5ac | = "isFacing"
        ;   Label: LAB_004af5ac
    LEA EAX,[ESP + 0x944]               ; 004af5b1
    PUSH EAX                            ; 004af5b8
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004af5b9
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004af5be
    TEST EAX,EAX                        ; 004af5c1
    JNZ 0x004af921                      ; 004af5c3
        ;   XREF to: 004af921 (CONDITIONAL_JUMP)  ; LAB_004af921
    LEA EAX,[ESP + 0xa30]               ; 004af5c9
    PUSH EAX                            ; 004af5d0
    LEA EAX,[ESP + 0x5c0]               ; 004af5d1
    MOV EBX,0xffffffff                  ; 004af5d8
    PUSH EAX                            ; 004af5dd
    LEA EAX,[ESP + 0x8e4]               ; 004af5de
    MOV dword ptr [ESP + 0xa38],EBX     ; 004af5e5
    PUSH EAX                            ; 004af5ec
    MOV EAX,0x625758                    ; 004af5ed | = " (%[^,], %[^,)]%n"
    MOV EDI,dword ptr [ESI]             ; 004af5f2
    PUSH EAX                            ; 004af5f4 | = " (%[^,], %[^,)]%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af5f5
    ADD EAX,EDI                         ; 004af5f8
    PUSH EAX                            ; 004af5fa
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af5fb
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004af600
    CMP dword ptr [ESP + 0xa30],0x5     ; 004af603
    JL 0x004af674                       ; 004af60b
        ;   XREF to: 004af674 (CONDITIONAL_JUMP)  ; LAB_004af674
    LEA EBX,[ESP + 0x8dc]               ; 004af60d
    MOV EDI,EBX                         ; 004af614
    SUB ECX,ECX                         ; 004af616
    DEC ECX                             ; 004af618
    XOR EAX,EAX                         ; 004af619
    SCASB.REPNE ES:EDI                  ; 004af61b
    NOT ECX                             ; 004af61d
    DEC ECX                             ; 004af61f
    MOV EDI,ECX                         ; 004af620
    TEST ECX,ECX                        ; 004af622
    JLE 0x004af63d                      ; 004af624
        ;   XREF to: 004af63d (CONDITIONAL_JUMP)  ; LAB_004af63d
    LEA EAX,[ECX + EBX*0x1]             ; 004af626
    MOV DL,byte ptr [EAX + -0x1]        ; 004af629
        ;   Label: LAB_004af629
    INC DL                              ; 004af62c
    AND EDX,0xff                        ; 004af62e
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004af634 | g_CharacterClassificationTable
    JNZ 0x004af6a1                      ; 004af63b
        ;   XREF to: 004af6a1 (CONDITIONAL_JUMP)  ; LAB_004af6a1
    LEA EAX,[EBX + EDI*0x1]             ; 004af63d
        ;   Label: LAB_004af63d
    MOV byte ptr [EAX],0x0              ; 004af640
    LEA EAX,[EBX + 0x1]                 ; 004af643
    MOV dword ptr [ESP + 0xa34],EAX     ; 004af646
    MOV AL,byte ptr [EBX]               ; 004af64d
        ;   Label: LAB_004af64d
    INC AL                              ; 004af64f
    AND EAX,0xff                        ; 004af651
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004af656 | g_CharacterClassificationTable
    JZ 0x004af6a9                       ; 004af65d
        ;   XREF to: 004af6a9 (CONDITIONAL_JUMP)  ; LAB_004af6a9
    PUSH EDI                            ; 004af65f
    MOV EDX,dword ptr [ESP + 0xa38]     ; 004af660
    PUSH EDX                            ; 004af667
    PUSH EBX                            ; 004af668
    DEC EDI                             ; 004af669
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004af66a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004af66f
    JMP 0x004af64d                      ; 004af672
        ;   XREF to: 004af64d (UNCONDITIONAL_JUMP)  ; LAB_004af64d
    MOV ESI,0x62576a                    ; 004af674 | = "Error parsing isFacing parameters."
        ;   Label: LAB_004af674
    MOV EDI,0x2d0a460                   ; 004af679 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af67e | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af67f | = "Error parsing isFacing parameters." | s_ror_parsing_isFacing_parameters._0062576c
        ;   Label: LAB_004af67f
    MOV byte ptr [EDI],AL               ; 004af681 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af683
    JZ 0x004af697                       ; 004af685
        ;   XREF to: 004af697 (CONDITIONAL_JUMP)  ; LAB_004af697
    MOV AL,byte ptr [ESI + 0x1]         ; 004af687 | s_rror_parsing_isFacing_parameters_0062576b | s_or_parsing_isFacing_parameters._0062576d
    ADD ESI,0x2                         ; 004af68a
    MOV byte ptr [EDI + 0x1],AL         ; 004af68d | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af690
    CMP AL,0x0                          ; 004af693
    JNZ 0x004af67f                      ; 004af695
        ;   XREF to: 004af67f (CONDITIONAL_JUMP)  ; LAB_004af67f
    POP EDI                             ; 004af697
        ;   Label: LAB_004af697
    MOV EAX,EBX                         ; 004af698
    MOV ESP,EBP                         ; 004af69a
    POP EBP                             ; 004af69c
    POP EDI                             ; 004af69d
    POP ESI                             ; 004af69e
    POP EBX                             ; 004af69f
    RET                                 ; 004af6a0
    DEC EDI                             ; 004af6a1
        ;   Label: LAB_004af6a1
    DEC EAX                             ; 004af6a2
    TEST EDI,EDI                        ; 004af6a3
    JG 0x004af629                       ; 004af6a5
        ;   XREF to: 004af629 (CONDITIONAL_JUMP)  ; LAB_004af629
    JMP 0x004af63d                      ; 004af6a7
        ;   XREF to: 004af63d (UNCONDITIONAL_JUMP)  ; LAB_004af63d
    LEA EDI,[ESP + 0x5bc]               ; 004af6a9
        ;   Label: LAB_004af6a9
    LEA EBX,[ESP + 0x5bc]               ; 004af6b0
    SUB ECX,ECX                         ; 004af6b7
    DEC ECX                             ; 004af6b9
    XOR EAX,EAX                         ; 004af6ba
    SCASB.REPNE ES:EDI                  ; 004af6bc
    NOT ECX                             ; 004af6be
    DEC ECX                             ; 004af6c0
    MOV EDI,ECX                         ; 004af6c1
    TEST ECX,ECX                        ; 004af6c3
    JLE 0x004af6e4                      ; 004af6c5
        ;   XREF to: 004af6e4 (CONDITIONAL_JUMP)  ; LAB_004af6e4
    LEA EAX,[ESP + 0x5bc]               ; 004af6c7
    ADD EAX,ECX                         ; 004af6ce
    MOV DL,byte ptr [EAX + -0x1]        ; 004af6d0
        ;   Label: LAB_004af6d0
    INC DL                              ; 004af6d3
    AND EDX,0xff                        ; 004af6d5
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004af6db | g_CharacterClassificationTable
    JNZ 0x004af71b                      ; 004af6e2
        ;   XREF to: 004af71b (CONDITIONAL_JUMP)  ; LAB_004af71b
    LEA EAX,[EBX + EDI*0x1]             ; 004af6e4
        ;   Label: LAB_004af6e4
    MOV byte ptr [EAX],0x0              ; 004af6e7
    LEA EAX,[EBX + 0x1]                 ; 004af6ea
    MOV dword ptr [ESP + 0xa38],EAX     ; 004af6ed
    MOV AL,byte ptr [EBX]               ; 004af6f4
        ;   Label: LAB_004af6f4
    INC AL                              ; 004af6f6
    AND EAX,0xff                        ; 004af6f8
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004af6fd | g_CharacterClassificationTable
    JZ 0x004af723                       ; 004af704
        ;   XREF to: 004af723 (CONDITIONAL_JUMP)  ; LAB_004af723
    PUSH EDI                            ; 004af706
    MOV EAX,dword ptr [ESP + 0xa3c]     ; 004af707
    PUSH EAX                            ; 004af70e
    PUSH EBX                            ; 004af70f
    DEC EDI                             ; 004af710
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004af711
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004af716
    JMP 0x004af6f4                      ; 004af719
        ;   XREF to: 004af6f4 (UNCONDITIONAL_JUMP)  ; LAB_004af6f4
    DEC EDI                             ; 004af71b
        ;   Label: LAB_004af71b
    DEC EAX                             ; 004af71c
    TEST EDI,EDI                        ; 004af71d
    JG 0x004af6d0                       ; 004af71f
        ;   XREF to: 004af6d0 (CONDITIONAL_JUMP)  ; LAB_004af6d0
    JMP 0x004af6e4                      ; 004af721
        ;   XREF to: 004af6e4 (UNCONDITIONAL_JUMP)  ; LAB_004af6e4
    PUSH 0x821ff8                       ; 004af723 | g_CDemonActorClassInfo
        ;   Label: LAB_004af723
    MOV ECX,dword ptr [0x00822030]      ; 004af728 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 004af72e
    LEA EAX,[ESP + 0x8e4]               ; 004af72f
    PUSH EAX                            ; 004af736
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004af737
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004af73c
    MOV EDI,EAX                         ; 004af73f
    TEST EAX,EAX                        ; 004af741
    JNZ 0x004af751                      ; 004af743
        ;   XREF to: 004af751 (CONDITIONAL_JUMP)  ; LAB_004af751
    MOV EAX,0xffffffff                  ; 004af745
        ;   Label: LAB_004af745
    MOV ESP,EBP                         ; 004af74a
    POP EBP                             ; 004af74c
    POP EDI                             ; 004af74d
    POP ESI                             ; 004af74e
    POP EBX                             ; 004af74f
    RET                                 ; 004af750
    PUSH 0x821ff8                       ; 004af751 | g_CDemonActorClassInfo
        ;   Label: LAB_004af751
    MOV EBX,dword ptr [0x00822030]      ; 004af756 | g_CDemonActorClassInfo.name_hash
    PUSH EBX                            ; 004af75c
    LEA EAX,[ESP + 0x5c4]               ; 004af75d
    PUSH EAX                            ; 004af764
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004af765
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004af76a
    MOV EBX,EAX                         ; 004af76d
    TEST EAX,EAX                        ; 004af76f
    JZ 0x004af745                       ; 004af771
        ;   XREF to: 004af745 (CONDITIONAL_JUMP)  ; LAB_004af745
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004af773
    MOV EDX,dword ptr [ESI]             ; 004af77a
    ADD EDX,EAX                         ; 004af77c
    MOV ECX,0x42340000                  ; 004af77e
    MOV dword ptr [ESI],EDX             ; 004af783
    MOV dword ptr [ESP + 0x8],ECX       ; 004af785
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af789
    ADD EAX,dword ptr [ESI]             ; 004af78c
    CMP byte ptr [EAX],0x2c             ; 004af78e
    JZ 0x004af7c4                       ; 004af791
        ;   XREF to: 004af7c4 (CONDITIONAL_JUMP)  ; LAB_004af7c4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af793
        ;   Label: LAB_004af793
    MOV ECX,dword ptr [ESI]             ; 004af796
    ADD EAX,ECX                         ; 004af798
    CMP byte ptr [EAX],0x29             ; 004af79a
    JNZ 0x004af886                      ; 004af79d
        ;   XREF to: 004af886 (CONDITIONAL_JUMP)  ; LAB_004af886
    LEA EAX,[ECX + 0x1]                 ; 004af7a3
    MOV EDX,dword ptr [0x0065d95c]      ; 004af7a6 | g_ActorNameSentinel
    MOV dword ptr [ESI],EAX             ; 004af7ac
    CMP EDI,EDX                         ; 004af7ae
    JNZ 0x004af8b6                      ; 004af7b0
        ;   XREF to: 004af8b6 (CONDITIONAL_JUMP)  ; LAB_004af8b6
    XOR EDI,EDI                         ; 004af7b6
        ;   Label: LAB_004af7b6
    MOV dword ptr [ESP + 0x9b0],EDI     ; 004af7b8
    JMP 0x004ae5e4                      ; 004af7bf
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    LEA EAX,[ESP + 0xa30]               ; 004af7c4
        ;   Label: LAB_004af7c4
    MOV ECX,0xffffffff                  ; 004af7cb
    PUSH EAX                            ; 004af7d0
    LEA EAX,[ESP + 0xc]                 ; 004af7d1
    MOV dword ptr [ESP + 0xa34],ECX     ; 004af7d5
    PUSH EAX                            ; 004af7dc
    MOV EDX,dword ptr [ESI]             ; 004af7dd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af7df
    PUSH 0x62578d                       ; 004af7e2 | = ",%f %n"
    ADD EAX,EDX                         ; 004af7e7
    PUSH EAX                            ; 004af7e9
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af7ea
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004af7ef
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004af7f2
    CMP ECX,0x2                         ; 004af7f9
    JL 0x004af826                       ; 004af7fc
        ;   XREF to: 004af826 (CONDITIONAL_JUMP)  ; LAB_004af826
    FLD float ptr [ESP + 0x8]           ; 004af7fe
    FLDZ                                ; 004af802
    FXCH                                ; 004af804
    FSTP double ptr [ESP]               ; 004af806
    FCOMP double ptr [ESP]              ; 004af809
    FNSTSW AX                           ; 004af80c
    SAHF                                ; 004af80e
    JA 0x004af856                       ; 004af80f
        ;   XREF to: 004af856 (CONDITIONAL_JUMP)  ; LAB_004af856
    FLD double ptr [ESP]                ; 004af811
    FCOMP double ptr [0x00625a69]       ; 004af814 | DOUBLE_00625a69
    FNSTSW AX                           ; 004af81a
    SAHF                                ; 004af81c
    JA 0x004af856                       ; 004af81d
        ;   XREF to: 004af856 (CONDITIONAL_JUMP)  ; LAB_004af856
    ADD dword ptr [ESI],ECX             ; 004af81f
    JMP 0x004af793                      ; 004af821
        ;   XREF to: 004af793 (UNCONDITIONAL_JUMP)  ; LAB_004af793
    MOV ESI,0x625794                    ; 004af826 | = "Error parsing isFacing parameters."
        ;   Label: LAB_004af826
    MOV EDI,0x2d0a460                   ; 004af82b | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af830 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af831 | = "Error parsing isFacing parameters." | s_ror_parsing_isFacing_parameters._00625796
        ;   Label: LAB_004af831
    MOV byte ptr [EDI],AL               ; 004af833 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af835
    JZ 0x004af849                       ; 004af837
        ;   XREF to: 004af849 (CONDITIONAL_JUMP)  ; LAB_004af849
    MOV AL,byte ptr [ESI + 0x1]         ; 004af839 | s_rror_parsing_isFacing_parameters_00625795 | s_or_parsing_isFacing_parameters._00625797
    ADD ESI,0x2                         ; 004af83c
    MOV byte ptr [EDI + 0x1],AL         ; 004af83f | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af842
    CMP AL,0x0                          ; 004af845
    JNZ 0x004af831                      ; 004af847
        ;   XREF to: 004af831 (CONDITIONAL_JUMP)  ; LAB_004af831
    POP EDI                             ; 004af849
        ;   Label: LAB_004af849
    MOV EAX,0xffffffff                  ; 004af84a
    MOV ESP,EBP                         ; 004af84f
    POP EBP                             ; 004af851
    POP EDI                             ; 004af852
    POP ESI                             ; 004af853
    POP EBX                             ; 004af854
    RET                                 ; 004af855
    MOV ESI,0x6257b7                    ; 004af856 | = "isFacing() angle must be in range 0....."
        ;   Label: LAB_004af856
    MOV EDI,0x2d0a460                   ; 004af85b | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af860 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af861 | = "isFacing() angle must be in range 0....." | s_Facing()_angle_must_be_in_range_0_006257b9
        ;   Label: LAB_004af861
    MOV byte ptr [EDI],AL               ; 004af863 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af865
    JZ 0x004af879                       ; 004af867
        ;   XREF to: 004af879 (CONDITIONAL_JUMP)  ; LAB_004af879
    MOV AL,byte ptr [ESI + 0x1]         ; 004af869 | s_sFacing()_angle_must_be_in_range_006257b8 | s_acing()_angle_must_be_in_range_0_006257ba
    ADD ESI,0x2                         ; 004af86c
    MOV byte ptr [EDI + 0x1],AL         ; 004af86f | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af872
    CMP AL,0x0                          ; 004af875
    JNZ 0x004af861                      ; 004af877
        ;   XREF to: 004af861 (CONDITIONAL_JUMP)  ; LAB_004af861
    POP EDI                             ; 004af879
        ;   Label: LAB_004af879
    MOV EAX,0xffffffff                  ; 004af87a
    MOV ESP,EBP                         ; 004af87f
    POP EBP                             ; 004af881
    POP EDI                             ; 004af882
    POP ESI                             ; 004af883
    POP EBX                             ; 004af884
    RET                                 ; 004af885
    MOV ESI,0x6257e1                    ; 004af886 | = "Error parsing isFacing parameters."
        ;   Label: LAB_004af886
    MOV EDI,0x2d0a460                   ; 004af88b | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af890 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af891 | = "Error parsing isFacing parameters." | s_ror_parsing_isFacing_parameters._006257e3
        ;   Label: LAB_004af891
    MOV byte ptr [EDI],AL               ; 004af893 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af895
    JZ 0x004af8a9                       ; 004af897
        ;   XREF to: 004af8a9 (CONDITIONAL_JUMP)  ; LAB_004af8a9
    MOV AL,byte ptr [ESI + 0x1]         ; 004af899 | s_rror_parsing_isFacing_parameters_006257e2 | s_or_parsing_isFacing_parameters._006257e4
    ADD ESI,0x2                         ; 004af89c
    MOV byte ptr [EDI + 0x1],AL         ; 004af89f | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af8a2
    CMP AL,0x0                          ; 004af8a5
    JNZ 0x004af891                      ; 004af8a7
        ;   XREF to: 004af891 (CONDITIONAL_JUMP)  ; LAB_004af891
    POP EDI                             ; 004af8a9
        ;   Label: LAB_004af8a9
    MOV EAX,0xffffffff                  ; 004af8aa
    MOV ESP,EBP                         ; 004af8af
    POP EBP                             ; 004af8b1
    POP EDI                             ; 004af8b2
    POP ESI                             ; 004af8b3
    POP EBX                             ; 004af8b4
    RET                                 ; 004af8b5
    CMP EBX,EDX                         ; 004af8b6
        ;   Label: LAB_004af8b6
    JZ 0x004af7b6                       ; 004af8b8
        ;   XREF to: 004af7b6 (CONDITIONAL_JUMP)  ; LAB_004af7b6
    ADD EBX,0x20                        ; 004af8be
    PUSH EBX                            ; 004af8c1
    LEA EAX,[ESP + 0x984]               ; 004af8c2
    PUSH EAX                            ; 004af8c9
    PUSH EDI                            ; 004af8ca
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004af8cb
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004af8d0
    LEA EAX,[ESP + 0x980]               ; 004af8d3
    PUSH EAX                            ; 004af8da
    LEA EAX,[ESP + 0x99c]               ; 004af8db
    XOR EBX,EBX                         ; 004af8e2
    PUSH EAX                            ; 004af8e4
    MOV dword ptr [ESP + 0x98c],EBX     ; 004af8e5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004af8ec
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004af8f1
    FABS                                ; 004af8f4
    ADD ESP,0x8                         ; 004af8f6
    FLD float ptr [ESP + 0x8]           ; 004af8f9
    FMUL double ptr [0x00625a71]        ; 004af8fd | DOUBLE_00625a71
    FMUL double ptr [0x00625a79]        ; 004af903 | DOUBLE_00625a79
    FCOMPP                              ; 004af909
    FNSTSW AX                           ; 004af90b
    SAHF                                ; 004af90d
    JC 0x004af91a                       ; 004af90e
        ;   XREF to: 004af91a (CONDITIONAL_JUMP)  ; LAB_004af91a
    MOV EAX,0x1                         ; 004af910
    JMP 0x004ae5dd                      ; 004af915
        ;   XREF to: 004ae5dd (UNCONDITIONAL_JUMP)  ; LAB_004ae5dd
    XOR EAX,EAX                         ; 004af91a
        ;   Label: LAB_004af91a
    JMP 0x004ae5dd                      ; 004af91c
        ;   XREF to: 004ae5dd (UNCONDITIONAL_JUMP)  ; LAB_004ae5dd
    PUSH 0x625804                       ; 004af921 | = "isLightOn"
        ;   Label: LAB_004af921
    LEA EAX,[ESP + 0x944]               ; 004af926
    PUSH EAX                            ; 004af92d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004af92e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004af933
    TEST EAX,EAX                        ; 004af936
    JNZ 0x004afa53                      ; 004af938
        ;   XREF to: 004afa53 (CONDITIONAL_JUMP)  ; LAB_004afa53
    MOV dword ptr [ESP + 0xa3c],0xffffffff ; 004af93e
    LEA EAX,[ESP + 0xa3c]               ; 004af949
    PUSH EAX                            ; 004af950
    LEA EAX,[ESP + 0x87c]               ; 004af951
    PUSH EAX                            ; 004af958
    MOV EAX,0x62580e                    ; 004af959 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 004af95e
    PUSH EAX                            ; 004af960 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af961
    ADD EAX,EDX                         ; 004af964
    PUSH EAX                            ; 004af966
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004af967
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004af96c
    CMP dword ptr [ESP + 0xa3c],0x3     ; 004af96f
    JL 0x004af9d9                       ; 004af977
        ;   XREF to: 004af9d9 (CONDITIONAL_JUMP)  ; LAB_004af9d9
    LEA EAX,[ESP + 0xa48]               ; 004af979
    PUSH EAX                            ; 004af980
    LEA EAX,[ESP + 0xa48]               ; 004af981
    PUSH EAX                            ; 004af988
    LEA EAX,[ESP + 0x880]               ; 004af989
    PUSH EAX                            ; 004af990
    MOV EBX,dword ptr [0x006810c8]      ; 004af991 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 004af997 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10 ; 004af998
        ;   XREF to: 00570f10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 004af99d
    CMP dword ptr [ESP + 0xa44],0x0     ; 004af9a0
    JZ 0x004afa09                       ; 004af9a8
        ;   XREF to: 004afa09 (CONDITIONAL_JUMP)  ; LAB_004afa09
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004af9aa
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 004af9b1
    SETNZ AL                            ; 004af9b8
    AND EAX,0xff                        ; 004af9bb
    MOV ECX,dword ptr [ESI]             ; 004af9c0
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004af9c2
    MOV EAX,dword ptr [ESP + 0xa3c]     ; 004af9c9
    ADD ECX,EAX                         ; 004af9d0
    MOV dword ptr [ESI],ECX             ; 004af9d2
    JMP 0x004ae5e4                      ; 004af9d4
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x62581c                    ; 004af9d9 | = "Error parsing isLightOn parameters."
        ;   Label: LAB_004af9d9
    MOV EDI,0x2d0a460                   ; 004af9de | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004af9e3 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004af9e4 | = "Error parsing isLightOn parameters." | s_ror_parsing_isLightOn_parameters_0062581e
        ;   Label: LAB_004af9e4
    MOV byte ptr [EDI],AL               ; 004af9e6 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004af9e8
    JZ 0x004af9fc                       ; 004af9ea
        ;   XREF to: 004af9fc (CONDITIONAL_JUMP)  ; LAB_004af9fc
    MOV AL,byte ptr [ESI + 0x1]         ; 004af9ec | s_rror_parsing_isLightOn_parameter_0062581d | s_or_parsing_isLightOn_parameters._0062581f
    ADD ESI,0x2                         ; 004af9ef
    MOV byte ptr [EDI + 0x1],AL         ; 004af9f2 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004af9f5
    CMP AL,0x0                          ; 004af9f8
    JNZ 0x004af9e4                      ; 004af9fa
        ;   XREF to: 004af9e4 (CONDITIONAL_JUMP)  ; LAB_004af9e4
    POP EDI                             ; 004af9fc
        ;   Label: LAB_004af9fc
    MOV EAX,0xffffffff                  ; 004af9fd
    MOV ESP,EBP                         ; 004afa02
    POP EBP                             ; 004afa04
    POP EDI                             ; 004afa05
    POP ESI                             ; 004afa06
    POP EBX                             ; 004afa07
    RET                                 ; 004afa08
    LEA EAX,[ESP + 0x878]               ; 004afa09
        ;   Label: LAB_004afa09
    PUSH EAX                            ; 004afa10
    MOV EAX,0x625840                    ; 004afa11 | = "Spotlight %s doesn't exist."
    PUSH EAX                            ; 004afa16 | = "Spotlight %s doesn't exist."
    LEA EAX,[ESP + 0x14]                ; 004afa17
    PUSH EAX                            ; 004afa1b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004afa1c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004afa21
    LEA ESI,[ESP + 0xc]                 ; 004afa24
    MOV EDI,0x2d0a460                   ; 004afa28 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004afa2d | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004afa2e
        ;   Label: LAB_004afa2e
    MOV byte ptr [EDI],AL               ; 004afa30 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004afa32
    JZ 0x004afa46                       ; 004afa34
        ;   XREF to: 004afa46 (CONDITIONAL_JUMP)  ; LAB_004afa46
    MOV AL,byte ptr [ESI + 0x1]         ; 004afa36
    ADD ESI,0x2                         ; 004afa39
    MOV byte ptr [EDI + 0x1],AL         ; 004afa3c | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004afa3f
    CMP AL,0x0                          ; 004afa42
    JNZ 0x004afa2e                      ; 004afa44
        ;   XREF to: 004afa2e (CONDITIONAL_JUMP)  ; LAB_004afa2e
    POP EDI                             ; 004afa46
        ;   Label: LAB_004afa46
    MOV EAX,0xffffffff                  ; 004afa47
    MOV ESP,EBP                         ; 004afa4c
    POP EBP                             ; 004afa4e
    POP EDI                             ; 004afa4f
    POP ESI                             ; 004afa50
    POP EBX                             ; 004afa51
    RET                                 ; 004afa52
    PUSH 0x62585c                       ; 004afa53 | = "isNudityEnabled"
        ;   Label: LAB_004afa53
    LEA EAX,[ESP + 0x944]               ; 004afa58
    PUSH EAX                            ; 004afa5f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004afa60
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004afa65
    TEST EAX,EAX                        ; 004afa68
    JNZ 0x004afaf8                      ; 004afa6a
        ;   XREF to: 004afaf8 (CONDITIONAL_JUMP)  ; LAB_004afaf8
    MOV dword ptr [ESP + 0xa4c],0xffffffff ; 004afa70
    LEA EAX,[ESP + 0xa4c]               ; 004afa7b
    PUSH EAX                            ; 004afa82
    MOV EAX,0x62586c                    ; 004afa83 | = " ( )%n"
    MOV EDX,dword ptr [ESI]             ; 004afa88
    PUSH EAX                            ; 004afa8a | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004afa8b
    ADD EAX,EDX                         ; 004afa8e
    PUSH EAX                            ; 004afa90
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004afa91
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004afa96
    MOV ECX,dword ptr [ESP + 0xa4c]     ; 004afa99
    CMP ECX,0x2                         ; 004afaa0
    JL 0x004afac8                       ; 004afaa3
        ;   XREF to: 004afac8 (CONDITIONAL_JUMP)  ; LAB_004afac8
    MOV EAX,[0x0067b654]                ; 004afaa5 | g_CGamePtr
    CMP dword ptr [EAX + 0x18],0x0      ; 004afaaa | g_CGameInstance.nudity_flag
    SETNZ AL                            ; 004afaae
    MOV EDI,dword ptr [ESI]             ; 004afab1
    AND EAX,0xff                        ; 004afab3
    ADD EDI,ECX                         ; 004afab8
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004afaba
    MOV dword ptr [ESI],EDI             ; 004afac1
    JMP 0x004ae5e4                      ; 004afac3
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x625873                    ; 004afac8 | = "Error parsing isNudityEnabled()."
        ;   Label: LAB_004afac8
    MOV EDI,0x2d0a460                   ; 004afacd | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004afad2 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004afad3 | = "Error parsing isNudityEnabled()." | s_ror_parsing_isNudityEnabled()._00625875
        ;   Label: LAB_004afad3
    MOV byte ptr [EDI],AL               ; 004afad5 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004afad7
    JZ 0x004afaeb                       ; 004afad9
        ;   XREF to: 004afaeb (CONDITIONAL_JUMP)  ; LAB_004afaeb
    MOV AL,byte ptr [ESI + 0x1]         ; 004afadb | s_rror_parsing_isNudityEnabled()._00625874 | s_or_parsing_isNudityEnabled()._00625876
    ADD ESI,0x2                         ; 004afade
    MOV byte ptr [EDI + 0x1],AL         ; 004afae1 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004afae4
    CMP AL,0x0                          ; 004afae7
    JNZ 0x004afad3                      ; 004afae9
        ;   XREF to: 004afad3 (CONDITIONAL_JUMP)  ; LAB_004afad3
    POP EDI                             ; 004afaeb
        ;   Label: LAB_004afaeb
    MOV EAX,0xffffffff                  ; 004afaec
    MOV ESP,EBP                         ; 004afaf1
    POP EBP                             ; 004afaf3
    POP EDI                             ; 004afaf4
    POP ESI                             ; 004afaf5
    POP EBX                             ; 004afaf6
    RET                                 ; 004afaf7
    PUSH 0x625894                       ; 004afaf8 | = "isSfxActive"
        ;   Label: LAB_004afaf8
    LEA EAX,[ESP + 0x944]               ; 004afafd
    PUSH EAX                            ; 004afb04
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004afb05
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004afb0a
    TEST EAX,EAX                        ; 004afb0d
    JNZ 0x004afc2e                      ; 004afb0f
        ;   XREF to: 004afc2e (CONDITIONAL_JUMP)  ; LAB_004afc2e
    LEA EAX,[ESP + 0xa50]               ; 004afb15
    MOV ECX,0xffffffff                  ; 004afb1c
    PUSH EAX                            ; 004afb21
    LEA EAX,[ESP + 0x304]               ; 004afb22
    MOV dword ptr [ESP + 0xa54],ECX     ; 004afb29
    PUSH EAX                            ; 004afb30
    MOV EAX,0x6258a0                    ; 004afb31 | = " ( %[^ )] )%n"
    MOV EBX,dword ptr [ESI]             ; 004afb36
    PUSH EAX                            ; 004afb38 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004afb39
    ADD EAX,EBX                         ; 004afb3c
    PUSH EAX                            ; 004afb3e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004afb3f
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004afb44
    CMP dword ptr [ESP + 0xa50],0x3     ; 004afb47
    JL 0x004afbb8                       ; 004afb4f
        ;   XREF to: 004afbb8 (CONDITIONAL_JUMP)  ; LAB_004afbb8
    LEA EBX,[ESP + 0x300]               ; 004afb51
    MOV EDI,EBX                         ; 004afb58
    SUB ECX,ECX                         ; 004afb5a
    DEC ECX                             ; 004afb5c
    XOR EAX,EAX                         ; 004afb5d
    SCASB.REPNE ES:EDI                  ; 004afb5f
    NOT ECX                             ; 004afb61
    DEC ECX                             ; 004afb63
    MOV EDI,ECX                         ; 004afb64
    TEST ECX,ECX                        ; 004afb66
    JLE 0x004afb81                      ; 004afb68
        ;   XREF to: 004afb81 (CONDITIONAL_JUMP)  ; LAB_004afb81
    LEA EAX,[ECX + EBX*0x1]             ; 004afb6a
    MOV DL,byte ptr [EAX + -0x1]        ; 004afb6d
        ;   Label: LAB_004afb6d
    INC DL                              ; 004afb70
    AND EDX,0xff                        ; 004afb72
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004afb78 | g_CharacterClassificationTable
    JNZ 0x004afbe8                      ; 004afb7f
        ;   XREF to: 004afbe8 (CONDITIONAL_JUMP)  ; LAB_004afbe8
    LEA EAX,[EBX + EDI*0x1]             ; 004afb81
        ;   Label: LAB_004afb81
    MOV byte ptr [EAX],0x0              ; 004afb84
    LEA EAX,[EBX + 0x1]                 ; 004afb87
    MOV dword ptr [ESP + 0xa54],EAX     ; 004afb8a
    MOV AL,byte ptr [EBX]               ; 004afb91
        ;   Label: LAB_004afb91
    INC AL                              ; 004afb93
    AND EAX,0xff                        ; 004afb95
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004afb9a | g_CharacterClassificationTable
    JZ 0x004afbf4                       ; 004afba1
        ;   XREF to: 004afbf4 (CONDITIONAL_JUMP)  ; LAB_004afbf4
    PUSH EDI                            ; 004afba3
    MOV EAX,dword ptr [ESP + 0xa58]     ; 004afba4
    PUSH EAX                            ; 004afbab
    PUSH EBX                            ; 004afbac
    DEC EDI                             ; 004afbad
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004afbae
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004afbb3
    JMP 0x004afb91                      ; 004afbb6
        ;   XREF to: 004afb91 (UNCONDITIONAL_JUMP)  ; LAB_004afb91
    MOV ESI,0x6258ae                    ; 004afbb8 | = "Error parsing isSfxActive parameters."
        ;   Label: LAB_004afbb8
    MOV EDI,0x2d0a460                   ; 004afbbd | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004afbc2 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004afbc3 | = "Error parsing isSfxActive parameters." | s_ror_parsing_isSfxActive_paramete_006258b0
        ;   Label: LAB_004afbc3
    MOV byte ptr [EDI],AL               ; 004afbc5 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004afbc7
    JZ 0x004afbdb                       ; 004afbc9
        ;   XREF to: 004afbdb (CONDITIONAL_JUMP)  ; LAB_004afbdb
    MOV AL,byte ptr [ESI + 0x1]         ; 004afbcb | s_rror_parsing_isSfxActive_paramet_006258af | s_or_parsing_isSfxActive_parameter_006258b1
    ADD ESI,0x2                         ; 004afbce
    MOV byte ptr [EDI + 0x1],AL         ; 004afbd1 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004afbd4
    CMP AL,0x0                          ; 004afbd7
    JNZ 0x004afbc3                      ; 004afbd9
        ;   XREF to: 004afbc3 (CONDITIONAL_JUMP)  ; LAB_004afbc3
    POP EDI                             ; 004afbdb
        ;   Label: LAB_004afbdb
    MOV EAX,0xffffffff                  ; 004afbdc
    MOV ESP,EBP                         ; 004afbe1
    POP EBP                             ; 004afbe3
    POP EDI                             ; 004afbe4
    POP ESI                             ; 004afbe5
    POP EBX                             ; 004afbe6
    RET                                 ; 004afbe7
    DEC EDI                             ; 004afbe8
        ;   Label: LAB_004afbe8
    DEC EAX                             ; 004afbe9
    TEST EDI,EDI                        ; 004afbea
    JG 0x004afb6d                       ; 004afbec
        ;   XREF to: 004afb6d (CONDITIONAL_JUMP)  ; LAB_004afb6d
    JMP 0x004afb81                      ; 004afbf2
        ;   XREF to: 004afb81 (UNCONDITIONAL_JUMP)  ; LAB_004afb81
    XOR EAX,EAX                         ; 004afbf4
        ;   Label: LAB_004afbf4
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004afbf6
    LEA EAX,[ESP + 0x300]               ; 004afbfd
    PUSH EAX                            ; 004afc04
    MOV EDX,dword ptr [EBP + 0x14]      ; 004afc05
    PUSH EDX                            ; 004afc08
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40 ; 004afc09
        ;   XREF to: 004b0c40 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004afc0e
    TEST EAX,EAX                        ; 004afc11
    JZ 0x004afc20                       ; 004afc13
        ;   XREF to: 004afc20 (CONDITIONAL_JUMP)  ; LAB_004afc20
    MOV dword ptr [ESP + 0x9b0],0x1     ; 004afc15
    MOV EAX,dword ptr [ESP + 0xa50]     ; 004afc20
        ;   Label: LAB_004afc20
    ADD dword ptr [ESI],EAX             ; 004afc27
    JMP 0x004ae5e4                      ; 004afc29
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x6258d4                       ; 004afc2e | = "isTalking"
        ;   Label: LAB_004afc2e
    LEA EAX,[ESP + 0x944]               ; 004afc33
    PUSH EAX                            ; 004afc3a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004afc3b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004afc40
    TEST EAX,EAX                        ; 004afc43
    JNZ 0x004afd1c                      ; 004afc45
        ;   XREF to: 004afd1c (CONDITIONAL_JUMP)  ; LAB_004afd1c
    LEA EAX,[ESP + 0xa58]               ; 004afc4b
    MOV EDI,0xffffffff                  ; 004afc52
    PUSH EAX                            ; 004afc57
    LEA EAX,[ESP + 0x55c]               ; 004afc58
    MOV dword ptr [ESP + 0xa5c],EDI     ; 004afc5f
    PUSH EAX                            ; 004afc66
    MOV EAX,0x6258de                    ; 004afc67 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 004afc6c
    PUSH EAX                            ; 004afc6e | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004afc6f
    ADD EAX,EDX                         ; 004afc72
    PUSH EAX                            ; 004afc74
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004afc75
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004afc7a
    CMP dword ptr [ESP + 0xa58],0x3     ; 004afc7d
    JL 0x004afcc9                       ; 004afc85
        ;   XREF to: 004afcc9 (CONDITIONAL_JUMP)  ; LAB_004afcc9
    MOV EAX,0x823c14                    ; 004afc87 | g_CCharacterClassInfo
    PUSH EAX                            ; 004afc8c | g_CCharacterClassInfo
    MOV EBX,dword ptr [0x00823c4c]      ; 004afc8d | g_CCharacterClassInfo.name_hash
    PUSH EBX                            ; 004afc93
    LEA EAX,[ESP + 0x560]               ; 004afc94
    PUSH EAX                            ; 004afc9b
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004afc9c
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004afca1
    TEST EAX,EAX                        ; 004afca4
    JZ 0x004afcf9                       ; 004afca6
        ;   XREF to: 004afcf9 (CONDITIONAL_JUMP)  ; LAB_004afcf9
    MOV EDI,dword ptr [0x0065d95c]      ; 004afca8 | g_ActorNameSentinel
    CMP EAX,EDI                         ; 004afcae
    JNZ 0x004afd02                      ; 004afcb0
        ;   XREF to: 004afd02 (CONDITIONAL_JUMP)  ; LAB_004afd02
    XOR EAX,EDI                         ; 004afcb2
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004afcb4
        ;   Label: LAB_004afcb4
    MOV EAX,dword ptr [ESP + 0xa58]     ; 004afcbb
    ADD dword ptr [ESI],EAX             ; 004afcc2
    JMP 0x004ae5e4                      ; 004afcc4
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x6258ec                    ; 004afcc9 | = "Error parsing isTalking parameters."
        ;   Label: LAB_004afcc9
    MOV EDI,0x2d0a460                   ; 004afcce | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004afcd3 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004afcd4 | = "Error parsing isTalking parameters." | s_ror_parsing_isTalking_parameters_006258ee
        ;   Label: LAB_004afcd4
    MOV byte ptr [EDI],AL               ; 004afcd6 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004afcd8
    JZ 0x004afcec                       ; 004afcda
        ;   XREF to: 004afcec (CONDITIONAL_JUMP)  ; LAB_004afcec
    MOV AL,byte ptr [ESI + 0x1]         ; 004afcdc | s_rror_parsing_isTalking_parameter_006258ed | s_or_parsing_isTalking_parameters._006258ef
    ADD ESI,0x2                         ; 004afcdf
    MOV byte ptr [EDI + 0x1],AL         ; 004afce2 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004afce5
    CMP AL,0x0                          ; 004afce8
    JNZ 0x004afcd4                      ; 004afcea
        ;   XREF to: 004afcd4 (CONDITIONAL_JUMP)  ; LAB_004afcd4
    POP EDI                             ; 004afcec
        ;   Label: LAB_004afcec
    MOV EAX,0xffffffff                  ; 004afced
    MOV ESP,EBP                         ; 004afcf2
    POP EBP                             ; 004afcf4
    POP EDI                             ; 004afcf5
    POP ESI                             ; 004afcf6
    POP EBX                             ; 004afcf7
    RET                                 ; 004afcf8
    MOV EAX,EDI                         ; 004afcf9
        ;   Label: LAB_004afcf9
    MOV ESP,EBP                         ; 004afcfb
    POP EBP                             ; 004afcfd
    POP EDI                             ; 004afcfe
    POP ESI                             ; 004afcff
    POP EBX                             ; 004afd00
    RET                                 ; 004afd01
    FLD float ptr [EAX + 0x2618]        ; 004afd02
        ;   Label: LAB_004afd02
    FLDZ                                ; 004afd08
    FCOMPP                              ; 004afd0a
    FNSTSW AX                           ; 004afd0c
    SAHF                                ; 004afd0e
    JNC 0x004afd18                      ; 004afd0f
        ;   XREF to: 004afd18 (CONDITIONAL_JUMP)  ; LAB_004afd18
    MOV EAX,0x1                         ; 004afd11
    JMP 0x004afcb4                      ; 004afd16
        ;   XREF to: 004afcb4 (UNCONDITIONAL_JUMP)  ; LAB_004afcb4
    XOR EAX,EAX                         ; 004afd18
        ;   Label: LAB_004afd18
    JMP 0x004afcb4                      ; 004afd1a
        ;   XREF to: 004afcb4 (UNCONDITIONAL_JUMP)  ; LAB_004afcb4
    PUSH 0x625910                       ; 004afd1c | = "isVictim"
        ;   Label: LAB_004afd1c
    LEA EAX,[ESP + 0x944]               ; 004afd21
    PUSH EAX                            ; 004afd28
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004afd29
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004afd2e
    TEST EAX,EAX                        ; 004afd31
    JNZ 0x004afeb9                      ; 004afd33
        ;   XREF to: 004afeb9 (CONDITIONAL_JUMP)  ; LAB_004afeb9
    LEA EAX,[ESP + 0xa5c]               ; 004afd39
    MOV ECX,0xffffffff                  ; 004afd40
    PUSH EAX                            ; 004afd45
    LEA EAX,[ESP + 0x688]               ; 004afd46
    MOV dword ptr [ESP + 0xa60],ECX     ; 004afd4d
    PUSH EAX                            ; 004afd54
    MOV EAX,0x625919                    ; 004afd55 | = " ( %[^ )] )%n"
    MOV EBX,dword ptr [ESI]             ; 004afd5a
    PUSH EAX                            ; 004afd5c | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004afd5d
    ADD EAX,EBX                         ; 004afd60
    PUSH EAX                            ; 004afd62
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004afd63
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004afd68
    CMP dword ptr [ESP + 0xa5c],0x3     ; 004afd6b
    JL 0x004afe16                       ; 004afd73
        ;   XREF to: 004afe16 (CONDITIONAL_JUMP)  ; LAB_004afe16
    MOV EAX,0x823c14                    ; 004afd79 | g_CCharacterClassInfo
    PUSH EAX                            ; 004afd7e | g_CCharacterClassInfo
    MOV EAX,[0x00823c4c]                ; 004afd7f | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 004afd84
    LEA EAX,[ESP + 0x68c]               ; 004afd85
    PUSH EAX                            ; 004afd8c
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004afd8d
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004afd92
    MOV dword ptr [ESP + 0x9dc],EAX     ; 004afd95
    TEST EAX,EAX                        ; 004afd9c
    JZ 0x004afe3a                       ; 004afd9e
        ;   XREF to: 004afe3a (CONDITIONAL_JUMP)  ; LAB_004afe3a
    XOR ECX,ECX                         ; 004afda4
    MOV EBX,dword ptr [0x0065d95c]      ; 004afda6 | g_ActorNameSentinel
    MOV dword ptr [ESP + 0x9b0],ECX     ; 004afdac
    CMP EAX,EBX                         ; 004afdb3
    JZ 0x004afeab                       ; 004afdb5
        ;   XREF to: 004afeab (CONDITIONAL_JUMP)  ; LAB_004afeab
    ADD EAX,0x20                        ; 004afdbb
    MOV dword ptr [ESP + 0xa60],EAX     ; 004afdbe
    LEA EAX,[ECX*0x4 + 0x0]             ; 004afdc5
    XOR EDI,EDI                         ; 004afdcc
    MOV dword ptr [ESP + 0x9d0],EAX     ; 004afdce
    MOV EAX,[0x006810c8]                ; 004afdd5 | g_CDemonSetPtr
        ;   Label: LAB_004afdd5
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 004afdda | g_CDemonSetInstance.enemy_count
    JGE 0x004afeab                      ; 004afde0
        ;   XREF to: 004afeab (CONDITIONAL_JUMP)  ; LAB_004afeab
    ADD EAX,dword ptr [ESP + 0x9d0]     ; 004afde6
    MOV EBX,dword ptr [EAX + 0x150fe0]  ; 004afded | DAT_03265258 | DAT_0326525c
    MOV EDX,dword ptr [ESP + 0x9dc]     ; 004afdf3
    CMP EDX,dword ptr [EBX + 0xbe3c]    ; 004afdfa
    JZ 0x004afe46                       ; 004afe00
        ;   XREF to: 004afe46 (CONDITIONAL_JUMP)  ; LAB_004afe46
    MOV EBX,dword ptr [ESP + 0x9d0]     ; 004afe02
        ;   Label: LAB_004afe02
    ADD EBX,0x4                         ; 004afe09
    INC EDI                             ; 004afe0c
    MOV dword ptr [ESP + 0x9d0],EBX     ; 004afe0d
    JMP 0x004afdd5                      ; 004afe14
        ;   XREF to: 004afdd5 (UNCONDITIONAL_JUMP)  ; LAB_004afdd5
    MOV ESI,0x625927                    ; 004afe16 | = "Error parsing isVictim parameters."
        ;   Label: LAB_004afe16
    MOV EDI,0x2d0a460                   ; 004afe1b | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004afe20 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004afe21 | = "Error parsing isVictim parameters." | s_ror_parsing_isVictim_parameters._00625929
        ;   Label: LAB_004afe21
    MOV byte ptr [EDI],AL               ; 004afe23 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004afe25
    JZ 0x004afe39                       ; 004afe27
        ;   XREF to: 004afe39 (CONDITIONAL_JUMP)  ; LAB_004afe39
    MOV AL,byte ptr [ESI + 0x1]         ; 004afe29 | s_rror_parsing_isVictim_parameters_00625928 | s_or_parsing_isVictim_parameters._0062592a
    ADD ESI,0x2                         ; 004afe2c
    MOV byte ptr [EDI + 0x1],AL         ; 004afe2f | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004afe32
    CMP AL,0x0                          ; 004afe35
    JNZ 0x004afe21                      ; 004afe37
        ;   XREF to: 004afe21 (CONDITIONAL_JUMP)  ; LAB_004afe21
    POP EDI                             ; 004afe39
        ;   Label: LAB_004afe39
    MOV EAX,0xffffffff                  ; 004afe3a
        ;   Label: LAB_004afe3a
    MOV ESP,EBP                         ; 004afe3f
    POP EBP                             ; 004afe41
    POP EDI                             ; 004afe42
    POP ESI                             ; 004afe43
    POP EBX                             ; 004afe44
    RET                                 ; 004afe45
    PUSH EBX                            ; 004afe46
        ;   Label: LAB_004afe46
    MOV EAX,dword ptr [EBX + 0x154]     ; 004afe47
    CALL dword ptr [EAX + 0x120]        ; 004afe4d
    ADD ESP,0x4                         ; 004afe53
    TEST EAX,EAX                        ; 004afe56
    JG 0x004afe02                       ; 004afe58
        ;   XREF to: 004afe02 (CONDITIONAL_JUMP)  ; LAB_004afe02
    PUSH EBX                            ; 004afe5a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004afe5b
    CALL dword ptr [EAX + 0x68]         ; 004afe61
    ADD ESP,0x4                         ; 004afe64
    TEST EAX,EAX                        ; 004afe67
    JNZ 0x004afe02                      ; 004afe69
        ;   XREF to: 004afe02 (CONDITIONAL_JUMP)  ; LAB_004afe02
    MOV EAX,dword ptr [ESP + 0xa60]     ; 004afe6b
    FLD float ptr [EBX + 0x20]          ; 004afe72
    FSUB float ptr [EAX]                ; 004afe75
    FMUL ST0                            ; 004afe77
    FLD float ptr [EBX + 0x24]          ; 004afe79
    FSUB float ptr [EAX + 0x4]          ; 004afe7c
    FMUL ST0                            ; 004afe7f
    FLD float ptr [EBX + 0x28]          ; 004afe81
    FXCH                                ; 004afe84
    FADDP ST2,ST0                       ; 004afe86
    FSUB float ptr [EAX + 0x8]          ; 004afe88
    FMUL ST0                            ; 004afe8b
    FADDP                               ; 004afe8d
    FSQRT                               ; 004afe8f
    FCOMP double ptr [0x00625a81]       ; 004afe91 | DOUBLE_00625a81
    FNSTSW AX                           ; 004afe97
    SAHF                                ; 004afe99
    JA 0x004afe02                       ; 004afe9a
        ;   XREF to: 004afe02 (CONDITIONAL_JUMP)  ; LAB_004afe02
    MOV dword ptr [ESP + 0x9b0],0x1     ; 004afea0
    MOV EAX,dword ptr [ESP + 0xa5c]     ; 004afeab
        ;   Label: LAB_004afeab
    ADD dword ptr [ESI],EAX             ; 004afeb2
    JMP 0x004ae5e4                      ; 004afeb4
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x62594a                       ; 004afeb9 | = "isWeaponDrawn"
        ;   Label: LAB_004afeb9
    LEA EAX,[ESP + 0x944]               ; 004afebe
    PUSH EAX                            ; 004afec5
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004afec6
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004afecb
    TEST EAX,EAX                        ; 004afece
    JNZ 0x004aff9a                      ; 004afed0
        ;   XREF to: 004aff9a (CONDITIONAL_JUMP)  ; LAB_004aff9a
    LEA EAX,[ESP + 0xa70]               ; 004afed6
    MOV EDI,0xffffffff                  ; 004afedd
    PUSH EAX                            ; 004afee2
    LEA EAX,[ESP + 0x7b4]               ; 004afee3
    MOV dword ptr [ESP + 0xa74],EDI     ; 004afeea
    PUSH EAX                            ; 004afef1
    MOV EAX,0x625958                    ; 004afef2 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 004afef7
    PUSH EAX                            ; 004afef9 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004afefa
    ADD EAX,EDX                         ; 004afefd
    PUSH EAX                            ; 004afeff
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aff00
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004aff05
    CMP dword ptr [ESP + 0xa70],0x3     ; 004aff08
    JL 0x004aff58                       ; 004aff10
        ;   XREF to: 004aff58 (CONDITIONAL_JUMP)  ; LAB_004aff58
    MOV EAX,0x2db87d4                   ; 004aff12 | g_CHeroClassInfo
    PUSH EAX                            ; 004aff17 | g_CHeroClassInfo
    MOV EBX,dword ptr [0x02db880c]      ; 004aff18 | g_CHeroClassInfo.name_hash
    PUSH EBX                            ; 004aff1e
    LEA EAX,[ESP + 0x7b8]               ; 004aff1f
    PUSH EAX                            ; 004aff26
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004aff27
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004aff2c
    TEST EAX,EAX                        ; 004aff2f
    JZ 0x004afcf9                       ; 004aff31
        ;   XREF to: 004afcf9 (CONDITIONAL_JUMP)  ; LAB_004afcf9
    MOV EDI,dword ptr [0x0065d95c]      ; 004aff37 | g_ActorNameSentinel
    CMP EAX,EDI                         ; 004aff3d
    JNZ 0x004aff88                      ; 004aff3f
        ;   XREF to: 004aff88 (CONDITIONAL_JUMP)  ; LAB_004aff88
    XOR EAX,EDI                         ; 004aff41
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004aff43
        ;   Label: LAB_004aff43
    MOV EAX,dword ptr [ESP + 0xa70]     ; 004aff4a
    ADD dword ptr [ESI],EAX             ; 004aff51
    JMP 0x004ae5e4                      ; 004aff53
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x625966                    ; 004aff58 | = "Error parsing isWeaponDrawn parameters."
        ;   Label: LAB_004aff58
    MOV EDI,0x2d0a460                   ; 004aff5d | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aff62 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aff63 | = "Error parsing isWeaponDrawn parameters." | s_ror_parsing_isWeaponDrawn_parame_00625968
        ;   Label: LAB_004aff63
    MOV byte ptr [EDI],AL               ; 004aff65 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004aff67
    JZ 0x004aff7b                       ; 004aff69
        ;   XREF to: 004aff7b (CONDITIONAL_JUMP)  ; LAB_004aff7b
    MOV AL,byte ptr [ESI + 0x1]         ; 004aff6b | s_rror_parsing_isWeaponDrawn_param_00625967 | s_or_parsing_isWeaponDrawn_paramet_00625969
    ADD ESI,0x2                         ; 004aff6e
    MOV byte ptr [EDI + 0x1],AL         ; 004aff71 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aff74
    CMP AL,0x0                          ; 004aff77
    JNZ 0x004aff63                      ; 004aff79
        ;   XREF to: 004aff63 (CONDITIONAL_JUMP)  ; LAB_004aff63
    POP EDI                             ; 004aff7b
        ;   Label: LAB_004aff7b
    MOV EAX,0xffffffff                  ; 004aff7c
    MOV ESP,EBP                         ; 004aff81
    POP EBP                             ; 004aff83
    POP EDI                             ; 004aff84
    POP ESI                             ; 004aff85
    POP EBX                             ; 004aff86
    RET                                 ; 004aff87
    PUSH EAX                            ; 004aff88
        ;   Label: LAB_004aff88
    MOV EDX,dword ptr [EAX + 0x154]     ; 004aff89
    CALL dword ptr [EDX + 0x15c]        ; 004aff8f
    ADD ESP,0x4                         ; 004aff95
    JMP 0x004aff43                      ; 004aff98
        ;   XREF to: 004aff43 (UNCONDITIONAL_JUMP)  ; LAB_004aff43
    PUSH 0x62598e                       ; 004aff9a | = "isWearingGasMask"
        ;   Label: LAB_004aff9a
    LEA EAX,[ESP + 0x944]               ; 004aff9f
    PUSH EAX                            ; 004affa6
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004affa7
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004affac
    TEST EAX,EAX                        ; 004affaf
    JNZ 0x004b008b                      ; 004affb1
        ;   XREF to: 004b008b (CONDITIONAL_JUMP)  ; LAB_004b008b
    LEA EAX,[ESP + 0xa74]               ; 004affb7
    MOV EDI,0xffffffff                  ; 004affbe
    PUSH EAX                            ; 004affc3
    LEA EAX,[ESP + 0x494]               ; 004affc4
    MOV dword ptr [ESP + 0xa78],EDI     ; 004affcb
    PUSH EAX                            ; 004affd2
    MOV EAX,0x62599f                    ; 004affd3 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [ESI]             ; 004affd8
    PUSH EAX                            ; 004affda | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004affdb
    ADD EAX,EDX                         ; 004affde
    PUSH EAX                            ; 004affe0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004affe1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004affe6
    CMP dword ptr [ESP + 0xa74],0x3     ; 004affe9
    JL 0x004b0037                       ; 004afff1
        ;   XREF to: 004b0037 (CONDITIONAL_JUMP)  ; LAB_004b0037
    MOV EAX,0x2db87d4                   ; 004afff3 | g_CHeroClassInfo
    PUSH EAX                            ; 004afff8 | g_CHeroClassInfo
    MOV EBX,dword ptr [0x02db880c]      ; 004afff9 | g_CHeroClassInfo.name_hash
    PUSH EBX                            ; 004affff
    LEA EAX,[ESP + 0x498]               ; 004b0000
    PUSH EAX                            ; 004b0007
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004b0008
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004b000d
    TEST EAX,EAX                        ; 004b0010
    JZ 0x004afcf9                       ; 004b0012
        ;   XREF to: 004afcf9 (CONDITIONAL_JUMP)  ; LAB_004afcf9
    CMP EAX,dword ptr [0x0065d95c]      ; 004b0018 | g_ActorNameSentinel
    JNZ 0x004b0067                      ; 004b001e
        ;   XREF to: 004b0067 (CONDITIONAL_JUMP)  ; LAB_004b0067
    XOR ECX,ECX                         ; 004b0020
    MOV dword ptr [ESP + 0x9b0],ECX     ; 004b0022
    MOV EAX,dword ptr [ESP + 0xa74]     ; 004b0029
    ADD dword ptr [ESI],EAX             ; 004b0030
    JMP 0x004ae5e4                      ; 004b0032
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x6259ad                    ; 004b0037 | = "Error parsing isWearingGasMask parame..."
        ;   Label: LAB_004b0037
    MOV EDI,0x2d0a460                   ; 004b003c | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004b0041 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004b0042 | = "Error parsing isWearingGasMask parame..." | s_ror_parsing_isWearingGasMask_par_006259af
        ;   Label: LAB_004b0042
    MOV byte ptr [EDI],AL               ; 004b0044 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004b0046
    JZ 0x004b005a                       ; 004b0048
        ;   XREF to: 004b005a (CONDITIONAL_JUMP)  ; LAB_004b005a
    MOV AL,byte ptr [ESI + 0x1]         ; 004b004a | s_rror_parsing_isWearingGasMask_pa_006259ae | s_or_parsing_isWearingGasMask_para_006259b0
    ADD ESI,0x2                         ; 004b004d
    MOV byte ptr [EDI + 0x1],AL         ; 004b0050 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004b0053
    CMP AL,0x0                          ; 004b0056
    JNZ 0x004b0042                      ; 004b0058
        ;   XREF to: 004b0042 (CONDITIONAL_JUMP)  ; LAB_004b0042
    POP EDI                             ; 004b005a
        ;   Label: LAB_004b005a
    MOV EAX,0xffffffff                  ; 004b005b
    MOV ESP,EBP                         ; 004b0060
    POP EBP                             ; 004b0062
    POP EDI                             ; 004b0063
    POP ESI                             ; 004b0064
    POP EBX                             ; 004b0065
    RET                                 ; 004b0066
    CMP dword ptr [EAX + 0x1fb98],0x2   ; 004b0067
        ;   Label: LAB_004b0067
    SETZ AL                             ; 004b006e
    AND EAX,0xff                        ; 004b0071
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004b0076
    MOV EAX,dword ptr [ESP + 0xa74]     ; 004b007d
    ADD dword ptr [ESI],EAX             ; 004b0084
    JMP 0x004ae5e4                      ; 004b0086
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    PUSH 0x6259d8                       ; 004b008b | = "randBool"
        ;   Label: LAB_004b008b
    LEA EAX,[ESP + 0x944]               ; 004b0090
    PUSH EAX                            ; 004b0097
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b0098
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b009d
    TEST EAX,EAX                        ; 004b00a0
    JNZ 0x004b013b                      ; 004b00a2
        ;   XREF to: 004b013b (CONDITIONAL_JUMP)  ; LAB_004b013b
    LEA EAX,[ESP + 0x9b8]               ; 004b00a8
    MOV EDI,0xffffffff                  ; 004b00af
    PUSH EAX                            ; 004b00b4
    LEA EAX,[ESP + 0xa7c]               ; 004b00b5
    MOV dword ptr [ESP + 0x9bc],EDI     ; 004b00bc
    PUSH EAX                            ; 004b00c3
    MOV EDX,dword ptr [ESI]             ; 004b00c4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b00c6
    PUSH 0x6259e1                       ; 004b00c9 | = " ( %f )%n"
    ADD EAX,EDX                         ; 004b00ce
    PUSH EAX                            ; 004b00d0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004b00d1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004b00d6
    CMP dword ptr [ESP + 0x9b8],0x3     ; 004b00d9
    JL 0x004b010b                       ; 004b00e1
        ;   XREF to: 004b010b (CONDITIONAL_JUMP)  ; LAB_004b010b
    PUSH dword ptr [ESP + 0xa78]        ; 004b00e3
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004b00ea
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004b00ef
    MOV EBX,dword ptr [ESI]             ; 004b00f2
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004b00f4
    MOV EAX,dword ptr [ESP + 0x9b8]     ; 004b00fb
    ADD EBX,EAX                         ; 004b0102
    MOV dword ptr [ESI],EBX             ; 004b0104
    JMP 0x004ae5e4                      ; 004b0106
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x6259eb                    ; 004b010b | = "Error parsing randBool parameters."
        ;   Label: LAB_004b010b
    MOV EDI,0x2d0a460                   ; 004b0110 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004b0115 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004b0116 | = "Error parsing randBool parameters." | s_ror_parsing_randBool_parameters._006259ed
        ;   Label: LAB_004b0116
    MOV byte ptr [EDI],AL               ; 004b0118 | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004b011a
    JZ 0x004b012e                       ; 004b011c
        ;   XREF to: 004b012e (CONDITIONAL_JUMP)  ; LAB_004b012e
    MOV AL,byte ptr [ESI + 0x1]         ; 004b011e | s_rror_parsing_randBool_parameters_006259ec | s_or_parsing_randBool_parameters._006259ee
    ADD ESI,0x2                         ; 004b0121
    MOV byte ptr [EDI + 0x1],AL         ; 004b0124 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004b0127
    CMP AL,0x0                          ; 004b012a
    JNZ 0x004b0116                      ; 004b012c
        ;   XREF to: 004b0116 (CONDITIONAL_JUMP)  ; LAB_004b0116
    POP EDI                             ; 004b012e
        ;   Label: LAB_004b012e
    MOV EAX,0xffffffff                  ; 004b012f
    MOV ESP,EBP                         ; 004b0134
    POP EBP                             ; 004b0136
    POP EDI                             ; 004b0137
    POP ESI                             ; 004b0138
    POP EBX                             ; 004b0139
    RET                                 ; 004b013a
    PUSH 0x625a0e                       ; 004b013b | = "reachedDest"
        ;   Label: LAB_004b013b
    LEA EAX,[ESP + 0x944]               ; 004b0140
    PUSH EAX                            ; 004b0147
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b0148
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b014d
    TEST EAX,EAX                        ; 004b0150
    JNZ 0x004b0231                      ; 004b0152
        ;   XREF to: 004b0231 (CONDITIONAL_JUMP)  ; LAB_004b0231
    LEA EAX,[ESP + 0x9c4]               ; 004b0158
    MOV EDX,0xffffffff                  ; 004b015f
    PUSH EAX                            ; 004b0164
    LEA EAX,[ESP + 0x2a0]               ; 004b0165
    MOV dword ptr [ESP + 0x9c8],EDX     ; 004b016c
    PUSH EAX                            ; 004b0173
    MOV ECX,dword ptr [ESI]             ; 004b0174
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b0176
    PUSH 0x625a1a                       ; 004b0179 | = " ( %[^ )] )%n"
    ADD EAX,ECX                         ; 004b017e
    PUSH EAX                            ; 004b0180
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004b0181
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004b0186
    CMP dword ptr [ESP + 0x9c4],0x3     ; 004b0189
    JL 0x004b01d2                       ; 004b0191
        ;   XREF to: 004b01d2 (CONDITIONAL_JUMP)  ; LAB_004b01d2
    PUSH 0x823c14                       ; 004b0193 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x00823c4c]      ; 004b0198 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 004b019e
    LEA EAX,[ESP + 0x2a4]               ; 004b019f
    PUSH EAX                            ; 004b01a6
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004b01a7
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004b01ac
    TEST EAX,EAX                        ; 004b01af
    JZ 0x004b01f6                       ; 004b01b1
        ;   XREF to: 004b01f6 (CONDITIONAL_JUMP)  ; LAB_004b01f6
    CMP EAX,dword ptr [0x0065d95c]      ; 004b01b3 | g_ActorNameSentinel
    JNZ 0x004b0202                      ; 004b01b9
        ;   XREF to: 004b0202 (CONDITIONAL_JUMP)  ; LAB_004b0202
    XOR ECX,ECX                         ; 004b01bb
    MOV dword ptr [ESP + 0x9b0],ECX     ; 004b01bd
    MOV EAX,dword ptr [ESP + 0x9c4]     ; 004b01c4
    ADD dword ptr [ESI],EAX             ; 004b01cb
    JMP 0x004ae5e4                      ; 004b01cd
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x625a28                    ; 004b01d2 | = "Error parsing reachedDest parameters."
        ;   Label: LAB_004b01d2
    MOV EDI,0x2d0a460                   ; 004b01d7 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004b01dc | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004b01dd | = "Error parsing reachedDest parameters." | s_ror_parsing_reachedDest_paramete_00625a2a
        ;   Label: LAB_004b01dd
    MOV byte ptr [EDI],AL               ; 004b01df | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004b01e1
    JZ 0x004b01f5                       ; 004b01e3
        ;   XREF to: 004b01f5 (CONDITIONAL_JUMP)  ; LAB_004b01f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004b01e5 | s_rror_parsing_reachedDest_paramet_00625a29 | s_or_parsing_reachedDest_parameter_00625a2b
    ADD ESI,0x2                         ; 004b01e8
    MOV byte ptr [EDI + 0x1],AL         ; 004b01eb | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004b01ee
    CMP AL,0x0                          ; 004b01f1
    JNZ 0x004b01dd                      ; 004b01f3
        ;   XREF to: 004b01dd (CONDITIONAL_JUMP)  ; LAB_004b01dd
    POP EDI                             ; 004b01f5
        ;   Label: LAB_004b01f5
    MOV EAX,0xffffffff                  ; 004b01f6
        ;   Label: LAB_004b01f6
    MOV ESP,EBP                         ; 004b01fb
    POP EBP                             ; 004b01fd
    POP EDI                             ; 004b01fe
    POP ESI                             ; 004b01ff
    POP EBX                             ; 004b0200
    RET                                 ; 004b0201
    PUSH EAX                            ; 004b0202
        ;   Label: LAB_004b0202
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b0203
    CALL dword ptr [EDX + 0x150]        ; 004b0209
    ADD ESP,0x4                         ; 004b020f
    TEST EAX,EAX                        ; 004b0212
    SETNZ AL                            ; 004b0214
    AND EAX,0xff                        ; 004b0217
    MOV dword ptr [ESP + 0x9b0],EAX     ; 004b021c
    MOV EAX,dword ptr [ESP + 0x9c4]     ; 004b0223
    ADD dword ptr [ESI],EAX             ; 004b022a
    JMP 0x004ae5e4                      ; 004b022c
        ;   XREF to: 004ae5e4 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e4
    MOV ESI,0x625a4e                    ; 004b0231 | = "Invalid meta-function"
        ;   Label: LAB_004b0231
    MOV EDI,0x2d0a460                   ; 004b0236 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004b023b | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004b023c | = "Invalid meta-function" | s_valid_meta-function_00625a50
        ;   Label: LAB_004b023c
    MOV byte ptr [EDI],AL               ; 004b023e | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004b0240
    JZ 0x004b0254                       ; 004b0242
        ;   XREF to: 004b0254 (CONDITIONAL_JUMP)  ; LAB_004b0254
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0244 | s_nvalid_meta-function_00625a4f | s_alid_meta-function_00625a51
    ADD ESI,0x2                         ; 004b0247
    MOV byte ptr [EDI + 0x1],AL         ; 004b024a | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004b024d
    CMP AL,0x0                          ; 004b0250
    JNZ 0x004b023c                      ; 004b0252
        ;   XREF to: 004b023c (CONDITIONAL_JUMP)  ; LAB_004b023c
    POP EDI                             ; 004b0254
        ;   Label: LAB_004b0254
    MOV EAX,0xffffffff                  ; 004b0255
    MOV ESP,EBP                         ; 004b025a
    POP EBP                             ; 004b025c
    POP EDI                             ; 004b025d
    POP ESI                             ; 004b025e
    POP EBX                             ; 004b025f
    RET                                 ; 004b0260
    MOV EAX,dword ptr [ESP + 0x9b0]     ; 004b0261
        ;   Label: LAB_004b0261
    MOV ESP,EBP                         ; 004b0268
    POP EBP                             ; 004b026a
    POP EDI                             ; 004b026b
    POP ESI                             ; 004b026c
    POP EBX                             ; 004b026d
    RET                                 ; 004b026e

