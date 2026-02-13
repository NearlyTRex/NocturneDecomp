; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00567080(CScript *this_ptr,char *param_2,int *param_3)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int *            Stack[0xc]:4   param_3
; Local Variables:
; undefined1       Stack[-0x2374]:1  local_2374
; undefined1       Stack[-0x24c]:1  local_24c
; undefined1       Stack[-0x24b]:1  local_24b
; undefined1       Stack[-0x120]:1  local_120
; undefined1       Stack[-0x11f]:1  local_11f
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[2]:
;   core_script.cpp_CScript_FUN_00567010 at 00567059
;   core_script.cpp_CScript_FUN_00567630 at 00567682
;
; Referenced Globals:
;   TerminatedCString s_label_006441c0
;   TerminatedCString s_anon_006441c9
;   char*[141] g_CommandTemplates
;   undefined4 PTR_s_anon_006441c9_00680e2c
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   core_event.cpp_isValidIdentifierChar_FUN_004b0f90
;   core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090
;   core_script.cpp_CCmdParse_parse_FUN_00561fd0
;   core_script.cpp_CScript_FUN_00567510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567080
        ;   Label: core_script.cpp_CScript_FUN_00567080
    PUSH ESI                            ; 00567081
    PUSH EBP                            ; 00567082
    SUB ESP,0x2368                      ; 00567083
    MOV ESI,dword ptr [ESP + 0x237c]    ; 00567089
    MOV EBP,dword ptr [ESP + 0x2380]    ; 00567090
    XOR EBX,EBX                         ; 00567097
    MOV EDX,dword ptr [EBX + 0x680e28]  ; 00567099 | = ":<label>" | s_anon_006441c9 | g_CommandTemplates
        ;   Label: LAB_00567099
    PUSH EDX                            ; 0056709f | = ":<label>" | s_anon_006441c9
    PUSH ESI                            ; 005670a0
    LEA EAX,[ESP + 0x8]                 ; 005670a1
    PUSH EAX                            ; 005670a5
    CALL core_script.cpp_CCmdParse_parse_FUN_00561fd0 ; 005670a6
        ;   XREF to: 00561fd0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse * this_ptr, char * input_text, char * template_text)
    ADD ESP,0xc                         ; 005670ab
    CMP EAX,0x3                         ; 005670ae
    JZ 0x005670d3                       ; 005670b1
        ;   XREF to: 005670d3 (CONDITIONAL_JUMP)  ; LAB_005670d3
    ADD EBX,0x4                         ; 005670b3
    CMP EBX,0x1e0                       ; 005670b6
    JL 0x00567099                       ; 005670bc
        ;   XREF to: 00567099 (CONDITIONAL_JUMP)  ; LAB_00567099
    MOV AL,byte ptr [ESI]               ; 005670be
        ;   Label: LAB_005670be
    INC AL                              ; 005670c0
    AND EAX,0xff                        ; 005670c2
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005670c7 | g_CharacterClassificationTable
    JZ 0x005670eb                       ; 005670ce
        ;   XREF to: 005670eb (CONDITIONAL_JUMP)  ; LAB_005670eb
    INC ESI                             ; 005670d0
    JMP 0x005670be                      ; 005670d1
        ;   XREF to: 005670be (UNCONDITIONAL_JUMP)  ; LAB_005670be
    PUSH EBP                            ; 005670d3
        ;   Label: LAB_005670d3
    LEA EAX,[ESP + 0x4]                 ; 005670d4
    PUSH EAX                            ; 005670d8
    CALL core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090 ; 005670d9
        ;   XREF to: 00564090 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse * this_ptr, CDemonActor * actor) | = ":<label>"
    ADD ESP,0x8                         ; 005670de
    ADD ESP,0x2368                      ; 005670e1
        ;   Label: LAB_005670e1
    POP EBP                             ; 005670e7
    POP ESI                             ; 005670e8
    POP EBX                             ; 005670e9
    RET                                 ; 005670ea
    LEA EBX,[ESP + 0x2128]              ; 005670eb
        ;   Label: LAB_005670eb
    XOR EAX,EAX                         ; 005670f2
        ;   Label: LAB_005670f2
    MOV AL,byte ptr [ESI]               ; 005670f4
    PUSH EAX                            ; 005670f6
    CALL core_event.cpp_isValidIdentifierChar_FUN_004b0f90 ; 005670f7
        ;   XREF to: 004b0f90 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_004b0f90(int ch)
    ADD ESP,0x4                         ; 005670fc
    TEST EAX,EAX                        ; 005670ff
    JZ 0x0056710c                       ; 00567101
        ;   XREF to: 0056710c (CONDITIONAL_JUMP)  ; LAB_0056710c
    INC EBX                             ; 00567103
    MOV AL,byte ptr [ESI]               ; 00567104
    INC ESI                             ; 00567106
    MOV byte ptr [EBX + -0x1],AL        ; 00567107
    JMP 0x005670f2                      ; 0056710a
        ;   XREF to: 005670f2 (UNCONDITIONAL_JUMP)  ; LAB_005670f2
    MOV byte ptr [EBX],0x0              ; 0056710c
        ;   Label: LAB_0056710c
    MOV AL,byte ptr [ESI]               ; 0056710f
        ;   Label: LAB_0056710f
    INC AL                              ; 00567111
    AND EAX,0xff                        ; 00567113
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00567118 | g_CharacterClassificationTable
    JZ 0x00567124                       ; 0056711f
        ;   XREF to: 00567124 (CONDITIONAL_JUMP)  ; LAB_00567124
    INC ESI                             ; 00567121
    JMP 0x0056710f                      ; 00567122
        ;   XREF to: 0056710f (UNCONDITIONAL_JUMP)  ; LAB_0056710f
    CMP byte ptr [ESI],0x0              ; 00567124
        ;   Label: LAB_00567124
    JNZ 0x005670e1                      ; 00567127
        ;   XREF to: 005670e1 (CONDITIONAL_JUMP)  ; LAB_005670e1
    CMP byte ptr [ESP + 0x2128],0x0     ; 00567129
    JZ 0x005670e1                       ; 00567131
        ;   XREF to: 005670e1 (CONDITIONAL_JUMP)  ; LAB_005670e1
    PUSH EDI                            ; 00567133
    MOV ECX,0x45                        ; 00567134
    LEA EDI,[ESP + 0x2258]              ; 00567139
    MOV ESI,EBP                         ; 00567140
    MOVSD.REP ES:EDI,ESI                ; 00567142
    LEA ESI,[ESP + 0x212c]              ; 00567144
    LEA EDI,[ESP + 0x2258]              ; 0056714b
    PUSH EDI                            ; 00567152
    MOV AL,byte ptr [ESI]               ; 00567153
        ;   Label: LAB_00567153
    MOV byte ptr [EDI],AL               ; 00567155
    CMP AL,0x0                          ; 00567157
    JZ 0x0056716b                       ; 00567159
        ;   XREF to: 0056716b (CONDITIONAL_JUMP)  ; LAB_0056716b
    MOV AL,byte ptr [ESI + 0x1]         ; 0056715b
    ADD ESI,0x2                         ; 0056715e
    MOV byte ptr [EDI + 0x1],AL         ; 00567161
    ADD EDI,0x2                         ; 00567164
    CMP AL,0x0                          ; 00567167
    JNZ 0x00567153                      ; 00567169
        ;   XREF to: 00567153 (CONDITIONAL_JUMP)  ; LAB_00567153
    POP EDI                             ; 0056716b
        ;   Label: LAB_0056716b
    LEA EAX,[ESP + 0x2258]              ; 0056716c
    PUSH EAX                            ; 00567173
    MOV EBX,dword ptr [ESP + 0x2380]    ; 00567174
    MOV ECX,0x1                         ; 0056717b
    PUSH EBX                            ; 00567180
    MOV dword ptr [ESP + 0x2360],ECX    ; 00567181
    CALL core_script.cpp_CScript_FUN_00567510 ; 00567188
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00567510(CScript * this_ptr, int * param_2)
    ADD ESP,0x8                         ; 0056718d
    POP EDI                             ; 00567190
    ADD ESP,0x2368                      ; 00567191
    POP EBP                             ; 00567197
    POP ESI                             ; 00567198
    POP EBX                             ; 00567199
    RET                                 ; 0056719a

