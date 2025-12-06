; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_005671a0()
;
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
; undefined4       Stack[-0x34]:4  local_34
; undefined1       Stack[-0x20]:1  local_20
;
; XREF[2]:
;   core_msnedit.cpp_FUN_0053ea30 at 0053eb0a
;   core_script.cpp_FUN_00564090 at 00564156
;
; Referenced Globals:
;   TerminatedCString s_none_00644047
;   TerminatedCString s_true_0064404c
;   TerminatedCString s_false_00644051
;
; Called Functions:
;   core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
;   core_script.cpp_CScript_ReallocSomething_FUN_00567510
;   core_script.cpp_FUN_00567310
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005671a0
        ;   Label: core_script.cpp_FUN_005671a0
    PUSH ESI                            ; 005671a1
    PUSH EDI                            ; 005671a2
    PUSH EBP                            ; 005671a3
    SUB ESP,0x124                       ; 005671a4
    MOV EBP,dword ptr [ESP + 0x138]     ; 005671aa
    MOV ESI,dword ptr [ESP + 0x140]     ; 005671b1
    LEA EAX,[ESP + 0x114]               ; 005671b8
    PUSH EAX                            ; 005671bf
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005671c0 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005671c5
    PUSH 0x0                            ; 005671c8
    LEA EAX,[ESP + 0x118]               ; 005671ca
    PUSH EAX                            ; 005671d1
    MOV EDX,dword ptr [ESP + 0x144]     ; 005671d2
    PUSH EDX                            ; 005671d9
    PUSH EBP                            ; 005671da
    LEA EDI,[ESP + 0x10]                ; 005671db
    CALL core_script.cpp_FUN_00567310   ; 005671df | undefined core_script.cpp_FUN_00567310()
        ;   XREF to: 00567310 (UNCONDITIONAL_CALL)
    MOV ECX,0x45                        ; 005671e4
    ADD ESP,0x10                        ; 005671e9
    XOR EBX,EBX                         ; 005671ec
    MOVSD.REP ES:EDI,ESI                ; 005671ee
    LEA EAX,[ESP + 0x114]               ; 005671f0
        ;   Label: LAB_005671f0
    PUSH EAX                            ; 005671f7
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005671f8 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005671fd
    CMP EBX,EAX                         ; 00567200
    JL 0x00567221                       ; 00567202 | LAB_00567221
        ;   XREF to: 00567221 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00567204
    LEA EAX,[ESP + 0x118]               ; 00567206
    PUSH EAX                            ; 0056720d
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0056720e | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00567213
    ADD ESP,0x124                       ; 00567216
    POP EBP                             ; 0056721c
    POP EDI                             ; 0056721d
    POP ESI                             ; 0056721e
    POP EBX                             ; 0056721f
    RET                                 ; 00567220
    PUSH EBX                            ; 00567221
        ;   Label: LAB_00567221
    LEA EAX,[ESP + 0x118]               ; 00567222
    PUSH EAX                            ; 00567229
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0056722a | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    MOV DL,0x28                         ; 0056722f
    ADD ESP,0x8                         ; 00567231
    MOV ESI,EAX                         ; 00567234
    MOV EDI,EAX                         ; 00567236
    MOV AL,byte ptr [ESI]               ; 00567238
        ;   Label: LAB_00567238
    CMP AL,DL                           ; 0056723a
    JZ 0x00567250                       ; 0056723c | LAB_00567250
        ;   XREF to: 00567250 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 0056723e
    JZ 0x0056724e                       ; 00567240 | LAB_0056724e
        ;   XREF to: 0056724e (CONDITIONAL_JUMP)
    INC ESI                             ; 00567242
    MOV AL,byte ptr [ESI]               ; 00567243
    CMP AL,DL                           ; 00567245
    JZ 0x00567250                       ; 00567247 | LAB_00567250
        ;   XREF to: 00567250 (CONDITIONAL_JUMP)
    INC ESI                             ; 00567249
    CMP AL,0x0                          ; 0056724a
    JNZ 0x00567238                      ; 0056724c | LAB_00567238
        ;   XREF to: 00567238 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 0056724e
        ;   Label: LAB_0056724e
    TEST ESI,ESI                        ; 00567250
        ;   Label: LAB_00567250
    JZ 0x00567266                       ; 00567252 | LAB_00567266
        ;   XREF to: 00567266 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00567254
    PUSH EAX                            ; 00567256
    PUSH EDI                            ; 00567257
    PUSH EBP                            ; 00567258
    CALL core_script.cpp_CScript_ParseCounterUsed_FUN_00567490 ; 00567259 | undefined core_script.cpp_CScript_ParseCounterUsed_FUN_00567490()
        ;   XREF to: 00567490 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056725e
    JMP 0x00567306                      ; 00567261 | LAB_00567306
        ;   XREF to: 00567306 (UNCONDITIONAL_JUMP)
    PUSH 0x644047                       ; 00567266 | = "none" | s_none_00644047 = none
        ;   Label: LAB_00567266
    PUSH EBX                            ; 0056726b
    LEA EAX,[ESP + 0x11c]               ; 0056726c
    PUSH EAX                            ; 00567273
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00567274 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00567279
    PUSH EAX                            ; 0056727c
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0056727d | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00567282
    TEST EAX,EAX                        ; 00567285
    JZ 0x00567306                       ; 00567287 | LAB_00567306
        ;   XREF to: 00567306 (CONDITIONAL_JUMP)
    PUSH 0x64404c                       ; 0056728d | = "true" | s_true_0064404c = true
    PUSH EBX                            ; 00567292
    LEA EAX,[ESP + 0x11c]               ; 00567293
    PUSH EAX                            ; 0056729a
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0056729b | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005672a0
    PUSH EAX                            ; 005672a3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005672a4 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005672a9
    TEST EAX,EAX                        ; 005672ac
    JZ 0x00567306                       ; 005672ae | LAB_00567306
        ;   XREF to: 00567306 (CONDITIONAL_JUMP)
    PUSH 0x644051                       ; 005672b0 | = "false" | s_false_00644051 = false
    PUSH EBX                            ; 005672b5
    LEA EAX,[ESP + 0x11c]               ; 005672b6
    PUSH EAX                            ; 005672bd
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005672be | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005672c3
    PUSH EAX                            ; 005672c6
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005672c7 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005672cc
    TEST EAX,EAX                        ; 005672cf
    JZ 0x00567306                       ; 005672d1 | LAB_00567306
        ;   XREF to: 00567306 (CONDITIONAL_JUMP)
    MOV ESI,EDI                         ; 005672d3
    MOV EDI,ESP                         ; 005672d5
    PUSH EDI                            ; 005672d7
    MOV AL,byte ptr [ESI]               ; 005672d8
        ;   Label: LAB_005672d8
    MOV byte ptr [EDI],AL               ; 005672da
    CMP AL,0x0                          ; 005672dc
    JZ 0x005672f0                       ; 005672de | LAB_005672f0
        ;   XREF to: 005672f0 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005672e0
    ADD ESI,0x2                         ; 005672e3
    MOV byte ptr [EDI + 0x1],AL         ; 005672e6
    ADD EDI,0x2                         ; 005672e9
    CMP AL,0x0                          ; 005672ec
    JNZ 0x005672d8                      ; 005672ee | LAB_005672d8
        ;   XREF to: 005672d8 (CONDITIONAL_JUMP)
    POP EDI                             ; 005672f0
        ;   Label: LAB_005672f0
    MOV EAX,ESP                         ; 005672f1
    PUSH EAX                            ; 005672f3
    XOR ECX,ECX                         ; 005672f4
    PUSH EBP                            ; 005672f6
    MOV dword ptr [ESP + 0x108],ECX     ; 005672f7
    CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510 ; 005672fe | undefined core_script.cpp_CScript_ReallocSomething_FUN_00567510()
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00567303
    INC EBX                             ; 00567306
        ;   Label: LAB_00567306
    JMP 0x005671f0                      ; 00567307 | LAB_005671f0
        ;   XREF to: 005671f0 (UNCONDITIONAL_JUMP)

