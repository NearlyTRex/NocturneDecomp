; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)
;
; Parameters:
; CCmdParse *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; SScriptXRef      Stack[-0x124]:276  local_124
;
; XREF[2]:
;   core_script.cpp_CScript_parseActionTemplate_FUN_00567490 at 005674f2
;   core_script.cpp_CScript_parseCommand_FUN_00567080 at 005670d9
;
; Referenced Globals:
;   void* switchdataD_00564008 = 005640d5
;   CScript* g_CScriptPtr = 0310f858
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_script.cpp_CScript_addEventXRef_FUN_00567510
;   core_script.cpp_CScript_extractCrossReferences_FUN_005671a0
;   core_script.cpp_CScript_parseCommandList_FUN_00567010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564090
        ;   Label: core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090
    PUSH ESI                            ; 00564091
    PUSH EDI                            ; 00564092
    PUSH EBP                            ; 00564093
    SUB ESP,0x114                       ; 00564094
    MOV ESI,dword ptr [ESP + 0x12c]     ; 0056409a
    MOV ECX,0x45                        ; 005640a1
    MOV EDI,ESP                         ; 005640a6
    MOV EBX,dword ptr [ESP + 0x128]     ; 005640a8
    MOVSD.REP ES:EDI,ESI                ; 005640af
    MOV EDX,dword ptr [EBX + 0xcc]      ; 005640b1
    XOR EBP,EBP                         ; 005640b7
    TEST EDX,EDX                        ; 005640b9
    JLE 0x005640ed                      ; 005640bb
        ;   XREF to: 005640ed (CONDITIONAL_JUMP)  ; LAB_005640ed
    ADD EBX,0xd0                        ; 005640bd
    MOV ESI,dword ptr [EBX + 0x258]     ; 005640c3
        ;   Label: LAB_005640c3
    CMP ESI,0x1f                        ; 005640c9
    JA 0x005640d5                       ; 005640cc
        ;   XREF to: 005640d5 (CONDITIONAL_JUMP)  ; caseD_e
    JMP dword ptr [ESI*0x4 + 0x564008]  ; 005640ce | caseD_e | caseD_3 | caseD_4
        ;   Label: switchD
    MOV ESI,dword ptr [ESP + 0x128]     ; 005640d5
        ;   Label: caseD_1e
    INC EBP                             ; 005640dc
    MOV ECX,dword ptr [ESI + 0xcc]      ; 005640dd
    ADD EBX,0x328                       ; 005640e3
    CMP EBP,ECX                         ; 005640e9
    JL 0x005640c3                       ; 005640eb
        ;   XREF to: 005640c3 (CONDITIONAL_JUMP)  ; LAB_005640c3
    ADD ESP,0x114                       ; 005640ed
        ;   Label: LAB_005640ed
    POP EBP                             ; 005640f3
    POP EDI                             ; 005640f4
    POP ESI                             ; 005640f5
    POP EBX                             ; 005640f6
    RET                                 ; 005640f7
    MOV EDI,ESP                         ; 005640f8
        ;   Label: caseD_3
    LEA ESI,[EBX + 0x64]                ; 005640fa
    PUSH EDI                            ; 005640fd
    MOV AL,byte ptr [ESI]               ; 005640fe
        ;   Label: LAB_005640fe
    MOV byte ptr [EDI],AL               ; 00564100
    CMP AL,0x0                          ; 00564102
    JZ 0x00564116                       ; 00564104
        ;   XREF to: 00564116 (CONDITIONAL_JUMP)  ; LAB_00564116
    MOV AL,byte ptr [ESI + 0x1]         ; 00564106
    ADD ESI,0x2                         ; 00564109
    MOV byte ptr [EDI + 0x1],AL         ; 0056410c
    ADD EDI,0x2                         ; 0056410f
    CMP AL,0x0                          ; 00564112
    JNZ 0x005640fe                      ; 00564114
        ;   XREF to: 005640fe (CONDITIONAL_JUMP)  ; LAB_005640fe
    POP EDI                             ; 00564116
        ;   Label: LAB_00564116
    CMP byte ptr [EBX + 0x64],0x40      ; 00564117
    JNZ 0x0056413b                      ; 0056411b
        ;   XREF to: 0056413b (CONDITIONAL_JUMP)  ; LAB_0056413b
    MOV dword ptr [ESP + 0x100],0xb     ; 0056411d
    MOV ESI,ESP                         ; 00564128
        ;   Label: LAB_00564128
    PUSH ESI                            ; 0056412a
    MOV EAX,[0x00680d50]                ; 0056412b | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 00564130 | g_CScriptInstance
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 00564131
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 00564136
    JMP 0x005640d5                      ; 00564139
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [ESP + 0x100],0x7     ; 0056413b
        ;   Label: LAB_0056413b
    JMP 0x00564128                      ; 00564146
        ;   XREF to: 00564128 (UNCONDITIONAL_JUMP)  ; LAB_00564128
    MOV ESI,ESP                         ; 00564148
        ;   Label: caseD_4
    PUSH ESI                            ; 0056414a
    LEA ESI,[EBX + 0x64]                ; 0056414b
    PUSH ESI                            ; 0056414e
    MOV ECX,dword ptr [0x00680d50]      ; 0056414f | g_CScriptInstance | g_CScriptPtr
    PUSH ECX                            ; 00564155 | g_CScriptInstance
    CALL core_script.cpp_CScript_extractCrossReferences_FUN_005671a0 ; 00564156
        ;   XREF to: 005671a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_extractCrossReferences_FUN_005671a0(CScript * this_ptr, char * text, SScriptXRef * xref_data)
    ADD ESP,0xc                         ; 0056415b
    JMP 0x005640d5                      ; 0056415e
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 00564163
        ;   Label: caseD_7
    LEA ESI,[EBX + 0x64]                ; 00564165
    PUSH EDI                            ; 00564168
    MOV AL,byte ptr [ESI]               ; 00564169
        ;   Label: LAB_00564169
    MOV byte ptr [EDI],AL               ; 0056416b
    CMP AL,0x0                          ; 0056416d
    JZ 0x00564181                       ; 0056416f
        ;   XREF to: 00564181 (CONDITIONAL_JUMP)  ; LAB_00564181
    MOV AL,byte ptr [ESI + 0x1]         ; 00564171
    ADD ESI,0x2                         ; 00564174
    MOV byte ptr [EDI + 0x1],AL         ; 00564177
    ADD EDI,0x2                         ; 0056417a
    CMP AL,0x0                          ; 0056417d
    JNZ 0x00564169                      ; 0056417f
        ;   XREF to: 00564169 (CONDITIONAL_JUMP)  ; LAB_00564169
    POP EDI                             ; 00564181
        ;   Label: LAB_00564181
    MOV ESI,ESP                         ; 00564182
    PUSH ESI                            ; 00564184
    MOV EDX,dword ptr [0x00680d50]      ; 00564185 | g_CScriptInstance | g_CScriptPtr
    MOV EAX,0xa                         ; 0056418b
    PUSH EDX                            ; 00564190 | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],EAX     ; 00564191
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 00564198
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 0056419d
    JMP 0x005640d5                      ; 005641a0
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV ESI,ESP                         ; 005641a5
        ;   Label: caseD_14
    PUSH ESI                            ; 005641a7
    LEA ESI,[EBX + 0x64]                ; 005641a8
    PUSH ESI                            ; 005641ab
    MOV EDX,dword ptr [0x00680d50]      ; 005641ac | g_CScriptInstance | g_CScriptPtr
    PUSH EDX                            ; 005641b2 | g_CScriptInstance
    CALL core_script.cpp_CScript_parseCommandList_FUN_00567010 ; 005641b3
        ;   XREF to: 00567010 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_parseCommandList_FUN_00567010(CScript * this_ptr, char * commands, SScriptXRef * xref_data)
    ADD ESP,0xc                         ; 005641b8
    JMP 0x005640d5                      ; 005641bb
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 005641c0
        ;   Label: caseD_15
    LEA ESI,[EBX + 0x64]                ; 005641c2
    PUSH EDI                            ; 005641c5
    MOV AL,byte ptr [ESI]               ; 005641c6
        ;   Label: LAB_005641c6
    MOV byte ptr [EDI],AL               ; 005641c8
    CMP AL,0x0                          ; 005641ca
    JZ 0x005641de                       ; 005641cc
        ;   XREF to: 005641de (CONDITIONAL_JUMP)  ; LAB_005641de
    MOV AL,byte ptr [ESI + 0x1]         ; 005641ce
    ADD ESI,0x2                         ; 005641d1
    MOV byte ptr [EDI + 0x1],AL         ; 005641d4
    ADD EDI,0x2                         ; 005641d7
    CMP AL,0x0                          ; 005641da
    JNZ 0x005641c6                      ; 005641dc
        ;   XREF to: 005641c6 (CONDITIONAL_JUMP)  ; LAB_005641c6
    POP EDI                             ; 005641de
        ;   Label: LAB_005641de
    MOV ESI,ESP                         ; 005641df
    PUSH ESI                            ; 005641e1
    MOV EAX,[0x00680d50]                ; 005641e2 | g_CScriptInstance | g_CScriptPtr
    MOV EDI,0x2                         ; 005641e7
    PUSH EAX                            ; 005641ec | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],EDI     ; 005641ed
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 005641f4
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 005641f9
    JMP 0x005640d5                      ; 005641fc
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 00564201
        ;   Label: caseD_16
    LEA ESI,[EBX + 0x64]                ; 00564203
    PUSH EDI                            ; 00564206
    MOV AL,byte ptr [ESI]               ; 00564207
        ;   Label: LAB_00564207
    MOV byte ptr [EDI],AL               ; 00564209
    CMP AL,0x0                          ; 0056420b
    JZ 0x0056421f                       ; 0056420d
        ;   XREF to: 0056421f (CONDITIONAL_JUMP)  ; LAB_0056421f
    MOV AL,byte ptr [ESI + 0x1]         ; 0056420f
    ADD ESI,0x2                         ; 00564212
    MOV byte ptr [EDI + 0x1],AL         ; 00564215
    ADD EDI,0x2                         ; 00564218
    CMP AL,0x0                          ; 0056421b
    JNZ 0x00564207                      ; 0056421d
        ;   XREF to: 00564207 (CONDITIONAL_JUMP)  ; LAB_00564207
    POP EDI                             ; 0056421f
        ;   Label: LAB_0056421f
    MOV ESI,ESP                         ; 00564220
    PUSH ESI                            ; 00564222
    MOV ESI,dword ptr [0x00680d50]      ; 00564223 | g_CScriptPtr
    MOV ECX,0x3                         ; 00564229
    PUSH ESI                            ; 0056422e | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],ECX     ; 0056422f
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 00564236
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 0056423b
    JMP 0x005640d5                      ; 0056423e
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 00564243
        ;   Label: caseD_1c
    LEA ESI,[EBX + 0x64]                ; 00564245
    PUSH EDI                            ; 00564248
    MOV AL,byte ptr [ESI]               ; 00564249
        ;   Label: LAB_00564249
    MOV byte ptr [EDI],AL               ; 0056424b
    CMP AL,0x0                          ; 0056424d
    JZ 0x00564261                       ; 0056424f
        ;   XREF to: 00564261 (CONDITIONAL_JUMP)  ; LAB_00564261
    MOV AL,byte ptr [ESI + 0x1]         ; 00564251
    ADD ESI,0x2                         ; 00564254
    MOV byte ptr [EDI + 0x1],AL         ; 00564257
    ADD EDI,0x2                         ; 0056425a
    CMP AL,0x0                          ; 0056425d
    JNZ 0x00564249                      ; 0056425f
        ;   XREF to: 00564249 (CONDITIONAL_JUMP)  ; LAB_00564249
    POP EDI                             ; 00564261
        ;   Label: LAB_00564261
    MOV ESI,ESP                         ; 00564262
    PUSH ESI                            ; 00564264
    MOV EDX,dword ptr [0x00680d50]      ; 00564265 | g_CScriptInstance | g_CScriptPtr
    MOV EAX,0x4                         ; 0056426b
    PUSH EDX                            ; 00564270 | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],EAX     ; 00564271
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 00564278
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 0056427d
    JMP 0x005640d5                      ; 00564280
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 00564285
        ;   Label: caseD_f
    LEA ESI,[EBX + 0x64]                ; 00564287
    PUSH EDI                            ; 0056428a
    MOV AL,byte ptr [ESI]               ; 0056428b
        ;   Label: LAB_0056428b
    MOV byte ptr [EDI],AL               ; 0056428d
    CMP AL,0x0                          ; 0056428f
    JZ 0x005642a3                       ; 00564291
        ;   XREF to: 005642a3 (CONDITIONAL_JUMP)  ; LAB_005642a3
    MOV AL,byte ptr [ESI + 0x1]         ; 00564293
    ADD ESI,0x2                         ; 00564296
    MOV byte ptr [EDI + 0x1],AL         ; 00564299
    ADD EDI,0x2                         ; 0056429c
    CMP AL,0x0                          ; 0056429f
    JNZ 0x0056428b                      ; 005642a1
        ;   XREF to: 0056428b (CONDITIONAL_JUMP)  ; LAB_0056428b
    POP EDI                             ; 005642a3
        ;   Label: LAB_005642a3
    MOV ESI,ESP                         ; 005642a4
    PUSH ESI                            ; 005642a6
    MOV EAX,[0x00680d50]                ; 005642a7 | g_CScriptInstance | g_CScriptPtr
    MOV EDI,0x5                         ; 005642ac
    PUSH EAX                            ; 005642b1 | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],EDI     ; 005642b2
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 005642b9
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 005642be
    JMP 0x005640d5                      ; 005642c1
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 005642c6
        ;   Label: caseD_10
    LEA ESI,[EBX + 0x64]                ; 005642c8
    PUSH EDI                            ; 005642cb
    MOV AL,byte ptr [ESI]               ; 005642cc
        ;   Label: LAB_005642cc
    MOV byte ptr [EDI],AL               ; 005642ce
    CMP AL,0x0                          ; 005642d0
    JZ 0x005642e4                       ; 005642d2
        ;   XREF to: 005642e4 (CONDITIONAL_JUMP)  ; LAB_005642e4
    MOV AL,byte ptr [ESI + 0x1]         ; 005642d4
    ADD ESI,0x2                         ; 005642d7
    MOV byte ptr [EDI + 0x1],AL         ; 005642da
    ADD EDI,0x2                         ; 005642dd
    CMP AL,0x0                          ; 005642e0
    JNZ 0x005642cc                      ; 005642e2
        ;   XREF to: 005642cc (CONDITIONAL_JUMP)  ; LAB_005642cc
    POP EDI                             ; 005642e4
        ;   Label: LAB_005642e4
    MOV ESI,ESP                         ; 005642e5
    PUSH ESI                            ; 005642e7
    MOV ESI,dword ptr [0x00680d50]      ; 005642e8 | g_CScriptPtr
    MOV ECX,0x6                         ; 005642ee
    PUSH ESI                            ; 005642f3 | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],ECX     ; 005642f4
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 005642fb
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 00564300
    JMP 0x005640d5                      ; 00564303
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 00564308
        ;   Label: caseD_b
    LEA ESI,[EBX + 0x64]                ; 0056430a
    PUSH EDI                            ; 0056430d
    MOV AL,byte ptr [ESI]               ; 0056430e
        ;   Label: LAB_0056430e
    MOV byte ptr [EDI],AL               ; 00564310
    CMP AL,0x0                          ; 00564312
    JZ 0x00564326                       ; 00564314
        ;   XREF to: 00564326 (CONDITIONAL_JUMP)  ; LAB_00564326
    MOV AL,byte ptr [ESI + 0x1]         ; 00564316
    ADD ESI,0x2                         ; 00564319
    MOV byte ptr [EDI + 0x1],AL         ; 0056431c
    ADD EDI,0x2                         ; 0056431f
    CMP AL,0x0                          ; 00564322
    JNZ 0x0056430e                      ; 00564324
        ;   XREF to: 0056430e (CONDITIONAL_JUMP)  ; LAB_0056430e
    POP EDI                             ; 00564326
        ;   Label: LAB_00564326
    MOV dword ptr [ESP + 0x100],0x8     ; 00564327
    MOV ESI,ESP                         ; 00564332
    PUSH ESI                            ; 00564334
    MOV EDI,dword ptr [0x00680d50]      ; 00564335 | g_CScriptPtr
    PUSH EDI                            ; 0056433b | g_CScriptInstance
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 0056433c
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 00564341
    JMP 0x005640d5                      ; 00564344
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 00564349
        ;   Label: caseD_c
    LEA ESI,[EBX + 0x64]                ; 0056434b
    PUSH EDI                            ; 0056434e
    MOV AL,byte ptr [ESI]               ; 0056434f
        ;   Label: LAB_0056434f
    MOV byte ptr [EDI],AL               ; 00564351
    CMP AL,0x0                          ; 00564353
    JZ 0x00564367                       ; 00564355
        ;   XREF to: 00564367 (CONDITIONAL_JUMP)  ; LAB_00564367
    MOV AL,byte ptr [ESI + 0x1]         ; 00564357
    ADD ESI,0x2                         ; 0056435a
    MOV byte ptr [EDI + 0x1],AL         ; 0056435d
    ADD EDI,0x2                         ; 00564360
    CMP AL,0x0                          ; 00564363
    JNZ 0x0056434f                      ; 00564365
        ;   XREF to: 0056434f (CONDITIONAL_JUMP)  ; LAB_0056434f
    POP EDI                             ; 00564367
        ;   Label: LAB_00564367
    MOV ESI,ESP                         ; 00564368
    PUSH ESI                            ; 0056436a
    MOV ECX,dword ptr [0x00680d50]      ; 0056436b | g_CScriptInstance | g_CScriptPtr
    MOV EDX,0x9                         ; 00564371
    PUSH ECX                            ; 00564376 | g_CScriptInstance
    MOV dword ptr [ESP + 0x108],EDX     ; 00564377
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 0056437e
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 00564383
    JMP 0x005640d5                      ; 00564386
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,ESP                         ; 0056438b
        ;   Label: caseD_1f
    LEA ESI,[EBX + 0x64]                ; 0056438d
    PUSH EDI                            ; 00564390
    MOV AL,byte ptr [ESI]               ; 00564391
        ;   Label: LAB_00564391
    MOV byte ptr [EDI],AL               ; 00564393
    CMP AL,0x0                          ; 00564395
    JZ 0x005643a9                       ; 00564397
        ;   XREF to: 005643a9 (CONDITIONAL_JUMP)  ; LAB_005643a9
    MOV AL,byte ptr [ESI + 0x1]         ; 00564399
    ADD ESI,0x2                         ; 0056439c
    MOV byte ptr [EDI + 0x1],AL         ; 0056439f
    ADD EDI,0x2                         ; 005643a2
    CMP AL,0x0                          ; 005643a5
    JNZ 0x00564391                      ; 005643a7
        ;   XREF to: 00564391 (CONDITIONAL_JUMP)  ; LAB_00564391
    POP EDI                             ; 005643a9
        ;   Label: LAB_005643a9
    MOV dword ptr [ESP + 0x100],0xc     ; 005643aa
    MOV ESI,ESP                         ; 005643b5
    PUSH ESI                            ; 005643b7
    MOV EDI,dword ptr [0x00680d50]      ; 005643b8 | g_CScriptPtr
    PUSH EDI                            ; 005643be | g_CScriptInstance
    CALL core_script.cpp_CScript_addEventXRef_FUN_00567510 ; 005643bf
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_addEventXRef_FUN_00567510(CScript * this_ptr, SScriptXRef * xref_data)
    ADD ESP,0x8                         ; 005643c4
    JMP 0x005640d5                      ; 005643c7
        ;   XREF to: 005640d5 (UNCONDITIONAL_JUMP)  ; caseD_e

