; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,float *time_remaining)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   time_remaining
; Local Variables:
; undefined4       Stack[-0x3fb8]:4  local_3fb8
; undefined4       Stack[-0x3fb4]:4  local_3fb4
; undefined4       Stack[-0x3fb0]:4  local_3fb0
; undefined4       Stack[-0x3fac]:4  local_3fac
; undefined8       Stack[-0x3fa8]:8  local_3fa8
; undefined8       Stack[-0x3fa0]:8  local_3fa0
; undefined8       Stack[-0x3f98]:8  local_3f98
; undefined8       Stack[-0x3f90]:8  local_3f90
; undefined8       Stack[-0x3f88]:8  local_3f88
; undefined4       Stack[-0x3f80]:4  local_3f80
; undefined4       Stack[-0x3f7c]:4  local_3f7c
; undefined4       Stack[-0x3f78]:4  local_3f78
; undefined4       Stack[-0x3f74]:4  local_3f74
; undefined4       Stack[-0x3f70]:4  local_3f70
; undefined1       Stack[-0x3f6c]:1  local_3f6c
; undefined1       Stack[-0x3d6c]:1  local_3d6c
; undefined1       Stack[-0x3b6c]:1  local_3b6c
; undefined1       Stack[-0x3978]:1  local_3978
; undefined1       Stack[-0x3784]:1  local_3784
; undefined1       Stack[-0x3658]:1  local_3658
; undefined1       Stack[-0x352c]:1  local_352c
; undefined1       Stack[-0x3400]:1  local_3400
; undefined1       Stack[-0x32d4]:1  local_32d4
; undefined1       Stack[-0x320c]:1  local_320c
; undefined1       Stack[-0x3144]:1  local_3144
; undefined1       Stack[-0x307c]:1  local_307c
; undefined1       Stack[-0x2fb4]:1  local_2fb4
; undefined1       Stack[-0x2eec]:1  local_2eec
; undefined1       Stack[-0x2e24]:1  local_2e24
; undefined1       Stack[-0x2d5c]:1  local_2d5c
; undefined1       Stack[-0x2c94]:1  local_2c94
; undefined1       Stack[-0x2bcc]:1  local_2bcc
; undefined1       Stack[-0x2b04]:1  local_2b04
; undefined1       Stack[-0x2a3c]:1  local_2a3c
; undefined1       Stack[-0x2974]:1  local_2974
; undefined1       Stack[-0x28ac]:1  local_28ac
; undefined1       Stack[-0x27e4]:1  local_27e4
; undefined1       Stack[-0x271c]:1  local_271c
; undefined1       Stack[-0x2654]:1  local_2654
; undefined1       Stack[-0x258c]:1  local_258c
; undefined1       Stack[-0x24c4]:1  local_24c4
; undefined1       Stack[-0x23fc]:1  local_23fc
; undefined1       Stack[-0x2334]:1  local_2334
; undefined1       Stack[-0x226c]:1  local_226c
; undefined1       Stack[-0x21a4]:1  local_21a4
; undefined1       Stack[-0x20dc]:1  local_20dc
; undefined1       Stack[-0x2014]:1  local_2014
; undefined1       Stack[-0x1f4c]:1  local_1f4c
; undefined1       Stack[-0x1e84]:1  local_1e84
; undefined1       Stack[-0x1dbc]:1  local_1dbc
; undefined1       Stack[-0x1cf4]:1  local_1cf4
; undefined1       Stack[-0x1c2c]:1  local_1c2c
; undefined1       Stack[-0x1b64]:1  local_1b64
; undefined1       Stack[-0x1a9c]:1  local_1a9c
; undefined1       Stack[-0x19d4]:1  local_19d4
; undefined1       Stack[-0x190c]:1  local_190c
; undefined1       Stack[-0x1844]:1  local_1844
; undefined1       Stack[-0x177c]:1  local_177c
; undefined1       Stack[-0x16b4]:1  local_16b4
; undefined1       Stack[-0x15ec]:1  local_15ec
; undefined1       Stack[-0x1524]:1  local_1524
; undefined1       Stack[-0x145c]:1  local_145c
; undefined1       Stack[-0x1394]:1  local_1394
; undefined1       Stack[-0x12cc]:1  local_12cc
; undefined1       Stack[-0x1204]:1  local_1204
; undefined1       Stack[-0x113c]:1  local_113c
; undefined1       Stack[-0x1074]:1  local_1074
; undefined1       Stack[-0xfac]:1  local_fac
; undefined1       Stack[-0xee4]:1  local_ee4
; undefined1       Stack[-0xe1c]:1  local_e1c
; undefined1       Stack[-0xd54]:1  local_d54
; undefined1       Stack[-0xd53]:1  local_d53
; undefined1       Stack[-0xc8c]:1  local_c8c
; undefined1       Stack[-0xc14]:1  local_c14
; undefined1       Stack[-0xc13]:1  local_c13
; undefined1       Stack[-0xbb0]:1  local_bb0
; undefined1       Stack[-0xb4c]:1  local_b4c
; undefined1       Stack[-0xae8]:1  local_ae8
; undefined1       Stack[-0xa84]:1  local_a84
; undefined1       Stack[-0xa20]:1  local_a20
; undefined1       Stack[-0x9bc]:1  local_9bc
; undefined1       Stack[-0x958]:1  local_958
; undefined1       Stack[-0x8f4]:1  local_8f4
; undefined1       Stack[-0x890]:1  local_890
; undefined1       Stack[-0x82c]:1  local_82c
; undefined1       Stack[-0x7c8]:1  local_7c8
; undefined1       Stack[-0x764]:1  local_764
; undefined1       Stack[-0x700]:1  local_700
; undefined1       Stack[-0x69c]:1  local_69c
; undefined1       Stack[-0x638]:1  local_638
; undefined1       Stack[-0x5d4]:1  local_5d4
; undefined1       Stack[-0x570]:1  local_570
; undefined1       Stack[-0x50c]:1  local_50c
; undefined1       Stack[-0x4a8]:1  local_4a8
; undefined1       Stack[-0x444]:1  local_444
; undefined1       Stack[-0x3e0]:1  local_3e0
; undefined1       Stack[-0x37c]:1  local_37c
; undefined1       Stack[-0x318]:1  local_318
; undefined1       Stack[-0x2b4]:1  local_2b4
; undefined1       Stack[-0x250]:1  local_250
; undefined1       Stack[-0x1ec]:1  local_1ec
; undefined1       Stack[-0x1eb]:1  local_1eb
; undefined1       Stack[-0x188]:1  local_188
; undefined1       Stack[-0x160]:1  local_160
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x150]:1  local_150
; undefined1       Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x148]:1  local_148
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined1       Stack[-0x100]:1  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
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
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_script.cpp_CScript_executeInitSection_FUN_0055a6c0 at 0055a736
;   core_script.cpp_CScript_process_FUN_00559960 at 00559a11
;   core_script.cpp_CScript_skipCinematic_FUN_005602e0 at 0056033d
;   core_script.cpp_CScript_validateSyntax_FUN_0055a4b0 at 0055a4f5
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00641b91
;   TerminatedCString s_CScript_step_Invalid_ins_00641ba4
;   TerminatedCString s_no_error_message_provide_00641c3e
;   undefined4 s_no_error_message_provided)_00641c3f
;   undefined4 s_o_error_message_provided)_00641c40
;   undefined4 s_error_message_provided)_00641c41
;   char s_EmptyChar_00641c5a = \x00
;   TerminatedCString s_Invalid_label_s_on_line_00641c5b
;   TerminatedCString s_core_script_cpp_00641c76
;   TerminatedCString s_Internal_script_error_ch_00641c89
;   TerminatedCString s_Duplicate_label_s_on_lin_00641cbd
;   char s_EmptyChar_00641ce3 = \x00
;   TerminatedCString s_syntaxCheckOn_00641ce4
;   char s_EmptyChar_00641cf2 = \x00
;   TerminatedCString s_syntaxCheckOff_00641cf3
;   ... and 326 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CVector_ctor_FUN_00410340
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_bodypart.cpp_subtractVector_FUN_0041b510
;   core_bugs.cpp_FUN_00427b70
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
;   core_charactr.cpp_CCharacter_initGesture_FUN_0042d390
;   core_charactr.cpp_CCharacter_setLookAtTarget_FUN_0042ddd0
;   core_enemy.cpp_CEnemy_setVictim_FUN_004a9ef0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   ... and 62 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a810
        ;   Label: core_script.cpp_CScript_step_FUN_0055a810
    PUSH ESI                            ; 0055a811
    PUSH EDI                            ; 0055a812
    PUSH EBP                            ; 0055a813
    MOV EBP,ESP                         ; 0055a814
    SUB ESP,0x3f98                      ; 0055a816
    AND ESP,0xfffffff8                  ; 0055a81c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055a81f
    MOV EDX,dword ptr [EBX + 0x48]      ; 0055a822
    TEST EDX,EDX                        ; 0055a825
    JL 0x0055a82e                       ; 0055a827
        ;   XREF to: 0055a82e (CONDITIONAL_JUMP)  ; LAB_0055a82e
    CMP EDX,dword ptr [EBX + 0x30]      ; 0055a829
    JL 0x0055a851                       ; 0055a82c
        ;   XREF to: 0055a851 (CONDITIONAL_JUMP)  ; LAB_0055a851
    MOV ESI,0x641b91                    ; 0055a82e | = "..\\core\\script.cpp"
        ;   Label: LAB_0055a82e
    MOV EDI,0x46d                       ; 0055a833
    PUSH 0x641ba4                       ; 0055a838 | = "CScript::step - Invalid instruction p..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0055a83d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0055a843 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a849
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0055a84e
    MOV ESI,0x641c3e                    ; 0055a851 | = "(no error message provided)"
        ;   Label: LAB_0055a851
    MOV EDI,0x310eca0                   ; 0055a856 | g_ScriptErrorBuffer
    PUSH EDI                            ; 0055a85b | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055a85c | = "(no error message provided)" | s_o_error_message_provided)_00641c40
        ;   Label: LAB_0055a85c
    MOV byte ptr [EDI],AL               ; 0055a85e | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055a860
    JZ 0x0055a874                       ; 0055a862
        ;   XREF to: 0055a874 (CONDITIONAL_JUMP)  ; LAB_0055a874
    MOV AL,byte ptr [ESI + 0x1]         ; 0055a864 | s_no_error_message_provided)_00641c3f | s_error_message_provided)_00641c41
    ADD ESI,0x2                         ; 0055a867
    MOV byte ptr [EDI + 0x1],AL         ; 0055a86a | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055a86d
    CMP AL,0x0                          ; 0055a870
    JNZ 0x0055a85c                      ; 0055a872
        ;   XREF to: 0055a85c (CONDITIONAL_JUMP)  ; LAB_0055a85c
    POP EDI                             ; 0055a874
        ;   Label: LAB_0055a874
    MOV EAX,dword ptr [EBX + 0x48]      ; 0055a875
    MOV EDX,dword ptr [EBX + 0x34]      ; 0055a878
    MOV ESI,dword ptr [EDX + EAX*0x8 + 0x4] ; 0055a87b
    MOV EAX,dword ptr [EDX + EAX*0x8]   ; 0055a87f
    MOV dword ptr [ESP + 0x3e84],EAX    ; 0055a882
    MOV EAX,dword ptr [EBX + 0x48]      ; 0055a889
    MOV dword ptr [ESP + 0x3e98],EAX    ; 0055a88c
    MOV dword ptr [ESP + 0x3e94],0x1    ; 0055a893
    MOV EAX,dword ptr [ESP + 0x3e98]    ; 0055a89e
    INC EAX                             ; 0055a8a5
    MOV dword ptr [EBX + 0x48],EAX      ; 0055a8a6
    MOV AH,byte ptr [ESI]               ; 0055a8a9
    CMP AH,0x7b                         ; 0055a8ab
    JNZ 0x0055a916                      ; 0055a8ae
        ;   XREF to: 0055a916 (CONDITIONAL_JUMP)  ; LAB_0055a916
    MOV dword ptr [ESP + 0x3e8c],0x641c5a ; 0055a8b0 | s_EmptyChar_00641c5a
        ;   Label: LAB_0055a8b0
    CMP dword ptr [0x0310ec9c],0x2      ; 0055a8bb | g_ScriptEventsEnabled
        ;   Label: LAB_0055a8bb
    JZ 0x0055a8d4                       ; 0055a8c2
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055a8c4
    CMP byte ptr [EAX],0x0              ; 0055a8cb | s_EmptyChar_00641c5a | s_EmptyChar_00641ce3 | s_EmptyChar_00642527
    JNZ 0x0055fe73                      ; 0055a8ce
        ;   XREF to: 0055fe73 (CONDITIONAL_JUMP)  ; LAB_0055fe73
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 0055a8d4
        ;   Label: LAB_0055a8d4
    CMP EAX,0x1                         ; 0055a8db
    JNZ 0x0055fed4                      ; 0055a8de
        ;   XREF to: 0055fed4 (CONDITIONAL_JUMP)  ; LAB_0055fed4
    MOV dword ptr [EBX + 0x50],0xbf800000 ; 0055a8e4
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055a8eb | g_ScriptEventsEnabled
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 0055a8f1
    TEST ECX,ECX                        ; 0055a8f8
    JNZ 0x0055a908                      ; 0055a8fa
        ;   XREF to: 0055a908 (CONDITIONAL_JUMP)  ; LAB_0055a908
    MOV ESI,dword ptr [EBX + 0x30]      ; 0055a8fc
    CMP ESI,dword ptr [EBX + 0x48]      ; 0055a8ff
    JLE 0x0055fea8                      ; 0055a902
        ;   XREF to: 0055fea8 (CONDITIONAL_JUMP)  ; LAB_0055fea8
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 0055a908
        ;   Label: LAB_0055a908
    MOV ESP,EBP                         ; 0055a90f
    POP EBP                             ; 0055a911
    POP EDI                             ; 0055a912
    POP ESI                             ; 0055a913
    POP EBX                             ; 0055a914
    RET                                 ; 0055a915
    CMP AH,0x7d                         ; 0055a916
        ;   Label: LAB_0055a916
    JZ 0x0055a8b0                       ; 0055a919
        ;   XREF to: 0055a8b0 (CONDITIONAL_JUMP)  ; LAB_0055a8b0
    CMP AH,0x3a                         ; 0055a91b
    JNZ 0x0055aa2f                      ; 0055a91e
        ;   XREF to: 0055aa2f (CONDITIONAL_JUMP)  ; LAB_0055aa2f
    INC ESI                             ; 0055a924
    PUSH ESI                            ; 0055a925
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055a926
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV ESI,dword ptr [0x0310ec9c]      ; 0055a92b | g_ScriptEventsEnabled
    ADD ESP,0x4                         ; 0055a931
    MOV EDX,EAX                         ; 0055a934
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055a936
    TEST ESI,ESI                        ; 0055a93d
    JZ 0x0055a9cc                       ; 0055a93f
        ;   XREF to: 0055a9cc (CONDITIONAL_JUMP)  ; LAB_0055a9cc
    CMP byte ptr [EAX],0x0              ; 0055a945
    JZ 0x0055a965                       ; 0055a948
        ;   XREF to: 0055a965 (CONDITIONAL_JUMP)  ; LAB_0055a965
    MOV DL,byte ptr [EAX]               ; 0055a94a
        ;   Label: LAB_0055a94a
    INC DL                              ; 0055a94c
    AND EDX,0xff                        ; 0055a94e
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0055a954 | g_CharacterClassificationTable
    JZ 0x0055a9a5                       ; 0055a95b
        ;   XREF to: 0055a9a5 (CONDITIONAL_JUMP)  ; LAB_0055a9a5
    MOV DL,byte ptr [EAX + 0x1]         ; 0055a95d
        ;   Label: LAB_0055a95d
    INC EAX                             ; 0055a960
    TEST DL,DL                          ; 0055a961
    JNZ 0x0055a94a                      ; 0055a963
        ;   XREF to: 0055a94a (CONDITIONAL_JUMP)  ; LAB_0055a94a
    CMP byte ptr [EAX],0x0              ; 0055a965
        ;   Label: LAB_0055a965
    JZ 0x0055a9ac                       ; 0055a968
        ;   XREF to: 0055a9ac (CONDITIONAL_JUMP)  ; LAB_0055a9ac
    MOV ESI,dword ptr [ESP + 0x3e84]    ; 0055a96a
    PUSH ESI                            ; 0055a971
    MOV EDI,dword ptr [ESP + 0x3e90]    ; 0055a972
    PUSH EDI                            ; 0055a979
    PUSH 0x641c5b                       ; 0055a97a | = "Invalid label \"%s\" on line"
    PUSH 0x310eca0                      ; 0055a97f | g_ScriptErrorBuffer
        ;   Label: LAB_0055a97f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055a984
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055a989
    MOV dword ptr [ESP + 0x3e94],0xffffffff ; 0055a98c
        ;   Label: LAB_0055a98c
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 0055a997
    MOV ESP,EBP                         ; 0055a99e
    POP EBP                             ; 0055a9a0
    POP EDI                             ; 0055a9a1
    POP ESI                             ; 0055a9a2
    POP EBX                             ; 0055a9a3
    RET                                 ; 0055a9a4
    CMP byte ptr [EAX],0x5f             ; 0055a9a5
        ;   Label: LAB_0055a9a5
    JNZ 0x0055a965                      ; 0055a9a8
        ;   XREF to: 0055a965 (CONDITIONAL_JUMP)  ; LAB_0055a965
    JMP 0x0055a95d                      ; 0055a9aa
        ;   XREF to: 0055a95d (UNCONDITIONAL_JUMP)  ; LAB_0055a95d
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055a9ac
        ;   Label: LAB_0055a9ac
    PUSH EAX                            ; 0055a9b3
    PUSH EBX                            ; 0055a9b4
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00560160 ; 0055a9b5
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00560160(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0055a9ba
    MOV ESI,EAX                         ; 0055a9bd
    TEST EAX,EAX                        ; 0055a9bf
    JL 0x0055a9dc                       ; 0055a9c1
        ;   XREF to: 0055a9dc (CONDITIONAL_JUMP)  ; LAB_0055a9dc
    CMP ESI,dword ptr [ESP + 0x3e98]    ; 0055a9c3
        ;   Label: LAB_0055a9c3
    JNZ 0x0055aa01                      ; 0055a9ca
        ;   XREF to: 0055aa01 (CONDITIONAL_JUMP)  ; LAB_0055aa01
    MOV dword ptr [ESP + 0x3e8c],0x641ce3 ; 0055a9cc | s_EmptyChar_00641ce3
        ;   Label: LAB_0055a9cc
    JMP 0x0055a8bb                      ; 0055a9d7
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,0x641c76                    ; 0055a9dc | = "..\\core\\script.cpp"
        ;   Label: LAB_0055a9dc
    MOV ECX,0x49f                       ; 0055a9e1
    PUSH 0x641c89                       ; 0055a9e6 | = "Internal script error checking for du..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0055a9eb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0055a9f1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a9f7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0055a9fc
    JMP 0x0055a9c3                      ; 0055a9ff
        ;   XREF to: 0055a9c3 (UNCONDITIONAL_JUMP)  ; LAB_0055a9c3
    MOV EAX,dword ptr [EBX + 0x34]      ; 0055aa01
        ;   Label: LAB_0055aa01
    MOV EDX,dword ptr [EAX + ESI*0x8]   ; 0055aa04
    PUSH EDX                            ; 0055aa07
    MOV ECX,dword ptr [ESP + 0x3e88]    ; 0055aa08
    PUSH ECX                            ; 0055aa0f
    MOV EBX,dword ptr [ESP + 0x3e94]    ; 0055aa10
    PUSH EBX                            ; 0055aa17
    PUSH 0x641cbd                       ; 0055aa18 | = "Duplicate label %s on lines %d and %d"
    PUSH 0x310eca0                      ; 0055aa1d | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055aa22
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0055aa27
    JMP 0x0055a98c                      ; 0055aa2a
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0xd                            ; 0055aa2f
        ;   Label: LAB_0055aa2f
    PUSH 0x641ce4                       ; 0055aa31 | = "syntaxCheckOn"
    PUSH ESI                            ; 0055aa36
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aa37
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aa3c
    TEST EAX,EAX                        ; 0055aa3f
    JNZ 0x0055aa5a                      ; 0055aa41
        ;   XREF to: 0055aa5a (CONDITIONAL_JUMP)  ; LAB_0055aa5a
    MOV AL,byte ptr [ESI + 0xd]         ; 0055aa43
    INC AL                              ; 0055aa46
    AND EAX,0xff                        ; 0055aa48
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055aa4d | g_CharacterClassificationTable
    JZ 0x0055bb1b                       ; 0055aa54
        ;   XREF to: 0055bb1b (CONDITIONAL_JUMP)  ; LAB_0055bb1b
    PUSH 0xe                            ; 0055aa5a
        ;   Label: LAB_0055aa5a
    PUSH 0x641cf3                       ; 0055aa5c | = "syntaxCheckOff"
    PUSH ESI                            ; 0055aa61
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aa62
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aa67
    TEST EAX,EAX                        ; 0055aa6a
    JNZ 0x0055aa85                      ; 0055aa6c
        ;   XREF to: 0055aa85 (CONDITIONAL_JUMP)  ; LAB_0055aa85
    MOV AL,byte ptr [ESI + 0xe]         ; 0055aa6e
    INC AL                              ; 0055aa71
    AND EAX,0xff                        ; 0055aa73
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055aa78 | g_CharacterClassificationTable
    JZ 0x0055bb3e                       ; 0055aa7f
        ;   XREF to: 0055bb3e (CONDITIONAL_JUMP)  ; LAB_0055bb3e
    CMP dword ptr [0x0310ec9c],0x2      ; 0055aa85 | g_ScriptEventsEnabled
        ;   Label: LAB_0055aa85
    JZ 0x0055a8bb                       ; 0055aa8c
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x12                           ; 0055aa92
    PUSH 0x641d03                       ; 0055aa94 | = "advanceLightFilter"
    PUSH ESI                            ; 0055aa99
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aa9a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aa9f
    TEST EAX,EAX                        ; 0055aaa2
    JNZ 0x0055aabd                      ; 0055aaa4
        ;   XREF to: 0055aabd (CONDITIONAL_JUMP)  ; LAB_0055aabd
    MOV AL,byte ptr [ESI + 0x12]        ; 0055aaa6
    INC AL                              ; 0055aaa9
    AND EAX,0xff                        ; 0055aaab
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055aab0 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055aab7
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xf                            ; 0055aabd
        ;   Label: LAB_0055aabd
    PUSH 0x641d16                       ; 0055aabf | = "createExplosion"
    PUSH ESI                            ; 0055aac4
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aac5
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aaca
    TEST EAX,EAX                        ; 0055aacd
    JNZ 0x0055aae8                      ; 0055aacf
        ;   XREF to: 0055aae8 (CONDITIONAL_JUMP)  ; LAB_0055aae8
    MOV AL,byte ptr [ESI + 0xf]         ; 0055aad1
    INC AL                              ; 0055aad4
    AND EAX,0xff                        ; 0055aad6
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055aadb | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055aae2
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xb                            ; 0055aae8
        ;   Label: LAB_0055aae8
    PUSH 0x641d26                       ; 0055aaea | = "deleteActor"
    PUSH ESI                            ; 0055aaef
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aaf0
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aaf5
    TEST EAX,EAX                        ; 0055aaf8
    JNZ 0x0055ab13                      ; 0055aafa
        ;   XREF to: 0055ab13 (CONDITIONAL_JUMP)  ; LAB_0055ab13
    MOV AL,byte ptr [ESI + 0xb]         ; 0055aafc
    INC AL                              ; 0055aaff
    AND EAX,0xff                        ; 0055ab01
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ab06 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ab0d
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xd                            ; 0055ab13
        ;   Label: LAB_0055ab13
    PUSH 0x641d32                       ; 0055ab15 | = "displayBitmap"
    PUSH ESI                            ; 0055ab1a
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ab1b
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ab20
    TEST EAX,EAX                        ; 0055ab23
    JNZ 0x0055ab3e                      ; 0055ab25
        ;   XREF to: 0055ab3e (CONDITIONAL_JUMP)  ; LAB_0055ab3e
    MOV AL,byte ptr [ESI + 0xd]         ; 0055ab27
    INC AL                              ; 0055ab2a
    AND EAX,0xff                        ; 0055ab2c
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ab31 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ab38
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xd                            ; 0055ab3e
        ;   Label: LAB_0055ab3e
    PUSH 0x641d40                       ; 0055ab40 | = "hurtCharacter"
    PUSH ESI                            ; 0055ab45
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ab46
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ab4b
    TEST EAX,EAX                        ; 0055ab4e
    JNZ 0x0055ab69                      ; 0055ab50
        ;   XREF to: 0055ab69 (CONDITIONAL_JUMP)  ; LAB_0055ab69
    MOV AL,byte ptr [ESI + 0xd]         ; 0055ab52
    INC AL                              ; 0055ab55
    AND EAX,0xff                        ; 0055ab57
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ab5c | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ab63
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xa                            ; 0055ab69
        ;   Label: LAB_0055ab69
    PUSH 0x641d4e                       ; 0055ab6b | = "incCounter"
    PUSH ESI                            ; 0055ab70
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ab71
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ab76
    TEST EAX,EAX                        ; 0055ab79
    JNZ 0x0055ab94                      ; 0055ab7b
        ;   XREF to: 0055ab94 (CONDITIONAL_JUMP)  ; LAB_0055ab94
    MOV AL,byte ptr [ESI + 0xa]         ; 0055ab7d
    INC AL                              ; 0055ab80
    AND EAX,0xff                        ; 0055ab82
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ab87 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ab8e
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x7                            ; 0055ab94
        ;   Label: LAB_0055ab94
    PUSH 0x641d59                       ; 0055ab96 | = "fadeSfx"
    PUSH ESI                            ; 0055ab9b
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ab9c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aba1
    TEST EAX,EAX                        ; 0055aba4
    JNZ 0x0055abbf                      ; 0055aba6
        ;   XREF to: 0055abbf (CONDITIONAL_JUMP)  ; LAB_0055abbf
    MOV AL,byte ptr [ESI + 0x7]         ; 0055aba8
    INC AL                              ; 0055abab
    AND EAX,0xff                        ; 0055abad
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055abb2 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055abb9
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x10                           ; 0055abbf
        ;   Label: LAB_0055abbf
    PUSH 0x641d61                       ; 0055abc1 | = "fadeAmbientSound"
    PUSH ESI                            ; 0055abc6
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055abc7
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055abcc
    TEST EAX,EAX                        ; 0055abcf
    JNZ 0x0055abea                      ; 0055abd1
        ;   XREF to: 0055abea (CONDITIONAL_JUMP)  ; LAB_0055abea
    MOV AL,byte ptr [ESI + 0x10]        ; 0055abd3
    INC AL                              ; 0055abd6
    AND EAX,0xff                        ; 0055abd8
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055abdd | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055abe4
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x6                            ; 0055abea
        ;   Label: LAB_0055abea
    PUSH 0x641d72                       ; 0055abec | = "flagOn"
    PUSH ESI                            ; 0055abf1
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055abf2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055abf7
    TEST EAX,EAX                        ; 0055abfa
    JNZ 0x0055ac15                      ; 0055abfc
        ;   XREF to: 0055ac15 (CONDITIONAL_JUMP)  ; LAB_0055ac15
    MOV AL,byte ptr [ESI + 0x6]         ; 0055abfe
    INC AL                              ; 0055ac01
    AND EAX,0xff                        ; 0055ac03
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ac08 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ac0f
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x7                            ; 0055ac15
        ;   Label: LAB_0055ac15
    PUSH 0x641d79                       ; 0055ac17 | = "flagOff"
    PUSH ESI                            ; 0055ac1c
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ac1d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ac22
    TEST EAX,EAX                        ; 0055ac25
    JNZ 0x0055ac40                      ; 0055ac27
        ;   XREF to: 0055ac40 (CONDITIONAL_JUMP)  ; LAB_0055ac40
    MOV AL,byte ptr [ESI + 0x7]         ; 0055ac29
    INC AL                              ; 0055ac2c
    AND EAX,0xff                        ; 0055ac2e
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ac33 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ac3a
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xa                            ; 0055ac40
        ;   Label: LAB_0055ac40
    PUSH 0x641d81                       ; 0055ac42 | = "gameFlagOn"
    PUSH ESI                            ; 0055ac47
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ac48
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ac4d
    TEST EAX,EAX                        ; 0055ac50
    JNZ 0x0055ac6b                      ; 0055ac52
        ;   XREF to: 0055ac6b (CONDITIONAL_JUMP)  ; LAB_0055ac6b
    MOV AL,byte ptr [ESI + 0xa]         ; 0055ac54
    INC AL                              ; 0055ac57
    AND EAX,0xff                        ; 0055ac59
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ac5e | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ac65
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xb                            ; 0055ac6b
        ;   Label: LAB_0055ac6b
    PUSH 0x641d8c                       ; 0055ac6d | = "gameFlagOff"
    PUSH ESI                            ; 0055ac72
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ac73
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ac78
    TEST EAX,EAX                        ; 0055ac7b
    JNZ 0x0055ac96                      ; 0055ac7d
        ;   XREF to: 0055ac96 (CONDITIONAL_JUMP)  ; LAB_0055ac96
    MOV AL,byte ptr [ESI + 0xb]         ; 0055ac7f
    INC AL                              ; 0055ac82
    AND EAX,0xff                        ; 0055ac84
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ac89 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ac90
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xd                            ; 0055ac96
        ;   Label: LAB_0055ac96
    PUSH 0x641d98                       ; 0055ac98 | = "killCharacter"
    PUSH ESI                            ; 0055ac9d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ac9e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aca3
    TEST EAX,EAX                        ; 0055aca6
    JNZ 0x0055acc1                      ; 0055aca8
        ;   XREF to: 0055acc1 (CONDITIONAL_JUMP)  ; LAB_0055acc1
    MOV AL,byte ptr [ESI + 0xd]         ; 0055acaa
    INC AL                              ; 0055acad
    AND EAX,0xff                        ; 0055acaf
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055acb4 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055acbb
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x8                            ; 0055acc1
        ;   Label: LAB_0055acc1
    PUSH 0x641da6                       ; 0055acc3 | = "killHero"
    PUSH ESI                            ; 0055acc8
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055acc9
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055acce
    TEST EAX,EAX                        ; 0055acd1
    JNZ 0x0055acec                      ; 0055acd3
        ;   XREF to: 0055acec (CONDITIONAL_JUMP)  ; LAB_0055acec
    MOV AL,byte ptr [ESI + 0x8]         ; 0055acd5
    INC AL                              ; 0055acd8
    AND EAX,0xff                        ; 0055acda
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055acdf | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ace6
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x7                            ; 0055acec
        ;   Label: LAB_0055acec
    PUSH 0x641daf                       ; 0055acee | = "killSfx"
    PUSH ESI                            ; 0055acf3
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055acf4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055acf9
    TEST EAX,EAX                        ; 0055acfc
    JNZ 0x0055ad17                      ; 0055acfe
        ;   XREF to: 0055ad17 (CONDITIONAL_JUMP)  ; LAB_0055ad17
    MOV AL,byte ptr [ESI + 0x7]         ; 0055ad00
    INC AL                              ; 0055ad03
    AND EAX,0xff                        ; 0055ad05
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ad0a | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ad11
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x9                            ; 0055ad17
        ;   Label: LAB_0055ad17
    PUSH 0x641db7                       ; 0055ad19 | = "lightning"
    PUSH ESI                            ; 0055ad1e
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ad1f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ad24
    TEST EAX,EAX                        ; 0055ad27
    JNZ 0x0055ad42                      ; 0055ad29
        ;   XREF to: 0055ad42 (CONDITIONAL_JUMP)  ; LAB_0055ad42
    MOV AL,byte ptr [ESI + 0x9]         ; 0055ad2b
    INC AL                              ; 0055ad2e
    AND EAX,0xff                        ; 0055ad30
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ad35 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ad3c
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x7                            ; 0055ad42
        ;   Label: LAB_0055ad42
    PUSH 0x641dc1                       ; 0055ad44 | = "playSfx"
    PUSH ESI                            ; 0055ad49
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ad4a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ad4f
    TEST EAX,EAX                        ; 0055ad52
    JNZ 0x0055ad6d                      ; 0055ad54
        ;   XREF to: 0055ad6d (CONDITIONAL_JUMP)  ; LAB_0055ad6d
    MOV AL,byte ptr [ESI + 0x7]         ; 0055ad56
    INC AL                              ; 0055ad59
    AND EAX,0xff                        ; 0055ad5b
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ad60 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ad67
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x10                           ; 0055ad6d
        ;   Label: LAB_0055ad6d
    PUSH 0x641dc9                       ; 0055ad6f | = "setCameraAmbient"
    PUSH ESI                            ; 0055ad74
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ad75
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ad7a
    TEST EAX,EAX                        ; 0055ad7d
    JNZ 0x0055ad98                      ; 0055ad7f
        ;   XREF to: 0055ad98 (CONDITIONAL_JUMP)  ; LAB_0055ad98
    MOV AL,byte ptr [ESI + 0x10]        ; 0055ad81
    INC AL                              ; 0055ad84
    AND EAX,0xff                        ; 0055ad86
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ad8b | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ad92
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xa                            ; 0055ad98
        ;   Label: LAB_0055ad98
    PUSH 0x641dda                       ; 0055ad9a | = "setCounter"
    PUSH ESI                            ; 0055ad9f
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ada0
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ada5
    TEST EAX,EAX                        ; 0055ada8
    JNZ 0x0055adc3                      ; 0055adaa
        ;   XREF to: 0055adc3 (CONDITIONAL_JUMP)  ; LAB_0055adc3
    MOV AL,byte ptr [ESI + 0xa]         ; 0055adac
    INC AL                              ; 0055adaf
    AND EAX,0xff                        ; 0055adb1
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055adb6 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055adbd
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xf                            ; 0055adc3
        ;   Label: LAB_0055adc3
    PUSH 0x641de5                       ; 0055adc5 | = "setGroupAmbient"
    PUSH ESI                            ; 0055adca
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055adcb
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055add0
    TEST EAX,EAX                        ; 0055add3
    JNZ 0x0055adee                      ; 0055add5
        ;   XREF to: 0055adee (CONDITIONAL_JUMP)  ; LAB_0055adee
    MOV AL,byte ptr [ESI + 0xf]         ; 0055add7
    INC AL                              ; 0055adda
    AND EAX,0xff                        ; 0055addc
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ade1 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ade8
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x13                           ; 0055adee
        ;   Label: LAB_0055adee
    PUSH 0x641df5                       ; 0055adf0 | = "setLightFilterFrame"
    PUSH ESI                            ; 0055adf5
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055adf6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055adfb
    TEST EAX,EAX                        ; 0055adfe
    JNZ 0x0055ae19                      ; 0055ae00
        ;   XREF to: 0055ae19 (CONDITIONAL_JUMP)  ; LAB_0055ae19
    MOV AL,byte ptr [ESI + 0x13]        ; 0055ae02
    INC AL                              ; 0055ae05
    AND EAX,0xff                        ; 0055ae07
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ae0c | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ae13
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xd                            ; 0055ae19
        ;   Label: LAB_0055ae19
    PUSH 0x641e09                       ; 0055ae1b | = "setLeverState"
    PUSH ESI                            ; 0055ae20
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ae21
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ae26
    TEST EAX,EAX                        ; 0055ae29
    JNZ 0x0055ae44                      ; 0055ae2b
        ;   XREF to: 0055ae44 (CONDITIONAL_JUMP)  ; LAB_0055ae44
    MOV AL,byte ptr [ESI + 0xd]         ; 0055ae2d
    INC AL                              ; 0055ae30
    AND EAX,0xff                        ; 0055ae32
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ae37 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ae3e
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xd                            ; 0055ae44
        ;   Label: LAB_0055ae44
    PUSH 0x641e17                       ; 0055ae46 | = "setModelState"
    PUSH ESI                            ; 0055ae4b
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ae4c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ae51
    TEST EAX,EAX                        ; 0055ae54
    JNZ 0x0055ae6f                      ; 0055ae56
        ;   XREF to: 0055ae6f (CONDITIONAL_JUMP)  ; LAB_0055ae6f
    MOV AL,byte ptr [ESI + 0xd]         ; 0055ae58
    INC AL                              ; 0055ae5b
    AND EAX,0xff                        ; 0055ae5d
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ae62 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ae69
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x8                            ; 0055ae6f
        ;   Label: LAB_0055ae6f
    PUSH 0x641e25                       ; 0055ae71 | = "setTimer"
    PUSH ESI                            ; 0055ae76
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ae77
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ae7c
    TEST EAX,EAX                        ; 0055ae7f
    JNZ 0x0055ae9a                      ; 0055ae81
        ;   XREF to: 0055ae9a (CONDITIONAL_JUMP)  ; LAB_0055ae9a
    MOV AL,byte ptr [ESI + 0x8]         ; 0055ae83
    INC AL                              ; 0055ae86
    AND EAX,0xff                        ; 0055ae88
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ae8d | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055ae94
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xa                            ; 0055ae9a
        ;   Label: LAB_0055ae9a
    PUSH 0x641e2e                       ; 0055ae9c | = "setWeather"
    PUSH ESI                            ; 0055aea1
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aea2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aea7
    TEST EAX,EAX                        ; 0055aeaa
    JNZ 0x0055aec5                      ; 0055aeac
        ;   XREF to: 0055aec5 (CONDITIONAL_JUMP)  ; LAB_0055aec5
    MOV AL,byte ptr [ESI + 0xa]         ; 0055aeae
    INC AL                              ; 0055aeb1
    AND EAX,0xff                        ; 0055aeb3
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055aeb8 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055aebf
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0xb                            ; 0055aec5
        ;   Label: LAB_0055aec5
    PUSH 0x641e39                       ; 0055aec7 | = "shakeScreen"
    PUSH ESI                            ; 0055aecc
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aecd
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aed2
    TEST EAX,EAX                        ; 0055aed5
    JNZ 0x0055aef0                      ; 0055aed7
        ;   XREF to: 0055aef0 (CONDITIONAL_JUMP)  ; LAB_0055aef0
    MOV AL,byte ptr [ESI + 0xb]         ; 0055aed9
    INC AL                              ; 0055aedc
    AND EAX,0xff                        ; 0055aede
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055aee3 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055aeea
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x11                           ; 0055aef0
        ;   Label: LAB_0055aef0
    PUSH 0x641e45                       ; 0055aef2 | = "slamModelToMotion"
    PUSH ESI                            ; 0055aef7
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055aef8
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055aefd
    TEST EAX,EAX                        ; 0055af00
    JNZ 0x0055af1b                      ; 0055af02
        ;   XREF to: 0055af1b (CONDITIONAL_JUMP)  ; LAB_0055af1b
    MOV AL,byte ptr [ESI + 0x11]        ; 0055af04
    INC AL                              ; 0055af07
    AND EAX,0xff                        ; 0055af09
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055af0e | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055af15
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x6                            ; 0055af1b
        ;   Label: LAB_0055af1b
    PUSH 0x641e57                       ; 0055af1d | = "warpTo"
    PUSH ESI                            ; 0055af22
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055af23
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055af28
    TEST EAX,EAX                        ; 0055af2b
    JNZ 0x0055af46                      ; 0055af2d
        ;   XREF to: 0055af46 (CONDITIONAL_JUMP)  ; LAB_0055af46
    MOV AL,byte ptr [ESI + 0x6]         ; 0055af2f
    INC AL                              ; 0055af32
    AND EAX,0xff                        ; 0055af34
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055af39 | g_CharacterClassificationTable
    JZ 0x0055bb61                       ; 0055af40
        ;   XREF to: 0055bb61 (CONDITIONAL_JUMP)  ; LAB_0055bb61
    PUSH 0x12                           ; 0055af46
        ;   Label: LAB_0055af46
    PUSH 0x641e5f                       ; 0055af48 | = "addItemToInventory"
    PUSH ESI                            ; 0055af4d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055af4e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055af53
    TEST EAX,EAX                        ; 0055af56
    JNZ 0x0055af71                      ; 0055af58
        ;   XREF to: 0055af71 (CONDITIONAL_JUMP)  ; LAB_0055af71
    MOV AL,byte ptr [ESI + 0x12]        ; 0055af5a
    INC AL                              ; 0055af5d
    AND EAX,0xff                        ; 0055af5f
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055af64 | g_CharacterClassificationTable
    JZ 0x0055bbc3                       ; 0055af6b
        ;   XREF to: 0055bbc3 (CONDITIONAL_JUMP)  ; LAB_0055bbc3
    PUSH 0xe                            ; 0055af71
        ;   Label: LAB_0055af71
    PUSH 0x641eb4                       ; 0055af73 | = "addLightFilter"
    PUSH ESI                            ; 0055af78
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055af79
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055af7e
    TEST EAX,EAX                        ; 0055af81
    JNZ 0x0055af9c                      ; 0055af83
        ;   XREF to: 0055af9c (CONDITIONAL_JUMP)  ; LAB_0055af9c
    MOV AL,byte ptr [ESI + 0xe]         ; 0055af85
    INC AL                              ; 0055af88
    AND EAX,0xff                        ; 0055af8a
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055af8f | g_CharacterClassificationTable
    JZ 0x0055bce5                       ; 0055af96
        ;   XREF to: 0055bce5 (CONDITIONAL_JUMP)  ; LAB_0055bce5
    PUSH 0x10                           ; 0055af9c
        ;   Label: LAB_0055af9c
    PUSH 0x641f3a                       ; 0055af9e | = "allowEnemyAttack"
    PUSH ESI                            ; 0055afa3
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055afa4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055afa9
    TEST EAX,EAX                        ; 0055afac
    JNZ 0x0055afc7                      ; 0055afae
        ;   XREF to: 0055afc7 (CONDITIONAL_JUMP)  ; LAB_0055afc7
    MOV AL,byte ptr [ESI + 0x10]        ; 0055afb0
    INC AL                              ; 0055afb3
    AND EAX,0xff                        ; 0055afb5
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055afba | g_CharacterClassificationTable
    JZ 0x0055be20                       ; 0055afc1
        ;   XREF to: 0055be20 (CONDITIONAL_JUMP)  ; LAB_0055be20
    PUSH 0x11                           ; 0055afc7
        ;   Label: LAB_0055afc7
    PUSH 0x641f4b                       ; 0055afc9 | = "allowHeroControls"
    PUSH ESI                            ; 0055afce
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055afcf
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055afd4
    TEST EAX,EAX                        ; 0055afd7
    JNZ 0x0055aff2                      ; 0055afd9
        ;   XREF to: 0055aff2 (CONDITIONAL_JUMP)  ; LAB_0055aff2
    MOV AL,byte ptr [ESI + 0x11]        ; 0055afdb
    INC AL                              ; 0055afde
    AND EAX,0xff                        ; 0055afe0
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055afe5 | g_CharacterClassificationTable
    JZ 0x0055be88                       ; 0055afec
        ;   XREF to: 0055be88 (CONDITIONAL_JUMP)  ; LAB_0055be88
    PUSH 0xf                            ; 0055aff2
        ;   Label: LAB_0055aff2
    PUSH 0x641f5d                       ; 0055aff4 | = "allowHeroDamage"
    PUSH ESI                            ; 0055aff9
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055affa
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055afff
    TEST EAX,EAX                        ; 0055b002
    JNZ 0x0055b01d                      ; 0055b004
        ;   XREF to: 0055b01d (CONDITIONAL_JUMP)  ; LAB_0055b01d
    MOV AL,byte ptr [ESI + 0xf]         ; 0055b006
    INC AL                              ; 0055b009
    AND EAX,0xff                        ; 0055b00b
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b010 | g_CharacterClassificationTable
    JZ 0x0055befe                       ; 0055b017
        ;   XREF to: 0055befe (CONDITIONAL_JUMP)  ; LAB_0055befe
    PUSH 0x15                           ; 0055b01d
        ;   Label: LAB_0055b01d
    PUSH 0x641f6d                       ; 0055b01f | = "attachActorToPlatform"
    PUSH ESI                            ; 0055b024
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b025
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b02a
    TEST EAX,EAX                        ; 0055b02d
    JNZ 0x0055b048                      ; 0055b02f
        ;   XREF to: 0055b048 (CONDITIONAL_JUMP)  ; LAB_0055b048
    MOV AL,byte ptr [ESI + 0x15]        ; 0055b031
    INC AL                              ; 0055b034
    AND EAX,0xff                        ; 0055b036
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b03b | g_CharacterClassificationTable
    JZ 0x0055bf66                       ; 0055b042
        ;   XREF to: 0055bf66 (CONDITIONAL_JUMP)  ; LAB_0055bf66
    PUSH 0xb                            ; 0055b048
        ;   Label: LAB_0055b048
    PUSH 0x641fc6                       ; 0055b04a | = "beginFadeIn"
    PUSH ESI                            ; 0055b04f
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b050
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b055
    TEST EAX,EAX                        ; 0055b058
    JNZ 0x0055b073                      ; 0055b05a
        ;   XREF to: 0055b073 (CONDITIONAL_JUMP)  ; LAB_0055b073
    MOV AL,byte ptr [ESI + 0xb]         ; 0055b05c
    INC AL                              ; 0055b05f
    AND EAX,0xff                        ; 0055b061
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b066 | g_CharacterClassificationTable
    JZ 0x0055c07f                       ; 0055b06d
        ;   XREF to: 0055c07f (CONDITIONAL_JUMP)  ; LAB_0055c07f
    PUSH 0xc                            ; 0055b073
        ;   Label: LAB_0055b073
    PUSH 0x641fd2                       ; 0055b075 | = "beginFadeOut"
    PUSH ESI                            ; 0055b07a
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b07b
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b080
    TEST EAX,EAX                        ; 0055b083
    JNZ 0x0055b09e                      ; 0055b085
        ;   XREF to: 0055b09e (CONDITIONAL_JUMP)  ; LAB_0055b09e
    MOV AL,byte ptr [ESI + 0xc]         ; 0055b087
    INC AL                              ; 0055b08a
    AND EAX,0xff                        ; 0055b08c
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b091 | g_CharacterClassificationTable
    JZ 0x0055c0b3                       ; 0055b098
        ;   XREF to: 0055c0b3 (CONDITIONAL_JUMP)  ; LAB_0055c0b3
    PUSH 0xa                            ; 0055b09e
        ;   Label: LAB_0055b09e
    PUSH 0x641fdf                       ; 0055b0a0 | = "breakPoint"
    PUSH ESI                            ; 0055b0a5
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b0a6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b0ab
    TEST EAX,EAX                        ; 0055b0ae
    JNZ 0x0055b0c9                      ; 0055b0b0
        ;   XREF to: 0055b0c9 (CONDITIONAL_JUMP)  ; LAB_0055b0c9
    MOV AL,byte ptr [ESI + 0xa]         ; 0055b0b2
    INC AL                              ; 0055b0b5
    AND EAX,0xff                        ; 0055b0b7
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b0bc | g_CharacterClassificationTable
    JZ 0x0055c0e8                       ; 0055b0c3
        ;   XREF to: 0055c0e8 (CONDITIONAL_JUMP)  ; LAB_0055c0e8
    PUSH 0x10                           ; 0055b0c9
        ;   Label: LAB_0055b0c9
    PUSH 0x64200f                       ; 0055b0cb | = "cancelCameraHold"
    PUSH ESI                            ; 0055b0d0
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b0d1
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b0d6
    TEST EAX,EAX                        ; 0055b0d9
    JNZ 0x0055b0f4                      ; 0055b0db
        ;   XREF to: 0055b0f4 (CONDITIONAL_JUMP)  ; LAB_0055b0f4
    MOV AL,byte ptr [ESI + 0x10]        ; 0055b0dd
    INC AL                              ; 0055b0e0
    AND EAX,0xff                        ; 0055b0e2
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b0e7 | g_CharacterClassificationTable
    JZ 0x0055c14e                       ; 0055b0ee
        ;   XREF to: 0055c14e (CONDITIONAL_JUMP)  ; LAB_0055c14e
    PUSH 0xc                            ; 0055b0f4
        ;   Label: LAB_0055b0f4
    PUSH 0x642020                       ; 0055b0f6 | = "cancelWalkTo"
    PUSH ESI                            ; 0055b0fb
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b0fc
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b101
    TEST EAX,EAX                        ; 0055b104
    JNZ 0x0055b11f                      ; 0055b106
        ;   XREF to: 0055b11f (CONDITIONAL_JUMP)  ; LAB_0055b11f
    MOV AL,byte ptr [ESI + 0xc]         ; 0055b108
    INC AL                              ; 0055b10b
    AND EAX,0xff                        ; 0055b10d
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b112 | g_CharacterClassificationTable
    JZ 0x0055c183                       ; 0055b119
        ;   XREF to: 0055c183 (CONDITIONAL_JUMP)  ; LAB_0055c183
    PUSH 0xe                            ; 0055b11f
        ;   Label: LAB_0055b11f
    PUSH 0x642031                       ; 0055b121 | = "chainToMission"
    PUSH ESI                            ; 0055b126
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b127
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b12c
    TEST EAX,EAX                        ; 0055b12f
    JNZ 0x0055b14a                      ; 0055b131
        ;   XREF to: 0055b14a (CONDITIONAL_JUMP)  ; LAB_0055b14a
    MOV AL,byte ptr [ESI + 0xe]         ; 0055b133
    INC AL                              ; 0055b136
    AND EAX,0xff                        ; 0055b138
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b13d | g_CharacterClassificationTable
    JZ 0x0055c2aa                       ; 0055b144
        ;   XREF to: 0055c2aa (CONDITIONAL_JUMP)  ; LAB_0055c2aa
    PUSH 0x12                           ; 0055b14a
        ;   Label: LAB_0055b14a
    PUSH 0x642040                       ; 0055b14c | = "clearActorVariable"
    PUSH ESI                            ; 0055b151
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b152
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b157
    TEST EAX,EAX                        ; 0055b15a
    JNZ 0x0055b175                      ; 0055b15c
        ;   XREF to: 0055b175 (CONDITIONAL_JUMP)  ; LAB_0055b175
    MOV AL,byte ptr [ESI + 0x12]        ; 0055b15e
    INC AL                              ; 0055b161
    AND EAX,0xff                        ; 0055b163
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b168 | g_CharacterClassificationTable
    JZ 0x0055c34a                       ; 0055b16f
        ;   XREF to: 0055c34a (CONDITIONAL_JUMP)  ; LAB_0055c34a
    PUSH 0x5                            ; 0055b175
        ;   Label: LAB_0055b175
    PUSH 0x642053                       ; 0055b177 | = "dbSay"
    PUSH ESI                            ; 0055b17c
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b17d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b182
    TEST EAX,EAX                        ; 0055b185
    JNZ 0x0055b1a0                      ; 0055b187
        ;   XREF to: 0055b1a0 (CONDITIONAL_JUMP)  ; LAB_0055b1a0
    MOV AL,byte ptr [ESI + 0x5]         ; 0055b189
    INC AL                              ; 0055b18c
    AND EAX,0xff                        ; 0055b18e
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b193 | g_CharacterClassificationTable
    JZ 0x0055c3e7                       ; 0055b19a
        ;   XREF to: 0055c3e7 (CONDITIONAL_JUMP)  ; LAB_0055c3e7
    PUSH 0xa                            ; 0055b1a0
        ;   Label: LAB_0055b1a0
    PUSH 0x64209f                       ; 0055b1a2 | = "dbStartSay"
    PUSH ESI                            ; 0055b1a7
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b1a8
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b1ad
    TEST EAX,EAX                        ; 0055b1b0
    JNZ 0x0055b1cb                      ; 0055b1b2
        ;   XREF to: 0055b1cb (CONDITIONAL_JUMP)  ; LAB_0055b1cb
    MOV AL,byte ptr [ESI + 0xa]         ; 0055b1b4
    INC AL                              ; 0055b1b7
    AND EAX,0xff                        ; 0055b1b9
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b1be | g_CharacterClassificationTable
    JZ 0x0055c5b3                       ; 0055b1c5
        ;   XREF to: 0055c5b3 (CONDITIONAL_JUMP)  ; LAB_0055c5b3
    PUSH 0x5                            ; 0055b1cb
        ;   Label: LAB_0055b1cb
    PUSH 0x6420f0                       ; 0055b1cd | = "debug"
    PUSH ESI                            ; 0055b1d2
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b1d3
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b1d8
    TEST EAX,EAX                        ; 0055b1db
    JNZ 0x0055b1f6                      ; 0055b1dd
        ;   XREF to: 0055b1f6 (CONDITIONAL_JUMP)  ; LAB_0055b1f6
    MOV AL,byte ptr [ESI + 0x5]         ; 0055b1df
    INC AL                              ; 0055b1e2
    AND EAX,0xff                        ; 0055b1e4
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b1e9 | g_CharacterClassificationTable
    JZ 0x0055c731                       ; 0055b1f0
        ;   XREF to: 0055c731 (CONDITIONAL_JUMP)  ; LAB_0055c731
    PUSH 0x9                            ; 0055b1f6
        ;   Label: LAB_0055b1f6
    PUSH 0x64211a                       ; 0055b1f8 | = "dismember"
    PUSH ESI                            ; 0055b1fd
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b1fe
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b203
    TEST EAX,EAX                        ; 0055b206
    JNZ 0x0055b221                      ; 0055b208
        ;   XREF to: 0055b221 (CONDITIONAL_JUMP)  ; LAB_0055b221
    MOV AL,byte ptr [ESI + 0x9]         ; 0055b20a
    INC AL                              ; 0055b20d
    AND EAX,0xff                        ; 0055b20f
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b214 | g_CharacterClassificationTable
    JZ 0x0055c79f                       ; 0055b21b
        ;   XREF to: 0055c79f (CONDITIONAL_JUMP)  ; LAB_0055c79f
    PUSH 0x7                            ; 0055b221
        ;   Label: LAB_0055b221
    PUSH 0x6421c4                       ; 0055b223 | = "display"
    PUSH ESI                            ; 0055b228
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b229
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b22e
    TEST EAX,EAX                        ; 0055b231
    JNZ 0x0055b24c                      ; 0055b233
        ;   XREF to: 0055b24c (CONDITIONAL_JUMP)  ; LAB_0055b24c
    MOV AL,byte ptr [ESI + 0x7]         ; 0055b235
    INC AL                              ; 0055b238
    AND EAX,0xff                        ; 0055b23a
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b23f | g_CharacterClassificationTable
    JZ 0x0055cab9                       ; 0055b246
        ;   XREF to: 0055cab9 (CONDITIONAL_JUMP)  ; LAB_0055cab9
    PUSH 0x4                            ; 0055b24c
        ;   Label: LAB_0055b24c
    PUSH 0x642200                       ; 0055b24e | = "else"
    PUSH ESI                            ; 0055b253
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b254
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b259
    TEST EAX,EAX                        ; 0055b25c
    JNZ 0x0055b277                      ; 0055b25e
        ;   XREF to: 0055b277 (CONDITIONAL_JUMP)  ; LAB_0055b277
    MOV AL,byte ptr [ESI + 0x4]         ; 0055b260
    INC AL                              ; 0055b263
    AND EAX,0xff                        ; 0055b265
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b26a | g_CharacterClassificationTable
    JZ 0x0055cb05                       ; 0055b271
        ;   XREF to: 0055cb05 (CONDITIONAL_JUMP)  ; LAB_0055cb05
    PUSH 0xc                            ; 0055b277
        ;   Label: LAB_0055b277
    PUSH 0x64223d                       ; 0055b279 | = "enableCamera"
    PUSH ESI                            ; 0055b27e
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b27f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b284
    TEST EAX,EAX                        ; 0055b287
    JNZ 0x0055b2a2                      ; 0055b289
        ;   XREF to: 0055b2a2 (CONDITIONAL_JUMP)  ; LAB_0055b2a2
    MOV AL,byte ptr [ESI + 0xc]         ; 0055b28b
    INC AL                              ; 0055b28e
    AND EAX,0xff                        ; 0055b290
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b295 | g_CharacterClassificationTable
    JZ 0x0055cb52                       ; 0055b29c
        ;   XREF to: 0055cb52 (CONDITIONAL_JUMP)  ; LAB_0055cb52
    PUSH 0x11                           ; 0055b2a2
        ;   Label: LAB_0055b2a2
    PUSH 0x642298                       ; 0055b2a4 | = "enableCameraGroup"
    PUSH ESI                            ; 0055b2a9
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b2aa
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b2af
    TEST EAX,EAX                        ; 0055b2b2
    JNZ 0x0055b2cd                      ; 0055b2b4
        ;   XREF to: 0055b2cd (CONDITIONAL_JUMP)  ; LAB_0055b2cd
    MOV AL,byte ptr [ESI + 0x11]        ; 0055b2b6
    INC AL                              ; 0055b2b9
    AND EAX,0xff                        ; 0055b2bb
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b2c0 | g_CharacterClassificationTable
    JZ 0x0055cca1                       ; 0055b2c7
        ;   XREF to: 0055cca1 (CONDITIONAL_JUMP)  ; LAB_0055cca1
    PUSH 0xf                            ; 0055b2cd
        ;   Label: LAB_0055b2cd
    PUSH 0x6422df                       ; 0055b2cf | = "enableHealthBar"
    PUSH ESI                            ; 0055b2d4
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b2d5
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b2da
    TEST EAX,EAX                        ; 0055b2dd
    JNZ 0x0055b2f8                      ; 0055b2df
        ;   XREF to: 0055b2f8 (CONDITIONAL_JUMP)  ; LAB_0055b2f8
    MOV AL,byte ptr [ESI + 0xf]         ; 0055b2e1
    INC AL                              ; 0055b2e4
    AND EAX,0xff                        ; 0055b2e6
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b2eb | g_CharacterClassificationTable
    JZ 0x0055cdab                       ; 0055b2f2
        ;   XREF to: 0055cdab (CONDITIONAL_JUMP)  ; LAB_0055cdab
    PUSH 0x3                            ; 0055b2f8
        ;   Label: LAB_0055b2f8
    PUSH 0x642353                       ; 0055b2fa | = "end"
    PUSH ESI                            ; 0055b2ff
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b300
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b305
    TEST EAX,EAX                        ; 0055b308
    JNZ 0x0055b323                      ; 0055b30a
        ;   XREF to: 0055b323 (CONDITIONAL_JUMP)  ; LAB_0055b323
    MOV AL,byte ptr [ESI + 0x3]         ; 0055b30c
    INC AL                              ; 0055b30f
    AND EAX,0xff                        ; 0055b311
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b316 | g_CharacterClassificationTable
    JZ 0x0055cf06                       ; 0055b31d
        ;   XREF to: 0055cf06 (CONDITIONAL_JUMP)  ; LAB_0055cf06
    PUSH 0x6                            ; 0055b323
        ;   Label: LAB_0055b323
    PUSH 0x642357                       ; 0055b325 | = "fadeIn"
    PUSH ESI                            ; 0055b32a
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b32b
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b330
    TEST EAX,EAX                        ; 0055b333
    JNZ 0x0055b34e                      ; 0055b335
        ;   XREF to: 0055b34e (CONDITIONAL_JUMP)  ; LAB_0055b34e
    MOV AL,byte ptr [ESI + 0x6]         ; 0055b337
    INC AL                              ; 0055b33a
    AND EAX,0xff                        ; 0055b33c
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b341 | g_CharacterClassificationTable
    JZ 0x0055cf39                       ; 0055b348
        ;   XREF to: 0055cf39 (CONDITIONAL_JUMP)  ; LAB_0055cf39
    PUSH 0x7                            ; 0055b34e
        ;   Label: LAB_0055b34e
    PUSH 0x64235e                       ; 0055b350 | = "fadeOut"
    PUSH ESI                            ; 0055b355
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b356
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b35b
    TEST EAX,EAX                        ; 0055b35e
    JNZ 0x0055b379                      ; 0055b360
        ;   XREF to: 0055b379 (CONDITIONAL_JUMP)  ; LAB_0055b379
    MOV AL,byte ptr [ESI + 0x7]         ; 0055b362
    INC AL                              ; 0055b365
    AND EAX,0xff                        ; 0055b367
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b36c | g_CharacterClassificationTable
    JZ 0x0055cfbe                       ; 0055b373
        ;   XREF to: 0055cfbe (CONDITIONAL_JUMP)  ; LAB_0055cfbe
    PUSH 0x7                            ; 0055b379
        ;   Label: LAB_0055b379
    PUSH 0x642366                       ; 0055b37b | = "gesture"
    PUSH ESI                            ; 0055b380
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b381
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b386
    TEST EAX,EAX                        ; 0055b389
    JNZ 0x0055b3a4                      ; 0055b38b
        ;   XREF to: 0055b3a4 (CONDITIONAL_JUMP)  ; LAB_0055b3a4
    MOV AL,byte ptr [ESI + 0x7]         ; 0055b38d
    INC AL                              ; 0055b390
    AND EAX,0xff                        ; 0055b392
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b397 | g_CharacterClassificationTable
    JZ 0x0055d033                       ; 0055b39e
        ;   XREF to: 0055d033 (CONDITIONAL_JUMP)  ; LAB_0055d033
    PUSH 0x9                            ; 0055b3a4
        ;   Label: LAB_0055b3a4
    PUSH 0x6423d7                       ; 0055b3a6 | = "getIniInt"
    PUSH ESI                            ; 0055b3ab
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b3ac
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b3b1
    TEST EAX,EAX                        ; 0055b3b4
    JNZ 0x0055b3cf                      ; 0055b3b6
        ;   XREF to: 0055b3cf (CONDITIONAL_JUMP)  ; LAB_0055b3cf
    MOV AL,byte ptr [ESI + 0x9]         ; 0055b3b8
    INC AL                              ; 0055b3bb
    AND EAX,0xff                        ; 0055b3bd
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b3c2 | g_CharacterClassificationTable
    JZ 0x0055d185                       ; 0055b3c9
        ;   XREF to: 0055d185 (CONDITIONAL_JUMP)  ; LAB_0055d185
    PUSH 0xf                            ; 0055b3cf
        ;   Label: LAB_0055b3cf
    PUSH 0x642433                       ; 0055b3d1 | = "getTriggerActor"
    PUSH ESI                            ; 0055b3d6
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b3d7
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b3dc
    TEST EAX,EAX                        ; 0055b3df
    JNZ 0x0055b3fa                      ; 0055b3e1
        ;   XREF to: 0055b3fa (CONDITIONAL_JUMP)  ; LAB_0055b3fa
    MOV AL,byte ptr [ESI + 0xf]         ; 0055b3e3
    INC AL                              ; 0055b3e6
    AND EAX,0xff                        ; 0055b3e8
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b3ed | g_CharacterClassificationTable
    JZ 0x0055d2a6                       ; 0055b3f4
        ;   XREF to: 0055d2a6 (CONDITIONAL_JUMP)  ; LAB_0055d2a6
    PUSH 0x5                            ; 0055b3fa
        ;   Label: LAB_0055b3fa
    PUSH 0x642480                       ; 0055b3fc | = "gosub"
    PUSH ESI                            ; 0055b401
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b402
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b407
    TEST EAX,EAX                        ; 0055b40a
    JNZ 0x0055b425                      ; 0055b40c
        ;   XREF to: 0055b425 (CONDITIONAL_JUMP)  ; LAB_0055b425
    MOV AL,byte ptr [ESI + 0x5]         ; 0055b40e
    INC AL                              ; 0055b411
    AND EAX,0xff                        ; 0055b413
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b418 | g_CharacterClassificationTable
    JZ 0x0055d3b7                       ; 0055b41f
        ;   XREF to: 0055d3b7 (CONDITIONAL_JUMP)  ; LAB_0055d3b7
    PUSH 0x4                            ; 0055b425
        ;   Label: LAB_0055b425
    PUSH 0x6424ed                       ; 0055b427 | = "goto"
    PUSH ESI                            ; 0055b42c
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b42d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b432
    TEST EAX,EAX                        ; 0055b435
    JNZ 0x0055b450                      ; 0055b437
        ;   XREF to: 0055b450 (CONDITIONAL_JUMP)  ; LAB_0055b450
    MOV AL,byte ptr [ESI + 0x4]         ; 0055b439
    INC AL                              ; 0055b43c
    AND EAX,0xff                        ; 0055b43e
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b443 | g_CharacterClassificationTable
    JZ 0x0055d468                       ; 0055b44a
        ;   XREF to: 0055d468 (CONDITIONAL_JUMP)  ; LAB_0055d468
    PUSH 0x4                            ; 0055b450
        ;   Label: LAB_0055b450
    PUSH 0x642528                       ; 0055b452 | = "gtfo"
    PUSH ESI                            ; 0055b457
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b458
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b45d
    TEST EAX,EAX                        ; 0055b460
    JNZ 0x0055b47b                      ; 0055b462
        ;   XREF to: 0055b47b (CONDITIONAL_JUMP)  ; LAB_0055b47b
    MOV AL,byte ptr [ESI + 0x4]         ; 0055b464
    INC AL                              ; 0055b467
    AND EAX,0xff                        ; 0055b469
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b46e | g_CharacterClassificationTable
    JZ 0x0055d4cf                       ; 0055b475
        ;   XREF to: 0055d4cf (CONDITIONAL_JUMP)  ; LAB_0055d4cf
    PUSH 0xd                            ; 0055b47b
        ;   Label: LAB_0055b47b
    PUSH 0x64255d                       ; 0055b47d | = "holsterWeapon"
    PUSH ESI                            ; 0055b482
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b483
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b488
    TEST EAX,EAX                        ; 0055b48b
    JNZ 0x0055b4a6                      ; 0055b48d
        ;   XREF to: 0055b4a6 (CONDITIONAL_JUMP)  ; LAB_0055b4a6
    MOV AL,byte ptr [ESI + 0xd]         ; 0055b48f
    INC AL                              ; 0055b492
    AND EAX,0xff                        ; 0055b494
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b499 | g_CharacterClassificationTable
    JZ 0x0055d54c                       ; 0055b4a0
        ;   XREF to: 0055d54c (CONDITIONAL_JUMP)  ; LAB_0055d54c
    PUSH 0x4                            ; 0055b4a6
        ;   Label: LAB_0055b4a6
    PUSH 0x6425f6                       ; 0055b4a8 | = "idle"
    PUSH ESI                            ; 0055b4ad
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b4ae
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b4b3
    TEST EAX,EAX                        ; 0055b4b6
    JNZ 0x0055b4d1                      ; 0055b4b8
        ;   XREF to: 0055b4d1 (CONDITIONAL_JUMP)  ; LAB_0055b4d1
    MOV AL,byte ptr [ESI + 0x4]         ; 0055b4ba
    INC AL                              ; 0055b4bd
    AND EAX,0xff                        ; 0055b4bf
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b4c4 | g_CharacterClassificationTable
    JZ 0x0055d77e                       ; 0055b4cb
        ;   XREF to: 0055d77e (CONDITIONAL_JUMP)  ; LAB_0055d77e
    PUSH 0x2                            ; 0055b4d1
        ;   Label: LAB_0055b4d1
    PUSH 0x6425fb                       ; 0055b4d3 | = "if"
    PUSH ESI                            ; 0055b4d8
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b4d9
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b4de
    TEST EAX,EAX                        ; 0055b4e1
    JNZ 0x0055b4fc                      ; 0055b4e3
        ;   XREF to: 0055b4fc (CONDITIONAL_JUMP)  ; LAB_0055b4fc
    MOV AL,byte ptr [ESI + 0x2]         ; 0055b4e5
    INC AL                              ; 0055b4e8
    AND EAX,0xff                        ; 0055b4ea
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b4ef | g_CharacterClassificationTable
    JZ 0x0055d7a9                       ; 0055b4f6
        ;   XREF to: 0055d7a9 (CONDITIONAL_JUMP)  ; LAB_0055d7a9
    PUSH 0xb                            ; 0055b4fc
        ;   Label: LAB_0055b4fc
    PUSH 0x642639                       ; 0055b4fe | = "finishedAct"
    PUSH ESI                            ; 0055b503
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b504
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b509
    TEST EAX,EAX                        ; 0055b50c
    JNZ 0x0055b527                      ; 0055b50e
        ;   XREF to: 0055b527 (CONDITIONAL_JUMP)  ; LAB_0055b527
    MOV AL,byte ptr [ESI + 0xb]         ; 0055b510
    INC AL                              ; 0055b513
    AND EAX,0xff                        ; 0055b515
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b51a | g_CharacterClassificationTable
    JZ 0x0055d862                       ; 0055b521
        ;   XREF to: 0055d862 (CONDITIONAL_JUMP)  ; LAB_0055d862
    PUSH 0x9                            ; 0055b527
        ;   Label: LAB_0055b527
    PUSH 0x64266e                       ; 0055b529 | = "letterbox"
    PUSH ESI                            ; 0055b52e
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b52f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b534
    TEST EAX,EAX                        ; 0055b537
    JNZ 0x0055b552                      ; 0055b539
        ;   XREF to: 0055b552 (CONDITIONAL_JUMP)  ; LAB_0055b552
    MOV AL,byte ptr [ESI + 0x9]         ; 0055b53b
    INC AL                              ; 0055b53e
    AND EAX,0xff                        ; 0055b540
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b545 | g_CharacterClassificationTable
    JZ 0x0055d8f9                       ; 0055b54c
        ;   XREF to: 0055d8f9 (CONDITIONAL_JUMP)  ; LAB_0055d8f9
    PUSH 0xe                            ; 0055b552
        ;   Label: LAB_0055b552
    PUSH 0x6426a5                       ; 0055b554 | = "lockFocusActor"
    PUSH ESI                            ; 0055b559
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b55a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b55f
    TEST EAX,EAX                        ; 0055b562
    JNZ 0x0055b57d                      ; 0055b564
        ;   XREF to: 0055b57d (CONDITIONAL_JUMP)  ; LAB_0055b57d
    MOV AL,byte ptr [ESI + 0xe]         ; 0055b566
    INC AL                              ; 0055b569
    AND EAX,0xff                        ; 0055b56b
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b570 | g_CharacterClassificationTable
    JZ 0x0055da9c                       ; 0055b577
        ;   XREF to: 0055da9c (CONDITIONAL_JUMP)  ; LAB_0055da9c
    PUSH 0x6                            ; 0055b57d
        ;   Label: LAB_0055b57d
    PUSH 0x6426b4                       ; 0055b57f | = "lookAt"
    PUSH ESI                            ; 0055b584
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b585
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b58a
    TEST EAX,EAX                        ; 0055b58d
    JNZ 0x0055b5a8                      ; 0055b58f
        ;   XREF to: 0055b5a8 (CONDITIONAL_JUMP)  ; LAB_0055b5a8
    MOV AL,byte ptr [ESI + 0x6]         ; 0055b591
    INC AL                              ; 0055b594
    AND EAX,0xff                        ; 0055b596
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b59b | g_CharacterClassificationTable
    JZ 0x0055dafb                       ; 0055b5a2
        ;   XREF to: 0055dafb (CONDITIONAL_JUMP)  ; LAB_0055dafb
    PUSH 0xc                            ; 0055b5a8
        ;   Label: LAB_0055b5a8
    PUSH 0x64273b                       ; 0055b5aa | = "movePlatform"
    PUSH ESI                            ; 0055b5af
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b5b0
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b5b5
    TEST EAX,EAX                        ; 0055b5b8
    JNZ 0x0055b5d3                      ; 0055b5ba
        ;   XREF to: 0055b5d3 (CONDITIONAL_JUMP)  ; LAB_0055b5d3
    MOV AL,byte ptr [ESI + 0xc]         ; 0055b5bc
    INC AL                              ; 0055b5bf
    AND EAX,0xff                        ; 0055b5c1
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b5c6 | g_CharacterClassificationTable
    JZ 0x0055dcac                       ; 0055b5cd
        ;   XREF to: 0055dcac (CONDITIONAL_JUMP)  ; LAB_0055dcac
    PUSH 0x8                            ; 0055b5d3
        ;   Label: LAB_0055b5d3
    PUSH 0x6427c4                       ; 0055b5d5 | = "openDoor"
    PUSH ESI                            ; 0055b5da
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b5db
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b5e0
    TEST EAX,EAX                        ; 0055b5e3
    JNZ 0x0055b5fe                      ; 0055b5e5
        ;   XREF to: 0055b5fe (CONDITIONAL_JUMP)  ; LAB_0055b5fe
    MOV AL,byte ptr [ESI + 0x8]         ; 0055b5e7
    INC AL                              ; 0055b5ea
    AND EAX,0xff                        ; 0055b5ec
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b5f1 | g_CharacterClassificationTable
    JZ 0x0055ddea                       ; 0055b5f8
        ;   XREF to: 0055ddea (CONDITIONAL_JUMP)  ; LAB_0055ddea
    PUSH 0xb                            ; 0055b5fe
        ;   Label: LAB_0055b5fe
    PUSH 0x642803                       ; 0055b600 | = "pressButton"
    PUSH ESI                            ; 0055b605
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b606
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b60b
    TEST EAX,EAX                        ; 0055b60e
    JNZ 0x0055b629                      ; 0055b610
        ;   XREF to: 0055b629 (CONDITIONAL_JUMP)  ; LAB_0055b629
    MOV AL,byte ptr [ESI + 0xb]         ; 0055b612
    INC AL                              ; 0055b615
    AND EAX,0xff                        ; 0055b617
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b61c | g_CharacterClassificationTable
    JZ 0x0055df4f                       ; 0055b623
        ;   XREF to: 0055df4f (CONDITIONAL_JUMP)  ; LAB_0055df4f
    PUSH 0x5                            ; 0055b629
        ;   Label: LAB_0055b629
    PUSH 0x642863                       ; 0055b62b | = "raise"
    PUSH ESI                            ; 0055b630
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b631
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b636
    TEST EAX,EAX                        ; 0055b639
    JNZ 0x0055b654                      ; 0055b63b
        ;   XREF to: 0055b654 (CONDITIONAL_JUMP)  ; LAB_0055b654
    MOV AL,byte ptr [ESI + 0x5]         ; 0055b63d
    INC AL                              ; 0055b640
    AND EAX,0xff                        ; 0055b642
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b647 | g_CharacterClassificationTable
    JZ 0x0055e08c                       ; 0055b64e
        ;   XREF to: 0055e08c (CONDITIONAL_JUMP)  ; LAB_0055e08c
    PUSH 0xd                            ; 0055b654
        ;   Label: LAB_0055b654
    PUSH 0x64289f                       ; 0055b656 | = "releaseButton"
    PUSH ESI                            ; 0055b65b
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b65c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b661
    TEST EAX,EAX                        ; 0055b664
    JNZ 0x0055b67f                      ; 0055b666
        ;   XREF to: 0055b67f (CONDITIONAL_JUMP)  ; LAB_0055b67f
    MOV AL,byte ptr [ESI + 0xd]         ; 0055b668
    INC AL                              ; 0055b66b
    AND EAX,0xff                        ; 0055b66d
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b672 | g_CharacterClassificationTable
    JZ 0x0055e13f                       ; 0055b679
        ;   XREF to: 0055e13f (CONDITIONAL_JUMP)  ; LAB_0055e13f
    PUSH 0x1b                           ; 0055b67f
        ;   Label: LAB_0055b67f
    PUSH 0x642903                       ; 0055b681 | = "removeAllItemsFromInventory"
    PUSH ESI                            ; 0055b686
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b687
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b68c
    TEST EAX,EAX                        ; 0055b68f
    JNZ 0x0055b6aa                      ; 0055b691
        ;   XREF to: 0055b6aa (CONDITIONAL_JUMP)  ; LAB_0055b6aa
    MOV AL,byte ptr [ESI + 0x1b]        ; 0055b693
    INC AL                              ; 0055b696
    AND EAX,0xff                        ; 0055b698
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b69d | g_CharacterClassificationTable
    JZ 0x0055e27b                       ; 0055b6a4
        ;   XREF to: 0055e27b (CONDITIONAL_JUMP)  ; LAB_0055e27b
    PUSH 0x17                           ; 0055b6aa
        ;   Label: LAB_0055b6aa
    PUSH 0x642963                       ; 0055b6ac | = "removeItemFromInventory"
    PUSH ESI                            ; 0055b6b1
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b6b2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b6b7
    TEST EAX,EAX                        ; 0055b6ba
    JNZ 0x0055b6d5                      ; 0055b6bc
        ;   XREF to: 0055b6d5 (CONDITIONAL_JUMP)  ; LAB_0055b6d5
    MOV AL,byte ptr [ESI + 0x17]        ; 0055b6be
    INC AL                              ; 0055b6c1
    AND EAX,0xff                        ; 0055b6c3
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b6c8 | g_CharacterClassificationTable
    JZ 0x0055e34d                       ; 0055b6cf
        ;   XREF to: 0055e34d (CONDITIONAL_JUMP)  ; LAB_0055e34d
    PUSH 0xa                            ; 0055b6d5
        ;   Label: LAB_0055b6d5
    PUSH 0x6429c2                       ; 0055b6d7 | = "removeKeys"
    PUSH ESI                            ; 0055b6dc
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b6dd
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b6e2
    TEST EAX,EAX                        ; 0055b6e5
    JNZ 0x0055b700                      ; 0055b6e7
        ;   XREF to: 0055b700 (CONDITIONAL_JUMP)  ; LAB_0055b700
    MOV AL,byte ptr [ESI + 0xa]         ; 0055b6e9
    INC AL                              ; 0055b6ec
    AND EAX,0xff                        ; 0055b6ee
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b6f3 | g_CharacterClassificationTable
    JZ 0x0055e467                       ; 0055b6fa
        ;   XREF to: 0055e467 (CONDITIONAL_JUMP)  ; LAB_0055e467
    PUSH 0x6                            ; 0055b700
        ;   Label: LAB_0055b700
    PUSH 0x642a2c                       ; 0055b702 | = "return"
    PUSH ESI                            ; 0055b707
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b708
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b70d
    TEST EAX,EAX                        ; 0055b710
    JNZ 0x0055b72b                      ; 0055b712
        ;   XREF to: 0055b72b (CONDITIONAL_JUMP)  ; LAB_0055b72b
    MOV AL,byte ptr [ESI + 0x6]         ; 0055b714
    INC AL                              ; 0055b717
    AND EAX,0xff                        ; 0055b719
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b71e | g_CharacterClassificationTable
    JZ 0x0055e527                       ; 0055b725
        ;   XREF to: 0055e527 (CONDITIONAL_JUMP)  ; LAB_0055e527
    PUSH 0xb                            ; 0055b72b
        ;   Label: LAB_0055b72b
    PUSH 0x642a64                       ; 0055b72d | = "rollCredits"
    PUSH ESI                            ; 0055b732
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b733
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b738
    TEST EAX,EAX                        ; 0055b73b
    JNZ 0x0055b756                      ; 0055b73d
        ;   XREF to: 0055b756 (CONDITIONAL_JUMP)  ; LAB_0055b756
    MOV AL,byte ptr [ESI + 0xb]         ; 0055b73f
    INC AL                              ; 0055b742
    AND EAX,0xff                        ; 0055b744
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b749 | g_CharacterClassificationTable
    JZ 0x0055e58b                       ; 0055b750
        ;   XREF to: 0055e58b (CONDITIONAL_JUMP)  ; LAB_0055e58b
    PUSH 0x3                            ; 0055b756
        ;   Label: LAB_0055b756
    PUSH 0x642a99                       ; 0055b758 | = "say"
    PUSH ESI                            ; 0055b75d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b75e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b763
    TEST EAX,EAX                        ; 0055b766
    JNZ 0x0055b781                      ; 0055b768
        ;   XREF to: 0055b781 (CONDITIONAL_JUMP)  ; LAB_0055b781
    MOV AL,byte ptr [ESI + 0x3]         ; 0055b76a
    INC AL                              ; 0055b76d
    AND EAX,0xff                        ; 0055b76f
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b774 | g_CharacterClassificationTable
    JZ 0x0055e622                       ; 0055b77b
        ;   XREF to: 0055e622 (CONDITIONAL_JUMP)  ; LAB_0055e622
    PUSH 0xc                            ; 0055b781
        ;   Label: LAB_0055b781
    PUSH 0x642ad6                       ; 0055b783 | = "selectWeapon"
    PUSH ESI                            ; 0055b788
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b789
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b78e
    TEST EAX,EAX                        ; 0055b791
    JNZ 0x0055b7ac                      ; 0055b793
        ;   XREF to: 0055b7ac (CONDITIONAL_JUMP)  ; LAB_0055b7ac
    MOV AL,byte ptr [ESI + 0xc]         ; 0055b795
    INC AL                              ; 0055b798
    AND EAX,0xff                        ; 0055b79a
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b79f | g_CharacterClassificationTable
    JZ 0x0055e795                       ; 0055b7a6
        ;   XREF to: 0055e795 (CONDITIONAL_JUMP)  ; LAB_0055e795
    PUSH 0x10                           ; 0055b7ac
        ;   Label: LAB_0055b7ac
    PUSH 0x642b76                       ; 0055b7ae | = "setActorVariable"
    PUSH ESI                            ; 0055b7b3
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b7b4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b7b9
    TEST EAX,EAX                        ; 0055b7bc
    JNZ 0x0055b7d7                      ; 0055b7be
        ;   XREF to: 0055b7d7 (CONDITIONAL_JUMP)  ; LAB_0055b7d7
    MOV AL,byte ptr [ESI + 0x10]        ; 0055b7c0
    INC AL                              ; 0055b7c3
    AND EAX,0xff                        ; 0055b7c5
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b7ca | g_CharacterClassificationTable
    JZ 0x0055e92f                       ; 0055b7d1
        ;   XREF to: 0055e92f (CONDITIONAL_JUMP)  ; LAB_0055e92f
    PUSH 0xf                            ; 0055b7d7
        ;   Label: LAB_0055b7d7
    PUSH 0x642bc5                       ; 0055b7d9 | = "setAmbientSound"
    PUSH ESI                            ; 0055b7de
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b7df
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b7e4
    TEST EAX,EAX                        ; 0055b7e7
    JNZ 0x0055b802                      ; 0055b7e9
        ;   XREF to: 0055b802 (CONDITIONAL_JUMP)  ; LAB_0055b802
    MOV AL,byte ptr [ESI + 0xf]         ; 0055b7eb
    INC AL                              ; 0055b7ee
    AND EAX,0xff                        ; 0055b7f0
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b7f5 | g_CharacterClassificationTable
    JZ 0x0055ea3c                       ; 0055b7fc
        ;   XREF to: 0055ea3c (CONDITIONAL_JUMP)  ; LAB_0055ea3c
    PUSH 0xe                            ; 0055b802
        ;   Label: LAB_0055b802
    PUSH 0x642bd5                       ; 0055b804 | = "setCameraGroup"
    PUSH ESI                            ; 0055b809
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b80a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b80f
    TEST EAX,EAX                        ; 0055b812
    JNZ 0x0055b82d                      ; 0055b814
        ;   XREF to: 0055b82d (CONDITIONAL_JUMP)  ; LAB_0055b82d
    MOV AL,byte ptr [ESI + 0xe]         ; 0055b816
    INC AL                              ; 0055b819
    AND EAX,0xff                        ; 0055b81b
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b820 | g_CharacterClassificationTable
    JZ 0x0055ea9a                       ; 0055b827
        ;   XREF to: 0055ea9a (CONDITIONAL_JUMP)  ; LAB_0055ea9a
    PUSH 0x12                           ; 0055b82d
        ;   Label: LAB_0055b82d
    PUSH 0x642c31                       ; 0055b82f | = "setCharacterHealth"
    PUSH ESI                            ; 0055b834
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b835
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b83a
    TEST EAX,EAX                        ; 0055b83d
    JNZ 0x0055b858                      ; 0055b83f
        ;   XREF to: 0055b858 (CONDITIONAL_JUMP)  ; LAB_0055b858
    MOV AL,byte ptr [ESI + 0x12]        ; 0055b841
    INC AL                              ; 0055b844
    AND EAX,0xff                        ; 0055b846
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b84b | g_CharacterClassificationTable
    JZ 0x0055eb89                       ; 0055b852
        ;   XREF to: 0055eb89 (CONDITIONAL_JUMP)  ; LAB_0055eb89
    PUSH 0xd                            ; 0055b858
        ;   Label: LAB_0055b858
    PUSH 0x642c79                       ; 0055b85a | = "setFocusActor"
    PUSH ESI                            ; 0055b85f
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b860
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b865
    TEST EAX,EAX                        ; 0055b868
    JNZ 0x0055b883                      ; 0055b86a
        ;   XREF to: 0055b883 (CONDITIONAL_JUMP)  ; LAB_0055b883
    MOV AL,byte ptr [ESI + 0xd]         ; 0055b86c
    INC AL                              ; 0055b86f
    AND EAX,0xff                        ; 0055b871
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b876 | g_CharacterClassificationTable
    JZ 0x0055ec68                       ; 0055b87d
        ;   XREF to: 0055ec68 (CONDITIONAL_JUMP)  ; LAB_0055ec68
    PUSH 0xb                            ; 0055b883
        ;   Label: LAB_0055b883
    PUSH 0x642c87                       ; 0055b885 | = "setHeroTask"
    PUSH ESI                            ; 0055b88a
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b88b
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b890
    TEST EAX,EAX                        ; 0055b893
    JNZ 0x0055b8ae                      ; 0055b895
        ;   XREF to: 0055b8ae (CONDITIONAL_JUMP)  ; LAB_0055b8ae
    MOV AL,byte ptr [ESI + 0xb]         ; 0055b897
    INC AL                              ; 0055b89a
    AND EAX,0xff                        ; 0055b89c
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b8a1 | g_CharacterClassificationTable
    JZ 0x0055ed08                       ; 0055b8a8
        ;   XREF to: 0055ed08 (CONDITIONAL_JUMP)  ; LAB_0055ed08
    PUSH 0x9                            ; 0055b8ae
        ;   Label: LAB_0055b8ae
    PUSH 0x642cfc                       ; 0055b8b0 | = "setIniInt"
    PUSH ESI                            ; 0055b8b5
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b8b6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b8bb
    TEST EAX,EAX                        ; 0055b8be
    JNZ 0x0055b8d9                      ; 0055b8c0
        ;   XREF to: 0055b8d9 (CONDITIONAL_JUMP)  ; LAB_0055b8d9
    MOV AL,byte ptr [ESI + 0x9]         ; 0055b8c2
    INC AL                              ; 0055b8c5
    AND EAX,0xff                        ; 0055b8c7
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b8cc | g_CharacterClassificationTable
    JZ 0x0055eeb0                       ; 0055b8d3
        ;   XREF to: 0055eeb0 (CONDITIONAL_JUMP)  ; LAB_0055eeb0
    PUSH 0x12                           ; 0055b8d9
        ;   Label: LAB_0055b8d9
    PUSH 0x642d54                       ; 0055b8db | = "setSayTimeOverride"
    PUSH ESI                            ; 0055b8e0
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b8e1
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b8e6
    TEST EAX,EAX                        ; 0055b8e9
    JNZ 0x0055b904                      ; 0055b8eb
        ;   XREF to: 0055b904 (CONDITIONAL_JUMP)  ; LAB_0055b904
    MOV AL,byte ptr [ESI + 0x12]        ; 0055b8ed
    INC AL                              ; 0055b8f0
    AND EAX,0xff                        ; 0055b8f2
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b8f7 | g_CharacterClassificationTable
    JZ 0x0055ef7f                       ; 0055b8fe
        ;   XREF to: 0055ef7f (CONDITIONAL_JUMP)  ; LAB_0055ef7f
    PUSH 0xc                            ; 0055b904
        ;   Label: LAB_0055b904
    PUSH 0x642dd0                       ; 0055b906 | = "setSkipLabel"
    PUSH ESI                            ; 0055b90b
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b90c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b911
    TEST EAX,EAX                        ; 0055b914
    JNZ 0x0055b92f                      ; 0055b916
        ;   XREF to: 0055b92f (CONDITIONAL_JUMP)  ; LAB_0055b92f
    MOV AL,byte ptr [ESI + 0xc]         ; 0055b918
    INC AL                              ; 0055b91b
    AND EAX,0xff                        ; 0055b91d
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b922 | g_CharacterClassificationTable
    JZ 0x0055f077                       ; 0055b929
        ;   XREF to: 0055f077 (CONDITIONAL_JUMP)  ; LAB_0055f077
    PUSH 0xa                            ; 0055b92f
        ;   Label: LAB_0055b92f
    PUSH 0x642df2                       ; 0055b931 | = "setSpeaker"
    PUSH ESI                            ; 0055b936
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b937
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b93c
    TEST EAX,EAX                        ; 0055b93f
    JNZ 0x0055b95a                      ; 0055b941
        ;   XREF to: 0055b95a (CONDITIONAL_JUMP)  ; LAB_0055b95a
    MOV AL,byte ptr [ESI + 0xa]         ; 0055b943
    INC AL                              ; 0055b946
    AND EAX,0xff                        ; 0055b948
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b94d | g_CharacterClassificationTable
    JZ 0x0055f11a                       ; 0055b954
        ;   XREF to: 0055f11a (CONDITIONAL_JUMP)  ; LAB_0055f11a
    PUSH 0xd                            ; 0055b95a
        ;   Label: LAB_0055b95a
    PUSH 0x642dfd                       ; 0055b95c | = "setTimeFactor"
    PUSH ESI                            ; 0055b961
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b962
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b967
    TEST EAX,EAX                        ; 0055b96a
    JNZ 0x0055b985                      ; 0055b96c
        ;   XREF to: 0055b985 (CONDITIONAL_JUMP)  ; LAB_0055b985
    MOV AL,byte ptr [ESI + 0xd]         ; 0055b96e
    INC AL                              ; 0055b971
    AND EAX,0xff                        ; 0055b973
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b978 | g_CharacterClassificationTable
    JZ 0x0055f1bf                       ; 0055b97f
        ;   XREF to: 0055f1bf (CONDITIONAL_JUMP)  ; LAB_0055f1bf
    PUSH 0x9                            ; 0055b985
        ;   Label: LAB_0055b985
    PUSH 0x642e25                       ; 0055b987 | = "setVictim"
    PUSH ESI                            ; 0055b98c
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b98d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b992
    TEST EAX,EAX                        ; 0055b995
    JNZ 0x0055b9b0                      ; 0055b997
        ;   XREF to: 0055b9b0 (CONDITIONAL_JUMP)  ; LAB_0055b9b0
    MOV AL,byte ptr [ESI + 0x9]         ; 0055b999
    INC AL                              ; 0055b99c
    AND EAX,0xff                        ; 0055b99e
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b9a3 | g_CharacterClassificationTable
    JZ 0x0055f29c                       ; 0055b9aa
        ;   XREF to: 0055f29c (CONDITIONAL_JUMP)  ; LAB_0055f29c
    PUSH 0xa                            ; 0055b9b0
        ;   Label: LAB_0055b9b0
    PUSH 0x642ec0                       ; 0055b9b2 | = "snapToFace"
    PUSH ESI                            ; 0055b9b7
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b9b8
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b9bd
    TEST EAX,EAX                        ; 0055b9c0
    JNZ 0x0055b9db                      ; 0055b9c2
        ;   XREF to: 0055b9db (CONDITIONAL_JUMP)  ; LAB_0055b9db
    MOV AL,byte ptr [ESI + 0xa]         ; 0055b9c4
    INC AL                              ; 0055b9c7
    AND EAX,0xff                        ; 0055b9c9
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b9ce | g_CharacterClassificationTable
    JZ 0x0055f46d                       ; 0055b9d5
        ;   XREF to: 0055f46d (CONDITIONAL_JUMP)  ; LAB_0055f46d
    PUSH 0x8                            ; 0055b9db
        ;   Label: LAB_0055b9db
    PUSH 0x642f03                       ; 0055b9dd | = "startSay"
    PUSH ESI                            ; 0055b9e2
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055b9e3
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055b9e8
    TEST EAX,EAX                        ; 0055b9eb
    JNZ 0x0055ba06                      ; 0055b9ed
        ;   XREF to: 0055ba06 (CONDITIONAL_JUMP)  ; LAB_0055ba06
    MOV AL,byte ptr [ESI + 0x8]         ; 0055b9ef
    INC AL                              ; 0055b9f2
    AND EAX,0xff                        ; 0055b9f4
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055b9f9 | g_CharacterClassificationTable
    JZ 0x0055f5bc                       ; 0055ba00
        ;   XREF to: 0055f5bc (CONDITIONAL_JUMP)  ; LAB_0055f5bc
    PUSH 0xc                            ; 0055ba06
        ;   Label: LAB_0055ba06
    PUSH 0x642f45                       ; 0055ba08 | = "switchCamera"
    PUSH ESI                            ; 0055ba0d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ba0e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ba13
    TEST EAX,EAX                        ; 0055ba16
    JNZ 0x0055ba31                      ; 0055ba18
        ;   XREF to: 0055ba31 (CONDITIONAL_JUMP)  ; LAB_0055ba31
    MOV AL,byte ptr [ESI + 0xc]         ; 0055ba1a
    INC AL                              ; 0055ba1d
    AND EAX,0xff                        ; 0055ba1f
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ba24 | g_CharacterClassificationTable
    JZ 0x0055f6e5                       ; 0055ba2b
        ;   XREF to: 0055f6e5 (CONDITIONAL_JUMP)  ; LAB_0055f6e5
    PUSH 0xc                            ; 0055ba31
        ;   Label: LAB_0055ba31
    PUSH 0x642fb1                       ; 0055ba33 | = "timedDisplay"
    PUSH ESI                            ; 0055ba38
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ba39
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ba3e
    TEST EAX,EAX                        ; 0055ba41
    JNZ 0x0055ba5c                      ; 0055ba43
        ;   XREF to: 0055ba5c (CONDITIONAL_JUMP)  ; LAB_0055ba5c
    MOV AL,byte ptr [ESI + 0xc]         ; 0055ba45
    INC AL                              ; 0055ba48
    AND EAX,0xff                        ; 0055ba4a
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ba4f | g_CharacterClassificationTable
    JZ 0x0055f8e8                       ; 0055ba56
        ;   XREF to: 0055f8e8 (CONDITIONAL_JUMP)  ; LAB_0055f8e8
    PUSH 0xa                            ; 0055ba5c
        ;   Label: LAB_0055ba5c
    PUSH 0x642fdd                       ; 0055ba5e | = "turnToFace"
    PUSH ESI                            ; 0055ba63
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ba64
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ba69
    TEST EAX,EAX                        ; 0055ba6c
    JNZ 0x0055ba87                      ; 0055ba6e
        ;   XREF to: 0055ba87 (CONDITIONAL_JUMP)  ; LAB_0055ba87
    MOV AL,byte ptr [ESI + 0xa]         ; 0055ba70
    INC AL                              ; 0055ba73
    AND EAX,0xff                        ; 0055ba75
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055ba7a | g_CharacterClassificationTable
    JZ 0x0055fa00                       ; 0055ba81
        ;   XREF to: 0055fa00 (CONDITIONAL_JUMP)  ; LAB_0055fa00
    PUSH 0x4                            ; 0055ba87
        ;   Label: LAB_0055ba87
    PUSH 0x643020                       ; 0055ba89 | = "wait"
    PUSH ESI                            ; 0055ba8e
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055ba8f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055ba94
    TEST EAX,EAX                        ; 0055ba97
    JNZ 0x0055bab2                      ; 0055ba99
        ;   XREF to: 0055bab2 (CONDITIONAL_JUMP)  ; LAB_0055bab2
    MOV AL,byte ptr [ESI + 0x4]         ; 0055ba9b
    INC AL                              ; 0055ba9e
    AND EAX,0xff                        ; 0055baa0
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055baa5 | g_CharacterClassificationTable
    JZ 0x0055fb20                       ; 0055baac
        ;   XREF to: 0055fb20 (CONDITIONAL_JUMP)  ; LAB_0055fb20
    PUSH 0x7                            ; 0055bab2
        ;   Label: LAB_0055bab2
    PUSH 0x643057                       ; 0055bab4 | = "waitFor"
    PUSH ESI                            ; 0055bab9
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055baba
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055babf
    TEST EAX,EAX                        ; 0055bac2
    JNZ 0x0055badd                      ; 0055bac4
        ;   XREF to: 0055badd (CONDITIONAL_JUMP)  ; LAB_0055badd
    MOV AL,byte ptr [ESI + 0x7]         ; 0055bac6
    INC AL                              ; 0055bac9
    AND EAX,0xff                        ; 0055bacb
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055bad0 | g_CharacterClassificationTable
    JZ 0x0055fbbe                       ; 0055bad7
        ;   XREF to: 0055fbbe (CONDITIONAL_JUMP)  ; LAB_0055fbbe
    PUSH 0x6                            ; 0055badd
        ;   Label: LAB_0055badd
    PUSH 0x64305f                       ; 0055badf | = "walkTo"
    PUSH ESI                            ; 0055bae4
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055bae5
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055baea
    TEST EAX,EAX                        ; 0055baed
    JNZ 0x0055bb08                      ; 0055baef
        ;   XREF to: 0055bb08 (CONDITIONAL_JUMP)  ; LAB_0055bb08
    MOV AL,byte ptr [ESI + 0x6]         ; 0055baf1
    INC AL                              ; 0055baf4
    AND EAX,0xff                        ; 0055baf6
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0055bafb | g_CharacterClassificationTable
    JZ 0x0055fc28                       ; 0055bb02
        ;   XREF to: 0055fc28 (CONDITIONAL_JUMP)  ; LAB_0055fc28
    PUSH ESI                            ; 0055bb08
        ;   Label: LAB_0055bb08
    MOV ECX,dword ptr [ESP + 0x3e88]    ; 0055bb09
    PUSH ECX                            ; 0055bb10
    PUSH 0x64311b                       ; 0055bb11 | = "Unknown command on line %d: %s"
    JMP 0x0055a97f                      ; 0055bb16
        ;   XREF to: 0055a97f (UNCONDITIONAL_JUMP)  ; LAB_0055a97f
    CMP dword ptr [0x0310ec9c],0x0      ; 0055bb1b | g_ScriptEventsEnabled
        ;   Label: LAB_0055bb1b
    JZ 0x0055bb2e                       ; 0055bb22
        ;   XREF to: 0055bb2e (CONDITIONAL_JUMP)  ; LAB_0055bb2e
    MOV dword ptr [0x0310ec9c],0x1      ; 0055bb24 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],0x641cf2 ; 0055bb2e | s_EmptyChar_00641cf2
        ;   Label: LAB_0055bb2e
    JMP 0x0055a8bb                      ; 0055bb39
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    CMP dword ptr [0x0310ec9c],0x0      ; 0055bb3e | g_ScriptEventsEnabled
        ;   Label: LAB_0055bb3e
    JZ 0x0055bb51                       ; 0055bb45
        ;   XREF to: 0055bb51 (CONDITIONAL_JUMP)  ; LAB_0055bb51
    MOV dword ptr [0x0310ec9c],0x2      ; 0055bb47 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],0x641d02 ; 0055bb51 | s_EmptyChar_00641d02
        ;   Label: LAB_0055bb51
    JMP 0x0055a8bb                      ; 0055bb5c
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    CMP dword ptr [0x0310ec9c],0x0      ; 0055bb61 | g_ScriptEventsEnabled
        ;   Label: LAB_0055bb61
    JNZ 0x0055bb89                      ; 0055bb68
        ;   XREF to: 0055bb89 (CONDITIONAL_JUMP)  ; LAB_0055bb89
    PUSH ESI                            ; 0055bb6a
    MOV EAX,[0x006793d0]                ; 0055bb6b | g_CEventListPtr | g_CEventListInstance
    PUSH EAX                            ; 0055bb70 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 0055bb71
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0055bb76
    MOV dword ptr [ESP + 0x3e8c],0x641e5e ; 0055bb79 | s_EmptyChar_00641e5e
        ;   Label: LAB_0055bb79
    JMP 0x0055a8bb                      ; 0055bb84
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH ESI                            ; 0055bb89
        ;   Label: LAB_0055bb89
    MOV EDX,dword ptr [0x006793d0]      ; 0055bb8a | g_CEventListPtr | g_CEventListInstance
    PUSH EDX                            ; 0055bb90 | g_CEventListInstance
    CALL core_event.cpp_CEventList_validateCommands_FUN_004add40 ; 0055bb91
        ;   XREF to: 004add40 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_004add40(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0055bb96
    TEST EAX,EAX                        ; 0055bb99
    JZ 0x0055bb79                       ; 0055bb9b
        ;   XREF to: 0055bb79 (CONDITIONAL_JUMP)  ; LAB_0055bb79
    MOV EDI,0x310eca0                   ; 0055bb9d | g_ScriptErrorBuffer
        ;   Label: LAB_0055bb9d
    MOV ESI,EAX                         ; 0055bba2
    PUSH EDI                            ; 0055bba4 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055bba5
        ;   Label: LAB_0055bba5
    MOV byte ptr [EDI],AL               ; 0055bba7 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055bba9
    JZ 0x0055bbbd                       ; 0055bbab
        ;   XREF to: 0055bbbd (CONDITIONAL_JUMP)  ; LAB_0055bbbd
    MOV AL,byte ptr [ESI + 0x1]         ; 0055bbad
    ADD ESI,0x2                         ; 0055bbb0
    MOV byte ptr [EDI + 0x1],AL         ; 0055bbb3 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055bbb6
    CMP AL,0x0                          ; 0055bbb9
    JNZ 0x0055bba5                      ; 0055bbbb
        ;   XREF to: 0055bba5 (CONDITIONAL_JUMP)  ; LAB_0055bba5
    POP EDI                             ; 0055bbbd
        ;   Label: LAB_0055bbbd
    JMP 0x0055a98c                      ; 0055bbbe
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x12                        ; 0055bbc3
        ;   Label: LAB_0055bbc3
    PUSH ESI                            ; 0055bbc6
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055bbc7
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055bbcc
    LEA EDX,[ESP + 0x3ec0]              ; 0055bbcf
    PUSH EDX                            ; 0055bbd6
    LEA EDX,[ESP + 0x17c8]              ; 0055bbd7
    PUSH EDX                            ; 0055bbde
    LEA EDX,[ESP + 0x30cc]              ; 0055bbdf
    PUSH EDX                            ; 0055bbe6
    PUSH 0x641e72                       ; 0055bbe7 | = " ( %[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0055bbec
    PUSH EAX                            ; 0055bbf1
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055bbf2
    MOV dword ptr [ESP + 0x3ed4],ESI    ; 0055bbf9
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055bc00
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055bc05
    MOV EDI,dword ptr [ESP + 0x3ec0]    ; 0055bc08
    CMP EDI,0x3                         ; 0055bc0f
    JGE 0x0055bc2b                      ; 0055bc12
        ;   XREF to: 0055bc2b (CONDITIONAL_JUMP)  ; LAB_0055bc2b
    PUSH 0x641e85                       ; 0055bc14 | = "Error parsing addItemToInventory comm..."
    PUSH 0x310eca0                      ; 0055bc19 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055bc1e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055bc23
    JMP 0x0055a98c                      ; 0055bc26
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055bc2b
        ;   Label: LAB_0055bc2b
    LEA EAX,[ESP + 0x30c4]              ; 0055bc32
    ADD EDX,EDI                         ; 0055bc39
    PUSH EAX                            ; 0055bc3b
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055bc3c
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055bc43
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055bc48
    LEA EAX,[ESP + 0x17c4]              ; 0055bc4b
    PUSH EAX                            ; 0055bc52
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055bc53
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055bc58
    PUSH 0x2db87d4                      ; 0055bc5b | g_CHeroClassInfo
    MOV ECX,dword ptr [0x02db880c]      ; 0055bc60 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0055bc66
    LEA EAX,[ESP + 0x30cc]              ; 0055bc67
    PUSH EAX                            ; 0055bc6e
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055bc6f
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055bc74
    ADD ESP,0xc                         ; 0055bc76
    TEST EAX,EAX                        ; 0055bc79
    JNZ 0x0055bc8f                      ; 0055bc7b
        ;   XREF to: 0055bc8f (CONDITIONAL_JUMP)  ; LAB_0055bc8f
    CMP dword ptr [0x0310f4ac],0x0      ; 0055bc7d | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055bc84
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055bc8a
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055bc8f | g_CDemonActorClassInfo
        ;   Label: LAB_0055bc8f
    MOV EDI,dword ptr [0x00822030]      ; 0055bc94 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0055bc9a
    LEA EAX,[ESP + 0x17cc]              ; 0055bc9b
    PUSH EAX                            ; 0055bca2
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055bca3
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055bca8
    TEST EAX,EAX                        ; 0055bcab
    JNZ 0x0055bcc1                      ; 0055bcad
        ;   XREF to: 0055bcc1 (CONDITIONAL_JUMP)  ; LAB_0055bcc1
    CMP dword ptr [0x0310f4ac],0x0      ; 0055bcaf | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055bcb6
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055bcbc
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [0x0310ec9c]      ; 0055bcc1 | g_ScriptEventsEnabled
        ;   Label: LAB_0055bcc1
    TEST EDX,EDX                        ; 0055bcc7
    JNZ 0x0055a8bb                      ; 0055bcc9
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EDX                            ; 0055bccf
    PUSH EAX                            ; 0055bcd0
    ADD ESI,0x1f738                     ; 0055bcd1
    PUSH ESI                            ; 0055bcd7
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 0055bcd8
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0055bcdd
    JMP 0x0055a8bb                      ; 0055bce0
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xe                         ; 0055bce5
        ;   Label: LAB_0055bce5
    PUSH ESI                            ; 0055bce8
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055bce9
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055bcee
    LEA EDX,[ESP + 0x3ec8]              ; 0055bcf1
    PUSH EDX                            ; 0055bcf8
    LEA EDX,[ESP + 0x3f08]              ; 0055bcf9
    PUSH EDX                            ; 0055bd00
    LEA EDX,[ESP + 0x3d60]              ; 0055bd01
    PUSH EDX                            ; 0055bd08
    LEA EDX,[ESP + 0x39e0]              ; 0055bd09
    PUSH EDX                            ; 0055bd10
    PUSH 0x641ec3                       ; 0055bd11 | = "( %[^,], %[^,], %f )%n"
    MOV EDI,0xffffffff                  ; 0055bd16
    PUSH EAX                            ; 0055bd1b
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0055bd1c
    MOV dword ptr [ESP + 0x3ee0],EDI    ; 0055bd23
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055bd2a
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 0055bd2f
    MOV EAX,dword ptr [ESP + 0x3ec8]    ; 0055bd32
    CMP EAX,0x5                         ; 0055bd39
    JGE 0x0055bd55                      ; 0055bd3c
        ;   XREF to: 0055bd55 (CONDITIONAL_JUMP)  ; LAB_0055bd55
    PUSH 0x641eda                       ; 0055bd3e | = "Error parsing addLightFilter command ..."
    PUSH 0x310eca0                      ; 0055bd43 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055bd48
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055bd4d
    JMP 0x0055a98c                      ; 0055bd50
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055bd55
        ;   Label: LAB_0055bd55
    ADD EDX,EAX                         ; 0055bd5c
    LEA EAX,[ESP + 0x3ea8]              ; 0055bd5e
    PUSH EAX                            ; 0055bd65
    LEA EAX,[ESP + 0x3e94]              ; 0055bd66
    PUSH EAX                            ; 0055bd6d
    LEA EAX,[ESP + 0x39dc]              ; 0055bd6e
    PUSH EAX                            ; 0055bd75
    MOV ECX,dword ptr [0x006810c8]      ; 0055bd76 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0055bd7c | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x3e9c],EDX    ; 0055bd7d
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10 ; 0055bd84
        ;   XREF to: 00570f10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0055bd89
    CMP dword ptr [ESP + 0x3e90],0x0    ; 0055bd8c
    JNZ 0x0055bdb5                      ; 0055bd94
        ;   XREF to: 0055bdb5 (CONDITIONAL_JUMP)  ; LAB_0055bdb5
    LEA EAX,[ESP + 0x39d4]              ; 0055bd96
    PUSH EAX                            ; 0055bd9d
    PUSH 0x641f05                       ; 0055bd9e | = "Light \"%s\" does not exist"
    PUSH 0x310eca0                      ; 0055bda3 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055bda8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055bdad
    JMP 0x0055a98c                      ; 0055bdb0
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3d58]              ; 0055bdb5
        ;   Label: LAB_0055bdb5
    PUSH EAX                            ; 0055bdbc
    PUSH 0x641f1f                       ; 0055bdbd | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0055bdc2
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0055bdc7
    TEST EAX,EAX                        ; 0055bdca
    JLE 0x0055be01                      ; 0055bdcc
        ;   XREF to: 0055be01 (CONDITIONAL_JUMP)  ; LAB_0055be01
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055bdce | g_ScriptEventsEnabled
    TEST EDI,EDI                        ; 0055bdd4
    JNZ 0x0055a8bb                      ; 0055bdd6
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EDI                            ; 0055bddc
    LEA EAX,[ESP + 0x3d5c]              ; 0055bddd
    PUSH dword ptr [ESP + 0x3f08]       ; 0055bde4
    PUSH EAX                            ; 0055bdeb
    MOV EAX,dword ptr [ESP + 0x3e9c]    ; 0055bdec
    PUSH EAX                            ; 0055bdf3
    CALL core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0 ; 0055bdf4
        ;   XREF to: 00586fa0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0(C3DSLight * this_ptr, char * filter_name, float duration, int filter_mode)
    ADD ESP,0x10                        ; 0055bdf9
    JMP 0x0055a8bb                      ; 0055bdfc
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3d58]              ; 0055be01
        ;   Label: LAB_0055be01
    PUSH EAX                            ; 0055be08
    PUSH 0x641f23                       ; 0055be09 | = "Can't open filter \"%s\""
    PUSH 0x310eca0                      ; 0055be0e | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055be13
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055be18
    JMP 0x0055a98c                      ; 0055be1b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x10                        ; 0055be20
        ;   Label: LAB_0055be20
    PUSH ESI                            ; 0055be23
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055be24
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055be29
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055be2c
    LEA EAX,[ESP + 0x3650]              ; 0055be33
    PUSH EAX                            ; 0055be3a
    LEA EAX,[ESP + 0x3e90]              ; 0055be3b
    PUSH EAX                            ; 0055be42
    CALL core_script.cpp_parseConditionExpr_FUN_005594a0 ; 0055be43
        ;   XREF to: 005594a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_005594a0(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0055be48
    TEST EAX,EAX                        ; 0055be4b
    JNZ 0x0055bb9d                      ; 0055be4d
        ;   XREF to: 0055bb9d (CONDITIONAL_JUMP)  ; LAB_0055bb9d
    CMP dword ptr [0x0310ec9c],0x0      ; 0055be53 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055be5a
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3650]              ; 0055be60
    PUSH EAX                            ; 0055be67
    MOV ECX,dword ptr [0x006793d0]      ; 0055be68 | g_CEventListPtr
    PUSH ECX                            ; 0055be6e | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055be6f
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x0067b654]      ; 0055be74 | g_CGamePtr
    ADD ESP,0x8                         ; 0055be7a
    MOV dword ptr [EDX + 0x230],EAX     ; 0055be7d | DAT_02d81ccc
    JMP 0x0055a8bb                      ; 0055be83
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x11                        ; 0055be88
        ;   Label: LAB_0055be88
    PUSH ESI                            ; 0055be8b
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055be8c
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055be91
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055be94
    LEA EAX,[ESP + 0x33f8]              ; 0055be9b
    PUSH EAX                            ; 0055bea2
    LEA EAX,[ESP + 0x3e90]              ; 0055bea3
    PUSH EAX                            ; 0055beaa
    CALL core_script.cpp_parseConditionExpr_FUN_005594a0 ; 0055beab
        ;   XREF to: 005594a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_005594a0(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0055beb0
    TEST EAX,EAX                        ; 0055beb3
    JNZ 0x0055bb9d                      ; 0055beb5
        ;   XREF to: 0055bb9d (CONDITIONAL_JUMP)  ; LAB_0055bb9d
    CMP dword ptr [0x0310ec9c],0x0      ; 0055bebb | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055bec2
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x33f8]              ; 0055bec8
    PUSH EAX                            ; 0055becf
    MOV EDI,dword ptr [0x006793d0]      ; 0055bed0 | g_CEventListPtr
    PUSH EDI                            ; 0055bed6 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055bed7
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055bedc
    XOR EDX,EDX                         ; 0055bedf
    TEST EAX,EAX                        ; 0055bee1
    SETZ AL                             ; 0055bee3
    MOV DL,AL                           ; 0055bee6
    MOV EAX,[0x0067b654]                ; 0055bee8 | g_CGamePtr
    MOV dword ptr [0x0310f4a4],EDX      ; 0055beed | g_ScriptInputFlag
    MOV dword ptr [EAX + 0x238],EDX     ; 0055bef3 | DAT_02d81cd4
    JMP 0x0055a8bb                      ; 0055bef9
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xf                         ; 0055befe
        ;   Label: LAB_0055befe
    PUSH ESI                            ; 0055bf01
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055bf02
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055bf07
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055bf0a
    LEA EAX,[ESP + 0x3524]              ; 0055bf11
    PUSH EAX                            ; 0055bf18
    LEA EAX,[ESP + 0x3e90]              ; 0055bf19
    PUSH EAX                            ; 0055bf20
    CALL core_script.cpp_parseConditionExpr_FUN_005594a0 ; 0055bf21
        ;   XREF to: 005594a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_005594a0(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0055bf26
    TEST EAX,EAX                        ; 0055bf29
    JNZ 0x0055bb9d                      ; 0055bf2b
        ;   XREF to: 0055bb9d (CONDITIONAL_JUMP)  ; LAB_0055bb9d
    CMP dword ptr [0x0310ec9c],0x0      ; 0055bf31 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055bf38
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3524]              ; 0055bf3e
    PUSH EAX                            ; 0055bf45
    MOV EDX,dword ptr [0x006793d0]      ; 0055bf46 | g_CEventListPtr
    PUSH EDX                            ; 0055bf4c | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055bf4d
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x0067b654]      ; 0055bf52 | g_CGamePtr
    ADD ESP,0x8                         ; 0055bf58
    MOV dword ptr [EDX + 0x22c],EAX     ; 0055bf5b | DAT_02d81cc8
    JMP 0x0055a8bb                      ; 0055bf61
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x15                        ; 0055bf66
        ;   Label: LAB_0055bf66
    PUSH ESI                            ; 0055bf69
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055bf6a
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055bf6f
    LEA EDX,[ESP + 0x3e9c]              ; 0055bf72
    PUSH EDX                            ; 0055bf79
    LEA EDX,[ESP + 0x2510]              ; 0055bf7a
    PUSH EDX                            ; 0055bf81
    LEA EDX,[ESP + 0x26a4]              ; 0055bf82
    PUSH EDX                            ; 0055bf89
    PUSH 0x641f83                       ; 0055bf8a | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0055bf8f
    PUSH EAX                            ; 0055bf94
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055bf95
    MOV dword ptr [ESP + 0x3eb0],ECX    ; 0055bf9c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055bfa3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055bfa8
    MOV ESI,dword ptr [ESP + 0x3e9c]    ; 0055bfab
    CMP ESI,0x2                         ; 0055bfb2
    JGE 0x0055bfce                      ; 0055bfb5
        ;   XREF to: 0055bfce (CONDITIONAL_JUMP)  ; LAB_0055bfce
    PUSH 0x641f94                       ; 0055bfb7 | = "Error parsing attachActorToPlatform c..."
    PUSH 0x310eca0                      ; 0055bfbc | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055bfc1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055bfc6
    JMP 0x0055a98c                      ; 0055bfc9
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDI,dword ptr [ESP + 0x3e8c]    ; 0055bfce
        ;   Label: LAB_0055bfce
    LEA EAX,[ESP + 0x269c]              ; 0055bfd5
    ADD EDI,ESI                         ; 0055bfdc
    PUSH EAX                            ; 0055bfde
    MOV dword ptr [ESP + 0x3e90],EDI    ; 0055bfdf
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055bfe6
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055bfeb
    LEA EAX,[ESP + 0x250c]              ; 0055bfee
    PUSH EAX                            ; 0055bff5
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055bff6
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055bffb
    PUSH 0x30d5054                      ; 0055bffe | g_CPlatformClassInfo
    MOV EAX,[0x030d508c]                ; 0055c003 | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 0055c008
    LEA EAX,[ESP + 0x2514]              ; 0055c009
    PUSH EAX                            ; 0055c010
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055c011
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055c016
    ADD ESP,0xc                         ; 0055c018
    TEST EAX,EAX                        ; 0055c01b
    JNZ 0x0055c031                      ; 0055c01d
        ;   XREF to: 0055c031 (CONDITIONAL_JUMP)  ; LAB_0055c031
    CMP dword ptr [0x0310f4ac],0x0      ; 0055c01f | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055c026
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055c02c
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055c031 | g_CDemonActorClassInfo
        ;   Label: LAB_0055c031
    MOV EDX,dword ptr [0x00822030]      ; 0055c036 | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 0055c03c
    LEA EAX,[ESP + 0x26a4]              ; 0055c03d
    PUSH EAX                            ; 0055c044
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055c045
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055c04a
    TEST EAX,EAX                        ; 0055c04d
    JNZ 0x0055c063                      ; 0055c04f
        ;   XREF to: 0055c063 (CONDITIONAL_JUMP)  ; LAB_0055c063
    CMP dword ptr [0x0310f4ac],0x0      ; 0055c051 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055c058
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055c05e
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055c063 | g_ScriptEventsEnabled
        ;   Label: LAB_0055c063
    JNZ 0x0055a8bb                      ; 0055c06a
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055c070
    PUSH ESI                            ; 0055c071
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 ; 0055c072
        ;   XREF to: 0054e1e0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform * this_ptr)
    ADD ESP,0x8                         ; 0055c077
    JMP 0x0055a8bb                      ; 0055c07a
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xb                         ; 0055c07f
        ;   Label: LAB_0055c07f
    PUSH ESI                            ; 0055c082
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c083
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c088
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055c08b
    CMP dword ptr [0x0310ec9c],0x0      ; 0055c092 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055c099
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [0x0067b654]      ; 0055c09f | g_CGamePtr
    PUSH EDX                            ; 0055c0a5 | g_CGameInstance
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004e0920 ; 0055c0a6
        ;   XREF to: 004e0920 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055c0ab
    JMP 0x0055a8bb                      ; 0055c0ae
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xc                         ; 0055c0b3
        ;   Label: LAB_0055c0b3
    PUSH ESI                            ; 0055c0b6
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c0b7
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c0bc
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055c0bf | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055c0c5
    TEST ECX,ECX                        ; 0055c0cc
    JNZ 0x0055a8bb                      ; 0055c0ce
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,dword ptr [0x0067b654]      ; 0055c0d4 | g_CGamePtr
    PUSH ESI                            ; 0055c0da | g_CGameInstance
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004e0960 ; 0055c0db
        ;   XREF to: 004e0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004e0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055c0e0
    JMP 0x0055a8bb                      ; 0055c0e3
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xa                         ; 0055c0e8
        ;   Label: LAB_0055c0e8
    PUSH ESI                            ; 0055c0eb
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c0ec
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c0f1
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055c0f4 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055c0fa
    TEST EDI,EDI                        ; 0055c101
    JNZ 0x0055a8bb                      ; 0055c103
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 0055c109
    PUSH EAX                            ; 0055c110
    PUSH 0x641fea                       ; 0055c111 | = "Script breakpoint reached at line %d"
    LEA EAX,[ESP + 0x3720]              ; 0055c116
    PUSH EAX                            ; 0055c11d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055c11e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055c123
    LEA EAX,[ESP + 0x3718]              ; 0055c126
    PUSH 0x40a00000                     ; 0055c12d
    PUSH EAX                            ; 0055c132
    MOV EDX,dword ptr [0x0067b654]      ; 0055c133 | g_CGamePtr
    PUSH EDX                            ; 0055c139 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 0055c13a
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0055c13f
    MOV dword ptr [EBX + 0x18],0x2      ; 0055c142
    JMP 0x0055a8bb                      ; 0055c149
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x10                        ; 0055c14e
        ;   Label: LAB_0055c14e
    PUSH ESI                            ; 0055c151
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c152
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c157
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055c15a | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055c160
    TEST ECX,ECX                        ; 0055c167
    JNZ 0x0055a8bb                      ; 0055c169
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,dword ptr [0x006810c8]      ; 0055c16f | g_CDemonSetPtr
    PUSH ESI                            ; 0055c175 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20 ; 0055c176
        ;   XREF to: 00575b20 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0055c17b
    JMP 0x0055a8bb                      ; 0055c17e
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xc                         ; 0055c183
        ;   Label: LAB_0055c183
    PUSH ESI                            ; 0055c186
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c187
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c18c
    PUSH 0xc8                           ; 0055c18f
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055c194
    LEA EAX,[ESP + 0x1c78]              ; 0055c19b
    PUSH EAX                            ; 0055c1a2
    LEA EAX,[ESP + 0x3e94]              ; 0055c1a3
    PUSH EAX                            ; 0055c1aa
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055c1ab
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055c1b0
    TEST EAX,EAX                        ; 0055c1b3
    JZ 0x0055c1dd                       ; 0055c1b5
        ;   XREF to: 0055c1dd (CONDITIONAL_JUMP)  ; LAB_0055c1dd
    MOV EDI,0x310eca0                   ; 0055c1b7 | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055c1bc
    PUSH EDI                            ; 0055c1be | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055c1bf
        ;   Label: LAB_0055c1bf
    MOV byte ptr [EDI],AL               ; 0055c1c1 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055c1c3
    JZ 0x0055c1d7                       ; 0055c1c5
        ;   XREF to: 0055c1d7 (CONDITIONAL_JUMP)  ; LAB_0055c1d7
    MOV AL,byte ptr [ESI + 0x1]         ; 0055c1c7
    ADD ESI,0x2                         ; 0055c1ca
    MOV byte ptr [EDI + 0x1],AL         ; 0055c1cd | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055c1d0
    CMP AL,0x0                          ; 0055c1d3
    JNZ 0x0055c1bf                      ; 0055c1d5
        ;   XREF to: 0055c1bf (CONDITIONAL_JUMP)  ; LAB_0055c1bf
    POP EDI                             ; 0055c1d7
        ;   Label: LAB_0055c1d7
    JMP 0x0055a98c                      ; 0055c1d8
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x64202d                       ; 0055c1dd | = "all"
        ;   Label: LAB_0055c1dd
    LEA EAX,[ESP + 0x1c78]              ; 0055c1e2
    PUSH EAX                            ; 0055c1e9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055c1ea
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055c1ef
    TEST EAX,EAX                        ; 0055c1f2
    JNZ 0x0055c250                      ; 0055c1f4
        ;   XREF to: 0055c250 (CONDITIONAL_JUMP)  ; LAB_0055c250
    MOV ESI,dword ptr [0x0310ec9c]      ; 0055c1f6 | g_ScriptEventsEnabled
    TEST ESI,ESI                        ; 0055c1fc
    JNZ 0x0055a8bb                      ; 0055c1fe
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    XOR EDI,EDI                         ; 0055c204
    MOV EAX,[0x006810c8]                ; 0055c206 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0055c206
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 0055c20b | g_CDemonSetInstance.actor_count
    JGE 0x0055a8bb                      ; 0055c211
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ECX,dword ptr [0x00823c4c]      ; 0055c217 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0055c21d
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 0055c21e | g_CDemonSetInstance.actors[0] | DAT_032613d4
    PUSH EDX                            ; 0055c225
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0055c226
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0055c22b
    TEST EAX,EAX                        ; 0055c22e
    JNZ 0x0055c238                      ; 0055c230
        ;   XREF to: 0055c238 (CONDITIONAL_JUMP)  ; LAB_0055c238
    INC ESI                             ; 0055c232
        ;   Label: LAB_0055c232
    ADD EDI,0x4                         ; 0055c233
    JMP 0x0055c206                      ; 0055c236
        ;   XREF to: 0055c206 (UNCONDITIONAL_JUMP)  ; LAB_0055c206
    PUSH 0x0                            ; 0055c238
        ;   Label: LAB_0055c238
    PUSH 0x0                            ; 0055c23a
    PUSH 0x0                            ; 0055c23c
    MOV EDX,dword ptr [EAX + 0x154]     ; 0055c23e
    PUSH EAX                            ; 0055c244
    CALL dword ptr [EDX + 0x144]        ; 0055c245
    ADD ESP,0x10                        ; 0055c24b
    JMP 0x0055c232                      ; 0055c24e
        ;   XREF to: 0055c232 (UNCONDITIONAL_JUMP)  ; LAB_0055c232
    PUSH 0x823c14                       ; 0055c250 | g_CCharacterClassInfo
        ;   Label: LAB_0055c250
    MOV EDI,dword ptr [0x00823c4c]      ; 0055c255 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0055c25b
    LEA EAX,[ESP + 0x1c7c]              ; 0055c25c
    PUSH EAX                            ; 0055c263
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055c264
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055c269
    TEST EAX,EAX                        ; 0055c26c
    JNZ 0x0055c282                      ; 0055c26e
        ;   XREF to: 0055c282 (CONDITIONAL_JUMP)  ; LAB_0055c282
    CMP dword ptr [0x0310f4ac],0x0      ; 0055c270 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055c277
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055c27d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055c282 | g_ScriptEventsEnabled
        ;   Label: LAB_0055c282
    JNZ 0x0055a8bb                      ; 0055c289
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x0                            ; 0055c28f
    PUSH 0x0                            ; 0055c291
    PUSH 0x0                            ; 0055c293
    MOV EDX,dword ptr [EAX + 0x154]     ; 0055c295
    PUSH EAX                            ; 0055c29b
    CALL dword ptr [EDX + 0x144]        ; 0055c29c
    ADD ESP,0x10                        ; 0055c2a2
    JMP 0x0055a8bb                      ; 0055c2a5
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xe                         ; 0055c2aa
        ;   Label: LAB_0055c2aa
    PUSH ESI                            ; 0055c2ad
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c2ae
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c2b3
    PUSH 0xc8                           ; 0055c2b6
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055c2bb
    LEA EAX,[ESP + 0x1188]              ; 0055c2c2
    PUSH EAX                            ; 0055c2c9
    LEA EAX,[ESP + 0x3e94]              ; 0055c2ca
    PUSH EAX                            ; 0055c2d1
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055c2d2
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055c2d7
    TEST EAX,EAX                        ; 0055c2da
    JZ 0x0055c304                       ; 0055c2dc
        ;   XREF to: 0055c304 (CONDITIONAL_JUMP)  ; LAB_0055c304
    MOV EDI,0x310eca0                   ; 0055c2de | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055c2e3
    PUSH EDI                            ; 0055c2e5 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055c2e6
        ;   Label: LAB_0055c2e6
    MOV byte ptr [EDI],AL               ; 0055c2e8 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055c2ea
    JZ 0x0055c2fe                       ; 0055c2ec
        ;   XREF to: 0055c2fe (CONDITIONAL_JUMP)  ; LAB_0055c2fe
    MOV AL,byte ptr [ESI + 0x1]         ; 0055c2ee
    ADD ESI,0x2                         ; 0055c2f1
    MOV byte ptr [EDI + 0x1],AL         ; 0055c2f4 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055c2f7
    CMP AL,0x0                          ; 0055c2fa
    JNZ 0x0055c2e6                      ; 0055c2fc
        ;   XREF to: 0055c2e6 (CONDITIONAL_JUMP)  ; LAB_0055c2e6
    POP EDI                             ; 0055c2fe
        ;   Label: LAB_0055c2fe
    JMP 0x0055a98c                      ; 0055c2ff
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x1184]              ; 0055c304
        ;   Label: LAB_0055c304
    PUSH EAX                            ; 0055c30b
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055c30c
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055c311 | g_ScriptEventsEnabled
    ADD ESP,0x4                         ; 0055c317
    TEST EDI,EDI                        ; 0055c31a
    JNZ 0x0055a8bb                      ; 0055c31c
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x1184]              ; 0055c322
    PUSH EAX                            ; 0055c329
    MOV EAX,[0x0067d550]                ; 0055c32a | g_CDemonMissionPtr | g_CDemonMissionInstance
    PUSH EAX                            ; 0055c32f | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_setMissionName_FUN_00524630 ; 0055c330
        ;   XREF to: 00524630 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setMissionName_FUN_00524630(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0055c335
    MOV dword ptr [EBX],0x1             ; 0055c338
    MOV dword ptr [ESP + 0x3e94],EDI    ; 0055c33e
    JMP 0x0055a8bb                      ; 0055c345
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x12                        ; 0055c34a
        ;   Label: LAB_0055c34a
    PUSH ESI                            ; 0055c34d
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c34e
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c353
    PUSH 0x12c                          ; 0055c356
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055c35b
    LEA EAX,[ESP + 0x828]               ; 0055c362
    PUSH EAX                            ; 0055c369
    LEA EAX,[ESP + 0x3e94]              ; 0055c36a
    PUSH EAX                            ; 0055c371
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055c372
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055c377
    TEST EAX,EAX                        ; 0055c37a
    JZ 0x0055c3a4                       ; 0055c37c
        ;   XREF to: 0055c3a4 (CONDITIONAL_JUMP)  ; LAB_0055c3a4
    MOV EDI,0x310eca0                   ; 0055c37e | g_ScriptErrorBuffer
        ;   Label: LAB_0055c37e
    MOV ESI,EAX                         ; 0055c383
    PUSH EDI                            ; 0055c385 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055c386
        ;   Label: LAB_0055c386
    MOV byte ptr [EDI],AL               ; 0055c388 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055c38a
    JZ 0x0055c39e                       ; 0055c38c
        ;   XREF to: 0055c39e (CONDITIONAL_JUMP)  ; LAB_0055c39e
    MOV AL,byte ptr [ESI + 0x1]         ; 0055c38e
    ADD ESI,0x2                         ; 0055c391
    MOV byte ptr [EDI + 0x1],AL         ; 0055c394 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055c397
    CMP AL,0x0                          ; 0055c39a
    JNZ 0x0055c386                      ; 0055c39c
        ;   XREF to: 0055c386 (CONDITIONAL_JUMP)  ; LAB_0055c386
    POP EDI                             ; 0055c39e
        ;   Label: LAB_0055c39e
    JMP 0x0055a98c                      ; 0055c39f
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x824]               ; 0055c3a4
        ;   Label: LAB_0055c3a4
    PUSH EAX                            ; 0055c3ab
    CALL core_script.cpp_validateActorVariableName_FUN_00559220 ; 0055c3ac
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_00559220(char * variable_name)
    ADD ESP,0x4                         ; 0055c3b1
    TEST EAX,EAX                        ; 0055c3b4
    JZ 0x0055a98c                       ; 0055c3b6
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055c3bc | g_ScriptEventsEnabled
    TEST ECX,ECX                        ; 0055c3c2
    JNZ 0x0055a8bb                      ; 0055c3c4
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH ECX                            ; 0055c3ca
    LEA EAX,[ESP + 0x828]               ; 0055c3cb
    PUSH EAX                            ; 0055c3d2
    MOV ESI,dword ptr [0x006793d0]      ; 0055c3d3 | g_CEventListPtr
    PUSH ESI                            ; 0055c3d9 | g_CEventListInstance
    CALL core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 ; 0055c3da
        ;   XREF to: 004b09a0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList * this_ptr)
    ADD ESP,0xc                         ; 0055c3df
    JMP 0x0055a8bb                      ; 0055c3e2
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x5                         ; 0055c3e7
        ;   Label: LAB_0055c3e7
    PUSH ESI                            ; 0055c3ea
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c3eb
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c3f0
    LEA EDX,[ESP + 0x3ea0]              ; 0055c3f3
    PUSH EDX                            ; 0055c3fa
    LEA EDX,[ESP + 0x3398]              ; 0055c3fb
    PUSH EDX                            ; 0055c402
    PUSH 0x642059                       ; 0055c403 | = "(%[^)])%n"
    MOV EDI,0xffffffff                  ; 0055c408
    PUSH EAX                            ; 0055c40d
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055c40e
    MOV dword ptr [ESP + 0x3eb0],EDI    ; 0055c415
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055c41c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055c421
    CMP dword ptr [ESP + 0x3ea0],0x3    ; 0055c424
    JL 0x0055c506                       ; 0055c42c
        ;   XREF to: 0055c506 (CONDITIONAL_JUMP)  ; LAB_0055c506
    LEA EAX,[ESP + 0x3394]              ; 0055c432
    PUSH EAX                            ; 0055c439
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055c43a
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055c43f
    MOV EAX,dword ptr [ESP + 0x3ea0]    ; 0055c442
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055c449
    ADD EDX,EAX                         ; 0055c450
    LEA EAX,[ESP + 0x3394]              ; 0055c452
    PUSH EAX                            ; 0055c459
    PUSH EBX                            ; 0055c45a
    MOV dword ptr [ESP + 0x3e94],EDX    ; 0055c45b
    CALL core_script.cpp_CScript_findDialogEntry_FUN_005606e0 ; 0055c462
        ;   XREF to: 005606e0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_005606e0(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0055c467
    TEST EAX,EAX                        ; 0055c46a
    JL 0x0055c51d                       ; 0055c46c
        ;   XREF to: 0055c51d (CONDITIONAL_JUMP)  ; LAB_0055c51d
    IMUL EAX,EAX,0x226                  ; 0055c472
    MOV EDX,dword ptr [EBX + 0x20]      ; 0055c478
    ADD EAX,EDX                         ; 0055c47b
    LEA EDX,[EAX + 0x78]                ; 0055c47d
    MOV dword ptr [ESP + 0x3ec4],EDX    ; 0055c480
    LEA EDX,[EAX + 0x96]                ; 0055c487
    LEA EDI,[ESP + 0x3394]              ; 0055c48d
    LEA ESI,[EAX + 0x3c]                ; 0055c494
    MOV dword ptr [ESP + 0x3ea4],EDX    ; 0055c497
    PUSH EDI                            ; 0055c49e
    MOV AL,byte ptr [ESI]               ; 0055c49f
        ;   Label: LAB_0055c49f
    MOV byte ptr [EDI],AL               ; 0055c4a1
    CMP AL,0x0                          ; 0055c4a3
    JZ 0x0055c4b7                       ; 0055c4a5
        ;   XREF to: 0055c4b7 (CONDITIONAL_JUMP)  ; LAB_0055c4b7
    MOV AL,byte ptr [ESI + 0x1]         ; 0055c4a7
    ADD ESI,0x2                         ; 0055c4aa
    MOV byte ptr [EDI + 0x1],AL         ; 0055c4ad
    ADD EDI,0x2                         ; 0055c4b0
    CMP AL,0x0                          ; 0055c4b3
    JNZ 0x0055c49f                      ; 0055c4b5
        ;   XREF to: 0055c49f (CONDITIONAL_JUMP)  ; LAB_0055c49f
    POP EDI                             ; 0055c4b7
        ;   Label: LAB_0055c4b7
    FLD float ptr [EBX + 0x50]          ; 0055c4b8
        ;   Label: LAB_0055c4b8
    FLDZ                                ; 0055c4bb
    FCOMPP                              ; 0055c4bd
    FNSTSW AX                           ; 0055c4bf
    SAHF                                ; 0055c4c1
    JA 0x0055c56e                       ; 0055c4c2
        ;   XREF to: 0055c56e (CONDITIONAL_JUMP)  ; LAB_0055c56e
    CMP dword ptr [0x0310ec9c],0x0      ; 0055c4c8 | g_ScriptEventsEnabled
        ;   Label: LAB_0055c4c8
    JNZ 0x0055a8bb                      ; 0055c4cf
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [EBP + 0x18]      ; 0055c4d5
    PUSH EDX                            ; 0055c4d8
    PUSH dword ptr [EBX + 0x50]         ; 0055c4d9
    PUSH EBX                            ; 0055c4dc
    CALL core_script.cpp_CScript_processTimer_FUN_005600c0 ; 0055c4dd
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_005600c0(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0055c4e2
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055c4e5
    TEST EAX,EAX                        ; 0055c4ec
    JLE 0x0055a8bb                      ; 0055c4ee
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ECX,dword ptr [EBX + 0x4]       ; 0055c4f4
    PUSH ECX                            ; 0055c4f7
    PUSH EBX                            ; 0055c4f8
    CALL core_script.cpp_CScript_setSpeaker_FUN_00560140 ; 0055c4f9
        ;   XREF to: 00560140 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00560140(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0055c4fe
    JMP 0x0055a8bb                      ; 0055c501
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642063                       ; 0055c506 | = "Error parsing dbSay arguments"
        ;   Label: LAB_0055c506
    PUSH 0x310eca0                      ; 0055c50b | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055c510
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055c515
    JMP 0x0055a98c                      ; 0055c518
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x1d3c]              ; 0055c51d
        ;   Label: LAB_0055c51d
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0055c524
    LEA EAX,[ESP + 0x3394]              ; 0055c52b
    PUSH EAX                            ; 0055c532
    PUSH 0x642083                       ; 0055c533 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x1d44]              ; 0055c538
    MOV ECX,0x642081                    ; 0055c53f | = "$"
    PUSH EAX                            ; 0055c544
    MOV dword ptr [ESP + 0x3ed0],ECX    ; 0055c545 | = "$"
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055c54c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055c551
    LEA EAX,[ESP + 0x1d3c]              ; 0055c554
    PUSH EAX                            ; 0055c55b
    PUSH 0x310f4b0                      ; 0055c55c | g_ScriptPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055c561
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055c566
    JMP 0x0055c4b8                      ; 0055c569
        ;   XREF to: 0055c4b8 (UNCONDITIONAL_JUMP)  ; LAB_0055c4b8
    MOV ESI,dword ptr [ESP + 0x3ea4]    ; 0055c56e
        ;   Label: LAB_0055c56e
    PUSH ESI                            ; 0055c575
    LEA EAX,[ESP + 0x3398]              ; 0055c576
    PUSH EAX                            ; 0055c57d
    MOV EDI,dword ptr [ESP + 0x3ecc]    ; 0055c57e
    PUSH EDI                            ; 0055c585
    PUSH EBX                            ; 0055c586
    CALL core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 ; 0055c587
        ;   XREF to: 0055ff00 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_0055ff00(CScript * this_ptr, int param_2, char * param_3, char * param_4)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 0055c58c
    FLDZ                                ; 0055c593
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 0055c595
    MOV dword ptr [EBX + 0x50],EAX      ; 0055c59c
    ADD ESP,0x10                        ; 0055c59f
    FCOMP float ptr [EBX + 0x50]        ; 0055c5a2
    FNSTSW AX                           ; 0055c5a5
    SAHF                                ; 0055c5a7
    JA 0x0055a98c                       ; 0055c5a8
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    JMP 0x0055c4c8                      ; 0055c5ae
        ;   XREF to: 0055c4c8 (UNCONDITIONAL_JUMP)  ; LAB_0055c4c8
    ADD ESI,0xa                         ; 0055c5b3
        ;   Label: LAB_0055c5b3
    PUSH ESI                            ; 0055c5b6
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c5b7
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c5bc
    LEA EDX,[ESP + 0x3eac]              ; 0055c5bf
    PUSH EDX                            ; 0055c5c6
    LEA EDX,[ESP + 0x3dc0]              ; 0055c5c7
    PUSH EDX                            ; 0055c5ce
    PUSH 0x6420aa                       ; 0055c5cf | = "(%[^)])%n"
    MOV ESI,0xffffffff                  ; 0055c5d4
    PUSH EAX                            ; 0055c5d9
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055c5da
    MOV dword ptr [ESP + 0x3ebc],ESI    ; 0055c5e1
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055c5e8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055c5ed
    CMP dword ptr [ESP + 0x3eac],0x3    ; 0055c5f0
    JL 0x0055c6c9                       ; 0055c5f8
        ;   XREF to: 0055c6c9 (CONDITIONAL_JUMP)  ; LAB_0055c6c9
    LEA EAX,[ESP + 0x3dbc]              ; 0055c5fe
    PUSH EAX                            ; 0055c605
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055c606
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055c60b
    MOV EAX,dword ptr [ESP + 0x3eac]    ; 0055c60e
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055c615
    ADD EDX,EAX                         ; 0055c61c
    LEA EAX,[ESP + 0x3dbc]              ; 0055c61e
    PUSH EAX                            ; 0055c625
    PUSH EBX                            ; 0055c626
    MOV dword ptr [ESP + 0x3e94],EDX    ; 0055c627
    CALL core_script.cpp_CScript_findDialogEntry_FUN_005606e0 ; 0055c62e
        ;   XREF to: 005606e0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_005606e0(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0055c633
    TEST EAX,EAX                        ; 0055c636
    JL 0x0055c6e0                       ; 0055c638
        ;   XREF to: 0055c6e0 (CONDITIONAL_JUMP)  ; LAB_0055c6e0
    IMUL EAX,EAX,0x226                  ; 0055c63e
    MOV EDX,dword ptr [EBX + 0x20]      ; 0055c644
    ADD EAX,EDX                         ; 0055c647
    LEA EDX,[EAX + 0x78]                ; 0055c649
    MOV dword ptr [ESP + 0x3eb0],EDX    ; 0055c64c
    LEA EDX,[EAX + 0x96]                ; 0055c653
    LEA EDI,[ESP + 0x3dbc]              ; 0055c659
    LEA ESI,[EAX + 0x3c]                ; 0055c660
    MOV dword ptr [ESP + 0x3eb4],EDX    ; 0055c663
    PUSH EDI                            ; 0055c66a
    MOV AL,byte ptr [ESI]               ; 0055c66b
        ;   Label: LAB_0055c66b
    MOV byte ptr [EDI],AL               ; 0055c66d
    CMP AL,0x0                          ; 0055c66f
    JZ 0x0055c683                       ; 0055c671
        ;   XREF to: 0055c683 (CONDITIONAL_JUMP)  ; LAB_0055c683
    MOV AL,byte ptr [ESI + 0x1]         ; 0055c673
    ADD ESI,0x2                         ; 0055c676
    MOV byte ptr [EDI + 0x1],AL         ; 0055c679
    ADD EDI,0x2                         ; 0055c67c
    CMP AL,0x0                          ; 0055c67f
    JNZ 0x0055c66b                      ; 0055c681
        ;   XREF to: 0055c66b (CONDITIONAL_JUMP)  ; LAB_0055c66b
    POP EDI                             ; 0055c683
        ;   Label: LAB_0055c683
    MOV ESI,dword ptr [ESP + 0x3eb4]    ; 0055c684
        ;   Label: LAB_0055c684
    PUSH ESI                            ; 0055c68b
    LEA EAX,[ESP + 0x3dc0]              ; 0055c68c
    PUSH EAX                            ; 0055c693
    MOV EDI,dword ptr [ESP + 0x3eb8]    ; 0055c694
    PUSH EDI                            ; 0055c69b | = "$"
    PUSH EBX                            ; 0055c69c
    CALL core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 ; 0055c69d
        ;   XREF to: 0055ff00 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_0055ff00(CScript * this_ptr, int param_2, char * param_3, char * param_4)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 0055c6a2
    FLDZ                                ; 0055c6a9
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 0055c6ab
    MOV dword ptr [EBX + 0x50],EAX      ; 0055c6b2
    ADD ESP,0x10                        ; 0055c6b5
    FCOMP float ptr [EBX + 0x50]        ; 0055c6b8
    FNSTSW AX                           ; 0055c6bb
    SAHF                                ; 0055c6bd
    JA 0x0055a98c                       ; 0055c6be
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    JMP 0x0055a8bb                      ; 0055c6c4
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x6420b4                       ; 0055c6c9 | = "Error parsing dbSay arguments"
        ;   Label: LAB_0055c6c9
    PUSH 0x310eca0                      ; 0055c6ce | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055c6d3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055c6d8
    JMP 0x0055a98c                      ; 0055c6db
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x1954]              ; 0055c6e0
        ;   Label: LAB_0055c6e0
    MOV dword ptr [ESP + 0x3eb4],EAX    ; 0055c6e7
    LEA EAX,[ESP + 0x3dbc]              ; 0055c6ee
    PUSH EAX                            ; 0055c6f5
    PUSH 0x6420d4                       ; 0055c6f6 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x195c]              ; 0055c6fb
    MOV ECX,0x6420d2                    ; 0055c702 | = "$"
    PUSH EAX                            ; 0055c707
    MOV dword ptr [ESP + 0x3ebc],ECX    ; 0055c708 | = "$"
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055c70f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055c714
    LEA EAX,[ESP + 0x1954]              ; 0055c717
    PUSH EAX                            ; 0055c71e
    PUSH 0x310f4b0                      ; 0055c71f | g_ScriptPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055c724
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055c729
    JMP 0x0055c684                      ; 0055c72c
        ;   XREF to: 0055c684 (UNCONDITIONAL_JUMP)  ; LAB_0055c684
    ADD ESI,0x5                         ; 0055c731
        ;   Label: LAB_0055c731
    PUSH ESI                            ; 0055c734
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c735
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c73a
    PUSH 0x12c                          ; 0055c73d
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055c742
    LEA EAX,[ESP + 0x954]               ; 0055c749
    PUSH EAX                            ; 0055c750
    LEA EAX,[ESP + 0x3e94]              ; 0055c751
    PUSH EAX                            ; 0055c758
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055c759
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055c75e
    TEST EAX,EAX                        ; 0055c761
    JNZ 0x0055c37e                      ; 0055c763
        ;   XREF to: 0055c37e (CONDITIONAL_JUMP)  ; LAB_0055c37e
    CMP dword ptr [0x0310ec9c],0x0      ; 0055c769 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055c770
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x950]               ; 0055c776
    PUSH EAX                            ; 0055c77d
    MOV EDX,dword ptr [ESP + 0x3e88]    ; 0055c77e
    PUSH EDX                            ; 0055c785
    PUSH 0x6420f6                       ; 0055c786 | = "Script debug message at line %d:\n%s"
    MOV ECX,dword ptr [0x00678a60]      ; 0055c78b | g_CEditorToolsPtr
    PUSH ECX                            ; 0055c791 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0055c792
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0055c797
    JMP 0x0055a8bb                      ; 0055c79a
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x9                         ; 0055c79f
        ;   Label: LAB_0055c79f
    PUSH ESI                            ; 0055c7a2
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055c7a3
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055c7a8
    LEA EDX,[ESP + 0x3f48]              ; 0055c7ab
    PUSH EDX                            ; 0055c7b2
    LEA EDX,[ESP + 0x2768]              ; 0055c7b3
    PUSH EDX                            ; 0055c7ba
    LEA EDX,[ESP + 0xe6c]               ; 0055c7bb
    PUSH EDX                            ; 0055c7c2
    PUSH 0x642124                       ; 0055c7c3 | = "(%[^,], %[^,)]%n"
    MOV ESI,0xffffffff                  ; 0055c7c8
    PUSH EAX                            ; 0055c7cd
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055c7ce
    MOV dword ptr [ESP + 0x3f5c],ESI    ; 0055c7d5
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055c7dc
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055c7e1
    MOV EDI,dword ptr [ESP + 0x3f48]    ; 0055c7e4
    CMP EDI,0x5                         ; 0055c7eb
    JGE 0x0055c807                      ; 0055c7ee
        ;   XREF to: 0055c807 (CONDITIONAL_JUMP)  ; LAB_0055c807
    PUSH 0x642135                       ; 0055c7f0 | = "Error parsing dismember command parms"
    PUSH 0x310eca0                      ; 0055c7f5 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055c7fa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055c7ff
    JMP 0x0055a98c                      ; 0055c802
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055c807
        ;   Label: LAB_0055c807
    LEA EAX,[ESP + 0xe64]               ; 0055c80e
    ADD EDX,EDI                         ; 0055c815
    PUSH EAX                            ; 0055c817
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055c818
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055c81f
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055c824
    LEA EAX,[ESP + 0x2764]              ; 0055c827
    PUSH EAX                            ; 0055c82e
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055c82f
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055c834
    PUSH 0x823c14                       ; 0055c837 | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x00823c4c]      ; 0055c83c | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0055c842
    LEA EAX,[ESP + 0xe6c]               ; 0055c843
    PUSH EAX                            ; 0055c84a
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055c84b
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055c850
    MOV dword ptr [ESP + 0x3eb8],EAX    ; 0055c853
    TEST EAX,EAX                        ; 0055c85a
    JNZ 0x0055c870                      ; 0055c85c
        ;   XREF to: 0055c870 (CONDITIONAL_JUMP)  ; LAB_0055c870
    CMP dword ptr [0x0310f4ac],0x0      ; 0055c85e | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055c865
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055c86b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EDX,[ESP + 0x331c]              ; 0055c870
        ;   Label: LAB_0055c870
    PUSH EDX                            ; 0055c877
    LEA EDX,[ESP + 0x2768]              ; 0055c878
    PUSH EDX                            ; 0055c87f
    PUSH EAX                            ; 0055c880
    CALL core_script.cpp_parseBodyPartMask_FUN_00559730 ; 0055c881
        ;   XREF to: 00559730 (UNCONDITIONAL_CALL)  ; int core_script.cpp_parseBodyPartMask_FUN_00559730(CCharacter * character, char * part_names, int * part_mask)
    ADD ESP,0xc                         ; 0055c886
    TEST EAX,EAX                        ; 0055c889
    JZ 0x0055a98c                       ; 0055c88b
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3e54]              ; 0055c891
    PUSH EAX                            ; 0055c898
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0055c899
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0055c89e
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055c8a1
    MOV CL,byte ptr [EDX]               ; 0055c8a8
    XOR EAX,EAX                         ; 0055c8aa
    CMP CL,0x2c                         ; 0055c8ac
    JZ 0x0055c94b                       ; 0055c8af
        ;   XREF to: 0055c94b (CONDITIONAL_JUMP)  ; LAB_0055c94b
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055c8b5
        ;   Label: LAB_0055c8b5
    CMP byte ptr [EDX],0x29             ; 0055c8bc
    JNZ 0x0055caa1                      ; 0055c8bf
        ;   XREF to: 0055caa1 (CONDITIONAL_JUMP)  ; LAB_0055caa1
    LEA ECX,[EDX + 0x1]                 ; 0055c8c5
    MOV ESI,dword ptr [0x0310ec9c]      ; 0055c8c8 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],ECX    ; 0055c8ce
    TEST ESI,ESI                        ; 0055c8d5
    JNZ 0x0055a8bb                      ; 0055c8d7
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [ESP + 0x3eb8]    ; 0055c8dd
    MOV EDI,dword ptr [EDX + 0x2610]    ; 0055c8e4
    PUSH EDI                            ; 0055c8ea
    PUSH ESI                            ; 0055c8eb
    PUSH ESI                            ; 0055c8ec
    PUSH EDX                            ; 0055c8ed
    PUSH EAX                            ; 0055c8ee
    LEA EAX,[EDX + 0x30]                ; 0055c8ef
    PUSH EAX                            ; 0055c8f2
    LEA EAX,[EDX + 0x20]                ; 0055c8f3
    PUSH EAX                            ; 0055c8f6
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 0055c8f7
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 0055c8fc
    XOR EDI,EDI                         ; 0055c8ff
    MOV dword ptr [ESP + 0x3ebc],EAX    ; 0055c901
    CMP dword ptr [ESP + EDI*0x1 + 0x331c],0x0 ; 0055c908
        ;   Label: LAB_0055c908
    JZ 0x0055c92d                       ; 0055c910
        ;   XREF to: 0055c92d (CONDITIONAL_JUMP)  ; LAB_0055c92d
    PUSH 0x0                            ; 0055c912
    PUSH ESI                            ; 0055c914
    MOV EAX,dword ptr [ESP + 0x3ec4]    ; 0055c915
    PUSH EAX                            ; 0055c91c
    MOV EDX,dword ptr [ESP + 0x3ec4]    ; 0055c91d
    PUSH EDX                            ; 0055c924
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 0055c925
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0055c92a
    INC ESI                             ; 0055c92d
        ;   Label: LAB_0055c92d
    ADD EDI,0x4                         ; 0055c92e
    CMP ESI,0x1e                        ; 0055c931
    JL 0x0055c908                       ; 0055c934
        ;   XREF to: 0055c908 (CONDITIONAL_JUMP)  ; LAB_0055c908
    MOV ECX,dword ptr [ESP + 0x3ebc]    ; 0055c936
    PUSH ECX                            ; 0055c93d
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 ; 0055c93e
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0055c943
    JMP 0x0055a8bb                      ; 0055c946
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3f48]              ; 0055c94b
        ;   Label: LAB_0055c94b
    PUSH EAX                            ; 0055c952
    LEA EAX,[ESP + 0x2c]                ; 0055c953
    PUSH EAX                            ; 0055c957
    LEA EAX,[ESP + 0x3e64]              ; 0055c958
    PUSH EAX                            ; 0055c95f
    LEA EAX,[ESP + 0x3e64]              ; 0055c960
    PUSH EAX                            ; 0055c967
    LEA EAX,[ESP + 0x3e64]              ; 0055c968
    PUSH EAX                            ; 0055c96f
    PUSH 0x64215b                       ; 0055c970 | = ",%f ,%f ,%f ,%f %n"
    PUSH EDX                            ; 0055c975
    MOV dword ptr [ESP + 0x3f64],ESI    ; 0055c976
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055c97d
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x1c                        ; 0055c982
    MOV EAX,dword ptr [ESP + 0x3f48]    ; 0055c985
    CMP EAX,0x5                         ; 0055c98c
    JL 0x0055ca8a                       ; 0055c98f
        ;   XREF to: 0055ca8a (CONDITIONAL_JUMP)  ; LAB_0055ca8a
    FLD float ptr [ESP + 0x28]          ; 0055c995
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055c999
    FLDZ                                ; 0055c9a0
    ADD EDX,EAX                         ; 0055c9a2
    FXCH                                ; 0055c9a4
    FSTP double ptr [ESP + 0x10]        ; 0055c9a6
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055c9aa
    FCOMP double ptr [ESP + 0x10]       ; 0055c9b1
    FNSTSW AX                           ; 0055c9b5
    SAHF                                ; 0055c9b7
    JNC 0x0055ca7e                      ; 0055c9b8
        ;   XREF to: 0055ca7e (CONDITIONAL_JUMP)  ; LAB_0055ca7e
    FLD double ptr [ESP + 0x10]         ; 0055c9be
    FMUL double ptr [0x00643180]        ; 0055c9c2 | DOUBLE_00643180
    FMUL double ptr [0x00643188]        ; 0055c9c8 | DOUBLE_00643188
    FSTP float ptr [ESP + 0x28]         ; 0055c9ce
    PUSH dword ptr [ESP + 0x28]         ; 0055c9d2
    FLD float ptr [ESP + 0x2c]          ; 0055c9d6
    SUB ESP,0x4                         ; 0055c9da
    FCHS                                ; 0055c9dd
    FSTP float ptr [ESP]                ; 0055c9df
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0055c9e2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EAX,[ESP + 0x3e54]              ; 0055ca7e
        ;   Label: LAB_0055ca7e
    JMP 0x0055c8b5                      ; 0055ca85
        ;   XREF to: 0055c8b5 (UNCONDITIONAL_JUMP)  ; LAB_0055c8b5
    PUSH 0x64216e                       ; 0055ca8a | = "Error parsing dismember command parms"
        ;   Label: LAB_0055ca8a
    PUSH 0x310eca0                      ; 0055ca8f | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ca94
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055ca99
    JMP 0x0055a98c                      ; 0055ca9c
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH EDX                            ; 0055caa1
        ;   Label: LAB_0055caa1
    PUSH 0x642194                       ; 0055caa2 | = "Error parsing dismember command parms..."
    PUSH 0x310eca0                      ; 0055caa7 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055caac
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055cab1
    JMP 0x0055a98c                      ; 0055cab4
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x7                         ; 0055cab9
        ;   Label: LAB_0055cab9
    PUSH ESI                            ; 0055cabc
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cabd
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055cac2
    PUSH 0x400                          ; 0055cac5
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055caca
    LEA EAX,[EBX + 0x54]                ; 0055cad1
    PUSH EAX                            ; 0055cad4
    LEA EAX,[ESP + 0x3e94]              ; 0055cad5
    PUSH EAX                            ; 0055cadc
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055cadd
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055cae2
    TEST EAX,EAX                        ; 0055cae5
    JZ 0x0055a8bb                       ; 0055cae7
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055caed
    PUSH 0x6421cc                       ; 0055caee | = "Error parsing message text on display..."
    PUSH 0x310eca0                      ; 0055caf3 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055caf8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055cafd
    JMP 0x0055a98c                      ; 0055cb00
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x4                         ; 0055cb05
        ;   Label: LAB_0055cb05
    PUSH ESI                            ; 0055cb08
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cb09
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055cb0e
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055cb11
    PUSH 0x1                            ; 0055cb18
    MOV EDI,dword ptr [EBX + 0x48]      ; 0055cb1a
    PUSH EDI                            ; 0055cb1d
    PUSH EBX                            ; 0055cb1e
    CALL core_script.cpp_CScript_skipCommands_FUN_005601c0 ; 0055cb1f
        ;   XREF to: 005601c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCommands_FUN_005601c0(CScript * this_ptr, int direction, int count)
    ADD ESP,0xc                         ; 0055cb24
    TEST EAX,EAX                        ; 0055cb27
    JL 0x0055cb33                       ; 0055cb29
        ;   XREF to: 0055cb33 (CONDITIONAL_JUMP)  ; LAB_0055cb33
    MOV dword ptr [EBX + 0x48],EAX      ; 0055cb2b
    JMP 0x0055a8bb                      ; 0055cb2e
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 0055cb33
        ;   Label: LAB_0055cb33
    PUSH EAX                            ; 0055cb3a
    PUSH 0x642205                       ; 0055cb3b | = "Can't skip next command after else st..."
    PUSH 0x310eca0                      ; 0055cb40 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055cb45
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055cb4a
    JMP 0x0055a98c                      ; 0055cb4d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xc                         ; 0055cb52
        ;   Label: LAB_0055cb52
    PUSH ESI                            ; 0055cb55
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cb56
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055cb5b
    ADD ESP,0x4                         ; 0055cb60
    MOV dword ptr [ESP + 0x3f5c],EDX    ; 0055cb63
    LEA EDX,[ESP + 0x3f5c]              ; 0055cb6a
    PUSH EDX                            ; 0055cb71
    LEA EDX,[ESP + 0x1250]              ; 0055cb72
    PUSH EDX                            ; 0055cb79
    LEA EDX,[ESP + 0xf34]               ; 0055cb7a
    PUSH EDX                            ; 0055cb81
    PUSH 0x64224a                       ; 0055cb82 | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 0055cb87
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055cb88
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055cb8f
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055cb94
    MOV ECX,dword ptr [ESP + 0x3f5c]    ; 0055cb97
    CMP ECX,0x3                         ; 0055cb9e
    JGE 0x0055cbba                      ; 0055cba1
        ;   XREF to: 0055cbba (CONDITIONAL_JUMP)  ; LAB_0055cbba
    PUSH 0x64225b                       ; 0055cba3 | = "Error parsing enableCamera parms"
    PUSH 0x310eca0                      ; 0055cba8 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055cbad
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055cbb2
    JMP 0x0055a98c                      ; 0055cbb5
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055cbba
        ;   Label: LAB_0055cbba
    LEA EAX,[ESP + 0xf2c]               ; 0055cbc1
    ADD ESI,ECX                         ; 0055cbc8
    PUSH EAX                            ; 0055cbca
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055cbcb
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055cbd2
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055cbd7
    LEA EAX,[ESP + 0x124c]              ; 0055cbda
    PUSH EAX                            ; 0055cbe1
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055cbe2
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055cbe7
    LEA EAX,[ESP + 0xf2c]               ; 0055cbea
    PUSH EAX                            ; 0055cbf1
    MOV EDI,dword ptr [0x006810c8]      ; 0055cbf2 | g_CDemonSetPtr
    PUSH EDI                            ; 0055cbf8 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 0055cbf9
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    MOV ESI,EAX                         ; 0055cbfe
    ADD ESP,0x8                         ; 0055cc00
    TEST EAX,EAX                        ; 0055cc03
    JL 0x0055cc55                       ; 0055cc05
        ;   XREF to: 0055cc55 (CONDITIONAL_JUMP)  ; LAB_0055cc55
    CMP dword ptr [0x0310ec9c],0x0      ; 0055cc07 | g_ScriptEventsEnabled
    JZ 0x0055cc74                       ; 0055cc0e
        ;   XREF to: 0055cc74 (CONDITIONAL_JUMP)  ; LAB_0055cc74
    LEA EAX,[ESP + 0x124c]              ; 0055cc10
    PUSH EAX                            ; 0055cc17
    MOV ESI,dword ptr [0x006793d0]      ; 0055cc18 | g_CEventListPtr
    PUSH ESI                            ; 0055cc1e | g_CEventListInstance
    CALL core_event.cpp_CEventList_validateCondition_FUN_004add00 ; 0055cc1f
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004add00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0055cc24
    TEST EAX,EAX                        ; 0055cc27
    JZ 0x0055a8bb                       ; 0055cc29
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDI,0x310eca0                   ; 0055cc2f | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055cc34
    PUSH EDI                            ; 0055cc36 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055cc37
        ;   Label: LAB_0055cc37
    MOV byte ptr [EDI],AL               ; 0055cc39 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055cc3b
    JZ 0x0055cc4f                       ; 0055cc3d
        ;   XREF to: 0055cc4f (CONDITIONAL_JUMP)  ; LAB_0055cc4f
    MOV AL,byte ptr [ESI + 0x1]         ; 0055cc3f
    ADD ESI,0x2                         ; 0055cc42
    MOV byte ptr [EDI + 0x1],AL         ; 0055cc45 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055cc48
    CMP AL,0x0                          ; 0055cc4b
    JNZ 0x0055cc37                      ; 0055cc4d
        ;   XREF to: 0055cc37 (CONDITIONAL_JUMP)  ; LAB_0055cc37
    POP EDI                             ; 0055cc4f
        ;   Label: LAB_0055cc4f
    JMP 0x0055a98c                      ; 0055cc50
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0xf2c]               ; 0055cc55
        ;   Label: LAB_0055cc55
    PUSH EAX                            ; 0055cc5c
    PUSH 0x64227c                       ; 0055cc5d | = "Camera \"%s\" does not exist."
    PUSH 0x310eca0                      ; 0055cc62 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055cc67
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055cc6c
    JMP 0x0055a98c                      ; 0055cc6f
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x124c]              ; 0055cc74
        ;   Label: LAB_0055cc74
    PUSH EAX                            ; 0055cc7b
    MOV EDX,dword ptr [0x006793d0]      ; 0055cc7c | g_CEventListPtr
    PUSH EDX                            ; 0055cc82 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055cc83
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055cc88
    PUSH EAX                            ; 0055cc8b
    PUSH ESI                            ; 0055cc8c
    MOV ECX,dword ptr [0x006810c8]      ; 0055cc8d | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0055cc93 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570ea0 ; 0055cc94
        ;   XREF to: 00570ea0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ea0(CDemonSet * this_ptr)
    ADD ESP,0xc                         ; 0055cc99
    JMP 0x0055a8bb                      ; 0055cc9c
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x11                        ; 0055cca1
        ;   Label: LAB_0055cca1
    PUSH ESI                            ; 0055cca4
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cca5
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055ccaa
    LEA EDX,[ESP + 0x3f60]              ; 0055ccad
    PUSH EDX                            ; 0055ccb4
    LEA EDX,[ESP + 0x21f0]              ; 0055ccb5
    PUSH EDX                            ; 0055ccbc
    LEA EDX,[ESP + 0x3f04]              ; 0055ccbd
    PUSH EDX                            ; 0055ccc4
    PUSH 0x6422aa                       ; 0055ccc5 | = "(%d , %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055ccca
    PUSH EAX                            ; 0055cccf
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055ccd0
    MOV dword ptr [ESP + 0x3f74],EDI    ; 0055ccd7
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055ccde
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055cce3
    MOV EAX,dword ptr [ESP + 0x3f60]    ; 0055cce6
    CMP EAX,0x3                         ; 0055cced
    JGE 0x0055cd09                      ; 0055ccf0
        ;   XREF to: 0055cd09 (CONDITIONAL_JUMP)  ; LAB_0055cd09
    PUSH 0x6422b9                       ; 0055ccf2 | = "Error parsing enableCameraGroup parms"
    PUSH 0x310eca0                      ; 0055ccf7 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ccfc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055cd01
    JMP 0x0055a98c                      ; 0055cd04
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055cd09
        ;   Label: LAB_0055cd09
    ADD EDX,EAX                         ; 0055cd10
    LEA EAX,[ESP + 0x21ec]              ; 0055cd12
    PUSH EAX                            ; 0055cd19
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055cd1a
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055cd21
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055cd26 | g_ScriptEventsEnabled
    ADD ESP,0x4                         ; 0055cd2c
    TEST ECX,ECX                        ; 0055cd2f
    JZ 0x0055cd78                       ; 0055cd31
        ;   XREF to: 0055cd78 (CONDITIONAL_JUMP)  ; LAB_0055cd78
    LEA EAX,[ESP + 0x21ec]              ; 0055cd33
    PUSH EAX                            ; 0055cd3a
    MOV EDX,dword ptr [0x006793d0]      ; 0055cd3b | g_CEventListPtr | g_CEventListInstance
    PUSH EDX                            ; 0055cd41 | g_CEventListInstance
    CALL core_event.cpp_CEventList_validateCondition_FUN_004add00 ; 0055cd42
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004add00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0055cd47
    TEST EAX,EAX                        ; 0055cd4a
    JZ 0x0055a8bb                       ; 0055cd4c
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDI,0x310eca0                   ; 0055cd52 | g_ScriptErrorBuffer
        ;   Label: LAB_0055cd52
    MOV ESI,EAX                         ; 0055cd57
    PUSH EDI                            ; 0055cd59 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055cd5a
        ;   Label: LAB_0055cd5a
    MOV byte ptr [EDI],AL               ; 0055cd5c | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055cd5e
    JZ 0x0055cd72                       ; 0055cd60
        ;   XREF to: 0055cd72 (CONDITIONAL_JUMP)  ; LAB_0055cd72
    MOV AL,byte ptr [ESI + 0x1]         ; 0055cd62
    ADD ESI,0x2                         ; 0055cd65
    MOV byte ptr [EDI + 0x1],AL         ; 0055cd68 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055cd6b
    CMP AL,0x0                          ; 0055cd6e
    JNZ 0x0055cd5a                      ; 0055cd70
        ;   XREF to: 0055cd5a (CONDITIONAL_JUMP)  ; LAB_0055cd5a
    POP EDI                             ; 0055cd72
        ;   Label: LAB_0055cd72
    JMP 0x0055a98c                      ; 0055cd73
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x21ec]              ; 0055cd78
        ;   Label: LAB_0055cd78
    PUSH EAX                            ; 0055cd7f
    MOV ESI,dword ptr [0x006793d0]      ; 0055cd80 | g_CEventListPtr
    PUSH ESI                            ; 0055cd86 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055cd87
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055cd8c
    PUSH EAX                            ; 0055cd8f
    MOV EDI,dword ptr [ESP + 0x3f00]    ; 0055cd90
    PUSH EDI                            ; 0055cd97
    MOV EAX,[0x006810c8]                ; 0055cd98 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 0055cd9d | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570ec0 ; 0055cd9e
        ;   XREF to: 00570ec0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ec0(CDemonSet * this_ptr)
    ADD ESP,0xc                         ; 0055cda3
    JMP 0x0055a8bb                      ; 0055cda6
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xf                         ; 0055cdab
        ;   Label: LAB_0055cdab
    PUSH ESI                            ; 0055cdae
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cdaf
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055cdb4
    LEA EDX,[ESP + 0x3ecc]              ; 0055cdb7
    PUSH EDX                            ; 0055cdbe
    LEA EDX,[ESP + 0x2060]              ; 0055cdbf
    PUSH EDX                            ; 0055cdc6
    LEA EDX,[ESP + 0xcdc]               ; 0055cdc7
    PUSH EDX                            ; 0055cdce
    PUSH 0x6422ef                       ; 0055cdcf | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0055cdd4
    PUSH EAX                            ; 0055cdd9
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055cdda
    MOV dword ptr [ESP + 0x3ee0],ECX    ; 0055cde1
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055cde8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055cded
    MOV ESI,dword ptr [ESP + 0x3ecc]    ; 0055cdf0
    CMP ESI,0x3                         ; 0055cdf7
    JGE 0x0055ce13                      ; 0055cdfa
        ;   XREF to: 0055ce13 (CONDITIONAL_JUMP)  ; LAB_0055ce13
    PUSH 0x642300                       ; 0055cdfc | = "Error parsing enableHealthBar parms"
    PUSH 0x310eca0                      ; 0055ce01 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ce06
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055ce0b
    JMP 0x0055a98c                      ; 0055ce0e
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDI,dword ptr [ESP + 0x3e8c]    ; 0055ce13
        ;   Label: LAB_0055ce13
    LEA EAX,[ESP + 0xcd4]               ; 0055ce1a
    ADD EDI,ESI                         ; 0055ce21
    PUSH EAX                            ; 0055ce23
    MOV dword ptr [ESP + 0x3e90],EDI    ; 0055ce24
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055ce2b
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055ce30
    LEA EAX,[ESP + 0x205c]              ; 0055ce33
    PUSH EAX                            ; 0055ce3a
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055ce3b
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055ce40
    PUSH 0x823c14                       ; 0055ce43 | g_CCharacterClassInfo
    MOV EAX,[0x00823c4c]                ; 0055ce48 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0055ce4d
    LEA EAX,[ESP + 0xcdc]               ; 0055ce4e
    PUSH EAX                            ; 0055ce55
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055ce56
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055ce5b
    MOV ESI,EAX                         ; 0055ce5e
    TEST EAX,EAX                        ; 0055ce60
    JNZ 0x0055ce76                      ; 0055ce62
        ;   XREF to: 0055ce76 (CONDITIONAL_JUMP)  ; LAB_0055ce76
    CMP dword ptr [0x0310f4ac],0x0      ; 0055ce64 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055ce6b
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055ce71
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x642324                       ; 0055ce76 | = "false"
        ;   Label: LAB_0055ce76
    LEA EAX,[ESP + 0x2060]              ; 0055ce7b
    PUSH EAX                            ; 0055ce82
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ce83
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ce88
    TEST EAX,EAX                        ; 0055ce8b
    JNZ 0x0055cea7                      ; 0055ce8d
        ;   XREF to: 0055cea7 (CONDITIONAL_JUMP)  ; LAB_0055cea7
    CMP dword ptr [0x0310ec9c],0x0      ; 0055ce8f | g_ScriptEventsEnabled
        ;   Label: LAB_0055ce8f
    JNZ 0x0055a8bb                      ; 0055ce96
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [ESI + 0x2444],EAX    ; 0055ce9c
    JMP 0x0055a8bb                      ; 0055cea2
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x64232a                       ; 0055cea7 | = "true"
        ;   Label: LAB_0055cea7
    LEA EAX,[ESP + 0x2060]              ; 0055ceac
    PUSH EAX                            ; 0055ceb3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ceb4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ceb9
    TEST EAX,EAX                        ; 0055cebc
    JNZ 0x0055cec7                      ; 0055cebe
        ;   XREF to: 0055cec7 (CONDITIONAL_JUMP)  ; LAB_0055cec7
    MOV EAX,0x1                         ; 0055cec0
    JMP 0x0055ce8f                      ; 0055cec5
        ;   XREF to: 0055ce8f (UNCONDITIONAL_JUMP)  ; LAB_0055ce8f
    PUSH 0x64232f                       ; 0055cec7 | = "always"
        ;   Label: LAB_0055cec7
    LEA EAX,[ESP + 0x2060]              ; 0055cecc
    PUSH EAX                            ; 0055ced3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ced4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ced9
    TEST EAX,EAX                        ; 0055cedc
    JNZ 0x0055cee7                      ; 0055cede
        ;   XREF to: 0055cee7 (CONDITIONAL_JUMP)  ; LAB_0055cee7
    MOV EAX,0x2                         ; 0055cee0
    JMP 0x0055ce8f                      ; 0055cee5
        ;   XREF to: 0055ce8f (UNCONDITIONAL_JUMP)  ; LAB_0055ce8f
    LEA EAX,[ESP + 0x205c]              ; 0055cee7
        ;   Label: LAB_0055cee7
    PUSH EAX                            ; 0055ceee
    PUSH 0x642336                       ; 0055ceef | = "Invalid health bar mode '%s'"
    PUSH 0x310eca0                      ; 0055cef4 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055cef9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055cefe
    JMP 0x0055a98c                      ; 0055cf01
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x3                         ; 0055cf06
        ;   Label: LAB_0055cf06
    PUSH ESI                            ; 0055cf09
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cf0a
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055cf0f
    MOV ESI,dword ptr [0x0310ec9c]      ; 0055cf12 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055cf18
    TEST ESI,ESI                        ; 0055cf1f
    JNZ 0x0055a8bb                      ; 0055cf21
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [ESP + 0x3e94],ESI    ; 0055cf27
    MOV dword ptr [EBX],0x1             ; 0055cf2e
    JMP 0x0055a8bb                      ; 0055cf34
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x6                         ; 0055cf39
        ;   Label: LAB_0055cf39
    PUSH ESI                            ; 0055cf3c
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cf3d
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055cf42
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055cf45
    MOV EAX,[0x0310ec9c]                ; 0055cf4c | g_ScriptEventsEnabled
    TEST EAX,EAX                        ; 0055cf51
    JNZ 0x0055a8bb                      ; 0055cf53
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    FLD float ptr [EBX + 0x4c]          ; 0055cf59
    FLDZ                                ; 0055cf5c
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055cf5e
    FCOMPP                              ; 0055cf65
    FNSTSW AX                           ; 0055cf67
    SAHF                                ; 0055cf69
    JBE 0x0055cf87                      ; 0055cf6a
        ;   XREF to: 0055cf87 (CONDITIONAL_JUMP)  ; LAB_0055cf87
    MOV EDI,dword ptr [0x0067b654]      ; 0055cf6c | g_CGamePtr
    PUSH EDI                            ; 0055cf72 | g_CGameInstance
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004e0920 ; 0055cf73
        ;   XREF to: 004e0920 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055cf78
    MOV dword ptr [EBX + 0x4c],0x3f800000 ; 0055cf7b
    JMP 0x0055a8bb                      ; 0055cf82
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ECX,dword ptr [0x0067b654]      ; 0055cf87 | g_CGamePtr
        ;   Label: LAB_0055cf87
    PUSH ECX                            ; 0055cf8d | g_CGameInstance
    CALL core_game.cpp_CGame_fadeIn_FUN_004e0b90 ; 0055cf8e
        ;   XREF to: 004e0b90 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055cf93
    TEST EAX,EAX                        ; 0055cf96
    JZ 0x0055a8bb                       ; 0055cf98
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,0x1                         ; 0055cf9e
    MOV EAX,[0x0067b654]                ; 0055cfa3 | g_CGamePtr
    MOV dword ptr [ESP + 0x3e94],ESI    ; 0055cfa8
    MOV dword ptr [EAX + 0x22c],0x1     ; 0055cfaf | DAT_02d81cc8
    JMP 0x0055a8bb                      ; 0055cfb9
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x7                         ; 0055cfbe
        ;   Label: LAB_0055cfbe
    PUSH ESI                            ; 0055cfc1
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055cfc2
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055cfc7
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055cfca
    MOV EAX,[0x0310ec9c]                ; 0055cfd1 | g_ScriptEventsEnabled
    TEST EAX,EAX                        ; 0055cfd6
    JNZ 0x0055a8bb                      ; 0055cfd8
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [0x0067b654]      ; 0055cfde | g_CGamePtr
    MOV dword ptr [EDX + 0x22c],EAX     ; 0055cfe4 | DAT_02d81cc8
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055cfea
    FLD float ptr [EBX + 0x4c]          ; 0055cff1
    FLDZ                                ; 0055cff4
    FCOMPP                              ; 0055cff6
    FNSTSW AX                           ; 0055cff8
    SAHF                                ; 0055cffa
    JBE 0x0055d012                      ; 0055cffb
        ;   XREF to: 0055d012 (CONDITIONAL_JUMP)  ; LAB_0055d012
    PUSH EDX                            ; 0055cffd | g_CGameInstance
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004e0960 ; 0055cffe
        ;   XREF to: 004e0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004e0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055d003
    MOV dword ptr [EBX + 0x4c],0x3f800000 ; 0055d006
    JMP 0x0055a8bb                      ; 0055d00d
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EDX                            ; 0055d012 | g_CGameInstance
        ;   Label: LAB_0055d012
    CALL core_game.cpp_CGame_fadeIn_FUN_004e0b90 ; 0055d013
        ;   XREF to: 004e0b90 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055d018
    TEST EAX,EAX                        ; 0055d01b
    JZ 0x0055a8bb                       ; 0055d01d
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [ESP + 0x3e94],0x1    ; 0055d023
    JMP 0x0055a8bb                      ; 0055d02e
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x7                         ; 0055d033
        ;   Label: LAB_0055d033
    PUSH ESI                            ; 0055d036
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d037
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d03c
    LEA EDX,[ESP + 0x3ed0]              ; 0055d03f
    PUSH EDX                            ; 0055d046
    LEA EDX,[ESP + 0x25d8]              ; 0055d047
    PUSH EDX                            ; 0055d04e
    LEA EDX,[ESP + 0x1bb4]              ; 0055d04f
    PUSH EDX                            ; 0055d056
    PUSH 0x64236e                       ; 0055d057 | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055d05c
    PUSH EAX                            ; 0055d061
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055d062
    MOV dword ptr [ESP + 0x3ee4],EDI    ; 0055d069
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055d070
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055d075
    MOV EAX,dword ptr [ESP + 0x3ed0]    ; 0055d078
    CMP EAX,0x5                         ; 0055d07f
    JGE 0x0055d09b                      ; 0055d082
        ;   XREF to: 0055d09b (CONDITIONAL_JUMP)  ; LAB_0055d09b
    PUSH 0x64237f                       ; 0055d084 | = "Error parsing gesture command parms"
    PUSH 0x310eca0                      ; 0055d089 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d08e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d093
    JMP 0x0055a98c                      ; 0055d096
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055d09b
        ;   Label: LAB_0055d09b
    ADD EDX,EAX                         ; 0055d0a2
    LEA EAX,[ESP + 0x1bac]              ; 0055d0a4
    PUSH EAX                            ; 0055d0ab
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055d0ac
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d0b3
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055d0b8
    LEA EAX,[ESP + 0x25d4]              ; 0055d0bb
    PUSH EAX                            ; 0055d0c2
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d0c3
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055d0c8
    PUSH 0x823c14                       ; 0055d0cb | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x00823c4c]      ; 0055d0d0 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0055d0d6
    LEA EAX,[ESP + 0x1bb4]              ; 0055d0d7
    PUSH EAX                            ; 0055d0de
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055d0df
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055d0e4
    MOV ESI,EAX                         ; 0055d0e7
    TEST EAX,EAX                        ; 0055d0e9
    JNZ 0x0055d0ff                      ; 0055d0eb
        ;   XREF to: 0055d0ff (CONDITIONAL_JUMP)  ; LAB_0055d0ff
    CMP dword ptr [0x0310f4ac],0x0      ; 0055d0ed | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055d0f4
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055d0fa
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d0ff | g_ScriptEventsEnabled
        ;   Label: LAB_0055d0ff
    JZ 0x0055d172                       ; 0055d106
        ;   XREF to: 0055d172 (CONDITIONAL_JUMP)  ; LAB_0055d172
    PUSH 0x0                            ; 0055d108
    LEA EDX,[ESP + 0x25d8]              ; 0055d10a
    PUSH EDX                            ; 0055d111
    ADD EAX,0x158                       ; 0055d112
    PUSH EAX                            ; 0055d117
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0055d118
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0055d11d
    PUSH EAX                            ; 0055d120
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 0055d121
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 0055d126
    TEST EAX,EAX                        ; 0055d129
    SETGE AL                            ; 0055d12b
    AND EAX,0xff                        ; 0055d12e
    TEST EAX,EAX                        ; 0055d133
        ;   Label: LAB_0055d133
    JNZ 0x0055a8bb                      ; 0055d135
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESI + 0x158]               ; 0055d13b
    PUSH EAX                            ; 0055d141
    CALL core_bugs.cpp_FUN_00427b70     ; 0055d142
        ;   XREF to: 00427b70 (UNCONDITIONAL_CALL)  ; int core_bugs.cpp_FUN_00427b70()
    ADD ESP,0x4                         ; 0055d147
    PUSH EAX                            ; 0055d14a
    LEA EAX,[ESP + 0x1bb0]              ; 0055d14b
    PUSH EAX                            ; 0055d152
    LEA EAX,[ESP + 0x25dc]              ; 0055d153
    PUSH EAX                            ; 0055d15a
    PUSH 0x6423a3                       ; 0055d15b | = "Gesture name %s is not valid for acto..."
    PUSH 0x310eca0                      ; 0055d160 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d165
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0055d16a
    JMP 0x0055a98c                      ; 0055d16d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EDX,[ESP + 0x25d4]              ; 0055d172
        ;   Label: LAB_0055d172
    PUSH EDX                            ; 0055d179
    PUSH EAX                            ; 0055d17a
    CALL core_charactr.cpp_CCharacter_initGesture_FUN_0042d390 ; 0055d17b
        ;   XREF to: 0042d390 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_initGesture_FUN_0042d390(CCharacter * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 0055d180
    JMP 0x0055d133                      ; 0055d183
        ;   XREF to: 0055d133 (UNCONDITIONAL_JUMP)  ; LAB_0055d133
    ADD ESI,0x9                         ; 0055d185
        ;   Label: LAB_0055d185
    PUSH ESI                            ; 0055d188
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d189
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055d18e
    ADD ESP,0x4                         ; 0055d193
    MOV dword ptr [ESP + 0x3ed4],EDX    ; 0055d196
    LEA EDX,[ESP + 0x3ed4]              ; 0055d19d
    PUSH EDX                            ; 0055d1a4
    LEA EDX,[ESP + 0x2128]              ; 0055d1a5
    PUSH EDX                            ; 0055d1ac
    LEA EDX,[ESP + 0x2e74]              ; 0055d1ad
    PUSH EDX                            ; 0055d1b4
    PUSH 0x6423e1                       ; 0055d1b5 | = "(%[^,], %[^,)] )%n"
    PUSH EAX                            ; 0055d1ba
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055d1bb
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055d1c2
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055d1c7
    MOV ECX,dword ptr [ESP + 0x3ed4]    ; 0055d1ca
    CMP ECX,0x5                         ; 0055d1d1
    JGE 0x0055d1ed                      ; 0055d1d4
        ;   XREF to: 0055d1ed (CONDITIONAL_JUMP)  ; LAB_0055d1ed
    PUSH 0x6423f4                       ; 0055d1d6 | = "Error parsing getIniInt command parms"
    PUSH 0x310eca0                      ; 0055d1db | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d1e0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d1e5
    JMP 0x0055a98c                      ; 0055d1e8
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055d1ed
        ;   Label: LAB_0055d1ed
    LEA EAX,[ESP + 0x2e6c]              ; 0055d1f4
    ADD ESI,ECX                         ; 0055d1fb
    PUSH EAX                            ; 0055d1fd
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055d1fe
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d205
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055d20a
    LEA EAX,[ESP + 0x2124]              ; 0055d20d
    PUSH EAX                            ; 0055d214
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d215
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055d21a | g_ScriptEventsEnabled
    ADD ESP,0x4                         ; 0055d220
    TEST EDI,EDI                        ; 0055d223
    JNZ 0x0055a8bb                      ; 0055d225
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x64241a                       ; 0055d22b | = "Game"
    PUSH 0x64241f                       ; 0055d230 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x244]               ; 0055d235
    PUSH EAX                            ; 0055d23c
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 0055d23d
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
    ADD ESP,0xc                         ; 0055d242
    LEA EAX,[ESP + 0x2124]              ; 0055d245
    PUSH EAX                            ; 0055d24c
    MOV EAX,[0x006793d0]                ; 0055d24d | g_CEventListPtr | g_CEventListInstance
    PUSH EAX                            ; 0055d252 | g_CEventListInstance
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004b0830 ; 0055d253
        ;   XREF to: 004b0830 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004b0830(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0055d258
    MOV dword ptr [ESP + 0x3ed8],EAX    ; 0055d25b
    LEA EAX,[ESP + 0x3ed8]              ; 0055d262
    PUSH EAX                            ; 0055d269
    LEA EAX,[ESP + 0x2e70]              ; 0055d26a
    PUSH EAX                            ; 0055d271
    LEA EAX,[ESP + 0x244]               ; 0055d272
    PUSH EAX                            ; 0055d279
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 0055d27a
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 0055d27f
    MOV EDX,dword ptr [ESP + 0x3ed8]    ; 0055d282
    PUSH EDX                            ; 0055d289
    LEA EAX,[ESP + 0x2128]              ; 0055d28a
    PUSH EAX                            ; 0055d291
    MOV ECX,dword ptr [0x006793d0]      ; 0055d292 | g_CEventListPtr | g_CEventListInstance
    PUSH ECX                            ; 0055d298 | g_CEventListInstance
    CALL core_event.cpp_CEventList_setCounter_FUN_004b0720 ; 0055d299
        ;   XREF to: 004b0720 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_004b0720(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 0055d29e
    JMP 0x0055a8bb                      ; 0055d2a1
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xf                         ; 0055d2a6
        ;   Label: LAB_0055d2a6
    PUSH ESI                            ; 0055d2a9
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d2aa
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d2af
    LEA EDX,[ESP + 0x3edc]              ; 0055d2b2
    PUSH EDX                            ; 0055d2b9
    LEA EDX,[ESP + 0x2448]              ; 0055d2ba
    PUSH EDX                            ; 0055d2c1
    LEA EDX,[ESP + 0x2f3c]              ; 0055d2c2
    PUSH EDX                            ; 0055d2c9
    PUSH 0x642443                       ; 0055d2ca | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0055d2cf
    PUSH EAX                            ; 0055d2d4
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055d2d5
    MOV dword ptr [ESP + 0x3ef0],ESI    ; 0055d2dc
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055d2e3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055d2e8
    MOV EDI,dword ptr [ESP + 0x3edc]    ; 0055d2eb
    CMP EDI,0x5                         ; 0055d2f2
    JGE 0x0055d30e                      ; 0055d2f5
        ;   XREF to: 0055d30e (CONDITIONAL_JUMP)  ; LAB_0055d30e
    PUSH 0x642454                       ; 0055d2f7 | = "Error parsing getTriggerActor command..."
    PUSH 0x310eca0                      ; 0055d2fc | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d301
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d306
    JMP 0x0055a98c                      ; 0055d309
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055d30e
        ;   Label: LAB_0055d30e
    LEA EAX,[ESP + 0x2f34]              ; 0055d315
    ADD EDX,EDI                         ; 0055d31c
    PUSH EAX                            ; 0055d31e
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055d31f
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d326
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055d32b
    LEA EAX,[ESP + 0x2444]              ; 0055d32e
    PUSH EAX                            ; 0055d335
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d336
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055d33b
    LEA EAX,[ESP + 0x2f34]              ; 0055d33e
    PUSH EAX                            ; 0055d345
    CALL core_script.cpp_validateActorVariableName_FUN_00559220 ; 0055d346
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_00559220(char * variable_name)
    ADD ESP,0x4                         ; 0055d34b
    TEST EAX,EAX                        ; 0055d34e
    JZ 0x0055a98c                       ; 0055d350
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x3f87458                      ; 0055d356 | g_CTriggerClassInfo
    MOV ECX,dword ptr [0x03f87490]      ; 0055d35b | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 0055d361
    LEA EAX,[ESP + 0x244c]              ; 0055d362
    PUSH EAX                            ; 0055d369
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055d36a
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055d36f
    TEST EAX,EAX                        ; 0055d372
    JNZ 0x0055d388                      ; 0055d374
        ;   XREF to: 0055d388 (CONDITIONAL_JUMP)  ; LAB_0055d388
    CMP dword ptr [0x0310f4ac],0x0      ; 0055d376 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055d37d
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055d383
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d388 | g_ScriptEventsEnabled
        ;   Label: LAB_0055d388
    JNZ 0x0055a8bb                      ; 0055d38f
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDI,dword ptr [EAX + 0x2fc]     ; 0055d395
    PUSH EDI                            ; 0055d39b
    LEA EAX,[ESP + 0x2f38]              ; 0055d39c
    PUSH EAX                            ; 0055d3a3
    MOV EAX,[0x006793d0]                ; 0055d3a4 | g_CEventListPtr | g_CEventListInstance
    PUSH EAX                            ; 0055d3a9 | g_CEventListInstance
    CALL core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 ; 0055d3aa
        ;   XREF to: 004b09a0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList * this_ptr)
    ADD ESP,0xc                         ; 0055d3af
    JMP 0x0055a8bb                      ; 0055d3b2
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x5                         ; 0055d3b7
        ;   Label: LAB_0055d3b7
    PUSH ESI                            ; 0055d3ba
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d3bb
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d3c0
    PUSH EAX                            ; 0055d3c3
    PUSH EBX                            ; 0055d3c4
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055d3c5
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00560160 ; 0055d3cc
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00560160(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0055d3d1
    TEST EAX,EAX                        ; 0055d3d4
    JL 0x0055d3f1                       ; 0055d3d6
        ;   XREF to: 0055d3f1 (CONDITIONAL_JUMP)  ; LAB_0055d3f1
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d3d8 | g_ScriptEventsEnabled
    JZ 0x0055d40b                       ; 0055d3df
        ;   XREF to: 0055d40b (CONDITIONAL_JUMP)  ; LAB_0055d40b
    MOV dword ptr [ESP + 0x3e8c],0x6424ec ; 0055d3e1 | s_EmptyChar_006424ec
    JMP 0x0055a8bb                      ; 0055d3ec
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ECX,dword ptr [ESP + 0x3e84]    ; 0055d3f1
        ;   Label: LAB_0055d3f1
    PUSH ECX                            ; 0055d3f8
    MOV EBX,dword ptr [ESP + 0x3e90]    ; 0055d3f9
    PUSH EBX                            ; 0055d400
    PUSH 0x642486                       ; 0055d401 | = "Undefined label %s used in gosub stat..."
    JMP 0x0055a97f                      ; 0055d406
        ;   XREF to: 0055a97f (UNCONDITIONAL_JUMP)  ; LAB_0055a97f
    MOV ESI,dword ptr [EBX + 0x45c]     ; 0055d40b
        ;   Label: LAB_0055d40b
    CMP ESI,0x8                         ; 0055d411
    JGE 0x0055d449                      ; 0055d414
        ;   XREF to: 0055d449 (CONDITIONAL_JUMP)  ; LAB_0055d449
    LEA EDX,[ESI*0x4 + 0x0]             ; 0055d416
    LEA ECX,[EBX + EDX*0x1]             ; 0055d41d
    MOV EDX,dword ptr [EBX + 0x48]      ; 0055d420
    MOV dword ptr [ECX + 0x460],EDX     ; 0055d423
    MOV EDI,dword ptr [EBX + 0x45c]     ; 0055d429
    MOV dword ptr [EBX + 0x48],EAX      ; 0055d42f
    INC EDI                             ; 0055d432
    MOV dword ptr [EBX + 0x45c],EDI     ; 0055d433
    MOV dword ptr [ESP + 0x3e8c],0x6424ec ; 0055d439 | s_EmptyChar_006424ec
    JMP 0x0055a8bb                      ; 0055d444
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 0055d449
        ;   Label: LAB_0055d449
    PUSH EAX                            ; 0055d450
    PUSH 0x6424bc                       ; 0055d451 | = "Call stack overflow detected on scrip..."
    PUSH 0x310eca0                      ; 0055d456 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d45b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055d460
    JMP 0x0055a98c                      ; 0055d463
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x4                         ; 0055d468
        ;   Label: LAB_0055d468
    PUSH ESI                            ; 0055d46b
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d46c
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d471
    PUSH EAX                            ; 0055d474
    PUSH EBX                            ; 0055d475
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055d476
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00560160 ; 0055d47d
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00560160(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0055d482
    TEST EAX,EAX                        ; 0055d485
    JL 0x0055d4a2                       ; 0055d487
        ;   XREF to: 0055d4a2 (CONDITIONAL_JUMP)  ; LAB_0055d4a2
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d489 | g_ScriptEventsEnabled
    JZ 0x0055d4bc                       ; 0055d490
        ;   XREF to: 0055d4bc (CONDITIONAL_JUMP)  ; LAB_0055d4bc
    MOV dword ptr [ESP + 0x3e8c],0x642527 ; 0055d492 | s_EmptyChar_00642527
    JMP 0x0055a8bb                      ; 0055d49d
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 0055d4a2
        ;   Label: LAB_0055d4a2
    PUSH EAX                            ; 0055d4a9
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0055d4aa
    PUSH EDX                            ; 0055d4b1
    PUSH 0x6424f2                       ; 0055d4b2 | = "Undefined label %s used in goto state..."
    JMP 0x0055a97f                      ; 0055d4b7
        ;   XREF to: 0055a97f (UNCONDITIONAL_JUMP)  ; LAB_0055a97f
    MOV dword ptr [EBX + 0x48],EAX      ; 0055d4bc
        ;   Label: LAB_0055d4bc
    MOV dword ptr [ESP + 0x3e8c],0x642527 ; 0055d4bf | s_EmptyChar_00642527
    JMP 0x0055a8bb                      ; 0055d4ca
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x4                         ; 0055d4cf
        ;   Label: LAB_0055d4cf
    PUSH ESI                            ; 0055d4d2
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d4d3
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d4d8
    PUSH 0x12c                          ; 0055d4db
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055d4e0
    LEA EAX,[ESP + 0xbac]               ; 0055d4e7
    PUSH EAX                            ; 0055d4ee
    LEA EAX,[ESP + 0x3e94]              ; 0055d4ef
    PUSH EAX                            ; 0055d4f6
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055d4f7
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055d4fc
    TEST EAX,EAX                        ; 0055d4ff
    JNZ 0x0055cd52                      ; 0055d501
        ;   XREF to: 0055cd52 (CONDITIONAL_JUMP)  ; LAB_0055cd52
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d507 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055d50e
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0xba8]               ; 0055d514
    PUSH EAX                            ; 0055d51b
    MOV ESI,dword ptr [ESP + 0x3e88]    ; 0055d51c
    PUSH ESI                            ; 0055d523
    PUSH 0x64252d                       ; 0055d524 | = "Script GTFO at line %d:\n%s\nTerminat..."
    MOV EDI,dword ptr [0x00678a60]      ; 0055d529 | g_CEditorToolsPtr
    PUSH EDI                            ; 0055d52f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0055d530
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0055d535
    XOR EAX,EAX                         ; 0055d538
    MOV dword ptr [EBX],0x1             ; 0055d53a
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055d540
    JMP 0x0055a8bb                      ; 0055d547
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xd                         ; 0055d54c
        ;   Label: LAB_0055d54c
    PUSH ESI                            ; 0055d54f
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d550
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055d555
    ADD ESP,0x4                         ; 0055d55a
    MOV dword ptr [ESP + 0x3ee0],EDX    ; 0055d55d
    LEA EDX,[ESP + 0x3ee0]              ; 0055d564
    PUSH EDX                            ; 0055d56b
    LEA EDX,[ESP + 0x2a88]              ; 0055d56c
    PUSH EDX                            ; 0055d573
    PUSH 0x64256b                       ; 0055d574 | = "(%[^,)]%n"
    PUSH EAX                            ; 0055d579
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055d57a
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055d581
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055d586
    MOV ECX,dword ptr [ESP + 0x3ee0]    ; 0055d589
    CMP ECX,0x2                         ; 0055d590
    JGE 0x0055d5ac                      ; 0055d593
        ;   XREF to: 0055d5ac (CONDITIONAL_JUMP)  ; LAB_0055d5ac
    PUSH 0x642575                       ; 0055d595 | = "Error parsing holsterWeapon command p..."
    PUSH 0x310eca0                      ; 0055d59a | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d59f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d5a4
    JMP 0x0055a98c                      ; 0055d5a7
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055d5ac
        ;   Label: LAB_0055d5ac
    LEA EAX,[ESP + 0x2a84]              ; 0055d5b3
    ADD ESI,ECX                         ; 0055d5ba
    PUSH EAX                            ; 0055d5bc
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055d5bd
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055d5c4
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055d5c9
    PUSH 0x2db87d4                      ; 0055d5cc | g_CHeroClassInfo
    MOV EDI,dword ptr [0x02db880c]      ; 0055d5d1 | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 0055d5d7
    LEA EAX,[ESP + 0x2a8c]              ; 0055d5d8
    PUSH EAX                            ; 0055d5df
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055d5e0
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055d5e5
    MOV dword ptr [ESP + 0x3ee4],EAX    ; 0055d5e8
    TEST EAX,EAX                        ; 0055d5ef
    JNZ 0x0055d605                      ; 0055d5f1
        ;   XREF to: 0055d605 (CONDITIONAL_JUMP)  ; LAB_0055d605
    CMP dword ptr [0x0310f4ac],0x0      ; 0055d5f3 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055d5fa
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055d600
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV dword ptr [ESP + 0x3ee8],0x1    ; 0055d605
        ;   Label: LAB_0055d605
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055d610
    CMP byte ptr [EAX],0x2c             ; 0055d617
    JZ 0x0055d67a                       ; 0055d61a
        ;   XREF to: 0055d67a (CONDITIONAL_JUMP)  ; LAB_0055d67a
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055d61c
        ;   Label: LAB_0055d61c
    CMP byte ptr [EAX],0x29             ; 0055d623
    JNZ 0x0055d767                      ; 0055d626
        ;   XREF to: 0055d767 (CONDITIONAL_JUMP)  ; LAB_0055d767
    LEA ECX,[EAX + 0x1]                 ; 0055d62c
    MOV ESI,dword ptr [0x0310ec9c]      ; 0055d62f | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],ECX    ; 0055d635
    TEST ESI,ESI                        ; 0055d63c
    JNZ 0x0055a8bb                      ; 0055d63e
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [ESP + 0x3ee4]    ; 0055d644
    MOV EDI,dword ptr [ESP + 0x3ee8]    ; 0055d64b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055d652
    TEST EDI,EDI                        ; 0055d658
    SETZ DL                             ; 0055d65a
    AND EDX,0xff                        ; 0055d65d
    PUSH EDX                            ; 0055d663
    MOV EDX,dword ptr [ESP + 0x3ee8]    ; 0055d664
    PUSH EDX                            ; 0055d66b
    CALL dword ptr [EAX + 0x158]        ; 0055d66c
    ADD ESP,0x8                         ; 0055d672
    JMP 0x0055a8bb                      ; 0055d675
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EDX,[EAX + 0x1]                 ; 0055d67a
        ;   Label: LAB_0055d67a
    MOV EDI,EDX                         ; 0055d67d
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055d67f
    SUB ECX,ECX                         ; 0055d686
    DEC ECX                             ; 0055d688
    XOR EAX,EAX                         ; 0055d689
    SCASB.REPNE ES:EDI                  ; 0055d68b
    NOT ECX                             ; 0055d68d
    DEC ECX                             ; 0055d68f
    DEC ECX                             ; 0055d690
    MOV dword ptr [ESP + 0x3ee0],ECX    ; 0055d691
    CMP ECX,0x1                         ; 0055d698
    JL 0x0055d72e                       ; 0055d69b
        ;   XREF to: 0055d72e (CONDITIONAL_JUMP)  ; LAB_0055d72e
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055d6a1
    LEA EDI,[ESP + 0x2ffc]              ; 0055d6a8
    PUSH EDI                            ; 0055d6af
    MOV EAX,ECX                         ; 0055d6b0
    SHR ECX,0x2                         ; 0055d6b2
    MOVSD.REP ES:EDI,ESI                ; 0055d6b5
    MOV CL,AL                           ; 0055d6b7
    AND CL,0x3                          ; 0055d6b9
    MOVSB.REP ES:EDI,ESI                ; 0055d6bc
    POP EDI                             ; 0055d6be
    XOR DL,DL                           ; 0055d6bf
    MOV EAX,dword ptr [ESP + 0x3ee0]    ; 0055d6c1
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055d6c8
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055d6cf | g_ScriptEventsEnabled
    ADD ESI,EAX                         ; 0055d6d5
    MOV byte ptr [ESP + EAX*0x1 + 0x2ffc],DL ; 0055d6d7
    MOV dword ptr [ESP + 0x3e8c],ESI    ; 0055d6de
    TEST EDI,EDI                        ; 0055d6e5
    JZ 0x0055d745                       ; 0055d6e7
        ;   XREF to: 0055d745 (CONDITIONAL_JUMP)  ; LAB_0055d745
    LEA EAX,[ESP + 0x2ffc]              ; 0055d6e9
    PUSH EAX                            ; 0055d6f0
    MOV EDX,dword ptr [0x006793d0]      ; 0055d6f1 | g_CEventListPtr | g_CEventListInstance
    PUSH EDX                            ; 0055d6f7 | g_CEventListInstance
    CALL core_event.cpp_CEventList_validateCondition_FUN_004add00 ; 0055d6f8
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004add00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0055d6fd
    TEST EAX,EAX                        ; 0055d700
    JZ 0x0055d61c                       ; 0055d702
        ;   XREF to: 0055d61c (CONDITIONAL_JUMP)  ; LAB_0055d61c
    MOV EDI,0x310eca0                   ; 0055d708 | g_ScriptErrorBuffer
        ;   Label: LAB_0055d708
    MOV ESI,EAX                         ; 0055d70d
    PUSH EDI                            ; 0055d70f | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055d710
        ;   Label: LAB_0055d710
    MOV byte ptr [EDI],AL               ; 0055d712 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055d714
    JZ 0x0055d728                       ; 0055d716
        ;   XREF to: 0055d728 (CONDITIONAL_JUMP)  ; LAB_0055d728
    MOV AL,byte ptr [ESI + 0x1]         ; 0055d718
    ADD ESI,0x2                         ; 0055d71b
    MOV byte ptr [EDI + 0x1],AL         ; 0055d71e | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055d721
    CMP AL,0x0                          ; 0055d724
    JNZ 0x0055d710                      ; 0055d726
        ;   XREF to: 0055d710 (CONDITIONAL_JUMP)  ; LAB_0055d710
    POP EDI                             ; 0055d728
        ;   Label: LAB_0055d728
    JMP 0x0055a98c                      ; 0055d729
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x64259f                       ; 0055d72e | = "Error parsing holsterWeapon command p..."
        ;   Label: LAB_0055d72e
    PUSH 0x310eca0                      ; 0055d733 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d738
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d73d
    JMP 0x0055a98c                      ; 0055d740
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x2ffc]              ; 0055d745
        ;   Label: LAB_0055d745
    PUSH EAX                            ; 0055d74c
    MOV EAX,[0x006793d0]                ; 0055d74d | g_CEventListPtr
    PUSH EAX                            ; 0055d752 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055d753
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055d758
    MOV dword ptr [ESP + 0x3ee8],EAX    ; 0055d75b
    JMP 0x0055d61c                      ; 0055d762
        ;   XREF to: 0055d61c (UNCONDITIONAL_JUMP)  ; LAB_0055d61c
    PUSH 0x6425c9                       ; 0055d767 | = "Missing closing ')' in holsterWeapon ..."
        ;   Label: LAB_0055d767
    PUSH 0x310eca0                      ; 0055d76c | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d771
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d776
    JMP 0x0055a98c                      ; 0055d779
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x4                         ; 0055d77e
        ;   Label: LAB_0055d77e
    PUSH ESI                            ; 0055d781
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d782
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d787
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055d78a
    XOR ESI,ESI                         ; 0055d791
    MOV EAX,dword ptr [EBX + 0x48]      ; 0055d793
    MOV dword ptr [ESP + 0x3e94],ESI    ; 0055d796
    MOV dword ptr [ESP + 0x3e98],EAX    ; 0055d79d
    JMP 0x0055a8bb                      ; 0055d7a4
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x2                         ; 0055d7a9
        ;   Label: LAB_0055d7a9
    PUSH ESI                            ; 0055d7ac
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d7ad
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d7b2
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055d7b5
    LEA EAX,[ESP + 0x3b64]              ; 0055d7bc
    PUSH EAX                            ; 0055d7c3
    LEA EAX,[ESP + 0x3e90]              ; 0055d7c4
    PUSH EAX                            ; 0055d7cb
    CALL core_script.cpp_parseConditionExpr_FUN_005594a0 ; 0055d7cc
        ;   XREF to: 005594a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_005594a0(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0055d7d1
    TEST EAX,EAX                        ; 0055d7d4
    JNZ 0x0055d708                      ; 0055d7d6
        ;   XREF to: 0055d708 (CONDITIONAL_JUMP)  ; LAB_0055d708
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d7dc | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055d7e3
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3b64]              ; 0055d7e9
    PUSH EAX                            ; 0055d7f0
    MOV EAX,[0x006793d0]                ; 0055d7f1 | g_CEventListPtr
    PUSH EAX                            ; 0055d7f6 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055d7f7
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055d7fc
    TEST EAX,EAX                        ; 0055d7ff
    JNZ 0x0055a8bb                      ; 0055d801
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055d807
    MOV EDX,dword ptr [EBX + 0x48]      ; 0055d808
    PUSH EDX                            ; 0055d80b
    PUSH EBX                            ; 0055d80c
    CALL core_script.cpp_CScript_skipCommands_FUN_005601c0 ; 0055d80d
        ;   XREF to: 005601c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCommands_FUN_005601c0(CScript * this_ptr, int direction, int count)
    MOV ESI,EAX                         ; 0055d812
    ADD ESP,0xc                         ; 0055d814
    MOV EDI,EAX                         ; 0055d817
    TEST EAX,EAX                        ; 0055d819
    JL 0x0055d843                       ; 0055d81b
        ;   XREF to: 0055d843 (CONDITIONAL_JUMP)  ; LAB_0055d843
    PUSH 0x4                            ; 0055d81d
    MOV EDX,dword ptr [EBX + 0x34]      ; 0055d81f
    PUSH 0x642634                       ; 0055d822 | = "else"
    MOV ECX,dword ptr [EDX + ESI*0x8 + 0x4] ; 0055d827
    PUSH ECX                            ; 0055d82b
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0055d82c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0055d831
    TEST EAX,EAX                        ; 0055d834
    JNZ 0x0055d83b                      ; 0055d836
        ;   XREF to: 0055d83b (CONDITIONAL_JUMP)  ; LAB_0055d83b
    LEA EDI,[ESI + 0x1]                 ; 0055d838
    MOV dword ptr [EBX + 0x48],EDI      ; 0055d83b
        ;   Label: LAB_0055d83b
    JMP 0x0055a8bb                      ; 0055d83e
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EBX,dword ptr [ESP + 0x3e84]    ; 0055d843
        ;   Label: LAB_0055d843
    PUSH EBX                            ; 0055d84a
    PUSH 0x6425fe                       ; 0055d84b | = "Can't skip next command after if stat..."
    PUSH 0x310eca0                      ; 0055d850 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d855
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055d85a
    JMP 0x0055a98c                      ; 0055d85d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xb                         ; 0055d862
        ;   Label: LAB_0055d862
    PUSH ESI                            ; 0055d865
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d866
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d86b
    LEA EDX,[ESP + 0x3eec]              ; 0055d86e
    PUSH EDX                            ; 0055d875
    PUSH 0x642645                       ; 0055d876 | = " ( )%n"
    MOV ESI,0xffffffff                  ; 0055d87b
    PUSH EAX                            ; 0055d880
    MOV dword ptr [ESP + 0x3e98],EAX    ; 0055d881
    MOV dword ptr [ESP + 0x3ef8],ESI    ; 0055d888
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055d88f
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 0055d894
    MOV EDI,dword ptr [ESP + 0x3eec]    ; 0055d897
    CMP EDI,0x2                         ; 0055d89e
    JL 0x0055d8e2                       ; 0055d8a1
        ;   XREF to: 0055d8e2 (CONDITIONAL_JUMP)  ; LAB_0055d8e2
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055d8a3
    ADD EDX,EDI                         ; 0055d8aa
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055d8ac | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055d8b2
    TEST ECX,ECX                        ; 0055d8b9
    JNZ 0x0055a8bb                      ; 0055d8bb
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,[0x0067b654]                ; 0055d8c1 | g_CGamePtr
    MOV dword ptr [EBX],0x1             ; 0055d8c6
    MOV dword ptr [ESP + 0x3e94],ECX    ; 0055d8cc
    MOV dword ptr [EAX + 0x258],0x1     ; 0055d8d3 | DAT_02d81cf4
    JMP 0x0055a8bb                      ; 0055d8dd
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x64264c                       ; 0055d8e2 | = "Error parsing finishedAct command"
        ;   Label: LAB_0055d8e2
    PUSH 0x310eca0                      ; 0055d8e7 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055d8ec
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055d8f1
    JMP 0x0055a98c                      ; 0055d8f4
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x9                         ; 0055d8f9
        ;   Label: LAB_0055d8f9
    PUSH ESI                            ; 0055d8fc
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055d8fd
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055d902
    PUSH 0x64                           ; 0055d905
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055d907
    LEA EAX,[ESP + 0x3460]              ; 0055d90e
    PUSH EAX                            ; 0055d915
    LEA EAX,[ESP + 0x3e94]              ; 0055d916
    PUSH EAX                            ; 0055d91d
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055d91e
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055d923
    TEST EAX,EAX                        ; 0055d926
    JNZ 0x0055d708                      ; 0055d928
        ;   XREF to: 0055d708 (CONDITIONAL_JUMP)  ; LAB_0055d708
    PUSH 0x642678                       ; 0055d92e | = "false"
    LEA EAX,[ESP + 0x3460]              ; 0055d933
    PUSH EAX                            ; 0055d93a
    MOV ESI,0xffffffff                  ; 0055d93b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055d940
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055d945
    TEST EAX,EAX                        ; 0055d948
    JNZ 0x0055d94e                      ; 0055d94a
        ;   XREF to: 0055d94e (CONDITIONAL_JUMP)  ; LAB_0055d94e
    XOR ESI,ESI                         ; 0055d94c
    PUSH 0x64267e                       ; 0055d94e | = "true"
        ;   Label: LAB_0055d94e
    LEA EAX,[ESP + 0x3460]              ; 0055d953
    PUSH EAX                            ; 0055d95a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055d95b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055d960
    TEST EAX,EAX                        ; 0055d963
    JNZ 0x0055d96c                      ; 0055d965
        ;   XREF to: 0055d96c (CONDITIONAL_JUMP)  ; LAB_0055d96c
    MOV ESI,0x1                         ; 0055d967
    PUSH 0x642683                       ; 0055d96c | = "bottom"
        ;   Label: LAB_0055d96c
    LEA EAX,[ESP + 0x3460]              ; 0055d971
    PUSH EAX                            ; 0055d978
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055d979
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055d97e
    TEST EAX,EAX                        ; 0055d981
    JNZ 0x0055da75                      ; 0055d983
        ;   XREF to: 0055da75 (CONDITIONAL_JUMP)  ; LAB_0055da75
    MOV ESI,0x2                         ; 0055d989
    CMP dword ptr [0x0310ec9c],0x0      ; 0055d98e | g_ScriptEventsEnabled
        ;   Label: LAB_0055d98e
    JNZ 0x0055a8bb                      ; 0055d995
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,[0x0067b654]                ; 0055d99b | g_CGamePtr | g_CGameInstance
    MOV dword ptr [EAX + 0x228],ESI     ; 0055d9a0 | DAT_02d81cc4
    TEST ESI,ESI                        ; 0055d9a6
    SETZ DL                             ; 0055d9a8
    AND EDX,0xff                        ; 0055d9ab
    MOV ESI,dword ptr [EAX + 0x228]     ; 0055d9b1 | DAT_02d81cc4
    MOV dword ptr [EAX + 0x22c],EDX     ; 0055d9b7 | DAT_02d81cc8
    TEST ESI,ESI                        ; 0055d9bd
    SETZ DL                             ; 0055d9bf
    AND EDX,0xff                        ; 0055d9c2
    MOV dword ptr [EAX + 0x230],EDX     ; 0055d9c8 | DAT_02d81ccc
    MOV EDX,dword ptr [EAX + 0x228]     ; 0055d9ce | DAT_02d81cc4
    MOV dword ptr [EAX + 0x238],EDX     ; 0055d9d4 | DAT_02d81cd4
    MOV dword ptr [EBX + 0x458],0xffffffff ; 0055d9da
    MOV EDI,0x1                         ; 0055d9e4
    MOV EDX,dword ptr [EAX + 0x240]     ; 0055d9e9 | g_CGameInstance.block_auto_save
    MOV dword ptr [0x0310f4a4],EDI      ; 0055d9ef | g_ScriptInputFlag
    TEST EDX,EDX                        ; 0055d9f5
    JZ 0x0055a8bb                       ; 0055d9f7
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    CMP dword ptr [EAX + 0x228],0x0     ; 0055d9fd | DAT_02d81cc4
    JZ 0x0055a8bb                       ; 0055da04
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,dword ptr [0x006810c8]      ; 0055da0a | g_CDemonSetPtr
    PUSH ESI                            ; 0055da10 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x240],0x0     ; 0055da11 | g_CGameInstance.block_auto_save
    CALL core_event.cpp_getSelectedCameraIndex_FUN_004b1970 ; 0055da1b
        ;   XREF to: 004b1970 (UNCONDITIONAL_CALL)  ; int core_event.cpp_getSelectedCameraIndex_FUN_004b1970(CDemonSet * set_ptr)
    ADD ESP,0x4                         ; 0055da20
    MOV ESI,EAX                         ; 0055da23
    MOV EAX,[0x00680d50]                ; 0055da25 | g_CScriptPtr
    PUSH EDI                            ; 0055da2a
    MOV EDI,dword ptr [EAX + 0xc]       ; 0055da2b | DAT_0310f864
    PUSH EDI                            ; 0055da2e
    MOV EAX,[0x006810c8]                ; 0055da2f | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 0055da34 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 0055da35
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 0055da3a
    MOV EDX,dword ptr [0x006810c8]      ; 0055da3d | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EAX,[0x00680d50]                ; 0055da43 | g_CScriptPtr | g_CScriptInstance
    PUSH EDX                            ; 0055da48 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x10],0x0      ; 0055da49 | DAT_0310f868
    CALL core_event.cpp_getSelectedCameraIndex_FUN_004b1970 ; 0055da50
        ;   XREF to: 004b1970 (UNCONDITIONAL_CALL)  ; int core_event.cpp_getSelectedCameraIndex_FUN_004b1970(CDemonSet * set_ptr)
    ADD ESP,0x4                         ; 0055da55
    CMP ESI,EAX                         ; 0055da58
    JNZ 0x0055a8bb                      ; 0055da5a
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055da60
    MOV ECX,dword ptr [0x006810c8]      ; 0055da61 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0055da67 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0055da68
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0055da6d
    JMP 0x0055a8bb                      ; 0055da70
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    TEST ESI,ESI                        ; 0055da75
        ;   Label: LAB_0055da75
    JGE 0x0055d98e                      ; 0055da77
        ;   XREF to: 0055d98e (CONDITIONAL_JUMP)  ; LAB_0055d98e
    LEA EAX,[ESP + 0x345c]              ; 0055da7d
    PUSH EAX                            ; 0055da84
    PUSH 0x64268a                       ; 0055da85 | = "Invalid letterBox mode: %s"
    PUSH 0x310eca0                      ; 0055da8a | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055da8f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055da94
    JMP 0x0055a98c                      ; 0055da97
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xe                         ; 0055da9c
        ;   Label: LAB_0055da9c
    PUSH ESI                            ; 0055da9f
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055daa0
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055daa5
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055daa8
    LEA EAX,[ESP + 0x3a38]              ; 0055daaf
    PUSH EAX                            ; 0055dab6
    LEA EAX,[ESP + 0x3e90]              ; 0055dab7
    PUSH EAX                            ; 0055dabe
    CALL core_script.cpp_parseConditionExpr_FUN_005594a0 ; 0055dabf
        ;   XREF to: 005594a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_005594a0(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0055dac4
    TEST EAX,EAX                        ; 0055dac7
    JNZ 0x0055d708                      ; 0055dac9
        ;   XREF to: 0055d708 (CONDITIONAL_JUMP)  ; LAB_0055d708
    CMP dword ptr [0x0310ec9c],0x0      ; 0055dacf | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055dad6
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3a38]              ; 0055dadc
    PUSH EAX                            ; 0055dae3
    MOV EDI,dword ptr [0x006793d0]      ; 0055dae4 | g_CEventListPtr
    PUSH EDI                            ; 0055daea | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055daeb
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055daf0
    MOV dword ptr [EBX + 0x14],EAX      ; 0055daf3
    JMP 0x0055a8bb                      ; 0055daf6
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x6                         ; 0055dafb
        ;   Label: LAB_0055dafb
    PUSH ESI                            ; 0055dafe
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055daff
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055db04
    ADD ESP,0x4                         ; 0055db09
    MOV dword ptr [ESP + 0x3ef0],EDX    ; 0055db0c
    LEA EDX,[ESP + 0x3ef0]              ; 0055db13
    PUSH EDX                            ; 0055db1a
    LEA EDX,[ESP + 0x2c18]              ; 0055db1b
    PUSH EDX                            ; 0055db22
    PUSH 0x6426bb                       ; 0055db23 | = "(%[^,)]%n"
    PUSH EAX                            ; 0055db28
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055db29
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055db30
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055db35
    MOV ECX,dword ptr [ESP + 0x3ef0]    ; 0055db38
    CMP ECX,0x2                         ; 0055db3f
    JGE 0x0055db5b                      ; 0055db42
        ;   XREF to: 0055db5b (CONDITIONAL_JUMP)  ; LAB_0055db5b
    PUSH 0x6426c5                       ; 0055db44 | = "Error parsing lookAt command parms"
    PUSH 0x310eca0                      ; 0055db49 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055db4e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055db53
    JMP 0x0055a98c                      ; 0055db56
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055db5b
        ;   Label: LAB_0055db5b
    LEA EAX,[ESP + 0x2c14]              ; 0055db62
    ADD ESI,ECX                         ; 0055db69
    PUSH EAX                            ; 0055db6b
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055db6c
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055db73
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055db78
    PUSH 0x823c14                       ; 0055db7b | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x00823c4c]      ; 0055db80 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0055db86
    LEA EAX,[ESP + 0x2c1c]              ; 0055db87
    PUSH EAX                            ; 0055db8e
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055db8f
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055db94
    MOV ESI,EAX                         ; 0055db97
    TEST EAX,EAX                        ; 0055db99
    JNZ 0x0055dbaf                      ; 0055db9b
        ;   XREF to: 0055dbaf (CONDITIONAL_JUMP)  ; LAB_0055dbaf
    CMP dword ptr [0x0310f4ac],0x0      ; 0055db9d | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055dba4
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055dbaa
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055dbaf
        ;   Label: LAB_0055dbaf
    MOV CL,byte ptr [EDX]               ; 0055dbb6
    XOR EAX,EAX                         ; 0055dbb8
    CMP CL,0x2c                         ; 0055dbba
    JZ 0x0055dbf4                       ; 0055dbbd
        ;   XREF to: 0055dbf4 (CONDITIONAL_JUMP)  ; LAB_0055dbf4
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055dbbf
        ;   Label: LAB_0055dbbf
    CMP byte ptr [EDX],0x29             ; 0055dbc6
    JNZ 0x0055dc95                      ; 0055dbc9
        ;   XREF to: 0055dc95 (CONDITIONAL_JUMP)  ; LAB_0055dc95
    INC EDX                             ; 0055dbcf
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055dbd0 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055dbd6
    TEST ECX,ECX                        ; 0055dbdd
    JNZ 0x0055a8bb                      ; 0055dbdf
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055dbe5
    PUSH ESI                            ; 0055dbe6
    CALL core_charactr.cpp_CCharacter_setLookAtTarget_FUN_0042ddd0 ; 0055dbe7
        ;   XREF to: 0042ddd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setLookAtTarget_FUN_0042ddd0(CCharacter * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 0055dbec
    JMP 0x0055a8bb                      ; 0055dbef
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [ESP + 0x3ef0],0xffffffff ; 0055dbf4
        ;   Label: LAB_0055dbf4
    LEA EAX,[ESP + 0x3ef0]              ; 0055dbff
    PUSH EAX                            ; 0055dc06
    LEA EAX,[ESP + 0xff8]               ; 0055dc07
    PUSH EAX                            ; 0055dc0e
    PUSH 0x6426e8                       ; 0055dc0f | = ", %[^)]%n"
    PUSH EDX                            ; 0055dc14
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055dc15
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055dc1a
    MOV ECX,dword ptr [ESP + 0x3ef0]    ; 0055dc1d
    CMP ECX,0x3                         ; 0055dc24
    JGE 0x0055dc40                      ; 0055dc27
        ;   XREF to: 0055dc40 (CONDITIONAL_JUMP)  ; LAB_0055dc40
    PUSH 0x6426f2                       ; 0055dc29 | = "Error parsing lookAt command parms"
    PUSH 0x310eca0                      ; 0055dc2e | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055dc33
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055dc38
    JMP 0x0055a98c                      ; 0055dc3b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDI,dword ptr [ESP + 0x3e8c]    ; 0055dc40
        ;   Label: LAB_0055dc40
    LEA EAX,[ESP + 0xff4]               ; 0055dc47
    ADD EDI,ECX                         ; 0055dc4e
    PUSH EAX                            ; 0055dc50
    MOV dword ptr [ESP + 0x3e90],EDI    ; 0055dc51
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055dc58
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055dc5d
    PUSH 0x821ff8                       ; 0055dc60 | g_CDemonActorClassInfo
    MOV EAX,[0x00822030]                ; 0055dc65 | g_CDemonActorClassInfo.name_hash
    PUSH EAX                            ; 0055dc6a
    LEA EAX,[ESP + 0xffc]               ; 0055dc6b
    PUSH EAX                            ; 0055dc72
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055dc73
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055dc78
    TEST EAX,EAX                        ; 0055dc7b
    JNZ 0x0055dbbf                      ; 0055dc7d
        ;   XREF to: 0055dbbf (CONDITIONAL_JUMP)  ; LAB_0055dbbf
    CMP dword ptr [0x0310f4ac],0x0      ; 0055dc83 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055dc8a
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055dc90
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x642715                       ; 0055dc95 | = "Missing closing ')' in lookAt command"
        ;   Label: LAB_0055dc95
    PUSH 0x310eca0                      ; 0055dc9a | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055dc9f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055dca4
    JMP 0x0055a98c                      ; 0055dca7
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xc                         ; 0055dcac
        ;   Label: LAB_0055dcac
    PUSH ESI                            ; 0055dcaf
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055dcb0
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055dcb5
    ADD ESP,0x4                         ; 0055dcba
    MOV dword ptr [ESP + 0x3ef4],EDX    ; 0055dcbd
    LEA EDX,[ESP + 0x3ef4]              ; 0055dcc4
    PUSH EDX                            ; 0055dccb
    LEA EDX,[ESP + 0x38]                ; 0055dccc
    PUSH EDX                            ; 0055dcd0
    LEA EDX,[ESP + 0x38]                ; 0055dcd1
    PUSH EDX                            ; 0055dcd5
    LEA EDX,[ESP + 0x1578]              ; 0055dcd6
    PUSH EDX                            ; 0055dcdd
    PUSH 0x642748                       ; 0055dcde | = "(%[^,], %f , %f )%n"
    PUSH EAX                            ; 0055dce3
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0055dce4
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055dceb
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 0055dcf0
    MOV ECX,dword ptr [ESP + 0x3ef4]    ; 0055dcf3
    CMP ECX,0x5                         ; 0055dcfa
    JGE 0x0055dd16                      ; 0055dcfd
        ;   XREF to: 0055dd16 (CONDITIONAL_JUMP)  ; LAB_0055dd16
    PUSH 0x64275c                       ; 0055dcff | = "Error parsing movePlatform command parms"
    PUSH 0x310eca0                      ; 0055dd04 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055dd09
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055dd0e
    JMP 0x0055a98c                      ; 0055dd11
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055dd16
        ;   Label: LAB_0055dd16
    LEA EAX,[ESP + 0x156c]              ; 0055dd1d
    ADD ESI,ECX                         ; 0055dd24
    PUSH EAX                            ; 0055dd26
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055dd27
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055dd2e
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055dd33
    PUSH 0x30d5054                      ; 0055dd36 | g_CPlatformClassInfo
    MOV EDI,dword ptr [0x030d508c]      ; 0055dd3b | g_CPlatformClassInfo.name_hash
    PUSH EDI                            ; 0055dd41
    LEA EAX,[ESP + 0x1574]              ; 0055dd42
    PUSH EAX                            ; 0055dd49
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055dd4a
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,EAX                         ; 0055dd4f
    ADD ESP,0xc                         ; 0055dd51
    TEST EAX,EAX                        ; 0055dd54
    JNZ 0x0055dd6a                      ; 0055dd56
        ;   XREF to: 0055dd6a (CONDITIONAL_JUMP)  ; LAB_0055dd6a
    CMP dword ptr [0x0310f4ac],0x0      ; 0055dd58 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055dd5f
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055dd65
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    FLD float ptr [ESP + 0x30]          ; 0055dd6a
        ;   Label: LAB_0055dd6a
    FLDZ                                ; 0055dd6e
    FXCH                                ; 0055dd70
    FSTP double ptr [ESP]               ; 0055dd72
    FCOMP double ptr [ESP]              ; 0055dd75
    FNSTSW AX                           ; 0055dd78
    SAHF                                ; 0055dd7a
    JA 0x0055ddbf                       ; 0055dd7b
        ;   XREF to: 0055ddbf (CONDITIONAL_JUMP)  ; LAB_0055ddbf
    FLD1                                ; 0055dd7d
    FCOMP double ptr [ESP]              ; 0055dd7f
    FNSTSW AX                           ; 0055dd82
    SAHF                                ; 0055dd84
    JC 0x0055ddbf                       ; 0055dd85
        ;   XREF to: 0055ddbf (CONDITIONAL_JUMP)  ; LAB_0055ddbf
    FLD float ptr [ESP + 0x34]          ; 0055dd87
    FLDZ                                ; 0055dd8b
    FXCH                                ; 0055dd8d
    FSTP double ptr [ESP + 0x8]         ; 0055dd8f
    FCOMP double ptr [ESP + 0x8]        ; 0055dd93
    FNSTSW AX                           ; 0055dd97
    SAHF                                ; 0055dd99
    JNC 0x0055ddd6                      ; 0055dd9a
        ;   XREF to: 0055ddd6 (CONDITIONAL_JUMP)  ; LAB_0055ddd6
    CMP dword ptr [0x0310ec9c],0x0      ; 0055dd9c | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055dda3
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH dword ptr [ESP + 0x34]         ; 0055dda9
    PUSH dword ptr [ESP + 0x34]         ; 0055ddad
    PUSH EDX                            ; 0055ddb1
    CALL core_platfrm.cpp_CPlatform_FUN_0054d690 ; 0055ddb2
        ;   XREF to: 0054d690 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_FUN_0054d690(CPlatform * this_ptr)
    ADD ESP,0xc                         ; 0055ddb7
    JMP 0x0055a8bb                      ; 0055ddba
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642785                       ; 0055ddbf | = "Paramater must be in range 0.0 .. 1.0"
        ;   Label: LAB_0055ddbf
    PUSH 0x310eca0                      ; 0055ddc4 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ddc9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055ddce
    JMP 0x0055a98c                      ; 0055ddd1
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055ddd6
        ;   Label: LAB_0055ddd6
    PUSH EDX                            ; 0055ddda
    MOV ECX,dword ptr [ESP + 0xc]       ; 0055dddb
    PUSH ECX                            ; 0055dddf
    PUSH 0x6427ab                       ; 0055dde0 | = "Invalid movement rate %f"
    JMP 0x0055a97f                      ; 0055dde5
        ;   XREF to: 0055a97f (UNCONDITIONAL_JUMP)  ; LAB_0055a97f
    ADD ESI,0x8                         ; 0055ddea
        ;   Label: LAB_0055ddea
    PUSH ESI                            ; 0055dded
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055ddee
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055ddf3
    LEA EDX,[ESP + 0x3ef8]              ; 0055ddf6
    PUSH EDX                            ; 0055ddfd
    LEA EDX,[ESP + 0x10c0]              ; 0055ddfe
    PUSH EDX                            ; 0055de05
    LEA EDX,[ESP + 0x1704]              ; 0055de06
    PUSH EDX                            ; 0055de0d
    PUSH 0x6427cd                       ; 0055de0e | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055de13
    PUSH EAX                            ; 0055de18
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055de19
    MOV dword ptr [ESP + 0x3f0c],EDI    ; 0055de20
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055de27
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055de2c
    MOV EAX,dword ptr [ESP + 0x3ef8]    ; 0055de2f
    CMP EAX,0x5                         ; 0055de36
    JGE 0x0055de52                      ; 0055de39
        ;   XREF to: 0055de52 (CONDITIONAL_JUMP)  ; LAB_0055de52
    PUSH 0x6427de                       ; 0055de3b | = "Error parsing openDoor command parms"
    PUSH 0x310eca0                      ; 0055de40 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055de45
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055de4a
    JMP 0x0055a98c                      ; 0055de4d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055de52
        ;   Label: LAB_0055de52
    ADD EDX,EAX                         ; 0055de59
    LEA EAX,[ESP + 0x10bc]              ; 0055de5b
    PUSH EAX                            ; 0055de62
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055de63
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055de6a
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055de6f
    LEA EAX,[ESP + 0x16fc]              ; 0055de72
    PUSH EAX                            ; 0055de79
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055de7a
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055de7f
    PUSH 0x2c14cdc                      ; 0055de82 | g_CDoorClassInfo
    MOV ECX,dword ptr [0x02c14d14]      ; 0055de87 | g_CDoorClassInfo.name_hash
    PUSH ECX                            ; 0055de8d
    LEA EAX,[ESP + 0x10c4]              ; 0055de8e
    PUSH EAX                            ; 0055de95
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055de96
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055de9b
    ADD ESP,0xc                         ; 0055de9d
    TEST EAX,EAX                        ; 0055dea0
    JNZ 0x0055deb6                      ; 0055dea2
        ;   XREF to: 0055deb6 (CONDITIONAL_JUMP)  ; LAB_0055deb6
    CMP dword ptr [0x0310f4ac],0x0      ; 0055dea4 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055deab
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055deb1
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x823c14                       ; 0055deb6 | g_CCharacterClassInfo
        ;   Label: LAB_0055deb6
    MOV EDI,dword ptr [0x00823c4c]      ; 0055debb | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0055dec1
    LEA EAX,[ESP + 0x1704]              ; 0055dec2
    PUSH EAX                            ; 0055dec9
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055deca
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,EAX                         ; 0055decf
    ADD ESP,0xc                         ; 0055ded1
    TEST EAX,EAX                        ; 0055ded4
    JNZ 0x0055deea                      ; 0055ded6
        ;   XREF to: 0055deea (CONDITIONAL_JUMP)  ; LAB_0055deea
    CMP dword ptr [0x0310f4ac],0x0      ; 0055ded8 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055dedf
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055dee5
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EAX,[0x0310ec9c]                ; 0055deea | g_ScriptEventsEnabled
        ;   Label: LAB_0055deea
    TEST EAX,EAX                        ; 0055deef
    JNZ 0x0055a8bb                      ; 0055def1
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    FLD float ptr [EBX + 0x4c]          ; 0055def7
    FLDZ                                ; 0055defa
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055defc
    FCOMPP                              ; 0055df03
    FNSTSW AX                           ; 0055df05
    SAHF                                ; 0055df07
    JBE 0x0055df27                      ; 0055df08
        ;   XREF to: 0055df27 (CONDITIONAL_JUMP)  ; LAB_0055df27
    PUSH ESI                            ; 0055df0a
    MOV EAX,dword ptr [EDX + 0x154]     ; 0055df0b
    PUSH EDX                            ; 0055df11
    CALL dword ptr [EAX + 0x130]        ; 0055df12
    ADD ESP,0x8                         ; 0055df18
    MOV dword ptr [EBX + 0x4c],0x3f800000 ; 0055df1b
    JMP 0x0055a8bb                      ; 0055df22
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EDX                            ; 0055df27
        ;   Label: LAB_0055df27
    MOV EAX,dword ptr [EDX + 0x154]     ; 0055df28
    CALL dword ptr [EAX + 0x138]        ; 0055df2e
    ADD ESP,0x4                         ; 0055df34
    TEST EAX,EAX                        ; 0055df37
    JZ 0x0055a8bb                       ; 0055df39
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [ESP + 0x3e94],0x1    ; 0055df3f
    JMP 0x0055a8bb                      ; 0055df4a
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xb                         ; 0055df4f
        ;   Label: LAB_0055df4f
    PUSH ESI                            ; 0055df52
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055df53
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055df58
    ADD ESP,0x4                         ; 0055df5d
    MOV dword ptr [ESP + 0x3f00],EDX    ; 0055df60
    LEA EDX,[ESP + 0x3f00]              ; 0055df67
    PUSH EDX                            ; 0055df6e
    LEA EDX,[ESP + 0x3aa0]              ; 0055df6f
    PUSH EDX                            ; 0055df76
    LEA EDX,[ESP + 0x3b08]              ; 0055df77
    PUSH EDX                            ; 0055df7e
    PUSH 0x64280f                       ; 0055df7f | = "( %[^,], %[^)])%n"
    PUSH EAX                            ; 0055df84
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055df85
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055df8c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055df91
    MOV ECX,dword ptr [ESP + 0x3f00]    ; 0055df94
    CMP ECX,0x5                         ; 0055df9b
    JGE 0x0055dfb7                      ; 0055df9e
        ;   XREF to: 0055dfb7 (CONDITIONAL_JUMP)  ; LAB_0055dfb7
    PUSH 0x642821                       ; 0055dfa0 | = "Error parsing pressButton() command p..."
    PUSH 0x310eca0                      ; 0055dfa5 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055dfaa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055dfaf
    JMP 0x0055a98c                      ; 0055dfb2
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055dfb7
        ;   Label: LAB_0055dfb7
    LEA EAX,[ESP + 0x3b00]              ; 0055dfbe
    ADD ESI,ECX                         ; 0055dfc5
    PUSH EAX                            ; 0055dfc7
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055dfc8
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055dfcf
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055dfd4
    LEA EAX,[ESP + 0x3a9c]              ; 0055dfd7
    PUSH EAX                            ; 0055dfde
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055dfdf
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055dfe4
    PUSH 0x2db87d4                      ; 0055dfe7 | g_CHeroClassInfo
    MOV EDI,dword ptr [0x02db880c]      ; 0055dfec | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 0055dff2
    LEA EAX,[ESP + 0x3b08]              ; 0055dff3
    PUSH EAX                            ; 0055dffa
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055dffb
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055e000
    TEST EAX,EAX                        ; 0055e003
    JNZ 0x0055e019                      ; 0055e005
        ;   XREF to: 0055e019 (CONDITIONAL_JUMP)  ; LAB_0055e019
    CMP dword ptr [0x0310f4ac],0x0      ; 0055e007 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055e00e
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055e014
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EDX,[ESP + 0x3a9c]              ; 0055e019
        ;   Label: LAB_0055e019
    PUSH EDX                            ; 0055e020
    ADD EAX,0xbe2c                      ; 0055e021
    PUSH EAX                            ; 0055e026
    CALL core_script.cpp_getActionKeyOffset_FUN_00559660 ; 0055e027
        ;   XREF to: 00559660 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_getActionKeyOffset_FUN_00559660(SActionKeyBindings * action_bindings, char * action_name)
    ADD ESP,0x8                         ; 0055e02c
    MOV ESI,EAX                         ; 0055e02f
    TEST EAX,EAX                        ; 0055e031
    JZ 0x0055e06d                       ; 0055e033
        ;   XREF to: 0055e06d (CONDITIONAL_JUMP)  ; LAB_0055e06d
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e035 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055e03c
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    CMP dword ptr [0x0310f4a4],0x0      ; 0055e042 | g_ScriptInputFlag
    JZ 0x0055e062                       ; 0055e049
        ;   XREF to: 0055e062 (CONDITIONAL_JUMP)  ; LAB_0055e062
    MOV ECX,dword ptr [0x0067b654]      ; 0055e04b | g_CGamePtr
    PUSH ECX                            ; 0055e051 | g_CGameInstance
    XOR EDI,EDI                         ; 0055e052
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 0055e054
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055e059
    MOV dword ptr [0x0310f4a4],EDI      ; 0055e05c | g_ScriptInputFlag
    MOV dword ptr [ESI],0x1             ; 0055e062
        ;   Label: LAB_0055e062
    JMP 0x0055a8bb                      ; 0055e068
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3a9c]              ; 0055e06d
        ;   Label: LAB_0055e06d
    PUSH EAX                            ; 0055e074
    PUSH 0x64284b                       ; 0055e075 | = "Invalid button name: %s"
    PUSH 0x310eca0                      ; 0055e07a | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e07f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055e084
    JMP 0x0055a98c                      ; 0055e087
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x5                         ; 0055e08c
        ;   Label: LAB_0055e08c
    PUSH ESI                            ; 0055e08f
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e090
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e095
    PUSH 0x64                           ; 0055e098
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055e09a
    LEA EAX,[ESP + 0x358c]              ; 0055e0a1
    PUSH EAX                            ; 0055e0a8
    LEA EAX,[ESP + 0x3e94]              ; 0055e0a9
    PUSH EAX                            ; 0055e0b0
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055e0b1
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055e0b6
    TEST EAX,EAX                        ; 0055e0b9
    JNZ 0x0055e10b                      ; 0055e0bb
        ;   XREF to: 0055e10b (CONDITIONAL_JUMP)  ; LAB_0055e10b
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e0bd | g_ScriptEventsEnabled
    JZ 0x0055e123                       ; 0055e0c4
        ;   XREF to: 0055e123 (CONDITIONAL_JUMP)  ; LAB_0055e123
    LEA EAX,[ESP + 0x3588]              ; 0055e0c6
    PUSH EAX                            ; 0055e0cd
    MOV ESI,dword ptr [0x006793d0]      ; 0055e0ce | g_CEventListPtr
    PUSH ESI                            ; 0055e0d4 | g_CEventListInstance
    CALL core_event.cpp_CEventList_validateCommands_FUN_004add40 ; 0055e0d5
        ;   XREF to: 004add40 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_004add40(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0055e0da
    TEST EAX,EAX                        ; 0055e0dd
    JZ 0x0055a8bb                       ; 0055e0df
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDI,0x310eca0                   ; 0055e0e5 | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055e0ea
    PUSH EDI                            ; 0055e0ec | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055e0ed
        ;   Label: LAB_0055e0ed
    MOV byte ptr [EDI],AL               ; 0055e0ef | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055e0f1
    JZ 0x0055e105                       ; 0055e0f3
        ;   XREF to: 0055e105 (CONDITIONAL_JUMP)  ; LAB_0055e105
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e0f5
    ADD ESI,0x2                         ; 0055e0f8
    MOV byte ptr [EDI + 0x1],AL         ; 0055e0fb | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055e0fe
    CMP AL,0x0                          ; 0055e101
    JNZ 0x0055e0ed                      ; 0055e103
        ;   XREF to: 0055e0ed (CONDITIONAL_JUMP)  ; LAB_0055e0ed
    POP EDI                             ; 0055e105
        ;   Label: LAB_0055e105
    JMP 0x0055a98c                      ; 0055e106
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH EAX                            ; 0055e10b
        ;   Label: LAB_0055e10b
    PUSH 0x642869                       ; 0055e10c | = "Error parsing event expression on rai..."
    PUSH 0x310eca0                      ; 0055e111 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e116
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055e11b
    JMP 0x0055a98c                      ; 0055e11e
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3588]              ; 0055e123
        ;   Label: LAB_0055e123
    PUSH EAX                            ; 0055e12a
    MOV ECX,dword ptr [0x006793d0]      ; 0055e12b | g_CEventListPtr | g_CEventListInstance
    PUSH ECX                            ; 0055e131 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 0055e132
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0055e137
    JMP 0x0055a8bb                      ; 0055e13a
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xd                         ; 0055e13f
        ;   Label: LAB_0055e13f
    PUSH ESI                            ; 0055e142
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e143
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e148
    LEA EDX,[ESP + 0x3f08]              ; 0055e14b
    PUSH EDX                            ; 0055e152
    LEA EDX,[ESP + 0x36b8]              ; 0055e153
    PUSH EDX                            ; 0055e15a
    LEA EDX,[ESP + 0x38b0]              ; 0055e15b
    PUSH EDX                            ; 0055e162
    PUSH 0x6428ad                       ; 0055e163 | = "( %[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055e168
    PUSH EAX                            ; 0055e16d
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055e16e
    MOV dword ptr [ESP + 0x3f1c],EDI    ; 0055e175
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e17c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055e181
    MOV EAX,dword ptr [ESP + 0x3f08]    ; 0055e184
    CMP EAX,0x5                         ; 0055e18b
    JGE 0x0055e1a7                      ; 0055e18e
        ;   XREF to: 0055e1a7 (CONDITIONAL_JUMP)  ; LAB_0055e1a7
    PUSH 0x6428bf                       ; 0055e190 | = "Error parsing releaseButton() command..."
    PUSH 0x310eca0                      ; 0055e195 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e19a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e19f
    JMP 0x0055a98c                      ; 0055e1a2
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055e1a7
        ;   Label: LAB_0055e1a7
    ADD EDX,EAX                         ; 0055e1ae
    LEA EAX,[ESP + 0x38a8]              ; 0055e1b0
    PUSH EAX                            ; 0055e1b7
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055e1b8
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e1bf
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e1c4
    LEA EAX,[ESP + 0x36b4]              ; 0055e1c7
    PUSH EAX                            ; 0055e1ce
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e1cf
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e1d4
    PUSH 0x2db87d4                      ; 0055e1d7 | g_CHeroClassInfo
    MOV ECX,dword ptr [0x02db880c]      ; 0055e1dc | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0055e1e2
    LEA EAX,[ESP + 0x38b0]              ; 0055e1e3
    PUSH EAX                            ; 0055e1ea
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055e1eb
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055e1f0
    TEST EAX,EAX                        ; 0055e1f3
    JNZ 0x0055e209                      ; 0055e1f5
        ;   XREF to: 0055e209 (CONDITIONAL_JUMP)  ; LAB_0055e209
    CMP dword ptr [0x0310f4ac],0x0      ; 0055e1f7 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055e1fe
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055e204
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EDX,[ESP + 0x36b4]              ; 0055e209
        ;   Label: LAB_0055e209
    PUSH EDX                            ; 0055e210
    ADD EAX,0xbe2c                      ; 0055e211
    PUSH EAX                            ; 0055e216
    CALL core_script.cpp_getActionKeyOffset_FUN_00559660 ; 0055e217
        ;   XREF to: 00559660 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_getActionKeyOffset_FUN_00559660(SActionKeyBindings * action_bindings, char * action_name)
    ADD ESP,0x8                         ; 0055e21c
    MOV ESI,EAX                         ; 0055e21f
    TEST EAX,EAX                        ; 0055e221
    JZ 0x0055e25c                       ; 0055e223
        ;   XREF to: 0055e25c (CONDITIONAL_JUMP)  ; LAB_0055e25c
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055e225 | g_ScriptEventsEnabled
    TEST EDI,EDI                        ; 0055e22b
    JNZ 0x0055a8bb                      ; 0055e22d
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    CMP dword ptr [0x0310f4a4],0x0      ; 0055e233 | g_ScriptInputFlag
    JZ 0x0055e251                       ; 0055e23a
        ;   XREF to: 0055e251 (CONDITIONAL_JUMP)  ; LAB_0055e251
    MOV EDX,dword ptr [0x0067b654]      ; 0055e23c | g_CGamePtr
    PUSH EDX                            ; 0055e242 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 0055e243
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
    ADD ESP,0x4                         ; 0055e248
    MOV dword ptr [0x0310f4a4],EDI      ; 0055e24b | g_ScriptInputFlag
    MOV dword ptr [ESI],0x0             ; 0055e251
        ;   Label: LAB_0055e251
    JMP 0x0055a8bb                      ; 0055e257
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x36b4]              ; 0055e25c
        ;   Label: LAB_0055e25c
    PUSH EAX                            ; 0055e263
    PUSH 0x6428eb                       ; 0055e264 | = "Invalid button name: %s"
    PUSH 0x310eca0                      ; 0055e269 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e26e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055e273
    JMP 0x0055a98c                      ; 0055e276
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x1b                        ; 0055e27b
        ;   Label: LAB_0055e27b
    PUSH ESI                            ; 0055e27e
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e27f
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e284
    LEA EDX,[ESP + 0x3f0c]              ; 0055e287
    PUSH EDX                            ; 0055e28e
    LEA EDX,[ESP + 0x1890]              ; 0055e28f
    PUSH EDX                            ; 0055e296
    PUSH 0x64291f                       ; 0055e297 | = " ( %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055e29c
    PUSH EAX                            ; 0055e2a1
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055e2a2
    MOV dword ptr [ESP + 0x3f1c],EDI    ; 0055e2a9
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e2b0
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055e2b5
    MOV EAX,dword ptr [ESP + 0x3f0c]    ; 0055e2b8
    CMP EAX,0x3                         ; 0055e2bf
    JGE 0x0055e2db                      ; 0055e2c2
        ;   XREF to: 0055e2db (CONDITIONAL_JUMP)  ; LAB_0055e2db
    PUSH 0x64292b                       ; 0055e2c4 | = "Error parsing removeAllItemsFromInven..."
    PUSH 0x310eca0                      ; 0055e2c9 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e2ce
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e2d3
    JMP 0x0055a98c                      ; 0055e2d6
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055e2db
        ;   Label: LAB_0055e2db
    ADD EDX,EAX                         ; 0055e2e2
    LEA EAX,[ESP + 0x188c]              ; 0055e2e4
    PUSH EAX                            ; 0055e2eb
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055e2ec
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e2f3
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e2f8
    PUSH 0x2db87d4                      ; 0055e2fb | g_CHeroClassInfo
    MOV ECX,dword ptr [0x02db880c]      ; 0055e300 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0055e306
    LEA EAX,[ESP + 0x1894]              ; 0055e307
    PUSH EAX                            ; 0055e30e
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055e30f
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055e314
    TEST EAX,EAX                        ; 0055e317
    JNZ 0x0055e32d                      ; 0055e319
        ;   XREF to: 0055e32d (CONDITIONAL_JUMP)  ; LAB_0055e32d
    CMP dword ptr [0x0310f4ac],0x0      ; 0055e31b | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055e322
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055e328
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e32d | g_ScriptEventsEnabled
        ;   Label: LAB_0055e32d
    JNZ 0x0055a8bb                      ; 0055e334
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD EAX,0x1f738                     ; 0055e33a
    PUSH EAX                            ; 0055e33f
    CALL core_inv.cpp_CInventory_initialize_FUN_004fd190 ; 0055e340
        ;   XREF to: 004fd190 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004fd190(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0055e345
    JMP 0x0055a8bb                      ; 0055e348
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x17                        ; 0055e34d
        ;   Label: LAB_0055e34d
    PUSH ESI                            ; 0055e350
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e351
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055e356
    ADD ESP,0x4                         ; 0055e35b
    MOV dword ptr [ESP + 0x3f10],EDX    ; 0055e35e
    LEA EDX,[ESP + 0x3f10]              ; 0055e365
    PUSH EDX                            ; 0055e36c
    LEA EDX,[ESP + 0x1f98]              ; 0055e36d
    PUSH EDX                            ; 0055e374
    LEA EDX,[ESP + 0x1ed4]              ; 0055e375
    PUSH EDX                            ; 0055e37c
    PUSH 0x64297b                       ; 0055e37d | = " ( %[^,], %[^)])%n"
    PUSH EAX                            ; 0055e382
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055e383
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e38a
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055e38f
    MOV ECX,dword ptr [ESP + 0x3f10]    ; 0055e392
    CMP ECX,0x3                         ; 0055e399
    JGE 0x0055e3b5                      ; 0055e39c
        ;   XREF to: 0055e3b5 (CONDITIONAL_JUMP)  ; LAB_0055e3b5
    PUSH 0x64298e                       ; 0055e39e | = "Error parsing removeItemFromInventory..."
    PUSH 0x310eca0                      ; 0055e3a3 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e3a8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e3ad
    JMP 0x0055a98c                      ; 0055e3b0
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055e3b5
        ;   Label: LAB_0055e3b5
    LEA EAX,[ESP + 0x1ecc]              ; 0055e3bc
    ADD ESI,ECX                         ; 0055e3c3
    PUSH EAX                            ; 0055e3c5
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055e3c6
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e3cd
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e3d2
    LEA EAX,[ESP + 0x1f94]              ; 0055e3d5
    PUSH EAX                            ; 0055e3dc
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e3dd
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e3e2
    PUSH 0x2db87d4                      ; 0055e3e5 | g_CHeroClassInfo
    MOV EDI,dword ptr [0x02db880c]      ; 0055e3ea | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 0055e3f0
    LEA EAX,[ESP + 0x1ed4]              ; 0055e3f1
    PUSH EAX                            ; 0055e3f8
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055e3f9
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055e3fe
    ADD ESP,0xc                         ; 0055e400
    TEST EAX,EAX                        ; 0055e403
    JNZ 0x0055e419                      ; 0055e405
        ;   XREF to: 0055e419 (CONDITIONAL_JUMP)  ; LAB_0055e419
    CMP dword ptr [0x0310f4ac],0x0      ; 0055e407 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055e40e
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055e414
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e419 | g_ScriptEventsEnabled
        ;   Label: LAB_0055e419
    JNZ 0x0055a8bb                      ; 0055e420
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x1f94]              ; 0055e426
    PUSH EAX                            ; 0055e42d
    MOV EAX,[0x02db87d0]                ; 0055e42e | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0055e433 | g_HeroActors
    ADD EAX,0x1f738                     ; 0055e43a
    PUSH EAX                            ; 0055e43f
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0 ; 0055e440
        ;   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 0055e445
    TEST EAX,EAX                        ; 0055e448
    JZ 0x0055a8bb                       ; 0055e44a
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x1                            ; 0055e450
    PUSH EAX                            ; 0055e452
    ADD ESI,0x1f738                     ; 0055e453
    PUSH ESI                            ; 0055e459
    CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70 ; 0055e45a
        ;   XREF to: 004fea70 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 0055e45f
    JMP 0x0055a8bb                      ; 0055e462
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xa                         ; 0055e467
        ;   Label: LAB_0055e467
    PUSH ESI                            ; 0055e46a
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e46b
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e470
    LEA EDX,[ESP + 0x3f18]              ; 0055e473
    PUSH EDX                            ; 0055e47a
    LEA EDX,[ESP + 0x3f18]              ; 0055e47b
    PUSH EDX                            ; 0055e482
    PUSH 0x6429cd                       ; 0055e483 | = " (%d )%n"
    MOV ECX,0xffffffff                  ; 0055e488
    PUSH EAX                            ; 0055e48d
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055e48e
    MOV dword ptr [ESP + 0x3f28],ECX    ; 0055e495
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e49c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055e4a1
    MOV ESI,dword ptr [ESP + 0x3f18]    ; 0055e4a4
    CMP ESI,0x3                         ; 0055e4ab
    JL 0x0055e4f9                       ; 0055e4ae
        ;   XREF to: 0055e4f9 (CONDITIONAL_JUMP)  ; LAB_0055e4f9
    MOV EDI,dword ptr [ESP + 0x3e8c]    ; 0055e4b0
    ADD EDI,ESI                         ; 0055e4b7
    MOV EAX,[0x00680a00]                ; 0055e4b9 | g_CNetGamePtr
    MOV dword ptr [ESP + 0x3e8c],EDI    ; 0055e4be
    CMP dword ptr [EAX],0x0             ; 0055e4c5 | g_CNetGameInstance
    JNZ 0x0055e510                      ; 0055e4c8
        ;   XREF to: 0055e510 (CONDITIONAL_JUMP)  ; LAB_0055e510
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e4ca | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055e4d1
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,dword ptr [ESP + 0x3f14]    ; 0055e4d7
    MOV EAX,[0x02db87d0]                ; 0055e4de | g_LocalHeroIndex
    PUSH ESI                            ; 0055e4e3
    MOV EDI,dword ptr [EAX*0x4 + 0x2db87c0] ; 0055e4e4 | g_HeroActors
    PUSH EDI                            ; 0055e4eb
    CALL core_hero.cpp_CHero_FUN_004f3910 ; 0055e4ec
        ;   XREF to: 004f3910 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3910(CHero * this_ptr)
    ADD ESP,0x8                         ; 0055e4f1
    JMP 0x0055a8bb                      ; 0055e4f4
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x6429d6                       ; 0055e4f9 | = "Error parsing removeKeys() command parms"
        ;   Label: LAB_0055e4f9
    PUSH 0x310eca0                      ; 0055e4fe | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e503
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e508
    JMP 0x0055a98c                      ; 0055e50b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x6429ff                       ; 0055e510 | = "Can't use removeKeys command in multi..."
        ;   Label: LAB_0055e510
    PUSH 0x310eca0                      ; 0055e515 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e51a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e51f
    JMP 0x0055a98c                      ; 0055e522
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x6                         ; 0055e527
        ;   Label: LAB_0055e527
    PUSH ESI                            ; 0055e52a
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e52b
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e530
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055e533
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e53a | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055e541
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [EBX + 0x45c]     ; 0055e547
    CMP EDX,0x1                         ; 0055e54d
    JL 0x0055e56c                       ; 0055e550
        ;   XREF to: 0055e56c (CONDITIONAL_JUMP)  ; LAB_0055e56c
    LEA ECX,[EDX + -0x1]                ; 0055e552
    MOV EAX,ECX                         ; 0055e555
    MOV dword ptr [EBX + 0x45c],ECX     ; 0055e557
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x460] ; 0055e55d
    MOV dword ptr [EBX + 0x48],EAX      ; 0055e564
    JMP 0x0055a8bb                      ; 0055e567
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EBX,dword ptr [ESP + 0x3e84]    ; 0055e56c
        ;   Label: LAB_0055e56c
    PUSH EBX                            ; 0055e573
    PUSH 0x642a33                       ; 0055e574 | = "Return without gosub detected on scri..."
    PUSH 0x310eca0                      ; 0055e579 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e57e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055e583
    JMP 0x0055a98c                      ; 0055e586
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xb                         ; 0055e58b
        ;   Label: LAB_0055e58b
    PUSH ESI                            ; 0055e58e
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e58f
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e594
    LEA EDX,[ESP + 0x3f1c]              ; 0055e597
    PUSH EDX                            ; 0055e59e
    PUSH 0x642a70                       ; 0055e59f | = " ( )%n"
    MOV ESI,0xffffffff                  ; 0055e5a4
    PUSH EAX                            ; 0055e5a9
    MOV dword ptr [ESP + 0x3e98],EAX    ; 0055e5aa
    MOV dword ptr [ESP + 0x3f28],ESI    ; 0055e5b1
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e5b8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 0055e5bd
    MOV EDI,dword ptr [ESP + 0x3f1c]    ; 0055e5c0
    CMP EDI,0x2                         ; 0055e5c7
    JL 0x0055e60b                       ; 0055e5ca
        ;   XREF to: 0055e60b (CONDITIONAL_JUMP)  ; LAB_0055e60b
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055e5cc
    ADD EDX,EDI                         ; 0055e5d3
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055e5d5 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055e5db
    TEST ECX,ECX                        ; 0055e5e2
    JNZ 0x0055a8bb                      ; 0055e5e4
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,[0x0067b654]                ; 0055e5ea | g_CGamePtr
    MOV dword ptr [EBX],0x1             ; 0055e5ef
    MOV dword ptr [ESP + 0x3e94],ECX    ; 0055e5f5
    MOV dword ptr [EAX + 0x258],0x2     ; 0055e5fc | DAT_02d81cf4
    JMP 0x0055a8bb                      ; 0055e606
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642a77                       ; 0055e60b | = "Error parsing rollCredits command"
        ;   Label: LAB_0055e60b
    PUSH 0x310eca0                      ; 0055e610 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e615
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e61a
    JMP 0x0055a98c                      ; 0055e61d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x3                         ; 0055e622
        ;   Label: LAB_0055e622
    PUSH ESI                            ; 0055e625
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e626
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e62b
    PUSH 0x1f4                          ; 0055e62e
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055e633
    LEA EAX,[ESP + 0x440]               ; 0055e63a
    PUSH EAX                            ; 0055e641
    LEA EAX,[ESP + 0x3e94]              ; 0055e642
    PUSH EAX                            ; 0055e649
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055e64a
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055e64f
    TEST EAX,EAX                        ; 0055e652
    JZ 0x0055e67c                       ; 0055e654
        ;   XREF to: 0055e67c (CONDITIONAL_JUMP)  ; LAB_0055e67c
    MOV EDI,0x310eca0                   ; 0055e656 | g_ScriptErrorBuffer
        ;   Label: LAB_0055e656
    MOV ESI,EAX                         ; 0055e65b
    PUSH EDI                            ; 0055e65d | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055e65e
        ;   Label: LAB_0055e65e
    MOV byte ptr [EDI],AL               ; 0055e660 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055e662
    JZ 0x0055e676                       ; 0055e664
        ;   XREF to: 0055e676 (CONDITIONAL_JUMP)  ; LAB_0055e676
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e666
    ADD ESI,0x2                         ; 0055e669
    MOV byte ptr [EDI + 0x1],AL         ; 0055e66c | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055e66f
    CMP AL,0x0                          ; 0055e672
    JNZ 0x0055e65e                      ; 0055e674
        ;   XREF to: 0055e65e (CONDITIONAL_JUMP)  ; LAB_0055e65e
    POP EDI                             ; 0055e676
        ;   Label: LAB_0055e676
    JMP 0x0055a98c                      ; 0055e677
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3f20]              ; 0055e67c
        ;   Label: LAB_0055e67c
    PUSH EAX                            ; 0055e683
    LEA EAX,[ESP + 0x2b50]              ; 0055e684
    PUSH EAX                            ; 0055e68b
    LEA EAX,[ESP + 0x1a24]              ; 0055e68c
    PUSH EAX                            ; 0055e693
    PUSH 0x642a9d                       ; 0055e694 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x44c]               ; 0055e699
    MOV EDI,0xffffffff                  ; 0055e6a0
    PUSH EAX                            ; 0055e6a5
    MOV dword ptr [ESP + 0x3f34],EDI    ; 0055e6a6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e6ad
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055e6b2
    CMP dword ptr [ESP + 0x3f20],0x5    ; 0055e6b5
    JGE 0x0055e6d6                      ; 0055e6bd
        ;   XREF to: 0055e6d6 (CONDITIONAL_JUMP)  ; LAB_0055e6d6
    PUSH 0x642aae                       ; 0055e6bf | = "Error parsing speaker and wav arguments"
    PUSH 0x310eca0                      ; 0055e6c4 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e6c9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e6ce
    JMP 0x0055a98c                      ; 0055e6d1
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x1a1c]              ; 0055e6d6
        ;   Label: LAB_0055e6d6
    PUSH EAX                            ; 0055e6dd
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e6de
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e6e3
    LEA EAX,[ESP + 0x2b4c]              ; 0055e6e6
    PUSH EAX                            ; 0055e6ed
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e6ee
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    FLD float ptr [EBX + 0x50]          ; 0055e6f3
    FLDZ                                ; 0055e6f6
    ADD ESP,0x4                         ; 0055e6f8
    FCOMPP                              ; 0055e6fb
    FNSTSW AX                           ; 0055e6fd
    SAHF                                ; 0055e6ff
    JA 0x0055e740                       ; 0055e700
        ;   XREF to: 0055e740 (CONDITIONAL_JUMP)  ; LAB_0055e740
    CMP dword ptr [0x0310ec9c],0x0      ; 0055e702 | g_ScriptEventsEnabled
        ;   Label: LAB_0055e702
    JNZ 0x0055a8bb                      ; 0055e709
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055e70f
    PUSH ESI                            ; 0055e712
    PUSH dword ptr [EBX + 0x50]         ; 0055e713
    PUSH EBX                            ; 0055e716
    CALL core_script.cpp_CScript_processTimer_FUN_005600c0 ; 0055e717
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_005600c0(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0055e71c
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055e71f
    TEST EAX,EAX                        ; 0055e726
    JLE 0x0055a8bb                      ; 0055e728
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDI,dword ptr [EBX + 0x4]       ; 0055e72e
    PUSH EDI                            ; 0055e731
    PUSH EBX                            ; 0055e732
    CALL core_script.cpp_CScript_setSpeaker_FUN_00560140 ; 0055e733
        ;   XREF to: 00560140 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00560140(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0055e738
    JMP 0x0055a8bb                      ; 0055e73b
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x43c]               ; 0055e740
        ;   Label: LAB_0055e740
    ADD EAX,dword ptr [ESP + 0x3f20]    ; 0055e747
    PUSH EAX                            ; 0055e74e
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e74f
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e754
    PUSH EAX                            ; 0055e757
    LEA EAX,[ESP + 0x2b50]              ; 0055e758
    PUSH EAX                            ; 0055e75f
    LEA EAX,[ESP + 0x1a24]              ; 0055e760
    PUSH EAX                            ; 0055e767
    PUSH EBX                            ; 0055e768
    CALL core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 ; 0055e769
        ;   XREF to: 0055ff00 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_0055ff00(CScript * this_ptr, int param_2, char * param_3, char * param_4)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 0055e76e
    FLDZ                                ; 0055e775
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 0055e777
    MOV dword ptr [EBX + 0x50],EAX      ; 0055e77e
    ADD ESP,0x10                        ; 0055e781
    FCOMP float ptr [EBX + 0x50]        ; 0055e784
    FNSTSW AX                           ; 0055e787
    SAHF                                ; 0055e789
    JA 0x0055a98c                       ; 0055e78a
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    JMP 0x0055e702                      ; 0055e790
        ;   XREF to: 0055e702 (UNCONDITIONAL_JUMP)  ; LAB_0055e702
    ADD ESI,0xc                         ; 0055e795
        ;   Label: LAB_0055e795
    PUSH ESI                            ; 0055e798
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e799
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055e79e
    ADD ESP,0x4                         ; 0055e7a3
    MOV dword ptr [ESP + 0x3f24],EDX    ; 0055e7a6
    LEA EDX,[ESP + 0x3f24]              ; 0055e7ad
    PUSH EDX                            ; 0055e7b4
    LEA EDX,[ESP + 0x3910]              ; 0055e7b5
    PUSH EDX                            ; 0055e7bc
    LEA EDX,[ESP + 0x34c8]              ; 0055e7bd
    PUSH EDX                            ; 0055e7c4
    PUSH 0x642ae3                       ; 0055e7c5 | = " (%[^,], %[^)])%n"
    PUSH EAX                            ; 0055e7ca
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055e7cb
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e7d2
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055e7d7
    CMP dword ptr [ESP + 0x3f24],0x5    ; 0055e7da
    JGE 0x0055e7fb                      ; 0055e7e2
        ;   XREF to: 0055e7fb (CONDITIONAL_JUMP)  ; LAB_0055e7fb
    PUSH 0x642af5                       ; 0055e7e4 | = "Error parsing selectWeapon parameters."
    PUSH 0x310eca0                      ; 0055e7e9 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e7ee
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e7f3
    JMP 0x0055a98c                      ; 0055e7f6
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x34c0]              ; 0055e7fb
        ;   Label: LAB_0055e7fb
    PUSH EAX                            ; 0055e802
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e803
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e808
    LEA EAX,[ESP + 0x390c]              ; 0055e80b
    PUSH EAX                            ; 0055e812
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e813
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e818
    MOV EDI,dword ptr [0x02db880c]      ; 0055e81b | g_CHeroClassInfo.name_hash
    PUSH 0x2db87d4                      ; 0055e821 | g_CHeroClassInfo
    MOV EAX,dword ptr [ESP + 0x3f28]    ; 0055e826
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 0055e82d
    PUSH EDI                            ; 0055e834
    ADD ESI,EAX                         ; 0055e835
    LEA EAX,[ESP + 0x34c8]              ; 0055e837
    PUSH EAX                            ; 0055e83e
    MOV dword ptr [ESP + 0x3e98],ESI    ; 0055e83f
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055e846
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055e84b
    TEST EAX,EAX                        ; 0055e84e
    JNZ 0x0055e864                      ; 0055e850
        ;   XREF to: 0055e864 (CONDITIONAL_JUMP)  ; LAB_0055e864
    CMP dword ptr [0x0310f4ac],0x0      ; 0055e852 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055e859
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055e85f
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [0x0310ec9c]      ; 0055e864 | g_ScriptEventsEnabled
        ;   Label: LAB_0055e864
    TEST EDX,EDX                        ; 0055e86a
    JNZ 0x0055a8bb                      ; 0055e86c
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EDI,[EAX + 0x1f738]             ; 0055e872
    PUSH EDI                            ; 0055e878
    MOV dword ptr [ESP + 0x3f2c],EDX    ; 0055e879
    CALL core_gabriela.cpp_CGabriella_FUN_004d7650 ; 0055e880
        ;   XREF to: 004d7650 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_FUN_004d7650(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 0055e885
    MOV dword ptr [ESP + 0x3f2c],EAX    ; 0055e888
    TEST EAX,EAX                        ; 0055e88f
    JZ 0x0055e8f8                       ; 0055e891
        ;   XREF to: 0055e8f8 (CONDITIONAL_JUMP)  ; LAB_0055e8f8
    MOV ESI,EAX                         ; 0055e893
    TEST ESI,ESI                        ; 0055e895
        ;   Label: LAB_0055e895
    JNZ 0x0055e8bb                      ; 0055e897
        ;   XREF to: 0055e8bb (CONDITIONAL_JUMP)  ; LAB_0055e8bb
    MOV EAX,0x642b1c                    ; 0055e899 | = "..\\core\\script.cpp"
    MOV EDX,0xad9                       ; 0055e89e
    PUSH 0x642b2f                       ; 0055e8a3 | = "script selectWeapon() command - hell ..."
    MOV [0x02f0ca48],EAX                ; 0055e8a8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0055e8ad | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055e8b3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0055e8b8
    LEA EAX,[ESP + 0x390c]              ; 0055e8bb
        ;   Label: LAB_0055e8bb
    PUSH EAX                            ; 0055e8c2
    PUSH ESI                            ; 0055e8c3
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0055e8c4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0055e8c9
    TEST EAX,EAX                        ; 0055e8cc
    JNZ 0x0055a8bb                      ; 0055e8ce
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x1                            ; 0055e8d4
    PUSH 0x5                            ; 0055e8d6
    PUSH EAX                            ; 0055e8d8
    PUSH EDI                            ; 0055e8d9
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 0055e8da
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 0055e8df
    PUSH EDI                            ; 0055e8e2
    CALL core_gabriela.cpp_CGabriella_FUN_004d7650 ; 0055e8e3
        ;   XREF to: 004d7650 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_FUN_004d7650(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 0055e8e8
    MOV ECX,dword ptr [ESP + 0x3f2c]    ; 0055e8eb
    MOV ESI,EAX                         ; 0055e8f2
    CMP EAX,ECX                         ; 0055e8f4
    JNZ 0x0055e895                      ; 0055e8f6
        ;   XREF to: 0055e895 (CONDITIONAL_JUMP)  ; LAB_0055e895
    CMP dword ptr [ESP + 0x3f28],0x0    ; 0055e8f8
        ;   Label: LAB_0055e8f8
    JNZ 0x0055a8bb                      ; 0055e900
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x390c]              ; 0055e906
    PUSH EAX                            ; 0055e90d
    LEA EAX,[ESP + 0x34c4]              ; 0055e90e
    PUSH EAX                            ; 0055e915
    PUSH 0x642b5b                       ; 0055e916 | = "%s can't selectWeapon(%s)\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 0055e91b | g_CConsolePtr
    PUSH EDI                            ; 0055e921 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0055e922
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0055e927
    JMP 0x0055a8bb                      ; 0055e92a
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x10                        ; 0055e92f
        ;   Label: LAB_0055e92f
    PUSH ESI                            ; 0055e932
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055e933
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055e938
    LEA EDX,[ESP + 0x3f30]              ; 0055e93b
    PUSH EDX                            ; 0055e942
    LEA EDX,[ESP + 0x1ae8]              ; 0055e943
    PUSH EDX                            ; 0055e94a
    LEA EDX,[ESP + 0x2ce4]              ; 0055e94b
    PUSH EDX                            ; 0055e952
    PUSH 0x642b87                       ; 0055e953 | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055e958
    PUSH EAX                            ; 0055e95d
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055e95e
    MOV dword ptr [ESP + 0x3f44],EDI    ; 0055e965
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055e96c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055e971
    MOV EAX,dword ptr [ESP + 0x3f30]    ; 0055e974
    CMP EAX,0x5                         ; 0055e97b
    JGE 0x0055e997                      ; 0055e97e
        ;   XREF to: 0055e997 (CONDITIONAL_JUMP)  ; LAB_0055e997
    PUSH 0x642b98                       ; 0055e980 | = "Error parsing setActorVariable comman..."
    PUSH 0x310eca0                      ; 0055e985 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055e98a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055e98f
    JMP 0x0055a98c                      ; 0055e992
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055e997
        ;   Label: LAB_0055e997
    ADD EDX,EAX                         ; 0055e99e
    LEA EAX,[ESP + 0x2cdc]              ; 0055e9a0
    PUSH EAX                            ; 0055e9a7
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055e9a8
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e9af
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e9b4
    LEA EAX,[ESP + 0x1ae4]              ; 0055e9b7
    PUSH EAX                            ; 0055e9be
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055e9bf
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055e9c4
    LEA EAX,[ESP + 0x2cdc]              ; 0055e9c7
    PUSH EAX                            ; 0055e9ce
    CALL core_script.cpp_validateActorVariableName_FUN_00559220 ; 0055e9cf
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_00559220(char * variable_name)
    ADD ESP,0x4                         ; 0055e9d4
    TEST EAX,EAX                        ; 0055e9d7
    JZ 0x0055a98c                       ; 0055e9d9
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055e9df | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x00822030]      ; 0055e9e4 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0055e9ea
    LEA EAX,[ESP + 0x1aec]              ; 0055e9eb
    PUSH EAX                            ; 0055e9f2
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055e9f3
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,dword ptr [0x0310ec9c]      ; 0055e9f8 | g_ScriptEventsEnabled
    ADD ESP,0xc                         ; 0055e9fe
    TEST ESI,ESI                        ; 0055ea01
    JZ 0x0055ea1f                       ; 0055ea03
        ;   XREF to: 0055ea1f (CONDITIONAL_JUMP)  ; LAB_0055ea1f
    TEST EAX,EAX                        ; 0055ea05
    JNZ 0x0055a8bb                      ; 0055ea07
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    CMP dword ptr [0x0310f4ac],0x0      ; 0055ea0d | g_ActorLookedUpByVariable
    JNZ 0x0055a8bb                      ; 0055ea14
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    JMP 0x0055a98c                      ; 0055ea1a
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH EAX                            ; 0055ea1f
        ;   Label: LAB_0055ea1f
    LEA EAX,[ESP + 0x2ce0]              ; 0055ea20
    PUSH EAX                            ; 0055ea27
    MOV EDI,dword ptr [0x006793d0]      ; 0055ea28 | g_CEventListPtr
    PUSH EDI                            ; 0055ea2e | g_CEventListInstance
    CALL core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 ; 0055ea2f
        ;   XREF to: 004b09a0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList * this_ptr)
    ADD ESP,0xc                         ; 0055ea34
    JMP 0x0055a8bb                      ; 0055ea37
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xf                         ; 0055ea3c
        ;   Label: LAB_0055ea3c
    PUSH ESI                            ; 0055ea3f
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055ea40
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055ea45
    PUSH 0x64                           ; 0055ea48
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055ea4a
    LEA EAX,[ESP + 0x3780]              ; 0055ea51
    PUSH EAX                            ; 0055ea58
    LEA EAX,[ESP + 0x3e94]              ; 0055ea59
    PUSH EAX                            ; 0055ea60
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055ea61
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055ea66
    TEST EAX,EAX                        ; 0055ea69
    JNZ 0x0055e656                      ; 0055ea6b
        ;   XREF to: 0055e656 (CONDITIONAL_JUMP)  ; LAB_0055e656
    CMP dword ptr [0x0310ec9c],0x0      ; 0055ea71 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055ea78
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x377c]              ; 0055ea7e
    PUSH EAX                            ; 0055ea85
    MOV ECX,dword ptr [0x00681ef8]      ; 0055ea86 | g_CSoundPtr | g_CSoundInstance
    PUSH ECX                            ; 0055ea8c | g_CSoundInstance
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0 ; 0055ea8d
        ;   XREF to: 005b39b0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0055ea92
    JMP 0x0055a8bb                      ; 0055ea95
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xe                         ; 0055ea9a
        ;   Label: LAB_0055ea9a
    PUSH ESI                            ; 0055ea9d
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055ea9e
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055eaa3
    LEA EDX,[ESP + 0x3f38]              ; 0055eaa6
    PUSH EDX                            ; 0055eaad
    LEA EDX,[ESP + 0x3f38]              ; 0055eaae
    PUSH EDX                            ; 0055eab5
    LEA EDX,[ESP + 0x14ac]              ; 0055eab6
    PUSH EDX                            ; 0055eabd
    PUSH 0x642be4                       ; 0055eabe | = "(%[^,], %d)%n"
    MOV ESI,0xffffffff                  ; 0055eac3
    PUSH EAX                            ; 0055eac8
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055eac9
    MOV dword ptr [ESP + 0x3f4c],ESI    ; 0055ead0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055ead7
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055eadc
    MOV EDI,dword ptr [ESP + 0x3f38]    ; 0055eadf
    CMP EDI,0x3                         ; 0055eae6
    JGE 0x0055eb02                      ; 0055eae9
        ;   XREF to: 0055eb02 (CONDITIONAL_JUMP)  ; LAB_0055eb02
    PUSH 0x642bf2                       ; 0055eaeb | = "Error parsing setCameragroup parms"
    PUSH 0x310eca0                      ; 0055eaf0 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055eaf5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055eafa
    JMP 0x0055a98c                      ; 0055eafd
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055eb02
        ;   Label: LAB_0055eb02
    LEA EAX,[ESP + 0x14a4]              ; 0055eb09
    ADD EDX,EDI                         ; 0055eb10
    PUSH EAX                            ; 0055eb12
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055eb13
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055eb1a
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055eb1f
    LEA EAX,[ESP + 0x14a4]              ; 0055eb22
    PUSH EAX                            ; 0055eb29
    MOV ECX,dword ptr [0x006810c8]      ; 0055eb2a | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0055eb30 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 0055eb31
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 0055eb36
    TEST EAX,EAX                        ; 0055eb39
    JL 0x0055eb6a                       ; 0055eb3b
        ;   XREF to: 0055eb6a (CONDITIONAL_JUMP)  ; LAB_0055eb6a
    CMP dword ptr [0x0310ec9c],0x0      ; 0055eb3d | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055eb44
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    IMUL EAX,EAX,0x1a4                  ; 0055eb4a
    MOV EDX,dword ptr [0x006810c8]      ; 0055eb50 | g_CDemonSetPtr
    ADD EDX,EAX                         ; 0055eb56
    MOV EAX,dword ptr [ESP + 0x3f34]    ; 0055eb58
    MOV dword ptr [EDX + 0x150],EAX     ; 0055eb5f | DAT_031143c8
    JMP 0x0055a8bb                      ; 0055eb65
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x14a4]              ; 0055eb6a
        ;   Label: LAB_0055eb6a
    PUSH EAX                            ; 0055eb71
    PUSH 0x642c15                       ; 0055eb72 | = "Camera \"%s\" does not exist."
    PUSH 0x310eca0                      ; 0055eb77 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055eb7c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055eb81
    JMP 0x0055a98c                      ; 0055eb84
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x12                        ; 0055eb89
        ;   Label: LAB_0055eb89
    PUSH ESI                            ; 0055eb8c
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055eb8d
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055eb92
    LEA EDX,[ESP + 0x3f40]              ; 0055eb95
    PUSH EDX                            ; 0055eb9c
    LEA EDX,[ESP + 0x3f40]              ; 0055eb9d
    PUSH EDX                            ; 0055eba4
    LEA EDX,[ESP + 0xda4]               ; 0055eba5
    PUSH EDX                            ; 0055ebac
    PUSH 0x642c44                       ; 0055ebad | = "(%[^,], %f)%n"
    MOV EDI,0xffffffff                  ; 0055ebb2
    PUSH EAX                            ; 0055ebb7
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055ebb8
    MOV dword ptr [ESP + 0x3f54],EDI    ; 0055ebbf
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055ebc6
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055ebcb
    MOV EAX,dword ptr [ESP + 0x3f40]    ; 0055ebce
    CMP EAX,0x3                         ; 0055ebd5
    JGE 0x0055ebf1                      ; 0055ebd8
        ;   XREF to: 0055ebf1 (CONDITIONAL_JUMP)  ; LAB_0055ebf1
    PUSH 0x642c52                       ; 0055ebda | = "Error parsing setCharacterHealth parms"
    PUSH 0x310eca0                      ; 0055ebdf | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ebe4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055ebe9
    JMP 0x0055a98c                      ; 0055ebec
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055ebf1
        ;   Label: LAB_0055ebf1
    ADD EDX,EAX                         ; 0055ebf8
    LEA EAX,[ESP + 0xd9c]               ; 0055ebfa
    PUSH EAX                            ; 0055ec01
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055ec02
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055ec09
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055ec0e
    PUSH 0x823c14                       ; 0055ec11 | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x00823c4c]      ; 0055ec16 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0055ec1c
    LEA EAX,[ESP + 0xda4]               ; 0055ec1d
    PUSH EAX                            ; 0055ec24
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055ec25
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055ec2a
    TEST EAX,EAX                        ; 0055ec2d
    JNZ 0x0055ec43                      ; 0055ec2f
        ;   XREF to: 0055ec43 (CONDITIONAL_JUMP)  ; LAB_0055ec43
    CMP dword ptr [0x0310f4ac],0x0      ; 0055ec31 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055ec38
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055ec3e
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055ec43 | g_ScriptEventsEnabled
        ;   Label: LAB_0055ec43
    JNZ 0x0055a8bb                      ; 0055ec4a
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    FLD float ptr [EAX + 0x2440]        ; 0055ec50
    FMUL float ptr [ESP + 0x3f3c]       ; 0055ec56
    FSTP float ptr [EAX + 0x243c]       ; 0055ec5d
    JMP 0x0055a8bb                      ; 0055ec63
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xd                         ; 0055ec68
        ;   Label: LAB_0055ec68
    PUSH ESI                            ; 0055ec6b
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055ec6c
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055ec71
    PUSH 0x64                           ; 0055ec74
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055ec76
    LEA EAX,[ESP + 0x35f0]              ; 0055ec7d
    PUSH EAX                            ; 0055ec84
    LEA EAX,[ESP + 0x3e94]              ; 0055ec85
    PUSH EAX                            ; 0055ec8c
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055ec8d
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055ec92
    TEST EAX,EAX                        ; 0055ec95
    JZ 0x0055ecbf                       ; 0055ec97
        ;   XREF to: 0055ecbf (CONDITIONAL_JUMP)  ; LAB_0055ecbf
    MOV EDI,0x310eca0                   ; 0055ec99 | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055ec9e
    PUSH EDI                            ; 0055eca0 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055eca1
        ;   Label: LAB_0055eca1
    MOV byte ptr [EDI],AL               ; 0055eca3 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055eca5
    JZ 0x0055ecb9                       ; 0055eca7
        ;   XREF to: 0055ecb9 (CONDITIONAL_JUMP)  ; LAB_0055ecb9
    MOV AL,byte ptr [ESI + 0x1]         ; 0055eca9
    ADD ESI,0x2                         ; 0055ecac
    MOV byte ptr [EDI + 0x1],AL         ; 0055ecaf | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055ecb2
    CMP AL,0x0                          ; 0055ecb5
    JNZ 0x0055eca1                      ; 0055ecb7
        ;   XREF to: 0055eca1 (CONDITIONAL_JUMP)  ; LAB_0055eca1
    POP EDI                             ; 0055ecb9
        ;   Label: LAB_0055ecb9
    JMP 0x0055a98c                      ; 0055ecba
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055ecbf | g_CDemonActorClassInfo
        ;   Label: LAB_0055ecbf
    MOV EAX,[0x00822030]                ; 0055ecc4 | g_CDemonActorClassInfo.name_hash
    PUSH EAX                            ; 0055ecc9
    LEA EAX,[ESP + 0x35f4]              ; 0055ecca
    PUSH EAX                            ; 0055ecd1
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055ecd2
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055ecd7
    TEST EAX,EAX                        ; 0055ecda
    JNZ 0x0055ecf0                      ; 0055ecdc
        ;   XREF to: 0055ecf0 (CONDITIONAL_JUMP)  ; LAB_0055ecf0
    CMP dword ptr [0x0310f4ac],0x0      ; 0055ecde | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055ece5
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055eceb
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP EAX,dword ptr [EBX + 0xc]       ; 0055ecf0
        ;   Label: LAB_0055ecf0
    JZ 0x0055a8bb                       ; 0055ecf3
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [EBX + 0x10],0x1      ; 0055ecf9
    MOV dword ptr [EBX + 0xc],EAX       ; 0055ed00
    JMP 0x0055a8bb                      ; 0055ed03
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xb                         ; 0055ed08
        ;   Label: LAB_0055ed08
    PUSH ESI                            ; 0055ed0b
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055ed0c
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055ed11
    LEA EDX,[ESP + 0x3f44]              ; 0055ed14
    PUSH EDX                            ; 0055ed1b
    LEA EDX,[ESP + 0x3cf8]              ; 0055ed1c
    PUSH EDX                            ; 0055ed23
    LEA EDX,[ESP + 0x3978]              ; 0055ed24
    PUSH EDX                            ; 0055ed2b
    PUSH 0x642c93                       ; 0055ed2c | = " (%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0055ed31
    PUSH EAX                            ; 0055ed36
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055ed37
    MOV dword ptr [ESP + 0x3f58],ESI    ; 0055ed3e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055ed45
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055ed4a
    CMP dword ptr [ESP + 0x3f44],0x5    ; 0055ed4d
    JGE 0x0055ed6e                      ; 0055ed55
        ;   XREF to: 0055ed6e (CONDITIONAL_JUMP)  ; LAB_0055ed6e
    PUSH 0x642ca5                       ; 0055ed57 | = "Error parsing setHeroTask parameters."
    PUSH 0x310eca0                      ; 0055ed5c | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ed61
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055ed66
    JMP 0x0055a98c                      ; 0055ed69
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3970]              ; 0055ed6e
        ;   Label: LAB_0055ed6e
    PUSH EAX                            ; 0055ed75
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055ed76
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055ed7b
    LEA EAX,[ESP + 0x3cf4]              ; 0055ed7e
    PUSH EAX                            ; 0055ed85
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055ed86
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055ed8b
    MOV ECX,dword ptr [0x02db880c]      ; 0055ed8e | g_CHeroClassInfo.name_hash
    PUSH 0x2db87d4                      ; 0055ed94 | g_CHeroClassInfo
    MOV EAX,dword ptr [ESP + 0x3f48]    ; 0055ed99
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0055eda0
    PUSH ECX                            ; 0055eda7
    ADD EDX,EAX                         ; 0055eda8
    LEA EAX,[ESP + 0x3978]              ; 0055edaa
    PUSH EAX                            ; 0055edb1
    MOV dword ptr [ESP + 0x3e98],EDX    ; 0055edb2
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055edb9
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055edbe
    MOV ESI,EAX                         ; 0055edc1
    TEST EAX,EAX                        ; 0055edc3
    JNZ 0x0055edd9                      ; 0055edc5
        ;   XREF to: 0055edd9 (CONDITIONAL_JUMP)  ; LAB_0055edd9
    CMP dword ptr [0x0310f4ac],0x0      ; 0055edc7 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055edce
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055edd4
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x642ccb                       ; 0055edd9 | = "stand"
        ;   Label: LAB_0055edd9
    LEA EAX,[ESP + 0x3cf8]              ; 0055edde
    PUSH EAX                            ; 0055ede5
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ede6
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055edeb
    TEST EAX,EAX                        ; 0055edee
    JNZ 0x0055ee0e                      ; 0055edf0
        ;   XREF to: 0055ee0e (CONDITIONAL_JUMP)  ; LAB_0055ee0e
    CMP dword ptr [0x0310ec9c],0x0      ; 0055edf2 | g_ScriptEventsEnabled
        ;   Label: LAB_0055edf2
    JNZ 0x0055a8bb                      ; 0055edf9
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055edff
    PUSH ESI                            ; 0055ee00
    CALL core_hero.cpp_CHero_FUN_004f3930 ; 0055ee01
        ;   XREF to: 004f3930 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3930(CHero * this_ptr)
    ADD ESP,0x8                         ; 0055ee06
    JMP 0x0055a8bb                      ; 0055ee09
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642cd1                       ; 0055ee0e | = "follow"
        ;   Label: LAB_0055ee0e
    LEA EAX,[ESP + 0x3cf8]              ; 0055ee13
    PUSH EAX                            ; 0055ee1a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ee1b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ee20
    TEST EAX,EAX                        ; 0055ee23
    JNZ 0x0055ee2e                      ; 0055ee25
        ;   XREF to: 0055ee2e (CONDITIONAL_JUMP)  ; LAB_0055ee2e
    MOV EAX,0x1                         ; 0055ee27
    JMP 0x0055edf2                      ; 0055ee2c
        ;   XREF to: 0055edf2 (UNCONDITIONAL_JUMP)  ; LAB_0055edf2
    PUSH 0x642cd8                       ; 0055ee2e | = "kill"
        ;   Label: LAB_0055ee2e
    LEA EAX,[ESP + 0x3cf8]              ; 0055ee33
    PUSH EAX                            ; 0055ee3a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ee3b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ee40
    TEST EAX,EAX                        ; 0055ee43
    JNZ 0x0055ee4e                      ; 0055ee45
        ;   XREF to: 0055ee4e (CONDITIONAL_JUMP)  ; LAB_0055ee4e
    MOV EAX,0x2                         ; 0055ee47
    JMP 0x0055edf2                      ; 0055ee4c
        ;   XREF to: 0055edf2 (UNCONDITIONAL_JUMP)  ; LAB_0055edf2
    PUSH 0x642cdd                       ; 0055ee4e | = "guard"
        ;   Label: LAB_0055ee4e
    LEA EAX,[ESP + 0x3cf8]              ; 0055ee53
    PUSH EAX                            ; 0055ee5a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ee5b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ee60
    TEST EAX,EAX                        ; 0055ee63
    JNZ 0x0055ee6e                      ; 0055ee65
        ;   XREF to: 0055ee6e (CONDITIONAL_JUMP)  ; LAB_0055ee6e
    MOV EAX,0x3                         ; 0055ee67
    JMP 0x0055edf2                      ; 0055ee6c
        ;   XREF to: 0055edf2 (UNCONDITIONAL_JUMP)  ; LAB_0055edf2
    PUSH 0x642ce3                       ; 0055ee6e | = "suspend"
        ;   Label: LAB_0055ee6e
    LEA EAX,[ESP + 0x3cf8]              ; 0055ee73
    PUSH EAX                            ; 0055ee7a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055ee7b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055ee80
    TEST EAX,EAX                        ; 0055ee83
    JNZ 0x0055ee91                      ; 0055ee85
        ;   XREF to: 0055ee91 (CONDITIONAL_JUMP)  ; LAB_0055ee91
    MOV EAX,0x4                         ; 0055ee87
    JMP 0x0055edf2                      ; 0055ee8c
        ;   XREF to: 0055edf2 (UNCONDITIONAL_JUMP)  ; LAB_0055edf2
    LEA EAX,[ESP + 0x3cf4]              ; 0055ee91
        ;   Label: LAB_0055ee91
    PUSH EAX                            ; 0055ee98
    PUSH 0x642ceb                       ; 0055ee99 | = "Invalid Task: %s"
    PUSH 0x310eca0                      ; 0055ee9e | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055eea3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055eea8
    JMP 0x0055a98c                      ; 0055eeab
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x9                         ; 0055eeb0
        ;   Label: LAB_0055eeb0
    PUSH ESI                            ; 0055eeb3
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055eeb4
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055eeb9
    ADD ESP,0x4                         ; 0055eebe
    MOV dword ptr [ESP + 0x3f50],EDX    ; 0055eec1
    LEA EDX,[ESP + 0x3f50]              ; 0055eec8
    PUSH EDX                            ; 0055eecf
    LEA EDX,[ESP + 0x3f50]              ; 0055eed0
    PUSH EDX                            ; 0055eed7
    LEA EDX,[ESP + 0x3194]              ; 0055eed8
    PUSH EDX                            ; 0055eedf
    PUSH 0x642d06                       ; 0055eee0 | = "(%[^,], %d )%n"
    PUSH EAX                            ; 0055eee5
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055eee6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055eeed
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055eef2
    MOV ECX,dword ptr [ESP + 0x3f50]    ; 0055eef5
    CMP ECX,0x5                         ; 0055eefc
    JGE 0x0055ef18                      ; 0055eeff
        ;   XREF to: 0055ef18 (CONDITIONAL_JUMP)  ; LAB_0055ef18
    PUSH 0x642d15                       ; 0055ef01 | = "Error parsing setIniInt command parms"
    PUSH 0x310eca0                      ; 0055ef06 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055ef0b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055ef10
    JMP 0x0055a98c                      ; 0055ef13
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055ef18
        ;   Label: LAB_0055ef18
    LEA EAX,[ESP + 0x318c]              ; 0055ef1f
    ADD ESI,ECX                         ; 0055ef26
    PUSH EAX                            ; 0055ef28
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055ef29
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055ef30
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    MOV EDI,dword ptr [0x0310ec9c]      ; 0055ef35 | g_ScriptEventsEnabled
    ADD ESP,0x4                         ; 0055ef3b
    TEST EDI,EDI                        ; 0055ef3e
    JNZ 0x0055a8bb                      ; 0055ef40
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642d3b                       ; 0055ef46 | = "Game"
    PUSH 0x642d40                       ; 0055ef4b | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x44]                ; 0055ef50
    PUSH EAX                            ; 0055ef54
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 0055ef55
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
    ADD ESP,0xc                         ; 0055ef5a
    MOV EAX,dword ptr [ESP + 0x3f4c]    ; 0055ef5d
    PUSH EAX                            ; 0055ef64
    LEA EAX,[ESP + 0x3190]              ; 0055ef65
    PUSH EAX                            ; 0055ef6c
    LEA EAX,[ESP + 0x44]                ; 0055ef6d
    PUSH EAX                            ; 0055ef71
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 0055ef72
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 0055ef77
    JMP 0x0055a8bb                      ; 0055ef7a
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x12                        ; 0055ef7f
        ;   Label: LAB_0055ef7f
    PUSH ESI                            ; 0055ef82
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055ef83
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055ef88
    ADD ESP,0x4                         ; 0055ef8d
    MOV dword ptr [ESP + 0x3f54],EDX    ; 0055ef90
    LEA EDX,[ESP + 0x3f54]              ; 0055ef97
    PUSH EDX                            ; 0055ef9e
    PUSH EDX                            ; 0055ef9f
    PUSH 0x642d67                       ; 0055efa0 | = " (%n %n"
    PUSH EAX                            ; 0055efa5
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055efa6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055efad
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055efb2
    MOV ECX,dword ptr [ESP + 0x3f54]    ; 0055efb5
    CMP ECX,0x1                         ; 0055efbc
    JL 0x0055f00b                       ; 0055efbf
        ;   XREF to: 0055f00b (CONDITIONAL_JUMP)  ; LAB_0055f00b
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055efc1
    MOV EDI,0xbf800000                  ; 0055efc8
    ADD ESI,ECX                         ; 0055efcd
    MOV dword ptr [ESP + 0x3f58],EDI    ; 0055efcf
    MOV dword ptr [ESP + 0x3e8c],ESI    ; 0055efd6
    CMP byte ptr [ESI],0x29             ; 0055efdd
    JNZ 0x0055f022                      ; 0055efe0
        ;   XREF to: 0055f022 (CONDITIONAL_JUMP)  ; LAB_0055f022
    LEA EDI,[ESI + 0x1]                 ; 0055efe2
    MOV dword ptr [ESP + 0x3e8c],EDI    ; 0055efe5
    CMP dword ptr [0x0310ec9c],0x0      ; 0055efec | g_ScriptEventsEnabled
        ;   Label: LAB_0055efec
    JNZ 0x0055a8bb                      ; 0055eff3
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [ESP + 0x3f58]    ; 0055eff9
    MOV dword ptr [EBX + 0x454],EAX     ; 0055f000
    JMP 0x0055a8bb                      ; 0055f006
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642d6f                       ; 0055f00b | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_0055f00b
    PUSH 0x310eca0                      ; 0055f010 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f015
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f01a
    JMP 0x0055a98c                      ; 0055f01d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV dword ptr [ESP + 0x3f54],0xffffffff ; 0055f022
        ;   Label: LAB_0055f022
    LEA EAX,[ESP + 0x3f54]              ; 0055f02d
    PUSH EAX                            ; 0055f034
    LEA EAX,[ESP + 0x3f5c]              ; 0055f035
    PUSH EAX                            ; 0055f03c
    PUSH 0x642d9c                       ; 0055f03d | = "%f )%n"
    PUSH ESI                            ; 0055f042
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f043
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f048
    MOV ECX,dword ptr [ESP + 0x3f54]    ; 0055f04b
    CMP ECX,0x1                         ; 0055f052
    JL 0x0055f060                       ; 0055f055
        ;   XREF to: 0055f060 (CONDITIONAL_JUMP)  ; LAB_0055f060
    ADD dword ptr [ESP + 0x3e8c],ECX    ; 0055f057
    JMP 0x0055efec                      ; 0055f05e
        ;   XREF to: 0055efec (UNCONDITIONAL_JUMP)  ; LAB_0055efec
    PUSH 0x642da3                       ; 0055f060 | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_0055f060
    PUSH 0x310eca0                      ; 0055f065 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f06a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f06f
    JMP 0x0055a98c                      ; 0055f072
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xc                         ; 0055f077
        ;   Label: LAB_0055f077
    PUSH ESI                            ; 0055f07a
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f07b
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f080
    PUSH 0x64                           ; 0055f083
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055f085
    LEA EAX,[ESP + 0x3848]              ; 0055f08c
    PUSH EAX                            ; 0055f093
    LEA EAX,[ESP + 0x3e94]              ; 0055f094
    PUSH EAX                            ; 0055f09b
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055f09c
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055f0a1
    TEST EAX,EAX                        ; 0055f0a4
    JZ 0x0055f0ce                       ; 0055f0a6
        ;   XREF to: 0055f0ce (CONDITIONAL_JUMP)  ; LAB_0055f0ce
    MOV EDI,0x310eca0                   ; 0055f0a8 | g_ScriptErrorBuffer
        ;   Label: LAB_0055f0a8
    MOV ESI,EAX                         ; 0055f0ad
    PUSH EDI                            ; 0055f0af | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055f0b0
        ;   Label: LAB_0055f0b0
    MOV byte ptr [EDI],AL               ; 0055f0b2 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055f0b4
    JZ 0x0055f0c8                       ; 0055f0b6
        ;   XREF to: 0055f0c8 (CONDITIONAL_JUMP)  ; LAB_0055f0c8
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f0b8
    ADD ESI,0x2                         ; 0055f0bb
    MOV byte ptr [EDI + 0x1],AL         ; 0055f0be | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055f0c1
    CMP AL,0x0                          ; 0055f0c4
    JNZ 0x0055f0b0                      ; 0055f0c6
        ;   XREF to: 0055f0b0 (CONDITIONAL_JUMP)  ; LAB_0055f0b0
    POP EDI                             ; 0055f0c8
        ;   Label: LAB_0055f0c8
    JMP 0x0055a98c                      ; 0055f0c9
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3844]              ; 0055f0ce
        ;   Label: LAB_0055f0ce
    PUSH EAX                            ; 0055f0d5
    PUSH EBX                            ; 0055f0d6
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00560160 ; 0055f0d7
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00560160(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0055f0dc
    TEST EAX,EAX                        ; 0055f0df
    JL 0x0055f0fb                       ; 0055f0e1
        ;   XREF to: 0055f0fb (CONDITIONAL_JUMP)  ; LAB_0055f0fb
    CMP dword ptr [0x0310ec9c],0x0      ; 0055f0e3 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055f0ea
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [EBX + 0x458],EAX     ; 0055f0f0
    JMP 0x0055a8bb                      ; 0055f0f6
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3844]              ; 0055f0fb
        ;   Label: LAB_0055f0fb
    PUSH EAX                            ; 0055f102
    PUSH 0x642ddd                       ; 0055f103 | = "Undefined label '%s'"
    PUSH 0x310eca0                      ; 0055f108 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f10d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055f112
    JMP 0x0055a98c                      ; 0055f115
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xa                         ; 0055f11a
        ;   Label: LAB_0055f11a
    PUSH ESI                            ; 0055f11d
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f11e
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f123
    PUSH 0x64                           ; 0055f126
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055f128
    LEA EAX,[ESP + 0x3bcc]              ; 0055f12f
    PUSH EAX                            ; 0055f136
    LEA EAX,[ESP + 0x3e94]              ; 0055f137
    PUSH EAX                            ; 0055f13e
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055f13f
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055f144
    TEST EAX,EAX                        ; 0055f147
    JNZ 0x0055f0a8                      ; 0055f149
        ;   XREF to: 0055f0a8 (CONDITIONAL_JUMP)  ; LAB_0055f0a8
    CMP byte ptr [ESP + 0x3bc8],0x0     ; 0055f14f
    JNZ 0x0055f18a                      ; 0055f157
        ;   XREF to: 0055f18a (CONDITIONAL_JUMP)  ; LAB_0055f18a
    MOV dword ptr [EBX + 0x4],EAX       ; 0055f159
    MOV EAX,dword ptr [EBX + 0x4]       ; 0055f15c
        ;   Label: LAB_0055f15c
    MOV dword ptr [EBX + 0x8],EAX       ; 0055f15f
    CMP dword ptr [EBX + 0x14],0x0      ; 0055f162
    JNZ 0x0055a8bb                      ; 0055f166
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [EBX + 0x4]       ; 0055f16c
    CMP EDX,dword ptr [EBX + 0xc]       ; 0055f16f
    JZ 0x0055a8bb                       ; 0055f172
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EAX,dword ptr [EBX + 0x4]       ; 0055f178
    MOV dword ptr [EBX + 0x10],0x1      ; 0055f17b
    MOV dword ptr [EBX + 0xc],EAX       ; 0055f182
    JMP 0x0055a8bb                      ; 0055f185
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x823c14                       ; 0055f18a | g_CCharacterClassInfo
        ;   Label: LAB_0055f18a
    MOV ECX,dword ptr [0x00823c4c]      ; 0055f18f | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0055f195
    LEA EAX,[ESP + 0x3bd0]              ; 0055f196
    PUSH EAX                            ; 0055f19d
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055f19e
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055f1a3
    MOV dword ptr [EBX + 0x4],EAX       ; 0055f1a6
    TEST EAX,EAX                        ; 0055f1a9
    JNZ 0x0055f15c                      ; 0055f1ab
        ;   XREF to: 0055f15c (CONDITIONAL_JUMP)  ; LAB_0055f15c
    CMP dword ptr [0x0310f4ac],0x0      ; 0055f1ad | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055f1b4
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055f1ba
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xd                         ; 0055f1bf
        ;   Label: LAB_0055f1bf
    PUSH ESI                            ; 0055f1c2
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f1c3
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f1c8
    PUSH 0x64                           ; 0055f1cb
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055f1cd
    LEA EAX,[ESP + 0x3c94]              ; 0055f1d4
    PUSH EAX                            ; 0055f1db
    LEA EAX,[ESP + 0x3e94]              ; 0055f1dc
    PUSH EAX                            ; 0055f1e3
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055f1e4
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055f1e9
    TEST EAX,EAX                        ; 0055f1ec
    JZ 0x0055f216                       ; 0055f1ee
        ;   XREF to: 0055f216 (CONDITIONAL_JUMP)  ; LAB_0055f216
    MOV EDI,0x310eca0                   ; 0055f1f0 | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055f1f5
    PUSH EDI                            ; 0055f1f7 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055f1f8
        ;   Label: LAB_0055f1f8
    MOV byte ptr [EDI],AL               ; 0055f1fa | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055f1fc
    JZ 0x0055f210                       ; 0055f1fe
        ;   XREF to: 0055f210 (CONDITIONAL_JUMP)  ; LAB_0055f210
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f200
    ADD ESI,0x2                         ; 0055f203
    MOV byte ptr [EDI + 0x1],AL         ; 0055f206 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055f209
    CMP AL,0x0                          ; 0055f20c
    JNZ 0x0055f1f8                      ; 0055f20e
        ;   XREF to: 0055f1f8 (CONDITIONAL_JUMP)  ; LAB_0055f1f8
    POP EDI                             ; 0055f210
        ;   Label: LAB_0055f210
    JMP 0x0055a98c                      ; 0055f211
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x38]                ; 0055f216
        ;   Label: LAB_0055f216
    PUSH EAX                            ; 0055f21a
    PUSH 0x642e0b                       ; 0055f21b | = "%f"
    LEA EAX,[ESP + 0x3c98]              ; 0055f220
    MOV ECX,0xbf800000                  ; 0055f227
    PUSH EAX                            ; 0055f22c
    MOV dword ptr [ESP + 0x44],ECX      ; 0055f22d
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f231
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 0055f236
    FLDZ                                ; 0055f239
    FLD float ptr [ESP + 0x38]          ; 0055f23b
    FSTP double ptr [ESP + 0x20]        ; 0055f23f
    FCOMP double ptr [ESP + 0x20]       ; 0055f243
    FNSTSW AX                           ; 0055f247
    SAHF                                ; 0055f249
    JNC 0x0055f27d                      ; 0055f24a
        ;   XREF to: 0055f27d (CONDITIONAL_JUMP)  ; LAB_0055f27d
    FLD double ptr [ESP + 0x20]         ; 0055f24c
    FCOMP double ptr [0x00643190]       ; 0055f250 | DOUBLE_00643190
    FNSTSW AX                           ; 0055f256
    SAHF                                ; 0055f258
    JA 0x0055f27d                       ; 0055f259
        ;   XREF to: 0055f27d (CONDITIONAL_JUMP)  ; LAB_0055f27d
    CMP dword ptr [0x0310ec9c],0x0      ; 0055f25b | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055f262
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EDX,dword ptr [0x0067b654]      ; 0055f268 | g_CGamePtr
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055f26e
    MOV dword ptr [EDX + 0x1ec],EAX     ; 0055f272 | DAT_02d81c88
    JMP 0x0055a8bb                      ; 0055f278
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3c90]              ; 0055f27d
        ;   Label: LAB_0055f27d
    PUSH EAX                            ; 0055f284
    PUSH 0x642e0e                       ; 0055f285 | = "Invalid time factor %s"
    PUSH 0x310eca0                      ; 0055f28a | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f28f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055f294
    JMP 0x0055a98c                      ; 0055f297
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x9                         ; 0055f29c
        ;   Label: LAB_0055f29c
    PUSH ESI                            ; 0055f29f
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f2a0
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f2a5
    LEA EDX,[ESP + 0x3f64]              ; 0055f2a8
    PUSH EDX                            ; 0055f2af
    LEA EDX,[ESP + 0x22b8]              ; 0055f2b0
    PUSH EDX                            ; 0055f2b7
    PUSH 0x642e2f                       ; 0055f2b8 | = "(%[^,)]%n"
    MOV EDI,0xffffffff                  ; 0055f2bd
    PUSH EAX                            ; 0055f2c2
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055f2c3
    MOV dword ptr [ESP + 0x3f74],EDI    ; 0055f2ca
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f2d1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f2d6
    MOV EAX,dword ptr [ESP + 0x3f64]    ; 0055f2d9
    CMP EAX,0x2                         ; 0055f2e0
    JGE 0x0055f2fc                      ; 0055f2e3
        ;   XREF to: 0055f2fc (CONDITIONAL_JUMP)  ; LAB_0055f2fc
    PUSH 0x642e39                       ; 0055f2e5 | = "Error parsing setVictim command parms"
    PUSH 0x310eca0                      ; 0055f2ea | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f2ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f2f4
    JMP 0x0055a98c                      ; 0055f2f7
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055f2fc
        ;   Label: LAB_0055f2fc
    ADD EDX,EAX                         ; 0055f303
    LEA EAX,[ESP + 0x22b4]              ; 0055f305
    PUSH EAX                            ; 0055f30c
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055f30d
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f314
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f319
    PUSH 0x2cf2bb8                      ; 0055f31c | g_CEnemyClassInfo
    MOV ECX,dword ptr [0x02cf2bf0]      ; 0055f321 | g_CEnemyClassInfo.name_hash
    PUSH ECX                            ; 0055f327
    LEA EAX,[ESP + 0x22bc]              ; 0055f328
    PUSH EAX                            ; 0055f32f
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055f330
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055f335
    MOV ESI,EAX                         ; 0055f338
    TEST EAX,EAX                        ; 0055f33a
    JNZ 0x0055f350                      ; 0055f33c
        ;   XREF to: 0055f350 (CONDITIONAL_JUMP)  ; LAB_0055f350
    CMP dword ptr [0x0310f4ac],0x0      ; 0055f33e | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055f345
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055f34b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055f350
        ;   Label: LAB_0055f350
    MOV CL,byte ptr [EDX]               ; 0055f357
    XOR EAX,EAX                         ; 0055f359
    CMP CL,0x2c                         ; 0055f35b
    JZ 0x0055f395                       ; 0055f35e
        ;   XREF to: 0055f395 (CONDITIONAL_JUMP)  ; LAB_0055f395
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055f360
        ;   Label: LAB_0055f360
    CMP byte ptr [EDX],0x29             ; 0055f367
    JNZ 0x0055f456                      ; 0055f36a
        ;   XREF to: 0055f456 (CONDITIONAL_JUMP)  ; LAB_0055f456
    INC EDX                             ; 0055f370
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055f371 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055f377
    TEST ECX,ECX                        ; 0055f37e
    JNZ 0x0055a8bb                      ; 0055f380
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055f386
    PUSH ESI                            ; 0055f387
    CALL core_enemy.cpp_CEnemy_setVictim_FUN_004a9ef0 ; 0055f388
        ;   XREF to: 004a9ef0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setVictim_FUN_004a9ef0(CEnemy * this_ptr, CDemonActor * victim)
    ADD ESP,0x8                         ; 0055f38d
    JMP 0x0055a8bb                      ; 0055f390
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3f64]              ; 0055f395
        ;   Label: LAB_0055f395
    PUSH EAX                            ; 0055f39c
    LEA EAX,[ESP + 0x2da8]              ; 0055f39d
    PUSH EAX                            ; 0055f3a4
    PUSH 0x642e5f                       ; 0055f3a5 | = ", %[^)]%n"
    PUSH EDX                            ; 0055f3aa
    MOV dword ptr [ESP + 0x3f74],EDI    ; 0055f3ab
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f3b2
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f3b7
    MOV EDX,dword ptr [ESP + 0x3f64]    ; 0055f3ba
    CMP EDX,0x3                         ; 0055f3c1
    JGE 0x0055f3dd                      ; 0055f3c4
        ;   XREF to: 0055f3dd (CONDITIONAL_JUMP)  ; LAB_0055f3dd
    PUSH 0x642e69                       ; 0055f3c6 | = "Error parsing setVictim command parms"
    PUSH 0x310eca0                      ; 0055f3cb | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f3d0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f3d5
    JMP 0x0055a98c                      ; 0055f3d8
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ECX,dword ptr [ESP + 0x3e8c]    ; 0055f3dd
        ;   Label: LAB_0055f3dd
    LEA EAX,[ESP + 0x2da4]              ; 0055f3e4
    ADD ECX,EDX                         ; 0055f3eb
    PUSH EAX                            ; 0055f3ed
    MOV dword ptr [ESP + 0x3e90],ECX    ; 0055f3ee
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f3f5
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f3fa
    PUSH 0x642e8f                       ; 0055f3fd | = "disable"
    LEA EAX,[ESP + 0x2da8]              ; 0055f402
    PUSH EAX                            ; 0055f409
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055f40a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055f40f
    TEST EAX,EAX                        ; 0055f412
    JNZ 0x0055f420                      ; 0055f414
        ;   XREF to: 0055f420 (CONDITIONAL_JUMP)  ; LAB_0055f420
    MOV EAX,[0x00662638]                ; 0055f416 | PTR_00662638
    JMP 0x0055f360                      ; 0055f41b
        ;   XREF to: 0055f360 (UNCONDITIONAL_JUMP)  ; LAB_0055f360
    PUSH 0x823c14                       ; 0055f420 | g_CCharacterClassInfo
        ;   Label: LAB_0055f420
    MOV EDI,dword ptr [0x00823c4c]      ; 0055f425 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0055f42b
    LEA EAX,[ESP + 0x2dac]              ; 0055f42c
    PUSH EAX                            ; 0055f433
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055f434
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055f439
    TEST EAX,EAX                        ; 0055f43c
    JNZ 0x0055f360                      ; 0055f43e
        ;   XREF to: 0055f360 (CONDITIONAL_JUMP)  ; LAB_0055f360
    CMP dword ptr [0x0310f4ac],0x0      ; 0055f444 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055f44b
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055f451
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x642e97                       ; 0055f456 | = "Missing closing ')' in setVictim command"
        ;   Label: LAB_0055f456
    PUSH 0x310eca0                      ; 0055f45b | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f460
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f465
    JMP 0x0055a98c                      ; 0055f468
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xa                         ; 0055f46d
        ;   Label: LAB_0055f46d
    PUSH ESI                            ; 0055f470
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f471
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f476
    LEA EDX,[ESP + 0x3f68]              ; 0055f479
    PUSH EDX                            ; 0055f480
    LEA EDX,[ESP + 0x2380]              ; 0055f481
    PUSH EDX                            ; 0055f488
    LEA EDX,[ESP + 0x131c]              ; 0055f489
    PUSH EDX                            ; 0055f490
    PUSH 0x642ecb                       ; 0055f491 | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0055f496
    PUSH EAX                            ; 0055f49b
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055f49c
    MOV dword ptr [ESP + 0x3f7c],EDI    ; 0055f4a3
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f4aa
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055f4af
    MOV EAX,dword ptr [ESP + 0x3f68]    ; 0055f4b2
    CMP EAX,0x5                         ; 0055f4b9
    JGE 0x0055f4d5                      ; 0055f4bc
        ;   XREF to: 0055f4d5 (CONDITIONAL_JUMP)  ; LAB_0055f4d5
    PUSH 0x642edc                       ; 0055f4be | = "Error snaping turnToFace command parms"
    PUSH 0x310eca0                      ; 0055f4c3 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f4c8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f4cd
    JMP 0x0055a98c                      ; 0055f4d0
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055f4d5
        ;   Label: LAB_0055f4d5
    ADD EDX,EAX                         ; 0055f4dc
    LEA EAX,[ESP + 0x1314]              ; 0055f4de
    PUSH EAX                            ; 0055f4e5
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0055f4e6
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f4ed
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f4f2
    LEA EAX,[ESP + 0x237c]              ; 0055f4f5
    PUSH EAX                            ; 0055f4fc
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f4fd
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f502
    PUSH 0x821ff8                       ; 0055f505 | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x00822030]      ; 0055f50a | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0055f510
    LEA EAX,[ESP + 0x131c]              ; 0055f511
    PUSH EAX                            ; 0055f518
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055f519
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055f51e
    ADD ESP,0xc                         ; 0055f520
    TEST EAX,EAX                        ; 0055f523
    JNZ 0x0055f539                      ; 0055f525
        ;   XREF to: 0055f539 (CONDITIONAL_JUMP)  ; LAB_0055f539
    CMP dword ptr [0x0310f4ac],0x0      ; 0055f527 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055f52e
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055f534
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055f539 | g_CDemonActorClassInfo
        ;   Label: LAB_0055f539
    MOV EDI,dword ptr [0x00822030]      ; 0055f53e | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0055f544
    LEA EAX,[ESP + 0x2384]              ; 0055f545
    PUSH EAX                            ; 0055f54c
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055f54d
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055f552
    TEST EAX,EAX                        ; 0055f555
    JNZ 0x0055f56b                      ; 0055f557
        ;   XREF to: 0055f56b (CONDITIONAL_JUMP)  ; LAB_0055f56b
    CMP dword ptr [0x0310f4ac],0x0      ; 0055f559 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055f560
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055f566
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055f56b | g_ScriptEventsEnabled
        ;   Label: LAB_0055f56b
    JNZ 0x0055a8bb                      ; 0055f572
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EDX,[ESI + 0x20]                ; 0055f578
    PUSH EDX                            ; 0055f57b
    LEA EDX,[ESP + 0x3e64]              ; 0055f57c
    PUSH EDX                            ; 0055f583
    ADD EAX,0x20                        ; 0055f584
    PUSH EAX                            ; 0055f587
    CALL core_bodypart.cpp_subtractVector_FUN_0041b510 ; 0055f588
        ;   XREF to: 0041b510 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_subtractVector_FUN_0041b510(CVector3f * a, CVector3f * dst, CVector3f * b)
    ADD ESP,0xc                         ; 0055f58d
    LEA EAX,[ESP + 0x3e60]              ; 0055f590
    PUSH EAX                            ; 0055f597
    LEA EAX,[ESP + 0x3e4c]              ; 0055f598
    PUSH EAX                            ; 0055f59f
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0055f5a0
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0055f5a5
    FLD float ptr [EAX + 0x4]           ; 0055f5a8
    PUSH ESI                            ; 0055f5ab
    FSTP float ptr [ESI + 0x34]         ; 0055f5ac
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0055f5af
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0055f5b4
    JMP 0x0055a8bb                      ; 0055f5b7
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x8                         ; 0055f5bc
        ;   Label: LAB_0055f5bc
    PUSH ESI                            ; 0055f5bf
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f5c0
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f5c5
    PUSH 0x1f4                          ; 0055f5c8
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055f5cd
    LEA EAX,[ESP + 0x634]               ; 0055f5d4
    PUSH EAX                            ; 0055f5db
    LEA EAX,[ESP + 0x3e94]              ; 0055f5dc
    PUSH EAX                            ; 0055f5e3
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055f5e4
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055f5e9
    TEST EAX,EAX                        ; 0055f5ec
    JZ 0x0055f616                       ; 0055f5ee
        ;   XREF to: 0055f616 (CONDITIONAL_JUMP)  ; LAB_0055f616
    MOV EDI,0x310eca0                   ; 0055f5f0 | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055f5f5
    PUSH EDI                            ; 0055f5f7 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055f5f8
        ;   Label: LAB_0055f5f8
    MOV byte ptr [EDI],AL               ; 0055f5fa | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055f5fc
    JZ 0x0055f610                       ; 0055f5fe
        ;   XREF to: 0055f610 (CONDITIONAL_JUMP)  ; LAB_0055f610
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f600
    ADD ESI,0x2                         ; 0055f603
    MOV byte ptr [EDI + 0x1],AL         ; 0055f606 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055f609
    CMP AL,0x0                          ; 0055f60c
    JNZ 0x0055f5f8                      ; 0055f60e
        ;   XREF to: 0055f5f8 (CONDITIONAL_JUMP)  ; LAB_0055f5f8
    POP EDI                             ; 0055f610
        ;   Label: LAB_0055f610
    JMP 0x0055a98c                      ; 0055f611
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3f6c]              ; 0055f616
        ;   Label: LAB_0055f616
    PUSH EAX                            ; 0055f61d
    LEA EAX,[ESP + 0x1e08]              ; 0055f61e
    PUSH EAX                            ; 0055f625
    LEA EAX,[ESP + 0x29c4]              ; 0055f626
    PUSH EAX                            ; 0055f62d
    PUSH 0x642f0c                       ; 0055f62e | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x640]               ; 0055f633
    MOV EDI,0xffffffff                  ; 0055f63a
    PUSH EAX                            ; 0055f63f
    MOV dword ptr [ESP + 0x3f80],EDI    ; 0055f640
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f647
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055f64c
    CMP dword ptr [ESP + 0x3f6c],0x5    ; 0055f64f
    JGE 0x0055f670                      ; 0055f657
        ;   XREF to: 0055f670 (CONDITIONAL_JUMP)  ; LAB_0055f670
    PUSH 0x642f1d                       ; 0055f659 | = "Error parsing speaker and wav arguments"
    PUSH 0x310eca0                      ; 0055f65e | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f663
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f668
    JMP 0x0055a98c                      ; 0055f66b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x29bc]              ; 0055f670
        ;   Label: LAB_0055f670
    PUSH EAX                            ; 0055f677
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f678
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f67d
    LEA EAX,[ESP + 0x1e04]              ; 0055f680
    PUSH EAX                            ; 0055f687
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f688
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f68d
    LEA EAX,[ESP + 0x630]               ; 0055f690
    ADD EAX,dword ptr [ESP + 0x3f6c]    ; 0055f697
    PUSH EAX                            ; 0055f69e
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f69f
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f6a4
    PUSH EAX                            ; 0055f6a7
    LEA EAX,[ESP + 0x1e08]              ; 0055f6a8
    PUSH EAX                            ; 0055f6af
    LEA EAX,[ESP + 0x29c4]              ; 0055f6b0
    PUSH EAX                            ; 0055f6b7
    PUSH EBX                            ; 0055f6b8
    CALL core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 ; 0055f6b9
        ;   XREF to: 0055ff00 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_0055ff00(CScript * this_ptr, int param_2, char * param_3, char * param_4)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 0055f6be
    FLDZ                                ; 0055f6c5
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 0055f6c7
    MOV dword ptr [EBX + 0x50],EAX      ; 0055f6ce
    ADD ESP,0x10                        ; 0055f6d1
    FCOMP float ptr [EBX + 0x50]        ; 0055f6d4
    FNSTSW AX                           ; 0055f6d7
    SAHF                                ; 0055f6d9
    JA 0x0055a98c                       ; 0055f6da
        ;   XREF to: 0055a98c (CONDITIONAL_JUMP)  ; LAB_0055a98c
    JMP 0x0055a8bb                      ; 0055f6e0
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0xc                         ; 0055f6e5
        ;   Label: LAB_0055f6e5
    PUSH ESI                            ; 0055f6e8
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f6e9
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f6ee
    PUSH 0xc8                           ; 0055f6f1
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055f6f6
    LEA EAX,[ESP + 0x3258]              ; 0055f6fd
    PUSH EAX                            ; 0055f704
    LEA EAX,[ESP + 0x3e94]              ; 0055f705
    PUSH EAX                            ; 0055f70c
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055f70d
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055f712
    TEST EAX,EAX                        ; 0055f715
    JZ 0x0055f73f                       ; 0055f717
        ;   XREF to: 0055f73f (CONDITIONAL_JUMP)  ; LAB_0055f73f
    MOV EDI,0x310eca0                   ; 0055f719 | g_ScriptErrorBuffer
    MOV ESI,EAX                         ; 0055f71e
    PUSH EDI                            ; 0055f720 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055f721
        ;   Label: LAB_0055f721
    MOV byte ptr [EDI],AL               ; 0055f723 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055f725
    JZ 0x0055f739                       ; 0055f727
        ;   XREF to: 0055f739 (CONDITIONAL_JUMP)  ; LAB_0055f739
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f729
    ADD ESI,0x2                         ; 0055f72c
    MOV byte ptr [EDI + 0x1],AL         ; 0055f72f | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055f732
    CMP AL,0x0                          ; 0055f735
    JNZ 0x0055f721                      ; 0055f737
        ;   XREF to: 0055f721 (CONDITIONAL_JUMP)  ; LAB_0055f721
    POP EDI                             ; 0055f739
        ;   Label: LAB_0055f739
    JMP 0x0055a98c                      ; 0055f73a
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV DL,0x2c                         ; 0055f73f
        ;   Label: LAB_0055f73f
    LEA ESI,[ESP + 0x3254]              ; 0055f741
    MOV AL,byte ptr [ESI]               ; 0055f748
        ;   Label: LAB_0055f748
    CMP AL,DL                           ; 0055f74a
    JZ 0x0055f760                       ; 0055f74c
        ;   XREF to: 0055f760 (CONDITIONAL_JUMP)  ; LAB_0055f760
    CMP AL,0x0                          ; 0055f74e
    JZ 0x0055f75e                       ; 0055f750
        ;   XREF to: 0055f75e (CONDITIONAL_JUMP)  ; LAB_0055f75e
    INC ESI                             ; 0055f752
    MOV AL,byte ptr [ESI]               ; 0055f753
    CMP AL,DL                           ; 0055f755
    JZ 0x0055f760                       ; 0055f757
        ;   XREF to: 0055f760 (CONDITIONAL_JUMP)  ; LAB_0055f760
    INC ESI                             ; 0055f759
    CMP AL,0x0                          ; 0055f75a
    JNZ 0x0055f748                      ; 0055f75c
        ;   XREF to: 0055f748 (CONDITIONAL_JUMP)  ; LAB_0055f748
    SUB ESI,ESI                         ; 0055f75e
        ;   Label: LAB_0055f75e
    TEST ESI,ESI                        ; 0055f760
        ;   Label: LAB_0055f760
    SETNZ AL                            ; 0055f762
    MOV ECX,0xffffffff                  ; 0055f765
    MOV ESI,0x642f52                    ; 0055f76a | = ","
    AND EAX,0xff                        ; 0055f76f
    LEA EDI,[ESP + 0x3254]              ; 0055f774
    MOV dword ptr [ESP + 0x3f90],EAX    ; 0055f77b
    MOV dword ptr [ESP + 0x3f70],ECX    ; 0055f782
    PUSH EDI                            ; 0055f789
    SUB ECX,ECX                         ; 0055f78a
    DEC ECX                             ; 0055f78c
    MOV AL,0x0                          ; 0055f78d
    SCASB.REPNE ES:EDI                  ; 0055f78f
    DEC EDI                             ; 0055f791
    MOV AL,byte ptr [ESI]               ; 0055f792 | = "," | s_n_00642f54
        ;   Label: LAB_0055f792
    MOV byte ptr [EDI],AL               ; 0055f794
    CMP AL,0x0                          ; 0055f796
    JZ 0x0055f7aa                       ; 0055f798
        ;   XREF to: 0055f7aa (CONDITIONAL_JUMP)  ; LAB_0055f7aa
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f79a | DAT_00642f53 | s_[^,],%n_00642f55
    ADD ESI,0x2                         ; 0055f79d
    MOV byte ptr [EDI + 0x1],AL         ; 0055f7a0
    ADD EDI,0x2                         ; 0055f7a3
    CMP AL,0x0                          ; 0055f7a6
    JNZ 0x0055f792                      ; 0055f7a8
        ;   XREF to: 0055f792 (CONDITIONAL_JUMP)  ; LAB_0055f792
    POP EDI                             ; 0055f7aa
        ;   Label: LAB_0055f7aa
    LEA EAX,[ESP + 0x3f70]              ; 0055f7ab
    PUSH EAX                            ; 0055f7b2
    LEA EAX,[ESP + 0x37e4]              ; 0055f7b3
    PUSH EAX                            ; 0055f7ba
    PUSH 0x642f54                       ; 0055f7bb | = "%[^,],%n"
    LEA EAX,[ESP + 0x3260]              ; 0055f7c0
    PUSH EAX                            ; 0055f7c7
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f7c8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f7cd
    CMP dword ptr [ESP + 0x3f70],0x1    ; 0055f7d0
    JGE 0x0055f803                      ; 0055f7d8
        ;   XREF to: 0055f803 (CONDITIONAL_JUMP)  ; LAB_0055f803
    MOV ESI,0x642f5d                    ; 0055f7da | = "Error parsing out camera name"
    MOV EDI,0x310eca0                   ; 0055f7df | g_ScriptErrorBuffer
    PUSH EDI                            ; 0055f7e4 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055f7e5 | = "Error parsing out camera name" | s_ror_parsing_out_camera_name_00642f5f
        ;   Label: LAB_0055f7e5
    MOV byte ptr [EDI],AL               ; 0055f7e7 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055f7e9
    JZ 0x0055f7fd                       ; 0055f7eb
        ;   XREF to: 0055f7fd (CONDITIONAL_JUMP)  ; LAB_0055f7fd
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f7ed | s_rror_parsing_out_camera_name_00642f5e | s_or_parsing_out_camera_name_00642f60
    ADD ESI,0x2                         ; 0055f7f0
    MOV byte ptr [EDI + 0x1],AL         ; 0055f7f3 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055f7f6
    CMP AL,0x0                          ; 0055f7f9
    JNZ 0x0055f7e5                      ; 0055f7fb
        ;   XREF to: 0055f7e5 (CONDITIONAL_JUMP)  ; LAB_0055f7e5
    POP EDI                             ; 0055f7fd
        ;   Label: LAB_0055f7fd
    JMP 0x0055a98c                      ; 0055f7fe
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x37e0]              ; 0055f803
        ;   Label: LAB_0055f803
    PUSH EAX                            ; 0055f80a
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055f80b
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055f810
    LEA EAX,[ESP + 0x37e0]              ; 0055f813
    PUSH EAX                            ; 0055f81a
    MOV EDI,dword ptr [0x006810c8]      ; 0055f81b | g_CDemonSetPtr
    PUSH EDI                            ; 0055f821 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 0055f822
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 0055f827
    MOV ESI,EAX                         ; 0055f82a
    TEST EAX,EAX                        ; 0055f82c
    JL 0x0055f869                       ; 0055f82e
        ;   XREF to: 0055f869 (CONDITIONAL_JUMP)  ; LAB_0055f869
    MOV EAX,0x501502f9                  ; 0055f830
    MOV EDX,dword ptr [ESP + 0x3f90]    ; 0055f835
    MOV dword ptr [ESP + 0x2c],EAX      ; 0055f83c
    TEST EDX,EDX                        ; 0055f840
    JNZ 0x0055f888                      ; 0055f842
        ;   XREF to: 0055f888 (CONDITIONAL_JUMP)  ; LAB_0055f888
    CMP dword ptr [0x0310ec9c],0x0      ; 0055f844 | g_ScriptEventsEnabled
        ;   Label: LAB_0055f844
    JNZ 0x0055a8bb                      ; 0055f84b
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH dword ptr [ESP + 0x2c]         ; 0055f851
    PUSH ESI                            ; 0055f855
    MOV EAX,[0x006810c8]                ; 0055f856 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 0055f85b | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00 ; 0055f85c
        ;   XREF to: 00575b00 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 0055f861
    JMP 0x0055a8bb                      ; 0055f864
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x37e0]              ; 0055f869
        ;   Label: LAB_0055f869
    PUSH EAX                            ; 0055f870
    PUSH 0x642f7b                       ; 0055f871 | = "Camera \"%s\" doesn't exist."
    PUSH 0x310eca0                      ; 0055f876 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f87b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055f880
    JMP 0x0055a98c                      ; 0055f883
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x2c]                ; 0055f888
        ;   Label: LAB_0055f888
    PUSH EAX                            ; 0055f88c
    MOV ECX,dword ptr [ESP + 0x3f74]    ; 0055f88d
    LEA EAX,[ESP + 0x3258]              ; 0055f894
    PUSH 0x642f96                       ; 0055f89b | = "%f"
    ADD EAX,ECX                         ; 0055f8a0
    PUSH EAX                            ; 0055f8a2
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f8a3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 0055f8a8
    FLDZ                                ; 0055f8ab
    FLD float ptr [ESP + 0x2c]          ; 0055f8ad
    FSTP double ptr [ESP + 0x18]        ; 0055f8b1
    FCOMP double ptr [ESP + 0x18]       ; 0055f8b5
    FNSTSW AX                           ; 0055f8b9
    SAHF                                ; 0055f8bb
    JA 0x0055f8d1                       ; 0055f8bc
        ;   XREF to: 0055f8d1 (CONDITIONAL_JUMP)  ; LAB_0055f8d1
    FLD double ptr [ESP + 0x18]         ; 0055f8be
    FCOMP double ptr [0x00643198]       ; 0055f8c2 | DOUBLE_00643198
    FNSTSW AX                           ; 0055f8c8
    SAHF                                ; 0055f8ca
    JBE 0x0055f844                      ; 0055f8cb
        ;   XREF to: 0055f844 (CONDITIONAL_JUMP)  ; LAB_0055f844
    PUSH 0x642f99                       ; 0055f8d1 | = "Invalid hold time value"
        ;   Label: LAB_0055f8d1
    PUSH 0x310eca0                      ; 0055f8d6 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f8db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f8e0
    JMP 0x0055a98c                      ; 0055f8e3
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xc                         ; 0055f8e8
        ;   Label: LAB_0055f8e8
    PUSH ESI                            ; 0055f8eb
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f8ec
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f8f1
    PUSH 0x12c                          ; 0055f8f4
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0055f8f9
    LEA EAX,[ESP + 0xa80]               ; 0055f900
    PUSH EAX                            ; 0055f907
    LEA EAX,[ESP + 0x3e94]              ; 0055f908
    PUSH EAX                            ; 0055f90f
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 0055f910
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0055f915
    TEST EAX,EAX                        ; 0055f918
    JZ 0x0055f942                       ; 0055f91a
        ;   XREF to: 0055f942 (CONDITIONAL_JUMP)  ; LAB_0055f942
    MOV EDI,0x310eca0                   ; 0055f91c | g_ScriptErrorBuffer
        ;   Label: LAB_0055f91c
    MOV ESI,EAX                         ; 0055f921
    PUSH EDI                            ; 0055f923 | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 0055f924
        ;   Label: LAB_0055f924
    MOV byte ptr [EDI],AL               ; 0055f926 | g_ScriptErrorBuffer | DAT_0310eca2
    CMP AL,0x0                          ; 0055f928
    JZ 0x0055f93c                       ; 0055f92a
        ;   XREF to: 0055f93c (CONDITIONAL_JUMP)  ; LAB_0055f93c
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f92c
    ADD ESI,0x2                         ; 0055f92f
    MOV byte ptr [EDI + 0x1],AL         ; 0055f932 | DAT_0310eca1 | DAT_0310eca3
    ADD EDI,0x2                         ; 0055f935
    CMP AL,0x0                          ; 0055f938
    JNZ 0x0055f924                      ; 0055f93a
        ;   XREF to: 0055f924 (CONDITIONAL_JUMP)  ; LAB_0055f924
    POP EDI                             ; 0055f93c
        ;   Label: LAB_0055f93c
    JMP 0x0055a98c                      ; 0055f93d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3f74]              ; 0055f942
        ;   Label: LAB_0055f942
    PUSH EAX                            ; 0055f949
    LEA EAX,[ESP + 0x3f7c]              ; 0055f94a
    PUSH EAX                            ; 0055f951
    PUSH 0x642fbe                       ; 0055f952 | = "%f,%n"
    LEA EAX,[ESP + 0xa88]               ; 0055f957
    MOV EDX,0xffffffff                  ; 0055f95e
    PUSH EAX                            ; 0055f963
    MOV dword ptr [ESP + 0x3f84],EDX    ; 0055f964
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055f96b
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055f970
    MOV ECX,dword ptr [ESP + 0x3f74]    ; 0055f973
    CMP ECX,0x2                         ; 0055f97a
    JL 0x0055f9e9                       ; 0055f97d
        ;   XREF to: 0055f9e9 (CONDITIONAL_JUMP)  ; LAB_0055f9e9
    CMP dword ptr [0x0310ec9c],0x0      ; 0055f97f | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055f986
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0xa7c]               ; 0055f98c
    ADD EAX,ECX                         ; 0055f993
    PUSH EAX                            ; 0055f995
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055f996
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055f99b
    LEA EDI,[EBX + 0x54]                ; 0055f99e
    MOV ESI,EAX                         ; 0055f9a1
    PUSH EDI                            ; 0055f9a3
    MOV AL,byte ptr [ESI]               ; 0055f9a4
        ;   Label: LAB_0055f9a4
    MOV byte ptr [EDI],AL               ; 0055f9a6
    CMP AL,0x0                          ; 0055f9a8
    JZ 0x0055f9bc                       ; 0055f9aa
        ;   XREF to: 0055f9bc (CONDITIONAL_JUMP)  ; LAB_0055f9bc
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f9ac
    ADD ESI,0x2                         ; 0055f9af
    MOV byte ptr [EDI + 0x1],AL         ; 0055f9b2
    ADD EDI,0x2                         ; 0055f9b5
    CMP AL,0x0                          ; 0055f9b8
    JNZ 0x0055f9a4                      ; 0055f9ba
        ;   XREF to: 0055f9a4 (CONDITIONAL_JUMP)  ; LAB_0055f9a4
    POP EDI                             ; 0055f9bc
        ;   Label: LAB_0055f9bc
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055f9bd
    PUSH EAX                            ; 0055f9c0
    PUSH dword ptr [ESP + 0x3f7c]       ; 0055f9c1
    PUSH EBX                            ; 0055f9c8
    CALL core_script.cpp_CScript_processTimer_FUN_005600c0 ; 0055f9c9
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_005600c0(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0055f9ce
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055f9d1
    TEST EAX,EAX                        ; 0055f9d8
    JLE 0x0055a8bb                      ; 0055f9da
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV byte ptr [EBX + 0x54],0x0       ; 0055f9e0
    JMP 0x0055a8bb                      ; 0055f9e4
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x642fc4                       ; 0055f9e9 | = "Error parsing time value"
        ;   Label: LAB_0055f9e9
    PUSH 0x310eca0                      ; 0055f9ee | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055f9f3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055f9f8
    JMP 0x0055a98c                      ; 0055f9fb
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0xa                         ; 0055fa00
        ;   Label: LAB_0055fa00
    PUSH ESI                            ; 0055fa03
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055fa04
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    MOV EDX,0xffffffff                  ; 0055fa09
    ADD ESP,0x4                         ; 0055fa0e
    MOV dword ptr [ESP + 0x3f7c],EDX    ; 0055fa11
    LEA EDX,[ESP + 0x3f7c]              ; 0055fa18
    PUSH EDX                            ; 0055fa1f
    LEA EDX,[ESP + 0x28f8]              ; 0055fa20
    PUSH EDX                            ; 0055fa27
    LEA EDX,[ESP + 0x163c]              ; 0055fa28
    PUSH EDX                            ; 0055fa2f
    PUSH 0x642fe8                       ; 0055fa30 | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 0055fa35
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055fa36
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055fa3d
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055fa42
    MOV ECX,dword ptr [ESP + 0x3f7c]    ; 0055fa45
    CMP ECX,0x5                         ; 0055fa4c
    JGE 0x0055fa68                      ; 0055fa4f
        ;   XREF to: 0055fa68 (CONDITIONAL_JUMP)  ; LAB_0055fa68
    PUSH 0x642ff9                       ; 0055fa51 | = "Error parsing turnToFace command parms"
    PUSH 0x310eca0                      ; 0055fa56 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fa5b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055fa60
    JMP 0x0055a98c                      ; 0055fa63
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 0055fa68
        ;   Label: LAB_0055fa68
    LEA EAX,[ESP + 0x1634]              ; 0055fa6f
    ADD ESI,ECX                         ; 0055fa76
    PUSH EAX                            ; 0055fa78
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0055fa79
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055fa80
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055fa85
    LEA EAX,[ESP + 0x28f4]              ; 0055fa88
    PUSH EAX                            ; 0055fa8f
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055fa90
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055fa95
    PUSH 0x823c14                       ; 0055fa98 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x00823c4c]      ; 0055fa9d | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0055faa3
    LEA EAX,[ESP + 0x163c]              ; 0055faa4
    PUSH EAX                            ; 0055faab
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055faac
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055fab1
    ADD ESP,0xc                         ; 0055fab3
    TEST EAX,EAX                        ; 0055fab6
    JNZ 0x0055facc                      ; 0055fab8
        ;   XREF to: 0055facc (CONDITIONAL_JUMP)  ; LAB_0055facc
    CMP dword ptr [0x0310f4ac],0x0      ; 0055faba | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055fac1
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055fac7
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055facc | g_CDemonActorClassInfo
        ;   Label: LAB_0055facc
    MOV EAX,[0x00822030]                ; 0055fad1 | g_CDemonActorClassInfo.name_hash
    PUSH EAX                            ; 0055fad6
    LEA EAX,[ESP + 0x28fc]              ; 0055fad7
    PUSH EAX                            ; 0055fade
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055fadf
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055fae4
    TEST EAX,EAX                        ; 0055fae7
    JNZ 0x0055fafd                      ; 0055fae9
        ;   XREF to: 0055fafd (CONDITIONAL_JUMP)  ; LAB_0055fafd
    CMP dword ptr [0x0310f4ac],0x0      ; 0055faeb | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055faf2
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055faf8
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055fafd | g_ScriptEventsEnabled
        ;   Label: LAB_0055fafd
    JNZ 0x0055a8bb                      ; 0055fb04
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH EAX                            ; 0055fb0a
    MOV EDX,dword ptr [ESI + 0x154]     ; 0055fb0b
    PUSH ESI                            ; 0055fb11
    CALL dword ptr [EDX + 0x148]        ; 0055fb12
    ADD ESP,0x8                         ; 0055fb18
    JMP 0x0055a8bb                      ; 0055fb1b
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x4                         ; 0055fb20
        ;   Label: LAB_0055fb20
    PUSH ESI                            ; 0055fb23
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055fb24
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055fb29
    LEA EDX,[ESP + 0x3f80]              ; 0055fb2c
    PUSH EDX                            ; 0055fb33
    LEA EDX,[ESP + 0x3f88]              ; 0055fb34
    PUSH EDX                            ; 0055fb3b
    PUSH 0x643025                       ; 0055fb3c | = "(%f)%n"
    MOV EDI,0xffffffff                  ; 0055fb41
    PUSH EAX                            ; 0055fb46
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0055fb47
    MOV dword ptr [ESP + 0x3f90],EDI    ; 0055fb4e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055fb55
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055fb5a
    MOV EAX,dword ptr [ESP + 0x3f80]    ; 0055fb5d
    CMP EAX,0x1                         ; 0055fb64
    JL 0x0055fba7                       ; 0055fb67
        ;   XREF to: 0055fba7 (CONDITIONAL_JUMP)  ; LAB_0055fba7
    MOV EDX,dword ptr [ESP + 0x3e8c]    ; 0055fb69
    ADD EDX,EAX                         ; 0055fb70
    MOV ECX,dword ptr [0x0310ec9c]      ; 0055fb72 | g_ScriptEventsEnabled
    MOV dword ptr [ESP + 0x3e8c],EDX    ; 0055fb78
    TEST ECX,ECX                        ; 0055fb7f
    JNZ 0x0055a8bb                      ; 0055fb81
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055fb87
    PUSH ESI                            ; 0055fb8a
    PUSH dword ptr [ESP + 0x3f88]       ; 0055fb8b
    PUSH EBX                            ; 0055fb92
    CALL core_script.cpp_CScript_processTimer_FUN_005600c0 ; 0055fb93
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_005600c0(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0055fb98
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055fb9b
    JMP 0x0055a8bb                      ; 0055fba2
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH 0x64302c                       ; 0055fba7 | = "Error parsing time value on wait stat..."
        ;   Label: LAB_0055fba7
    PUSH 0x310eca0                      ; 0055fbac | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fbb1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055fbb6
    JMP 0x0055a98c                      ; 0055fbb9
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    ADD ESI,0x7                         ; 0055fbbe
        ;   Label: LAB_0055fbbe
    PUSH ESI                            ; 0055fbc1
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055fbc2
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055fbc7
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 0055fbca
    LEA EAX,[ESP + 0x3c2c]              ; 0055fbd1
    PUSH EAX                            ; 0055fbd8
    LEA EAX,[ESP + 0x3e90]              ; 0055fbd9
    PUSH EAX                            ; 0055fbe0
    CALL core_script.cpp_parseConditionExpr_FUN_005594a0 ; 0055fbe1
        ;   XREF to: 005594a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_005594a0(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0055fbe6
    TEST EAX,EAX                        ; 0055fbe9
    JNZ 0x0055f91c                      ; 0055fbeb
        ;   XREF to: 0055f91c (CONDITIONAL_JUMP)  ; LAB_0055f91c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055fbf1 | g_ScriptEventsEnabled
    JNZ 0x0055a8bb                      ; 0055fbf8
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    LEA EAX,[ESP + 0x3c2c]              ; 0055fbfe
    PUSH EAX                            ; 0055fc05
    MOV EAX,[0x006793d0]                ; 0055fc06 | g_CEventListPtr
    PUSH EAX                            ; 0055fc0b | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0055fc0c
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055fc11
    TEST EAX,EAX                        ; 0055fc14
    JNZ 0x0055a8bb                      ; 0055fc16
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0055fc1c
    JMP 0x0055a8bb                      ; 0055fc23
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    ADD ESI,0x6                         ; 0055fc28
        ;   Label: LAB_0055fc28
    PUSH ESI                            ; 0055fc2b
    CALL core_script.cpp_skipWhitespace_FUN_005593d0 ; 0055fc2c
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005593d0(char * str)
    ADD ESP,0x4                         ; 0055fc31
    LEA EDX,[ESP + 0x3e88]              ; 0055fc34
    PUSH EDX                            ; 0055fc3b
    LEA EDX,[ESP + 0x2830]              ; 0055fc3c
    PUSH EDX                            ; 0055fc43
    LEA EDX,[ESP + 0x13e4]              ; 0055fc44
    PUSH EDX                            ; 0055fc4b
    PUSH 0x643066                       ; 0055fc4c | = "(%[^,], %[^,)] %n"
    MOV ECX,0xffffffff                  ; 0055fc51
    PUSH EAX                            ; 0055fc56
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0055fc57
    MOV dword ptr [ESP + 0x3e9c],ECX    ; 0055fc5e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055fc65
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0055fc6a
    MOV ESI,dword ptr [ESP + 0x3e88]    ; 0055fc6d
    CMP ESI,0x5                         ; 0055fc74
    JGE 0x0055fc90                      ; 0055fc77
        ;   XREF to: 0055fc90 (CONDITIONAL_JUMP)  ; LAB_0055fc90
    PUSH 0x643078                       ; 0055fc79 | = "Error parsing walkTo command parms"
    PUSH 0x310eca0                      ; 0055fc7e | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fc83
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055fc88
    JMP 0x0055a98c                      ; 0055fc8b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    MOV EDI,dword ptr [ESP + 0x3e8c]    ; 0055fc90
        ;   Label: LAB_0055fc90
    LEA EAX,[ESP + 0x13dc]              ; 0055fc97
    ADD EDI,ESI                         ; 0055fc9e
    PUSH EAX                            ; 0055fca0
    MOV dword ptr [ESP + 0x3e90],EDI    ; 0055fca1
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055fca8
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055fcad
    LEA EAX,[ESP + 0x282c]              ; 0055fcb0
    PUSH EAX                            ; 0055fcb7
    CALL core_script.cpp_trimString_FUN_00559360 ; 0055fcb8
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055fcbd
    XOR EAX,EAX                         ; 0055fcc0
    MOV dword ptr [ESP + 0x3f88],EAX    ; 0055fcc2
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055fcc9
    CMP byte ptr [EAX],0x2c             ; 0055fcd0
    JNZ 0x0055fd19                      ; 0055fcd3
        ;   XREF to: 0055fd19 (CONDITIONAL_JUMP)  ; LAB_0055fd19
    LEA EAX,[ESP + 0x3e88]              ; 0055fcd5
    PUSH EAX                            ; 0055fcdc
    LEA EAX,[ESP + 0x3f8c]              ; 0055fcdd
    PUSH EAX                            ; 0055fce4
    PUSH 0x64309b                       ; 0055fce5 | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x3e98]    ; 0055fcea
    MOV EDX,0xffffffff                  ; 0055fcf1
    PUSH ECX                            ; 0055fcf6
    MOV dword ptr [ESP + 0x3e98],EDX    ; 0055fcf7
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055fcfe
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055fd03
    MOV ESI,dword ptr [ESP + 0x3e88]    ; 0055fd06
    CMP ESI,0x1                         ; 0055fd0d
    JL 0x0055fd57                       ; 0055fd10
        ;   XREF to: 0055fd57 (CONDITIONAL_JUMP)  ; LAB_0055fd57
    ADD dword ptr [ESP + 0x3e8c],ESI    ; 0055fd12
    MOV dword ptr [ESP + 0x3f8c],0x501502f9 ; 0055fd19
        ;   Label: LAB_0055fd19
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055fd24
    CMP byte ptr [EAX],0x2c             ; 0055fd2b
    JZ 0x0055fd6e                       ; 0055fd2e
        ;   XREF to: 0055fd6e (CONDITIONAL_JUMP)  ; LAB_0055fd6e
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 0055fd30
        ;   Label: LAB_0055fd30
    CMP byte ptr [EAX],0x29             ; 0055fd37
    JZ 0x0055fdce                       ; 0055fd3a
        ;   XREF to: 0055fdce (CONDITIONAL_JUMP)  ; LAB_0055fdce
    PUSH 0x6430ef                       ; 0055fd40 | = "Missing closing parenthesis on walkTo..."
    PUSH 0x310eca0                      ; 0055fd45 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fd4a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055fd4f
    JMP 0x0055a98c                      ; 0055fd52
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x6430a2                       ; 0055fd57 | = "Error parsing walkTo command parms"
        ;   Label: LAB_0055fd57
    PUSH 0x310eca0                      ; 0055fd5c | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fd61
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055fd66
    JMP 0x0055a98c                      ; 0055fd69
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    LEA EAX,[ESP + 0x3e88]              ; 0055fd6e
        ;   Label: LAB_0055fd6e
    PUSH EAX                            ; 0055fd75
    LEA EAX,[ESP + 0x3f90]              ; 0055fd76
    PUSH EAX                            ; 0055fd7d
    PUSH 0x6430c5                       ; 0055fd7e | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x3e98]    ; 0055fd83
    MOV EDX,0xffffffff                  ; 0055fd8a
    PUSH ECX                            ; 0055fd8f
    MOV dword ptr [ESP + 0x3e98],EDX    ; 0055fd90
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055fd97
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0055fd9c
    MOV ESI,dword ptr [ESP + 0x3e88]    ; 0055fd9f
    CMP ESI,0x1                         ; 0055fda6
    JL 0x0055fdb7                       ; 0055fda9
        ;   XREF to: 0055fdb7 (CONDITIONAL_JUMP)  ; LAB_0055fdb7
    ADD dword ptr [ESP + 0x3e8c],ESI    ; 0055fdab
    JMP 0x0055fd30                      ; 0055fdb2
        ;   XREF to: 0055fd30 (UNCONDITIONAL_JUMP)  ; LAB_0055fd30
    PUSH 0x6430cc                       ; 0055fdb7 | = "Error parsing walkTo command parms"
        ;   Label: LAB_0055fdb7
    PUSH 0x310eca0                      ; 0055fdbc | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fdc1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055fdc6
    JMP 0x0055a98c                      ; 0055fdc9
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x823c14                       ; 0055fdce | g_CCharacterClassInfo
        ;   Label: LAB_0055fdce
    MOV EAX,[0x00823c4c]                ; 0055fdd3 | g_CCharacterClassInfo.name_hash
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0055fdd8
    PUSH EAX                            ; 0055fddf
    LEA EAX,[ESP + 0x13e4]              ; 0055fde0
    INC EDX                             ; 0055fde7
    PUSH EAX                            ; 0055fde8
    MOV dword ptr [ESP + 0x3e98],EDX    ; 0055fde9
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055fdf0
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0055fdf5
    ADD ESP,0xc                         ; 0055fdf7
    TEST EAX,EAX                        ; 0055fdfa
    JNZ 0x0055fe10                      ; 0055fdfc
        ;   XREF to: 0055fe10 (CONDITIONAL_JUMP)  ; LAB_0055fe10
    CMP dword ptr [0x0310f4ac],0x0      ; 0055fdfe | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055fe05
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055fe0b
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    PUSH 0x821ff8                       ; 0055fe10 | g_CDemonActorClassInfo
        ;   Label: LAB_0055fe10
    MOV ECX,dword ptr [0x00822030]      ; 0055fe15 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0055fe1b
    LEA EAX,[ESP + 0x2834]              ; 0055fe1c
    PUSH EAX                            ; 0055fe23
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055fe24
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055fe29
    TEST EAX,EAX                        ; 0055fe2c
    JNZ 0x0055fe42                      ; 0055fe2e
        ;   XREF to: 0055fe42 (CONDITIONAL_JUMP)  ; LAB_0055fe42
    CMP dword ptr [0x0310f4ac],0x0      ; 0055fe30 | g_ActorLookedUpByVariable
    JNZ 0x0055a8d4                      ; 0055fe37
        ;   XREF to: 0055a8d4 (CONDITIONAL_JUMP)  ; LAB_0055a8d4
    JMP 0x0055a98c                      ; 0055fe3d
        ;   XREF to: 0055a98c (UNCONDITIONAL_JUMP)  ; LAB_0055a98c
    CMP dword ptr [0x0310ec9c],0x0      ; 0055fe42 | g_ScriptEventsEnabled
        ;   Label: LAB_0055fe42
    JNZ 0x0055a8bb                      ; 0055fe49
        ;   XREF to: 0055a8bb (CONDITIONAL_JUMP)  ; LAB_0055a8bb
    PUSH dword ptr [ESP + 0x3f8c]       ; 0055fe4f
    PUSH dword ptr [ESP + 0x3f8c]       ; 0055fe56
    PUSH EAX                            ; 0055fe5d
    MOV EDX,dword ptr [ESI + 0x154]     ; 0055fe5e
    PUSH ESI                            ; 0055fe64
    CALL dword ptr [EDX + 0x144]        ; 0055fe65
    ADD ESP,0x10                        ; 0055fe6b
    JMP 0x0055a8bb                      ; 0055fe6e
        ;   XREF to: 0055a8bb (UNCONDITIONAL_JUMP)  ; LAB_0055a8bb
    MOV EBX,dword ptr [ESP + 0x3e84]    ; 0055fe73
        ;   Label: LAB_0055fe73
    PUSH EBX                            ; 0055fe7a
    PUSH EAX                            ; 0055fe7b | s_EmptyChar_00641c5a
    PUSH 0x64313a                       ; 0055fe7c | = "Extra characters \"%s\" on line %d"
    PUSH 0x310eca0                      ; 0055fe81 | g_ScriptErrorBuffer
    MOV EDI,0xffffffff                  ; 0055fe86
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055fe8b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055fe90
    MOV dword ptr [ESP + 0x3e94],EDI    ; 0055fe93
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 0055fe9a
    MOV ESP,EBP                         ; 0055fea1
    POP EBP                             ; 0055fea3
    POP EDI                             ; 0055fea4
    POP ESI                             ; 0055fea5
    POP EBX                             ; 0055fea6
    RET                                 ; 0055fea7
    PUSH 0x64315b                       ; 0055fea8 | = "Overrun past the end of the script."
        ;   Label: LAB_0055fea8
    PUSH 0x310eca0                      ; 0055fead | g_ScriptErrorBuffer
    MOV EDI,0xffffffff                  ; 0055feb2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055feb7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0055febc
    MOV dword ptr [ESP + 0x3e94],EDI    ; 0055febf
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 0055fec6
    MOV ESP,EBP                         ; 0055fecd
    POP EBP                             ; 0055fecf
    POP EDI                             ; 0055fed0
    POP ESI                             ; 0055fed1
    POP EBX                             ; 0055fed2
    RET                                 ; 0055fed3
    TEST EAX,EAX                        ; 0055fed4
        ;   Label: LAB_0055fed4
    JL 0x0055a908                       ; 0055fed6
        ;   XREF to: 0055a908 (CONDITIONAL_JUMP)  ; LAB_0055a908
    MOV EAX,dword ptr [ESP + 0x3e98]    ; 0055fedc
    MOV dword ptr [EBX + 0x48],EAX      ; 0055fee3
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 0055fee6
    MOV ESP,EBP                         ; 0055feed
    POP EBP                             ; 0055feef
    POP EDI                             ; 0055fef0
    POP ESI                             ; 0055fef1
    POP EBX                             ; 0055fef2
    RET                                 ; 0055fef3

