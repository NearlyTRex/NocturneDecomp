; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_executeCommand_FUN_004aacc0(CEventList *this_ptr,char *command_buffer)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   command_buffer
; Local Variables:
; char[200]        Stack[-0x153d]:200  local_153d
; char[200]        Stack[-0x1475]:200  local_1475
; char[200]        Stack[-0x13ad]:200  local_13ad
; char[200]        Stack[-0x12e5]:200  local_12e5
; char[201]        Stack[-0x121d]:201  local_121d
; char[199]        Stack[-0x1154]:199  local_1154
; char[201]        Stack[-0x108d]:201  local_108d
; char[199]        Stack[-0xfc4]:199  local_fc4
; char[200]        Stack[-0xefd]:200  local_efd
; char[200]        Stack[-0xe35]:200  local_e35
; char[200]        Stack[-0xd6d]:200  local_d6d
; char[200]        Stack[-0xca5]:200  local_ca5
; char[200]        Stack[-0xbdd]:200  local_bdd
; char[2]          Stack[-0xb15]:2  local_b15
; undefined4[49]   Stack[-0xb13]:196  local_b13
; char[200]        Stack[-0xa4d]:200  local_a4d
; char[200]        Stack[-0x985]:200  local_985
; char[201]        Stack[-0x8bd]:201  local_8bd
; char[199]        Stack[-0x7f4]:199  local_7f4
; char[200]        Stack[-0x72d]:200  local_72d
; char[200]        Stack[-0x665]:200  local_665
; char[200]        Stack[-0x59d]:200  local_59d
; char[200]        Stack[-0x4d5]:200  local_4d5
; char[201]        Stack[-0x40d]:201  local_40d
; char[99]         Stack[-0x344]:99  local_344
; char[101]        Stack[-0x2e1]:101  local_2e1
; char[99]         Stack[-0x27c]:99  local_27c
; char[101]        Stack[-0x219]:101  local_219
; char[32]         Stack[-0x1b4]:32  local_1b4
; char[32]         Stack[-0x194]:32  local_194
; char[32]         Stack[-0x174]:32  local_174
; char[32]         Stack[-0x154]:32  local_154
; CVector3f        Stack[-0x134]:12  local_134
; CVector3f        Stack[-0x128]:12  local_128
; CVector3f        Stack[-0x11c]:12  local_11c
; CVector3f        Stack[-0x110]:12  local_110
; uint             Stack[-0xf8]:4  uStack_f8
; char *           Stack[-0xf4]:4  local_f4
; uint             Stack[-0xf0]:4  local_f0
; byte *           Stack[-0xec]:4  local_ec
; C3DSLight *      Stack[-0xe8]:4  local_e8
; int              Stack[-0xe4]:4  local_e4
; float[2]         Stack[-0xe0]:8  local_e0
; int              Stack[-0xd8]:4  local_d8
; int              Stack[-0xd4]:4  local_d4
; int              Stack[-0xd0]:4  local_d0
; float            Stack[-0xcc]:4  local_cc
; float            Stack[-0xc8]:4  local_c8
; int              Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; int              Stack[-0xb8]:4  local_b8
; int              Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; int              Stack[-0xac]:4  local_ac
; int              Stack[-0xa8]:4  local_a8
; int              Stack[-0xa4]:4  local_a4
; CVector3f *      Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; int              Stack[-0x98]:4  local_98
; int              Stack[-0x94]:4  local_94
; int              Stack[-0x90]:4  local_90
; int              Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; int              Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; int              Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; int              Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; C3DSLight *      Stack[-0x50]:4  local_50
; CDemonLight *    Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; CDemonLight *    Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommandString_FUN_004aac00 at 004aac74
;
; Referenced Globals:
;   TerminatedCString s_none_00624607
;   char s_EmptyChar_0062460c = \x00
;   TerminatedCString s_Event_name_s_is_too_long_0062460d
;   TerminatedCString s_core_event_cpp_00624627
;   TerminatedCString s_Too_many_events_00624639
;   TerminatedCString s_Event_name_s_is_not_vali_00624649
;   TerminatedCString s_advanceLightFilter_00624664
;   TerminatedCString s_SpotLight_s_doesn_t_exis_00624677
;   TerminatedCString s_core_event_cpp_00624693
;   TerminatedCString s_Can_t_find_CDemonLight_f_006246a5
;   TerminatedCString s_createExplosion_006246ec
;   TerminatedCString s_f_n_006246fc
;   TerminatedCString s_Error_parsing_createExpl_00624706
;   TerminatedCString s_f_f_f_n_0062472c
;   TerminatedCString s_n_0062473c
;   ... and 162 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470
;   core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_event.cpp_CEventList_getCounterValue_FUN_004b0830
;   core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40
;   core_event.cpp_CEventList_setCounter_FUN_004b0720
;   core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
;   core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
;   core_event.cpp_CEventList_validateCondition_FUN_004add00
;   core_event.cpp_extractParenArg_FUN_004aa6c0
;   core_event.cpp_formatEventError_FUN_004aa2a0
;   core_event.cpp_isValidIdentifierChar_FUN_004b0f90
;   core_event.cpp_parseDamageType_FUN_004aa960
;   ... and 38 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aacc0
        ;   Label: core_event.cpp_CEventList_executeCommand_FUN_004aacc0
    PUSH ESI                            ; 004aacc1
    PUSH EDI                            ; 004aacc2
    PUSH EBP                            ; 004aacc3
    MOV EBP,ESP                         ; 004aacc4
    SUB ESP,0x162c                      ; 004aacc6
    SUB EBP,0x7e                        ; 004aaccc
    MOV EBX,dword ptr [EBP + 0x96]      ; 004aaccf
    XOR AH,AH                           ; 004aacd5
    MOV byte ptr [0x02d0a460],AH        ; 004aacd7 | g_EventErrorMessageBuffer
    TEST EBX,EBX                        ; 004aacdd
    JZ 0x004aace6                       ; 004aacdf
        ;   XREF to: 004aace6 (CONDITIONAL_JUMP)  ; LAB_004aace6
    CMP byte ptr [EBX],0x0              ; 004aace1
    JNZ 0x004aacf3                      ; 004aace4
        ;   XREF to: 004aacf3 (CONDITIONAL_JUMP)  ; LAB_004aacf3
    MOV EAX,0x1                         ; 004aace6
        ;   Label: LAB_004aace6
    LEA ESP,[EBP + 0x7e]                ; 004aaceb
        ;   Label: LAB_004aaceb
    POP EBP                             ; 004aacee
    POP EDI                             ; 004aacef
    POP ESI                             ; 004aacf0
    POP EBX                             ; 004aacf1
    RET                                 ; 004aacf2
    PUSH 0x624607                       ; 004aacf3 | = "none"
        ;   Label: LAB_004aacf3
    PUSH EBX                            ; 004aacf8
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aacf9
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aacfe
    TEST EAX,EAX                        ; 004aad01
    JZ 0x004aace6                       ; 004aad03
        ;   XREF to: 004aace6 (CONDITIONAL_JUMP)  ; LAB_004aace6
    CMP byte ptr [EBX],0x2e             ; 004aad05
    JNZ 0x004aad0b                      ; 004aad08
        ;   XREF to: 004aad0b (CONDITIONAL_JUMP)  ; LAB_004aad0b
    INC EBX                             ; 004aad0a
    CMP dword ptr [0x02d0a45c],0x0      ; 004aad0b | g_EventDryRun
        ;   Label: LAB_004aad0b
    SETZ AL                             ; 004aad12
    MOV ECX,0x62460c                    ; 004aad15 | s_EmptyChar_0062460c
    MOV DL,0x28                         ; 004aad1a
    AND EAX,0xff                        ; 004aad1c
    MOV ESI,EBX                         ; 004aad21
    MOV dword ptr [EBP + -0x62],EAX     ; 004aad23
    MOV dword ptr [EBP + -0x5e],ECX     ; 004aad26 | s_EmptyChar_0062460c
    MOV AL,byte ptr [ESI]               ; 004aad29
        ;   Label: LAB_004aad29
    CMP AL,DL                           ; 004aad2b
    JZ 0x004aad41                       ; 004aad2d
        ;   XREF to: 004aad41 (CONDITIONAL_JUMP)  ; LAB_004aad41
    CMP AL,0x0                          ; 004aad2f
    JZ 0x004aad3f                       ; 004aad31
        ;   XREF to: 004aad3f (CONDITIONAL_JUMP)  ; LAB_004aad3f
    INC ESI                             ; 004aad33
    MOV AL,byte ptr [ESI]               ; 004aad34
    CMP AL,DL                           ; 004aad36
    JZ 0x004aad41                       ; 004aad38
        ;   XREF to: 004aad41 (CONDITIONAL_JUMP)  ; LAB_004aad41
    INC ESI                             ; 004aad3a
    CMP AL,0x0                          ; 004aad3b
    JNZ 0x004aad29                      ; 004aad3d
        ;   XREF to: 004aad29 (CONDITIONAL_JUMP)  ; LAB_004aad29
    SUB ESI,ESI                         ; 004aad3f
        ;   Label: LAB_004aad3f
    TEST ESI,ESI                        ; 004aad41
        ;   Label: LAB_004aad41
    JNZ 0x004aae8d                      ; 004aad43
        ;   XREF to: 004aae8d (CONDITIONAL_JUMP)  ; LAB_004aae8d
    MOV EAX,dword ptr [EBP + 0x92]      ; 004aad49
    MOV ESI,dword ptr [EAX]             ; 004aad4f
    XOR EDI,EDI                         ; 004aad51
    TEST ESI,ESI                        ; 004aad53
    JLE 0x004aad7c                      ; 004aad55
        ;   XREF to: 004aad7c (CONDITIONAL_JUMP)  ; LAB_004aad7c
    LEA ESI,[EAX + 0x4]                 ; 004aad57
    PUSH EBX                            ; 004aad5a
        ;   Label: LAB_004aad5a
    PUSH ESI                            ; 004aad5b
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aad5c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aad61
    TEST EAX,EAX                        ; 004aad64
    JZ 0x004aace6                       ; 004aad66
        ;   XREF to: 004aace6 (CONDITIONAL_JUMP)  ; LAB_004aace6
    MOV EAX,dword ptr [EBP + 0x92]      ; 004aad6c
    INC EDI                             ; 004aad72
    MOV ECX,dword ptr [EAX]             ; 004aad73
    ADD ESI,0x20                        ; 004aad75
    CMP EDI,ECX                         ; 004aad78
    JL 0x004aad5a                       ; 004aad7a
        ;   XREF to: 004aad5a (CONDITIONAL_JUMP)  ; LAB_004aad5a
    MOV EDI,EBX                         ; 004aad7c
        ;   Label: LAB_004aad7c
    SUB ECX,ECX                         ; 004aad7e
    DEC ECX                             ; 004aad80
    XOR EAX,EAX                         ; 004aad81
    SCASB.REPNE ES:EDI                  ; 004aad83
    NOT ECX                             ; 004aad85
    DEC ECX                             ; 004aad87
    CMP ECX,0x20                        ; 004aad88
    JNC 0x004aae11                      ; 004aad8b
        ;   XREF to: 004aae11 (CONDITIONAL_JUMP)  ; LAB_004aae11
    MOV EAX,dword ptr [EBP + 0x92]      ; 004aad91
    CMP dword ptr [EAX],0x64            ; 004aad97
    JGE 0x004aae27                      ; 004aad9a
        ;   XREF to: 004aae27 (CONDITIONAL_JUMP)  ; LAB_004aae27
    MOV ECX,dword ptr [EBP + 0x92]      ; 004aada0
        ;   Label: LAB_004aada0
    MOV EAX,dword ptr [EBP + 0x92]      ; 004aada6
    MOV ESI,EBX                         ; 004aadac
    MOV ECX,dword ptr [ECX]             ; 004aadae
    ADD EAX,0x4                         ; 004aadb0
    SHL ECX,0x5                         ; 004aadb3
    XOR EDX,EDX                         ; 004aadb6
    ADD EAX,ECX                         ; 004aadb8
    MOV dword ptr [EBP + 0x7a],EDX      ; 004aadba
    MOV EDI,EAX                         ; 004aadbd
    MOV dword ptr [EBP + -0x66],EAX     ; 004aadbf
    PUSH EDI                            ; 004aadc2
    MOV AL,byte ptr [ESI]               ; 004aadc3
        ;   Label: LAB_004aadc3
    MOV byte ptr [EDI],AL               ; 004aadc5
    CMP AL,0x0                          ; 004aadc7
    JZ 0x004aaddb                       ; 004aadc9
        ;   XREF to: 004aaddb (CONDITIONAL_JUMP)  ; LAB_004aaddb
    MOV AL,byte ptr [ESI + 0x1]         ; 004aadcb
    ADD ESI,0x2                         ; 004aadce
    MOV byte ptr [EDI + 0x1],AL         ; 004aadd1
    ADD EDI,0x2                         ; 004aadd4
    CMP AL,0x0                          ; 004aadd7
    JNZ 0x004aadc3                      ; 004aadd9
        ;   XREF to: 004aadc3 (CONDITIONAL_JUMP)  ; LAB_004aadc3
    POP EDI                             ; 004aaddb
        ;   Label: LAB_004aaddb
    MOV ESI,EDI                         ; 004aaddc
    MOV EDI,dword ptr [EBP + -0x66]     ; 004aadde
        ;   Label: LAB_004aadde
    SUB ECX,ECX                         ; 004aade1
    DEC ECX                             ; 004aade3
    XOR EAX,EAX                         ; 004aade4
    SCASB.REPNE ES:EDI                  ; 004aade6
    NOT ECX                             ; 004aade8
    DEC ECX                             ; 004aadea
    MOV EDI,dword ptr [EBP + 0x7a]      ; 004aadeb
    CMP ECX,EDI                         ; 004aadee
    JA 0x004aae57                       ; 004aadf0
        ;   XREF to: 004aae57 (CONDITIONAL_JUMP)  ; LAB_004aae57
    CMP dword ptr [EBP + -0x62],0x0     ; 004aadf2
    JZ 0x004aace6                       ; 004aadf6
        ;   XREF to: 004aace6 (CONDITIONAL_JUMP)  ; LAB_004aace6
    MOV EAX,dword ptr [EBP + 0x92]      ; 004aadfc
    INC dword ptr [EAX]                 ; 004aae02
    MOV EAX,0x1                         ; 004aae04
    LEA ESP,[EBP + 0x7e]                ; 004aae09
    POP EBP                             ; 004aae0c
    POP EDI                             ; 004aae0d
    POP ESI                             ; 004aae0e
    POP EBX                             ; 004aae0f
    RET                                 ; 004aae10
    PUSH EBX                            ; 004aae11
        ;   Label: LAB_004aae11
    PUSH 0x62460d                       ; 004aae12 | = "Event name %s is too long"
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004aae17
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004aae1c
    LEA ESP,[EBP + 0x7e]                ; 004aae1f
    POP EBP                             ; 004aae22
    POP EDI                             ; 004aae23
    POP ESI                             ; 004aae24
    POP EBX                             ; 004aae25
    RET                                 ; 004aae26
    MOV EDI,0x624627                    ; 004aae27 | = "..\\core\\event.cpp"
        ;   Label: LAB_004aae27
    MOV EAX,0x257                       ; 004aae2c
    PUSH 0x624639                       ; 004aae31 | = "Too many events"
    MOV dword ptr [0x02f0ca48],EDI      ; 004aae36 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004aae3c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004aae41
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004aae46
    JMP 0x004aada0                      ; 004aae49
        ;   XREF to: 004aada0 (UNCONDITIONAL_JUMP)  ; LAB_004aada0
    LEA ECX,[EDI + 0x1]                 ; 004aae4e
        ;   Label: LAB_004aae4e
    INC ESI                             ; 004aae51
    MOV dword ptr [EBP + 0x7a],ECX      ; 004aae52
    JMP 0x004aadde                      ; 004aae55
        ;   XREF to: 004aadde (UNCONDITIONAL_JUMP)  ; LAB_004aadde
    XOR EAX,EAX                         ; 004aae57
        ;   Label: LAB_004aae57
    MOV AL,byte ptr [ESI]               ; 004aae59
    PUSH EAX                            ; 004aae5b
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004aae5c
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    MOV byte ptr [ESI],AL               ; 004aae61
    XOR EAX,EAX                         ; 004aae63
    ADD ESP,0x4                         ; 004aae65
    MOV AL,byte ptr [ESI]               ; 004aae68
    PUSH EAX                            ; 004aae6a
    CALL core_event.cpp_isValidIdentifierChar_FUN_004b0f90 ; 004aae6b
        ;   XREF to: 004b0f90 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_004b0f90(int ch)
    ADD ESP,0x4                         ; 004aae70
    TEST EAX,EAX                        ; 004aae73
    JNZ 0x004aae4e                      ; 004aae75
        ;   XREF to: 004aae4e (CONDITIONAL_JUMP)  ; LAB_004aae4e
    PUSH EBX                            ; 004aae77
    PUSH 0x624649                       ; 004aae78 | = "Event name %s is not valid"
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004aae7d
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004aae82
    LEA ESP,[EBP + 0x7e]                ; 004aae85
    POP EBP                             ; 004aae88
    POP EDI                             ; 004aae89
    POP ESI                             ; 004aae8a
    POP EBX                             ; 004aae8b
    RET                                 ; 004aae8c
    PUSH 0x12                           ; 004aae8d
        ;   Label: LAB_004aae8d
    PUSH 0x624664                       ; 004aae8f | = "advanceLightFilter"
    PUSH EBX                            ; 004aae94
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004aae95
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004aae9a
    TEST EAX,EAX                        ; 004aae9d
    JNZ 0x004aafc4                      ; 004aae9f
        ;   XREF to: 004aafc4 (CONDITIONAL_JUMP)  ; LAB_004aafc4
    MOV AL,byte ptr [EBX + 0x12]        ; 004aaea5
    INC AL                              ; 004aaea8
    AND EAX,0xff                        ; 004aaeaa
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004aaeaf | g_CharacterClassificationTable
    JNZ 0x004aafc4                      ; 004aaeb6
        ;   XREF to: 004aafc4 (CONDITIONAL_JUMP)  ; LAB_004aafc4
    LEA EAX,[EBX + 0x12]                ; 004aaebc
    MOV BL,byte ptr [EAX]               ; 004aaebf
        ;   Label: LAB_004aaebf
    XOR ECX,ECX                         ; 004aaec1
    INC BL                              ; 004aaec3
    MOV CL,BL                           ; 004aaec5
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004aaec7 | g_CharacterClassificationTable
    JZ 0x004aaed3                       ; 004aaece
        ;   XREF to: 004aaed3 (CONDITIONAL_JUMP)  ; LAB_004aaed3
    INC EAX                             ; 004aaed0
    JMP 0x004aaebf                      ; 004aaed1
        ;   XREF to: 004aaebf (UNCONDITIONAL_JUMP)  ; LAB_004aaebf
    PUSH 0xc8                           ; 004aaed3
        ;   Label: LAB_004aaed3
    MOV dword ptr [EBP + -0x5e],EAX     ; 004aaed8
    LEA EAX,[EBP + 0xfffff0ca]          ; 004aaedb
    PUSH EAX                            ; 004aaee1
    LEA EAX,[EBP + -0x5e]               ; 004aaee2
    PUSH EAX                            ; 004aaee5
    CALL core_event.cpp_extractParenArg_FUN_004aa6c0 ; 004aaee6
        ;   XREF to: 004aa6c0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_extractParenArg_FUN_004aa6c0(char * * cursor, char * out_buf, int max_len)
    ADD ESP,0xc                         ; 004aaeeb
    TEST EAX,EAX                        ; 004aaeee
    JNZ 0x004aaf38                      ; 004aaef0
        ;   XREF to: 004aaf38 (CONDITIONAL_JUMP)  ; LAB_004aaf38
    LEA EAX,[EBP + 0x4a]                ; 004aaef2
    PUSH EAX                            ; 004aaef5
    LEA EAX,[EBP + -0x5a]               ; 004aaef6
    PUSH EAX                            ; 004aaef9
    LEA EAX,[EBP + 0xfffff0ca]          ; 004aaefa
    PUSH EAX                            ; 004aaf00
    MOV EDI,dword ptr [0x006810c8]      ; 004aaf01 | g_CDemonSetPtr
    PUSH EDI                            ; 004aaf07 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10 ; 004aaf08
        ;   XREF to: 00570f10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    MOV EAX,dword ptr [EBP + -0x5a]     ; 004aaf0d
    ADD ESP,0x10                        ; 004aaf10
    TEST EAX,EAX                        ; 004aaf13
    JZ 0x004aaf63                       ; 004aaf15
        ;   XREF to: 004aaf63 (CONDITIONAL_JUMP)  ; LAB_004aaf63
    CMP dword ptr [EBP + -0x62],0x0     ; 004aaf17
    JNZ 0x004aaf7f                      ; 004aaf1b
        ;   XREF to: 004aaf7f (CONDITIONAL_JUMP)  ; LAB_004aaf7f
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004aaf1d
        ;   Label: LAB_004aaf1d
    MOV BL,byte ptr [EAX]               ; 004aaf20
        ;   Label: LAB_004aaf20
    XOR ECX,ECX                         ; 004aaf22
    INC BL                              ; 004aaf24
    MOV CL,BL                           ; 004aaf26
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004aaf28 | g_CharacterClassificationTable
    JZ 0x004adbe5                       ; 004aaf2f
        ;   XREF to: 004adbe5 (CONDITIONAL_JUMP)  ; LAB_004adbe5
    INC EAX                             ; 004aaf35
    JMP 0x004aaf20                      ; 004aaf36
        ;   XREF to: 004aaf20 (UNCONDITIONAL_JUMP)  ; LAB_004aaf20
    MOV EDI,0x2d0a460                   ; 004aaf38 | g_EventErrorMessageBuffer
        ;   Label: LAB_004aaf38
    MOV ESI,EAX                         ; 004aaf3d
    PUSH EDI                            ; 004aaf3f | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aaf40
        ;   Label: LAB_004aaf40
    MOV byte ptr [EDI],AL               ; 004aaf42 | g_EventErrorMessageBuffer | g_EventErrorMessageBuffer+2
    CMP AL,0x0                          ; 004aaf44
    JZ 0x004aaf58                       ; 004aaf46
        ;   XREF to: 004aaf58 (CONDITIONAL_JUMP)  ; LAB_004aaf58
    MOV AL,byte ptr [ESI + 0x1]         ; 004aaf48
    ADD ESI,0x2                         ; 004aaf4b
    MOV byte ptr [EDI + 0x1],AL         ; 004aaf4e | g_EventErrorMessageBuffer+1 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aaf51
    CMP AL,0x0                          ; 004aaf54
    JNZ 0x004aaf40                      ; 004aaf56
        ;   XREF to: 004aaf40 (CONDITIONAL_JUMP)  ; LAB_004aaf40
    POP EDI                             ; 004aaf58
        ;   Label: LAB_004aaf58
    XOR EAX,EAX                         ; 004aaf59
    LEA ESP,[EBP + 0x7e]                ; 004aaf5b
    POP EBP                             ; 004aaf5e
    POP EDI                             ; 004aaf5f
    POP ESI                             ; 004aaf60
    POP EBX                             ; 004aaf61
    RET                                 ; 004aaf62
    LEA EAX,[EBP + 0xfffff0ca]          ; 004aaf63
        ;   Label: LAB_004aaf63
    PUSH EAX                            ; 004aaf69
    PUSH 0x624677                       ; 004aaf6a | = "SpotLight %s doesn't exist."
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004aaf6f
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004aaf74
    LEA ESP,[EBP + 0x7e]                ; 004aaf77
    POP EBP                             ; 004aaf7a
    POP EDI                             ; 004aaf7b
    POP ESI                             ; 004aaf7c
    POP EBX                             ; 004aaf7d
    RET                                 ; 004aaf7e
    CMP dword ptr [EBP + 0x4a],0x0      ; 004aaf7f
        ;   Label: LAB_004aaf7f
    JNZ 0x004aafaf                      ; 004aaf83
        ;   XREF to: 004aafaf (CONDITIONAL_JUMP)  ; LAB_004aafaf
    LEA EAX,[EBP + 0xfffff0ca]          ; 004aaf85
    PUSH EAX                            ; 004aaf8b
    MOV EBX,0x624693                    ; 004aaf8c | = "..\\core\\event.cpp"
    MOV ESI,0x27f                       ; 004aaf91
    PUSH 0x6246a5                       ; 004aaf96 | = "Can't find CDemonLight for light %s i..."
    MOV dword ptr [0x02f0ca48],EBX      ; 004aaf9b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004aafa1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004aafa7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004aafac
    MOV EDI,dword ptr [EBP + 0x4a]      ; 004aafaf
        ;   Label: LAB_004aafaf
    PUSH EDI                            ; 004aafb2
    MOV EAX,dword ptr [EBP + -0x5a]     ; 004aafb3
    PUSH EAX                            ; 004aafb6
    CALL core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70 ; 004aafb7
        ;   XREF to: 00586e70 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 004aafbc
    JMP 0x004aaf1d                      ; 004aafbf
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xf                            ; 004aafc4
        ;   Label: LAB_004aafc4
    PUSH 0x6246ec                       ; 004aafc6 | = "createExplosion"
    PUSH EBX                            ; 004aafcb
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004aafcc
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004aafd1
    TEST EAX,EAX                        ; 004aafd4
    JNZ 0x004ab274                      ; 004aafd6
        ;   XREF to: 004ab274 (CONDITIONAL_JUMP)  ; LAB_004ab274
    MOV AL,byte ptr [EBX + 0xf]         ; 004aafdc
    INC AL                              ; 004aafdf
    AND EAX,0xff                        ; 004aafe1
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004aafe6 | g_CharacterClassificationTable
    JNZ 0x004ab274                      ; 004aafed
        ;   XREF to: 004ab274 (CONDITIONAL_JUMP)  ; LAB_004ab274
    LEA EAX,[EBX + 0xf]                 ; 004aaff3
    MOV BL,byte ptr [EAX]               ; 004aaff6
        ;   Label: LAB_004aaff6
    XOR ECX,ECX                         ; 004aaff8
    INC BL                              ; 004aaffa
    MOV CL,BL                           ; 004aaffc
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004aaffe | g_CharacterClassificationTable
    JZ 0x004ab00a                       ; 004ab005
        ;   XREF to: 004ab00a (CONDITIONAL_JUMP)  ; LAB_004ab00a
    INC EAX                             ; 004ab007
    JMP 0x004aaff6                      ; 004ab008
        ;   XREF to: 004aaff6 (UNCONDITIONAL_JUMP)  ; LAB_004aaff6
    LEA ECX,[EBP + -0x56]               ; 004ab00a
        ;   Label: LAB_004ab00a
    PUSH ECX                            ; 004ab00d
    LEA ECX,[EBP + -0x52]               ; 004ab00e
    PUSH ECX                            ; 004ab011
    PUSH 0x6246fc                       ; 004ab012 | = "( %f , %n"
    MOV EDX,0xffffffff                  ; 004ab017
    PUSH EAX                            ; 004ab01c
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab01d
    MOV dword ptr [EBP + -0x56],EDX     ; 004ab020
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab023
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x56]     ; 004ab028
    ADD ESP,0x10                        ; 004ab02b
    TEST ECX,ECX                        ; 004ab02e
    JL 0x004ab098                       ; 004ab030
        ;   XREF to: 004ab098 (CONDITIONAL_JUMP)  ; LAB_004ab098
    LEA EAX,[EBP + -0x56]               ; 004ab032
    PUSH EAX                            ; 004ab035
    LEA EAX,[EBP + 0xffffff6e]          ; 004ab036
    PUSH EAX                            ; 004ab03c
    LEA EAX,[EBP + 0xffffff6a]          ; 004ab03d
    PUSH EAX                            ; 004ab043
    LEA EAX,[EBP + 0xffffff66]          ; 004ab044
    PUSH EAX                            ; 004ab04a
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004ab04b
    PUSH 0x62472c                       ; 004ab04e | = "%f , %f , %f %n"
    ADD EBX,ECX                         ; 004ab053
    MOV ESI,0xffffffff                  ; 004ab055
    PUSH EBX                            ; 004ab05a
    MOV dword ptr [EBP + -0x56],ESI     ; 004ab05b
    MOV dword ptr [EBP + -0x5e],EBX     ; 004ab05e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab061
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x56]     ; 004ab066
    ADD ESP,0x18                        ; 004ab069
    TEST EAX,EAX                        ; 004ab06c
    JL 0x004ab0ad                       ; 004ab06e
        ;   XREF to: 004ab0ad (CONDITIONAL_JUMP)  ; LAB_004ab0ad
    CMP dword ptr [EBP + -0x56],0x0     ; 004ab070
        ;   Label: LAB_004ab070
    JL 0x004ab19e                       ; 004ab074
        ;   XREF to: 004ab19e (CONDITIONAL_JUMP)  ; LAB_004ab19e
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ab07a
    ADD EAX,dword ptr [EBP + -0x56]     ; 004ab07d
    MOV BL,byte ptr [EAX]               ; 004ab080
        ;   Label: LAB_004ab080
    XOR ECX,ECX                         ; 004ab082
    INC BL                              ; 004ab084
    MOV CL,BL                           ; 004ab086
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab088 | g_CharacterClassificationTable
    JZ 0x004ab1b3                       ; 004ab08f
        ;   XREF to: 004ab1b3 (CONDITIONAL_JUMP)  ; LAB_004ab1b3
    INC EAX                             ; 004ab095
    JMP 0x004ab080                      ; 004ab096
        ;   XREF to: 004ab080 (UNCONDITIONAL_JUMP)  ; LAB_004ab080
    PUSH 0x624706                       ; 004ab098 | = "Error parsing createExplosion() parms"
        ;   Label: LAB_004ab098
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab09d
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab0a2
    LEA ESP,[EBP + 0x7e]                ; 004ab0a5
    POP EBP                             ; 004ab0a8
    POP EDI                             ; 004ab0a9
    POP ESI                             ; 004ab0aa
    POP EBX                             ; 004ab0ab
    RET                                 ; 004ab0ac
    LEA EAX,[EBP + -0x56]               ; 004ab0ad
        ;   Label: LAB_004ab0ad
    PUSH EAX                            ; 004ab0b0
    LEA EAX,[EBP + 0xfffffbba]          ; 004ab0b1
    PUSH EAX                            ; 004ab0b7
    PUSH 0x62473c                       ; 004ab0b8 | = " %[^,)] %n"
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ab0bd
    PUSH EDX                            ; 004ab0c0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab0c1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x56]     ; 004ab0c6
    ADD ESP,0x10                        ; 004ab0c9
    TEST ECX,ECX                        ; 004ab0cc
    JL 0x004ab070                       ; 004ab0ce
        ;   XREF to: 004ab070 (CONDITIONAL_JUMP)  ; LAB_004ab070
    LEA EDI,[EBP + 0xfffffbba]          ; 004ab0d0
    LEA EBX,[EBP + 0xfffffbba]          ; 004ab0d6
    SUB ECX,ECX                         ; 004ab0dc
    DEC ECX                             ; 004ab0de
    XOR EAX,EAX                         ; 004ab0df
    SCASB.REPNE ES:EDI                  ; 004ab0e1
    NOT ECX                             ; 004ab0e3
    DEC ECX                             ; 004ab0e5
    MOV EDI,ECX                         ; 004ab0e6
    TEST ECX,ECX                        ; 004ab0e8
    JLE 0x004ab108                      ; 004ab0ea
        ;   XREF to: 004ab108 (CONDITIONAL_JUMP)  ; LAB_004ab108
    LEA EAX,[EBP + 0xfffffbba]          ; 004ab0ec
    ADD EAX,ECX                         ; 004ab0f2
    MOV CL,byte ptr [EAX + -0x1]        ; 004ab0f4
        ;   Label: LAB_004ab0f4
    INC CL                              ; 004ab0f7
    AND ECX,0xff                        ; 004ab0f9
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab0ff | g_CharacterClassificationTable
    JNZ 0x004ab131                      ; 004ab106
        ;   XREF to: 004ab131 (CONDITIONAL_JUMP)  ; LAB_004ab131
    LEA EAX,[EBX + EDI*0x1]             ; 004ab108
        ;   Label: LAB_004ab108
    LEA ESI,[EBX + 0x1]                 ; 004ab10b
    MOV byte ptr [EAX],0x0              ; 004ab10e
    MOV AL,byte ptr [EBX]               ; 004ab111
        ;   Label: LAB_004ab111
    INC AL                              ; 004ab113
    AND EAX,0xff                        ; 004ab115
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ab11a | g_CharacterClassificationTable
    JZ 0x004ab139                       ; 004ab121
        ;   XREF to: 004ab139 (CONDITIONAL_JUMP)  ; LAB_004ab139
    PUSH EDI                            ; 004ab123
    PUSH ESI                            ; 004ab124
    PUSH EBX                            ; 004ab125
    DEC EDI                             ; 004ab126
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ab127
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ab12c
    JMP 0x004ab111                      ; 004ab12f
        ;   XREF to: 004ab111 (UNCONDITIONAL_JUMP)  ; LAB_004ab111
    DEC EDI                             ; 004ab131
        ;   Label: LAB_004ab131
    DEC EAX                             ; 004ab132
    TEST EDI,EDI                        ; 004ab133
    JG 0x004ab0f4                       ; 004ab135
        ;   XREF to: 004ab0f4 (CONDITIONAL_JUMP)  ; LAB_004ab0f4
    JMP 0x004ab108                      ; 004ab137
        ;   XREF to: 004ab108 (UNCONDITIONAL_JUMP)  ; LAB_004ab108
    PUSH 0x821ff8                       ; 004ab139 | g_CDemonActorClassInfo
        ;   Label: LAB_004ab139
    MOV EBX,dword ptr [0x00822030]      ; 004ab13e | g_CDemonActorClassInfo.name_hash
    PUSH EBX                            ; 004ab144
    LEA EAX,[EBP + 0xfffffbba]          ; 004ab145
    PUSH EAX                            ; 004ab14b
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004ab14c
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004ab151
    TEST EAX,EAX                        ; 004ab154
    JZ 0x004aaceb                       ; 004ab156
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EAX,dword ptr [0x0065d95c]      ; 004ab15c | g_ActorNameSentinel
    JNZ 0x004ab16e                      ; 004ab162
        ;   XREF to: 004ab16e (CONDITIONAL_JUMP)  ; LAB_004ab16e
    XOR EDI,EDI                         ; 004ab164
    MOV dword ptr [EBP + -0x62],EDI     ; 004ab166
    JMP 0x004ab070                      ; 004ab169
        ;   XREF to: 004ab070 (UNCONDITIONAL_JUMP)  ; LAB_004ab070
    LEA ECX,[EAX + 0x20]                ; 004ab16e
        ;   Label: LAB_004ab16e
    LEA EAX,[EBP + 0xffffff66]          ; 004ab171
    CMP EAX,ECX                         ; 004ab177
    JZ 0x004ab070                       ; 004ab179
        ;   XREF to: 004ab070 (CONDITIONAL_JUMP)  ; LAB_004ab070
    MOV EAX,dword ptr [ECX]             ; 004ab17f
    MOV dword ptr [EBP + 0xffffff66],EAX ; 004ab181
    MOV EAX,dword ptr [ECX + 0x4]       ; 004ab187
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 004ab18a
    MOV EAX,dword ptr [ECX + 0x8]       ; 004ab190
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 004ab193
    JMP 0x004ab070                      ; 004ab199
        ;   XREF to: 004ab070 (UNCONDITIONAL_JUMP)  ; LAB_004ab070
    PUSH 0x624747                       ; 004ab19e | = "Error parsing createExplosion() parms"
        ;   Label: LAB_004ab19e
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab1a3
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab1a8
    LEA ESP,[EBP + 0x7e]                ; 004ab1ab
    POP EBP                             ; 004ab1ae
    POP EDI                             ; 004ab1af
    POP ESI                             ; 004ab1b0
    POP EBX                             ; 004ab1b1
    RET                                 ; 004ab1b2
    MOV ECX,0x40800000                  ; 004ab1b3
        ;   Label: LAB_004ab1b3
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab1b8
    MOV dword ptr [EBP + -0x4e],ECX     ; 004ab1bb
    CMP byte ptr [EAX],0x2c             ; 004ab1be
    JZ 0x004ab204                       ; 004ab1c1
        ;   XREF to: 004ab204 (CONDITIONAL_JUMP)  ; LAB_004ab204
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ab1c3
        ;   Label: LAB_004ab1c3
    CMP byte ptr [EAX],0x29             ; 004ab1c6
    JNZ 0x004ab25f                      ; 004ab1c9
        ;   XREF to: 004ab25f (CONDITIONAL_JUMP)  ; LAB_004ab25f
    INC EAX                             ; 004ab1cf
    MOV EDX,dword ptr [EBP + -0x62]     ; 004ab1d0
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab1d3
    TEST EDX,EDX                        ; 004ab1d6
    JZ 0x004aaf1d                       ; 004ab1d8
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH dword ptr [EBP + -0x4e]        ; 004ab1de
    PUSH 0x44bb8000                     ; 004ab1e1
    LEA EAX,[EBP + 0xffffff66]          ; 004ab1e6
    PUSH dword ptr [EBP + -0x52]        ; 004ab1ec
    PUSH EAX                            ; 004ab1ef
    MOV ECX,dword ptr [0x0067a3d0]      ; 004ab1f0 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004ab1f6 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10 ; 004ab1f7
        ;   XREF to: 004c8c10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 004ab1fc
    JMP 0x004aaf1d                      ; 004ab1ff
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA ECX,[EBP + -0x56]               ; 004ab204
        ;   Label: LAB_004ab204
    PUSH ECX                            ; 004ab207
    LEA ECX,[EBP + -0x4e]               ; 004ab208
    PUSH ECX                            ; 004ab20b
    PUSH 0x62476d                       ; 004ab20c | = ", %f %n"
    MOV EBX,0xffffffff                  ; 004ab211
    PUSH EAX                            ; 004ab216
    MOV dword ptr [EBP + -0x56],EBX     ; 004ab217
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab21a
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + -0x56]     ; 004ab21f
    ADD ESP,0x10                        ; 004ab222
    TEST ESI,ESI                        ; 004ab225
    JL 0x004ab242                       ; 004ab227
        ;   XREF to: 004ab242 (CONDITIONAL_JUMP)  ; LAB_004ab242
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ab229
    ADD EAX,ESI                         ; 004ab22c
    MOV BL,byte ptr [EAX]               ; 004ab22e
        ;   Label: LAB_004ab22e
    XOR ECX,ECX                         ; 004ab230
    INC BL                              ; 004ab232
    MOV CL,BL                           ; 004ab234
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab236 | g_CharacterClassificationTable
    JZ 0x004ab257                       ; 004ab23d
        ;   XREF to: 004ab257 (CONDITIONAL_JUMP)  ; LAB_004ab257
    INC EAX                             ; 004ab23f
    JMP 0x004ab22e                      ; 004ab240
        ;   XREF to: 004ab22e (UNCONDITIONAL_JUMP)  ; LAB_004ab22e
    PUSH 0x624775                       ; 004ab242 | = "Error parsing createExplosion() parms"
        ;   Label: LAB_004ab242
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab247
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab24c
    LEA ESP,[EBP + 0x7e]                ; 004ab24f
    POP EBP                             ; 004ab252
    POP EDI                             ; 004ab253
    POP ESI                             ; 004ab254
    POP EBX                             ; 004ab255
    RET                                 ; 004ab256
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab257
        ;   Label: LAB_004ab257
    JMP 0x004ab1c3                      ; 004ab25a
        ;   XREF to: 004ab1c3 (UNCONDITIONAL_JUMP)  ; LAB_004ab1c3
    PUSH 0x62479b                       ; 004ab25f | = "Error parsing createExplosion() parms..."
        ;   Label: LAB_004ab25f
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab264
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab269
    LEA ESP,[EBP + 0x7e]                ; 004ab26c
    POP EBP                             ; 004ab26f
    POP EDI                             ; 004ab270
    POP ESI                             ; 004ab271
    POP EBX                             ; 004ab272
    RET                                 ; 004ab273
    PUSH 0xb                            ; 004ab274
        ;   Label: LAB_004ab274
    PUSH 0x6247d8                       ; 004ab276 | = "deleteActor"
    PUSH EBX                            ; 004ab27b
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab27c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab281
    TEST EAX,EAX                        ; 004ab284
    JNZ 0x004ab38f                      ; 004ab286
        ;   XREF to: 004ab38f (CONDITIONAL_JUMP)  ; LAB_004ab38f
    MOV AL,byte ptr [EBX + 0xb]         ; 004ab28c
    INC AL                              ; 004ab28f
    AND EAX,0xff                        ; 004ab291
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab296 | g_CharacterClassificationTable
    JNZ 0x004ab38f                      ; 004ab29d
        ;   XREF to: 004ab38f (CONDITIONAL_JUMP)  ; LAB_004ab38f
    LEA EAX,[EBX + 0xb]                 ; 004ab2a3
    MOV BL,byte ptr [EAX]               ; 004ab2a6
        ;   Label: LAB_004ab2a6
    XOR ECX,ECX                         ; 004ab2a8
    INC BL                              ; 004ab2aa
    MOV CL,BL                           ; 004ab2ac
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab2ae | g_CharacterClassificationTable
    JZ 0x004ab2ba                       ; 004ab2b5
        ;   XREF to: 004ab2ba (CONDITIONAL_JUMP)  ; LAB_004ab2ba
    INC EAX                             ; 004ab2b7
    JMP 0x004ab2a6                      ; 004ab2b8
        ;   XREF to: 004ab2a6 (UNCONDITIONAL_JUMP)  ; LAB_004ab2a6
    PUSH 0xc8                           ; 004ab2ba
        ;   Label: LAB_004ab2ba
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab2bf
    LEA EAX,[EBP + 0xffffef3a]          ; 004ab2c2
    PUSH EAX                            ; 004ab2c8
    LEA EAX,[EBP + -0x5e]               ; 004ab2c9
    PUSH EAX                            ; 004ab2cc
    CALL core_event.cpp_extractParenArg_FUN_004aa6c0 ; 004ab2cd
        ;   XREF to: 004aa6c0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_extractParenArg_FUN_004aa6c0(char * * cursor, char * out_buf, int max_len)
    ADD ESP,0xc                         ; 004ab2d2
    TEST EAX,EAX                        ; 004ab2d5
    JNZ 0x004aaf38                      ; 004ab2d7
        ;   XREF to: 004aaf38 (CONDITIONAL_JUMP)  ; LAB_004aaf38
    PUSH 0x821ff8                       ; 004ab2dd | g_CDemonActorClassInfo
    MOV EBX,dword ptr [0x00822030]      ; 004ab2e2 | g_CDemonActorClassInfo.name_hash
    PUSH EBX                            ; 004ab2e8
    LEA EAX,[EBP + 0xffffef3a]          ; 004ab2e9
    PUSH EAX                            ; 004ab2ef
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004ab2f0
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004ab2f5
    MOV EBX,EAX                         ; 004ab2f8
    TEST EAX,EAX                        ; 004ab2fa
    JNZ 0x004ab30e                      ; 004ab2fc
        ;   XREF to: 004ab30e (CONDITIONAL_JUMP)  ; LAB_004ab30e
    CMP dword ptr [0x02d0a45c],0x0      ; 004ab2fe | g_EventDryRun
    JNZ 0x004aaceb                      ; 004ab305
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    MOV dword ptr [EBP + -0x62],EAX     ; 004ab30b
    CMP EBX,dword ptr [0x0065d95c]      ; 004ab30e | g_ActorNameSentinel
        ;   Label: LAB_004ab30e
    JZ 0x004aaf1d                       ; 004ab314
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab31a
    JZ 0x004aaf1d                       ; 004ab31e
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV ECX,dword ptr [0x008229e8]      ; 004ab324 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 004ab32a
    PUSH EBX                            ; 004ab32b
    MOV dword ptr [EBX + 0x70],0x2      ; 004ab32c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ab333
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ab338
    TEST EAX,EAX                        ; 004ab33b
    JZ 0x004ab355                       ; 004ab33d
        ;   XREF to: 004ab355 (CONDITIONAL_JUMP)  ; LAB_004ab355
    MOV ESI,dword ptr [EAX + 0x2fc]     ; 004ab33f
    PUSH ESI                            ; 004ab345
    MOV byte ptr [EAX + 0x2d4],0x0      ; 004ab346
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004ab34d
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab352
    MOV EDI,dword ptr [0x00823e1c]      ; 004ab355 | g_CChainClassInfo.name_hash
        ;   Label: LAB_004ab355
    PUSH EDI                            ; 004ab35b
    PUSH EBX                            ; 004ab35c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ab35d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ab362
    TEST EAX,EAX                        ; 004ab365
    JZ 0x004aaf1d                       ; 004ab367
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV EDX,dword ptr [EAX + 0x280]     ; 004ab36d
    MOV byte ptr [EAX + 0x1b4],0x0      ; 004ab373
    PUSH EDX                            ; 004ab37a
    MOV byte ptr [EAX + 0x21c],0x0      ; 004ab37b
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004ab382
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab387
    JMP 0x004aaf1d                      ; 004ab38a
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xd                            ; 004ab38f
        ;   Label: LAB_004ab38f
    PUSH 0x6247e4                       ; 004ab391 | = "displayBitmap"
    PUSH EBX                            ; 004ab396
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab397
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab39c
    TEST EAX,EAX                        ; 004ab39f
    JNZ 0x004ab4b3                      ; 004ab3a1
        ;   XREF to: 004ab4b3 (CONDITIONAL_JUMP)  ; LAB_004ab4b3
    MOV AL,byte ptr [EBX + 0xd]         ; 004ab3a7
    INC AL                              ; 004ab3aa
    AND EAX,0xff                        ; 004ab3ac
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab3b1 | g_CharacterClassificationTable
    JNZ 0x004ab4b3                      ; 004ab3b8
        ;   XREF to: 004ab4b3 (CONDITIONAL_JUMP)  ; LAB_004ab4b3
    LEA EAX,[EBX + 0xd]                 ; 004ab3be
    MOV BL,byte ptr [EAX]               ; 004ab3c1
        ;   Label: LAB_004ab3c1
    XOR ECX,ECX                         ; 004ab3c3
    INC BL                              ; 004ab3c5
    MOV CL,BL                           ; 004ab3c7
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab3c9 | g_CharacterClassificationTable
    JZ 0x004ab3d5                       ; 004ab3d0
        ;   XREF to: 004ab3d5 (CONDITIONAL_JUMP)  ; LAB_004ab3d5
    INC EAX                             ; 004ab3d2
    JMP 0x004ab3c1                      ; 004ab3d3
        ;   XREF to: 004ab3c1 (UNCONDITIONAL_JUMP)  ; LAB_004ab3c1
    MOV dword ptr [EBP + -0x42],0xffffffff ; 004ab3d5
        ;   Label: LAB_004ab3d5
    LEA ECX,[EBP + -0x42]               ; 004ab3dc
    PUSH ECX                            ; 004ab3df
    LEA ECX,[EBP + -0x46]               ; 004ab3e0
    PUSH ECX                            ; 004ab3e3
    LEA ECX,[EBP + -0x4a]               ; 004ab3e4
    PUSH ECX                            ; 004ab3e7
    LEA ECX,[EBP + 0xffffea52]          ; 004ab3e8
    PUSH ECX                            ; 004ab3ee
    PUSH 0x6247f2                       ; 004ab3ef | = "( %[^ ,], %d, %d )%n"
    PUSH EAX                            ; 004ab3f4
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab3f5
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab3f8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + -0x42]     ; 004ab3fd
    ADD ESP,0x18                        ; 004ab400
    TEST EBX,EBX                        ; 004ab403
    JL 0x004ab420                       ; 004ab405
        ;   XREF to: 004ab420 (CONDITIONAL_JUMP)  ; LAB_004ab420
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ab407
    ADD EAX,EBX                         ; 004ab40a
    MOV BL,byte ptr [EAX]               ; 004ab40c
        ;   Label: LAB_004ab40c
    XOR ECX,ECX                         ; 004ab40e
    INC BL                              ; 004ab410
    MOV CL,BL                           ; 004ab412
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab414 | g_CharacterClassificationTable
    JZ 0x004ab435                       ; 004ab41b
        ;   XREF to: 004ab435 (CONDITIONAL_JUMP)  ; LAB_004ab435
    INC EAX                             ; 004ab41d
    JMP 0x004ab40c                      ; 004ab41e
        ;   XREF to: 004ab40c (UNCONDITIONAL_JUMP)  ; LAB_004ab40c
    PUSH 0x624807                       ; 004ab420 | = "Error parsing displayBitmap() parms"
        ;   Label: LAB_004ab420
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab425
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab42a
    LEA ESP,[EBP + 0x7e]                ; 004ab42d
    POP EBP                             ; 004ab430
    POP EDI                             ; 004ab431
    POP ESI                             ; 004ab432
    POP EBX                             ; 004ab433
    RET                                 ; 004ab434
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab435
        ;   Label: LAB_004ab435
    LEA EAX,[EBP + 0xffffea52]          ; 004ab438
    PUSH EAX                            ; 004ab43e
    PUSH 0x62482b                       ; 004ab43f | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004ab444
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    MOV ECX,EAX                         ; 004ab449
    ADD ESP,0x8                         ; 004ab44b
    TEST EAX,EAX                        ; 004ab44e
    JL 0x004ab489                       ; 004ab450
        ;   XREF to: 004ab489 (CONDITIONAL_JUMP)  ; LAB_004ab489
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004ab452
    MOV EDI,dword ptr [EBP + -0x46]     ; 004ab455
    IMUL EAX,EDI                        ; 004ab458
    CMP ECX,EAX                         ; 004ab45b
    JNZ 0x004ab49e                      ; 004ab45d
        ;   XREF to: 004ab49e (CONDITIONAL_JUMP)  ; LAB_004ab49e
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab45f
    JZ 0x004aaf1d                       ; 004ab463
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH EDI                            ; 004ab469
    MOV ECX,dword ptr [EBP + -0x4a]     ; 004ab46a
    PUSH ECX                            ; 004ab46d
    LEA EAX,[EBP + 0xffffea52]          ; 004ab46e
    PUSH EAX                            ; 004ab474
    MOV EBX,dword ptr [0x0067b654]      ; 004ab475 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 004ab47b | g_CGameInstance
    CALL core_game.cpp_CGame_displayBitmap_FUN_004e2890 ; 004ab47c
        ;   XREF to: 004e2890 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayBitmap_FUN_004e2890(CGame * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ab481
    JMP 0x004aaf1d                      ; 004ab484
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x62482f                       ; 004ab489 | = "Bitmap doesn't exist"
        ;   Label: LAB_004ab489
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab48e
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab493
    LEA ESP,[EBP + 0x7e]                ; 004ab496
    POP EBP                             ; 004ab499
    POP EDI                             ; 004ab49a
    POP ESI                             ; 004ab49b
    POP EBX                             ; 004ab49c
    RET                                 ; 004ab49d
    PUSH 0x624844                       ; 004ab49e | = "Bitmap file size does not match speci..."
        ;   Label: LAB_004ab49e
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab4a3
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab4a8
    LEA ESP,[EBP + 0x7e]                ; 004ab4ab
    POP EBP                             ; 004ab4ae
    POP EDI                             ; 004ab4af
    POP ESI                             ; 004ab4b0
    POP EBX                             ; 004ab4b1
    RET                                 ; 004ab4b2
    PUSH 0x10                           ; 004ab4b3
        ;   Label: LAB_004ab4b3
    PUSH 0x624879                       ; 004ab4b5 | = "fadeAmbientSound"
    PUSH EBX                            ; 004ab4ba
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab4bb
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab4c0
    TEST EAX,EAX                        ; 004ab4c3
    JNZ 0x004ab56e                      ; 004ab4c5
        ;   XREF to: 004ab56e (CONDITIONAL_JUMP)  ; LAB_004ab56e
    MOV AL,byte ptr [EBX + 0x10]        ; 004ab4cb
    INC AL                              ; 004ab4ce
    AND EAX,0xff                        ; 004ab4d0
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab4d5 | g_CharacterClassificationTable
    JNZ 0x004ab56e                      ; 004ab4dc
        ;   XREF to: 004ab56e (CONDITIONAL_JUMP)  ; LAB_004ab56e
    LEA EAX,[EBX + 0x10]                ; 004ab4e2
    MOV BL,byte ptr [EAX]               ; 004ab4e5
        ;   Label: LAB_004ab4e5
    XOR ECX,ECX                         ; 004ab4e7
    INC BL                              ; 004ab4e9
    MOV CL,BL                           ; 004ab4eb
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab4ed | g_CharacterClassificationTable
    JZ 0x004ab4f9                       ; 004ab4f4
        ;   XREF to: 004ab4f9 (CONDITIONAL_JUMP)  ; LAB_004ab4f9
    INC EAX                             ; 004ab4f6
    JMP 0x004ab4e5                      ; 004ab4f7
        ;   XREF to: 004ab4e5 (UNCONDITIONAL_JUMP)  ; LAB_004ab4e5
    LEA ECX,[EBP + -0x36]               ; 004ab4f9
        ;   Label: LAB_004ab4f9
    PUSH ECX                            ; 004ab4fc
    LEA ECX,[EBP + -0x3a]               ; 004ab4fd
    PUSH ECX                            ; 004ab500
    LEA ECX,[EBP + -0x3e]               ; 004ab501
    PUSH ECX                            ; 004ab504
    PUSH 0x62488a                       ; 004ab505 | = "(%f, %f )%n"
    MOV ESI,0xffffffff                  ; 004ab50a
    PUSH EAX                            ; 004ab50f
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab510
    MOV dword ptr [EBP + -0x36],ESI     ; 004ab513
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab516
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + -0x36]     ; 004ab51b
    ADD ESP,0x14                        ; 004ab51e
    TEST EDI,EDI                        ; 004ab521
    JL 0x004ab552                       ; 004ab523
        ;   XREF to: 004ab552 (CONDITIONAL_JUMP)  ; LAB_004ab552
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ab525
    ADD EDX,EDI                         ; 004ab528
    MOV ECX,dword ptr [EBP + -0x62]     ; 004ab52a
    MOV dword ptr [EBP + -0x5e],EDX     ; 004ab52d
    TEST ECX,ECX                        ; 004ab530
    JZ 0x004aaf1d                       ; 004ab532
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH dword ptr [EBP + -0x3a]        ; 004ab538
    MOV EBX,dword ptr [0x00681ef8]      ; 004ab53b | g_CSoundInstance | g_CSoundPtr
    PUSH dword ptr [EBP + -0x3e]        ; 004ab541
    PUSH EBX                            ; 004ab544 | g_CSoundInstance
    CALL core_sound.cpp_CSound_setVolumeFade_FUN_005b3dc0 ; 004ab545
        ;   XREF to: 005b3dc0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setVolumeFade_FUN_005b3dc0(CSound * this_ptr, float target_volume, float fade_time)
    ADD ESP,0xc                         ; 004ab54a
    JMP 0x004aaf1d                      ; 004ab54d
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x624896                       ; 004ab552 | = "Error parsing fadeAmbientSound parms"
        ;   Label: LAB_004ab552
    PUSH 0x2d0a460                      ; 004ab557 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ab55c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ab561
    XOR EAX,EAX                         ; 004ab564
    LEA ESP,[EBP + 0x7e]                ; 004ab566
    POP EBP                             ; 004ab569
    POP EDI                             ; 004ab56a
    POP ESI                             ; 004ab56b
    POP EBX                             ; 004ab56c
    RET                                 ; 004ab56d
    PUSH 0x7                            ; 004ab56e
        ;   Label: LAB_004ab56e
    PUSH 0x6248bb                       ; 004ab570 | = "fadeSfx"
    PUSH EBX                            ; 004ab575
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab576
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab57b
    TEST EAX,EAX                        ; 004ab57e
    JNZ 0x004ab6c9                      ; 004ab580
        ;   XREF to: 004ab6c9 (CONDITIONAL_JUMP)  ; LAB_004ab6c9
    MOV AL,byte ptr [EBX + 0x7]         ; 004ab586
    INC AL                              ; 004ab589
    AND EAX,0xff                        ; 004ab58b
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab590 | g_CharacterClassificationTable
    JNZ 0x004ab6c9                      ; 004ab597
        ;   XREF to: 004ab6c9 (CONDITIONAL_JUMP)  ; LAB_004ab6c9
    LEA EAX,[EBX + 0x7]                 ; 004ab59d
    MOV BL,byte ptr [EAX]               ; 004ab5a0
        ;   Label: LAB_004ab5a0
    XOR ECX,ECX                         ; 004ab5a2
    INC BL                              ; 004ab5a4
    MOV CL,BL                           ; 004ab5a6
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab5a8 | g_CharacterClassificationTable
    JZ 0x004ab5b4                       ; 004ab5af
        ;   XREF to: 004ab5b4 (CONDITIONAL_JUMP)  ; LAB_004ab5b4
    INC EAX                             ; 004ab5b1
    JMP 0x004ab5a0                      ; 004ab5b2
        ;   XREF to: 004ab5a0 (UNCONDITIONAL_JUMP)  ; LAB_004ab5a0
    LEA ECX,[EBP + -0x2a]               ; 004ab5b4
        ;   Label: LAB_004ab5b4
    PUSH ECX                            ; 004ab5b7
    LEA ECX,[EBP + -0x2e]               ; 004ab5b8
    PUSH ECX                            ; 004ab5bb
    LEA ECX,[EBP + -0x32]               ; 004ab5bc
    PUSH ECX                            ; 004ab5bf
    LEA ECX,[EBP + 0xfffff002]          ; 004ab5c0
    PUSH ECX                            ; 004ab5c6
    PUSH 0x6248c3                       ; 004ab5c7 | = "(%[^,], %f, %f )%n"
    MOV ESI,0xffffffff                  ; 004ab5cc
    PUSH EAX                            ; 004ab5d1
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab5d2
    MOV dword ptr [EBP + -0x2a],ESI     ; 004ab5d5
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab5d8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + -0x2a]     ; 004ab5dd
    ADD ESP,0x18                        ; 004ab5e0
    TEST EDI,EDI                        ; 004ab5e3
    JL 0x004ab650                       ; 004ab5e5
        ;   XREF to: 004ab650 (CONDITIONAL_JUMP)  ; LAB_004ab650
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ab5e7
    LEA EBX,[EBP + 0xfffff002]          ; 004ab5ea
    ADD EDX,EDI                         ; 004ab5f0
    LEA EDI,[EBP + 0xfffff002]          ; 004ab5f2
    MOV dword ptr [EBP + -0x5e],EDX     ; 004ab5f8
    SUB ECX,ECX                         ; 004ab5fb
    DEC ECX                             ; 004ab5fd
    XOR EAX,EAX                         ; 004ab5fe
    SCASB.REPNE ES:EDI                  ; 004ab600
    NOT ECX                             ; 004ab602
    DEC ECX                             ; 004ab604
    MOV EDI,ECX                         ; 004ab605
    TEST ECX,ECX                        ; 004ab607
    JLE 0x004ab627                      ; 004ab609
        ;   XREF to: 004ab627 (CONDITIONAL_JUMP)  ; LAB_004ab627
    LEA EAX,[EBP + 0xfffff002]          ; 004ab60b
    ADD EAX,ECX                         ; 004ab611
    MOV CL,byte ptr [EAX + -0x1]        ; 004ab613
        ;   Label: LAB_004ab613
    INC CL                              ; 004ab616
    AND ECX,0xff                        ; 004ab618
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab61e | g_CharacterClassificationTable
    JNZ 0x004ab66c                      ; 004ab625
        ;   XREF to: 004ab66c (CONDITIONAL_JUMP)  ; LAB_004ab66c
    LEA EAX,[EBX + EDI*0x1]             ; 004ab627
        ;   Label: LAB_004ab627
    LEA ESI,[EBX + 0x1]                 ; 004ab62a
    MOV byte ptr [EAX],0x0              ; 004ab62d
    MOV AL,byte ptr [EBX]               ; 004ab630
        ;   Label: LAB_004ab630
    INC AL                              ; 004ab632
    AND EAX,0xff                        ; 004ab634
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ab639 | g_CharacterClassificationTable
    JZ 0x004ab674                       ; 004ab640
        ;   XREF to: 004ab674 (CONDITIONAL_JUMP)  ; LAB_004ab674
    PUSH EDI                            ; 004ab642
    PUSH ESI                            ; 004ab643
    PUSH EBX                            ; 004ab644
    DEC EDI                             ; 004ab645
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ab646
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ab64b
    JMP 0x004ab630                      ; 004ab64e
        ;   XREF to: 004ab630 (UNCONDITIONAL_JUMP)  ; LAB_004ab630
    PUSH 0x6248d6                       ; 004ab650 | = "Error parsing fadeSfx parms"
        ;   Label: LAB_004ab650
    PUSH 0x2d0a460                      ; 004ab655 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ab65a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ab65f
    XOR EAX,EAX                         ; 004ab662
    LEA ESP,[EBP + 0x7e]                ; 004ab664
    POP EBP                             ; 004ab667
    POP EDI                             ; 004ab668
    POP ESI                             ; 004ab669
    POP EBX                             ; 004ab66a
    RET                                 ; 004ab66b
    DEC EDI                             ; 004ab66c
        ;   Label: LAB_004ab66c
    DEC EAX                             ; 004ab66d
    TEST EDI,EDI                        ; 004ab66e
    JG 0x004ab613                       ; 004ab670
        ;   XREF to: 004ab613 (CONDITIONAL_JUMP)  ; LAB_004ab613
    JMP 0x004ab627                      ; 004ab672
        ;   XREF to: 004ab627 (UNCONDITIONAL_JUMP)  ; LAB_004ab627
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab674
        ;   Label: LAB_004ab674
    JZ 0x004aaf1d                       ; 004ab678
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffff002]          ; 004ab67e
    PUSH EAX                            ; 004ab684
    MOV EBX,dword ptr [EBP + 0x92]      ; 004ab685
    PUSH EBX                            ; 004ab68b
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40 ; 004ab68c
        ;   XREF to: 004b0c40 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList * this_ptr, char * name)
    FLD float ptr [EBP + -0x2e]         ; 004ab691
    FLDZ                                ; 004ab694
    MOV ECX,EAX                         ; 004ab696
    ADD ESP,0x8                         ; 004ab698
    FCOMPP                              ; 004ab69b
    FNSTSW AX                           ; 004ab69d
    SAHF                                ; 004ab69f
    JNC 0x004ab6b8                      ; 004ab6a0
        ;   XREF to: 004ab6b8 (CONDITIONAL_JUMP)  ; LAB_004ab6b8
    PUSH 0x0                            ; 004ab6a2
    PUSH dword ptr [EBP + -0x2e]        ; 004ab6a4
    PUSH dword ptr [EBP + -0x32]        ; 004ab6a7
    PUSH ECX                            ; 004ab6aa
    CALL sound_sndmain.cpp_setSfxFade_FUN_005a9c70 ; 004ab6ab
        ;   XREF to: 005a9c70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_005a9c70(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 004ab6b0
    JMP 0x004aaf1d                      ; 004ab6b3
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH dword ptr [EBP + -0x32]        ; 004ab6b8
        ;   Label: LAB_004ab6b8
    PUSH ECX                            ; 004ab6bb
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 004ab6bc
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 004ab6c1
    JMP 0x004aaf1d                      ; 004ab6c4
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x6                            ; 004ab6c9
        ;   Label: LAB_004ab6c9
    PUSH 0x6248f2                       ; 004ab6cb | = "flagOn"
    PUSH EBX                            ; 004ab6d0
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab6d1
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab6d6
    TEST EAX,EAX                        ; 004ab6d9
    JNZ 0x004ab74e                      ; 004ab6db
        ;   XREF to: 004ab74e (CONDITIONAL_JUMP)  ; LAB_004ab74e
    MOV AL,byte ptr [EBX + 0x6]         ; 004ab6dd
    INC AL                              ; 004ab6e0
    AND EAX,0xff                        ; 004ab6e2
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab6e7 | g_CharacterClassificationTable
    JNZ 0x004ab74e                      ; 004ab6ee
        ;   XREF to: 004ab74e (CONDITIONAL_JUMP)  ; LAB_004ab74e
    LEA EAX,[EBX + 0x6]                 ; 004ab6f0
    MOV BL,byte ptr [EAX]               ; 004ab6f3
        ;   Label: LAB_004ab6f3
    XOR ECX,ECX                         ; 004ab6f5
    INC BL                              ; 004ab6f7
    MOV CL,BL                           ; 004ab6f9
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab6fb | g_CharacterClassificationTable
    JZ 0x004ab707                       ; 004ab702
        ;   XREF to: 004ab707 (CONDITIONAL_JUMP)  ; LAB_004ab707
    INC EAX                             ; 004ab704
    JMP 0x004ab6f3                      ; 004ab705
        ;   XREF to: 004ab6f3 (UNCONDITIONAL_JUMP)  ; LAB_004ab6f3
    PUSH 0x20                           ; 004ab707
        ;   Label: LAB_004ab707
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab709
    LEA EAX,[EBP + 0xfffffefa]          ; 004ab70c
    PUSH EAX                            ; 004ab712
    LEA EAX,[EBP + -0x5e]               ; 004ab713
    PUSH EAX                            ; 004ab716
    CALL core_event.cpp_extractParenArg_FUN_004aa6c0 ; 004ab717
        ;   XREF to: 004aa6c0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_extractParenArg_FUN_004aa6c0(char * * cursor, char * out_buf, int max_len)
    ADD ESP,0xc                         ; 004ab71c
    TEST EAX,EAX                        ; 004ab71f
    JNZ 0x004aaf38                      ; 004ab721
        ;   XREF to: 004aaf38 (CONDITIONAL_JUMP)  ; LAB_004aaf38
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab727
    JZ 0x004aaf1d                       ; 004ab72b
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x1                            ; 004ab731
    LEA EAX,[EBP + 0xfffffefa]          ; 004ab733
    PUSH EAX                            ; 004ab739
    MOV EDI,dword ptr [EBP + 0x92]      ; 004ab73a
    PUSH EDI                            ; 004ab740
    CALL core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 ; 004ab741
        ;   XREF to: 004b0330 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004ab746
    JMP 0x004aaf1d                      ; 004ab749
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x7                            ; 004ab74e
        ;   Label: LAB_004ab74e
    PUSH 0x6248f9                       ; 004ab750 | = "flagOff"
    PUSH EBX                            ; 004ab755
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab756
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab75b
    TEST EAX,EAX                        ; 004ab75e
    JNZ 0x004ab7d3                      ; 004ab760
        ;   XREF to: 004ab7d3 (CONDITIONAL_JUMP)  ; LAB_004ab7d3
    MOV AL,byte ptr [EBX + 0x7]         ; 004ab762
    INC AL                              ; 004ab765
    AND EAX,0xff                        ; 004ab767
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab76c | g_CharacterClassificationTable
    JNZ 0x004ab7d3                      ; 004ab773
        ;   XREF to: 004ab7d3 (CONDITIONAL_JUMP)  ; LAB_004ab7d3
    LEA EAX,[EBX + 0x7]                 ; 004ab775
    MOV BL,byte ptr [EAX]               ; 004ab778
        ;   Label: LAB_004ab778
    XOR ECX,ECX                         ; 004ab77a
    INC BL                              ; 004ab77c
    MOV CL,BL                           ; 004ab77e
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab780 | g_CharacterClassificationTable
    JZ 0x004ab78c                       ; 004ab787
        ;   XREF to: 004ab78c (CONDITIONAL_JUMP)  ; LAB_004ab78c
    INC EAX                             ; 004ab789
    JMP 0x004ab778                      ; 004ab78a
        ;   XREF to: 004ab778 (UNCONDITIONAL_JUMP)  ; LAB_004ab778
    PUSH 0x20                           ; 004ab78c
        ;   Label: LAB_004ab78c
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab78e
    LEA EAX,[EBP + 0xffffff1a]          ; 004ab791
    PUSH EAX                            ; 004ab797
    LEA EAX,[EBP + -0x5e]               ; 004ab798
    PUSH EAX                            ; 004ab79b
    CALL core_event.cpp_extractParenArg_FUN_004aa6c0 ; 004ab79c
        ;   XREF to: 004aa6c0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_extractParenArg_FUN_004aa6c0(char * * cursor, char * out_buf, int max_len)
    ADD ESP,0xc                         ; 004ab7a1
    TEST EAX,EAX                        ; 004ab7a4
    JNZ 0x004aaf38                      ; 004ab7a6
        ;   XREF to: 004aaf38 (CONDITIONAL_JUMP)  ; LAB_004aaf38
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab7ac
    JZ 0x004aaf1d                       ; 004ab7b0
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x0                            ; 004ab7b6
    LEA EAX,[EBP + 0xffffff1a]          ; 004ab7b8
    PUSH EAX                            ; 004ab7be
    MOV EDX,dword ptr [EBP + 0x92]      ; 004ab7bf
    PUSH EDX                            ; 004ab7c5
    CALL core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 ; 004ab7c6
        ;   XREF to: 004b0330 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004ab7cb
    JMP 0x004aaf1d                      ; 004ab7ce
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xa                            ; 004ab7d3
        ;   Label: LAB_004ab7d3
    PUSH 0x624901                       ; 004ab7d5 | = "gameFlagOn"
    PUSH EBX                            ; 004ab7da
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab7db
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab7e0
    TEST EAX,EAX                        ; 004ab7e3
    JNZ 0x004ab858                      ; 004ab7e5
        ;   XREF to: 004ab858 (CONDITIONAL_JUMP)  ; LAB_004ab858
    MOV AL,byte ptr [EBX + 0xa]         ; 004ab7e7
    INC AL                              ; 004ab7ea
    AND EAX,0xff                        ; 004ab7ec
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab7f1 | g_CharacterClassificationTable
    JNZ 0x004ab858                      ; 004ab7f8
        ;   XREF to: 004ab858 (CONDITIONAL_JUMP)  ; LAB_004ab858
    LEA EAX,[EBX + 0xa]                 ; 004ab7fa
    MOV BL,byte ptr [EAX]               ; 004ab7fd
        ;   Label: LAB_004ab7fd
    XOR ECX,ECX                         ; 004ab7ff
    INC BL                              ; 004ab801
    MOV CL,BL                           ; 004ab803
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab805 | g_CharacterClassificationTable
    JZ 0x004ab811                       ; 004ab80c
        ;   XREF to: 004ab811 (CONDITIONAL_JUMP)  ; LAB_004ab811
    INC EAX                             ; 004ab80e
    JMP 0x004ab7fd                      ; 004ab80f
        ;   XREF to: 004ab7fd (UNCONDITIONAL_JUMP)  ; LAB_004ab7fd
    PUSH 0x20                           ; 004ab811
        ;   Label: LAB_004ab811
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab813
    LEA EAX,[EBP + 0xfffffeda]          ; 004ab816
    PUSH EAX                            ; 004ab81c
    LEA EAX,[EBP + -0x5e]               ; 004ab81d
    PUSH EAX                            ; 004ab820
    CALL core_event.cpp_extractParenArg_FUN_004aa6c0 ; 004ab821
        ;   XREF to: 004aa6c0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_extractParenArg_FUN_004aa6c0(char * * cursor, char * out_buf, int max_len)
    ADD ESP,0xc                         ; 004ab826
    TEST EAX,EAX                        ; 004ab829
    JNZ 0x004aaf38                      ; 004ab82b
        ;   XREF to: 004aaf38 (CONDITIONAL_JUMP)  ; LAB_004aaf38
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab831
    JZ 0x004aaf1d                       ; 004ab835
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x1                            ; 004ab83b
    LEA EAX,[EBP + 0xfffffeda]          ; 004ab83d
    PUSH EAX                            ; 004ab843
    MOV EBX,dword ptr [EBP + 0x92]      ; 004ab844
    PUSH EBX                            ; 004ab84a
    CALL core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470 ; 004ab84b
        ;   XREF to: 004b0470 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004ab850
    JMP 0x004aaf1d                      ; 004ab853
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xb                            ; 004ab858
        ;   Label: LAB_004ab858
    PUSH 0x62490c                       ; 004ab85a | = "gameFlagOff"
    PUSH EBX                            ; 004ab85f
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab860
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab865
    TEST EAX,EAX                        ; 004ab868
    JNZ 0x004ab8dc                      ; 004ab86a
        ;   XREF to: 004ab8dc (CONDITIONAL_JUMP)  ; LAB_004ab8dc
    MOV AL,byte ptr [EBX + 0xb]         ; 004ab86c
    INC AL                              ; 004ab86f
    AND EAX,0xff                        ; 004ab871
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab876 | g_CharacterClassificationTable
    JNZ 0x004ab8dc                      ; 004ab87d
        ;   XREF to: 004ab8dc (CONDITIONAL_JUMP)  ; LAB_004ab8dc
    LEA EAX,[EBX + 0xb]                 ; 004ab87f
    MOV BL,byte ptr [EAX]               ; 004ab882
        ;   Label: LAB_004ab882
    XOR ECX,ECX                         ; 004ab884
    INC BL                              ; 004ab886
    MOV CL,BL                           ; 004ab888
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab88a | g_CharacterClassificationTable
    JZ 0x004ab896                       ; 004ab891
        ;   XREF to: 004ab896 (CONDITIONAL_JUMP)  ; LAB_004ab896
    INC EAX                             ; 004ab893
    JMP 0x004ab882                      ; 004ab894
        ;   XREF to: 004ab882 (UNCONDITIONAL_JUMP)  ; LAB_004ab882
    PUSH 0x20                           ; 004ab896
        ;   Label: LAB_004ab896
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab898
    LEA EAX,[EBP + 0xffffff3a]          ; 004ab89b
    PUSH EAX                            ; 004ab8a1
    LEA EAX,[EBP + -0x5e]               ; 004ab8a2
    PUSH EAX                            ; 004ab8a5
    CALL core_event.cpp_extractParenArg_FUN_004aa6c0 ; 004ab8a6
        ;   XREF to: 004aa6c0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_extractParenArg_FUN_004aa6c0(char * * cursor, char * out_buf, int max_len)
    ADD ESP,0xc                         ; 004ab8ab
    TEST EAX,EAX                        ; 004ab8ae
    JNZ 0x004aaf38                      ; 004ab8b0
        ;   XREF to: 004aaf38 (CONDITIONAL_JUMP)  ; LAB_004aaf38
    CMP dword ptr [EBP + -0x62],0x0     ; 004ab8b6
    JZ 0x004aaf1d                       ; 004ab8ba
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH EAX                            ; 004ab8c0
    LEA EAX,[EBP + 0xffffff3a]          ; 004ab8c1
    PUSH EAX                            ; 004ab8c7
    MOV EDI,dword ptr [EBP + 0x92]      ; 004ab8c8
    PUSH EDI                            ; 004ab8ce
    CALL core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470 ; 004ab8cf
        ;   XREF to: 004b0470 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004ab8d4
    JMP 0x004aaf1d                      ; 004ab8d7
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xd                            ; 004ab8dc
        ;   Label: LAB_004ab8dc
    PUSH 0x624918                       ; 004ab8de | = "hurtCharacter"
    PUSH EBX                            ; 004ab8e3
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ab8e4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ab8e9
    TEST EAX,EAX                        ; 004ab8ec
    JNZ 0x004abaea                      ; 004ab8ee
        ;   XREF to: 004abaea (CONDITIONAL_JUMP)  ; LAB_004abaea
    MOV AL,byte ptr [EBX + 0xd]         ; 004ab8f4
    INC AL                              ; 004ab8f7
    AND EAX,0xff                        ; 004ab8f9
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ab8fe | g_CharacterClassificationTable
    JNZ 0x004abaea                      ; 004ab905
        ;   XREF to: 004abaea (CONDITIONAL_JUMP)  ; LAB_004abaea
    LEA EAX,[EBX + 0xd]                 ; 004ab90b
    MOV BL,byte ptr [EAX]               ; 004ab90e
        ;   Label: LAB_004ab90e
    XOR ECX,ECX                         ; 004ab910
    INC BL                              ; 004ab912
    MOV CL,BL                           ; 004ab914
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab916 | g_CharacterClassificationTable
    JZ 0x004ab922                       ; 004ab91d
        ;   XREF to: 004ab922 (CONDITIONAL_JUMP)  ; LAB_004ab922
    INC EAX                             ; 004ab91f
    JMP 0x004ab90e                      ; 004ab920
        ;   XREF to: 004ab90e (UNCONDITIONAL_JUMP)  ; LAB_004ab90e
    LEA ECX,[EBP + -0x26]               ; 004ab922
        ;   Label: LAB_004ab922
    PUSH ECX                            ; 004ab925
    LEA ECX,[EBP + -0x22]               ; 004ab926
    PUSH ECX                            ; 004ab929
    LEA ECX,[EBP + 0xfffffdae]          ; 004ab92a
    PUSH ECX                            ; 004ab930
    LEA ECX,[EBP + 0xfffffa2a]          ; 004ab931
    PUSH ECX                            ; 004ab937
    PUSH 0x624926                       ; 004ab938 | = " ( %[^,], %[^,],%f)%n"
    MOV EDX,0xffffffff                  ; 004ab93d
    PUSH EAX                            ; 004ab942
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ab943
    MOV dword ptr [EBP + -0x26],EDX     ; 004ab946
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ab949
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x26]     ; 004ab94e
    ADD ESP,0x18                        ; 004ab951
    CMP ECX,0x2                         ; 004ab954
    JL 0x004ab9ba                       ; 004ab957
        ;   XREF to: 004ab9ba (CONDITIONAL_JUMP)  ; LAB_004ab9ba
    LEA EDI,[EBP + 0xfffffa2a]          ; 004ab959
    LEA EBX,[EBP + 0xfffffa2a]          ; 004ab95f
    SUB ECX,ECX                         ; 004ab965
    DEC ECX                             ; 004ab967
    XOR EAX,EAX                         ; 004ab968
    SCASB.REPNE ES:EDI                  ; 004ab96a
    NOT ECX                             ; 004ab96c
    DEC ECX                             ; 004ab96e
    MOV EDI,ECX                         ; 004ab96f
    TEST ECX,ECX                        ; 004ab971
    JLE 0x004ab991                      ; 004ab973
        ;   XREF to: 004ab991 (CONDITIONAL_JUMP)  ; LAB_004ab991
    LEA EAX,[EBP + 0xfffffa2a]          ; 004ab975
    ADD EAX,ECX                         ; 004ab97b
    MOV CL,byte ptr [EAX + -0x1]        ; 004ab97d
        ;   Label: LAB_004ab97d
    INC CL                              ; 004ab980
    AND ECX,0xff                        ; 004ab982
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ab988 | g_CharacterClassificationTable
    JNZ 0x004ab9cf                      ; 004ab98f
        ;   XREF to: 004ab9cf (CONDITIONAL_JUMP)  ; LAB_004ab9cf
    LEA EAX,[EBX + EDI*0x1]             ; 004ab991
        ;   Label: LAB_004ab991
    LEA ESI,[EBX + 0x1]                 ; 004ab994
    MOV byte ptr [EAX],0x0              ; 004ab997
    MOV AL,byte ptr [EBX]               ; 004ab99a
        ;   Label: LAB_004ab99a
    INC AL                              ; 004ab99c
    AND EAX,0xff                        ; 004ab99e
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ab9a3 | g_CharacterClassificationTable
    JZ 0x004ab9d7                       ; 004ab9aa
        ;   XREF to: 004ab9d7 (CONDITIONAL_JUMP)  ; LAB_004ab9d7
    PUSH EDI                            ; 004ab9ac
    PUSH ESI                            ; 004ab9ad
    PUSH EBX                            ; 004ab9ae
    DEC EDI                             ; 004ab9af
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ab9b0
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ab9b5
    JMP 0x004ab99a                      ; 004ab9b8
        ;   XREF to: 004ab99a (UNCONDITIONAL_JUMP)  ; LAB_004ab99a
    PUSH 0x62493c                       ; 004ab9ba | = "Syntax error in killHero() parms"
        ;   Label: LAB_004ab9ba
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ab9bf
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ab9c4
    LEA ESP,[EBP + 0x7e]                ; 004ab9c7
    POP EBP                             ; 004ab9ca
    POP EDI                             ; 004ab9cb
    POP ESI                             ; 004ab9cc
    POP EBX                             ; 004ab9cd
    RET                                 ; 004ab9ce
    DEC EDI                             ; 004ab9cf
        ;   Label: LAB_004ab9cf
    DEC EAX                             ; 004ab9d0
    TEST EDI,EDI                        ; 004ab9d1
    JG 0x004ab97d                       ; 004ab9d3
        ;   XREF to: 004ab97d (CONDITIONAL_JUMP)  ; LAB_004ab97d
    JMP 0x004ab991                      ; 004ab9d5
        ;   XREF to: 004ab991 (UNCONDITIONAL_JUMP)  ; LAB_004ab991
    LEA EDI,[EBP + 0xfffffdae]          ; 004ab9d7
        ;   Label: LAB_004ab9d7
    LEA EBX,[EBP + 0xfffffdae]          ; 004ab9dd
    SUB ECX,ECX                         ; 004ab9e3
    DEC ECX                             ; 004ab9e5
    XOR EAX,EAX                         ; 004ab9e6
    SCASB.REPNE ES:EDI                  ; 004ab9e8
    NOT ECX                             ; 004ab9ea
    DEC ECX                             ; 004ab9ec
    MOV EDI,ECX                         ; 004ab9ed
    TEST ECX,ECX                        ; 004ab9ef
    JLE 0x004aba0f                      ; 004ab9f1
        ;   XREF to: 004aba0f (CONDITIONAL_JUMP)  ; LAB_004aba0f
    LEA EAX,[EBP + 0xfffffdae]          ; 004ab9f3
    ADD EAX,ECX                         ; 004ab9f9
    MOV CL,byte ptr [EAX + -0x1]        ; 004ab9fb
        ;   Label: LAB_004ab9fb
    INC CL                              ; 004ab9fe
    AND ECX,0xff                        ; 004aba00
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004aba06 | g_CharacterClassificationTable
    JNZ 0x004aba38                      ; 004aba0d
        ;   XREF to: 004aba38 (CONDITIONAL_JUMP)  ; LAB_004aba38
    LEA EAX,[EBX + EDI*0x1]             ; 004aba0f
        ;   Label: LAB_004aba0f
    LEA ESI,[EBX + 0x1]                 ; 004aba12
    MOV byte ptr [EAX],0x0              ; 004aba15
    MOV AL,byte ptr [EBX]               ; 004aba18
        ;   Label: LAB_004aba18
    INC AL                              ; 004aba1a
    AND EAX,0xff                        ; 004aba1c
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aba21 | g_CharacterClassificationTable
    JZ 0x004aba40                       ; 004aba28
        ;   XREF to: 004aba40 (CONDITIONAL_JUMP)  ; LAB_004aba40
    PUSH EDI                            ; 004aba2a
    PUSH ESI                            ; 004aba2b
    PUSH EBX                            ; 004aba2c
    DEC EDI                             ; 004aba2d
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aba2e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aba33
    JMP 0x004aba18                      ; 004aba36
        ;   XREF to: 004aba18 (UNCONDITIONAL_JUMP)  ; LAB_004aba18
    DEC EDI                             ; 004aba38
        ;   Label: LAB_004aba38
    DEC EAX                             ; 004aba39
    TEST EDI,EDI                        ; 004aba3a
    JG 0x004ab9fb                       ; 004aba3c
        ;   XREF to: 004ab9fb (CONDITIONAL_JUMP)  ; LAB_004ab9fb
    JMP 0x004aba0f                      ; 004aba3e
        ;   XREF to: 004aba0f (UNCONDITIONAL_JUMP)  ; LAB_004aba0f
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004aba40
        ;   Label: LAB_004aba40
    ADD EAX,dword ptr [EBP + -0x26]     ; 004aba43
    MOV BL,byte ptr [EAX]               ; 004aba46
        ;   Label: LAB_004aba46
    XOR ECX,ECX                         ; 004aba48
    INC BL                              ; 004aba4a
    MOV CL,BL                           ; 004aba4c
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004aba4e | g_CharacterClassificationTable
    JZ 0x004aba5a                       ; 004aba55
        ;   XREF to: 004aba5a (CONDITIONAL_JUMP)  ; LAB_004aba5a
    INC EAX                             ; 004aba57
    JMP 0x004aba46                      ; 004aba58
        ;   XREF to: 004aba46 (UNCONDITIONAL_JUMP)  ; LAB_004aba46
    PUSH 0x823c14                       ; 004aba5a | g_CCharacterClassInfo
        ;   Label: LAB_004aba5a
    MOV ESI,dword ptr [0x00823c4c]      ; 004aba5f | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 004aba65
    MOV dword ptr [EBP + -0x5e],EAX     ; 004aba66
    LEA EAX,[EBP + 0xfffffa2a]          ; 004aba69
    PUSH EAX                            ; 004aba6f
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004aba70
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004aba75
    MOV EBX,EAX                         ; 004aba78
    TEST EAX,EAX                        ; 004aba7a
    JZ 0x004aaceb                       ; 004aba7c
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    MOV EDI,dword ptr [0x0065d95c]      ; 004aba82 | g_ActorNameSentinel
    CMP EAX,EDI                         ; 004aba88
    JNZ 0x004aba91                      ; 004aba8a
        ;   XREF to: 004aba91 (CONDITIONAL_JUMP)  ; LAB_004aba91
    XOR EAX,EDI                         ; 004aba8c
    MOV dword ptr [EBP + -0x62],EAX     ; 004aba8e
    LEA EAX,[EBP + -0x1e]               ; 004aba91
        ;   Label: LAB_004aba91
    PUSH EAX                            ; 004aba94
    LEA EAX,[EBP + 0xfffffdae]          ; 004aba95
    PUSH EAX                            ; 004aba9b
    CALL core_event.cpp_parseDamageType_FUN_004aa960 ; 004aba9c
        ;   XREF to: 004aa960 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseDamageType_FUN_004aa960(char * type_name, int * out_type_id)
    ADD ESP,0x8                         ; 004abaa1
    TEST EAX,EAX                        ; 004abaa4
    JZ 0x004abace                       ; 004abaa6
        ;   XREF to: 004abace (CONDITIONAL_JUMP)  ; LAB_004abace
    CMP dword ptr [EBP + -0x62],0x0     ; 004abaa8
    JZ 0x004aaf1d                       ; 004abaac
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV ECX,dword ptr [EBP + -0x1e]     ; 004abab2
    PUSH dword ptr [EBP + -0x22]        ; 004abab5
    PUSH ECX                            ; 004abab8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004abab9
    PUSH EBX                            ; 004ababf
    CALL dword ptr [EAX + 0xec]         ; 004abac0
    ADD ESP,0xc                         ; 004abac6
    JMP 0x004aaf1d                      ; 004abac9
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffffdae]          ; 004abace
        ;   Label: LAB_004abace
    PUSH EAX                            ; 004abad4
    PUSH 0x62495d                       ; 004abad5 | = "Unknown damage type \"%s\" in hurtCha..."
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004abada
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004abadf
    LEA ESP,[EBP + 0x7e]                ; 004abae2
    POP EBP                             ; 004abae5
    POP EDI                             ; 004abae6
    POP ESI                             ; 004abae7
    POP EBX                             ; 004abae8
    RET                                 ; 004abae9
    PUSH 0xa                            ; 004abaea
        ;   Label: LAB_004abaea
    PUSH 0x624990                       ; 004abaec | = "incCounter"
    PUSH EBX                            ; 004abaf1
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004abaf2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004abaf7
    TEST EAX,EAX                        ; 004abafa
    JNZ 0x004abc21                      ; 004abafc
        ;   XREF to: 004abc21 (CONDITIONAL_JUMP)  ; LAB_004abc21
    MOV AL,byte ptr [EBX + 0xa]         ; 004abb02
    INC AL                              ; 004abb05
    AND EAX,0xff                        ; 004abb07
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004abb0c | g_CharacterClassificationTable
    JNZ 0x004abc21                      ; 004abb13
        ;   XREF to: 004abc21 (CONDITIONAL_JUMP)  ; LAB_004abc21
    LEA EAX,[EBX + 0xa]                 ; 004abb19
    MOV BL,byte ptr [EAX]               ; 004abb1c
        ;   Label: LAB_004abb1c
    XOR ECX,ECX                         ; 004abb1e
    INC BL                              ; 004abb20
    MOV CL,BL                           ; 004abb22
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abb24 | g_CharacterClassificationTable
    JZ 0x004abb30                       ; 004abb2b
        ;   XREF to: 004abb30 (CONDITIONAL_JUMP)  ; LAB_004abb30
    INC EAX                             ; 004abb2d
    JMP 0x004abb1c                      ; 004abb2e
        ;   XREF to: 004abb1c (UNCONDITIONAL_JUMP)  ; LAB_004abb1c
    LEA ECX,[EBP + -0x1a]               ; 004abb30
        ;   Label: LAB_004abb30
    PUSH ECX                            ; 004abb33
    LEA ECX,[EBP + 0xffffee72]          ; 004abb34
    PUSH ECX                            ; 004abb3a
    PUSH 0x62499b                       ; 004abb3b | = "( %[^ )] )%n"
    MOV EBX,0xffffffff                  ; 004abb40
    PUSH EAX                            ; 004abb45
    MOV dword ptr [EBP + -0x5e],EAX     ; 004abb46
    MOV dword ptr [EBP + -0x1a],EBX     ; 004abb49
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004abb4c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + -0x1a]     ; 004abb51
    ADD ESP,0x10                        ; 004abb54
    CMP ESI,0x5                         ; 004abb57
    JL 0x004abbc0                       ; 004abb5a
        ;   XREF to: 004abbc0 (CONDITIONAL_JUMP)  ; LAB_004abbc0
    ADD dword ptr [EBP + -0x5e],ESI     ; 004abb5c
    LEA EDI,[EBP + 0xffffee72]          ; 004abb5f
    LEA EBX,[EBP + 0xffffee72]          ; 004abb65
    SUB ECX,ECX                         ; 004abb6b
    DEC ECX                             ; 004abb6d
    XOR EAX,EAX                         ; 004abb6e
    SCASB.REPNE ES:EDI                  ; 004abb70
    NOT ECX                             ; 004abb72
    DEC ECX                             ; 004abb74
    MOV EDI,ECX                         ; 004abb75
    TEST ECX,ECX                        ; 004abb77
    JLE 0x004abb97                      ; 004abb79
        ;   XREF to: 004abb97 (CONDITIONAL_JUMP)  ; LAB_004abb97
    LEA EAX,[EBP + 0xffffee72]          ; 004abb7b
    ADD EAX,ECX                         ; 004abb81
    MOV CL,byte ptr [EAX + -0x1]        ; 004abb83
        ;   Label: LAB_004abb83
    INC CL                              ; 004abb86
    AND ECX,0xff                        ; 004abb88
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abb8e | g_CharacterClassificationTable
    JNZ 0x004abbdc                      ; 004abb95
        ;   XREF to: 004abbdc (CONDITIONAL_JUMP)  ; LAB_004abbdc
    LEA EAX,[EBX + EDI*0x1]             ; 004abb97
        ;   Label: LAB_004abb97
    LEA ESI,[EBX + 0x1]                 ; 004abb9a
    MOV byte ptr [EAX],0x0              ; 004abb9d
    MOV AL,byte ptr [EBX]               ; 004abba0
        ;   Label: LAB_004abba0
    INC AL                              ; 004abba2
    AND EAX,0xff                        ; 004abba4
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004abba9 | g_CharacterClassificationTable
    JZ 0x004abbe4                       ; 004abbb0
        ;   XREF to: 004abbe4 (CONDITIONAL_JUMP)  ; LAB_004abbe4
    PUSH EDI                            ; 004abbb2
    PUSH ESI                            ; 004abbb3
    PUSH EBX                            ; 004abbb4
    DEC EDI                             ; 004abbb5
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004abbb6
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004abbbb
    JMP 0x004abba0                      ; 004abbbe
        ;   XREF to: 004abba0 (UNCONDITIONAL_JUMP)  ; LAB_004abba0
    PUSH 0x6249a8                       ; 004abbc0 | = "Error parsing incCounter arguments"
        ;   Label: LAB_004abbc0
    PUSH 0x2d0a460                      ; 004abbc5 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004abbca
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004abbcf
    XOR EAX,EAX                         ; 004abbd2
    LEA ESP,[EBP + 0x7e]                ; 004abbd4
    POP EBP                             ; 004abbd7
    POP EDI                             ; 004abbd8
    POP ESI                             ; 004abbd9
    POP EBX                             ; 004abbda
    RET                                 ; 004abbdb
    DEC EDI                             ; 004abbdc
        ;   Label: LAB_004abbdc
    DEC EAX                             ; 004abbdd
    TEST EDI,EDI                        ; 004abbde
    JG 0x004abb83                       ; 004abbe0
        ;   XREF to: 004abb83 (CONDITIONAL_JUMP)  ; LAB_004abb83
    JMP 0x004abb97                      ; 004abbe2
        ;   XREF to: 004abb97 (UNCONDITIONAL_JUMP)  ; LAB_004abb97
    CMP dword ptr [EBP + -0x62],0x0     ; 004abbe4
        ;   Label: LAB_004abbe4
    JZ 0x004aaf1d                       ; 004abbe8
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xffffee72]          ; 004abbee
    PUSH EAX                            ; 004abbf4
    MOV EDX,dword ptr [EBP + 0x92]      ; 004abbf5
    PUSH EDX                            ; 004abbfb
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004b0830 ; 004abbfc
        ;   XREF to: 004b0830 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004b0830(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 004abc01
    INC EAX                             ; 004abc04
    PUSH EAX                            ; 004abc05
    LEA EAX,[EBP + 0xffffee72]          ; 004abc06
    PUSH EAX                            ; 004abc0c
    MOV ECX,dword ptr [EBP + 0x92]      ; 004abc0d
    PUSH ECX                            ; 004abc13
    CALL core_event.cpp_CEventList_setCounter_FUN_004b0720 ; 004abc14
        ;   XREF to: 004b0720 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_004b0720(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 004abc19
    JMP 0x004aaf1d                      ; 004abc1c
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xd                            ; 004abc21
        ;   Label: LAB_004abc21
    PUSH 0x6249cb                       ; 004abc23 | = "killCharacter"
    PUSH EBX                            ; 004abc28
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004abc29
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004abc2e
    TEST EAX,EAX                        ; 004abc31
    JNZ 0x004abeef                      ; 004abc33
        ;   XREF to: 004abeef (CONDITIONAL_JUMP)  ; LAB_004abeef
    MOV AL,byte ptr [EBX + 0xd]         ; 004abc39
    INC AL                              ; 004abc3c
    AND EAX,0xff                        ; 004abc3e
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004abc43 | g_CharacterClassificationTable
    JNZ 0x004abeef                      ; 004abc4a
        ;   XREF to: 004abeef (CONDITIONAL_JUMP)  ; LAB_004abeef
    LEA EAX,[EBX + 0xd]                 ; 004abc50
    MOV BL,byte ptr [EAX]               ; 004abc53
        ;   Label: LAB_004abc53
    XOR ECX,ECX                         ; 004abc55
    INC BL                              ; 004abc57
    MOV CL,BL                           ; 004abc59
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abc5b | g_CharacterClassificationTable
    JZ 0x004abc67                       ; 004abc62
        ;   XREF to: 004abc67 (CONDITIONAL_JUMP)  ; LAB_004abc67
    INC EAX                             ; 004abc64
    JMP 0x004abc53                      ; 004abc65
        ;   XREF to: 004abc53 (UNCONDITIONAL_JUMP)  ; LAB_004abc53
    LEA ECX,[EBP + 0xffffff7e]          ; 004abc67
        ;   Label: LAB_004abc67
    MOV dword ptr [EBP + -0x12],ECX     ; 004abc6d
    LEA ECX,[EBP + -0x16]               ; 004abc70
    PUSH ECX                            ; 004abc73
    LEA ECX,[EBP + -0xe]                ; 004abc74
    PUSH ECX                            ; 004abc77
    LEA ECX,[EBP + -0x7a]               ; 004abc78
    PUSH ECX                            ; 004abc7b
    LEA ECX,[EBP + -0x7e]               ; 004abc7c
    PUSH ECX                            ; 004abc7f
    LEA ECX,[EBP + 0xffffff7e]          ; 004abc80
    PUSH ECX                            ; 004abc86
    LEA ECX,[EBP + 0xfffffe76]          ; 004abc87
    PUSH ECX                            ; 004abc8d
    LEA ECX,[EBP + 0xffffeb52]          ; 004abc8e
    PUSH ECX                            ; 004abc94
    MOV EBX,0xffffffff                  ; 004abc95
    PUSH 0x6249d9                       ; 004abc9a | = " ( %[^,], %[^,], %f , %f , %f , %f)%n"
    MOV dword ptr [EBP + -0x5e],EAX     ; 004abc9f
    XOR ESI,ESI                         ; 004abca2
    PUSH EAX                            ; 004abca4
    MOV dword ptr [EBP + -0x16],EBX     ; 004abca5
    MOV dword ptr [EBP + -0xe],ESI      ; 004abca8
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004abcab
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    FLD float ptr [EBP + -0xe]          ; 004abcb0
    FLD ST0                             ; 004abcb3
    FMUL double ptr [0x00625299]        ; 004abcb5 | DOUBLE_00625299
    MOV EDI,dword ptr [EBP + -0x16]     ; 004abcbb
    ADD ESP,0x24                        ; 004abcbe
    FSTP ST1                            ; 004abcc1
    FSTP float ptr [EBP + -0xe]         ; 004abcc3
    TEST EDI,EDI                        ; 004abcc6
    JL 0x004abd4b                       ; 004abcc8
        ;   XREF to: 004abd4b (CONDITIONAL_JUMP)  ; LAB_004abd4b
    CMP dword ptr [EBP + -0x16],0x0     ; 004abcce
        ;   Label: LAB_004abcce
    JL 0x004abd89                       ; 004abcd2
        ;   XREF to: 004abd89 (CONDITIONAL_JUMP)  ; LAB_004abd89
    CMP dword ptr [EBP + -0x16],0x0     ; 004abcd8
        ;   Label: LAB_004abcd8
    JL 0x004abdb6                       ; 004abcdc
        ;   XREF to: 004abdb6 (CONDITIONAL_JUMP)  ; LAB_004abdb6
    LEA EDI,[EBP + 0xffffeb52]          ; 004abce2
    LEA EBX,[EBP + 0xffffeb52]          ; 004abce8
    SUB ECX,ECX                         ; 004abcee
    DEC ECX                             ; 004abcf0
    XOR EAX,EAX                         ; 004abcf1
    SCASB.REPNE ES:EDI                  ; 004abcf3
    NOT ECX                             ; 004abcf5
    DEC ECX                             ; 004abcf7
    MOV EDI,ECX                         ; 004abcf8
    TEST ECX,ECX                        ; 004abcfa
    JLE 0x004abd1e                      ; 004abcfc
        ;   XREF to: 004abd1e (CONDITIONAL_JUMP)  ; LAB_004abd1e
    LEA EAX,[EBP + 0xffffeb52]          ; 004abcfe
    ADD EAX,ECX                         ; 004abd04
    MOV CL,byte ptr [EAX + -0x1]        ; 004abd06
        ;   Label: LAB_004abd06
    INC CL                              ; 004abd09
    AND ECX,0xff                        ; 004abd0b
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abd11 | g_CharacterClassificationTable
    JNZ 0x004abdcb                      ; 004abd18
        ;   XREF to: 004abdcb (CONDITIONAL_JUMP)  ; LAB_004abdcb
    LEA EAX,[EBX + EDI*0x1]             ; 004abd1e
        ;   Label: LAB_004abd1e
    LEA ESI,[EBX + 0x1]                 ; 004abd21
    MOV byte ptr [EAX],0x0              ; 004abd24
    MOV AL,byte ptr [EBX]               ; 004abd27
        ;   Label: LAB_004abd27
    INC AL                              ; 004abd29
    AND EAX,0xff                        ; 004abd2b
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004abd30 | g_CharacterClassificationTable
    JZ 0x004abdda                       ; 004abd37
        ;   XREF to: 004abdda (CONDITIONAL_JUMP)  ; LAB_004abdda
    PUSH EDI                            ; 004abd3d
    PUSH ESI                            ; 004abd3e
    PUSH EBX                            ; 004abd3f
    DEC EDI                             ; 004abd40
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004abd41
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004abd46
    JMP 0x004abd27                      ; 004abd49
        ;   XREF to: 004abd27 (UNCONDITIONAL_JUMP)  ; LAB_004abd27
    MOV dword ptr [EBP + -0xe],0xbf800000 ; 004abd4b
        ;   Label: LAB_004abd4b
    LEA EAX,[EBP + -0x16]               ; 004abd52
    PUSH EAX                            ; 004abd55
    LEA EAX,[EBP + -0x7a]               ; 004abd56
    PUSH EAX                            ; 004abd59
    LEA EAX,[EBP + -0x7e]               ; 004abd5a
    PUSH EAX                            ; 004abd5d
    LEA EAX,[EBP + 0xffffff7e]          ; 004abd5e
    PUSH EAX                            ; 004abd64
    LEA EAX,[EBP + 0xfffffe76]          ; 004abd65
    PUSH EAX                            ; 004abd6b
    LEA EAX,[EBP + 0xffffeb52]          ; 004abd6c
    PUSH EAX                            ; 004abd72
    PUSH 0x6249ff                       ; 004abd73 | = " ( %[^,], %[^,], %f , %f , %f )%n"
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004abd78
    PUSH EDX                            ; 004abd7b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004abd7c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x20                        ; 004abd81
    JMP 0x004abcce                      ; 004abd84
        ;   XREF to: 004abcce (UNCONDITIONAL_JUMP)  ; LAB_004abcce
    LEA EAX,[EBP + -0x16]               ; 004abd89
        ;   Label: LAB_004abd89
    PUSH EAX                            ; 004abd8c
    LEA EAX,[EBP + 0xfffffe76]          ; 004abd8d
    PUSH EAX                            ; 004abd93
    LEA EAX,[EBP + 0xffffeb52]          ; 004abd94
    PUSH EAX                            ; 004abd9a
    PUSH 0x624a21                       ; 004abd9b | = " ( %[^,], %[^)])%n"
    MOV ESI,dword ptr [EBP + -0x5e]     ; 004abda0
    XOR EBX,EBX                         ; 004abda3
    PUSH ESI                            ; 004abda5
    MOV dword ptr [EBP + -0x12],EBX     ; 004abda6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004abda9
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004abdae
    JMP 0x004abcd8                      ; 004abdb1
        ;   XREF to: 004abcd8 (UNCONDITIONAL_JUMP)  ; LAB_004abcd8
    PUSH 0x624a34                       ; 004abdb6 | = "Syntax error in killCharacter() parms"
        ;   Label: LAB_004abdb6
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004abdbb
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004abdc0
    LEA ESP,[EBP + 0x7e]                ; 004abdc3
    POP EBP                             ; 004abdc6
    POP EDI                             ; 004abdc7
    POP ESI                             ; 004abdc8
    POP EBX                             ; 004abdc9
    RET                                 ; 004abdca
    DEC EDI                             ; 004abdcb
        ;   Label: LAB_004abdcb
    DEC EAX                             ; 004abdcc
    TEST EDI,EDI                        ; 004abdcd
    JG 0x004abd06                       ; 004abdcf
        ;   XREF to: 004abd06 (CONDITIONAL_JUMP)  ; LAB_004abd06
    JMP 0x004abd1e                      ; 004abdd5
        ;   XREF to: 004abd1e (UNCONDITIONAL_JUMP)  ; LAB_004abd1e
    LEA EDI,[EBP + 0xfffffe76]          ; 004abdda
        ;   Label: LAB_004abdda
    LEA EBX,[EBP + 0xfffffe76]          ; 004abde0
    SUB ECX,ECX                         ; 004abde6
    DEC ECX                             ; 004abde8
    XOR EAX,EAX                         ; 004abde9
    SCASB.REPNE ES:EDI                  ; 004abdeb
    NOT ECX                             ; 004abded
    DEC ECX                             ; 004abdef
    MOV EDI,ECX                         ; 004abdf0
    TEST ECX,ECX                        ; 004abdf2
    JLE 0x004abe12                      ; 004abdf4
        ;   XREF to: 004abe12 (CONDITIONAL_JUMP)  ; LAB_004abe12
    LEA EAX,[EBP + 0xfffffe76]          ; 004abdf6
    ADD EAX,ECX                         ; 004abdfc
    MOV CL,byte ptr [EAX + -0x1]        ; 004abdfe
        ;   Label: LAB_004abdfe
    INC CL                              ; 004abe01
    AND ECX,0xff                        ; 004abe03
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abe09 | g_CharacterClassificationTable
    JNZ 0x004abe3b                      ; 004abe10
        ;   XREF to: 004abe3b (CONDITIONAL_JUMP)  ; LAB_004abe3b
    LEA EAX,[EBX + EDI*0x1]             ; 004abe12
        ;   Label: LAB_004abe12
    LEA ESI,[EBX + 0x1]                 ; 004abe15
    MOV byte ptr [EAX],0x0              ; 004abe18
    MOV AL,byte ptr [EBX]               ; 004abe1b
        ;   Label: LAB_004abe1b
    INC AL                              ; 004abe1d
    AND EAX,0xff                        ; 004abe1f
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004abe24 | g_CharacterClassificationTable
    JZ 0x004abe43                       ; 004abe2b
        ;   XREF to: 004abe43 (CONDITIONAL_JUMP)  ; LAB_004abe43
    PUSH EDI                            ; 004abe2d
    PUSH ESI                            ; 004abe2e
    PUSH EBX                            ; 004abe2f
    DEC EDI                             ; 004abe30
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004abe31
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004abe36
    JMP 0x004abe1b                      ; 004abe39
        ;   XREF to: 004abe1b (UNCONDITIONAL_JUMP)  ; LAB_004abe1b
    DEC EDI                             ; 004abe3b
        ;   Label: LAB_004abe3b
    DEC EAX                             ; 004abe3c
    TEST EDI,EDI                        ; 004abe3d
    JG 0x004abdfe                       ; 004abe3f
        ;   XREF to: 004abdfe (CONDITIONAL_JUMP)  ; LAB_004abdfe
    JMP 0x004abe12                      ; 004abe41
        ;   XREF to: 004abe12 (UNCONDITIONAL_JUMP)  ; LAB_004abe12
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004abe43
        ;   Label: LAB_004abe43
    ADD EAX,dword ptr [EBP + -0x16]     ; 004abe46
    MOV BL,byte ptr [EAX]               ; 004abe49
        ;   Label: LAB_004abe49
    XOR ECX,ECX                         ; 004abe4b
    INC BL                              ; 004abe4d
    MOV CL,BL                           ; 004abe4f
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abe51 | g_CharacterClassificationTable
    JZ 0x004abe5d                       ; 004abe58
        ;   XREF to: 004abe5d (CONDITIONAL_JUMP)  ; LAB_004abe5d
    INC EAX                             ; 004abe5a
    JMP 0x004abe49                      ; 004abe5b
        ;   XREF to: 004abe49 (UNCONDITIONAL_JUMP)  ; LAB_004abe49
    PUSH 0x823c14                       ; 004abe5d | g_CCharacterClassInfo
        ;   Label: LAB_004abe5d
    MOV ECX,dword ptr [0x00823c4c]      ; 004abe62 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 004abe68
    MOV dword ptr [EBP + -0x5e],EAX     ; 004abe69
    LEA EAX,[EBP + 0xffffeb52]          ; 004abe6c
    PUSH EAX                            ; 004abe72
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004abe73
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004abe78
    MOV EBX,EAX                         ; 004abe7b
    TEST EAX,EAX                        ; 004abe7d
    JZ 0x004aaceb                       ; 004abe7f
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EAX,dword ptr [0x0065d95c]      ; 004abe85 | g_ActorNameSentinel
    JNZ 0x004abe92                      ; 004abe8b
        ;   XREF to: 004abe92 (CONDITIONAL_JUMP)  ; LAB_004abe92
    XOR EDI,EDI                         ; 004abe8d
    MOV dword ptr [EBP + -0x62],EDI     ; 004abe8f
    LEA EAX,[EBP + -0xa]                ; 004abe92
        ;   Label: LAB_004abe92
    PUSH EAX                            ; 004abe95
    LEA EAX,[EBP + 0xfffffe76]          ; 004abe96
    PUSH EAX                            ; 004abe9c
    CALL core_event.cpp_parseDeathType_FUN_004aa7d0 ; 004abe9d
        ;   XREF to: 004aa7d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseDeathType_FUN_004aa7d0(char * type_name, int * out_type_id)
    ADD ESP,0x8                         ; 004abea2
    TEST EAX,EAX                        ; 004abea5
    JZ 0x004abed3                       ; 004abea7
        ;   XREF to: 004abed3 (CONDITIONAL_JUMP)  ; LAB_004abed3
    CMP dword ptr [EBP + -0x62],0x0     ; 004abea9
    JZ 0x004aaf1d                       ; 004abead
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV EDX,dword ptr [EBP + -0x12]     ; 004abeb3
    PUSH dword ptr [EBP + -0xe]         ; 004abeb6
    PUSH EDX                            ; 004abeb9
    MOV ECX,dword ptr [EBP + -0xa]      ; 004abeba
    PUSH ECX                            ; 004abebd
    MOV EAX,dword ptr [EBX + 0x154]     ; 004abebe
    PUSH EBX                            ; 004abec4
    CALL dword ptr [EAX + 0xf0]         ; 004abec5
    ADD ESP,0x10                        ; 004abecb
    JMP 0x004aaf1d                      ; 004abece
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffffe76]          ; 004abed3
        ;   Label: LAB_004abed3
    PUSH EAX                            ; 004abed9
    PUSH 0x624a5a                       ; 004abeda | = "Unknown death type \"%s\" in killChar..."
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004abedf
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004abee4
    LEA ESP,[EBP + 0x7e]                ; 004abee7
    POP EBP                             ; 004abeea
    POP EDI                             ; 004abeeb
    POP ESI                             ; 004abeec
    POP EBX                             ; 004abeed
    RET                                 ; 004abeee
    PUSH 0x8                            ; 004abeef
        ;   Label: LAB_004abeef
    PUSH 0x624a8c                       ; 004abef1 | = "killHero"
    PUSH EBX                            ; 004abef6
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004abef7
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004abefc
    TEST EAX,EAX                        ; 004abeff
    JNZ 0x004ac025                      ; 004abf01
        ;   XREF to: 004ac025 (CONDITIONAL_JUMP)  ; LAB_004ac025
    MOV AL,byte ptr [EBX + 0x8]         ; 004abf07
    INC AL                              ; 004abf0a
    AND EAX,0xff                        ; 004abf0c
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004abf11 | g_CharacterClassificationTable
    JNZ 0x004ac025                      ; 004abf18
        ;   XREF to: 004ac025 (CONDITIONAL_JUMP)  ; LAB_004ac025
    LEA EAX,[EBX + 0x8]                 ; 004abf1e
    MOV BL,byte ptr [EAX]               ; 004abf21
        ;   Label: LAB_004abf21
    XOR ECX,ECX                         ; 004abf23
    INC BL                              ; 004abf25
    MOV CL,BL                           ; 004abf27
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abf29 | g_CharacterClassificationTable
    JZ 0x004abf35                       ; 004abf30
        ;   XREF to: 004abf35 (CONDITIONAL_JUMP)  ; LAB_004abf35
    INC EAX                             ; 004abf32
    JMP 0x004abf21                      ; 004abf33
        ;   XREF to: 004abf21 (UNCONDITIONAL_JUMP)  ; LAB_004abf21
    MOV ECX,dword ptr [0x00680a00]      ; 004abf35 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004abf35
    MOV dword ptr [EBP + -0x5e],EAX     ; 004abf3b
    CMP dword ptr [ECX],0x0             ; 004abf3e | g_CNetGameInstance
    JNZ 0x004abf85                      ; 004abf41
        ;   XREF to: 004abf85 (CONDITIONAL_JUMP)  ; LAB_004abf85
    LEA ECX,[EBP + -0x6]                ; 004abf43
    PUSH ECX                            ; 004abf46
    LEA ECX,[EBP + 0xfffffe12]          ; 004abf47
    PUSH ECX                            ; 004abf4d
    PUSH 0x624ac0                       ; 004abf4e | = " ( %[^)])%n"
    MOV ESI,0xffffffff                  ; 004abf53
    PUSH EAX                            ; 004abf58
    MOV dword ptr [EBP + -0x6],ESI      ; 004abf59
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004abf5c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + -0x6]      ; 004abf61
    ADD ESP,0x10                        ; 004abf64
    CMP EDI,0x2                         ; 004abf67
    JL 0x004abf9a                       ; 004abf6a
        ;   XREF to: 004abf9a (CONDITIONAL_JUMP)  ; LAB_004abf9a
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004abf6c
    ADD EAX,EDI                         ; 004abf6f
    MOV BL,byte ptr [EAX]               ; 004abf71
        ;   Label: LAB_004abf71
    XOR ECX,ECX                         ; 004abf73
    INC BL                              ; 004abf75
    MOV CL,BL                           ; 004abf77
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004abf79 | g_CharacterClassificationTable
    JZ 0x004abfaf                       ; 004abf80
        ;   XREF to: 004abfaf (CONDITIONAL_JUMP)  ; LAB_004abfaf
    INC EAX                             ; 004abf82
    JMP 0x004abf71                      ; 004abf83
        ;   XREF to: 004abf71 (UNCONDITIONAL_JUMP)  ; LAB_004abf71
    PUSH 0x624a95                       ; 004abf85 | = "Can't use killHero command in multi-p..."
        ;   Label: LAB_004abf85
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004abf8a
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004abf8f
    LEA ESP,[EBP + 0x7e]                ; 004abf92
    POP EBP                             ; 004abf95
    POP EDI                             ; 004abf96
    POP ESI                             ; 004abf97
    POP EBX                             ; 004abf98
    RET                                 ; 004abf99
    PUSH 0x624acc                       ; 004abf9a | = "Syntax error in killHero() parms"
        ;   Label: LAB_004abf9a
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004abf9f
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004abfa4
    LEA ESP,[EBP + 0x7e]                ; 004abfa7
    POP EBP                             ; 004abfaa
    POP EDI                             ; 004abfab
    POP ESI                             ; 004abfac
    POP EBX                             ; 004abfad
    RET                                 ; 004abfae
    MOV dword ptr [EBP + -0x5e],EAX     ; 004abfaf
        ;   Label: LAB_004abfaf
    LEA EAX,[EBP + -0x2]                ; 004abfb2
    PUSH EAX                            ; 004abfb5
    LEA EAX,[EBP + 0xfffffe12]          ; 004abfb6
    PUSH EAX                            ; 004abfbc
    CALL core_event.cpp_parseDeathType_FUN_004aa7d0 ; 004abfbd
        ;   XREF to: 004aa7d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseDeathType_FUN_004aa7d0(char * type_name, int * out_type_id)
    ADD ESP,0x8                         ; 004abfc2
    TEST EAX,EAX                        ; 004abfc5
    JZ 0x004ac009                       ; 004abfc7
        ;   XREF to: 004ac009 (CONDITIONAL_JUMP)  ; LAB_004ac009
    CMP dword ptr [EBP + -0x62],0x0     ; 004abfc9
    JZ 0x004aaf1d                       ; 004abfcd
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV EAX,[0x02db87d0]                ; 004abfd3 | g_LocalHeroIndex
    SHL EAX,0x2                         ; 004abfd8
    MOV EBX,dword ptr [EAX + 0x2db87c0] ; 004abfdb | g_HeroActors
    TEST EBX,EBX                        ; 004abfe1
    JZ 0x004aaf1d                       ; 004abfe3
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0xbf800000                     ; 004abfe9
    PUSH 0x0                            ; 004abfee
    MOV ESI,dword ptr [EBP + -0x2]      ; 004abff0
    PUSH ESI                            ; 004abff3
    MOV ECX,dword ptr [EBX + 0x154]     ; 004abff4
    PUSH EBX                            ; 004abffa
    CALL dword ptr [ECX + 0xf0]         ; 004abffb
    ADD ESP,0x10                        ; 004ac001
    JMP 0x004aaf1d                      ; 004ac004
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffffe12]          ; 004ac009
        ;   Label: LAB_004ac009
    PUSH EAX                            ; 004ac00f
    PUSH 0x624aed                       ; 004ac010 | = "Unknown death type \"%s\" in killHero..."
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ac015
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004ac01a
    LEA ESP,[EBP + 0x7e]                ; 004ac01d
    POP EBP                             ; 004ac020
    POP EDI                             ; 004ac021
    POP ESI                             ; 004ac022
    POP EBX                             ; 004ac023
    RET                                 ; 004ac024
    PUSH 0x7                            ; 004ac025
        ;   Label: LAB_004ac025
    PUSH 0x624b1a                       ; 004ac027 | = "killSfx"
    PUSH EBX                            ; 004ac02c
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac02d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac032
    TEST EAX,EAX                        ; 004ac035
    JNZ 0x004ac230                      ; 004ac037
        ;   XREF to: 004ac230 (CONDITIONAL_JUMP)  ; LAB_004ac230
    MOV AL,byte ptr [EBX + 0x7]         ; 004ac03d
    INC AL                              ; 004ac040
    AND EAX,0xff                        ; 004ac042
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ac047 | g_CharacterClassificationTable
    JNZ 0x004ac230                      ; 004ac04e
        ;   XREF to: 004ac230 (CONDITIONAL_JUMP)  ; LAB_004ac230
    LEA EAX,[EBX + 0x7]                 ; 004ac054
    MOV BL,byte ptr [EAX]               ; 004ac057
        ;   Label: LAB_004ac057
    XOR ECX,ECX                         ; 004ac059
    INC BL                              ; 004ac05b
    MOV CL,BL                           ; 004ac05d
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac05f | g_CharacterClassificationTable
    JZ 0x004ac06b                       ; 004ac066
        ;   XREF to: 004ac06b (CONDITIONAL_JUMP)  ; LAB_004ac06b
    INC EAX                             ; 004ac068
    JMP 0x004ac057                      ; 004ac069
        ;   XREF to: 004ac057 (UNCONDITIONAL_JUMP)  ; LAB_004ac057
    LEA ECX,[EBP + 0x2]                 ; 004ac06b
        ;   Label: LAB_004ac06b
    PUSH ECX                            ; 004ac06e
    LEA ECX,[EBP + 0xfffff192]          ; 004ac06f
    PUSH ECX                            ; 004ac075
    PUSH 0x624b22                       ; 004ac076 | = "(%[^,)]%n"
    MOV EDI,0xffffffff                  ; 004ac07b
    PUSH EAX                            ; 004ac080
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac081
    MOV dword ptr [EBP + 0x2],EDI       ; 004ac084
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac087
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x2]       ; 004ac08c
    ADD ESP,0x10                        ; 004ac08f
    CMP EAX,0x3                         ; 004ac092
    JL 0x004ac100                       ; 004ac095
        ;   XREF to: 004ac100 (CONDITIONAL_JUMP)  ; LAB_004ac100
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ac097
    LEA EBX,[EBP + 0xfffff192]          ; 004ac09a
    ADD EDX,EAX                         ; 004ac0a0
    LEA EDI,[EBP + 0xfffff192]          ; 004ac0a2
    MOV dword ptr [EBP + -0x5e],EDX     ; 004ac0a8
    SUB ECX,ECX                         ; 004ac0ab
    DEC ECX                             ; 004ac0ad
    XOR EAX,EAX                         ; 004ac0ae
    SCASB.REPNE ES:EDI                  ; 004ac0b0
    NOT ECX                             ; 004ac0b2
    DEC ECX                             ; 004ac0b4
    MOV EDI,ECX                         ; 004ac0b5
    TEST ECX,ECX                        ; 004ac0b7
    JLE 0x004ac0d7                      ; 004ac0b9
        ;   XREF to: 004ac0d7 (CONDITIONAL_JUMP)  ; LAB_004ac0d7
    LEA EAX,[EBP + 0xfffff192]          ; 004ac0bb
    ADD EAX,ECX                         ; 004ac0c1
    MOV CL,byte ptr [EAX + -0x1]        ; 004ac0c3
        ;   Label: LAB_004ac0c3
    INC CL                              ; 004ac0c6
    AND ECX,0xff                        ; 004ac0c8
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac0ce | g_CharacterClassificationTable
    JNZ 0x004ac11c                      ; 004ac0d5
        ;   XREF to: 004ac11c (CONDITIONAL_JUMP)  ; LAB_004ac11c
    LEA EAX,[EBX + EDI*0x1]             ; 004ac0d7
        ;   Label: LAB_004ac0d7
    LEA ESI,[EBX + 0x1]                 ; 004ac0da
    MOV byte ptr [EAX],0x0              ; 004ac0dd
    MOV AL,byte ptr [EBX]               ; 004ac0e0
        ;   Label: LAB_004ac0e0
    INC AL                              ; 004ac0e2
    AND EAX,0xff                        ; 004ac0e4
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ac0e9 | g_CharacterClassificationTable
    JZ 0x004ac124                       ; 004ac0f0
        ;   XREF to: 004ac124 (CONDITIONAL_JUMP)  ; LAB_004ac124
    PUSH EDI                            ; 004ac0f2
    PUSH ESI                            ; 004ac0f3
    PUSH EBX                            ; 004ac0f4
    DEC EDI                             ; 004ac0f5
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ac0f6
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ac0fb
    JMP 0x004ac0e0                      ; 004ac0fe
        ;   XREF to: 004ac0e0 (UNCONDITIONAL_JUMP)  ; LAB_004ac0e0
    PUSH 0x624b2c                       ; 004ac100 | = "Error parsing killSfx parms"
        ;   Label: LAB_004ac100
    PUSH 0x2d0a460                      ; 004ac105 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac10a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac10f
    XOR EAX,EAX                         ; 004ac112
    LEA ESP,[EBP + 0x7e]                ; 004ac114
    POP EBP                             ; 004ac117
    POP EDI                             ; 004ac118
    POP ESI                             ; 004ac119
    POP EBX                             ; 004ac11a
    RET                                 ; 004ac11b
    DEC EDI                             ; 004ac11c
        ;   Label: LAB_004ac11c
    DEC EAX                             ; 004ac11d
    TEST EDI,EDI                        ; 004ac11e
    JG 0x004ac0c3                       ; 004ac120
        ;   XREF to: 004ac0c3 (CONDITIONAL_JUMP)  ; LAB_004ac0c3
    JMP 0x004ac0d7                      ; 004ac122
        ;   XREF to: 004ac0d7 (UNCONDITIONAL_JUMP)  ; LAB_004ac0d7
    XOR ECX,ECX                         ; 004ac124
        ;   Label: LAB_004ac124
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac126
    MOV dword ptr [EBP + 0x6],ECX       ; 004ac129
    CMP byte ptr [EAX],0x2c             ; 004ac12c
    JZ 0x004ac150                       ; 004ac12f
        ;   XREF to: 004ac150 (CONDITIONAL_JUMP)  ; LAB_004ac150
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac131
        ;   Label: LAB_004ac131
    MOV BL,byte ptr [EAX]               ; 004ac134
        ;   Label: LAB_004ac134
    INC BL                              ; 004ac136
    AND EBX,0xff                        ; 004ac138
    MOV DL,byte ptr [EBX + 0x6849c4]    ; 004ac13e | g_CharacterClassificationTable
    LEA ECX,[EAX + 0x1]                 ; 004ac144
    TEST DL,0x2                         ; 004ac147
    JZ 0x004ac19a                       ; 004ac14a
        ;   XREF to: 004ac19a (CONDITIONAL_JUMP)  ; LAB_004ac19a
    MOV EAX,ECX                         ; 004ac14c
    JMP 0x004ac134                      ; 004ac14e
        ;   XREF to: 004ac134 (UNCONDITIONAL_JUMP)  ; LAB_004ac134
    LEA EAX,[EBP + 0x2]                 ; 004ac150
        ;   Label: LAB_004ac150
    PUSH EAX                            ; 004ac153
    LEA EAX,[EBP + 0x6]                 ; 004ac154
    PUSH EAX                            ; 004ac157
    PUSH 0x624b48                       ; 004ac158 | = ",%f%n"
    MOV ESI,dword ptr [EBP + -0x5e]     ; 004ac15d
    MOV EBX,0xffffffff                  ; 004ac160
    PUSH ESI                            ; 004ac165
    MOV dword ptr [EBP + 0x2],EBX       ; 004ac166
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac169
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x2]       ; 004ac16e
    ADD ESP,0x10                        ; 004ac171
    CMP EDI,0x3                         ; 004ac174
    JL 0x004ac17e                       ; 004ac177
        ;   XREF to: 004ac17e (CONDITIONAL_JUMP)  ; LAB_004ac17e
    ADD dword ptr [EBP + -0x5e],EDI     ; 004ac179
    JMP 0x004ac131                      ; 004ac17c
        ;   XREF to: 004ac131 (UNCONDITIONAL_JUMP)  ; LAB_004ac131
    PUSH 0x624b4e                       ; 004ac17e | = "Error parsing killSfx parms"
        ;   Label: LAB_004ac17e
    PUSH 0x2d0a460                      ; 004ac183 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac188
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac18d
    XOR EAX,EAX                         ; 004ac190
    LEA ESP,[EBP + 0x7e]                ; 004ac192
    POP EBP                             ; 004ac195
    POP EDI                             ; 004ac196
    POP ESI                             ; 004ac197
    POP EBX                             ; 004ac198
    RET                                 ; 004ac199
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac19a
        ;   Label: LAB_004ac19a
    CMP byte ptr [EAX],0x29             ; 004ac19d
    JNZ 0x004ac1f7                      ; 004ac1a0
        ;   XREF to: 004ac1f7 (CONDITIONAL_JUMP)  ; LAB_004ac1f7
    MOV dword ptr [EBP + -0x5e],ECX     ; 004ac1a2
    CMP dword ptr [EBP + -0x62],0x0     ; 004ac1a5
    JZ 0x004aaf1d                       ; 004ac1a9
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffff192]          ; 004ac1af
    PUSH EAX                            ; 004ac1b5
    MOV EBX,dword ptr [EBP + 0x92]      ; 004ac1b6
    PUSH EBX                            ; 004ac1bc
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40 ; 004ac1bd
        ;   XREF to: 004b0c40 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList * this_ptr, char * name)
    FLD float ptr [EBP + 0x6]           ; 004ac1c2
    FLDZ                                ; 004ac1c5
    MOV ECX,EAX                         ; 004ac1c7
    ADD ESP,0x8                         ; 004ac1c9
    FCOMPP                              ; 004ac1cc
    FNSTSW AX                           ; 004ac1ce
    SAHF                                ; 004ac1d0
    JNC 0x004ac213                      ; 004ac1d1
        ;   XREF to: 004ac213 (CONDITIONAL_JUMP)  ; LAB_004ac213
    PUSH 0x1                            ; 004ac1d3
    PUSH dword ptr [EBP + 0x6]          ; 004ac1d5
    PUSH 0x0                            ; 004ac1d8
    PUSH ECX                            ; 004ac1da
    CALL sound_sndmain.cpp_setSfxFade_FUN_005a9c70 ; 004ac1db
        ;   XREF to: 005a9c70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_005a9c70(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 004ac1e0
    MOV ESI,dword ptr [EBP + 0x92]      ; 004ac1e3
    PUSH ESI                            ; 004ac1e9
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 ; 004ac1ea
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004ac1ef
    JMP 0x004aaf1d                      ; 004ac1f2
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x624b6a                       ; 004ac1f7 | = "Can't find matching ) in killSfx command"
        ;   Label: LAB_004ac1f7
    PUSH 0x2d0a460                      ; 004ac1fc | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac201
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac206
    XOR EAX,EAX                         ; 004ac209
    LEA ESP,[EBP + 0x7e]                ; 004ac20b
    POP EBP                             ; 004ac20e
    POP EDI                             ; 004ac20f
    POP ESI                             ; 004ac210
    POP EBX                             ; 004ac211
    RET                                 ; 004ac212
    PUSH ECX                            ; 004ac213
        ;   Label: LAB_004ac213
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004ac214
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004ac219
    MOV ESI,dword ptr [EBP + 0x92]      ; 004ac21c
    PUSH ESI                            ; 004ac222
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 ; 004ac223
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004ac228
    JMP 0x004aaf1d                      ; 004ac22b
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x9                            ; 004ac230
        ;   Label: LAB_004ac230
    PUSH 0x624b93                       ; 004ac232 | = "lightning"
    PUSH EBX                            ; 004ac237
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac238
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac23d
    TEST EAX,EAX                        ; 004ac240
    JNZ 0x004ac2e5                      ; 004ac242
        ;   XREF to: 004ac2e5 (CONDITIONAL_JUMP)  ; LAB_004ac2e5
    MOV AL,byte ptr [EBX + 0x9]         ; 004ac248
    INC AL                              ; 004ac24b
    AND EAX,0xff                        ; 004ac24d
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ac252 | g_CharacterClassificationTable
    JNZ 0x004ac2e5                      ; 004ac259
        ;   XREF to: 004ac2e5 (CONDITIONAL_JUMP)  ; LAB_004ac2e5
    LEA EAX,[EBX + 0x9]                 ; 004ac25f
    MOV BL,byte ptr [EAX]               ; 004ac262
        ;   Label: LAB_004ac262
    XOR ECX,ECX                         ; 004ac264
    INC BL                              ; 004ac266
    MOV CL,BL                           ; 004ac268
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac26a | g_CharacterClassificationTable
    JZ 0x004ac276                       ; 004ac271
        ;   XREF to: 004ac276 (CONDITIONAL_JUMP)  ; LAB_004ac276
    INC EAX                             ; 004ac273
    JMP 0x004ac262                      ; 004ac274
        ;   XREF to: 004ac262 (UNCONDITIONAL_JUMP)  ; LAB_004ac262
    LEA ECX,[EBP + 0xa]                 ; 004ac276
        ;   Label: LAB_004ac276
    PUSH ECX                            ; 004ac279
    PUSH 0x624b9d                       ; 004ac27a | = "( )%n"
    MOV EDI,0xffffffff                  ; 004ac27f
    PUSH EAX                            ; 004ac284
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac285
    MOV dword ptr [EBP + 0xa],EDI       ; 004ac288
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac28b
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0xa]       ; 004ac290
    ADD ESP,0xc                         ; 004ac293
    CMP EAX,0x2                         ; 004ac296
    JL 0x004ac2c9                       ; 004ac299
        ;   XREF to: 004ac2c9 (CONDITIONAL_JUMP)  ; LAB_004ac2c9
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ac29b
    ADD EDX,EAX                         ; 004ac29e
    MOV ECX,dword ptr [EBP + -0x62]     ; 004ac2a0
    MOV dword ptr [EBP + -0x5e],EDX     ; 004ac2a3
    TEST ECX,ECX                        ; 004ac2a6
    JZ 0x004aaf1d                       ; 004ac2a8
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x1                            ; 004ac2ae
    MOV EBX,dword ptr [0x006848fc]      ; 004ac2b0 | g_CWeatherInstance | g_CWeatherPtr
    PUSH 0x3dcccccd                     ; 004ac2b6
    PUSH EBX                            ; 004ac2bb | g_CWeatherInstance
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0 ; 004ac2bc
        ;   XREF to: 005eeeb0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 004ac2c1
    JMP 0x004aaf1d                      ; 004ac2c4
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x624ba3                       ; 004ac2c9 | = "Error parsing lightning command"
        ;   Label: LAB_004ac2c9
    PUSH 0x2d0a460                      ; 004ac2ce | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac2d3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac2d8
    XOR EAX,EAX                         ; 004ac2db
    LEA ESP,[EBP + 0x7e]                ; 004ac2dd
    POP EBP                             ; 004ac2e0
    POP EDI                             ; 004ac2e1
    POP ESI                             ; 004ac2e2
    POP EBX                             ; 004ac2e3
    RET                                 ; 004ac2e4
    PUSH 0x7                            ; 004ac2e5
        ;   Label: LAB_004ac2e5
    PUSH 0x624bc3                       ; 004ac2e7 | = "playSfx"
    PUSH EBX                            ; 004ac2ec
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac2ed
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac2f2
    TEST EAX,EAX                        ; 004ac2f5
    JNZ 0x004ac612                      ; 004ac2f7
        ;   XREF to: 004ac612 (CONDITIONAL_JUMP)  ; LAB_004ac612
    MOV AL,byte ptr [EBX + 0x7]         ; 004ac2fd
    INC AL                              ; 004ac300
    AND EAX,0xff                        ; 004ac302
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ac307 | g_CharacterClassificationTable
    JNZ 0x004ac612                      ; 004ac30e
        ;   XREF to: 004ac612 (CONDITIONAL_JUMP)  ; LAB_004ac612
    LEA EAX,[EBX + 0x7]                 ; 004ac314
    MOV BL,byte ptr [EAX]               ; 004ac317
        ;   Label: LAB_004ac317
    XOR ECX,ECX                         ; 004ac319
    INC BL                              ; 004ac31b
    MOV CL,BL                           ; 004ac31d
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac31f | g_CharacterClassificationTable
    JZ 0x004ac32b                       ; 004ac326
        ;   XREF to: 004ac32b (CONDITIONAL_JUMP)  ; LAB_004ac32b
    INC EAX                             ; 004ac328
    JMP 0x004ac317                      ; 004ac329
        ;   XREF to: 004ac317 (UNCONDITIONAL_JUMP)  ; LAB_004ac317
    LEA ECX,[EBP + 0x12]                ; 004ac32b
        ;   Label: LAB_004ac32b
    PUSH ECX                            ; 004ac32e
    LEA ECX,[EBP + 0xffffece2]          ; 004ac32f
    PUSH ECX                            ; 004ac335
    PUSH 0x624bcb                       ; 004ac336 | = "(%[^,)]%n"
    MOV ESI,0xffffffff                  ; 004ac33b
    PUSH EAX                            ; 004ac340
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac341
    MOV dword ptr [EBP + 0x12],ESI      ; 004ac344
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac347
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x12]      ; 004ac34c
    ADD ESP,0x10                        ; 004ac34f
    CMP EDI,0x3                         ; 004ac352
    JL 0x004ac3be                       ; 004ac355
        ;   XREF to: 004ac3be (CONDITIONAL_JUMP)  ; LAB_004ac3be
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ac357
    LEA ESI,[EBP + 0xffffece2]          ; 004ac35a
    ADD EDX,EDI                         ; 004ac360
    LEA EDI,[EBP + 0xffffece2]          ; 004ac362
    MOV dword ptr [EBP + -0x5e],EDX     ; 004ac368
    SUB ECX,ECX                         ; 004ac36b
    DEC ECX                             ; 004ac36d
    XOR EAX,EAX                         ; 004ac36e
    SCASB.REPNE ES:EDI                  ; 004ac370
    NOT ECX                             ; 004ac372
    DEC ECX                             ; 004ac374
    MOV EDI,ECX                         ; 004ac375
    TEST ECX,ECX                        ; 004ac377
    JLE 0x004ac395                      ; 004ac379
        ;   XREF to: 004ac395 (CONDITIONAL_JUMP)  ; LAB_004ac395
    LEA EAX,[EBP + 0xffffece2]          ; 004ac37b
    ADD EAX,ECX                         ; 004ac381
    MOV BL,byte ptr [EAX + -0x1]        ; 004ac383
        ;   Label: LAB_004ac383
    XOR ECX,ECX                         ; 004ac386
    INC BL                              ; 004ac388
    MOV CL,BL                           ; 004ac38a
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac38c | g_CharacterClassificationTable
    JNZ 0x004ac3da                      ; 004ac393
        ;   XREF to: 004ac3da (CONDITIONAL_JUMP)  ; LAB_004ac3da
    LEA EAX,[ESI + EDI*0x1]             ; 004ac395
        ;   Label: LAB_004ac395
    LEA EBX,[ESI + 0x1]                 ; 004ac398
    MOV byte ptr [EAX],0x0              ; 004ac39b
    MOV AL,byte ptr [ESI]               ; 004ac39e
        ;   Label: LAB_004ac39e
    INC AL                              ; 004ac3a0
    AND EAX,0xff                        ; 004ac3a2
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ac3a7 | g_CharacterClassificationTable
    JZ 0x004ac3e2                       ; 004ac3ae
        ;   XREF to: 004ac3e2 (CONDITIONAL_JUMP)  ; LAB_004ac3e2
    PUSH EDI                            ; 004ac3b0
    PUSH EBX                            ; 004ac3b1
    PUSH ESI                            ; 004ac3b2
    DEC EDI                             ; 004ac3b3
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ac3b4
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ac3b9
    JMP 0x004ac39e                      ; 004ac3bc
        ;   XREF to: 004ac39e (UNCONDITIONAL_JUMP)  ; LAB_004ac39e
    PUSH 0x624bd5                       ; 004ac3be | = "Error parsing playSfx parms"
        ;   Label: LAB_004ac3be
    PUSH 0x2d0a460                      ; 004ac3c3 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac3c8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac3cd
    XOR EAX,EAX                         ; 004ac3d0
    LEA ESP,[EBP + 0x7e]                ; 004ac3d2
    POP EBP                             ; 004ac3d5
    POP EDI                             ; 004ac3d6
    POP ESI                             ; 004ac3d7
    POP EBX                             ; 004ac3d8
    RET                                 ; 004ac3d9
    DEC EDI                             ; 004ac3da
        ;   Label: LAB_004ac3da
    DEC EAX                             ; 004ac3db
    TEST EDI,EDI                        ; 004ac3dc
    JG 0x004ac383                       ; 004ac3de
        ;   XREF to: 004ac383 (CONDITIONAL_JUMP)  ; LAB_004ac383
    JMP 0x004ac395                      ; 004ac3e0
        ;   XREF to: 004ac395 (UNCONDITIONAL_JUMP)  ; LAB_004ac395
    MOV ECX,0x32                        ; 004ac3e2
        ;   Label: LAB_004ac3e2
    LEA EDI,[EBP + 0xfffff57a]          ; 004ac3e7
    MOV ESI,0x6793d8                    ; 004ac3ed | g_DefaultSfxHandleName
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac3f2
    MOVSD.REP ES:EDI,ESI                ; 004ac3f5 | g_DefaultSfxHandleName | DAT_006793dc
    CMP byte ptr [EAX],0x2c             ; 004ac3f7
    JZ 0x004ac41f                       ; 004ac3fa
        ;   XREF to: 004ac41f (CONDITIONAL_JUMP)  ; LAB_004ac41f
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac3fc
        ;   Label: LAB_004ac3fc
    MOV BL,byte ptr [EAX]               ; 004ac3ff
        ;   Label: LAB_004ac3ff
    INC BL                              ; 004ac401
    AND EBX,0xff                        ; 004ac403
    MOV DL,byte ptr [EBX + 0x6849c4]    ; 004ac409 | g_CharacterClassificationTable
    LEA ECX,[EAX + 0x1]                 ; 004ac40f
    TEST DL,0x2                         ; 004ac412
    JZ 0x004ac50f                       ; 004ac415
        ;   XREF to: 004ac50f (CONDITIONAL_JUMP)  ; LAB_004ac50f
    MOV EAX,ECX                         ; 004ac41b
    JMP 0x004ac3ff                      ; 004ac41d
        ;   XREF to: 004ac3ff (UNCONDITIONAL_JUMP)  ; LAB_004ac3ff
    LEA EAX,[EBP + 0x12]                ; 004ac41f
        ;   Label: LAB_004ac41f
    PUSH EAX                            ; 004ac422
    LEA EAX,[EBP + 0xfffff57a]          ; 004ac423
    PUSH EAX                            ; 004ac429
    PUSH 0x624bf1                       ; 004ac42a | = ",%[^)]%n"
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004ac42f
    MOV ECX,0xffffffff                  ; 004ac432
    PUSH EBX                            ; 004ac437
    MOV dword ptr [EBP + 0x12],ECX      ; 004ac438
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac43b
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x12]      ; 004ac440
    ADD ESP,0x10                        ; 004ac443
    CMP ESI,0x3                         ; 004ac446
    JL 0x004ac4ad                       ; 004ac449
        ;   XREF to: 004ac4ad (CONDITIONAL_JUMP)  ; LAB_004ac4ad
    ADD dword ptr [EBP + -0x5e],ESI     ; 004ac44b
    LEA EDI,[EBP + 0xfffff57a]          ; 004ac44e
    LEA ESI,[EBP + 0xfffff57a]          ; 004ac454
    SUB ECX,ECX                         ; 004ac45a
    DEC ECX                             ; 004ac45c
    XOR EAX,EAX                         ; 004ac45d
    SCASB.REPNE ES:EDI                  ; 004ac45f
    NOT ECX                             ; 004ac461
    DEC ECX                             ; 004ac463
    MOV EDI,ECX                         ; 004ac464
    TEST ECX,ECX                        ; 004ac466
    JLE 0x004ac484                      ; 004ac468
        ;   XREF to: 004ac484 (CONDITIONAL_JUMP)  ; LAB_004ac484
    LEA EAX,[EBP + 0xfffff57a]          ; 004ac46a
    ADD EAX,ECX                         ; 004ac470
    MOV BL,byte ptr [EAX + -0x1]        ; 004ac472
        ;   Label: LAB_004ac472
    XOR ECX,ECX                         ; 004ac475
    INC BL                              ; 004ac477
    MOV CL,BL                           ; 004ac479
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac47b | g_CharacterClassificationTable
    JNZ 0x004ac4c9                      ; 004ac482
        ;   XREF to: 004ac4c9 (CONDITIONAL_JUMP)  ; LAB_004ac4c9
    LEA EAX,[ESI + EDI*0x1]             ; 004ac484
        ;   Label: LAB_004ac484
    LEA EBX,[ESI + 0x1]                 ; 004ac487
    MOV byte ptr [EAX],0x0              ; 004ac48a
    MOV AL,byte ptr [ESI]               ; 004ac48d
        ;   Label: LAB_004ac48d
    INC AL                              ; 004ac48f
    AND EAX,0xff                        ; 004ac491
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ac496 | g_CharacterClassificationTable
    JZ 0x004ac4d1                       ; 004ac49d
        ;   XREF to: 004ac4d1 (CONDITIONAL_JUMP)  ; LAB_004ac4d1
    PUSH EDI                            ; 004ac49f
    PUSH EBX                            ; 004ac4a0
    PUSH ESI                            ; 004ac4a1
    DEC EDI                             ; 004ac4a2
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ac4a3
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ac4a8
    JMP 0x004ac48d                      ; 004ac4ab
        ;   XREF to: 004ac48d (UNCONDITIONAL_JUMP)  ; LAB_004ac48d
    PUSH 0x624bfa                       ; 004ac4ad | = "Error parsing playSfx parms"
        ;   Label: LAB_004ac4ad
    PUSH 0x2d0a460                      ; 004ac4b2 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac4b7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac4bc
    XOR EAX,EAX                         ; 004ac4bf
    LEA ESP,[EBP + 0x7e]                ; 004ac4c1
    POP EBP                             ; 004ac4c4
    POP EDI                             ; 004ac4c5
    POP ESI                             ; 004ac4c6
    POP EBX                             ; 004ac4c7
    RET                                 ; 004ac4c8
    DEC EDI                             ; 004ac4c9
        ;   Label: LAB_004ac4c9
    DEC EAX                             ; 004ac4ca
    TEST EDI,EDI                        ; 004ac4cb
    JG 0x004ac472                       ; 004ac4cd
        ;   XREF to: 004ac472 (CONDITIONAL_JUMP)  ; LAB_004ac472
    JMP 0x004ac484                      ; 004ac4cf
        ;   XREF to: 004ac484 (UNCONDITIONAL_JUMP)  ; LAB_004ac484
    LEA EDI,[EBP + 0xfffff57a]          ; 004ac4d1
        ;   Label: LAB_004ac4d1
    SUB ECX,ECX                         ; 004ac4d7
    DEC ECX                             ; 004ac4d9
    XOR EAX,EAX                         ; 004ac4da
    SCASB.REPNE ES:EDI                  ; 004ac4dc
    NOT ECX                             ; 004ac4de
    DEC ECX                             ; 004ac4e0
    CMP ECX,0x14                        ; 004ac4e1
    JC 0x004ac3fc                       ; 004ac4e4
        ;   XREF to: 004ac3fc (CONDITIONAL_JUMP)  ; LAB_004ac3fc
    PUSH 0x13                           ; 004ac4ea
    LEA EAX,[EBP + 0xfffff57a]          ; 004ac4ec
    PUSH EAX                            ; 004ac4f2
    PUSH 0x624c16                       ; 004ac4f3 | = "handle name %s is too long, max %d chars"
    PUSH 0x2d0a460                      ; 004ac4f8 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac4fd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ac502
    XOR EAX,EAX                         ; 004ac505
    LEA ESP,[EBP + 0x7e]                ; 004ac507
    POP EBP                             ; 004ac50a
    POP EDI                             ; 004ac50b
    POP ESI                             ; 004ac50c
    POP EBX                             ; 004ac50d
    RET                                 ; 004ac50e
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac50f
        ;   Label: LAB_004ac50f
    CMP byte ptr [EAX],0x29             ; 004ac512
    JNZ 0x004ac5af                      ; 004ac515
        ;   XREF to: 004ac5af (CONDITIONAL_JUMP)  ; LAB_004ac5af
    MOV EAX,dword ptr [EBP + -0x62]     ; 004ac51b
    MOV dword ptr [EBP + -0x5e],ECX     ; 004ac51e
    TEST EAX,EAX                        ; 004ac521
    JZ 0x004aaf1d                       ; 004ac523
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x3                            ; 004ac529
    PUSH 0x624c68                       ; 004ac52b | = "cue"
    LEA EAX,[EBP + 0xffffece2]          ; 004ac530
    PUSH EAX                            ; 004ac536
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac537
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac53c
    TEST EAX,EAX                        ; 004ac53f
    JNZ 0x004ac5cb                      ; 004ac541
        ;   XREF to: 004ac5cb (CONDITIONAL_JUMP)  ; LAB_004ac5cb
    PUSH 0x1                            ; 004ac547
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 004ac549
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 004ac54e
    TEST EAX,EAX                        ; 004ac551
    JZ 0x004aaf1d                       ; 004ac553
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004ac559
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x1                            ; 004ac55e
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 004ac560
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 004ac565
    LEA EAX,[EBP + 0xffffece2]          ; 004ac568
    PUSH EAX                            ; 004ac56e
    MOV ESI,dword ptr [EBP + 0x92]      ; 004ac56f
    PUSH ESI                            ; 004ac575
    MOV EDI,dword ptr [0x00681ef8]      ; 004ac576 | g_CSoundPtr
    PUSH EDI                            ; 004ac57c | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ac57d
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004ac582
    MOV EBX,EAX                         ; 004ac585
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 004ac587
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    CMP byte ptr [EBP + 0xfffff57a],0x0 ; 004ac58c
    JZ 0x004aaf1d                       ; 004ac593
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH EBX                            ; 004ac599
    LEA EAX,[EBP + 0xfffff57a]          ; 004ac59a
    PUSH EAX                            ; 004ac5a0
    PUSH ESI                            ; 004ac5a1
    CALL core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 ; 004ac5a2
        ;   XREF to: 004b0c80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList * this_ptr, char * name, uint sfx_handle)
    ADD ESP,0xc                         ; 004ac5a7
    JMP 0x004aaf1d                      ; 004ac5aa
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x624c3f                       ; 004ac5af | = "Can't find matching ) in playSfx command"
        ;   Label: LAB_004ac5af
    PUSH 0x2d0a460                      ; 004ac5b4 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac5b9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac5be
    XOR EAX,EAX                         ; 004ac5c1
    LEA ESP,[EBP + 0x7e]                ; 004ac5c3
    POP EBP                             ; 004ac5c6
    POP EDI                             ; 004ac5c7
    POP ESI                             ; 004ac5c8
    POP EBX                             ; 004ac5c9
    RET                                 ; 004ac5ca
    LEA EAX,[EBP + 0xffffece2]          ; 004ac5cb
        ;   Label: LAB_004ac5cb
    PUSH EAX                            ; 004ac5d1
    MOV EDX,dword ptr [EBP + 0x92]      ; 004ac5d2
    PUSH EDX                            ; 004ac5d8
    MOV ECX,dword ptr [0x00681ef8]      ; 004ac5d9 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004ac5df | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 004ac5e0
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    MOV BL,byte ptr [EBP + 0xfffff57a]  ; 004ac5e5
    ADD ESP,0xc                         ; 004ac5eb
    TEST BL,BL                          ; 004ac5ee
    JZ 0x004aaf1d                       ; 004ac5f0
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH EAX                            ; 004ac5f6
    LEA EAX,[EBP + 0xfffff57a]          ; 004ac5f7
    PUSH EAX                            ; 004ac5fd
    MOV EBX,dword ptr [EBP + 0x92]      ; 004ac5fe
    PUSH EBX                            ; 004ac604
    CALL core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 ; 004ac605
        ;   XREF to: 004b0c80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList * this_ptr, char * name, uint sfx_handle)
    ADD ESP,0xc                         ; 004ac60a
    JMP 0x004aaf1d                      ; 004ac60d
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x10                           ; 004ac612
        ;   Label: LAB_004ac612
    PUSH 0x624c6c                       ; 004ac614 | = "setCameraAmbient"
    PUSH EBX                            ; 004ac619
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac61a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac61f
    TEST EAX,EAX                        ; 004ac622
    JNZ 0x004ac7ba                      ; 004ac624
        ;   XREF to: 004ac7ba (CONDITIONAL_JUMP)  ; LAB_004ac7ba
    MOV AL,byte ptr [EBX + 0x10]        ; 004ac62a
    INC AL                              ; 004ac62d
    AND EAX,0xff                        ; 004ac62f
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ac634 | g_CharacterClassificationTable
    JNZ 0x004ac7ba                      ; 004ac63b
        ;   XREF to: 004ac7ba (CONDITIONAL_JUMP)  ; LAB_004ac7ba
    LEA EAX,[EBX + 0x10]                ; 004ac641
    MOV BL,byte ptr [EAX]               ; 004ac644
        ;   Label: LAB_004ac644
    XOR ECX,ECX                         ; 004ac646
    INC BL                              ; 004ac648
    MOV CL,BL                           ; 004ac64a
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac64c | g_CharacterClassificationTable
    JZ 0x004ac658                       ; 004ac653
        ;   XREF to: 004ac658 (CONDITIONAL_JUMP)  ; LAB_004ac658
    INC EAX                             ; 004ac655
    JMP 0x004ac644                      ; 004ac656
        ;   XREF to: 004ac644 (UNCONDITIONAL_JUMP)  ; LAB_004ac644
    LEA ECX,[EBP + 0x1a]                ; 004ac658
        ;   Label: LAB_004ac658
    PUSH ECX                            ; 004ac65b
    LEA ECX,[EBP + 0x16]                ; 004ac65c
    PUSH ECX                            ; 004ac65f
    LEA ECX,[EBP + 0xffffedaa]          ; 004ac660
    PUSH ECX                            ; 004ac666
    PUSH 0x624c7d                       ; 004ac667 | = "(%[^,], %f)%n"
    MOV EDX,0xffffffff                  ; 004ac66c
    PUSH EAX                            ; 004ac671
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac672
    MOV dword ptr [EBP + 0x1a],EDX      ; 004ac675
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac678
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x1a]      ; 004ac67d
    ADD ESP,0x14                        ; 004ac680
    CMP ECX,0x3                         ; 004ac683
    JL 0x004ac6f1                       ; 004ac686
        ;   XREF to: 004ac6f1 (CONDITIONAL_JUMP)  ; LAB_004ac6f1
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004ac688
    ADD EBX,ECX                         ; 004ac68b
    LEA EDI,[EBP + 0xffffedaa]          ; 004ac68d
    MOV dword ptr [EBP + -0x5e],EBX     ; 004ac693
    SUB ECX,ECX                         ; 004ac696
    DEC ECX                             ; 004ac698
    XOR EAX,EAX                         ; 004ac699
    SCASB.REPNE ES:EDI                  ; 004ac69b
    NOT ECX                             ; 004ac69d
    DEC ECX                             ; 004ac69f
    LEA EBX,[EBP + 0xffffedaa]          ; 004ac6a0
    MOV EDI,ECX                         ; 004ac6a6
    TEST ECX,ECX                        ; 004ac6a8
    JLE 0x004ac6c8                      ; 004ac6aa
        ;   XREF to: 004ac6c8 (CONDITIONAL_JUMP)  ; LAB_004ac6c8
    LEA EAX,[EBP + 0xffffedaa]          ; 004ac6ac
    ADD EAX,ECX                         ; 004ac6b2
    MOV CL,byte ptr [EAX + -0x1]        ; 004ac6b4
        ;   Label: LAB_004ac6b4
    INC CL                              ; 004ac6b7
    AND ECX,0xff                        ; 004ac6b9
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac6bf | g_CharacterClassificationTable
    JNZ 0x004ac70d                      ; 004ac6c6
        ;   XREF to: 004ac70d (CONDITIONAL_JUMP)  ; LAB_004ac70d
    LEA EAX,[EBX + EDI*0x1]             ; 004ac6c8
        ;   Label: LAB_004ac6c8
    LEA ESI,[EBX + 0x1]                 ; 004ac6cb
    MOV byte ptr [EAX],0x0              ; 004ac6ce
    MOV AL,byte ptr [EBX]               ; 004ac6d1
        ;   Label: LAB_004ac6d1
    INC AL                              ; 004ac6d3
    AND EAX,0xff                        ; 004ac6d5
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ac6da | g_CharacterClassificationTable
    JZ 0x004ac715                       ; 004ac6e1
        ;   XREF to: 004ac715 (CONDITIONAL_JUMP)  ; LAB_004ac715
    PUSH EDI                            ; 004ac6e3
    PUSH ESI                            ; 004ac6e4
    PUSH EBX                            ; 004ac6e5
    DEC EDI                             ; 004ac6e6
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ac6e7
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ac6ec
    JMP 0x004ac6d1                      ; 004ac6ef
        ;   XREF to: 004ac6d1 (UNCONDITIONAL_JUMP)  ; LAB_004ac6d1
    PUSH 0x624c8b                       ; 004ac6f1 | = "Error parsing setCameraAmbient parms"
        ;   Label: LAB_004ac6f1
    PUSH 0x2d0a460                      ; 004ac6f6 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac6fb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac700
    XOR EAX,EAX                         ; 004ac703
    LEA ESP,[EBP + 0x7e]                ; 004ac705
    POP EBP                             ; 004ac708
    POP EDI                             ; 004ac709
    POP ESI                             ; 004ac70a
    POP EBX                             ; 004ac70b
    RET                                 ; 004ac70c
    DEC EDI                             ; 004ac70d
        ;   Label: LAB_004ac70d
    DEC EAX                             ; 004ac70e
    TEST EDI,EDI                        ; 004ac70f
    JG 0x004ac6b4                       ; 004ac711
        ;   XREF to: 004ac6b4 (CONDITIONAL_JUMP)  ; LAB_004ac6b4
    JMP 0x004ac6c8                      ; 004ac713
        ;   XREF to: 004ac6c8 (UNCONDITIONAL_JUMP)  ; LAB_004ac6c8
    LEA EAX,[EBP + 0xffffedaa]          ; 004ac715
        ;   Label: LAB_004ac715
    PUSH EAX                            ; 004ac71b
    MOV ESI,dword ptr [0x006810c8]      ; 004ac71c | g_CDemonSetPtr
    PUSH ESI                            ; 004ac722 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 004ac723
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    MOV ECX,EAX                         ; 004ac728
    ADD ESP,0x8                         ; 004ac72a
    TEST EAX,EAX                        ; 004ac72d
    JL 0x004ac772                       ; 004ac72f
        ;   XREF to: 004ac772 (CONDITIONAL_JUMP)  ; LAB_004ac772
    FLDZ                                ; 004ac731
    FCOMP float ptr [EBP + 0x16]        ; 004ac733
    FNSTSW AX                           ; 004ac736
    SAHF                                ; 004ac738
    JA 0x004ac795                       ; 004ac739
        ;   XREF to: 004ac795 (CONDITIONAL_JUMP)  ; LAB_004ac795
    CMP dword ptr [EBP + 0x16],0x42c80000 ; 004ac73b
    JG 0x004ac795                       ; 004ac742
        ;   XREF to: 004ac795 (CONDITIONAL_JUMP)  ; LAB_004ac795
    CMP dword ptr [EBP + -0x62],0x0     ; 004ac744
    JZ 0x004aaf1d                       ; 004ac748
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    FLD float ptr [EBP + 0x16]          ; 004ac74e
    FMUL double ptr [0x006252a1]        ; 004ac751 | DOUBLE_006252a1
    SUB ESP,0x4                         ; 004ac757
    FSTP float ptr [ESP]                ; 004ac75a
    PUSH ECX                            ; 004ac75d
    MOV EDX,dword ptr [0x006810c8]      ; 004ac75e | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004ac764 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20 ; 004ac765
        ;   XREF to: 00570e20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(CDemonSet * this_ptr, int index, float value)
    ADD ESP,0xc                         ; 004ac76a
    JMP 0x004aaf1d                      ; 004ac76d
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xffffedaa]          ; 004ac772
        ;   Label: LAB_004ac772
    PUSH EAX                            ; 004ac778
    PUSH 0x624cb0                       ; 004ac779 | = "Camera \"%s\" does not exist."
    PUSH 0x2d0a460                      ; 004ac77e | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac783
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ac788
    XOR EAX,EAX                         ; 004ac78b
    LEA ESP,[EBP + 0x7e]                ; 004ac78d
    POP EBP                             ; 004ac790
    POP EDI                             ; 004ac791
    POP ESI                             ; 004ac792
    POP EBX                             ; 004ac793
    RET                                 ; 004ac794
    SUB ESP,0x8                         ; 004ac795
        ;   Label: LAB_004ac795
    FLD float ptr [EBP + 0x16]          ; 004ac798
    FSTP double ptr [ESP]               ; 004ac79b
    PUSH 0x624ccc                       ; 004ac79e | = "Ambient value %g is out of range (1....."
    PUSH 0x2d0a460                      ; 004ac7a3 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac7a8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ac7ad
    XOR EAX,EAX                         ; 004ac7b0
    LEA ESP,[EBP + 0x7e]                ; 004ac7b2
    POP EBP                             ; 004ac7b5
    POP EDI                             ; 004ac7b6
    POP ESI                             ; 004ac7b7
    POP EBX                             ; 004ac7b8
    RET                                 ; 004ac7b9
    PUSH 0xa                            ; 004ac7ba
        ;   Label: LAB_004ac7ba
    PUSH 0x624cf6                       ; 004ac7bc | = "setCounter"
    PUSH EBX                            ; 004ac7c1
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac7c2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac7c7
    TEST EAX,EAX                        ; 004ac7ca
    JNZ 0x004ac982                      ; 004ac7cc
        ;   XREF to: 004ac982 (CONDITIONAL_JUMP)  ; LAB_004ac982
    MOV AL,byte ptr [EBX + 0xa]         ; 004ac7d2
    INC AL                              ; 004ac7d5
    AND EAX,0xff                        ; 004ac7d7
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ac7dc | g_CharacterClassificationTable
    JNZ 0x004ac982                      ; 004ac7e3
        ;   XREF to: 004ac982 (CONDITIONAL_JUMP)  ; LAB_004ac982
    LEA EAX,[EBX + 0xa]                 ; 004ac7e9
    MOV BL,byte ptr [EAX]               ; 004ac7ec
        ;   Label: LAB_004ac7ec
    XOR ECX,ECX                         ; 004ac7ee
    INC BL                              ; 004ac7f0
    MOV CL,BL                           ; 004ac7f2
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac7f4 | g_CharacterClassificationTable
    JZ 0x004ac800                       ; 004ac7fb
        ;   XREF to: 004ac800 (CONDITIONAL_JUMP)  ; LAB_004ac800
    INC EAX                             ; 004ac7fd
    JMP 0x004ac7ec                      ; 004ac7fe
        ;   XREF to: 004ac7ec (UNCONDITIONAL_JUMP)  ; LAB_004ac7ec
    MOV dword ptr [EBP + 0x22],0xffffffff ; 004ac800
        ;   Label: LAB_004ac800
    LEA ECX,[EBP + 0x22]                ; 004ac807
    PUSH ECX                            ; 004ac80a
    LEA ECX,[EBP + 0xfffff3ea]          ; 004ac80b
    PUSH ECX                            ; 004ac811
    PUSH 0x624d01                       ; 004ac812 | = "( %[^,)]%n"
    PUSH EAX                            ; 004ac817
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac818
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac81b
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x22]      ; 004ac820
    ADD ESP,0x10                        ; 004ac823
    CMP EBX,0x5                         ; 004ac826
    JL 0x004ac894                       ; 004ac829
        ;   XREF to: 004ac894 (CONDITIONAL_JUMP)  ; LAB_004ac894
    MOV ESI,dword ptr [EBP + -0x5e]     ; 004ac82b
    LEA EDI,[EBP + 0xfffff3ea]          ; 004ac82e
    ADD ESI,EBX                         ; 004ac834
    LEA EBX,[EBP + 0xfffff3ea]          ; 004ac836
    MOV dword ptr [EBP + -0x5e],ESI     ; 004ac83c
    SUB ECX,ECX                         ; 004ac83f
    DEC ECX                             ; 004ac841
    XOR EAX,EAX                         ; 004ac842
    SCASB.REPNE ES:EDI                  ; 004ac844
    NOT ECX                             ; 004ac846
    DEC ECX                             ; 004ac848
    MOV EDI,ECX                         ; 004ac849
    TEST ECX,ECX                        ; 004ac84b
    JLE 0x004ac86b                      ; 004ac84d
        ;   XREF to: 004ac86b (CONDITIONAL_JUMP)  ; LAB_004ac86b
    LEA EAX,[EBP + 0xfffff3ea]          ; 004ac84f
    ADD EAX,ECX                         ; 004ac855
    MOV CL,byte ptr [EAX + -0x1]        ; 004ac857
        ;   Label: LAB_004ac857
    INC CL                              ; 004ac85a
    AND ECX,0xff                        ; 004ac85c
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac862 | g_CharacterClassificationTable
    JNZ 0x004ac8b0                      ; 004ac869
        ;   XREF to: 004ac8b0 (CONDITIONAL_JUMP)  ; LAB_004ac8b0
    LEA EAX,[EBX + EDI*0x1]             ; 004ac86b
        ;   Label: LAB_004ac86b
    LEA ESI,[EBX + 0x1]                 ; 004ac86e
    MOV byte ptr [EAX],0x0              ; 004ac871
    MOV AL,byte ptr [EBX]               ; 004ac874
        ;   Label: LAB_004ac874
    INC AL                              ; 004ac876
    AND EAX,0xff                        ; 004ac878
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ac87d | g_CharacterClassificationTable
    JZ 0x004ac8b8                       ; 004ac884
        ;   XREF to: 004ac8b8 (CONDITIONAL_JUMP)  ; LAB_004ac8b8
    PUSH EDI                            ; 004ac886
    PUSH ESI                            ; 004ac887
    PUSH EBX                            ; 004ac888
    DEC EDI                             ; 004ac889
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ac88a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ac88f
    JMP 0x004ac874                      ; 004ac892
        ;   XREF to: 004ac874 (UNCONDITIONAL_JUMP)  ; LAB_004ac874
    PUSH 0x624d0c                       ; 004ac894 | = "Error parsing setCounter arguments"
        ;   Label: LAB_004ac894
    PUSH 0x2d0a460                      ; 004ac899 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac89e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac8a3
    XOR EAX,EAX                         ; 004ac8a6
    LEA ESP,[EBP + 0x7e]                ; 004ac8a8
    POP EBP                             ; 004ac8ab
    POP EDI                             ; 004ac8ac
    POP ESI                             ; 004ac8ad
    POP EBX                             ; 004ac8ae
    RET                                 ; 004ac8af
    DEC EDI                             ; 004ac8b0
        ;   Label: LAB_004ac8b0
    DEC EAX                             ; 004ac8b1
    TEST EDI,EDI                        ; 004ac8b2
    JG 0x004ac857                       ; 004ac8b4
        ;   XREF to: 004ac857 (CONDITIONAL_JUMP)  ; LAB_004ac857
    JMP 0x004ac86b                      ; 004ac8b6
        ;   XREF to: 004ac86b (UNCONDITIONAL_JUMP)  ; LAB_004ac86b
    XOR EDI,EDI                         ; 004ac8b8
        ;   Label: LAB_004ac8b8
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac8ba
    MOV dword ptr [EBP + 0x26],EDI      ; 004ac8bd
    CMP byte ptr [EAX],0x2c             ; 004ac8c0
    JZ 0x004ac901                       ; 004ac8c3
        ;   XREF to: 004ac901 (CONDITIONAL_JUMP)  ; LAB_004ac901
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac8c5
        ;   Label: LAB_004ac8c5
    CMP byte ptr [EAX],0x29             ; 004ac8c8
    JNZ 0x004ac966                      ; 004ac8cb
        ;   XREF to: 004ac966 (CONDITIONAL_JUMP)  ; LAB_004ac966
    LEA ESI,[EAX + 0x1]                 ; 004ac8d1
    MOV EDI,dword ptr [EBP + -0x62]     ; 004ac8d4
    MOV dword ptr [EBP + -0x5e],ESI     ; 004ac8d7
    TEST EDI,EDI                        ; 004ac8da
    JZ 0x004aaf1d                       ; 004ac8dc
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV EAX,dword ptr [EBP + 0x26]      ; 004ac8e2
    PUSH EAX                            ; 004ac8e5
    LEA EAX,[EBP + 0xfffff3ea]          ; 004ac8e6
    PUSH EAX                            ; 004ac8ec
    MOV EDX,dword ptr [EBP + 0x92]      ; 004ac8ed
    PUSH EDX                            ; 004ac8f3
    CALL core_event.cpp_CEventList_setCounter_FUN_004b0720 ; 004ac8f4
        ;   XREF to: 004b0720 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_004b0720(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 004ac8f9
    JMP 0x004aaf1d                      ; 004ac8fc
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV dword ptr [EBP + 0x22],0xffffffff ; 004ac901
        ;   Label: LAB_004ac901
    LEA EAX,[EBP + 0x22]                ; 004ac908
    PUSH EAX                            ; 004ac90b
    LEA EAX,[EBP + 0x26]                ; 004ac90c
    PUSH EAX                            ; 004ac90f
    PUSH 0x624d2f                       ; 004ac910 | = ",%d%n"
    MOV EDX,dword ptr [EBP + -0x5e]     ; 004ac915
    PUSH EDX                            ; 004ac918
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac919
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x22]      ; 004ac91e
    ADD ESP,0x10                        ; 004ac921
    CMP ECX,0x1                         ; 004ac924
    JL 0x004ac942                       ; 004ac927
        ;   XREF to: 004ac942 (CONDITIONAL_JUMP)  ; LAB_004ac942
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ac929
    ADD EAX,ECX                         ; 004ac92c
    MOV BL,byte ptr [EAX]               ; 004ac92e
        ;   Label: LAB_004ac92e
    XOR ECX,ECX                         ; 004ac930
    INC BL                              ; 004ac932
    MOV CL,BL                           ; 004ac934
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac936 | g_CharacterClassificationTable
    JZ 0x004ac95e                       ; 004ac93d
        ;   XREF to: 004ac95e (CONDITIONAL_JUMP)  ; LAB_004ac95e
    INC EAX                             ; 004ac93f
    JMP 0x004ac92e                      ; 004ac940
        ;   XREF to: 004ac92e (UNCONDITIONAL_JUMP)  ; LAB_004ac92e
    PUSH 0x624d35                       ; 004ac942 | = "Error parsing setCounter value argument"
        ;   Label: LAB_004ac942
    PUSH 0x2d0a460                      ; 004ac947 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac94c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac951
    XOR EAX,EAX                         ; 004ac954
    LEA ESP,[EBP + 0x7e]                ; 004ac956
    POP EBP                             ; 004ac959
    POP EDI                             ; 004ac95a
    POP ESI                             ; 004ac95b
    POP EBX                             ; 004ac95c
    RET                                 ; 004ac95d
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac95e
        ;   Label: LAB_004ac95e
    JMP 0x004ac8c5                      ; 004ac961
        ;   XREF to: 004ac8c5 (UNCONDITIONAL_JUMP)  ; LAB_004ac8c5
    PUSH 0x624d5d                       ; 004ac966 | = "Error parsing setCounter arguments"
        ;   Label: LAB_004ac966
    PUSH 0x2d0a460                      ; 004ac96b | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ac970
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ac975
    XOR EAX,EAX                         ; 004ac978
    LEA ESP,[EBP + 0x7e]                ; 004ac97a
    POP EBP                             ; 004ac97d
    POP EDI                             ; 004ac97e
    POP ESI                             ; 004ac97f
    POP EBX                             ; 004ac980
    RET                                 ; 004ac981
    PUSH 0xf                            ; 004ac982
        ;   Label: LAB_004ac982
    PUSH 0x624d80                       ; 004ac984 | = "setGroupAmbient"
    PUSH EBX                            ; 004ac989
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ac98a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ac98f
    TEST EAX,EAX                        ; 004ac992
    JNZ 0x004aca81                      ; 004ac994
        ;   XREF to: 004aca81 (CONDITIONAL_JUMP)  ; LAB_004aca81
    MOV AL,byte ptr [EBX + 0xf]         ; 004ac99a
    INC AL                              ; 004ac99d
    AND EAX,0xff                        ; 004ac99f
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ac9a4 | g_CharacterClassificationTable
    JNZ 0x004aca81                      ; 004ac9ab
        ;   XREF to: 004aca81 (CONDITIONAL_JUMP)  ; LAB_004aca81
    LEA EAX,[EBX + 0xf]                 ; 004ac9b1
    MOV BL,byte ptr [EAX]               ; 004ac9b4
        ;   Label: LAB_004ac9b4
    XOR ECX,ECX                         ; 004ac9b6
    INC BL                              ; 004ac9b8
    MOV CL,BL                           ; 004ac9ba
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ac9bc | g_CharacterClassificationTable
    JZ 0x004ac9c8                       ; 004ac9c3
        ;   XREF to: 004ac9c8 (CONDITIONAL_JUMP)  ; LAB_004ac9c8
    INC EAX                             ; 004ac9c5
    JMP 0x004ac9b4                      ; 004ac9c6
        ;   XREF to: 004ac9b4 (UNCONDITIONAL_JUMP)  ; LAB_004ac9b4
    MOV dword ptr [EBP + 0x32],0xffffffff ; 004ac9c8
        ;   Label: LAB_004ac9c8
    LEA ECX,[EBP + 0x32]                ; 004ac9cf
    PUSH ECX                            ; 004ac9d2
    LEA ECX,[EBP + 0x2e]                ; 004ac9d3
    PUSH ECX                            ; 004ac9d6
    LEA ECX,[EBP + 0x2a]                ; 004ac9d7
    PUSH ECX                            ; 004ac9da
    PUSH 0x624d90                       ; 004ac9db | = "(%d, %f)%n"
    PUSH EAX                            ; 004ac9e0
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ac9e1
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ac9e4
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x32]      ; 004ac9e9
    ADD ESP,0x14                        ; 004ac9ec
    CMP EBX,0x3                         ; 004ac9ef
    JL 0x004aca40                       ; 004ac9f2
        ;   XREF to: 004aca40 (CONDITIONAL_JUMP)  ; LAB_004aca40
    MOV ESI,dword ptr [EBP + -0x5e]     ; 004ac9f4
    ADD ESI,EBX                         ; 004ac9f7
    FLDZ                                ; 004ac9f9
    MOV dword ptr [EBP + -0x5e],ESI     ; 004ac9fb
    FCOMP float ptr [EBP + 0x2e]        ; 004ac9fe
    FNSTSW AX                           ; 004aca01
    SAHF                                ; 004aca03
    JA 0x004aca5c                       ; 004aca04
        ;   XREF to: 004aca5c (CONDITIONAL_JUMP)  ; LAB_004aca5c
    CMP dword ptr [EBP + 0x2e],0x42c80000 ; 004aca06
    JG 0x004aca5c                       ; 004aca0d
        ;   XREF to: 004aca5c (CONDITIONAL_JUMP)  ; LAB_004aca5c
    CMP dword ptr [EBP + -0x62],0x0     ; 004aca0f
    JZ 0x004aaf1d                       ; 004aca13
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    FLD float ptr [EBP + 0x2e]          ; 004aca19
    FMUL double ptr [0x006252a1]        ; 004aca1c | DOUBLE_006252a1
    SUB ESP,0x4                         ; 004aca22
    FSTP float ptr [ESP]                ; 004aca25
    MOV EDX,dword ptr [EBP + 0x2a]      ; 004aca28
    PUSH EDX                            ; 004aca2b
    MOV ECX,dword ptr [0x006810c8]      ; 004aca2c | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004aca32 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60 ; 004aca33
        ;   XREF to: 00570e60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60(CDemonSet * this_ptr, int group_id, float value)
    ADD ESP,0xc                         ; 004aca38
    JMP 0x004aaf1d                      ; 004aca3b
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x624d9b                       ; 004aca40 | = "Error parsing setGroupAmbient parms"
        ;   Label: LAB_004aca40
    PUSH 0x2d0a460                      ; 004aca45 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004aca4a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004aca4f
    XOR EAX,EAX                         ; 004aca52
    LEA ESP,[EBP + 0x7e]                ; 004aca54
    POP EBP                             ; 004aca57
    POP EDI                             ; 004aca58
    POP ESI                             ; 004aca59
    POP EBX                             ; 004aca5a
    RET                                 ; 004aca5b
    SUB ESP,0x8                         ; 004aca5c
        ;   Label: LAB_004aca5c
    FLD float ptr [EBP + 0x2e]          ; 004aca5f
    FSTP double ptr [ESP]               ; 004aca62
    PUSH 0x624dbf                       ; 004aca65 | = "Ambient value %g is out of range (1....."
    PUSH 0x2d0a460                      ; 004aca6a | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004aca6f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004aca74
    XOR EAX,EAX                         ; 004aca77
    LEA ESP,[EBP + 0x7e]                ; 004aca79
    POP EBP                             ; 004aca7c
    POP EDI                             ; 004aca7d
    POP ESI                             ; 004aca7e
    POP EBX                             ; 004aca7f
    RET                                 ; 004aca80
    PUSH 0x13                           ; 004aca81
        ;   Label: LAB_004aca81
    PUSH 0x624de9                       ; 004aca83 | = "setLightFilterFrame"
    PUSH EBX                            ; 004aca88
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004aca89
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004aca8e
    TEST EAX,EAX                        ; 004aca91
    JNZ 0x004acbea                      ; 004aca93
        ;   XREF to: 004acbea (CONDITIONAL_JUMP)  ; LAB_004acbea
    MOV AL,byte ptr [EBX + 0x13]        ; 004aca99
    INC AL                              ; 004aca9c
    AND EAX,0xff                        ; 004aca9e
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004acaa3 | g_CharacterClassificationTable
    JNZ 0x004acbea                      ; 004acaaa
        ;   XREF to: 004acbea (CONDITIONAL_JUMP)  ; LAB_004acbea
    LEA EAX,[EBX + 0x13]                ; 004acab0
    MOV BL,byte ptr [EAX]               ; 004acab3
        ;   Label: LAB_004acab3
    XOR ECX,ECX                         ; 004acab5
    INC BL                              ; 004acab7
    MOV CL,BL                           ; 004acab9
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004acabb | g_CharacterClassificationTable
    JZ 0x004acac7                       ; 004acac2
        ;   XREF to: 004acac7 (CONDITIONAL_JUMP)  ; LAB_004acac7
    INC EAX                             ; 004acac4
    JMP 0x004acab3                      ; 004acac5
        ;   XREF to: 004acab3 (UNCONDITIONAL_JUMP)  ; LAB_004acab3
    LEA ECX,[EBP + 0x36]                ; 004acac7
        ;   Label: LAB_004acac7
    PUSH ECX                            ; 004acaca
    LEA ECX,[EBP + 0x3a]                ; 004acacb
    PUSH ECX                            ; 004acace
    LEA ECX,[EBP + 0xfffff89a]          ; 004acacf
    PUSH ECX                            ; 004acad5
    PUSH 0x624dfd                       ; 004acad6 | = "( %[^ ,] , %d )%n"
    MOV EBX,0xffffffff                  ; 004acadb
    PUSH EAX                            ; 004acae0
    MOV dword ptr [EBP + -0x5e],EAX     ; 004acae1
    MOV dword ptr [EBP + 0x36],EBX      ; 004acae4
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004acae7
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x36]      ; 004acaec
    ADD ESP,0x14                        ; 004acaef
    TEST ESI,ESI                        ; 004acaf2
    JL 0x004acb93                       ; 004acaf4
        ;   XREF to: 004acb93 (CONDITIONAL_JUMP)  ; LAB_004acb93
    LEA EAX,[EBP + 0x42]                ; 004acafa
    PUSH EAX                            ; 004acafd
    LEA EAX,[EBP + 0x3e]                ; 004acafe
    PUSH EAX                            ; 004acb01
    LEA EAX,[EBP + 0xfffff89a]          ; 004acb02
    MOV EDI,dword ptr [EBP + -0x5e]     ; 004acb08
    PUSH EAX                            ; 004acb0b
    MOV EAX,[0x006810c8]                ; 004acb0c | g_CDemonSetInstance | g_CDemonSetPtr
    ADD EDI,ESI                         ; 004acb11
    PUSH EAX                            ; 004acb13 | g_CDemonSetInstance
    MOV dword ptr [EBP + -0x5e],EDI     ; 004acb14
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10 ; 004acb17
        ;   XREF to: 00570f10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    MOV EDX,dword ptr [EBP + 0x3e]      ; 004acb1c
    ADD ESP,0x10                        ; 004acb1f
    TEST EDX,EDX                        ; 004acb22
    JZ 0x004acba8                       ; 004acb24
        ;   XREF to: 004acba8 (CONDITIONAL_JUMP)  ; LAB_004acba8
    MOV ECX,dword ptr [EBP + 0x3a]      ; 004acb2a
    TEST ECX,ECX                        ; 004acb2d
    JL 0x004acbc4                       ; 004acb2f
        ;   XREF to: 004acbc4 (CONDITIONAL_JUMP)  ; LAB_004acbc4
    CMP ECX,dword ptr [EDX + 0x11ec]    ; 004acb35
    JGE 0x004acbc4                      ; 004acb3b
        ;   XREF to: 004acbc4 (CONDITIONAL_JUMP)  ; LAB_004acbc4
    CMP dword ptr [EBP + -0x62],0x0     ; 004acb41
    JZ 0x004aaf1d                       ; 004acb45
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    CMP dword ptr [EBP + 0x42],0x0      ; 004acb4b
    JNZ 0x004acb7a                      ; 004acb4f
        ;   XREF to: 004acb7a (CONDITIONAL_JUMP)  ; LAB_004acb7a
    MOV dword ptr [0x02f0ca48],0x624e7b ; 004acb51 | g_CurrentFilename | = "..\\core\\event.cpp"
    LEA EAX,[EBP + 0xfffff89a]          ; 004acb5b
    PUSH EAX                            ; 004acb61
    MOV EDX,0x4e0                       ; 004acb62
    PUSH 0x624e8d                       ; 004acb67 | = "Can't find CDemonLight for light %s i..."
    MOV dword ptr [0x02f0ca4c],EDX      ; 004acb6c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004acb72
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004acb77
    MOV ECX,dword ptr [EBP + 0x42]      ; 004acb7a
        ;   Label: LAB_004acb7a
    PUSH ECX                            ; 004acb7d
    MOV EBX,dword ptr [EBP + 0x3a]      ; 004acb7e
    PUSH EBX                            ; 004acb81
    MOV ESI,dword ptr [EBP + 0x3e]      ; 004acb82
    PUSH ESI                            ; 004acb85
    CALL core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00 ; 004acb86
        ;   XREF to: 00586f00 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00(C3DSLight * this_ptr, int frame_index, CDemonLight * light)
    ADD ESP,0xc                         ; 004acb8b
    JMP 0x004aaf1d                      ; 004acb8e
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x624e0f                       ; 004acb93 | = "Error parsing setLightFilterFrame parms"
        ;   Label: LAB_004acb93
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004acb98
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004acb9d
    LEA ESP,[EBP + 0x7e]                ; 004acba0
    POP EBP                             ; 004acba3
    POP EDI                             ; 004acba4
    POP ESI                             ; 004acba5
    POP EBX                             ; 004acba6
    RET                                 ; 004acba7
    LEA EAX,[EBP + 0xfffff89a]          ; 004acba8
        ;   Label: LAB_004acba8
    PUSH EAX                            ; 004acbae
    PUSH 0x624e37                       ; 004acbaf | = "SpotLight %s doesn't exist."
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004acbb4
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004acbb9
    LEA ESP,[EBP + 0x7e]                ; 004acbbc
    POP EBP                             ; 004acbbf
    POP EDI                             ; 004acbc0
    POP ESI                             ; 004acbc1
    POP EBX                             ; 004acbc2
    RET                                 ; 004acbc3
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004acbc4
        ;   Label: LAB_004acbc4
    MOV EDI,dword ptr [EAX + 0x11ec]    ; 004acbc7
    PUSH EDI                            ; 004acbcd
    LEA EAX,[EBP + 0xfffff89a]          ; 004acbce
    PUSH EAX                            ; 004acbd4
    PUSH 0x624e53                       ; 004acbd5 | = "Invalid filter frame, %s has %d filters"
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004acbda
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0xc                         ; 004acbdf
    LEA ESP,[EBP + 0x7e]                ; 004acbe2
    POP EBP                             ; 004acbe5
    POP EDI                             ; 004acbe6
    POP ESI                             ; 004acbe7
    POP EBX                             ; 004acbe8
    RET                                 ; 004acbe9
    PUSH 0xd                            ; 004acbea
        ;   Label: LAB_004acbea
    PUSH 0x624ed5                       ; 004acbec | = "setLeverState"
    PUSH EBX                            ; 004acbf1
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004acbf2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004acbf7
    TEST EAX,EAX                        ; 004acbfa
    JNZ 0x004acdf7                      ; 004acbfc
        ;   XREF to: 004acdf7 (CONDITIONAL_JUMP)  ; LAB_004acdf7
    MOV AL,byte ptr [EBX + 0xd]         ; 004acc02
    INC AL                              ; 004acc05
    AND EAX,0xff                        ; 004acc07
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004acc0c | g_CharacterClassificationTable
    JNZ 0x004acdf7                      ; 004acc13
        ;   XREF to: 004acdf7 (CONDITIONAL_JUMP)  ; LAB_004acdf7
    LEA EAX,[EBX + 0xd]                 ; 004acc19
    MOV BL,byte ptr [EAX]               ; 004acc1c
        ;   Label: LAB_004acc1c
    XOR ECX,ECX                         ; 004acc1e
    INC BL                              ; 004acc20
    MOV CL,BL                           ; 004acc22
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004acc24 | g_CharacterClassificationTable
    JZ 0x004acc30                       ; 004acc2b
        ;   XREF to: 004acc30 (CONDITIONAL_JUMP)  ; LAB_004acc30
    INC EAX                             ; 004acc2d
    JMP 0x004acc1c                      ; 004acc2e
        ;   XREF to: 004acc1c (UNCONDITIONAL_JUMP)  ; LAB_004acc1c
    LEA ECX,[EBP + 0x46]                ; 004acc30
        ;   Label: LAB_004acc30
    PUSH ECX                            ; 004acc33
    LEA ECX,[EBP + 0xffffec1a]          ; 004acc34
    PUSH ECX                            ; 004acc3a
    LEA ECX,[EBP + 0xfffff322]          ; 004acc3b
    PUSH ECX                            ; 004acc41
    PUSH 0x624ee3                       ; 004acc42 | = "(%[^,], %[^)])%n"
    MOV EDX,0xffffffff                  ; 004acc47
    PUSH EAX                            ; 004acc4c
    MOV dword ptr [EBP + -0x5e],EAX     ; 004acc4d
    MOV dword ptr [EBP + 0x46],EDX      ; 004acc50
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004acc53
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x46]      ; 004acc58
    ADD ESP,0x14                        ; 004acc5b
    CMP ECX,0x5                         ; 004acc5e
    JL 0x004acccc                       ; 004acc61
        ;   XREF to: 004acccc (CONDITIONAL_JUMP)  ; LAB_004acccc
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004acc63
    ADD EBX,ECX                         ; 004acc66
    LEA EDI,[EBP + 0xfffff322]          ; 004acc68
    MOV dword ptr [EBP + -0x5e],EBX     ; 004acc6e
    SUB ECX,ECX                         ; 004acc71
    DEC ECX                             ; 004acc73
    XOR EAX,EAX                         ; 004acc74
    SCASB.REPNE ES:EDI                  ; 004acc76
    NOT ECX                             ; 004acc78
    DEC ECX                             ; 004acc7a
    LEA EBX,[EBP + 0xfffff322]          ; 004acc7b
    MOV EDI,ECX                         ; 004acc81
    TEST ECX,ECX                        ; 004acc83
    JLE 0x004acca3                      ; 004acc85
        ;   XREF to: 004acca3 (CONDITIONAL_JUMP)  ; LAB_004acca3
    LEA EAX,[EBP + 0xfffff322]          ; 004acc87
    ADD EAX,ECX                         ; 004acc8d
    MOV CL,byte ptr [EAX + -0x1]        ; 004acc8f
        ;   Label: LAB_004acc8f
    INC CL                              ; 004acc92
    AND ECX,0xff                        ; 004acc94
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004acc9a | g_CharacterClassificationTable
    JNZ 0x004acce8                      ; 004acca1
        ;   XREF to: 004acce8 (CONDITIONAL_JUMP)  ; LAB_004acce8
    LEA EAX,[EBX + EDI*0x1]             ; 004acca3
        ;   Label: LAB_004acca3
    LEA ESI,[EBX + 0x1]                 ; 004acca6
    MOV byte ptr [EAX],0x0              ; 004acca9
    MOV AL,byte ptr [EBX]               ; 004accac
        ;   Label: LAB_004accac
    INC AL                              ; 004accae
    AND EAX,0xff                        ; 004accb0
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004accb5 | g_CharacterClassificationTable
    JZ 0x004accf0                       ; 004accbc
        ;   XREF to: 004accf0 (CONDITIONAL_JUMP)  ; LAB_004accf0
    PUSH EDI                            ; 004accbe
    PUSH ESI                            ; 004accbf
    PUSH EBX                            ; 004accc0
    DEC EDI                             ; 004accc1
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004accc2
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004accc7
    JMP 0x004accac                      ; 004accca
        ;   XREF to: 004accac (UNCONDITIONAL_JUMP)  ; LAB_004accac
    PUSH 0x624ef4                       ; 004acccc | = "Error parsing setLeverState command p..."
        ;   Label: LAB_004acccc
    PUSH 0x2d0a460                      ; 004accd1 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004accd6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004accdb
    XOR EAX,EAX                         ; 004accde
    LEA ESP,[EBP + 0x7e]                ; 004acce0
    POP EBP                             ; 004acce3
    POP EDI                             ; 004acce4
    POP ESI                             ; 004acce5
    POP EBX                             ; 004acce6
    RET                                 ; 004acce7
    DEC EDI                             ; 004acce8
        ;   Label: LAB_004acce8
    DEC EAX                             ; 004acce9
    TEST EDI,EDI                        ; 004accea
    JG 0x004acc8f                       ; 004accec
        ;   XREF to: 004acc8f (CONDITIONAL_JUMP)  ; LAB_004acc8f
    JMP 0x004acca3                      ; 004accee
        ;   XREF to: 004acca3 (UNCONDITIONAL_JUMP)  ; LAB_004acca3
    LEA EDI,[EBP + 0xffffec1a]          ; 004accf0
        ;   Label: LAB_004accf0
    LEA EBX,[EBP + 0xffffec1a]          ; 004accf6
    SUB ECX,ECX                         ; 004accfc
    DEC ECX                             ; 004accfe
    XOR EAX,EAX                         ; 004accff
    SCASB.REPNE ES:EDI                  ; 004acd01
    NOT ECX                             ; 004acd03
    DEC ECX                             ; 004acd05
    MOV EDI,ECX                         ; 004acd06
    TEST ECX,ECX                        ; 004acd08
    JLE 0x004acd28                      ; 004acd0a
        ;   XREF to: 004acd28 (CONDITIONAL_JUMP)  ; LAB_004acd28
    LEA EAX,[EBP + 0xffffec1a]          ; 004acd0c
    ADD EAX,ECX                         ; 004acd12
    MOV CL,byte ptr [EAX + -0x1]        ; 004acd14
        ;   Label: LAB_004acd14
    INC CL                              ; 004acd17
    AND ECX,0xff                        ; 004acd19
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004acd1f | g_CharacterClassificationTable
    JNZ 0x004acd51                      ; 004acd26
        ;   XREF to: 004acd51 (CONDITIONAL_JUMP)  ; LAB_004acd51
    LEA EAX,[EBX + EDI*0x1]             ; 004acd28
        ;   Label: LAB_004acd28
    LEA ESI,[EBX + 0x1]                 ; 004acd2b
    MOV byte ptr [EAX],0x0              ; 004acd2e
    MOV AL,byte ptr [EBX]               ; 004acd31
        ;   Label: LAB_004acd31
    INC AL                              ; 004acd33
    AND EAX,0xff                        ; 004acd35
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004acd3a | g_CharacterClassificationTable
    JZ 0x004acd59                       ; 004acd41
        ;   XREF to: 004acd59 (CONDITIONAL_JUMP)  ; LAB_004acd59
    PUSH EDI                            ; 004acd43
    PUSH ESI                            ; 004acd44
    PUSH EBX                            ; 004acd45
    DEC EDI                             ; 004acd46
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004acd47
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004acd4c
    JMP 0x004acd31                      ; 004acd4f
        ;   XREF to: 004acd31 (UNCONDITIONAL_JUMP)  ; LAB_004acd31
    DEC EDI                             ; 004acd51
        ;   Label: LAB_004acd51
    DEC EAX                             ; 004acd52
    TEST EDI,EDI                        ; 004acd53
    JG 0x004acd14                       ; 004acd55
        ;   XREF to: 004acd14 (CONDITIONAL_JUMP)  ; LAB_004acd14
    JMP 0x004acd28                      ; 004acd57
        ;   XREF to: 004acd28 (UNCONDITIONAL_JUMP)  ; LAB_004acd28
    PUSH 0x2dd3058                      ; 004acd59 | g_CLeverClassInfo
        ;   Label: LAB_004acd59
    MOV ESI,dword ptr [0x02dd3090]      ; 004acd5e | g_CLeverClassInfo.name_hash
    PUSH ESI                            ; 004acd64
    LEA EAX,[EBP + 0xfffff322]          ; 004acd65
    PUSH EAX                            ; 004acd6b
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004acd6c
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004acd71
    MOV EBX,EAX                         ; 004acd74
    TEST EAX,EAX                        ; 004acd76
    JZ 0x004aaceb                       ; 004acd78
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EAX,dword ptr [0x0065d95c]      ; 004acd7e | g_ActorNameSentinel
    JNZ 0x004acdae                      ; 004acd84
        ;   XREF to: 004acdae (CONDITIONAL_JUMP)  ; LAB_004acdae
    LEA EAX,[EBP + 0xffffec1a]          ; 004acd86
        ;   Label: LAB_004acd86
    PUSH EAX                            ; 004acd8c
    MOV EDX,dword ptr [EBP + 0x92]      ; 004acd8d
    PUSH EDX                            ; 004acd93
    CALL core_event.cpp_CEventList_validateCondition_FUN_004add00 ; 004acd94
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004add00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 004acd99
    TEST EAX,EAX                        ; 004acd9c
    JZ 0x004aaf1d                       ; 004acd9e
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    XOR EAX,EAX                         ; 004acda4
    LEA ESP,[EBP + 0x7e]                ; 004acda6
    POP EBP                             ; 004acda9
    POP EDI                             ; 004acdaa
    POP ESI                             ; 004acdab
    POP EBX                             ; 004acdac
    RET                                 ; 004acdad
    CMP dword ptr [EBP + -0x62],0x0     ; 004acdae
        ;   Label: LAB_004acdae
    JZ 0x004acd86                       ; 004acdb2
        ;   XREF to: 004acd86 (CONDITIONAL_JUMP)  ; LAB_004acd86
    LEA EAX,[EBP + 0xffffec1a]          ; 004acdb4
    PUSH EAX                            ; 004acdba
    MOV EDX,dword ptr [0x006793d0]      ; 004acdbb | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 004acdc1 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004acdc2
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004acdc7
    TEST EAX,EAX                        ; 004acdca
    JZ 0x004acdf2                       ; 004acdcc
        ;   XREF to: 004acdf2 (CONDITIONAL_JUMP)  ; LAB_004acdf2
    XOR EDI,EDI                         ; 004acdce
    MOV EAX,0x3ff00000                  ; 004acdd0
    MOV dword ptr [EBP + -0x6e],EDI     ; 004acdd5
    MOV dword ptr [EBP + -0x6a],EAX     ; 004acdd8
        ;   Label: LAB_004acdd8
    SUB ESP,0x4                         ; 004acddb
    FLD double ptr [EBP + -0x6e]        ; 004acdde
    FSTP float ptr [ESP]                ; 004acde1
    PUSH EBX                            ; 004acde4
    CALL core_lever.cpp_CLever_setState_FUN_00504b20 ; 004acde5
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_CLever_setState_FUN_00504b20(CLever * this_ptr, float new_state)
    ADD ESP,0x8                         ; 004acdea
    JMP 0x004aaf1d                      ; 004acded
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV dword ptr [EBP + -0x6e],EAX     ; 004acdf2
        ;   Label: LAB_004acdf2
    JMP 0x004acdd8                      ; 004acdf5
        ;   XREF to: 004acdd8 (UNCONDITIONAL_JUMP)  ; LAB_004acdd8
    PUSH 0xd                            ; 004acdf7
        ;   Label: LAB_004acdf7
    PUSH 0x624f1e                       ; 004acdf9 | = "setModelState"
    PUSH EBX                            ; 004acdfe
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004acdff
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ace04
    TEST EAX,EAX                        ; 004ace07
    JNZ 0x004ad000                      ; 004ace09
        ;   XREF to: 004ad000 (CONDITIONAL_JUMP)  ; LAB_004ad000
    MOV AL,byte ptr [EBX + 0xd]         ; 004ace0f
    INC AL                              ; 004ace12
    AND EAX,0xff                        ; 004ace14
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ace19 | g_CharacterClassificationTable
    JNZ 0x004ad000                      ; 004ace20
        ;   XREF to: 004ad000 (CONDITIONAL_JUMP)  ; LAB_004ad000
    LEA EAX,[EBX + 0xd]                 ; 004ace26
    MOV BL,byte ptr [EAX]               ; 004ace29
        ;   Label: LAB_004ace29
    XOR ECX,ECX                         ; 004ace2b
    INC BL                              ; 004ace2d
    MOV CL,BL                           ; 004ace2f
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ace31 | g_CharacterClassificationTable
    JZ 0x004ace3d                       ; 004ace38
        ;   XREF to: 004ace3d (CONDITIONAL_JUMP)  ; LAB_004ace3d
    INC EAX                             ; 004ace3a
    JMP 0x004ace29                      ; 004ace3b
        ;   XREF to: 004ace29 (UNCONDITIONAL_JUMP)  ; LAB_004ace29
    MOV dword ptr [EBP + 0x4e],0xffffffff ; 004ace3d
        ;   Label: LAB_004ace3d
    LEA ECX,[EBP + 0x4e]                ; 004ace44
    PUSH ECX                            ; 004ace47
    LEA ECX,[EBP + 0xfffff7d2]          ; 004ace48
    PUSH ECX                            ; 004ace4e
    LEA ECX,[EBP + 0xfffff70a]          ; 004ace4f
    PUSH ECX                            ; 004ace55
    PUSH 0x624f2c                       ; 004ace56 | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 004ace5b
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ace5c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ace5f
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x4e]      ; 004ace64
    ADD ESP,0x14                        ; 004ace67
    CMP EBX,0x5                         ; 004ace6a
    JL 0x004aced8                       ; 004ace6d
        ;   XREF to: 004aced8 (CONDITIONAL_JUMP)  ; LAB_004aced8
    MOV ESI,dword ptr [EBP + -0x5e]     ; 004ace6f
    LEA EDI,[EBP + 0xfffff70a]          ; 004ace72
    ADD ESI,EBX                         ; 004ace78
    LEA EBX,[EBP + 0xfffff70a]          ; 004ace7a
    MOV dword ptr [EBP + -0x5e],ESI     ; 004ace80
    SUB ECX,ECX                         ; 004ace83
    DEC ECX                             ; 004ace85
    XOR EAX,EAX                         ; 004ace86
    SCASB.REPNE ES:EDI                  ; 004ace88
    NOT ECX                             ; 004ace8a
    DEC ECX                             ; 004ace8c
    MOV EDI,ECX                         ; 004ace8d
    TEST ECX,ECX                        ; 004ace8f
    JLE 0x004aceaf                      ; 004ace91
        ;   XREF to: 004aceaf (CONDITIONAL_JUMP)  ; LAB_004aceaf
    LEA EAX,[EBP + 0xfffff70a]          ; 004ace93
    ADD EAX,ECX                         ; 004ace99
    MOV CL,byte ptr [EAX + -0x1]        ; 004ace9b
        ;   Label: LAB_004ace9b
    INC CL                              ; 004ace9e
    AND ECX,0xff                        ; 004acea0
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004acea6 | g_CharacterClassificationTable
    JNZ 0x004acef4                      ; 004acead
        ;   XREF to: 004acef4 (CONDITIONAL_JUMP)  ; LAB_004acef4
    LEA EAX,[EBX + EDI*0x1]             ; 004aceaf
        ;   Label: LAB_004aceaf
    LEA ESI,[EBX + 0x1]                 ; 004aceb2
    MOV byte ptr [EAX],0x0              ; 004aceb5
    MOV AL,byte ptr [EBX]               ; 004aceb8
        ;   Label: LAB_004aceb8
    INC AL                              ; 004aceba
    AND EAX,0xff                        ; 004acebc
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004acec1 | g_CharacterClassificationTable
    JZ 0x004acefc                       ; 004acec8
        ;   XREF to: 004acefc (CONDITIONAL_JUMP)  ; LAB_004acefc
    PUSH EDI                            ; 004aceca
    PUSH ESI                            ; 004acecb
    PUSH EBX                            ; 004acecc
    DEC EDI                             ; 004acecd
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004acece
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aced3
    JMP 0x004aceb8                      ; 004aced6
        ;   XREF to: 004aceb8 (UNCONDITIONAL_JUMP)  ; LAB_004aceb8
    PUSH 0x624f3d                       ; 004aced8 | = "Error parsing setModelState command p..."
        ;   Label: LAB_004aced8
    PUSH 0x2d0a460                      ; 004acedd | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004acee2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004acee7
    XOR EAX,EAX                         ; 004aceea
    LEA ESP,[EBP + 0x7e]                ; 004aceec
    POP EBP                             ; 004aceef
    POP EDI                             ; 004acef0
    POP ESI                             ; 004acef1
    POP EBX                             ; 004acef2
    RET                                 ; 004acef3
    DEC EDI                             ; 004acef4
        ;   Label: LAB_004acef4
    DEC EAX                             ; 004acef5
    TEST EDI,EDI                        ; 004acef6
    JG 0x004ace9b                       ; 004acef8
        ;   XREF to: 004ace9b (CONDITIONAL_JUMP)  ; LAB_004ace9b
    JMP 0x004aceaf                      ; 004acefa
        ;   XREF to: 004aceaf (UNCONDITIONAL_JUMP)  ; LAB_004aceaf
    LEA EDI,[EBP + 0xfffff7d2]          ; 004acefc
        ;   Label: LAB_004acefc
    LEA EBX,[EBP + 0xfffff7d2]          ; 004acf02
    SUB ECX,ECX                         ; 004acf08
    DEC ECX                             ; 004acf0a
    XOR EAX,EAX                         ; 004acf0b
    SCASB.REPNE ES:EDI                  ; 004acf0d
    NOT ECX                             ; 004acf0f
    DEC ECX                             ; 004acf11
    MOV EDI,ECX                         ; 004acf12
    TEST ECX,ECX                        ; 004acf14
    JLE 0x004acf34                      ; 004acf16
        ;   XREF to: 004acf34 (CONDITIONAL_JUMP)  ; LAB_004acf34
    LEA EAX,[EBP + 0xfffff7d2]          ; 004acf18
    ADD EAX,ECX                         ; 004acf1e
    MOV CL,byte ptr [EAX + -0x1]        ; 004acf20
        ;   Label: LAB_004acf20
    INC CL                              ; 004acf23
    AND ECX,0xff                        ; 004acf25
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004acf2b | g_CharacterClassificationTable
    JNZ 0x004acf5d                      ; 004acf32
        ;   XREF to: 004acf5d (CONDITIONAL_JUMP)  ; LAB_004acf5d
    LEA EAX,[EBX + EDI*0x1]             ; 004acf34
        ;   Label: LAB_004acf34
    LEA ESI,[EBX + 0x1]                 ; 004acf37
    MOV byte ptr [EAX],0x0              ; 004acf3a
    MOV AL,byte ptr [EBX]               ; 004acf3d
        ;   Label: LAB_004acf3d
    INC AL                              ; 004acf3f
    AND EAX,0xff                        ; 004acf41
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004acf46 | g_CharacterClassificationTable
    JZ 0x004acf65                       ; 004acf4d
        ;   XREF to: 004acf65 (CONDITIONAL_JUMP)  ; LAB_004acf65
    PUSH EDI                            ; 004acf4f
    PUSH ESI                            ; 004acf50
    PUSH EBX                            ; 004acf51
    DEC EDI                             ; 004acf52
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004acf53
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004acf58
    JMP 0x004acf3d                      ; 004acf5b
        ;   XREF to: 004acf3d (UNCONDITIONAL_JUMP)  ; LAB_004acf3d
    DEC EDI                             ; 004acf5d
        ;   Label: LAB_004acf5d
    DEC EAX                             ; 004acf5e
    TEST EDI,EDI                        ; 004acf5f
    JG 0x004acf20                       ; 004acf61
        ;   XREF to: 004acf20 (CONDITIONAL_JUMP)  ; LAB_004acf20
    JMP 0x004acf34                      ; 004acf63
        ;   XREF to: 004acf34 (UNCONDITIONAL_JUMP)  ; LAB_004acf34
    PUSH 0x823c14                       ; 004acf65 | g_CCharacterClassInfo
        ;   Label: LAB_004acf65
    MOV EDI,dword ptr [0x00823c4c]      ; 004acf6a | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 004acf70
    LEA EAX,[EBP + 0xfffff70a]          ; 004acf71
    PUSH EAX                            ; 004acf77
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004acf78
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    MOV EBX,EAX                         ; 004acf7d
    ADD ESP,0xc                         ; 004acf7f
    TEST EAX,EAX                        ; 004acf82
    JZ 0x004aaceb                       ; 004acf84
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EBX,dword ptr [0x0065d95c]      ; 004acf8a | g_ActorNameSentinel
    JZ 0x004aaf1d                       ; 004acf90
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x0                            ; 004acf96
    LEA EAX,[EBP + 0xfffff7d2]          ; 004acf98
    PUSH EAX                            ; 004acf9e
    LEA ESI,[EBX + 0x158]               ; 004acf9f
    PUSH ESI                            ; 004acfa5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004acfa6
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004acfab
    PUSH EAX                            ; 004acfae
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 004acfaf
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004acfb4
    TEST EAX,EAX                        ; 004acfb7
    JL 0x004acfd6                       ; 004acfb9
        ;   XREF to: 004acfd6 (CONDITIONAL_JUMP)  ; LAB_004acfd6
    CMP dword ptr [EBP + -0x62],0x0     ; 004acfbb
    JZ 0x004aaf1d                       ; 004acfbf
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x1                            ; 004acfc5
    PUSH EAX                            ; 004acfc7
    PUSH ESI                            ; 004acfc8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004acfc9
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004acfce
    JMP 0x004aaf1d                      ; 004acfd1
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffff7d2]          ; 004acfd6
        ;   Label: LAB_004acfd6
    PUSH EAX                            ; 004acfdc
    LEA EAX,[EBX + 0x23b8]              ; 004acfdd
    PUSH EAX                            ; 004acfe3
    PUSH 0x624f67                       ; 004acfe4 | = "Model %s does not have state %s"
    PUSH 0x2d0a460                      ; 004acfe9 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004acfee
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004acff3
    XOR EAX,EAX                         ; 004acff6
    LEA ESP,[EBP + 0x7e]                ; 004acff8
    POP EBP                             ; 004acffb
    POP EDI                             ; 004acffc
    POP ESI                             ; 004acffd
    POP EBX                             ; 004acffe
    RET                                 ; 004acfff
    PUSH 0x8                            ; 004ad000
        ;   Label: LAB_004ad000
    PUSH 0x624f87                       ; 004ad002 | = "setTimer"
    PUSH EBX                            ; 004ad007
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ad008
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ad00d
    TEST EAX,EAX                        ; 004ad010
    JNZ 0x004ad18c                      ; 004ad012
        ;   XREF to: 004ad18c (CONDITIONAL_JUMP)  ; LAB_004ad18c
    MOV AL,byte ptr [EBX + 0x8]         ; 004ad018
    INC AL                              ; 004ad01b
    AND EAX,0xff                        ; 004ad01d
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ad022 | g_CharacterClassificationTable
    JNZ 0x004ad18c                      ; 004ad029
        ;   XREF to: 004ad18c (CONDITIONAL_JUMP)  ; LAB_004ad18c
    LEA EAX,[EBX + 0x8]                 ; 004ad02f
    MOV BL,byte ptr [EAX]               ; 004ad032
        ;   Label: LAB_004ad032
    XOR ECX,ECX                         ; 004ad034
    INC BL                              ; 004ad036
    MOV CL,BL                           ; 004ad038
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad03a | g_CharacterClassificationTable
    JZ 0x004ad046                       ; 004ad041
        ;   XREF to: 004ad046 (CONDITIONAL_JUMP)  ; LAB_004ad046
    INC EAX                             ; 004ad043
    JMP 0x004ad032                      ; 004ad044
        ;   XREF to: 004ad032 (UNCONDITIONAL_JUMP)  ; LAB_004ad032
    MOV dword ptr [EBP + 0x56],0xffffffff ; 004ad046
        ;   Label: LAB_004ad046
    LEA ECX,[EBP + 0x56]                ; 004ad04d
    PUSH ECX                            ; 004ad050
    LEA ECX,[EBP + 0x52]                ; 004ad051
    PUSH ECX                            ; 004ad054
    LEA ECX,[EBP + 0xfffff642]          ; 004ad055
    PUSH ECX                            ; 004ad05b
    PUSH 0x624f90                       ; 004ad05c | = "(%[^,], %f)%n"
    PUSH EAX                            ; 004ad061
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad062
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad065
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x56]      ; 004ad06a
    ADD ESP,0x14                        ; 004ad06d
    CMP EBX,0x3                         ; 004ad070
    JL 0x004ad0de                       ; 004ad073
        ;   XREF to: 004ad0de (CONDITIONAL_JUMP)  ; LAB_004ad0de
    MOV ESI,dword ptr [EBP + -0x5e]     ; 004ad075
    LEA EDI,[EBP + 0xfffff642]          ; 004ad078
    ADD ESI,EBX                         ; 004ad07e
    LEA EBX,[EBP + 0xfffff642]          ; 004ad080
    MOV dword ptr [EBP + -0x5e],ESI     ; 004ad086
    SUB ECX,ECX                         ; 004ad089
    DEC ECX                             ; 004ad08b
    XOR EAX,EAX                         ; 004ad08c
    SCASB.REPNE ES:EDI                  ; 004ad08e
    NOT ECX                             ; 004ad090
    DEC ECX                             ; 004ad092
    MOV EDI,ECX                         ; 004ad093
    TEST ECX,ECX                        ; 004ad095
    JLE 0x004ad0b5                      ; 004ad097
        ;   XREF to: 004ad0b5 (CONDITIONAL_JUMP)  ; LAB_004ad0b5
    LEA EAX,[EBP + 0xfffff642]          ; 004ad099
    ADD EAX,ECX                         ; 004ad09f
    MOV CL,byte ptr [EAX + -0x1]        ; 004ad0a1
        ;   Label: LAB_004ad0a1
    INC CL                              ; 004ad0a4
    AND ECX,0xff                        ; 004ad0a6
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad0ac | g_CharacterClassificationTable
    JNZ 0x004ad0fa                      ; 004ad0b3
        ;   XREF to: 004ad0fa (CONDITIONAL_JUMP)  ; LAB_004ad0fa
    LEA EAX,[EBX + EDI*0x1]             ; 004ad0b5
        ;   Label: LAB_004ad0b5
    LEA ESI,[EBX + 0x1]                 ; 004ad0b8
    MOV byte ptr [EAX],0x0              ; 004ad0bb
    MOV AL,byte ptr [EBX]               ; 004ad0be
        ;   Label: LAB_004ad0be
    INC AL                              ; 004ad0c0
    AND EAX,0xff                        ; 004ad0c2
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ad0c7 | g_CharacterClassificationTable
    JZ 0x004ad102                       ; 004ad0ce
        ;   XREF to: 004ad102 (CONDITIONAL_JUMP)  ; LAB_004ad102
    PUSH EDI                            ; 004ad0d0
    PUSH ESI                            ; 004ad0d1
    PUSH EBX                            ; 004ad0d2
    DEC EDI                             ; 004ad0d3
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ad0d4
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ad0d9
    JMP 0x004ad0be                      ; 004ad0dc
        ;   XREF to: 004ad0be (UNCONDITIONAL_JUMP)  ; LAB_004ad0be
    PUSH 0x624f9e                       ; 004ad0de | = "Error parsing setTimer command parms"
        ;   Label: LAB_004ad0de
    PUSH 0x2d0a460                      ; 004ad0e3 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad0e8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ad0ed
    XOR EAX,EAX                         ; 004ad0f0
    LEA ESP,[EBP + 0x7e]                ; 004ad0f2
    POP EBP                             ; 004ad0f5
    POP EDI                             ; 004ad0f6
    POP ESI                             ; 004ad0f7
    POP EBX                             ; 004ad0f8
    RET                                 ; 004ad0f9
    DEC EDI                             ; 004ad0fa
        ;   Label: LAB_004ad0fa
    DEC EAX                             ; 004ad0fb
    TEST EDI,EDI                        ; 004ad0fc
    JG 0x004ad0a1                       ; 004ad0fe
        ;   XREF to: 004ad0a1 (CONDITIONAL_JUMP)  ; LAB_004ad0a1
    JMP 0x004ad0b5                      ; 004ad100
        ;   XREF to: 004ad0b5 (UNCONDITIONAL_JUMP)  ; LAB_004ad0b5
    LEA EDI,[EBP + 0xfffff642]          ; 004ad102
        ;   Label: LAB_004ad102
    SUB ECX,ECX                         ; 004ad108
    DEC ECX                             ; 004ad10a
    XOR EAX,EAX                         ; 004ad10b
    SCASB.REPNE ES:EDI                  ; 004ad10d
    NOT ECX                             ; 004ad10f
    DEC ECX                             ; 004ad111
    CMP ECX,0x20                        ; 004ad112
    JNC 0x004ad14b                      ; 004ad115
        ;   XREF to: 004ad14b (CONDITIONAL_JUMP)  ; LAB_004ad14b
    FLD float ptr [EBP + 0x52]          ; 004ad117
    FLDZ                                ; 004ad11a
    FCOMPP                              ; 004ad11c
    FNSTSW AX                           ; 004ad11e
    SAHF                                ; 004ad120
    JA 0x004ad170                       ; 004ad121
        ;   XREF to: 004ad170 (CONDITIONAL_JUMP)  ; LAB_004ad170
    CMP dword ptr [EBP + -0x62],0x0     ; 004ad123
    JZ 0x004aaf1d                       ; 004ad127
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffff642]          ; 004ad12d
    PUSH dword ptr [EBP + 0x52]         ; 004ad133
    PUSH EAX                            ; 004ad136
    MOV EAX,dword ptr [EBP + 0x92]      ; 004ad137
    PUSH EAX                            ; 004ad13d
    CALL core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0 ; 004ad13e
        ;   XREF to: 004b05a0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList * this_ptr, char * name, float duration)
    ADD ESP,0xc                         ; 004ad143
    JMP 0x004aaf1d                      ; 004ad146
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x1f                           ; 004ad14b
        ;   Label: LAB_004ad14b
    LEA EAX,[EBP + 0xfffff642]          ; 004ad14d
    PUSH EAX                            ; 004ad153
    PUSH 0x624fc3                       ; 004ad154 | = "Timer name \"%s\" is too long, (max %..."
    PUSH 0x2d0a460                      ; 004ad159 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad15e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ad163
    XOR EAX,EAX                         ; 004ad166
    LEA ESP,[EBP + 0x7e]                ; 004ad168
    POP EBP                             ; 004ad16b
    POP EDI                             ; 004ad16c
    POP ESI                             ; 004ad16d
    POP EBX                             ; 004ad16e
    RET                                 ; 004ad16f
    PUSH 0x624fef                       ; 004ad170 | = "Invalid timer duration"
        ;   Label: LAB_004ad170
    PUSH 0x2d0a460                      ; 004ad175 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad17a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ad17f
    XOR EAX,EAX                         ; 004ad182
    LEA ESP,[EBP + 0x7e]                ; 004ad184
    POP EBP                             ; 004ad187
    POP EDI                             ; 004ad188
    POP ESI                             ; 004ad189
    POP EBX                             ; 004ad18a
    RET                                 ; 004ad18b
    PUSH 0xa                            ; 004ad18c
        ;   Label: LAB_004ad18c
    PUSH 0x625006                       ; 004ad18e | = "setWeather"
    PUSH EBX                            ; 004ad193
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ad194
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ad199
    TEST EAX,EAX                        ; 004ad19c
    JNZ 0x004ad323                      ; 004ad19e
        ;   XREF to: 004ad323 (CONDITIONAL_JUMP)  ; LAB_004ad323
    MOV AL,byte ptr [EBX + 0xa]         ; 004ad1a4
    INC AL                              ; 004ad1a7
    AND EAX,0xff                        ; 004ad1a9
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ad1ae | g_CharacterClassificationTable
    JNZ 0x004ad323                      ; 004ad1b5
        ;   XREF to: 004ad323 (CONDITIONAL_JUMP)  ; LAB_004ad323
    LEA EAX,[EBX + 0xa]                 ; 004ad1bb
    MOV BL,byte ptr [EAX]               ; 004ad1be
        ;   Label: LAB_004ad1be
    XOR ECX,ECX                         ; 004ad1c0
    INC BL                              ; 004ad1c2
    MOV CL,BL                           ; 004ad1c4
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad1c6 | g_CharacterClassificationTable
    JZ 0x004ad1d2                       ; 004ad1cd
        ;   XREF to: 004ad1d2 (CONDITIONAL_JUMP)  ; LAB_004ad1d2
    INC EAX                             ; 004ad1cf
    JMP 0x004ad1be                      ; 004ad1d0
        ;   XREF to: 004ad1be (UNCONDITIONAL_JUMP)  ; LAB_004ad1be
    LEA ECX,[EBP + 0x5a]                ; 004ad1d2
        ;   Label: LAB_004ad1d2
    PUSH ECX                            ; 004ad1d5
    LEA ECX,[EBP + 0xfffff25a]          ; 004ad1d6
    PUSH ECX                            ; 004ad1dc
    PUSH 0x625011                       ; 004ad1dd | = "(%[^)])%n"
    MOV EDX,0xffffffff                  ; 004ad1e2
    PUSH EAX                            ; 004ad1e7
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad1e8
    MOV dword ptr [EBP + 0x5a],EDX      ; 004ad1eb
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad1ee
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004ad1f3
    ADD ESP,0x10                        ; 004ad1f6
    CMP ECX,0x3                         ; 004ad1f9
    JL 0x004ad267                       ; 004ad1fc
        ;   XREF to: 004ad267 (CONDITIONAL_JUMP)  ; LAB_004ad267
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004ad1fe
    ADD EBX,ECX                         ; 004ad201
    LEA EDI,[EBP + 0xfffff25a]          ; 004ad203
    MOV dword ptr [EBP + -0x5e],EBX     ; 004ad209
    SUB ECX,ECX                         ; 004ad20c
    DEC ECX                             ; 004ad20e
    XOR EAX,EAX                         ; 004ad20f
    SCASB.REPNE ES:EDI                  ; 004ad211
    NOT ECX                             ; 004ad213
    DEC ECX                             ; 004ad215
    LEA EBX,[EBP + 0xfffff25a]          ; 004ad216
    MOV EDI,ECX                         ; 004ad21c
    TEST ECX,ECX                        ; 004ad21e
    JLE 0x004ad23e                      ; 004ad220
        ;   XREF to: 004ad23e (CONDITIONAL_JUMP)  ; LAB_004ad23e
    LEA EAX,[EBP + 0xfffff25a]          ; 004ad222
    ADD EAX,ECX                         ; 004ad228
    MOV CL,byte ptr [EAX + -0x1]        ; 004ad22a
        ;   Label: LAB_004ad22a
    INC CL                              ; 004ad22d
    AND ECX,0xff                        ; 004ad22f
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad235 | g_CharacterClassificationTable
    JNZ 0x004ad283                      ; 004ad23c
        ;   XREF to: 004ad283 (CONDITIONAL_JUMP)  ; LAB_004ad283
    LEA EAX,[EBX + EDI*0x1]             ; 004ad23e
        ;   Label: LAB_004ad23e
    LEA ESI,[EBX + 0x1]                 ; 004ad241
    MOV byte ptr [EAX],0x0              ; 004ad244
    MOV AL,byte ptr [EBX]               ; 004ad247
        ;   Label: LAB_004ad247
    INC AL                              ; 004ad249
    AND EAX,0xff                        ; 004ad24b
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ad250 | g_CharacterClassificationTable
    JZ 0x004ad28b                       ; 004ad257
        ;   XREF to: 004ad28b (CONDITIONAL_JUMP)  ; LAB_004ad28b
    PUSH EDI                            ; 004ad259
    PUSH ESI                            ; 004ad25a
    PUSH EBX                            ; 004ad25b
    DEC EDI                             ; 004ad25c
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ad25d
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ad262
    JMP 0x004ad247                      ; 004ad265
        ;   XREF to: 004ad247 (UNCONDITIONAL_JUMP)  ; LAB_004ad247
    PUSH 0x62501b                       ; 004ad267 | = "Error parsing setWeather command parms"
        ;   Label: LAB_004ad267
    PUSH 0x2d0a460                      ; 004ad26c | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad271
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ad276
    XOR EAX,EAX                         ; 004ad279
    LEA ESP,[EBP + 0x7e]                ; 004ad27b
    POP EBP                             ; 004ad27e
    POP EDI                             ; 004ad27f
    POP ESI                             ; 004ad280
    POP EBX                             ; 004ad281
    RET                                 ; 004ad282
    DEC EDI                             ; 004ad283
        ;   Label: LAB_004ad283
    DEC EAX                             ; 004ad284
    TEST EDI,EDI                        ; 004ad285
    JG 0x004ad22a                       ; 004ad287
        ;   XREF to: 004ad22a (CONDITIONAL_JUMP)  ; LAB_004ad22a
    JMP 0x004ad23e                      ; 004ad289
        ;   XREF to: 004ad23e (UNCONDITIONAL_JUMP)  ; LAB_004ad23e
    PUSH 0x625042                       ; 004ad28b | = "none"
        ;   Label: LAB_004ad28b
    LEA EAX,[EBP + 0xfffff25a]          ; 004ad290
    PUSH EAX                            ; 004ad296
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ad297
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ad29c
    TEST EAX,EAX                        ; 004ad29f
    JNZ 0x004ad2c2                      ; 004ad2a1
        ;   XREF to: 004ad2c2 (CONDITIONAL_JUMP)  ; LAB_004ad2c2
    CMP dword ptr [EBP + -0x62],0x0     ; 004ad2a3
        ;   Label: LAB_004ad2a3
    JZ 0x004aaf1d                       ; 004ad2a7
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH EAX                            ; 004ad2ad
    MOV EDI,dword ptr [0x006848fc]      ; 004ad2ae | g_CWeatherPtr
    PUSH EDI                            ; 004ad2b4 | g_CWeatherInstance
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0 ; 004ad2b5
        ;   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 004ad2ba
    JMP 0x004aaf1d                      ; 004ad2bd
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x625047                       ; 004ad2c2 | = "rain"
        ;   Label: LAB_004ad2c2
    LEA EAX,[EBP + 0xfffff25a]          ; 004ad2c7
    PUSH EAX                            ; 004ad2cd
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ad2ce
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ad2d3
    TEST EAX,EAX                        ; 004ad2d6
    JNZ 0x004ad2e1                      ; 004ad2d8
        ;   XREF to: 004ad2e1 (CONDITIONAL_JUMP)  ; LAB_004ad2e1
    MOV EAX,0x1                         ; 004ad2da
    JMP 0x004ad2a3                      ; 004ad2df
        ;   XREF to: 004ad2a3 (UNCONDITIONAL_JUMP)  ; LAB_004ad2a3
    PUSH 0x62504c                       ; 004ad2e1 | = "snow"
        ;   Label: LAB_004ad2e1
    LEA EAX,[EBP + 0xfffff25a]          ; 004ad2e6
    PUSH EAX                            ; 004ad2ec
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ad2ed
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ad2f2
    TEST EAX,EAX                        ; 004ad2f5
    JNZ 0x004ad300                      ; 004ad2f7
        ;   XREF to: 004ad300 (CONDITIONAL_JUMP)  ; LAB_004ad300
    MOV EAX,0x2                         ; 004ad2f9
    JMP 0x004ad2a3                      ; 004ad2fe
        ;   XREF to: 004ad2a3 (UNCONDITIONAL_JUMP)  ; LAB_004ad2a3
    LEA EAX,[EBP + 0xfffff25a]          ; 004ad300
        ;   Label: LAB_004ad300
    PUSH EAX                            ; 004ad306
    PUSH 0x625051                       ; 004ad307 | = "Invalid weather type: %s"
    PUSH 0x2d0a460                      ; 004ad30c | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad311
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ad316
    XOR EAX,EAX                         ; 004ad319
    LEA ESP,[EBP + 0x7e]                ; 004ad31b
    POP EBP                             ; 004ad31e
    POP EDI                             ; 004ad31f
    POP ESI                             ; 004ad320
    POP EBX                             ; 004ad321
    RET                                 ; 004ad322
    PUSH 0xb                            ; 004ad323
        ;   Label: LAB_004ad323
    PUSH 0x62506a                       ; 004ad325 | = "shakeScreen"
    PUSH EBX                            ; 004ad32a
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ad32b
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ad330
    TEST EAX,EAX                        ; 004ad333
    JNZ 0x004ad3ed                      ; 004ad335
        ;   XREF to: 004ad3ed (CONDITIONAL_JUMP)  ; LAB_004ad3ed
    MOV AL,byte ptr [EBX + 0xb]         ; 004ad33b
    INC AL                              ; 004ad33e
    AND EAX,0xff                        ; 004ad340
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ad345 | g_CharacterClassificationTable
    JNZ 0x004ad3ed                      ; 004ad34c
        ;   XREF to: 004ad3ed (CONDITIONAL_JUMP)  ; LAB_004ad3ed
    LEA EAX,[EBX + 0xb]                 ; 004ad352
    MOV BL,byte ptr [EAX]               ; 004ad355
        ;   Label: LAB_004ad355
    XOR ECX,ECX                         ; 004ad357
    INC BL                              ; 004ad359
    MOV CL,BL                           ; 004ad35b
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad35d | g_CharacterClassificationTable
    JZ 0x004ad369                       ; 004ad364
        ;   XREF to: 004ad369 (CONDITIONAL_JUMP)  ; LAB_004ad369
    INC EAX                             ; 004ad366
    JMP 0x004ad355                      ; 004ad367
        ;   XREF to: 004ad355 (UNCONDITIONAL_JUMP)  ; LAB_004ad355
    LEA ECX,[EBP + 0x6a]                ; 004ad369
        ;   Label: LAB_004ad369
    PUSH ECX                            ; 004ad36c
    LEA ECX,[EBP + 0x66]                ; 004ad36d
    PUSH ECX                            ; 004ad370
    LEA ECX,[EBP + 0xe]                 ; 004ad371
    PUSH ECX                            ; 004ad374
    LEA ECX,[EBP + 0x62]                ; 004ad375
    PUSH ECX                            ; 004ad378
    LEA ECX,[EBP + 0x5e]                ; 004ad379
    PUSH ECX                            ; 004ad37c
    PUSH 0x625076                       ; 004ad37d | = "( %f, %f, %f, %f )%n"
    MOV EDX,0xffffffff                  ; 004ad382
    PUSH EAX                            ; 004ad387
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad388
    MOV dword ptr [EBP + 0x6a],EDX      ; 004ad38b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad38e
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004ad393
    ADD ESP,0x1c                        ; 004ad396
    CMP ECX,0x5                         ; 004ad399
    JL 0x004ad3d1                       ; 004ad39c
        ;   XREF to: 004ad3d1 (CONDITIONAL_JUMP)  ; LAB_004ad3d1
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004ad39e
    ADD EBX,ECX                         ; 004ad3a1
    MOV ESI,dword ptr [EBP + -0x62]     ; 004ad3a3
    MOV dword ptr [EBP + -0x5e],EBX     ; 004ad3a6
    TEST ESI,ESI                        ; 004ad3a9
    JZ 0x004aaf1d                       ; 004ad3ab
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH dword ptr [EBP + 0x66]         ; 004ad3b1
    PUSH dword ptr [EBP + 0xe]          ; 004ad3b4
    PUSH dword ptr [EBP + 0x62]         ; 004ad3b7
    MOV EDI,dword ptr [0x006810c8]      ; 004ad3ba | g_CDemonSetPtr
    PUSH dword ptr [EBP + 0x5e]         ; 004ad3c0
    PUSH EDI                            ; 004ad3c3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0 ; 004ad3c4
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004ad3c9
    JMP 0x004aaf1d                      ; 004ad3cc
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x62508b                       ; 004ad3d1 | = "Error parsing shakeScreen command parms"
        ;   Label: LAB_004ad3d1
    PUSH 0x2d0a460                      ; 004ad3d6 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad3db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ad3e0
    XOR EAX,EAX                         ; 004ad3e3
    LEA ESP,[EBP + 0x7e]                ; 004ad3e5
    POP EBP                             ; 004ad3e8
    POP EDI                             ; 004ad3e9
    POP ESI                             ; 004ad3ea
    POP EBX                             ; 004ad3eb
    RET                                 ; 004ad3ec
    PUSH 0x11                           ; 004ad3ed
        ;   Label: LAB_004ad3ed
    PUSH 0x6250b3                       ; 004ad3ef | = "slamModelToMotion"
    PUSH EBX                            ; 004ad3f4
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ad3f5
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ad3fa
    TEST EAX,EAX                        ; 004ad3fd
    JNZ 0x004ad60f                      ; 004ad3ff
        ;   XREF to: 004ad60f (CONDITIONAL_JUMP)  ; LAB_004ad60f
    MOV AL,byte ptr [EBX + 0x11]        ; 004ad405
    INC AL                              ; 004ad408
    AND EAX,0xff                        ; 004ad40a
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ad40f | g_CharacterClassificationTable
    JNZ 0x004ad60f                      ; 004ad416
        ;   XREF to: 004ad60f (CONDITIONAL_JUMP)  ; LAB_004ad60f
    LEA EAX,[EBX + 0x11]                ; 004ad41c
    MOV BL,byte ptr [EAX]               ; 004ad41f
        ;   Label: LAB_004ad41f
    XOR ECX,ECX                         ; 004ad421
    INC BL                              ; 004ad423
    MOV CL,BL                           ; 004ad425
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad427 | g_CharacterClassificationTable
    JZ 0x004ad433                       ; 004ad42e
        ;   XREF to: 004ad433 (CONDITIONAL_JUMP)  ; LAB_004ad433
    INC EAX                             ; 004ad430
    JMP 0x004ad41f                      ; 004ad431
        ;   XREF to: 004ad41f (UNCONDITIONAL_JUMP)  ; LAB_004ad41f
    LEA ECX,[EBP + 0x6e]                ; 004ad433
        ;   Label: LAB_004ad433
    PUSH ECX                            ; 004ad436
    LEA ECX,[EBP + 0xfffffc82]          ; 004ad437
    PUSH ECX                            ; 004ad43d
    LEA ECX,[EBP + 0xfffff962]          ; 004ad43e
    PUSH ECX                            ; 004ad444
    PUSH 0x6250c5                       ; 004ad445 | = "(%[^,], %[^)])%n"
    MOV EDX,0xffffffff                  ; 004ad44a
    PUSH EAX                            ; 004ad44f
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad450
    MOV dword ptr [EBP + 0x6e],EDX      ; 004ad453
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad456
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004ad45b
    ADD ESP,0x14                        ; 004ad45e
    CMP ECX,0x5                         ; 004ad461
    JL 0x004ad4cf                       ; 004ad464
        ;   XREF to: 004ad4cf (CONDITIONAL_JUMP)  ; LAB_004ad4cf
    MOV EBX,dword ptr [EBP + -0x5e]     ; 004ad466
    ADD EBX,ECX                         ; 004ad469
    LEA EDI,[EBP + 0xfffff962]          ; 004ad46b
    MOV dword ptr [EBP + -0x5e],EBX     ; 004ad471
    SUB ECX,ECX                         ; 004ad474
    DEC ECX                             ; 004ad476
    XOR EAX,EAX                         ; 004ad477
    SCASB.REPNE ES:EDI                  ; 004ad479
    NOT ECX                             ; 004ad47b
    DEC ECX                             ; 004ad47d
    LEA EBX,[EBP + 0xfffff962]          ; 004ad47e
    MOV EDI,ECX                         ; 004ad484
    TEST ECX,ECX                        ; 004ad486
    JLE 0x004ad4a6                      ; 004ad488
        ;   XREF to: 004ad4a6 (CONDITIONAL_JUMP)  ; LAB_004ad4a6
    LEA EAX,[EBP + 0xfffff962]          ; 004ad48a
    ADD EAX,ECX                         ; 004ad490
    MOV CL,byte ptr [EAX + -0x1]        ; 004ad492
        ;   Label: LAB_004ad492
    INC CL                              ; 004ad495
    AND ECX,0xff                        ; 004ad497
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad49d | g_CharacterClassificationTable
    JNZ 0x004ad4eb                      ; 004ad4a4
        ;   XREF to: 004ad4eb (CONDITIONAL_JUMP)  ; LAB_004ad4eb
    LEA EAX,[EBX + EDI*0x1]             ; 004ad4a6
        ;   Label: LAB_004ad4a6
    LEA ESI,[EBX + 0x1]                 ; 004ad4a9
    MOV byte ptr [EAX],0x0              ; 004ad4ac
    MOV AL,byte ptr [EBX]               ; 004ad4af
        ;   Label: LAB_004ad4af
    INC AL                              ; 004ad4b1
    AND EAX,0xff                        ; 004ad4b3
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ad4b8 | g_CharacterClassificationTable
    JZ 0x004ad4f3                       ; 004ad4bf
        ;   XREF to: 004ad4f3 (CONDITIONAL_JUMP)  ; LAB_004ad4f3
    PUSH EDI                            ; 004ad4c1
    PUSH ESI                            ; 004ad4c2
    PUSH EBX                            ; 004ad4c3
    DEC EDI                             ; 004ad4c4
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ad4c5
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ad4ca
    JMP 0x004ad4af                      ; 004ad4cd
        ;   XREF to: 004ad4af (UNCONDITIONAL_JUMP)  ; LAB_004ad4af
    PUSH 0x6250d6                       ; 004ad4cf | = "Error parsing slamModelToMotion comma..."
        ;   Label: LAB_004ad4cf
    PUSH 0x2d0a460                      ; 004ad4d4 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad4d9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ad4de
    XOR EAX,EAX                         ; 004ad4e1
    LEA ESP,[EBP + 0x7e]                ; 004ad4e3
    POP EBP                             ; 004ad4e6
    POP EDI                             ; 004ad4e7
    POP ESI                             ; 004ad4e8
    POP EBX                             ; 004ad4e9
    RET                                 ; 004ad4ea
    DEC EDI                             ; 004ad4eb
        ;   Label: LAB_004ad4eb
    DEC EAX                             ; 004ad4ec
    TEST EDI,EDI                        ; 004ad4ed
    JG 0x004ad492                       ; 004ad4ef
        ;   XREF to: 004ad492 (CONDITIONAL_JUMP)  ; LAB_004ad492
    JMP 0x004ad4a6                      ; 004ad4f1
        ;   XREF to: 004ad4a6 (UNCONDITIONAL_JUMP)  ; LAB_004ad4a6
    LEA EDI,[EBP + 0xfffffc82]          ; 004ad4f3
        ;   Label: LAB_004ad4f3
    LEA EBX,[EBP + 0xfffffc82]          ; 004ad4f9
    SUB ECX,ECX                         ; 004ad4ff
    DEC ECX                             ; 004ad501
    XOR EAX,EAX                         ; 004ad502
    SCASB.REPNE ES:EDI                  ; 004ad504
    NOT ECX                             ; 004ad506
    DEC ECX                             ; 004ad508
    MOV EDI,ECX                         ; 004ad509
    TEST ECX,ECX                        ; 004ad50b
    JLE 0x004ad52b                      ; 004ad50d
        ;   XREF to: 004ad52b (CONDITIONAL_JUMP)  ; LAB_004ad52b
    LEA EAX,[EBP + 0xfffffc82]          ; 004ad50f
    ADD EAX,ECX                         ; 004ad515
    MOV CL,byte ptr [EAX + -0x1]        ; 004ad517
        ;   Label: LAB_004ad517
    INC CL                              ; 004ad51a
    AND ECX,0xff                        ; 004ad51c
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad522 | g_CharacterClassificationTable
    JNZ 0x004ad554                      ; 004ad529
        ;   XREF to: 004ad554 (CONDITIONAL_JUMP)  ; LAB_004ad554
    LEA EAX,[EBX + EDI*0x1]             ; 004ad52b
        ;   Label: LAB_004ad52b
    LEA ESI,[EBX + 0x1]                 ; 004ad52e
    MOV byte ptr [EAX],0x0              ; 004ad531
    MOV AL,byte ptr [EBX]               ; 004ad534
        ;   Label: LAB_004ad534
    INC AL                              ; 004ad536
    AND EAX,0xff                        ; 004ad538
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ad53d | g_CharacterClassificationTable
    JZ 0x004ad55c                       ; 004ad544
        ;   XREF to: 004ad55c (CONDITIONAL_JUMP)  ; LAB_004ad55c
    PUSH EDI                            ; 004ad546
    PUSH ESI                            ; 004ad547
    PUSH EBX                            ; 004ad548
    DEC EDI                             ; 004ad549
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ad54a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ad54f
    JMP 0x004ad534                      ; 004ad552
        ;   XREF to: 004ad534 (UNCONDITIONAL_JUMP)  ; LAB_004ad534
    DEC EDI                             ; 004ad554
        ;   Label: LAB_004ad554
    DEC EAX                             ; 004ad555
    TEST EDI,EDI                        ; 004ad556
    JG 0x004ad517                       ; 004ad558
        ;   XREF to: 004ad517 (CONDITIONAL_JUMP)  ; LAB_004ad517
    JMP 0x004ad52b                      ; 004ad55a
        ;   XREF to: 004ad52b (UNCONDITIONAL_JUMP)  ; LAB_004ad52b
    PUSH 0x823c14                       ; 004ad55c | g_CCharacterClassInfo
        ;   Label: LAB_004ad55c
    MOV ESI,dword ptr [0x00823c4c]      ; 004ad561 | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 004ad567
    LEA EAX,[EBP + 0xfffff962]          ; 004ad568
    PUSH EAX                            ; 004ad56e
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004ad56f
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    MOV EBX,EAX                         ; 004ad574
    ADD ESP,0xc                         ; 004ad576
    TEST EAX,EAX                        ; 004ad579
    JZ 0x004aaceb                       ; 004ad57b
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EAX,dword ptr [0x0065d95c]      ; 004ad581 | g_ActorNameSentinel
    JZ 0x004aaf1d                       ; 004ad587
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x0                            ; 004ad58d
    LEA EAX,[EBP + 0xfffffc82]          ; 004ad58f
    PUSH EAX                            ; 004ad595
    LEA ESI,[EBX + 0x158]               ; 004ad596
    PUSH ESI                            ; 004ad59c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004ad59d
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ad5a2
    PUSH EAX                            ; 004ad5a5
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004ad5a6
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004ad5ab
    TEST EAX,EAX                        ; 004ad5ae
    JL 0x004ad5e5                       ; 004ad5b0
        ;   XREF to: 004ad5e5 (CONDITIONAL_JUMP)  ; LAB_004ad5e5
    CMP dword ptr [EBP + -0x62],0x0     ; 004ad5b2
    JZ 0x004aaf1d                       ; 004ad5b6
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH 0x0                            ; 004ad5bc
    PUSH EAX                            ; 004ad5be
    PUSH ESI                            ; 004ad5bf
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 004ad5c0
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004ad5c5
    PUSH 0x1                            ; 004ad5c8
    PUSH ESI                            ; 004ad5ca
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004ad5cb
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ad5d0
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ad5d3
    PUSH EAX                            ; 004ad5d6
    PUSH ESI                            ; 004ad5d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004ad5d8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ad5dd
    JMP 0x004aaf1d                      ; 004ad5e0
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffffc82]          ; 004ad5e5
        ;   Label: LAB_004ad5e5
    PUSH EAX                            ; 004ad5eb
    LEA EAX,[EBX + 0x23b8]              ; 004ad5ec
    PUSH EAX                            ; 004ad5f2
    PUSH 0x625104                       ; 004ad5f3 | = "Model %s does not have motion %s"
    PUSH 0x2d0a460                      ; 004ad5f8 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ad5fd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ad602
    XOR EAX,EAX                         ; 004ad605
    LEA ESP,[EBP + 0x7e]                ; 004ad607
    POP EBP                             ; 004ad60a
    POP EDI                             ; 004ad60b
    POP ESI                             ; 004ad60c
    POP EBX                             ; 004ad60d
    RET                                 ; 004ad60e
    PUSH 0xc                            ; 004ad60f
        ;   Label: LAB_004ad60f
    PUSH 0x625125                       ; 004ad611 | = "switchCamera"
    PUSH EBX                            ; 004ad616
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ad617
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ad61c
    TEST EAX,EAX                        ; 004ad61f
    JNZ 0x004ad7b2                      ; 004ad621
        ;   XREF to: 004ad7b2 (CONDITIONAL_JUMP)  ; LAB_004ad7b2
    MOV AL,byte ptr [EBX + 0xc]         ; 004ad627
    INC AL                              ; 004ad62a
    AND EAX,0xff                        ; 004ad62c
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ad631 | g_CharacterClassificationTable
    JNZ 0x004ad7b2                      ; 004ad638
        ;   XREF to: 004ad7b2 (CONDITIONAL_JUMP)  ; LAB_004ad7b2
    LEA EAX,[EBX + 0xc]                 ; 004ad63e
    MOV BL,byte ptr [EAX]               ; 004ad641
        ;   Label: LAB_004ad641
    XOR ECX,ECX                         ; 004ad643
    INC BL                              ; 004ad645
    MOV CL,BL                           ; 004ad647
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad649 | g_CharacterClassificationTable
    JZ 0x004ad655                       ; 004ad650
        ;   XREF to: 004ad655 (CONDITIONAL_JUMP)  ; LAB_004ad655
    INC EAX                             ; 004ad652
    JMP 0x004ad641                      ; 004ad653
        ;   XREF to: 004ad641 (UNCONDITIONAL_JUMP)  ; LAB_004ad641
    MOV ECX,0xffffffff                  ; 004ad655
        ;   Label: LAB_004ad655
    LEA EDI,[EBP + 0xfffffd4a]          ; 004ad65a
    MOV ESI,0x6794a0                    ; 004ad660 | g_DefaultCommandArg
    MOV dword ptr [EBP + 0x72],ECX      ; 004ad665
    MOV ECX,0x19                        ; 004ad668
    MOVSD.REP ES:EDI,ESI                ; 004ad66d | g_DefaultCommandArg | DAT_006794a4
    LEA ECX,[EBP + 0x72]                ; 004ad66f
    PUSH ECX                            ; 004ad672
    LEA ECX,[EBP + 0xfffffd4a]          ; 004ad673
    PUSH ECX                            ; 004ad679
    PUSH 0x625132                       ; 004ad67a | = " ( %[^ ,)]%n"
    PUSH EAX                            ; 004ad67f
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad680
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad683
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x72]      ; 004ad688
    ADD ESP,0x10                        ; 004ad68b
    CMP EBX,0x2                         ; 004ad68e
    JL 0x004ad6ac                       ; 004ad691
        ;   XREF to: 004ad6ac (CONDITIONAL_JUMP)  ; LAB_004ad6ac
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ad693
    ADD EAX,EBX                         ; 004ad696
    MOV BL,byte ptr [EAX]               ; 004ad698
        ;   Label: LAB_004ad698
    XOR ECX,ECX                         ; 004ad69a
    INC BL                              ; 004ad69c
    MOV CL,BL                           ; 004ad69e
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad6a0 | g_CharacterClassificationTable
    JZ 0x004ad6c1                       ; 004ad6a7
        ;   XREF to: 004ad6c1 (CONDITIONAL_JUMP)  ; LAB_004ad6c1
    INC EAX                             ; 004ad6a9
    JMP 0x004ad698                      ; 004ad6aa
        ;   XREF to: 004ad698 (UNCONDITIONAL_JUMP)  ; LAB_004ad698
    PUSH 0x62513f                       ; 004ad6ac | = "Syntax error in switchCamera() parms"
        ;   Label: LAB_004ad6ac
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ad6b1
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ad6b6
    LEA ESP,[EBP + 0x7e]                ; 004ad6b9
    POP EBP                             ; 004ad6bc
    POP EDI                             ; 004ad6bd
    POP ESI                             ; 004ad6be
    POP EBX                             ; 004ad6bf
    RET                                 ; 004ad6c0
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad6c1
        ;   Label: LAB_004ad6c1
    LEA EAX,[EBP + 0xfffffd4a]          ; 004ad6c4
    PUSH EAX                            ; 004ad6ca
    MOV EDI,dword ptr [0x006810c8]      ; 004ad6cb | g_CDemonSetPtr
    PUSH EDI                            ; 004ad6d1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 004ad6d2
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 004ad6d7
    MOV ESI,EAX                         ; 004ad6da
    TEST EAX,EAX                        ; 004ad6dc
    JL 0x004ad722                       ; 004ad6de
        ;   XREF to: 004ad722 (CONDITIONAL_JUMP)  ; LAB_004ad722
    MOV dword ptr [EBP + 0x1e],0x40400000 ; 004ad6e0
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ad6e7
    CMP byte ptr [EAX],0x2c             ; 004ad6ea
    JZ 0x004ad73e                       ; 004ad6ed
        ;   XREF to: 004ad73e (CONDITIONAL_JUMP)  ; LAB_004ad73e
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ad6ef
        ;   Label: LAB_004ad6ef
    CMP byte ptr [EAX],0x29             ; 004ad6f2
    JNZ 0x004ad79d                      ; 004ad6f5
        ;   XREF to: 004ad79d (CONDITIONAL_JUMP)  ; LAB_004ad79d
    INC EAX                             ; 004ad6fb
    MOV EDX,dword ptr [EBP + -0x62]     ; 004ad6fc
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad6ff
    TEST EDX,EDX                        ; 004ad702
    JZ 0x004aaf1d                       ; 004ad704
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    PUSH dword ptr [EBP + 0x1e]         ; 004ad70a
    PUSH ESI                            ; 004ad70d
    MOV ECX,dword ptr [0x006810c8]      ; 004ad70e | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004ad714 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00 ; 004ad715
        ;   XREF to: 00575b00 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 004ad71a
    JMP 0x004aaf1d                      ; 004ad71d
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    LEA EAX,[EBP + 0xfffffd4a]          ; 004ad722
        ;   Label: LAB_004ad722
    PUSH EAX                            ; 004ad728
    PUSH 0x625164                       ; 004ad729 | = "Camera \"%s\" doesn't exist"
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ad72e
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004ad733
    LEA ESP,[EBP + 0x7e]                ; 004ad736
    POP EBP                             ; 004ad739
    POP EDI                             ; 004ad73a
    POP ESI                             ; 004ad73b
    POP EBX                             ; 004ad73c
    RET                                 ; 004ad73d
    LEA EAX,[EBP + 0x72]                ; 004ad73e
        ;   Label: LAB_004ad73e
    PUSH EAX                            ; 004ad741
    LEA EAX,[EBP + 0x1e]                ; 004ad742
    PUSH EAX                            ; 004ad745
    PUSH 0x62517e                       ; 004ad746 | = ",%f%n"
    MOV ECX,dword ptr [EBP + -0x5e]     ; 004ad74b
    MOV EDX,0xffffffff                  ; 004ad74e
    PUSH ECX                            ; 004ad753
    MOV dword ptr [EBP + 0x72],EDX      ; 004ad754
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad757
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EBX,dword ptr [EBP + 0x72]      ; 004ad75c
    ADD ESP,0x10                        ; 004ad75f
    CMP EBX,0x2                         ; 004ad762
    JL 0x004ad780                       ; 004ad765
        ;   XREF to: 004ad780 (CONDITIONAL_JUMP)  ; LAB_004ad780
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ad767
    ADD EAX,EBX                         ; 004ad76a
    MOV BL,byte ptr [EAX]               ; 004ad76c
        ;   Label: LAB_004ad76c
    XOR ECX,ECX                         ; 004ad76e
    INC BL                              ; 004ad770
    MOV CL,BL                           ; 004ad772
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad774 | g_CharacterClassificationTable
    JZ 0x004ad795                       ; 004ad77b
        ;   XREF to: 004ad795 (CONDITIONAL_JUMP)  ; LAB_004ad795
    INC EAX                             ; 004ad77d
    JMP 0x004ad76c                      ; 004ad77e
        ;   XREF to: 004ad76c (UNCONDITIONAL_JUMP)  ; LAB_004ad76c
    PUSH 0x625184                       ; 004ad780 | = "Syntax error in switchCamera() parms"
        ;   Label: LAB_004ad780
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ad785
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ad78a
    LEA ESP,[EBP + 0x7e]                ; 004ad78d
    POP EBP                             ; 004ad790
    POP EDI                             ; 004ad791
    POP ESI                             ; 004ad792
    POP EBX                             ; 004ad793
    RET                                 ; 004ad794
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad795
        ;   Label: LAB_004ad795
    JMP 0x004ad6ef                      ; 004ad798
        ;   XREF to: 004ad6ef (UNCONDITIONAL_JUMP)  ; LAB_004ad6ef
    PUSH 0x6251a9                       ; 004ad79d | = "Missing ')' in switchCamera() statement"
        ;   Label: LAB_004ad79d
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ad7a2
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ad7a7
    LEA ESP,[EBP + 0x7e]                ; 004ad7aa
    POP EBP                             ; 004ad7ad
    POP EDI                             ; 004ad7ae
    POP ESI                             ; 004ad7af
    POP EBX                             ; 004ad7b0
    RET                                 ; 004ad7b1
    PUSH 0x6                            ; 004ad7b2
        ;   Label: LAB_004ad7b2
    PUSH 0x6251d1                       ; 004ad7b4 | = "warpTo"
    PUSH EBX                            ; 004ad7b9
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004ad7ba
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ad7bf
    TEST EAX,EAX                        ; 004ad7c2
    JNZ 0x004adbcf                      ; 004ad7c4
        ;   XREF to: 004adbcf (CONDITIONAL_JUMP)  ; LAB_004adbcf
    MOV AL,byte ptr [EBX + 0x6]         ; 004ad7ca
    INC AL                              ; 004ad7cd
    AND EAX,0xff                        ; 004ad7cf
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004ad7d4 | g_CharacterClassificationTable
    JNZ 0x004adbcf                      ; 004ad7db
        ;   XREF to: 004adbcf (CONDITIONAL_JUMP)  ; LAB_004adbcf
    LEA EAX,[EBX + 0x6]                 ; 004ad7e1
    MOV BL,byte ptr [EAX]               ; 004ad7e4
        ;   Label: LAB_004ad7e4
    XOR ECX,ECX                         ; 004ad7e6
    INC BL                              ; 004ad7e8
    MOV CL,BL                           ; 004ad7ea
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad7ec | g_CharacterClassificationTable
    JZ 0x004ad7f8                       ; 004ad7f3
        ;   XREF to: 004ad7f8 (CONDITIONAL_JUMP)  ; LAB_004ad7f8
    INC EAX                             ; 004ad7f5
    JMP 0x004ad7e4                      ; 004ad7f6
        ;   XREF to: 004ad7e4 (UNCONDITIONAL_JUMP)  ; LAB_004ad7e4
    LEA ECX,[EBP + 0x76]                ; 004ad7f8
        ;   Label: LAB_004ad7f8
    PUSH ECX                            ; 004ad7fb
    LEA ECX,[EBP + 0xfffffaf2]          ; 004ad7fc
    PUSH ECX                            ; 004ad802
    LEA ECX,[EBP + 0xfffff4b2]          ; 004ad803
    PUSH ECX                            ; 004ad809
    PUSH 0x6251d8                       ; 004ad80a | = "(%[^,], %[^)])%n"
    MOV EBX,0xffffffff                  ; 004ad80f
    PUSH EAX                            ; 004ad814
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad815
    MOV dword ptr [EBP + 0x76],EBX      ; 004ad818
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad81b
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x76]      ; 004ad820
    ADD ESP,0x14                        ; 004ad823
    CMP ESI,0x5                         ; 004ad826
    JL 0x004ad88c                       ; 004ad829
        ;   XREF to: 004ad88c (CONDITIONAL_JUMP)  ; LAB_004ad88c
    LEA EDI,[EBP + 0xfffff4b2]          ; 004ad82b
    LEA EBX,[EBP + 0xfffff4b2]          ; 004ad831
    SUB ECX,ECX                         ; 004ad837
    DEC ECX                             ; 004ad839
    XOR EAX,EAX                         ; 004ad83a
    SCASB.REPNE ES:EDI                  ; 004ad83c
    NOT ECX                             ; 004ad83e
    DEC ECX                             ; 004ad840
    MOV EDI,ECX                         ; 004ad841
    TEST ECX,ECX                        ; 004ad843
    JLE 0x004ad863                      ; 004ad845
        ;   XREF to: 004ad863 (CONDITIONAL_JUMP)  ; LAB_004ad863
    LEA EAX,[EBP + 0xfffff4b2]          ; 004ad847
    ADD EAX,ECX                         ; 004ad84d
    MOV CL,byte ptr [EAX + -0x1]        ; 004ad84f
        ;   Label: LAB_004ad84f
    INC CL                              ; 004ad852
    AND ECX,0xff                        ; 004ad854
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad85a | g_CharacterClassificationTable
    JNZ 0x004ad8a1                      ; 004ad861
        ;   XREF to: 004ad8a1 (CONDITIONAL_JUMP)  ; LAB_004ad8a1
    LEA EAX,[EBX + EDI*0x1]             ; 004ad863
        ;   Label: LAB_004ad863
    LEA ESI,[EBX + 0x1]                 ; 004ad866
    MOV byte ptr [EAX],0x0              ; 004ad869
    MOV AL,byte ptr [EBX]               ; 004ad86c
        ;   Label: LAB_004ad86c
    INC AL                              ; 004ad86e
    AND EAX,0xff                        ; 004ad870
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ad875 | g_CharacterClassificationTable
    JZ 0x004ad8a9                       ; 004ad87c
        ;   XREF to: 004ad8a9 (CONDITIONAL_JUMP)  ; LAB_004ad8a9
    PUSH EDI                            ; 004ad87e
    PUSH ESI                            ; 004ad87f
    PUSH EBX                            ; 004ad880
    DEC EDI                             ; 004ad881
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ad882
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ad887
    JMP 0x004ad86c                      ; 004ad88a
        ;   XREF to: 004ad86c (UNCONDITIONAL_JUMP)  ; LAB_004ad86c
    PUSH 0x6251e9                       ; 004ad88c | = "Error parsing warpTo command parms"
        ;   Label: LAB_004ad88c
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004ad891
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004ad896
    LEA ESP,[EBP + 0x7e]                ; 004ad899
    POP EBP                             ; 004ad89c
    POP EDI                             ; 004ad89d
    POP ESI                             ; 004ad89e
    POP EBX                             ; 004ad89f
    RET                                 ; 004ad8a0
    DEC EDI                             ; 004ad8a1
        ;   Label: LAB_004ad8a1
    DEC EAX                             ; 004ad8a2
    TEST EDI,EDI                        ; 004ad8a3
    JG 0x004ad84f                       ; 004ad8a5
        ;   XREF to: 004ad84f (CONDITIONAL_JUMP)  ; LAB_004ad84f
    JMP 0x004ad863                      ; 004ad8a7
        ;   XREF to: 004ad863 (UNCONDITIONAL_JUMP)  ; LAB_004ad863
    LEA EDI,[EBP + 0xfffffaf2]          ; 004ad8a9
        ;   Label: LAB_004ad8a9
    LEA EBX,[EBP + 0xfffffaf2]          ; 004ad8af
    SUB ECX,ECX                         ; 004ad8b5
    DEC ECX                             ; 004ad8b7
    XOR EAX,EAX                         ; 004ad8b8
    SCASB.REPNE ES:EDI                  ; 004ad8ba
    NOT ECX                             ; 004ad8bc
    DEC ECX                             ; 004ad8be
    MOV EDI,ECX                         ; 004ad8bf
    TEST ECX,ECX                        ; 004ad8c1
    JLE 0x004ad8e1                      ; 004ad8c3
        ;   XREF to: 004ad8e1 (CONDITIONAL_JUMP)  ; LAB_004ad8e1
    LEA EAX,[EBP + 0xfffffaf2]          ; 004ad8c5
    ADD EAX,ECX                         ; 004ad8cb
    MOV CL,byte ptr [EAX + -0x1]        ; 004ad8cd
        ;   Label: LAB_004ad8cd
    INC CL                              ; 004ad8d0
    AND ECX,0xff                        ; 004ad8d2
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad8d8 | g_CharacterClassificationTable
    JNZ 0x004ad90a                      ; 004ad8df
        ;   XREF to: 004ad90a (CONDITIONAL_JUMP)  ; LAB_004ad90a
    LEA EAX,[EBX + EDI*0x1]             ; 004ad8e1
        ;   Label: LAB_004ad8e1
    LEA ESI,[EBX + 0x1]                 ; 004ad8e4
    MOV byte ptr [EAX],0x0              ; 004ad8e7
    MOV AL,byte ptr [EBX]               ; 004ad8ea
        ;   Label: LAB_004ad8ea
    INC AL                              ; 004ad8ec
    AND EAX,0xff                        ; 004ad8ee
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004ad8f3 | g_CharacterClassificationTable
    JZ 0x004ad912                       ; 004ad8fa
        ;   XREF to: 004ad912 (CONDITIONAL_JUMP)  ; LAB_004ad912
    PUSH EDI                            ; 004ad8fc
    PUSH ESI                            ; 004ad8fd
    PUSH EBX                            ; 004ad8fe
    DEC EDI                             ; 004ad8ff
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004ad900
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ad905
    JMP 0x004ad8ea                      ; 004ad908
        ;   XREF to: 004ad8ea (UNCONDITIONAL_JUMP)  ; LAB_004ad8ea
    DEC EDI                             ; 004ad90a
        ;   Label: LAB_004ad90a
    DEC EAX                             ; 004ad90b
    TEST EDI,EDI                        ; 004ad90c
    JG 0x004ad8cd                       ; 004ad90e
        ;   XREF to: 004ad8cd (CONDITIONAL_JUMP)  ; LAB_004ad8cd
    JMP 0x004ad8e1                      ; 004ad910
        ;   XREF to: 004ad8e1 (UNCONDITIONAL_JUMP)  ; LAB_004ad8e1
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004ad912
        ;   Label: LAB_004ad912
    ADD EAX,dword ptr [EBP + 0x76]      ; 004ad915
    MOV BL,byte ptr [EAX]               ; 004ad918
        ;   Label: LAB_004ad918
    XOR ECX,ECX                         ; 004ad91a
    INC BL                              ; 004ad91c
    MOV CL,BL                           ; 004ad91e
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004ad920 | g_CharacterClassificationTable
    JZ 0x004ad92c                       ; 004ad927
        ;   XREF to: 004ad92c (CONDITIONAL_JUMP)  ; LAB_004ad92c
    INC EAX                             ; 004ad929
    JMP 0x004ad918                      ; 004ad92a
        ;   XREF to: 004ad918 (UNCONDITIONAL_JUMP)  ; LAB_004ad918
    PUSH 0x821ff8                       ; 004ad92c | g_CDemonActorClassInfo
        ;   Label: LAB_004ad92c
    MOV dword ptr [EBP + -0x5e],EAX     ; 004ad931
    MOV EAX,[0x00822030]                ; 004ad934 | g_CDemonActorClassInfo.name_hash
    PUSH EAX                            ; 004ad939
    LEA EAX,[EBP + 0xfffff4b2]          ; 004ad93a
    PUSH EAX                            ; 004ad940
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004ad941
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004ad946
    MOV EBX,EAX                         ; 004ad949
    TEST EAX,EAX                        ; 004ad94b
    JZ 0x004aaceb                       ; 004ad94d
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EAX,dword ptr [0x0065d95c]      ; 004ad953 | g_ActorNameSentinel
    JNZ 0x004ad960                      ; 004ad959
        ;   XREF to: 004ad960 (CONDITIONAL_JUMP)  ; LAB_004ad960
    XOR ECX,ECX                         ; 004ad95b
    MOV dword ptr [EBP + -0x62],ECX     ; 004ad95d
    LEA EAX,[EBP + 0x76]                ; 004ad960
        ;   Label: LAB_004ad960
    PUSH EAX                            ; 004ad963
    LEA EAX,[EBP + 0xffffff5e]          ; 004ad964
    PUSH EAX                            ; 004ad96a
    LEA EAX,[EBP + 0xffffff62]          ; 004ad96b
    PUSH EAX                            ; 004ad971
    LEA EAX,[EBP + 0xffffff5a]          ; 004ad972
    PUSH EAX                            ; 004ad978
    LEA EAX,[EBP + 0xffffff7a]          ; 004ad979
    PUSH EAX                            ; 004ad97f
    LEA EAX,[EBP + 0xffffff76]          ; 004ad980
    PUSH EAX                            ; 004ad986
    LEA EAX,[EBP + 0xffffff72]          ; 004ad987
    PUSH EAX                            ; 004ad98d
    PUSH 0x62520c                       ; 004ad98e | = "%f,%f,%f,%f,%f,%f%n"
    LEA EAX,[EBP + 0xfffffaf2]          ; 004ad993
    MOV ESI,0xffffffff                  ; 004ad999
    PUSH EAX                            ; 004ad99e
    MOV dword ptr [EBP + 0x76],ESI      ; 004ad99f
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004ad9a2
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x76]      ; 004ad9a7
    ADD ESP,0x24                        ; 004ad9aa
    TEST EDI,EDI                        ; 004ad9ad
    JL 0x004ada58                       ; 004ad9af
        ;   XREF to: 004ada58 (CONDITIONAL_JUMP)  ; LAB_004ada58
    CMP dword ptr [EBP + 0x76],0x0      ; 004ad9b5
        ;   Label: LAB_004ad9b5
    JL 0x004adabe                       ; 004ad9b9
        ;   XREF to: 004adabe (CONDITIONAL_JUMP)  ; LAB_004adabe
    CMP dword ptr [EBP + 0x76],0x0      ; 004ad9bf
        ;   Label: LAB_004ad9bf
    JL 0x004adb1d                       ; 004ad9c3
        ;   XREF to: 004adb1d (CONDITIONAL_JUMP)  ; LAB_004adb1d
    MOV ESI,dword ptr [EBP + 0x76]      ; 004ad9c9
        ;   Label: LAB_004ad9c9
    TEST ESI,ESI                        ; 004ad9cc
    JL 0x004adbba                       ; 004ad9ce
        ;   XREF to: 004adbba (CONDITIONAL_JUMP)  ; LAB_004adbba
    CMP byte ptr [ESI + EBP*0x1 + 0xfffffaf2],0x0 ; 004ad9d4
    JNZ 0x004adbba                      ; 004ad9dc
        ;   XREF to: 004adbba (CONDITIONAL_JUMP)  ; LAB_004adbba
    CMP dword ptr [EBP + -0x62],0x0     ; 004ad9e2
    JZ 0x004aaf1d                       ; 004ad9e6
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV EAX,[0x00823c4c]                ; 004ad9ec | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 004ad9f1
    PUSH EBX                            ; 004ad9f2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ad9f3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004ad9f8
    ADD ESP,0x8                         ; 004ad9fa
    TEST EAX,EAX                        ; 004ad9fd
    JZ 0x004ada21                       ; 004ad9ff
        ;   XREF to: 004ada21 (CONDITIONAL_JUMP)  ; LAB_004ada21
    PUSH ESI                            ; 004ada01
    MOV EAX,dword ptr [EAX + 0x154]     ; 004ada02
    CALL dword ptr [EAX + 0x104]        ; 004ada08
    ADD ESP,0x4                         ; 004ada0e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004ada11
    PUSH ESI                            ; 004ada17
    CALL dword ptr [EAX + 0x10c]        ; 004ada18
    ADD ESP,0x4                         ; 004ada1e
    LEA EAX,[EBP + 0xffffff5a]          ; 004ada21
        ;   Label: LAB_004ada21
    PUSH EAX                            ; 004ada27
    LEA EAX,[EBP + 0xffffff72]          ; 004ada28
    PUSH EAX                            ; 004ada2e
    MOV ECX,dword ptr [EBX + 0x154]     ; 004ada2f
    PUSH EBX                            ; 004ada35
    CALL dword ptr [ECX + 0x60]         ; 004ada36
    MOV EAX,[0x00680d50]                ; 004ada39 | g_CScriptPtr
    MOV EDX,dword ptr [EAX + 0xc]       ; 004ada3e | DAT_0310f864
    ADD ESP,0xc                         ; 004ada41
    CMP EBX,EDX                         ; 004ada44
    JNZ 0x004aaf1d                      ; 004ada46
        ;   XREF to: 004aaf1d (CONDITIONAL_JUMP)  ; LAB_004aaf1d
    MOV dword ptr [EAX + 0x10],0x1      ; 004ada4c | DAT_0310f868
    JMP 0x004aaf1d                      ; 004ada53
        ;   XREF to: 004aaf1d (UNCONDITIONAL_JUMP)  ; LAB_004aaf1d
    CMP dword ptr [EBP + -0x62],0x0     ; 004ada58
        ;   Label: LAB_004ada58
    JZ 0x004ada85                       ; 004ada5c
        ;   XREF to: 004ada85 (CONDITIONAL_JUMP)  ; LAB_004ada85
    LEA EAX,[EBP + 0xffffff5a]          ; 004ada5e
    LEA ECX,[EBX + 0x30]                ; 004ada64
    CMP EAX,ECX                         ; 004ada67
    JZ 0x004ada85                       ; 004ada69
        ;   XREF to: 004ada85 (CONDITIONAL_JUMP)  ; LAB_004ada85
    MOV EAX,dword ptr [ECX]             ; 004ada6b
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004ada6d
    MOV EAX,dword ptr [ECX + 0x4]       ; 004ada73
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 004ada76
    MOV EAX,dword ptr [ECX + 0x8]       ; 004ada7c
    MOV dword ptr [EBP + 0xffffff62],EAX ; 004ada7f
    LEA EAX,[EBP + 0x76]                ; 004ada85
        ;   Label: LAB_004ada85
    PUSH EAX                            ; 004ada88
    LEA EAX,[EBP + 0xffffff5e]          ; 004ada89
    PUSH EAX                            ; 004ada8f
    LEA EAX,[EBP + 0xffffff7a]          ; 004ada90
    PUSH EAX                            ; 004ada96
    LEA EAX,[EBP + 0xffffff76]          ; 004ada97
    PUSH EAX                            ; 004ada9d
    LEA EAX,[EBP + 0xffffff72]          ; 004ada9e
    PUSH EAX                            ; 004adaa4
    PUSH 0x625220                       ; 004adaa5 | = "%f,%f,%f,%f%n"
    LEA EAX,[EBP + 0xfffffaf2]          ; 004adaaa
    PUSH EAX                            ; 004adab0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004adab1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x1c                        ; 004adab6
    JMP 0x004ad9b5                      ; 004adab9
        ;   XREF to: 004ad9b5 (UNCONDITIONAL_JUMP)  ; LAB_004ad9b5
    CMP dword ptr [EBP + -0x62],0x0     ; 004adabe
        ;   Label: LAB_004adabe
    JZ 0x004adaeb                       ; 004adac2
        ;   XREF to: 004adaeb (CONDITIONAL_JUMP)  ; LAB_004adaeb
    LEA EAX,[EBP + 0xffffff5a]          ; 004adac4
    LEA ECX,[EBX + 0x30]                ; 004adaca
    CMP EAX,ECX                         ; 004adacd
    JZ 0x004adaeb                       ; 004adacf
        ;   XREF to: 004adaeb (CONDITIONAL_JUMP)  ; LAB_004adaeb
    MOV EAX,dword ptr [ECX]             ; 004adad1
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004adad3
    MOV EAX,dword ptr [ECX + 0x4]       ; 004adad9
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 004adadc
    MOV EAX,dword ptr [ECX + 0x8]       ; 004adae2
    MOV dword ptr [EBP + 0xffffff62],EAX ; 004adae5
    LEA EAX,[EBP + 0x76]                ; 004adaeb
        ;   Label: LAB_004adaeb
    PUSH EAX                            ; 004adaee
    LEA EAX,[EBP + 0xffffff7a]          ; 004adaef
    PUSH EAX                            ; 004adaf5
    LEA EAX,[EBP + 0xffffff76]          ; 004adaf6
    PUSH EAX                            ; 004adafc
    LEA EAX,[EBP + 0xffffff72]          ; 004adafd
    PUSH EAX                            ; 004adb03
    PUSH 0x62522e                       ; 004adb04 | = "%f,%f,%f%n"
    LEA EAX,[EBP + 0xfffffaf2]          ; 004adb09
    PUSH EAX                            ; 004adb0f
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004adb10
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 004adb15
    JMP 0x004ad9bf                      ; 004adb18
        ;   XREF to: 004ad9bf (UNCONDITIONAL_JUMP)  ; LAB_004ad9bf
    PUSH 0x821ff8                       ; 004adb1d | g_CDemonActorClassInfo
        ;   Label: LAB_004adb1d
    MOV EDI,dword ptr [0x00822030]      ; 004adb22 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 004adb28
    LEA EAX,[EBP + 0xfffffaf2]          ; 004adb29
    PUSH EAX                            ; 004adb2f
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004adb30
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004adb35
    MOV ESI,EAX                         ; 004adb38
    TEST EAX,EAX                        ; 004adb3a
    JZ 0x004aaceb                       ; 004adb3c
        ;   XREF to: 004aaceb (CONDITIONAL_JUMP)  ; LAB_004aaceb
    CMP EAX,dword ptr [0x0065d95c]      ; 004adb42 | g_ActorNameSentinel
    JNZ 0x004adb54                      ; 004adb48
        ;   XREF to: 004adb54 (CONDITIONAL_JUMP)  ; LAB_004adb54
    XOR ECX,ECX                         ; 004adb4a
    MOV dword ptr [EBP + -0x62],ECX     ; 004adb4c
    JMP 0x004ad9c9                      ; 004adb4f
        ;   XREF to: 004ad9c9 (UNCONDITIONAL_JUMP)  ; LAB_004ad9c9
    LEA ECX,[EAX + 0x20]                ; 004adb54
        ;   Label: LAB_004adb54
    LEA EAX,[EBP + 0xffffff72]          ; 004adb57
    CMP EAX,ECX                         ; 004adb5d
    JZ 0x004adb7b                       ; 004adb5f
        ;   XREF to: 004adb7b (CONDITIONAL_JUMP)  ; LAB_004adb7b
    MOV EAX,dword ptr [ECX]             ; 004adb61
    MOV dword ptr [EBP + 0xffffff72],EAX ; 004adb63
    MOV EAX,dword ptr [ECX + 0x4]       ; 004adb69
    MOV dword ptr [EBP + 0xffffff76],EAX ; 004adb6c
    MOV EAX,dword ptr [ECX + 0x8]       ; 004adb72
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 004adb75
    LEA EAX,[EBP + 0xffffff5a]          ; 004adb7b
        ;   Label: LAB_004adb7b
    LEA ECX,[ESI + 0x30]                ; 004adb81
    CMP EAX,ECX                         ; 004adb84
    JZ 0x004adba2                       ; 004adb86
        ;   XREF to: 004adba2 (CONDITIONAL_JUMP)  ; LAB_004adba2
    MOV EAX,dword ptr [ECX]             ; 004adb88
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004adb8a
    MOV EAX,dword ptr [ECX + 0x4]       ; 004adb90
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 004adb93
    MOV EAX,dword ptr [ECX + 0x8]       ; 004adb99
    MOV dword ptr [EBP + 0xffffff62],EAX ; 004adb9c
    LEA EDI,[EBP + 0xfffffaf2]          ; 004adba2
        ;   Label: LAB_004adba2
    SUB ECX,ECX                         ; 004adba8
    DEC ECX                             ; 004adbaa
    XOR EAX,EAX                         ; 004adbab
    SCASB.REPNE ES:EDI                  ; 004adbad
    NOT ECX                             ; 004adbaf
    DEC ECX                             ; 004adbb1
    MOV dword ptr [EBP + 0x76],ECX      ; 004adbb2
    JMP 0x004ad9c9                      ; 004adbb5
        ;   XREF to: 004ad9c9 (UNCONDITIONAL_JUMP)  ; LAB_004ad9c9
    PUSH 0x625239                       ; 004adbba | = "Error parsing warpTo command parms"
        ;   Label: LAB_004adbba
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004adbbf
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004adbc4
    LEA ESP,[EBP + 0x7e]                ; 004adbc7
    POP EBP                             ; 004adbca
    POP EDI                             ; 004adbcb
    POP ESI                             ; 004adbcc
    POP EBX                             ; 004adbcd
    RET                                 ; 004adbce
    PUSH EBX                            ; 004adbcf
        ;   Label: LAB_004adbcf
    PUSH 0x62525c                       ; 004adbd0 | = "Unknown meta-function starting at %s"
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004adbd5
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x8                         ; 004adbda
    LEA ESP,[EBP + 0x7e]                ; 004adbdd
    POP EBP                             ; 004adbe0
    POP EDI                             ; 004adbe1
    POP ESI                             ; 004adbe2
    POP EBX                             ; 004adbe3
    RET                                 ; 004adbe4
    MOV dword ptr [EBP + -0x5e],EAX     ; 004adbe5
        ;   Label: LAB_004adbe5
    CMP byte ptr [EAX],0x0              ; 004adbe8
    JZ 0x004aace6                       ; 004adbeb
        ;   XREF to: 004aace6 (CONDITIONAL_JUMP)  ; LAB_004aace6
    PUSH 0x625281                       ; 004adbf1 | = "Extra characters found"
    CALL core_event.cpp_formatEventError_FUN_004aa2a0 ; 004adbf6
        ;   XREF to: 004aa2a0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_004aa2a0(char * format)
    ADD ESP,0x4                         ; 004adbfb
    LEA ESP,[EBP + 0x7e]                ; 004adbfe
    POP EBP                             ; 004adc01
    POP EDI                             ; 004adc02
    POP ESI                             ; 004adc03
    POP EBX                             ; 004adc04
    RET                                 ; 004adc05

