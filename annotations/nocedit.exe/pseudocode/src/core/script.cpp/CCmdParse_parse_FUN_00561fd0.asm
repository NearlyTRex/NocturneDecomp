; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse *this_ptr,char *input_text,char *template_text)
;
; Parameters:
; CCmdParse *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   input_text
; char *           Stack[0xc]:4   template_text
; Local Variables:
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x153]:1  local_153
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_script.cpp_CCmdParse_bestParse_FUN_00561db0 at 00561ed5
;   core_script.cpp_CScript_collectSoundReferences_FUN_00567bc0 at 00567c2f
;   core_script.cpp_CScript_parseActionTemplate_FUN_00567490 at 005674b1
;   core_script.cpp_CScript_parseCommand_FUN_00567080 at 005670a6
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00643b59
;   TerminatedCString s_SCmdParse_parse_too_many_00643b6c
;   uchar[257] g_CharacterClassificationTable
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CCmdParm_parseValue_FUN_00561cb0
;   core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
;   crt_ctype.c_toupper_FUN_005ff9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561fd0
        ;   Label: core_script.cpp_CCmdParse_parse_FUN_00561fd0
    PUSH ESI                            ; 00561fd1
    PUSH EDI                            ; 00561fd2
    PUSH EBP                            ; 00561fd3
    SUB ESP,0x144                       ; 00561fd4
    MOV EBX,dword ptr [ESP + 0x158]     ; 00561fda
    MOV EBP,dword ptr [ESP + 0x15c]     ; 00561fe1
    XOR EDX,EDX                         ; 00561fe8
    MOV dword ptr [ESP + 0x12c],EDX     ; 00561fea
    MOV EAX,dword ptr [ESP + 0x160]     ; 00561ff1
    MOV byte ptr [EBX + 0x2060],0x0     ; 00561ff8
    MOV dword ptr [EBX],EAX             ; 00561fff
    XOR ESI,ESI                         ; 00562001
    MOV dword ptr [EBX + 0xcc],EDX      ; 00562003
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00562009
        ;   Label: LAB_00562009
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 00562010
    INC AL                              ; 00562013
    AND EAX,0xff                        ; 00562015
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0056201a | g_CharacterClassificationTable
    JNZ 0x005620e8                      ; 00562021
        ;   XREF to: 005620e8 (CONDITIONAL_JUMP)  ; LAB_005620e8
    MOV byte ptr [ESI + EBX*0x1 + 0x4],0x0 ; 00562027
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0056202c
    MOV dword ptr [ESP + 0x140],EAX     ; 00562033
    ADD EAX,EBP                         ; 0056203a
    MOV DH,byte ptr [EAX]               ; 0056203c
    MOV ESI,EAX                         ; 0056203e
    TEST DH,DH                          ; 00562040
    JZ 0x00562058                       ; 00562042
        ;   XREF to: 00562058 (CONDITIONAL_JUMP)  ; LAB_00562058
    MOV CH,byte ptr [ESI]               ; 00562044
        ;   Label: LAB_00562044
    CMP CH,0x2f                         ; 00562046
    JNZ 0x0056210a                      ; 00562049
        ;   XREF to: 0056210a (CONDITIONAL_JUMP)  ; LAB_0056210a
    CMP CH,byte ptr [ESI + 0x1]         ; 0056204f
    JNZ 0x0056210a                      ; 00562052
        ;   XREF to: 0056210a (CONDITIONAL_JUMP)  ; LAB_0056210a
    XOR EAX,EAX                         ; 00562058
        ;   Label: LAB_00562058
    MOV dword ptr [ESP + 0x130],EAX     ; 0056205a
    MOV EAX,dword ptr [ESP + 0x130]     ; 00562061
        ;   Label: LAB_00562061
    MOV byte ptr [EBX + EAX*0x1 + 0x68],0x0 ; 00562068
    MOV ESI,dword ptr [ESP + 0x160]     ; 0056206d
    ADD ESI,dword ptr [ESP + 0x130]     ; 00562074
    MOV AH,byte ptr [ESI]               ; 0056207b
    CMP AH,0x28                         ; 0056207d
    JNZ 0x0056212a                      ; 00562080
        ;   XREF to: 0056212a (CONDITIONAL_JUMP)  ; LAB_0056212a
    LEA EAX,[EBX + 0xd0]                ; 00562086
        ;   Label: LAB_00562086
    MOV dword ptr [ESP + 0x134],EAX     ; 0056208c
    LEA EAX,[EBX + 0x2060]              ; 00562093
    XOR ESI,ESI                         ; 00562099
    MOV dword ptr [ESP + 0x138],EAX     ; 0056209b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005620a2
        ;   Label: LAB_005620a2
    CMP EAX,dword ptr [ESP + 0x140]     ; 005620a9
    JGE 0x00562207                      ; 005620b0
        ;   XREF to: 00562207 (CONDITIONAL_JUMP)  ; LAB_00562207
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 005620b6
    INC AL                              ; 005620b9
    AND EAX,0xff                        ; 005620bb
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005620c0 | g_CharacterClassificationTable
    JZ 0x00562207                       ; 005620c7
        ;   XREF to: 00562207 (CONDITIONAL_JUMP)  ; LAB_00562207
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005620cd
    LEA ECX,[EAX + 0x1]                 ; 005620d4
    MOV dword ptr [ESP + 0x12c],ECX     ; 005620d7
    INC ESI                             ; 005620de
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 005620df
    MOV byte ptr [ESP + ESI*0x1 + -0x1],AL ; 005620e2
    JMP 0x005620a2                      ; 005620e6
        ;   XREF to: 005620a2 (UNCONDITIONAL_JUMP)  ; LAB_005620a2
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005620e8
        ;   Label: LAB_005620e8
    LEA ECX,[EAX + 0x1]                 ; 005620ef
    LEA EDX,[EAX + EBP*0x1]             ; 005620f2
    MOV dword ptr [ESP + 0x12c],ECX     ; 005620f5
    MOV EAX,ESI                         ; 005620fc
    MOV DL,byte ptr [EDX]               ; 005620fe
    INC ESI                             ; 00562100
    MOV byte ptr [EBX + EAX*0x1 + 0x4],DL ; 00562101
    JMP 0x00562009                      ; 00562105
        ;   XREF to: 00562009 (UNCONDITIONAL_JUMP)  ; LAB_00562009
    MOV EDI,dword ptr [ESP + 0x140]     ; 0056210a
        ;   Label: LAB_0056210a
    MOV CL,byte ptr [ESI + 0x1]         ; 00562111
    INC EDI                             ; 00562114
    INC ESI                             ; 00562115
    MOV dword ptr [ESP + 0x140],EDI     ; 00562116
    TEST CL,CL                          ; 0056211d
    JNZ 0x00562044                      ; 0056211f
        ;   XREF to: 00562044 (CONDITIONAL_JUMP)  ; LAB_00562044
    JMP 0x00562058                      ; 00562125
        ;   XREF to: 00562058 (UNCONDITIONAL_JUMP)  ; LAB_00562058
    CMP AH,0x3c                         ; 0056212a
        ;   Label: LAB_0056212a
    JZ 0x00562086                       ; 0056212d
        ;   XREF to: 00562086 (CONDITIONAL_JUMP)  ; LAB_00562086
    MOV AL,AH                           ; 00562133
    INC AL                              ; 00562135
    AND EAX,0xff                        ; 00562137
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0056213c | g_CharacterClassificationTable
    JNZ 0x00562086                      ; 00562143
        ;   XREF to: 00562086 (CONDITIONAL_JUMP)  ; LAB_00562086
    CMP byte ptr [ESI],0x0              ; 00562149
    JZ 0x00562086                       ; 0056214c
        ;   XREF to: 00562086 (CONDITIONAL_JUMP)  ; LAB_00562086
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00562152
    CMP EAX,dword ptr [ESP + 0x140]     ; 00562159
    JGE 0x005621bf                      ; 00562160
        ;   XREF to: 005621bf (CONDITIONAL_JUMP)  ; LAB_005621bf
    XOR EAX,EAX                         ; 00562162
    MOV AL,byte ptr [ESI]               ; 00562164
    PUSH EAX                            ; 00562166
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00562167
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0056216c
    MOV ESI,EAX                         ; 0056216f
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00562171
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 00562178
    AND EAX,0xff                        ; 0056217b
    PUSH EAX                            ; 00562180
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00562181
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00562186
    CMP ESI,EAX                         ; 00562189
    JNZ 0x005621fa                      ; 0056218b
        ;   XREF to: 005621fa (CONDITIONAL_JUMP)  ; LAB_005621fa
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0056218d
    LEA ESI,[EAX + 0x1]                 ; 00562194
    LEA EDX,[EAX + EBP*0x1]             ; 00562197
    MOV EAX,dword ptr [ESP + 0x130]     ; 0056219a
    LEA EDI,[EAX + 0x1]                 ; 005621a1
    MOV dword ptr [ESP + 0x12c],ESI     ; 005621a4
    MOV dword ptr [ESP + 0x130],EDI     ; 005621ab
    LEA ESI,[EBX + EAX*0x1]             ; 005621b2
    MOV AL,byte ptr [EDX]               ; 005621b5
    MOV byte ptr [ESI + 0x68],AL        ; 005621b7
    JMP 0x00562061                      ; 005621ba
        ;   XREF to: 00562061 (UNCONDITIONAL_JUMP)  ; LAB_00562061
    LEA EDI,[EBX + 0x2060]              ; 005621bf
        ;   Label: LAB_005621bf
    LEA ESI,[EAX + EBP*0x1]             ; 005621c5
    PUSH EDI                            ; 005621c8
    SUB ECX,ECX                         ; 005621c9
    DEC ECX                             ; 005621cb
    MOV AL,0x0                          ; 005621cc
    SCASB.REPNE ES:EDI                  ; 005621ce
    DEC EDI                             ; 005621d0
    MOV AL,byte ptr [ESI]               ; 005621d1
        ;   Label: LAB_005621d1
    MOV byte ptr [EDI],AL               ; 005621d3
    CMP AL,0x0                          ; 005621d5
    JZ 0x005621e9                       ; 005621d7
        ;   XREF to: 005621e9 (CONDITIONAL_JUMP)  ; LAB_005621e9
    MOV AL,byte ptr [ESI + 0x1]         ; 005621d9
    ADD ESI,0x2                         ; 005621dc
    MOV byte ptr [EDI + 0x1],AL         ; 005621df
    ADD EDI,0x2                         ; 005621e2
    CMP AL,0x0                          ; 005621e5
    JNZ 0x005621d1                      ; 005621e7
        ;   XREF to: 005621d1 (CONDITIONAL_JUMP)  ; LAB_005621d1
    POP EDI                             ; 005621e9
        ;   Label: LAB_005621e9
    MOV EAX,0x1                         ; 005621ea
    ADD ESP,0x144                       ; 005621ef
    POP EBP                             ; 005621f5
    POP EDI                             ; 005621f6
    POP ESI                             ; 005621f7
    POP EBX                             ; 005621f8
    RET                                 ; 005621f9
    XOR EAX,EAX                         ; 005621fa
        ;   Label: LAB_005621fa
    ADD ESP,0x144                       ; 005621fc
    POP EBP                             ; 00562202
    POP EDI                             ; 00562203
    POP ESI                             ; 00562204
    POP EBX                             ; 00562205
    RET                                 ; 00562206
    MOV EDI,dword ptr [ESP + 0x160]     ; 00562207
        ;   Label: LAB_00562207
    MOV ECX,dword ptr [ESP + 0x130]     ; 0056220e
    ADD EDI,ECX                         ; 00562215
    MOV AL,byte ptr [EDI]               ; 00562217
    INC AL                              ; 00562219
    AND EAX,0xff                        ; 0056221b
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00562220 | g_CharacterClassificationTable
    JZ 0x00562238                       ; 00562227
        ;   XREF to: 00562238 (CONDITIONAL_JUMP)  ; LAB_00562238
    LEA EDX,[ECX + 0x1]                 ; 00562229
    MOV dword ptr [ESP + 0x130],EDX     ; 0056222c
    JMP 0x005620a2                      ; 00562233
        ;   XREF to: 005620a2 (UNCONDITIONAL_JUMP)  ; LAB_005620a2
    CMP byte ptr [EDI],0x3c             ; 00562238
        ;   Label: LAB_00562238
    JNZ 0x00562392                      ; 0056223b
        ;   XREF to: 00562392 (CONDITIONAL_JUMP)  ; LAB_00562392
    CMP dword ptr [EBX + 0xcc],0xa      ; 00562241
    JL 0x0056226d                       ; 00562248
        ;   XREF to: 0056226d (CONDITIONAL_JUMP)  ; LAB_0056226d
    MOV EDX,0x643b59                    ; 0056224a | = "..\\core\\script.cpp"
    MOV ECX,0x1302                      ; 0056224f
    PUSH 0x643b6c                       ; 00562254 | = "SCmdParse::parse - too many parms!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00562259 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0056225f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00562265
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056226a
    LEA EAX,[ESP + 0x130]               ; 0056226d
        ;   Label: LAB_0056226d
    MOV EDX,dword ptr [EBX + 0xcc]      ; 00562274
    PUSH EAX                            ; 0056227a
    IMUL EAX,EDX,0x328                  ; 0056227b
    MOV EDI,dword ptr [ESP + 0x164]     ; 00562281
    MOV ECX,dword ptr [ESP + 0x138]     ; 00562288
    PUSH EDI                            ; 0056228f
    ADD EAX,ECX                         ; 00562290
    PUSH EAX                            ; 00562292
    CALL core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0 ; 00562293
        ;   XREF to: 00560de0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm * this_ptr, char * template_text, int * parse_cursor)
    ADD ESP,0xc                         ; 00562298
    TEST EAX,EAX                        ; 0056229b
    JZ 0x00562325                       ; 0056229d
        ;   XREF to: 00562325 (CONDITIONAL_JUMP)  ; LAB_00562325
    XOR CL,CL                           ; 005622a3
    MOV byte ptr [ESP + ESI*0x1],CL     ; 005622a5
    IMUL EDI,dword ptr [EBX + 0xcc],0x328 ; 005622a8
    MOV EAX,dword ptr [ESP + 0x134]     ; 005622b2
    MOV ESI,ESP                         ; 005622b9
    ADD EDI,EAX                         ; 005622bb
    MOV EDX,dword ptr [ESP + 0x140]     ; 005622bd
    PUSH EDI                            ; 005622c4
    MOV AL,byte ptr [ESI]               ; 005622c5
        ;   Label: LAB_005622c5
    MOV byte ptr [EDI],AL               ; 005622c7
    CMP AL,0x0                          ; 005622c9
    JZ 0x005622dd                       ; 005622cb
        ;   XREF to: 005622dd (CONDITIONAL_JUMP)  ; LAB_005622dd
    MOV AL,byte ptr [ESI + 0x1]         ; 005622cd
    ADD ESI,0x2                         ; 005622d0
    MOV byte ptr [EDI + 0x1],AL         ; 005622d3
    ADD EDI,0x2                         ; 005622d6
    CMP AL,0x0                          ; 005622d9
    JNZ 0x005622c5                      ; 005622db
        ;   XREF to: 005622c5 (CONDITIONAL_JUMP)  ; LAB_005622c5
    POP EDI                             ; 005622dd
        ;   Label: LAB_005622dd
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005622de
    PUSH EDX                            ; 005622e5
    MOV dword ptr [ESP + 0x140],EAX     ; 005622e6
    LEA EAX,[ESP + 0x130]               ; 005622ed
    MOV ECX,dword ptr [EBX + 0xcc]      ; 005622f4
    PUSH EAX                            ; 005622fa
    IMUL EAX,ECX,0x328                  ; 005622fb
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00562301
    PUSH EBP                            ; 00562308
    ADD EAX,EDI                         ; 00562309
    PUSH EAX                            ; 0056230b
    XOR ESI,ESI                         ; 0056230c
    CALL core_script.cpp_CCmdParm_parseValue_FUN_00561cb0 ; 0056230e
        ;   XREF to: 00561cb0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParm_parseValue_FUN_00561cb0(CCmdParm * this_ptr, char * input_text, int * cursor, int end_position)
    ADD ESP,0x10                        ; 00562313
    TEST EAX,EAX                        ; 00562316
    JZ 0x00562335                       ; 00562318
        ;   XREF to: 00562335 (CONDITIONAL_JUMP)  ; LAB_00562335
    INC dword ptr [EBX + 0xcc]          ; 0056231a
    JMP 0x005620a2                      ; 00562320
        ;   XREF to: 005620a2 (UNCONDITIONAL_JUMP)  ; LAB_005620a2
    MOV EAX,0x2                         ; 00562325
        ;   Label: LAB_00562325
    ADD ESP,0x144                       ; 0056232a
    POP EBP                             ; 00562330
    POP EDI                             ; 00562331
    POP ESI                             ; 00562332
    POP EBX                             ; 00562333
    RET                                 ; 00562334
    MOV ESI,ESP                         ; 00562335
        ;   Label: LAB_00562335
    LEA EDI,[EBX + 0x2060]              ; 00562337
    PUSH EDI                            ; 0056233d
    MOV AL,byte ptr [ESI]               ; 0056233e
        ;   Label: LAB_0056233e
    MOV byte ptr [EDI],AL               ; 00562340
    CMP AL,0x0                          ; 00562342
    JZ 0x00562356                       ; 00562344
        ;   XREF to: 00562356 (CONDITIONAL_JUMP)  ; LAB_00562356
    MOV AL,byte ptr [ESI + 0x1]         ; 00562346
    ADD ESI,0x2                         ; 00562349
    MOV byte ptr [EDI + 0x1],AL         ; 0056234c
    ADD EDI,0x2                         ; 0056234f
    CMP AL,0x0                          ; 00562352
    JNZ 0x0056233e                      ; 00562354
        ;   XREF to: 0056233e (CONDITIONAL_JUMP)  ; LAB_0056233e
    POP EDI                             ; 00562356
        ;   Label: LAB_00562356
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00562357
    ADD ESI,EBP                         ; 0056235e
    PUSH EDI                            ; 00562360
    SUB ECX,ECX                         ; 00562361
    DEC ECX                             ; 00562363
    MOV AL,0x0                          ; 00562364
    SCASB.REPNE ES:EDI                  ; 00562366
    DEC EDI                             ; 00562368
    MOV AL,byte ptr [ESI]               ; 00562369
        ;   Label: LAB_00562369
    MOV byte ptr [EDI],AL               ; 0056236b
    CMP AL,0x0                          ; 0056236d
    JZ 0x00562381                       ; 0056236f
        ;   XREF to: 00562381 (CONDITIONAL_JUMP)  ; LAB_00562381
    MOV AL,byte ptr [ESI + 0x1]         ; 00562371
    ADD ESI,0x2                         ; 00562374
    MOV byte ptr [EDI + 0x1],AL         ; 00562377
    ADD EDI,0x2                         ; 0056237a
    CMP AL,0x0                          ; 0056237d
    JNZ 0x00562369                      ; 0056237f
        ;   XREF to: 00562369 (CONDITIONAL_JUMP)  ; LAB_00562369
    POP EDI                             ; 00562381
        ;   Label: LAB_00562381
    MOV EAX,0x2                         ; 00562382
    ADD ESP,0x144                       ; 00562387
    POP EBP                             ; 0056238d
    POP EDI                             ; 0056238e
    POP ESI                             ; 0056238f
    POP EBX                             ; 00562390
    RET                                 ; 00562391
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00562392
        ;   Label: LAB_00562392
    CMP EAX,dword ptr [ESP + 0x140]     ; 00562399
    JGE 0x00562466                      ; 005623a0
        ;   XREF to: 00562466 (CONDITIONAL_JUMP)  ; LAB_00562466
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 005623a6
    AND EAX,0xff                        ; 005623a9
    PUSH EAX                            ; 005623ae
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 005623af
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 005623b4
    MOV EDI,EAX                         ; 005623b7
    MOV EAX,dword ptr [ESP + 0x160]     ; 005623b9
    ADD EAX,dword ptr [ESP + 0x130]     ; 005623c0
    MOV AL,byte ptr [EAX]               ; 005623c7
    AND EAX,0xff                        ; 005623c9
    PUSH EAX                            ; 005623ce
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 005623cf
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 005623d4
    CMP EDI,EAX                         ; 005623d7
    JNZ 0x00562408                      ; 005623d9
        ;   XREF to: 00562408 (CONDITIONAL_JUMP)  ; LAB_00562408
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005623db
    MOV EDI,dword ptr [ESP + 0x130]     ; 005623e2
    LEA ECX,[EAX + 0x1]                 ; 005623e9
    INC ESI                             ; 005623ec
    MOV dword ptr [ESP + 0x12c],ECX     ; 005623ed
    INC EDI                             ; 005623f4
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 005623f5
    MOV dword ptr [ESP + 0x130],EDI     ; 005623f8
    MOV byte ptr [ESP + ESI*0x1 + -0x1],AL ; 005623ff
    JMP 0x005620a2                      ; 00562403
        ;   XREF to: 005620a2 (UNCONDITIONAL_JUMP)  ; LAB_005620a2
    MOV ESI,ESP                         ; 00562408
        ;   Label: LAB_00562408
    MOV EDI,dword ptr [ESP + 0x138]     ; 0056240a
    PUSH EDI                            ; 00562411
    MOV AL,byte ptr [ESI]               ; 00562412
        ;   Label: LAB_00562412
    MOV byte ptr [EDI],AL               ; 00562414
    CMP AL,0x0                          ; 00562416
    JZ 0x0056242a                       ; 00562418
        ;   XREF to: 0056242a (CONDITIONAL_JUMP)  ; LAB_0056242a
    MOV AL,byte ptr [ESI + 0x1]         ; 0056241a
    ADD ESI,0x2                         ; 0056241d
    MOV byte ptr [EDI + 0x1],AL         ; 00562420
    ADD EDI,0x2                         ; 00562423
    CMP AL,0x0                          ; 00562426
    JNZ 0x00562412                      ; 00562428
        ;   XREF to: 00562412 (CONDITIONAL_JUMP)  ; LAB_00562412
    POP EDI                             ; 0056242a
        ;   Label: LAB_0056242a
    MOV ESI,dword ptr [ESP + 0x12c]     ; 0056242b
    ADD ESI,EBP                         ; 00562432
    PUSH EDI                            ; 00562434
    SUB ECX,ECX                         ; 00562435
    DEC ECX                             ; 00562437
    MOV AL,0x0                          ; 00562438
    SCASB.REPNE ES:EDI                  ; 0056243a
    DEC EDI                             ; 0056243c
    MOV AL,byte ptr [ESI]               ; 0056243d
        ;   Label: LAB_0056243d
    MOV byte ptr [EDI],AL               ; 0056243f
    CMP AL,0x0                          ; 00562441
    JZ 0x00562455                       ; 00562443
        ;   XREF to: 00562455 (CONDITIONAL_JUMP)  ; LAB_00562455
    MOV AL,byte ptr [ESI + 0x1]         ; 00562445
    ADD ESI,0x2                         ; 00562448
    MOV byte ptr [EDI + 0x1],AL         ; 0056244b
    ADD EDI,0x2                         ; 0056244e
    CMP AL,0x0                          ; 00562451
    JNZ 0x0056243d                      ; 00562453
        ;   XREF to: 0056243d (CONDITIONAL_JUMP)  ; LAB_0056243d
    POP EDI                             ; 00562455
        ;   Label: LAB_00562455
    MOV EAX,0x2                         ; 00562456
    ADD ESP,0x144                       ; 0056245b
    POP EBP                             ; 00562461
    POP EDI                             ; 00562462
    POP ESI                             ; 00562463
    POP EBX                             ; 00562464
    RET                                 ; 00562465
    XOR BL,BL                           ; 00562466
        ;   Label: LAB_00562466
    MOV EDI,dword ptr [ESP + 0x138]     ; 00562468
    MOV byte ptr [ESP + ESI*0x1],BL     ; 0056246f
    MOV ESI,ESP                         ; 00562472
    PUSH EDI                            ; 00562474
    MOV AL,byte ptr [ESI]               ; 00562475
        ;   Label: LAB_00562475
    MOV byte ptr [EDI],AL               ; 00562477
    CMP AL,0x0                          ; 00562479
    JZ 0x0056248d                       ; 0056247b
        ;   XREF to: 0056248d (CONDITIONAL_JUMP)  ; LAB_0056248d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056247d
    ADD ESI,0x2                         ; 00562480
    MOV byte ptr [EDI + 0x1],AL         ; 00562483
    ADD EDI,0x2                         ; 00562486
    CMP AL,0x0                          ; 00562489
    JNZ 0x00562475                      ; 0056248b
        ;   XREF to: 00562475 (CONDITIONAL_JUMP)  ; LAB_00562475
    POP EDI                             ; 0056248d
        ;   Label: LAB_0056248d
    MOV ESI,dword ptr [ESP + 0x140]     ; 0056248e
    ADD ESI,EBP                         ; 00562495
    PUSH EDI                            ; 00562497
    SUB ECX,ECX                         ; 00562498
    DEC ECX                             ; 0056249a
    MOV AL,0x0                          ; 0056249b
    SCASB.REPNE ES:EDI                  ; 0056249d
    DEC EDI                             ; 0056249f
    MOV AL,byte ptr [ESI]               ; 005624a0
        ;   Label: LAB_005624a0
    MOV byte ptr [EDI],AL               ; 005624a2
    CMP AL,0x0                          ; 005624a4
    JZ 0x005624b8                       ; 005624a6
        ;   XREF to: 005624b8 (CONDITIONAL_JUMP)  ; LAB_005624b8
    MOV AL,byte ptr [ESI + 0x1]         ; 005624a8
    ADD ESI,0x2                         ; 005624ab
    MOV byte ptr [EDI + 0x1],AL         ; 005624ae
    ADD EDI,0x2                         ; 005624b1
    CMP AL,0x0                          ; 005624b4
    JNZ 0x005624a0                      ; 005624b6
        ;   XREF to: 005624a0 (CONDITIONAL_JUMP)  ; LAB_005624a0
    POP EDI                             ; 005624b8
        ;   Label: LAB_005624b8
    MOV EAX,dword ptr [ESP + 0x160]     ; 005624b9
    ADD EAX,dword ptr [ESP + 0x130]     ; 005624c0
    CMP byte ptr [EAX],0x0              ; 005624c7
    JZ 0x005624dc                       ; 005624ca
        ;   XREF to: 005624dc (CONDITIONAL_JUMP)  ; LAB_005624dc
    MOV EAX,0x2                         ; 005624cc
    ADD ESP,0x144                       ; 005624d1
    POP EBP                             ; 005624d7
    POP EDI                             ; 005624d8
    POP ESI                             ; 005624d9
    POP EBX                             ; 005624da
    RET                                 ; 005624db
    MOV EAX,0x3                         ; 005624dc
        ;   Label: LAB_005624dc
    ADD ESP,0x144                       ; 005624e1
    POP EBP                             ; 005624e7
    POP EDI                             ; 005624e8
    POP ESI                             ; 005624e9
    POP EBX                             ; 005624ea
    RET                                 ; 005624eb

